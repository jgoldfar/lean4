// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.ProveEq
// Imports: public import Lean.Meta.Tactic.Grind.Types import Init.Grind.Util import Lean.Meta.Tactic.Grind.Simp
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkLambda(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_Grind_alreadyInternalized___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_preprocessLight(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_process_new_facts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqv___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_hasSameType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* lean_grind_mk_heq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_Sym_shareCommon___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_grind_mk_eq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Meta_Grind_withoutModifyingState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_inBinder___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_inBinder___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_inBinder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_inBinder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_withIncOffset___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_withIncOffset___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_withIncOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_withIncOffset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_goCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_goCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__1;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "abstractFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__6_value),LEAN_SCALAR_PTR_LITERAL(5, 46, 159, 125, 153, 141, 125, 236)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "proveEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__2_value),LEAN_SCALAR_PTR_LITERAL(80, 31, 36, 78, 142, 219, 66, 96)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "abstract: ("};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ") = ("};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__7;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_proveEq_x3f___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_proveEq_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_proveEq_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Meta_Grind_proveEq_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_proveEq_x3f___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_proveEq_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_proveEq_x3f___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_proveEq_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_proveEq_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_proveHEq_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_proveHEq_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_proveHEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_proveHEq_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_4_ == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5_, 0, v_e_1_);
return v___x_5_;
}
else
{
lean_object* v___x_6_; lean_object* v_mctx_7_; lean_object* v___x_8_; lean_object* v_fst_9_; lean_object* v_snd_10_; lean_object* v___x_11_; lean_object* v_cache_12_; lean_object* v_zetaDeltaFVarIds_13_; lean_object* v_postponed_14_; lean_object* v_diag_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v___x_6_ = lean_st_ref_get(v___y_2_);
v_mctx_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc_ref(v_mctx_7_);
lean_dec(v___x_6_);
v___x_8_ = l_Lean_instantiateMVarsCore(v_mctx_7_, v_e_1_);
v_fst_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc(v_fst_9_);
v_snd_10_ = lean_ctor_get(v___x_8_, 1);
lean_inc(v_snd_10_);
lean_dec_ref(v___x_8_);
v___x_11_ = lean_st_ref_take(v___y_2_);
v_cache_12_ = lean_ctor_get(v___x_11_, 1);
v_zetaDeltaFVarIds_13_ = lean_ctor_get(v___x_11_, 2);
v_postponed_14_ = lean_ctor_get(v___x_11_, 3);
v_diag_15_ = lean_ctor_get(v___x_11_, 4);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_24_ == 0)
{
lean_object* v_unused_25_; 
v_unused_25_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_25_);
v___x_17_ = v___x_11_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_diag_15_);
lean_inc(v_postponed_14_);
lean_inc(v_zetaDeltaFVarIds_13_);
lean_inc(v_cache_12_);
lean_dec(v___x_11_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v___x_20_; 
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 0, v_snd_10_);
v___x_20_ = v___x_17_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_snd_10_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v_cache_12_);
lean_ctor_set(v_reuseFailAlloc_23_, 2, v_zetaDeltaFVarIds_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 3, v_postponed_14_);
lean_ctor_set(v_reuseFailAlloc_23_, 4, v_diag_15_);
v___x_20_ = v_reuseFailAlloc_23_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_st_ref_set(v___y_2_, v___x_20_);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v_fst_9_);
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized_spec__0___redArg___boxed(lean_object* v_e_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized_spec__0___redArg(v_e_26_, v___y_27_);
lean_dec(v___y_27_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized_spec__0(lean_object* v_e_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized_spec__0___redArg(v_e_30_, v___y_38_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized_spec__0___boxed(lean_object* v_e_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized_spec__0(v_e_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
lean_dec(v___y_49_);
lean_dec_ref(v___y_48_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec(v___y_44_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized(lean_object* v_e_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_e_56_, v_a_57_);
if (lean_obj_tag(v___x_68_) == 0)
{
lean_object* v_a_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_100_; 
v_a_69_ = lean_ctor_get(v___x_68_, 0);
v_isSharedCheck_100_ = !lean_is_exclusive(v___x_68_);
if (v_isSharedCheck_100_ == 0)
{
v___x_71_ = v___x_68_;
v_isShared_72_ = v_isSharedCheck_100_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_a_69_);
lean_dec(v___x_68_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_100_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
uint8_t v___x_73_; 
v___x_73_ = lean_unbox(v_a_69_);
lean_dec(v_a_69_);
if (v___x_73_ == 0)
{
lean_object* v___x_74_; lean_object* v_a_75_; lean_object* v___x_76_; 
lean_del_object(v___x_71_);
v___x_74_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized_spec__0___redArg(v_e_56_, v_a_64_);
v_a_75_ = lean_ctor_get(v___x_74_, 0);
lean_inc(v_a_75_);
lean_dec_ref(v___x_74_);
v___x_76_ = l_Lean_Meta_Grind_preprocessLight(v_a_75_, v_a_57_, v_a_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_);
if (lean_obj_tag(v___x_76_) == 0)
{
lean_object* v_a_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v_a_77_ = lean_ctor_get(v___x_76_, 0);
lean_inc_n(v_a_77_, 2);
lean_dec_ref(v___x_76_);
v___x_78_ = lean_unsigned_to_nat(0u);
v___x_79_ = lean_box(0);
lean_inc(v_a_66_);
lean_inc_ref(v_a_65_);
lean_inc(v_a_64_);
lean_inc_ref(v_a_63_);
lean_inc(v_a_62_);
lean_inc_ref(v_a_61_);
lean_inc(v_a_60_);
lean_inc_ref(v_a_59_);
lean_inc(v_a_58_);
lean_inc(v_a_57_);
v___x_80_ = lean_grind_internalize(v_a_77_, v___x_78_, v___x_79_, v_a_57_, v_a_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_);
if (lean_obj_tag(v___x_80_) == 0)
{
lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_87_; 
v_isSharedCheck_87_ = !lean_is_exclusive(v___x_80_);
if (v_isSharedCheck_87_ == 0)
{
lean_object* v_unused_88_; 
v_unused_88_ = lean_ctor_get(v___x_80_, 0);
lean_dec(v_unused_88_);
v___x_82_ = v___x_80_;
v_isShared_83_ = v_isSharedCheck_87_;
goto v_resetjp_81_;
}
else
{
lean_dec(v___x_80_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_87_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_85_; 
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 0, v_a_77_);
v___x_85_ = v___x_82_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v_a_77_);
v___x_85_ = v_reuseFailAlloc_86_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
return v___x_85_;
}
}
}
else
{
lean_object* v_a_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_96_; 
lean_dec(v_a_77_);
v_a_89_ = lean_ctor_get(v___x_80_, 0);
v_isSharedCheck_96_ = !lean_is_exclusive(v___x_80_);
if (v_isSharedCheck_96_ == 0)
{
v___x_91_ = v___x_80_;
v_isShared_92_ = v_isSharedCheck_96_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_a_89_);
lean_dec(v___x_80_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_96_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___x_94_; 
if (v_isShared_92_ == 0)
{
v___x_94_ = v___x_91_;
goto v_reusejp_93_;
}
else
{
lean_object* v_reuseFailAlloc_95_; 
v_reuseFailAlloc_95_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_95_, 0, v_a_89_);
v___x_94_ = v_reuseFailAlloc_95_;
goto v_reusejp_93_;
}
v_reusejp_93_:
{
return v___x_94_;
}
}
}
}
else
{
return v___x_76_;
}
}
else
{
lean_object* v___x_98_; 
if (v_isShared_72_ == 0)
{
lean_ctor_set(v___x_71_, 0, v_e_56_);
v___x_98_ = v___x_71_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v_e_56_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
return v___x_98_;
}
}
}
}
else
{
lean_object* v_a_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_108_; 
lean_dec_ref(v_e_56_);
v_a_101_ = lean_ctor_get(v___x_68_, 0);
v_isSharedCheck_108_ = !lean_is_exclusive(v___x_68_);
if (v_isSharedCheck_108_ == 0)
{
v___x_103_ = v___x_68_;
v_isShared_104_ = v_isSharedCheck_108_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_a_101_);
lean_dec(v___x_68_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_108_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_106_; 
if (v_isShared_104_ == 0)
{
v___x_106_ = v___x_103_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v_a_101_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized___boxed(lean_object* v_e_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized(v_e_109_, v_a_110_, v_a_111_, v_a_112_, v_a_113_, v_a_114_, v_a_115_, v_a_116_, v_a_117_, v_a_118_, v_a_119_);
lean_dec(v_a_119_);
lean_dec_ref(v_a_118_);
lean_dec(v_a_117_);
lean_dec_ref(v_a_116_);
lean_dec(v_a_115_);
lean_dec_ref(v_a_114_);
lean_dec(v_a_113_);
lean_dec_ref(v_a_112_);
lean_dec(v_a_111_);
lean_dec(v_a_110_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_inBinder___redArg(lean_object* v_a_122_, lean_object* v_a_123_){
_start:
{
lean_object* v___x_125_; uint8_t v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_125_ = lean_unsigned_to_nat(0u);
v___x_126_ = lean_nat_dec_lt(v___x_125_, v_a_122_);
v___x_127_ = lean_box(v___x_126_);
v___x_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
lean_ctor_set(v___x_128_, 1, v_a_123_);
v___x_129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_129_, 0, v___x_128_);
v___x_130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_inBinder___redArg___boxed(lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_inBinder___redArg(v_a_131_, v_a_132_);
lean_dec(v_a_131_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_inBinder(lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_inBinder___redArg(v_a_135_, v_a_136_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_inBinder___boxed(lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_inBinder(v_a_149_, v_a_150_, v_a_151_, v_a_152_, v_a_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_, v_a_158_, v_a_159_, v_a_160_);
lean_dec(v_a_160_);
lean_dec_ref(v_a_159_);
lean_dec(v_a_158_);
lean_dec_ref(v_a_157_);
lean_dec(v_a_156_);
lean_dec_ref(v_a_155_);
lean_dec(v_a_154_);
lean_dec_ref(v_a_153_);
lean_dec(v_a_152_);
lean_dec(v_a_151_);
lean_dec(v_a_149_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_withIncOffset___redArg(lean_object* v_x_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_){
_start:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_177_ = lean_unsigned_to_nat(1u);
v___x_178_ = lean_nat_add(v_a_164_, v___x_177_);
lean_inc(v_a_175_);
lean_inc_ref(v_a_174_);
lean_inc(v_a_173_);
lean_inc_ref(v_a_172_);
lean_inc(v_a_171_);
lean_inc_ref(v_a_170_);
lean_inc(v_a_169_);
lean_inc_ref(v_a_168_);
lean_inc(v_a_167_);
lean_inc(v_a_166_);
v___x_179_ = lean_apply_13(v_x_163_, v___x_178_, v_a_165_, v_a_166_, v_a_167_, v_a_168_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_, v_a_175_, lean_box(0));
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_withIncOffset___redArg___boxed(lean_object* v_x_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_withIncOffset___redArg(v_x_180_, v_a_181_, v_a_182_, v_a_183_, v_a_184_, v_a_185_, v_a_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_);
lean_dec(v_a_192_);
lean_dec_ref(v_a_191_);
lean_dec(v_a_190_);
lean_dec_ref(v_a_189_);
lean_dec(v_a_188_);
lean_dec_ref(v_a_187_);
lean_dec(v_a_186_);
lean_dec_ref(v_a_185_);
lean_dec(v_a_184_);
lean_dec(v_a_183_);
lean_dec(v_a_181_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_withIncOffset(lean_object* v_00_u03b1_195_, lean_object* v_x_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_210_ = lean_unsigned_to_nat(1u);
v___x_211_ = lean_nat_add(v_a_197_, v___x_210_);
lean_inc(v_a_208_);
lean_inc_ref(v_a_207_);
lean_inc(v_a_206_);
lean_inc_ref(v_a_205_);
lean_inc(v_a_204_);
lean_inc_ref(v_a_203_);
lean_inc(v_a_202_);
lean_inc_ref(v_a_201_);
lean_inc(v_a_200_);
lean_inc(v_a_199_);
v___x_212_ = lean_apply_13(v_x_196_, v___x_211_, v_a_198_, v_a_199_, v_a_200_, v_a_201_, v_a_202_, v_a_203_, v_a_204_, v_a_205_, v_a_206_, v_a_207_, v_a_208_, lean_box(0));
return v___x_212_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_withIncOffset___boxed(lean_object* v_00_u03b1_213_, lean_object* v_x_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_withIncOffset(v_00_u03b1_213_, v_x_214_, v_a_215_, v_a_216_, v_a_217_, v_a_218_, v_a_219_, v_a_220_, v_a_221_, v_a_222_, v_a_223_, v_a_224_, v_a_225_, v_a_226_);
lean_dec(v_a_226_);
lean_dec_ref(v_a_225_);
lean_dec(v_a_224_);
lean_dec_ref(v_a_223_);
lean_dec(v_a_222_);
lean_dec_ref(v_a_221_);
lean_dec(v_a_220_);
lean_dec_ref(v_a_219_);
lean_dec(v_a_218_);
lean_dec(v_a_217_);
lean_dec(v_a_215_);
return v_res_228_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0___closed__2(void){
_start:
{
lean_object* v_i_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v_i_232_ = lean_unsigned_to_nat(0u);
v___x_233_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0___closed__1));
v___x_234_ = lean_name_append_index_after(v___x_233_, v_i_232_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0(lean_object* v_as_235_, size_t v_sz_236_, size_t v_i_237_, lean_object* v_b_238_){
_start:
{
uint8_t v___x_239_; 
v___x_239_ = lean_usize_dec_lt(v_i_237_, v_sz_236_);
if (v___x_239_ == 0)
{
return v_b_238_;
}
else
{
lean_object* v_a_240_; lean_object* v___x_241_; uint8_t v___x_242_; lean_object* v___x_243_; size_t v___x_244_; size_t v___x_245_; 
v_a_240_ = lean_array_uget_borrowed(v_as_235_, v_i_237_);
v___x_241_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0___closed__2);
v___x_242_ = 0;
lean_inc(v_a_240_);
v___x_243_ = l_Lean_mkLambda(v___x_241_, v___x_242_, v_a_240_, v_b_238_);
v___x_244_ = ((size_t)1ULL);
v___x_245_ = lean_usize_add(v_i_237_, v___x_244_);
v_i_237_ = v___x_245_;
v_b_238_ = v___x_243_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0___boxed(lean_object* v_as_247_, lean_object* v_sz_248_, lean_object* v_i_249_, lean_object* v_b_250_){
_start:
{
size_t v_sz_boxed_251_; size_t v_i_boxed_252_; lean_object* v_res_253_; 
v_sz_boxed_251_ = lean_unbox_usize(v_sz_248_);
lean_dec(v_sz_248_);
v_i_boxed_252_ = lean_unbox_usize(v_i_249_);
lean_dec(v_i_249_);
v_res_253_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0(v_as_247_, v_sz_boxed_251_, v_i_boxed_252_, v_b_250_);
lean_dec_ref(v_as_247_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType(lean_object* v_varTypes_254_, lean_object* v_b_255_){
_start:
{
size_t v_sz_256_; size_t v___x_257_; lean_object* v___x_258_; 
v_sz_256_ = lean_array_size(v_varTypes_254_);
v___x_257_ = ((size_t)0ULL);
v___x_258_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType_spec__0(v_varTypes_254_, v_sz_256_, v___x_257_, v_b_255_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType___boxed(lean_object* v_varTypes_259_, lean_object* v_b_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType(v_varTypes_259_, v_b_260_);
lean_dec_ref(v_varTypes_259_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1_spec__1___redArg(lean_object* v_a_262_, lean_object* v_x_263_){
_start:
{
if (lean_obj_tag(v_x_263_) == 0)
{
lean_object* v___x_264_; 
v___x_264_ = lean_box(0);
return v___x_264_;
}
else
{
lean_object* v_key_265_; lean_object* v_value_266_; lean_object* v_tail_267_; uint8_t v___y_269_; lean_object* v_fst_272_; lean_object* v_snd_273_; lean_object* v_fst_274_; lean_object* v_snd_275_; uint8_t v___x_276_; 
v_key_265_ = lean_ctor_get(v_x_263_, 0);
v_value_266_ = lean_ctor_get(v_x_263_, 1);
v_tail_267_ = lean_ctor_get(v_x_263_, 2);
v_fst_272_ = lean_ctor_get(v_key_265_, 0);
v_snd_273_ = lean_ctor_get(v_key_265_, 1);
v_fst_274_ = lean_ctor_get(v_a_262_, 0);
v_snd_275_ = lean_ctor_get(v_a_262_, 1);
v___x_276_ = lean_expr_eqv(v_fst_272_, v_fst_274_);
if (v___x_276_ == 0)
{
v___y_269_ = v___x_276_;
goto v___jp_268_;
}
else
{
uint8_t v___x_277_; 
v___x_277_ = lean_expr_eqv(v_snd_273_, v_snd_275_);
v___y_269_ = v___x_277_;
goto v___jp_268_;
}
v___jp_268_:
{
if (v___y_269_ == 0)
{
v_x_263_ = v_tail_267_;
goto _start;
}
else
{
lean_object* v___x_271_; 
lean_inc(v_value_266_);
v___x_271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_271_, 0, v_value_266_);
return v___x_271_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1_spec__1___redArg___boxed(lean_object* v_a_278_, lean_object* v_x_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1_spec__1___redArg(v_a_278_, v_x_279_);
lean_dec(v_x_279_);
lean_dec_ref(v_a_278_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1___redArg(lean_object* v_m_281_, lean_object* v_a_282_){
_start:
{
lean_object* v_buckets_283_; lean_object* v_fst_284_; lean_object* v_snd_285_; lean_object* v___x_286_; uint64_t v___x_287_; uint64_t v___x_288_; uint64_t v___x_289_; uint64_t v___x_290_; uint64_t v___x_291_; uint64_t v_fold_292_; uint64_t v___x_293_; uint64_t v___x_294_; uint64_t v___x_295_; size_t v___x_296_; size_t v___x_297_; size_t v___x_298_; size_t v___x_299_; size_t v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v_buckets_283_ = lean_ctor_get(v_m_281_, 1);
v_fst_284_ = lean_ctor_get(v_a_282_, 0);
v_snd_285_ = lean_ctor_get(v_a_282_, 1);
v___x_286_ = lean_array_get_size(v_buckets_283_);
v___x_287_ = l_Lean_Expr_hash(v_fst_284_);
v___x_288_ = l_Lean_Expr_hash(v_snd_285_);
v___x_289_ = lean_uint64_mix_hash(v___x_287_, v___x_288_);
v___x_290_ = 32ULL;
v___x_291_ = lean_uint64_shift_right(v___x_289_, v___x_290_);
v_fold_292_ = lean_uint64_xor(v___x_289_, v___x_291_);
v___x_293_ = 16ULL;
v___x_294_ = lean_uint64_shift_right(v_fold_292_, v___x_293_);
v___x_295_ = lean_uint64_xor(v_fold_292_, v___x_294_);
v___x_296_ = lean_uint64_to_usize(v___x_295_);
v___x_297_ = lean_usize_of_nat(v___x_286_);
v___x_298_ = ((size_t)1ULL);
v___x_299_ = lean_usize_sub(v___x_297_, v___x_298_);
v___x_300_ = lean_usize_land(v___x_296_, v___x_299_);
v___x_301_ = lean_array_uget_borrowed(v_buckets_283_, v___x_300_);
v___x_302_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1_spec__1___redArg(v_a_282_, v___x_301_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1___redArg___boxed(lean_object* v_m_303_, lean_object* v_a_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1___redArg(v_m_303_, v_a_304_);
lean_dec_ref(v_a_304_);
lean_dec_ref(v_m_303_);
return v_res_305_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__3___redArg(lean_object* v_a_306_, lean_object* v_x_307_){
_start:
{
if (lean_obj_tag(v_x_307_) == 0)
{
uint8_t v___x_308_; 
v___x_308_ = 0;
return v___x_308_;
}
else
{
lean_object* v_key_309_; lean_object* v_tail_310_; uint8_t v___y_312_; lean_object* v_fst_314_; lean_object* v_snd_315_; lean_object* v_fst_316_; lean_object* v_snd_317_; uint8_t v___x_318_; 
v_key_309_ = lean_ctor_get(v_x_307_, 0);
v_tail_310_ = lean_ctor_get(v_x_307_, 2);
v_fst_314_ = lean_ctor_get(v_key_309_, 0);
v_snd_315_ = lean_ctor_get(v_key_309_, 1);
v_fst_316_ = lean_ctor_get(v_a_306_, 0);
v_snd_317_ = lean_ctor_get(v_a_306_, 1);
v___x_318_ = lean_expr_eqv(v_fst_314_, v_fst_316_);
if (v___x_318_ == 0)
{
v___y_312_ = v___x_318_;
goto v___jp_311_;
}
else
{
uint8_t v___x_319_; 
v___x_319_ = lean_expr_eqv(v_snd_315_, v_snd_317_);
v___y_312_ = v___x_319_;
goto v___jp_311_;
}
v___jp_311_:
{
if (v___y_312_ == 0)
{
v_x_307_ = v_tail_310_;
goto _start;
}
else
{
return v___y_312_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__3___redArg___boxed(lean_object* v_a_320_, lean_object* v_x_321_){
_start:
{
uint8_t v_res_322_; lean_object* v_r_323_; 
v_res_322_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__3___redArg(v_a_320_, v_x_321_);
lean_dec(v_x_321_);
lean_dec_ref(v_a_320_);
v_r_323_ = lean_box(v_res_322_);
return v_r_323_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__5___redArg(lean_object* v_a_324_, lean_object* v_b_325_, lean_object* v_x_326_){
_start:
{
if (lean_obj_tag(v_x_326_) == 0)
{
lean_dec(v_b_325_);
lean_dec_ref(v_a_324_);
return v_x_326_;
}
else
{
lean_object* v_key_327_; lean_object* v_value_328_; lean_object* v_tail_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_348_; 
v_key_327_ = lean_ctor_get(v_x_326_, 0);
v_value_328_ = lean_ctor_get(v_x_326_, 1);
v_tail_329_ = lean_ctor_get(v_x_326_, 2);
v_isSharedCheck_348_ = !lean_is_exclusive(v_x_326_);
if (v_isSharedCheck_348_ == 0)
{
v___x_331_ = v_x_326_;
v_isShared_332_ = v_isSharedCheck_348_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_tail_329_);
lean_inc(v_value_328_);
lean_inc(v_key_327_);
lean_dec(v_x_326_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_348_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
uint8_t v___y_334_; lean_object* v_fst_342_; lean_object* v_snd_343_; lean_object* v_fst_344_; lean_object* v_snd_345_; uint8_t v___x_346_; 
v_fst_342_ = lean_ctor_get(v_key_327_, 0);
v_snd_343_ = lean_ctor_get(v_key_327_, 1);
v_fst_344_ = lean_ctor_get(v_a_324_, 0);
v_snd_345_ = lean_ctor_get(v_a_324_, 1);
v___x_346_ = lean_expr_eqv(v_fst_342_, v_fst_344_);
if (v___x_346_ == 0)
{
v___y_334_ = v___x_346_;
goto v___jp_333_;
}
else
{
uint8_t v___x_347_; 
v___x_347_ = lean_expr_eqv(v_snd_343_, v_snd_345_);
v___y_334_ = v___x_347_;
goto v___jp_333_;
}
v___jp_333_:
{
if (v___y_334_ == 0)
{
lean_object* v___x_335_; lean_object* v___x_337_; 
v___x_335_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__5___redArg(v_a_324_, v_b_325_, v_tail_329_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 2, v___x_335_);
v___x_337_ = v___x_331_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_key_327_);
lean_ctor_set(v_reuseFailAlloc_338_, 1, v_value_328_);
lean_ctor_set(v_reuseFailAlloc_338_, 2, v___x_335_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
else
{
lean_object* v___x_340_; 
lean_dec(v_value_328_);
lean_dec(v_key_327_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 1, v_b_325_);
lean_ctor_set(v___x_331_, 0, v_a_324_);
v___x_340_ = v___x_331_;
goto v_reusejp_339_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_a_324_);
lean_ctor_set(v_reuseFailAlloc_341_, 1, v_b_325_);
lean_ctor_set(v_reuseFailAlloc_341_, 2, v_tail_329_);
v___x_340_ = v_reuseFailAlloc_341_;
goto v_reusejp_339_;
}
v_reusejp_339_:
{
return v___x_340_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__4_spec__5_spec__6___redArg(lean_object* v_x_349_, lean_object* v_x_350_){
_start:
{
if (lean_obj_tag(v_x_350_) == 0)
{
return v_x_349_;
}
else
{
lean_object* v_key_351_; lean_object* v_value_352_; lean_object* v_tail_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_380_; 
v_key_351_ = lean_ctor_get(v_x_350_, 0);
v_value_352_ = lean_ctor_get(v_x_350_, 1);
v_tail_353_ = lean_ctor_get(v_x_350_, 2);
v_isSharedCheck_380_ = !lean_is_exclusive(v_x_350_);
if (v_isSharedCheck_380_ == 0)
{
v___x_355_ = v_x_350_;
v_isShared_356_ = v_isSharedCheck_380_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_tail_353_);
lean_inc(v_value_352_);
lean_inc(v_key_351_);
lean_dec(v_x_350_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_380_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v_fst_357_; lean_object* v_snd_358_; lean_object* v___x_359_; uint64_t v___x_360_; uint64_t v___x_361_; uint64_t v___x_362_; uint64_t v___x_363_; uint64_t v___x_364_; uint64_t v_fold_365_; uint64_t v___x_366_; uint64_t v___x_367_; uint64_t v___x_368_; size_t v___x_369_; size_t v___x_370_; size_t v___x_371_; size_t v___x_372_; size_t v___x_373_; lean_object* v___x_374_; lean_object* v___x_376_; 
v_fst_357_ = lean_ctor_get(v_key_351_, 0);
v_snd_358_ = lean_ctor_get(v_key_351_, 1);
v___x_359_ = lean_array_get_size(v_x_349_);
v___x_360_ = l_Lean_Expr_hash(v_fst_357_);
v___x_361_ = l_Lean_Expr_hash(v_snd_358_);
v___x_362_ = lean_uint64_mix_hash(v___x_360_, v___x_361_);
v___x_363_ = 32ULL;
v___x_364_ = lean_uint64_shift_right(v___x_362_, v___x_363_);
v_fold_365_ = lean_uint64_xor(v___x_362_, v___x_364_);
v___x_366_ = 16ULL;
v___x_367_ = lean_uint64_shift_right(v_fold_365_, v___x_366_);
v___x_368_ = lean_uint64_xor(v_fold_365_, v___x_367_);
v___x_369_ = lean_uint64_to_usize(v___x_368_);
v___x_370_ = lean_usize_of_nat(v___x_359_);
v___x_371_ = ((size_t)1ULL);
v___x_372_ = lean_usize_sub(v___x_370_, v___x_371_);
v___x_373_ = lean_usize_land(v___x_369_, v___x_372_);
v___x_374_ = lean_array_uget_borrowed(v_x_349_, v___x_373_);
lean_inc(v___x_374_);
if (v_isShared_356_ == 0)
{
lean_ctor_set(v___x_355_, 2, v___x_374_);
v___x_376_ = v___x_355_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_key_351_);
lean_ctor_set(v_reuseFailAlloc_379_, 1, v_value_352_);
lean_ctor_set(v_reuseFailAlloc_379_, 2, v___x_374_);
v___x_376_ = v_reuseFailAlloc_379_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
lean_object* v___x_377_; 
v___x_377_ = lean_array_uset(v_x_349_, v___x_373_, v___x_376_);
v_x_349_ = v___x_377_;
v_x_350_ = v_tail_353_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__4_spec__5___redArg(lean_object* v_i_381_, lean_object* v_source_382_, lean_object* v_target_383_){
_start:
{
lean_object* v___x_384_; uint8_t v___x_385_; 
v___x_384_ = lean_array_get_size(v_source_382_);
v___x_385_ = lean_nat_dec_lt(v_i_381_, v___x_384_);
if (v___x_385_ == 0)
{
lean_dec_ref(v_source_382_);
lean_dec(v_i_381_);
return v_target_383_;
}
else
{
lean_object* v_es_386_; lean_object* v___x_387_; lean_object* v_source_388_; lean_object* v_target_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v_es_386_ = lean_array_fget(v_source_382_, v_i_381_);
v___x_387_ = lean_box(0);
v_source_388_ = lean_array_fset(v_source_382_, v_i_381_, v___x_387_);
v_target_389_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__4_spec__5_spec__6___redArg(v_target_383_, v_es_386_);
v___x_390_ = lean_unsigned_to_nat(1u);
v___x_391_ = lean_nat_add(v_i_381_, v___x_390_);
lean_dec(v_i_381_);
v_i_381_ = v___x_391_;
v_source_382_ = v_source_388_;
v_target_383_ = v_target_389_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__4___redArg(lean_object* v_data_393_){
_start:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v_nbuckets_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_394_ = lean_array_get_size(v_data_393_);
v___x_395_ = lean_unsigned_to_nat(2u);
v_nbuckets_396_ = lean_nat_mul(v___x_394_, v___x_395_);
v___x_397_ = lean_unsigned_to_nat(0u);
v___x_398_ = lean_box(0);
v___x_399_ = lean_mk_array(v_nbuckets_396_, v___x_398_);
v___x_400_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__4_spec__5___redArg(v___x_397_, v_data_393_, v___x_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2___redArg(lean_object* v_m_401_, lean_object* v_a_402_, lean_object* v_b_403_){
_start:
{
lean_object* v_size_404_; lean_object* v_buckets_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_452_; 
v_size_404_ = lean_ctor_get(v_m_401_, 0);
v_buckets_405_ = lean_ctor_get(v_m_401_, 1);
v_isSharedCheck_452_ = !lean_is_exclusive(v_m_401_);
if (v_isSharedCheck_452_ == 0)
{
v___x_407_ = v_m_401_;
v_isShared_408_ = v_isSharedCheck_452_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_buckets_405_);
lean_inc(v_size_404_);
lean_dec(v_m_401_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_452_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v_fst_409_; lean_object* v_snd_410_; lean_object* v___x_411_; uint64_t v___x_412_; uint64_t v___x_413_; uint64_t v___x_414_; uint64_t v___x_415_; uint64_t v___x_416_; uint64_t v_fold_417_; uint64_t v___x_418_; uint64_t v___x_419_; uint64_t v___x_420_; size_t v___x_421_; size_t v___x_422_; size_t v___x_423_; size_t v___x_424_; size_t v___x_425_; lean_object* v_bkt_426_; uint8_t v___x_427_; 
v_fst_409_ = lean_ctor_get(v_a_402_, 0);
v_snd_410_ = lean_ctor_get(v_a_402_, 1);
v___x_411_ = lean_array_get_size(v_buckets_405_);
v___x_412_ = l_Lean_Expr_hash(v_fst_409_);
v___x_413_ = l_Lean_Expr_hash(v_snd_410_);
v___x_414_ = lean_uint64_mix_hash(v___x_412_, v___x_413_);
v___x_415_ = 32ULL;
v___x_416_ = lean_uint64_shift_right(v___x_414_, v___x_415_);
v_fold_417_ = lean_uint64_xor(v___x_414_, v___x_416_);
v___x_418_ = 16ULL;
v___x_419_ = lean_uint64_shift_right(v_fold_417_, v___x_418_);
v___x_420_ = lean_uint64_xor(v_fold_417_, v___x_419_);
v___x_421_ = lean_uint64_to_usize(v___x_420_);
v___x_422_ = lean_usize_of_nat(v___x_411_);
v___x_423_ = ((size_t)1ULL);
v___x_424_ = lean_usize_sub(v___x_422_, v___x_423_);
v___x_425_ = lean_usize_land(v___x_421_, v___x_424_);
v_bkt_426_ = lean_array_uget_borrowed(v_buckets_405_, v___x_425_);
v___x_427_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__3___redArg(v_a_402_, v_bkt_426_);
if (v___x_427_ == 0)
{
lean_object* v___x_428_; lean_object* v_size_x27_429_; lean_object* v___x_430_; lean_object* v_buckets_x27_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; uint8_t v___x_437_; 
v___x_428_ = lean_unsigned_to_nat(1u);
v_size_x27_429_ = lean_nat_add(v_size_404_, v___x_428_);
lean_dec(v_size_404_);
lean_inc(v_bkt_426_);
v___x_430_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_430_, 0, v_a_402_);
lean_ctor_set(v___x_430_, 1, v_b_403_);
lean_ctor_set(v___x_430_, 2, v_bkt_426_);
v_buckets_x27_431_ = lean_array_uset(v_buckets_405_, v___x_425_, v___x_430_);
v___x_432_ = lean_unsigned_to_nat(4u);
v___x_433_ = lean_nat_mul(v_size_x27_429_, v___x_432_);
v___x_434_ = lean_unsigned_to_nat(3u);
v___x_435_ = lean_nat_div(v___x_433_, v___x_434_);
lean_dec(v___x_433_);
v___x_436_ = lean_array_get_size(v_buckets_x27_431_);
v___x_437_ = lean_nat_dec_le(v___x_435_, v___x_436_);
lean_dec(v___x_435_);
if (v___x_437_ == 0)
{
lean_object* v_val_438_; lean_object* v___x_440_; 
v_val_438_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__4___redArg(v_buckets_x27_431_);
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 1, v_val_438_);
lean_ctor_set(v___x_407_, 0, v_size_x27_429_);
v___x_440_ = v___x_407_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_size_x27_429_);
lean_ctor_set(v_reuseFailAlloc_441_, 1, v_val_438_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
else
{
lean_object* v___x_443_; 
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 1, v_buckets_x27_431_);
lean_ctor_set(v___x_407_, 0, v_size_x27_429_);
v___x_443_ = v___x_407_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_size_x27_429_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v_buckets_x27_431_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
else
{
lean_object* v___x_445_; lean_object* v_buckets_x27_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_450_; 
lean_inc(v_bkt_426_);
v___x_445_ = lean_box(0);
v_buckets_x27_446_ = lean_array_uset(v_buckets_405_, v___x_425_, v___x_445_);
v___x_447_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__5___redArg(v_a_402_, v_b_403_, v_bkt_426_);
v___x_448_ = lean_array_uset(v_buckets_x27_446_, v___x_425_, v___x_447_);
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 1, v___x_448_);
v___x_450_ = v___x_407_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_size_404_);
lean_ctor_set(v_reuseFailAlloc_451_, 1, v___x_448_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_goCore(lean_object* v_lhs_453_, lean_object* v_rhs_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_, lean_object* v_a_466_){
_start:
{
lean_object* v___y_469_; lean_object* v___y_470_; lean_object* v___y_471_; lean_object* v___y_472_; lean_object* v___y_473_; lean_object* v___y_474_; lean_object* v___y_475_; lean_object* v___y_476_; lean_object* v___y_477_; lean_object* v___y_478_; lean_object* v___y_479_; lean_object* v___y_480_; lean_object* v___y_481_; lean_object* v___y_482_; lean_object* v___y_483_; lean_object* v___y_484_; uint8_t v___y_485_; lean_object* v___x_516_; 
v___x_516_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_inBinder___redArg(v_a_455_, v_a_456_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_876_; 
v_a_517_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_876_ == 0)
{
v___x_519_ = v___x_516_;
v_isShared_520_ = v_isSharedCheck_876_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_a_517_);
lean_dec(v___x_516_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_876_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
if (lean_obj_tag(v_a_517_) == 0)
{
lean_object* v___x_521_; lean_object* v___x_523_; 
lean_dec_ref(v_rhs_454_);
lean_dec_ref(v_lhs_453_);
v___x_521_ = lean_box(0);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_521_);
v___x_523_ = v___x_519_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v___x_521_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
else
{
lean_object* v_val_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_875_; 
v_val_525_ = lean_ctor_get(v_a_517_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v_a_517_);
if (v_isSharedCheck_875_ == 0)
{
v___x_527_ = v_a_517_;
v_isShared_528_ = v_isSharedCheck_875_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_val_525_);
lean_dec(v_a_517_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_875_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v_fst_529_; lean_object* v_snd_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_874_; 
v_fst_529_ = lean_ctor_get(v_val_525_, 0);
v_snd_530_ = lean_ctor_get(v_val_525_, 1);
v_isSharedCheck_874_ = !lean_is_exclusive(v_val_525_);
if (v_isSharedCheck_874_ == 0)
{
v___x_532_ = v_val_525_;
v_isShared_533_ = v_isSharedCheck_874_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_snd_530_);
lean_inc(v_fst_529_);
lean_dec(v_val_525_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_874_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v___y_535_; lean_object* v___y_536_; lean_object* v___y_537_; lean_object* v___y_538_; lean_object* v___y_539_; lean_object* v___y_540_; lean_object* v___y_541_; lean_object* v___y_542_; lean_object* v___y_543_; lean_object* v___y_544_; lean_object* v___y_545_; uint8_t v___x_780_; 
v___x_780_ = lean_unbox(v_fst_529_);
lean_dec(v_fst_529_);
if (v___x_780_ == 0)
{
lean_del_object(v___x_532_);
lean_del_object(v___x_527_);
v___y_535_ = v_a_455_;
v___y_536_ = v_a_457_;
v___y_537_ = v_a_458_;
v___y_538_ = v_a_459_;
v___y_539_ = v_a_460_;
v___y_540_ = v_a_461_;
v___y_541_ = v_a_462_;
v___y_542_ = v_a_463_;
v___y_543_ = v_a_464_;
v___y_544_ = v_a_465_;
v___y_545_ = v_a_466_;
goto v___jp_534_;
}
else
{
uint8_t v___x_781_; 
v___x_781_ = l_Lean_Expr_hasLooseBVars(v_lhs_453_);
if (v___x_781_ == 0)
{
uint8_t v___x_782_; 
v___x_782_ = l_Lean_Expr_hasLooseBVars(v_rhs_454_);
if (v___x_782_ == 0)
{
lean_object* v___x_783_; 
lean_inc_ref(v_lhs_453_);
v___x_783_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized(v_lhs_453_, v_a_457_, v_a_458_, v_a_459_, v_a_460_, v_a_461_, v_a_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_);
if (lean_obj_tag(v___x_783_) == 0)
{
lean_object* v_a_784_; lean_object* v___x_785_; 
v_a_784_ = lean_ctor_get(v___x_783_, 0);
lean_inc(v_a_784_);
lean_dec_ref(v___x_783_);
lean_inc_ref(v_rhs_454_);
v___x_785_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized(v_rhs_454_, v_a_457_, v_a_458_, v_a_459_, v_a_460_, v_a_461_, v_a_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_);
if (lean_obj_tag(v___x_785_) == 0)
{
lean_object* v_a_786_; lean_object* v___x_787_; 
v_a_786_ = lean_ctor_get(v___x_785_, 0);
lean_inc(v_a_786_);
lean_dec_ref(v___x_785_);
lean_inc(v_a_466_);
lean_inc_ref(v_a_465_);
lean_inc(v_a_464_);
lean_inc_ref(v_a_463_);
lean_inc(v_a_462_);
lean_inc_ref(v_a_461_);
lean_inc(v_a_460_);
lean_inc_ref(v_a_459_);
lean_inc(v_a_458_);
lean_inc(v_a_457_);
v___x_787_ = lean_grind_process_new_facts(v_a_457_, v_a_458_, v_a_459_, v_a_460_, v_a_461_, v_a_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_);
if (lean_obj_tag(v___x_787_) == 0)
{
lean_object* v___x_788_; 
lean_dec_ref(v___x_787_);
v___x_788_ = l_Lean_Meta_Grind_isEqv___redArg(v_a_784_, v_a_786_, v_a_457_);
if (lean_obj_tag(v___x_788_) == 0)
{
lean_object* v_a_789_; uint8_t v___x_790_; 
v_a_789_ = lean_ctor_get(v___x_788_, 0);
lean_inc(v_a_789_);
lean_dec_ref(v___x_788_);
v___x_790_ = lean_unbox(v_a_789_);
lean_dec(v_a_789_);
if (v___x_790_ == 0)
{
lean_dec(v_a_786_);
lean_dec(v_a_784_);
lean_del_object(v___x_532_);
lean_del_object(v___x_527_);
v___y_535_ = v_a_455_;
v___y_536_ = v_a_457_;
v___y_537_ = v_a_458_;
v___y_538_ = v_a_459_;
v___y_539_ = v_a_460_;
v___y_540_ = v_a_461_;
v___y_541_ = v_a_462_;
v___y_542_ = v_a_463_;
v___y_543_ = v_a_464_;
v___y_544_ = v_a_465_;
v___y_545_ = v_a_466_;
goto v___jp_534_;
}
else
{
lean_object* v___x_791_; 
lean_inc(v_a_786_);
lean_inc(v_a_784_);
v___x_791_ = l_Lean_Meta_Grind_hasSameType(v_a_784_, v_a_786_, v_a_463_, v_a_464_, v_a_465_, v_a_466_);
if (lean_obj_tag(v___x_791_) == 0)
{
lean_object* v_a_792_; uint8_t v___x_793_; 
v_a_792_ = lean_ctor_get(v___x_791_, 0);
lean_inc(v_a_792_);
lean_dec_ref(v___x_791_);
v___x_793_ = lean_unbox(v_a_792_);
lean_dec(v_a_792_);
if (v___x_793_ == 0)
{
lean_dec(v_a_786_);
lean_dec(v_a_784_);
lean_del_object(v___x_532_);
lean_del_object(v___x_527_);
v___y_535_ = v_a_455_;
v___y_536_ = v_a_457_;
v___y_537_ = v_a_458_;
v___y_538_ = v_a_459_;
v___y_539_ = v_a_460_;
v___y_540_ = v_a_461_;
v___y_541_ = v_a_462_;
v___y_542_ = v_a_463_;
v___y_543_ = v_a_464_;
v___y_544_ = v_a_465_;
v___y_545_ = v_a_466_;
goto v___jp_534_;
}
else
{
lean_object* v___x_794_; 
lean_del_object(v___x_519_);
lean_dec_ref(v_rhs_454_);
lean_dec_ref(v_lhs_453_);
lean_inc(v_a_466_);
lean_inc_ref(v_a_465_);
lean_inc(v_a_464_);
lean_inc_ref(v_a_463_);
lean_inc(v_a_784_);
v___x_794_ = lean_infer_type(v_a_784_, v_a_463_, v_a_464_, v_a_465_, v_a_466_);
if (lean_obj_tag(v___x_794_) == 0)
{
lean_object* v_a_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_825_; 
v_a_795_ = lean_ctor_get(v___x_794_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_794_);
if (v_isSharedCheck_825_ == 0)
{
v___x_797_ = v___x_794_;
v_isShared_798_ = v_isSharedCheck_825_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_a_795_);
lean_dec(v___x_794_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_825_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v_cache_799_; lean_object* v_varTypes_800_; lean_object* v_lhss_801_; lean_object* v_rhss_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_824_; 
v_cache_799_ = lean_ctor_get(v_snd_530_, 0);
v_varTypes_800_ = lean_ctor_get(v_snd_530_, 1);
v_lhss_801_ = lean_ctor_get(v_snd_530_, 2);
v_rhss_802_ = lean_ctor_get(v_snd_530_, 3);
v_isSharedCheck_824_ = !lean_is_exclusive(v_snd_530_);
if (v_isSharedCheck_824_ == 0)
{
v___x_804_ = v_snd_530_;
v_isShared_805_ = v_isSharedCheck_824_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_rhss_802_);
lean_inc(v_lhss_801_);
lean_inc(v_varTypes_800_);
lean_inc(v_cache_799_);
lean_dec(v_snd_530_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_824_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_812_; 
v___x_806_ = lean_array_get_size(v_varTypes_800_);
v___x_807_ = lean_nat_add(v___x_806_, v_a_455_);
v___x_808_ = lean_array_push(v_varTypes_800_, v_a_795_);
v___x_809_ = lean_array_push(v_lhss_801_, v_a_784_);
v___x_810_ = lean_array_push(v_rhss_802_, v_a_786_);
if (v_isShared_805_ == 0)
{
lean_ctor_set(v___x_804_, 3, v___x_810_);
lean_ctor_set(v___x_804_, 2, v___x_809_);
lean_ctor_set(v___x_804_, 1, v___x_808_);
v___x_812_ = v___x_804_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v_cache_799_);
lean_ctor_set(v_reuseFailAlloc_823_, 1, v___x_808_);
lean_ctor_set(v_reuseFailAlloc_823_, 2, v___x_809_);
lean_ctor_set(v_reuseFailAlloc_823_, 3, v___x_810_);
v___x_812_ = v_reuseFailAlloc_823_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
lean_object* v___x_813_; lean_object* v___x_815_; 
v___x_813_ = l_Lean_mkBVar(v___x_807_);
if (v_isShared_533_ == 0)
{
lean_ctor_set(v___x_532_, 1, v___x_812_);
lean_ctor_set(v___x_532_, 0, v___x_813_);
v___x_815_ = v___x_532_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v___x_813_);
lean_ctor_set(v_reuseFailAlloc_822_, 1, v___x_812_);
v___x_815_ = v_reuseFailAlloc_822_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
lean_object* v___x_817_; 
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 0, v___x_815_);
v___x_817_ = v___x_527_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v___x_815_);
v___x_817_ = v_reuseFailAlloc_821_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
lean_object* v___x_819_; 
if (v_isShared_798_ == 0)
{
lean_ctor_set(v___x_797_, 0, v___x_817_);
v___x_819_ = v___x_797_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v___x_817_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_833_; 
lean_dec(v_a_786_);
lean_dec(v_a_784_);
lean_del_object(v___x_532_);
lean_dec(v_snd_530_);
lean_del_object(v___x_527_);
v_a_826_ = lean_ctor_get(v___x_794_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_794_);
if (v_isSharedCheck_833_ == 0)
{
v___x_828_ = v___x_794_;
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_dec(v___x_794_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_831_; 
if (v_isShared_829_ == 0)
{
v___x_831_ = v___x_828_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_a_826_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
}
}
else
{
lean_object* v_a_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_841_; 
lean_dec(v_a_786_);
lean_dec(v_a_784_);
lean_del_object(v___x_532_);
lean_dec(v_snd_530_);
lean_del_object(v___x_527_);
lean_del_object(v___x_519_);
lean_dec_ref(v_rhs_454_);
lean_dec_ref(v_lhs_453_);
v_a_834_ = lean_ctor_get(v___x_791_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_791_);
if (v_isSharedCheck_841_ == 0)
{
v___x_836_ = v___x_791_;
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_a_834_);
lean_dec(v___x_791_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_839_; 
if (v_isShared_837_ == 0)
{
v___x_839_ = v___x_836_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_a_834_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
}
}
else
{
lean_object* v_a_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_849_; 
lean_dec(v_a_786_);
lean_dec(v_a_784_);
lean_del_object(v___x_532_);
lean_dec(v_snd_530_);
lean_del_object(v___x_527_);
lean_del_object(v___x_519_);
lean_dec_ref(v_rhs_454_);
lean_dec_ref(v_lhs_453_);
v_a_842_ = lean_ctor_get(v___x_788_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_788_);
if (v_isSharedCheck_849_ == 0)
{
v___x_844_ = v___x_788_;
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_a_842_);
lean_dec(v___x_788_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_849_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v___x_847_; 
if (v_isShared_845_ == 0)
{
v___x_847_ = v___x_844_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_a_842_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
}
}
else
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_857_; 
lean_dec(v_a_786_);
lean_dec(v_a_784_);
lean_del_object(v___x_532_);
lean_dec(v_snd_530_);
lean_del_object(v___x_527_);
lean_del_object(v___x_519_);
lean_dec_ref(v_rhs_454_);
lean_dec_ref(v_lhs_453_);
v_a_850_ = lean_ctor_get(v___x_787_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_787_);
if (v_isSharedCheck_857_ == 0)
{
v___x_852_ = v___x_787_;
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_787_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
else
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_865_; 
lean_dec(v_a_784_);
lean_del_object(v___x_532_);
lean_dec(v_snd_530_);
lean_del_object(v___x_527_);
lean_del_object(v___x_519_);
lean_dec_ref(v_rhs_454_);
lean_dec_ref(v_lhs_453_);
v_a_858_ = lean_ctor_get(v___x_785_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_785_);
if (v_isSharedCheck_865_ == 0)
{
v___x_860_ = v___x_785_;
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v___x_785_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_863_; 
if (v_isShared_861_ == 0)
{
v___x_863_ = v___x_860_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_a_858_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
}
else
{
lean_object* v_a_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_873_; 
lean_del_object(v___x_532_);
lean_dec(v_snd_530_);
lean_del_object(v___x_527_);
lean_del_object(v___x_519_);
lean_dec_ref(v_rhs_454_);
lean_dec_ref(v_lhs_453_);
v_a_866_ = lean_ctor_get(v___x_783_, 0);
v_isSharedCheck_873_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_873_ == 0)
{
v___x_868_ = v___x_783_;
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_a_866_);
lean_dec(v___x_783_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_871_; 
if (v_isShared_869_ == 0)
{
v___x_871_ = v___x_868_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v_a_866_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
}
}
else
{
lean_del_object(v___x_532_);
lean_del_object(v___x_527_);
v___y_535_ = v_a_455_;
v___y_536_ = v_a_457_;
v___y_537_ = v_a_458_;
v___y_538_ = v_a_459_;
v___y_539_ = v_a_460_;
v___y_540_ = v_a_461_;
v___y_541_ = v_a_462_;
v___y_542_ = v_a_463_;
v___y_543_ = v_a_464_;
v___y_544_ = v_a_465_;
v___y_545_ = v_a_466_;
goto v___jp_534_;
}
}
else
{
lean_del_object(v___x_532_);
lean_del_object(v___x_527_);
v___y_535_ = v_a_455_;
v___y_536_ = v_a_457_;
v___y_537_ = v_a_458_;
v___y_538_ = v_a_459_;
v___y_539_ = v_a_460_;
v___y_540_ = v_a_461_;
v___y_541_ = v_a_462_;
v___y_542_ = v_a_463_;
v___y_543_ = v_a_464_;
v___y_544_ = v_a_465_;
v___y_545_ = v_a_466_;
goto v___jp_534_;
}
}
v___jp_534_:
{
switch(lean_obj_tag(v_lhs_453_))
{
case 5:
{
if (lean_obj_tag(v_rhs_454_) == 5)
{
lean_object* v_fn_546_; lean_object* v_arg_547_; lean_object* v_fn_548_; lean_object* v_arg_549_; lean_object* v___x_550_; 
lean_del_object(v___x_519_);
v_fn_546_ = lean_ctor_get(v_lhs_453_, 0);
lean_inc_ref(v_fn_546_);
v_arg_547_ = lean_ctor_get(v_lhs_453_, 1);
lean_inc_ref(v_arg_547_);
lean_dec_ref(v_lhs_453_);
v_fn_548_ = lean_ctor_get(v_rhs_454_, 0);
lean_inc_ref(v_fn_548_);
v_arg_549_ = lean_ctor_get(v_rhs_454_, 1);
lean_inc_ref(v_arg_549_);
lean_dec_ref(v_rhs_454_);
v___x_550_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go(v_fn_546_, v_fn_548_, v___y_535_, v_snd_530_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
if (lean_obj_tag(v___x_550_) == 0)
{
lean_object* v_a_551_; 
v_a_551_ = lean_ctor_get(v___x_550_, 0);
lean_inc(v_a_551_);
if (lean_obj_tag(v_a_551_) == 0)
{
lean_dec_ref(v_arg_549_);
lean_dec_ref(v_arg_547_);
return v___x_550_;
}
else
{
lean_object* v_val_552_; lean_object* v_fst_553_; lean_object* v_snd_554_; lean_object* v___x_555_; 
lean_dec_ref(v___x_550_);
v_val_552_ = lean_ctor_get(v_a_551_, 0);
lean_inc(v_val_552_);
lean_dec_ref(v_a_551_);
v_fst_553_ = lean_ctor_get(v_val_552_, 0);
lean_inc(v_fst_553_);
v_snd_554_ = lean_ctor_get(v_val_552_, 1);
lean_inc(v_snd_554_);
lean_dec(v_val_552_);
v___x_555_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go(v_arg_547_, v_arg_549_, v___y_535_, v_snd_554_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
if (lean_obj_tag(v___x_555_) == 0)
{
lean_object* v_a_556_; 
v_a_556_ = lean_ctor_get(v___x_555_, 0);
lean_inc(v_a_556_);
if (lean_obj_tag(v_a_556_) == 0)
{
lean_dec(v_fst_553_);
return v___x_555_;
}
else
{
lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_581_; 
v_isSharedCheck_581_ = !lean_is_exclusive(v___x_555_);
if (v_isSharedCheck_581_ == 0)
{
lean_object* v_unused_582_; 
v_unused_582_ = lean_ctor_get(v___x_555_, 0);
lean_dec(v_unused_582_);
v___x_558_ = v___x_555_;
v_isShared_559_ = v_isSharedCheck_581_;
goto v_resetjp_557_;
}
else
{
lean_dec(v___x_555_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_581_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v_val_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_580_; 
v_val_560_ = lean_ctor_get(v_a_556_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v_a_556_);
if (v_isSharedCheck_580_ == 0)
{
v___x_562_ = v_a_556_;
v_isShared_563_ = v_isSharedCheck_580_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_val_560_);
lean_dec(v_a_556_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_580_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v_fst_564_; lean_object* v_snd_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_579_; 
v_fst_564_ = lean_ctor_get(v_val_560_, 0);
v_snd_565_ = lean_ctor_get(v_val_560_, 1);
v_isSharedCheck_579_ = !lean_is_exclusive(v_val_560_);
if (v_isSharedCheck_579_ == 0)
{
v___x_567_ = v_val_560_;
v_isShared_568_ = v_isSharedCheck_579_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_snd_565_);
lean_inc(v_fst_564_);
lean_dec(v_val_560_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_579_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_569_; lean_object* v___x_571_; 
v___x_569_ = l_Lean_Expr_app___override(v_fst_553_, v_fst_564_);
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 0, v___x_569_);
v___x_571_ = v___x_567_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v___x_569_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v_snd_565_);
v___x_571_ = v_reuseFailAlloc_578_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
lean_object* v___x_573_; 
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 0, v___x_571_);
v___x_573_ = v___x_562_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v___x_571_);
v___x_573_ = v_reuseFailAlloc_577_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
lean_object* v___x_575_; 
if (v_isShared_559_ == 0)
{
lean_ctor_set(v___x_558_, 0, v___x_573_);
v___x_575_ = v___x_558_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_573_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
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
lean_dec(v_fst_553_);
return v___x_555_;
}
}
}
else
{
lean_dec_ref(v_arg_549_);
lean_dec_ref(v_arg_547_);
return v___x_550_;
}
}
else
{
lean_object* v___x_583_; lean_object* v___x_585_; 
lean_dec_ref(v_lhs_453_);
lean_dec(v_snd_530_);
lean_dec_ref(v_rhs_454_);
v___x_583_ = lean_box(0);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_583_);
v___x_585_ = v___x_519_;
goto v_reusejp_584_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v___x_583_);
v___x_585_ = v_reuseFailAlloc_586_;
goto v_reusejp_584_;
}
v_reusejp_584_:
{
return v___x_585_;
}
}
}
case 6:
{
if (lean_obj_tag(v_rhs_454_) == 6)
{
lean_object* v_binderName_587_; lean_object* v_binderType_588_; lean_object* v_body_589_; uint8_t v_binderInfo_590_; lean_object* v_binderType_591_; lean_object* v_body_592_; lean_object* v___x_593_; 
lean_del_object(v___x_519_);
v_binderName_587_ = lean_ctor_get(v_lhs_453_, 0);
lean_inc(v_binderName_587_);
v_binderType_588_ = lean_ctor_get(v_lhs_453_, 1);
lean_inc_ref(v_binderType_588_);
v_body_589_ = lean_ctor_get(v_lhs_453_, 2);
lean_inc_ref(v_body_589_);
v_binderInfo_590_ = lean_ctor_get_uint8(v_lhs_453_, sizeof(void*)*3 + 8);
lean_dec_ref(v_lhs_453_);
v_binderType_591_ = lean_ctor_get(v_rhs_454_, 1);
lean_inc_ref(v_binderType_591_);
v_body_592_ = lean_ctor_get(v_rhs_454_, 2);
lean_inc_ref(v_body_592_);
lean_dec_ref(v_rhs_454_);
v___x_593_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go(v_binderType_588_, v_binderType_591_, v___y_535_, v_snd_530_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
if (lean_obj_tag(v___x_593_) == 0)
{
lean_object* v_a_594_; 
v_a_594_ = lean_ctor_get(v___x_593_, 0);
lean_inc(v_a_594_);
if (lean_obj_tag(v_a_594_) == 0)
{
lean_dec_ref(v_body_592_);
lean_dec_ref(v_body_589_);
lean_dec(v_binderName_587_);
return v___x_593_;
}
else
{
lean_object* v_val_595_; lean_object* v_fst_596_; lean_object* v_snd_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
lean_dec_ref(v___x_593_);
v_val_595_ = lean_ctor_get(v_a_594_, 0);
lean_inc(v_val_595_);
lean_dec_ref(v_a_594_);
v_fst_596_ = lean_ctor_get(v_val_595_, 0);
lean_inc(v_fst_596_);
v_snd_597_ = lean_ctor_get(v_val_595_, 1);
lean_inc(v_snd_597_);
lean_dec(v_val_595_);
v___x_598_ = lean_unsigned_to_nat(1u);
v___x_599_ = lean_nat_add(v___y_535_, v___x_598_);
v___x_600_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go(v_body_589_, v_body_592_, v___x_599_, v_snd_597_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
lean_dec(v___x_599_);
if (lean_obj_tag(v___x_600_) == 0)
{
lean_object* v_a_601_; 
v_a_601_ = lean_ctor_get(v___x_600_, 0);
lean_inc(v_a_601_);
if (lean_obj_tag(v_a_601_) == 0)
{
lean_dec(v_fst_596_);
lean_dec(v_binderName_587_);
return v___x_600_;
}
else
{
lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_626_; 
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_600_);
if (v_isSharedCheck_626_ == 0)
{
lean_object* v_unused_627_; 
v_unused_627_ = lean_ctor_get(v___x_600_, 0);
lean_dec(v_unused_627_);
v___x_603_ = v___x_600_;
v_isShared_604_ = v_isSharedCheck_626_;
goto v_resetjp_602_;
}
else
{
lean_dec(v___x_600_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_626_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
lean_object* v_val_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_625_; 
v_val_605_ = lean_ctor_get(v_a_601_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v_a_601_);
if (v_isSharedCheck_625_ == 0)
{
v___x_607_ = v_a_601_;
v_isShared_608_ = v_isSharedCheck_625_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_val_605_);
lean_dec(v_a_601_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_625_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v_fst_609_; lean_object* v_snd_610_; lean_object* v___x_612_; uint8_t v_isShared_613_; uint8_t v_isSharedCheck_624_; 
v_fst_609_ = lean_ctor_get(v_val_605_, 0);
v_snd_610_ = lean_ctor_get(v_val_605_, 1);
v_isSharedCheck_624_ = !lean_is_exclusive(v_val_605_);
if (v_isSharedCheck_624_ == 0)
{
v___x_612_ = v_val_605_;
v_isShared_613_ = v_isSharedCheck_624_;
goto v_resetjp_611_;
}
else
{
lean_inc(v_snd_610_);
lean_inc(v_fst_609_);
lean_dec(v_val_605_);
v___x_612_ = lean_box(0);
v_isShared_613_ = v_isSharedCheck_624_;
goto v_resetjp_611_;
}
v_resetjp_611_:
{
lean_object* v___x_614_; lean_object* v___x_616_; 
v___x_614_ = l_Lean_mkLambda(v_binderName_587_, v_binderInfo_590_, v_fst_596_, v_fst_609_);
if (v_isShared_613_ == 0)
{
lean_ctor_set(v___x_612_, 0, v___x_614_);
v___x_616_ = v___x_612_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___x_614_);
lean_ctor_set(v_reuseFailAlloc_623_, 1, v_snd_610_);
v___x_616_ = v_reuseFailAlloc_623_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
lean_object* v___x_618_; 
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 0, v___x_616_);
v___x_618_ = v___x_607_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v___x_616_);
v___x_618_ = v_reuseFailAlloc_622_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
lean_object* v___x_620_; 
if (v_isShared_604_ == 0)
{
lean_ctor_set(v___x_603_, 0, v___x_618_);
v___x_620_ = v___x_603_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v___x_618_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
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
lean_dec(v_fst_596_);
lean_dec(v_binderName_587_);
return v___x_600_;
}
}
}
else
{
lean_dec_ref(v_body_592_);
lean_dec_ref(v_body_589_);
lean_dec(v_binderName_587_);
return v___x_593_;
}
}
else
{
lean_object* v___x_628_; lean_object* v___x_630_; 
lean_dec_ref(v_lhs_453_);
lean_dec(v_snd_530_);
lean_dec_ref(v_rhs_454_);
v___x_628_ = lean_box(0);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_628_);
v___x_630_ = v___x_519_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v___x_628_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
case 7:
{
if (lean_obj_tag(v_rhs_454_) == 7)
{
lean_object* v_binderName_632_; lean_object* v_binderType_633_; lean_object* v_body_634_; uint8_t v_binderInfo_635_; lean_object* v_binderType_636_; lean_object* v_body_637_; lean_object* v___x_638_; 
lean_del_object(v___x_519_);
v_binderName_632_ = lean_ctor_get(v_lhs_453_, 0);
lean_inc(v_binderName_632_);
v_binderType_633_ = lean_ctor_get(v_lhs_453_, 1);
lean_inc_ref(v_binderType_633_);
v_body_634_ = lean_ctor_get(v_lhs_453_, 2);
lean_inc_ref(v_body_634_);
v_binderInfo_635_ = lean_ctor_get_uint8(v_lhs_453_, sizeof(void*)*3 + 8);
lean_dec_ref(v_lhs_453_);
v_binderType_636_ = lean_ctor_get(v_rhs_454_, 1);
lean_inc_ref(v_binderType_636_);
v_body_637_ = lean_ctor_get(v_rhs_454_, 2);
lean_inc_ref(v_body_637_);
lean_dec_ref(v_rhs_454_);
v___x_638_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go(v_binderType_633_, v_binderType_636_, v___y_535_, v_snd_530_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_object* v_a_639_; 
v_a_639_ = lean_ctor_get(v___x_638_, 0);
lean_inc(v_a_639_);
if (lean_obj_tag(v_a_639_) == 0)
{
lean_dec_ref(v_body_637_);
lean_dec_ref(v_body_634_);
lean_dec(v_binderName_632_);
return v___x_638_;
}
else
{
lean_object* v_val_640_; lean_object* v_fst_641_; lean_object* v_snd_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
lean_dec_ref(v___x_638_);
v_val_640_ = lean_ctor_get(v_a_639_, 0);
lean_inc(v_val_640_);
lean_dec_ref(v_a_639_);
v_fst_641_ = lean_ctor_get(v_val_640_, 0);
lean_inc(v_fst_641_);
v_snd_642_ = lean_ctor_get(v_val_640_, 1);
lean_inc(v_snd_642_);
lean_dec(v_val_640_);
v___x_643_ = lean_unsigned_to_nat(1u);
v___x_644_ = lean_nat_add(v___y_535_, v___x_643_);
v___x_645_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go(v_body_634_, v_body_637_, v___x_644_, v_snd_642_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
lean_dec(v___x_644_);
if (lean_obj_tag(v___x_645_) == 0)
{
lean_object* v_a_646_; 
v_a_646_ = lean_ctor_get(v___x_645_, 0);
lean_inc(v_a_646_);
if (lean_obj_tag(v_a_646_) == 0)
{
lean_dec(v_fst_641_);
lean_dec(v_binderName_632_);
return v___x_645_;
}
else
{
lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_671_; 
v_isSharedCheck_671_ = !lean_is_exclusive(v___x_645_);
if (v_isSharedCheck_671_ == 0)
{
lean_object* v_unused_672_; 
v_unused_672_ = lean_ctor_get(v___x_645_, 0);
lean_dec(v_unused_672_);
v___x_648_ = v___x_645_;
v_isShared_649_ = v_isSharedCheck_671_;
goto v_resetjp_647_;
}
else
{
lean_dec(v___x_645_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_671_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v_val_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_670_; 
v_val_650_ = lean_ctor_get(v_a_646_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v_a_646_);
if (v_isSharedCheck_670_ == 0)
{
v___x_652_ = v_a_646_;
v_isShared_653_ = v_isSharedCheck_670_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_val_650_);
lean_dec(v_a_646_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_670_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v_fst_654_; lean_object* v_snd_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_669_; 
v_fst_654_ = lean_ctor_get(v_val_650_, 0);
v_snd_655_ = lean_ctor_get(v_val_650_, 1);
v_isSharedCheck_669_ = !lean_is_exclusive(v_val_650_);
if (v_isSharedCheck_669_ == 0)
{
v___x_657_ = v_val_650_;
v_isShared_658_ = v_isSharedCheck_669_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_snd_655_);
lean_inc(v_fst_654_);
lean_dec(v_val_650_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_669_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_659_; lean_object* v___x_661_; 
v___x_659_ = l_Lean_mkForall(v_binderName_632_, v_binderInfo_635_, v_fst_641_, v_fst_654_);
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 0, v___x_659_);
v___x_661_ = v___x_657_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v___x_659_);
lean_ctor_set(v_reuseFailAlloc_668_, 1, v_snd_655_);
v___x_661_ = v_reuseFailAlloc_668_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
lean_object* v___x_663_; 
if (v_isShared_653_ == 0)
{
lean_ctor_set(v___x_652_, 0, v___x_661_);
v___x_663_ = v___x_652_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v___x_661_);
v___x_663_ = v_reuseFailAlloc_667_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
lean_object* v___x_665_; 
if (v_isShared_649_ == 0)
{
lean_ctor_set(v___x_648_, 0, v___x_663_);
v___x_665_ = v___x_648_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v___x_663_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
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
lean_dec(v_fst_641_);
lean_dec(v_binderName_632_);
return v___x_645_;
}
}
}
else
{
lean_dec_ref(v_body_637_);
lean_dec_ref(v_body_634_);
lean_dec(v_binderName_632_);
return v___x_638_;
}
}
else
{
lean_object* v___x_673_; lean_object* v___x_675_; 
lean_dec_ref(v_lhs_453_);
lean_dec(v_snd_530_);
lean_dec_ref(v_rhs_454_);
v___x_673_ = lean_box(0);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_673_);
v___x_675_ = v___x_519_;
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
case 8:
{
if (lean_obj_tag(v_rhs_454_) == 8)
{
lean_object* v_declName_677_; lean_object* v_type_678_; lean_object* v_value_679_; lean_object* v_body_680_; uint8_t v_nondep_681_; lean_object* v_type_682_; lean_object* v_value_683_; lean_object* v_body_684_; lean_object* v___x_685_; 
lean_del_object(v___x_519_);
v_declName_677_ = lean_ctor_get(v_lhs_453_, 0);
lean_inc(v_declName_677_);
v_type_678_ = lean_ctor_get(v_lhs_453_, 1);
lean_inc_ref(v_type_678_);
v_value_679_ = lean_ctor_get(v_lhs_453_, 2);
lean_inc_ref(v_value_679_);
v_body_680_ = lean_ctor_get(v_lhs_453_, 3);
lean_inc_ref(v_body_680_);
v_nondep_681_ = lean_ctor_get_uint8(v_lhs_453_, sizeof(void*)*4 + 8);
lean_dec_ref(v_lhs_453_);
v_type_682_ = lean_ctor_get(v_rhs_454_, 1);
lean_inc_ref(v_type_682_);
v_value_683_ = lean_ctor_get(v_rhs_454_, 2);
lean_inc_ref(v_value_683_);
v_body_684_ = lean_ctor_get(v_rhs_454_, 3);
lean_inc_ref(v_body_684_);
lean_dec_ref(v_rhs_454_);
v___x_685_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go(v_type_678_, v_type_682_, v___y_535_, v_snd_530_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
if (lean_obj_tag(v___x_685_) == 0)
{
lean_object* v_a_686_; 
v_a_686_ = lean_ctor_get(v___x_685_, 0);
lean_inc(v_a_686_);
if (lean_obj_tag(v_a_686_) == 0)
{
lean_dec_ref(v_body_684_);
lean_dec_ref(v_value_683_);
lean_dec_ref(v_body_680_);
lean_dec_ref(v_value_679_);
lean_dec(v_declName_677_);
return v___x_685_;
}
else
{
lean_object* v_val_687_; lean_object* v_fst_688_; lean_object* v_snd_689_; lean_object* v___x_690_; 
lean_dec_ref(v___x_685_);
v_val_687_ = lean_ctor_get(v_a_686_, 0);
lean_inc(v_val_687_);
lean_dec_ref(v_a_686_);
v_fst_688_ = lean_ctor_get(v_val_687_, 0);
lean_inc(v_fst_688_);
v_snd_689_ = lean_ctor_get(v_val_687_, 1);
lean_inc(v_snd_689_);
lean_dec(v_val_687_);
v___x_690_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go(v_value_679_, v_value_683_, v___y_535_, v_snd_689_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v_a_691_; 
v_a_691_ = lean_ctor_get(v___x_690_, 0);
lean_inc(v_a_691_);
if (lean_obj_tag(v_a_691_) == 0)
{
lean_dec(v_fst_688_);
lean_dec_ref(v_body_684_);
lean_dec_ref(v_body_680_);
lean_dec(v_declName_677_);
return v___x_690_;
}
else
{
lean_object* v_val_692_; lean_object* v_fst_693_; lean_object* v_snd_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
lean_dec_ref(v___x_690_);
v_val_692_ = lean_ctor_get(v_a_691_, 0);
lean_inc(v_val_692_);
lean_dec_ref(v_a_691_);
v_fst_693_ = lean_ctor_get(v_val_692_, 0);
lean_inc(v_fst_693_);
v_snd_694_ = lean_ctor_get(v_val_692_, 1);
lean_inc(v_snd_694_);
lean_dec(v_val_692_);
v___x_695_ = lean_unsigned_to_nat(1u);
v___x_696_ = lean_nat_add(v___y_535_, v___x_695_);
v___x_697_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go(v_body_680_, v_body_684_, v___x_696_, v_snd_694_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
lean_dec(v___x_696_);
if (lean_obj_tag(v___x_697_) == 0)
{
lean_object* v_a_698_; 
v_a_698_ = lean_ctor_get(v___x_697_, 0);
lean_inc(v_a_698_);
if (lean_obj_tag(v_a_698_) == 0)
{
lean_dec(v_fst_693_);
lean_dec(v_fst_688_);
lean_dec(v_declName_677_);
return v___x_697_;
}
else
{
lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_723_; 
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_723_ == 0)
{
lean_object* v_unused_724_; 
v_unused_724_ = lean_ctor_get(v___x_697_, 0);
lean_dec(v_unused_724_);
v___x_700_ = v___x_697_;
v_isShared_701_ = v_isSharedCheck_723_;
goto v_resetjp_699_;
}
else
{
lean_dec(v___x_697_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_723_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v_val_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_722_; 
v_val_702_ = lean_ctor_get(v_a_698_, 0);
v_isSharedCheck_722_ = !lean_is_exclusive(v_a_698_);
if (v_isSharedCheck_722_ == 0)
{
v___x_704_ = v_a_698_;
v_isShared_705_ = v_isSharedCheck_722_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_val_702_);
lean_dec(v_a_698_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_722_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v_fst_706_; lean_object* v_snd_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_721_; 
v_fst_706_ = lean_ctor_get(v_val_702_, 0);
v_snd_707_ = lean_ctor_get(v_val_702_, 1);
v_isSharedCheck_721_ = !lean_is_exclusive(v_val_702_);
if (v_isSharedCheck_721_ == 0)
{
v___x_709_ = v_val_702_;
v_isShared_710_ = v_isSharedCheck_721_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_snd_707_);
lean_inc(v_fst_706_);
lean_dec(v_val_702_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_721_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_711_; lean_object* v___x_713_; 
v___x_711_ = l_Lean_Expr_letE___override(v_declName_677_, v_fst_688_, v_fst_693_, v_fst_706_, v_nondep_681_);
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 0, v___x_711_);
v___x_713_ = v___x_709_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v___x_711_);
lean_ctor_set(v_reuseFailAlloc_720_, 1, v_snd_707_);
v___x_713_ = v_reuseFailAlloc_720_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
lean_object* v___x_715_; 
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 0, v___x_713_);
v___x_715_ = v___x_704_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v___x_713_);
v___x_715_ = v_reuseFailAlloc_719_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
lean_object* v___x_717_; 
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 0, v___x_715_);
v___x_717_ = v___x_700_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v___x_715_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
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
lean_dec(v_fst_693_);
lean_dec(v_fst_688_);
lean_dec(v_declName_677_);
return v___x_697_;
}
}
}
else
{
lean_dec(v_fst_688_);
lean_dec_ref(v_body_684_);
lean_dec_ref(v_body_680_);
lean_dec(v_declName_677_);
return v___x_690_;
}
}
}
else
{
lean_dec_ref(v_body_684_);
lean_dec_ref(v_value_683_);
lean_dec_ref(v_body_680_);
lean_dec_ref(v_value_679_);
lean_dec(v_declName_677_);
return v___x_685_;
}
}
else
{
lean_object* v___x_725_; lean_object* v___x_727_; 
lean_dec_ref(v_lhs_453_);
lean_dec(v_snd_530_);
lean_dec_ref(v_rhs_454_);
v___x_725_ = lean_box(0);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_725_);
v___x_727_ = v___x_519_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v___x_725_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
}
case 10:
{
if (lean_obj_tag(v_rhs_454_) == 10)
{
lean_object* v_data_729_; lean_object* v_expr_730_; lean_object* v_expr_731_; lean_object* v___x_732_; 
lean_del_object(v___x_519_);
v_data_729_ = lean_ctor_get(v_lhs_453_, 0);
lean_inc(v_data_729_);
v_expr_730_ = lean_ctor_get(v_lhs_453_, 1);
lean_inc_ref(v_expr_730_);
lean_dec_ref(v_lhs_453_);
v_expr_731_ = lean_ctor_get(v_rhs_454_, 1);
lean_inc_ref(v_expr_731_);
lean_dec_ref(v_rhs_454_);
v___x_732_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go(v_expr_730_, v_expr_731_, v___y_535_, v_snd_530_, v___y_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_object* v_a_733_; 
v_a_733_ = lean_ctor_get(v___x_732_, 0);
lean_inc(v_a_733_);
if (lean_obj_tag(v_a_733_) == 0)
{
lean_dec(v_data_729_);
return v___x_732_;
}
else
{
lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_758_; 
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_758_ == 0)
{
lean_object* v_unused_759_; 
v_unused_759_ = lean_ctor_get(v___x_732_, 0);
lean_dec(v_unused_759_);
v___x_735_ = v___x_732_;
v_isShared_736_ = v_isSharedCheck_758_;
goto v_resetjp_734_;
}
else
{
lean_dec(v___x_732_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_758_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v_val_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_757_; 
v_val_737_ = lean_ctor_get(v_a_733_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v_a_733_);
if (v_isSharedCheck_757_ == 0)
{
v___x_739_ = v_a_733_;
v_isShared_740_ = v_isSharedCheck_757_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_val_737_);
lean_dec(v_a_733_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_757_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v_fst_741_; lean_object* v_snd_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_756_; 
v_fst_741_ = lean_ctor_get(v_val_737_, 0);
v_snd_742_ = lean_ctor_get(v_val_737_, 1);
v_isSharedCheck_756_ = !lean_is_exclusive(v_val_737_);
if (v_isSharedCheck_756_ == 0)
{
v___x_744_ = v_val_737_;
v_isShared_745_ = v_isSharedCheck_756_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_snd_742_);
lean_inc(v_fst_741_);
lean_dec(v_val_737_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_756_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_746_; lean_object* v___x_748_; 
v___x_746_ = l_Lean_Expr_mdata___override(v_data_729_, v_fst_741_);
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 0, v___x_746_);
v___x_748_ = v___x_744_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v___x_746_);
lean_ctor_set(v_reuseFailAlloc_755_, 1, v_snd_742_);
v___x_748_ = v_reuseFailAlloc_755_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
lean_object* v___x_750_; 
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 0, v___x_748_);
v___x_750_ = v___x_739_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v___x_748_);
v___x_750_ = v_reuseFailAlloc_754_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
lean_object* v___x_752_; 
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 0, v___x_750_);
v___x_752_ = v___x_735_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v___x_750_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
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
lean_dec(v_data_729_);
return v___x_732_;
}
}
else
{
lean_object* v___x_760_; lean_object* v___x_762_; 
lean_dec_ref(v_lhs_453_);
lean_dec(v_snd_530_);
lean_dec_ref(v_rhs_454_);
v___x_760_ = lean_box(0);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_760_);
v___x_762_ = v___x_519_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v___x_760_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
case 11:
{
if (lean_obj_tag(v_rhs_454_) == 11)
{
lean_object* v_typeName_764_; lean_object* v_idx_765_; lean_object* v_struct_766_; lean_object* v_typeName_767_; lean_object* v_idx_768_; lean_object* v_struct_769_; uint8_t v___x_770_; 
lean_del_object(v___x_519_);
v_typeName_764_ = lean_ctor_get(v_lhs_453_, 0);
lean_inc(v_typeName_764_);
v_idx_765_ = lean_ctor_get(v_lhs_453_, 1);
lean_inc(v_idx_765_);
v_struct_766_ = lean_ctor_get(v_lhs_453_, 2);
lean_inc_ref(v_struct_766_);
lean_dec_ref(v_lhs_453_);
v_typeName_767_ = lean_ctor_get(v_rhs_454_, 0);
lean_inc(v_typeName_767_);
v_idx_768_ = lean_ctor_get(v_rhs_454_, 1);
lean_inc(v_idx_768_);
v_struct_769_ = lean_ctor_get(v_rhs_454_, 2);
lean_inc_ref(v_struct_769_);
lean_dec_ref(v_rhs_454_);
v___x_770_ = lean_name_eq(v_typeName_764_, v_typeName_767_);
lean_dec(v_typeName_767_);
if (v___x_770_ == 0)
{
lean_dec(v_idx_768_);
v___y_469_ = v_typeName_764_;
v___y_470_ = v___y_545_;
v___y_471_ = v___y_536_;
v___y_472_ = v___y_537_;
v___y_473_ = v___y_535_;
v___y_474_ = v___y_540_;
v___y_475_ = v___y_543_;
v___y_476_ = v___y_544_;
v___y_477_ = v_idx_765_;
v___y_478_ = v___y_538_;
v___y_479_ = v_snd_530_;
v___y_480_ = v___y_542_;
v___y_481_ = v_struct_769_;
v___y_482_ = v___y_539_;
v___y_483_ = v___y_541_;
v___y_484_ = v_struct_766_;
v___y_485_ = v___x_770_;
goto v___jp_468_;
}
else
{
uint8_t v___x_771_; 
v___x_771_ = lean_nat_dec_eq(v_idx_765_, v_idx_768_);
lean_dec(v_idx_768_);
v___y_469_ = v_typeName_764_;
v___y_470_ = v___y_545_;
v___y_471_ = v___y_536_;
v___y_472_ = v___y_537_;
v___y_473_ = v___y_535_;
v___y_474_ = v___y_540_;
v___y_475_ = v___y_543_;
v___y_476_ = v___y_544_;
v___y_477_ = v_idx_765_;
v___y_478_ = v___y_538_;
v___y_479_ = v_snd_530_;
v___y_480_ = v___y_542_;
v___y_481_ = v_struct_769_;
v___y_482_ = v___y_539_;
v___y_483_ = v___y_541_;
v___y_484_ = v_struct_766_;
v___y_485_ = v___x_771_;
goto v___jp_468_;
}
}
else
{
lean_object* v___x_772_; lean_object* v___x_774_; 
lean_dec_ref(v_lhs_453_);
lean_dec(v_snd_530_);
lean_dec_ref(v_rhs_454_);
v___x_772_ = lean_box(0);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_772_);
v___x_774_ = v___x_519_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v___x_772_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
default: 
{
lean_object* v___x_776_; lean_object* v___x_778_; 
lean_dec(v_snd_530_);
lean_dec_ref(v_rhs_454_);
lean_dec_ref(v_lhs_453_);
v___x_776_ = lean_box(0);
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 0, v___x_776_);
v___x_778_ = v___x_519_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v___x_776_);
v___x_778_ = v_reuseFailAlloc_779_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
return v___x_778_;
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
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
lean_dec_ref(v_rhs_454_);
lean_dec_ref(v_lhs_453_);
v_a_877_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_516_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_516_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
v___jp_468_:
{
if (v___y_485_ == 0)
{
lean_object* v___x_486_; lean_object* v___x_487_; 
lean_dec_ref(v___y_484_);
lean_dec_ref(v___y_481_);
lean_dec_ref(v___y_479_);
lean_dec(v___y_477_);
lean_dec(v___y_469_);
v___x_486_ = lean_box(0);
v___x_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
return v___x_487_;
}
else
{
lean_object* v___x_488_; 
v___x_488_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go(v___y_484_, v___y_481_, v___y_473_, v___y_479_, v___y_471_, v___y_472_, v___y_478_, v___y_482_, v___y_474_, v___y_483_, v___y_480_, v___y_475_, v___y_476_, v___y_470_);
if (lean_obj_tag(v___x_488_) == 0)
{
lean_object* v_a_489_; 
v_a_489_ = lean_ctor_get(v___x_488_, 0);
lean_inc(v_a_489_);
if (lean_obj_tag(v_a_489_) == 0)
{
lean_dec(v___y_477_);
lean_dec(v___y_469_);
return v___x_488_;
}
else
{
lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_514_; 
v_isSharedCheck_514_ = !lean_is_exclusive(v___x_488_);
if (v_isSharedCheck_514_ == 0)
{
lean_object* v_unused_515_; 
v_unused_515_ = lean_ctor_get(v___x_488_, 0);
lean_dec(v_unused_515_);
v___x_491_ = v___x_488_;
v_isShared_492_ = v_isSharedCheck_514_;
goto v_resetjp_490_;
}
else
{
lean_dec(v___x_488_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_514_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v_val_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_513_; 
v_val_493_ = lean_ctor_get(v_a_489_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v_a_489_);
if (v_isSharedCheck_513_ == 0)
{
v___x_495_ = v_a_489_;
v_isShared_496_ = v_isSharedCheck_513_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_val_493_);
lean_dec(v_a_489_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_513_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v_fst_497_; lean_object* v_snd_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_512_; 
v_fst_497_ = lean_ctor_get(v_val_493_, 0);
v_snd_498_ = lean_ctor_get(v_val_493_, 1);
v_isSharedCheck_512_ = !lean_is_exclusive(v_val_493_);
if (v_isSharedCheck_512_ == 0)
{
v___x_500_ = v_val_493_;
v_isShared_501_ = v_isSharedCheck_512_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_snd_498_);
lean_inc(v_fst_497_);
lean_dec(v_val_493_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_512_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_502_; lean_object* v___x_504_; 
v___x_502_ = l_Lean_Expr_proj___override(v___y_469_, v___y_477_, v_fst_497_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 0, v___x_502_);
v___x_504_ = v___x_500_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v___x_502_);
lean_ctor_set(v_reuseFailAlloc_511_, 1, v_snd_498_);
v___x_504_ = v_reuseFailAlloc_511_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
lean_object* v___x_506_; 
if (v_isShared_496_ == 0)
{
lean_ctor_set(v___x_495_, 0, v___x_504_);
v___x_506_ = v___x_495_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v___x_504_);
v___x_506_ = v_reuseFailAlloc_510_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
lean_object* v___x_508_; 
if (v_isShared_492_ == 0)
{
lean_ctor_set(v___x_491_, 0, v___x_506_);
v___x_508_ = v___x_491_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v___x_506_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
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
lean_dec(v___y_477_);
lean_dec(v___y_469_);
return v___x_488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go(lean_object* v_lhs_885_, lean_object* v_rhs_886_, lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_){
_start:
{
uint8_t v___x_900_; 
v___x_900_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_lhs_885_, v_rhs_886_);
if (v___x_900_ == 0)
{
lean_object* v_cache_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v_cache_901_ = lean_ctor_get(v_a_888_, 0);
lean_inc_ref(v_rhs_886_);
lean_inc_ref(v_lhs_885_);
v___x_902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_902_, 0, v_lhs_885_);
lean_ctor_set(v___x_902_, 1, v_rhs_886_);
v___x_903_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1___redArg(v_cache_901_, v___x_902_);
if (lean_obj_tag(v___x_903_) == 1)
{
lean_object* v_val_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_913_; 
lean_dec_ref(v___x_902_);
lean_dec_ref(v_rhs_886_);
lean_dec_ref(v_lhs_885_);
v_val_904_ = lean_ctor_get(v___x_903_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_903_);
if (v_isSharedCheck_913_ == 0)
{
v___x_906_ = v___x_903_;
v_isShared_907_ = v_isSharedCheck_913_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_val_904_);
lean_dec(v___x_903_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_913_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_908_; lean_object* v___x_910_; 
v___x_908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_908_, 0, v_val_904_);
lean_ctor_set(v___x_908_, 1, v_a_888_);
if (v_isShared_907_ == 0)
{
lean_ctor_set(v___x_906_, 0, v___x_908_);
v___x_910_ = v___x_906_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v___x_908_);
v___x_910_ = v_reuseFailAlloc_912_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
lean_object* v___x_911_; 
v___x_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
return v___x_911_;
}
}
}
else
{
lean_object* v___x_914_; 
lean_dec(v___x_903_);
v___x_914_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_goCore(v_lhs_885_, v_rhs_886_, v_a_887_, v_a_888_, v_a_889_, v_a_890_, v_a_891_, v_a_892_, v_a_893_, v_a_894_, v_a_895_, v_a_896_, v_a_897_, v_a_898_);
if (lean_obj_tag(v___x_914_) == 0)
{
lean_object* v_a_915_; 
v_a_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc(v_a_915_);
if (lean_obj_tag(v_a_915_) == 0)
{
lean_dec_ref(v___x_902_);
return v___x_914_;
}
else
{
lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_951_; 
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_951_ == 0)
{
lean_object* v_unused_952_; 
v_unused_952_ = lean_ctor_get(v___x_914_, 0);
lean_dec(v_unused_952_);
v___x_917_ = v___x_914_;
v_isShared_918_ = v_isSharedCheck_951_;
goto v_resetjp_916_;
}
else
{
lean_dec(v___x_914_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_951_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v_val_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_950_; 
v_val_919_ = lean_ctor_get(v_a_915_, 0);
v_isSharedCheck_950_ = !lean_is_exclusive(v_a_915_);
if (v_isSharedCheck_950_ == 0)
{
v___x_921_ = v_a_915_;
v_isShared_922_ = v_isSharedCheck_950_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_val_919_);
lean_dec(v_a_915_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_950_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
lean_object* v_snd_923_; lean_object* v_fst_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_949_; 
v_snd_923_ = lean_ctor_get(v_val_919_, 1);
v_fst_924_ = lean_ctor_get(v_val_919_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v_val_919_);
if (v_isSharedCheck_949_ == 0)
{
v___x_926_ = v_val_919_;
v_isShared_927_ = v_isSharedCheck_949_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_snd_923_);
lean_inc(v_fst_924_);
lean_dec(v_val_919_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_949_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v_cache_928_; lean_object* v_varTypes_929_; lean_object* v_lhss_930_; lean_object* v_rhss_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_948_; 
v_cache_928_ = lean_ctor_get(v_snd_923_, 0);
v_varTypes_929_ = lean_ctor_get(v_snd_923_, 1);
v_lhss_930_ = lean_ctor_get(v_snd_923_, 2);
v_rhss_931_ = lean_ctor_get(v_snd_923_, 3);
v_isSharedCheck_948_ = !lean_is_exclusive(v_snd_923_);
if (v_isSharedCheck_948_ == 0)
{
v___x_933_ = v_snd_923_;
v_isShared_934_ = v_isSharedCheck_948_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_rhss_931_);
lean_inc(v_lhss_930_);
lean_inc(v_varTypes_929_);
lean_inc(v_cache_928_);
lean_dec(v_snd_923_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_948_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_935_; lean_object* v___x_937_; 
lean_inc(v_fst_924_);
v___x_935_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2___redArg(v_cache_928_, v___x_902_, v_fst_924_);
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 0, v___x_935_);
v___x_937_ = v___x_933_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v___x_935_);
lean_ctor_set(v_reuseFailAlloc_947_, 1, v_varTypes_929_);
lean_ctor_set(v_reuseFailAlloc_947_, 2, v_lhss_930_);
lean_ctor_set(v_reuseFailAlloc_947_, 3, v_rhss_931_);
v___x_937_ = v_reuseFailAlloc_947_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
lean_object* v___x_939_; 
if (v_isShared_927_ == 0)
{
lean_ctor_set(v___x_926_, 1, v___x_937_);
v___x_939_ = v___x_926_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_fst_924_);
lean_ctor_set(v_reuseFailAlloc_946_, 1, v___x_937_);
v___x_939_ = v_reuseFailAlloc_946_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
lean_object* v___x_941_; 
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 0, v___x_939_);
v___x_941_ = v___x_921_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v___x_939_);
v___x_941_ = v_reuseFailAlloc_945_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
lean_object* v___x_943_; 
if (v_isShared_918_ == 0)
{
lean_ctor_set(v___x_917_, 0, v___x_941_);
v___x_943_ = v___x_917_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v___x_941_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
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
lean_dec_ref(v___x_902_);
return v___x_914_;
}
}
}
else
{
lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
lean_dec_ref(v_rhs_886_);
v___x_953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_953_, 0, v_lhs_885_);
lean_ctor_set(v___x_953_, 1, v_a_888_);
v___x_954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_954_, 0, v___x_953_);
v___x_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_955_, 0, v___x_954_);
return v___x_955_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go___boxed(lean_object* v_lhs_956_, lean_object* v_rhs_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_){
_start:
{
lean_object* v_res_971_; 
v_res_971_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go(v_lhs_956_, v_rhs_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_, v_a_965_, v_a_966_, v_a_967_, v_a_968_, v_a_969_);
lean_dec(v_a_969_);
lean_dec_ref(v_a_968_);
lean_dec(v_a_967_);
lean_dec_ref(v_a_966_);
lean_dec(v_a_965_);
lean_dec_ref(v_a_964_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec(v_a_960_);
lean_dec(v_a_958_);
return v_res_971_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_goCore___boxed(lean_object* v_lhs_972_, lean_object* v_rhs_973_, lean_object* v_a_974_, lean_object* v_a_975_, lean_object* v_a_976_, lean_object* v_a_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_){
_start:
{
lean_object* v_res_987_; 
v_res_987_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_goCore(v_lhs_972_, v_rhs_973_, v_a_974_, v_a_975_, v_a_976_, v_a_977_, v_a_978_, v_a_979_, v_a_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_, v_a_985_);
lean_dec(v_a_985_);
lean_dec_ref(v_a_984_);
lean_dec(v_a_983_);
lean_dec_ref(v_a_982_);
lean_dec(v_a_981_);
lean_dec_ref(v_a_980_);
lean_dec(v_a_979_);
lean_dec_ref(v_a_978_);
lean_dec(v_a_977_);
lean_dec(v_a_976_);
lean_dec(v_a_974_);
return v_res_987_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1(lean_object* v_00_u03b2_988_, lean_object* v_m_989_, lean_object* v_a_990_){
_start:
{
lean_object* v___x_991_; 
v___x_991_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1___redArg(v_m_989_, v_a_990_);
return v___x_991_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1___boxed(lean_object* v_00_u03b2_992_, lean_object* v_m_993_, lean_object* v_a_994_){
_start:
{
lean_object* v_res_995_; 
v_res_995_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1(v_00_u03b2_992_, v_m_993_, v_a_994_);
lean_dec_ref(v_a_994_);
lean_dec_ref(v_m_993_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2(lean_object* v_00_u03b2_996_, lean_object* v_m_997_, lean_object* v_a_998_, lean_object* v_b_999_){
_start:
{
lean_object* v___x_1000_; 
v___x_1000_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2___redArg(v_m_997_, v_a_998_, v_b_999_);
return v___x_1000_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1_spec__1(lean_object* v_00_u03b2_1001_, lean_object* v_a_1002_, lean_object* v_x_1003_){
_start:
{
lean_object* v___x_1004_; 
v___x_1004_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1_spec__1___redArg(v_a_1002_, v_x_1003_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1_spec__1___boxed(lean_object* v_00_u03b2_1005_, lean_object* v_a_1006_, lean_object* v_x_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__1_spec__1(v_00_u03b2_1005_, v_a_1006_, v_x_1007_);
lean_dec(v_x_1007_);
lean_dec_ref(v_a_1006_);
return v_res_1008_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__3(lean_object* v_00_u03b2_1009_, lean_object* v_a_1010_, lean_object* v_x_1011_){
_start:
{
uint8_t v___x_1012_; 
v___x_1012_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__3___redArg(v_a_1010_, v_x_1011_);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__3___boxed(lean_object* v_00_u03b2_1013_, lean_object* v_a_1014_, lean_object* v_x_1015_){
_start:
{
uint8_t v_res_1016_; lean_object* v_r_1017_; 
v_res_1016_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__3(v_00_u03b2_1013_, v_a_1014_, v_x_1015_);
lean_dec(v_x_1015_);
lean_dec_ref(v_a_1014_);
v_r_1017_ = lean_box(v_res_1016_);
return v_r_1017_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__4(lean_object* v_00_u03b2_1018_, lean_object* v_data_1019_){
_start:
{
lean_object* v___x_1020_; 
v___x_1020_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__4___redArg(v_data_1019_);
return v___x_1020_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__5(lean_object* v_00_u03b2_1021_, lean_object* v_a_1022_, lean_object* v_b_1023_, lean_object* v_x_1024_){
_start:
{
lean_object* v___x_1025_; 
v___x_1025_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__5___redArg(v_a_1022_, v_b_1023_, v_x_1024_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_1026_, lean_object* v_i_1027_, lean_object* v_source_1028_, lean_object* v_target_1029_){
_start:
{
lean_object* v___x_1030_; 
v___x_1030_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__4_spec__5___redArg(v_i_1027_, v_source_1028_, v_target_1029_);
return v___x_1030_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_1031_, lean_object* v_x_1032_, lean_object* v_x_1033_){
_start:
{
lean_object* v___x_1034_; 
v___x_1034_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go_spec__2_spec__4_spec__5_spec__6___redArg(v_x_1032_, v_x_1033_);
return v___x_1034_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__0(void){
_start:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1035_ = lean_box(0);
v___x_1036_ = lean_unsigned_to_nat(16u);
v___x_1037_ = lean_mk_array(v___x_1036_, v___x_1035_);
return v___x_1037_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__1(void){
_start:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1038_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__0, &l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__0);
v___x_1039_ = lean_unsigned_to_nat(0u);
v___x_1040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1039_);
lean_ctor_set(v___x_1040_, 1, v___x_1038_);
return v___x_1040_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__3(void){
_start:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1043_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__2));
v___x_1044_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__1, &l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__1);
v___x_1045_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1044_);
lean_ctor_set(v___x_1045_, 1, v___x_1043_);
lean_ctor_set(v___x_1045_, 2, v___x_1043_);
lean_ctor_set(v___x_1045_, 3, v___x_1043_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f(lean_object* v_lhs_1053_, lean_object* v_rhs_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_){
_start:
{
lean_object* v___x_1066_; 
v___x_1066_ = l_Lean_Meta_Sym_shareCommon___redArg(v_lhs_1053_, v_a_1060_);
if (lean_obj_tag(v___x_1066_) == 0)
{
lean_object* v_a_1067_; lean_object* v___x_1068_; 
v_a_1067_ = lean_ctor_get(v___x_1066_, 0);
lean_inc(v_a_1067_);
lean_dec_ref(v___x_1066_);
v___x_1068_ = l_Lean_Meta_Sym_shareCommon___redArg(v_rhs_1054_, v_a_1060_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v_a_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
lean_inc(v_a_1069_);
lean_dec_ref(v___x_1068_);
v___x_1070_ = lean_unsigned_to_nat(0u);
v___x_1071_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__3, &l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__3);
v___x_1072_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f_go(v_a_1067_, v_a_1069_, v___x_1070_, v___x_1071_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_, v_a_1060_, v_a_1061_, v_a_1062_, v_a_1063_, v_a_1064_);
if (lean_obj_tag(v___x_1072_) == 0)
{
lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1142_; 
v_a_1073_ = lean_ctor_get(v___x_1072_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1075_ = v___x_1072_;
v_isShared_1076_ = v_isSharedCheck_1142_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1072_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1142_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
if (lean_obj_tag(v_a_1073_) == 1)
{
lean_object* v_val_1077_; lean_object* v___x_1079_; uint8_t v_isShared_1080_; uint8_t v_isSharedCheck_1137_; 
v_val_1077_ = lean_ctor_get(v_a_1073_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v_a_1073_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1079_ = v_a_1073_;
v_isShared_1080_ = v_isSharedCheck_1137_;
goto v_resetjp_1078_;
}
else
{
lean_inc(v_val_1077_);
lean_dec(v_a_1073_);
v___x_1079_ = lean_box(0);
v_isShared_1080_ = v_isSharedCheck_1137_;
goto v_resetjp_1078_;
}
v_resetjp_1078_:
{
lean_object* v_snd_1081_; lean_object* v_fst_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1136_; 
v_snd_1081_ = lean_ctor_get(v_val_1077_, 1);
v_fst_1082_ = lean_ctor_get(v_val_1077_, 0);
v_isSharedCheck_1136_ = !lean_is_exclusive(v_val_1077_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1084_ = v_val_1077_;
v_isShared_1085_ = v_isSharedCheck_1136_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_snd_1081_);
lean_inc(v_fst_1082_);
lean_dec(v_val_1077_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1136_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v_varTypes_1086_; lean_object* v_lhss_1087_; lean_object* v_rhss_1088_; lean_object* v___x_1089_; uint8_t v___x_1090_; 
v_varTypes_1086_ = lean_ctor_get(v_snd_1081_, 1);
lean_inc_ref(v_varTypes_1086_);
v_lhss_1087_ = lean_ctor_get(v_snd_1081_, 2);
lean_inc_ref(v_lhss_1087_);
v_rhss_1088_ = lean_ctor_get(v_snd_1081_, 3);
lean_inc_ref(v_rhss_1088_);
lean_dec(v_snd_1081_);
v___x_1089_ = lean_array_get_size(v_lhss_1087_);
v___x_1090_ = lean_nat_dec_eq(v___x_1089_, v___x_1070_);
if (v___x_1090_ == 0)
{
lean_object* v___x_1091_; lean_object* v___x_1092_; 
lean_del_object(v___x_1075_);
v___x_1091_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_mkLambdaWithBodyAndVarType(v_varTypes_1086_, v_fst_1082_);
lean_dec_ref(v_varTypes_1086_);
lean_inc(v_a_1064_);
lean_inc_ref(v_a_1063_);
lean_inc(v_a_1062_);
lean_inc_ref(v_a_1061_);
lean_inc_ref(v___x_1091_);
v___x_1092_ = lean_infer_type(v___x_1091_, v_a_1061_, v_a_1062_, v_a_1063_, v_a_1064_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; lean_object* v___x_1094_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
lean_inc_n(v_a_1093_, 2);
lean_dec_ref(v___x_1092_);
v___x_1094_ = l_Lean_Meta_getLevel(v_a_1093_, v_a_1061_, v_a_1062_, v_a_1063_, v_a_1064_);
if (lean_obj_tag(v___x_1094_) == 0)
{
lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1115_; 
v_a_1095_ = lean_ctor_get(v___x_1094_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1094_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1097_ = v___x_1094_;
v_isShared_1098_ = v_isSharedCheck_1115_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_dec(v___x_1094_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1115_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1107_; 
v___x_1099_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___closed__7));
v___x_1100_ = lean_box(0);
v___x_1101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1101_, 0, v_a_1095_);
lean_ctor_set(v___x_1101_, 1, v___x_1100_);
v___x_1102_ = l_Lean_Expr_const___override(v___x_1099_, v___x_1101_);
v___x_1103_ = l_Lean_mkAppB(v___x_1102_, v_a_1093_, v___x_1091_);
lean_inc_ref(v___x_1103_);
v___x_1104_ = l_Lean_mkAppN(v___x_1103_, v_lhss_1087_);
lean_dec_ref(v_lhss_1087_);
v___x_1105_ = l_Lean_mkAppN(v___x_1103_, v_rhss_1088_);
lean_dec_ref(v_rhss_1088_);
if (v_isShared_1085_ == 0)
{
lean_ctor_set(v___x_1084_, 1, v___x_1105_);
lean_ctor_set(v___x_1084_, 0, v___x_1104_);
v___x_1107_ = v___x_1084_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v___x_1104_);
lean_ctor_set(v_reuseFailAlloc_1114_, 1, v___x_1105_);
v___x_1107_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
lean_object* v___x_1109_; 
if (v_isShared_1080_ == 0)
{
lean_ctor_set(v___x_1079_, 0, v___x_1107_);
v___x_1109_ = v___x_1079_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v___x_1107_);
v___x_1109_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
lean_object* v___x_1111_; 
if (v_isShared_1098_ == 0)
{
lean_ctor_set(v___x_1097_, 0, v___x_1109_);
v___x_1111_ = v___x_1097_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v___x_1109_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
}
}
}
else
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1123_; 
lean_dec(v_a_1093_);
lean_dec_ref(v___x_1091_);
lean_dec_ref(v_rhss_1088_);
lean_dec_ref(v_lhss_1087_);
lean_del_object(v___x_1084_);
lean_del_object(v___x_1079_);
v_a_1116_ = lean_ctor_get(v___x_1094_, 0);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1094_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1118_ = v___x_1094_;
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1094_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1121_; 
if (v_isShared_1119_ == 0)
{
v___x_1121_ = v___x_1118_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v_a_1116_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
}
else
{
lean_object* v_a_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1131_; 
lean_dec_ref(v___x_1091_);
lean_dec_ref(v_rhss_1088_);
lean_dec_ref(v_lhss_1087_);
lean_del_object(v___x_1084_);
lean_del_object(v___x_1079_);
v_a_1124_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1131_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1126_ = v___x_1092_;
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_a_1124_);
lean_dec(v___x_1092_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1129_; 
if (v_isShared_1127_ == 0)
{
v___x_1129_ = v___x_1126_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v_a_1124_);
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
else
{
lean_object* v___x_1132_; lean_object* v___x_1134_; 
lean_dec_ref(v_rhss_1088_);
lean_dec_ref(v_lhss_1087_);
lean_dec_ref(v_varTypes_1086_);
lean_del_object(v___x_1084_);
lean_dec(v_fst_1082_);
lean_del_object(v___x_1079_);
v___x_1132_ = lean_box(0);
if (v_isShared_1076_ == 0)
{
lean_ctor_set(v___x_1075_, 0, v___x_1132_);
v___x_1134_ = v___x_1075_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v___x_1132_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
}
}
}
}
else
{
lean_object* v___x_1138_; lean_object* v___x_1140_; 
lean_dec(v_a_1073_);
v___x_1138_ = lean_box(0);
if (v_isShared_1076_ == 0)
{
lean_ctor_set(v___x_1075_, 0, v___x_1138_);
v___x_1140_ = v___x_1075_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v___x_1138_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
}
else
{
lean_object* v_a_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1150_; 
v_a_1143_ = lean_ctor_get(v___x_1072_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1145_ = v___x_1072_;
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_a_1143_);
lean_dec(v___x_1072_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; 
if (v_isShared_1146_ == 0)
{
v___x_1148_ = v___x_1145_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_a_1143_);
v___x_1148_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
return v___x_1148_;
}
}
}
}
else
{
lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1158_; 
lean_dec(v_a_1067_);
v_a_1151_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1153_ = v___x_1068_;
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1068_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1156_; 
if (v_isShared_1154_ == 0)
{
v___x_1156_ = v___x_1153_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_a_1151_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
}
else
{
lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1166_; 
lean_dec_ref(v_rhs_1054_);
v_a_1159_ = lean_ctor_get(v___x_1066_, 0);
v_isSharedCheck_1166_ = !lean_is_exclusive(v___x_1066_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1161_ = v___x_1066_;
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_dec(v___x_1066_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1164_; 
if (v_isShared_1162_ == 0)
{
v___x_1164_ = v___x_1161_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_a_1159_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f___boxed(lean_object* v_lhs_1167_, lean_object* v_rhs_1168_, lean_object* v_a_1169_, lean_object* v_a_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_){
_start:
{
lean_object* v_res_1180_; 
v_res_1180_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f(v_lhs_1167_, v_rhs_1168_, v_a_1169_, v_a_1170_, v_a_1171_, v_a_1172_, v_a_1173_, v_a_1174_, v_a_1175_, v_a_1176_, v_a_1177_, v_a_1178_);
lean_dec(v_a_1178_);
lean_dec_ref(v_a_1177_);
lean_dec(v_a_1176_);
lean_dec_ref(v_a_1175_);
lean_dec(v_a_1174_);
lean_dec_ref(v_a_1173_);
lean_dec(v_a_1172_);
lean_dec_ref(v_a_1171_);
lean_dec(v_a_1170_);
lean_dec(v_a_1169_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0___redArg(lean_object* v_cls_1184_, lean_object* v___y_1185_){
_start:
{
lean_object* v_options_1187_; uint8_t v_hasTrace_1188_; 
v_options_1187_ = lean_ctor_get(v___y_1185_, 2);
v_hasTrace_1188_ = lean_ctor_get_uint8(v_options_1187_, sizeof(void*)*1);
if (v_hasTrace_1188_ == 0)
{
lean_object* v___x_1189_; lean_object* v___x_1190_; 
lean_dec(v_cls_1184_);
v___x_1189_ = lean_box(v_hasTrace_1188_);
v___x_1190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
return v___x_1190_;
}
else
{
lean_object* v_inheritedTraceOptions_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; uint8_t v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; 
v_inheritedTraceOptions_1191_ = lean_ctor_get(v___y_1185_, 13);
v___x_1192_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0___redArg___closed__1));
v___x_1193_ = l_Lean_Name_append(v___x_1192_, v_cls_1184_);
v___x_1194_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1191_, v_options_1187_, v___x_1193_);
lean_dec(v___x_1193_);
v___x_1195_ = lean_box(v___x_1194_);
v___x_1196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1196_, 0, v___x_1195_);
return v___x_1196_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0___redArg___boxed(lean_object* v_cls_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0___redArg(v_cls_1197_, v___y_1198_);
lean_dec_ref(v___y_1198_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0(lean_object* v_cls_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0___redArg(v_cls_1201_, v___y_1210_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0___boxed(lean_object* v_cls_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v_res_1226_; 
v_res_1226_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0(v_cls_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec(v___y_1215_);
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1_spec__1(lean_object* v_msgData_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_){
_start:
{
lean_object* v___x_1233_; lean_object* v_env_1234_; lean_object* v___x_1235_; lean_object* v_mctx_1236_; lean_object* v_lctx_1237_; lean_object* v_options_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
v___x_1233_ = lean_st_ref_get(v___y_1231_);
v_env_1234_ = lean_ctor_get(v___x_1233_, 0);
lean_inc_ref(v_env_1234_);
lean_dec(v___x_1233_);
v___x_1235_ = lean_st_ref_get(v___y_1229_);
v_mctx_1236_ = lean_ctor_get(v___x_1235_, 0);
lean_inc_ref(v_mctx_1236_);
lean_dec(v___x_1235_);
v_lctx_1237_ = lean_ctor_get(v___y_1228_, 2);
v_options_1238_ = lean_ctor_get(v___y_1230_, 2);
lean_inc_ref(v_options_1238_);
lean_inc_ref(v_lctx_1237_);
v___x_1239_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1239_, 0, v_env_1234_);
lean_ctor_set(v___x_1239_, 1, v_mctx_1236_);
lean_ctor_set(v___x_1239_, 2, v_lctx_1237_);
lean_ctor_set(v___x_1239_, 3, v_options_1238_);
v___x_1240_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1239_);
lean_ctor_set(v___x_1240_, 1, v_msgData_1227_);
v___x_1241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1240_);
return v___x_1241_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1_spec__1___boxed(lean_object* v_msgData_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1_spec__1(v_msgData_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_);
lean_dec(v___y_1246_);
lean_dec_ref(v___y_1245_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
return v_res_1248_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1249_; double v___x_1250_; 
v___x_1249_ = lean_unsigned_to_nat(0u);
v___x_1250_ = lean_float_of_nat(v___x_1249_);
return v___x_1250_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg(lean_object* v_cls_1254_, lean_object* v_msg_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_){
_start:
{
lean_object* v_ref_1261_; lean_object* v___x_1262_; lean_object* v_a_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1307_; 
v_ref_1261_ = lean_ctor_get(v___y_1258_, 5);
v___x_1262_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1_spec__1(v_msg_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_);
v_a_1263_ = lean_ctor_get(v___x_1262_, 0);
v_isSharedCheck_1307_ = !lean_is_exclusive(v___x_1262_);
if (v_isSharedCheck_1307_ == 0)
{
v___x_1265_ = v___x_1262_;
v_isShared_1266_ = v_isSharedCheck_1307_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_a_1263_);
lean_dec(v___x_1262_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1307_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1267_; lean_object* v_traceState_1268_; lean_object* v_env_1269_; lean_object* v_nextMacroScope_1270_; lean_object* v_ngen_1271_; lean_object* v_auxDeclNGen_1272_; lean_object* v_cache_1273_; lean_object* v_messages_1274_; lean_object* v_infoState_1275_; lean_object* v_snapshotTasks_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1306_; 
v___x_1267_ = lean_st_ref_take(v___y_1259_);
v_traceState_1268_ = lean_ctor_get(v___x_1267_, 4);
v_env_1269_ = lean_ctor_get(v___x_1267_, 0);
v_nextMacroScope_1270_ = lean_ctor_get(v___x_1267_, 1);
v_ngen_1271_ = lean_ctor_get(v___x_1267_, 2);
v_auxDeclNGen_1272_ = lean_ctor_get(v___x_1267_, 3);
v_cache_1273_ = lean_ctor_get(v___x_1267_, 5);
v_messages_1274_ = lean_ctor_get(v___x_1267_, 6);
v_infoState_1275_ = lean_ctor_get(v___x_1267_, 7);
v_snapshotTasks_1276_ = lean_ctor_get(v___x_1267_, 8);
v_isSharedCheck_1306_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1306_ == 0)
{
v___x_1278_ = v___x_1267_;
v_isShared_1279_ = v_isSharedCheck_1306_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_snapshotTasks_1276_);
lean_inc(v_infoState_1275_);
lean_inc(v_messages_1274_);
lean_inc(v_cache_1273_);
lean_inc(v_traceState_1268_);
lean_inc(v_auxDeclNGen_1272_);
lean_inc(v_ngen_1271_);
lean_inc(v_nextMacroScope_1270_);
lean_inc(v_env_1269_);
lean_dec(v___x_1267_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1306_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
uint64_t v_tid_1280_; lean_object* v_traces_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1305_; 
v_tid_1280_ = lean_ctor_get_uint64(v_traceState_1268_, sizeof(void*)*1);
v_traces_1281_ = lean_ctor_get(v_traceState_1268_, 0);
v_isSharedCheck_1305_ = !lean_is_exclusive(v_traceState_1268_);
if (v_isSharedCheck_1305_ == 0)
{
v___x_1283_ = v_traceState_1268_;
v_isShared_1284_ = v_isSharedCheck_1305_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_traces_1281_);
lean_dec(v_traceState_1268_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1305_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
lean_object* v___x_1285_; double v___x_1286_; uint8_t v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1295_; 
v___x_1285_ = lean_box(0);
v___x_1286_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg___closed__0);
v___x_1287_ = 0;
v___x_1288_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg___closed__1));
v___x_1289_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1289_, 0, v_cls_1254_);
lean_ctor_set(v___x_1289_, 1, v___x_1285_);
lean_ctor_set(v___x_1289_, 2, v___x_1288_);
lean_ctor_set_float(v___x_1289_, sizeof(void*)*3, v___x_1286_);
lean_ctor_set_float(v___x_1289_, sizeof(void*)*3 + 8, v___x_1286_);
lean_ctor_set_uint8(v___x_1289_, sizeof(void*)*3 + 16, v___x_1287_);
v___x_1290_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg___closed__2));
v___x_1291_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1289_);
lean_ctor_set(v___x_1291_, 1, v_a_1263_);
lean_ctor_set(v___x_1291_, 2, v___x_1290_);
lean_inc(v_ref_1261_);
v___x_1292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1292_, 0, v_ref_1261_);
lean_ctor_set(v___x_1292_, 1, v___x_1291_);
v___x_1293_ = l_Lean_PersistentArray_push___redArg(v_traces_1281_, v___x_1292_);
if (v_isShared_1284_ == 0)
{
lean_ctor_set(v___x_1283_, 0, v___x_1293_);
v___x_1295_ = v___x_1283_;
goto v_reusejp_1294_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v___x_1293_);
lean_ctor_set_uint64(v_reuseFailAlloc_1304_, sizeof(void*)*1, v_tid_1280_);
v___x_1295_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1294_;
}
v_reusejp_1294_:
{
lean_object* v___x_1297_; 
if (v_isShared_1279_ == 0)
{
lean_ctor_set(v___x_1278_, 4, v___x_1295_);
v___x_1297_ = v___x_1278_;
goto v_reusejp_1296_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v_env_1269_);
lean_ctor_set(v_reuseFailAlloc_1303_, 1, v_nextMacroScope_1270_);
lean_ctor_set(v_reuseFailAlloc_1303_, 2, v_ngen_1271_);
lean_ctor_set(v_reuseFailAlloc_1303_, 3, v_auxDeclNGen_1272_);
lean_ctor_set(v_reuseFailAlloc_1303_, 4, v___x_1295_);
lean_ctor_set(v_reuseFailAlloc_1303_, 5, v_cache_1273_);
lean_ctor_set(v_reuseFailAlloc_1303_, 6, v_messages_1274_);
lean_ctor_set(v_reuseFailAlloc_1303_, 7, v_infoState_1275_);
lean_ctor_set(v_reuseFailAlloc_1303_, 8, v_snapshotTasks_1276_);
v___x_1297_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1296_;
}
v_reusejp_1296_:
{
lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1301_; 
v___x_1298_ = lean_st_ref_set(v___y_1259_, v___x_1297_);
v___x_1299_ = lean_box(0);
if (v_isShared_1266_ == 0)
{
lean_ctor_set(v___x_1265_, 0, v___x_1299_);
v___x_1301_ = v___x_1265_;
goto v_reusejp_1300_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v___x_1299_);
v___x_1301_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1300_;
}
v_reusejp_1300_:
{
return v___x_1301_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg___boxed(lean_object* v_cls_1308_, lean_object* v_msg_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_){
_start:
{
lean_object* v_res_1315_; 
v_res_1315_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg(v_cls_1308_, v_msg_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_);
lean_dec(v___y_1313_);
lean_dec_ref(v___y_1312_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
return v_res_1315_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__5(void){
_start:
{
lean_object* v___x_1324_; lean_object* v___x_1325_; 
v___x_1324_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__4));
v___x_1325_ = l_Lean_stringToMessageData(v___x_1324_);
return v___x_1325_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__7(void){
_start:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1327_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__6));
v___x_1328_ = l_Lean_stringToMessageData(v___x_1327_);
return v___x_1328_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__9(void){
_start:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; 
v___x_1330_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__8));
v___x_1331_ = l_Lean_stringToMessageData(v___x_1330_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract(lean_object* v_lhs_u2080_1332_, lean_object* v_rhs_u2080_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_, lean_object* v_a_1343_){
_start:
{
lean_object* v___x_1345_; 
v___x_1345_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_abstractGroundMismatches_x3f(v_lhs_u2080_1332_, v_rhs_u2080_1333_, v_a_1334_, v_a_1335_, v_a_1336_, v_a_1337_, v_a_1338_, v_a_1339_, v_a_1340_, v_a_1341_, v_a_1342_, v_a_1343_);
if (lean_obj_tag(v___x_1345_) == 0)
{
lean_object* v_a_1346_; lean_object* v___x_1348_; uint8_t v_isShared_1349_; uint8_t v_isSharedCheck_1468_; 
v_a_1346_ = lean_ctor_get(v___x_1345_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1345_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1348_ = v___x_1345_;
v_isShared_1349_ = v_isSharedCheck_1468_;
goto v_resetjp_1347_;
}
else
{
lean_inc(v_a_1346_);
lean_dec(v___x_1345_);
v___x_1348_ = lean_box(0);
v_isShared_1349_ = v_isSharedCheck_1468_;
goto v_resetjp_1347_;
}
v_resetjp_1347_:
{
if (lean_obj_tag(v_a_1346_) == 1)
{
lean_object* v_val_1350_; lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1463_; 
lean_del_object(v___x_1348_);
v_val_1350_ = lean_ctor_get(v_a_1346_, 0);
v_isSharedCheck_1463_ = !lean_is_exclusive(v_a_1346_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1352_ = v_a_1346_;
v_isShared_1353_ = v_isSharedCheck_1463_;
goto v_resetjp_1351_;
}
else
{
lean_inc(v_val_1350_);
lean_dec(v_a_1346_);
v___x_1352_ = lean_box(0);
v_isShared_1353_ = v_isSharedCheck_1463_;
goto v_resetjp_1351_;
}
v_resetjp_1351_:
{
lean_object* v_fst_1354_; lean_object* v_snd_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1462_; 
v_fst_1354_ = lean_ctor_get(v_val_1350_, 0);
v_snd_1355_ = lean_ctor_get(v_val_1350_, 1);
v_isSharedCheck_1462_ = !lean_is_exclusive(v_val_1350_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1357_ = v_val_1350_;
v_isShared_1358_ = v_isSharedCheck_1462_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_snd_1355_);
lean_inc(v_fst_1354_);
lean_dec(v_val_1350_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1462_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___y_1360_; lean_object* v___y_1361_; lean_object* v___y_1362_; lean_object* v___y_1363_; lean_object* v___y_1364_; lean_object* v___y_1365_; lean_object* v___y_1366_; lean_object* v___y_1367_; lean_object* v___y_1368_; lean_object* v___y_1369_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v_a_1440_; uint8_t v___x_1441_; 
v___x_1438_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__3));
v___x_1439_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0___redArg(v___x_1438_, v_a_1342_);
v_a_1440_ = lean_ctor_get(v___x_1439_, 0);
lean_inc(v_a_1440_);
lean_dec_ref(v___x_1439_);
v___x_1441_ = lean_unbox(v_a_1440_);
lean_dec(v_a_1440_);
if (v___x_1441_ == 0)
{
lean_del_object(v___x_1357_);
v___y_1360_ = v_a_1334_;
v___y_1361_ = v_a_1335_;
v___y_1362_ = v_a_1336_;
v___y_1363_ = v_a_1337_;
v___y_1364_ = v_a_1338_;
v___y_1365_ = v_a_1339_;
v___y_1366_ = v_a_1340_;
v___y_1367_ = v_a_1341_;
v___y_1368_ = v_a_1342_;
v___y_1369_ = v_a_1343_;
goto v___jp_1359_;
}
else
{
lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1445_; 
v___x_1442_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__5, &l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__5);
lean_inc(v_fst_1354_);
v___x_1443_ = l_Lean_MessageData_ofExpr(v_fst_1354_);
if (v_isShared_1358_ == 0)
{
lean_ctor_set_tag(v___x_1357_, 7);
lean_ctor_set(v___x_1357_, 1, v___x_1443_);
lean_ctor_set(v___x_1357_, 0, v___x_1442_);
v___x_1445_ = v___x_1357_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v___x_1442_);
lean_ctor_set(v_reuseFailAlloc_1461_, 1, v___x_1443_);
v___x_1445_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
v___x_1446_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__7, &l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__7);
v___x_1447_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1445_);
lean_ctor_set(v___x_1447_, 1, v___x_1446_);
lean_inc(v_snd_1355_);
v___x_1448_ = l_Lean_MessageData_ofExpr(v_snd_1355_);
v___x_1449_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1449_, 0, v___x_1447_);
lean_ctor_set(v___x_1449_, 1, v___x_1448_);
v___x_1450_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__9, &l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__9);
v___x_1451_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1451_, 0, v___x_1449_);
lean_ctor_set(v___x_1451_, 1, v___x_1450_);
v___x_1452_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg(v___x_1438_, v___x_1451_, v_a_1340_, v_a_1341_, v_a_1342_, v_a_1343_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_dec_ref(v___x_1452_);
v___y_1360_ = v_a_1334_;
v___y_1361_ = v_a_1335_;
v___y_1362_ = v_a_1336_;
v___y_1363_ = v_a_1337_;
v___y_1364_ = v_a_1338_;
v___y_1365_ = v_a_1339_;
v___y_1366_ = v_a_1340_;
v___y_1367_ = v_a_1341_;
v___y_1368_ = v_a_1342_;
v___y_1369_ = v_a_1343_;
goto v___jp_1359_;
}
else
{
lean_object* v_a_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1460_; 
lean_dec(v_snd_1355_);
lean_dec(v_fst_1354_);
lean_del_object(v___x_1352_);
v_a_1453_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1455_ = v___x_1452_;
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_a_1453_);
lean_dec(v___x_1452_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1458_; 
if (v_isShared_1456_ == 0)
{
v___x_1458_ = v___x_1455_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_a_1453_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
}
}
}
v___jp_1359_:
{
lean_object* v___x_1370_; 
v___x_1370_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized(v_fst_1354_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_);
if (lean_obj_tag(v___x_1370_) == 0)
{
lean_object* v_a_1371_; lean_object* v___x_1372_; 
v_a_1371_ = lean_ctor_get(v___x_1370_, 0);
lean_inc(v_a_1371_);
lean_dec_ref(v___x_1370_);
v___x_1372_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized(v_snd_1355_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_);
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v_a_1373_; lean_object* v___x_1374_; 
v_a_1373_ = lean_ctor_get(v___x_1372_, 0);
lean_inc(v_a_1373_);
lean_dec_ref(v___x_1372_);
lean_inc(v___y_1369_);
lean_inc_ref(v___y_1368_);
lean_inc(v___y_1367_);
lean_inc_ref(v___y_1366_);
lean_inc(v___y_1365_);
lean_inc_ref(v___y_1364_);
lean_inc(v___y_1363_);
lean_inc_ref(v___y_1362_);
lean_inc(v___y_1361_);
lean_inc(v___y_1360_);
v___x_1374_ = lean_grind_process_new_facts(v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_);
if (lean_obj_tag(v___x_1374_) == 0)
{
lean_object* v___x_1375_; 
lean_dec_ref(v___x_1374_);
v___x_1375_ = l_Lean_Meta_Grind_isEqv___redArg(v_a_1371_, v_a_1373_, v___y_1360_);
if (lean_obj_tag(v___x_1375_) == 0)
{
lean_object* v_a_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1405_; 
v_a_1376_ = lean_ctor_get(v___x_1375_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v___x_1375_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1378_ = v___x_1375_;
v_isShared_1379_ = v_isSharedCheck_1405_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_a_1376_);
lean_dec(v___x_1375_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1405_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
uint8_t v___x_1380_; 
v___x_1380_ = lean_unbox(v_a_1376_);
lean_dec(v_a_1376_);
if (v___x_1380_ == 0)
{
lean_object* v___x_1381_; lean_object* v___x_1383_; 
lean_dec(v_a_1373_);
lean_dec(v_a_1371_);
lean_del_object(v___x_1352_);
v___x_1381_ = lean_box(0);
if (v_isShared_1379_ == 0)
{
lean_ctor_set(v___x_1378_, 0, v___x_1381_);
v___x_1383_ = v___x_1378_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1381_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
else
{
lean_object* v___x_1385_; 
lean_del_object(v___x_1378_);
lean_inc(v___y_1369_);
lean_inc_ref(v___y_1368_);
lean_inc(v___y_1367_);
lean_inc_ref(v___y_1366_);
lean_inc(v___y_1365_);
lean_inc_ref(v___y_1364_);
lean_inc(v___y_1363_);
lean_inc_ref(v___y_1362_);
lean_inc(v___y_1361_);
lean_inc(v___y_1360_);
v___x_1385_ = lean_grind_mk_eq_proof(v_a_1371_, v_a_1373_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_);
if (lean_obj_tag(v___x_1385_) == 0)
{
lean_object* v_a_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1396_; 
v_a_1386_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1388_ = v___x_1385_;
v_isShared_1389_ = v_isSharedCheck_1396_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_a_1386_);
lean_dec(v___x_1385_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1396_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1391_; 
if (v_isShared_1353_ == 0)
{
lean_ctor_set(v___x_1352_, 0, v_a_1386_);
v___x_1391_ = v___x_1352_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v_a_1386_);
v___x_1391_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
lean_object* v___x_1393_; 
if (v_isShared_1389_ == 0)
{
lean_ctor_set(v___x_1388_, 0, v___x_1391_);
v___x_1393_ = v___x_1388_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v___x_1391_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
}
}
else
{
lean_object* v_a_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1404_; 
lean_del_object(v___x_1352_);
v_a_1397_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1399_ = v___x_1385_;
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_a_1397_);
lean_dec(v___x_1385_);
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
}
}
else
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1413_; 
lean_dec(v_a_1373_);
lean_dec(v_a_1371_);
lean_del_object(v___x_1352_);
v_a_1406_ = lean_ctor_get(v___x_1375_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1375_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1408_ = v___x_1375_;
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1375_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
else
{
lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
lean_dec(v_a_1373_);
lean_dec(v_a_1371_);
lean_del_object(v___x_1352_);
v_a_1414_ = lean_ctor_get(v___x_1374_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1374_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1416_ = v___x_1374_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_dec(v___x_1374_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1417_ == 0)
{
v___x_1419_ = v___x_1416_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_a_1414_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
}
}
else
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1429_; 
lean_dec(v_a_1371_);
lean_del_object(v___x_1352_);
v_a_1422_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1429_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1429_ == 0)
{
v___x_1424_ = v___x_1372_;
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1372_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1429_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
lean_object* v___x_1427_; 
if (v_isShared_1425_ == 0)
{
v___x_1427_ = v___x_1424_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_a_1422_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
}
}
else
{
lean_object* v_a_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1437_; 
lean_dec(v_snd_1355_);
lean_del_object(v___x_1352_);
v_a_1430_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1432_ = v___x_1370_;
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_a_1430_);
lean_dec(v___x_1370_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1435_; 
if (v_isShared_1433_ == 0)
{
v___x_1435_ = v___x_1432_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_a_1430_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1464_; lean_object* v___x_1466_; 
lean_dec(v_a_1346_);
v___x_1464_ = lean_box(0);
if (v_isShared_1349_ == 0)
{
lean_ctor_set(v___x_1348_, 0, v___x_1464_);
v___x_1466_ = v___x_1348_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v___x_1464_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
}
}
}
}
else
{
lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1476_; 
v_a_1469_ = lean_ctor_get(v___x_1345_, 0);
v_isSharedCheck_1476_ = !lean_is_exclusive(v___x_1345_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1471_ = v___x_1345_;
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_dec(v___x_1345_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___x_1474_; 
if (v_isShared_1472_ == 0)
{
v___x_1474_ = v___x_1471_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v_a_1469_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
return v___x_1474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___boxed(lean_object* v_lhs_u2080_1477_, lean_object* v_rhs_u2080_1478_, lean_object* v_a_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_, lean_object* v_a_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_){
_start:
{
lean_object* v_res_1490_; 
v_res_1490_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract(v_lhs_u2080_1477_, v_rhs_u2080_1478_, v_a_1479_, v_a_1480_, v_a_1481_, v_a_1482_, v_a_1483_, v_a_1484_, v_a_1485_, v_a_1486_, v_a_1487_, v_a_1488_);
lean_dec(v_a_1488_);
lean_dec_ref(v_a_1487_);
lean_dec(v_a_1486_);
lean_dec_ref(v_a_1485_);
lean_dec(v_a_1484_);
lean_dec_ref(v_a_1483_);
lean_dec(v_a_1482_);
lean_dec_ref(v_a_1481_);
lean_dec(v_a_1480_);
lean_dec(v_a_1479_);
return v_res_1490_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1(lean_object* v_cls_1491_, lean_object* v_msg_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_){
_start:
{
lean_object* v___x_1504_; 
v___x_1504_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg(v_cls_1491_, v_msg_1492_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_);
return v___x_1504_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___boxed(lean_object* v_cls_1505_, lean_object* v_msg_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_){
_start:
{
lean_object* v_res_1518_; 
v_res_1518_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1(v_cls_1505_, v_msg_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_);
lean_dec(v___y_1516_);
lean_dec_ref(v___y_1515_);
lean_dec(v___y_1514_);
lean_dec_ref(v___y_1513_);
lean_dec(v___y_1512_);
lean_dec_ref(v___y_1511_);
lean_dec(v___y_1510_);
lean_dec_ref(v___y_1509_);
lean_dec(v___y_1508_);
lean_dec(v___y_1507_);
return v_res_1518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_proveEq_x3f___lam__0(lean_object* v_lhs_1519_, lean_object* v_rhs_1520_, uint8_t v_abstract_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_){
_start:
{
lean_object* v___x_1533_; 
v___x_1533_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized(v_lhs_1519_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_);
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v_a_1534_; lean_object* v___x_1535_; 
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
lean_inc(v_a_1534_);
lean_dec_ref(v___x_1533_);
v___x_1535_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized(v_rhs_1520_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_);
if (lean_obj_tag(v___x_1535_) == 0)
{
lean_object* v_a_1536_; lean_object* v___x_1537_; 
v_a_1536_ = lean_ctor_get(v___x_1535_, 0);
lean_inc(v_a_1536_);
lean_dec_ref(v___x_1535_);
lean_inc(v___y_1531_);
lean_inc_ref(v___y_1530_);
lean_inc(v___y_1529_);
lean_inc_ref(v___y_1528_);
lean_inc(v___y_1527_);
lean_inc_ref(v___y_1526_);
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
lean_inc(v___y_1523_);
lean_inc(v___y_1522_);
v___x_1537_ = lean_grind_process_new_facts(v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_);
if (lean_obj_tag(v___x_1537_) == 0)
{
lean_object* v___x_1538_; 
lean_dec_ref(v___x_1537_);
v___x_1538_ = l_Lean_Meta_Grind_isEqv___redArg(v_a_1534_, v_a_1536_, v___y_1522_);
if (lean_obj_tag(v___x_1538_) == 0)
{
lean_object* v_a_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1567_; 
v_a_1539_ = lean_ctor_get(v___x_1538_, 0);
v_isSharedCheck_1567_ = !lean_is_exclusive(v___x_1538_);
if (v_isSharedCheck_1567_ == 0)
{
v___x_1541_ = v___x_1538_;
v_isShared_1542_ = v_isSharedCheck_1567_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_a_1539_);
lean_dec(v___x_1538_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1567_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
uint8_t v___x_1543_; 
v___x_1543_ = lean_unbox(v_a_1539_);
lean_dec(v_a_1539_);
if (v___x_1543_ == 0)
{
if (v_abstract_1521_ == 0)
{
lean_object* v___x_1544_; lean_object* v___x_1546_; 
lean_dec(v_a_1536_);
lean_dec(v_a_1534_);
v___x_1544_ = lean_box(0);
if (v_isShared_1542_ == 0)
{
lean_ctor_set(v___x_1541_, 0, v___x_1544_);
v___x_1546_ = v___x_1541_;
goto v_reusejp_1545_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v___x_1544_);
v___x_1546_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1545_;
}
v_reusejp_1545_:
{
return v___x_1546_;
}
}
else
{
lean_object* v___x_1548_; 
lean_del_object(v___x_1541_);
v___x_1548_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract(v_a_1534_, v_a_1536_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_);
return v___x_1548_;
}
}
else
{
lean_object* v___x_1549_; 
lean_del_object(v___x_1541_);
lean_inc(v___y_1531_);
lean_inc_ref(v___y_1530_);
lean_inc(v___y_1529_);
lean_inc_ref(v___y_1528_);
lean_inc(v___y_1527_);
lean_inc_ref(v___y_1526_);
lean_inc(v___y_1525_);
lean_inc_ref(v___y_1524_);
lean_inc(v___y_1523_);
lean_inc(v___y_1522_);
v___x_1549_ = lean_grind_mk_eq_proof(v_a_1534_, v_a_1536_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_);
if (lean_obj_tag(v___x_1549_) == 0)
{
lean_object* v_a_1550_; lean_object* v___x_1552_; uint8_t v_isShared_1553_; uint8_t v_isSharedCheck_1558_; 
v_a_1550_ = lean_ctor_get(v___x_1549_, 0);
v_isSharedCheck_1558_ = !lean_is_exclusive(v___x_1549_);
if (v_isSharedCheck_1558_ == 0)
{
v___x_1552_ = v___x_1549_;
v_isShared_1553_ = v_isSharedCheck_1558_;
goto v_resetjp_1551_;
}
else
{
lean_inc(v_a_1550_);
lean_dec(v___x_1549_);
v___x_1552_ = lean_box(0);
v_isShared_1553_ = v_isSharedCheck_1558_;
goto v_resetjp_1551_;
}
v_resetjp_1551_:
{
lean_object* v___x_1554_; lean_object* v___x_1556_; 
v___x_1554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1554_, 0, v_a_1550_);
if (v_isShared_1553_ == 0)
{
lean_ctor_set(v___x_1552_, 0, v___x_1554_);
v___x_1556_ = v___x_1552_;
goto v_reusejp_1555_;
}
else
{
lean_object* v_reuseFailAlloc_1557_; 
v_reuseFailAlloc_1557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1557_, 0, v___x_1554_);
v___x_1556_ = v_reuseFailAlloc_1557_;
goto v_reusejp_1555_;
}
v_reusejp_1555_:
{
return v___x_1556_;
}
}
}
else
{
lean_object* v_a_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1566_; 
v_a_1559_ = lean_ctor_get(v___x_1549_, 0);
v_isSharedCheck_1566_ = !lean_is_exclusive(v___x_1549_);
if (v_isSharedCheck_1566_ == 0)
{
v___x_1561_ = v___x_1549_;
v_isShared_1562_ = v_isSharedCheck_1566_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_a_1559_);
lean_dec(v___x_1549_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1566_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v___x_1564_; 
if (v_isShared_1562_ == 0)
{
v___x_1564_ = v___x_1561_;
goto v_reusejp_1563_;
}
else
{
lean_object* v_reuseFailAlloc_1565_; 
v_reuseFailAlloc_1565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1565_, 0, v_a_1559_);
v___x_1564_ = v_reuseFailAlloc_1565_;
goto v_reusejp_1563_;
}
v_reusejp_1563_:
{
return v___x_1564_;
}
}
}
}
}
}
else
{
lean_object* v_a_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1575_; 
lean_dec(v_a_1536_);
lean_dec(v_a_1534_);
v_a_1568_ = lean_ctor_get(v___x_1538_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v___x_1538_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1570_ = v___x_1538_;
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
else
{
lean_inc(v_a_1568_);
lean_dec(v___x_1538_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
lean_object* v___x_1573_; 
if (v_isShared_1571_ == 0)
{
v___x_1573_ = v___x_1570_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v_a_1568_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
return v___x_1573_;
}
}
}
}
else
{
lean_object* v_a_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1583_; 
lean_dec(v_a_1536_);
lean_dec(v_a_1534_);
v_a_1576_ = lean_ctor_get(v___x_1537_, 0);
v_isSharedCheck_1583_ = !lean_is_exclusive(v___x_1537_);
if (v_isSharedCheck_1583_ == 0)
{
v___x_1578_ = v___x_1537_;
v_isShared_1579_ = v_isSharedCheck_1583_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_a_1576_);
lean_dec(v___x_1537_);
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
lean_dec(v_a_1534_);
v_a_1584_ = lean_ctor_get(v___x_1535_, 0);
v_isSharedCheck_1591_ = !lean_is_exclusive(v___x_1535_);
if (v_isSharedCheck_1591_ == 0)
{
v___x_1586_ = v___x_1535_;
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_a_1584_);
lean_dec(v___x_1535_);
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
}
else
{
lean_object* v_a_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1599_; 
lean_dec_ref(v_rhs_1520_);
v_a_1592_ = lean_ctor_get(v___x_1533_, 0);
v_isSharedCheck_1599_ = !lean_is_exclusive(v___x_1533_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1594_ = v___x_1533_;
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_a_1592_);
lean_dec(v___x_1533_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1597_; 
if (v_isShared_1595_ == 0)
{
v___x_1597_ = v___x_1594_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v_a_1592_);
v___x_1597_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
return v___x_1597_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_proveEq_x3f___lam__0___boxed(lean_object* v_lhs_1600_, lean_object* v_rhs_1601_, lean_object* v_abstract_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_){
_start:
{
uint8_t v_abstract_boxed_1614_; lean_object* v_res_1615_; 
v_abstract_boxed_1614_ = lean_unbox(v_abstract_1602_);
v_res_1615_ = l_Lean_Meta_Grind_proveEq_x3f___lam__0(v_lhs_1600_, v_rhs_1601_, v_abstract_boxed_1614_, v___y_1603_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_);
lean_dec(v___y_1612_);
lean_dec_ref(v___y_1611_);
lean_dec(v___y_1610_);
lean_dec_ref(v___y_1609_);
lean_dec(v___y_1608_);
lean_dec_ref(v___y_1607_);
lean_dec(v___y_1606_);
lean_dec_ref(v___y_1605_);
lean_dec(v___y_1604_);
lean_dec(v___y_1603_);
return v_res_1615_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_proveEq_x3f___closed__1(void){
_start:
{
lean_object* v___x_1617_; lean_object* v___x_1618_; 
v___x_1617_ = ((lean_object*)(l_Lean_Meta_Grind_proveEq_x3f___closed__0));
v___x_1618_ = l_Lean_stringToMessageData(v___x_1617_);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_proveEq_x3f(lean_object* v_lhs_1619_, lean_object* v_rhs_1620_, uint8_t v_abstract_1621_, lean_object* v_a_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_){
_start:
{
lean_object* v_cls_1633_; lean_object* v___x_1634_; lean_object* v_a_1635_; lean_object* v___x_1637_; uint8_t v_isShared_1638_; uint8_t v_isSharedCheck_1758_; 
v_cls_1633_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__3));
v___x_1634_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__0___redArg(v_cls_1633_, v_a_1630_);
v_a_1635_ = lean_ctor_get(v___x_1634_, 0);
v_isSharedCheck_1758_ = !lean_is_exclusive(v___x_1634_);
if (v_isSharedCheck_1758_ == 0)
{
v___x_1637_ = v___x_1634_;
v_isShared_1638_ = v_isSharedCheck_1758_;
goto v_resetjp_1636_;
}
else
{
lean_inc(v_a_1635_);
lean_dec(v___x_1634_);
v___x_1637_ = lean_box(0);
v_isShared_1638_ = v_isSharedCheck_1758_;
goto v_resetjp_1636_;
}
v_resetjp_1636_:
{
lean_object* v___x_1639_; lean_object* v___f_1640_; lean_object* v___y_1642_; lean_object* v___y_1643_; lean_object* v___y_1644_; lean_object* v___y_1645_; lean_object* v___y_1646_; lean_object* v___y_1647_; lean_object* v___y_1648_; lean_object* v___y_1649_; lean_object* v___y_1650_; lean_object* v___y_1651_; lean_object* v___y_1652_; lean_object* v___y_1706_; lean_object* v___y_1707_; lean_object* v___y_1708_; lean_object* v___y_1709_; lean_object* v___y_1710_; lean_object* v___y_1711_; lean_object* v___y_1712_; lean_object* v___y_1713_; lean_object* v___y_1714_; lean_object* v___y_1715_; uint8_t v___x_1739_; 
v___x_1639_ = lean_box(v_abstract_1621_);
lean_inc_ref(v_rhs_1620_);
lean_inc_ref(v_lhs_1619_);
v___f_1640_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_proveEq_x3f___lam__0___boxed), 14, 3);
lean_closure_set(v___f_1640_, 0, v_lhs_1619_);
lean_closure_set(v___f_1640_, 1, v_rhs_1620_);
lean_closure_set(v___f_1640_, 2, v___x_1639_);
v___x_1739_ = lean_unbox(v_a_1635_);
lean_dec(v_a_1635_);
if (v___x_1739_ == 0)
{
v___y_1706_ = v_a_1622_;
v___y_1707_ = v_a_1623_;
v___y_1708_ = v_a_1624_;
v___y_1709_ = v_a_1625_;
v___y_1710_ = v_a_1626_;
v___y_1711_ = v_a_1627_;
v___y_1712_ = v_a_1628_;
v___y_1713_ = v_a_1629_;
v___y_1714_ = v_a_1630_;
v___y_1715_ = v_a_1631_;
goto v___jp_1705_;
}
else
{
lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1740_ = lean_obj_once(&l_Lean_Meta_Grind_proveEq_x3f___closed__1, &l_Lean_Meta_Grind_proveEq_x3f___closed__1_once, _init_l_Lean_Meta_Grind_proveEq_x3f___closed__1);
lean_inc_ref(v_lhs_1619_);
v___x_1741_ = l_Lean_MessageData_ofExpr(v_lhs_1619_);
v___x_1742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1742_, 0, v___x_1740_);
lean_ctor_set(v___x_1742_, 1, v___x_1741_);
v___x_1743_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__7, &l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__7);
v___x_1744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1744_, 0, v___x_1742_);
lean_ctor_set(v___x_1744_, 1, v___x_1743_);
lean_inc_ref(v_rhs_1620_);
v___x_1745_ = l_Lean_MessageData_ofExpr(v_rhs_1620_);
v___x_1746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1746_, 0, v___x_1744_);
lean_ctor_set(v___x_1746_, 1, v___x_1745_);
v___x_1747_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__9, &l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___closed__9);
v___x_1748_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1748_, 0, v___x_1746_);
lean_ctor_set(v___x_1748_, 1, v___x_1747_);
v___x_1749_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract_spec__1___redArg(v_cls_1633_, v___x_1748_, v_a_1628_, v_a_1629_, v_a_1630_, v_a_1631_);
if (lean_obj_tag(v___x_1749_) == 0)
{
lean_dec_ref(v___x_1749_);
v___y_1706_ = v_a_1622_;
v___y_1707_ = v_a_1623_;
v___y_1708_ = v_a_1624_;
v___y_1709_ = v_a_1625_;
v___y_1710_ = v_a_1626_;
v___y_1711_ = v_a_1627_;
v___y_1712_ = v_a_1628_;
v___y_1713_ = v_a_1629_;
v___y_1714_ = v_a_1630_;
v___y_1715_ = v_a_1631_;
goto v___jp_1705_;
}
else
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
lean_dec_ref(v___f_1640_);
lean_del_object(v___x_1637_);
lean_dec_ref(v_rhs_1620_);
lean_dec_ref(v_lhs_1619_);
v_a_1750_ = lean_ctor_get(v___x_1749_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1749_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___x_1749_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___x_1749_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_a_1750_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
v___jp_1641_:
{
if (lean_obj_tag(v___y_1652_) == 0)
{
lean_object* v_a_1653_; uint8_t v___x_1654_; 
v_a_1653_ = lean_ctor_get(v___y_1652_, 0);
lean_inc(v_a_1653_);
lean_dec_ref(v___y_1652_);
v___x_1654_ = lean_unbox(v_a_1653_);
lean_dec(v_a_1653_);
if (v___x_1654_ == 0)
{
lean_object* v___x_1655_; 
lean_del_object(v___x_1637_);
lean_dec_ref(v_rhs_1620_);
lean_dec_ref(v_lhs_1619_);
v___x_1655_ = l_Lean_Meta_Grind_withoutModifyingState___redArg(v___f_1640_, v___y_1651_, v___y_1643_, v___y_1642_, v___y_1650_, v___y_1644_, v___y_1646_, v___y_1649_, v___y_1648_, v___y_1647_, v___y_1645_);
return v___x_1655_;
}
else
{
lean_object* v___x_1656_; 
lean_dec_ref(v___f_1640_);
v___x_1656_ = l_Lean_Meta_Grind_isEqv___redArg(v_lhs_1619_, v_rhs_1620_, v___y_1651_);
if (lean_obj_tag(v___x_1656_) == 0)
{
lean_object* v_a_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1688_; 
v_a_1657_ = lean_ctor_get(v___x_1656_, 0);
v_isSharedCheck_1688_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1688_ == 0)
{
v___x_1659_ = v___x_1656_;
v_isShared_1660_ = v_isSharedCheck_1688_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_a_1657_);
lean_dec(v___x_1656_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1688_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
uint8_t v___x_1661_; 
v___x_1661_ = lean_unbox(v_a_1657_);
lean_dec(v_a_1657_);
if (v___x_1661_ == 0)
{
lean_del_object(v___x_1637_);
if (v_abstract_1621_ == 0)
{
lean_object* v___x_1662_; lean_object* v___x_1664_; 
lean_dec_ref(v_rhs_1620_);
lean_dec_ref(v_lhs_1619_);
v___x_1662_ = lean_box(0);
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
else
{
lean_object* v___x_1666_; lean_object* v___x_1667_; 
lean_del_object(v___x_1659_);
v___x_1666_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_proveEq_x3f_tryAbstract___boxed), 13, 2);
lean_closure_set(v___x_1666_, 0, v_lhs_1619_);
lean_closure_set(v___x_1666_, 1, v_rhs_1620_);
v___x_1667_ = l_Lean_Meta_Grind_withoutModifyingState___redArg(v___x_1666_, v___y_1651_, v___y_1643_, v___y_1642_, v___y_1650_, v___y_1644_, v___y_1646_, v___y_1649_, v___y_1648_, v___y_1647_, v___y_1645_);
return v___x_1667_;
}
}
else
{
lean_object* v___x_1668_; 
lean_del_object(v___x_1659_);
lean_inc(v___y_1645_);
lean_inc_ref(v___y_1647_);
lean_inc(v___y_1648_);
lean_inc_ref(v___y_1649_);
lean_inc(v___y_1646_);
lean_inc_ref(v___y_1644_);
lean_inc(v___y_1650_);
lean_inc_ref(v___y_1642_);
lean_inc(v___y_1643_);
lean_inc(v___y_1651_);
v___x_1668_ = lean_grind_mk_eq_proof(v_lhs_1619_, v_rhs_1620_, v___y_1651_, v___y_1643_, v___y_1642_, v___y_1650_, v___y_1644_, v___y_1646_, v___y_1649_, v___y_1648_, v___y_1647_, v___y_1645_);
if (lean_obj_tag(v___x_1668_) == 0)
{
lean_object* v_a_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1679_; 
v_a_1669_ = lean_ctor_get(v___x_1668_, 0);
v_isSharedCheck_1679_ = !lean_is_exclusive(v___x_1668_);
if (v_isSharedCheck_1679_ == 0)
{
v___x_1671_ = v___x_1668_;
v_isShared_1672_ = v_isSharedCheck_1679_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_a_1669_);
lean_dec(v___x_1668_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1679_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v___x_1674_; 
if (v_isShared_1638_ == 0)
{
lean_ctor_set_tag(v___x_1637_, 1);
lean_ctor_set(v___x_1637_, 0, v_a_1669_);
v___x_1674_ = v___x_1637_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v_a_1669_);
v___x_1674_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
lean_object* v___x_1676_; 
if (v_isShared_1672_ == 0)
{
lean_ctor_set(v___x_1671_, 0, v___x_1674_);
v___x_1676_ = v___x_1671_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v___x_1674_);
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
lean_object* v_a_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1687_; 
lean_del_object(v___x_1637_);
v_a_1680_ = lean_ctor_get(v___x_1668_, 0);
v_isSharedCheck_1687_ = !lean_is_exclusive(v___x_1668_);
if (v_isSharedCheck_1687_ == 0)
{
v___x_1682_ = v___x_1668_;
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_a_1680_);
lean_dec(v___x_1668_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
lean_object* v___x_1685_; 
if (v_isShared_1683_ == 0)
{
v___x_1685_ = v___x_1682_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v_a_1680_);
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
}
}
else
{
lean_object* v_a_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1696_; 
lean_del_object(v___x_1637_);
lean_dec_ref(v_rhs_1620_);
lean_dec_ref(v_lhs_1619_);
v_a_1689_ = lean_ctor_get(v___x_1656_, 0);
v_isSharedCheck_1696_ = !lean_is_exclusive(v___x_1656_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1691_ = v___x_1656_;
v_isShared_1692_ = v_isSharedCheck_1696_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_a_1689_);
lean_dec(v___x_1656_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1696_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v___x_1694_; 
if (v_isShared_1692_ == 0)
{
v___x_1694_ = v___x_1691_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v_a_1689_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
}
}
}
else
{
lean_object* v_a_1697_; lean_object* v___x_1699_; uint8_t v_isShared_1700_; uint8_t v_isSharedCheck_1704_; 
lean_dec_ref(v___f_1640_);
lean_del_object(v___x_1637_);
lean_dec_ref(v_rhs_1620_);
lean_dec_ref(v_lhs_1619_);
v_a_1697_ = lean_ctor_get(v___y_1652_, 0);
v_isSharedCheck_1704_ = !lean_is_exclusive(v___y_1652_);
if (v_isSharedCheck_1704_ == 0)
{
v___x_1699_ = v___y_1652_;
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
else
{
lean_inc(v_a_1697_);
lean_dec(v___y_1652_);
v___x_1699_ = lean_box(0);
v_isShared_1700_ = v_isSharedCheck_1704_;
goto v_resetjp_1698_;
}
v_resetjp_1698_:
{
lean_object* v___x_1702_; 
if (v_isShared_1700_ == 0)
{
v___x_1702_ = v___x_1699_;
goto v_reusejp_1701_;
}
else
{
lean_object* v_reuseFailAlloc_1703_; 
v_reuseFailAlloc_1703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1703_, 0, v_a_1697_);
v___x_1702_ = v_reuseFailAlloc_1703_;
goto v_reusejp_1701_;
}
v_reusejp_1701_:
{
return v___x_1702_;
}
}
}
}
v___jp_1705_:
{
lean_object* v___x_1716_; 
lean_inc_ref(v_rhs_1620_);
lean_inc_ref(v_lhs_1619_);
v___x_1716_ = l_Lean_Meta_Grind_hasSameType(v_lhs_1619_, v_rhs_1620_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
if (lean_obj_tag(v___x_1716_) == 0)
{
lean_object* v_a_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1730_; 
v_a_1717_ = lean_ctor_get(v___x_1716_, 0);
v_isSharedCheck_1730_ = !lean_is_exclusive(v___x_1716_);
if (v_isSharedCheck_1730_ == 0)
{
v___x_1719_ = v___x_1716_;
v_isShared_1720_ = v_isSharedCheck_1730_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_a_1717_);
lean_dec(v___x_1716_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1730_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
uint8_t v___x_1721_; 
v___x_1721_ = lean_unbox(v_a_1717_);
lean_dec(v_a_1717_);
if (v___x_1721_ == 0)
{
lean_object* v___x_1722_; lean_object* v___x_1724_; 
lean_dec_ref(v___f_1640_);
lean_del_object(v___x_1637_);
lean_dec_ref(v_rhs_1620_);
lean_dec_ref(v_lhs_1619_);
v___x_1722_ = lean_box(0);
if (v_isShared_1720_ == 0)
{
lean_ctor_set(v___x_1719_, 0, v___x_1722_);
v___x_1724_ = v___x_1719_;
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
else
{
lean_object* v___x_1726_; 
lean_del_object(v___x_1719_);
v___x_1726_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_lhs_1619_, v___y_1706_);
if (lean_obj_tag(v___x_1726_) == 0)
{
lean_object* v_a_1727_; uint8_t v___x_1728_; 
v_a_1727_ = lean_ctor_get(v___x_1726_, 0);
lean_inc(v_a_1727_);
v___x_1728_ = lean_unbox(v_a_1727_);
lean_dec(v_a_1727_);
if (v___x_1728_ == 0)
{
v___y_1642_ = v___y_1708_;
v___y_1643_ = v___y_1707_;
v___y_1644_ = v___y_1710_;
v___y_1645_ = v___y_1715_;
v___y_1646_ = v___y_1711_;
v___y_1647_ = v___y_1714_;
v___y_1648_ = v___y_1713_;
v___y_1649_ = v___y_1712_;
v___y_1650_ = v___y_1709_;
v___y_1651_ = v___y_1706_;
v___y_1652_ = v___x_1726_;
goto v___jp_1641_;
}
else
{
lean_object* v___x_1729_; 
lean_dec_ref(v___x_1726_);
v___x_1729_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_rhs_1620_, v___y_1706_);
v___y_1642_ = v___y_1708_;
v___y_1643_ = v___y_1707_;
v___y_1644_ = v___y_1710_;
v___y_1645_ = v___y_1715_;
v___y_1646_ = v___y_1711_;
v___y_1647_ = v___y_1714_;
v___y_1648_ = v___y_1713_;
v___y_1649_ = v___y_1712_;
v___y_1650_ = v___y_1709_;
v___y_1651_ = v___y_1706_;
v___y_1652_ = v___x_1729_;
goto v___jp_1641_;
}
}
else
{
v___y_1642_ = v___y_1708_;
v___y_1643_ = v___y_1707_;
v___y_1644_ = v___y_1710_;
v___y_1645_ = v___y_1715_;
v___y_1646_ = v___y_1711_;
v___y_1647_ = v___y_1714_;
v___y_1648_ = v___y_1713_;
v___y_1649_ = v___y_1712_;
v___y_1650_ = v___y_1709_;
v___y_1651_ = v___y_1706_;
v___y_1652_ = v___x_1726_;
goto v___jp_1641_;
}
}
}
}
else
{
lean_object* v_a_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1738_; 
lean_dec_ref(v___f_1640_);
lean_del_object(v___x_1637_);
lean_dec_ref(v_rhs_1620_);
lean_dec_ref(v_lhs_1619_);
v_a_1731_ = lean_ctor_get(v___x_1716_, 0);
v_isSharedCheck_1738_ = !lean_is_exclusive(v___x_1716_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1733_ = v___x_1716_;
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_a_1731_);
lean_dec(v___x_1716_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___x_1736_; 
if (v_isShared_1734_ == 0)
{
v___x_1736_ = v___x_1733_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_a_1731_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_proveEq_x3f___boxed(lean_object* v_lhs_1759_, lean_object* v_rhs_1760_, lean_object* v_abstract_1761_, lean_object* v_a_1762_, lean_object* v_a_1763_, lean_object* v_a_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_, lean_object* v_a_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_, lean_object* v_a_1772_){
_start:
{
uint8_t v_abstract_boxed_1773_; lean_object* v_res_1774_; 
v_abstract_boxed_1773_ = lean_unbox(v_abstract_1761_);
v_res_1774_ = l_Lean_Meta_Grind_proveEq_x3f(v_lhs_1759_, v_rhs_1760_, v_abstract_boxed_1773_, v_a_1762_, v_a_1763_, v_a_1764_, v_a_1765_, v_a_1766_, v_a_1767_, v_a_1768_, v_a_1769_, v_a_1770_, v_a_1771_);
lean_dec(v_a_1771_);
lean_dec_ref(v_a_1770_);
lean_dec(v_a_1769_);
lean_dec_ref(v_a_1768_);
lean_dec(v_a_1767_);
lean_dec_ref(v_a_1766_);
lean_dec(v_a_1765_);
lean_dec_ref(v_a_1764_);
lean_dec(v_a_1763_);
lean_dec(v_a_1762_);
return v_res_1774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_proveHEq_x3f___lam__0(lean_object* v_lhs_1775_, lean_object* v_rhs_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_){
_start:
{
lean_object* v___x_1788_; 
v___x_1788_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized(v_lhs_1775_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_);
if (lean_obj_tag(v___x_1788_) == 0)
{
lean_object* v_a_1789_; lean_object* v___x_1790_; 
v_a_1789_ = lean_ctor_get(v___x_1788_, 0);
lean_inc(v_a_1789_);
lean_dec_ref(v___x_1788_);
v___x_1790_ = l___private_Lean_Meta_Tactic_Grind_ProveEq_0__Lean_Meta_Grind_ensureInternalized(v_rhs_1776_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_);
if (lean_obj_tag(v___x_1790_) == 0)
{
lean_object* v_a_1791_; lean_object* v___x_1792_; 
v_a_1791_ = lean_ctor_get(v___x_1790_, 0);
lean_inc(v_a_1791_);
lean_dec_ref(v___x_1790_);
lean_inc(v___y_1786_);
lean_inc_ref(v___y_1785_);
lean_inc(v___y_1784_);
lean_inc_ref(v___y_1783_);
lean_inc(v___y_1782_);
lean_inc_ref(v___y_1781_);
lean_inc(v___y_1780_);
lean_inc_ref(v___y_1779_);
lean_inc(v___y_1778_);
lean_inc(v___y_1777_);
v___x_1792_ = lean_grind_process_new_facts(v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_);
if (lean_obj_tag(v___x_1792_) == 0)
{
lean_object* v___x_1793_; 
lean_dec_ref(v___x_1792_);
v___x_1793_ = l_Lean_Meta_Grind_isEqv___redArg(v_a_1789_, v_a_1791_, v___y_1777_);
if (lean_obj_tag(v___x_1793_) == 0)
{
lean_object* v_a_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1821_; 
v_a_1794_ = lean_ctor_get(v___x_1793_, 0);
v_isSharedCheck_1821_ = !lean_is_exclusive(v___x_1793_);
if (v_isSharedCheck_1821_ == 0)
{
v___x_1796_ = v___x_1793_;
v_isShared_1797_ = v_isSharedCheck_1821_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_a_1794_);
lean_dec(v___x_1793_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1821_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
uint8_t v___x_1798_; 
v___x_1798_ = lean_unbox(v_a_1794_);
lean_dec(v_a_1794_);
if (v___x_1798_ == 0)
{
lean_object* v___x_1799_; lean_object* v___x_1801_; 
lean_dec(v_a_1791_);
lean_dec(v_a_1789_);
v___x_1799_ = lean_box(0);
if (v_isShared_1797_ == 0)
{
lean_ctor_set(v___x_1796_, 0, v___x_1799_);
v___x_1801_ = v___x_1796_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v___x_1799_);
v___x_1801_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
return v___x_1801_;
}
}
else
{
lean_object* v___x_1803_; 
lean_del_object(v___x_1796_);
lean_inc(v___y_1786_);
lean_inc_ref(v___y_1785_);
lean_inc(v___y_1784_);
lean_inc_ref(v___y_1783_);
lean_inc(v___y_1782_);
lean_inc_ref(v___y_1781_);
lean_inc(v___y_1780_);
lean_inc_ref(v___y_1779_);
lean_inc(v___y_1778_);
lean_inc(v___y_1777_);
v___x_1803_ = lean_grind_mk_heq_proof(v_a_1789_, v_a_1791_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_);
if (lean_obj_tag(v___x_1803_) == 0)
{
lean_object* v_a_1804_; lean_object* v___x_1806_; uint8_t v_isShared_1807_; uint8_t v_isSharedCheck_1812_; 
v_a_1804_ = lean_ctor_get(v___x_1803_, 0);
v_isSharedCheck_1812_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1812_ == 0)
{
v___x_1806_ = v___x_1803_;
v_isShared_1807_ = v_isSharedCheck_1812_;
goto v_resetjp_1805_;
}
else
{
lean_inc(v_a_1804_);
lean_dec(v___x_1803_);
v___x_1806_ = lean_box(0);
v_isShared_1807_ = v_isSharedCheck_1812_;
goto v_resetjp_1805_;
}
v_resetjp_1805_:
{
lean_object* v___x_1808_; lean_object* v___x_1810_; 
v___x_1808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1808_, 0, v_a_1804_);
if (v_isShared_1807_ == 0)
{
lean_ctor_set(v___x_1806_, 0, v___x_1808_);
v___x_1810_ = v___x_1806_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v___x_1808_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
}
}
}
else
{
lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1820_; 
v_a_1813_ = lean_ctor_get(v___x_1803_, 0);
v_isSharedCheck_1820_ = !lean_is_exclusive(v___x_1803_);
if (v_isSharedCheck_1820_ == 0)
{
v___x_1815_ = v___x_1803_;
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_dec(v___x_1803_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1818_; 
if (v_isShared_1816_ == 0)
{
v___x_1818_ = v___x_1815_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v_a_1813_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
return v___x_1818_;
}
}
}
}
}
}
else
{
lean_object* v_a_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1829_; 
lean_dec(v_a_1791_);
lean_dec(v_a_1789_);
v_a_1822_ = lean_ctor_get(v___x_1793_, 0);
v_isSharedCheck_1829_ = !lean_is_exclusive(v___x_1793_);
if (v_isSharedCheck_1829_ == 0)
{
v___x_1824_ = v___x_1793_;
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_a_1822_);
lean_dec(v___x_1793_);
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
v_reuseFailAlloc_1828_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1837_; 
lean_dec(v_a_1791_);
lean_dec(v_a_1789_);
v_a_1830_ = lean_ctor_get(v___x_1792_, 0);
v_isSharedCheck_1837_ = !lean_is_exclusive(v___x_1792_);
if (v_isSharedCheck_1837_ == 0)
{
v___x_1832_ = v___x_1792_;
v_isShared_1833_ = v_isSharedCheck_1837_;
goto v_resetjp_1831_;
}
else
{
lean_inc(v_a_1830_);
lean_dec(v___x_1792_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1837_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
lean_object* v___x_1835_; 
if (v_isShared_1833_ == 0)
{
v___x_1835_ = v___x_1832_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v_a_1830_);
v___x_1835_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
return v___x_1835_;
}
}
}
}
else
{
lean_object* v_a_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1845_; 
lean_dec(v_a_1789_);
v_a_1838_ = lean_ctor_get(v___x_1790_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v___x_1790_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1840_ = v___x_1790_;
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_a_1838_);
lean_dec(v___x_1790_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v___x_1843_; 
if (v_isShared_1841_ == 0)
{
v___x_1843_ = v___x_1840_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v_a_1838_);
v___x_1843_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
return v___x_1843_;
}
}
}
}
else
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1853_; 
lean_dec_ref(v_rhs_1776_);
v_a_1846_ = lean_ctor_get(v___x_1788_, 0);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1788_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1848_ = v___x_1788_;
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v___x_1788_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___x_1851_; 
if (v_isShared_1849_ == 0)
{
v___x_1851_ = v___x_1848_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_a_1846_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
return v___x_1851_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_proveHEq_x3f___lam__0___boxed(lean_object* v_lhs_1854_, lean_object* v_rhs_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_){
_start:
{
lean_object* v_res_1867_; 
v_res_1867_ = l_Lean_Meta_Grind_proveHEq_x3f___lam__0(v_lhs_1854_, v_rhs_1855_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_);
lean_dec(v___y_1865_);
lean_dec_ref(v___y_1864_);
lean_dec(v___y_1863_);
lean_dec_ref(v___y_1862_);
lean_dec(v___y_1861_);
lean_dec_ref(v___y_1860_);
lean_dec(v___y_1859_);
lean_dec_ref(v___y_1858_);
lean_dec(v___y_1857_);
lean_dec(v___y_1856_);
return v_res_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_proveHEq_x3f(lean_object* v_lhs_1868_, lean_object* v_rhs_1869_, lean_object* v_a_1870_, lean_object* v_a_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_){
_start:
{
lean_object* v___f_1881_; lean_object* v___y_1883_; lean_object* v___x_1932_; 
lean_inc_ref(v_rhs_1869_);
lean_inc_ref(v_lhs_1868_);
v___f_1881_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_proveHEq_x3f___lam__0___boxed), 13, 2);
lean_closure_set(v___f_1881_, 0, v_lhs_1868_);
lean_closure_set(v___f_1881_, 1, v_rhs_1869_);
v___x_1932_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_lhs_1868_, v_a_1870_);
if (lean_obj_tag(v___x_1932_) == 0)
{
lean_object* v_a_1933_; uint8_t v___x_1934_; 
v_a_1933_ = lean_ctor_get(v___x_1932_, 0);
lean_inc(v_a_1933_);
v___x_1934_ = lean_unbox(v_a_1933_);
lean_dec(v_a_1933_);
if (v___x_1934_ == 0)
{
v___y_1883_ = v___x_1932_;
goto v___jp_1882_;
}
else
{
lean_object* v___x_1935_; 
lean_dec_ref(v___x_1932_);
v___x_1935_ = l_Lean_Meta_Grind_alreadyInternalized___redArg(v_rhs_1869_, v_a_1870_);
v___y_1883_ = v___x_1935_;
goto v___jp_1882_;
}
}
else
{
v___y_1883_ = v___x_1932_;
goto v___jp_1882_;
}
v___jp_1882_:
{
if (lean_obj_tag(v___y_1883_) == 0)
{
lean_object* v_a_1884_; uint8_t v___x_1885_; 
v_a_1884_ = lean_ctor_get(v___y_1883_, 0);
lean_inc(v_a_1884_);
lean_dec_ref(v___y_1883_);
v___x_1885_ = lean_unbox(v_a_1884_);
lean_dec(v_a_1884_);
if (v___x_1885_ == 0)
{
lean_object* v___x_1886_; 
lean_dec_ref(v_rhs_1869_);
lean_dec_ref(v_lhs_1868_);
v___x_1886_ = l_Lean_Meta_Grind_withoutModifyingState___redArg(v___f_1881_, v_a_1870_, v_a_1871_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_);
return v___x_1886_;
}
else
{
lean_object* v___x_1887_; 
lean_dec_ref(v___f_1881_);
v___x_1887_ = l_Lean_Meta_Grind_isEqv___redArg(v_lhs_1868_, v_rhs_1869_, v_a_1870_);
if (lean_obj_tag(v___x_1887_) == 0)
{
lean_object* v_a_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1915_; 
v_a_1888_ = lean_ctor_get(v___x_1887_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1887_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1890_ = v___x_1887_;
v_isShared_1891_ = v_isSharedCheck_1915_;
goto v_resetjp_1889_;
}
else
{
lean_inc(v_a_1888_);
lean_dec(v___x_1887_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1915_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
uint8_t v___x_1892_; 
v___x_1892_ = lean_unbox(v_a_1888_);
lean_dec(v_a_1888_);
if (v___x_1892_ == 0)
{
lean_object* v___x_1893_; lean_object* v___x_1895_; 
lean_dec_ref(v_rhs_1869_);
lean_dec_ref(v_lhs_1868_);
v___x_1893_ = lean_box(0);
if (v_isShared_1891_ == 0)
{
lean_ctor_set(v___x_1890_, 0, v___x_1893_);
v___x_1895_ = v___x_1890_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v___x_1893_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
return v___x_1895_;
}
}
else
{
lean_object* v___x_1897_; 
lean_del_object(v___x_1890_);
lean_inc(v_a_1879_);
lean_inc_ref(v_a_1878_);
lean_inc(v_a_1877_);
lean_inc_ref(v_a_1876_);
lean_inc(v_a_1875_);
lean_inc_ref(v_a_1874_);
lean_inc(v_a_1873_);
lean_inc_ref(v_a_1872_);
lean_inc(v_a_1871_);
lean_inc(v_a_1870_);
v___x_1897_ = lean_grind_mk_heq_proof(v_lhs_1868_, v_rhs_1869_, v_a_1870_, v_a_1871_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_, v_a_1878_, v_a_1879_);
if (lean_obj_tag(v___x_1897_) == 0)
{
lean_object* v_a_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1906_; 
v_a_1898_ = lean_ctor_get(v___x_1897_, 0);
v_isSharedCheck_1906_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1906_ == 0)
{
v___x_1900_ = v___x_1897_;
v_isShared_1901_ = v_isSharedCheck_1906_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_a_1898_);
lean_dec(v___x_1897_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1906_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1902_; lean_object* v___x_1904_; 
v___x_1902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1902_, 0, v_a_1898_);
if (v_isShared_1901_ == 0)
{
lean_ctor_set(v___x_1900_, 0, v___x_1902_);
v___x_1904_ = v___x_1900_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v___x_1902_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
return v___x_1904_;
}
}
}
else
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1914_; 
v_a_1907_ = lean_ctor_get(v___x_1897_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1909_ = v___x_1897_;
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1897_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1912_; 
if (v_isShared_1910_ == 0)
{
v___x_1912_ = v___x_1909_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_a_1907_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
}
}
}
}
else
{
lean_object* v_a_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1923_; 
lean_dec_ref(v_rhs_1869_);
lean_dec_ref(v_lhs_1868_);
v_a_1916_ = lean_ctor_get(v___x_1887_, 0);
v_isSharedCheck_1923_ = !lean_is_exclusive(v___x_1887_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1918_ = v___x_1887_;
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_a_1916_);
lean_dec(v___x_1887_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v___x_1921_; 
if (v_isShared_1919_ == 0)
{
v___x_1921_ = v___x_1918_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v_a_1916_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
return v___x_1921_;
}
}
}
}
}
else
{
lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1931_; 
lean_dec_ref(v___f_1881_);
lean_dec_ref(v_rhs_1869_);
lean_dec_ref(v_lhs_1868_);
v_a_1924_ = lean_ctor_get(v___y_1883_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___y_1883_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1926_ = v___y_1883_;
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_dec(v___y_1883_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_proveHEq_x3f___boxed(lean_object* v_lhs_1936_, lean_object* v_rhs_1937_, lean_object* v_a_1938_, lean_object* v_a_1939_, lean_object* v_a_1940_, lean_object* v_a_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_){
_start:
{
lean_object* v_res_1949_; 
v_res_1949_ = l_Lean_Meta_Grind_proveHEq_x3f(v_lhs_1936_, v_rhs_1937_, v_a_1938_, v_a_1939_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_);
lean_dec(v_a_1947_);
lean_dec_ref(v_a_1946_);
lean_dec(v_a_1945_);
lean_dec_ref(v_a_1944_);
lean_dec(v_a_1943_);
lean_dec_ref(v_a_1942_);
lean_dec(v_a_1941_);
lean_dec_ref(v_a_1940_);
lean_dec(v_a_1939_);
lean_dec(v_a_1938_);
return v_res_1949_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_ProveEq(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_ProveEq(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Init_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_ProveEq(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_ProveEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_ProveEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_ProveEq(builtin);
}
#ifdef __cplusplus
}
#endif
