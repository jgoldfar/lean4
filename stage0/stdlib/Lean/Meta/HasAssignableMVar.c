// Lean compiler output
// Module: Lean.Meta.HasAssignableMVar
// Imports: public import Lean.Meta.Basic
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
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Level_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint64_t l_Lean_instHashableLevelMVarId_hash(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqLevelMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getDecl(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_isLevelMVarAssignable_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_isLevelMVarAssignable_spec__1___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_isLevelMVarAssignable_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_isLevelMVarAssignable_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_isLevelMVarAssignable_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_isLevelMVarAssignable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Meta.HasAssignableMVar"};
static const lean_object* l_Lean_Meta_isLevelMVarAssignable___closed__0 = (const lean_object*)&l_Lean_Meta_isLevelMVarAssignable___closed__0_value;
static const lean_string_object l_Lean_Meta_isLevelMVarAssignable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.isLevelMVarAssignable"};
static const lean_object* l_Lean_Meta_isLevelMVarAssignable___closed__1 = (const lean_object*)&l_Lean_Meta_isLevelMVarAssignable___closed__1_value;
static const lean_string_object l_Lean_Meta_isLevelMVarAssignable___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "unknown universe metavariable "};
static const lean_object* l_Lean_Meta_isLevelMVarAssignable___closed__2 = (const lean_object*)&l_Lean_Meta_isLevelMVarAssignable___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelMVarAssignable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelMVarAssignable___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_hasAssignableLevelMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_hasAssignableLevelMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "hasAssignableMVar"};
static const lean_object* l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6_spec__7(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_hasAssignableMVar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_hasAssignableMVar___closed__0;
static lean_once_cell_t l_Lean_Meta_hasAssignableMVar___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_hasAssignableMVar___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_hasAssignableMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_hasAssignableMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_isLevelMVarAssignable_spec__1(lean_object* v_msg_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_){
_start:
{
lean_object* v___f_8_; lean_object* v___x_377__overap_9_; lean_object* v___x_10_; 
v___f_8_ = ((lean_object*)(l_panic___at___00Lean_Meta_isLevelMVarAssignable_spec__1___closed__0));
v___x_377__overap_9_ = lean_panic_fn_borrowed(v___f_8_, v_msg_2_);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
lean_inc_ref(v___y_3_);
v___x_10_ = lean_apply_5(v___x_377__overap_9_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, lean_box(0));
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_isLevelMVarAssignable_spec__1___boxed(lean_object* v_msg_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = l_panic___at___00Lean_Meta_isLevelMVarAssignable_spec__1(v_msg_11_, v___y_12_, v___y_13_, v___y_14_, v___y_15_);
lean_dec(v___y_15_);
lean_dec_ref(v___y_14_);
lean_dec(v___y_13_);
lean_dec_ref(v___y_12_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0_spec__2___redArg(lean_object* v_keys_18_, lean_object* v_vals_19_, lean_object* v_i_20_, lean_object* v_k_21_){
_start:
{
lean_object* v___x_22_; uint8_t v___x_23_; 
v___x_22_ = lean_array_get_size(v_keys_18_);
v___x_23_ = lean_nat_dec_lt(v_i_20_, v___x_22_);
if (v___x_23_ == 0)
{
lean_object* v___x_24_; 
lean_dec(v_i_20_);
v___x_24_ = lean_box(0);
return v___x_24_;
}
else
{
lean_object* v_k_x27_25_; uint8_t v___x_26_; 
v_k_x27_25_ = lean_array_fget_borrowed(v_keys_18_, v_i_20_);
v___x_26_ = l_Lean_instBEqLevelMVarId_beq(v_k_21_, v_k_x27_25_);
if (v___x_26_ == 0)
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_unsigned_to_nat(1u);
v___x_28_ = lean_nat_add(v_i_20_, v___x_27_);
lean_dec(v_i_20_);
v_i_20_ = v___x_28_;
goto _start;
}
else
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_array_fget_borrowed(v_vals_19_, v_i_20_);
lean_dec(v_i_20_);
lean_inc(v___x_30_);
v___x_31_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
return v___x_31_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_keys_32_, lean_object* v_vals_33_, lean_object* v_i_34_, lean_object* v_k_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0_spec__2___redArg(v_keys_32_, v_vals_33_, v_i_34_, v_k_35_);
lean_dec(v_k_35_);
lean_dec_ref(v_vals_33_);
lean_dec_ref(v_keys_32_);
return v_res_36_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_37_; size_t v___x_38_; size_t v___x_39_; 
v___x_37_ = ((size_t)5ULL);
v___x_38_ = ((size_t)1ULL);
v___x_39_ = lean_usize_shift_left(v___x_38_, v___x_37_);
return v___x_39_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_40_; size_t v___x_41_; size_t v___x_42_; 
v___x_40_ = ((size_t)1ULL);
v___x_41_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg___closed__0);
v___x_42_ = lean_usize_sub(v___x_41_, v___x_40_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg(lean_object* v_x_43_, size_t v_x_44_, lean_object* v_x_45_){
_start:
{
if (lean_obj_tag(v_x_43_) == 0)
{
lean_object* v_es_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_67_; 
v_es_46_ = lean_ctor_get(v_x_43_, 0);
v_isSharedCheck_67_ = !lean_is_exclusive(v_x_43_);
if (v_isSharedCheck_67_ == 0)
{
v___x_48_ = v_x_43_;
v_isShared_49_ = v_isSharedCheck_67_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_es_46_);
lean_dec(v_x_43_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_67_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___x_50_; size_t v___x_51_; size_t v___x_52_; size_t v___x_53_; lean_object* v_j_54_; lean_object* v___x_55_; 
v___x_50_ = lean_box(2);
v___x_51_ = ((size_t)5ULL);
v___x_52_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg___closed__1);
v___x_53_ = lean_usize_land(v_x_44_, v___x_52_);
v_j_54_ = lean_usize_to_nat(v___x_53_);
v___x_55_ = lean_array_get(v___x_50_, v_es_46_, v_j_54_);
lean_dec(v_j_54_);
lean_dec_ref(v_es_46_);
switch(lean_obj_tag(v___x_55_))
{
case 0:
{
lean_object* v_key_56_; lean_object* v_val_57_; uint8_t v___x_58_; 
v_key_56_ = lean_ctor_get(v___x_55_, 0);
lean_inc(v_key_56_);
v_val_57_ = lean_ctor_get(v___x_55_, 1);
lean_inc(v_val_57_);
lean_dec_ref(v___x_55_);
v___x_58_ = l_Lean_instBEqLevelMVarId_beq(v_x_45_, v_key_56_);
lean_dec(v_key_56_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; 
lean_dec(v_val_57_);
lean_del_object(v___x_48_);
v___x_59_ = lean_box(0);
return v___x_59_;
}
else
{
lean_object* v___x_61_; 
if (v_isShared_49_ == 0)
{
lean_ctor_set_tag(v___x_48_, 1);
lean_ctor_set(v___x_48_, 0, v_val_57_);
v___x_61_ = v___x_48_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_val_57_);
v___x_61_ = v_reuseFailAlloc_62_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
return v___x_61_;
}
}
}
case 1:
{
lean_object* v_node_63_; size_t v___x_64_; 
lean_del_object(v___x_48_);
v_node_63_ = lean_ctor_get(v___x_55_, 0);
lean_inc(v_node_63_);
lean_dec_ref(v___x_55_);
v___x_64_ = lean_usize_shift_right(v_x_44_, v___x_51_);
v_x_43_ = v_node_63_;
v_x_44_ = v___x_64_;
goto _start;
}
default: 
{
lean_object* v___x_66_; 
lean_del_object(v___x_48_);
v___x_66_ = lean_box(0);
return v___x_66_;
}
}
}
}
else
{
lean_object* v_ks_68_; lean_object* v_vs_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v_ks_68_ = lean_ctor_get(v_x_43_, 0);
lean_inc_ref(v_ks_68_);
v_vs_69_ = lean_ctor_get(v_x_43_, 1);
lean_inc_ref(v_vs_69_);
lean_dec_ref(v_x_43_);
v___x_70_ = lean_unsigned_to_nat(0u);
v___x_71_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0_spec__2___redArg(v_ks_68_, v_vs_69_, v___x_70_, v_x_45_);
lean_dec_ref(v_vs_69_);
lean_dec_ref(v_ks_68_);
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg___boxed(lean_object* v_x_72_, lean_object* v_x_73_, lean_object* v_x_74_){
_start:
{
size_t v_x_524__boxed_75_; lean_object* v_res_76_; 
v_x_524__boxed_75_ = lean_unbox_usize(v_x_73_);
lean_dec(v_x_73_);
v_res_76_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg(v_x_72_, v_x_524__boxed_75_, v_x_74_);
lean_dec(v_x_74_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0___redArg(lean_object* v_x_77_, lean_object* v_x_78_){
_start:
{
uint64_t v___x_79_; size_t v___x_80_; lean_object* v___x_81_; 
v___x_79_ = l_Lean_instHashableLevelMVarId_hash(v_x_78_);
v___x_80_ = lean_uint64_to_usize(v___x_79_);
v___x_81_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg(v_x_77_, v___x_80_, v_x_78_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0___redArg___boxed(lean_object* v_x_82_, lean_object* v_x_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0___redArg(v_x_82_, v_x_83_);
lean_dec(v_x_83_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelMVarAssignable(lean_object* v_mvarId_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_){
_start:
{
lean_object* v___x_94_; lean_object* v_mctx_95_; lean_object* v_levelAssignDepth_96_; lean_object* v_lDepth_97_; lean_object* v___x_98_; 
v___x_94_ = lean_st_ref_get(v_a_90_);
v_mctx_95_ = lean_ctor_get(v___x_94_, 0);
lean_inc_ref(v_mctx_95_);
lean_dec(v___x_94_);
v_levelAssignDepth_96_ = lean_ctor_get(v_mctx_95_, 1);
lean_inc(v_levelAssignDepth_96_);
v_lDepth_97_ = lean_ctor_get(v_mctx_95_, 3);
lean_inc_ref(v_lDepth_97_);
lean_dec_ref(v_mctx_95_);
v___x_98_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0___redArg(v_lDepth_97_, v_mvarId_88_);
if (lean_obj_tag(v___x_98_) == 1)
{
lean_object* v_val_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_108_; 
lean_dec(v_mvarId_88_);
v_val_99_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_108_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_108_ == 0)
{
v___x_101_ = v___x_98_;
v_isShared_102_ = v_isSharedCheck_108_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_val_99_);
lean_dec(v___x_98_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_108_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
uint8_t v___x_103_; lean_object* v___x_104_; lean_object* v___x_106_; 
v___x_103_ = lean_nat_dec_le(v_levelAssignDepth_96_, v_val_99_);
lean_dec(v_val_99_);
lean_dec(v_levelAssignDepth_96_);
v___x_104_ = lean_box(v___x_103_);
if (v_isShared_102_ == 0)
{
lean_ctor_set_tag(v___x_101_, 0);
lean_ctor_set(v___x_101_, 0, v___x_104_);
v___x_106_ = v___x_101_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v___x_104_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
else
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; uint8_t v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
lean_dec(v___x_98_);
lean_dec(v_levelAssignDepth_96_);
v___x_109_ = ((lean_object*)(l_Lean_Meta_isLevelMVarAssignable___closed__0));
v___x_110_ = ((lean_object*)(l_Lean_Meta_isLevelMVarAssignable___closed__1));
v___x_111_ = lean_unsigned_to_nat(21u);
v___x_112_ = lean_unsigned_to_nat(14u);
v___x_113_ = ((lean_object*)(l_Lean_Meta_isLevelMVarAssignable___closed__2));
v___x_114_ = 1;
v___x_115_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_mvarId_88_, v___x_114_);
v___x_116_ = lean_string_append(v___x_113_, v___x_115_);
lean_dec_ref(v___x_115_);
v___x_117_ = l_mkPanicMessageWithDecl(v___x_109_, v___x_110_, v___x_111_, v___x_112_, v___x_116_);
lean_dec_ref(v___x_116_);
v___x_118_ = l_panic___at___00Lean_Meta_isLevelMVarAssignable_spec__1(v___x_117_, v_a_89_, v_a_90_, v_a_91_, v_a_92_);
return v___x_118_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_isLevelMVarAssignable___boxed(lean_object* v_mvarId_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l_Lean_Meta_isLevelMVarAssignable(v_mvarId_119_, v_a_120_, v_a_121_, v_a_122_, v_a_123_);
lean_dec(v_a_123_);
lean_dec_ref(v_a_122_);
lean_dec(v_a_121_);
lean_dec_ref(v_a_120_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0(lean_object* v_00_u03b2_126_, lean_object* v_x_127_, lean_object* v_x_128_){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0___redArg(v_x_127_, v_x_128_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0___boxed(lean_object* v_00_u03b2_130_, lean_object* v_x_131_, lean_object* v_x_132_){
_start:
{
lean_object* v_res_133_; 
v_res_133_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0(v_00_u03b2_130_, v_x_131_, v_x_132_);
lean_dec(v_x_132_);
return v_res_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0(lean_object* v_00_u03b2_134_, lean_object* v_x_135_, size_t v_x_136_, lean_object* v_x_137_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___redArg(v_x_135_, v_x_136_, v_x_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0___boxed(lean_object* v_00_u03b2_139_, lean_object* v_x_140_, lean_object* v_x_141_, lean_object* v_x_142_){
_start:
{
size_t v_x_665__boxed_143_; lean_object* v_res_144_; 
v_x_665__boxed_143_ = lean_unbox_usize(v_x_141_);
lean_dec(v_x_141_);
v_res_144_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0(v_00_u03b2_139_, v_x_140_, v_x_665__boxed_143_, v_x_142_);
lean_dec(v_x_142_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_145_, lean_object* v_keys_146_, lean_object* v_vals_147_, lean_object* v_heq_148_, lean_object* v_i_149_, lean_object* v_k_150_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0_spec__2___redArg(v_keys_146_, v_vals_147_, v_i_149_, v_k_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_152_, lean_object* v_keys_153_, lean_object* v_vals_154_, lean_object* v_heq_155_, lean_object* v_i_156_, lean_object* v_k_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_isLevelMVarAssignable_spec__0_spec__0_spec__2(v_00_u03b2_152_, v_keys_153_, v_vals_154_, v_heq_155_, v_i_156_, v_k_157_);
lean_dec(v_k_157_);
lean_dec_ref(v_vals_154_);
lean_dec_ref(v_keys_153_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_hasAssignableLevelMVar(lean_object* v_x_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_){
_start:
{
lean_object* v___y_166_; lean_object* v___y_167_; lean_object* v___y_168_; lean_object* v___y_169_; lean_object* v___y_170_; lean_object* v___y_171_; uint8_t v_a_172_; lean_object* v_lvl_u2081_178_; lean_object* v_lvl_u2082_179_; lean_object* v___y_180_; lean_object* v___y_181_; lean_object* v___y_182_; lean_object* v___y_183_; 
switch(lean_obj_tag(v_x_159_))
{
case 1:
{
lean_object* v_a_190_; uint8_t v___x_191_; 
v_a_190_ = lean_ctor_get(v_x_159_, 0);
lean_inc(v_a_190_);
lean_dec_ref(v_x_159_);
v___x_191_ = l_Lean_Level_hasMVar(v_a_190_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; lean_object* v___x_193_; 
lean_dec(v_a_190_);
v___x_192_ = lean_box(v___x_191_);
v___x_193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
return v___x_193_;
}
else
{
v_x_159_ = v_a_190_;
goto _start;
}
}
case 2:
{
lean_object* v_a_195_; lean_object* v_a_196_; 
v_a_195_ = lean_ctor_get(v_x_159_, 0);
lean_inc(v_a_195_);
v_a_196_ = lean_ctor_get(v_x_159_, 1);
lean_inc(v_a_196_);
lean_dec_ref(v_x_159_);
v_lvl_u2081_178_ = v_a_195_;
v_lvl_u2082_179_ = v_a_196_;
v___y_180_ = v_a_160_;
v___y_181_ = v_a_161_;
v___y_182_ = v_a_162_;
v___y_183_ = v_a_163_;
goto v___jp_177_;
}
case 3:
{
lean_object* v_a_197_; lean_object* v_a_198_; 
v_a_197_ = lean_ctor_get(v_x_159_, 0);
lean_inc(v_a_197_);
v_a_198_ = lean_ctor_get(v_x_159_, 1);
lean_inc(v_a_198_);
lean_dec_ref(v_x_159_);
v_lvl_u2081_178_ = v_a_197_;
v_lvl_u2082_179_ = v_a_198_;
v___y_180_ = v_a_160_;
v___y_181_ = v_a_161_;
v___y_182_ = v_a_162_;
v___y_183_ = v_a_163_;
goto v___jp_177_;
}
case 5:
{
lean_object* v_a_199_; lean_object* v___x_200_; 
v_a_199_ = lean_ctor_get(v_x_159_, 0);
lean_inc(v_a_199_);
lean_dec_ref(v_x_159_);
v___x_200_ = l_Lean_Meta_isLevelMVarAssignable(v_a_199_, v_a_160_, v_a_161_, v_a_162_, v_a_163_);
return v___x_200_;
}
default: 
{
uint8_t v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
lean_dec(v_x_159_);
v___x_201_ = 0;
v___x_202_ = lean_box(v___x_201_);
v___x_203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
return v___x_203_;
}
}
v___jp_165_:
{
if (v_a_172_ == 0)
{
uint8_t v___x_173_; 
lean_dec_ref(v___y_171_);
v___x_173_ = l_Lean_Level_hasMVar(v___y_170_);
if (v___x_173_ == 0)
{
lean_object* v___x_174_; lean_object* v___x_175_; 
lean_dec(v___y_170_);
v___x_174_ = lean_box(v___x_173_);
v___x_175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
return v___x_175_;
}
else
{
v_x_159_ = v___y_170_;
v_a_160_ = v___y_169_;
v_a_161_ = v___y_168_;
v_a_162_ = v___y_167_;
v_a_163_ = v___y_166_;
goto _start;
}
}
else
{
lean_dec(v___y_170_);
return v___y_171_;
}
}
v___jp_177_:
{
uint8_t v___x_184_; 
v___x_184_ = l_Lean_Level_hasMVar(v_lvl_u2081_178_);
if (v___x_184_ == 0)
{
lean_object* v___x_185_; lean_object* v___x_186_; 
lean_dec(v_lvl_u2081_178_);
v___x_185_ = lean_box(v___x_184_);
v___x_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
v___y_166_ = v___y_183_;
v___y_167_ = v___y_182_;
v___y_168_ = v___y_181_;
v___y_169_ = v___y_180_;
v___y_170_ = v_lvl_u2082_179_;
v___y_171_ = v___x_186_;
v_a_172_ = v___x_184_;
goto v___jp_165_;
}
else
{
lean_object* v___x_187_; 
v___x_187_ = l_Lean_Meta_hasAssignableLevelMVar(v_lvl_u2081_178_, v___y_180_, v___y_181_, v___y_182_, v___y_183_);
if (lean_obj_tag(v___x_187_) == 0)
{
lean_object* v_a_188_; uint8_t v___x_189_; 
v_a_188_ = lean_ctor_get(v___x_187_, 0);
lean_inc(v_a_188_);
v___x_189_ = lean_unbox(v_a_188_);
lean_dec(v_a_188_);
v___y_166_ = v___y_183_;
v___y_167_ = v___y_182_;
v___y_168_ = v___y_181_;
v___y_169_ = v___y_180_;
v___y_170_ = v_lvl_u2082_179_;
v___y_171_ = v___x_187_;
v_a_172_ = v___x_189_;
goto v___jp_165_;
}
else
{
lean_dec(v_lvl_u2082_179_);
return v___x_187_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_hasAssignableLevelMVar___boxed(lean_object* v_x_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lean_Meta_hasAssignableLevelMVar(v_x_204_, v_a_205_, v_a_206_, v_a_207_, v_a_208_);
lean_dec(v_a_208_);
lean_dec_ref(v_a_207_);
lean_dec(v_a_206_);
lean_dec_ref(v_a_205_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0___redArg(lean_object* v_mvarId_211_, lean_object* v___y_212_){
_start:
{
lean_object* v___x_214_; lean_object* v_mctx_215_; lean_object* v_decl_216_; lean_object* v_depth_217_; lean_object* v_depth_218_; uint8_t v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_214_ = lean_st_ref_get(v___y_212_);
v_mctx_215_ = lean_ctor_get(v___x_214_, 0);
lean_inc_ref_n(v_mctx_215_, 2);
lean_dec(v___x_214_);
v_decl_216_ = l_Lean_MetavarContext_getDecl(v_mctx_215_, v_mvarId_211_);
v_depth_217_ = lean_ctor_get(v_decl_216_, 3);
lean_inc(v_depth_217_);
lean_dec_ref(v_decl_216_);
v_depth_218_ = lean_ctor_get(v_mctx_215_, 0);
lean_inc(v_depth_218_);
lean_dec_ref(v_mctx_215_);
v___x_219_ = lean_nat_dec_eq(v_depth_217_, v_depth_218_);
lean_dec(v_depth_218_);
lean_dec(v_depth_217_);
v___x_220_ = lean_box(v___x_219_);
v___x_221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0___redArg___boxed(lean_object* v_mvarId_222_, lean_object* v___y_223_, lean_object* v___y_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0___redArg(v_mvarId_222_, v___y_223_);
lean_dec(v___y_223_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0(lean_object* v_mvarId_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0___redArg(v_mvarId_226_, v___y_229_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0___boxed(lean_object* v_mvarId_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0(v_mvarId_234_, v___y_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_);
lean_dec(v___y_239_);
lean_dec_ref(v___y_238_);
lean_dec(v___y_237_);
lean_dec_ref(v___y_236_);
lean_dec(v___y_235_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1___redArg(lean_object* v_x_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
if (lean_obj_tag(v_x_242_) == 0)
{
uint8_t v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
v___x_248_ = 0;
v___x_249_ = lean_box(v___x_248_);
v___x_250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_250_, 0, v___x_249_);
return v___x_250_;
}
else
{
lean_object* v_head_251_; lean_object* v_tail_252_; lean_object* v___x_253_; 
v_head_251_ = lean_ctor_get(v_x_242_, 0);
lean_inc(v_head_251_);
v_tail_252_ = lean_ctor_get(v_x_242_, 1);
lean_inc(v_tail_252_);
lean_dec_ref(v_x_242_);
v___x_253_ = l_Lean_Meta_hasAssignableLevelMVar(v_head_251_, v___y_243_, v___y_244_, v___y_245_, v___y_246_);
if (lean_obj_tag(v___x_253_) == 0)
{
lean_object* v_a_254_; uint8_t v___x_255_; 
v_a_254_ = lean_ctor_get(v___x_253_, 0);
lean_inc(v_a_254_);
v___x_255_ = lean_unbox(v_a_254_);
lean_dec(v_a_254_);
if (v___x_255_ == 0)
{
lean_dec_ref(v___x_253_);
v_x_242_ = v_tail_252_;
goto _start;
}
else
{
lean_dec(v_tail_252_);
return v___x_253_;
}
}
else
{
lean_dec(v_tail_252_);
return v___x_253_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1___redArg___boxed(lean_object* v_x_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1___redArg(v_x_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_);
lean_dec(v___y_261_);
lean_dec_ref(v___y_260_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
return v_res_263_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___redArg(lean_object* v_a_264_, lean_object* v_x_265_){
_start:
{
if (lean_obj_tag(v_x_265_) == 0)
{
uint8_t v___x_266_; 
v___x_266_ = 0;
return v___x_266_;
}
else
{
lean_object* v_key_267_; lean_object* v_tail_268_; uint8_t v___x_269_; 
v_key_267_ = lean_ctor_get(v_x_265_, 0);
v_tail_268_ = lean_ctor_get(v_x_265_, 2);
v___x_269_ = lean_expr_eqv(v_key_267_, v_a_264_);
if (v___x_269_ == 0)
{
v_x_265_ = v_tail_268_;
goto _start;
}
else
{
return v___x_269_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___redArg___boxed(lean_object* v_a_271_, lean_object* v_x_272_){
_start:
{
uint8_t v_res_273_; lean_object* v_r_274_; 
v_res_273_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___redArg(v_a_271_, v_x_272_);
lean_dec(v_x_272_);
lean_dec_ref(v_a_271_);
v_r_274_ = lean_box(v_res_273_);
return v_r_274_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3___redArg(lean_object* v_m_275_, lean_object* v_a_276_){
_start:
{
lean_object* v_buckets_277_; lean_object* v___x_278_; uint64_t v___x_279_; uint64_t v___x_280_; uint64_t v___x_281_; uint64_t v_fold_282_; uint64_t v___x_283_; uint64_t v___x_284_; uint64_t v___x_285_; size_t v___x_286_; size_t v___x_287_; size_t v___x_288_; size_t v___x_289_; size_t v___x_290_; lean_object* v___x_291_; uint8_t v___x_292_; 
v_buckets_277_ = lean_ctor_get(v_m_275_, 1);
v___x_278_ = lean_array_get_size(v_buckets_277_);
v___x_279_ = l_Lean_Expr_hash(v_a_276_);
v___x_280_ = 32ULL;
v___x_281_ = lean_uint64_shift_right(v___x_279_, v___x_280_);
v_fold_282_ = lean_uint64_xor(v___x_279_, v___x_281_);
v___x_283_ = 16ULL;
v___x_284_ = lean_uint64_shift_right(v_fold_282_, v___x_283_);
v___x_285_ = lean_uint64_xor(v_fold_282_, v___x_284_);
v___x_286_ = lean_uint64_to_usize(v___x_285_);
v___x_287_ = lean_usize_of_nat(v___x_278_);
v___x_288_ = ((size_t)1ULL);
v___x_289_ = lean_usize_sub(v___x_287_, v___x_288_);
v___x_290_ = lean_usize_land(v___x_286_, v___x_289_);
v___x_291_ = lean_array_uget_borrowed(v_buckets_277_, v___x_290_);
v___x_292_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___redArg(v_a_276_, v___x_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3___redArg___boxed(lean_object* v_m_293_, lean_object* v_a_294_){
_start:
{
uint8_t v_res_295_; lean_object* v_r_296_; 
v_res_295_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3___redArg(v_m_293_, v_a_294_);
lean_dec_ref(v_a_294_);
lean_dec_ref(v_m_293_);
v_r_296_ = lean_box(v_res_295_);
return v_r_296_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6_spec__7___redArg(lean_object* v_x_297_, lean_object* v_x_298_){
_start:
{
if (lean_obj_tag(v_x_298_) == 0)
{
return v_x_297_;
}
else
{
lean_object* v_key_299_; lean_object* v_value_300_; lean_object* v_tail_301_; lean_object* v___x_303_; uint8_t v_isShared_304_; uint8_t v_isSharedCheck_324_; 
v_key_299_ = lean_ctor_get(v_x_298_, 0);
v_value_300_ = lean_ctor_get(v_x_298_, 1);
v_tail_301_ = lean_ctor_get(v_x_298_, 2);
v_isSharedCheck_324_ = !lean_is_exclusive(v_x_298_);
if (v_isSharedCheck_324_ == 0)
{
v___x_303_ = v_x_298_;
v_isShared_304_ = v_isSharedCheck_324_;
goto v_resetjp_302_;
}
else
{
lean_inc(v_tail_301_);
lean_inc(v_value_300_);
lean_inc(v_key_299_);
lean_dec(v_x_298_);
v___x_303_ = lean_box(0);
v_isShared_304_ = v_isSharedCheck_324_;
goto v_resetjp_302_;
}
v_resetjp_302_:
{
lean_object* v___x_305_; uint64_t v___x_306_; uint64_t v___x_307_; uint64_t v___x_308_; uint64_t v_fold_309_; uint64_t v___x_310_; uint64_t v___x_311_; uint64_t v___x_312_; size_t v___x_313_; size_t v___x_314_; size_t v___x_315_; size_t v___x_316_; size_t v___x_317_; lean_object* v___x_318_; lean_object* v___x_320_; 
v___x_305_ = lean_array_get_size(v_x_297_);
v___x_306_ = l_Lean_Expr_hash(v_key_299_);
v___x_307_ = 32ULL;
v___x_308_ = lean_uint64_shift_right(v___x_306_, v___x_307_);
v_fold_309_ = lean_uint64_xor(v___x_306_, v___x_308_);
v___x_310_ = 16ULL;
v___x_311_ = lean_uint64_shift_right(v_fold_309_, v___x_310_);
v___x_312_ = lean_uint64_xor(v_fold_309_, v___x_311_);
v___x_313_ = lean_uint64_to_usize(v___x_312_);
v___x_314_ = lean_usize_of_nat(v___x_305_);
v___x_315_ = ((size_t)1ULL);
v___x_316_ = lean_usize_sub(v___x_314_, v___x_315_);
v___x_317_ = lean_usize_land(v___x_313_, v___x_316_);
v___x_318_ = lean_array_uget_borrowed(v_x_297_, v___x_317_);
lean_inc(v___x_318_);
if (v_isShared_304_ == 0)
{
lean_ctor_set(v___x_303_, 2, v___x_318_);
v___x_320_ = v___x_303_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_key_299_);
lean_ctor_set(v_reuseFailAlloc_323_, 1, v_value_300_);
lean_ctor_set(v_reuseFailAlloc_323_, 2, v___x_318_);
v___x_320_ = v_reuseFailAlloc_323_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
lean_object* v___x_321_; 
v___x_321_ = lean_array_uset(v_x_297_, v___x_317_, v___x_320_);
v_x_297_ = v___x_321_;
v_x_298_ = v_tail_301_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6___redArg(lean_object* v_i_325_, lean_object* v_source_326_, lean_object* v_target_327_){
_start:
{
lean_object* v___x_328_; uint8_t v___x_329_; 
v___x_328_ = lean_array_get_size(v_source_326_);
v___x_329_ = lean_nat_dec_lt(v_i_325_, v___x_328_);
if (v___x_329_ == 0)
{
lean_dec_ref(v_source_326_);
lean_dec(v_i_325_);
return v_target_327_;
}
else
{
lean_object* v_es_330_; lean_object* v___x_331_; lean_object* v_source_332_; lean_object* v_target_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v_es_330_ = lean_array_fget(v_source_326_, v_i_325_);
v___x_331_ = lean_box(0);
v_source_332_ = lean_array_fset(v_source_326_, v_i_325_, v___x_331_);
v_target_333_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6_spec__7___redArg(v_target_327_, v_es_330_);
v___x_334_ = lean_unsigned_to_nat(1u);
v___x_335_ = lean_nat_add(v_i_325_, v___x_334_);
lean_dec(v_i_325_);
v_i_325_ = v___x_335_;
v_source_326_ = v_source_332_;
v_target_327_ = v_target_333_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5___redArg(lean_object* v_data_337_){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v_nbuckets_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_338_ = lean_array_get_size(v_data_337_);
v___x_339_ = lean_unsigned_to_nat(2u);
v_nbuckets_340_ = lean_nat_mul(v___x_338_, v___x_339_);
v___x_341_ = lean_unsigned_to_nat(0u);
v___x_342_ = lean_box(0);
v___x_343_ = lean_mk_array(v_nbuckets_340_, v___x_342_);
v___x_344_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6___redArg(v___x_341_, v_data_337_, v___x_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4___redArg(lean_object* v_m_345_, lean_object* v_a_346_, lean_object* v_b_347_){
_start:
{
lean_object* v_size_348_; lean_object* v_buckets_349_; lean_object* v___x_350_; uint64_t v___x_351_; uint64_t v___x_352_; uint64_t v___x_353_; uint64_t v_fold_354_; uint64_t v___x_355_; uint64_t v___x_356_; uint64_t v___x_357_; size_t v___x_358_; size_t v___x_359_; size_t v___x_360_; size_t v___x_361_; size_t v___x_362_; lean_object* v_bkt_363_; uint8_t v___x_364_; 
v_size_348_ = lean_ctor_get(v_m_345_, 0);
v_buckets_349_ = lean_ctor_get(v_m_345_, 1);
v___x_350_ = lean_array_get_size(v_buckets_349_);
v___x_351_ = l_Lean_Expr_hash(v_a_346_);
v___x_352_ = 32ULL;
v___x_353_ = lean_uint64_shift_right(v___x_351_, v___x_352_);
v_fold_354_ = lean_uint64_xor(v___x_351_, v___x_353_);
v___x_355_ = 16ULL;
v___x_356_ = lean_uint64_shift_right(v_fold_354_, v___x_355_);
v___x_357_ = lean_uint64_xor(v_fold_354_, v___x_356_);
v___x_358_ = lean_uint64_to_usize(v___x_357_);
v___x_359_ = lean_usize_of_nat(v___x_350_);
v___x_360_ = ((size_t)1ULL);
v___x_361_ = lean_usize_sub(v___x_359_, v___x_360_);
v___x_362_ = lean_usize_land(v___x_358_, v___x_361_);
v_bkt_363_ = lean_array_uget_borrowed(v_buckets_349_, v___x_362_);
v___x_364_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___redArg(v_a_346_, v_bkt_363_);
if (v___x_364_ == 0)
{
lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_385_; 
lean_inc_ref(v_buckets_349_);
lean_inc(v_size_348_);
v_isSharedCheck_385_ = !lean_is_exclusive(v_m_345_);
if (v_isSharedCheck_385_ == 0)
{
lean_object* v_unused_386_; lean_object* v_unused_387_; 
v_unused_386_ = lean_ctor_get(v_m_345_, 1);
lean_dec(v_unused_386_);
v_unused_387_ = lean_ctor_get(v_m_345_, 0);
lean_dec(v_unused_387_);
v___x_366_ = v_m_345_;
v_isShared_367_ = v_isSharedCheck_385_;
goto v_resetjp_365_;
}
else
{
lean_dec(v_m_345_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_385_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_368_; lean_object* v_size_x27_369_; lean_object* v___x_370_; lean_object* v_buckets_x27_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; uint8_t v___x_377_; 
v___x_368_ = lean_unsigned_to_nat(1u);
v_size_x27_369_ = lean_nat_add(v_size_348_, v___x_368_);
lean_dec(v_size_348_);
lean_inc(v_bkt_363_);
v___x_370_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_370_, 0, v_a_346_);
lean_ctor_set(v___x_370_, 1, v_b_347_);
lean_ctor_set(v___x_370_, 2, v_bkt_363_);
v_buckets_x27_371_ = lean_array_uset(v_buckets_349_, v___x_362_, v___x_370_);
v___x_372_ = lean_unsigned_to_nat(4u);
v___x_373_ = lean_nat_mul(v_size_x27_369_, v___x_372_);
v___x_374_ = lean_unsigned_to_nat(3u);
v___x_375_ = lean_nat_div(v___x_373_, v___x_374_);
lean_dec(v___x_373_);
v___x_376_ = lean_array_get_size(v_buckets_x27_371_);
v___x_377_ = lean_nat_dec_le(v___x_375_, v___x_376_);
lean_dec(v___x_375_);
if (v___x_377_ == 0)
{
lean_object* v_val_378_; lean_object* v___x_380_; 
v_val_378_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5___redArg(v_buckets_x27_371_);
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 1, v_val_378_);
lean_ctor_set(v___x_366_, 0, v_size_x27_369_);
v___x_380_ = v___x_366_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_size_x27_369_);
lean_ctor_set(v_reuseFailAlloc_381_, 1, v_val_378_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
else
{
lean_object* v___x_383_; 
if (v_isShared_367_ == 0)
{
lean_ctor_set(v___x_366_, 1, v_buckets_x27_371_);
lean_ctor_set(v___x_366_, 0, v_size_x27_369_);
v___x_383_ = v___x_366_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_size_x27_369_);
lean_ctor_set(v_reuseFailAlloc_384_, 1, v_buckets_x27_371_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
}
else
{
lean_dec(v_b_347_);
lean_dec_ref(v_a_346_);
return v_m_345_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go(lean_object* v_e_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_){
_start:
{
lean_object* v_d_397_; lean_object* v_b_398_; lean_object* v___y_399_; lean_object* v___y_400_; lean_object* v___y_401_; lean_object* v___y_402_; lean_object* v___y_403_; 
switch(lean_obj_tag(v_e_389_))
{
case 2:
{
lean_object* v_mvarId_418_; lean_object* v___x_419_; 
v_mvarId_418_ = lean_ctor_get(v_e_389_, 0);
lean_inc(v_mvarId_418_);
lean_dec_ref(v_e_389_);
v___x_419_ = l_Lean_MVarId_isAssignable___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__0___redArg(v_mvarId_418_, v_a_392_);
return v___x_419_;
}
case 3:
{
lean_object* v_u_420_; lean_object* v___x_421_; 
v_u_420_ = lean_ctor_get(v_e_389_, 0);
lean_inc(v_u_420_);
lean_dec_ref(v_e_389_);
v___x_421_ = l_Lean_Meta_hasAssignableLevelMVar(v_u_420_, v_a_391_, v_a_392_, v_a_393_, v_a_394_);
return v___x_421_;
}
case 4:
{
lean_object* v_us_422_; lean_object* v___x_423_; 
v_us_422_ = lean_ctor_get(v_e_389_, 1);
lean_inc(v_us_422_);
lean_dec_ref(v_e_389_);
v___x_423_ = l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1___redArg(v_us_422_, v_a_391_, v_a_392_, v_a_393_, v_a_394_);
return v___x_423_;
}
case 5:
{
lean_object* v_fn_424_; lean_object* v_arg_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v_fn_424_ = lean_ctor_get(v_e_389_, 0);
lean_inc_ref(v_fn_424_);
v_arg_425_ = lean_ctor_get(v_e_389_, 1);
lean_inc_ref(v_arg_425_);
lean_dec_ref(v_e_389_);
v___x_426_ = ((lean_object*)(l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___closed__0));
v___x_427_ = l_Lean_Core_checkSystem(v___x_426_, v_a_393_, v_a_394_);
if (lean_obj_tag(v___x_427_) == 0)
{
lean_object* v___x_428_; 
lean_dec_ref(v___x_427_);
v___x_428_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_fn_424_, v_a_390_, v_a_391_, v_a_392_, v_a_393_, v_a_394_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v_a_429_; uint8_t v___x_430_; 
v_a_429_ = lean_ctor_get(v___x_428_, 0);
lean_inc(v_a_429_);
v___x_430_ = lean_unbox(v_a_429_);
lean_dec(v_a_429_);
if (v___x_430_ == 0)
{
lean_object* v___x_431_; 
lean_dec_ref(v___x_428_);
v___x_431_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_arg_425_, v_a_390_, v_a_391_, v_a_392_, v_a_393_, v_a_394_);
return v___x_431_;
}
else
{
lean_dec_ref(v_arg_425_);
return v___x_428_;
}
}
else
{
lean_dec_ref(v_arg_425_);
return v___x_428_;
}
}
else
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
lean_dec_ref(v_arg_425_);
lean_dec_ref(v_fn_424_);
v_a_432_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v___x_427_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_427_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_a_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
}
case 6:
{
lean_object* v_binderType_440_; lean_object* v_body_441_; 
v_binderType_440_ = lean_ctor_get(v_e_389_, 1);
lean_inc_ref(v_binderType_440_);
v_body_441_ = lean_ctor_get(v_e_389_, 2);
lean_inc_ref(v_body_441_);
lean_dec_ref(v_e_389_);
v_d_397_ = v_binderType_440_;
v_b_398_ = v_body_441_;
v___y_399_ = v_a_390_;
v___y_400_ = v_a_391_;
v___y_401_ = v_a_392_;
v___y_402_ = v_a_393_;
v___y_403_ = v_a_394_;
goto v___jp_396_;
}
case 7:
{
lean_object* v_binderType_442_; lean_object* v_body_443_; 
v_binderType_442_ = lean_ctor_get(v_e_389_, 1);
lean_inc_ref(v_binderType_442_);
v_body_443_ = lean_ctor_get(v_e_389_, 2);
lean_inc_ref(v_body_443_);
lean_dec_ref(v_e_389_);
v_d_397_ = v_binderType_442_;
v_b_398_ = v_body_443_;
v___y_399_ = v_a_390_;
v___y_400_ = v_a_391_;
v___y_401_ = v_a_392_;
v___y_402_ = v_a_393_;
v___y_403_ = v_a_394_;
goto v___jp_396_;
}
case 8:
{
lean_object* v_type_444_; lean_object* v_value_445_; lean_object* v_body_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v_type_444_ = lean_ctor_get(v_e_389_, 1);
lean_inc_ref(v_type_444_);
v_value_445_ = lean_ctor_get(v_e_389_, 2);
lean_inc_ref(v_value_445_);
v_body_446_ = lean_ctor_get(v_e_389_, 3);
lean_inc_ref(v_body_446_);
lean_dec_ref(v_e_389_);
v___x_447_ = ((lean_object*)(l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___closed__0));
v___x_448_ = l_Lean_Core_checkSystem(v___x_447_, v_a_393_, v_a_394_);
if (lean_obj_tag(v___x_448_) == 0)
{
lean_object* v___x_449_; 
lean_dec_ref(v___x_448_);
v___x_449_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_type_444_, v_a_390_, v_a_391_, v_a_392_, v_a_393_, v_a_394_);
if (lean_obj_tag(v___x_449_) == 0)
{
lean_object* v_a_450_; uint8_t v___x_451_; 
v_a_450_ = lean_ctor_get(v___x_449_, 0);
lean_inc(v_a_450_);
v___x_451_ = lean_unbox(v_a_450_);
lean_dec(v_a_450_);
if (v___x_451_ == 0)
{
lean_object* v___x_452_; 
lean_dec_ref(v___x_449_);
v___x_452_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_value_445_, v_a_390_, v_a_391_, v_a_392_, v_a_393_, v_a_394_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v_a_453_; uint8_t v___x_454_; 
v_a_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc(v_a_453_);
v___x_454_ = lean_unbox(v_a_453_);
lean_dec(v_a_453_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; 
lean_dec_ref(v___x_452_);
v___x_455_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_body_446_, v_a_390_, v_a_391_, v_a_392_, v_a_393_, v_a_394_);
return v___x_455_;
}
else
{
lean_dec_ref(v_body_446_);
return v___x_452_;
}
}
else
{
lean_dec_ref(v_body_446_);
return v___x_452_;
}
}
else
{
lean_dec_ref(v_body_446_);
lean_dec_ref(v_value_445_);
return v___x_449_;
}
}
else
{
lean_dec_ref(v_body_446_);
lean_dec_ref(v_value_445_);
return v___x_449_;
}
}
else
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_463_; 
lean_dec_ref(v_body_446_);
lean_dec_ref(v_value_445_);
lean_dec_ref(v_type_444_);
v_a_456_ = lean_ctor_get(v___x_448_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_448_);
if (v_isSharedCheck_463_ == 0)
{
v___x_458_ = v___x_448_;
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___x_448_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_461_; 
if (v_isShared_459_ == 0)
{
v___x_461_ = v___x_458_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_a_456_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
}
case 10:
{
lean_object* v_expr_464_; lean_object* v___x_465_; 
v_expr_464_ = lean_ctor_get(v_e_389_, 1);
lean_inc_ref(v_expr_464_);
lean_dec_ref(v_e_389_);
v___x_465_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_expr_464_, v_a_390_, v_a_391_, v_a_392_, v_a_393_, v_a_394_);
return v___x_465_;
}
case 11:
{
lean_object* v_struct_466_; lean_object* v___x_467_; 
v_struct_466_ = lean_ctor_get(v_e_389_, 2);
lean_inc_ref(v_struct_466_);
lean_dec_ref(v_e_389_);
v___x_467_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_struct_466_, v_a_390_, v_a_391_, v_a_392_, v_a_393_, v_a_394_);
return v___x_467_;
}
default: 
{
uint8_t v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
lean_dec_ref(v_e_389_);
v___x_468_ = 0;
v___x_469_ = lean_box(v___x_468_);
v___x_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
return v___x_470_;
}
}
v___jp_396_:
{
lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_404_ = ((lean_object*)(l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___closed__0));
v___x_405_ = l_Lean_Core_checkSystem(v___x_404_, v___y_402_, v___y_403_);
if (lean_obj_tag(v___x_405_) == 0)
{
lean_object* v___x_406_; 
lean_dec_ref(v___x_405_);
v___x_406_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_d_397_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_);
if (lean_obj_tag(v___x_406_) == 0)
{
lean_object* v_a_407_; uint8_t v___x_408_; 
v_a_407_ = lean_ctor_get(v___x_406_, 0);
lean_inc(v_a_407_);
v___x_408_ = lean_unbox(v_a_407_);
lean_dec(v_a_407_);
if (v___x_408_ == 0)
{
lean_object* v___x_409_; 
lean_dec_ref(v___x_406_);
v___x_409_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_b_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_);
return v___x_409_;
}
else
{
lean_dec_ref(v_b_398_);
return v___x_406_;
}
}
else
{
lean_dec_ref(v_b_398_);
return v___x_406_;
}
}
else
{
lean_object* v_a_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_417_; 
lean_dec_ref(v_b_398_);
lean_dec_ref(v_d_397_);
v_a_410_ = lean_ctor_get(v___x_405_, 0);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_405_);
if (v_isSharedCheck_417_ == 0)
{
v___x_412_ = v___x_405_;
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_a_410_);
lean_dec(v___x_405_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_415_; 
if (v_isShared_413_ == 0)
{
v___x_415_ = v___x_412_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_a_410_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(lean_object* v_e_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_){
_start:
{
uint8_t v___x_478_; 
v___x_478_ = l_Lean_Expr_hasMVar(v_e_471_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; lean_object* v___x_480_; 
lean_dec_ref(v_e_471_);
v___x_479_ = lean_box(v___x_478_);
v___x_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
return v___x_480_;
}
else
{
lean_object* v___x_481_; uint8_t v___x_482_; 
v___x_481_ = lean_st_ref_get(v_a_472_);
v___x_482_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3___redArg(v___x_481_, v_e_471_);
lean_dec(v___x_481_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_483_ = lean_st_ref_take(v_a_472_);
v___x_484_ = lean_box(0);
lean_inc_ref(v_e_471_);
v___x_485_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4___redArg(v___x_483_, v_e_471_, v___x_484_);
v___x_486_ = lean_st_ref_set(v_a_472_, v___x_485_);
v___x_487_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go(v_e_471_, v_a_472_, v_a_473_, v_a_474_, v_a_475_, v_a_476_);
return v___x_487_;
}
else
{
uint8_t v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
lean_dec_ref(v_e_471_);
v___x_488_ = 0;
v___x_489_ = lean_box(v___x_488_);
v___x_490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
return v___x_490_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit___boxed(lean_object* v_e_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit(v_e_491_, v_a_492_, v_a_493_, v_a_494_, v_a_495_, v_a_496_);
lean_dec(v_a_496_);
lean_dec_ref(v_a_495_);
lean_dec(v_a_494_);
lean_dec_ref(v_a_493_);
lean_dec(v_a_492_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go___boxed(lean_object* v_e_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go(v_e_499_, v_a_500_, v_a_501_, v_a_502_, v_a_503_, v_a_504_);
lean_dec(v_a_504_);
lean_dec_ref(v_a_503_);
lean_dec(v_a_502_);
lean_dec_ref(v_a_501_);
lean_dec(v_a_500_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1(lean_object* v_x_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1___redArg(v_x_507_, v___y_509_, v___y_510_, v___y_511_, v___y_512_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1___boxed(lean_object* v_x_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_List_anyM___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go_spec__1(v_x_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
lean_dec(v___y_518_);
lean_dec_ref(v___y_517_);
lean_dec(v___y_516_);
return v_res_522_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3(lean_object* v_00_u03b2_523_, lean_object* v_m_524_, lean_object* v_a_525_){
_start:
{
uint8_t v___x_526_; 
v___x_526_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3___redArg(v_m_524_, v_a_525_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3___boxed(lean_object* v_00_u03b2_527_, lean_object* v_m_528_, lean_object* v_a_529_){
_start:
{
uint8_t v_res_530_; lean_object* v_r_531_; 
v_res_530_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3(v_00_u03b2_527_, v_m_528_, v_a_529_);
lean_dec_ref(v_a_529_);
lean_dec_ref(v_m_528_);
v_r_531_ = lean_box(v_res_530_);
return v_r_531_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4(lean_object* v_00_u03b2_532_, lean_object* v_m_533_, lean_object* v_a_534_, lean_object* v_b_535_){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4___redArg(v_m_533_, v_a_534_, v_b_535_);
return v___x_536_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3(lean_object* v_00_u03b2_537_, lean_object* v_a_538_, lean_object* v_x_539_){
_start:
{
uint8_t v___x_540_; 
v___x_540_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___redArg(v_a_538_, v_x_539_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3___boxed(lean_object* v_00_u03b2_541_, lean_object* v_a_542_, lean_object* v_x_543_){
_start:
{
uint8_t v_res_544_; lean_object* v_r_545_; 
v_res_544_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__3_spec__3(v_00_u03b2_541_, v_a_542_, v_x_543_);
lean_dec(v_x_543_);
lean_dec_ref(v_a_542_);
v_r_545_ = lean_box(v_res_544_);
return v_r_545_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5(lean_object* v_00_u03b2_546_, lean_object* v_data_547_){
_start:
{
lean_object* v___x_548_; 
v___x_548_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5___redArg(v_data_547_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_549_, lean_object* v_i_550_, lean_object* v_source_551_, lean_object* v_target_552_){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6___redArg(v_i_550_, v_source_551_, v_target_552_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6_spec__7(lean_object* v_00_u03b2_554_, lean_object* v_x_555_, lean_object* v_x_556_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_visit_spec__4_spec__5_spec__6_spec__7___redArg(v_x_555_, v_x_556_);
return v___x_557_;
}
}
static lean_object* _init_l_Lean_Meta_hasAssignableMVar___closed__0(void){
_start:
{
lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_558_ = lean_box(0);
v___x_559_ = lean_unsigned_to_nat(16u);
v___x_560_ = lean_mk_array(v___x_559_, v___x_558_);
return v___x_560_;
}
}
static lean_object* _init_l_Lean_Meta_hasAssignableMVar___closed__1(void){
_start:
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_561_ = lean_obj_once(&l_Lean_Meta_hasAssignableMVar___closed__0, &l_Lean_Meta_hasAssignableMVar___closed__0_once, _init_l_Lean_Meta_hasAssignableMVar___closed__0);
v___x_562_ = lean_unsigned_to_nat(0u);
v___x_563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_563_, 0, v___x_562_);
lean_ctor_set(v___x_563_, 1, v___x_561_);
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_hasAssignableMVar(lean_object* v_e_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_){
_start:
{
uint8_t v___x_570_; 
v___x_570_ = l_Lean_Expr_hasMVar(v_e_564_);
if (v___x_570_ == 0)
{
lean_object* v___x_571_; lean_object* v___x_572_; 
lean_dec_ref(v_e_564_);
v___x_571_ = lean_box(v___x_570_);
v___x_572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_572_, 0, v___x_571_);
return v___x_572_;
}
else
{
lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_573_ = lean_obj_once(&l_Lean_Meta_hasAssignableMVar___closed__1, &l_Lean_Meta_hasAssignableMVar___closed__1_once, _init_l_Lean_Meta_hasAssignableMVar___closed__1);
v___x_574_ = lean_st_mk_ref(v___x_573_);
v___x_575_ = l___private_Lean_Meta_HasAssignableMVar_0__Lean_Meta_hasAssignableMVar_go(v_e_564_, v___x_574_, v_a_565_, v_a_566_, v_a_567_, v_a_568_);
if (lean_obj_tag(v___x_575_) == 0)
{
lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_584_; 
v_a_576_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_584_ == 0)
{
v___x_578_ = v___x_575_;
v_isShared_579_ = v_isSharedCheck_584_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v___x_575_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_584_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_580_; lean_object* v___x_582_; 
v___x_580_ = lean_st_ref_get(v___x_574_);
lean_dec(v___x_574_);
lean_dec(v___x_580_);
if (v_isShared_579_ == 0)
{
v___x_582_ = v___x_578_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_a_576_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
else
{
lean_dec(v___x_574_);
return v___x_575_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_hasAssignableMVar___boxed(lean_object* v_e_585_, lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_Lean_Meta_hasAssignableMVar(v_e_585_, v_a_586_, v_a_587_, v_a_588_, v_a_589_);
lean_dec(v_a_589_);
lean_dec_ref(v_a_588_);
lean_dec(v_a_587_);
lean_dec_ref(v_a_586_);
return v_res_591_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_HasAssignableMVar(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_HasAssignableMVar(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_HasAssignableMVar(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_HasAssignableMVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_HasAssignableMVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_HasAssignableMVar(builtin);
}
#ifdef __cplusplus
}
#endif
