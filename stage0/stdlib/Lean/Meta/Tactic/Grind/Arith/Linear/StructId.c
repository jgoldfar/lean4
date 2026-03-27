// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Linear.StructId
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.OrderInsts import Lean.Meta.Tactic.Grind.Arith.Cutsat.ToInt import Lean.Meta.Tactic.Grind.Arith.CommRing.RingId import Lean.Meta.Tactic.Grind.Arith.Linear.Var import Lean.Meta.Tactic.Grind.Arith.Insts import Init.Grind.Module.Envelope
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
uint64_t l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_synthInstanceMeta_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
extern lean_object* l_Lean_Nat_mkType;
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_isDefEqD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Int_mkType;
lean_object* l_Lean_Meta_Grind_Arith_Linear_mkVar(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_Linear_linearExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDecLevel_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCommRingId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkLawfulOrderLTInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(lean_object*, lean_object*);
lean_object* lean_grind_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_Meta_Grind_mkIsPreorderInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkIsPartialOrderInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkIsLinearOrderInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkNumeral(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_getIsCharInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getDecLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocessConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocessConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "`grind linarith` expected"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "\nto be definitionally equal to"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isNonTrivialIsCharInst(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isNonTrivialIsCharInst___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isCutsatType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isCutsatType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getCommRingInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getCommRingInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "CommRing"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toRing"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(205, 3, 54, 198, 92, 149, 38, 227)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(247, 129, 99, 43, 16, 237, 154, 169)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Ring"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "toIntModule"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(69, 160, 55, 74, 32, 205, 206, 212)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "IntModule"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "toSemiring"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(196, 225, 111, 69, 82, 38, 249, 149)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 231, 134, 53, 190, 181, 242, 194)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Semiring"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 150, 10, 46, 185, 54, 59, 167)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "One"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 85, 184, 168, 121, 55, 74, 19)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "one"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(19, 85, 184, 168, 121, 55, 74, 19)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(31, 134, 200, 93, 163, 253, 252, 128)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "OrderedRing"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(245, 123, 155, 51, 122, 17, 247, 247)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 92, .m_capacity = 92, .m_length = 91, .m_data = "type has a `Preorder` and is a `Semiring`, but is not an ordered ring, failed to synthesize"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "NatModule"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(134, 252, 171, 186, 15, 174, 251, 179)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "NoNatZeroDivisors"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 29, 6, 12, 7, 77, 98, 78)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "HSMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__0_value),LEAN_SCALAR_PTR_LITERAL(226, 107, 25, 48, 80, 144, 236, 217)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "hSMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__0_value),LEAN_SCALAR_PTR_LITERAL(226, 107, 25, 48, 80, 144, 236, 217)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(23, 127, 6, 115, 121, 139, 223, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__2(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LE"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LT"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__6;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__10_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__9_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__10_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__11_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__12_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__11_value),LEAN_SCALAR_PTR_LITERAL(54, 235, 251, 9, 4, 74, 57, 164)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Zero"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__13_value),LEAN_SCALAR_PTR_LITERAL(192, 171, 244, 106, 217, 72, 118, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__14_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__15_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__13_value),LEAN_SCALAR_PTR_LITERAL(192, 171, 244, 106, 217, 72, 118, 253)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__16_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__15_value),LEAN_SCALAR_PTR_LITERAL(172, 37, 33, 120, 251, 36, 203, 36)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__16_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__17_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__17_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__18_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__19;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__20_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__17_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__21_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__20_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__21_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__22_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__22_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__23 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__23_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__24 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__24_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__22_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__25_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__24_value),LEAN_SCALAR_PTR_LITERAL(231, 253, 204, 163, 168, 77, 27, 58)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__25 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__25_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__26 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__26_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__26_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__27 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__27_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__28 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__28_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__26_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__29_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__28_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__29 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__29_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "AddCommMonoid"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__30 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__30_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toZero"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__31 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__31_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__32 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__32_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__33 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__33_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__33_value),LEAN_SCALAR_PTR_LITERAL(229, 81, 239, 34, 203, 244, 36, 133)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__34 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__34_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toSub"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__35 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__35_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instHSub"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__36 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__36_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__36_value),LEAN_SCALAR_PTR_LITERAL(32, 225, 92, 14, 170, 61, 170, 140)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__37 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__37_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toNeg"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__38 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__38_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "zsmul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__39 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__39_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instHSMul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__40 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__40_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__40_value),LEAN_SCALAR_PTR_LITERAL(131, 168, 246, 170, 1, 89, 173, 16)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__41 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__41_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__42;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "nsmul"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__43 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__43_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__44;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "le"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__45 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__45_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 149, 183, 186, 191, 145, 216, 115)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__46_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__45_value),LEAN_SCALAR_PTR_LITERAL(109, 14, 90, 172, 72, 170, 136, 101)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__46 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__46_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__47 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__47_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "IsPartialOrder"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__48 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__48_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "toIsPreorder"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__49 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__49_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__50_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__47_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__50_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__50_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__48_value),LEAN_SCALAR_PTR_LITERAL(196, 84, 36, 174, 137, 182, 135, 55)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__50_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__49_value),LEAN_SCALAR_PTR_LITERAL(75, 224, 25, 76, 51, 82, 222, 202)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__50 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__50_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "IsLinearOrder"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__51 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__51_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "toIsPartialOrder"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__52 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__52_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__53_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__47_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__53_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__53_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__51_value),LEAN_SCALAR_PTR_LITERAL(111, 211, 224, 54, 22, 32, 255, 113)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__53_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__52_value),LEAN_SCALAR_PTR_LITERAL(83, 108, 214, 71, 226, 119, 72, 107)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__53 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__53_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "toAddCommGroup"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__54 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__54_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__55_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__55_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__55_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__55_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__55_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__55_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__54_value),LEAN_SCALAR_PTR_LITERAL(205, 72, 3, 192, 99, 106, 67, 167)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__55 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__55_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "AddCommGroup"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__56 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__56_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "toAddCommMonoid"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__57 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__57_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__58_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__58_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__56_value),LEAN_SCALAR_PTR_LITERAL(64, 158, 132, 153, 136, 140, 172, 182)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__58_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__57_value),LEAN_SCALAR_PTR_LITERAL(143, 195, 31, 215, 150, 195, 138, 195)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__58 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__58_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Field"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__59 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__59_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__60_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__60_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__60_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__60_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__59_value),LEAN_SCALAR_PTR_LITERAL(69, 164, 44, 189, 207, 226, 143, 119)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__60 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__60_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__61 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__61_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__61_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__62 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__62_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__63 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__63_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__64_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__61_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__64_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__63_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__64 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__64_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "OrderedAdd"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__65 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__65_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__66_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__66_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__66_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__65_value),LEAN_SCALAR_PTR_LITERAL(93, 134, 71, 250, 19, 181, 172, 227)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__66 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__66_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "OfNatModule"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "Q"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 53, 51, 211, 82, 161, 6, 157)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(148, 228, 118, 74, 233, 69, 129, 118)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Add"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(123, 91, 0, 102, 155, 93, 69, 240)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "AddRightCancel"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(33, 101, 175, 31, 110, 234, 168, 33)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__6_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "toQ"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__8_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__8_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__8_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(74, 53, 51, 211, 82, 161, 6, 157)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__8_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__7_value),LEAN_SCALAR_PTR_LITERAL(100, 80, 29, 215, 2, 174, 123, 91)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__8_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__9_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__10_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__12;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__13;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "`grind` unexpected failure, failure to initialize auxiliary `IntModule`"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(lean_object* v_e_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_){
_start:
{
lean_object* v___x_13_; 
lean_inc(v_a_11_);
lean_inc_ref(v_a_10_);
lean_inc(v_a_9_);
lean_inc_ref(v_a_8_);
lean_inc(v_a_7_);
lean_inc_ref(v_a_6_);
lean_inc(v_a_5_);
lean_inc_ref(v_a_4_);
lean_inc(v_a_3_);
lean_inc(v_a_2_);
v___x_13_ = lean_grind_canon(v_e_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_, v_a_11_);
if (lean_obj_tag(v___x_13_) == 0)
{
lean_object* v_a_14_; lean_object* v___x_15_; 
v_a_14_ = lean_ctor_get(v___x_13_, 0);
lean_inc(v_a_14_);
lean_dec_ref(v___x_13_);
v___x_15_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_14_, v_a_7_);
return v___x_15_;
}
else
{
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess___boxed(lean_object* v_e_16_, lean_object* v_a_17_, lean_object* v_a_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_, lean_object* v_a_25_, lean_object* v_a_26_, lean_object* v_a_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v_e_16_, v_a_17_, v_a_18_, v_a_19_, v_a_20_, v_a_21_, v_a_22_, v_a_23_, v_a_24_, v_a_25_, v_a_26_);
lean_dec(v_a_26_);
lean_dec_ref(v_a_25_);
lean_dec(v_a_24_);
lean_dec_ref(v_a_23_);
lean_dec(v_a_22_);
lean_dec_ref(v_a_21_);
lean_dec(v_a_20_);
lean_dec_ref(v_a_19_);
lean_dec(v_a_18_);
lean_dec(v_a_17_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn(lean_object* v_fn_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v_fn_29_, v_a_30_, v_a_31_, v_a_32_, v_a_33_, v_a_34_, v_a_35_, v_a_36_, v_a_37_, v_a_38_, v_a_39_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn___boxed(lean_object* v_fn_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeFn(v_fn_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_, v_a_52_);
lean_dec(v_a_52_);
lean_dec_ref(v_a_51_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec(v_a_46_);
lean_dec_ref(v_a_45_);
lean_dec(v_a_44_);
lean_dec(v_a_43_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocessConst(lean_object* v_c_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v_c_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_);
if (lean_obj_tag(v___x_67_) == 0)
{
lean_object* v_a_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v_a_68_ = lean_ctor_get(v___x_67_, 0);
lean_inc(v_a_68_);
lean_dec_ref(v___x_67_);
v___x_69_ = lean_unsigned_to_nat(0u);
v___x_70_ = lean_box(0);
lean_inc(v_a_65_);
lean_inc_ref(v_a_64_);
lean_inc(v_a_63_);
lean_inc_ref(v_a_62_);
lean_inc(v_a_61_);
lean_inc_ref(v_a_60_);
lean_inc(v_a_59_);
lean_inc_ref(v_a_58_);
lean_inc(v_a_57_);
lean_inc(v_a_56_);
lean_inc(v_a_68_);
v___x_71_ = lean_grind_internalize(v_a_68_, v___x_69_, v___x_70_, v_a_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_);
if (lean_obj_tag(v___x_71_) == 0)
{
lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_78_; 
v_isSharedCheck_78_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_78_ == 0)
{
lean_object* v_unused_79_; 
v_unused_79_ = lean_ctor_get(v___x_71_, 0);
lean_dec(v_unused_79_);
v___x_73_ = v___x_71_;
v_isShared_74_ = v_isSharedCheck_78_;
goto v_resetjp_72_;
}
else
{
lean_dec(v___x_71_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_78_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v___x_76_; 
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 0, v_a_68_);
v___x_76_ = v___x_73_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v_a_68_);
v___x_76_ = v_reuseFailAlloc_77_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
return v___x_76_;
}
}
}
else
{
lean_object* v_a_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_87_; 
lean_dec(v_a_68_);
v_a_80_ = lean_ctor_get(v___x_71_, 0);
v_isSharedCheck_87_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_87_ == 0)
{
v___x_82_ = v___x_71_;
v_isShared_83_ = v_isSharedCheck_87_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_a_80_);
lean_dec(v___x_71_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_87_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_85_; 
if (v_isShared_83_ == 0)
{
v___x_85_ = v___x_82_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v_a_80_);
v___x_85_ = v_reuseFailAlloc_86_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
return v___x_85_;
}
}
}
}
else
{
return v___x_67_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocessConst___boxed(lean_object* v_c_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocessConst(v_c_88_, v_a_89_, v_a_90_, v_a_91_, v_a_92_, v_a_93_, v_a_94_, v_a_95_, v_a_96_, v_a_97_, v_a_98_);
lean_dec(v_a_98_);
lean_dec_ref(v_a_97_);
lean_dec(v_a_96_);
lean_dec_ref(v_a_95_);
lean_dec(v_a_94_);
lean_dec_ref(v_a_93_);
lean_dec(v_a_92_);
lean_dec_ref(v_a_91_);
lean_dec(v_a_90_);
lean_dec(v_a_89_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(lean_object* v_c_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_){
_start:
{
lean_object* v___x_113_; 
lean_inc(v_a_111_);
lean_inc_ref(v_a_110_);
lean_inc(v_a_109_);
lean_inc_ref(v_a_108_);
lean_inc(v_a_107_);
lean_inc_ref(v_a_106_);
lean_inc(v_a_105_);
lean_inc_ref(v_a_104_);
lean_inc(v_a_103_);
lean_inc(v_a_102_);
v___x_113_ = lean_grind_canon(v_c_101_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_object* v_a_114_; lean_object* v___x_115_; 
v_a_114_ = lean_ctor_get(v___x_113_, 0);
lean_inc(v_a_114_);
lean_dec_ref(v___x_113_);
v___x_115_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_114_, v_a_107_);
if (lean_obj_tag(v___x_115_) == 0)
{
lean_object* v_a_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v_a_116_ = lean_ctor_get(v___x_115_, 0);
lean_inc(v_a_116_);
lean_dec_ref(v___x_115_);
v___x_117_ = lean_unsigned_to_nat(0u);
v___x_118_ = lean_box(0);
lean_inc(v_a_111_);
lean_inc_ref(v_a_110_);
lean_inc(v_a_109_);
lean_inc_ref(v_a_108_);
lean_inc(v_a_107_);
lean_inc_ref(v_a_106_);
lean_inc(v_a_105_);
lean_inc_ref(v_a_104_);
lean_inc(v_a_103_);
lean_inc(v_a_102_);
lean_inc(v_a_116_);
v___x_119_ = lean_grind_internalize(v_a_116_, v___x_117_, v___x_118_, v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_);
if (lean_obj_tag(v___x_119_) == 0)
{
lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_126_; 
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_119_);
if (v_isSharedCheck_126_ == 0)
{
lean_object* v_unused_127_; 
v_unused_127_ = lean_ctor_get(v___x_119_, 0);
lean_dec(v_unused_127_);
v___x_121_ = v___x_119_;
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
else
{
lean_dec(v___x_119_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_124_; 
if (v_isShared_122_ == 0)
{
lean_ctor_set(v___x_121_, 0, v_a_116_);
v___x_124_ = v___x_121_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v_a_116_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
else
{
lean_object* v_a_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_135_; 
lean_dec(v_a_116_);
v_a_128_ = lean_ctor_get(v___x_119_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_119_);
if (v_isSharedCheck_135_ == 0)
{
v___x_130_ = v___x_119_;
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_a_128_);
lean_dec(v___x_119_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_133_; 
if (v_isShared_131_ == 0)
{
v___x_133_ = v___x_130_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_a_128_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
}
else
{
return v___x_115_;
}
}
else
{
return v___x_113_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst___boxed(lean_object* v_c_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(v_c_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_);
lean_dec(v_a_146_);
lean_dec_ref(v_a_145_);
lean_dec(v_a_144_);
lean_dec_ref(v_a_143_);
lean_dec(v_a_142_);
lean_dec_ref(v_a_141_);
lean_dec(v_a_140_);
lean_dec_ref(v_a_139_);
lean_dec(v_a_138_);
lean_dec(v_a_137_);
return v_res_148_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__1(void){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__0));
v___x_151_ = l_Lean_stringToMessageData(v___x_150_);
return v___x_151_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__3(void){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_153_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__2));
v___x_154_ = l_Lean_stringToMessageData(v___x_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(lean_object* v_a_155_, lean_object* v_b_156_){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_158_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__1);
v___x_159_ = l_Lean_indentExpr(v_a_155_);
v___x_160_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_158_);
lean_ctor_set(v___x_160_, 1, v___x_159_);
v___x_161_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___closed__3);
v___x_162_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_162_, 0, v___x_160_);
lean_ctor_set(v___x_162_, 1, v___x_161_);
v___x_163_ = l_Lean_indentExpr(v_b_156_);
v___x_164_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_162_);
lean_ctor_set(v___x_164_, 1, v___x_163_);
v___x_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
return v___x_165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg___boxed(lean_object* v_a_166_, lean_object* v_b_167_, lean_object* v_a_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(v_a_166_, v_b_167_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg(lean_object* v_a_170_, lean_object* v_b_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(v_a_170_, v_b_171_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___boxed(lean_object* v_a_178_, lean_object* v_b_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg(v_a_178_, v_b_179_, v_a_180_, v_a_181_, v_a_182_, v_a_183_);
lean_dec(v_a_183_);
lean_dec_ref(v_a_182_);
lean_dec(v_a_181_);
lean_dec_ref(v_a_180_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0(lean_object* v_msgData_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_){
_start:
{
lean_object* v___x_192_; lean_object* v_env_193_; lean_object* v___x_194_; lean_object* v_mctx_195_; lean_object* v_lctx_196_; lean_object* v_options_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_192_ = lean_st_ref_get(v___y_190_);
v_env_193_ = lean_ctor_get(v___x_192_, 0);
lean_inc_ref(v_env_193_);
lean_dec(v___x_192_);
v___x_194_ = lean_st_ref_get(v___y_188_);
v_mctx_195_ = lean_ctor_get(v___x_194_, 0);
lean_inc_ref(v_mctx_195_);
lean_dec(v___x_194_);
v_lctx_196_ = lean_ctor_get(v___y_187_, 2);
v_options_197_ = lean_ctor_get(v___y_189_, 2);
lean_inc_ref(v_options_197_);
lean_inc_ref(v_lctx_196_);
v___x_198_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_198_, 0, v_env_193_);
lean_ctor_set(v___x_198_, 1, v_mctx_195_);
lean_ctor_set(v___x_198_, 2, v_lctx_196_);
lean_ctor_set(v___x_198_, 3, v_options_197_);
v___x_199_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_199_, 0, v___x_198_);
lean_ctor_set(v___x_199_, 1, v_msgData_186_);
v___x_200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0___boxed(lean_object* v_msgData_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0(v_msgData_201_, v___y_202_, v___y_203_, v___y_204_, v___y_205_);
lean_dec(v___y_205_);
lean_dec_ref(v___y_204_);
lean_dec(v___y_203_);
lean_dec_ref(v___y_202_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg(lean_object* v_msg_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
lean_object* v_ref_214_; lean_object* v___x_215_; lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_224_; 
v_ref_214_ = lean_ctor_get(v___y_211_, 5);
v___x_215_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0(v_msg_208_, v___y_209_, v___y_210_, v___y_211_, v___y_212_);
v_a_216_ = lean_ctor_get(v___x_215_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_215_);
if (v_isSharedCheck_224_ == 0)
{
v___x_218_ = v___x_215_;
v_isShared_219_ = v_isSharedCheck_224_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_215_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_224_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_220_; lean_object* v___x_222_; 
lean_inc(v_ref_214_);
v___x_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_220_, 0, v_ref_214_);
lean_ctor_set(v___x_220_, 1, v_a_216_);
if (v_isShared_219_ == 0)
{
lean_ctor_set_tag(v___x_218_, 1);
lean_ctor_set(v___x_218_, 0, v___x_220_);
v___x_222_ = v___x_218_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___x_220_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg___boxed(lean_object* v_msg_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg(v_msg_225_, v___y_226_, v___y_227_, v___y_228_, v___y_229_);
lean_dec(v___y_229_);
lean_dec_ref(v___y_228_);
lean_dec(v___y_227_);
lean_dec_ref(v___y_226_);
return v_res_231_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(lean_object* v_a_232_, lean_object* v_b_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_){
_start:
{
lean_object* v___x_239_; 
lean_inc_ref(v_b_233_);
lean_inc_ref(v_a_232_);
v___x_239_ = l_Lean_Meta_isDefEqD(v_a_232_, v_b_233_, v_a_234_, v_a_235_, v_a_236_, v_a_237_);
if (lean_obj_tag(v___x_239_) == 0)
{
lean_object* v_a_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_252_; 
v_a_240_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_252_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_252_ == 0)
{
v___x_242_ = v___x_239_;
v_isShared_243_ = v_isSharedCheck_252_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_a_240_);
lean_dec(v___x_239_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_252_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
uint8_t v___x_244_; 
v___x_244_ = lean_unbox(v_a_240_);
lean_dec(v_a_240_);
if (v___x_244_ == 0)
{
lean_object* v___x_245_; lean_object* v_a_246_; lean_object* v___x_247_; 
lean_del_object(v___x_242_);
v___x_245_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(v_a_232_, v_b_233_);
v_a_246_ = lean_ctor_get(v___x_245_, 0);
lean_inc(v_a_246_);
lean_dec_ref(v___x_245_);
v___x_247_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg(v_a_246_, v_a_234_, v_a_235_, v_a_236_, v_a_237_);
return v___x_247_;
}
else
{
lean_object* v___x_248_; lean_object* v___x_250_; 
lean_dec_ref(v_b_233_);
lean_dec_ref(v_a_232_);
v___x_248_ = lean_box(0);
if (v_isShared_243_ == 0)
{
lean_ctor_set(v___x_242_, 0, v___x_248_);
v___x_250_ = v___x_242_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v___x_248_);
v___x_250_ = v_reuseFailAlloc_251_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
return v___x_250_;
}
}
}
}
else
{
lean_object* v_a_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_260_; 
lean_dec_ref(v_b_233_);
lean_dec_ref(v_a_232_);
v_a_253_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_260_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_260_ == 0)
{
v___x_255_ = v___x_239_;
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_a_253_);
lean_dec(v___x_239_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_260_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_258_; 
if (v_isShared_256_ == 0)
{
v___x_258_ = v___x_255_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_a_253_);
v___x_258_ = v_reuseFailAlloc_259_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
return v___x_258_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq___boxed(lean_object* v_a_261_, lean_object* v_b_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(v_a_261_, v_b_262_, v_a_263_, v_a_264_, v_a_265_, v_a_266_);
lean_dec(v_a_266_);
lean_dec_ref(v_a_265_);
lean_dec(v_a_264_);
lean_dec_ref(v_a_263_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0(lean_object* v_00_u03b1_269_, lean_object* v_msg_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_){
_start:
{
lean_object* v___x_276_; 
v___x_276_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___redArg(v_msg_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0___boxed(lean_object* v_00_u03b1_277_, lean_object* v_msg_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0(v_00_u03b1_277_, v_msg_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_);
lean_dec(v___y_282_);
lean_dec_ref(v___y_281_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0(lean_object* v_p_285_, lean_object* v_x_286_, size_t v_x_287_, size_t v_x_288_){
_start:
{
if (lean_obj_tag(v_x_286_) == 0)
{
lean_object* v_cs_289_; size_t v_j_290_; lean_object* v___x_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v_cs_289_ = lean_ctor_get(v_x_286_, 0);
v_j_290_ = lean_usize_shift_right(v_x_287_, v_x_288_);
v___x_291_ = lean_usize_to_nat(v_j_290_);
v___x_292_ = lean_array_get_size(v_cs_289_);
v___x_293_ = lean_nat_dec_lt(v___x_291_, v___x_292_);
if (v___x_293_ == 0)
{
lean_dec(v___x_291_);
lean_dec(v_p_285_);
return v_x_286_;
}
else
{
lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_311_; 
lean_inc_ref(v_cs_289_);
v_isSharedCheck_311_ = !lean_is_exclusive(v_x_286_);
if (v_isSharedCheck_311_ == 0)
{
lean_object* v_unused_312_; 
v_unused_312_ = lean_ctor_get(v_x_286_, 0);
lean_dec(v_unused_312_);
v___x_295_ = v_x_286_;
v_isShared_296_ = v_isSharedCheck_311_;
goto v_resetjp_294_;
}
else
{
lean_dec(v_x_286_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_311_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
size_t v___x_297_; size_t v___x_298_; size_t v___x_299_; size_t v_i_300_; size_t v___x_301_; size_t v_shift_302_; lean_object* v_v_303_; lean_object* v___x_304_; lean_object* v_xs_x27_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_309_; 
v___x_297_ = ((size_t)1ULL);
v___x_298_ = lean_usize_shift_left(v___x_297_, v_x_288_);
v___x_299_ = lean_usize_sub(v___x_298_, v___x_297_);
v_i_300_ = lean_usize_land(v_x_287_, v___x_299_);
v___x_301_ = ((size_t)5ULL);
v_shift_302_ = lean_usize_sub(v_x_288_, v___x_301_);
v_v_303_ = lean_array_fget(v_cs_289_, v___x_291_);
v___x_304_ = lean_box(0);
v_xs_x27_305_ = lean_array_fset(v_cs_289_, v___x_291_, v___x_304_);
v___x_306_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0(v_p_285_, v_v_303_, v_i_300_, v_shift_302_);
v___x_307_ = lean_array_fset(v_xs_x27_305_, v___x_291_, v___x_306_);
lean_dec(v___x_291_);
if (v_isShared_296_ == 0)
{
lean_ctor_set(v___x_295_, 0, v___x_307_);
v___x_309_ = v___x_295_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v___x_307_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
}
else
{
lean_object* v_vs_313_; lean_object* v___x_314_; lean_object* v___x_315_; uint8_t v___x_316_; 
v_vs_313_ = lean_ctor_get(v_x_286_, 0);
v___x_314_ = lean_usize_to_nat(v_x_287_);
v___x_315_ = lean_array_get_size(v_vs_313_);
v___x_316_ = lean_nat_dec_lt(v___x_314_, v___x_315_);
if (v___x_316_ == 0)
{
lean_dec(v___x_314_);
lean_dec(v_p_285_);
return v_x_286_;
}
else
{
lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_330_; 
lean_inc_ref(v_vs_313_);
v_isSharedCheck_330_ = !lean_is_exclusive(v_x_286_);
if (v_isSharedCheck_330_ == 0)
{
lean_object* v_unused_331_; 
v_unused_331_ = lean_ctor_get(v_x_286_, 0);
lean_dec(v_unused_331_);
v___x_318_ = v_x_286_;
v_isShared_319_ = v_isSharedCheck_330_;
goto v_resetjp_317_;
}
else
{
lean_dec(v_x_286_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_330_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v_v_320_; lean_object* v___x_321_; lean_object* v_xs_x27_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_328_; 
v_v_320_ = lean_array_fget(v_vs_313_, v___x_314_);
v___x_321_ = lean_box(0);
v_xs_x27_322_ = lean_array_fset(v_vs_313_, v___x_314_, v___x_321_);
v___x_323_ = lean_box(9);
v___x_324_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_324_, 0, v_p_285_);
lean_ctor_set(v___x_324_, 1, v___x_323_);
lean_ctor_set_uint8(v___x_324_, sizeof(void*)*2, v___x_316_);
v___x_325_ = l_Lean_PersistentArray_push___redArg(v_v_320_, v___x_324_);
v___x_326_ = lean_array_fset(v_xs_x27_322_, v___x_314_, v___x_325_);
lean_dec(v___x_314_);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 0, v___x_326_);
v___x_328_ = v___x_318_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v___x_326_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0___boxed(lean_object* v_p_332_, lean_object* v_x_333_, lean_object* v_x_334_, lean_object* v_x_335_){
_start:
{
size_t v_x_269__boxed_336_; size_t v_x_270__boxed_337_; lean_object* v_res_338_; 
v_x_269__boxed_336_ = lean_unbox_usize(v_x_334_);
lean_dec(v_x_334_);
v_x_270__boxed_337_ = lean_unbox_usize(v_x_335_);
lean_dec(v_x_335_);
v_res_338_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0(v_p_332_, v_x_333_, v_x_269__boxed_336_, v_x_270__boxed_337_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0(lean_object* v_p_339_, lean_object* v_t_340_, lean_object* v_i_341_){
_start:
{
lean_object* v_root_342_; lean_object* v_tail_343_; lean_object* v_size_344_; size_t v_shift_345_; lean_object* v_tailOff_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_372_; 
v_root_342_ = lean_ctor_get(v_t_340_, 0);
v_tail_343_ = lean_ctor_get(v_t_340_, 1);
v_size_344_ = lean_ctor_get(v_t_340_, 2);
v_shift_345_ = lean_ctor_get_usize(v_t_340_, 4);
v_tailOff_346_ = lean_ctor_get(v_t_340_, 3);
v_isSharedCheck_372_ = !lean_is_exclusive(v_t_340_);
if (v_isSharedCheck_372_ == 0)
{
v___x_348_ = v_t_340_;
v_isShared_349_ = v_isSharedCheck_372_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_tailOff_346_);
lean_inc(v_size_344_);
lean_inc(v_tail_343_);
lean_inc(v_root_342_);
lean_dec(v_t_340_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_372_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
uint8_t v___x_350_; 
v___x_350_ = lean_nat_dec_le(v_tailOff_346_, v_i_341_);
if (v___x_350_ == 0)
{
size_t v___x_351_; lean_object* v___x_352_; lean_object* v___x_354_; 
v___x_351_ = lean_usize_of_nat(v_i_341_);
v___x_352_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0_spec__0(v_p_339_, v_root_342_, v___x_351_, v_shift_345_);
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 0, v___x_352_);
v___x_354_ = v___x_348_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v___x_352_);
lean_ctor_set(v_reuseFailAlloc_355_, 1, v_tail_343_);
lean_ctor_set(v_reuseFailAlloc_355_, 2, v_size_344_);
lean_ctor_set(v_reuseFailAlloc_355_, 3, v_tailOff_346_);
lean_ctor_set_usize(v_reuseFailAlloc_355_, 4, v_shift_345_);
v___x_354_ = v_reuseFailAlloc_355_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
return v___x_354_;
}
}
else
{
lean_object* v___x_356_; lean_object* v___x_357_; uint8_t v___x_358_; 
v___x_356_ = lean_nat_sub(v_i_341_, v_tailOff_346_);
v___x_357_ = lean_array_get_size(v_tail_343_);
v___x_358_ = lean_nat_dec_lt(v___x_356_, v___x_357_);
if (v___x_358_ == 0)
{
lean_object* v___x_360_; 
lean_dec(v___x_356_);
lean_dec(v_p_339_);
if (v_isShared_349_ == 0)
{
v___x_360_ = v___x_348_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_root_342_);
lean_ctor_set(v_reuseFailAlloc_361_, 1, v_tail_343_);
lean_ctor_set(v_reuseFailAlloc_361_, 2, v_size_344_);
lean_ctor_set(v_reuseFailAlloc_361_, 3, v_tailOff_346_);
lean_ctor_set_usize(v_reuseFailAlloc_361_, 4, v_shift_345_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
return v___x_360_;
}
}
else
{
lean_object* v_v_362_; lean_object* v___x_363_; lean_object* v_xs_x27_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_370_; 
v_v_362_ = lean_array_fget(v_tail_343_, v___x_356_);
v___x_363_ = lean_box(0);
v_xs_x27_364_ = lean_array_fset(v_tail_343_, v___x_356_, v___x_363_);
v___x_365_ = lean_box(9);
v___x_366_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_366_, 0, v_p_339_);
lean_ctor_set(v___x_366_, 1, v___x_365_);
lean_ctor_set_uint8(v___x_366_, sizeof(void*)*2, v___x_358_);
v___x_367_ = l_Lean_PersistentArray_push___redArg(v_v_362_, v___x_366_);
v___x_368_ = lean_array_fset(v_xs_x27_364_, v___x_356_, v___x_367_);
lean_dec(v___x_356_);
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 1, v___x_368_);
v___x_370_ = v___x_348_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_root_342_);
lean_ctor_set(v_reuseFailAlloc_371_, 1, v___x_368_);
lean_ctor_set(v_reuseFailAlloc_371_, 2, v_size_344_);
lean_ctor_set(v_reuseFailAlloc_371_, 3, v_tailOff_346_);
lean_ctor_set_usize(v_reuseFailAlloc_371_, 4, v_shift_345_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0___boxed(lean_object* v_p_373_, lean_object* v_t_374_, lean_object* v_i_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0(v_p_373_, v_t_374_, v_i_375_);
lean_dec(v_i_375_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___lam__0(lean_object* v_a_377_, lean_object* v_p_378_, lean_object* v_one_379_, lean_object* v_s_380_){
_start:
{
lean_object* v_structs_381_; lean_object* v_typeIdOf_382_; lean_object* v_exprToStructId_383_; lean_object* v_exprToStructIdEntries_384_; lean_object* v_forbiddenNatModules_385_; lean_object* v_natStructs_386_; lean_object* v_natTypeIdOf_387_; lean_object* v_exprToNatStructId_388_; lean_object* v___x_389_; uint8_t v___x_390_; 
v_structs_381_ = lean_ctor_get(v_s_380_, 0);
v_typeIdOf_382_ = lean_ctor_get(v_s_380_, 1);
v_exprToStructId_383_ = lean_ctor_get(v_s_380_, 2);
v_exprToStructIdEntries_384_ = lean_ctor_get(v_s_380_, 3);
v_forbiddenNatModules_385_ = lean_ctor_get(v_s_380_, 4);
v_natStructs_386_ = lean_ctor_get(v_s_380_, 5);
v_natTypeIdOf_387_ = lean_ctor_get(v_s_380_, 6);
v_exprToNatStructId_388_ = lean_ctor_get(v_s_380_, 7);
v___x_389_ = lean_array_get_size(v_structs_381_);
v___x_390_ = lean_nat_dec_lt(v_a_377_, v___x_389_);
if (v___x_390_ == 0)
{
lean_dec(v_p_378_);
return v_s_380_;
}
else
{
lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_452_; 
lean_inc_ref(v_exprToNatStructId_388_);
lean_inc_ref(v_natTypeIdOf_387_);
lean_inc_ref(v_natStructs_386_);
lean_inc_ref(v_forbiddenNatModules_385_);
lean_inc_ref(v_exprToStructIdEntries_384_);
lean_inc_ref(v_exprToStructId_383_);
lean_inc_ref(v_typeIdOf_382_);
lean_inc_ref(v_structs_381_);
v_isSharedCheck_452_ = !lean_is_exclusive(v_s_380_);
if (v_isSharedCheck_452_ == 0)
{
lean_object* v_unused_453_; lean_object* v_unused_454_; lean_object* v_unused_455_; lean_object* v_unused_456_; lean_object* v_unused_457_; lean_object* v_unused_458_; lean_object* v_unused_459_; lean_object* v_unused_460_; 
v_unused_453_ = lean_ctor_get(v_s_380_, 7);
lean_dec(v_unused_453_);
v_unused_454_ = lean_ctor_get(v_s_380_, 6);
lean_dec(v_unused_454_);
v_unused_455_ = lean_ctor_get(v_s_380_, 5);
lean_dec(v_unused_455_);
v_unused_456_ = lean_ctor_get(v_s_380_, 4);
lean_dec(v_unused_456_);
v_unused_457_ = lean_ctor_get(v_s_380_, 3);
lean_dec(v_unused_457_);
v_unused_458_ = lean_ctor_get(v_s_380_, 2);
lean_dec(v_unused_458_);
v_unused_459_ = lean_ctor_get(v_s_380_, 1);
lean_dec(v_unused_459_);
v_unused_460_ = lean_ctor_get(v_s_380_, 0);
lean_dec(v_unused_460_);
v___x_392_ = v_s_380_;
v_isShared_393_ = v_isSharedCheck_452_;
goto v_resetjp_391_;
}
else
{
lean_dec(v_s_380_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_452_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v_v_394_; lean_object* v_id_395_; lean_object* v_ringId_x3f_396_; lean_object* v_type_397_; lean_object* v_u_398_; lean_object* v_intModuleInst_399_; lean_object* v_leInst_x3f_400_; lean_object* v_ltInst_x3f_401_; lean_object* v_lawfulOrderLTInst_x3f_402_; lean_object* v_isPreorderInst_x3f_403_; lean_object* v_orderedAddInst_x3f_404_; lean_object* v_isLinearInst_x3f_405_; lean_object* v_noNatDivInst_x3f_406_; lean_object* v_ringInst_x3f_407_; lean_object* v_commRingInst_x3f_408_; lean_object* v_orderedRingInst_x3f_409_; lean_object* v_fieldInst_x3f_410_; lean_object* v_charInst_x3f_411_; lean_object* v_zero_412_; lean_object* v_ofNatZero_413_; lean_object* v_one_x3f_414_; lean_object* v_leFn_x3f_415_; lean_object* v_ltFn_x3f_416_; lean_object* v_addFn_417_; lean_object* v_zsmulFn_418_; lean_object* v_nsmulFn_419_; lean_object* v_zsmulFn_x3f_420_; lean_object* v_nsmulFn_x3f_421_; lean_object* v_homomulFn_x3f_422_; lean_object* v_subFn_423_; lean_object* v_negFn_424_; lean_object* v_vars_425_; lean_object* v_varMap_426_; lean_object* v_lowers_427_; lean_object* v_uppers_428_; lean_object* v_diseqs_429_; lean_object* v_assignment_430_; uint8_t v_caseSplits_431_; lean_object* v_conflict_x3f_432_; lean_object* v_diseqSplits_433_; lean_object* v_elimEqs_434_; lean_object* v_elimStack_435_; lean_object* v_occurs_436_; lean_object* v_ignored_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_451_; 
v_v_394_ = lean_array_fget(v_structs_381_, v_a_377_);
v_id_395_ = lean_ctor_get(v_v_394_, 0);
v_ringId_x3f_396_ = lean_ctor_get(v_v_394_, 1);
v_type_397_ = lean_ctor_get(v_v_394_, 2);
v_u_398_ = lean_ctor_get(v_v_394_, 3);
v_intModuleInst_399_ = lean_ctor_get(v_v_394_, 4);
v_leInst_x3f_400_ = lean_ctor_get(v_v_394_, 5);
v_ltInst_x3f_401_ = lean_ctor_get(v_v_394_, 6);
v_lawfulOrderLTInst_x3f_402_ = lean_ctor_get(v_v_394_, 7);
v_isPreorderInst_x3f_403_ = lean_ctor_get(v_v_394_, 8);
v_orderedAddInst_x3f_404_ = lean_ctor_get(v_v_394_, 9);
v_isLinearInst_x3f_405_ = lean_ctor_get(v_v_394_, 10);
v_noNatDivInst_x3f_406_ = lean_ctor_get(v_v_394_, 11);
v_ringInst_x3f_407_ = lean_ctor_get(v_v_394_, 12);
v_commRingInst_x3f_408_ = lean_ctor_get(v_v_394_, 13);
v_orderedRingInst_x3f_409_ = lean_ctor_get(v_v_394_, 14);
v_fieldInst_x3f_410_ = lean_ctor_get(v_v_394_, 15);
v_charInst_x3f_411_ = lean_ctor_get(v_v_394_, 16);
v_zero_412_ = lean_ctor_get(v_v_394_, 17);
v_ofNatZero_413_ = lean_ctor_get(v_v_394_, 18);
v_one_x3f_414_ = lean_ctor_get(v_v_394_, 19);
v_leFn_x3f_415_ = lean_ctor_get(v_v_394_, 20);
v_ltFn_x3f_416_ = lean_ctor_get(v_v_394_, 21);
v_addFn_417_ = lean_ctor_get(v_v_394_, 22);
v_zsmulFn_418_ = lean_ctor_get(v_v_394_, 23);
v_nsmulFn_419_ = lean_ctor_get(v_v_394_, 24);
v_zsmulFn_x3f_420_ = lean_ctor_get(v_v_394_, 25);
v_nsmulFn_x3f_421_ = lean_ctor_get(v_v_394_, 26);
v_homomulFn_x3f_422_ = lean_ctor_get(v_v_394_, 27);
v_subFn_423_ = lean_ctor_get(v_v_394_, 28);
v_negFn_424_ = lean_ctor_get(v_v_394_, 29);
v_vars_425_ = lean_ctor_get(v_v_394_, 30);
v_varMap_426_ = lean_ctor_get(v_v_394_, 31);
v_lowers_427_ = lean_ctor_get(v_v_394_, 32);
v_uppers_428_ = lean_ctor_get(v_v_394_, 33);
v_diseqs_429_ = lean_ctor_get(v_v_394_, 34);
v_assignment_430_ = lean_ctor_get(v_v_394_, 35);
v_caseSplits_431_ = lean_ctor_get_uint8(v_v_394_, sizeof(void*)*42);
v_conflict_x3f_432_ = lean_ctor_get(v_v_394_, 36);
v_diseqSplits_433_ = lean_ctor_get(v_v_394_, 37);
v_elimEqs_434_ = lean_ctor_get(v_v_394_, 38);
v_elimStack_435_ = lean_ctor_get(v_v_394_, 39);
v_occurs_436_ = lean_ctor_get(v_v_394_, 40);
v_ignored_437_ = lean_ctor_get(v_v_394_, 41);
v_isSharedCheck_451_ = !lean_is_exclusive(v_v_394_);
if (v_isSharedCheck_451_ == 0)
{
v___x_439_ = v_v_394_;
v_isShared_440_ = v_isSharedCheck_451_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_ignored_437_);
lean_inc(v_occurs_436_);
lean_inc(v_elimStack_435_);
lean_inc(v_elimEqs_434_);
lean_inc(v_diseqSplits_433_);
lean_inc(v_conflict_x3f_432_);
lean_inc(v_assignment_430_);
lean_inc(v_diseqs_429_);
lean_inc(v_uppers_428_);
lean_inc(v_lowers_427_);
lean_inc(v_varMap_426_);
lean_inc(v_vars_425_);
lean_inc(v_negFn_424_);
lean_inc(v_subFn_423_);
lean_inc(v_homomulFn_x3f_422_);
lean_inc(v_nsmulFn_x3f_421_);
lean_inc(v_zsmulFn_x3f_420_);
lean_inc(v_nsmulFn_419_);
lean_inc(v_zsmulFn_418_);
lean_inc(v_addFn_417_);
lean_inc(v_ltFn_x3f_416_);
lean_inc(v_leFn_x3f_415_);
lean_inc(v_one_x3f_414_);
lean_inc(v_ofNatZero_413_);
lean_inc(v_zero_412_);
lean_inc(v_charInst_x3f_411_);
lean_inc(v_fieldInst_x3f_410_);
lean_inc(v_orderedRingInst_x3f_409_);
lean_inc(v_commRingInst_x3f_408_);
lean_inc(v_ringInst_x3f_407_);
lean_inc(v_noNatDivInst_x3f_406_);
lean_inc(v_isLinearInst_x3f_405_);
lean_inc(v_orderedAddInst_x3f_404_);
lean_inc(v_isPreorderInst_x3f_403_);
lean_inc(v_lawfulOrderLTInst_x3f_402_);
lean_inc(v_ltInst_x3f_401_);
lean_inc(v_leInst_x3f_400_);
lean_inc(v_intModuleInst_399_);
lean_inc(v_u_398_);
lean_inc(v_type_397_);
lean_inc(v_ringId_x3f_396_);
lean_inc(v_id_395_);
lean_dec(v_v_394_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_451_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_441_; lean_object* v_xs_x27_442_; lean_object* v___x_443_; lean_object* v___x_445_; 
v___x_441_ = lean_box(0);
v_xs_x27_442_ = lean_array_fset(v_structs_381_, v_a_377_, v___x_441_);
v___x_443_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne_spec__0(v_p_378_, v_lowers_427_, v_one_379_);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 32, v___x_443_);
v___x_445_ = v___x_439_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_id_395_);
lean_ctor_set(v_reuseFailAlloc_450_, 1, v_ringId_x3f_396_);
lean_ctor_set(v_reuseFailAlloc_450_, 2, v_type_397_);
lean_ctor_set(v_reuseFailAlloc_450_, 3, v_u_398_);
lean_ctor_set(v_reuseFailAlloc_450_, 4, v_intModuleInst_399_);
lean_ctor_set(v_reuseFailAlloc_450_, 5, v_leInst_x3f_400_);
lean_ctor_set(v_reuseFailAlloc_450_, 6, v_ltInst_x3f_401_);
lean_ctor_set(v_reuseFailAlloc_450_, 7, v_lawfulOrderLTInst_x3f_402_);
lean_ctor_set(v_reuseFailAlloc_450_, 8, v_isPreorderInst_x3f_403_);
lean_ctor_set(v_reuseFailAlloc_450_, 9, v_orderedAddInst_x3f_404_);
lean_ctor_set(v_reuseFailAlloc_450_, 10, v_isLinearInst_x3f_405_);
lean_ctor_set(v_reuseFailAlloc_450_, 11, v_noNatDivInst_x3f_406_);
lean_ctor_set(v_reuseFailAlloc_450_, 12, v_ringInst_x3f_407_);
lean_ctor_set(v_reuseFailAlloc_450_, 13, v_commRingInst_x3f_408_);
lean_ctor_set(v_reuseFailAlloc_450_, 14, v_orderedRingInst_x3f_409_);
lean_ctor_set(v_reuseFailAlloc_450_, 15, v_fieldInst_x3f_410_);
lean_ctor_set(v_reuseFailAlloc_450_, 16, v_charInst_x3f_411_);
lean_ctor_set(v_reuseFailAlloc_450_, 17, v_zero_412_);
lean_ctor_set(v_reuseFailAlloc_450_, 18, v_ofNatZero_413_);
lean_ctor_set(v_reuseFailAlloc_450_, 19, v_one_x3f_414_);
lean_ctor_set(v_reuseFailAlloc_450_, 20, v_leFn_x3f_415_);
lean_ctor_set(v_reuseFailAlloc_450_, 21, v_ltFn_x3f_416_);
lean_ctor_set(v_reuseFailAlloc_450_, 22, v_addFn_417_);
lean_ctor_set(v_reuseFailAlloc_450_, 23, v_zsmulFn_418_);
lean_ctor_set(v_reuseFailAlloc_450_, 24, v_nsmulFn_419_);
lean_ctor_set(v_reuseFailAlloc_450_, 25, v_zsmulFn_x3f_420_);
lean_ctor_set(v_reuseFailAlloc_450_, 26, v_nsmulFn_x3f_421_);
lean_ctor_set(v_reuseFailAlloc_450_, 27, v_homomulFn_x3f_422_);
lean_ctor_set(v_reuseFailAlloc_450_, 28, v_subFn_423_);
lean_ctor_set(v_reuseFailAlloc_450_, 29, v_negFn_424_);
lean_ctor_set(v_reuseFailAlloc_450_, 30, v_vars_425_);
lean_ctor_set(v_reuseFailAlloc_450_, 31, v_varMap_426_);
lean_ctor_set(v_reuseFailAlloc_450_, 32, v___x_443_);
lean_ctor_set(v_reuseFailAlloc_450_, 33, v_uppers_428_);
lean_ctor_set(v_reuseFailAlloc_450_, 34, v_diseqs_429_);
lean_ctor_set(v_reuseFailAlloc_450_, 35, v_assignment_430_);
lean_ctor_set(v_reuseFailAlloc_450_, 36, v_conflict_x3f_432_);
lean_ctor_set(v_reuseFailAlloc_450_, 37, v_diseqSplits_433_);
lean_ctor_set(v_reuseFailAlloc_450_, 38, v_elimEqs_434_);
lean_ctor_set(v_reuseFailAlloc_450_, 39, v_elimStack_435_);
lean_ctor_set(v_reuseFailAlloc_450_, 40, v_occurs_436_);
lean_ctor_set(v_reuseFailAlloc_450_, 41, v_ignored_437_);
lean_ctor_set_uint8(v_reuseFailAlloc_450_, sizeof(void*)*42, v_caseSplits_431_);
v___x_445_ = v_reuseFailAlloc_450_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
lean_object* v___x_446_; lean_object* v___x_448_; 
v___x_446_ = lean_array_fset(v_xs_x27_442_, v_a_377_, v___x_445_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 0, v___x_446_);
v___x_448_ = v___x_392_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___x_446_);
lean_ctor_set(v_reuseFailAlloc_449_, 1, v_typeIdOf_382_);
lean_ctor_set(v_reuseFailAlloc_449_, 2, v_exprToStructId_383_);
lean_ctor_set(v_reuseFailAlloc_449_, 3, v_exprToStructIdEntries_384_);
lean_ctor_set(v_reuseFailAlloc_449_, 4, v_forbiddenNatModules_385_);
lean_ctor_set(v_reuseFailAlloc_449_, 5, v_natStructs_386_);
lean_ctor_set(v_reuseFailAlloc_449_, 6, v_natTypeIdOf_387_);
lean_ctor_set(v_reuseFailAlloc_449_, 7, v_exprToNatStructId_388_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___lam__0___boxed(lean_object* v_a_461_, lean_object* v_p_462_, lean_object* v_one_463_, lean_object* v_s_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___lam__0(v_a_461_, v_p_462_, v_one_463_, v_s_464_);
lean_dec(v_one_463_);
lean_dec(v_a_461_);
return v_res_465_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0(void){
_start:
{
lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_466_ = lean_unsigned_to_nat(1u);
v___x_467_ = lean_nat_to_int(v___x_466_);
return v___x_467_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__1(void){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0);
v___x_469_ = lean_int_neg(v___x_468_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg(lean_object* v_one_470_, lean_object* v_a_471_, lean_object* v_a_472_){
_start:
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v_p_476_; lean_object* v___f_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_474_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__1);
v___x_475_ = lean_box(0);
lean_inc(v_one_470_);
v_p_476_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_p_476_, 0, v___x_474_);
lean_ctor_set(v_p_476_, 1, v_one_470_);
lean_ctor_set(v_p_476_, 2, v___x_475_);
lean_inc(v_a_471_);
v___f_477_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_477_, 0, v_a_471_);
lean_closure_set(v___f_477_, 1, v_p_476_);
lean_closure_set(v___f_477_, 2, v_one_470_);
v___x_478_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_479_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_478_, v___f_477_, v_a_472_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___boxed(lean_object* v_one_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg(v_one_480_, v_a_481_, v_a_482_);
lean_dec(v_a_482_);
lean_dec(v_a_481_);
return v_res_484_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne(lean_object* v_one_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg(v_one_485_, v_a_486_, v_a_487_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___boxed(lean_object* v_one_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne(v_one_499_, v_a_500_, v_a_501_, v_a_502_, v_a_503_, v_a_504_, v_a_505_, v_a_506_, v_a_507_, v_a_508_, v_a_509_, v_a_510_);
lean_dec(v_a_510_);
lean_dec_ref(v_a_509_);
lean_dec(v_a_508_);
lean_dec_ref(v_a_507_);
lean_dec(v_a_506_);
lean_dec_ref(v_a_505_);
lean_dec(v_a_504_);
lean_dec_ref(v_a_503_);
lean_dec(v_a_502_);
lean_dec(v_a_501_);
lean_dec(v_a_500_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0(lean_object* v_p_513_, lean_object* v_x_514_, size_t v_x_515_, size_t v_x_516_){
_start:
{
if (lean_obj_tag(v_x_514_) == 0)
{
lean_object* v_cs_517_; size_t v_j_518_; lean_object* v___x_519_; lean_object* v___x_520_; uint8_t v___x_521_; 
v_cs_517_ = lean_ctor_get(v_x_514_, 0);
v_j_518_ = lean_usize_shift_right(v_x_515_, v_x_516_);
v___x_519_ = lean_usize_to_nat(v_j_518_);
v___x_520_ = lean_array_get_size(v_cs_517_);
v___x_521_ = lean_nat_dec_lt(v___x_519_, v___x_520_);
if (v___x_521_ == 0)
{
lean_dec(v___x_519_);
lean_dec(v_p_513_);
return v_x_514_;
}
else
{
lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_539_; 
lean_inc_ref(v_cs_517_);
v_isSharedCheck_539_ = !lean_is_exclusive(v_x_514_);
if (v_isSharedCheck_539_ == 0)
{
lean_object* v_unused_540_; 
v_unused_540_ = lean_ctor_get(v_x_514_, 0);
lean_dec(v_unused_540_);
v___x_523_ = v_x_514_;
v_isShared_524_ = v_isSharedCheck_539_;
goto v_resetjp_522_;
}
else
{
lean_dec(v_x_514_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_539_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
size_t v___x_525_; size_t v___x_526_; size_t v___x_527_; size_t v_i_528_; size_t v___x_529_; size_t v_shift_530_; lean_object* v_v_531_; lean_object* v___x_532_; lean_object* v_xs_x27_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_537_; 
v___x_525_ = ((size_t)1ULL);
v___x_526_ = lean_usize_shift_left(v___x_525_, v_x_516_);
v___x_527_ = lean_usize_sub(v___x_526_, v___x_525_);
v_i_528_ = lean_usize_land(v_x_515_, v___x_527_);
v___x_529_ = ((size_t)5ULL);
v_shift_530_ = lean_usize_sub(v_x_516_, v___x_529_);
v_v_531_ = lean_array_fget(v_cs_517_, v___x_519_);
v___x_532_ = lean_box(0);
v_xs_x27_533_ = lean_array_fset(v_cs_517_, v___x_519_, v___x_532_);
v___x_534_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0(v_p_513_, v_v_531_, v_i_528_, v_shift_530_);
v___x_535_ = lean_array_fset(v_xs_x27_533_, v___x_519_, v___x_534_);
lean_dec(v___x_519_);
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 0, v___x_535_);
v___x_537_ = v___x_523_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v___x_535_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
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
lean_dec(v_p_513_);
return v_x_514_;
}
else
{
lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_558_; 
lean_inc_ref(v_vs_541_);
v_isSharedCheck_558_ = !lean_is_exclusive(v_x_514_);
if (v_isSharedCheck_558_ == 0)
{
lean_object* v_unused_559_; 
v_unused_559_ = lean_ctor_get(v_x_514_, 0);
lean_dec(v_unused_559_);
v___x_546_ = v_x_514_;
v_isShared_547_ = v_isSharedCheck_558_;
goto v_resetjp_545_;
}
else
{
lean_dec(v_x_514_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_558_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v_v_548_; lean_object* v___x_549_; lean_object* v_xs_x27_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_556_; 
v_v_548_ = lean_array_fget(v_vs_541_, v___x_542_);
v___x_549_ = lean_box(0);
v_xs_x27_550_ = lean_array_fset(v_vs_541_, v___x_542_, v___x_549_);
v___x_551_ = lean_box(6);
v___x_552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_552_, 0, v_p_513_);
lean_ctor_set(v___x_552_, 1, v___x_551_);
v___x_553_ = l_Lean_PersistentArray_push___redArg(v_v_548_, v___x_552_);
v___x_554_ = lean_array_fset(v_xs_x27_550_, v___x_542_, v___x_553_);
lean_dec(v___x_542_);
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 0, v___x_554_);
v___x_556_ = v___x_546_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v___x_554_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0___boxed(lean_object* v_p_560_, lean_object* v_x_561_, lean_object* v_x_562_, lean_object* v_x_563_){
_start:
{
size_t v_x_258__boxed_564_; size_t v_x_259__boxed_565_; lean_object* v_res_566_; 
v_x_258__boxed_564_ = lean_unbox_usize(v_x_562_);
lean_dec(v_x_562_);
v_x_259__boxed_565_ = lean_unbox_usize(v_x_563_);
lean_dec(v_x_563_);
v_res_566_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0(v_p_560_, v_x_561_, v_x_258__boxed_564_, v_x_259__boxed_565_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0(lean_object* v_p_567_, lean_object* v_t_568_, lean_object* v_i_569_){
_start:
{
lean_object* v_root_570_; lean_object* v_tail_571_; lean_object* v_size_572_; size_t v_shift_573_; lean_object* v_tailOff_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_600_; 
v_root_570_ = lean_ctor_get(v_t_568_, 0);
v_tail_571_ = lean_ctor_get(v_t_568_, 1);
v_size_572_ = lean_ctor_get(v_t_568_, 2);
v_shift_573_ = lean_ctor_get_usize(v_t_568_, 4);
v_tailOff_574_ = lean_ctor_get(v_t_568_, 3);
v_isSharedCheck_600_ = !lean_is_exclusive(v_t_568_);
if (v_isSharedCheck_600_ == 0)
{
v___x_576_ = v_t_568_;
v_isShared_577_ = v_isSharedCheck_600_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_tailOff_574_);
lean_inc(v_size_572_);
lean_inc(v_tail_571_);
lean_inc(v_root_570_);
lean_dec(v_t_568_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_600_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
uint8_t v___x_578_; 
v___x_578_ = lean_nat_dec_le(v_tailOff_574_, v_i_569_);
if (v___x_578_ == 0)
{
size_t v___x_579_; lean_object* v___x_580_; lean_object* v___x_582_; 
v___x_579_ = lean_usize_of_nat(v_i_569_);
v___x_580_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0_spec__0(v_p_567_, v_root_570_, v___x_579_, v_shift_573_);
if (v_isShared_577_ == 0)
{
lean_ctor_set(v___x_576_, 0, v___x_580_);
v___x_582_ = v___x_576_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v___x_580_);
lean_ctor_set(v_reuseFailAlloc_583_, 1, v_tail_571_);
lean_ctor_set(v_reuseFailAlloc_583_, 2, v_size_572_);
lean_ctor_set(v_reuseFailAlloc_583_, 3, v_tailOff_574_);
lean_ctor_set_usize(v_reuseFailAlloc_583_, 4, v_shift_573_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
else
{
lean_object* v___x_584_; lean_object* v___x_585_; uint8_t v___x_586_; 
v___x_584_ = lean_nat_sub(v_i_569_, v_tailOff_574_);
v___x_585_ = lean_array_get_size(v_tail_571_);
v___x_586_ = lean_nat_dec_lt(v___x_584_, v___x_585_);
if (v___x_586_ == 0)
{
lean_object* v___x_588_; 
lean_dec(v___x_584_);
lean_dec(v_p_567_);
if (v_isShared_577_ == 0)
{
v___x_588_ = v___x_576_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_root_570_);
lean_ctor_set(v_reuseFailAlloc_589_, 1, v_tail_571_);
lean_ctor_set(v_reuseFailAlloc_589_, 2, v_size_572_);
lean_ctor_set(v_reuseFailAlloc_589_, 3, v_tailOff_574_);
lean_ctor_set_usize(v_reuseFailAlloc_589_, 4, v_shift_573_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
return v___x_588_;
}
}
else
{
lean_object* v_v_590_; lean_object* v___x_591_; lean_object* v_xs_x27_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_598_; 
v_v_590_ = lean_array_fget(v_tail_571_, v___x_584_);
v___x_591_ = lean_box(0);
v_xs_x27_592_ = lean_array_fset(v_tail_571_, v___x_584_, v___x_591_);
v___x_593_ = lean_box(6);
v___x_594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_594_, 0, v_p_567_);
lean_ctor_set(v___x_594_, 1, v___x_593_);
v___x_595_ = l_Lean_PersistentArray_push___redArg(v_v_590_, v___x_594_);
v___x_596_ = lean_array_fset(v_xs_x27_592_, v___x_584_, v___x_595_);
lean_dec(v___x_584_);
if (v_isShared_577_ == 0)
{
lean_ctor_set(v___x_576_, 1, v___x_596_);
v___x_598_ = v___x_576_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_root_570_);
lean_ctor_set(v_reuseFailAlloc_599_, 1, v___x_596_);
lean_ctor_set(v_reuseFailAlloc_599_, 2, v_size_572_);
lean_ctor_set(v_reuseFailAlloc_599_, 3, v_tailOff_574_);
lean_ctor_set_usize(v_reuseFailAlloc_599_, 4, v_shift_573_);
v___x_598_ = v_reuseFailAlloc_599_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
return v___x_598_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0___boxed(lean_object* v_p_601_, lean_object* v_t_602_, lean_object* v_i_603_){
_start:
{
lean_object* v_res_604_; 
v_res_604_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0(v_p_601_, v_t_602_, v_i_603_);
lean_dec(v_i_603_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___lam__0(lean_object* v_a_605_, lean_object* v_p_606_, lean_object* v_one_607_, lean_object* v_s_608_){
_start:
{
lean_object* v_structs_609_; lean_object* v_typeIdOf_610_; lean_object* v_exprToStructId_611_; lean_object* v_exprToStructIdEntries_612_; lean_object* v_forbiddenNatModules_613_; lean_object* v_natStructs_614_; lean_object* v_natTypeIdOf_615_; lean_object* v_exprToNatStructId_616_; lean_object* v___x_617_; uint8_t v___x_618_; 
v_structs_609_ = lean_ctor_get(v_s_608_, 0);
v_typeIdOf_610_ = lean_ctor_get(v_s_608_, 1);
v_exprToStructId_611_ = lean_ctor_get(v_s_608_, 2);
v_exprToStructIdEntries_612_ = lean_ctor_get(v_s_608_, 3);
v_forbiddenNatModules_613_ = lean_ctor_get(v_s_608_, 4);
v_natStructs_614_ = lean_ctor_get(v_s_608_, 5);
v_natTypeIdOf_615_ = lean_ctor_get(v_s_608_, 6);
v_exprToNatStructId_616_ = lean_ctor_get(v_s_608_, 7);
v___x_617_ = lean_array_get_size(v_structs_609_);
v___x_618_ = lean_nat_dec_lt(v_a_605_, v___x_617_);
if (v___x_618_ == 0)
{
lean_dec(v_p_606_);
return v_s_608_;
}
else
{
lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_680_; 
lean_inc_ref(v_exprToNatStructId_616_);
lean_inc_ref(v_natTypeIdOf_615_);
lean_inc_ref(v_natStructs_614_);
lean_inc_ref(v_forbiddenNatModules_613_);
lean_inc_ref(v_exprToStructIdEntries_612_);
lean_inc_ref(v_exprToStructId_611_);
lean_inc_ref(v_typeIdOf_610_);
lean_inc_ref(v_structs_609_);
v_isSharedCheck_680_ = !lean_is_exclusive(v_s_608_);
if (v_isSharedCheck_680_ == 0)
{
lean_object* v_unused_681_; lean_object* v_unused_682_; lean_object* v_unused_683_; lean_object* v_unused_684_; lean_object* v_unused_685_; lean_object* v_unused_686_; lean_object* v_unused_687_; lean_object* v_unused_688_; 
v_unused_681_ = lean_ctor_get(v_s_608_, 7);
lean_dec(v_unused_681_);
v_unused_682_ = lean_ctor_get(v_s_608_, 6);
lean_dec(v_unused_682_);
v_unused_683_ = lean_ctor_get(v_s_608_, 5);
lean_dec(v_unused_683_);
v_unused_684_ = lean_ctor_get(v_s_608_, 4);
lean_dec(v_unused_684_);
v_unused_685_ = lean_ctor_get(v_s_608_, 3);
lean_dec(v_unused_685_);
v_unused_686_ = lean_ctor_get(v_s_608_, 2);
lean_dec(v_unused_686_);
v_unused_687_ = lean_ctor_get(v_s_608_, 1);
lean_dec(v_unused_687_);
v_unused_688_ = lean_ctor_get(v_s_608_, 0);
lean_dec(v_unused_688_);
v___x_620_ = v_s_608_;
v_isShared_621_ = v_isSharedCheck_680_;
goto v_resetjp_619_;
}
else
{
lean_dec(v_s_608_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_680_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v_v_622_; lean_object* v_id_623_; lean_object* v_ringId_x3f_624_; lean_object* v_type_625_; lean_object* v_u_626_; lean_object* v_intModuleInst_627_; lean_object* v_leInst_x3f_628_; lean_object* v_ltInst_x3f_629_; lean_object* v_lawfulOrderLTInst_x3f_630_; lean_object* v_isPreorderInst_x3f_631_; lean_object* v_orderedAddInst_x3f_632_; lean_object* v_isLinearInst_x3f_633_; lean_object* v_noNatDivInst_x3f_634_; lean_object* v_ringInst_x3f_635_; lean_object* v_commRingInst_x3f_636_; lean_object* v_orderedRingInst_x3f_637_; lean_object* v_fieldInst_x3f_638_; lean_object* v_charInst_x3f_639_; lean_object* v_zero_640_; lean_object* v_ofNatZero_641_; lean_object* v_one_x3f_642_; lean_object* v_leFn_x3f_643_; lean_object* v_ltFn_x3f_644_; lean_object* v_addFn_645_; lean_object* v_zsmulFn_646_; lean_object* v_nsmulFn_647_; lean_object* v_zsmulFn_x3f_648_; lean_object* v_nsmulFn_x3f_649_; lean_object* v_homomulFn_x3f_650_; lean_object* v_subFn_651_; lean_object* v_negFn_652_; lean_object* v_vars_653_; lean_object* v_varMap_654_; lean_object* v_lowers_655_; lean_object* v_uppers_656_; lean_object* v_diseqs_657_; lean_object* v_assignment_658_; uint8_t v_caseSplits_659_; lean_object* v_conflict_x3f_660_; lean_object* v_diseqSplits_661_; lean_object* v_elimEqs_662_; lean_object* v_elimStack_663_; lean_object* v_occurs_664_; lean_object* v_ignored_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_679_; 
v_v_622_ = lean_array_fget(v_structs_609_, v_a_605_);
v_id_623_ = lean_ctor_get(v_v_622_, 0);
v_ringId_x3f_624_ = lean_ctor_get(v_v_622_, 1);
v_type_625_ = lean_ctor_get(v_v_622_, 2);
v_u_626_ = lean_ctor_get(v_v_622_, 3);
v_intModuleInst_627_ = lean_ctor_get(v_v_622_, 4);
v_leInst_x3f_628_ = lean_ctor_get(v_v_622_, 5);
v_ltInst_x3f_629_ = lean_ctor_get(v_v_622_, 6);
v_lawfulOrderLTInst_x3f_630_ = lean_ctor_get(v_v_622_, 7);
v_isPreorderInst_x3f_631_ = lean_ctor_get(v_v_622_, 8);
v_orderedAddInst_x3f_632_ = lean_ctor_get(v_v_622_, 9);
v_isLinearInst_x3f_633_ = lean_ctor_get(v_v_622_, 10);
v_noNatDivInst_x3f_634_ = lean_ctor_get(v_v_622_, 11);
v_ringInst_x3f_635_ = lean_ctor_get(v_v_622_, 12);
v_commRingInst_x3f_636_ = lean_ctor_get(v_v_622_, 13);
v_orderedRingInst_x3f_637_ = lean_ctor_get(v_v_622_, 14);
v_fieldInst_x3f_638_ = lean_ctor_get(v_v_622_, 15);
v_charInst_x3f_639_ = lean_ctor_get(v_v_622_, 16);
v_zero_640_ = lean_ctor_get(v_v_622_, 17);
v_ofNatZero_641_ = lean_ctor_get(v_v_622_, 18);
v_one_x3f_642_ = lean_ctor_get(v_v_622_, 19);
v_leFn_x3f_643_ = lean_ctor_get(v_v_622_, 20);
v_ltFn_x3f_644_ = lean_ctor_get(v_v_622_, 21);
v_addFn_645_ = lean_ctor_get(v_v_622_, 22);
v_zsmulFn_646_ = lean_ctor_get(v_v_622_, 23);
v_nsmulFn_647_ = lean_ctor_get(v_v_622_, 24);
v_zsmulFn_x3f_648_ = lean_ctor_get(v_v_622_, 25);
v_nsmulFn_x3f_649_ = lean_ctor_get(v_v_622_, 26);
v_homomulFn_x3f_650_ = lean_ctor_get(v_v_622_, 27);
v_subFn_651_ = lean_ctor_get(v_v_622_, 28);
v_negFn_652_ = lean_ctor_get(v_v_622_, 29);
v_vars_653_ = lean_ctor_get(v_v_622_, 30);
v_varMap_654_ = lean_ctor_get(v_v_622_, 31);
v_lowers_655_ = lean_ctor_get(v_v_622_, 32);
v_uppers_656_ = lean_ctor_get(v_v_622_, 33);
v_diseqs_657_ = lean_ctor_get(v_v_622_, 34);
v_assignment_658_ = lean_ctor_get(v_v_622_, 35);
v_caseSplits_659_ = lean_ctor_get_uint8(v_v_622_, sizeof(void*)*42);
v_conflict_x3f_660_ = lean_ctor_get(v_v_622_, 36);
v_diseqSplits_661_ = lean_ctor_get(v_v_622_, 37);
v_elimEqs_662_ = lean_ctor_get(v_v_622_, 38);
v_elimStack_663_ = lean_ctor_get(v_v_622_, 39);
v_occurs_664_ = lean_ctor_get(v_v_622_, 40);
v_ignored_665_ = lean_ctor_get(v_v_622_, 41);
v_isSharedCheck_679_ = !lean_is_exclusive(v_v_622_);
if (v_isSharedCheck_679_ == 0)
{
v___x_667_ = v_v_622_;
v_isShared_668_ = v_isSharedCheck_679_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_ignored_665_);
lean_inc(v_occurs_664_);
lean_inc(v_elimStack_663_);
lean_inc(v_elimEqs_662_);
lean_inc(v_diseqSplits_661_);
lean_inc(v_conflict_x3f_660_);
lean_inc(v_assignment_658_);
lean_inc(v_diseqs_657_);
lean_inc(v_uppers_656_);
lean_inc(v_lowers_655_);
lean_inc(v_varMap_654_);
lean_inc(v_vars_653_);
lean_inc(v_negFn_652_);
lean_inc(v_subFn_651_);
lean_inc(v_homomulFn_x3f_650_);
lean_inc(v_nsmulFn_x3f_649_);
lean_inc(v_zsmulFn_x3f_648_);
lean_inc(v_nsmulFn_647_);
lean_inc(v_zsmulFn_646_);
lean_inc(v_addFn_645_);
lean_inc(v_ltFn_x3f_644_);
lean_inc(v_leFn_x3f_643_);
lean_inc(v_one_x3f_642_);
lean_inc(v_ofNatZero_641_);
lean_inc(v_zero_640_);
lean_inc(v_charInst_x3f_639_);
lean_inc(v_fieldInst_x3f_638_);
lean_inc(v_orderedRingInst_x3f_637_);
lean_inc(v_commRingInst_x3f_636_);
lean_inc(v_ringInst_x3f_635_);
lean_inc(v_noNatDivInst_x3f_634_);
lean_inc(v_isLinearInst_x3f_633_);
lean_inc(v_orderedAddInst_x3f_632_);
lean_inc(v_isPreorderInst_x3f_631_);
lean_inc(v_lawfulOrderLTInst_x3f_630_);
lean_inc(v_ltInst_x3f_629_);
lean_inc(v_leInst_x3f_628_);
lean_inc(v_intModuleInst_627_);
lean_inc(v_u_626_);
lean_inc(v_type_625_);
lean_inc(v_ringId_x3f_624_);
lean_inc(v_id_623_);
lean_dec(v_v_622_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_679_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_669_; lean_object* v_xs_x27_670_; lean_object* v___x_671_; lean_object* v___x_673_; 
v___x_669_ = lean_box(0);
v_xs_x27_670_ = lean_array_fset(v_structs_609_, v_a_605_, v___x_669_);
v___x_671_ = l_Lean_PersistentArray_modify___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne_spec__0(v_p_606_, v_diseqs_657_, v_one_607_);
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 34, v___x_671_);
v___x_673_ = v___x_667_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v_id_623_);
lean_ctor_set(v_reuseFailAlloc_678_, 1, v_ringId_x3f_624_);
lean_ctor_set(v_reuseFailAlloc_678_, 2, v_type_625_);
lean_ctor_set(v_reuseFailAlloc_678_, 3, v_u_626_);
lean_ctor_set(v_reuseFailAlloc_678_, 4, v_intModuleInst_627_);
lean_ctor_set(v_reuseFailAlloc_678_, 5, v_leInst_x3f_628_);
lean_ctor_set(v_reuseFailAlloc_678_, 6, v_ltInst_x3f_629_);
lean_ctor_set(v_reuseFailAlloc_678_, 7, v_lawfulOrderLTInst_x3f_630_);
lean_ctor_set(v_reuseFailAlloc_678_, 8, v_isPreorderInst_x3f_631_);
lean_ctor_set(v_reuseFailAlloc_678_, 9, v_orderedAddInst_x3f_632_);
lean_ctor_set(v_reuseFailAlloc_678_, 10, v_isLinearInst_x3f_633_);
lean_ctor_set(v_reuseFailAlloc_678_, 11, v_noNatDivInst_x3f_634_);
lean_ctor_set(v_reuseFailAlloc_678_, 12, v_ringInst_x3f_635_);
lean_ctor_set(v_reuseFailAlloc_678_, 13, v_commRingInst_x3f_636_);
lean_ctor_set(v_reuseFailAlloc_678_, 14, v_orderedRingInst_x3f_637_);
lean_ctor_set(v_reuseFailAlloc_678_, 15, v_fieldInst_x3f_638_);
lean_ctor_set(v_reuseFailAlloc_678_, 16, v_charInst_x3f_639_);
lean_ctor_set(v_reuseFailAlloc_678_, 17, v_zero_640_);
lean_ctor_set(v_reuseFailAlloc_678_, 18, v_ofNatZero_641_);
lean_ctor_set(v_reuseFailAlloc_678_, 19, v_one_x3f_642_);
lean_ctor_set(v_reuseFailAlloc_678_, 20, v_leFn_x3f_643_);
lean_ctor_set(v_reuseFailAlloc_678_, 21, v_ltFn_x3f_644_);
lean_ctor_set(v_reuseFailAlloc_678_, 22, v_addFn_645_);
lean_ctor_set(v_reuseFailAlloc_678_, 23, v_zsmulFn_646_);
lean_ctor_set(v_reuseFailAlloc_678_, 24, v_nsmulFn_647_);
lean_ctor_set(v_reuseFailAlloc_678_, 25, v_zsmulFn_x3f_648_);
lean_ctor_set(v_reuseFailAlloc_678_, 26, v_nsmulFn_x3f_649_);
lean_ctor_set(v_reuseFailAlloc_678_, 27, v_homomulFn_x3f_650_);
lean_ctor_set(v_reuseFailAlloc_678_, 28, v_subFn_651_);
lean_ctor_set(v_reuseFailAlloc_678_, 29, v_negFn_652_);
lean_ctor_set(v_reuseFailAlloc_678_, 30, v_vars_653_);
lean_ctor_set(v_reuseFailAlloc_678_, 31, v_varMap_654_);
lean_ctor_set(v_reuseFailAlloc_678_, 32, v_lowers_655_);
lean_ctor_set(v_reuseFailAlloc_678_, 33, v_uppers_656_);
lean_ctor_set(v_reuseFailAlloc_678_, 34, v___x_671_);
lean_ctor_set(v_reuseFailAlloc_678_, 35, v_assignment_658_);
lean_ctor_set(v_reuseFailAlloc_678_, 36, v_conflict_x3f_660_);
lean_ctor_set(v_reuseFailAlloc_678_, 37, v_diseqSplits_661_);
lean_ctor_set(v_reuseFailAlloc_678_, 38, v_elimEqs_662_);
lean_ctor_set(v_reuseFailAlloc_678_, 39, v_elimStack_663_);
lean_ctor_set(v_reuseFailAlloc_678_, 40, v_occurs_664_);
lean_ctor_set(v_reuseFailAlloc_678_, 41, v_ignored_665_);
lean_ctor_set_uint8(v_reuseFailAlloc_678_, sizeof(void*)*42, v_caseSplits_659_);
v___x_673_ = v_reuseFailAlloc_678_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
lean_object* v___x_674_; lean_object* v___x_676_; 
v___x_674_ = lean_array_fset(v_xs_x27_670_, v_a_605_, v___x_673_);
if (v_isShared_621_ == 0)
{
lean_ctor_set(v___x_620_, 0, v___x_674_);
v___x_676_ = v___x_620_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v___x_674_);
lean_ctor_set(v_reuseFailAlloc_677_, 1, v_typeIdOf_610_);
lean_ctor_set(v_reuseFailAlloc_677_, 2, v_exprToStructId_611_);
lean_ctor_set(v_reuseFailAlloc_677_, 3, v_exprToStructIdEntries_612_);
lean_ctor_set(v_reuseFailAlloc_677_, 4, v_forbiddenNatModules_613_);
lean_ctor_set(v_reuseFailAlloc_677_, 5, v_natStructs_614_);
lean_ctor_set(v_reuseFailAlloc_677_, 6, v_natTypeIdOf_615_);
lean_ctor_set(v_reuseFailAlloc_677_, 7, v_exprToNatStructId_616_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___lam__0___boxed(lean_object* v_a_689_, lean_object* v_p_690_, lean_object* v_one_691_, lean_object* v_s_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___lam__0(v_a_689_, v_p_690_, v_one_691_, v_s_692_);
lean_dec(v_one_691_);
lean_dec(v_a_689_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg(lean_object* v_one_694_, lean_object* v_a_695_, lean_object* v_a_696_){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v_p_700_; lean_object* v___f_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_698_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg___closed__0);
v___x_699_ = lean_box(0);
lean_inc(v_one_694_);
v_p_700_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_p_700_, 0, v___x_698_);
lean_ctor_set(v_p_700_, 1, v_one_694_);
lean_ctor_set(v_p_700_, 2, v___x_699_);
lean_inc(v_a_695_);
v___f_701_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_701_, 0, v_a_695_);
lean_closure_set(v___f_701_, 1, v_p_700_);
lean_closure_set(v___f_701_, 2, v_one_694_);
v___x_702_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_703_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_702_, v___f_701_, v_a_696_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg___boxed(lean_object* v_one_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg(v_one_704_, v_a_705_, v_a_706_);
lean_dec(v_a_706_);
lean_dec(v_a_705_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne(lean_object* v_one_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_){
_start:
{
lean_object* v___x_722_; 
v___x_722_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg(v_one_709_, v_a_710_, v_a_711_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___boxed(lean_object* v_one_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne(v_one_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_, v_a_732_, v_a_733_, v_a_734_);
lean_dec(v_a_734_);
lean_dec_ref(v_a_733_);
lean_dec(v_a_732_);
lean_dec_ref(v_a_731_);
lean_dec(v_a_730_);
lean_dec_ref(v_a_729_);
lean_dec(v_a_728_);
lean_dec_ref(v_a_727_);
lean_dec(v_a_726_);
lean_dec(v_a_725_);
lean_dec(v_a_724_);
return v_res_736_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isNonTrivialIsCharInst(lean_object* v_isCharInst_x3f_737_){
_start:
{
if (lean_obj_tag(v_isCharInst_x3f_737_) == 0)
{
uint8_t v___x_738_; 
v___x_738_ = 0;
return v___x_738_;
}
else
{
lean_object* v_val_739_; lean_object* v_snd_740_; lean_object* v___x_741_; uint8_t v___x_742_; 
v_val_739_ = lean_ctor_get(v_isCharInst_x3f_737_, 0);
v_snd_740_ = lean_ctor_get(v_val_739_, 1);
v___x_741_ = lean_unsigned_to_nat(1u);
v___x_742_ = lean_nat_dec_eq(v_snd_740_, v___x_741_);
if (v___x_742_ == 0)
{
uint8_t v___x_743_; 
v___x_743_ = 1;
return v___x_743_;
}
else
{
uint8_t v___x_744_; 
v___x_744_ = 0;
return v___x_744_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isNonTrivialIsCharInst___boxed(lean_object* v_isCharInst_x3f_745_){
_start:
{
uint8_t v_res_746_; lean_object* v_r_747_; 
v_res_746_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isNonTrivialIsCharInst(v_isCharInst_x3f_745_);
lean_dec(v_isCharInst_x3f_745_);
v_r_747_ = lean_box(v_res_746_);
return v_r_747_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isCutsatType(lean_object* v_type_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_, lean_object* v_a_758_){
_start:
{
lean_object* v___x_764_; 
v___x_764_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_751_);
if (lean_obj_tag(v___x_764_) == 0)
{
lean_object* v_a_765_; uint8_t v_lia_766_; 
v_a_765_ = lean_ctor_get(v___x_764_, 0);
lean_inc(v_a_765_);
lean_dec_ref(v___x_764_);
v_lia_766_ = lean_ctor_get_uint8(v_a_765_, sizeof(void*)*11 + 23);
lean_dec(v_a_765_);
if (v_lia_766_ == 0)
{
lean_dec_ref(v_type_748_);
goto v___jp_760_;
}
else
{
lean_object* v___x_767_; 
v___x_767_ = l_Lean_Meta_Grind_Arith_Cutsat_isSupportedType(v_type_748_, v_a_749_, v_a_750_, v_a_751_, v_a_752_, v_a_753_, v_a_754_, v_a_755_, v_a_756_, v_a_757_, v_a_758_);
if (lean_obj_tag(v___x_767_) == 0)
{
lean_object* v_a_768_; uint8_t v___x_769_; 
v_a_768_ = lean_ctor_get(v___x_767_, 0);
lean_inc(v_a_768_);
v___x_769_ = lean_unbox(v_a_768_);
lean_dec(v_a_768_);
if (v___x_769_ == 0)
{
lean_dec_ref(v___x_767_);
goto v___jp_760_;
}
else
{
return v___x_767_;
}
}
else
{
return v___x_767_;
}
}
}
else
{
lean_object* v_a_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_777_; 
lean_dec_ref(v_type_748_);
v_a_770_ = lean_ctor_get(v___x_764_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_764_);
if (v_isSharedCheck_777_ == 0)
{
v___x_772_ = v___x_764_;
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_a_770_);
lean_dec(v___x_764_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_775_; 
if (v_isShared_773_ == 0)
{
v___x_775_ = v___x_772_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_a_770_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
}
v___jp_760_:
{
uint8_t v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_761_ = 0;
v___x_762_ = lean_box(v___x_761_);
v___x_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_763_, 0, v___x_762_);
return v___x_763_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isCutsatType___boxed(lean_object* v_type_778_, lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isCutsatType(v_type_778_, v_a_779_, v_a_780_, v_a_781_, v_a_782_, v_a_783_, v_a_784_, v_a_785_, v_a_786_, v_a_787_, v_a_788_);
lean_dec(v_a_788_);
lean_dec_ref(v_a_787_);
lean_dec(v_a_786_);
lean_dec_ref(v_a_785_);
lean_dec(v_a_784_);
lean_dec_ref(v_a_783_);
lean_dec(v_a_782_);
lean_dec_ref(v_a_781_);
lean_dec(v_a_780_);
lean_dec(v_a_779_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getCommRingInst_x3f(lean_object* v_ringId_x3f_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_){
_start:
{
if (lean_obj_tag(v_ringId_x3f_791_) == 1)
{
lean_object* v_val_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_830_; 
v_val_803_ = lean_ctor_get(v_ringId_x3f_791_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v_ringId_x3f_791_);
if (v_isSharedCheck_830_ == 0)
{
v___x_805_ = v_ringId_x3f_791_;
v_isShared_806_ = v_isSharedCheck_830_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_val_803_);
lean_dec(v_ringId_x3f_791_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_830_;
goto v_resetjp_804_;
}
v_resetjp_804_:
{
uint8_t v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_807_ = 0;
v___x_808_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_808_, 0, v_val_803_);
lean_ctor_set_uint8(v___x_808_, sizeof(void*)*1, v___x_807_);
v___x_809_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___x_808_, v_a_792_, v_a_793_, v_a_794_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_, v_a_801_);
lean_dec_ref(v___x_808_);
if (lean_obj_tag(v___x_809_) == 0)
{
lean_object* v_a_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_821_; 
v_a_810_ = lean_ctor_get(v___x_809_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_809_);
if (v_isSharedCheck_821_ == 0)
{
v___x_812_ = v___x_809_;
v_isShared_813_ = v_isSharedCheck_821_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_a_810_);
lean_dec(v___x_809_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_821_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v_commRingInst_814_; lean_object* v___x_816_; 
v_commRingInst_814_ = lean_ctor_get(v_a_810_, 4);
lean_inc_ref(v_commRingInst_814_);
lean_dec(v_a_810_);
if (v_isShared_806_ == 0)
{
lean_ctor_set(v___x_805_, 0, v_commRingInst_814_);
v___x_816_ = v___x_805_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_commRingInst_814_);
v___x_816_ = v_reuseFailAlloc_820_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
lean_object* v___x_818_; 
if (v_isShared_813_ == 0)
{
lean_ctor_set(v___x_812_, 0, v___x_816_);
v___x_818_ = v___x_812_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_816_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
}
else
{
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
lean_del_object(v___x_805_);
v_a_822_ = lean_ctor_get(v___x_809_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_809_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v___x_809_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_809_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_827_; 
if (v_isShared_825_ == 0)
{
v___x_827_ = v___x_824_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_a_822_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
}
}
else
{
lean_object* v___x_831_; lean_object* v___x_832_; 
lean_dec(v_ringId_x3f_791_);
v___x_831_ = lean_box(0);
v___x_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_832_, 0, v___x_831_);
return v___x_832_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getCommRingInst_x3f___boxed(lean_object* v_ringId_x3f_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getCommRingInst_x3f(v_ringId_x3f_833_, v_a_834_, v_a_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_);
lean_dec(v_a_843_);
lean_dec_ref(v_a_842_);
lean_dec(v_a_841_);
lean_dec_ref(v_a_840_);
lean_dec(v_a_839_);
lean_dec_ref(v_a_838_);
lean_dec(v_a_837_);
lean_dec_ref(v_a_836_);
lean_dec(v_a_835_);
lean_dec(v_a_834_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg(lean_object* v_u_860_, lean_object* v_type_861_, lean_object* v_commRingInst_x3f_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_){
_start:
{
if (lean_obj_tag(v_commRingInst_x3f_862_) == 1)
{
lean_object* v_val_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_881_; 
v_val_868_ = lean_ctor_get(v_commRingInst_x3f_862_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v_commRingInst_x3f_862_);
if (v_isSharedCheck_881_ == 0)
{
v___x_870_ = v_commRingInst_x3f_862_;
v_isShared_871_ = v_isSharedCheck_881_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_val_868_);
lean_dec(v_commRingInst_x3f_862_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_881_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_878_; 
v___x_872_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__4));
v___x_873_ = lean_box(0);
v___x_874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_874_, 0, v_u_860_);
lean_ctor_set(v___x_874_, 1, v___x_873_);
v___x_875_ = l_Lean_mkConst(v___x_872_, v___x_874_);
v___x_876_ = l_Lean_mkAppB(v___x_875_, v_type_861_, v_val_868_);
if (v_isShared_871_ == 0)
{
lean_ctor_set(v___x_870_, 0, v___x_876_);
v___x_878_ = v___x_870_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v___x_876_);
v___x_878_ = v_reuseFailAlloc_880_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
lean_object* v___x_879_; 
v___x_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_879_, 0, v___x_878_);
return v___x_879_;
}
}
}
else
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
lean_dec(v_commRingInst_x3f_862_);
v___x_882_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__6));
v___x_883_ = lean_box(0);
v___x_884_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_884_, 0, v_u_860_);
lean_ctor_set(v___x_884_, 1, v___x_883_);
v___x_885_ = l_Lean_mkConst(v___x_882_, v___x_884_);
v___x_886_ = l_Lean_Expr_app___override(v___x_885_, v_type_861_);
v___x_887_ = l_Lean_Meta_Grind_synthInstanceMeta_x3f(v___x_886_, v_a_863_, v_a_864_, v_a_865_, v_a_866_);
return v___x_887_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___boxed(lean_object* v_u_888_, lean_object* v_type_889_, lean_object* v_commRingInst_x3f_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_){
_start:
{
lean_object* v_res_896_; 
v_res_896_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg(v_u_888_, v_type_889_, v_commRingInst_x3f_890_, v_a_891_, v_a_892_, v_a_893_, v_a_894_);
lean_dec(v_a_894_);
lean_dec_ref(v_a_893_);
lean_dec(v_a_892_);
lean_dec_ref(v_a_891_);
return v_res_896_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f(lean_object* v_u_897_, lean_object* v_type_898_, lean_object* v_commRingInst_x3f_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_){
_start:
{
lean_object* v___x_911_; 
v___x_911_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg(v_u_897_, v_type_898_, v_commRingInst_x3f_899_, v_a_906_, v_a_907_, v_a_908_, v_a_909_);
return v___x_911_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___boxed(lean_object* v_u_912_, lean_object* v_type_913_, lean_object* v_commRingInst_x3f_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_){
_start:
{
lean_object* v_res_926_; 
v_res_926_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f(v_u_912_, v_type_913_, v_commRingInst_x3f_914_, v_a_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_, v_a_920_, v_a_921_, v_a_922_, v_a_923_, v_a_924_);
lean_dec(v_a_924_);
lean_dec_ref(v_a_923_);
lean_dec(v_a_922_);
lean_dec_ref(v_a_921_);
lean_dec(v_a_920_);
lean_dec_ref(v_a_919_);
lean_dec(v_a_918_);
lean_dec_ref(v_a_917_);
lean_dec(v_a_916_);
lean_dec(v_a_915_);
return v_res_926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg(lean_object* v_u_938_, lean_object* v_type_939_, lean_object* v_ringInst_x3f_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_){
_start:
{
if (lean_obj_tag(v_ringInst_x3f_940_) == 1)
{
lean_object* v_val_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_959_; 
v_val_946_ = lean_ctor_get(v_ringInst_x3f_940_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v_ringInst_x3f_940_);
if (v_isSharedCheck_959_ == 0)
{
v___x_948_ = v_ringInst_x3f_940_;
v_isShared_949_ = v_isSharedCheck_959_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_val_946_);
lean_dec(v_ringInst_x3f_940_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_959_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_956_; 
v___x_950_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__1));
v___x_951_ = lean_box(0);
v___x_952_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_952_, 0, v_u_938_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
v___x_953_ = l_Lean_mkConst(v___x_950_, v___x_952_);
v___x_954_ = l_Lean_mkAppB(v___x_953_, v_type_939_, v_val_946_);
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 0, v___x_954_);
v___x_956_ = v___x_948_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v___x_954_);
v___x_956_ = v_reuseFailAlloc_958_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
lean_object* v___x_957_; 
v___x_957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_957_, 0, v___x_956_);
return v___x_957_;
}
}
}
else
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
lean_dec(v_ringInst_x3f_940_);
v___x_960_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__3));
v___x_961_ = lean_box(0);
v___x_962_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_962_, 0, v_u_938_);
lean_ctor_set(v___x_962_, 1, v___x_961_);
v___x_963_ = l_Lean_mkConst(v___x_960_, v___x_962_);
v___x_964_ = l_Lean_Expr_app___override(v___x_963_, v_type_939_);
v___x_965_ = l_Lean_Meta_Grind_synthInstanceMeta_x3f(v___x_964_, v_a_941_, v_a_942_, v_a_943_, v_a_944_);
return v___x_965_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___boxed(lean_object* v_u_966_, lean_object* v_type_967_, lean_object* v_ringInst_x3f_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg(v_u_966_, v_type_967_, v_ringInst_x3f_968_, v_a_969_, v_a_970_, v_a_971_, v_a_972_);
lean_dec(v_a_972_);
lean_dec_ref(v_a_971_);
lean_dec(v_a_970_);
lean_dec_ref(v_a_969_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f(lean_object* v_u_975_, lean_object* v_type_976_, lean_object* v_ringInst_x3f_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_){
_start:
{
lean_object* v___x_989_; 
v___x_989_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg(v_u_975_, v_type_976_, v_ringInst_x3f_977_, v_a_984_, v_a_985_, v_a_986_, v_a_987_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___boxed(lean_object* v_u_990_, lean_object* v_type_991_, lean_object* v_ringInst_x3f_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f(v_u_990_, v_type_991_, v_ringInst_x3f_992_, v_a_993_, v_a_994_, v_a_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_, v_a_1001_, v_a_1002_);
lean_dec(v_a_1002_);
lean_dec_ref(v_a_1001_);
lean_dec(v_a_1000_);
lean_dec_ref(v_a_999_);
lean_dec(v_a_998_);
lean_dec_ref(v_a_997_);
lean_dec(v_a_996_);
lean_dec_ref(v_a_995_);
lean_dec(v_a_994_);
lean_dec(v_a_993_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg(lean_object* v_u_1016_, lean_object* v_type_1017_, lean_object* v_ringInst_x3f_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_){
_start:
{
if (lean_obj_tag(v_ringInst_x3f_1018_) == 1)
{
lean_object* v_val_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1037_; 
v_val_1024_ = lean_ctor_get(v_ringInst_x3f_1018_, 0);
v_isSharedCheck_1037_ = !lean_is_exclusive(v_ringInst_x3f_1018_);
if (v_isSharedCheck_1037_ == 0)
{
v___x_1026_ = v_ringInst_x3f_1018_;
v_isShared_1027_ = v_isSharedCheck_1037_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_val_1024_);
lean_dec(v_ringInst_x3f_1018_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1037_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1034_; 
v___x_1028_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__1));
v___x_1029_ = lean_box(0);
v___x_1030_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1030_, 0, v_u_1016_);
lean_ctor_set(v___x_1030_, 1, v___x_1029_);
v___x_1031_ = l_Lean_mkConst(v___x_1028_, v___x_1030_);
v___x_1032_ = l_Lean_mkAppB(v___x_1031_, v_type_1017_, v_val_1024_);
if (v_isShared_1027_ == 0)
{
lean_ctor_set(v___x_1026_, 0, v___x_1032_);
v___x_1034_ = v___x_1026_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1032_);
v___x_1034_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
lean_object* v___x_1035_; 
v___x_1035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1034_);
return v___x_1035_;
}
}
}
else
{
lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; 
lean_dec(v_ringInst_x3f_1018_);
v___x_1038_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___closed__3));
v___x_1039_ = lean_box(0);
v___x_1040_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1040_, 0, v_u_1016_);
lean_ctor_set(v___x_1040_, 1, v___x_1039_);
v___x_1041_ = l_Lean_mkConst(v___x_1038_, v___x_1040_);
v___x_1042_ = l_Lean_Expr_app___override(v___x_1041_, v_type_1017_);
v___x_1043_ = l_Lean_Meta_Grind_synthInstanceMeta_x3f(v___x_1042_, v_a_1019_, v_a_1020_, v_a_1021_, v_a_1022_);
return v___x_1043_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg___boxed(lean_object* v_u_1044_, lean_object* v_type_1045_, lean_object* v_ringInst_x3f_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg(v_u_1044_, v_type_1045_, v_ringInst_x3f_1046_, v_a_1047_, v_a_1048_, v_a_1049_, v_a_1050_);
lean_dec(v_a_1050_);
lean_dec_ref(v_a_1049_);
lean_dec(v_a_1048_);
lean_dec_ref(v_a_1047_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f(lean_object* v_u_1053_, lean_object* v_type_1054_, lean_object* v_ringInst_x3f_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_){
_start:
{
lean_object* v___x_1067_; 
v___x_1067_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg(v_u_1053_, v_type_1054_, v_ringInst_x3f_1055_, v_a_1062_, v_a_1063_, v_a_1064_, v_a_1065_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___boxed(lean_object* v_u_1068_, lean_object* v_type_1069_, lean_object* v_ringInst_x3f_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_, lean_object* v_a_1081_){
_start:
{
lean_object* v_res_1082_; 
v_res_1082_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f(v_u_1068_, v_type_1069_, v_ringInst_x3f_1070_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_, v_a_1078_, v_a_1079_, v_a_1080_);
lean_dec(v_a_1080_);
lean_dec_ref(v_a_1079_);
lean_dec(v_a_1078_);
lean_dec_ref(v_a_1077_);
lean_dec(v_a_1076_);
lean_dec_ref(v_a_1075_);
lean_dec(v_a_1074_);
lean_dec_ref(v_a_1073_);
lean_dec(v_a_1072_);
lean_dec(v_a_1071_);
return v_res_1082_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f(lean_object* v_u_1090_, lean_object* v_type_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1103_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__1));
v___x_1104_ = lean_box(0);
v___x_1105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1105_, 0, v_u_1090_);
lean_ctor_set(v___x_1105_, 1, v___x_1104_);
lean_inc_ref(v___x_1105_);
v___x_1106_ = l_Lean_mkConst(v___x_1103_, v___x_1105_);
lean_inc_ref(v_type_1091_);
v___x_1107_ = l_Lean_Expr_app___override(v___x_1106_, v_type_1091_);
v___x_1108_ = l_Lean_Meta_Grind_synthInstanceMeta_x3f(v___x_1107_, v_a_1098_, v_a_1099_, v_a_1100_, v_a_1101_);
if (lean_obj_tag(v___x_1108_) == 0)
{
lean_object* v_a_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1190_; 
v_a_1109_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1111_ = v___x_1108_;
v_isShared_1112_ = v_isSharedCheck_1190_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_a_1109_);
lean_dec(v___x_1108_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1190_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
if (lean_obj_tag(v_a_1109_) == 1)
{
lean_object* v_val_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1185_; 
lean_del_object(v___x_1111_);
v_val_1113_ = lean_ctor_get(v_a_1109_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v_a_1109_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1115_ = v_a_1109_;
v_isShared_1116_ = v_isSharedCheck_1185_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_val_1113_);
lean_dec(v_a_1109_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1185_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1117_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___closed__3));
v___x_1118_ = l_Lean_mkConst(v___x_1117_, v___x_1105_);
lean_inc_ref(v_type_1091_);
v___x_1119_ = l_Lean_mkAppB(v___x_1118_, v_type_1091_, v_val_1113_);
v___x_1120_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(v___x_1119_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_, v_a_1097_, v_a_1098_, v_a_1099_, v_a_1100_, v_a_1101_);
if (lean_obj_tag(v___x_1120_) == 0)
{
lean_object* v_a_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1176_; 
v_a_1121_ = lean_ctor_get(v___x_1120_, 0);
v_isSharedCheck_1176_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1176_ == 0)
{
v___x_1123_ = v___x_1120_;
v_isShared_1124_ = v_isSharedCheck_1176_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_a_1121_);
lean_dec(v___x_1120_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1176_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1132_ = lean_unsigned_to_nat(1u);
v___x_1133_ = l_Lean_Meta_mkNumeral(v_type_1091_, v___x_1132_, v_a_1098_, v_a_1099_, v_a_1100_, v_a_1101_);
if (lean_obj_tag(v___x_1133_) == 0)
{
lean_object* v_a_1134_; lean_object* v___x_1135_; 
v_a_1134_ = lean_ctor_get(v___x_1133_, 0);
lean_inc(v_a_1134_);
lean_dec_ref(v___x_1133_);
lean_inc(v_a_1134_);
lean_inc(v_a_1121_);
v___x_1135_ = l_Lean_Meta_isDefEqD(v_a_1121_, v_a_1134_, v_a_1098_, v_a_1099_, v_a_1100_, v_a_1101_);
if (lean_obj_tag(v___x_1135_) == 0)
{
lean_object* v_a_1136_; uint8_t v___x_1137_; 
v_a_1136_ = lean_ctor_get(v___x_1135_, 0);
lean_inc(v_a_1136_);
lean_dec_ref(v___x_1135_);
v___x_1137_ = lean_unbox(v_a_1136_);
lean_dec(v_a_1136_);
if (v___x_1137_ == 0)
{
lean_object* v___x_1138_; lean_object* v_a_1139_; lean_object* v___x_1140_; 
lean_inc(v_a_1121_);
v___x_1138_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(v_a_1121_, v_a_1134_);
v_a_1139_ = lean_ctor_get(v___x_1138_, 0);
lean_inc(v_a_1139_);
lean_dec_ref(v___x_1138_);
v___x_1140_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_1096_);
if (lean_obj_tag(v___x_1140_) == 0)
{
lean_object* v_a_1141_; uint8_t v___x_1142_; 
v_a_1141_ = lean_ctor_get(v___x_1140_, 0);
lean_inc(v_a_1141_);
lean_dec_ref(v___x_1140_);
v___x_1142_ = lean_unbox(v_a_1141_);
lean_dec(v_a_1141_);
if (v___x_1142_ == 0)
{
lean_dec(v_a_1139_);
goto v___jp_1125_;
}
else
{
lean_object* v___x_1143_; 
v___x_1143_ = l_Lean_Meta_Sym_reportIssue(v_a_1139_, v_a_1096_, v_a_1097_, v_a_1098_, v_a_1099_, v_a_1100_, v_a_1101_);
if (lean_obj_tag(v___x_1143_) == 0)
{
lean_dec_ref(v___x_1143_);
goto v___jp_1125_;
}
else
{
lean_object* v_a_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1151_; 
lean_del_object(v___x_1123_);
lean_dec(v_a_1121_);
lean_del_object(v___x_1115_);
v_a_1144_ = lean_ctor_get(v___x_1143_, 0);
v_isSharedCheck_1151_ = !lean_is_exclusive(v___x_1143_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1146_ = v___x_1143_;
v_isShared_1147_ = v_isSharedCheck_1151_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_a_1144_);
lean_dec(v___x_1143_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1151_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v___x_1149_; 
if (v_isShared_1147_ == 0)
{
v___x_1149_ = v___x_1146_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v_a_1144_);
v___x_1149_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
return v___x_1149_;
}
}
}
}
}
else
{
lean_object* v_a_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1159_; 
lean_dec(v_a_1139_);
lean_del_object(v___x_1123_);
lean_dec(v_a_1121_);
lean_del_object(v___x_1115_);
v_a_1152_ = lean_ctor_get(v___x_1140_, 0);
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1140_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1154_ = v___x_1140_;
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_a_1152_);
lean_dec(v___x_1140_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1157_; 
if (v_isShared_1155_ == 0)
{
v___x_1157_ = v___x_1154_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_a_1152_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
}
}
else
{
lean_dec(v_a_1134_);
goto v___jp_1125_;
}
}
else
{
lean_object* v_a_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1167_; 
lean_dec(v_a_1134_);
lean_del_object(v___x_1123_);
lean_dec(v_a_1121_);
lean_del_object(v___x_1115_);
v_a_1160_ = lean_ctor_get(v___x_1135_, 0);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1135_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1162_ = v___x_1135_;
v_isShared_1163_ = v_isSharedCheck_1167_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_a_1160_);
lean_dec(v___x_1135_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1167_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v___x_1165_; 
if (v_isShared_1163_ == 0)
{
v___x_1165_ = v___x_1162_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_a_1160_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
}
else
{
lean_object* v_a_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1175_; 
lean_del_object(v___x_1123_);
lean_dec(v_a_1121_);
lean_del_object(v___x_1115_);
v_a_1168_ = lean_ctor_get(v___x_1133_, 0);
v_isSharedCheck_1175_ = !lean_is_exclusive(v___x_1133_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1170_ = v___x_1133_;
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_a_1168_);
lean_dec(v___x_1133_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1175_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1173_; 
if (v_isShared_1171_ == 0)
{
v___x_1173_ = v___x_1170_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v_a_1168_);
v___x_1173_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
return v___x_1173_;
}
}
}
v___jp_1125_:
{
lean_object* v___x_1127_; 
if (v_isShared_1116_ == 0)
{
lean_ctor_set(v___x_1115_, 0, v_a_1121_);
v___x_1127_ = v___x_1115_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_a_1121_);
v___x_1127_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
lean_object* v___x_1129_; 
if (v_isShared_1124_ == 0)
{
lean_ctor_set(v___x_1123_, 0, v___x_1127_);
v___x_1129_ = v___x_1123_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v___x_1127_);
v___x_1129_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
return v___x_1129_;
}
}
}
}
}
else
{
lean_object* v_a_1177_; lean_object* v___x_1179_; uint8_t v_isShared_1180_; uint8_t v_isSharedCheck_1184_; 
lean_del_object(v___x_1115_);
lean_dec_ref(v_type_1091_);
v_a_1177_ = lean_ctor_get(v___x_1120_, 0);
v_isSharedCheck_1184_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1184_ == 0)
{
v___x_1179_ = v___x_1120_;
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
else
{
lean_inc(v_a_1177_);
lean_dec(v___x_1120_);
v___x_1179_ = lean_box(0);
v_isShared_1180_ = v_isSharedCheck_1184_;
goto v_resetjp_1178_;
}
v_resetjp_1178_:
{
lean_object* v___x_1182_; 
if (v_isShared_1180_ == 0)
{
v___x_1182_ = v___x_1179_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v_a_1177_);
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
else
{
lean_object* v___x_1186_; lean_object* v___x_1188_; 
lean_dec(v_a_1109_);
lean_dec_ref(v___x_1105_);
lean_dec_ref(v_type_1091_);
v___x_1186_ = lean_box(0);
if (v_isShared_1112_ == 0)
{
lean_ctor_set(v___x_1111_, 0, v___x_1186_);
v___x_1188_ = v___x_1111_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v___x_1186_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
}
}
else
{
lean_dec_ref(v___x_1105_);
lean_dec_ref(v_type_1091_);
return v___x_1108_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f___boxed(lean_object* v_u_1191_, lean_object* v_type_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f(v_u_1191_, v_type_1192_, v_a_1193_, v_a_1194_, v_a_1195_, v_a_1196_, v_a_1197_, v_a_1198_, v_a_1199_, v_a_1200_, v_a_1201_, v_a_1202_);
lean_dec(v_a_1202_);
lean_dec_ref(v_a_1201_);
lean_dec(v_a_1200_);
lean_dec_ref(v_a_1199_);
lean_dec(v_a_1198_);
lean_dec_ref(v_a_1197_);
lean_dec(v_a_1196_);
lean_dec_ref(v_a_1195_);
lean_dec(v_a_1194_);
lean_dec(v_a_1193_);
return v_res_1204_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__3(void){
_start:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; 
v___x_1211_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__2));
v___x_1212_ = l_Lean_stringToMessageData(v___x_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg(lean_object* v_u_1213_, lean_object* v_type_1214_, lean_object* v_semiringInst_x3f_1215_, lean_object* v_leInst_x3f_1216_, lean_object* v_ltInst_x3f_1217_, lean_object* v_preorderInst_x3f_1218_, lean_object* v_a_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_, lean_object* v_a_1224_){
_start:
{
if (lean_obj_tag(v_semiringInst_x3f_1215_) == 1)
{
if (lean_obj_tag(v_leInst_x3f_1216_) == 1)
{
if (lean_obj_tag(v_ltInst_x3f_1217_) == 1)
{
if (lean_obj_tag(v_preorderInst_x3f_1218_) == 1)
{
lean_object* v_val_1229_; lean_object* v_val_1230_; lean_object* v_val_1231_; lean_object* v_val_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v_isOrdType_1237_; lean_object* v___x_1238_; 
v_val_1229_ = lean_ctor_get(v_semiringInst_x3f_1215_, 0);
lean_inc(v_val_1229_);
lean_dec_ref(v_semiringInst_x3f_1215_);
v_val_1230_ = lean_ctor_get(v_leInst_x3f_1216_, 0);
lean_inc(v_val_1230_);
lean_dec_ref(v_leInst_x3f_1216_);
v_val_1231_ = lean_ctor_get(v_ltInst_x3f_1217_, 0);
lean_inc(v_val_1231_);
lean_dec_ref(v_ltInst_x3f_1217_);
v_val_1232_ = lean_ctor_get(v_preorderInst_x3f_1218_, 0);
lean_inc(v_val_1232_);
lean_dec_ref(v_preorderInst_x3f_1218_);
v___x_1233_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__1));
v___x_1234_ = lean_box(0);
v___x_1235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1235_, 0, v_u_1213_);
lean_ctor_set(v___x_1235_, 1, v___x_1234_);
v___x_1236_ = l_Lean_mkConst(v___x_1233_, v___x_1235_);
v_isOrdType_1237_ = l_Lean_mkApp5(v___x_1236_, v_type_1214_, v_val_1229_, v_val_1230_, v_val_1231_, v_val_1232_);
lean_inc_ref(v_isOrdType_1237_);
v___x_1238_ = l_Lean_Meta_Grind_synthInstanceMeta_x3f(v_isOrdType_1237_, v_a_1221_, v_a_1222_, v_a_1223_, v_a_1224_);
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v_a_1239_; 
v_a_1239_ = lean_ctor_get(v___x_1238_, 0);
lean_inc(v_a_1239_);
if (lean_obj_tag(v_a_1239_) == 1)
{
lean_dec_ref(v_a_1239_);
lean_dec_ref(v_isOrdType_1237_);
return v___x_1238_;
}
else
{
lean_object* v___x_1240_; 
lean_dec_ref(v___x_1238_);
lean_dec(v_a_1239_);
v___x_1240_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_1219_);
if (lean_obj_tag(v___x_1240_) == 0)
{
lean_object* v_a_1241_; uint8_t v___x_1242_; 
v_a_1241_ = lean_ctor_get(v___x_1240_, 0);
lean_inc(v_a_1241_);
lean_dec_ref(v___x_1240_);
v___x_1242_ = lean_unbox(v_a_1241_);
lean_dec(v_a_1241_);
if (v___x_1242_ == 0)
{
lean_dec_ref(v_isOrdType_1237_);
goto v___jp_1226_;
}
else
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1243_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___closed__3);
v___x_1244_ = l_Lean_indentExpr(v_isOrdType_1237_);
v___x_1245_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1243_);
lean_ctor_set(v___x_1245_, 1, v___x_1244_);
v___x_1246_ = l_Lean_Meta_Sym_reportIssue(v___x_1245_, v_a_1219_, v_a_1220_, v_a_1221_, v_a_1222_, v_a_1223_, v_a_1224_);
if (lean_obj_tag(v___x_1246_) == 0)
{
lean_dec_ref(v___x_1246_);
goto v___jp_1226_;
}
else
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
v_a_1247_ = lean_ctor_get(v___x_1246_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1246_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1249_ = v___x_1246_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1246_);
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
else
{
lean_object* v_a_1255_; lean_object* v___x_1257_; uint8_t v_isShared_1258_; uint8_t v_isSharedCheck_1262_; 
lean_dec_ref(v_isOrdType_1237_);
v_a_1255_ = lean_ctor_get(v___x_1240_, 0);
v_isSharedCheck_1262_ = !lean_is_exclusive(v___x_1240_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1257_ = v___x_1240_;
v_isShared_1258_ = v_isSharedCheck_1262_;
goto v_resetjp_1256_;
}
else
{
lean_inc(v_a_1255_);
lean_dec(v___x_1240_);
v___x_1257_ = lean_box(0);
v_isShared_1258_ = v_isSharedCheck_1262_;
goto v_resetjp_1256_;
}
v_resetjp_1256_:
{
lean_object* v___x_1260_; 
if (v_isShared_1258_ == 0)
{
v___x_1260_ = v___x_1257_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v_a_1255_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
return v___x_1260_;
}
}
}
}
}
else
{
lean_dec_ref(v_isOrdType_1237_);
return v___x_1238_;
}
}
else
{
lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1270_; 
lean_dec_ref(v_leInst_x3f_1216_);
lean_dec_ref(v_semiringInst_x3f_1215_);
lean_dec(v_preorderInst_x3f_1218_);
lean_dec_ref(v_type_1214_);
lean_dec(v_u_1213_);
v_isSharedCheck_1270_ = !lean_is_exclusive(v_ltInst_x3f_1217_);
if (v_isSharedCheck_1270_ == 0)
{
lean_object* v_unused_1271_; 
v_unused_1271_ = lean_ctor_get(v_ltInst_x3f_1217_, 0);
lean_dec(v_unused_1271_);
v___x_1264_ = v_ltInst_x3f_1217_;
v_isShared_1265_ = v_isSharedCheck_1270_;
goto v_resetjp_1263_;
}
else
{
lean_dec(v_ltInst_x3f_1217_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1270_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v___x_1266_; lean_object* v___x_1268_; 
v___x_1266_ = lean_box(0);
if (v_isShared_1265_ == 0)
{
lean_ctor_set_tag(v___x_1264_, 0);
lean_ctor_set(v___x_1264_, 0, v___x_1266_);
v___x_1268_ = v___x_1264_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v___x_1266_);
v___x_1268_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
return v___x_1268_;
}
}
}
}
else
{
lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1279_; 
lean_dec_ref(v_semiringInst_x3f_1215_);
lean_dec(v_preorderInst_x3f_1218_);
lean_dec(v_ltInst_x3f_1217_);
lean_dec_ref(v_type_1214_);
lean_dec(v_u_1213_);
v_isSharedCheck_1279_ = !lean_is_exclusive(v_leInst_x3f_1216_);
if (v_isSharedCheck_1279_ == 0)
{
lean_object* v_unused_1280_; 
v_unused_1280_ = lean_ctor_get(v_leInst_x3f_1216_, 0);
lean_dec(v_unused_1280_);
v___x_1273_ = v_leInst_x3f_1216_;
v_isShared_1274_ = v_isSharedCheck_1279_;
goto v_resetjp_1272_;
}
else
{
lean_dec(v_leInst_x3f_1216_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1279_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1275_; lean_object* v___x_1277_; 
v___x_1275_ = lean_box(0);
if (v_isShared_1274_ == 0)
{
lean_ctor_set_tag(v___x_1273_, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1275_);
v___x_1277_ = v___x_1273_;
goto v_reusejp_1276_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v___x_1275_);
v___x_1277_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1276_;
}
v_reusejp_1276_:
{
return v___x_1277_;
}
}
}
}
else
{
lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1288_; 
lean_dec(v_preorderInst_x3f_1218_);
lean_dec(v_ltInst_x3f_1217_);
lean_dec(v_leInst_x3f_1216_);
lean_dec_ref(v_type_1214_);
lean_dec(v_u_1213_);
v_isSharedCheck_1288_ = !lean_is_exclusive(v_semiringInst_x3f_1215_);
if (v_isSharedCheck_1288_ == 0)
{
lean_object* v_unused_1289_; 
v_unused_1289_ = lean_ctor_get(v_semiringInst_x3f_1215_, 0);
lean_dec(v_unused_1289_);
v___x_1282_ = v_semiringInst_x3f_1215_;
v_isShared_1283_ = v_isSharedCheck_1288_;
goto v_resetjp_1281_;
}
else
{
lean_dec(v_semiringInst_x3f_1215_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1288_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1284_; lean_object* v___x_1286_; 
v___x_1284_ = lean_box(0);
if (v_isShared_1283_ == 0)
{
lean_ctor_set_tag(v___x_1282_, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1284_);
v___x_1286_ = v___x_1282_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v___x_1284_);
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
else
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
lean_dec(v_preorderInst_x3f_1218_);
lean_dec(v_ltInst_x3f_1217_);
lean_dec(v_leInst_x3f_1216_);
lean_dec(v_semiringInst_x3f_1215_);
lean_dec_ref(v_type_1214_);
lean_dec(v_u_1213_);
v___x_1290_ = lean_box(0);
v___x_1291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1290_);
return v___x_1291_;
}
v___jp_1226_:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1227_ = lean_box(0);
v___x_1228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1227_);
return v___x_1228_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg___boxed(lean_object* v_u_1292_, lean_object* v_type_1293_, lean_object* v_semiringInst_x3f_1294_, lean_object* v_leInst_x3f_1295_, lean_object* v_ltInst_x3f_1296_, lean_object* v_preorderInst_x3f_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_){
_start:
{
lean_object* v_res_1305_; 
v_res_1305_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg(v_u_1292_, v_type_1293_, v_semiringInst_x3f_1294_, v_leInst_x3f_1295_, v_ltInst_x3f_1296_, v_preorderInst_x3f_1297_, v_a_1298_, v_a_1299_, v_a_1300_, v_a_1301_, v_a_1302_, v_a_1303_);
lean_dec(v_a_1303_);
lean_dec_ref(v_a_1302_);
lean_dec(v_a_1301_);
lean_dec_ref(v_a_1300_);
lean_dec(v_a_1299_);
lean_dec_ref(v_a_1298_);
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f(lean_object* v_u_1306_, lean_object* v_type_1307_, lean_object* v_semiringInst_x3f_1308_, lean_object* v_leInst_x3f_1309_, lean_object* v_ltInst_x3f_1310_, lean_object* v_preorderInst_x3f_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_){
_start:
{
lean_object* v___x_1323_; 
v___x_1323_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg(v_u_1306_, v_type_1307_, v_semiringInst_x3f_1308_, v_leInst_x3f_1309_, v_ltInst_x3f_1310_, v_preorderInst_x3f_1311_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_);
return v___x_1323_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___boxed(lean_object** _args){
lean_object* v_u_1324_ = _args[0];
lean_object* v_type_1325_ = _args[1];
lean_object* v_semiringInst_x3f_1326_ = _args[2];
lean_object* v_leInst_x3f_1327_ = _args[3];
lean_object* v_ltInst_x3f_1328_ = _args[4];
lean_object* v_preorderInst_x3f_1329_ = _args[5];
lean_object* v_a_1330_ = _args[6];
lean_object* v_a_1331_ = _args[7];
lean_object* v_a_1332_ = _args[8];
lean_object* v_a_1333_ = _args[9];
lean_object* v_a_1334_ = _args[10];
lean_object* v_a_1335_ = _args[11];
lean_object* v_a_1336_ = _args[12];
lean_object* v_a_1337_ = _args[13];
lean_object* v_a_1338_ = _args[14];
lean_object* v_a_1339_ = _args[15];
lean_object* v_a_1340_ = _args[16];
_start:
{
lean_object* v_res_1341_; 
v_res_1341_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f(v_u_1324_, v_type_1325_, v_semiringInst_x3f_1326_, v_leInst_x3f_1327_, v_ltInst_x3f_1328_, v_preorderInst_x3f_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_, v_a_1335_, v_a_1336_, v_a_1337_, v_a_1338_, v_a_1339_);
lean_dec(v_a_1339_);
lean_dec_ref(v_a_1338_);
lean_dec(v_a_1337_);
lean_dec_ref(v_a_1336_);
lean_dec(v_a_1335_);
lean_dec_ref(v_a_1334_);
lean_dec(v_a_1333_);
lean_dec_ref(v_a_1332_);
lean_dec(v_a_1331_);
lean_dec(v_a_1330_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg(lean_object* v_u_1352_, lean_object* v_type_1353_, lean_object* v_a_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_, lean_object* v_a_1357_){
_start:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v_natModuleType_1363_; lean_object* v___x_1364_; 
v___x_1359_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1));
v___x_1360_ = lean_box(0);
v___x_1361_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1361_, 0, v_u_1352_);
lean_ctor_set(v___x_1361_, 1, v___x_1360_);
lean_inc_ref(v___x_1361_);
v___x_1362_ = l_Lean_mkConst(v___x_1359_, v___x_1361_);
lean_inc_ref(v_type_1353_);
v_natModuleType_1363_ = l_Lean_Expr_app___override(v___x_1362_, v_type_1353_);
v___x_1364_ = l_Lean_Meta_Grind_synthInstanceMeta_x3f(v_natModuleType_1363_, v_a_1354_, v_a_1355_, v_a_1356_, v_a_1357_);
if (lean_obj_tag(v___x_1364_) == 0)
{
lean_object* v_a_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1378_; 
v_a_1365_ = lean_ctor_get(v___x_1364_, 0);
v_isSharedCheck_1378_ = !lean_is_exclusive(v___x_1364_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1367_ = v___x_1364_;
v_isShared_1368_ = v_isSharedCheck_1378_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_a_1365_);
lean_dec(v___x_1364_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1378_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
if (lean_obj_tag(v_a_1365_) == 1)
{
lean_object* v_val_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; 
lean_del_object(v___x_1367_);
v_val_1369_ = lean_ctor_get(v_a_1365_, 0);
lean_inc(v_val_1369_);
lean_dec_ref(v_a_1365_);
v___x_1370_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__3));
v___x_1371_ = l_Lean_mkConst(v___x_1370_, v___x_1361_);
v___x_1372_ = l_Lean_mkAppB(v___x_1371_, v_type_1353_, v_val_1369_);
v___x_1373_ = l_Lean_Meta_Grind_synthInstanceMeta_x3f(v___x_1372_, v_a_1354_, v_a_1355_, v_a_1356_, v_a_1357_);
return v___x_1373_;
}
else
{
lean_object* v___x_1374_; lean_object* v___x_1376_; 
lean_dec(v_a_1365_);
lean_dec_ref(v___x_1361_);
lean_dec_ref(v_type_1353_);
v___x_1374_ = lean_box(0);
if (v_isShared_1368_ == 0)
{
lean_ctor_set(v___x_1367_, 0, v___x_1374_);
v___x_1376_ = v___x_1367_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v___x_1374_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
return v___x_1376_;
}
}
}
}
else
{
lean_dec_ref(v___x_1361_);
lean_dec_ref(v_type_1353_);
return v___x_1364_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___boxed(lean_object* v_u_1379_, lean_object* v_type_1380_, lean_object* v_a_1381_, lean_object* v_a_1382_, lean_object* v_a_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_){
_start:
{
lean_object* v_res_1386_; 
v_res_1386_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg(v_u_1379_, v_type_1380_, v_a_1381_, v_a_1382_, v_a_1383_, v_a_1384_);
lean_dec(v_a_1384_);
lean_dec_ref(v_a_1383_);
lean_dec(v_a_1382_);
lean_dec_ref(v_a_1381_);
return v_res_1386_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f(lean_object* v_u_1387_, lean_object* v_type_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_, lean_object* v_a_1397_, lean_object* v_a_1398_){
_start:
{
lean_object* v___x_1400_; 
v___x_1400_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg(v_u_1387_, v_type_1388_, v_a_1395_, v_a_1396_, v_a_1397_, v_a_1398_);
return v___x_1400_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___boxed(lean_object* v_u_1401_, lean_object* v_type_1402_, lean_object* v_a_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_){
_start:
{
lean_object* v_res_1414_; 
v_res_1414_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f(v_u_1401_, v_type_1402_, v_a_1403_, v_a_1404_, v_a_1405_, v_a_1406_, v_a_1407_, v_a_1408_, v_a_1409_, v_a_1410_, v_a_1411_, v_a_1412_);
lean_dec(v_a_1412_);
lean_dec_ref(v_a_1411_);
lean_dec(v_a_1410_);
lean_dec_ref(v_a_1409_);
lean_dec(v_a_1408_);
lean_dec_ref(v_a_1407_);
lean_dec(v_a_1406_);
lean_dec_ref(v_a_1405_);
lean_dec(v_a_1404_);
lean_dec(v_a_1403_);
return v_res_1414_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(lean_object* v_declName_1415_, lean_object* v_u_1416_, lean_object* v_type_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_){
_start:
{
lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1423_ = lean_box(0);
v___x_1424_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1424_, 0, v_u_1416_);
lean_ctor_set(v___x_1424_, 1, v___x_1423_);
v___x_1425_ = l_Lean_mkConst(v_declName_1415_, v___x_1424_);
v___x_1426_ = l_Lean_Expr_app___override(v___x_1425_, v_type_1417_);
v___x_1427_ = l_Lean_Meta_Grind_synthInstanceMeta_x3f(v___x_1426_, v_a_1418_, v_a_1419_, v_a_1420_, v_a_1421_);
return v___x_1427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg___boxed(lean_object* v_declName_1428_, lean_object* v_u_1429_, lean_object* v_type_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_, lean_object* v_a_1433_, lean_object* v_a_1434_, lean_object* v_a_1435_){
_start:
{
lean_object* v_res_1436_; 
v_res_1436_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v_declName_1428_, v_u_1429_, v_type_1430_, v_a_1431_, v_a_1432_, v_a_1433_, v_a_1434_);
lean_dec(v_a_1434_);
lean_dec_ref(v_a_1433_);
lean_dec(v_a_1432_);
lean_dec_ref(v_a_1431_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f(lean_object* v_declName_1437_, lean_object* v_u_1438_, lean_object* v_type_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_, lean_object* v_a_1448_, lean_object* v_a_1449_){
_start:
{
lean_object* v___x_1451_; 
v___x_1451_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v_declName_1437_, v_u_1438_, v_type_1439_, v_a_1446_, v_a_1447_, v_a_1448_, v_a_1449_);
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___boxed(lean_object* v_declName_1452_, lean_object* v_u_1453_, lean_object* v_type_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_, lean_object* v_a_1457_, lean_object* v_a_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_, lean_object* v_a_1464_, lean_object* v_a_1465_){
_start:
{
lean_object* v_res_1466_; 
v_res_1466_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f(v_declName_1452_, v_u_1453_, v_type_1454_, v_a_1455_, v_a_1456_, v_a_1457_, v_a_1458_, v_a_1459_, v_a_1460_, v_a_1461_, v_a_1462_, v_a_1463_, v_a_1464_);
lean_dec(v_a_1464_);
lean_dec_ref(v_a_1463_);
lean_dec(v_a_1462_);
lean_dec_ref(v_a_1461_);
lean_dec(v_a_1460_);
lean_dec_ref(v_a_1459_);
lean_dec(v_a_1458_);
lean_dec_ref(v_a_1457_);
lean_dec(v_a_1456_);
lean_dec(v_a_1455_);
return v_res_1466_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst(lean_object* v_declName_1467_, lean_object* v_u_1468_, lean_object* v_type_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_, lean_object* v_a_1473_, lean_object* v_a_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_){
_start:
{
lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1481_ = lean_box(0);
v___x_1482_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1482_, 0, v_u_1468_);
lean_ctor_set(v___x_1482_, 1, v___x_1481_);
v___x_1483_ = l_Lean_mkConst(v_declName_1467_, v___x_1482_);
v___x_1484_ = l_Lean_Expr_app___override(v___x_1483_, v_type_1469_);
v___x_1485_ = l_Lean_Meta_Grind_synthInstance(v___x_1484_, v_a_1470_, v_a_1471_, v_a_1472_, v_a_1473_, v_a_1474_, v_a_1475_, v_a_1476_, v_a_1477_, v_a_1478_, v_a_1479_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst___boxed(lean_object* v_declName_1486_, lean_object* v_u_1487_, lean_object* v_type_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_){
_start:
{
lean_object* v_res_1500_; 
v_res_1500_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst(v_declName_1486_, v_u_1487_, v_type_1488_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_, v_a_1496_, v_a_1497_, v_a_1498_);
lean_dec(v_a_1498_);
lean_dec_ref(v_a_1497_);
lean_dec(v_a_1496_);
lean_dec_ref(v_a_1495_);
lean_dec(v_a_1494_);
lean_dec_ref(v_a_1493_);
lean_dec(v_a_1492_);
lean_dec_ref(v_a_1491_);
lean_dec(v_a_1490_);
lean_dec(v_a_1489_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst(lean_object* v_declName_1501_, lean_object* v_u_1502_, lean_object* v_type_1503_, lean_object* v_a_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_){
_start:
{
lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; 
v___x_1515_ = lean_box(0);
lean_inc(v_u_1502_);
v___x_1516_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1516_, 0, v_u_1502_);
lean_ctor_set(v___x_1516_, 1, v___x_1515_);
lean_inc(v_u_1502_);
v___x_1517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1517_, 0, v_u_1502_);
lean_ctor_set(v___x_1517_, 1, v___x_1516_);
v___x_1518_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1518_, 0, v_u_1502_);
lean_ctor_set(v___x_1518_, 1, v___x_1517_);
v___x_1519_ = l_Lean_mkConst(v_declName_1501_, v___x_1518_);
lean_inc_ref_n(v_type_1503_, 2);
v___x_1520_ = l_Lean_mkApp3(v___x_1519_, v_type_1503_, v_type_1503_, v_type_1503_);
v___x_1521_ = l_Lean_Meta_Grind_synthInstance(v___x_1520_, v_a_1504_, v_a_1505_, v_a_1506_, v_a_1507_, v_a_1508_, v_a_1509_, v_a_1510_, v_a_1511_, v_a_1512_, v_a_1513_);
return v___x_1521_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst___boxed(lean_object* v_declName_1522_, lean_object* v_u_1523_, lean_object* v_type_1524_, lean_object* v_a_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_, lean_object* v_a_1530_, lean_object* v_a_1531_, lean_object* v_a_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_){
_start:
{
lean_object* v_res_1536_; 
v_res_1536_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst(v_declName_1522_, v_u_1523_, v_type_1524_, v_a_1525_, v_a_1526_, v_a_1527_, v_a_1528_, v_a_1529_, v_a_1530_, v_a_1531_, v_a_1532_, v_a_1533_, v_a_1534_);
lean_dec(v_a_1534_);
lean_dec_ref(v_a_1533_);
lean_dec(v_a_1532_);
lean_dec_ref(v_a_1531_);
lean_dec(v_a_1530_);
lean_dec_ref(v_a_1529_);
lean_dec(v_a_1528_);
lean_dec_ref(v_a_1527_);
lean_dec(v_a_1526_);
lean_dec(v_a_1525_);
return v_res_1536_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2(void){
_start:
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
v___x_1540_ = lean_unsigned_to_nat(0u);
v___x_1541_ = l_Lean_Level_ofNat(v___x_1540_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst(lean_object* v_u_1542_, lean_object* v_type_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_, lean_object* v_a_1547_, lean_object* v_a_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_){
_start:
{
lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1555_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__1));
v___x_1556_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2);
v___x_1557_ = lean_box(0);
lean_inc(v_u_1542_);
v___x_1558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1558_, 0, v_u_1542_);
lean_ctor_set(v___x_1558_, 1, v___x_1557_);
v___x_1559_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1559_, 0, v_u_1542_);
lean_ctor_set(v___x_1559_, 1, v___x_1558_);
v___x_1560_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1556_);
lean_ctor_set(v___x_1560_, 1, v___x_1559_);
v___x_1561_ = l_Lean_mkConst(v___x_1555_, v___x_1560_);
v___x_1562_ = l_Lean_Int_mkType;
lean_inc_ref(v_type_1543_);
v___x_1563_ = l_Lean_mkApp3(v___x_1561_, v___x_1562_, v_type_1543_, v_type_1543_);
v___x_1564_ = l_Lean_Meta_Grind_synthInstance(v___x_1563_, v_a_1544_, v_a_1545_, v_a_1546_, v_a_1547_, v_a_1548_, v_a_1549_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_);
return v___x_1564_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___boxed(lean_object* v_u_1565_, lean_object* v_type_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_){
_start:
{
lean_object* v_res_1578_; 
v_res_1578_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst(v_u_1565_, v_type_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_, v_a_1574_, v_a_1575_, v_a_1576_);
lean_dec(v_a_1576_);
lean_dec_ref(v_a_1575_);
lean_dec(v_a_1574_);
lean_dec_ref(v_a_1573_);
lean_dec(v_a_1572_);
lean_dec_ref(v_a_1571_);
lean_dec(v_a_1570_);
lean_dec_ref(v_a_1569_);
lean_dec(v_a_1568_);
lean_dec(v_a_1567_);
return v_res_1578_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst(lean_object* v_u_1579_, lean_object* v_type_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_){
_start:
{
lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; 
v___x_1592_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__1));
v___x_1593_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2);
v___x_1594_ = lean_box(0);
lean_inc(v_u_1579_);
v___x_1595_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1595_, 0, v_u_1579_);
lean_ctor_set(v___x_1595_, 1, v___x_1594_);
v___x_1596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1596_, 0, v_u_1579_);
lean_ctor_set(v___x_1596_, 1, v___x_1595_);
v___x_1597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1593_);
lean_ctor_set(v___x_1597_, 1, v___x_1596_);
v___x_1598_ = l_Lean_mkConst(v___x_1592_, v___x_1597_);
v___x_1599_ = l_Lean_Nat_mkType;
lean_inc_ref(v_type_1580_);
v___x_1600_ = l_Lean_mkApp3(v___x_1598_, v___x_1599_, v_type_1580_, v_type_1580_);
v___x_1601_ = l_Lean_Meta_Grind_synthInstance(v___x_1600_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_, v_a_1585_, v_a_1586_, v_a_1587_, v_a_1588_, v_a_1589_, v_a_1590_);
return v___x_1601_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst___boxed(lean_object* v_u_1602_, lean_object* v_type_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_, lean_object* v_a_1607_, lean_object* v_a_1608_, lean_object* v_a_1609_, lean_object* v_a_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_){
_start:
{
lean_object* v_res_1615_; 
v_res_1615_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst(v_u_1602_, v_type_1603_, v_a_1604_, v_a_1605_, v_a_1606_, v_a_1607_, v_a_1608_, v_a_1609_, v_a_1610_, v_a_1611_, v_a_1612_, v_a_1613_);
lean_dec(v_a_1613_);
lean_dec_ref(v_a_1612_);
lean_dec(v_a_1611_);
lean_dec_ref(v_a_1610_);
lean_dec(v_a_1609_);
lean_dec_ref(v_a_1608_);
lean_dec(v_a_1607_);
lean_dec_ref(v_a_1606_);
lean_dec(v_a_1605_);
lean_dec(v_a_1604_);
return v_res_1615_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg(lean_object* v_leInst_x3f_1616_, lean_object* v_parentInst_x3f_1617_, lean_object* v_childInst_x3f_1618_, lean_object* v_toFieldName_1619_, lean_object* v_u_1620_, lean_object* v_type_1621_, lean_object* v_a_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_){
_start:
{
if (lean_obj_tag(v_leInst_x3f_1616_) == 1)
{
if (lean_obj_tag(v_parentInst_x3f_1617_) == 1)
{
if (lean_obj_tag(v_childInst_x3f_1618_) == 1)
{
lean_object* v_val_1632_; lean_object* v_val_1633_; lean_object* v_val_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v_toField_1638_; lean_object* v___x_1639_; 
v_val_1632_ = lean_ctor_get(v_leInst_x3f_1616_, 0);
lean_inc(v_val_1632_);
lean_dec_ref(v_leInst_x3f_1616_);
v_val_1633_ = lean_ctor_get(v_parentInst_x3f_1617_, 0);
lean_inc(v_val_1633_);
lean_dec_ref(v_parentInst_x3f_1617_);
v_val_1634_ = lean_ctor_get(v_childInst_x3f_1618_, 0);
v___x_1635_ = lean_box(0);
v___x_1636_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1636_, 0, v_u_1620_);
lean_ctor_set(v___x_1636_, 1, v___x_1635_);
v___x_1637_ = l_Lean_mkConst(v_toFieldName_1619_, v___x_1636_);
lean_inc(v_val_1634_);
v_toField_1638_ = l_Lean_mkApp3(v___x_1637_, v_type_1621_, v_val_1632_, v_val_1634_);
lean_inc_ref(v_toField_1638_);
lean_inc(v_val_1633_);
v___x_1639_ = l_Lean_Meta_isDefEqD(v_val_1633_, v_toField_1638_, v_a_1624_, v_a_1625_, v_a_1626_, v_a_1627_);
if (lean_obj_tag(v___x_1639_) == 0)
{
lean_object* v_a_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1670_; 
v_a_1640_ = lean_ctor_get(v___x_1639_, 0);
v_isSharedCheck_1670_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1670_ == 0)
{
v___x_1642_ = v___x_1639_;
v_isShared_1643_ = v_isSharedCheck_1670_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_a_1640_);
lean_dec(v___x_1639_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1670_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
uint8_t v___x_1644_; 
v___x_1644_ = lean_unbox(v_a_1640_);
lean_dec(v_a_1640_);
if (v___x_1644_ == 0)
{
lean_object* v___x_1645_; lean_object* v_a_1646_; lean_object* v___x_1647_; 
lean_del_object(v___x_1642_);
lean_dec_ref(v_childInst_x3f_1618_);
v___x_1645_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkExpectedDefEqMsg___redArg(v_val_1633_, v_toField_1638_);
v_a_1646_ = lean_ctor_get(v___x_1645_, 0);
lean_inc(v_a_1646_);
lean_dec_ref(v___x_1645_);
v___x_1647_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_1622_);
if (lean_obj_tag(v___x_1647_) == 0)
{
lean_object* v_a_1648_; uint8_t v___x_1649_; 
v_a_1648_ = lean_ctor_get(v___x_1647_, 0);
lean_inc(v_a_1648_);
lean_dec_ref(v___x_1647_);
v___x_1649_ = lean_unbox(v_a_1648_);
lean_dec(v_a_1648_);
if (v___x_1649_ == 0)
{
lean_dec(v_a_1646_);
goto v___jp_1629_;
}
else
{
lean_object* v___x_1650_; 
v___x_1650_ = l_Lean_Meta_Sym_reportIssue(v_a_1646_, v_a_1622_, v_a_1623_, v_a_1624_, v_a_1625_, v_a_1626_, v_a_1627_);
if (lean_obj_tag(v___x_1650_) == 0)
{
lean_dec_ref(v___x_1650_);
goto v___jp_1629_;
}
else
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1658_; 
v_a_1651_ = lean_ctor_get(v___x_1650_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v___x_1650_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1653_ = v___x_1650_;
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v___x_1650_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_a_1651_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
return v___x_1656_;
}
}
}
}
}
else
{
lean_object* v_a_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1666_; 
lean_dec(v_a_1646_);
v_a_1659_ = lean_ctor_get(v___x_1647_, 0);
v_isSharedCheck_1666_ = !lean_is_exclusive(v___x_1647_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1661_ = v___x_1647_;
v_isShared_1662_ = v_isSharedCheck_1666_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_a_1659_);
lean_dec(v___x_1647_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1666_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v___x_1664_; 
if (v_isShared_1662_ == 0)
{
v___x_1664_ = v___x_1661_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_a_1659_);
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
lean_object* v___x_1668_; 
lean_dec_ref(v_toField_1638_);
lean_dec(v_val_1633_);
if (v_isShared_1643_ == 0)
{
lean_ctor_set(v___x_1642_, 0, v_childInst_x3f_1618_);
v___x_1668_ = v___x_1642_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1669_; 
v_reuseFailAlloc_1669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1669_, 0, v_childInst_x3f_1618_);
v___x_1668_ = v_reuseFailAlloc_1669_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
return v___x_1668_;
}
}
}
}
else
{
lean_object* v_a_1671_; lean_object* v___x_1673_; uint8_t v_isShared_1674_; uint8_t v_isSharedCheck_1678_; 
lean_dec_ref(v_toField_1638_);
lean_dec(v_val_1633_);
lean_dec_ref(v_childInst_x3f_1618_);
v_a_1671_ = lean_ctor_get(v___x_1639_, 0);
v_isSharedCheck_1678_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1678_ == 0)
{
v___x_1673_ = v___x_1639_;
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
else
{
lean_inc(v_a_1671_);
lean_dec(v___x_1639_);
v___x_1673_ = lean_box(0);
v_isShared_1674_ = v_isSharedCheck_1678_;
goto v_resetjp_1672_;
}
v_resetjp_1672_:
{
lean_object* v___x_1676_; 
if (v_isShared_1674_ == 0)
{
v___x_1676_ = v___x_1673_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_a_1671_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
return v___x_1676_;
}
}
}
}
else
{
lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1686_; 
lean_dec_ref(v_leInst_x3f_1616_);
lean_dec_ref(v_type_1621_);
lean_dec(v_u_1620_);
lean_dec(v_toFieldName_1619_);
lean_dec(v_childInst_x3f_1618_);
v_isSharedCheck_1686_ = !lean_is_exclusive(v_parentInst_x3f_1617_);
if (v_isSharedCheck_1686_ == 0)
{
lean_object* v_unused_1687_; 
v_unused_1687_ = lean_ctor_get(v_parentInst_x3f_1617_, 0);
lean_dec(v_unused_1687_);
v___x_1680_ = v_parentInst_x3f_1617_;
v_isShared_1681_ = v_isSharedCheck_1686_;
goto v_resetjp_1679_;
}
else
{
lean_dec(v_parentInst_x3f_1617_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1686_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1682_; lean_object* v___x_1684_; 
v___x_1682_ = lean_box(0);
if (v_isShared_1681_ == 0)
{
lean_ctor_set_tag(v___x_1680_, 0);
lean_ctor_set(v___x_1680_, 0, v___x_1682_);
v___x_1684_ = v___x_1680_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v___x_1682_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
}
else
{
lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1695_; 
lean_dec_ref(v_type_1621_);
lean_dec(v_u_1620_);
lean_dec(v_toFieldName_1619_);
lean_dec(v_childInst_x3f_1618_);
lean_dec(v_parentInst_x3f_1617_);
v_isSharedCheck_1695_ = !lean_is_exclusive(v_leInst_x3f_1616_);
if (v_isSharedCheck_1695_ == 0)
{
lean_object* v_unused_1696_; 
v_unused_1696_ = lean_ctor_get(v_leInst_x3f_1616_, 0);
lean_dec(v_unused_1696_);
v___x_1689_ = v_leInst_x3f_1616_;
v_isShared_1690_ = v_isSharedCheck_1695_;
goto v_resetjp_1688_;
}
else
{
lean_dec(v_leInst_x3f_1616_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1695_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
lean_object* v___x_1691_; lean_object* v___x_1693_; 
v___x_1691_ = lean_box(0);
if (v_isShared_1690_ == 0)
{
lean_ctor_set_tag(v___x_1689_, 0);
lean_ctor_set(v___x_1689_, 0, v___x_1691_);
v___x_1693_ = v___x_1689_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v___x_1691_);
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
else
{
lean_object* v___x_1697_; lean_object* v___x_1698_; 
lean_dec_ref(v_type_1621_);
lean_dec(v_u_1620_);
lean_dec(v_toFieldName_1619_);
lean_dec(v_childInst_x3f_1618_);
lean_dec(v_parentInst_x3f_1617_);
lean_dec(v_leInst_x3f_1616_);
v___x_1697_ = lean_box(0);
v___x_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1697_);
return v___x_1698_;
}
v___jp_1629_:
{
lean_object* v___x_1630_; lean_object* v___x_1631_; 
v___x_1630_ = lean_box(0);
v___x_1631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1631_, 0, v___x_1630_);
return v___x_1631_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg___boxed(lean_object* v_leInst_x3f_1699_, lean_object* v_parentInst_x3f_1700_, lean_object* v_childInst_x3f_1701_, lean_object* v_toFieldName_1702_, lean_object* v_u_1703_, lean_object* v_type_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_, lean_object* v_a_1710_, lean_object* v_a_1711_){
_start:
{
lean_object* v_res_1712_; 
v_res_1712_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg(v_leInst_x3f_1699_, v_parentInst_x3f_1700_, v_childInst_x3f_1701_, v_toFieldName_1702_, v_u_1703_, v_type_1704_, v_a_1705_, v_a_1706_, v_a_1707_, v_a_1708_, v_a_1709_, v_a_1710_);
lean_dec(v_a_1710_);
lean_dec_ref(v_a_1709_);
lean_dec(v_a_1708_);
lean_dec_ref(v_a_1707_);
lean_dec(v_a_1706_);
lean_dec_ref(v_a_1705_);
return v_res_1712_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f(lean_object* v_leInst_x3f_1713_, lean_object* v_parentInst_x3f_1714_, lean_object* v_childInst_x3f_1715_, lean_object* v_toFieldName_1716_, lean_object* v_u_1717_, lean_object* v_type_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_, lean_object* v_a_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_){
_start:
{
lean_object* v___x_1730_; 
v___x_1730_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg(v_leInst_x3f_1713_, v_parentInst_x3f_1714_, v_childInst_x3f_1715_, v_toFieldName_1716_, v_u_1717_, v_type_1718_, v_a_1723_, v_a_1724_, v_a_1725_, v_a_1726_, v_a_1727_, v_a_1728_);
return v___x_1730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___boxed(lean_object** _args){
lean_object* v_leInst_x3f_1731_ = _args[0];
lean_object* v_parentInst_x3f_1732_ = _args[1];
lean_object* v_childInst_x3f_1733_ = _args[2];
lean_object* v_toFieldName_1734_ = _args[3];
lean_object* v_u_1735_ = _args[4];
lean_object* v_type_1736_ = _args[5];
lean_object* v_a_1737_ = _args[6];
lean_object* v_a_1738_ = _args[7];
lean_object* v_a_1739_ = _args[8];
lean_object* v_a_1740_ = _args[9];
lean_object* v_a_1741_ = _args[10];
lean_object* v_a_1742_ = _args[11];
lean_object* v_a_1743_ = _args[12];
lean_object* v_a_1744_ = _args[13];
lean_object* v_a_1745_ = _args[14];
lean_object* v_a_1746_ = _args[15];
lean_object* v_a_1747_ = _args[16];
_start:
{
lean_object* v_res_1748_; 
v_res_1748_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f(v_leInst_x3f_1731_, v_parentInst_x3f_1732_, v_childInst_x3f_1733_, v_toFieldName_1734_, v_u_1735_, v_type_1736_, v_a_1737_, v_a_1738_, v_a_1739_, v_a_1740_, v_a_1741_, v_a_1742_, v_a_1743_, v_a_1744_, v_a_1745_, v_a_1746_);
lean_dec(v_a_1746_);
lean_dec_ref(v_a_1745_);
lean_dec(v_a_1744_);
lean_dec_ref(v_a_1743_);
lean_dec(v_a_1742_);
lean_dec_ref(v_a_1741_);
lean_dec(v_a_1740_);
lean_dec_ref(v_a_1739_);
lean_dec(v_a_1738_);
lean_dec(v_a_1737_);
return v_res_1748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg(lean_object* v_parentInst_1749_, lean_object* v_inst_1750_, lean_object* v_toFieldName_1751_, lean_object* v_u_1752_, lean_object* v_type_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_, lean_object* v_a_1756_, lean_object* v_a_1757_){
_start:
{
lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v_toField_1762_; lean_object* v___x_1763_; 
v___x_1759_ = lean_box(0);
v___x_1760_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1760_, 0, v_u_1752_);
lean_ctor_set(v___x_1760_, 1, v___x_1759_);
v___x_1761_ = l_Lean_mkConst(v_toFieldName_1751_, v___x_1760_);
v_toField_1762_ = l_Lean_mkAppB(v___x_1761_, v_type_1753_, v_inst_1750_);
v___x_1763_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(v_parentInst_1749_, v_toField_1762_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_);
return v___x_1763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg___boxed(lean_object* v_parentInst_1764_, lean_object* v_inst_1765_, lean_object* v_toFieldName_1766_, lean_object* v_u_1767_, lean_object* v_type_1768_, lean_object* v_a_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_){
_start:
{
lean_object* v_res_1774_; 
v_res_1774_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg(v_parentInst_1764_, v_inst_1765_, v_toFieldName_1766_, v_u_1767_, v_type_1768_, v_a_1769_, v_a_1770_, v_a_1771_, v_a_1772_);
lean_dec(v_a_1772_);
lean_dec_ref(v_a_1771_);
lean_dec(v_a_1770_);
lean_dec_ref(v_a_1769_);
return v_res_1774_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq(lean_object* v_parentInst_1775_, lean_object* v_inst_1776_, lean_object* v_toFieldName_1777_, lean_object* v_u_1778_, lean_object* v_type_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_, lean_object* v_a_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_){
_start:
{
lean_object* v___x_1791_; 
v___x_1791_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg(v_parentInst_1775_, v_inst_1776_, v_toFieldName_1777_, v_u_1778_, v_type_1779_, v_a_1786_, v_a_1787_, v_a_1788_, v_a_1789_);
return v___x_1791_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___boxed(lean_object* v_parentInst_1792_, lean_object* v_inst_1793_, lean_object* v_toFieldName_1794_, lean_object* v_u_1795_, lean_object* v_type_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq(v_parentInst_1792_, v_inst_1793_, v_toFieldName_1794_, v_u_1795_, v_type_1796_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_);
lean_dec(v_a_1806_);
lean_dec_ref(v_a_1805_);
lean_dec(v_a_1804_);
lean_dec_ref(v_a_1803_);
lean_dec(v_a_1802_);
lean_dec_ref(v_a_1801_);
lean_dec(v_a_1800_);
lean_dec_ref(v_a_1799_);
lean_dec(v_a_1798_);
lean_dec(v_a_1797_);
return v_res_1808_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(lean_object* v_parentInst_1809_, lean_object* v_inst_1810_, lean_object* v_toFieldName_1811_, lean_object* v_toHeteroName_1812_, lean_object* v_u_1813_, lean_object* v_type_1814_, lean_object* v_extraType_x3f_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_, lean_object* v_a_1819_){
_start:
{
lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v_toField_1824_; 
v___x_1821_ = lean_box(0);
v___x_1822_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1822_, 0, v_u_1813_);
lean_ctor_set(v___x_1822_, 1, v___x_1821_);
lean_inc_ref(v___x_1822_);
v___x_1823_ = l_Lean_mkConst(v_toFieldName_1811_, v___x_1822_);
lean_inc_ref(v_type_1814_);
v_toField_1824_ = l_Lean_mkAppB(v___x_1823_, v_type_1814_, v_inst_1810_);
if (lean_obj_tag(v_extraType_x3f_1815_) == 0)
{
lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; 
v___x_1825_ = l_Lean_mkConst(v_toHeteroName_1812_, v___x_1822_);
v___x_1826_ = l_Lean_mkAppB(v___x_1825_, v_type_1814_, v_toField_1824_);
v___x_1827_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(v_parentInst_1809_, v___x_1826_, v_a_1816_, v_a_1817_, v_a_1818_, v_a_1819_);
return v___x_1827_;
}
else
{
lean_object* v_val_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; 
v_val_1828_ = lean_ctor_get(v_extraType_x3f_1815_, 0);
lean_inc(v_val_1828_);
lean_dec_ref(v_extraType_x3f_1815_);
v___x_1829_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2);
v___x_1830_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1830_, 0, v___x_1829_);
lean_ctor_set(v___x_1830_, 1, v___x_1822_);
v___x_1831_ = l_Lean_mkConst(v_toHeteroName_1812_, v___x_1830_);
v___x_1832_ = l_Lean_mkApp3(v___x_1831_, v_val_1828_, v_type_1814_, v_toField_1824_);
v___x_1833_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(v_parentInst_1809_, v___x_1832_, v_a_1816_, v_a_1817_, v_a_1818_, v_a_1819_);
return v___x_1833_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg___boxed(lean_object* v_parentInst_1834_, lean_object* v_inst_1835_, lean_object* v_toFieldName_1836_, lean_object* v_toHeteroName_1837_, lean_object* v_u_1838_, lean_object* v_type_1839_, lean_object* v_extraType_x3f_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_){
_start:
{
lean_object* v_res_1846_; 
v_res_1846_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(v_parentInst_1834_, v_inst_1835_, v_toFieldName_1836_, v_toHeteroName_1837_, v_u_1838_, v_type_1839_, v_extraType_x3f_1840_, v_a_1841_, v_a_1842_, v_a_1843_, v_a_1844_);
lean_dec(v_a_1844_);
lean_dec_ref(v_a_1843_);
lean_dec(v_a_1842_);
lean_dec_ref(v_a_1841_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq(lean_object* v_parentInst_1847_, lean_object* v_inst_1848_, lean_object* v_toFieldName_1849_, lean_object* v_toHeteroName_1850_, lean_object* v_u_1851_, lean_object* v_type_1852_, lean_object* v_extraType_x3f_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_, lean_object* v_a_1858_, lean_object* v_a_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_){
_start:
{
lean_object* v___x_1865_; 
v___x_1865_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(v_parentInst_1847_, v_inst_1848_, v_toFieldName_1849_, v_toHeteroName_1850_, v_u_1851_, v_type_1852_, v_extraType_x3f_1853_, v_a_1860_, v_a_1861_, v_a_1862_, v_a_1863_);
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___boxed(lean_object** _args){
lean_object* v_parentInst_1866_ = _args[0];
lean_object* v_inst_1867_ = _args[1];
lean_object* v_toFieldName_1868_ = _args[2];
lean_object* v_toHeteroName_1869_ = _args[3];
lean_object* v_u_1870_ = _args[4];
lean_object* v_type_1871_ = _args[5];
lean_object* v_extraType_x3f_1872_ = _args[6];
lean_object* v_a_1873_ = _args[7];
lean_object* v_a_1874_ = _args[8];
lean_object* v_a_1875_ = _args[9];
lean_object* v_a_1876_ = _args[10];
lean_object* v_a_1877_ = _args[11];
lean_object* v_a_1878_ = _args[12];
lean_object* v_a_1879_ = _args[13];
lean_object* v_a_1880_ = _args[14];
lean_object* v_a_1881_ = _args[15];
lean_object* v_a_1882_ = _args[16];
lean_object* v_a_1883_ = _args[17];
_start:
{
lean_object* v_res_1884_; 
v_res_1884_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq(v_parentInst_1866_, v_inst_1867_, v_toFieldName_1868_, v_toHeteroName_1869_, v_u_1870_, v_type_1871_, v_extraType_x3f_1872_, v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_, v_a_1880_, v_a_1881_, v_a_1882_);
lean_dec(v_a_1882_);
lean_dec_ref(v_a_1881_);
lean_dec(v_a_1880_);
lean_dec_ref(v_a_1879_);
lean_dec(v_a_1878_);
lean_dec_ref(v_a_1877_);
lean_dec(v_a_1876_);
lean_dec_ref(v_a_1875_);
lean_dec(v_a_1874_);
lean_dec(v_a_1873_);
return v_res_1884_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f(lean_object* v_u_1889_, lean_object* v_type_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_){
_start:
{
lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v_smulType_1910_; lean_object* v___x_1911_; 
v___x_1902_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__1));
v___x_1903_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2);
v___x_1904_ = lean_box(0);
lean_inc(v_u_1889_);
v___x_1905_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1905_, 0, v_u_1889_);
lean_ctor_set(v___x_1905_, 1, v___x_1904_);
v___x_1906_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1906_, 0, v_u_1889_);
lean_ctor_set(v___x_1906_, 1, v___x_1905_);
v___x_1907_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1907_, 0, v___x_1903_);
lean_ctor_set(v___x_1907_, 1, v___x_1906_);
lean_inc_ref(v___x_1907_);
v___x_1908_ = l_Lean_mkConst(v___x_1902_, v___x_1907_);
v___x_1909_ = l_Lean_Int_mkType;
lean_inc_ref_n(v_type_1890_, 2);
v_smulType_1910_ = l_Lean_mkApp3(v___x_1908_, v___x_1909_, v_type_1890_, v_type_1890_);
v___x_1911_ = l_Lean_Meta_Grind_synthInstanceMeta_x3f(v_smulType_1910_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1948_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1948_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1914_ = v___x_1911_;
v_isShared_1915_ = v_isSharedCheck_1948_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_a_1912_);
lean_dec(v___x_1911_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1948_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
if (lean_obj_tag(v_a_1912_) == 1)
{
lean_object* v_val_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1943_; 
lean_del_object(v___x_1914_);
v_val_1916_ = lean_ctor_get(v_a_1912_, 0);
v_isSharedCheck_1943_ = !lean_is_exclusive(v_a_1912_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1918_ = v_a_1912_;
v_isShared_1919_ = v_isSharedCheck_1943_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_val_1916_);
lean_dec(v_a_1912_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1943_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; 
v___x_1920_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___closed__1));
v___x_1921_ = l_Lean_mkConst(v___x_1920_, v___x_1907_);
lean_inc_ref(v_type_1890_);
v___x_1922_ = l_Lean_mkApp4(v___x_1921_, v___x_1909_, v_type_1890_, v_type_1890_, v_val_1916_);
v___x_1923_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v___x_1922_, v_a_1891_, v_a_1892_, v_a_1893_, v_a_1894_, v_a_1895_, v_a_1896_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_);
if (lean_obj_tag(v___x_1923_) == 0)
{
lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1934_; 
v_a_1924_ = lean_ctor_get(v___x_1923_, 0);
v_isSharedCheck_1934_ = !lean_is_exclusive(v___x_1923_);
if (v_isSharedCheck_1934_ == 0)
{
v___x_1926_ = v___x_1923_;
v_isShared_1927_ = v_isSharedCheck_1934_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_dec(v___x_1923_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1934_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1929_; 
if (v_isShared_1919_ == 0)
{
lean_ctor_set(v___x_1918_, 0, v_a_1924_);
v___x_1929_ = v___x_1918_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v_a_1924_);
v___x_1929_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
lean_object* v___x_1931_; 
if (v_isShared_1927_ == 0)
{
lean_ctor_set(v___x_1926_, 0, v___x_1929_);
v___x_1931_ = v___x_1926_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v___x_1929_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
}
}
}
}
else
{
lean_object* v_a_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1942_; 
lean_del_object(v___x_1918_);
v_a_1935_ = lean_ctor_get(v___x_1923_, 0);
v_isSharedCheck_1942_ = !lean_is_exclusive(v___x_1923_);
if (v_isSharedCheck_1942_ == 0)
{
v___x_1937_ = v___x_1923_;
v_isShared_1938_ = v_isSharedCheck_1942_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_a_1935_);
lean_dec(v___x_1923_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1942_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
lean_object* v___x_1940_; 
if (v_isShared_1938_ == 0)
{
v___x_1940_ = v___x_1937_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v_a_1935_);
v___x_1940_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
return v___x_1940_;
}
}
}
}
}
else
{
lean_object* v___x_1944_; lean_object* v___x_1946_; 
lean_dec(v_a_1912_);
lean_dec_ref(v___x_1907_);
lean_dec_ref(v_type_1890_);
v___x_1944_ = lean_box(0);
if (v_isShared_1915_ == 0)
{
lean_ctor_set(v___x_1914_, 0, v___x_1944_);
v___x_1946_ = v___x_1914_;
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
lean_dec_ref(v___x_1907_);
lean_dec_ref(v_type_1890_);
return v___x_1911_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___boxed(lean_object* v_u_1949_, lean_object* v_type_1950_, lean_object* v_a_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_, lean_object* v_a_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_, lean_object* v_a_1961_){
_start:
{
lean_object* v_res_1962_; 
v_res_1962_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f(v_u_1949_, v_type_1950_, v_a_1951_, v_a_1952_, v_a_1953_, v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_, v_a_1958_, v_a_1959_, v_a_1960_);
lean_dec(v_a_1960_);
lean_dec_ref(v_a_1959_);
lean_dec(v_a_1958_);
lean_dec_ref(v_a_1957_);
lean_dec(v_a_1956_);
lean_dec_ref(v_a_1955_);
lean_dec(v_a_1954_);
lean_dec_ref(v_a_1953_);
lean_dec(v_a_1952_);
lean_dec(v_a_1951_);
return v_res_1962_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f(lean_object* v_u_1963_, lean_object* v_type_1964_, lean_object* v_a_1965_, lean_object* v_a_1966_, lean_object* v_a_1967_, lean_object* v_a_1968_, lean_object* v_a_1969_, lean_object* v_a_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_){
_start:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v_smulType_1984_; lean_object* v___x_1985_; 
v___x_1976_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__1));
v___x_1977_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2);
v___x_1978_ = lean_box(0);
lean_inc(v_u_1963_);
v___x_1979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1979_, 0, v_u_1963_);
lean_ctor_set(v___x_1979_, 1, v___x_1978_);
v___x_1980_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1980_, 0, v_u_1963_);
lean_ctor_set(v___x_1980_, 1, v___x_1979_);
v___x_1981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1981_, 0, v___x_1977_);
lean_ctor_set(v___x_1981_, 1, v___x_1980_);
lean_inc_ref(v___x_1981_);
v___x_1982_ = l_Lean_mkConst(v___x_1976_, v___x_1981_);
v___x_1983_ = l_Lean_Nat_mkType;
lean_inc_ref_n(v_type_1964_, 2);
v_smulType_1984_ = l_Lean_mkApp3(v___x_1982_, v___x_1983_, v_type_1964_, v_type_1964_);
v___x_1985_ = l_Lean_Meta_Grind_synthInstanceMeta_x3f(v_smulType_1984_, v_a_1971_, v_a_1972_, v_a_1973_, v_a_1974_);
if (lean_obj_tag(v___x_1985_) == 0)
{
lean_object* v_a_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_2022_; 
v_a_1986_ = lean_ctor_get(v___x_1985_, 0);
v_isSharedCheck_2022_ = !lean_is_exclusive(v___x_1985_);
if (v_isSharedCheck_2022_ == 0)
{
v___x_1988_ = v___x_1985_;
v_isShared_1989_ = v_isSharedCheck_2022_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_a_1986_);
lean_dec(v___x_1985_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_2022_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
if (lean_obj_tag(v_a_1986_) == 1)
{
lean_object* v_val_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_2017_; 
lean_del_object(v___x_1988_);
v_val_1990_ = lean_ctor_get(v_a_1986_, 0);
v_isSharedCheck_2017_ = !lean_is_exclusive(v_a_1986_);
if (v_isSharedCheck_2017_ == 0)
{
v___x_1992_ = v_a_1986_;
v_isShared_1993_ = v_isSharedCheck_2017_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_val_1990_);
lean_dec(v_a_1986_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_2017_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; 
v___x_1994_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___closed__1));
v___x_1995_ = l_Lean_mkConst(v___x_1994_, v___x_1981_);
lean_inc_ref(v_type_1964_);
v___x_1996_ = l_Lean_mkApp4(v___x_1995_, v___x_1983_, v_type_1964_, v_type_1964_, v_val_1990_);
v___x_1997_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v___x_1996_, v_a_1965_, v_a_1966_, v_a_1967_, v_a_1968_, v_a_1969_, v_a_1970_, v_a_1971_, v_a_1972_, v_a_1973_, v_a_1974_);
if (lean_obj_tag(v___x_1997_) == 0)
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2008_; 
v_a_1998_ = lean_ctor_get(v___x_1997_, 0);
v_isSharedCheck_2008_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2008_ == 0)
{
v___x_2000_ = v___x_1997_;
v_isShared_2001_ = v_isSharedCheck_2008_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1997_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2008_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_1993_ == 0)
{
lean_ctor_set(v___x_1992_, 0, v_a_1998_);
v___x_2003_ = v___x_1992_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v_a_1998_);
v___x_2003_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
lean_object* v___x_2005_; 
if (v_isShared_2001_ == 0)
{
lean_ctor_set(v___x_2000_, 0, v___x_2003_);
v___x_2005_ = v___x_2000_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v___x_2003_);
v___x_2005_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
return v___x_2005_;
}
}
}
}
else
{
lean_object* v_a_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2016_; 
lean_del_object(v___x_1992_);
v_a_2009_ = lean_ctor_get(v___x_1997_, 0);
v_isSharedCheck_2016_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_2011_ = v___x_1997_;
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_a_2009_);
lean_dec(v___x_1997_);
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
}
else
{
lean_object* v___x_2018_; lean_object* v___x_2020_; 
lean_dec(v_a_1986_);
lean_dec_ref(v___x_1981_);
lean_dec_ref(v_type_1964_);
v___x_2018_ = lean_box(0);
if (v_isShared_1989_ == 0)
{
lean_ctor_set(v___x_1988_, 0, v___x_2018_);
v___x_2020_ = v___x_1988_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v___x_2018_);
v___x_2020_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
return v___x_2020_;
}
}
}
}
else
{
lean_dec_ref(v___x_1981_);
lean_dec_ref(v_type_1964_);
return v___x_1985_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f___boxed(lean_object* v_u_2023_, lean_object* v_type_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_, lean_object* v_a_2032_, lean_object* v_a_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_){
_start:
{
lean_object* v_res_2036_; 
v_res_2036_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f(v_u_2023_, v_type_2024_, v_a_2025_, v_a_2026_, v_a_2027_, v_a_2028_, v_a_2029_, v_a_2030_, v_a_2031_, v_a_2032_, v_a_2033_, v_a_2034_);
lean_dec(v_a_2034_);
lean_dec_ref(v_a_2033_);
lean_dec(v_a_2032_);
lean_dec_ref(v_a_2031_);
lean_dec(v_a_2030_);
lean_dec_ref(v_a_2029_);
lean_dec(v_a_2028_);
lean_dec_ref(v_a_2027_);
lean_dec(v_a_2026_);
lean_dec(v_a_2025_);
return v_res_2036_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_2037_, lean_object* v_x_2038_, lean_object* v_x_2039_, lean_object* v_x_2040_){
_start:
{
lean_object* v_ks_2041_; lean_object* v_vs_2042_; lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2066_; 
v_ks_2041_ = lean_ctor_get(v_x_2037_, 0);
v_vs_2042_ = lean_ctor_get(v_x_2037_, 1);
v_isSharedCheck_2066_ = !lean_is_exclusive(v_x_2037_);
if (v_isSharedCheck_2066_ == 0)
{
v___x_2044_ = v_x_2037_;
v_isShared_2045_ = v_isSharedCheck_2066_;
goto v_resetjp_2043_;
}
else
{
lean_inc(v_vs_2042_);
lean_inc(v_ks_2041_);
lean_dec(v_x_2037_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2066_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
lean_object* v___x_2046_; uint8_t v___x_2047_; 
v___x_2046_ = lean_array_get_size(v_ks_2041_);
v___x_2047_ = lean_nat_dec_lt(v_x_2038_, v___x_2046_);
if (v___x_2047_ == 0)
{
lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2051_; 
lean_dec(v_x_2038_);
v___x_2048_ = lean_array_push(v_ks_2041_, v_x_2039_);
v___x_2049_ = lean_array_push(v_vs_2042_, v_x_2040_);
if (v_isShared_2045_ == 0)
{
lean_ctor_set(v___x_2044_, 1, v___x_2049_);
lean_ctor_set(v___x_2044_, 0, v___x_2048_);
v___x_2051_ = v___x_2044_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v___x_2048_);
lean_ctor_set(v_reuseFailAlloc_2052_, 1, v___x_2049_);
v___x_2051_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
return v___x_2051_;
}
}
else
{
lean_object* v_k_x27_2053_; uint8_t v___x_2054_; 
v_k_x27_2053_ = lean_array_fget_borrowed(v_ks_2041_, v_x_2038_);
v___x_2054_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_2039_, v_k_x27_2053_);
if (v___x_2054_ == 0)
{
lean_object* v___x_2056_; 
if (v_isShared_2045_ == 0)
{
v___x_2056_ = v___x_2044_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v_ks_2041_);
lean_ctor_set(v_reuseFailAlloc_2060_, 1, v_vs_2042_);
v___x_2056_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
lean_object* v___x_2057_; lean_object* v___x_2058_; 
v___x_2057_ = lean_unsigned_to_nat(1u);
v___x_2058_ = lean_nat_add(v_x_2038_, v___x_2057_);
lean_dec(v_x_2038_);
v_x_2037_ = v___x_2056_;
v_x_2038_ = v___x_2058_;
goto _start;
}
}
else
{
lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2064_; 
v___x_2061_ = lean_array_fset(v_ks_2041_, v_x_2038_, v_x_2039_);
v___x_2062_ = lean_array_fset(v_vs_2042_, v_x_2038_, v_x_2040_);
lean_dec(v_x_2038_);
if (v_isShared_2045_ == 0)
{
lean_ctor_set(v___x_2044_, 1, v___x_2062_);
lean_ctor_set(v___x_2044_, 0, v___x_2061_);
v___x_2064_ = v___x_2044_;
goto v_reusejp_2063_;
}
else
{
lean_object* v_reuseFailAlloc_2065_; 
v_reuseFailAlloc_2065_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2065_, 0, v___x_2061_);
lean_ctor_set(v_reuseFailAlloc_2065_, 1, v___x_2062_);
v___x_2064_ = v_reuseFailAlloc_2065_;
goto v_reusejp_2063_;
}
v_reusejp_2063_:
{
return v___x_2064_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_n_2067_, lean_object* v_k_2068_, lean_object* v_v_2069_){
_start:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; 
v___x_2070_ = lean_unsigned_to_nat(0u);
v___x_2071_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1_spec__2___redArg(v_n_2067_, v___x_2070_, v_k_2068_, v_v_2069_);
return v___x_2071_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_2072_; size_t v___x_2073_; size_t v___x_2074_; 
v___x_2072_ = ((size_t)5ULL);
v___x_2073_ = ((size_t)1ULL);
v___x_2074_ = lean_usize_shift_left(v___x_2073_, v___x_2072_);
return v___x_2074_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_2075_; size_t v___x_2076_; size_t v___x_2077_; 
v___x_2075_ = ((size_t)1ULL);
v___x_2076_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__0);
v___x_2077_ = lean_usize_sub(v___x_2076_, v___x_2075_);
return v___x_2077_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_2078_; 
v___x_2078_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg(lean_object* v_x_2079_, size_t v_x_2080_, size_t v_x_2081_, lean_object* v_x_2082_, lean_object* v_x_2083_){
_start:
{
if (lean_obj_tag(v_x_2079_) == 0)
{
lean_object* v_es_2084_; size_t v___x_2085_; size_t v___x_2086_; size_t v___x_2087_; size_t v___x_2088_; lean_object* v_j_2089_; lean_object* v___x_2090_; uint8_t v___x_2091_; 
v_es_2084_ = lean_ctor_get(v_x_2079_, 0);
v___x_2085_ = ((size_t)5ULL);
v___x_2086_ = ((size_t)1ULL);
v___x_2087_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1);
v___x_2088_ = lean_usize_land(v_x_2080_, v___x_2087_);
v_j_2089_ = lean_usize_to_nat(v___x_2088_);
v___x_2090_ = lean_array_get_size(v_es_2084_);
v___x_2091_ = lean_nat_dec_lt(v_j_2089_, v___x_2090_);
if (v___x_2091_ == 0)
{
lean_dec(v_j_2089_);
lean_dec(v_x_2083_);
lean_dec_ref(v_x_2082_);
return v_x_2079_;
}
else
{
lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2128_; 
lean_inc_ref(v_es_2084_);
v_isSharedCheck_2128_ = !lean_is_exclusive(v_x_2079_);
if (v_isSharedCheck_2128_ == 0)
{
lean_object* v_unused_2129_; 
v_unused_2129_ = lean_ctor_get(v_x_2079_, 0);
lean_dec(v_unused_2129_);
v___x_2093_ = v_x_2079_;
v_isShared_2094_ = v_isSharedCheck_2128_;
goto v_resetjp_2092_;
}
else
{
lean_dec(v_x_2079_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2128_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v_v_2095_; lean_object* v___x_2096_; lean_object* v_xs_x27_2097_; lean_object* v___y_2099_; 
v_v_2095_ = lean_array_fget(v_es_2084_, v_j_2089_);
v___x_2096_ = lean_box(0);
v_xs_x27_2097_ = lean_array_fset(v_es_2084_, v_j_2089_, v___x_2096_);
switch(lean_obj_tag(v_v_2095_))
{
case 0:
{
lean_object* v_key_2104_; lean_object* v_val_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2115_; 
v_key_2104_ = lean_ctor_get(v_v_2095_, 0);
v_val_2105_ = lean_ctor_get(v_v_2095_, 1);
v_isSharedCheck_2115_ = !lean_is_exclusive(v_v_2095_);
if (v_isSharedCheck_2115_ == 0)
{
v___x_2107_ = v_v_2095_;
v_isShared_2108_ = v_isSharedCheck_2115_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_val_2105_);
lean_inc(v_key_2104_);
lean_dec(v_v_2095_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2115_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
uint8_t v___x_2109_; 
v___x_2109_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_2082_, v_key_2104_);
if (v___x_2109_ == 0)
{
lean_object* v___x_2110_; lean_object* v___x_2111_; 
lean_del_object(v___x_2107_);
v___x_2110_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2104_, v_val_2105_, v_x_2082_, v_x_2083_);
v___x_2111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2110_);
v___y_2099_ = v___x_2111_;
goto v___jp_2098_;
}
else
{
lean_object* v___x_2113_; 
lean_dec(v_val_2105_);
lean_dec(v_key_2104_);
if (v_isShared_2108_ == 0)
{
lean_ctor_set(v___x_2107_, 1, v_x_2083_);
lean_ctor_set(v___x_2107_, 0, v_x_2082_);
v___x_2113_ = v___x_2107_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v_x_2082_);
lean_ctor_set(v_reuseFailAlloc_2114_, 1, v_x_2083_);
v___x_2113_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
v___y_2099_ = v___x_2113_;
goto v___jp_2098_;
}
}
}
}
case 1:
{
lean_object* v_node_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2126_; 
v_node_2116_ = lean_ctor_get(v_v_2095_, 0);
v_isSharedCheck_2126_ = !lean_is_exclusive(v_v_2095_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2118_ = v_v_2095_;
v_isShared_2119_ = v_isSharedCheck_2126_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_node_2116_);
lean_dec(v_v_2095_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2126_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
size_t v___x_2120_; size_t v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2124_; 
v___x_2120_ = lean_usize_shift_right(v_x_2080_, v___x_2085_);
v___x_2121_ = lean_usize_add(v_x_2081_, v___x_2086_);
v___x_2122_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg(v_node_2116_, v___x_2120_, v___x_2121_, v_x_2082_, v_x_2083_);
if (v_isShared_2119_ == 0)
{
lean_ctor_set(v___x_2118_, 0, v___x_2122_);
v___x_2124_ = v___x_2118_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v___x_2122_);
v___x_2124_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
v___y_2099_ = v___x_2124_;
goto v___jp_2098_;
}
}
}
default: 
{
lean_object* v___x_2127_; 
v___x_2127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2127_, 0, v_x_2082_);
lean_ctor_set(v___x_2127_, 1, v_x_2083_);
v___y_2099_ = v___x_2127_;
goto v___jp_2098_;
}
}
v___jp_2098_:
{
lean_object* v___x_2100_; lean_object* v___x_2102_; 
v___x_2100_ = lean_array_fset(v_xs_x27_2097_, v_j_2089_, v___y_2099_);
lean_dec(v_j_2089_);
if (v_isShared_2094_ == 0)
{
lean_ctor_set(v___x_2093_, 0, v___x_2100_);
v___x_2102_ = v___x_2093_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v___x_2100_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
}
}
}
else
{
lean_object* v_ks_2130_; lean_object* v_vs_2131_; lean_object* v___x_2133_; uint8_t v_isShared_2134_; uint8_t v_isSharedCheck_2151_; 
v_ks_2130_ = lean_ctor_get(v_x_2079_, 0);
v_vs_2131_ = lean_ctor_get(v_x_2079_, 1);
v_isSharedCheck_2151_ = !lean_is_exclusive(v_x_2079_);
if (v_isSharedCheck_2151_ == 0)
{
v___x_2133_ = v_x_2079_;
v_isShared_2134_ = v_isSharedCheck_2151_;
goto v_resetjp_2132_;
}
else
{
lean_inc(v_vs_2131_);
lean_inc(v_ks_2130_);
lean_dec(v_x_2079_);
v___x_2133_ = lean_box(0);
v_isShared_2134_ = v_isSharedCheck_2151_;
goto v_resetjp_2132_;
}
v_resetjp_2132_:
{
lean_object* v___x_2136_; 
if (v_isShared_2134_ == 0)
{
v___x_2136_ = v___x_2133_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v_ks_2130_);
lean_ctor_set(v_reuseFailAlloc_2150_, 1, v_vs_2131_);
v___x_2136_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
lean_object* v_newNode_2137_; uint8_t v___y_2139_; size_t v___x_2145_; uint8_t v___x_2146_; 
v_newNode_2137_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1___redArg(v___x_2136_, v_x_2082_, v_x_2083_);
v___x_2145_ = ((size_t)7ULL);
v___x_2146_ = lean_usize_dec_le(v___x_2145_, v_x_2081_);
if (v___x_2146_ == 0)
{
lean_object* v___x_2147_; lean_object* v___x_2148_; uint8_t v___x_2149_; 
v___x_2147_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2137_);
v___x_2148_ = lean_unsigned_to_nat(4u);
v___x_2149_ = lean_nat_dec_lt(v___x_2147_, v___x_2148_);
lean_dec(v___x_2147_);
v___y_2139_ = v___x_2149_;
goto v___jp_2138_;
}
else
{
v___y_2139_ = v___x_2146_;
goto v___jp_2138_;
}
v___jp_2138_:
{
if (v___y_2139_ == 0)
{
lean_object* v_ks_2140_; lean_object* v_vs_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; 
v_ks_2140_ = lean_ctor_get(v_newNode_2137_, 0);
lean_inc_ref(v_ks_2140_);
v_vs_2141_ = lean_ctor_get(v_newNode_2137_, 1);
lean_inc_ref(v_vs_2141_);
lean_dec_ref(v_newNode_2137_);
v___x_2142_ = lean_unsigned_to_nat(0u);
v___x_2143_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__2);
v___x_2144_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2___redArg(v_x_2081_, v_ks_2140_, v_vs_2141_, v___x_2142_, v___x_2143_);
lean_dec_ref(v_vs_2141_);
lean_dec_ref(v_ks_2140_);
return v___x_2144_;
}
else
{
return v_newNode_2137_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2___redArg(size_t v_depth_2152_, lean_object* v_keys_2153_, lean_object* v_vals_2154_, lean_object* v_i_2155_, lean_object* v_entries_2156_){
_start:
{
lean_object* v___x_2157_; uint8_t v___x_2158_; 
v___x_2157_ = lean_array_get_size(v_keys_2153_);
v___x_2158_ = lean_nat_dec_lt(v_i_2155_, v___x_2157_);
if (v___x_2158_ == 0)
{
lean_dec(v_i_2155_);
return v_entries_2156_;
}
else
{
lean_object* v_k_2159_; lean_object* v_v_2160_; uint64_t v___x_2161_; size_t v_h_2162_; size_t v___x_2163_; lean_object* v___x_2164_; size_t v___x_2165_; size_t v___x_2166_; size_t v___x_2167_; size_t v_h_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; 
v_k_2159_ = lean_array_fget_borrowed(v_keys_2153_, v_i_2155_);
v_v_2160_ = lean_array_fget_borrowed(v_vals_2154_, v_i_2155_);
v___x_2161_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_k_2159_);
v_h_2162_ = lean_uint64_to_usize(v___x_2161_);
v___x_2163_ = ((size_t)5ULL);
v___x_2164_ = lean_unsigned_to_nat(1u);
v___x_2165_ = ((size_t)1ULL);
v___x_2166_ = lean_usize_sub(v_depth_2152_, v___x_2165_);
v___x_2167_ = lean_usize_mul(v___x_2163_, v___x_2166_);
v_h_2168_ = lean_usize_shift_right(v_h_2162_, v___x_2167_);
v___x_2169_ = lean_nat_add(v_i_2155_, v___x_2164_);
lean_dec(v_i_2155_);
lean_inc(v_v_2160_);
lean_inc(v_k_2159_);
v___x_2170_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg(v_entries_2156_, v_h_2168_, v_depth_2152_, v_k_2159_, v_v_2160_);
v_i_2155_ = v___x_2169_;
v_entries_2156_ = v___x_2170_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_2172_, lean_object* v_keys_2173_, lean_object* v_vals_2174_, lean_object* v_i_2175_, lean_object* v_entries_2176_){
_start:
{
size_t v_depth_boxed_2177_; lean_object* v_res_2178_; 
v_depth_boxed_2177_ = lean_unbox_usize(v_depth_2172_);
lean_dec(v_depth_2172_);
v_res_2178_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2___redArg(v_depth_boxed_2177_, v_keys_2173_, v_vals_2174_, v_i_2175_, v_entries_2176_);
lean_dec_ref(v_vals_2174_);
lean_dec_ref(v_keys_2173_);
return v_res_2178_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_2179_, lean_object* v_x_2180_, lean_object* v_x_2181_, lean_object* v_x_2182_, lean_object* v_x_2183_){
_start:
{
size_t v_x_574731__boxed_2184_; size_t v_x_574732__boxed_2185_; lean_object* v_res_2186_; 
v_x_574731__boxed_2184_ = lean_unbox_usize(v_x_2180_);
lean_dec(v_x_2180_);
v_x_574732__boxed_2185_ = lean_unbox_usize(v_x_2181_);
lean_dec(v_x_2181_);
v_res_2186_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg(v_x_2179_, v_x_574731__boxed_2184_, v_x_574732__boxed_2185_, v_x_2182_, v_x_2183_);
return v_res_2186_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0___redArg(lean_object* v_x_2187_, lean_object* v_x_2188_, lean_object* v_x_2189_){
_start:
{
uint64_t v___x_2190_; size_t v___x_2191_; size_t v___x_2192_; lean_object* v___x_2193_; 
v___x_2190_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_2188_);
v___x_2191_ = lean_uint64_to_usize(v___x_2190_);
v___x_2192_ = ((size_t)1ULL);
v___x_2193_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg(v_x_2187_, v___x_2191_, v___x_2192_, v_x_2188_, v_x_2189_);
return v___x_2193_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__0(lean_object* v_type_2194_, lean_object* v_s_2195_){
_start:
{
lean_object* v_structs_2196_; lean_object* v_typeIdOf_2197_; lean_object* v_exprToStructId_2198_; lean_object* v_exprToStructIdEntries_2199_; lean_object* v_forbiddenNatModules_2200_; lean_object* v_natStructs_2201_; lean_object* v_natTypeIdOf_2202_; lean_object* v_exprToNatStructId_2203_; lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2212_; 
v_structs_2196_ = lean_ctor_get(v_s_2195_, 0);
v_typeIdOf_2197_ = lean_ctor_get(v_s_2195_, 1);
v_exprToStructId_2198_ = lean_ctor_get(v_s_2195_, 2);
v_exprToStructIdEntries_2199_ = lean_ctor_get(v_s_2195_, 3);
v_forbiddenNatModules_2200_ = lean_ctor_get(v_s_2195_, 4);
v_natStructs_2201_ = lean_ctor_get(v_s_2195_, 5);
v_natTypeIdOf_2202_ = lean_ctor_get(v_s_2195_, 6);
v_exprToNatStructId_2203_ = lean_ctor_get(v_s_2195_, 7);
v_isSharedCheck_2212_ = !lean_is_exclusive(v_s_2195_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2205_ = v_s_2195_;
v_isShared_2206_ = v_isSharedCheck_2212_;
goto v_resetjp_2204_;
}
else
{
lean_inc(v_exprToNatStructId_2203_);
lean_inc(v_natTypeIdOf_2202_);
lean_inc(v_natStructs_2201_);
lean_inc(v_forbiddenNatModules_2200_);
lean_inc(v_exprToStructIdEntries_2199_);
lean_inc(v_exprToStructId_2198_);
lean_inc(v_typeIdOf_2197_);
lean_inc(v_structs_2196_);
lean_dec(v_s_2195_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2212_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2210_; 
v___x_2207_ = lean_box(0);
v___x_2208_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0___redArg(v_forbiddenNatModules_2200_, v_type_2194_, v___x_2207_);
if (v_isShared_2206_ == 0)
{
lean_ctor_set(v___x_2205_, 4, v___x_2208_);
v___x_2210_ = v___x_2205_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v_structs_2196_);
lean_ctor_set(v_reuseFailAlloc_2211_, 1, v_typeIdOf_2197_);
lean_ctor_set(v_reuseFailAlloc_2211_, 2, v_exprToStructId_2198_);
lean_ctor_set(v_reuseFailAlloc_2211_, 3, v_exprToStructIdEntries_2199_);
lean_ctor_set(v_reuseFailAlloc_2211_, 4, v___x_2208_);
lean_ctor_set(v_reuseFailAlloc_2211_, 5, v_natStructs_2201_);
lean_ctor_set(v_reuseFailAlloc_2211_, 6, v_natTypeIdOf_2202_);
lean_ctor_set(v_reuseFailAlloc_2211_, 7, v_exprToNatStructId_2203_);
v___x_2210_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
return v___x_2210_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__1(lean_object* v_a_2213_, lean_object* v_00___2214_){
_start:
{
if (lean_obj_tag(v_a_2213_) == 0)
{
uint8_t v___x_2215_; 
v___x_2215_ = 0;
return v___x_2215_;
}
else
{
uint8_t v___x_2216_; 
v___x_2216_ = 1;
return v___x_2216_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__1___boxed(lean_object* v_a_2217_, lean_object* v_00___2218_){
_start:
{
uint8_t v_res_2219_; lean_object* v_r_2220_; 
v_res_2219_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__1(v_a_2217_, v_00___2218_);
lean_dec(v_a_2217_);
v_r_2220_ = lean_box(v_res_2219_);
return v_r_2220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__2(lean_object* v___x_2221_, lean_object* v_s_2222_){
_start:
{
lean_object* v_structs_2223_; lean_object* v_typeIdOf_2224_; lean_object* v_exprToStructId_2225_; lean_object* v_exprToStructIdEntries_2226_; lean_object* v_forbiddenNatModules_2227_; lean_object* v_natStructs_2228_; lean_object* v_natTypeIdOf_2229_; lean_object* v_exprToNatStructId_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2238_; 
v_structs_2223_ = lean_ctor_get(v_s_2222_, 0);
v_typeIdOf_2224_ = lean_ctor_get(v_s_2222_, 1);
v_exprToStructId_2225_ = lean_ctor_get(v_s_2222_, 2);
v_exprToStructIdEntries_2226_ = lean_ctor_get(v_s_2222_, 3);
v_forbiddenNatModules_2227_ = lean_ctor_get(v_s_2222_, 4);
v_natStructs_2228_ = lean_ctor_get(v_s_2222_, 5);
v_natTypeIdOf_2229_ = lean_ctor_get(v_s_2222_, 6);
v_exprToNatStructId_2230_ = lean_ctor_get(v_s_2222_, 7);
v_isSharedCheck_2238_ = !lean_is_exclusive(v_s_2222_);
if (v_isSharedCheck_2238_ == 0)
{
v___x_2232_ = v_s_2222_;
v_isShared_2233_ = v_isSharedCheck_2238_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_exprToNatStructId_2230_);
lean_inc(v_natTypeIdOf_2229_);
lean_inc(v_natStructs_2228_);
lean_inc(v_forbiddenNatModules_2227_);
lean_inc(v_exprToStructIdEntries_2226_);
lean_inc(v_exprToStructId_2225_);
lean_inc(v_typeIdOf_2224_);
lean_inc(v_structs_2223_);
lean_dec(v_s_2222_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2238_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2234_; lean_object* v___x_2236_; 
v___x_2234_ = lean_array_push(v_structs_2223_, v___x_2221_);
if (v_isShared_2233_ == 0)
{
lean_ctor_set(v___x_2232_, 0, v___x_2234_);
v___x_2236_ = v___x_2232_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v___x_2234_);
lean_ctor_set(v_reuseFailAlloc_2237_, 1, v_typeIdOf_2224_);
lean_ctor_set(v_reuseFailAlloc_2237_, 2, v_exprToStructId_2225_);
lean_ctor_set(v_reuseFailAlloc_2237_, 3, v_exprToStructIdEntries_2226_);
lean_ctor_set(v_reuseFailAlloc_2237_, 4, v_forbiddenNatModules_2227_);
lean_ctor_set(v_reuseFailAlloc_2237_, 5, v_natStructs_2228_);
lean_ctor_set(v_reuseFailAlloc_2237_, 6, v_natTypeIdOf_2229_);
lean_ctor_set(v_reuseFailAlloc_2237_, 7, v_exprToNatStructId_2230_);
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
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__4(void){
_start:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; 
v___x_2245_ = lean_unsigned_to_nat(32u);
v___x_2246_ = lean_mk_empty_array_with_capacity(v___x_2245_);
v___x_2247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2247_, 0, v___x_2246_);
return v___x_2247_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__5(void){
_start:
{
lean_object* v___x_2248_; 
v___x_2248_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2248_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__6(void){
_start:
{
lean_object* v___x_2249_; lean_object* v___x_2250_; 
v___x_2249_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__5, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__5);
v___x_2250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2250_, 0, v___x_2249_);
return v___x_2250_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__19(void){
_start:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2272_ = lean_unsigned_to_nat(0u);
v___x_2273_ = l_Lean_mkRawNatLit(v___x_2272_);
return v___x_2273_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__42(void){
_start:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; 
v___x_2307_ = l_Lean_Int_mkType;
v___x_2308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2308_, 0, v___x_2307_);
return v___x_2308_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__44(void){
_start:
{
lean_object* v___x_2310_; lean_object* v___x_2311_; 
v___x_2310_ = l_Lean_Nat_mkType;
v___x_2311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2310_);
return v___x_2311_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f(lean_object* v_type_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_, lean_object* v_a_2366_, lean_object* v_a_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_){
_start:
{
lean_object* v___y_2372_; lean_object* v___y_2376_; lean_object* v___y_2377_; lean_object* v___y_2387_; lean_object* v___y_2388_; uint8_t v___y_2389_; lean_object* v___y_2390_; lean_object* v___y_2391_; lean_object* v___y_2392_; lean_object* v___y_2393_; lean_object* v___y_2394_; lean_object* v___y_2395_; lean_object* v___y_2396_; lean_object* v___y_2397_; lean_object* v___y_2398_; lean_object* v___y_2399_; lean_object* v___y_2412_; lean_object* v___y_2413_; uint8_t v___y_2414_; lean_object* v___y_2415_; lean_object* v___y_2416_; lean_object* v___y_2417_; lean_object* v___y_2418_; lean_object* v___y_2419_; lean_object* v___y_2420_; lean_object* v___y_2421_; lean_object* v___y_2422_; lean_object* v___y_2423_; lean_object* v___y_2424_; lean_object* v___x_2437_; 
lean_inc_ref(v_type_2359_);
v___x_2437_ = l_Lean_Meta_getDecLevel_x3f(v_type_2359_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
if (lean_obj_tag(v___x_2437_) == 0)
{
lean_object* v_a_2438_; lean_object* v___x_2440_; uint8_t v_isShared_2441_; uint8_t v_isSharedCheck_3355_; 
v_a_2438_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_3355_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_3355_ == 0)
{
v___x_2440_ = v___x_2437_;
v_isShared_2441_ = v_isSharedCheck_3355_;
goto v_resetjp_2439_;
}
else
{
lean_inc(v_a_2438_);
lean_dec(v___x_2437_);
v___x_2440_ = lean_box(0);
v_isShared_2441_ = v_isSharedCheck_3355_;
goto v_resetjp_2439_;
}
v_resetjp_2439_:
{
if (lean_obj_tag(v_a_2438_) == 1)
{
lean_object* v_val_2442_; lean_object* v___x_2444_; uint8_t v_isShared_2445_; uint8_t v_isSharedCheck_3350_; 
lean_del_object(v___x_2440_);
v_val_2442_ = lean_ctor_get(v_a_2438_, 0);
v_isSharedCheck_3350_ = !lean_is_exclusive(v_a_2438_);
if (v_isSharedCheck_3350_ == 0)
{
v___x_2444_ = v_a_2438_;
v_isShared_2445_ = v_isSharedCheck_3350_;
goto v_resetjp_2443_;
}
else
{
lean_inc(v_val_2442_);
lean_dec(v_a_2438_);
v___x_2444_ = lean_box(0);
v_isShared_2445_ = v_isSharedCheck_3350_;
goto v_resetjp_2443_;
}
v_resetjp_2443_:
{
lean_object* v___x_2446_; 
lean_inc_ref(v_type_2359_);
v___x_2446_ = l_Lean_Meta_Grind_Arith_CommRing_getCommRingId_x3f(v_type_2359_, v_a_2360_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
if (lean_obj_tag(v___x_2446_) == 0)
{
lean_object* v_a_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_3349_; 
v_a_2447_ = lean_ctor_get(v___x_2446_, 0);
v_isSharedCheck_3349_ = !lean_is_exclusive(v___x_2446_);
if (v_isSharedCheck_3349_ == 0)
{
v___x_2449_ = v___x_2446_;
v_isShared_2450_ = v_isSharedCheck_3349_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_a_2447_);
lean_dec(v___x_2446_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_3349_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2451_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1));
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_2452_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v___x_2451_, v_val_2442_, v_type_2359_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
if (lean_obj_tag(v___x_2452_) == 0)
{
lean_object* v_a_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
v_a_2453_ = lean_ctor_get(v___x_2452_, 0);
lean_inc(v_a_2453_);
lean_dec_ref(v___x_2452_);
v___x_2454_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__3));
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_2455_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v___x_2454_, v_val_2442_, v_type_2359_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
if (lean_obj_tag(v___x_2455_) == 0)
{
lean_object* v_a_2456_; lean_object* v___x_2457_; 
v_a_2456_ = lean_ctor_get(v___x_2455_, 0);
lean_inc(v_a_2456_);
lean_dec_ref(v___x_2455_);
lean_inc(v_a_2453_);
lean_inc(v_a_2456_);
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_2457_ = l_Lean_Meta_Grind_mkLawfulOrderLTInst_x3f___redArg(v_val_2442_, v_type_2359_, v_a_2456_, v_a_2453_, v_a_2364_, v_a_2365_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
if (lean_obj_tag(v___x_2457_) == 0)
{
lean_object* v_a_2458_; lean_object* v___y_2460_; lean_object* v___y_2461_; lean_object* v___y_2462_; lean_object* v___y_2463_; lean_object* v___y_2464_; lean_object* v___y_2465_; lean_object* v___y_2466_; lean_object* v___y_2467_; lean_object* v___y_2468_; lean_object* v___y_2469_; uint8_t v___y_2470_; lean_object* v___y_2471_; lean_object* v___y_2472_; lean_object* v___y_2473_; lean_object* v___y_2474_; lean_object* v___y_2475_; lean_object* v___y_2476_; lean_object* v___y_2477_; lean_object* v___y_2478_; lean_object* v___y_2479_; lean_object* v___y_2480_; lean_object* v___y_2481_; lean_object* v___y_2482_; lean_object* v___y_2483_; lean_object* v_homomulFn_x3f_2484_; lean_object* v___y_2485_; lean_object* v___y_2486_; lean_object* v___y_2487_; lean_object* v___y_2488_; lean_object* v___y_2489_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___y_2493_; lean_object* v___y_2494_; lean_object* v___y_2533_; lean_object* v___y_2534_; lean_object* v___y_2535_; lean_object* v___y_2536_; lean_object* v___y_2537_; lean_object* v___y_2538_; lean_object* v___y_2539_; lean_object* v___y_2540_; lean_object* v___y_2541_; uint8_t v___y_2542_; lean_object* v___y_2543_; lean_object* v___y_2544_; lean_object* v___y_2545_; lean_object* v___y_2546_; lean_object* v___y_2547_; lean_object* v___y_2548_; lean_object* v___y_2549_; lean_object* v___y_2550_; lean_object* v___y_2551_; lean_object* v___y_2552_; lean_object* v___y_2553_; lean_object* v___y_2554_; lean_object* v___y_2555_; lean_object* v_ltFn_x3f_2556_; lean_object* v___y_2557_; lean_object* v___y_2558_; lean_object* v___y_2559_; lean_object* v___y_2560_; lean_object* v___y_2561_; lean_object* v___y_2562_; lean_object* v___y_2563_; lean_object* v___y_2564_; lean_object* v___y_2565_; lean_object* v___y_2566_; lean_object* v___y_2616_; lean_object* v___y_2617_; lean_object* v___y_2618_; lean_object* v___y_2619_; lean_object* v___y_2620_; lean_object* v___y_2621_; lean_object* v___y_2622_; lean_object* v___y_2623_; lean_object* v___y_2624_; uint8_t v___y_2625_; lean_object* v___y_2626_; lean_object* v___y_2627_; lean_object* v___y_2628_; lean_object* v___y_2629_; lean_object* v___y_2630_; lean_object* v___y_2631_; lean_object* v___y_2632_; lean_object* v___y_2633_; lean_object* v___y_2634_; lean_object* v___y_2635_; lean_object* v___y_2636_; lean_object* v___y_2637_; lean_object* v___y_2638_; lean_object* v_leFn_x3f_2639_; lean_object* v___y_2640_; lean_object* v___y_2641_; lean_object* v___y_2642_; lean_object* v___y_2643_; lean_object* v___y_2644_; lean_object* v___y_2645_; lean_object* v___y_2646_; lean_object* v___y_2647_; lean_object* v___y_2648_; lean_object* v___y_2649_; lean_object* v___y_2668_; lean_object* v___y_2669_; lean_object* v___y_2670_; lean_object* v___y_2671_; lean_object* v___y_2672_; lean_object* v___y_2673_; lean_object* v___y_2674_; lean_object* v___y_2675_; uint8_t v___y_2676_; lean_object* v___y_2677_; lean_object* v___y_2678_; lean_object* v___y_2679_; lean_object* v___y_2680_; lean_object* v___y_2681_; lean_object* v___y_2682_; lean_object* v___y_2683_; lean_object* v___y_2684_; lean_object* v___y_2685_; lean_object* v___y_2686_; lean_object* v___y_2687_; lean_object* v___y_2688_; lean_object* v_charInst_x3f_2689_; lean_object* v___y_2690_; lean_object* v___y_2691_; lean_object* v___y_2692_; lean_object* v___y_2693_; lean_object* v___y_2694_; lean_object* v___y_2695_; lean_object* v___y_2696_; lean_object* v___y_2697_; lean_object* v___y_2698_; lean_object* v___y_2699_; lean_object* v___x_2970_; 
v_a_2458_ = lean_ctor_get(v___x_2457_, 0);
lean_inc(v_a_2458_);
lean_dec_ref(v___x_2457_);
lean_inc(v_a_2453_);
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_2970_ = l_Lean_Meta_Grind_mkIsPreorderInst_x3f___redArg(v_val_2442_, v_type_2359_, v_a_2453_, v_a_2364_, v_a_2365_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
if (lean_obj_tag(v___x_2970_) == 0)
{
lean_object* v_a_2971_; lean_object* v___x_2972_; 
v_a_2971_ = lean_ctor_get(v___x_2970_, 0);
lean_inc(v_a_2971_);
lean_dec_ref(v___x_2970_);
lean_inc(v_a_2453_);
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_2972_ = l_Lean_Meta_Grind_mkIsPartialOrderInst_x3f___redArg(v_val_2442_, v_type_2359_, v_a_2453_, v_a_2364_, v_a_2365_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
if (lean_obj_tag(v___x_2972_) == 0)
{
lean_object* v_a_2973_; lean_object* v___x_2974_; 
v_a_2973_ = lean_ctor_get(v___x_2972_, 0);
lean_inc(v_a_2973_);
lean_dec_ref(v___x_2972_);
lean_inc(v_a_2453_);
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_2974_ = l_Lean_Meta_Grind_mkIsLinearOrderInst_x3f___redArg(v_val_2442_, v_type_2359_, v_a_2453_, v_a_2364_, v_a_2365_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
if (lean_obj_tag(v___x_2974_) == 0)
{
lean_object* v_a_2975_; lean_object* v___y_2977_; lean_object* v___y_2978_; lean_object* v___y_2979_; lean_object* v___y_2980_; lean_object* v___y_2981_; lean_object* v___y_2982_; lean_object* v___y_2983_; lean_object* v___y_2984_; lean_object* v___y_2985_; lean_object* v___y_2986_; lean_object* v___y_2987_; lean_object* v___y_2988_; lean_object* v___y_2989_; lean_object* v___y_2990_; lean_object* v___y_2991_; lean_object* v___y_2992_; lean_object* v___y_2993_; lean_object* v___y_2994_; lean_object* v___y_2995_; lean_object* v___y_2996_; uint8_t v___y_2997_; lean_object* v___x_3084_; 
v_a_2975_ = lean_ctor_get(v___x_2974_, 0);
lean_inc(v_a_2975_);
lean_dec_ref(v___x_2974_);
v___x_3084_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_2362_);
if (lean_obj_tag(v___x_3084_) == 0)
{
lean_object* v_a_3085_; uint8_t v_ring_3086_; lean_object* v___f_3087_; lean_object* v___y_3089_; lean_object* v___y_3090_; lean_object* v___y_3091_; lean_object* v___y_3092_; uint8_t v___y_3093_; lean_object* v___y_3094_; lean_object* v___y_3095_; lean_object* v___y_3096_; lean_object* v___y_3097_; lean_object* v___y_3098_; lean_object* v___y_3099_; lean_object* v___y_3100_; lean_object* v___y_3101_; lean_object* v___y_3102_; lean_object* v___y_3103_; lean_object* v___y_3104_; lean_object* v___y_3105_; lean_object* v___y_3106_; lean_object* v___y_3107_; lean_object* v___y_3108_; lean_object* v___y_3109_; lean_object* v___y_3143_; lean_object* v___y_3144_; lean_object* v___y_3145_; lean_object* v___y_3146_; uint8_t v___y_3147_; lean_object* v___y_3148_; lean_object* v___y_3149_; lean_object* v___y_3150_; lean_object* v___y_3151_; lean_object* v___y_3152_; lean_object* v___y_3153_; lean_object* v___y_3154_; lean_object* v___y_3155_; lean_object* v___y_3156_; lean_object* v___y_3157_; lean_object* v___y_3158_; lean_object* v___y_3159_; lean_object* v___y_3160_; lean_object* v___y_3161_; lean_object* v___y_3162_; lean_object* v___y_3165_; lean_object* v___y_3166_; uint8_t v___y_3167_; lean_object* v___y_3168_; lean_object* v___y_3169_; lean_object* v___y_3170_; lean_object* v___y_3171_; lean_object* v___y_3172_; lean_object* v___y_3173_; lean_object* v___y_3174_; lean_object* v___y_3175_; lean_object* v___y_3176_; lean_object* v___y_3177_; lean_object* v___y_3178_; lean_object* v___y_3179_; lean_object* v___y_3180_; lean_object* v___y_3181_; lean_object* v___y_3182_; lean_object* v___y_3183_; uint8_t v___y_3186_; 
v_a_3085_ = lean_ctor_get(v___x_3084_, 0);
lean_inc(v_a_3085_);
lean_dec_ref(v___x_3084_);
v_ring_3086_ = lean_ctor_get_uint8(v_a_3085_, sizeof(void*)*11 + 21);
lean_dec(v_a_3085_);
lean_inc_ref(v_type_2359_);
v___f_3087_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__0), 2, 1);
lean_closure_set(v___f_3087_, 0, v_type_2359_);
if (v_ring_3086_ == 0)
{
v___y_3186_ = v_ring_3086_;
goto v___jp_3185_;
}
else
{
lean_object* v___x_3271_; uint8_t v___x_3272_; 
v___x_3271_ = lean_box(0);
v___x_3272_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__1(v_a_2447_, v___x_3271_);
if (v___x_3272_ == 0)
{
v___y_3186_ = v___x_3272_;
goto v___jp_3185_;
}
else
{
if (lean_obj_tag(v_a_2971_) == 0)
{
lean_object* v___x_3273_; lean_object* v___x_3274_; 
lean_dec(v_a_2975_);
lean_dec(v_a_2973_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v___x_3273_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_3274_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_3273_, v___f_3087_, v_a_2360_);
if (lean_obj_tag(v___x_3274_) == 0)
{
lean_object* v___x_3276_; uint8_t v_isShared_3277_; uint8_t v_isSharedCheck_3282_; 
v_isSharedCheck_3282_ = !lean_is_exclusive(v___x_3274_);
if (v_isSharedCheck_3282_ == 0)
{
lean_object* v_unused_3283_; 
v_unused_3283_ = lean_ctor_get(v___x_3274_, 0);
lean_dec(v_unused_3283_);
v___x_3276_ = v___x_3274_;
v_isShared_3277_ = v_isSharedCheck_3282_;
goto v_resetjp_3275_;
}
else
{
lean_dec(v___x_3274_);
v___x_3276_ = lean_box(0);
v_isShared_3277_ = v_isSharedCheck_3282_;
goto v_resetjp_3275_;
}
v_resetjp_3275_:
{
lean_object* v___x_3278_; lean_object* v___x_3280_; 
v___x_3278_ = lean_box(0);
if (v_isShared_3277_ == 0)
{
lean_ctor_set(v___x_3276_, 0, v___x_3278_);
v___x_3280_ = v___x_3276_;
goto v_reusejp_3279_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v___x_3278_);
v___x_3280_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3279_;
}
v_reusejp_3279_:
{
return v___x_3280_;
}
}
}
else
{
lean_object* v_a_3284_; lean_object* v___x_3286_; uint8_t v_isShared_3287_; uint8_t v_isSharedCheck_3291_; 
v_a_3284_ = lean_ctor_get(v___x_3274_, 0);
v_isSharedCheck_3291_ = !lean_is_exclusive(v___x_3274_);
if (v_isSharedCheck_3291_ == 0)
{
v___x_3286_ = v___x_3274_;
v_isShared_3287_ = v_isSharedCheck_3291_;
goto v_resetjp_3285_;
}
else
{
lean_inc(v_a_3284_);
lean_dec(v___x_3274_);
v___x_3286_ = lean_box(0);
v_isShared_3287_ = v_isSharedCheck_3291_;
goto v_resetjp_3285_;
}
v_resetjp_3285_:
{
lean_object* v___x_3289_; 
if (v_isShared_3287_ == 0)
{
v___x_3289_ = v___x_3286_;
goto v_reusejp_3288_;
}
else
{
lean_object* v_reuseFailAlloc_3290_; 
v_reuseFailAlloc_3290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3290_, 0, v_a_3284_);
v___x_3289_ = v_reuseFailAlloc_3290_;
goto v_reusejp_3288_;
}
v_reusejp_3288_:
{
return v___x_3289_;
}
}
}
}
else
{
uint8_t v___x_3292_; 
v___x_3292_ = 0;
v___y_3186_ = v___x_3292_;
goto v___jp_3185_;
}
}
}
v___jp_3088_:
{
lean_object* v___x_3110_; 
v___x_3110_ = l_Lean_Meta_Grind_getConfig___redArg(v___y_3095_);
if (lean_obj_tag(v___x_3110_) == 0)
{
lean_object* v_a_3111_; uint8_t v_ring_3112_; 
v_a_3111_ = lean_ctor_get(v___x_3110_, 0);
lean_inc(v_a_3111_);
lean_dec_ref(v___x_3110_);
v_ring_3112_ = lean_ctor_get_uint8(v_a_3111_, sizeof(void*)*11 + 21);
lean_dec(v_a_3111_);
if (v_ring_3112_ == 0)
{
lean_dec_ref(v___f_3087_);
v___y_2977_ = v___y_3089_;
v___y_2978_ = v___y_3090_;
v___y_2979_ = v___y_3091_;
v___y_2980_ = v___y_3092_;
v___y_2981_ = v___y_3094_;
v___y_2982_ = v___y_3095_;
v___y_2983_ = v___y_3096_;
v___y_2984_ = v___y_3097_;
v___y_2985_ = v___y_3098_;
v___y_2986_ = v___y_3099_;
v___y_2987_ = v___y_3100_;
v___y_2988_ = v___y_3102_;
v___y_2989_ = v___y_3101_;
v___y_2990_ = v___y_3103_;
v___y_2991_ = v___y_3104_;
v___y_2992_ = v___y_3105_;
v___y_2993_ = v___y_3106_;
v___y_2994_ = v___y_3109_;
v___y_2995_ = v___y_3107_;
v___y_2996_ = v___y_3108_;
v___y_2997_ = v_ring_3112_;
goto v___jp_2976_;
}
else
{
lean_object* v___x_3113_; uint8_t v___x_3114_; 
v___x_3113_ = lean_box(0);
v___x_3114_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__1(v_a_2447_, v___x_3113_);
if (v___x_3114_ == 0)
{
lean_dec_ref(v___f_3087_);
v___y_2977_ = v___y_3089_;
v___y_2978_ = v___y_3090_;
v___y_2979_ = v___y_3091_;
v___y_2980_ = v___y_3092_;
v___y_2981_ = v___y_3094_;
v___y_2982_ = v___y_3095_;
v___y_2983_ = v___y_3096_;
v___y_2984_ = v___y_3097_;
v___y_2985_ = v___y_3098_;
v___y_2986_ = v___y_3099_;
v___y_2987_ = v___y_3100_;
v___y_2988_ = v___y_3102_;
v___y_2989_ = v___y_3101_;
v___y_2990_ = v___y_3103_;
v___y_2991_ = v___y_3104_;
v___y_2992_ = v___y_3105_;
v___y_2993_ = v___y_3106_;
v___y_2994_ = v___y_3109_;
v___y_2995_ = v___y_3107_;
v___y_2996_ = v___y_3108_;
v___y_2997_ = v___x_3114_;
goto v___jp_2976_;
}
else
{
if (lean_obj_tag(v___y_3109_) == 0)
{
lean_object* v___x_3115_; lean_object* v___x_3116_; 
lean_dec(v___y_3107_);
lean_dec_ref(v___y_3106_);
lean_dec_ref(v___y_3105_);
lean_dec(v___y_3104_);
lean_dec_ref(v___y_3100_);
lean_dec(v___y_3096_);
lean_dec(v___y_3094_);
lean_dec(v___y_3091_);
lean_dec(v___y_3089_);
lean_dec(v_a_2975_);
lean_dec(v_a_2973_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v___x_3115_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_3116_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_3115_, v___f_3087_, v___y_3098_);
if (lean_obj_tag(v___x_3116_) == 0)
{
lean_object* v___x_3118_; uint8_t v_isShared_3119_; uint8_t v_isSharedCheck_3124_; 
v_isSharedCheck_3124_ = !lean_is_exclusive(v___x_3116_);
if (v_isSharedCheck_3124_ == 0)
{
lean_object* v_unused_3125_; 
v_unused_3125_ = lean_ctor_get(v___x_3116_, 0);
lean_dec(v_unused_3125_);
v___x_3118_ = v___x_3116_;
v_isShared_3119_ = v_isSharedCheck_3124_;
goto v_resetjp_3117_;
}
else
{
lean_dec(v___x_3116_);
v___x_3118_ = lean_box(0);
v_isShared_3119_ = v_isSharedCheck_3124_;
goto v_resetjp_3117_;
}
v_resetjp_3117_:
{
lean_object* v___x_3120_; lean_object* v___x_3122_; 
v___x_3120_ = lean_box(0);
if (v_isShared_3119_ == 0)
{
lean_ctor_set(v___x_3118_, 0, v___x_3120_);
v___x_3122_ = v___x_3118_;
goto v_reusejp_3121_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v___x_3120_);
v___x_3122_ = v_reuseFailAlloc_3123_;
goto v_reusejp_3121_;
}
v_reusejp_3121_:
{
return v___x_3122_;
}
}
}
else
{
lean_object* v_a_3126_; lean_object* v___x_3128_; uint8_t v_isShared_3129_; uint8_t v_isSharedCheck_3133_; 
v_a_3126_ = lean_ctor_get(v___x_3116_, 0);
v_isSharedCheck_3133_ = !lean_is_exclusive(v___x_3116_);
if (v_isSharedCheck_3133_ == 0)
{
v___x_3128_ = v___x_3116_;
v_isShared_3129_ = v_isSharedCheck_3133_;
goto v_resetjp_3127_;
}
else
{
lean_inc(v_a_3126_);
lean_dec(v___x_3116_);
v___x_3128_ = lean_box(0);
v_isShared_3129_ = v_isSharedCheck_3133_;
goto v_resetjp_3127_;
}
v_resetjp_3127_:
{
lean_object* v___x_3131_; 
if (v_isShared_3129_ == 0)
{
v___x_3131_ = v___x_3128_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3132_; 
v_reuseFailAlloc_3132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3132_, 0, v_a_3126_);
v___x_3131_ = v_reuseFailAlloc_3132_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
return v___x_3131_;
}
}
}
}
else
{
lean_dec_ref(v___f_3087_);
v___y_2977_ = v___y_3089_;
v___y_2978_ = v___y_3090_;
v___y_2979_ = v___y_3091_;
v___y_2980_ = v___y_3092_;
v___y_2981_ = v___y_3094_;
v___y_2982_ = v___y_3095_;
v___y_2983_ = v___y_3096_;
v___y_2984_ = v___y_3097_;
v___y_2985_ = v___y_3098_;
v___y_2986_ = v___y_3099_;
v___y_2987_ = v___y_3100_;
v___y_2988_ = v___y_3102_;
v___y_2989_ = v___y_3101_;
v___y_2990_ = v___y_3103_;
v___y_2991_ = v___y_3104_;
v___y_2992_ = v___y_3105_;
v___y_2993_ = v___y_3106_;
v___y_2994_ = v___y_3109_;
v___y_2995_ = v___y_3107_;
v___y_2996_ = v___y_3108_;
v___y_2997_ = v___y_3093_;
goto v___jp_2976_;
}
}
}
}
else
{
lean_object* v_a_3134_; lean_object* v___x_3136_; uint8_t v_isShared_3137_; uint8_t v_isSharedCheck_3141_; 
lean_dec(v___y_3109_);
lean_dec(v___y_3107_);
lean_dec_ref(v___y_3106_);
lean_dec_ref(v___y_3105_);
lean_dec(v___y_3104_);
lean_dec_ref(v___y_3100_);
lean_dec(v___y_3096_);
lean_dec(v___y_3094_);
lean_dec(v___y_3091_);
lean_dec(v___y_3089_);
lean_dec_ref(v___f_3087_);
lean_dec(v_a_2975_);
lean_dec(v_a_2973_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3134_ = lean_ctor_get(v___x_3110_, 0);
v_isSharedCheck_3141_ = !lean_is_exclusive(v___x_3110_);
if (v_isSharedCheck_3141_ == 0)
{
v___x_3136_ = v___x_3110_;
v_isShared_3137_ = v_isSharedCheck_3141_;
goto v_resetjp_3135_;
}
else
{
lean_inc(v_a_3134_);
lean_dec(v___x_3110_);
v___x_3136_ = lean_box(0);
v_isShared_3137_ = v_isSharedCheck_3141_;
goto v_resetjp_3135_;
}
v_resetjp_3135_:
{
lean_object* v___x_3139_; 
if (v_isShared_3137_ == 0)
{
v___x_3139_ = v___x_3136_;
goto v_reusejp_3138_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v_a_3134_);
v___x_3139_ = v_reuseFailAlloc_3140_;
goto v_reusejp_3138_;
}
v_reusejp_3138_:
{
return v___x_3139_;
}
}
}
}
v___jp_3142_:
{
lean_object* v___x_3163_; 
v___x_3163_ = lean_box(0);
v___y_3089_ = v___y_3143_;
v___y_3090_ = v___y_3144_;
v___y_3091_ = v___y_3145_;
v___y_3092_ = v___y_3146_;
v___y_3093_ = v___y_3147_;
v___y_3094_ = v___y_3148_;
v___y_3095_ = v___y_3149_;
v___y_3096_ = v___y_3150_;
v___y_3097_ = v___y_3151_;
v___y_3098_ = v___y_3152_;
v___y_3099_ = v___y_3153_;
v___y_3100_ = v___y_3154_;
v___y_3101_ = v___y_3156_;
v___y_3102_ = v___y_3155_;
v___y_3103_ = v___y_3157_;
v___y_3104_ = v___y_3158_;
v___y_3105_ = v___y_3159_;
v___y_3106_ = v___y_3160_;
v___y_3107_ = v___y_3161_;
v___y_3108_ = v___y_3162_;
v___y_3109_ = v___x_3163_;
goto v___jp_3088_;
}
v___jp_3164_:
{
lean_object* v___x_3184_; 
v___x_3184_ = lean_box(0);
v___y_3143_ = v___x_3184_;
v___y_3144_ = v___y_3183_;
v___y_3145_ = v___y_3166_;
v___y_3146_ = v___y_3181_;
v___y_3147_ = v___y_3167_;
v___y_3148_ = v___y_3169_;
v___y_3149_ = v___y_3176_;
v___y_3150_ = v___y_3173_;
v___y_3151_ = v___y_3180_;
v___y_3152_ = v___y_3174_;
v___y_3153_ = v___y_3175_;
v___y_3154_ = v___y_3165_;
v___y_3155_ = v___y_3177_;
v___y_3156_ = v___y_3178_;
v___y_3157_ = v___y_3179_;
v___y_3158_ = v___y_3168_;
v___y_3159_ = v___y_3170_;
v___y_3160_ = v___y_3171_;
v___y_3161_ = v___y_3172_;
v___y_3162_ = v___y_3182_;
goto v___jp_3142_;
}
v___jp_3185_:
{
lean_object* v___x_3187_; 
lean_inc(v_a_2447_);
v___x_3187_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getCommRingInst_x3f(v_a_2447_, v_a_2360_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
if (lean_obj_tag(v___x_3187_) == 0)
{
lean_object* v_a_3188_; lean_object* v___x_3189_; 
v_a_3188_ = lean_ctor_get(v___x_3187_, 0);
lean_inc(v_a_3188_);
lean_dec_ref(v___x_3187_);
lean_inc(v_a_3188_);
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_3189_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg(v_val_2442_, v_type_2359_, v_a_3188_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
if (lean_obj_tag(v___x_3189_) == 0)
{
lean_object* v_a_3190_; lean_object* v___x_3191_; 
v_a_3190_ = lean_ctor_get(v___x_3189_, 0);
lean_inc(v_a_3190_);
lean_dec_ref(v___x_3189_);
lean_inc(v_a_3190_);
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_3191_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg(v_val_2442_, v_type_2359_, v_a_3190_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
if (lean_obj_tag(v___x_3191_) == 0)
{
lean_object* v_a_3192_; lean_object* v___x_3194_; uint8_t v_isShared_3195_; uint8_t v_isSharedCheck_3246_; 
v_a_3192_ = lean_ctor_get(v___x_3191_, 0);
v_isSharedCheck_3246_ = !lean_is_exclusive(v___x_3191_);
if (v_isSharedCheck_3246_ == 0)
{
v___x_3194_ = v___x_3191_;
v_isShared_3195_ = v_isSharedCheck_3246_;
goto v_resetjp_3193_;
}
else
{
lean_inc(v_a_3192_);
lean_dec(v___x_3191_);
v___x_3194_ = lean_box(0);
v_isShared_3195_ = v_isSharedCheck_3246_;
goto v_resetjp_3193_;
}
v_resetjp_3193_:
{
if (lean_obj_tag(v_a_3192_) == 1)
{
lean_object* v_val_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; 
lean_del_object(v___x_3194_);
v_val_3196_ = lean_ctor_get(v_a_3192_, 0);
lean_inc(v_val_3196_);
lean_dec_ref(v_a_3192_);
v___x_3197_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__62));
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_3198_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst(v___x_3197_, v_val_2442_, v_type_2359_, v_a_2360_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
if (lean_obj_tag(v___x_3198_) == 0)
{
lean_object* v_a_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; 
v_a_3199_ = lean_ctor_get(v___x_3198_, 0);
lean_inc(v_a_3199_);
lean_dec_ref(v___x_3198_);
v___x_3200_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__64));
v___x_3201_ = lean_box(0);
lean_inc(v_val_2442_);
v___x_3202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3202_, 0, v_val_2442_);
lean_ctor_set(v___x_3202_, 1, v___x_3201_);
lean_inc_ref(v___x_3202_);
lean_inc(v_val_2442_);
v___x_3203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3203_, 0, v_val_2442_);
lean_ctor_set(v___x_3203_, 1, v___x_3202_);
lean_inc_ref(v___x_3203_);
lean_inc(v_val_2442_);
v___x_3204_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3204_, 0, v_val_2442_);
lean_ctor_set(v___x_3204_, 1, v___x_3203_);
lean_inc_ref(v___x_3204_);
v___x_3205_ = l_Lean_mkConst(v___x_3200_, v___x_3204_);
lean_inc(v_a_3199_);
lean_inc_ref_n(v_type_2359_, 3);
v___x_3206_ = l_Lean_mkApp4(v___x_3205_, v_type_2359_, v_type_2359_, v_type_2359_, v_a_3199_);
v___x_3207_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v___x_3206_, v_a_2360_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
if (lean_obj_tag(v___x_3207_) == 0)
{
if (lean_obj_tag(v_a_2453_) == 1)
{
if (lean_obj_tag(v_a_2971_) == 1)
{
lean_object* v_a_3208_; lean_object* v_val_3209_; lean_object* v_val_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; 
v_a_3208_ = lean_ctor_get(v___x_3207_, 0);
lean_inc(v_a_3208_);
lean_dec_ref(v___x_3207_);
v_val_3209_ = lean_ctor_get(v_a_2453_, 0);
v_val_3210_ = lean_ctor_get(v_a_2971_, 0);
v___x_3211_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__66));
lean_inc_ref(v___x_3202_);
v___x_3212_ = l_Lean_mkConst(v___x_3211_, v___x_3202_);
lean_inc(v_val_3210_);
lean_inc(v_val_3209_);
lean_inc(v_a_3199_);
lean_inc_ref(v_type_2359_);
v___x_3213_ = l_Lean_mkApp4(v___x_3212_, v_type_2359_, v_a_3199_, v_val_3209_, v_val_3210_);
v___x_3214_ = l_Lean_Meta_Grind_synthInstanceMeta_x3f(v___x_3213_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
if (lean_obj_tag(v___x_3214_) == 0)
{
lean_object* v_a_3215_; 
v_a_3215_ = lean_ctor_get(v___x_3214_, 0);
lean_inc(v_a_3215_);
lean_dec_ref(v___x_3214_);
if (lean_obj_tag(v_a_3215_) == 0)
{
lean_dec_ref(v_a_2971_);
v___y_3143_ = v_a_3215_;
v___y_3144_ = v_a_2369_;
v___y_3145_ = v___x_3202_;
v___y_3146_ = v_a_2367_;
v___y_3147_ = v___y_3186_;
v___y_3148_ = v_a_3190_;
v___y_3149_ = v_a_2362_;
v___y_3150_ = v___x_3204_;
v___y_3151_ = v_a_2366_;
v___y_3152_ = v_a_2360_;
v___y_3153_ = v_a_2361_;
v___y_3154_ = v_val_3196_;
v___y_3155_ = v_a_2363_;
v___y_3156_ = v_a_2364_;
v___y_3157_ = v_a_2365_;
v___y_3158_ = v_a_3188_;
v___y_3159_ = v_a_3208_;
v___y_3160_ = v_a_3199_;
v___y_3161_ = v___x_3203_;
v___y_3162_ = v_a_2368_;
goto v___jp_3142_;
}
else
{
if (v___y_3186_ == 0)
{
v___y_3089_ = v_a_3215_;
v___y_3090_ = v_a_2369_;
v___y_3091_ = v___x_3202_;
v___y_3092_ = v_a_2367_;
v___y_3093_ = v___y_3186_;
v___y_3094_ = v_a_3190_;
v___y_3095_ = v_a_2362_;
v___y_3096_ = v___x_3204_;
v___y_3097_ = v_a_2366_;
v___y_3098_ = v_a_2360_;
v___y_3099_ = v_a_2361_;
v___y_3100_ = v_val_3196_;
v___y_3101_ = v_a_2364_;
v___y_3102_ = v_a_2363_;
v___y_3103_ = v_a_2365_;
v___y_3104_ = v_a_3188_;
v___y_3105_ = v_a_3208_;
v___y_3106_ = v_a_3199_;
v___y_3107_ = v___x_3203_;
v___y_3108_ = v_a_2368_;
v___y_3109_ = v_a_2971_;
goto v___jp_3088_;
}
else
{
lean_dec_ref(v_a_2971_);
v___y_3143_ = v_a_3215_;
v___y_3144_ = v_a_2369_;
v___y_3145_ = v___x_3202_;
v___y_3146_ = v_a_2367_;
v___y_3147_ = v___y_3186_;
v___y_3148_ = v_a_3190_;
v___y_3149_ = v_a_2362_;
v___y_3150_ = v___x_3204_;
v___y_3151_ = v_a_2366_;
v___y_3152_ = v_a_2360_;
v___y_3153_ = v_a_2361_;
v___y_3154_ = v_val_3196_;
v___y_3155_ = v_a_2363_;
v___y_3156_ = v_a_2364_;
v___y_3157_ = v_a_2365_;
v___y_3158_ = v_a_3188_;
v___y_3159_ = v_a_3208_;
v___y_3160_ = v_a_3199_;
v___y_3161_ = v___x_3203_;
v___y_3162_ = v_a_2368_;
goto v___jp_3142_;
}
}
}
else
{
lean_object* v_a_3216_; lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3223_; 
lean_dec_ref(v_a_2971_);
lean_dec(v_a_3208_);
lean_dec_ref(v_a_2453_);
lean_dec_ref(v___x_3204_);
lean_dec_ref(v___x_3203_);
lean_dec_ref(v___x_3202_);
lean_dec(v_a_3199_);
lean_dec(v_val_3196_);
lean_dec(v_a_3190_);
lean_dec(v_a_3188_);
lean_dec_ref(v___f_3087_);
lean_dec(v_a_2975_);
lean_dec(v_a_2973_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3216_ = lean_ctor_get(v___x_3214_, 0);
v_isSharedCheck_3223_ = !lean_is_exclusive(v___x_3214_);
if (v_isSharedCheck_3223_ == 0)
{
v___x_3218_ = v___x_3214_;
v_isShared_3219_ = v_isSharedCheck_3223_;
goto v_resetjp_3217_;
}
else
{
lean_inc(v_a_3216_);
lean_dec(v___x_3214_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3223_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
lean_object* v___x_3221_; 
if (v_isShared_3219_ == 0)
{
v___x_3221_ = v___x_3218_;
goto v_reusejp_3220_;
}
else
{
lean_object* v_reuseFailAlloc_3222_; 
v_reuseFailAlloc_3222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3222_, 0, v_a_3216_);
v___x_3221_ = v_reuseFailAlloc_3222_;
goto v_reusejp_3220_;
}
v_reusejp_3220_:
{
return v___x_3221_;
}
}
}
}
else
{
lean_object* v_a_3224_; 
lean_dec(v_a_2971_);
v_a_3224_ = lean_ctor_get(v___x_3207_, 0);
lean_inc(v_a_3224_);
lean_dec_ref(v___x_3207_);
v___y_3165_ = v_val_3196_;
v___y_3166_ = v___x_3202_;
v___y_3167_ = v___y_3186_;
v___y_3168_ = v_a_3188_;
v___y_3169_ = v_a_3190_;
v___y_3170_ = v_a_3224_;
v___y_3171_ = v_a_3199_;
v___y_3172_ = v___x_3203_;
v___y_3173_ = v___x_3204_;
v___y_3174_ = v_a_2360_;
v___y_3175_ = v_a_2361_;
v___y_3176_ = v_a_2362_;
v___y_3177_ = v_a_2363_;
v___y_3178_ = v_a_2364_;
v___y_3179_ = v_a_2365_;
v___y_3180_ = v_a_2366_;
v___y_3181_ = v_a_2367_;
v___y_3182_ = v_a_2368_;
v___y_3183_ = v_a_2369_;
goto v___jp_3164_;
}
}
else
{
lean_object* v_a_3225_; 
lean_dec(v_a_2971_);
v_a_3225_ = lean_ctor_get(v___x_3207_, 0);
lean_inc(v_a_3225_);
lean_dec_ref(v___x_3207_);
v___y_3165_ = v_val_3196_;
v___y_3166_ = v___x_3202_;
v___y_3167_ = v___y_3186_;
v___y_3168_ = v_a_3188_;
v___y_3169_ = v_a_3190_;
v___y_3170_ = v_a_3225_;
v___y_3171_ = v_a_3199_;
v___y_3172_ = v___x_3203_;
v___y_3173_ = v___x_3204_;
v___y_3174_ = v_a_2360_;
v___y_3175_ = v_a_2361_;
v___y_3176_ = v_a_2362_;
v___y_3177_ = v_a_2363_;
v___y_3178_ = v_a_2364_;
v___y_3179_ = v_a_2365_;
v___y_3180_ = v_a_2366_;
v___y_3181_ = v_a_2367_;
v___y_3182_ = v_a_2368_;
v___y_3183_ = v_a_2369_;
goto v___jp_3164_;
}
}
else
{
lean_object* v_a_3226_; lean_object* v___x_3228_; uint8_t v_isShared_3229_; uint8_t v_isSharedCheck_3233_; 
lean_dec_ref(v___x_3204_);
lean_dec_ref(v___x_3203_);
lean_dec_ref(v___x_3202_);
lean_dec(v_a_3199_);
lean_dec(v_val_3196_);
lean_dec(v_a_3190_);
lean_dec(v_a_3188_);
lean_dec_ref(v___f_3087_);
lean_dec(v_a_2975_);
lean_dec(v_a_2973_);
lean_dec(v_a_2971_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3226_ = lean_ctor_get(v___x_3207_, 0);
v_isSharedCheck_3233_ = !lean_is_exclusive(v___x_3207_);
if (v_isSharedCheck_3233_ == 0)
{
v___x_3228_ = v___x_3207_;
v_isShared_3229_ = v_isSharedCheck_3233_;
goto v_resetjp_3227_;
}
else
{
lean_inc(v_a_3226_);
lean_dec(v___x_3207_);
v___x_3228_ = lean_box(0);
v_isShared_3229_ = v_isSharedCheck_3233_;
goto v_resetjp_3227_;
}
v_resetjp_3227_:
{
lean_object* v___x_3231_; 
if (v_isShared_3229_ == 0)
{
v___x_3231_ = v___x_3228_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3232_; 
v_reuseFailAlloc_3232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3232_, 0, v_a_3226_);
v___x_3231_ = v_reuseFailAlloc_3232_;
goto v_reusejp_3230_;
}
v_reusejp_3230_:
{
return v___x_3231_;
}
}
}
}
else
{
lean_object* v_a_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3241_; 
lean_dec(v_val_3196_);
lean_dec(v_a_3190_);
lean_dec(v_a_3188_);
lean_dec_ref(v___f_3087_);
lean_dec(v_a_2975_);
lean_dec(v_a_2973_);
lean_dec(v_a_2971_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3234_ = lean_ctor_get(v___x_3198_, 0);
v_isSharedCheck_3241_ = !lean_is_exclusive(v___x_3198_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3236_ = v___x_3198_;
v_isShared_3237_ = v_isSharedCheck_3241_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_a_3234_);
lean_dec(v___x_3198_);
v___x_3236_ = lean_box(0);
v_isShared_3237_ = v_isSharedCheck_3241_;
goto v_resetjp_3235_;
}
v_resetjp_3235_:
{
lean_object* v___x_3239_; 
if (v_isShared_3237_ == 0)
{
v___x_3239_ = v___x_3236_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3240_; 
v_reuseFailAlloc_3240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3240_, 0, v_a_3234_);
v___x_3239_ = v_reuseFailAlloc_3240_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
return v___x_3239_;
}
}
}
}
else
{
lean_object* v___x_3242_; lean_object* v___x_3244_; 
lean_dec(v_a_3192_);
lean_dec(v_a_3190_);
lean_dec(v_a_3188_);
lean_dec_ref(v___f_3087_);
lean_dec(v_a_2975_);
lean_dec(v_a_2973_);
lean_dec(v_a_2971_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v___x_3242_ = lean_box(0);
if (v_isShared_3195_ == 0)
{
lean_ctor_set(v___x_3194_, 0, v___x_3242_);
v___x_3244_ = v___x_3194_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v___x_3242_);
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
lean_object* v_a_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3254_; 
lean_dec(v_a_3190_);
lean_dec(v_a_3188_);
lean_dec_ref(v___f_3087_);
lean_dec(v_a_2975_);
lean_dec(v_a_2973_);
lean_dec(v_a_2971_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3247_ = lean_ctor_get(v___x_3191_, 0);
v_isSharedCheck_3254_ = !lean_is_exclusive(v___x_3191_);
if (v_isSharedCheck_3254_ == 0)
{
v___x_3249_ = v___x_3191_;
v_isShared_3250_ = v_isSharedCheck_3254_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_a_3247_);
lean_dec(v___x_3191_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3254_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
lean_object* v___x_3252_; 
if (v_isShared_3250_ == 0)
{
v___x_3252_ = v___x_3249_;
goto v_reusejp_3251_;
}
else
{
lean_object* v_reuseFailAlloc_3253_; 
v_reuseFailAlloc_3253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3253_, 0, v_a_3247_);
v___x_3252_ = v_reuseFailAlloc_3253_;
goto v_reusejp_3251_;
}
v_reusejp_3251_:
{
return v___x_3252_;
}
}
}
}
else
{
lean_object* v_a_3255_; lean_object* v___x_3257_; uint8_t v_isShared_3258_; uint8_t v_isSharedCheck_3262_; 
lean_dec(v_a_3188_);
lean_dec_ref(v___f_3087_);
lean_dec(v_a_2975_);
lean_dec(v_a_2973_);
lean_dec(v_a_2971_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3255_ = lean_ctor_get(v___x_3189_, 0);
v_isSharedCheck_3262_ = !lean_is_exclusive(v___x_3189_);
if (v_isSharedCheck_3262_ == 0)
{
v___x_3257_ = v___x_3189_;
v_isShared_3258_ = v_isSharedCheck_3262_;
goto v_resetjp_3256_;
}
else
{
lean_inc(v_a_3255_);
lean_dec(v___x_3189_);
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
}
else
{
lean_object* v_a_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3270_; 
lean_dec_ref(v___f_3087_);
lean_dec(v_a_2975_);
lean_dec(v_a_2973_);
lean_dec(v_a_2971_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3263_ = lean_ctor_get(v___x_3187_, 0);
v_isSharedCheck_3270_ = !lean_is_exclusive(v___x_3187_);
if (v_isSharedCheck_3270_ == 0)
{
v___x_3265_ = v___x_3187_;
v_isShared_3266_ = v_isSharedCheck_3270_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_a_3263_);
lean_dec(v___x_3187_);
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
}
else
{
lean_object* v_a_3293_; lean_object* v___x_3295_; uint8_t v_isShared_3296_; uint8_t v_isSharedCheck_3300_; 
lean_dec(v_a_2975_);
lean_dec(v_a_2973_);
lean_dec(v_a_2971_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3293_ = lean_ctor_get(v___x_3084_, 0);
v_isSharedCheck_3300_ = !lean_is_exclusive(v___x_3084_);
if (v_isSharedCheck_3300_ == 0)
{
v___x_3295_ = v___x_3084_;
v_isShared_3296_ = v_isSharedCheck_3300_;
goto v_resetjp_3294_;
}
else
{
lean_inc(v_a_3293_);
lean_dec(v___x_3084_);
v___x_3295_ = lean_box(0);
v_isShared_3296_ = v_isSharedCheck_3300_;
goto v_resetjp_3294_;
}
v_resetjp_3294_:
{
lean_object* v___x_3298_; 
if (v_isShared_3296_ == 0)
{
v___x_3298_ = v___x_3295_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v_a_3293_);
v___x_3298_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
return v___x_3298_;
}
}
}
v___jp_2976_:
{
lean_object* v___x_2998_; lean_object* v___x_2999_; 
v___x_2998_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__50));
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
lean_inc(v___y_2994_);
lean_inc(v_a_2453_);
v___x_2999_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg(v_a_2453_, v___y_2994_, v_a_2973_, v___x_2998_, v_val_2442_, v_type_2359_, v___y_2989_, v___y_2990_, v___y_2984_, v___y_2980_, v___y_2996_, v___y_2978_);
if (lean_obj_tag(v___x_2999_) == 0)
{
lean_object* v_a_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; 
v_a_3000_ = lean_ctor_get(v___x_2999_, 0);
lean_inc(v_a_3000_);
lean_dec_ref(v___x_2999_);
v___x_3001_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__53));
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
lean_inc(v_a_2453_);
v___x_3002_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_checkToFieldDefEq_x3f___redArg(v_a_2453_, v_a_3000_, v_a_2975_, v___x_3001_, v_val_2442_, v_type_2359_, v___y_2989_, v___y_2990_, v___y_2984_, v___y_2980_, v___y_2996_, v___y_2978_);
if (lean_obj_tag(v___x_3002_) == 0)
{
lean_object* v_a_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; 
v_a_3003_ = lean_ctor_get(v___x_3002_, 0);
lean_inc(v_a_3003_);
lean_dec_ref(v___x_3002_);
v___x_3004_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__0));
v___x_3005_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkRingInst_x3f___redArg___closed__1));
v___x_3006_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkIntModuleInst_x3f___redArg___closed__2));
v___x_3007_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__55));
lean_inc(v___y_2979_);
v___x_3008_ = l_Lean_mkConst(v___x_3007_, v___y_2979_);
lean_inc_ref(v___y_2987_);
lean_inc_ref(v_type_2359_);
v___x_3009_ = l_Lean_mkAppB(v___x_3008_, v_type_2359_, v___y_2987_);
v___x_3010_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__56));
v___x_3011_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__58));
lean_inc(v___y_2979_);
v___x_3012_ = l_Lean_mkConst(v___x_3011_, v___y_2979_);
lean_inc_ref(v___x_3009_);
lean_inc_ref(v_type_2359_);
v___x_3013_ = l_Lean_mkAppB(v___x_3012_, v_type_2359_, v___x_3009_);
lean_inc(v___y_2981_);
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_3014_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkSemiringInst_x3f___redArg(v_val_2442_, v_type_2359_, v___y_2981_, v___y_2984_, v___y_2980_, v___y_2996_, v___y_2978_);
if (lean_obj_tag(v___x_3014_) == 0)
{
lean_object* v_a_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; 
v_a_3015_ = lean_ctor_get(v___x_3014_, 0);
lean_inc(v_a_3015_);
lean_dec_ref(v___x_3014_);
v___x_3016_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__60));
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_3017_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v___x_3016_, v_val_2442_, v_type_2359_, v___y_2984_, v___y_2980_, v___y_2996_, v___y_2978_);
if (lean_obj_tag(v___x_3017_) == 0)
{
lean_object* v_a_3018_; lean_object* v___x_3019_; 
v_a_3018_ = lean_ctor_get(v___x_3017_, 0);
lean_inc(v_a_3018_);
lean_dec_ref(v___x_3017_);
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_3019_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOne_x3f(v_val_2442_, v_type_2359_, v___y_2985_, v___y_2986_, v___y_2982_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2984_, v___y_2980_, v___y_2996_, v___y_2978_);
if (lean_obj_tag(v___x_3019_) == 0)
{
lean_object* v_a_3020_; lean_object* v___x_3021_; 
v_a_3020_ = lean_ctor_get(v___x_3019_, 0);
lean_inc(v_a_3020_);
lean_dec_ref(v___x_3019_);
lean_inc(v___y_2994_);
lean_inc(v_a_2456_);
lean_inc(v_a_2453_);
lean_inc(v_a_3015_);
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_3021_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkOrderedRingInst_x3f___redArg(v_val_2442_, v_type_2359_, v_a_3015_, v_a_2453_, v_a_2456_, v___y_2994_, v___y_2989_, v___y_2990_, v___y_2984_, v___y_2980_, v___y_2996_, v___y_2978_);
if (lean_obj_tag(v___x_3021_) == 0)
{
if (lean_obj_tag(v_a_3015_) == 1)
{
lean_object* v_a_3022_; lean_object* v_val_3023_; lean_object* v___x_3024_; 
v_a_3022_ = lean_ctor_get(v___x_3021_, 0);
lean_inc(v_a_3022_);
lean_dec_ref(v___x_3021_);
v_val_3023_ = lean_ctor_get(v_a_3015_, 0);
lean_inc(v_val_3023_);
lean_dec_ref(v_a_3015_);
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_3024_ = l_Lean_Meta_Grind_Arith_getIsCharInst_x3f(v_val_2442_, v_type_2359_, v_val_3023_, v___y_2985_, v___y_2986_, v___y_2982_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2984_, v___y_2980_, v___y_2996_, v___y_2978_);
if (lean_obj_tag(v___x_3024_) == 0)
{
lean_object* v_a_3025_; 
v_a_3025_ = lean_ctor_get(v___x_3024_, 0);
lean_inc(v_a_3025_);
lean_dec_ref(v___x_3024_);
v___y_2668_ = v___x_3013_;
v___y_2669_ = v_a_3003_;
v___y_2670_ = v_a_3022_;
v___y_2671_ = v___y_2979_;
v___y_2672_ = v___y_2977_;
v___y_2673_ = v___x_3005_;
v___y_2674_ = v___y_2981_;
v___y_2675_ = v___x_3010_;
v___y_2676_ = v___y_2997_;
v___y_2677_ = v___y_2983_;
v___y_2678_ = v___x_3004_;
v___y_2679_ = v___x_3009_;
v___y_2680_ = v___y_2987_;
v___y_2681_ = v___y_2991_;
v___y_2682_ = v___y_2992_;
v___y_2683_ = v___y_2993_;
v___y_2684_ = v___y_2994_;
v___y_2685_ = v___x_3006_;
v___y_2686_ = v___y_2995_;
v___y_2687_ = v_a_3020_;
v___y_2688_ = v_a_3018_;
v_charInst_x3f_2689_ = v_a_3025_;
v___y_2690_ = v___y_2985_;
v___y_2691_ = v___y_2986_;
v___y_2692_ = v___y_2982_;
v___y_2693_ = v___y_2988_;
v___y_2694_ = v___y_2989_;
v___y_2695_ = v___y_2990_;
v___y_2696_ = v___y_2984_;
v___y_2697_ = v___y_2980_;
v___y_2698_ = v___y_2996_;
v___y_2699_ = v___y_2978_;
goto v___jp_2667_;
}
else
{
lean_object* v_a_3026_; lean_object* v___x_3028_; uint8_t v_isShared_3029_; uint8_t v_isSharedCheck_3033_; 
lean_dec(v_a_3022_);
lean_dec(v_a_3020_);
lean_dec(v_a_3018_);
lean_dec_ref(v___x_3013_);
lean_dec_ref(v___x_3009_);
lean_dec(v_a_3003_);
lean_dec(v___y_2995_);
lean_dec(v___y_2994_);
lean_dec_ref(v___y_2993_);
lean_dec_ref(v___y_2992_);
lean_dec(v___y_2991_);
lean_dec_ref(v___y_2987_);
lean_dec(v___y_2983_);
lean_dec(v___y_2981_);
lean_dec(v___y_2979_);
lean_dec(v___y_2977_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3026_ = lean_ctor_get(v___x_3024_, 0);
v_isSharedCheck_3033_ = !lean_is_exclusive(v___x_3024_);
if (v_isSharedCheck_3033_ == 0)
{
v___x_3028_ = v___x_3024_;
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
else
{
lean_inc(v_a_3026_);
lean_dec(v___x_3024_);
v___x_3028_ = lean_box(0);
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
v_resetjp_3027_:
{
lean_object* v___x_3031_; 
if (v_isShared_3029_ == 0)
{
v___x_3031_ = v___x_3028_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3032_; 
v_reuseFailAlloc_3032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3032_, 0, v_a_3026_);
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
else
{
lean_object* v_a_3034_; lean_object* v___x_3035_; 
lean_dec(v_a_3015_);
v_a_3034_ = lean_ctor_get(v___x_3021_, 0);
lean_inc(v_a_3034_);
lean_dec_ref(v___x_3021_);
v___x_3035_ = lean_box(0);
v___y_2668_ = v___x_3013_;
v___y_2669_ = v_a_3003_;
v___y_2670_ = v_a_3034_;
v___y_2671_ = v___y_2979_;
v___y_2672_ = v___y_2977_;
v___y_2673_ = v___x_3005_;
v___y_2674_ = v___y_2981_;
v___y_2675_ = v___x_3010_;
v___y_2676_ = v___y_2997_;
v___y_2677_ = v___y_2983_;
v___y_2678_ = v___x_3004_;
v___y_2679_ = v___x_3009_;
v___y_2680_ = v___y_2987_;
v___y_2681_ = v___y_2991_;
v___y_2682_ = v___y_2992_;
v___y_2683_ = v___y_2993_;
v___y_2684_ = v___y_2994_;
v___y_2685_ = v___x_3006_;
v___y_2686_ = v___y_2995_;
v___y_2687_ = v_a_3020_;
v___y_2688_ = v_a_3018_;
v_charInst_x3f_2689_ = v___x_3035_;
v___y_2690_ = v___y_2985_;
v___y_2691_ = v___y_2986_;
v___y_2692_ = v___y_2982_;
v___y_2693_ = v___y_2988_;
v___y_2694_ = v___y_2989_;
v___y_2695_ = v___y_2990_;
v___y_2696_ = v___y_2984_;
v___y_2697_ = v___y_2980_;
v___y_2698_ = v___y_2996_;
v___y_2699_ = v___y_2978_;
goto v___jp_2667_;
}
}
else
{
lean_object* v_a_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3043_; 
lean_dec(v_a_3020_);
lean_dec(v_a_3018_);
lean_dec(v_a_3015_);
lean_dec_ref(v___x_3013_);
lean_dec_ref(v___x_3009_);
lean_dec(v_a_3003_);
lean_dec(v___y_2995_);
lean_dec(v___y_2994_);
lean_dec_ref(v___y_2993_);
lean_dec_ref(v___y_2992_);
lean_dec(v___y_2991_);
lean_dec_ref(v___y_2987_);
lean_dec(v___y_2983_);
lean_dec(v___y_2981_);
lean_dec(v___y_2979_);
lean_dec(v___y_2977_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3036_ = lean_ctor_get(v___x_3021_, 0);
v_isSharedCheck_3043_ = !lean_is_exclusive(v___x_3021_);
if (v_isSharedCheck_3043_ == 0)
{
v___x_3038_ = v___x_3021_;
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_a_3036_);
lean_dec(v___x_3021_);
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
}
else
{
lean_object* v_a_3044_; lean_object* v___x_3046_; uint8_t v_isShared_3047_; uint8_t v_isSharedCheck_3051_; 
lean_dec(v_a_3018_);
lean_dec(v_a_3015_);
lean_dec_ref(v___x_3013_);
lean_dec_ref(v___x_3009_);
lean_dec(v_a_3003_);
lean_dec(v___y_2995_);
lean_dec(v___y_2994_);
lean_dec_ref(v___y_2993_);
lean_dec_ref(v___y_2992_);
lean_dec(v___y_2991_);
lean_dec_ref(v___y_2987_);
lean_dec(v___y_2983_);
lean_dec(v___y_2981_);
lean_dec(v___y_2979_);
lean_dec(v___y_2977_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3044_ = lean_ctor_get(v___x_3019_, 0);
v_isSharedCheck_3051_ = !lean_is_exclusive(v___x_3019_);
if (v_isSharedCheck_3051_ == 0)
{
v___x_3046_ = v___x_3019_;
v_isShared_3047_ = v_isSharedCheck_3051_;
goto v_resetjp_3045_;
}
else
{
lean_inc(v_a_3044_);
lean_dec(v___x_3019_);
v___x_3046_ = lean_box(0);
v_isShared_3047_ = v_isSharedCheck_3051_;
goto v_resetjp_3045_;
}
v_resetjp_3045_:
{
lean_object* v___x_3049_; 
if (v_isShared_3047_ == 0)
{
v___x_3049_ = v___x_3046_;
goto v_reusejp_3048_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v_a_3044_);
v___x_3049_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3048_;
}
v_reusejp_3048_:
{
return v___x_3049_;
}
}
}
}
else
{
lean_object* v_a_3052_; lean_object* v___x_3054_; uint8_t v_isShared_3055_; uint8_t v_isSharedCheck_3059_; 
lean_dec(v_a_3015_);
lean_dec_ref(v___x_3013_);
lean_dec_ref(v___x_3009_);
lean_dec(v_a_3003_);
lean_dec(v___y_2995_);
lean_dec(v___y_2994_);
lean_dec_ref(v___y_2993_);
lean_dec_ref(v___y_2992_);
lean_dec(v___y_2991_);
lean_dec_ref(v___y_2987_);
lean_dec(v___y_2983_);
lean_dec(v___y_2981_);
lean_dec(v___y_2979_);
lean_dec(v___y_2977_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3052_ = lean_ctor_get(v___x_3017_, 0);
v_isSharedCheck_3059_ = !lean_is_exclusive(v___x_3017_);
if (v_isSharedCheck_3059_ == 0)
{
v___x_3054_ = v___x_3017_;
v_isShared_3055_ = v_isSharedCheck_3059_;
goto v_resetjp_3053_;
}
else
{
lean_inc(v_a_3052_);
lean_dec(v___x_3017_);
v___x_3054_ = lean_box(0);
v_isShared_3055_ = v_isSharedCheck_3059_;
goto v_resetjp_3053_;
}
v_resetjp_3053_:
{
lean_object* v___x_3057_; 
if (v_isShared_3055_ == 0)
{
v___x_3057_ = v___x_3054_;
goto v_reusejp_3056_;
}
else
{
lean_object* v_reuseFailAlloc_3058_; 
v_reuseFailAlloc_3058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3058_, 0, v_a_3052_);
v___x_3057_ = v_reuseFailAlloc_3058_;
goto v_reusejp_3056_;
}
v_reusejp_3056_:
{
return v___x_3057_;
}
}
}
}
else
{
lean_object* v_a_3060_; lean_object* v___x_3062_; uint8_t v_isShared_3063_; uint8_t v_isSharedCheck_3067_; 
lean_dec_ref(v___x_3013_);
lean_dec_ref(v___x_3009_);
lean_dec(v_a_3003_);
lean_dec(v___y_2995_);
lean_dec(v___y_2994_);
lean_dec_ref(v___y_2993_);
lean_dec_ref(v___y_2992_);
lean_dec(v___y_2991_);
lean_dec_ref(v___y_2987_);
lean_dec(v___y_2983_);
lean_dec(v___y_2981_);
lean_dec(v___y_2979_);
lean_dec(v___y_2977_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3060_ = lean_ctor_get(v___x_3014_, 0);
v_isSharedCheck_3067_ = !lean_is_exclusive(v___x_3014_);
if (v_isSharedCheck_3067_ == 0)
{
v___x_3062_ = v___x_3014_;
v_isShared_3063_ = v_isSharedCheck_3067_;
goto v_resetjp_3061_;
}
else
{
lean_inc(v_a_3060_);
lean_dec(v___x_3014_);
v___x_3062_ = lean_box(0);
v_isShared_3063_ = v_isSharedCheck_3067_;
goto v_resetjp_3061_;
}
v_resetjp_3061_:
{
lean_object* v___x_3065_; 
if (v_isShared_3063_ == 0)
{
v___x_3065_ = v___x_3062_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v_a_3060_);
v___x_3065_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
return v___x_3065_;
}
}
}
}
else
{
lean_object* v_a_3068_; lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3075_; 
lean_dec(v___y_2995_);
lean_dec(v___y_2994_);
lean_dec_ref(v___y_2993_);
lean_dec_ref(v___y_2992_);
lean_dec(v___y_2991_);
lean_dec_ref(v___y_2987_);
lean_dec(v___y_2983_);
lean_dec(v___y_2981_);
lean_dec(v___y_2979_);
lean_dec(v___y_2977_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3068_ = lean_ctor_get(v___x_3002_, 0);
v_isSharedCheck_3075_ = !lean_is_exclusive(v___x_3002_);
if (v_isSharedCheck_3075_ == 0)
{
v___x_3070_ = v___x_3002_;
v_isShared_3071_ = v_isSharedCheck_3075_;
goto v_resetjp_3069_;
}
else
{
lean_inc(v_a_3068_);
lean_dec(v___x_3002_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3075_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
lean_object* v___x_3073_; 
if (v_isShared_3071_ == 0)
{
v___x_3073_ = v___x_3070_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v_a_3068_);
v___x_3073_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
return v___x_3073_;
}
}
}
}
else
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3083_; 
lean_dec(v___y_2995_);
lean_dec(v___y_2994_);
lean_dec_ref(v___y_2993_);
lean_dec_ref(v___y_2992_);
lean_dec(v___y_2991_);
lean_dec_ref(v___y_2987_);
lean_dec(v___y_2983_);
lean_dec(v___y_2981_);
lean_dec(v___y_2979_);
lean_dec(v___y_2977_);
lean_dec(v_a_2975_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3076_ = lean_ctor_get(v___x_2999_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_2999_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3078_ = v___x_2999_;
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v___x_2999_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3081_; 
if (v_isShared_3079_ == 0)
{
v___x_3081_ = v___x_3078_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_a_3076_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
return v___x_3081_;
}
}
}
}
}
else
{
lean_object* v_a_3301_; lean_object* v___x_3303_; uint8_t v_isShared_3304_; uint8_t v_isSharedCheck_3308_; 
lean_dec(v_a_2973_);
lean_dec(v_a_2971_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3301_ = lean_ctor_get(v___x_2974_, 0);
v_isSharedCheck_3308_ = !lean_is_exclusive(v___x_2974_);
if (v_isSharedCheck_3308_ == 0)
{
v___x_3303_ = v___x_2974_;
v_isShared_3304_ = v_isSharedCheck_3308_;
goto v_resetjp_3302_;
}
else
{
lean_inc(v_a_3301_);
lean_dec(v___x_2974_);
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
else
{
lean_object* v_a_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3316_; 
lean_dec(v_a_2971_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3309_ = lean_ctor_get(v___x_2972_, 0);
v_isSharedCheck_3316_ = !lean_is_exclusive(v___x_2972_);
if (v_isSharedCheck_3316_ == 0)
{
v___x_3311_ = v___x_2972_;
v_isShared_3312_ = v_isSharedCheck_3316_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_a_3309_);
lean_dec(v___x_2972_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3316_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
lean_object* v___x_3314_; 
if (v_isShared_3312_ == 0)
{
v___x_3314_ = v___x_3311_;
goto v_reusejp_3313_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v_a_3309_);
v___x_3314_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3313_;
}
v_reusejp_3313_:
{
return v___x_3314_;
}
}
}
}
else
{
lean_object* v_a_3317_; lean_object* v___x_3319_; uint8_t v_isShared_3320_; uint8_t v_isSharedCheck_3324_; 
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3317_ = lean_ctor_get(v___x_2970_, 0);
v_isSharedCheck_3324_ = !lean_is_exclusive(v___x_2970_);
if (v_isSharedCheck_3324_ == 0)
{
v___x_3319_ = v___x_2970_;
v_isShared_3320_ = v_isSharedCheck_3324_;
goto v_resetjp_3318_;
}
else
{
lean_inc(v_a_3317_);
lean_dec(v___x_2970_);
v___x_3319_ = lean_box(0);
v_isShared_3320_ = v_isSharedCheck_3324_;
goto v_resetjp_3318_;
}
v_resetjp_3318_:
{
lean_object* v___x_3322_; 
if (v_isShared_3320_ == 0)
{
v___x_3322_ = v___x_3319_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3323_; 
v_reuseFailAlloc_3323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3323_, 0, v_a_3317_);
v___x_3322_ = v_reuseFailAlloc_3323_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
return v___x_3322_;
}
}
}
v___jp_2459_:
{
lean_object* v___x_2495_; 
v___x_2495_ = l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(v___y_2485_, v___y_2493_);
if (lean_obj_tag(v___x_2495_) == 0)
{
lean_object* v_a_2496_; lean_object* v_structs_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; size_t v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___f_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; 
v_a_2496_ = lean_ctor_get(v___x_2495_, 0);
lean_inc(v_a_2496_);
lean_dec_ref(v___x_2495_);
v_structs_2497_ = lean_ctor_get(v_a_2496_, 0);
lean_inc_ref(v_structs_2497_);
lean_dec(v_a_2496_);
v___x_2498_ = lean_array_get_size(v_structs_2497_);
lean_dec_ref(v_structs_2497_);
v___x_2499_ = lean_unsigned_to_nat(32u);
v___x_2500_ = lean_mk_empty_array_with_capacity(v___x_2499_);
v___x_2501_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__4, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__4);
v___x_2502_ = ((size_t)5ULL);
lean_inc(v___y_2473_);
v___x_2503_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2503_, 0, v___x_2501_);
lean_ctor_set(v___x_2503_, 1, v___x_2500_);
lean_ctor_set(v___x_2503_, 2, v___y_2473_);
lean_ctor_set(v___x_2503_, 3, v___y_2473_);
lean_ctor_set_usize(v___x_2503_, 4, v___x_2502_);
v___x_2504_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__6, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__6);
v___x_2505_ = lean_box(0);
v___x_2506_ = lean_box(0);
lean_inc_ref_n(v___x_2503_, 7);
lean_inc(v___y_2481_);
lean_inc(v___y_2461_);
lean_inc(v___y_2482_);
lean_inc(v___y_2464_);
lean_inc(v___y_2467_);
v___x_2507_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v___x_2507_, 0, v___x_2498_);
lean_ctor_set(v___x_2507_, 1, v_a_2447_);
lean_ctor_set(v___x_2507_, 2, v_type_2359_);
lean_ctor_set(v___x_2507_, 3, v_val_2442_);
lean_ctor_set(v___x_2507_, 4, v___y_2475_);
lean_ctor_set(v___x_2507_, 5, v_a_2453_);
lean_ctor_set(v___x_2507_, 6, v_a_2456_);
lean_ctor_set(v___x_2507_, 7, v_a_2458_);
lean_ctor_set(v___x_2507_, 8, v___y_2480_);
lean_ctor_set(v___x_2507_, 9, v___y_2465_);
lean_ctor_set(v___x_2507_, 10, v___y_2463_);
lean_ctor_set(v___x_2507_, 11, v___y_2478_);
lean_ctor_set(v___x_2507_, 12, v___y_2467_);
lean_ctor_set(v___x_2507_, 13, v___y_2477_);
lean_ctor_set(v___x_2507_, 14, v___y_2464_);
lean_ctor_set(v___x_2507_, 15, v___y_2482_);
lean_ctor_set(v___x_2507_, 16, v___y_2461_);
lean_ctor_set(v___x_2507_, 17, v___y_2471_);
lean_ctor_set(v___x_2507_, 18, v___y_2469_);
lean_ctor_set(v___x_2507_, 19, v___y_2481_);
lean_ctor_set(v___x_2507_, 20, v___y_2460_);
lean_ctor_set(v___x_2507_, 21, v___y_2462_);
lean_ctor_set(v___x_2507_, 22, v___y_2479_);
lean_ctor_set(v___x_2507_, 23, v___y_2474_);
lean_ctor_set(v___x_2507_, 24, v___y_2476_);
lean_ctor_set(v___x_2507_, 25, v___y_2472_);
lean_ctor_set(v___x_2507_, 26, v___y_2468_);
lean_ctor_set(v___x_2507_, 27, v_homomulFn_x3f_2484_);
lean_ctor_set(v___x_2507_, 28, v___y_2466_);
lean_ctor_set(v___x_2507_, 29, v___y_2483_);
lean_ctor_set(v___x_2507_, 30, v___x_2503_);
lean_ctor_set(v___x_2507_, 31, v___x_2504_);
lean_ctor_set(v___x_2507_, 32, v___x_2503_);
lean_ctor_set(v___x_2507_, 33, v___x_2503_);
lean_ctor_set(v___x_2507_, 34, v___x_2503_);
lean_ctor_set(v___x_2507_, 35, v___x_2503_);
lean_ctor_set(v___x_2507_, 36, v___x_2505_);
lean_ctor_set(v___x_2507_, 37, v___x_2504_);
lean_ctor_set(v___x_2507_, 38, v___x_2503_);
lean_ctor_set(v___x_2507_, 39, v___x_2506_);
lean_ctor_set(v___x_2507_, 40, v___x_2503_);
lean_ctor_set(v___x_2507_, 41, v___x_2503_);
lean_ctor_set_uint8(v___x_2507_, sizeof(void*)*42, v___y_2470_);
v___f_2508_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___lam__2), 2, 1);
lean_closure_set(v___f_2508_, 0, v___x_2507_);
v___x_2509_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_2510_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2509_, v___f_2508_, v___y_2485_);
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_dec_ref(v___x_2510_);
if (lean_obj_tag(v___y_2481_) == 1)
{
if (lean_obj_tag(v___y_2467_) == 0)
{
lean_dec_ref(v___y_2481_);
lean_dec(v___y_2482_);
lean_dec(v___y_2464_);
lean_dec(v___y_2461_);
v___y_2372_ = v___x_2498_;
goto v___jp_2371_;
}
else
{
lean_dec_ref(v___y_2467_);
if (lean_obj_tag(v___y_2464_) == 0)
{
if (v___y_2470_ == 0)
{
if (lean_obj_tag(v___y_2482_) == 0)
{
lean_object* v_val_2511_; uint8_t v___x_2512_; 
v_val_2511_ = lean_ctor_get(v___y_2481_, 0);
lean_inc(v_val_2511_);
lean_dec_ref(v___y_2481_);
v___x_2512_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isNonTrivialIsCharInst(v___y_2461_);
lean_dec(v___y_2461_);
if (v___x_2512_ == 0)
{
lean_dec(v_val_2511_);
v___y_2372_ = v___x_2498_;
goto v___jp_2371_;
}
else
{
v___y_2387_ = v___y_2490_;
v___y_2388_ = v___y_2493_;
v___y_2389_ = v___y_2470_;
v___y_2390_ = v___y_2487_;
v___y_2391_ = v___y_2488_;
v___y_2392_ = v___x_2498_;
v___y_2393_ = v___y_2492_;
v___y_2394_ = v___y_2494_;
v___y_2395_ = v_val_2511_;
v___y_2396_ = v___y_2486_;
v___y_2397_ = v___y_2489_;
v___y_2398_ = v___y_2491_;
v___y_2399_ = v___y_2485_;
goto v___jp_2386_;
}
}
else
{
lean_object* v_val_2513_; 
lean_dec_ref(v___y_2482_);
lean_dec(v___y_2461_);
v_val_2513_ = lean_ctor_get(v___y_2481_, 0);
lean_inc(v_val_2513_);
lean_dec_ref(v___y_2481_);
v___y_2387_ = v___y_2490_;
v___y_2388_ = v___y_2493_;
v___y_2389_ = v___y_2470_;
v___y_2390_ = v___y_2487_;
v___y_2391_ = v___y_2488_;
v___y_2392_ = v___x_2498_;
v___y_2393_ = v___y_2492_;
v___y_2394_ = v___y_2494_;
v___y_2395_ = v_val_2513_;
v___y_2396_ = v___y_2486_;
v___y_2397_ = v___y_2489_;
v___y_2398_ = v___y_2491_;
v___y_2399_ = v___y_2485_;
goto v___jp_2386_;
}
}
else
{
lean_object* v_val_2514_; 
lean_dec(v___y_2482_);
lean_dec(v___y_2461_);
v_val_2514_ = lean_ctor_get(v___y_2481_, 0);
lean_inc(v_val_2514_);
lean_dec_ref(v___y_2481_);
v___y_2412_ = v___y_2490_;
v___y_2413_ = v___y_2493_;
v___y_2414_ = v___y_2470_;
v___y_2415_ = v___y_2487_;
v___y_2416_ = v___y_2488_;
v___y_2417_ = v___x_2498_;
v___y_2418_ = v___y_2492_;
v___y_2419_ = v___y_2494_;
v___y_2420_ = v_val_2514_;
v___y_2421_ = v___y_2486_;
v___y_2422_ = v___y_2489_;
v___y_2423_ = v___y_2491_;
v___y_2424_ = v___y_2485_;
goto v___jp_2411_;
}
}
else
{
lean_object* v_val_2515_; 
lean_dec_ref(v___y_2464_);
lean_dec(v___y_2482_);
lean_dec(v___y_2461_);
v_val_2515_ = lean_ctor_get(v___y_2481_, 0);
lean_inc(v_val_2515_);
lean_dec_ref(v___y_2481_);
v___y_2412_ = v___y_2490_;
v___y_2413_ = v___y_2493_;
v___y_2414_ = v___y_2470_;
v___y_2415_ = v___y_2487_;
v___y_2416_ = v___y_2488_;
v___y_2417_ = v___x_2498_;
v___y_2418_ = v___y_2492_;
v___y_2419_ = v___y_2494_;
v___y_2420_ = v_val_2515_;
v___y_2421_ = v___y_2486_;
v___y_2422_ = v___y_2489_;
v___y_2423_ = v___y_2491_;
v___y_2424_ = v___y_2485_;
goto v___jp_2411_;
}
}
}
else
{
lean_dec(v___y_2482_);
lean_dec(v___y_2481_);
lean_dec(v___y_2467_);
lean_dec(v___y_2464_);
lean_dec(v___y_2461_);
v___y_2372_ = v___x_2498_;
goto v___jp_2371_;
}
}
else
{
lean_object* v_a_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2523_; 
lean_dec(v___y_2482_);
lean_dec(v___y_2481_);
lean_dec(v___y_2467_);
lean_dec(v___y_2464_);
lean_dec(v___y_2461_);
v_a_2516_ = lean_ctor_get(v___x_2510_, 0);
v_isSharedCheck_2523_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2523_ == 0)
{
v___x_2518_ = v___x_2510_;
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_a_2516_);
lean_dec(v___x_2510_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2521_; 
if (v_isShared_2519_ == 0)
{
v___x_2521_ = v___x_2518_;
goto v_reusejp_2520_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v_a_2516_);
v___x_2521_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2520_;
}
v_reusejp_2520_:
{
return v___x_2521_;
}
}
}
}
else
{
lean_object* v_a_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2531_; 
lean_dec(v_homomulFn_x3f_2484_);
lean_dec_ref(v___y_2483_);
lean_dec(v___y_2482_);
lean_dec(v___y_2481_);
lean_dec(v___y_2480_);
lean_dec_ref(v___y_2479_);
lean_dec(v___y_2478_);
lean_dec(v___y_2477_);
lean_dec_ref(v___y_2476_);
lean_dec_ref(v___y_2475_);
lean_dec_ref(v___y_2474_);
lean_dec(v___y_2473_);
lean_dec(v___y_2472_);
lean_dec_ref(v___y_2471_);
lean_dec_ref(v___y_2469_);
lean_dec(v___y_2468_);
lean_dec(v___y_2467_);
lean_dec_ref(v___y_2466_);
lean_dec(v___y_2465_);
lean_dec(v___y_2464_);
lean_dec(v___y_2463_);
lean_dec(v___y_2462_);
lean_dec(v___y_2461_);
lean_dec(v___y_2460_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_dec(v_a_2447_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2524_ = lean_ctor_get(v___x_2495_, 0);
v_isSharedCheck_2531_ = !lean_is_exclusive(v___x_2495_);
if (v_isSharedCheck_2531_ == 0)
{
v___x_2526_ = v___x_2495_;
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_a_2524_);
lean_dec(v___x_2495_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___x_2529_; 
if (v_isShared_2527_ == 0)
{
v___x_2529_ = v___x_2526_;
goto v_reusejp_2528_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v_a_2524_);
v___x_2529_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2528_;
}
v_reusejp_2528_:
{
return v___x_2529_;
}
}
}
}
v___jp_2532_:
{
lean_object* v___x_2567_; 
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_2567_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f(v_val_2442_, v_type_2359_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_);
if (lean_obj_tag(v___x_2567_) == 0)
{
lean_object* v_a_2568_; lean_object* v___x_2569_; 
v_a_2568_ = lean_ctor_get(v___x_2567_, 0);
lean_inc(v_a_2568_);
lean_dec_ref(v___x_2567_);
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_2569_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatFn_x3f(v_val_2442_, v_type_2359_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_);
if (lean_obj_tag(v___x_2569_) == 0)
{
if (lean_obj_tag(v___y_2549_) == 0)
{
lean_object* v_a_2570_; 
lean_dec(v___y_2544_);
lean_del_object(v___x_2444_);
v_a_2570_ = lean_ctor_get(v___x_2569_, 0);
lean_inc(v_a_2570_);
lean_dec_ref(v___x_2569_);
v___y_2460_ = v___y_2534_;
v___y_2461_ = v___y_2535_;
v___y_2462_ = v_ltFn_x3f_2556_;
v___y_2463_ = v___y_2536_;
v___y_2464_ = v___y_2537_;
v___y_2465_ = v___y_2538_;
v___y_2466_ = v___y_2539_;
v___y_2467_ = v___y_2540_;
v___y_2468_ = v_a_2570_;
v___y_2469_ = v___y_2541_;
v___y_2470_ = v___y_2542_;
v___y_2471_ = v___y_2543_;
v___y_2472_ = v_a_2568_;
v___y_2473_ = v___y_2545_;
v___y_2474_ = v___y_2546_;
v___y_2475_ = v___y_2547_;
v___y_2476_ = v___y_2548_;
v___y_2477_ = v___y_2549_;
v___y_2478_ = v___y_2550_;
v___y_2479_ = v___y_2551_;
v___y_2480_ = v___y_2552_;
v___y_2481_ = v___y_2553_;
v___y_2482_ = v___y_2554_;
v___y_2483_ = v___y_2555_;
v_homomulFn_x3f_2484_ = v___y_2533_;
v___y_2485_ = v___y_2557_;
v___y_2486_ = v___y_2558_;
v___y_2487_ = v___y_2559_;
v___y_2488_ = v___y_2560_;
v___y_2489_ = v___y_2561_;
v___y_2490_ = v___y_2562_;
v___y_2491_ = v___y_2563_;
v___y_2492_ = v___y_2564_;
v___y_2493_ = v___y_2565_;
v___y_2494_ = v___y_2566_;
goto v___jp_2459_;
}
else
{
lean_object* v_a_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
lean_dec(v___y_2533_);
v_a_2571_ = lean_ctor_get(v___x_2569_, 0);
lean_inc(v_a_2571_);
lean_dec_ref(v___x_2569_);
v___x_2572_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__8));
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_2573_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst(v___x_2572_, v_val_2442_, v_type_2359_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_);
if (lean_obj_tag(v___x_2573_) == 0)
{
lean_object* v_a_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; 
v_a_2574_ = lean_ctor_get(v___x_2573_, 0);
lean_inc(v_a_2574_);
lean_dec_ref(v___x_2573_);
v___x_2575_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__10));
v___x_2576_ = l_Lean_mkConst(v___x_2575_, v___y_2544_);
lean_inc_ref_n(v_type_2359_, 3);
v___x_2577_ = l_Lean_mkApp4(v___x_2576_, v_type_2359_, v_type_2359_, v_type_2359_, v_a_2574_);
v___x_2578_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v___x_2577_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_);
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_object* v_a_2579_; lean_object* v___x_2581_; 
v_a_2579_ = lean_ctor_get(v___x_2578_, 0);
lean_inc(v_a_2579_);
lean_dec_ref(v___x_2578_);
if (v_isShared_2445_ == 0)
{
lean_ctor_set(v___x_2444_, 0, v_a_2579_);
v___x_2581_ = v___x_2444_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v_a_2579_);
v___x_2581_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
v___y_2460_ = v___y_2534_;
v___y_2461_ = v___y_2535_;
v___y_2462_ = v_ltFn_x3f_2556_;
v___y_2463_ = v___y_2536_;
v___y_2464_ = v___y_2537_;
v___y_2465_ = v___y_2538_;
v___y_2466_ = v___y_2539_;
v___y_2467_ = v___y_2540_;
v___y_2468_ = v_a_2571_;
v___y_2469_ = v___y_2541_;
v___y_2470_ = v___y_2542_;
v___y_2471_ = v___y_2543_;
v___y_2472_ = v_a_2568_;
v___y_2473_ = v___y_2545_;
v___y_2474_ = v___y_2546_;
v___y_2475_ = v___y_2547_;
v___y_2476_ = v___y_2548_;
v___y_2477_ = v___y_2549_;
v___y_2478_ = v___y_2550_;
v___y_2479_ = v___y_2551_;
v___y_2480_ = v___y_2552_;
v___y_2481_ = v___y_2553_;
v___y_2482_ = v___y_2554_;
v___y_2483_ = v___y_2555_;
v_homomulFn_x3f_2484_ = v___x_2581_;
v___y_2485_ = v___y_2557_;
v___y_2486_ = v___y_2558_;
v___y_2487_ = v___y_2559_;
v___y_2488_ = v___y_2560_;
v___y_2489_ = v___y_2561_;
v___y_2490_ = v___y_2562_;
v___y_2491_ = v___y_2563_;
v___y_2492_ = v___y_2564_;
v___y_2493_ = v___y_2565_;
v___y_2494_ = v___y_2566_;
goto v___jp_2459_;
}
}
else
{
lean_object* v_a_2583_; lean_object* v___x_2585_; uint8_t v_isShared_2586_; uint8_t v_isSharedCheck_2590_; 
lean_dec_ref(v___y_2549_);
lean_dec(v_a_2571_);
lean_dec(v_a_2568_);
lean_dec(v_ltFn_x3f_2556_);
lean_dec_ref(v___y_2555_);
lean_dec(v___y_2554_);
lean_dec(v___y_2553_);
lean_dec(v___y_2552_);
lean_dec_ref(v___y_2551_);
lean_dec(v___y_2550_);
lean_dec_ref(v___y_2548_);
lean_dec_ref(v___y_2547_);
lean_dec_ref(v___y_2546_);
lean_dec(v___y_2545_);
lean_dec_ref(v___y_2543_);
lean_dec_ref(v___y_2541_);
lean_dec(v___y_2540_);
lean_dec_ref(v___y_2539_);
lean_dec(v___y_2538_);
lean_dec(v___y_2537_);
lean_dec(v___y_2536_);
lean_dec(v___y_2535_);
lean_dec(v___y_2534_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2583_ = lean_ctor_get(v___x_2578_, 0);
v_isSharedCheck_2590_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2590_ == 0)
{
v___x_2585_ = v___x_2578_;
v_isShared_2586_ = v_isSharedCheck_2590_;
goto v_resetjp_2584_;
}
else
{
lean_inc(v_a_2583_);
lean_dec(v___x_2578_);
v___x_2585_ = lean_box(0);
v_isShared_2586_ = v_isSharedCheck_2590_;
goto v_resetjp_2584_;
}
v_resetjp_2584_:
{
lean_object* v___x_2588_; 
if (v_isShared_2586_ == 0)
{
v___x_2588_ = v___x_2585_;
goto v_reusejp_2587_;
}
else
{
lean_object* v_reuseFailAlloc_2589_; 
v_reuseFailAlloc_2589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2589_, 0, v_a_2583_);
v___x_2588_ = v_reuseFailAlloc_2589_;
goto v_reusejp_2587_;
}
v_reusejp_2587_:
{
return v___x_2588_;
}
}
}
}
else
{
lean_object* v_a_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2598_; 
lean_dec_ref(v___y_2549_);
lean_dec(v_a_2571_);
lean_dec(v_a_2568_);
lean_dec(v_ltFn_x3f_2556_);
lean_dec_ref(v___y_2555_);
lean_dec(v___y_2554_);
lean_dec(v___y_2553_);
lean_dec(v___y_2552_);
lean_dec_ref(v___y_2551_);
lean_dec(v___y_2550_);
lean_dec_ref(v___y_2548_);
lean_dec_ref(v___y_2547_);
lean_dec_ref(v___y_2546_);
lean_dec(v___y_2545_);
lean_dec(v___y_2544_);
lean_dec_ref(v___y_2543_);
lean_dec_ref(v___y_2541_);
lean_dec(v___y_2540_);
lean_dec_ref(v___y_2539_);
lean_dec(v___y_2538_);
lean_dec(v___y_2537_);
lean_dec(v___y_2536_);
lean_dec(v___y_2535_);
lean_dec(v___y_2534_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2591_ = lean_ctor_get(v___x_2573_, 0);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2593_ = v___x_2573_;
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_a_2591_);
lean_dec(v___x_2573_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2596_; 
if (v_isShared_2594_ == 0)
{
v___x_2596_ = v___x_2593_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v_a_2591_);
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
lean_object* v_a_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2606_; 
lean_dec(v_a_2568_);
lean_dec(v_ltFn_x3f_2556_);
lean_dec_ref(v___y_2555_);
lean_dec(v___y_2554_);
lean_dec(v___y_2553_);
lean_dec(v___y_2552_);
lean_dec_ref(v___y_2551_);
lean_dec(v___y_2550_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
lean_dec_ref(v___y_2547_);
lean_dec_ref(v___y_2546_);
lean_dec(v___y_2545_);
lean_dec(v___y_2544_);
lean_dec_ref(v___y_2543_);
lean_dec_ref(v___y_2541_);
lean_dec(v___y_2540_);
lean_dec_ref(v___y_2539_);
lean_dec(v___y_2538_);
lean_dec(v___y_2537_);
lean_dec(v___y_2536_);
lean_dec(v___y_2535_);
lean_dec(v___y_2534_);
lean_dec(v___y_2533_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2599_ = lean_ctor_get(v___x_2569_, 0);
v_isSharedCheck_2606_ = !lean_is_exclusive(v___x_2569_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2601_ = v___x_2569_;
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_a_2599_);
lean_dec(v___x_2569_);
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
else
{
lean_object* v_a_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2614_; 
lean_dec(v_ltFn_x3f_2556_);
lean_dec_ref(v___y_2555_);
lean_dec(v___y_2554_);
lean_dec(v___y_2553_);
lean_dec(v___y_2552_);
lean_dec_ref(v___y_2551_);
lean_dec(v___y_2550_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
lean_dec_ref(v___y_2547_);
lean_dec_ref(v___y_2546_);
lean_dec(v___y_2545_);
lean_dec(v___y_2544_);
lean_dec_ref(v___y_2543_);
lean_dec_ref(v___y_2541_);
lean_dec(v___y_2540_);
lean_dec_ref(v___y_2539_);
lean_dec(v___y_2538_);
lean_dec(v___y_2537_);
lean_dec(v___y_2536_);
lean_dec(v___y_2535_);
lean_dec(v___y_2534_);
lean_dec(v___y_2533_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2607_ = lean_ctor_get(v___x_2567_, 0);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2567_);
if (v_isSharedCheck_2614_ == 0)
{
v___x_2609_ = v___x_2567_;
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_a_2607_);
lean_dec(v___x_2567_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2612_; 
if (v_isShared_2610_ == 0)
{
v___x_2612_ = v___x_2609_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v_a_2607_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
}
v___jp_2615_:
{
if (lean_obj_tag(v_a_2456_) == 1)
{
lean_object* v_val_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; 
v_val_2650_ = lean_ctor_get(v_a_2456_, 0);
v___x_2651_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__12));
v___x_2652_ = l_Lean_mkConst(v___x_2651_, v___y_2620_);
lean_inc(v_val_2650_);
lean_inc_ref(v_type_2359_);
v___x_2653_ = l_Lean_mkAppB(v___x_2652_, v_type_2359_, v_val_2650_);
v___x_2654_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v___x_2653_, v___y_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_);
if (lean_obj_tag(v___x_2654_) == 0)
{
lean_object* v_a_2655_; lean_object* v___x_2657_; 
v_a_2655_ = lean_ctor_get(v___x_2654_, 0);
lean_inc(v_a_2655_);
lean_dec_ref(v___x_2654_);
if (v_isShared_2450_ == 0)
{
lean_ctor_set_tag(v___x_2449_, 1);
lean_ctor_set(v___x_2449_, 0, v_a_2655_);
v___x_2657_ = v___x_2449_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v_a_2655_);
v___x_2657_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
v___y_2533_ = v___y_2616_;
v___y_2534_ = v_leFn_x3f_2639_;
v___y_2535_ = v___y_2617_;
v___y_2536_ = v___y_2618_;
v___y_2537_ = v___y_2619_;
v___y_2538_ = v___y_2621_;
v___y_2539_ = v___y_2622_;
v___y_2540_ = v___y_2623_;
v___y_2541_ = v___y_2624_;
v___y_2542_ = v___y_2625_;
v___y_2543_ = v___y_2626_;
v___y_2544_ = v___y_2627_;
v___y_2545_ = v___y_2628_;
v___y_2546_ = v___y_2629_;
v___y_2547_ = v___y_2630_;
v___y_2548_ = v___y_2631_;
v___y_2549_ = v___y_2632_;
v___y_2550_ = v___y_2633_;
v___y_2551_ = v___y_2634_;
v___y_2552_ = v___y_2635_;
v___y_2553_ = v___y_2636_;
v___y_2554_ = v___y_2637_;
v___y_2555_ = v___y_2638_;
v_ltFn_x3f_2556_ = v___x_2657_;
v___y_2557_ = v___y_2640_;
v___y_2558_ = v___y_2641_;
v___y_2559_ = v___y_2642_;
v___y_2560_ = v___y_2643_;
v___y_2561_ = v___y_2644_;
v___y_2562_ = v___y_2645_;
v___y_2563_ = v___y_2646_;
v___y_2564_ = v___y_2647_;
v___y_2565_ = v___y_2648_;
v___y_2566_ = v___y_2649_;
goto v___jp_2532_;
}
}
else
{
lean_object* v_a_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2666_; 
lean_dec_ref(v_a_2456_);
lean_dec(v_leFn_x3f_2639_);
lean_dec_ref(v___y_2638_);
lean_dec(v___y_2637_);
lean_dec(v___y_2636_);
lean_dec(v___y_2635_);
lean_dec_ref(v___y_2634_);
lean_dec(v___y_2633_);
lean_dec(v___y_2632_);
lean_dec_ref(v___y_2631_);
lean_dec_ref(v___y_2630_);
lean_dec_ref(v___y_2629_);
lean_dec(v___y_2628_);
lean_dec(v___y_2627_);
lean_dec_ref(v___y_2626_);
lean_dec_ref(v___y_2624_);
lean_dec(v___y_2623_);
lean_dec_ref(v___y_2622_);
lean_dec(v___y_2621_);
lean_dec(v___y_2619_);
lean_dec(v___y_2618_);
lean_dec(v___y_2617_);
lean_dec(v___y_2616_);
lean_dec(v_a_2458_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2659_ = lean_ctor_get(v___x_2654_, 0);
v_isSharedCheck_2666_ = !lean_is_exclusive(v___x_2654_);
if (v_isSharedCheck_2666_ == 0)
{
v___x_2661_ = v___x_2654_;
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_a_2659_);
lean_dec(v___x_2654_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2664_; 
if (v_isShared_2662_ == 0)
{
v___x_2664_ = v___x_2661_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2665_; 
v_reuseFailAlloc_2665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2665_, 0, v_a_2659_);
v___x_2664_ = v_reuseFailAlloc_2665_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
return v___x_2664_;
}
}
}
}
else
{
lean_dec(v___y_2620_);
lean_del_object(v___x_2449_);
lean_inc(v___y_2616_);
v___y_2533_ = v___y_2616_;
v___y_2534_ = v_leFn_x3f_2639_;
v___y_2535_ = v___y_2617_;
v___y_2536_ = v___y_2618_;
v___y_2537_ = v___y_2619_;
v___y_2538_ = v___y_2621_;
v___y_2539_ = v___y_2622_;
v___y_2540_ = v___y_2623_;
v___y_2541_ = v___y_2624_;
v___y_2542_ = v___y_2625_;
v___y_2543_ = v___y_2626_;
v___y_2544_ = v___y_2627_;
v___y_2545_ = v___y_2628_;
v___y_2546_ = v___y_2629_;
v___y_2547_ = v___y_2630_;
v___y_2548_ = v___y_2631_;
v___y_2549_ = v___y_2632_;
v___y_2550_ = v___y_2633_;
v___y_2551_ = v___y_2634_;
v___y_2552_ = v___y_2635_;
v___y_2553_ = v___y_2636_;
v___y_2554_ = v___y_2637_;
v___y_2555_ = v___y_2638_;
v_ltFn_x3f_2556_ = v___y_2616_;
v___y_2557_ = v___y_2640_;
v___y_2558_ = v___y_2641_;
v___y_2559_ = v___y_2642_;
v___y_2560_ = v___y_2643_;
v___y_2561_ = v___y_2644_;
v___y_2562_ = v___y_2645_;
v___y_2563_ = v___y_2646_;
v___y_2564_ = v___y_2647_;
v___y_2565_ = v___y_2648_;
v___y_2566_ = v___y_2649_;
goto v___jp_2532_;
}
}
v___jp_2667_:
{
lean_object* v___x_2700_; 
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_2700_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg(v_val_2442_, v_type_2359_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2700_) == 0)
{
lean_object* v_a_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; 
v_a_2701_ = lean_ctor_get(v___x_2700_, 0);
lean_inc(v_a_2701_);
lean_dec_ref(v___x_2700_);
v___x_2702_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__14));
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_2703_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst(v___x_2702_, v_val_2442_, v_type_2359_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2703_) == 0)
{
lean_object* v_a_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; 
v_a_2704_ = lean_ctor_get(v___x_2703_, 0);
lean_inc(v_a_2704_);
lean_dec_ref(v___x_2703_);
v___x_2705_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__16));
lean_inc(v___y_2671_);
v___x_2706_ = l_Lean_mkConst(v___x_2705_, v___y_2671_);
lean_inc(v_a_2704_);
lean_inc_ref(v_type_2359_);
v___x_2707_ = l_Lean_mkAppB(v___x_2706_, v_type_2359_, v_a_2704_);
v___x_2708_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(v___x_2707_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2708_) == 0)
{
lean_object* v_a_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; 
v_a_2709_ = lean_ctor_get(v___x_2708_, 0);
lean_inc(v_a_2709_);
lean_dec_ref(v___x_2708_);
v___x_2710_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__18));
lean_inc(v___y_2671_);
v___x_2711_ = l_Lean_mkConst(v___x_2710_, v___y_2671_);
v___x_2712_ = lean_unsigned_to_nat(0u);
v___x_2713_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__19, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__19_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__19);
lean_inc_ref(v_type_2359_);
v___x_2714_ = l_Lean_mkAppB(v___x_2711_, v_type_2359_, v___x_2713_);
v___x_2715_ = l_Lean_Meta_Grind_synthInstanceMeta_x3f(v___x_2714_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2715_) == 0)
{
lean_object* v_a_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2937_; 
v_a_2716_ = lean_ctor_get(v___x_2715_, 0);
v_isSharedCheck_2937_ = !lean_is_exclusive(v___x_2715_);
if (v_isSharedCheck_2937_ == 0)
{
v___x_2718_ = v___x_2715_;
v_isShared_2719_ = v_isSharedCheck_2937_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_a_2716_);
lean_dec(v___x_2715_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2937_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
if (lean_obj_tag(v_a_2716_) == 1)
{
lean_object* v_val_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2932_; 
lean_del_object(v___x_2718_);
v_val_2720_ = lean_ctor_get(v_a_2716_, 0);
v_isSharedCheck_2932_ = !lean_is_exclusive(v_a_2716_);
if (v_isSharedCheck_2932_ == 0)
{
v___x_2722_ = v_a_2716_;
v_isShared_2723_ = v_isSharedCheck_2932_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_val_2720_);
lean_dec(v_a_2716_);
v___x_2722_ = lean_box(0);
v_isShared_2723_ = v_isSharedCheck_2932_;
goto v_resetjp_2721_;
}
v_resetjp_2721_:
{
lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; 
v___x_2724_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__21));
lean_inc(v___y_2671_);
v___x_2725_ = l_Lean_mkConst(v___x_2724_, v___y_2671_);
lean_inc_ref(v_type_2359_);
v___x_2726_ = l_Lean_mkApp3(v___x_2725_, v_type_2359_, v___x_2713_, v_val_2720_);
v___x_2727_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v___x_2726_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2727_) == 0)
{
lean_object* v_a_2728_; lean_object* v___x_2729_; 
v_a_2728_ = lean_ctor_get(v___x_2727_, 0);
lean_inc(v_a_2728_);
lean_dec_ref(v___x_2727_);
lean_inc(v_a_2728_);
lean_inc(v_a_2709_);
v___x_2729_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq(v_a_2709_, v_a_2728_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2729_) == 0)
{
lean_object* v___x_2730_; lean_object* v___x_2731_; 
lean_dec_ref(v___x_2729_);
v___x_2730_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__23));
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_2731_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst(v___x_2730_, v_val_2442_, v_type_2359_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2731_) == 0)
{
lean_object* v_a_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; 
v_a_2732_ = lean_ctor_get(v___x_2731_, 0);
lean_inc(v_a_2732_);
lean_dec_ref(v___x_2731_);
v___x_2733_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__25));
lean_inc(v___y_2677_);
v___x_2734_ = l_Lean_mkConst(v___x_2733_, v___y_2677_);
lean_inc(v_a_2732_);
lean_inc_ref_n(v_type_2359_, 3);
v___x_2735_ = l_Lean_mkApp4(v___x_2734_, v_type_2359_, v_type_2359_, v_type_2359_, v_a_2732_);
v___x_2736_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v___x_2735_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2736_) == 0)
{
lean_object* v_a_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; 
v_a_2737_ = lean_ctor_get(v___x_2736_, 0);
lean_inc(v_a_2737_);
lean_dec_ref(v___x_2736_);
v___x_2738_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__27));
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_2739_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst(v___x_2738_, v_val_2442_, v_type_2359_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2739_) == 0)
{
lean_object* v_a_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; 
v_a_2740_ = lean_ctor_get(v___x_2739_, 0);
lean_inc(v_a_2740_);
lean_dec_ref(v___x_2739_);
v___x_2741_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__29));
lean_inc(v___y_2671_);
v___x_2742_ = l_Lean_mkConst(v___x_2741_, v___y_2671_);
lean_inc(v_a_2740_);
lean_inc_ref(v_type_2359_);
v___x_2743_ = l_Lean_mkAppB(v___x_2742_, v_type_2359_, v_a_2740_);
v___x_2744_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v___x_2743_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2744_) == 0)
{
lean_object* v_a_2745_; lean_object* v___x_2746_; 
v_a_2745_ = lean_ctor_get(v___x_2744_, 0);
lean_inc(v_a_2745_);
lean_dec_ref(v___x_2744_);
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_2746_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst(v_val_2442_, v_type_2359_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2746_) == 0)
{
lean_object* v_a_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; 
v_a_2747_ = lean_ctor_get(v___x_2746_, 0);
lean_inc(v_a_2747_);
lean_dec_ref(v___x_2746_);
v___x_2748_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___closed__1));
v___x_2749_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2);
v___x_2750_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2749_);
lean_ctor_set(v___x_2750_, 1, v___y_2686_);
v___x_2751_ = l_Lean_mkConst(v___x_2748_, v___x_2750_);
v___x_2752_ = l_Lean_Int_mkType;
lean_inc(v_a_2747_);
lean_inc_ref_n(v_type_2359_, 2);
lean_inc_ref(v___x_2751_);
v___x_2753_ = l_Lean_mkApp4(v___x_2751_, v___x_2752_, v_type_2359_, v_type_2359_, v_a_2747_);
v___x_2754_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v___x_2753_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2754_) == 0)
{
lean_object* v_a_2755_; lean_object* v___x_2756_; 
v_a_2755_ = lean_ctor_get(v___x_2754_, 0);
lean_inc(v_a_2755_);
lean_dec_ref(v___x_2754_);
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_2756_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst(v_val_2442_, v_type_2359_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2756_) == 0)
{
lean_object* v_a_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; 
v_a_2757_ = lean_ctor_get(v___x_2756_, 0);
lean_inc(v_a_2757_);
lean_dec_ref(v___x_2756_);
v___x_2758_ = l_Lean_Nat_mkType;
lean_inc(v_a_2757_);
lean_inc_ref_n(v_type_2359_, 2);
v___x_2759_ = l_Lean_mkApp4(v___x_2751_, v___x_2758_, v_type_2359_, v_type_2359_, v_a_2757_);
v___x_2760_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v___x_2759_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2760_) == 0)
{
lean_object* v_a_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; 
v_a_2761_ = lean_ctor_get(v___x_2760_, 0);
lean_inc(v_a_2761_);
lean_dec_ref(v___x_2760_);
v___x_2762_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__30));
v___x_2763_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__31));
lean_inc_ref(v___y_2673_);
lean_inc_ref(v___y_2678_);
v___x_2764_ = l_Lean_Name_mkStr4(v___y_2678_, v___y_2673_, v___x_2762_, v___x_2763_);
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
lean_inc_ref(v___y_2668_);
v___x_2765_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg(v_a_2704_, v___y_2668_, v___x_2764_, v_val_2442_, v_type_2359_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2765_) == 0)
{
lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; 
lean_dec_ref(v___x_2765_);
v___x_2766_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__32));
lean_inc_ref(v___y_2673_);
lean_inc_ref(v___y_2678_);
v___x_2767_ = l_Lean_Name_mkStr4(v___y_2678_, v___y_2673_, v___x_2762_, v___x_2766_);
v___x_2768_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__34));
v___x_2769_ = lean_box(0);
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_2770_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(v___y_2683_, v___y_2668_, v___x_2767_, v___x_2768_, v_val_2442_, v_type_2359_, v___x_2769_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2770_) == 0)
{
lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; 
lean_dec_ref(v___x_2770_);
v___x_2771_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__35));
lean_inc_ref(v___y_2675_);
lean_inc_ref(v___y_2673_);
lean_inc_ref(v___y_2678_);
v___x_2772_ = l_Lean_Name_mkStr4(v___y_2678_, v___y_2673_, v___y_2675_, v___x_2771_);
v___x_2773_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__37));
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
lean_inc_ref(v___y_2679_);
v___x_2774_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(v_a_2732_, v___y_2679_, v___x_2772_, v___x_2773_, v_val_2442_, v_type_2359_, v___x_2769_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2774_) == 0)
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; 
lean_dec_ref(v___x_2774_);
v___x_2775_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__38));
lean_inc_ref(v___y_2675_);
lean_inc_ref(v___y_2673_);
lean_inc_ref(v___y_2678_);
v___x_2776_ = l_Lean_Name_mkStr4(v___y_2678_, v___y_2673_, v___y_2675_, v___x_2775_);
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
v___x_2777_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToFieldDefEq___redArg(v_a_2740_, v___y_2679_, v___x_2776_, v_val_2442_, v_type_2359_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2777_) == 0)
{
lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; 
lean_dec_ref(v___x_2777_);
v___x_2778_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__39));
lean_inc_ref(v___y_2685_);
lean_inc_ref(v___y_2673_);
lean_inc_ref(v___y_2678_);
v___x_2779_ = l_Lean_Name_mkStr4(v___y_2678_, v___y_2673_, v___y_2685_, v___x_2778_);
v___x_2780_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__41));
v___x_2781_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__42, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__42_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__42);
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
lean_inc_ref(v___y_2680_);
v___x_2782_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(v_a_2747_, v___y_2680_, v___x_2779_, v___x_2780_, v_val_2442_, v_type_2359_, v___x_2781_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2782_) == 0)
{
lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
lean_dec_ref(v___x_2782_);
v___x_2783_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__43));
lean_inc_ref(v___y_2685_);
lean_inc_ref(v___y_2673_);
lean_inc_ref(v___y_2678_);
v___x_2784_ = l_Lean_Name_mkStr4(v___y_2678_, v___y_2673_, v___y_2685_, v___x_2783_);
v___x_2785_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__44, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__44_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__44);
lean_inc_ref(v_type_2359_);
lean_inc(v_val_2442_);
lean_inc_ref(v___y_2680_);
v___x_2786_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureToHomoFieldDefEq___redArg(v_a_2757_, v___y_2680_, v___x_2784_, v___x_2780_, v_val_2442_, v_type_2359_, v___x_2785_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2786_) == 0)
{
lean_dec_ref(v___x_2786_);
if (lean_obj_tag(v_a_2453_) == 1)
{
lean_object* v_val_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; 
v_val_2787_ = lean_ctor_get(v_a_2453_, 0);
v___x_2788_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__46));
lean_inc(v___y_2671_);
v___x_2789_ = l_Lean_mkConst(v___x_2788_, v___y_2671_);
lean_inc(v_val_2787_);
lean_inc_ref(v_type_2359_);
v___x_2790_ = l_Lean_mkAppB(v___x_2789_, v_type_2359_, v_val_2787_);
v___x_2791_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v___x_2790_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
if (lean_obj_tag(v___x_2791_) == 0)
{
lean_object* v_a_2792_; lean_object* v___x_2794_; 
v_a_2792_ = lean_ctor_get(v___x_2791_, 0);
lean_inc(v_a_2792_);
lean_dec_ref(v___x_2791_);
if (v_isShared_2723_ == 0)
{
lean_ctor_set(v___x_2722_, 0, v_a_2792_);
v___x_2794_ = v___x_2722_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v_a_2792_);
v___x_2794_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
v___y_2616_ = v___x_2769_;
v___y_2617_ = v_charInst_x3f_2689_;
v___y_2618_ = v___y_2669_;
v___y_2619_ = v___y_2670_;
v___y_2620_ = v___y_2671_;
v___y_2621_ = v___y_2672_;
v___y_2622_ = v_a_2737_;
v___y_2623_ = v___y_2674_;
v___y_2624_ = v_a_2728_;
v___y_2625_ = v___y_2676_;
v___y_2626_ = v_a_2709_;
v___y_2627_ = v___y_2677_;
v___y_2628_ = v___x_2712_;
v___y_2629_ = v_a_2755_;
v___y_2630_ = v___y_2680_;
v___y_2631_ = v_a_2761_;
v___y_2632_ = v___y_2681_;
v___y_2633_ = v_a_2701_;
v___y_2634_ = v___y_2682_;
v___y_2635_ = v___y_2684_;
v___y_2636_ = v___y_2687_;
v___y_2637_ = v___y_2688_;
v___y_2638_ = v_a_2745_;
v_leFn_x3f_2639_ = v___x_2794_;
v___y_2640_ = v___y_2690_;
v___y_2641_ = v___y_2691_;
v___y_2642_ = v___y_2692_;
v___y_2643_ = v___y_2693_;
v___y_2644_ = v___y_2694_;
v___y_2645_ = v___y_2695_;
v___y_2646_ = v___y_2696_;
v___y_2647_ = v___y_2697_;
v___y_2648_ = v___y_2698_;
v___y_2649_ = v___y_2699_;
goto v___jp_2615_;
}
}
else
{
lean_object* v_a_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2803_; 
lean_dec_ref(v_a_2453_);
lean_dec(v_a_2761_);
lean_dec(v_a_2755_);
lean_dec(v_a_2745_);
lean_dec(v_a_2737_);
lean_dec(v_a_2728_);
lean_del_object(v___x_2722_);
lean_dec(v_a_2709_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2796_ = lean_ctor_get(v___x_2791_, 0);
v_isSharedCheck_2803_ = !lean_is_exclusive(v___x_2791_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2798_ = v___x_2791_;
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_a_2796_);
lean_dec(v___x_2791_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v___x_2801_; 
if (v_isShared_2799_ == 0)
{
v___x_2801_ = v___x_2798_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v_a_2796_);
v___x_2801_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
return v___x_2801_;
}
}
}
}
else
{
lean_del_object(v___x_2722_);
v___y_2616_ = v___x_2769_;
v___y_2617_ = v_charInst_x3f_2689_;
v___y_2618_ = v___y_2669_;
v___y_2619_ = v___y_2670_;
v___y_2620_ = v___y_2671_;
v___y_2621_ = v___y_2672_;
v___y_2622_ = v_a_2737_;
v___y_2623_ = v___y_2674_;
v___y_2624_ = v_a_2728_;
v___y_2625_ = v___y_2676_;
v___y_2626_ = v_a_2709_;
v___y_2627_ = v___y_2677_;
v___y_2628_ = v___x_2712_;
v___y_2629_ = v_a_2755_;
v___y_2630_ = v___y_2680_;
v___y_2631_ = v_a_2761_;
v___y_2632_ = v___y_2681_;
v___y_2633_ = v_a_2701_;
v___y_2634_ = v___y_2682_;
v___y_2635_ = v___y_2684_;
v___y_2636_ = v___y_2687_;
v___y_2637_ = v___y_2688_;
v___y_2638_ = v_a_2745_;
v_leFn_x3f_2639_ = v___x_2769_;
v___y_2640_ = v___y_2690_;
v___y_2641_ = v___y_2691_;
v___y_2642_ = v___y_2692_;
v___y_2643_ = v___y_2693_;
v___y_2644_ = v___y_2694_;
v___y_2645_ = v___y_2695_;
v___y_2646_ = v___y_2696_;
v___y_2647_ = v___y_2697_;
v___y_2648_ = v___y_2698_;
v___y_2649_ = v___y_2699_;
goto v___jp_2615_;
}
}
else
{
lean_object* v_a_2804_; lean_object* v___x_2806_; uint8_t v_isShared_2807_; uint8_t v_isSharedCheck_2811_; 
lean_dec(v_a_2761_);
lean_dec(v_a_2755_);
lean_dec(v_a_2745_);
lean_dec(v_a_2737_);
lean_dec(v_a_2728_);
lean_del_object(v___x_2722_);
lean_dec(v_a_2709_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2804_ = lean_ctor_get(v___x_2786_, 0);
v_isSharedCheck_2811_ = !lean_is_exclusive(v___x_2786_);
if (v_isSharedCheck_2811_ == 0)
{
v___x_2806_ = v___x_2786_;
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
else
{
lean_inc(v_a_2804_);
lean_dec(v___x_2786_);
v___x_2806_ = lean_box(0);
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
v_resetjp_2805_:
{
lean_object* v___x_2809_; 
if (v_isShared_2807_ == 0)
{
v___x_2809_ = v___x_2806_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v_a_2804_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
return v___x_2809_;
}
}
}
}
else
{
lean_object* v_a_2812_; lean_object* v___x_2814_; uint8_t v_isShared_2815_; uint8_t v_isSharedCheck_2819_; 
lean_dec(v_a_2761_);
lean_dec(v_a_2757_);
lean_dec(v_a_2755_);
lean_dec(v_a_2745_);
lean_dec(v_a_2737_);
lean_dec(v_a_2728_);
lean_del_object(v___x_2722_);
lean_dec(v_a_2709_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2812_ = lean_ctor_get(v___x_2782_, 0);
v_isSharedCheck_2819_ = !lean_is_exclusive(v___x_2782_);
if (v_isSharedCheck_2819_ == 0)
{
v___x_2814_ = v___x_2782_;
v_isShared_2815_ = v_isSharedCheck_2819_;
goto v_resetjp_2813_;
}
else
{
lean_inc(v_a_2812_);
lean_dec(v___x_2782_);
v___x_2814_ = lean_box(0);
v_isShared_2815_ = v_isSharedCheck_2819_;
goto v_resetjp_2813_;
}
v_resetjp_2813_:
{
lean_object* v___x_2817_; 
if (v_isShared_2815_ == 0)
{
v___x_2817_ = v___x_2814_;
goto v_reusejp_2816_;
}
else
{
lean_object* v_reuseFailAlloc_2818_; 
v_reuseFailAlloc_2818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2818_, 0, v_a_2812_);
v___x_2817_ = v_reuseFailAlloc_2818_;
goto v_reusejp_2816_;
}
v_reusejp_2816_:
{
return v___x_2817_;
}
}
}
}
else
{
lean_object* v_a_2820_; lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2827_; 
lean_dec(v_a_2761_);
lean_dec(v_a_2757_);
lean_dec(v_a_2755_);
lean_dec(v_a_2747_);
lean_dec(v_a_2745_);
lean_dec(v_a_2737_);
lean_dec(v_a_2728_);
lean_del_object(v___x_2722_);
lean_dec(v_a_2709_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2820_ = lean_ctor_get(v___x_2777_, 0);
v_isSharedCheck_2827_ = !lean_is_exclusive(v___x_2777_);
if (v_isSharedCheck_2827_ == 0)
{
v___x_2822_ = v___x_2777_;
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
else
{
lean_inc(v_a_2820_);
lean_dec(v___x_2777_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2827_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v___x_2825_; 
if (v_isShared_2823_ == 0)
{
v___x_2825_ = v___x_2822_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2826_; 
v_reuseFailAlloc_2826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2826_, 0, v_a_2820_);
v___x_2825_ = v_reuseFailAlloc_2826_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
return v___x_2825_;
}
}
}
}
else
{
lean_object* v_a_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2835_; 
lean_dec(v_a_2761_);
lean_dec(v_a_2757_);
lean_dec(v_a_2755_);
lean_dec(v_a_2747_);
lean_dec(v_a_2745_);
lean_dec(v_a_2740_);
lean_dec(v_a_2737_);
lean_dec(v_a_2728_);
lean_del_object(v___x_2722_);
lean_dec(v_a_2709_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2828_ = lean_ctor_get(v___x_2774_, 0);
v_isSharedCheck_2835_ = !lean_is_exclusive(v___x_2774_);
if (v_isSharedCheck_2835_ == 0)
{
v___x_2830_ = v___x_2774_;
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_a_2828_);
lean_dec(v___x_2774_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2835_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v___x_2833_; 
if (v_isShared_2831_ == 0)
{
v___x_2833_ = v___x_2830_;
goto v_reusejp_2832_;
}
else
{
lean_object* v_reuseFailAlloc_2834_; 
v_reuseFailAlloc_2834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2834_, 0, v_a_2828_);
v___x_2833_ = v_reuseFailAlloc_2834_;
goto v_reusejp_2832_;
}
v_reusejp_2832_:
{
return v___x_2833_;
}
}
}
}
else
{
lean_object* v_a_2836_; lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2843_; 
lean_dec(v_a_2761_);
lean_dec(v_a_2757_);
lean_dec(v_a_2755_);
lean_dec(v_a_2747_);
lean_dec(v_a_2745_);
lean_dec(v_a_2740_);
lean_dec(v_a_2737_);
lean_dec(v_a_2732_);
lean_dec(v_a_2728_);
lean_del_object(v___x_2722_);
lean_dec(v_a_2709_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2836_ = lean_ctor_get(v___x_2770_, 0);
v_isSharedCheck_2843_ = !lean_is_exclusive(v___x_2770_);
if (v_isSharedCheck_2843_ == 0)
{
v___x_2838_ = v___x_2770_;
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
else
{
lean_inc(v_a_2836_);
lean_dec(v___x_2770_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
lean_object* v___x_2841_; 
if (v_isShared_2839_ == 0)
{
v___x_2841_ = v___x_2838_;
goto v_reusejp_2840_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v_a_2836_);
v___x_2841_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2840_;
}
v_reusejp_2840_:
{
return v___x_2841_;
}
}
}
}
else
{
lean_object* v_a_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2851_; 
lean_dec(v_a_2761_);
lean_dec(v_a_2757_);
lean_dec(v_a_2755_);
lean_dec(v_a_2747_);
lean_dec(v_a_2745_);
lean_dec(v_a_2740_);
lean_dec(v_a_2737_);
lean_dec(v_a_2732_);
lean_dec(v_a_2728_);
lean_del_object(v___x_2722_);
lean_dec(v_a_2709_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2844_ = lean_ctor_get(v___x_2765_, 0);
v_isSharedCheck_2851_ = !lean_is_exclusive(v___x_2765_);
if (v_isSharedCheck_2851_ == 0)
{
v___x_2846_ = v___x_2765_;
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_a_2844_);
lean_dec(v___x_2765_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2851_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v___x_2849_; 
if (v_isShared_2847_ == 0)
{
v___x_2849_ = v___x_2846_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2850_; 
v_reuseFailAlloc_2850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2850_, 0, v_a_2844_);
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
lean_object* v_a_2852_; lean_object* v___x_2854_; uint8_t v_isShared_2855_; uint8_t v_isSharedCheck_2859_; 
lean_dec(v_a_2757_);
lean_dec(v_a_2755_);
lean_dec(v_a_2747_);
lean_dec(v_a_2745_);
lean_dec(v_a_2740_);
lean_dec(v_a_2737_);
lean_dec(v_a_2732_);
lean_dec(v_a_2728_);
lean_del_object(v___x_2722_);
lean_dec(v_a_2709_);
lean_dec(v_a_2704_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2852_ = lean_ctor_get(v___x_2760_, 0);
v_isSharedCheck_2859_ = !lean_is_exclusive(v___x_2760_);
if (v_isSharedCheck_2859_ == 0)
{
v___x_2854_ = v___x_2760_;
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
else
{
lean_inc(v_a_2852_);
lean_dec(v___x_2760_);
v___x_2854_ = lean_box(0);
v_isShared_2855_ = v_isSharedCheck_2859_;
goto v_resetjp_2853_;
}
v_resetjp_2853_:
{
lean_object* v___x_2857_; 
if (v_isShared_2855_ == 0)
{
v___x_2857_ = v___x_2854_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v_a_2852_);
v___x_2857_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
return v___x_2857_;
}
}
}
}
else
{
lean_object* v_a_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2867_; 
lean_dec(v_a_2755_);
lean_dec_ref(v___x_2751_);
lean_dec(v_a_2747_);
lean_dec(v_a_2745_);
lean_dec(v_a_2740_);
lean_dec(v_a_2737_);
lean_dec(v_a_2732_);
lean_dec(v_a_2728_);
lean_del_object(v___x_2722_);
lean_dec(v_a_2709_);
lean_dec(v_a_2704_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2860_ = lean_ctor_get(v___x_2756_, 0);
v_isSharedCheck_2867_ = !lean_is_exclusive(v___x_2756_);
if (v_isSharedCheck_2867_ == 0)
{
v___x_2862_ = v___x_2756_;
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_a_2860_);
lean_dec(v___x_2756_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2867_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
lean_object* v___x_2865_; 
if (v_isShared_2863_ == 0)
{
v___x_2865_ = v___x_2862_;
goto v_reusejp_2864_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v_a_2860_);
v___x_2865_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2864_;
}
v_reusejp_2864_:
{
return v___x_2865_;
}
}
}
}
else
{
lean_object* v_a_2868_; lean_object* v___x_2870_; uint8_t v_isShared_2871_; uint8_t v_isSharedCheck_2875_; 
lean_dec_ref(v___x_2751_);
lean_dec(v_a_2747_);
lean_dec(v_a_2745_);
lean_dec(v_a_2740_);
lean_dec(v_a_2737_);
lean_dec(v_a_2732_);
lean_dec(v_a_2728_);
lean_del_object(v___x_2722_);
lean_dec(v_a_2709_);
lean_dec(v_a_2704_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2868_ = lean_ctor_get(v___x_2754_, 0);
v_isSharedCheck_2875_ = !lean_is_exclusive(v___x_2754_);
if (v_isSharedCheck_2875_ == 0)
{
v___x_2870_ = v___x_2754_;
v_isShared_2871_ = v_isSharedCheck_2875_;
goto v_resetjp_2869_;
}
else
{
lean_inc(v_a_2868_);
lean_dec(v___x_2754_);
v___x_2870_ = lean_box(0);
v_isShared_2871_ = v_isSharedCheck_2875_;
goto v_resetjp_2869_;
}
v_resetjp_2869_:
{
lean_object* v___x_2873_; 
if (v_isShared_2871_ == 0)
{
v___x_2873_ = v___x_2870_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2874_; 
v_reuseFailAlloc_2874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2874_, 0, v_a_2868_);
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
else
{
lean_object* v_a_2876_; lean_object* v___x_2878_; uint8_t v_isShared_2879_; uint8_t v_isSharedCheck_2883_; 
lean_dec(v_a_2745_);
lean_dec(v_a_2740_);
lean_dec(v_a_2737_);
lean_dec(v_a_2732_);
lean_dec(v_a_2728_);
lean_del_object(v___x_2722_);
lean_dec(v_a_2709_);
lean_dec(v_a_2704_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2876_ = lean_ctor_get(v___x_2746_, 0);
v_isSharedCheck_2883_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2883_ == 0)
{
v___x_2878_ = v___x_2746_;
v_isShared_2879_ = v_isSharedCheck_2883_;
goto v_resetjp_2877_;
}
else
{
lean_inc(v_a_2876_);
lean_dec(v___x_2746_);
v___x_2878_ = lean_box(0);
v_isShared_2879_ = v_isSharedCheck_2883_;
goto v_resetjp_2877_;
}
v_resetjp_2877_:
{
lean_object* v___x_2881_; 
if (v_isShared_2879_ == 0)
{
v___x_2881_ = v___x_2878_;
goto v_reusejp_2880_;
}
else
{
lean_object* v_reuseFailAlloc_2882_; 
v_reuseFailAlloc_2882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2882_, 0, v_a_2876_);
v___x_2881_ = v_reuseFailAlloc_2882_;
goto v_reusejp_2880_;
}
v_reusejp_2880_:
{
return v___x_2881_;
}
}
}
}
else
{
lean_object* v_a_2884_; lean_object* v___x_2886_; uint8_t v_isShared_2887_; uint8_t v_isSharedCheck_2891_; 
lean_dec(v_a_2740_);
lean_dec(v_a_2737_);
lean_dec(v_a_2732_);
lean_dec(v_a_2728_);
lean_del_object(v___x_2722_);
lean_dec(v_a_2709_);
lean_dec(v_a_2704_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2884_ = lean_ctor_get(v___x_2744_, 0);
v_isSharedCheck_2891_ = !lean_is_exclusive(v___x_2744_);
if (v_isSharedCheck_2891_ == 0)
{
v___x_2886_ = v___x_2744_;
v_isShared_2887_ = v_isSharedCheck_2891_;
goto v_resetjp_2885_;
}
else
{
lean_inc(v_a_2884_);
lean_dec(v___x_2744_);
v___x_2886_ = lean_box(0);
v_isShared_2887_ = v_isSharedCheck_2891_;
goto v_resetjp_2885_;
}
v_resetjp_2885_:
{
lean_object* v___x_2889_; 
if (v_isShared_2887_ == 0)
{
v___x_2889_ = v___x_2886_;
goto v_reusejp_2888_;
}
else
{
lean_object* v_reuseFailAlloc_2890_; 
v_reuseFailAlloc_2890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2890_, 0, v_a_2884_);
v___x_2889_ = v_reuseFailAlloc_2890_;
goto v_reusejp_2888_;
}
v_reusejp_2888_:
{
return v___x_2889_;
}
}
}
}
else
{
lean_object* v_a_2892_; lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2899_; 
lean_dec(v_a_2737_);
lean_dec(v_a_2732_);
lean_dec(v_a_2728_);
lean_del_object(v___x_2722_);
lean_dec(v_a_2709_);
lean_dec(v_a_2704_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2892_ = lean_ctor_get(v___x_2739_, 0);
v_isSharedCheck_2899_ = !lean_is_exclusive(v___x_2739_);
if (v_isSharedCheck_2899_ == 0)
{
v___x_2894_ = v___x_2739_;
v_isShared_2895_ = v_isSharedCheck_2899_;
goto v_resetjp_2893_;
}
else
{
lean_inc(v_a_2892_);
lean_dec(v___x_2739_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2899_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
lean_object* v___x_2897_; 
if (v_isShared_2895_ == 0)
{
v___x_2897_ = v___x_2894_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v_a_2892_);
v___x_2897_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
return v___x_2897_;
}
}
}
}
else
{
lean_object* v_a_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2907_; 
lean_dec(v_a_2732_);
lean_dec(v_a_2728_);
lean_del_object(v___x_2722_);
lean_dec(v_a_2709_);
lean_dec(v_a_2704_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2900_ = lean_ctor_get(v___x_2736_, 0);
v_isSharedCheck_2907_ = !lean_is_exclusive(v___x_2736_);
if (v_isSharedCheck_2907_ == 0)
{
v___x_2902_ = v___x_2736_;
v_isShared_2903_ = v_isSharedCheck_2907_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_a_2900_);
lean_dec(v___x_2736_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2907_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___x_2905_; 
if (v_isShared_2903_ == 0)
{
v___x_2905_ = v___x_2902_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2906_; 
v_reuseFailAlloc_2906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2906_, 0, v_a_2900_);
v___x_2905_ = v_reuseFailAlloc_2906_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
return v___x_2905_;
}
}
}
}
else
{
lean_object* v_a_2908_; lean_object* v___x_2910_; uint8_t v_isShared_2911_; uint8_t v_isSharedCheck_2915_; 
lean_dec(v_a_2728_);
lean_del_object(v___x_2722_);
lean_dec(v_a_2709_);
lean_dec(v_a_2704_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2908_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2915_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2915_ == 0)
{
v___x_2910_ = v___x_2731_;
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
else
{
lean_inc(v_a_2908_);
lean_dec(v___x_2731_);
v___x_2910_ = lean_box(0);
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
v_resetjp_2909_:
{
lean_object* v___x_2913_; 
if (v_isShared_2911_ == 0)
{
v___x_2913_ = v___x_2910_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v_a_2908_);
v___x_2913_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
return v___x_2913_;
}
}
}
}
else
{
lean_object* v_a_2916_; lean_object* v___x_2918_; uint8_t v_isShared_2919_; uint8_t v_isSharedCheck_2923_; 
lean_dec(v_a_2728_);
lean_del_object(v___x_2722_);
lean_dec(v_a_2709_);
lean_dec(v_a_2704_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2916_ = lean_ctor_get(v___x_2729_, 0);
v_isSharedCheck_2923_ = !lean_is_exclusive(v___x_2729_);
if (v_isSharedCheck_2923_ == 0)
{
v___x_2918_ = v___x_2729_;
v_isShared_2919_ = v_isSharedCheck_2923_;
goto v_resetjp_2917_;
}
else
{
lean_inc(v_a_2916_);
lean_dec(v___x_2729_);
v___x_2918_ = lean_box(0);
v_isShared_2919_ = v_isSharedCheck_2923_;
goto v_resetjp_2917_;
}
v_resetjp_2917_:
{
lean_object* v___x_2921_; 
if (v_isShared_2919_ == 0)
{
v___x_2921_ = v___x_2918_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2922_; 
v_reuseFailAlloc_2922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2922_, 0, v_a_2916_);
v___x_2921_ = v_reuseFailAlloc_2922_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
return v___x_2921_;
}
}
}
}
else
{
lean_object* v_a_2924_; lean_object* v___x_2926_; uint8_t v_isShared_2927_; uint8_t v_isSharedCheck_2931_; 
lean_del_object(v___x_2722_);
lean_dec(v_a_2709_);
lean_dec(v_a_2704_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2924_ = lean_ctor_get(v___x_2727_, 0);
v_isSharedCheck_2931_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2931_ == 0)
{
v___x_2926_ = v___x_2727_;
v_isShared_2927_ = v_isSharedCheck_2931_;
goto v_resetjp_2925_;
}
else
{
lean_inc(v_a_2924_);
lean_dec(v___x_2727_);
v___x_2926_ = lean_box(0);
v_isShared_2927_ = v_isSharedCheck_2931_;
goto v_resetjp_2925_;
}
v_resetjp_2925_:
{
lean_object* v___x_2929_; 
if (v_isShared_2927_ == 0)
{
v___x_2929_ = v___x_2926_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v_a_2924_);
v___x_2929_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
return v___x_2929_;
}
}
}
}
}
else
{
lean_object* v___x_2933_; lean_object* v___x_2935_; 
lean_dec(v_a_2716_);
lean_dec(v_a_2709_);
lean_dec(v_a_2704_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v___x_2933_ = lean_box(0);
if (v_isShared_2719_ == 0)
{
lean_ctor_set(v___x_2718_, 0, v___x_2933_);
v___x_2935_ = v___x_2718_;
goto v_reusejp_2934_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v___x_2933_);
v___x_2935_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2934_;
}
v_reusejp_2934_:
{
return v___x_2935_;
}
}
}
}
else
{
lean_object* v_a_2938_; lean_object* v___x_2940_; uint8_t v_isShared_2941_; uint8_t v_isSharedCheck_2945_; 
lean_dec(v_a_2709_);
lean_dec(v_a_2704_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2938_ = lean_ctor_get(v___x_2715_, 0);
v_isSharedCheck_2945_ = !lean_is_exclusive(v___x_2715_);
if (v_isSharedCheck_2945_ == 0)
{
v___x_2940_ = v___x_2715_;
v_isShared_2941_ = v_isSharedCheck_2945_;
goto v_resetjp_2939_;
}
else
{
lean_inc(v_a_2938_);
lean_dec(v___x_2715_);
v___x_2940_ = lean_box(0);
v_isShared_2941_ = v_isSharedCheck_2945_;
goto v_resetjp_2939_;
}
v_resetjp_2939_:
{
lean_object* v___x_2943_; 
if (v_isShared_2941_ == 0)
{
v___x_2943_ = v___x_2940_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2944_; 
v_reuseFailAlloc_2944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2944_, 0, v_a_2938_);
v___x_2943_ = v_reuseFailAlloc_2944_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
return v___x_2943_;
}
}
}
}
else
{
lean_object* v_a_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2953_; 
lean_dec(v_a_2704_);
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2946_ = lean_ctor_get(v___x_2708_, 0);
v_isSharedCheck_2953_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2953_ == 0)
{
v___x_2948_ = v___x_2708_;
v_isShared_2949_ = v_isSharedCheck_2953_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_a_2946_);
lean_dec(v___x_2708_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2953_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
lean_object* v___x_2951_; 
if (v_isShared_2949_ == 0)
{
v___x_2951_ = v___x_2948_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v_a_2946_);
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
else
{
lean_object* v_a_2954_; lean_object* v___x_2956_; uint8_t v_isShared_2957_; uint8_t v_isSharedCheck_2961_; 
lean_dec(v_a_2701_);
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2954_ = lean_ctor_get(v___x_2703_, 0);
v_isSharedCheck_2961_ = !lean_is_exclusive(v___x_2703_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2956_ = v___x_2703_;
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
else
{
lean_inc(v_a_2954_);
lean_dec(v___x_2703_);
v___x_2956_ = lean_box(0);
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
v_resetjp_2955_:
{
lean_object* v___x_2959_; 
if (v_isShared_2957_ == 0)
{
v___x_2959_ = v___x_2956_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_a_2954_);
v___x_2959_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
return v___x_2959_;
}
}
}
}
else
{
lean_object* v_a_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_2969_; 
lean_dec(v_charInst_x3f_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec_ref(v___y_2679_);
lean_dec(v___y_2677_);
lean_dec(v___y_2674_);
lean_dec(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v_a_2458_);
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_2962_ = lean_ctor_get(v___x_2700_, 0);
v_isSharedCheck_2969_ = !lean_is_exclusive(v___x_2700_);
if (v_isSharedCheck_2969_ == 0)
{
v___x_2964_ = v___x_2700_;
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_a_2962_);
lean_dec(v___x_2700_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2967_; 
if (v_isShared_2965_ == 0)
{
v___x_2967_ = v___x_2964_;
goto v_reusejp_2966_;
}
else
{
lean_object* v_reuseFailAlloc_2968_; 
v_reuseFailAlloc_2968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2968_, 0, v_a_2962_);
v___x_2967_ = v_reuseFailAlloc_2968_;
goto v_reusejp_2966_;
}
v_reusejp_2966_:
{
return v___x_2967_;
}
}
}
}
}
else
{
lean_object* v_a_3325_; lean_object* v___x_3327_; uint8_t v_isShared_3328_; uint8_t v_isSharedCheck_3332_; 
lean_dec(v_a_2456_);
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3325_ = lean_ctor_get(v___x_2457_, 0);
v_isSharedCheck_3332_ = !lean_is_exclusive(v___x_2457_);
if (v_isSharedCheck_3332_ == 0)
{
v___x_3327_ = v___x_2457_;
v_isShared_3328_ = v_isSharedCheck_3332_;
goto v_resetjp_3326_;
}
else
{
lean_inc(v_a_3325_);
lean_dec(v___x_2457_);
v___x_3327_ = lean_box(0);
v_isShared_3328_ = v_isSharedCheck_3332_;
goto v_resetjp_3326_;
}
v_resetjp_3326_:
{
lean_object* v___x_3330_; 
if (v_isShared_3328_ == 0)
{
v___x_3330_ = v___x_3327_;
goto v_reusejp_3329_;
}
else
{
lean_object* v_reuseFailAlloc_3331_; 
v_reuseFailAlloc_3331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3331_, 0, v_a_3325_);
v___x_3330_ = v_reuseFailAlloc_3331_;
goto v_reusejp_3329_;
}
v_reusejp_3329_:
{
return v___x_3330_;
}
}
}
}
else
{
lean_object* v_a_3333_; lean_object* v___x_3335_; uint8_t v_isShared_3336_; uint8_t v_isSharedCheck_3340_; 
lean_dec(v_a_2453_);
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3333_ = lean_ctor_get(v___x_2455_, 0);
v_isSharedCheck_3340_ = !lean_is_exclusive(v___x_2455_);
if (v_isSharedCheck_3340_ == 0)
{
v___x_3335_ = v___x_2455_;
v_isShared_3336_ = v_isSharedCheck_3340_;
goto v_resetjp_3334_;
}
else
{
lean_inc(v_a_3333_);
lean_dec(v___x_2455_);
v___x_3335_ = lean_box(0);
v_isShared_3336_ = v_isSharedCheck_3340_;
goto v_resetjp_3334_;
}
v_resetjp_3334_:
{
lean_object* v___x_3338_; 
if (v_isShared_3336_ == 0)
{
v___x_3338_ = v___x_3335_;
goto v_reusejp_3337_;
}
else
{
lean_object* v_reuseFailAlloc_3339_; 
v_reuseFailAlloc_3339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3339_, 0, v_a_3333_);
v___x_3338_ = v_reuseFailAlloc_3339_;
goto v_reusejp_3337_;
}
v_reusejp_3337_:
{
return v___x_3338_;
}
}
}
}
else
{
lean_object* v_a_3341_; lean_object* v___x_3343_; uint8_t v_isShared_3344_; uint8_t v_isSharedCheck_3348_; 
lean_del_object(v___x_2449_);
lean_dec(v_a_2447_);
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
v_a_3341_ = lean_ctor_get(v___x_2452_, 0);
v_isSharedCheck_3348_ = !lean_is_exclusive(v___x_2452_);
if (v_isSharedCheck_3348_ == 0)
{
v___x_3343_ = v___x_2452_;
v_isShared_3344_ = v_isSharedCheck_3348_;
goto v_resetjp_3342_;
}
else
{
lean_inc(v_a_3341_);
lean_dec(v___x_2452_);
v___x_3343_ = lean_box(0);
v_isShared_3344_ = v_isSharedCheck_3348_;
goto v_resetjp_3342_;
}
v_resetjp_3342_:
{
lean_object* v___x_3346_; 
if (v_isShared_3344_ == 0)
{
v___x_3346_ = v___x_3343_;
goto v_reusejp_3345_;
}
else
{
lean_object* v_reuseFailAlloc_3347_; 
v_reuseFailAlloc_3347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3347_, 0, v_a_3341_);
v___x_3346_ = v_reuseFailAlloc_3347_;
goto v_reusejp_3345_;
}
v_reusejp_3345_:
{
return v___x_3346_;
}
}
}
}
}
else
{
lean_del_object(v___x_2444_);
lean_dec(v_val_2442_);
lean_dec_ref(v_type_2359_);
return v___x_2446_;
}
}
}
else
{
lean_object* v___x_3351_; lean_object* v___x_3353_; 
lean_dec(v_a_2438_);
lean_dec_ref(v_type_2359_);
v___x_3351_ = lean_box(0);
if (v_isShared_2441_ == 0)
{
lean_ctor_set(v___x_2440_, 0, v___x_3351_);
v___x_3353_ = v___x_2440_;
goto v_reusejp_3352_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v___x_3351_);
v___x_3353_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3352_;
}
v_reusejp_3352_:
{
return v___x_3353_;
}
}
}
}
else
{
lean_object* v_a_3356_; lean_object* v___x_3358_; uint8_t v_isShared_3359_; uint8_t v_isSharedCheck_3363_; 
lean_dec_ref(v_type_2359_);
v_a_3356_ = lean_ctor_get(v___x_2437_, 0);
v_isSharedCheck_3363_ = !lean_is_exclusive(v___x_2437_);
if (v_isSharedCheck_3363_ == 0)
{
v___x_3358_ = v___x_2437_;
v_isShared_3359_ = v_isSharedCheck_3363_;
goto v_resetjp_3357_;
}
else
{
lean_inc(v_a_3356_);
lean_dec(v___x_2437_);
v___x_3358_ = lean_box(0);
v_isShared_3359_ = v_isSharedCheck_3363_;
goto v_resetjp_3357_;
}
v_resetjp_3357_:
{
lean_object* v___x_3361_; 
if (v_isShared_3359_ == 0)
{
v___x_3361_ = v___x_3358_;
goto v_reusejp_3360_;
}
else
{
lean_object* v_reuseFailAlloc_3362_; 
v_reuseFailAlloc_3362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3362_, 0, v_a_3356_);
v___x_3361_ = v_reuseFailAlloc_3362_;
goto v_reusejp_3360_;
}
v_reusejp_3360_:
{
return v___x_3361_;
}
}
}
v___jp_2371_:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; 
v___x_2373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2373_, 0, v___y_2372_);
v___x_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2374_, 0, v___x_2373_);
return v___x_2374_;
}
v___jp_2375_:
{
if (lean_obj_tag(v___y_2377_) == 0)
{
lean_dec_ref(v___y_2377_);
v___y_2372_ = v___y_2376_;
goto v___jp_2371_;
}
else
{
lean_object* v_a_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2385_; 
lean_dec(v___y_2376_);
v_a_2378_ = lean_ctor_get(v___y_2377_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___y_2377_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2380_ = v___y_2377_;
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_a_2378_);
lean_dec(v___y_2377_);
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
v___jp_2386_:
{
lean_object* v___x_2400_; 
v___x_2400_ = l_Lean_Meta_Grind_Arith_Linear_mkVar(v___y_2395_, v___y_2389_, v___y_2392_, v___y_2399_, v___y_2396_, v___y_2390_, v___y_2391_, v___y_2397_, v___y_2387_, v___y_2398_, v___y_2393_, v___y_2388_, v___y_2394_);
if (lean_obj_tag(v___x_2400_) == 0)
{
lean_object* v_a_2401_; lean_object* v___x_2402_; 
v_a_2401_ = lean_ctor_get(v___x_2400_, 0);
lean_inc(v_a_2401_);
lean_dec_ref(v___x_2400_);
v___x_2402_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg(v_a_2401_, v___y_2392_, v___y_2399_);
v___y_2376_ = v___y_2392_;
v___y_2377_ = v___x_2402_;
goto v___jp_2375_;
}
else
{
lean_object* v_a_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2410_; 
lean_dec(v___y_2392_);
v_a_2403_ = lean_ctor_get(v___x_2400_, 0);
v_isSharedCheck_2410_ = !lean_is_exclusive(v___x_2400_);
if (v_isSharedCheck_2410_ == 0)
{
v___x_2405_ = v___x_2400_;
v_isShared_2406_ = v_isSharedCheck_2410_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_a_2403_);
lean_dec(v___x_2400_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2410_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2408_; 
if (v_isShared_2406_ == 0)
{
v___x_2408_ = v___x_2405_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v_a_2403_);
v___x_2408_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
return v___x_2408_;
}
}
}
}
v___jp_2411_:
{
lean_object* v___x_2425_; 
v___x_2425_ = l_Lean_Meta_Grind_Arith_Linear_mkVar(v___y_2420_, v___y_2414_, v___y_2417_, v___y_2424_, v___y_2421_, v___y_2415_, v___y_2416_, v___y_2422_, v___y_2412_, v___y_2423_, v___y_2418_, v___y_2413_, v___y_2419_);
if (lean_obj_tag(v___x_2425_) == 0)
{
lean_object* v_a_2426_; lean_object* v___x_2427_; 
v_a_2426_ = lean_ctor_get(v___x_2425_, 0);
lean_inc(v_a_2426_);
lean_dec_ref(v___x_2425_);
lean_inc(v_a_2426_);
v___x_2427_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroLtOne___redArg(v_a_2426_, v___y_2417_, v___y_2424_);
if (lean_obj_tag(v___x_2427_) == 0)
{
lean_object* v___x_2428_; 
lean_dec_ref(v___x_2427_);
v___x_2428_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_addZeroNeOne___redArg(v_a_2426_, v___y_2417_, v___y_2424_);
v___y_2376_ = v___y_2417_;
v___y_2377_ = v___x_2428_;
goto v___jp_2375_;
}
else
{
lean_dec(v_a_2426_);
v___y_2376_ = v___y_2417_;
v___y_2377_ = v___x_2427_;
goto v___jp_2375_;
}
}
else
{
lean_object* v_a_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2436_; 
lean_dec(v___y_2417_);
v_a_2429_ = lean_ctor_get(v___x_2425_, 0);
v_isSharedCheck_2436_ = !lean_is_exclusive(v___x_2425_);
if (v_isSharedCheck_2436_ == 0)
{
v___x_2431_ = v___x_2425_;
v_isShared_2432_ = v_isSharedCheck_2436_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_a_2429_);
lean_dec(v___x_2425_);
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
v_reuseFailAlloc_2435_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___boxed(lean_object* v_type_3364_, lean_object* v_a_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_, lean_object* v_a_3368_, lean_object* v_a_3369_, lean_object* v_a_3370_, lean_object* v_a_3371_, lean_object* v_a_3372_, lean_object* v_a_3373_, lean_object* v_a_3374_, lean_object* v_a_3375_){
_start:
{
lean_object* v_res_3376_; 
v_res_3376_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f(v_type_3364_, v_a_3365_, v_a_3366_, v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_, v_a_3372_, v_a_3373_, v_a_3374_);
lean_dec(v_a_3374_);
lean_dec_ref(v_a_3373_);
lean_dec(v_a_3372_);
lean_dec_ref(v_a_3371_);
lean_dec(v_a_3370_);
lean_dec_ref(v_a_3369_);
lean_dec(v_a_3368_);
lean_dec_ref(v_a_3367_);
lean_dec(v_a_3366_);
lean_dec(v_a_3365_);
return v_res_3376_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0(lean_object* v_00_u03b2_3377_, lean_object* v_x_3378_, lean_object* v_x_3379_, lean_object* v_x_3380_){
_start:
{
lean_object* v___x_3381_; 
v___x_3381_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0___redArg(v_x_3378_, v_x_3379_, v_x_3380_);
return v___x_3381_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0(lean_object* v_00_u03b2_3382_, lean_object* v_x_3383_, size_t v_x_3384_, size_t v_x_3385_, lean_object* v_x_3386_, lean_object* v_x_3387_){
_start:
{
lean_object* v___x_3388_; 
v___x_3388_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg(v_x_3383_, v_x_3384_, v_x_3385_, v_x_3386_, v_x_3387_);
return v___x_3388_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3389_, lean_object* v_x_3390_, lean_object* v_x_3391_, lean_object* v_x_3392_, lean_object* v_x_3393_, lean_object* v_x_3394_){
_start:
{
size_t v_x_577323__boxed_3395_; size_t v_x_577324__boxed_3396_; lean_object* v_res_3397_; 
v_x_577323__boxed_3395_ = lean_unbox_usize(v_x_3391_);
lean_dec(v_x_3391_);
v_x_577324__boxed_3396_ = lean_unbox_usize(v_x_3392_);
lean_dec(v_x_3392_);
v_res_3397_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0(v_00_u03b2_3389_, v_x_3390_, v_x_577323__boxed_3395_, v_x_577324__boxed_3396_, v_x_3393_, v_x_3394_);
return v_res_3397_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_3398_, lean_object* v_n_3399_, lean_object* v_k_3400_, lean_object* v_v_3401_){
_start:
{
lean_object* v___x_3402_; 
v___x_3402_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1___redArg(v_n_3399_, v_k_3400_, v_v_3401_);
return v___x_3402_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_3403_, size_t v_depth_3404_, lean_object* v_keys_3405_, lean_object* v_vals_3406_, lean_object* v_heq_3407_, lean_object* v_i_3408_, lean_object* v_entries_3409_){
_start:
{
lean_object* v___x_3410_; 
v___x_3410_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2___redArg(v_depth_3404_, v_keys_3405_, v_vals_3406_, v_i_3408_, v_entries_3409_);
return v___x_3410_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_3411_, lean_object* v_depth_3412_, lean_object* v_keys_3413_, lean_object* v_vals_3414_, lean_object* v_heq_3415_, lean_object* v_i_3416_, lean_object* v_entries_3417_){
_start:
{
size_t v_depth_boxed_3418_; lean_object* v_res_3419_; 
v_depth_boxed_3418_ = lean_unbox_usize(v_depth_3412_);
lean_dec(v_depth_3412_);
v_res_3419_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__2(v_00_u03b2_3411_, v_depth_boxed_3418_, v_keys_3413_, v_vals_3414_, v_heq_3415_, v_i_3416_, v_entries_3417_);
lean_dec_ref(v_vals_3414_);
lean_dec_ref(v_keys_3413_);
return v_res_3419_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_3420_, lean_object* v_x_3421_, lean_object* v_x_3422_, lean_object* v_x_3423_, lean_object* v_x_3424_){
_start:
{
lean_object* v___x_3425_; 
v___x_3425_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0_spec__1_spec__2___redArg(v_x_3421_, v_x_3422_, v_x_3423_, v_x_3424_);
return v___x_3425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f___lam__0(lean_object* v_type_3426_, lean_object* v_a_3427_, lean_object* v_s_3428_){
_start:
{
lean_object* v_structs_3429_; lean_object* v_typeIdOf_3430_; lean_object* v_exprToStructId_3431_; lean_object* v_exprToStructIdEntries_3432_; lean_object* v_forbiddenNatModules_3433_; lean_object* v_natStructs_3434_; lean_object* v_natTypeIdOf_3435_; lean_object* v_exprToNatStructId_3436_; lean_object* v___x_3438_; uint8_t v_isShared_3439_; uint8_t v_isSharedCheck_3444_; 
v_structs_3429_ = lean_ctor_get(v_s_3428_, 0);
v_typeIdOf_3430_ = lean_ctor_get(v_s_3428_, 1);
v_exprToStructId_3431_ = lean_ctor_get(v_s_3428_, 2);
v_exprToStructIdEntries_3432_ = lean_ctor_get(v_s_3428_, 3);
v_forbiddenNatModules_3433_ = lean_ctor_get(v_s_3428_, 4);
v_natStructs_3434_ = lean_ctor_get(v_s_3428_, 5);
v_natTypeIdOf_3435_ = lean_ctor_get(v_s_3428_, 6);
v_exprToNatStructId_3436_ = lean_ctor_get(v_s_3428_, 7);
v_isSharedCheck_3444_ = !lean_is_exclusive(v_s_3428_);
if (v_isSharedCheck_3444_ == 0)
{
v___x_3438_ = v_s_3428_;
v_isShared_3439_ = v_isSharedCheck_3444_;
goto v_resetjp_3437_;
}
else
{
lean_inc(v_exprToNatStructId_3436_);
lean_inc(v_natTypeIdOf_3435_);
lean_inc(v_natStructs_3434_);
lean_inc(v_forbiddenNatModules_3433_);
lean_inc(v_exprToStructIdEntries_3432_);
lean_inc(v_exprToStructId_3431_);
lean_inc(v_typeIdOf_3430_);
lean_inc(v_structs_3429_);
lean_dec(v_s_3428_);
v___x_3438_ = lean_box(0);
v_isShared_3439_ = v_isSharedCheck_3444_;
goto v_resetjp_3437_;
}
v_resetjp_3437_:
{
lean_object* v___x_3440_; lean_object* v___x_3442_; 
v___x_3440_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0___redArg(v_typeIdOf_3430_, v_type_3426_, v_a_3427_);
if (v_isShared_3439_ == 0)
{
lean_ctor_set(v___x_3438_, 1, v___x_3440_);
v___x_3442_ = v___x_3438_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3443_; 
v_reuseFailAlloc_3443_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3443_, 0, v_structs_3429_);
lean_ctor_set(v_reuseFailAlloc_3443_, 1, v___x_3440_);
lean_ctor_set(v_reuseFailAlloc_3443_, 2, v_exprToStructId_3431_);
lean_ctor_set(v_reuseFailAlloc_3443_, 3, v_exprToStructIdEntries_3432_);
lean_ctor_set(v_reuseFailAlloc_3443_, 4, v_forbiddenNatModules_3433_);
lean_ctor_set(v_reuseFailAlloc_3443_, 5, v_natStructs_3434_);
lean_ctor_set(v_reuseFailAlloc_3443_, 6, v_natTypeIdOf_3435_);
lean_ctor_set(v_reuseFailAlloc_3443_, 7, v_exprToNatStructId_3436_);
v___x_3442_ = v_reuseFailAlloc_3443_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
return v___x_3442_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_3445_, lean_object* v_vals_3446_, lean_object* v_i_3447_, lean_object* v_k_3448_){
_start:
{
lean_object* v___x_3449_; uint8_t v___x_3450_; 
v___x_3449_ = lean_array_get_size(v_keys_3445_);
v___x_3450_ = lean_nat_dec_lt(v_i_3447_, v___x_3449_);
if (v___x_3450_ == 0)
{
lean_object* v___x_3451_; 
lean_dec(v_i_3447_);
v___x_3451_ = lean_box(0);
return v___x_3451_;
}
else
{
lean_object* v_k_x27_3452_; uint8_t v___x_3453_; 
v_k_x27_3452_ = lean_array_fget_borrowed(v_keys_3445_, v_i_3447_);
v___x_3453_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_k_3448_, v_k_x27_3452_);
if (v___x_3453_ == 0)
{
lean_object* v___x_3454_; lean_object* v___x_3455_; 
v___x_3454_ = lean_unsigned_to_nat(1u);
v___x_3455_ = lean_nat_add(v_i_3447_, v___x_3454_);
lean_dec(v_i_3447_);
v_i_3447_ = v___x_3455_;
goto _start;
}
else
{
lean_object* v___x_3457_; lean_object* v___x_3458_; 
v___x_3457_ = lean_array_fget_borrowed(v_vals_3446_, v_i_3447_);
lean_dec(v_i_3447_);
lean_inc(v___x_3457_);
v___x_3458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3458_, 0, v___x_3457_);
return v___x_3458_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_3459_, lean_object* v_vals_3460_, lean_object* v_i_3461_, lean_object* v_k_3462_){
_start:
{
lean_object* v_res_3463_; 
v_res_3463_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_3459_, v_vals_3460_, v_i_3461_, v_k_3462_);
lean_dec_ref(v_k_3462_);
lean_dec_ref(v_vals_3460_);
lean_dec_ref(v_keys_3459_);
return v_res_3463_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg(lean_object* v_x_3464_, size_t v_x_3465_, lean_object* v_x_3466_){
_start:
{
if (lean_obj_tag(v_x_3464_) == 0)
{
lean_object* v_es_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3488_; 
v_es_3467_ = lean_ctor_get(v_x_3464_, 0);
v_isSharedCheck_3488_ = !lean_is_exclusive(v_x_3464_);
if (v_isSharedCheck_3488_ == 0)
{
v___x_3469_ = v_x_3464_;
v_isShared_3470_ = v_isSharedCheck_3488_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_es_3467_);
lean_dec(v_x_3464_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3488_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
lean_object* v___x_3471_; size_t v___x_3472_; size_t v___x_3473_; size_t v___x_3474_; lean_object* v_j_3475_; lean_object* v___x_3476_; 
v___x_3471_ = lean_box(2);
v___x_3472_ = ((size_t)5ULL);
v___x_3473_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1);
v___x_3474_ = lean_usize_land(v_x_3465_, v___x_3473_);
v_j_3475_ = lean_usize_to_nat(v___x_3474_);
v___x_3476_ = lean_array_get(v___x_3471_, v_es_3467_, v_j_3475_);
lean_dec(v_j_3475_);
lean_dec_ref(v_es_3467_);
switch(lean_obj_tag(v___x_3476_))
{
case 0:
{
lean_object* v_key_3477_; lean_object* v_val_3478_; uint8_t v___x_3479_; 
v_key_3477_ = lean_ctor_get(v___x_3476_, 0);
lean_inc(v_key_3477_);
v_val_3478_ = lean_ctor_get(v___x_3476_, 1);
lean_inc(v_val_3478_);
lean_dec_ref(v___x_3476_);
v___x_3479_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_3466_, v_key_3477_);
lean_dec(v_key_3477_);
if (v___x_3479_ == 0)
{
lean_object* v___x_3480_; 
lean_dec(v_val_3478_);
lean_del_object(v___x_3469_);
v___x_3480_ = lean_box(0);
return v___x_3480_;
}
else
{
lean_object* v___x_3482_; 
if (v_isShared_3470_ == 0)
{
lean_ctor_set_tag(v___x_3469_, 1);
lean_ctor_set(v___x_3469_, 0, v_val_3478_);
v___x_3482_ = v___x_3469_;
goto v_reusejp_3481_;
}
else
{
lean_object* v_reuseFailAlloc_3483_; 
v_reuseFailAlloc_3483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3483_, 0, v_val_3478_);
v___x_3482_ = v_reuseFailAlloc_3483_;
goto v_reusejp_3481_;
}
v_reusejp_3481_:
{
return v___x_3482_;
}
}
}
case 1:
{
lean_object* v_node_3484_; size_t v___x_3485_; 
lean_del_object(v___x_3469_);
v_node_3484_ = lean_ctor_get(v___x_3476_, 0);
lean_inc(v_node_3484_);
lean_dec_ref(v___x_3476_);
v___x_3485_ = lean_usize_shift_right(v_x_3465_, v___x_3472_);
v_x_3464_ = v_node_3484_;
v_x_3465_ = v___x_3485_;
goto _start;
}
default: 
{
lean_object* v___x_3487_; 
lean_del_object(v___x_3469_);
v___x_3487_ = lean_box(0);
return v___x_3487_;
}
}
}
}
else
{
lean_object* v_ks_3489_; lean_object* v_vs_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; 
v_ks_3489_ = lean_ctor_get(v_x_3464_, 0);
lean_inc_ref(v_ks_3489_);
v_vs_3490_ = lean_ctor_get(v_x_3464_, 1);
lean_inc_ref(v_vs_3490_);
lean_dec_ref(v_x_3464_);
v___x_3491_ = lean_unsigned_to_nat(0u);
v___x_3492_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg(v_ks_3489_, v_vs_3490_, v___x_3491_, v_x_3466_);
lean_dec_ref(v_vs_3490_);
lean_dec_ref(v_ks_3489_);
return v___x_3492_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_3493_, lean_object* v_x_3494_, lean_object* v_x_3495_){
_start:
{
size_t v_x_7996__boxed_3496_; lean_object* v_res_3497_; 
v_x_7996__boxed_3496_ = lean_unbox_usize(v_x_3494_);
lean_dec(v_x_3494_);
v_res_3497_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg(v_x_3493_, v_x_7996__boxed_3496_, v_x_3495_);
lean_dec_ref(v_x_3495_);
return v_res_3497_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg(lean_object* v_x_3498_, lean_object* v_x_3499_){
_start:
{
uint64_t v___x_3500_; size_t v___x_3501_; lean_object* v___x_3502_; 
v___x_3500_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_3499_);
v___x_3501_ = lean_uint64_to_usize(v___x_3500_);
v___x_3502_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg(v_x_3498_, v___x_3501_, v_x_3499_);
return v___x_3502_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg___boxed(lean_object* v_x_3503_, lean_object* v_x_3504_){
_start:
{
lean_object* v_res_3505_; 
v_res_3505_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg(v_x_3503_, v_x_3504_);
lean_dec_ref(v_x_3504_);
return v_res_3505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f(lean_object* v_type_3506_, lean_object* v_a_3507_, lean_object* v_a_3508_, lean_object* v_a_3509_, lean_object* v_a_3510_, lean_object* v_a_3511_, lean_object* v_a_3512_, lean_object* v_a_3513_, lean_object* v_a_3514_, lean_object* v_a_3515_, lean_object* v_a_3516_){
_start:
{
lean_object* v___x_3518_; 
v___x_3518_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_3509_);
if (lean_obj_tag(v___x_3518_) == 0)
{
lean_object* v_a_3519_; lean_object* v___x_3521_; uint8_t v_isShared_3522_; uint8_t v_isSharedCheck_3588_; 
v_a_3519_ = lean_ctor_get(v___x_3518_, 0);
v_isSharedCheck_3588_ = !lean_is_exclusive(v___x_3518_);
if (v_isSharedCheck_3588_ == 0)
{
v___x_3521_ = v___x_3518_;
v_isShared_3522_ = v_isSharedCheck_3588_;
goto v_resetjp_3520_;
}
else
{
lean_inc(v_a_3519_);
lean_dec(v___x_3518_);
v___x_3521_ = lean_box(0);
v_isShared_3522_ = v_isSharedCheck_3588_;
goto v_resetjp_3520_;
}
v_resetjp_3520_:
{
uint8_t v_linarith_3523_; 
v_linarith_3523_ = lean_ctor_get_uint8(v_a_3519_, sizeof(void*)*11 + 22);
lean_dec(v_a_3519_);
if (v_linarith_3523_ == 0)
{
lean_object* v___x_3524_; lean_object* v___x_3526_; 
lean_dec_ref(v_type_3506_);
v___x_3524_ = lean_box(0);
if (v_isShared_3522_ == 0)
{
lean_ctor_set(v___x_3521_, 0, v___x_3524_);
v___x_3526_ = v___x_3521_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v___x_3524_);
v___x_3526_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
return v___x_3526_;
}
}
else
{
lean_object* v___x_3528_; 
lean_del_object(v___x_3521_);
lean_inc_ref(v_type_3506_);
v___x_3528_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isCutsatType(v_type_3506_, v_a_3507_, v_a_3508_, v_a_3509_, v_a_3510_, v_a_3511_, v_a_3512_, v_a_3513_, v_a_3514_, v_a_3515_, v_a_3516_);
if (lean_obj_tag(v___x_3528_) == 0)
{
lean_object* v_a_3529_; lean_object* v___x_3531_; uint8_t v_isShared_3532_; uint8_t v_isSharedCheck_3579_; 
v_a_3529_ = lean_ctor_get(v___x_3528_, 0);
v_isSharedCheck_3579_ = !lean_is_exclusive(v___x_3528_);
if (v_isSharedCheck_3579_ == 0)
{
v___x_3531_ = v___x_3528_;
v_isShared_3532_ = v_isSharedCheck_3579_;
goto v_resetjp_3530_;
}
else
{
lean_inc(v_a_3529_);
lean_dec(v___x_3528_);
v___x_3531_ = lean_box(0);
v_isShared_3532_ = v_isSharedCheck_3579_;
goto v_resetjp_3530_;
}
v_resetjp_3530_:
{
uint8_t v___x_3533_; 
v___x_3533_ = lean_unbox(v_a_3529_);
lean_dec(v_a_3529_);
if (v___x_3533_ == 0)
{
lean_object* v___x_3534_; 
lean_del_object(v___x_3531_);
v___x_3534_ = l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(v_a_3507_, v_a_3515_);
if (lean_obj_tag(v___x_3534_) == 0)
{
lean_object* v_a_3535_; lean_object* v___x_3537_; uint8_t v_isShared_3538_; uint8_t v_isSharedCheck_3566_; 
v_a_3535_ = lean_ctor_get(v___x_3534_, 0);
v_isSharedCheck_3566_ = !lean_is_exclusive(v___x_3534_);
if (v_isSharedCheck_3566_ == 0)
{
v___x_3537_ = v___x_3534_;
v_isShared_3538_ = v_isSharedCheck_3566_;
goto v_resetjp_3536_;
}
else
{
lean_inc(v_a_3535_);
lean_dec(v___x_3534_);
v___x_3537_ = lean_box(0);
v_isShared_3538_ = v_isSharedCheck_3566_;
goto v_resetjp_3536_;
}
v_resetjp_3536_:
{
lean_object* v_typeIdOf_3539_; lean_object* v___x_3540_; 
v_typeIdOf_3539_ = lean_ctor_get(v_a_3535_, 1);
lean_inc_ref(v_typeIdOf_3539_);
lean_dec(v_a_3535_);
v___x_3540_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg(v_typeIdOf_3539_, v_type_3506_);
if (lean_obj_tag(v___x_3540_) == 1)
{
lean_object* v_val_3541_; lean_object* v___x_3543_; 
lean_dec_ref(v_type_3506_);
v_val_3541_ = lean_ctor_get(v___x_3540_, 0);
lean_inc(v_val_3541_);
lean_dec_ref(v___x_3540_);
if (v_isShared_3538_ == 0)
{
lean_ctor_set(v___x_3537_, 0, v_val_3541_);
v___x_3543_ = v___x_3537_;
goto v_reusejp_3542_;
}
else
{
lean_object* v_reuseFailAlloc_3544_; 
v_reuseFailAlloc_3544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3544_, 0, v_val_3541_);
v___x_3543_ = v_reuseFailAlloc_3544_;
goto v_reusejp_3542_;
}
v_reusejp_3542_:
{
return v___x_3543_;
}
}
else
{
lean_object* v___x_3545_; 
lean_dec(v___x_3540_);
lean_del_object(v___x_3537_);
lean_inc_ref(v_type_3506_);
v___x_3545_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f(v_type_3506_, v_a_3507_, v_a_3508_, v_a_3509_, v_a_3510_, v_a_3511_, v_a_3512_, v_a_3513_, v_a_3514_, v_a_3515_, v_a_3516_);
if (lean_obj_tag(v___x_3545_) == 0)
{
lean_object* v_a_3546_; lean_object* v___f_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; 
v_a_3546_ = lean_ctor_get(v___x_3545_, 0);
lean_inc(v_a_3546_);
lean_dec_ref(v___x_3545_);
lean_inc(v_a_3546_);
v___f_3547_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f___lam__0), 3, 2);
lean_closure_set(v___f_3547_, 0, v_type_3506_);
lean_closure_set(v___f_3547_, 1, v_a_3546_);
v___x_3548_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_3549_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_3548_, v___f_3547_, v_a_3507_);
if (lean_obj_tag(v___x_3549_) == 0)
{
lean_object* v___x_3551_; uint8_t v_isShared_3552_; uint8_t v_isSharedCheck_3556_; 
v_isSharedCheck_3556_ = !lean_is_exclusive(v___x_3549_);
if (v_isSharedCheck_3556_ == 0)
{
lean_object* v_unused_3557_; 
v_unused_3557_ = lean_ctor_get(v___x_3549_, 0);
lean_dec(v_unused_3557_);
v___x_3551_ = v___x_3549_;
v_isShared_3552_ = v_isSharedCheck_3556_;
goto v_resetjp_3550_;
}
else
{
lean_dec(v___x_3549_);
v___x_3551_ = lean_box(0);
v_isShared_3552_ = v_isSharedCheck_3556_;
goto v_resetjp_3550_;
}
v_resetjp_3550_:
{
lean_object* v___x_3554_; 
if (v_isShared_3552_ == 0)
{
lean_ctor_set(v___x_3551_, 0, v_a_3546_);
v___x_3554_ = v___x_3551_;
goto v_reusejp_3553_;
}
else
{
lean_object* v_reuseFailAlloc_3555_; 
v_reuseFailAlloc_3555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3555_, 0, v_a_3546_);
v___x_3554_ = v_reuseFailAlloc_3555_;
goto v_reusejp_3553_;
}
v_reusejp_3553_:
{
return v___x_3554_;
}
}
}
else
{
lean_object* v_a_3558_; lean_object* v___x_3560_; uint8_t v_isShared_3561_; uint8_t v_isSharedCheck_3565_; 
lean_dec(v_a_3546_);
v_a_3558_ = lean_ctor_get(v___x_3549_, 0);
v_isSharedCheck_3565_ = !lean_is_exclusive(v___x_3549_);
if (v_isSharedCheck_3565_ == 0)
{
v___x_3560_ = v___x_3549_;
v_isShared_3561_ = v_isSharedCheck_3565_;
goto v_resetjp_3559_;
}
else
{
lean_inc(v_a_3558_);
lean_dec(v___x_3549_);
v___x_3560_ = lean_box(0);
v_isShared_3561_ = v_isSharedCheck_3565_;
goto v_resetjp_3559_;
}
v_resetjp_3559_:
{
lean_object* v___x_3563_; 
if (v_isShared_3561_ == 0)
{
v___x_3563_ = v___x_3560_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v_a_3558_);
v___x_3563_ = v_reuseFailAlloc_3564_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
return v___x_3563_;
}
}
}
}
else
{
lean_dec_ref(v_type_3506_);
return v___x_3545_;
}
}
}
}
else
{
lean_object* v_a_3567_; lean_object* v___x_3569_; uint8_t v_isShared_3570_; uint8_t v_isSharedCheck_3574_; 
lean_dec_ref(v_type_3506_);
v_a_3567_ = lean_ctor_get(v___x_3534_, 0);
v_isSharedCheck_3574_ = !lean_is_exclusive(v___x_3534_);
if (v_isSharedCheck_3574_ == 0)
{
v___x_3569_ = v___x_3534_;
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
else
{
lean_inc(v_a_3567_);
lean_dec(v___x_3534_);
v___x_3569_ = lean_box(0);
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
v_resetjp_3568_:
{
lean_object* v___x_3572_; 
if (v_isShared_3570_ == 0)
{
v___x_3572_ = v___x_3569_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v_a_3567_);
v___x_3572_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
return v___x_3572_;
}
}
}
}
else
{
lean_object* v___x_3575_; lean_object* v___x_3577_; 
lean_dec_ref(v_type_3506_);
v___x_3575_ = lean_box(0);
if (v_isShared_3532_ == 0)
{
lean_ctor_set(v___x_3531_, 0, v___x_3575_);
v___x_3577_ = v___x_3531_;
goto v_reusejp_3576_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v___x_3575_);
v___x_3577_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3576_;
}
v_reusejp_3576_:
{
return v___x_3577_;
}
}
}
}
else
{
lean_object* v_a_3580_; lean_object* v___x_3582_; uint8_t v_isShared_3583_; uint8_t v_isSharedCheck_3587_; 
lean_dec_ref(v_type_3506_);
v_a_3580_ = lean_ctor_get(v___x_3528_, 0);
v_isSharedCheck_3587_ = !lean_is_exclusive(v___x_3528_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3582_ = v___x_3528_;
v_isShared_3583_ = v_isSharedCheck_3587_;
goto v_resetjp_3581_;
}
else
{
lean_inc(v_a_3580_);
lean_dec(v___x_3528_);
v___x_3582_ = lean_box(0);
v_isShared_3583_ = v_isSharedCheck_3587_;
goto v_resetjp_3581_;
}
v_resetjp_3581_:
{
lean_object* v___x_3585_; 
if (v_isShared_3583_ == 0)
{
v___x_3585_ = v___x_3582_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3586_, 0, v_a_3580_);
v___x_3585_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
return v___x_3585_;
}
}
}
}
}
}
else
{
lean_object* v_a_3589_; lean_object* v___x_3591_; uint8_t v_isShared_3592_; uint8_t v_isSharedCheck_3596_; 
lean_dec_ref(v_type_3506_);
v_a_3589_ = lean_ctor_get(v___x_3518_, 0);
v_isSharedCheck_3596_ = !lean_is_exclusive(v___x_3518_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3591_ = v___x_3518_;
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
else
{
lean_inc(v_a_3589_);
lean_dec(v___x_3518_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f___boxed(lean_object* v_type_3597_, lean_object* v_a_3598_, lean_object* v_a_3599_, lean_object* v_a_3600_, lean_object* v_a_3601_, lean_object* v_a_3602_, lean_object* v_a_3603_, lean_object* v_a_3604_, lean_object* v_a_3605_, lean_object* v_a_3606_, lean_object* v_a_3607_, lean_object* v_a_3608_){
_start:
{
lean_object* v_res_3609_; 
v_res_3609_ = l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f(v_type_3597_, v_a_3598_, v_a_3599_, v_a_3600_, v_a_3601_, v_a_3602_, v_a_3603_, v_a_3604_, v_a_3605_, v_a_3606_, v_a_3607_);
lean_dec(v_a_3607_);
lean_dec_ref(v_a_3606_);
lean_dec(v_a_3605_);
lean_dec_ref(v_a_3604_);
lean_dec(v_a_3603_);
lean_dec_ref(v_a_3602_);
lean_dec(v_a_3601_);
lean_dec_ref(v_a_3600_);
lean_dec(v_a_3599_);
lean_dec(v_a_3598_);
return v_res_3609_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0(lean_object* v_00_u03b2_3610_, lean_object* v_x_3611_, lean_object* v_x_3612_){
_start:
{
lean_object* v___x_3613_; 
v___x_3613_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg(v_x_3611_, v_x_3612_);
return v___x_3613_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___boxed(lean_object* v_00_u03b2_3614_, lean_object* v_x_3615_, lean_object* v_x_3616_){
_start:
{
lean_object* v_res_3617_; 
v_res_3617_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0(v_00_u03b2_3614_, v_x_3615_, v_x_3616_);
lean_dec_ref(v_x_3616_);
return v_res_3617_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0(lean_object* v_00_u03b2_3618_, lean_object* v_x_3619_, size_t v_x_3620_, lean_object* v_x_3621_){
_start:
{
lean_object* v___x_3622_; 
v___x_3622_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___redArg(v_x_3619_, v_x_3620_, v_x_3621_);
return v___x_3622_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3623_, lean_object* v_x_3624_, lean_object* v_x_3625_, lean_object* v_x_3626_){
_start:
{
size_t v_x_8236__boxed_3627_; lean_object* v_res_3628_; 
v_x_8236__boxed_3627_ = lean_unbox_usize(v_x_3625_);
lean_dec(v_x_3625_);
v_res_3628_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0(v_00_u03b2_3623_, v_x_3624_, v_x_8236__boxed_3627_, v_x_3626_);
lean_dec_ref(v_x_3626_);
return v_res_3628_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_3629_, lean_object* v_keys_3630_, lean_object* v_vals_3631_, lean_object* v_heq_3632_, lean_object* v_i_3633_, lean_object* v_k_3634_){
_start:
{
lean_object* v___x_3635_; 
v___x_3635_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_3630_, v_vals_3631_, v_i_3633_, v_k_3634_);
return v___x_3635_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_3636_, lean_object* v_keys_3637_, lean_object* v_vals_3638_, lean_object* v_heq_3639_, lean_object* v_i_3640_, lean_object* v_k_3641_){
_start:
{
lean_object* v_res_3642_; 
v_res_3642_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0_spec__0_spec__1(v_00_u03b2_3636_, v_keys_3637_, v_vals_3638_, v_heq_3639_, v_i_3640_, v_k_3641_);
lean_dec_ref(v_k_3641_);
lean_dec_ref(v_vals_3638_);
lean_dec_ref(v_keys_3637_);
return v_res_3642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg(lean_object* v_u_3643_, lean_object* v_type_3644_, lean_object* v_a_3645_, lean_object* v_a_3646_, lean_object* v_a_3647_, lean_object* v_a_3648_){
_start:
{
lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; 
v___x_3650_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNoNatZeroDivInst_x3f___redArg___closed__1));
v___x_3651_ = lean_box(0);
v___x_3652_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3652_, 0, v_u_3643_);
lean_ctor_set(v___x_3652_, 1, v___x_3651_);
v___x_3653_ = l_Lean_mkConst(v___x_3650_, v___x_3652_);
v___x_3654_ = l_Lean_Expr_app___override(v___x_3653_, v_type_3644_);
v___x_3655_ = l_Lean_Meta_Grind_synthInstanceMeta_x3f(v___x_3654_, v_a_3645_, v_a_3646_, v_a_3647_, v_a_3648_);
return v___x_3655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg___boxed(lean_object* v_u_3656_, lean_object* v_type_3657_, lean_object* v_a_3658_, lean_object* v_a_3659_, lean_object* v_a_3660_, lean_object* v_a_3661_, lean_object* v_a_3662_){
_start:
{
lean_object* v_res_3663_; 
v_res_3663_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg(v_u_3656_, v_type_3657_, v_a_3658_, v_a_3659_, v_a_3660_, v_a_3661_);
lean_dec(v_a_3661_);
lean_dec_ref(v_a_3660_);
lean_dec(v_a_3659_);
lean_dec_ref(v_a_3658_);
return v_res_3663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f(lean_object* v_u_3664_, lean_object* v_type_3665_, lean_object* v_a_3666_, lean_object* v_a_3667_, lean_object* v_a_3668_, lean_object* v_a_3669_, lean_object* v_a_3670_, lean_object* v_a_3671_, lean_object* v_a_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_, lean_object* v_a_3675_){
_start:
{
lean_object* v___x_3677_; 
v___x_3677_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg(v_u_3664_, v_type_3665_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_);
return v___x_3677_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___boxed(lean_object* v_u_3678_, lean_object* v_type_3679_, lean_object* v_a_3680_, lean_object* v_a_3681_, lean_object* v_a_3682_, lean_object* v_a_3683_, lean_object* v_a_3684_, lean_object* v_a_3685_, lean_object* v_a_3686_, lean_object* v_a_3687_, lean_object* v_a_3688_, lean_object* v_a_3689_, lean_object* v_a_3690_){
_start:
{
lean_object* v_res_3691_; 
v_res_3691_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f(v_u_3678_, v_type_3679_, v_a_3680_, v_a_3681_, v_a_3682_, v_a_3683_, v_a_3684_, v_a_3685_, v_a_3686_, v_a_3687_, v_a_3688_, v_a_3689_);
lean_dec(v_a_3689_);
lean_dec_ref(v_a_3688_);
lean_dec(v_a_3687_);
lean_dec_ref(v_a_3686_);
lean_dec(v_a_3685_);
lean_dec_ref(v_a_3684_);
lean_dec(v_a_3683_);
lean_dec_ref(v_a_3682_);
lean_dec(v_a_3681_);
lean_dec(v_a_3680_);
return v_res_3691_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___lam__0(lean_object* v___x_3692_, lean_object* v_s_3693_){
_start:
{
lean_object* v_structs_3694_; lean_object* v_typeIdOf_3695_; lean_object* v_exprToStructId_3696_; lean_object* v_exprToStructIdEntries_3697_; lean_object* v_forbiddenNatModules_3698_; lean_object* v_natStructs_3699_; lean_object* v_natTypeIdOf_3700_; lean_object* v_exprToNatStructId_3701_; lean_object* v___x_3703_; uint8_t v_isShared_3704_; uint8_t v_isSharedCheck_3709_; 
v_structs_3694_ = lean_ctor_get(v_s_3693_, 0);
v_typeIdOf_3695_ = lean_ctor_get(v_s_3693_, 1);
v_exprToStructId_3696_ = lean_ctor_get(v_s_3693_, 2);
v_exprToStructIdEntries_3697_ = lean_ctor_get(v_s_3693_, 3);
v_forbiddenNatModules_3698_ = lean_ctor_get(v_s_3693_, 4);
v_natStructs_3699_ = lean_ctor_get(v_s_3693_, 5);
v_natTypeIdOf_3700_ = lean_ctor_get(v_s_3693_, 6);
v_exprToNatStructId_3701_ = lean_ctor_get(v_s_3693_, 7);
v_isSharedCheck_3709_ = !lean_is_exclusive(v_s_3693_);
if (v_isSharedCheck_3709_ == 0)
{
v___x_3703_ = v_s_3693_;
v_isShared_3704_ = v_isSharedCheck_3709_;
goto v_resetjp_3702_;
}
else
{
lean_inc(v_exprToNatStructId_3701_);
lean_inc(v_natTypeIdOf_3700_);
lean_inc(v_natStructs_3699_);
lean_inc(v_forbiddenNatModules_3698_);
lean_inc(v_exprToStructIdEntries_3697_);
lean_inc(v_exprToStructId_3696_);
lean_inc(v_typeIdOf_3695_);
lean_inc(v_structs_3694_);
lean_dec(v_s_3693_);
v___x_3703_ = lean_box(0);
v_isShared_3704_ = v_isSharedCheck_3709_;
goto v_resetjp_3702_;
}
v_resetjp_3702_:
{
lean_object* v___x_3705_; lean_object* v___x_3707_; 
v___x_3705_ = lean_array_push(v_natStructs_3699_, v___x_3692_);
if (v_isShared_3704_ == 0)
{
lean_ctor_set(v___x_3703_, 5, v___x_3705_);
v___x_3707_ = v___x_3703_;
goto v_reusejp_3706_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v_structs_3694_);
lean_ctor_set(v_reuseFailAlloc_3708_, 1, v_typeIdOf_3695_);
lean_ctor_set(v_reuseFailAlloc_3708_, 2, v_exprToStructId_3696_);
lean_ctor_set(v_reuseFailAlloc_3708_, 3, v_exprToStructIdEntries_3697_);
lean_ctor_set(v_reuseFailAlloc_3708_, 4, v_forbiddenNatModules_3698_);
lean_ctor_set(v_reuseFailAlloc_3708_, 5, v___x_3705_);
lean_ctor_set(v_reuseFailAlloc_3708_, 6, v_natTypeIdOf_3700_);
lean_ctor_set(v_reuseFailAlloc_3708_, 7, v_exprToNatStructId_3701_);
v___x_3707_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3706_;
}
v_reusejp_3706_:
{
return v___x_3707_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg(lean_object* v_msg_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_){
_start:
{
lean_object* v_ref_3716_; lean_object* v___x_3717_; lean_object* v_a_3718_; lean_object* v___x_3720_; uint8_t v_isShared_3721_; uint8_t v_isSharedCheck_3726_; 
v_ref_3716_ = lean_ctor_get(v___y_3713_, 5);
v___x_3717_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_ensureDefEq_spec__0_spec__0(v_msg_3710_, v___y_3711_, v___y_3712_, v___y_3713_, v___y_3714_);
v_a_3718_ = lean_ctor_get(v___x_3717_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v___x_3717_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3720_ = v___x_3717_;
v_isShared_3721_ = v_isSharedCheck_3726_;
goto v_resetjp_3719_;
}
else
{
lean_inc(v_a_3718_);
lean_dec(v___x_3717_);
v___x_3720_ = lean_box(0);
v_isShared_3721_ = v_isSharedCheck_3726_;
goto v_resetjp_3719_;
}
v_resetjp_3719_:
{
lean_object* v___x_3722_; lean_object* v___x_3724_; 
lean_inc(v_ref_3716_);
v___x_3722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3722_, 0, v_ref_3716_);
lean_ctor_set(v___x_3722_, 1, v_a_3718_);
if (v_isShared_3721_ == 0)
{
lean_ctor_set_tag(v___x_3720_, 1);
lean_ctor_set(v___x_3720_, 0, v___x_3722_);
v___x_3724_ = v___x_3720_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v___x_3722_);
v___x_3724_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
return v___x_3724_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg___boxed(lean_object* v_msg_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_){
_start:
{
lean_object* v_res_3733_; 
v_res_3733_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg(v_msg_3727_, v___y_3728_, v___y_3729_, v___y_3730_, v___y_3731_);
lean_dec(v___y_3731_);
lean_dec_ref(v___y_3730_);
lean_dec(v___y_3729_);
lean_dec_ref(v___y_3728_);
return v_res_3733_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__12(void){
_start:
{
lean_object* v___x_3762_; 
v___x_3762_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_3762_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__13(void){
_start:
{
lean_object* v___x_3763_; lean_object* v___x_3764_; 
v___x_3763_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__12, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__12_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__12);
v___x_3764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3764_, 0, v___x_3763_);
return v___x_3764_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__15(void){
_start:
{
lean_object* v___x_3766_; lean_object* v___x_3767_; 
v___x_3766_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__14));
v___x_3767_ = l_Lean_stringToMessageData(v___x_3766_);
return v___x_3767_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f(lean_object* v_type_3768_, lean_object* v_a_3769_, lean_object* v_a_3770_, lean_object* v_a_3771_, lean_object* v_a_3772_, lean_object* v_a_3773_, lean_object* v_a_3774_, lean_object* v_a_3775_, lean_object* v_a_3776_, lean_object* v_a_3777_, lean_object* v_a_3778_){
_start:
{
lean_object* v___x_3780_; 
lean_inc_ref(v_type_3768_);
v___x_3780_ = l_Lean_Meta_getDecLevel(v_type_3768_, v_a_3775_, v_a_3776_, v_a_3777_, v_a_3778_);
if (lean_obj_tag(v___x_3780_) == 0)
{
lean_object* v_a_3781_; lean_object* v___x_3782_; 
v_a_3781_ = lean_ctor_get(v___x_3780_, 0);
lean_inc(v_a_3781_);
lean_dec_ref(v___x_3780_);
lean_inc_ref(v_type_3768_);
lean_inc(v_a_3781_);
v___x_3782_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_mkNatModuleInst_x3f___redArg(v_a_3781_, v_type_3768_, v_a_3775_, v_a_3776_, v_a_3777_, v_a_3778_);
if (lean_obj_tag(v___x_3782_) == 0)
{
lean_object* v_a_3783_; lean_object* v___x_3785_; uint8_t v_isShared_3786_; uint8_t v_isSharedCheck_4075_; 
v_a_3783_ = lean_ctor_get(v___x_3782_, 0);
v_isSharedCheck_4075_ = !lean_is_exclusive(v___x_3782_);
if (v_isSharedCheck_4075_ == 0)
{
v___x_3785_ = v___x_3782_;
v_isShared_3786_ = v_isSharedCheck_4075_;
goto v_resetjp_3784_;
}
else
{
lean_inc(v_a_3783_);
lean_dec(v___x_3782_);
v___x_3785_ = lean_box(0);
v_isShared_3786_ = v_isSharedCheck_4075_;
goto v_resetjp_3784_;
}
v_resetjp_3784_:
{
if (lean_obj_tag(v_a_3783_) == 1)
{
lean_object* v_val_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; 
lean_del_object(v___x_3785_);
v_val_3787_ = lean_ctor_get(v_a_3783_, 0);
lean_inc(v_val_3787_);
lean_dec_ref(v_a_3783_);
v___x_3788_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__2));
v___x_3789_ = lean_box(0);
lean_inc(v_a_3781_);
v___x_3790_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3790_, 0, v_a_3781_);
lean_ctor_set(v___x_3790_, 1, v___x_3789_);
lean_inc_ref(v___x_3790_);
v___x_3791_ = l_Lean_mkConst(v___x_3788_, v___x_3790_);
lean_inc(v_val_3787_);
lean_inc_ref(v_type_3768_);
v___x_3792_ = l_Lean_mkAppB(v___x_3791_, v_type_3768_, v_val_3787_);
lean_inc(v_a_3778_);
lean_inc_ref(v_a_3777_);
lean_inc(v_a_3776_);
lean_inc_ref(v_a_3775_);
lean_inc(v_a_3774_);
lean_inc_ref(v_a_3773_);
lean_inc(v_a_3772_);
lean_inc_ref(v_a_3771_);
lean_inc(v_a_3770_);
lean_inc(v_a_3769_);
v___x_3793_ = lean_grind_canon(v___x_3792_, v_a_3769_, v_a_3770_, v_a_3771_, v_a_3772_, v_a_3773_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_, v_a_3778_);
if (lean_obj_tag(v___x_3793_) == 0)
{
lean_object* v_a_3794_; lean_object* v___x_3795_; 
v_a_3794_ = lean_ctor_get(v___x_3793_, 0);
lean_inc(v_a_3794_);
lean_dec_ref(v___x_3793_);
v___x_3795_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_3794_, v_a_3774_);
if (lean_obj_tag(v___x_3795_) == 0)
{
lean_object* v_a_3796_; lean_object* v___x_3797_; 
v_a_3796_ = lean_ctor_get(v___x_3795_, 0);
lean_inc(v_a_3796_);
lean_dec_ref(v___x_3795_);
lean_inc(v_a_3796_);
v___x_3797_ = l_Lean_Meta_Grind_Arith_Linear_getStructId_x3f(v_a_3796_, v_a_3769_, v_a_3770_, v_a_3771_, v_a_3772_, v_a_3773_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_, v_a_3778_);
if (lean_obj_tag(v___x_3797_) == 0)
{
lean_object* v_a_3798_; 
v_a_3798_ = lean_ctor_get(v___x_3797_, 0);
lean_inc(v_a_3798_);
lean_dec_ref(v___x_3797_);
if (lean_obj_tag(v_a_3798_) == 1)
{
lean_object* v_val_3799_; lean_object* v___x_3801_; uint8_t v_isShared_3802_; uint8_t v_isSharedCheck_4050_; 
v_val_3799_ = lean_ctor_get(v_a_3798_, 0);
v_isSharedCheck_4050_ = !lean_is_exclusive(v_a_3798_);
if (v_isSharedCheck_4050_ == 0)
{
v___x_3801_ = v_a_3798_;
v_isShared_3802_ = v_isSharedCheck_4050_;
goto v_resetjp_3800_;
}
else
{
lean_inc(v_val_3799_);
lean_dec(v_a_3798_);
v___x_3801_ = lean_box(0);
v_isShared_3802_ = v_isSharedCheck_4050_;
goto v_resetjp_3800_;
}
v_resetjp_3800_:
{
lean_object* v___x_3803_; lean_object* v___x_3804_; 
v___x_3803_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__1));
lean_inc_ref(v_type_3768_);
lean_inc(v_a_3781_);
v___x_3804_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v___x_3803_, v_a_3781_, v_type_3768_, v_a_3775_, v_a_3776_, v_a_3777_, v_a_3778_);
if (lean_obj_tag(v___x_3804_) == 0)
{
lean_object* v_a_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; 
v_a_3805_ = lean_ctor_get(v___x_3804_, 0);
lean_inc(v_a_3805_);
lean_dec_ref(v___x_3804_);
v___x_3806_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__3));
lean_inc_ref(v_type_3768_);
lean_inc(v_a_3781_);
v___x_3807_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst_x3f___redArg(v___x_3806_, v_a_3781_, v_type_3768_, v_a_3775_, v_a_3776_, v_a_3777_, v_a_3778_);
if (lean_obj_tag(v___x_3807_) == 0)
{
lean_object* v_a_3808_; lean_object* v___x_3809_; 
v_a_3808_ = lean_ctor_get(v___x_3807_, 0);
lean_inc(v_a_3808_);
lean_dec_ref(v___x_3807_);
lean_inc(v_a_3805_);
lean_inc_ref(v_type_3768_);
lean_inc(v_a_3781_);
v___x_3809_ = l_Lean_Meta_Grind_mkIsPreorderInst_x3f___redArg(v_a_3781_, v_type_3768_, v_a_3805_, v_a_3773_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_, v_a_3778_);
if (lean_obj_tag(v___x_3809_) == 0)
{
lean_object* v_a_3810_; lean_object* v___x_3811_; 
v_a_3810_ = lean_ctor_get(v___x_3809_, 0);
lean_inc(v_a_3810_);
lean_dec_ref(v___x_3809_);
lean_inc(v_a_3805_);
lean_inc(v_a_3808_);
lean_inc_ref(v_type_3768_);
lean_inc(v_a_3781_);
v___x_3811_ = l_Lean_Meta_Grind_mkLawfulOrderLTInst_x3f___redArg(v_a_3781_, v_type_3768_, v_a_3808_, v_a_3805_, v_a_3773_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_, v_a_3778_);
if (lean_obj_tag(v___x_3811_) == 0)
{
lean_object* v_a_3812_; lean_object* v___x_3813_; 
v_a_3812_ = lean_ctor_get(v___x_3811_, 0);
lean_inc(v_a_3812_);
lean_dec_ref(v___x_3811_);
lean_inc(v_a_3805_);
lean_inc_ref(v_type_3768_);
lean_inc(v_a_3781_);
v___x_3813_ = l_Lean_Meta_Grind_mkIsLinearOrderInst_x3f___redArg(v_a_3781_, v_type_3768_, v_a_3805_, v_a_3773_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_, v_a_3778_);
if (lean_obj_tag(v___x_3813_) == 0)
{
lean_object* v_a_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; 
v_a_3814_ = lean_ctor_get(v___x_3813_, 0);
lean_inc(v_a_3814_);
lean_dec_ref(v___x_3813_);
v___x_3815_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__62));
lean_inc_ref(v_type_3768_);
lean_inc(v_a_3781_);
v___x_3816_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getBinHomoInst(v___x_3815_, v_a_3781_, v_type_3768_, v_a_3769_, v_a_3770_, v_a_3771_, v_a_3772_, v_a_3773_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_, v_a_3778_);
if (lean_obj_tag(v___x_3816_) == 0)
{
lean_object* v_a_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; 
v_a_3817_ = lean_ctor_get(v___x_3816_, 0);
lean_inc(v_a_3817_);
lean_dec_ref(v___x_3816_);
v___x_3818_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__64));
lean_inc_ref(v___x_3790_);
lean_inc(v_a_3781_);
v___x_3819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3819_, 0, v_a_3781_);
lean_ctor_set(v___x_3819_, 1, v___x_3790_);
lean_inc_ref(v___x_3819_);
lean_inc(v_a_3781_);
v___x_3820_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3820_, 0, v_a_3781_);
lean_ctor_set(v___x_3820_, 1, v___x_3819_);
v___x_3821_ = l_Lean_mkConst(v___x_3818_, v___x_3820_);
lean_inc(v_a_3817_);
lean_inc_ref_n(v_type_3768_, 3);
v___x_3822_ = l_Lean_mkApp4(v___x_3821_, v_type_3768_, v_type_3768_, v_type_3768_, v_a_3817_);
v___x_3823_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v___x_3822_, v_a_3769_, v_a_3770_, v_a_3771_, v_a_3772_, v_a_3773_, v_a_3774_, v_a_3775_, v_a_3776_, v_a_3777_, v_a_3778_);
if (lean_obj_tag(v___x_3823_) == 0)
{
lean_object* v_a_3824_; lean_object* v_orderedAddInst_x3f_3826_; lean_object* v___y_3827_; lean_object* v___y_3828_; lean_object* v___y_3829_; lean_object* v___y_3830_; lean_object* v___y_3831_; lean_object* v___y_3832_; lean_object* v___y_3833_; lean_object* v___y_3834_; lean_object* v___y_3835_; lean_object* v___y_3836_; lean_object* v___y_3968_; lean_object* v___y_3969_; lean_object* v___y_3970_; lean_object* v___y_3971_; lean_object* v___y_3972_; lean_object* v___y_3973_; lean_object* v___y_3974_; lean_object* v___y_3975_; lean_object* v___y_3976_; lean_object* v___y_3977_; 
v_a_3824_ = lean_ctor_get(v___x_3823_, 0);
lean_inc(v_a_3824_);
lean_dec_ref(v___x_3823_);
if (lean_obj_tag(v_a_3805_) == 1)
{
if (lean_obj_tag(v_a_3810_) == 1)
{
lean_object* v_val_3979_; lean_object* v_val_3980_; lean_object* v___x_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; 
v_val_3979_ = lean_ctor_get(v_a_3805_, 0);
v_val_3980_ = lean_ctor_get(v_a_3810_, 0);
v___x_3981_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__66));
lean_inc_ref(v___x_3790_);
v___x_3982_ = l_Lean_mkConst(v___x_3981_, v___x_3790_);
lean_inc(v_val_3980_);
lean_inc(v_val_3979_);
lean_inc_ref(v_type_3768_);
v___x_3983_ = l_Lean_mkApp4(v___x_3982_, v_type_3768_, v_a_3817_, v_val_3979_, v_val_3980_);
v___x_3984_ = l_Lean_Meta_Grind_synthInstanceMeta_x3f(v___x_3983_, v_a_3775_, v_a_3776_, v_a_3777_, v_a_3778_);
if (lean_obj_tag(v___x_3984_) == 0)
{
lean_object* v_a_3985_; 
v_a_3985_ = lean_ctor_get(v___x_3984_, 0);
lean_inc(v_a_3985_);
lean_dec_ref(v___x_3984_);
v_orderedAddInst_x3f_3826_ = v_a_3985_;
v___y_3827_ = v_a_3769_;
v___y_3828_ = v_a_3770_;
v___y_3829_ = v_a_3771_;
v___y_3830_ = v_a_3772_;
v___y_3831_ = v_a_3773_;
v___y_3832_ = v_a_3774_;
v___y_3833_ = v_a_3775_;
v___y_3834_ = v_a_3776_;
v___y_3835_ = v_a_3777_;
v___y_3836_ = v_a_3778_;
goto v___jp_3825_;
}
else
{
lean_object* v_a_3986_; lean_object* v___x_3988_; uint8_t v_isShared_3989_; uint8_t v_isSharedCheck_3993_; 
lean_dec_ref(v_a_3810_);
lean_dec_ref(v_a_3805_);
lean_dec(v_a_3824_);
lean_dec_ref(v___x_3819_);
lean_dec(v_a_3814_);
lean_dec(v_a_3812_);
lean_dec(v_a_3808_);
lean_del_object(v___x_3801_);
lean_dec(v_val_3799_);
lean_dec(v_a_3796_);
lean_dec_ref(v___x_3790_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_3986_ = lean_ctor_get(v___x_3984_, 0);
v_isSharedCheck_3993_ = !lean_is_exclusive(v___x_3984_);
if (v_isSharedCheck_3993_ == 0)
{
v___x_3988_ = v___x_3984_;
v_isShared_3989_ = v_isSharedCheck_3993_;
goto v_resetjp_3987_;
}
else
{
lean_inc(v_a_3986_);
lean_dec(v___x_3984_);
v___x_3988_ = lean_box(0);
v_isShared_3989_ = v_isSharedCheck_3993_;
goto v_resetjp_3987_;
}
v_resetjp_3987_:
{
lean_object* v___x_3991_; 
if (v_isShared_3989_ == 0)
{
v___x_3991_ = v___x_3988_;
goto v_reusejp_3990_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v_a_3986_);
v___x_3991_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3990_;
}
v_reusejp_3990_:
{
return v___x_3991_;
}
}
}
}
else
{
lean_dec(v_a_3817_);
v___y_3968_ = v_a_3769_;
v___y_3969_ = v_a_3770_;
v___y_3970_ = v_a_3771_;
v___y_3971_ = v_a_3772_;
v___y_3972_ = v_a_3773_;
v___y_3973_ = v_a_3774_;
v___y_3974_ = v_a_3775_;
v___y_3975_ = v_a_3776_;
v___y_3976_ = v_a_3777_;
v___y_3977_ = v_a_3778_;
goto v___jp_3967_;
}
}
else
{
lean_dec(v_a_3817_);
v___y_3968_ = v_a_3769_;
v___y_3969_ = v_a_3770_;
v___y_3970_ = v_a_3771_;
v___y_3971_ = v_a_3772_;
v___y_3972_ = v_a_3773_;
v___y_3973_ = v_a_3774_;
v___y_3974_ = v_a_3775_;
v___y_3975_ = v_a_3776_;
v___y_3976_ = v_a_3777_;
v___y_3977_ = v_a_3778_;
goto v___jp_3967_;
}
v___jp_3825_:
{
lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; 
v___x_3837_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__4));
lean_inc_ref(v___x_3790_);
v___x_3838_ = l_Lean_mkConst(v___x_3837_, v___x_3790_);
lean_inc_ref(v_type_3768_);
v___x_3839_ = l_Lean_Expr_app___override(v___x_3838_, v_type_3768_);
v___x_3840_ = l_Lean_Meta_Grind_synthInstance(v___x_3839_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_);
if (lean_obj_tag(v___x_3840_) == 0)
{
lean_object* v_a_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; lean_object* v___x_3845_; 
v_a_3841_ = lean_ctor_get(v___x_3840_, 0);
lean_inc(v_a_3841_);
lean_dec_ref(v___x_3840_);
v___x_3842_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__6));
lean_inc_ref(v___x_3790_);
v___x_3843_ = l_Lean_mkConst(v___x_3842_, v___x_3790_);
lean_inc_ref(v_type_3768_);
v___x_3844_ = l_Lean_mkAppB(v___x_3843_, v_type_3768_, v_a_3841_);
v___x_3845_ = l_Lean_Meta_Grind_synthInstanceMeta_x3f(v___x_3844_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_);
if (lean_obj_tag(v___x_3845_) == 0)
{
lean_object* v_a_3846_; lean_object* v___x_3847_; lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; 
v_a_3846_ = lean_ctor_get(v___x_3845_, 0);
lean_inc(v_a_3846_);
lean_dec_ref(v___x_3845_);
v___x_3847_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__8));
lean_inc_ref(v___x_3790_);
v___x_3848_ = l_Lean_mkConst(v___x_3847_, v___x_3790_);
lean_inc(v_val_3787_);
lean_inc_ref(v_type_3768_);
v___x_3849_ = l_Lean_mkAppB(v___x_3848_, v_type_3768_, v_val_3787_);
v___x_3850_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v___x_3849_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_);
if (lean_obj_tag(v___x_3850_) == 0)
{
lean_object* v_a_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; 
v_a_3851_ = lean_ctor_get(v___x_3850_, 0);
lean_inc(v_a_3851_);
lean_dec_ref(v___x_3850_);
v___x_3852_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__14));
lean_inc_ref(v_type_3768_);
lean_inc(v_a_3781_);
v___x_3853_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getInst(v___x_3852_, v_a_3781_, v_type_3768_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_);
if (lean_obj_tag(v___x_3853_) == 0)
{
lean_object* v_a_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; 
v_a_3854_ = lean_ctor_get(v___x_3853_, 0);
lean_inc(v_a_3854_);
lean_dec_ref(v___x_3853_);
v___x_3855_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f___closed__16));
v___x_3856_ = l_Lean_mkConst(v___x_3855_, v___x_3790_);
lean_inc_ref(v_type_3768_);
v___x_3857_ = l_Lean_mkAppB(v___x_3856_, v_type_3768_, v_a_3854_);
v___x_3858_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_internalizeConst(v___x_3857_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_);
if (lean_obj_tag(v___x_3858_) == 0)
{
lean_object* v_a_3859_; lean_object* v___x_3860_; 
v_a_3859_ = lean_ctor_get(v___x_3858_, 0);
lean_inc(v_a_3859_);
lean_dec_ref(v___x_3858_);
lean_inc_ref(v_type_3768_);
lean_inc(v_a_3781_);
v___x_3860_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulNatInst(v_a_3781_, v_type_3768_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_);
if (lean_obj_tag(v___x_3860_) == 0)
{
lean_object* v_a_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; 
v_a_3861_ = lean_ctor_get(v___x_3860_, 0);
lean_inc(v_a_3861_);
lean_dec_ref(v___x_3860_);
v___x_3862_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntFn_x3f___closed__1));
v___x_3863_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getHSMulIntInst___closed__2);
v___x_3864_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3864_, 0, v___x_3863_);
lean_ctor_set(v___x_3864_, 1, v___x_3819_);
v___x_3865_ = l_Lean_mkConst(v___x_3862_, v___x_3864_);
v___x_3866_ = l_Lean_Nat_mkType;
lean_inc_ref_n(v_type_3768_, 2);
v___x_3867_ = l_Lean_mkApp4(v___x_3865_, v___x_3866_, v_type_3768_, v_type_3768_, v_a_3861_);
v___x_3868_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_preprocess(v___x_3867_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_, v___y_3834_, v___y_3835_, v___y_3836_);
if (lean_obj_tag(v___x_3868_) == 0)
{
lean_object* v_a_3869_; lean_object* v___x_3870_; 
v_a_3869_ = lean_ctor_get(v___x_3868_, 0);
lean_inc(v_a_3869_);
lean_dec_ref(v___x_3868_);
v___x_3870_ = l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(v___y_3827_, v___y_3835_);
if (lean_obj_tag(v___x_3870_) == 0)
{
lean_object* v_a_3871_; lean_object* v_natStructs_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___f_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; 
v_a_3871_ = lean_ctor_get(v___x_3870_, 0);
lean_inc(v_a_3871_);
lean_dec_ref(v___x_3870_);
v_natStructs_3872_ = lean_ctor_get(v_a_3871_, 5);
lean_inc_ref(v_natStructs_3872_);
lean_dec(v_a_3871_);
v___x_3873_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__11));
lean_inc(v_a_3781_);
v___x_3874_ = l_Lean_Level_succ___override(v_a_3781_);
v___x_3875_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3875_, 0, v___x_3874_);
lean_ctor_set(v___x_3875_, 1, v___x_3789_);
v___x_3876_ = l_Lean_mkConst(v___x_3873_, v___x_3875_);
v___x_3877_ = l_Lean_Expr_app___override(v___x_3876_, v_a_3796_);
v___x_3878_ = lean_array_get_size(v_natStructs_3872_);
lean_dec_ref(v_natStructs_3872_);
v___x_3879_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__13, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__13_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__13);
v___x_3880_ = lean_alloc_ctor(0, 18, 0);
lean_ctor_set(v___x_3880_, 0, v___x_3878_);
lean_ctor_set(v___x_3880_, 1, v_val_3799_);
lean_ctor_set(v___x_3880_, 2, v_type_3768_);
lean_ctor_set(v___x_3880_, 3, v_a_3781_);
lean_ctor_set(v___x_3880_, 4, v_val_3787_);
lean_ctor_set(v___x_3880_, 5, v_a_3805_);
lean_ctor_set(v___x_3880_, 6, v_a_3808_);
lean_ctor_set(v___x_3880_, 7, v_a_3812_);
lean_ctor_set(v___x_3880_, 8, v_a_3810_);
lean_ctor_set(v___x_3880_, 9, v_orderedAddInst_x3f_3826_);
lean_ctor_set(v___x_3880_, 10, v_a_3814_);
lean_ctor_set(v___x_3880_, 11, v_a_3846_);
lean_ctor_set(v___x_3880_, 12, v___x_3877_);
lean_ctor_set(v___x_3880_, 13, v_a_3859_);
lean_ctor_set(v___x_3880_, 14, v_a_3851_);
lean_ctor_set(v___x_3880_, 15, v_a_3824_);
lean_ctor_set(v___x_3880_, 16, v_a_3869_);
lean_ctor_set(v___x_3880_, 17, v___x_3879_);
v___f_3881_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___lam__0), 2, 1);
lean_closure_set(v___f_3881_, 0, v___x_3880_);
v___x_3882_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_3883_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_3882_, v___f_3881_, v___y_3827_);
if (lean_obj_tag(v___x_3883_) == 0)
{
lean_object* v___x_3885_; uint8_t v_isShared_3886_; uint8_t v_isSharedCheck_3893_; 
v_isSharedCheck_3893_ = !lean_is_exclusive(v___x_3883_);
if (v_isSharedCheck_3893_ == 0)
{
lean_object* v_unused_3894_; 
v_unused_3894_ = lean_ctor_get(v___x_3883_, 0);
lean_dec(v_unused_3894_);
v___x_3885_ = v___x_3883_;
v_isShared_3886_ = v_isSharedCheck_3893_;
goto v_resetjp_3884_;
}
else
{
lean_dec(v___x_3883_);
v___x_3885_ = lean_box(0);
v_isShared_3886_ = v_isSharedCheck_3893_;
goto v_resetjp_3884_;
}
v_resetjp_3884_:
{
lean_object* v___x_3888_; 
if (v_isShared_3802_ == 0)
{
lean_ctor_set(v___x_3801_, 0, v___x_3878_);
v___x_3888_ = v___x_3801_;
goto v_reusejp_3887_;
}
else
{
lean_object* v_reuseFailAlloc_3892_; 
v_reuseFailAlloc_3892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3892_, 0, v___x_3878_);
v___x_3888_ = v_reuseFailAlloc_3892_;
goto v_reusejp_3887_;
}
v_reusejp_3887_:
{
lean_object* v___x_3890_; 
if (v_isShared_3886_ == 0)
{
lean_ctor_set(v___x_3885_, 0, v___x_3888_);
v___x_3890_ = v___x_3885_;
goto v_reusejp_3889_;
}
else
{
lean_object* v_reuseFailAlloc_3891_; 
v_reuseFailAlloc_3891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3891_, 0, v___x_3888_);
v___x_3890_ = v_reuseFailAlloc_3891_;
goto v_reusejp_3889_;
}
v_reusejp_3889_:
{
return v___x_3890_;
}
}
}
}
else
{
lean_object* v_a_3895_; lean_object* v___x_3897_; uint8_t v_isShared_3898_; uint8_t v_isSharedCheck_3902_; 
lean_del_object(v___x_3801_);
v_a_3895_ = lean_ctor_get(v___x_3883_, 0);
v_isSharedCheck_3902_ = !lean_is_exclusive(v___x_3883_);
if (v_isSharedCheck_3902_ == 0)
{
v___x_3897_ = v___x_3883_;
v_isShared_3898_ = v_isSharedCheck_3902_;
goto v_resetjp_3896_;
}
else
{
lean_inc(v_a_3895_);
lean_dec(v___x_3883_);
v___x_3897_ = lean_box(0);
v_isShared_3898_ = v_isSharedCheck_3902_;
goto v_resetjp_3896_;
}
v_resetjp_3896_:
{
lean_object* v___x_3900_; 
if (v_isShared_3898_ == 0)
{
v___x_3900_ = v___x_3897_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v_a_3895_);
v___x_3900_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
return v___x_3900_;
}
}
}
}
else
{
lean_object* v_a_3903_; lean_object* v___x_3905_; uint8_t v_isShared_3906_; uint8_t v_isSharedCheck_3910_; 
lean_dec(v_a_3869_);
lean_dec(v_a_3859_);
lean_dec(v_a_3851_);
lean_dec(v_a_3846_);
lean_dec(v_orderedAddInst_x3f_3826_);
lean_dec(v_a_3824_);
lean_dec(v_a_3814_);
lean_dec(v_a_3812_);
lean_dec(v_a_3810_);
lean_dec(v_a_3808_);
lean_dec(v_a_3805_);
lean_del_object(v___x_3801_);
lean_dec(v_val_3799_);
lean_dec(v_a_3796_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_3903_ = lean_ctor_get(v___x_3870_, 0);
v_isSharedCheck_3910_ = !lean_is_exclusive(v___x_3870_);
if (v_isSharedCheck_3910_ == 0)
{
v___x_3905_ = v___x_3870_;
v_isShared_3906_ = v_isSharedCheck_3910_;
goto v_resetjp_3904_;
}
else
{
lean_inc(v_a_3903_);
lean_dec(v___x_3870_);
v___x_3905_ = lean_box(0);
v_isShared_3906_ = v_isSharedCheck_3910_;
goto v_resetjp_3904_;
}
v_resetjp_3904_:
{
lean_object* v___x_3908_; 
if (v_isShared_3906_ == 0)
{
v___x_3908_ = v___x_3905_;
goto v_reusejp_3907_;
}
else
{
lean_object* v_reuseFailAlloc_3909_; 
v_reuseFailAlloc_3909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3909_, 0, v_a_3903_);
v___x_3908_ = v_reuseFailAlloc_3909_;
goto v_reusejp_3907_;
}
v_reusejp_3907_:
{
return v___x_3908_;
}
}
}
}
else
{
lean_object* v_a_3911_; lean_object* v___x_3913_; uint8_t v_isShared_3914_; uint8_t v_isSharedCheck_3918_; 
lean_dec(v_a_3859_);
lean_dec(v_a_3851_);
lean_dec(v_a_3846_);
lean_dec(v_orderedAddInst_x3f_3826_);
lean_dec(v_a_3824_);
lean_dec(v_a_3814_);
lean_dec(v_a_3812_);
lean_dec(v_a_3810_);
lean_dec(v_a_3808_);
lean_dec(v_a_3805_);
lean_del_object(v___x_3801_);
lean_dec(v_val_3799_);
lean_dec(v_a_3796_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_3911_ = lean_ctor_get(v___x_3868_, 0);
v_isSharedCheck_3918_ = !lean_is_exclusive(v___x_3868_);
if (v_isSharedCheck_3918_ == 0)
{
v___x_3913_ = v___x_3868_;
v_isShared_3914_ = v_isSharedCheck_3918_;
goto v_resetjp_3912_;
}
else
{
lean_inc(v_a_3911_);
lean_dec(v___x_3868_);
v___x_3913_ = lean_box(0);
v_isShared_3914_ = v_isSharedCheck_3918_;
goto v_resetjp_3912_;
}
v_resetjp_3912_:
{
lean_object* v___x_3916_; 
if (v_isShared_3914_ == 0)
{
v___x_3916_ = v___x_3913_;
goto v_reusejp_3915_;
}
else
{
lean_object* v_reuseFailAlloc_3917_; 
v_reuseFailAlloc_3917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3917_, 0, v_a_3911_);
v___x_3916_ = v_reuseFailAlloc_3917_;
goto v_reusejp_3915_;
}
v_reusejp_3915_:
{
return v___x_3916_;
}
}
}
}
else
{
lean_object* v_a_3919_; lean_object* v___x_3921_; uint8_t v_isShared_3922_; uint8_t v_isSharedCheck_3926_; 
lean_dec(v_a_3859_);
lean_dec(v_a_3851_);
lean_dec(v_a_3846_);
lean_dec(v_orderedAddInst_x3f_3826_);
lean_dec(v_a_3824_);
lean_dec_ref(v___x_3819_);
lean_dec(v_a_3814_);
lean_dec(v_a_3812_);
lean_dec(v_a_3810_);
lean_dec(v_a_3808_);
lean_dec(v_a_3805_);
lean_del_object(v___x_3801_);
lean_dec(v_val_3799_);
lean_dec(v_a_3796_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_3919_ = lean_ctor_get(v___x_3860_, 0);
v_isSharedCheck_3926_ = !lean_is_exclusive(v___x_3860_);
if (v_isSharedCheck_3926_ == 0)
{
v___x_3921_ = v___x_3860_;
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
else
{
lean_inc(v_a_3919_);
lean_dec(v___x_3860_);
v___x_3921_ = lean_box(0);
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
v_resetjp_3920_:
{
lean_object* v___x_3924_; 
if (v_isShared_3922_ == 0)
{
v___x_3924_ = v___x_3921_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v_a_3919_);
v___x_3924_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
return v___x_3924_;
}
}
}
}
else
{
lean_object* v_a_3927_; lean_object* v___x_3929_; uint8_t v_isShared_3930_; uint8_t v_isSharedCheck_3934_; 
lean_dec(v_a_3851_);
lean_dec(v_a_3846_);
lean_dec(v_orderedAddInst_x3f_3826_);
lean_dec(v_a_3824_);
lean_dec_ref(v___x_3819_);
lean_dec(v_a_3814_);
lean_dec(v_a_3812_);
lean_dec(v_a_3810_);
lean_dec(v_a_3808_);
lean_dec(v_a_3805_);
lean_del_object(v___x_3801_);
lean_dec(v_val_3799_);
lean_dec(v_a_3796_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_3927_ = lean_ctor_get(v___x_3858_, 0);
v_isSharedCheck_3934_ = !lean_is_exclusive(v___x_3858_);
if (v_isSharedCheck_3934_ == 0)
{
v___x_3929_ = v___x_3858_;
v_isShared_3930_ = v_isSharedCheck_3934_;
goto v_resetjp_3928_;
}
else
{
lean_inc(v_a_3927_);
lean_dec(v___x_3858_);
v___x_3929_ = lean_box(0);
v_isShared_3930_ = v_isSharedCheck_3934_;
goto v_resetjp_3928_;
}
v_resetjp_3928_:
{
lean_object* v___x_3932_; 
if (v_isShared_3930_ == 0)
{
v___x_3932_ = v___x_3929_;
goto v_reusejp_3931_;
}
else
{
lean_object* v_reuseFailAlloc_3933_; 
v_reuseFailAlloc_3933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3933_, 0, v_a_3927_);
v___x_3932_ = v_reuseFailAlloc_3933_;
goto v_reusejp_3931_;
}
v_reusejp_3931_:
{
return v___x_3932_;
}
}
}
}
else
{
lean_object* v_a_3935_; lean_object* v___x_3937_; uint8_t v_isShared_3938_; uint8_t v_isSharedCheck_3942_; 
lean_dec(v_a_3851_);
lean_dec(v_a_3846_);
lean_dec(v_orderedAddInst_x3f_3826_);
lean_dec(v_a_3824_);
lean_dec_ref(v___x_3819_);
lean_dec(v_a_3814_);
lean_dec(v_a_3812_);
lean_dec(v_a_3810_);
lean_dec(v_a_3808_);
lean_dec(v_a_3805_);
lean_del_object(v___x_3801_);
lean_dec(v_val_3799_);
lean_dec(v_a_3796_);
lean_dec_ref(v___x_3790_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_3935_ = lean_ctor_get(v___x_3853_, 0);
v_isSharedCheck_3942_ = !lean_is_exclusive(v___x_3853_);
if (v_isSharedCheck_3942_ == 0)
{
v___x_3937_ = v___x_3853_;
v_isShared_3938_ = v_isSharedCheck_3942_;
goto v_resetjp_3936_;
}
else
{
lean_inc(v_a_3935_);
lean_dec(v___x_3853_);
v___x_3937_ = lean_box(0);
v_isShared_3938_ = v_isSharedCheck_3942_;
goto v_resetjp_3936_;
}
v_resetjp_3936_:
{
lean_object* v___x_3940_; 
if (v_isShared_3938_ == 0)
{
v___x_3940_ = v___x_3937_;
goto v_reusejp_3939_;
}
else
{
lean_object* v_reuseFailAlloc_3941_; 
v_reuseFailAlloc_3941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3941_, 0, v_a_3935_);
v___x_3940_ = v_reuseFailAlloc_3941_;
goto v_reusejp_3939_;
}
v_reusejp_3939_:
{
return v___x_3940_;
}
}
}
}
else
{
lean_object* v_a_3943_; lean_object* v___x_3945_; uint8_t v_isShared_3946_; uint8_t v_isSharedCheck_3950_; 
lean_dec(v_a_3846_);
lean_dec(v_orderedAddInst_x3f_3826_);
lean_dec(v_a_3824_);
lean_dec_ref(v___x_3819_);
lean_dec(v_a_3814_);
lean_dec(v_a_3812_);
lean_dec(v_a_3810_);
lean_dec(v_a_3808_);
lean_dec(v_a_3805_);
lean_del_object(v___x_3801_);
lean_dec(v_val_3799_);
lean_dec(v_a_3796_);
lean_dec_ref(v___x_3790_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_3943_ = lean_ctor_get(v___x_3850_, 0);
v_isSharedCheck_3950_ = !lean_is_exclusive(v___x_3850_);
if (v_isSharedCheck_3950_ == 0)
{
v___x_3945_ = v___x_3850_;
v_isShared_3946_ = v_isSharedCheck_3950_;
goto v_resetjp_3944_;
}
else
{
lean_inc(v_a_3943_);
lean_dec(v___x_3850_);
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
lean_dec(v_orderedAddInst_x3f_3826_);
lean_dec(v_a_3824_);
lean_dec_ref(v___x_3819_);
lean_dec(v_a_3814_);
lean_dec(v_a_3812_);
lean_dec(v_a_3810_);
lean_dec(v_a_3808_);
lean_dec(v_a_3805_);
lean_del_object(v___x_3801_);
lean_dec(v_val_3799_);
lean_dec(v_a_3796_);
lean_dec_ref(v___x_3790_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_3951_ = lean_ctor_get(v___x_3845_, 0);
v_isSharedCheck_3958_ = !lean_is_exclusive(v___x_3845_);
if (v_isSharedCheck_3958_ == 0)
{
v___x_3953_ = v___x_3845_;
v_isShared_3954_ = v_isSharedCheck_3958_;
goto v_resetjp_3952_;
}
else
{
lean_inc(v_a_3951_);
lean_dec(v___x_3845_);
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
lean_dec(v_orderedAddInst_x3f_3826_);
lean_dec(v_a_3824_);
lean_dec_ref(v___x_3819_);
lean_dec(v_a_3814_);
lean_dec(v_a_3812_);
lean_dec(v_a_3810_);
lean_dec(v_a_3808_);
lean_dec(v_a_3805_);
lean_del_object(v___x_3801_);
lean_dec(v_val_3799_);
lean_dec(v_a_3796_);
lean_dec_ref(v___x_3790_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_3959_ = lean_ctor_get(v___x_3840_, 0);
v_isSharedCheck_3966_ = !lean_is_exclusive(v___x_3840_);
if (v_isSharedCheck_3966_ == 0)
{
v___x_3961_ = v___x_3840_;
v_isShared_3962_ = v_isSharedCheck_3966_;
goto v_resetjp_3960_;
}
else
{
lean_inc(v_a_3959_);
lean_dec(v___x_3840_);
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
v___jp_3967_:
{
lean_object* v___x_3978_; 
v___x_3978_ = lean_box(0);
v_orderedAddInst_x3f_3826_ = v___x_3978_;
v___y_3827_ = v___y_3968_;
v___y_3828_ = v___y_3969_;
v___y_3829_ = v___y_3970_;
v___y_3830_ = v___y_3971_;
v___y_3831_ = v___y_3972_;
v___y_3832_ = v___y_3973_;
v___y_3833_ = v___y_3974_;
v___y_3834_ = v___y_3975_;
v___y_3835_ = v___y_3976_;
v___y_3836_ = v___y_3977_;
goto v___jp_3825_;
}
}
else
{
lean_object* v_a_3994_; lean_object* v___x_3996_; uint8_t v_isShared_3997_; uint8_t v_isSharedCheck_4001_; 
lean_dec_ref(v___x_3819_);
lean_dec(v_a_3817_);
lean_dec(v_a_3814_);
lean_dec(v_a_3812_);
lean_dec(v_a_3810_);
lean_dec(v_a_3808_);
lean_dec(v_a_3805_);
lean_del_object(v___x_3801_);
lean_dec(v_val_3799_);
lean_dec(v_a_3796_);
lean_dec_ref(v___x_3790_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_3994_ = lean_ctor_get(v___x_3823_, 0);
v_isSharedCheck_4001_ = !lean_is_exclusive(v___x_3823_);
if (v_isSharedCheck_4001_ == 0)
{
v___x_3996_ = v___x_3823_;
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
else
{
lean_inc(v_a_3994_);
lean_dec(v___x_3823_);
v___x_3996_ = lean_box(0);
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
v_resetjp_3995_:
{
lean_object* v___x_3999_; 
if (v_isShared_3997_ == 0)
{
v___x_3999_ = v___x_3996_;
goto v_reusejp_3998_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v_a_3994_);
v___x_3999_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3998_;
}
v_reusejp_3998_:
{
return v___x_3999_;
}
}
}
}
else
{
lean_object* v_a_4002_; lean_object* v___x_4004_; uint8_t v_isShared_4005_; uint8_t v_isSharedCheck_4009_; 
lean_dec(v_a_3814_);
lean_dec(v_a_3812_);
lean_dec(v_a_3810_);
lean_dec(v_a_3808_);
lean_dec(v_a_3805_);
lean_del_object(v___x_3801_);
lean_dec(v_val_3799_);
lean_dec(v_a_3796_);
lean_dec_ref(v___x_3790_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_4002_ = lean_ctor_get(v___x_3816_, 0);
v_isSharedCheck_4009_ = !lean_is_exclusive(v___x_3816_);
if (v_isSharedCheck_4009_ == 0)
{
v___x_4004_ = v___x_3816_;
v_isShared_4005_ = v_isSharedCheck_4009_;
goto v_resetjp_4003_;
}
else
{
lean_inc(v_a_4002_);
lean_dec(v___x_3816_);
v___x_4004_ = lean_box(0);
v_isShared_4005_ = v_isSharedCheck_4009_;
goto v_resetjp_4003_;
}
v_resetjp_4003_:
{
lean_object* v___x_4007_; 
if (v_isShared_4005_ == 0)
{
v___x_4007_ = v___x_4004_;
goto v_reusejp_4006_;
}
else
{
lean_object* v_reuseFailAlloc_4008_; 
v_reuseFailAlloc_4008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4008_, 0, v_a_4002_);
v___x_4007_ = v_reuseFailAlloc_4008_;
goto v_reusejp_4006_;
}
v_reusejp_4006_:
{
return v___x_4007_;
}
}
}
}
else
{
lean_object* v_a_4010_; lean_object* v___x_4012_; uint8_t v_isShared_4013_; uint8_t v_isSharedCheck_4017_; 
lean_dec(v_a_3812_);
lean_dec(v_a_3810_);
lean_dec(v_a_3808_);
lean_dec(v_a_3805_);
lean_del_object(v___x_3801_);
lean_dec(v_val_3799_);
lean_dec(v_a_3796_);
lean_dec_ref(v___x_3790_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_4010_ = lean_ctor_get(v___x_3813_, 0);
v_isSharedCheck_4017_ = !lean_is_exclusive(v___x_3813_);
if (v_isSharedCheck_4017_ == 0)
{
v___x_4012_ = v___x_3813_;
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
else
{
lean_inc(v_a_4010_);
lean_dec(v___x_3813_);
v___x_4012_ = lean_box(0);
v_isShared_4013_ = v_isSharedCheck_4017_;
goto v_resetjp_4011_;
}
v_resetjp_4011_:
{
lean_object* v___x_4015_; 
if (v_isShared_4013_ == 0)
{
v___x_4015_ = v___x_4012_;
goto v_reusejp_4014_;
}
else
{
lean_object* v_reuseFailAlloc_4016_; 
v_reuseFailAlloc_4016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4016_, 0, v_a_4010_);
v___x_4015_ = v_reuseFailAlloc_4016_;
goto v_reusejp_4014_;
}
v_reusejp_4014_:
{
return v___x_4015_;
}
}
}
}
else
{
lean_object* v_a_4018_; lean_object* v___x_4020_; uint8_t v_isShared_4021_; uint8_t v_isSharedCheck_4025_; 
lean_dec(v_a_3810_);
lean_dec(v_a_3808_);
lean_dec(v_a_3805_);
lean_del_object(v___x_3801_);
lean_dec(v_val_3799_);
lean_dec(v_a_3796_);
lean_dec_ref(v___x_3790_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_4018_ = lean_ctor_get(v___x_3811_, 0);
v_isSharedCheck_4025_ = !lean_is_exclusive(v___x_3811_);
if (v_isSharedCheck_4025_ == 0)
{
v___x_4020_ = v___x_3811_;
v_isShared_4021_ = v_isSharedCheck_4025_;
goto v_resetjp_4019_;
}
else
{
lean_inc(v_a_4018_);
lean_dec(v___x_3811_);
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
else
{
lean_object* v_a_4026_; lean_object* v___x_4028_; uint8_t v_isShared_4029_; uint8_t v_isSharedCheck_4033_; 
lean_dec(v_a_3808_);
lean_dec(v_a_3805_);
lean_del_object(v___x_3801_);
lean_dec(v_val_3799_);
lean_dec(v_a_3796_);
lean_dec_ref(v___x_3790_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_4026_ = lean_ctor_get(v___x_3809_, 0);
v_isSharedCheck_4033_ = !lean_is_exclusive(v___x_3809_);
if (v_isSharedCheck_4033_ == 0)
{
v___x_4028_ = v___x_3809_;
v_isShared_4029_ = v_isSharedCheck_4033_;
goto v_resetjp_4027_;
}
else
{
lean_inc(v_a_4026_);
lean_dec(v___x_3809_);
v___x_4028_ = lean_box(0);
v_isShared_4029_ = v_isSharedCheck_4033_;
goto v_resetjp_4027_;
}
v_resetjp_4027_:
{
lean_object* v___x_4031_; 
if (v_isShared_4029_ == 0)
{
v___x_4031_ = v___x_4028_;
goto v_reusejp_4030_;
}
else
{
lean_object* v_reuseFailAlloc_4032_; 
v_reuseFailAlloc_4032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4032_, 0, v_a_4026_);
v___x_4031_ = v_reuseFailAlloc_4032_;
goto v_reusejp_4030_;
}
v_reusejp_4030_:
{
return v___x_4031_;
}
}
}
}
else
{
lean_object* v_a_4034_; lean_object* v___x_4036_; uint8_t v_isShared_4037_; uint8_t v_isSharedCheck_4041_; 
lean_dec(v_a_3805_);
lean_del_object(v___x_3801_);
lean_dec(v_val_3799_);
lean_dec(v_a_3796_);
lean_dec_ref(v___x_3790_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_4034_ = lean_ctor_get(v___x_3807_, 0);
v_isSharedCheck_4041_ = !lean_is_exclusive(v___x_3807_);
if (v_isSharedCheck_4041_ == 0)
{
v___x_4036_ = v___x_3807_;
v_isShared_4037_ = v_isSharedCheck_4041_;
goto v_resetjp_4035_;
}
else
{
lean_inc(v_a_4034_);
lean_dec(v___x_3807_);
v___x_4036_ = lean_box(0);
v_isShared_4037_ = v_isSharedCheck_4041_;
goto v_resetjp_4035_;
}
v_resetjp_4035_:
{
lean_object* v___x_4039_; 
if (v_isShared_4037_ == 0)
{
v___x_4039_ = v___x_4036_;
goto v_reusejp_4038_;
}
else
{
lean_object* v_reuseFailAlloc_4040_; 
v_reuseFailAlloc_4040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4040_, 0, v_a_4034_);
v___x_4039_ = v_reuseFailAlloc_4040_;
goto v_reusejp_4038_;
}
v_reusejp_4038_:
{
return v___x_4039_;
}
}
}
}
else
{
lean_object* v_a_4042_; lean_object* v___x_4044_; uint8_t v_isShared_4045_; uint8_t v_isSharedCheck_4049_; 
lean_del_object(v___x_3801_);
lean_dec(v_val_3799_);
lean_dec(v_a_3796_);
lean_dec_ref(v___x_3790_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_4042_ = lean_ctor_get(v___x_3804_, 0);
v_isSharedCheck_4049_ = !lean_is_exclusive(v___x_3804_);
if (v_isSharedCheck_4049_ == 0)
{
v___x_4044_ = v___x_3804_;
v_isShared_4045_ = v_isSharedCheck_4049_;
goto v_resetjp_4043_;
}
else
{
lean_inc(v_a_4042_);
lean_dec(v___x_3804_);
v___x_4044_ = lean_box(0);
v_isShared_4045_ = v_isSharedCheck_4049_;
goto v_resetjp_4043_;
}
v_resetjp_4043_:
{
lean_object* v___x_4047_; 
if (v_isShared_4045_ == 0)
{
v___x_4047_ = v___x_4044_;
goto v_reusejp_4046_;
}
else
{
lean_object* v_reuseFailAlloc_4048_; 
v_reuseFailAlloc_4048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4048_, 0, v_a_4042_);
v___x_4047_ = v_reuseFailAlloc_4048_;
goto v_reusejp_4046_;
}
v_reusejp_4046_:
{
return v___x_4047_;
}
}
}
}
}
else
{
lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; 
lean_dec(v_a_3798_);
lean_dec_ref(v___x_3790_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v___x_4051_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__15, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__15_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___closed__15);
v___x_4052_ = l_Lean_indentExpr(v_a_3796_);
v___x_4053_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4053_, 0, v___x_4051_);
lean_ctor_set(v___x_4053_, 1, v___x_4052_);
v___x_4054_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg(v___x_4053_, v_a_3775_, v_a_3776_, v_a_3777_, v_a_3778_);
return v___x_4054_;
}
}
else
{
lean_dec(v_a_3796_);
lean_dec_ref(v___x_3790_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
return v___x_3797_;
}
}
else
{
lean_object* v_a_4055_; lean_object* v___x_4057_; uint8_t v_isShared_4058_; uint8_t v_isSharedCheck_4062_; 
lean_dec_ref(v___x_3790_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_4055_ = lean_ctor_get(v___x_3795_, 0);
v_isSharedCheck_4062_ = !lean_is_exclusive(v___x_3795_);
if (v_isSharedCheck_4062_ == 0)
{
v___x_4057_ = v___x_3795_;
v_isShared_4058_ = v_isSharedCheck_4062_;
goto v_resetjp_4056_;
}
else
{
lean_inc(v_a_4055_);
lean_dec(v___x_3795_);
v___x_4057_ = lean_box(0);
v_isShared_4058_ = v_isSharedCheck_4062_;
goto v_resetjp_4056_;
}
v_resetjp_4056_:
{
lean_object* v___x_4060_; 
if (v_isShared_4058_ == 0)
{
v___x_4060_ = v___x_4057_;
goto v_reusejp_4059_;
}
else
{
lean_object* v_reuseFailAlloc_4061_; 
v_reuseFailAlloc_4061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4061_, 0, v_a_4055_);
v___x_4060_ = v_reuseFailAlloc_4061_;
goto v_reusejp_4059_;
}
v_reusejp_4059_:
{
return v___x_4060_;
}
}
}
}
else
{
lean_object* v_a_4063_; lean_object* v___x_4065_; uint8_t v_isShared_4066_; uint8_t v_isSharedCheck_4070_; 
lean_dec_ref(v___x_3790_);
lean_dec(v_val_3787_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_4063_ = lean_ctor_get(v___x_3793_, 0);
v_isSharedCheck_4070_ = !lean_is_exclusive(v___x_3793_);
if (v_isSharedCheck_4070_ == 0)
{
v___x_4065_ = v___x_3793_;
v_isShared_4066_ = v_isSharedCheck_4070_;
goto v_resetjp_4064_;
}
else
{
lean_inc(v_a_4063_);
lean_dec(v___x_3793_);
v___x_4065_ = lean_box(0);
v_isShared_4066_ = v_isSharedCheck_4070_;
goto v_resetjp_4064_;
}
v_resetjp_4064_:
{
lean_object* v___x_4068_; 
if (v_isShared_4066_ == 0)
{
v___x_4068_ = v___x_4065_;
goto v_reusejp_4067_;
}
else
{
lean_object* v_reuseFailAlloc_4069_; 
v_reuseFailAlloc_4069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4069_, 0, v_a_4063_);
v___x_4068_ = v_reuseFailAlloc_4069_;
goto v_reusejp_4067_;
}
v_reusejp_4067_:
{
return v___x_4068_;
}
}
}
}
else
{
lean_object* v___x_4071_; lean_object* v___x_4073_; 
lean_dec(v_a_3783_);
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v___x_4071_ = lean_box(0);
if (v_isShared_3786_ == 0)
{
lean_ctor_set(v___x_3785_, 0, v___x_4071_);
v___x_4073_ = v___x_3785_;
goto v_reusejp_4072_;
}
else
{
lean_object* v_reuseFailAlloc_4074_; 
v_reuseFailAlloc_4074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4074_, 0, v___x_4071_);
v___x_4073_ = v_reuseFailAlloc_4074_;
goto v_reusejp_4072_;
}
v_reusejp_4072_:
{
return v___x_4073_;
}
}
}
}
else
{
lean_object* v_a_4076_; lean_object* v___x_4078_; uint8_t v_isShared_4079_; uint8_t v_isSharedCheck_4083_; 
lean_dec(v_a_3781_);
lean_dec_ref(v_type_3768_);
v_a_4076_ = lean_ctor_get(v___x_3782_, 0);
v_isSharedCheck_4083_ = !lean_is_exclusive(v___x_3782_);
if (v_isSharedCheck_4083_ == 0)
{
v___x_4078_ = v___x_3782_;
v_isShared_4079_ = v_isSharedCheck_4083_;
goto v_resetjp_4077_;
}
else
{
lean_inc(v_a_4076_);
lean_dec(v___x_3782_);
v___x_4078_ = lean_box(0);
v_isShared_4079_ = v_isSharedCheck_4083_;
goto v_resetjp_4077_;
}
v_resetjp_4077_:
{
lean_object* v___x_4081_; 
if (v_isShared_4079_ == 0)
{
v___x_4081_ = v___x_4078_;
goto v_reusejp_4080_;
}
else
{
lean_object* v_reuseFailAlloc_4082_; 
v_reuseFailAlloc_4082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4082_, 0, v_a_4076_);
v___x_4081_ = v_reuseFailAlloc_4082_;
goto v_reusejp_4080_;
}
v_reusejp_4080_:
{
return v___x_4081_;
}
}
}
}
else
{
lean_object* v_a_4084_; lean_object* v___x_4086_; uint8_t v_isShared_4087_; uint8_t v_isSharedCheck_4091_; 
lean_dec_ref(v_type_3768_);
v_a_4084_ = lean_ctor_get(v___x_3780_, 0);
v_isSharedCheck_4091_ = !lean_is_exclusive(v___x_3780_);
if (v_isSharedCheck_4091_ == 0)
{
v___x_4086_ = v___x_3780_;
v_isShared_4087_ = v_isSharedCheck_4091_;
goto v_resetjp_4085_;
}
else
{
lean_inc(v_a_4084_);
lean_dec(v___x_3780_);
v___x_4086_ = lean_box(0);
v_isShared_4087_ = v_isSharedCheck_4091_;
goto v_resetjp_4085_;
}
v_resetjp_4085_:
{
lean_object* v___x_4089_; 
if (v_isShared_4087_ == 0)
{
v___x_4089_ = v___x_4086_;
goto v_reusejp_4088_;
}
else
{
lean_object* v_reuseFailAlloc_4090_; 
v_reuseFailAlloc_4090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4090_, 0, v_a_4084_);
v___x_4089_ = v_reuseFailAlloc_4090_;
goto v_reusejp_4088_;
}
v_reusejp_4088_:
{
return v___x_4089_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f___boxed(lean_object* v_type_4092_, lean_object* v_a_4093_, lean_object* v_a_4094_, lean_object* v_a_4095_, lean_object* v_a_4096_, lean_object* v_a_4097_, lean_object* v_a_4098_, lean_object* v_a_4099_, lean_object* v_a_4100_, lean_object* v_a_4101_, lean_object* v_a_4102_, lean_object* v_a_4103_){
_start:
{
lean_object* v_res_4104_; 
v_res_4104_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f(v_type_4092_, v_a_4093_, v_a_4094_, v_a_4095_, v_a_4096_, v_a_4097_, v_a_4098_, v_a_4099_, v_a_4100_, v_a_4101_, v_a_4102_);
lean_dec(v_a_4102_);
lean_dec_ref(v_a_4101_);
lean_dec(v_a_4100_);
lean_dec_ref(v_a_4099_);
lean_dec(v_a_4098_);
lean_dec_ref(v_a_4097_);
lean_dec(v_a_4096_);
lean_dec_ref(v_a_4095_);
lean_dec(v_a_4094_);
lean_dec(v_a_4093_);
return v_res_4104_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0(lean_object* v_00_u03b1_4105_, lean_object* v_msg_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_){
_start:
{
lean_object* v___x_4118_; 
v___x_4118_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___redArg(v_msg_4106_, v___y_4113_, v___y_4114_, v___y_4115_, v___y_4116_);
return v___x_4118_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0___boxed(lean_object* v_00_u03b1_4119_, lean_object* v_msg_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_){
_start:
{
lean_object* v_res_4132_; 
v_res_4132_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f_spec__0(v_00_u03b1_4119_, v_msg_4120_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_, v___y_4127_, v___y_4128_, v___y_4129_, v___y_4130_);
lean_dec(v___y_4130_);
lean_dec_ref(v___y_4129_);
lean_dec(v___y_4128_);
lean_dec_ref(v___y_4127_);
lean_dec(v___y_4126_);
lean_dec_ref(v___y_4125_);
lean_dec(v___y_4124_);
lean_dec_ref(v___y_4123_);
lean_dec(v___y_4122_);
lean_dec(v___y_4121_);
return v_res_4132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f___lam__0(lean_object* v_type_4133_, lean_object* v_a_4134_, lean_object* v_s_4135_){
_start:
{
lean_object* v_structs_4136_; lean_object* v_typeIdOf_4137_; lean_object* v_exprToStructId_4138_; lean_object* v_exprToStructIdEntries_4139_; lean_object* v_forbiddenNatModules_4140_; lean_object* v_natStructs_4141_; lean_object* v_natTypeIdOf_4142_; lean_object* v_exprToNatStructId_4143_; lean_object* v___x_4145_; uint8_t v_isShared_4146_; uint8_t v_isSharedCheck_4151_; 
v_structs_4136_ = lean_ctor_get(v_s_4135_, 0);
v_typeIdOf_4137_ = lean_ctor_get(v_s_4135_, 1);
v_exprToStructId_4138_ = lean_ctor_get(v_s_4135_, 2);
v_exprToStructIdEntries_4139_ = lean_ctor_get(v_s_4135_, 3);
v_forbiddenNatModules_4140_ = lean_ctor_get(v_s_4135_, 4);
v_natStructs_4141_ = lean_ctor_get(v_s_4135_, 5);
v_natTypeIdOf_4142_ = lean_ctor_get(v_s_4135_, 6);
v_exprToNatStructId_4143_ = lean_ctor_get(v_s_4135_, 7);
v_isSharedCheck_4151_ = !lean_is_exclusive(v_s_4135_);
if (v_isSharedCheck_4151_ == 0)
{
v___x_4145_ = v_s_4135_;
v_isShared_4146_ = v_isSharedCheck_4151_;
goto v_resetjp_4144_;
}
else
{
lean_inc(v_exprToNatStructId_4143_);
lean_inc(v_natTypeIdOf_4142_);
lean_inc(v_natStructs_4141_);
lean_inc(v_forbiddenNatModules_4140_);
lean_inc(v_exprToStructIdEntries_4139_);
lean_inc(v_exprToStructId_4138_);
lean_inc(v_typeIdOf_4137_);
lean_inc(v_structs_4136_);
lean_dec(v_s_4135_);
v___x_4145_ = lean_box(0);
v_isShared_4146_ = v_isSharedCheck_4151_;
goto v_resetjp_4144_;
}
v_resetjp_4144_:
{
lean_object* v___x_4147_; lean_object* v___x_4149_; 
v___x_4147_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0___redArg(v_natTypeIdOf_4142_, v_type_4133_, v_a_4134_);
if (v_isShared_4146_ == 0)
{
lean_ctor_set(v___x_4145_, 6, v___x_4147_);
v___x_4149_ = v___x_4145_;
goto v_reusejp_4148_;
}
else
{
lean_object* v_reuseFailAlloc_4150_; 
v_reuseFailAlloc_4150_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_4150_, 0, v_structs_4136_);
lean_ctor_set(v_reuseFailAlloc_4150_, 1, v_typeIdOf_4137_);
lean_ctor_set(v_reuseFailAlloc_4150_, 2, v_exprToStructId_4138_);
lean_ctor_set(v_reuseFailAlloc_4150_, 3, v_exprToStructIdEntries_4139_);
lean_ctor_set(v_reuseFailAlloc_4150_, 4, v_forbiddenNatModules_4140_);
lean_ctor_set(v_reuseFailAlloc_4150_, 5, v_natStructs_4141_);
lean_ctor_set(v_reuseFailAlloc_4150_, 6, v___x_4147_);
lean_ctor_set(v_reuseFailAlloc_4150_, 7, v_exprToNatStructId_4143_);
v___x_4149_ = v_reuseFailAlloc_4150_;
goto v_reusejp_4148_;
}
v_reusejp_4148_:
{
return v___x_4149_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_4152_, lean_object* v_i_4153_, lean_object* v_k_4154_){
_start:
{
lean_object* v___x_4155_; uint8_t v___x_4156_; 
v___x_4155_ = lean_array_get_size(v_keys_4152_);
v___x_4156_ = lean_nat_dec_lt(v_i_4153_, v___x_4155_);
if (v___x_4156_ == 0)
{
lean_dec(v_i_4153_);
return v___x_4156_;
}
else
{
lean_object* v_k_x27_4157_; uint8_t v___x_4158_; 
v_k_x27_4157_ = lean_array_fget_borrowed(v_keys_4152_, v_i_4153_);
v___x_4158_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_k_4154_, v_k_x27_4157_);
if (v___x_4158_ == 0)
{
lean_object* v___x_4159_; lean_object* v___x_4160_; 
v___x_4159_ = lean_unsigned_to_nat(1u);
v___x_4160_ = lean_nat_add(v_i_4153_, v___x_4159_);
lean_dec(v_i_4153_);
v_i_4153_ = v___x_4160_;
goto _start;
}
else
{
lean_dec(v_i_4153_);
return v___x_4158_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_4162_, lean_object* v_i_4163_, lean_object* v_k_4164_){
_start:
{
uint8_t v_res_4165_; lean_object* v_r_4166_; 
v_res_4165_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_4162_, v_i_4163_, v_k_4164_);
lean_dec_ref(v_k_4164_);
lean_dec_ref(v_keys_4162_);
v_r_4166_ = lean_box(v_res_4165_);
return v_r_4166_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg(lean_object* v_x_4167_, size_t v_x_4168_, lean_object* v_x_4169_){
_start:
{
if (lean_obj_tag(v_x_4167_) == 0)
{
lean_object* v_es_4170_; lean_object* v___x_4171_; size_t v___x_4172_; size_t v___x_4173_; size_t v___x_4174_; lean_object* v_j_4175_; lean_object* v___x_4176_; 
v_es_4170_ = lean_ctor_get(v_x_4167_, 0);
lean_inc_ref(v_es_4170_);
lean_dec_ref(v_x_4167_);
v___x_4171_ = lean_box(2);
v___x_4172_ = ((size_t)5ULL);
v___x_4173_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getStructId_x3f_go_x3f_spec__0_spec__0___redArg___closed__1);
v___x_4174_ = lean_usize_land(v_x_4168_, v___x_4173_);
v_j_4175_ = lean_usize_to_nat(v___x_4174_);
v___x_4176_ = lean_array_get(v___x_4171_, v_es_4170_, v_j_4175_);
lean_dec(v_j_4175_);
lean_dec_ref(v_es_4170_);
switch(lean_obj_tag(v___x_4176_))
{
case 0:
{
lean_object* v_key_4177_; uint8_t v___x_4178_; 
v_key_4177_ = lean_ctor_get(v___x_4176_, 0);
lean_inc(v_key_4177_);
lean_dec_ref(v___x_4176_);
v___x_4178_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_4169_, v_key_4177_);
lean_dec(v_key_4177_);
return v___x_4178_;
}
case 1:
{
lean_object* v_node_4179_; size_t v___x_4180_; 
v_node_4179_ = lean_ctor_get(v___x_4176_, 0);
lean_inc(v_node_4179_);
lean_dec_ref(v___x_4176_);
v___x_4180_ = lean_usize_shift_right(v_x_4168_, v___x_4172_);
v_x_4167_ = v_node_4179_;
v_x_4168_ = v___x_4180_;
goto _start;
}
default: 
{
uint8_t v___x_4182_; 
v___x_4182_ = 0;
return v___x_4182_;
}
}
}
else
{
lean_object* v_ks_4183_; lean_object* v___x_4184_; uint8_t v___x_4185_; 
v_ks_4183_ = lean_ctor_get(v_x_4167_, 0);
lean_inc_ref(v_ks_4183_);
lean_dec_ref(v_x_4167_);
v___x_4184_ = lean_unsigned_to_nat(0u);
v___x_4185_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg(v_ks_4183_, v___x_4184_, v_x_4169_);
lean_dec_ref(v_ks_4183_);
return v___x_4185_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_4186_, lean_object* v_x_4187_, lean_object* v_x_4188_){
_start:
{
size_t v_x_10574__boxed_4189_; uint8_t v_res_4190_; lean_object* v_r_4191_; 
v_x_10574__boxed_4189_ = lean_unbox_usize(v_x_4187_);
lean_dec(v_x_4187_);
v_res_4190_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg(v_x_4186_, v_x_10574__boxed_4189_, v_x_4188_);
lean_dec_ref(v_x_4188_);
v_r_4191_ = lean_box(v_res_4190_);
return v_r_4191_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg(lean_object* v_x_4192_, lean_object* v_x_4193_){
_start:
{
uint64_t v___x_4194_; size_t v___x_4195_; uint8_t v___x_4196_; 
v___x_4194_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_4193_);
v___x_4195_ = lean_uint64_to_usize(v___x_4194_);
v___x_4196_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg(v_x_4192_, v___x_4195_, v_x_4193_);
return v___x_4196_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg___boxed(lean_object* v_x_4197_, lean_object* v_x_4198_){
_start:
{
uint8_t v_res_4199_; lean_object* v_r_4200_; 
v_res_4199_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg(v_x_4197_, v_x_4198_);
lean_dec_ref(v_x_4198_);
v_r_4200_ = lean_box(v_res_4199_);
return v_r_4200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f(lean_object* v_type_4201_, lean_object* v_a_4202_, lean_object* v_a_4203_, lean_object* v_a_4204_, lean_object* v_a_4205_, lean_object* v_a_4206_, lean_object* v_a_4207_, lean_object* v_a_4208_, lean_object* v_a_4209_, lean_object* v_a_4210_, lean_object* v_a_4211_){
_start:
{
lean_object* v___x_4213_; 
v___x_4213_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_4204_);
if (lean_obj_tag(v___x_4213_) == 0)
{
lean_object* v_a_4214_; lean_object* v___x_4216_; uint8_t v_isShared_4217_; uint8_t v_isSharedCheck_4303_; 
v_a_4214_ = lean_ctor_get(v___x_4213_, 0);
v_isSharedCheck_4303_ = !lean_is_exclusive(v___x_4213_);
if (v_isSharedCheck_4303_ == 0)
{
v___x_4216_ = v___x_4213_;
v_isShared_4217_ = v_isSharedCheck_4303_;
goto v_resetjp_4215_;
}
else
{
lean_inc(v_a_4214_);
lean_dec(v___x_4213_);
v___x_4216_ = lean_box(0);
v_isShared_4217_ = v_isSharedCheck_4303_;
goto v_resetjp_4215_;
}
v_resetjp_4215_:
{
uint8_t v_linarith_4218_; 
v_linarith_4218_ = lean_ctor_get_uint8(v_a_4214_, sizeof(void*)*11 + 22);
lean_dec(v_a_4214_);
if (v_linarith_4218_ == 0)
{
lean_object* v___x_4219_; lean_object* v___x_4221_; 
lean_dec_ref(v_type_4201_);
v___x_4219_ = lean_box(0);
if (v_isShared_4217_ == 0)
{
lean_ctor_set(v___x_4216_, 0, v___x_4219_);
v___x_4221_ = v___x_4216_;
goto v_reusejp_4220_;
}
else
{
lean_object* v_reuseFailAlloc_4222_; 
v_reuseFailAlloc_4222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4222_, 0, v___x_4219_);
v___x_4221_ = v_reuseFailAlloc_4222_;
goto v_reusejp_4220_;
}
v_reusejp_4220_:
{
return v___x_4221_;
}
}
else
{
lean_object* v___x_4223_; 
lean_del_object(v___x_4216_);
v___x_4223_ = l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(v_a_4202_, v_a_4210_);
if (lean_obj_tag(v___x_4223_) == 0)
{
lean_object* v_a_4224_; lean_object* v___x_4226_; uint8_t v_isShared_4227_; uint8_t v_isSharedCheck_4294_; 
v_a_4224_ = lean_ctor_get(v___x_4223_, 0);
v_isSharedCheck_4294_ = !lean_is_exclusive(v___x_4223_);
if (v_isSharedCheck_4294_ == 0)
{
v___x_4226_ = v___x_4223_;
v_isShared_4227_ = v_isSharedCheck_4294_;
goto v_resetjp_4225_;
}
else
{
lean_inc(v_a_4224_);
lean_dec(v___x_4223_);
v___x_4226_ = lean_box(0);
v_isShared_4227_ = v_isSharedCheck_4294_;
goto v_resetjp_4225_;
}
v_resetjp_4225_:
{
lean_object* v_forbiddenNatModules_4228_; uint8_t v___x_4229_; 
v_forbiddenNatModules_4228_ = lean_ctor_get(v_a_4224_, 4);
lean_inc_ref(v_forbiddenNatModules_4228_);
lean_dec(v_a_4224_);
v___x_4229_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg(v_forbiddenNatModules_4228_, v_type_4201_);
if (v___x_4229_ == 0)
{
lean_object* v___x_4230_; 
lean_del_object(v___x_4226_);
lean_inc_ref(v_type_4201_);
v___x_4230_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_isCutsatType(v_type_4201_, v_a_4202_, v_a_4203_, v_a_4204_, v_a_4205_, v_a_4206_, v_a_4207_, v_a_4208_, v_a_4209_, v_a_4210_, v_a_4211_);
if (lean_obj_tag(v___x_4230_) == 0)
{
lean_object* v_a_4231_; lean_object* v___x_4233_; uint8_t v_isShared_4234_; uint8_t v_isSharedCheck_4281_; 
v_a_4231_ = lean_ctor_get(v___x_4230_, 0);
v_isSharedCheck_4281_ = !lean_is_exclusive(v___x_4230_);
if (v_isSharedCheck_4281_ == 0)
{
v___x_4233_ = v___x_4230_;
v_isShared_4234_ = v_isSharedCheck_4281_;
goto v_resetjp_4232_;
}
else
{
lean_inc(v_a_4231_);
lean_dec(v___x_4230_);
v___x_4233_ = lean_box(0);
v_isShared_4234_ = v_isSharedCheck_4281_;
goto v_resetjp_4232_;
}
v_resetjp_4232_:
{
uint8_t v___x_4235_; 
v___x_4235_ = lean_unbox(v_a_4231_);
lean_dec(v_a_4231_);
if (v___x_4235_ == 0)
{
lean_object* v___x_4236_; 
lean_del_object(v___x_4233_);
v___x_4236_ = l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(v_a_4202_, v_a_4210_);
if (lean_obj_tag(v___x_4236_) == 0)
{
lean_object* v_a_4237_; lean_object* v___x_4239_; uint8_t v_isShared_4240_; uint8_t v_isSharedCheck_4268_; 
v_a_4237_ = lean_ctor_get(v___x_4236_, 0);
v_isSharedCheck_4268_ = !lean_is_exclusive(v___x_4236_);
if (v_isSharedCheck_4268_ == 0)
{
v___x_4239_ = v___x_4236_;
v_isShared_4240_ = v_isSharedCheck_4268_;
goto v_resetjp_4238_;
}
else
{
lean_inc(v_a_4237_);
lean_dec(v___x_4236_);
v___x_4239_ = lean_box(0);
v_isShared_4240_ = v_isSharedCheck_4268_;
goto v_resetjp_4238_;
}
v_resetjp_4238_:
{
lean_object* v_natTypeIdOf_4241_; lean_object* v___x_4242_; 
v_natTypeIdOf_4241_ = lean_ctor_get(v_a_4237_, 6);
lean_inc_ref(v_natTypeIdOf_4241_);
lean_dec(v_a_4237_);
v___x_4242_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getStructId_x3f_spec__0___redArg(v_natTypeIdOf_4241_, v_type_4201_);
if (lean_obj_tag(v___x_4242_) == 1)
{
lean_object* v_val_4243_; lean_object* v___x_4245_; 
lean_dec_ref(v_type_4201_);
v_val_4243_ = lean_ctor_get(v___x_4242_, 0);
lean_inc(v_val_4243_);
lean_dec_ref(v___x_4242_);
if (v_isShared_4240_ == 0)
{
lean_ctor_set(v___x_4239_, 0, v_val_4243_);
v___x_4245_ = v___x_4239_;
goto v_reusejp_4244_;
}
else
{
lean_object* v_reuseFailAlloc_4246_; 
v_reuseFailAlloc_4246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4246_, 0, v_val_4243_);
v___x_4245_ = v_reuseFailAlloc_4246_;
goto v_reusejp_4244_;
}
v_reusejp_4244_:
{
return v___x_4245_;
}
}
else
{
lean_object* v___x_4247_; 
lean_dec(v___x_4242_);
lean_del_object(v___x_4239_);
lean_inc_ref(v_type_4201_);
v___x_4247_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_StructId_0__Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_go_x3f(v_type_4201_, v_a_4202_, v_a_4203_, v_a_4204_, v_a_4205_, v_a_4206_, v_a_4207_, v_a_4208_, v_a_4209_, v_a_4210_, v_a_4211_);
if (lean_obj_tag(v___x_4247_) == 0)
{
lean_object* v_a_4248_; lean_object* v___f_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; 
v_a_4248_ = lean_ctor_get(v___x_4247_, 0);
lean_inc(v_a_4248_);
lean_dec_ref(v___x_4247_);
lean_inc(v_a_4248_);
v___f_4249_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f___lam__0), 3, 2);
lean_closure_set(v___f_4249_, 0, v_type_4201_);
lean_closure_set(v___f_4249_, 1, v_a_4248_);
v___x_4250_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_4251_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_4250_, v___f_4249_, v_a_4202_);
if (lean_obj_tag(v___x_4251_) == 0)
{
lean_object* v___x_4253_; uint8_t v_isShared_4254_; uint8_t v_isSharedCheck_4258_; 
v_isSharedCheck_4258_ = !lean_is_exclusive(v___x_4251_);
if (v_isSharedCheck_4258_ == 0)
{
lean_object* v_unused_4259_; 
v_unused_4259_ = lean_ctor_get(v___x_4251_, 0);
lean_dec(v_unused_4259_);
v___x_4253_ = v___x_4251_;
v_isShared_4254_ = v_isSharedCheck_4258_;
goto v_resetjp_4252_;
}
else
{
lean_dec(v___x_4251_);
v___x_4253_ = lean_box(0);
v_isShared_4254_ = v_isSharedCheck_4258_;
goto v_resetjp_4252_;
}
v_resetjp_4252_:
{
lean_object* v___x_4256_; 
if (v_isShared_4254_ == 0)
{
lean_ctor_set(v___x_4253_, 0, v_a_4248_);
v___x_4256_ = v___x_4253_;
goto v_reusejp_4255_;
}
else
{
lean_object* v_reuseFailAlloc_4257_; 
v_reuseFailAlloc_4257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4257_, 0, v_a_4248_);
v___x_4256_ = v_reuseFailAlloc_4257_;
goto v_reusejp_4255_;
}
v_reusejp_4255_:
{
return v___x_4256_;
}
}
}
else
{
lean_object* v_a_4260_; lean_object* v___x_4262_; uint8_t v_isShared_4263_; uint8_t v_isSharedCheck_4267_; 
lean_dec(v_a_4248_);
v_a_4260_ = lean_ctor_get(v___x_4251_, 0);
v_isSharedCheck_4267_ = !lean_is_exclusive(v___x_4251_);
if (v_isSharedCheck_4267_ == 0)
{
v___x_4262_ = v___x_4251_;
v_isShared_4263_ = v_isSharedCheck_4267_;
goto v_resetjp_4261_;
}
else
{
lean_inc(v_a_4260_);
lean_dec(v___x_4251_);
v___x_4262_ = lean_box(0);
v_isShared_4263_ = v_isSharedCheck_4267_;
goto v_resetjp_4261_;
}
v_resetjp_4261_:
{
lean_object* v___x_4265_; 
if (v_isShared_4263_ == 0)
{
v___x_4265_ = v___x_4262_;
goto v_reusejp_4264_;
}
else
{
lean_object* v_reuseFailAlloc_4266_; 
v_reuseFailAlloc_4266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4266_, 0, v_a_4260_);
v___x_4265_ = v_reuseFailAlloc_4266_;
goto v_reusejp_4264_;
}
v_reusejp_4264_:
{
return v___x_4265_;
}
}
}
}
else
{
lean_dec_ref(v_type_4201_);
return v___x_4247_;
}
}
}
}
else
{
lean_object* v_a_4269_; lean_object* v___x_4271_; uint8_t v_isShared_4272_; uint8_t v_isSharedCheck_4276_; 
lean_dec_ref(v_type_4201_);
v_a_4269_ = lean_ctor_get(v___x_4236_, 0);
v_isSharedCheck_4276_ = !lean_is_exclusive(v___x_4236_);
if (v_isSharedCheck_4276_ == 0)
{
v___x_4271_ = v___x_4236_;
v_isShared_4272_ = v_isSharedCheck_4276_;
goto v_resetjp_4270_;
}
else
{
lean_inc(v_a_4269_);
lean_dec(v___x_4236_);
v___x_4271_ = lean_box(0);
v_isShared_4272_ = v_isSharedCheck_4276_;
goto v_resetjp_4270_;
}
v_resetjp_4270_:
{
lean_object* v___x_4274_; 
if (v_isShared_4272_ == 0)
{
v___x_4274_ = v___x_4271_;
goto v_reusejp_4273_;
}
else
{
lean_object* v_reuseFailAlloc_4275_; 
v_reuseFailAlloc_4275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4275_, 0, v_a_4269_);
v___x_4274_ = v_reuseFailAlloc_4275_;
goto v_reusejp_4273_;
}
v_reusejp_4273_:
{
return v___x_4274_;
}
}
}
}
else
{
lean_object* v___x_4277_; lean_object* v___x_4279_; 
lean_dec_ref(v_type_4201_);
v___x_4277_ = lean_box(0);
if (v_isShared_4234_ == 0)
{
lean_ctor_set(v___x_4233_, 0, v___x_4277_);
v___x_4279_ = v___x_4233_;
goto v_reusejp_4278_;
}
else
{
lean_object* v_reuseFailAlloc_4280_; 
v_reuseFailAlloc_4280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4280_, 0, v___x_4277_);
v___x_4279_ = v_reuseFailAlloc_4280_;
goto v_reusejp_4278_;
}
v_reusejp_4278_:
{
return v___x_4279_;
}
}
}
}
else
{
lean_object* v_a_4282_; lean_object* v___x_4284_; uint8_t v_isShared_4285_; uint8_t v_isSharedCheck_4289_; 
lean_dec_ref(v_type_4201_);
v_a_4282_ = lean_ctor_get(v___x_4230_, 0);
v_isSharedCheck_4289_ = !lean_is_exclusive(v___x_4230_);
if (v_isSharedCheck_4289_ == 0)
{
v___x_4284_ = v___x_4230_;
v_isShared_4285_ = v_isSharedCheck_4289_;
goto v_resetjp_4283_;
}
else
{
lean_inc(v_a_4282_);
lean_dec(v___x_4230_);
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
lean_object* v___x_4290_; lean_object* v___x_4292_; 
lean_dec_ref(v_type_4201_);
v___x_4290_ = lean_box(0);
if (v_isShared_4227_ == 0)
{
lean_ctor_set(v___x_4226_, 0, v___x_4290_);
v___x_4292_ = v___x_4226_;
goto v_reusejp_4291_;
}
else
{
lean_object* v_reuseFailAlloc_4293_; 
v_reuseFailAlloc_4293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4293_, 0, v___x_4290_);
v___x_4292_ = v_reuseFailAlloc_4293_;
goto v_reusejp_4291_;
}
v_reusejp_4291_:
{
return v___x_4292_;
}
}
}
}
else
{
lean_object* v_a_4295_; lean_object* v___x_4297_; uint8_t v_isShared_4298_; uint8_t v_isSharedCheck_4302_; 
lean_dec_ref(v_type_4201_);
v_a_4295_ = lean_ctor_get(v___x_4223_, 0);
v_isSharedCheck_4302_ = !lean_is_exclusive(v___x_4223_);
if (v_isSharedCheck_4302_ == 0)
{
v___x_4297_ = v___x_4223_;
v_isShared_4298_ = v_isSharedCheck_4302_;
goto v_resetjp_4296_;
}
else
{
lean_inc(v_a_4295_);
lean_dec(v___x_4223_);
v___x_4297_ = lean_box(0);
v_isShared_4298_ = v_isSharedCheck_4302_;
goto v_resetjp_4296_;
}
v_resetjp_4296_:
{
lean_object* v___x_4300_; 
if (v_isShared_4298_ == 0)
{
v___x_4300_ = v___x_4297_;
goto v_reusejp_4299_;
}
else
{
lean_object* v_reuseFailAlloc_4301_; 
v_reuseFailAlloc_4301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4301_, 0, v_a_4295_);
v___x_4300_ = v_reuseFailAlloc_4301_;
goto v_reusejp_4299_;
}
v_reusejp_4299_:
{
return v___x_4300_;
}
}
}
}
}
}
else
{
lean_object* v_a_4304_; lean_object* v___x_4306_; uint8_t v_isShared_4307_; uint8_t v_isSharedCheck_4311_; 
lean_dec_ref(v_type_4201_);
v_a_4304_ = lean_ctor_get(v___x_4213_, 0);
v_isSharedCheck_4311_ = !lean_is_exclusive(v___x_4213_);
if (v_isSharedCheck_4311_ == 0)
{
v___x_4306_ = v___x_4213_;
v_isShared_4307_ = v_isSharedCheck_4311_;
goto v_resetjp_4305_;
}
else
{
lean_inc(v_a_4304_);
lean_dec(v___x_4213_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f___boxed(lean_object* v_type_4312_, lean_object* v_a_4313_, lean_object* v_a_4314_, lean_object* v_a_4315_, lean_object* v_a_4316_, lean_object* v_a_4317_, lean_object* v_a_4318_, lean_object* v_a_4319_, lean_object* v_a_4320_, lean_object* v_a_4321_, lean_object* v_a_4322_, lean_object* v_a_4323_){
_start:
{
lean_object* v_res_4324_; 
v_res_4324_ = l_Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f(v_type_4312_, v_a_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_, v_a_4318_, v_a_4319_, v_a_4320_, v_a_4321_, v_a_4322_);
lean_dec(v_a_4322_);
lean_dec_ref(v_a_4321_);
lean_dec(v_a_4320_);
lean_dec_ref(v_a_4319_);
lean_dec(v_a_4318_);
lean_dec_ref(v_a_4317_);
lean_dec(v_a_4316_);
lean_dec_ref(v_a_4315_);
lean_dec(v_a_4314_);
lean_dec(v_a_4313_);
return v_res_4324_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0(lean_object* v_00_u03b2_4325_, lean_object* v_x_4326_, lean_object* v_x_4327_){
_start:
{
uint8_t v___x_4328_; 
v___x_4328_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___redArg(v_x_4326_, v_x_4327_);
return v___x_4328_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0___boxed(lean_object* v_00_u03b2_4329_, lean_object* v_x_4330_, lean_object* v_x_4331_){
_start:
{
uint8_t v_res_4332_; lean_object* v_r_4333_; 
v_res_4332_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0(v_00_u03b2_4329_, v_x_4330_, v_x_4331_);
lean_dec_ref(v_x_4331_);
v_r_4333_ = lean_box(v_res_4332_);
return v_r_4333_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0(lean_object* v_00_u03b2_4334_, lean_object* v_x_4335_, size_t v_x_4336_, lean_object* v_x_4337_){
_start:
{
uint8_t v___x_4338_; 
v___x_4338_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___redArg(v_x_4335_, v_x_4336_, v_x_4337_);
return v___x_4338_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4339_, lean_object* v_x_4340_, lean_object* v_x_4341_, lean_object* v_x_4342_){
_start:
{
size_t v_x_10834__boxed_4343_; uint8_t v_res_4344_; lean_object* v_r_4345_; 
v_x_10834__boxed_4343_ = lean_unbox_usize(v_x_4341_);
lean_dec(v_x_4341_);
v_res_4344_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0(v_00_u03b2_4339_, v_x_4340_, v_x_10834__boxed_4343_, v_x_4342_);
lean_dec_ref(v_x_4342_);
v_r_4345_ = lean_box(v_res_4344_);
return v_r_4345_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_4346_, lean_object* v_keys_4347_, lean_object* v_vals_4348_, lean_object* v_heq_4349_, lean_object* v_i_4350_, lean_object* v_k_4351_){
_start:
{
uint8_t v___x_4352_; 
v___x_4352_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_4347_, v_i_4350_, v_k_4351_);
return v___x_4352_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_4353_, lean_object* v_keys_4354_, lean_object* v_vals_4355_, lean_object* v_heq_4356_, lean_object* v_i_4357_, lean_object* v_k_4358_){
_start:
{
uint8_t v_res_4359_; lean_object* v_r_4360_; 
v_res_4359_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_Arith_Linear_getNatStructId_x3f_spec__0_spec__0_spec__1(v_00_u03b2_4353_, v_keys_4354_, v_vals_4355_, v_heq_4356_, v_i_4357_, v_k_4358_);
lean_dec_ref(v_k_4358_);
lean_dec_ref(v_vals_4355_);
lean_dec_ref(v_keys_4354_);
v_r_4360_ = lean_box(v_res_4359_);
return v_r_4360_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_OrderInsts(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ToInt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Var(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Insts(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Module_Envelope(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_OrderInsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Var(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Insts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Module_Envelope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_OrderInsts(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ToInt(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Var(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Insts(uint8_t builtin);
lean_object* initialize_Init_Grind_Module_Envelope(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_OrderInsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Cutsat_ToInt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Var(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Insts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Module_Envelope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Linear_StructId(builtin);
}
#ifdef __cplusplus
}
#endif
