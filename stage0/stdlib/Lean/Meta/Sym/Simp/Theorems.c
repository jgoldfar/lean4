// Lean compiler output
// Module: Lean.Meta.Sym.Simp.Theorems
// Imports: public import Lean.Meta.Sym.Pattern public import Lean.Meta.DiscrTree import Lean.Meta.Sym.Simp.DiscrTree import Lean.ExtraModUses
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
lean_object* lean_st_ref_get(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
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
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
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
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_instBEqKey_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint64_t l_Lean_Meta_DiscrTree_Key_hash(lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
uint8_t l_Lean_instDecidableEqOLeanLevel(uint8_t, uint8_t);
uint8_t l_Lean_isPrivateName(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Sym_instInhabitedPattern_default;
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_Sym_getMatchWithExtra___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_Sym_mkEqPatternFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Pattern_mkDiscrTreeKeys(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instInhabited(lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_registerSimpleScopedEnvExtension___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_getMatch___redArg(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedTheorem;
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_Simp_instBEqTheorem___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instBEqTheorem___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_Simp_instBEqTheorem___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_instBEqTheorem___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instBEqTheorem___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instBEqTheorem___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instBEqTheorem = (const lean_object*)&l_Lean_Meta_Sym_Simp_instBEqTheorem___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedTheorems;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__6_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__6(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__4___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__4(lean_object*);
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Meta.DiscrTree.Basic"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.DiscrTree.insertKeyValue"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid key sequence"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorems_insert(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorems_getMatch(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorems_getMatch___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorems_getMatchWithExtra(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorems_getMatchWithExtra___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkTheoremFromDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__2_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__4_value;
static const lean_array_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__5_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__7_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__7_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__8 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__9 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__9_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__10 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__10_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__11_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__11 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__11_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__12;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__13;
static const lean_string_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__14 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__14_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__15 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__15_value;
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__16_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__16_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__16_value_aux_2),((lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__16 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__16_value;
static const lean_string_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__17 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__17_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__18;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__19;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__20;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__21;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__22;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__23;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__24;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__25;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__26;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__27;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__28;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___lam__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_Theorems_insert, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___closed__0_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_mkSymSimpExt___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___closed__1_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_mkSymSimpExt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_mkSymSimpExt___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Simp_mkSymSimpExt___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_initFn___closed__0_00___x40_Lean_Meta_Sym_Simp_Theorems_3071968463____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_initFn___closed__0_00___x40_Lean_Meta_Sym_Simp_Theorems_3071968463____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Theorems_3071968463____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Theorems_3071968463____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Theorems_3071968463____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Theorems_3071968463____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_symSimpExtensionMapRef;
static const lean_string_object l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqExtraModUse_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__0 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__0_value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableExtraModUse_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__1_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__4;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__5;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__6 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__6_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__6_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__7_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__8_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__9;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__10_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__11;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__12;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__13 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__13_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__14;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__15_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__16;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__17_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__18_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__20_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___closed__0 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___closed__0_value;
static const lean_closure_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___closed__1_value;
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___closed__2;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___closed__3 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getSymSimpExtension_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getSymSimpExtension_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__1));
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__3(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_7_ = l_Lean_Meta_Sym_instInhabitedPattern_default;
v___x_8_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__2, &l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__2_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__2);
v___x_9_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
lean_ctor_set(v___x_9_, 1, v___x_7_);
lean_ctor_set(v___x_9_, 2, v___x_8_);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__3, &l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__3_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default___closed__3);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedTheorem(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default;
return v___x_11_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_Simp_instBEqTheorem___lam__0(lean_object* v_thm_u2081_12_, lean_object* v_thm_u2082_13_){
_start:
{
lean_object* v_expr_14_; lean_object* v_expr_15_; uint8_t v___x_16_; 
v_expr_14_ = lean_ctor_get(v_thm_u2081_12_, 0);
v_expr_15_ = lean_ctor_get(v_thm_u2082_13_, 0);
v___x_16_ = lean_expr_eqv(v_expr_14_, v_expr_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instBEqTheorem___lam__0___boxed(lean_object* v_thm_u2081_17_, lean_object* v_thm_u2082_18_){
_start:
{
uint8_t v_res_19_; lean_object* v_r_20_; 
v_res_19_ = l_Lean_Meta_Sym_Simp_instBEqTheorem___lam__0(v_thm_u2081_17_, v_thm_u2082_18_);
lean_dec_ref(v_thm_u2082_18_);
lean_dec_ref(v_thm_u2081_17_);
v_r_20_ = lean_box(v_res_19_);
return v_r_20_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default___closed__0(void){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_23_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default___closed__1(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default___closed__0, &l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default___closed__0_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default___closed__0);
v___x_25_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
return v___x_25_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default(void){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default___closed__1, &l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default___closed__1_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default___closed__1);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedTheorems(void){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default;
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_keys_28_, lean_object* v_vals_29_, lean_object* v_i_30_, lean_object* v_k_31_){
_start:
{
lean_object* v___x_32_; uint8_t v___x_33_; 
v___x_32_ = lean_array_get_size(v_keys_28_);
v___x_33_ = lean_nat_dec_lt(v_i_30_, v___x_32_);
if (v___x_33_ == 0)
{
lean_object* v___x_34_; 
lean_dec(v_i_30_);
v___x_34_ = lean_box(0);
return v___x_34_;
}
else
{
lean_object* v_k_x27_35_; uint8_t v___x_36_; 
v_k_x27_35_ = lean_array_fget_borrowed(v_keys_28_, v_i_30_);
v___x_36_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_k_31_, v_k_x27_35_);
if (v___x_36_ == 0)
{
lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_37_ = lean_unsigned_to_nat(1u);
v___x_38_ = lean_nat_add(v_i_30_, v___x_37_);
lean_dec(v_i_30_);
v_i_30_ = v___x_38_;
goto _start;
}
else
{
lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_40_ = lean_array_fget_borrowed(v_vals_29_, v_i_30_);
lean_dec(v_i_30_);
lean_inc(v___x_40_);
v___x_41_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
return v___x_41_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_keys_42_, lean_object* v_vals_43_, lean_object* v_i_44_, lean_object* v_k_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_keys_42_, v_vals_43_, v_i_44_, v_k_45_);
lean_dec(v_k_45_);
lean_dec_ref(v_vals_43_);
lean_dec_ref(v_keys_42_);
return v_res_46_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__0(void){
_start:
{
size_t v___x_47_; size_t v___x_48_; size_t v___x_49_; 
v___x_47_ = ((size_t)5ULL);
v___x_48_ = ((size_t)1ULL);
v___x_49_ = lean_usize_shift_left(v___x_48_, v___x_47_);
return v___x_49_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1(void){
_start:
{
size_t v___x_50_; size_t v___x_51_; size_t v___x_52_; 
v___x_50_ = ((size_t)1ULL);
v___x_51_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__0);
v___x_52_ = lean_usize_sub(v___x_51_, v___x_50_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_53_, size_t v_x_54_, lean_object* v_x_55_){
_start:
{
if (lean_obj_tag(v_x_53_) == 0)
{
lean_object* v_es_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_77_; 
v_es_56_ = lean_ctor_get(v_x_53_, 0);
v_isSharedCheck_77_ = !lean_is_exclusive(v_x_53_);
if (v_isSharedCheck_77_ == 0)
{
v___x_58_ = v_x_53_;
v_isShared_59_ = v_isSharedCheck_77_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_es_56_);
lean_dec(v_x_53_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_77_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_60_; size_t v___x_61_; size_t v___x_62_; size_t v___x_63_; lean_object* v_j_64_; lean_object* v___x_65_; 
v___x_60_ = lean_box(2);
v___x_61_ = ((size_t)5ULL);
v___x_62_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1);
v___x_63_ = lean_usize_land(v_x_54_, v___x_62_);
v_j_64_ = lean_usize_to_nat(v___x_63_);
v___x_65_ = lean_array_get(v___x_60_, v_es_56_, v_j_64_);
lean_dec(v_j_64_);
lean_dec_ref(v_es_56_);
switch(lean_obj_tag(v___x_65_))
{
case 0:
{
lean_object* v_key_66_; lean_object* v_val_67_; uint8_t v___x_68_; 
v_key_66_ = lean_ctor_get(v___x_65_, 0);
lean_inc(v_key_66_);
v_val_67_ = lean_ctor_get(v___x_65_, 1);
lean_inc(v_val_67_);
lean_dec_ref(v___x_65_);
v___x_68_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_55_, v_key_66_);
lean_dec(v_key_66_);
if (v___x_68_ == 0)
{
lean_object* v___x_69_; 
lean_dec(v_val_67_);
lean_del_object(v___x_58_);
v___x_69_ = lean_box(0);
return v___x_69_;
}
else
{
lean_object* v___x_71_; 
if (v_isShared_59_ == 0)
{
lean_ctor_set_tag(v___x_58_, 1);
lean_ctor_set(v___x_58_, 0, v_val_67_);
v___x_71_ = v___x_58_;
goto v_reusejp_70_;
}
else
{
lean_object* v_reuseFailAlloc_72_; 
v_reuseFailAlloc_72_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_72_, 0, v_val_67_);
v___x_71_ = v_reuseFailAlloc_72_;
goto v_reusejp_70_;
}
v_reusejp_70_:
{
return v___x_71_;
}
}
}
case 1:
{
lean_object* v_node_73_; size_t v___x_74_; 
lean_del_object(v___x_58_);
v_node_73_ = lean_ctor_get(v___x_65_, 0);
lean_inc(v_node_73_);
lean_dec_ref(v___x_65_);
v___x_74_ = lean_usize_shift_right(v_x_54_, v___x_61_);
v_x_53_ = v_node_73_;
v_x_54_ = v___x_74_;
goto _start;
}
default: 
{
lean_object* v___x_76_; 
lean_del_object(v___x_58_);
v___x_76_ = lean_box(0);
return v___x_76_;
}
}
}
}
else
{
lean_object* v_ks_78_; lean_object* v_vs_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v_ks_78_ = lean_ctor_get(v_x_53_, 0);
lean_inc_ref(v_ks_78_);
v_vs_79_ = lean_ctor_get(v_x_53_, 1);
lean_inc_ref(v_vs_79_);
lean_dec_ref(v_x_53_);
v___x_80_ = lean_unsigned_to_nat(0u);
v___x_81_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ks_78_, v_vs_79_, v___x_80_, v_x_55_);
lean_dec_ref(v_vs_79_);
lean_dec_ref(v_ks_78_);
return v___x_81_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_x_82_, lean_object* v_x_83_, lean_object* v_x_84_){
_start:
{
size_t v_x_1556__boxed_85_; lean_object* v_res_86_; 
v_x_1556__boxed_85_ = lean_unbox_usize(v_x_83_);
lean_dec(v_x_83_);
v_res_86_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_x_82_, v_x_1556__boxed_85_, v_x_84_);
lean_dec(v_x_84_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1___redArg(lean_object* v_x_87_, lean_object* v_x_88_){
_start:
{
uint64_t v___x_89_; size_t v___x_90_; lean_object* v___x_91_; 
v___x_89_ = l_Lean_Meta_DiscrTree_Key_hash(v_x_88_);
v___x_90_ = lean_uint64_to_usize(v___x_89_);
v___x_91_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_x_87_, v___x_90_, v_x_88_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_92_, lean_object* v_x_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1___redArg(v_x_92_, v_x_93_);
lean_dec(v_x_93_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__7_spec__9___redArg(lean_object* v_x_95_, lean_object* v_x_96_, lean_object* v_x_97_, lean_object* v_x_98_){
_start:
{
lean_object* v_ks_99_; lean_object* v_vs_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_124_; 
v_ks_99_ = lean_ctor_get(v_x_95_, 0);
v_vs_100_ = lean_ctor_get(v_x_95_, 1);
v_isSharedCheck_124_ = !lean_is_exclusive(v_x_95_);
if (v_isSharedCheck_124_ == 0)
{
v___x_102_ = v_x_95_;
v_isShared_103_ = v_isSharedCheck_124_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_vs_100_);
lean_inc(v_ks_99_);
lean_dec(v_x_95_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_124_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v___x_104_; uint8_t v___x_105_; 
v___x_104_ = lean_array_get_size(v_ks_99_);
v___x_105_ = lean_nat_dec_lt(v_x_96_, v___x_104_);
if (v___x_105_ == 0)
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_109_; 
lean_dec(v_x_96_);
v___x_106_ = lean_array_push(v_ks_99_, v_x_97_);
v___x_107_ = lean_array_push(v_vs_100_, v_x_98_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 1, v___x_107_);
lean_ctor_set(v___x_102_, 0, v___x_106_);
v___x_109_ = v___x_102_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v___x_106_);
lean_ctor_set(v_reuseFailAlloc_110_, 1, v___x_107_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
else
{
lean_object* v_k_x27_111_; uint8_t v___x_112_; 
v_k_x27_111_ = lean_array_fget_borrowed(v_ks_99_, v_x_96_);
v___x_112_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_97_, v_k_x27_111_);
if (v___x_112_ == 0)
{
lean_object* v___x_114_; 
if (v_isShared_103_ == 0)
{
v___x_114_ = v___x_102_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_ks_99_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v_vs_100_);
v___x_114_ = v_reuseFailAlloc_118_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = lean_unsigned_to_nat(1u);
v___x_116_ = lean_nat_add(v_x_96_, v___x_115_);
lean_dec(v_x_96_);
v_x_95_ = v___x_114_;
v_x_96_ = v___x_116_;
goto _start;
}
}
else
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_122_; 
v___x_119_ = lean_array_fset(v_ks_99_, v_x_96_, v_x_97_);
v___x_120_ = lean_array_fset(v_vs_100_, v_x_96_, v_x_98_);
lean_dec(v_x_96_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 1, v___x_120_);
lean_ctor_set(v___x_102_, 0, v___x_119_);
v___x_122_ = v___x_102_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v___x_119_);
lean_ctor_set(v_reuseFailAlloc_123_, 1, v___x_120_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
return v___x_122_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__7___redArg(lean_object* v_n_125_, lean_object* v_k_126_, lean_object* v_v_127_){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = lean_unsigned_to_nat(0u);
v___x_129_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__7_spec__9___redArg(v_n_125_, v___x_128_, v_k_126_, v_v_127_);
return v___x_129_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_x_131_, size_t v_x_132_, size_t v_x_133_, lean_object* v_x_134_, lean_object* v_x_135_){
_start:
{
if (lean_obj_tag(v_x_131_) == 0)
{
lean_object* v_es_136_; size_t v___x_137_; size_t v___x_138_; size_t v___x_139_; size_t v___x_140_; lean_object* v_j_141_; lean_object* v___x_142_; uint8_t v___x_143_; 
v_es_136_ = lean_ctor_get(v_x_131_, 0);
v___x_137_ = ((size_t)5ULL);
v___x_138_ = ((size_t)1ULL);
v___x_139_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1);
v___x_140_ = lean_usize_land(v_x_132_, v___x_139_);
v_j_141_ = lean_usize_to_nat(v___x_140_);
v___x_142_ = lean_array_get_size(v_es_136_);
v___x_143_ = lean_nat_dec_lt(v_j_141_, v___x_142_);
if (v___x_143_ == 0)
{
lean_dec(v_j_141_);
lean_dec(v_x_135_);
lean_dec(v_x_134_);
return v_x_131_;
}
else
{
lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_180_; 
lean_inc_ref(v_es_136_);
v_isSharedCheck_180_ = !lean_is_exclusive(v_x_131_);
if (v_isSharedCheck_180_ == 0)
{
lean_object* v_unused_181_; 
v_unused_181_ = lean_ctor_get(v_x_131_, 0);
lean_dec(v_unused_181_);
v___x_145_ = v_x_131_;
v_isShared_146_ = v_isSharedCheck_180_;
goto v_resetjp_144_;
}
else
{
lean_dec(v_x_131_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_180_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v_v_147_; lean_object* v___x_148_; lean_object* v_xs_x27_149_; lean_object* v___y_151_; 
v_v_147_ = lean_array_fget(v_es_136_, v_j_141_);
v___x_148_ = lean_box(0);
v_xs_x27_149_ = lean_array_fset(v_es_136_, v_j_141_, v___x_148_);
switch(lean_obj_tag(v_v_147_))
{
case 0:
{
lean_object* v_key_156_; lean_object* v_val_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_167_; 
v_key_156_ = lean_ctor_get(v_v_147_, 0);
v_val_157_ = lean_ctor_get(v_v_147_, 1);
v_isSharedCheck_167_ = !lean_is_exclusive(v_v_147_);
if (v_isSharedCheck_167_ == 0)
{
v___x_159_ = v_v_147_;
v_isShared_160_ = v_isSharedCheck_167_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_val_157_);
lean_inc(v_key_156_);
lean_dec(v_v_147_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_167_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
uint8_t v___x_161_; 
v___x_161_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_134_, v_key_156_);
if (v___x_161_ == 0)
{
lean_object* v___x_162_; lean_object* v___x_163_; 
lean_del_object(v___x_159_);
v___x_162_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_156_, v_val_157_, v_x_134_, v_x_135_);
v___x_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
v___y_151_ = v___x_163_;
goto v___jp_150_;
}
else
{
lean_object* v___x_165_; 
lean_dec(v_val_157_);
lean_dec(v_key_156_);
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 1, v_x_135_);
lean_ctor_set(v___x_159_, 0, v_x_134_);
v___x_165_ = v___x_159_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_x_134_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v_x_135_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
v___y_151_ = v___x_165_;
goto v___jp_150_;
}
}
}
}
case 1:
{
lean_object* v_node_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_178_; 
v_node_168_ = lean_ctor_get(v_v_147_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v_v_147_);
if (v_isSharedCheck_178_ == 0)
{
v___x_170_ = v_v_147_;
v_isShared_171_ = v_isSharedCheck_178_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_node_168_);
lean_dec(v_v_147_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_178_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
size_t v___x_172_; size_t v___x_173_; lean_object* v___x_174_; lean_object* v___x_176_; 
v___x_172_ = lean_usize_shift_right(v_x_132_, v___x_137_);
v___x_173_ = lean_usize_add(v_x_133_, v___x_138_);
v___x_174_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4___redArg(v_node_168_, v___x_172_, v___x_173_, v_x_134_, v_x_135_);
if (v_isShared_171_ == 0)
{
lean_ctor_set(v___x_170_, 0, v___x_174_);
v___x_176_ = v___x_170_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v___x_174_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
v___y_151_ = v___x_176_;
goto v___jp_150_;
}
}
}
default: 
{
lean_object* v___x_179_; 
v___x_179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_179_, 0, v_x_134_);
lean_ctor_set(v___x_179_, 1, v_x_135_);
v___y_151_ = v___x_179_;
goto v___jp_150_;
}
}
v___jp_150_:
{
lean_object* v___x_152_; lean_object* v___x_154_; 
v___x_152_ = lean_array_fset(v_xs_x27_149_, v_j_141_, v___y_151_);
lean_dec(v_j_141_);
if (v_isShared_146_ == 0)
{
lean_ctor_set(v___x_145_, 0, v___x_152_);
v___x_154_ = v___x_145_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v___x_152_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
}
}
}
else
{
lean_object* v_ks_182_; lean_object* v_vs_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_203_; 
v_ks_182_ = lean_ctor_get(v_x_131_, 0);
v_vs_183_ = lean_ctor_get(v_x_131_, 1);
v_isSharedCheck_203_ = !lean_is_exclusive(v_x_131_);
if (v_isSharedCheck_203_ == 0)
{
v___x_185_ = v_x_131_;
v_isShared_186_ = v_isSharedCheck_203_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_vs_183_);
lean_inc(v_ks_182_);
lean_dec(v_x_131_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_203_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_188_; 
if (v_isShared_186_ == 0)
{
v___x_188_ = v___x_185_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_ks_182_);
lean_ctor_set(v_reuseFailAlloc_202_, 1, v_vs_183_);
v___x_188_ = v_reuseFailAlloc_202_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
lean_object* v_newNode_189_; uint8_t v___y_191_; size_t v___x_197_; uint8_t v___x_198_; 
v_newNode_189_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__7___redArg(v___x_188_, v_x_134_, v_x_135_);
v___x_197_ = ((size_t)7ULL);
v___x_198_ = lean_usize_dec_le(v___x_197_, v_x_133_);
if (v___x_198_ == 0)
{
lean_object* v___x_199_; lean_object* v___x_200_; uint8_t v___x_201_; 
v___x_199_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_189_);
v___x_200_ = lean_unsigned_to_nat(4u);
v___x_201_ = lean_nat_dec_lt(v___x_199_, v___x_200_);
lean_dec(v___x_199_);
v___y_191_ = v___x_201_;
goto v___jp_190_;
}
else
{
v___y_191_ = v___x_198_;
goto v___jp_190_;
}
v___jp_190_:
{
if (v___y_191_ == 0)
{
lean_object* v_ks_192_; lean_object* v_vs_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v_ks_192_ = lean_ctor_get(v_newNode_189_, 0);
lean_inc_ref(v_ks_192_);
v_vs_193_ = lean_ctor_get(v_newNode_189_, 1);
lean_inc_ref(v_vs_193_);
lean_dec_ref(v_newNode_189_);
v___x_194_ = lean_unsigned_to_nat(0u);
v___x_195_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4___redArg___closed__0);
v___x_196_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__8___redArg(v_x_133_, v_ks_192_, v_vs_193_, v___x_194_, v___x_195_);
lean_dec_ref(v_vs_193_);
lean_dec_ref(v_ks_192_);
return v___x_196_;
}
else
{
return v_newNode_189_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__8___redArg(size_t v_depth_204_, lean_object* v_keys_205_, lean_object* v_vals_206_, lean_object* v_i_207_, lean_object* v_entries_208_){
_start:
{
lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_209_ = lean_array_get_size(v_keys_205_);
v___x_210_ = lean_nat_dec_lt(v_i_207_, v___x_209_);
if (v___x_210_ == 0)
{
lean_dec(v_i_207_);
return v_entries_208_;
}
else
{
lean_object* v_k_211_; lean_object* v_v_212_; uint64_t v___x_213_; size_t v_h_214_; size_t v___x_215_; lean_object* v___x_216_; size_t v___x_217_; size_t v___x_218_; size_t v___x_219_; size_t v_h_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v_k_211_ = lean_array_fget_borrowed(v_keys_205_, v_i_207_);
v_v_212_ = lean_array_fget_borrowed(v_vals_206_, v_i_207_);
v___x_213_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_211_);
v_h_214_ = lean_uint64_to_usize(v___x_213_);
v___x_215_ = ((size_t)5ULL);
v___x_216_ = lean_unsigned_to_nat(1u);
v___x_217_ = ((size_t)1ULL);
v___x_218_ = lean_usize_sub(v_depth_204_, v___x_217_);
v___x_219_ = lean_usize_mul(v___x_215_, v___x_218_);
v_h_220_ = lean_usize_shift_right(v_h_214_, v___x_219_);
v___x_221_ = lean_nat_add(v_i_207_, v___x_216_);
lean_dec(v_i_207_);
lean_inc(v_v_212_);
lean_inc(v_k_211_);
v___x_222_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4___redArg(v_entries_208_, v_h_220_, v_depth_204_, v_k_211_, v_v_212_);
v_i_207_ = v___x_221_;
v_entries_208_ = v___x_222_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_depth_224_, lean_object* v_keys_225_, lean_object* v_vals_226_, lean_object* v_i_227_, lean_object* v_entries_228_){
_start:
{
size_t v_depth_boxed_229_; lean_object* v_res_230_; 
v_depth_boxed_229_ = lean_unbox_usize(v_depth_224_);
lean_dec(v_depth_224_);
v_res_230_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__8___redArg(v_depth_boxed_229_, v_keys_225_, v_vals_226_, v_i_227_, v_entries_228_);
lean_dec_ref(v_vals_226_);
lean_dec_ref(v_keys_225_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_x_231_, lean_object* v_x_232_, lean_object* v_x_233_, lean_object* v_x_234_, lean_object* v_x_235_){
_start:
{
size_t v_x_1715__boxed_236_; size_t v_x_1716__boxed_237_; lean_object* v_res_238_; 
v_x_1715__boxed_236_ = lean_unbox_usize(v_x_232_);
lean_dec(v_x_232_);
v_x_1716__boxed_237_ = lean_unbox_usize(v_x_233_);
lean_dec(v_x_233_);
v_res_238_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4___redArg(v_x_231_, v_x_1715__boxed_236_, v_x_1716__boxed_237_, v_x_234_, v_x_235_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2___redArg(lean_object* v_x_239_, lean_object* v_x_240_, lean_object* v_x_241_){
_start:
{
uint64_t v___x_242_; size_t v___x_243_; size_t v___x_244_; lean_object* v___x_245_; 
v___x_242_ = l_Lean_Meta_DiscrTree_Key_hash(v_x_240_);
v___x_243_ = lean_uint64_to_usize(v___x_242_);
v___x_244_ = ((size_t)1ULL);
v___x_245_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4___redArg(v_x_239_, v___x_243_, v___x_244_, v_x_240_, v_x_241_);
return v___x_245_;
}
}
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__1(lean_object* v_a_246_, lean_object* v_b_247_){
_start:
{
lean_object* v_fst_248_; lean_object* v_fst_249_; uint8_t v___x_250_; 
v_fst_248_ = lean_ctor_get(v_a_246_, 0);
v_fst_249_ = lean_ctor_get(v_b_247_, 0);
v___x_250_ = l_Lean_Meta_DiscrTree_Key_lt(v_fst_248_, v_fst_249_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__1___boxed(lean_object* v_a_251_, lean_object* v_b_252_){
_start:
{
uint8_t v_res_253_; lean_object* v_r_254_; 
v_res_253_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__1(v_a_251_, v_b_252_);
lean_dec_ref(v_b_252_);
lean_dec_ref(v_a_251_);
v_r_254_ = lean_box(v_res_253_);
return v_r_254_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__0(lean_object* v_x_255_, lean_object* v_keys_256_, lean_object* v_v_257_, lean_object* v_k_258_, lean_object* v_x_259_){
_start:
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v_c_262_; lean_object* v___x_263_; 
v___x_260_ = lean_unsigned_to_nat(1u);
v___x_261_ = lean_nat_add(v_x_255_, v___x_260_);
v_c_262_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_256_, v_v_257_, v___x_261_);
lean_dec(v___x_261_);
v___x_263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_263_, 0, v_k_258_);
lean_ctor_set(v___x_263_, 1, v_c_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__0___boxed(lean_object* v_x_264_, lean_object* v_keys_265_, lean_object* v_v_266_, lean_object* v_k_267_, lean_object* v_x_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__0(v_x_264_, v_keys_265_, v_v_266_, v_k_267_, v_x_268_);
lean_dec_ref(v_keys_265_);
lean_dec(v_x_264_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__6_spec__11(lean_object* v_vs_270_, lean_object* v_v_271_, lean_object* v_i_272_){
_start:
{
lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_273_ = lean_array_get_size(v_vs_270_);
v___x_274_ = lean_nat_dec_lt(v_i_272_, v___x_273_);
if (v___x_274_ == 0)
{
lean_object* v___x_275_; 
lean_dec(v_i_272_);
v___x_275_ = lean_array_push(v_vs_270_, v_v_271_);
return v___x_275_;
}
else
{
lean_object* v_expr_276_; lean_object* v___x_277_; lean_object* v_expr_278_; uint8_t v___x_279_; 
v_expr_276_ = lean_ctor_get(v_v_271_, 0);
v___x_277_ = lean_array_fget_borrowed(v_vs_270_, v_i_272_);
v_expr_278_ = lean_ctor_get(v___x_277_, 0);
v___x_279_ = lean_expr_eqv(v_expr_276_, v_expr_278_);
if (v___x_279_ == 0)
{
lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_280_ = lean_unsigned_to_nat(1u);
v___x_281_ = lean_nat_add(v_i_272_, v___x_280_);
lean_dec(v_i_272_);
v_i_272_ = v___x_281_;
goto _start;
}
else
{
lean_object* v___x_283_; 
v___x_283_ = lean_array_fset(v_vs_270_, v_i_272_, v_v_271_);
lean_dec(v_i_272_);
return v___x_283_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__6(lean_object* v_vs_284_, lean_object* v_v_285_){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_286_ = lean_unsigned_to_nat(0u);
v___x_287_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__6_spec__11(v_vs_284_, v_v_285_, v___x_286_);
return v___x_287_;
}
}
static lean_object* _init_l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3___closed__1(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3___closed__0));
v___x_291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7_spec__13___redArg(lean_object* v_x_292_, lean_object* v_keys_293_, lean_object* v_v_294_, lean_object* v_k_295_, lean_object* v_as_296_, lean_object* v_k_297_, lean_object* v_x_298_, lean_object* v_x_299_){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v_mid_302_; lean_object* v_midVal_303_; uint8_t v___x_304_; 
v___x_300_ = lean_nat_add(v_x_298_, v_x_299_);
v___x_301_ = lean_unsigned_to_nat(1u);
v_mid_302_ = lean_nat_shiftr(v___x_300_, v___x_301_);
lean_dec(v___x_300_);
v_midVal_303_ = lean_array_fget(v_as_296_, v_mid_302_);
v___x_304_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__1(v_midVal_303_, v_k_297_);
if (v___x_304_ == 0)
{
uint8_t v___x_305_; 
lean_dec(v_x_299_);
v___x_305_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__1(v_k_297_, v_midVal_303_);
if (v___x_305_ == 0)
{
lean_object* v___x_306_; uint8_t v___x_307_; 
lean_dec(v_x_298_);
v___x_306_ = lean_array_get_size(v_as_296_);
v___x_307_ = lean_nat_dec_lt(v_mid_302_, v___x_306_);
if (v___x_307_ == 0)
{
lean_dec(v_midVal_303_);
lean_dec(v_mid_302_);
lean_dec(v_k_295_);
lean_dec_ref(v_v_294_);
return v_as_296_;
}
else
{
lean_object* v_snd_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_320_; 
v_snd_308_ = lean_ctor_get(v_midVal_303_, 1);
v_isSharedCheck_320_ = !lean_is_exclusive(v_midVal_303_);
if (v_isSharedCheck_320_ == 0)
{
lean_object* v_unused_321_; 
v_unused_321_ = lean_ctor_get(v_midVal_303_, 0);
lean_dec(v_unused_321_);
v___x_310_ = v_midVal_303_;
v_isShared_311_ = v_isSharedCheck_320_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_snd_308_);
lean_dec(v_midVal_303_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_320_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_312_; lean_object* v_xs_x27_313_; lean_object* v___x_314_; lean_object* v_c_315_; lean_object* v___x_317_; 
v___x_312_ = lean_box(0);
v_xs_x27_313_ = lean_array_fset(v_as_296_, v_mid_302_, v___x_312_);
v___x_314_ = lean_nat_add(v_x_292_, v___x_301_);
v_c_315_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3(v_keys_293_, v_v_294_, v___x_314_, v_snd_308_);
lean_dec(v___x_314_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 1, v_c_315_);
lean_ctor_set(v___x_310_, 0, v_k_295_);
v___x_317_ = v___x_310_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_k_295_);
lean_ctor_set(v_reuseFailAlloc_319_, 1, v_c_315_);
v___x_317_ = v_reuseFailAlloc_319_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
lean_object* v___x_318_; 
v___x_318_ = lean_array_fset(v_xs_x27_313_, v_mid_302_, v___x_317_);
lean_dec(v_mid_302_);
return v___x_318_;
}
}
}
}
else
{
lean_dec(v_midVal_303_);
v_x_299_ = v_mid_302_;
goto _start;
}
}
else
{
uint8_t v___x_323_; 
lean_dec(v_midVal_303_);
v___x_323_ = lean_nat_dec_eq(v_mid_302_, v_x_298_);
if (v___x_323_ == 0)
{
lean_dec(v_x_298_);
v_x_298_ = v_mid_302_;
goto _start;
}
else
{
lean_object* v___x_325_; lean_object* v_c_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v_j_329_; lean_object* v_as_330_; lean_object* v___x_331_; 
lean_dec(v_mid_302_);
lean_dec(v_x_299_);
v___x_325_ = lean_nat_add(v_x_292_, v___x_301_);
v_c_326_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_293_, v_v_294_, v___x_325_);
lean_dec(v___x_325_);
v___x_327_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_327_, 0, v_k_295_);
lean_ctor_set(v___x_327_, 1, v_c_326_);
v___x_328_ = lean_nat_add(v_x_298_, v___x_301_);
lean_dec(v_x_298_);
v_j_329_ = lean_array_get_size(v_as_296_);
v_as_330_ = lean_array_push(v_as_296_, v___x_327_);
v___x_331_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_328_, v_as_330_, v_j_329_);
lean_dec(v___x_328_);
return v___x_331_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7(lean_object* v_x_332_, lean_object* v_keys_333_, lean_object* v_v_334_, lean_object* v_k_335_, lean_object* v_as_336_, lean_object* v_k_337_){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; uint8_t v___x_340_; 
v___x_338_ = lean_array_get_size(v_as_336_);
v___x_339_ = lean_unsigned_to_nat(0u);
v___x_340_ = lean_nat_dec_eq(v___x_338_, v___x_339_);
if (v___x_340_ == 0)
{
lean_object* v___x_341_; uint8_t v___x_342_; 
v___x_341_ = lean_array_fget_borrowed(v_as_336_, v___x_339_);
v___x_342_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__1(v_k_337_, v___x_341_);
if (v___x_342_ == 0)
{
uint8_t v___x_343_; 
v___x_343_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__1(v___x_341_, v_k_337_);
if (v___x_343_ == 0)
{
uint8_t v___x_344_; 
v___x_344_ = lean_nat_dec_lt(v___x_339_, v___x_338_);
if (v___x_344_ == 0)
{
lean_dec(v_k_335_);
lean_dec_ref(v_v_334_);
return v_as_336_;
}
else
{
lean_object* v___x_345_; lean_object* v_xs_x27_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
lean_inc(v___x_341_);
v___x_345_ = lean_box(0);
v_xs_x27_346_ = lean_array_fset(v_as_336_, v___x_339_, v___x_345_);
v___x_347_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__2(v_x_332_, v_keys_333_, v_v_334_, v_k_335_, v___x_341_);
v___x_348_ = lean_array_fset(v_xs_x27_346_, v___x_339_, v___x_347_);
return v___x_348_;
}
}
else
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; uint8_t v___x_352_; 
v___x_349_ = lean_unsigned_to_nat(1u);
v___x_350_ = lean_nat_sub(v___x_338_, v___x_349_);
v___x_351_ = lean_array_fget_borrowed(v_as_336_, v___x_350_);
v___x_352_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__1(v___x_351_, v_k_337_);
if (v___x_352_ == 0)
{
uint8_t v___x_353_; 
v___x_353_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__1(v_k_337_, v___x_351_);
if (v___x_353_ == 0)
{
uint8_t v___x_354_; 
v___x_354_ = lean_nat_dec_lt(v___x_350_, v___x_338_);
if (v___x_354_ == 0)
{
lean_dec(v___x_350_);
lean_dec(v_k_335_);
lean_dec_ref(v_v_334_);
return v_as_336_;
}
else
{
lean_object* v___x_355_; lean_object* v_xs_x27_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
lean_inc(v___x_351_);
v___x_355_ = lean_box(0);
v_xs_x27_356_ = lean_array_fset(v_as_336_, v___x_350_, v___x_355_);
v___x_357_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__2(v_x_332_, v_keys_333_, v_v_334_, v_k_335_, v___x_351_);
v___x_358_ = lean_array_fset(v_xs_x27_356_, v___x_350_, v___x_357_);
lean_dec(v___x_350_);
return v___x_358_;
}
}
else
{
lean_object* v___x_359_; 
v___x_359_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7_spec__13___redArg(v_x_332_, v_keys_333_, v_v_334_, v_k_335_, v_as_336_, v_k_337_, v___x_339_, v___x_350_);
return v___x_359_;
}
}
else
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
lean_dec(v___x_350_);
v___x_360_ = lean_box(0);
v___x_361_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__0(v_x_332_, v_keys_333_, v_v_334_, v_k_335_, v___x_360_);
v___x_362_ = lean_array_push(v_as_336_, v___x_361_);
return v___x_362_;
}
}
}
else
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v_as_365_; lean_object* v___x_366_; 
v___x_363_ = lean_box(0);
v___x_364_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__0(v_x_332_, v_keys_333_, v_v_334_, v_k_335_, v___x_363_);
v_as_365_ = lean_array_push(v_as_336_, v___x_364_);
v___x_366_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_339_, v_as_365_, v___x_338_);
return v___x_366_;
}
}
else
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_367_ = lean_box(0);
v___x_368_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__0(v_x_332_, v_keys_333_, v_v_334_, v_k_335_, v___x_367_);
v___x_369_ = lean_array_push(v_as_336_, v___x_368_);
return v___x_369_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3(lean_object* v_keys_370_, lean_object* v_v_371_, lean_object* v_x_372_, lean_object* v_x_373_){
_start:
{
lean_object* v_vs_374_; lean_object* v_children_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_392_; 
v_vs_374_ = lean_ctor_get(v_x_373_, 0);
v_children_375_ = lean_ctor_get(v_x_373_, 1);
v_isSharedCheck_392_ = !lean_is_exclusive(v_x_373_);
if (v_isSharedCheck_392_ == 0)
{
v___x_377_ = v_x_373_;
v_isShared_378_ = v_isSharedCheck_392_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_children_375_);
lean_inc(v_vs_374_);
lean_dec(v_x_373_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_392_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_379_; uint8_t v___x_380_; 
v___x_379_ = lean_array_get_size(v_keys_370_);
v___x_380_ = lean_nat_dec_lt(v_x_372_, v___x_379_);
if (v___x_380_ == 0)
{
lean_object* v___x_381_; lean_object* v___x_383_; 
v___x_381_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__6(v_vs_374_, v_v_371_);
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 0, v___x_381_);
v___x_383_ = v___x_377_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v___x_381_);
lean_ctor_set(v_reuseFailAlloc_384_, 1, v_children_375_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
else
{
lean_object* v_k_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v_c_388_; lean_object* v___x_390_; 
v_k_385_ = lean_array_fget_borrowed(v_keys_370_, v_x_372_);
v___x_386_ = lean_obj_once(&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3___closed__1, &l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3___closed__1_once, _init_l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3___closed__1);
lean_inc(v_k_385_);
v___x_387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_387_, 0, v_k_385_);
lean_ctor_set(v___x_387_, 1, v___x_386_);
lean_inc(v_k_385_);
v_c_388_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7(v_x_372_, v_keys_370_, v_v_371_, v_k_385_, v_children_375_, v___x_387_);
lean_dec_ref(v___x_387_);
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 1, v_c_388_);
v___x_390_ = v___x_377_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_vs_374_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v_c_388_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__2(lean_object* v_x_393_, lean_object* v_keys_394_, lean_object* v_v_395_, lean_object* v_k_396_, lean_object* v_x_397_){
_start:
{
lean_object* v_snd_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_408_; 
v_snd_398_ = lean_ctor_get(v_x_397_, 1);
v_isSharedCheck_408_ = !lean_is_exclusive(v_x_397_);
if (v_isSharedCheck_408_ == 0)
{
lean_object* v_unused_409_; 
v_unused_409_ = lean_ctor_get(v_x_397_, 0);
lean_dec(v_unused_409_);
v___x_400_ = v_x_397_;
v_isShared_401_ = v_isSharedCheck_408_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_snd_398_);
lean_dec(v_x_397_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_408_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v_c_404_; lean_object* v___x_406_; 
v___x_402_ = lean_unsigned_to_nat(1u);
v___x_403_ = lean_nat_add(v_x_393_, v___x_402_);
v_c_404_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3(v_keys_394_, v_v_395_, v___x_403_, v_snd_398_);
lean_dec(v___x_403_);
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 1, v_c_404_);
lean_ctor_set(v___x_400_, 0, v_k_396_);
v___x_406_ = v___x_400_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_k_396_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_c_404_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__2___boxed(lean_object* v_x_410_, lean_object* v_keys_411_, lean_object* v_v_412_, lean_object* v_k_413_, lean_object* v_x_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___lam__2(v_x_410_, v_keys_411_, v_v_412_, v_k_413_, v_x_414_);
lean_dec_ref(v_keys_411_);
lean_dec(v_x_410_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3___boxed(lean_object* v_keys_416_, lean_object* v_v_417_, lean_object* v_x_418_, lean_object* v_x_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3(v_keys_416_, v_v_417_, v_x_418_, v_x_419_);
lean_dec(v_x_418_);
lean_dec_ref(v_keys_416_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7_spec__13___redArg___boxed(lean_object* v_x_421_, lean_object* v_keys_422_, lean_object* v_v_423_, lean_object* v_k_424_, lean_object* v_as_425_, lean_object* v_k_426_, lean_object* v_x_427_, lean_object* v_x_428_){
_start:
{
lean_object* v_res_429_; 
v_res_429_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7_spec__13___redArg(v_x_421_, v_keys_422_, v_v_423_, v_k_424_, v_as_425_, v_k_426_, v_x_427_, v_x_428_);
lean_dec_ref(v_k_426_);
lean_dec_ref(v_keys_422_);
lean_dec(v_x_421_);
return v_res_429_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7___boxed(lean_object* v_x_430_, lean_object* v_keys_431_, lean_object* v_v_432_, lean_object* v_k_433_, lean_object* v_as_434_, lean_object* v_k_435_){
_start:
{
lean_object* v_res_436_; 
v_res_436_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7(v_x_430_, v_keys_431_, v_v_432_, v_k_433_, v_as_434_, v_k_435_);
lean_dec_ref(v_k_435_);
lean_dec_ref(v_keys_431_);
lean_dec(v_x_430_);
return v_res_436_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__4___closed__0(void){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = l_Lean_Meta_DiscrTree_instInhabited(lean_box(0));
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__4(lean_object* v_msg_438_){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_439_ = lean_obj_once(&l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__4___closed__0, &l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__4___closed__0_once, _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__4___closed__0);
v___x_440_ = lean_panic_fn(v___x_439_, v_msg_438_);
return v___x_440_;
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_444_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___closed__2));
v___x_445_ = lean_unsigned_to_nat(23u);
v___x_446_ = lean_unsigned_to_nat(166u);
v___x_447_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___closed__1));
v___x_448_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___closed__0));
v___x_449_ = l_mkPanicMessageWithDecl(v___x_448_, v___x_447_, v___x_446_, v___x_445_, v___x_444_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0(lean_object* v_d_450_, lean_object* v_keys_451_, lean_object* v_v_452_){
_start:
{
lean_object* v___x_453_; lean_object* v___x_454_; uint8_t v___x_455_; 
v___x_453_ = lean_array_get_size(v_keys_451_);
v___x_454_ = lean_unsigned_to_nat(0u);
v___x_455_ = lean_nat_dec_eq(v___x_453_, v___x_454_);
if (v___x_455_ == 0)
{
lean_object* v___x_456_; lean_object* v_k_457_; lean_object* v___x_458_; 
v___x_456_ = lean_box(0);
v_k_457_ = lean_array_get_borrowed(v___x_456_, v_keys_451_, v___x_454_);
lean_inc_ref(v_d_450_);
v___x_458_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1___redArg(v_d_450_, v_k_457_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v___x_459_; lean_object* v_c_460_; lean_object* v___x_461_; 
v___x_459_ = lean_unsigned_to_nat(1u);
v_c_460_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_451_, v_v_452_, v___x_459_);
lean_inc(v_k_457_);
v___x_461_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2___redArg(v_d_450_, v_k_457_, v_c_460_);
return v___x_461_;
}
else
{
lean_object* v_val_462_; lean_object* v___x_463_; lean_object* v_c_464_; lean_object* v___x_465_; 
v_val_462_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_val_462_);
lean_dec_ref(v___x_458_);
v___x_463_ = lean_unsigned_to_nat(1u);
v_c_464_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3(v_keys_451_, v_v_452_, v___x_463_, v_val_462_);
lean_inc(v_k_457_);
v___x_465_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2___redArg(v_d_450_, v_k_457_, v_c_464_);
return v___x_465_;
}
}
else
{
lean_object* v___x_466_; lean_object* v___x_467_; 
lean_dec_ref(v_v_452_);
lean_dec_ref(v_d_450_);
v___x_466_ = lean_obj_once(&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___closed__3, &l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___closed__3_once, _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___closed__3);
v___x_467_ = l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__4(v___x_466_);
return v___x_467_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0___boxed(lean_object* v_d_468_, lean_object* v_keys_469_, lean_object* v_v_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0(v_d_468_, v_keys_469_, v_v_470_);
lean_dec_ref(v_keys_469_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0(lean_object* v_d_472_, lean_object* v_p_473_, lean_object* v_v_474_){
_start:
{
lean_object* v_keys_475_; lean_object* v___x_476_; 
v_keys_475_ = l_Lean_Meta_Sym_Pattern_mkDiscrTreeKeys(v_p_473_);
v___x_476_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0(v_d_472_, v_keys_475_, v_v_474_);
lean_dec_ref(v_keys_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorems_insert(lean_object* v_thms_477_, lean_object* v_thm_478_){
_start:
{
lean_object* v_pattern_479_; lean_object* v___x_480_; 
v_pattern_479_ = lean_ctor_get(v_thm_478_, 1);
lean_inc_ref(v_pattern_479_);
v___x_480_ = l_Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0(v_thms_477_, v_pattern_479_, v_thm_478_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_481_, lean_object* v_x_482_, lean_object* v_x_483_){
_start:
{
lean_object* v___x_484_; 
v___x_484_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1___redArg(v_x_482_, v_x_483_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_485_, lean_object* v_x_486_, lean_object* v_x_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1(v_00_u03b2_485_, v_x_486_, v_x_487_);
lean_dec(v_x_487_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_489_, lean_object* v_x_490_, lean_object* v_x_491_, lean_object* v_x_492_){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2___redArg(v_x_490_, v_x_491_, v_x_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_494_, lean_object* v_x_495_, size_t v_x_496_, lean_object* v_x_497_){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_x_495_, v_x_496_, v_x_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_499_, lean_object* v_x_500_, lean_object* v_x_501_, lean_object* v_x_502_){
_start:
{
size_t v_x_2203__boxed_503_; lean_object* v_res_504_; 
v_x_2203__boxed_503_ = lean_unbox_usize(v_x_501_);
lean_dec(v_x_501_);
v_res_504_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2(v_00_u03b2_499_, v_x_500_, v_x_2203__boxed_503_, v_x_502_);
lean_dec(v_x_502_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_505_, lean_object* v_x_506_, size_t v_x_507_, size_t v_x_508_, lean_object* v_x_509_, lean_object* v_x_510_){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4___redArg(v_x_506_, v_x_507_, v_x_508_, v_x_509_, v_x_510_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_00_u03b2_512_, lean_object* v_x_513_, lean_object* v_x_514_, lean_object* v_x_515_, lean_object* v_x_516_, lean_object* v_x_517_){
_start:
{
size_t v_x_2214__boxed_518_; size_t v_x_2215__boxed_519_; lean_object* v_res_520_; 
v_x_2214__boxed_518_ = lean_unbox_usize(v_x_514_);
lean_dec(v_x_514_);
v_x_2215__boxed_519_ = lean_unbox_usize(v_x_515_);
lean_dec(v_x_515_);
v_res_520_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4(v_00_u03b2_512_, v_x_513_, v_x_2214__boxed_518_, v_x_2215__boxed_519_, v_x_516_, v_x_517_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_521_, lean_object* v_keys_522_, lean_object* v_vals_523_, lean_object* v_heq_524_, lean_object* v_i_525_, lean_object* v_k_526_){
_start:
{
lean_object* v___x_527_; 
v___x_527_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_keys_522_, v_vals_523_, v_i_525_, v_k_526_);
return v___x_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_528_, lean_object* v_keys_529_, lean_object* v_vals_530_, lean_object* v_heq_531_, lean_object* v_i_532_, lean_object* v_k_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2_spec__4(v_00_u03b2_528_, v_keys_529_, v_vals_530_, v_heq_531_, v_i_532_, v_k_533_);
lean_dec(v_k_533_);
lean_dec_ref(v_vals_530_);
lean_dec_ref(v_keys_529_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_535_, lean_object* v_n_536_, lean_object* v_k_537_, lean_object* v_v_538_){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__7___redArg(v_n_536_, v_k_537_, v_v_538_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_540_, size_t v_depth_541_, lean_object* v_keys_542_, lean_object* v_vals_543_, lean_object* v_heq_544_, lean_object* v_i_545_, lean_object* v_entries_546_){
_start:
{
lean_object* v___x_547_; 
v___x_547_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__8___redArg(v_depth_541_, v_keys_542_, v_vals_543_, v_i_545_, v_entries_546_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03b2_548_, lean_object* v_depth_549_, lean_object* v_keys_550_, lean_object* v_vals_551_, lean_object* v_heq_552_, lean_object* v_i_553_, lean_object* v_entries_554_){
_start:
{
size_t v_depth_boxed_555_; lean_object* v_res_556_; 
v_depth_boxed_555_ = lean_unbox_usize(v_depth_549_);
lean_dec(v_depth_549_);
v_res_556_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__8(v_00_u03b2_548_, v_depth_boxed_555_, v_keys_550_, v_vals_551_, v_heq_552_, v_i_553_, v_entries_554_);
lean_dec_ref(v_vals_551_);
lean_dec_ref(v_keys_550_);
return v_res_556_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7_spec__13(lean_object* v_x_557_, lean_object* v_keys_558_, lean_object* v_v_559_, lean_object* v_k_560_, lean_object* v_as_561_, lean_object* v_k_562_, lean_object* v_x_563_, lean_object* v_x_564_, lean_object* v_x_565_, lean_object* v_x_566_){
_start:
{
lean_object* v___x_567_; 
v___x_567_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7_spec__13___redArg(v_x_557_, v_keys_558_, v_v_559_, v_k_560_, v_as_561_, v_k_562_, v_x_563_, v_x_564_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7_spec__13___boxed(lean_object* v_x_568_, lean_object* v_keys_569_, lean_object* v_v_570_, lean_object* v_k_571_, lean_object* v_as_572_, lean_object* v_k_573_, lean_object* v_x_574_, lean_object* v_x_575_, lean_object* v_x_576_, lean_object* v_x_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__3_spec__7_spec__13(v_x_568_, v_keys_569_, v_v_570_, v_k_571_, v_as_572_, v_k_573_, v_x_574_, v_x_575_, v_x_576_, v_x_577_);
lean_dec_ref(v_k_573_);
lean_dec_ref(v_keys_569_);
lean_dec(v_x_568_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__7_spec__9(lean_object* v_00_u03b2_579_, lean_object* v_x_580_, lean_object* v_x_581_, lean_object* v_x_582_, lean_object* v_x_583_){
_start:
{
lean_object* v___x_584_; 
v___x_584_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__2_spec__4_spec__7_spec__9___redArg(v_x_580_, v_x_581_, v_x_582_, v_x_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorems_getMatch(lean_object* v_thms_585_, lean_object* v_e_586_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lean_Meta_Sym_getMatch___redArg(v_thms_585_, v_e_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorems_getMatch___boxed(lean_object* v_thms_588_, lean_object* v_e_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l_Lean_Meta_Sym_Simp_Theorems_getMatch(v_thms_588_, v_e_589_);
lean_dec_ref(v_e_589_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorems_getMatchWithExtra(lean_object* v_thms_591_, lean_object* v_e_592_){
_start:
{
lean_object* v___x_593_; 
v___x_593_ = l_Lean_Meta_Sym_getMatchWithExtra___redArg(v_thms_591_, v_e_592_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorems_getMatchWithExtra___boxed(lean_object* v_thms_594_, lean_object* v_e_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Lean_Meta_Sym_Simp_Theorems_getMatchWithExtra(v_thms_594_, v_e_595_);
lean_dec_ref(v_e_595_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(lean_object* v_declName_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_){
_start:
{
lean_object* v___x_603_; 
lean_inc(v_declName_597_);
v___x_603_ = l_Lean_Meta_Sym_mkEqPatternFromDecl(v_declName_597_, v_a_598_, v_a_599_, v_a_600_, v_a_601_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_object* v_a_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_616_; 
v_a_604_ = lean_ctor_get(v___x_603_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_616_ == 0)
{
v___x_606_ = v___x_603_;
v_isShared_607_ = v_isSharedCheck_616_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_a_604_);
lean_dec(v___x_603_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_616_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v_fst_608_; lean_object* v_snd_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_614_; 
v_fst_608_ = lean_ctor_get(v_a_604_, 0);
lean_inc(v_fst_608_);
v_snd_609_ = lean_ctor_get(v_a_604_, 1);
lean_inc(v_snd_609_);
lean_dec(v_a_604_);
v___x_610_ = lean_box(0);
v___x_611_ = l_Lean_mkConst(v_declName_597_, v___x_610_);
v___x_612_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_612_, 0, v___x_611_);
lean_ctor_set(v___x_612_, 1, v_fst_608_);
lean_ctor_set(v___x_612_, 2, v_snd_609_);
if (v_isShared_607_ == 0)
{
lean_ctor_set(v___x_606_, 0, v___x_612_);
v___x_614_ = v___x_606_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v___x_612_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
else
{
lean_object* v_a_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_624_; 
lean_dec(v_declName_597_);
v_a_617_ = lean_ctor_get(v___x_603_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_624_ == 0)
{
v___x_619_ = v___x_603_;
v_isShared_620_ = v_isSharedCheck_624_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_a_617_);
lean_dec(v___x_603_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_624_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_622_; 
if (v_isShared_620_ == 0)
{
v___x_622_ = v___x_619_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_a_617_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkTheoremFromDecl___boxed(lean_object* v_declName_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(v_declName_625_, v_a_626_, v_a_627_, v_a_628_, v_a_629_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___redArg(lean_object* v_ext_632_, lean_object* v_a_633_){
_start:
{
lean_object* v___x_635_; lean_object* v_ext_636_; lean_object* v_toEnvExtension_637_; lean_object* v_env_638_; lean_object* v_asyncMode_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_635_ = lean_st_ref_get(v_a_633_);
v_ext_636_ = lean_ctor_get(v_ext_632_, 1);
v_toEnvExtension_637_ = lean_ctor_get(v_ext_636_, 0);
v_env_638_ = lean_ctor_get(v___x_635_, 0);
lean_inc_ref(v_env_638_);
lean_dec(v___x_635_);
v_asyncMode_639_ = lean_ctor_get(v_toEnvExtension_637_, 2);
v___x_640_ = l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default;
v___x_641_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_640_, v_ext_632_, v_env_638_, v_asyncMode_639_);
v___x_642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___redArg___boxed(lean_object* v_ext_643_, lean_object* v_a_644_, lean_object* v_a_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___redArg(v_ext_643_, v_a_644_);
lean_dec(v_a_644_);
lean_dec_ref(v_ext_643_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems(lean_object* v_ext_647_, lean_object* v_a_648_, lean_object* v_a_649_){
_start:
{
lean_object* v___x_651_; 
v___x_651_ = l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___redArg(v_ext_647_, v_a_649_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems___boxed(lean_object* v_ext_652_, lean_object* v_a_653_, lean_object* v_a_654_, lean_object* v_a_655_){
_start:
{
lean_object* v_res_656_; 
v_res_656_ = l_Lean_Meta_Sym_Simp_SymSimpExtension_getTheorems(v_ext_652_, v_a_653_, v_a_654_);
lean_dec(v_a_654_);
lean_dec_ref(v_a_653_);
lean_dec_ref(v_ext_652_);
return v_res_656_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__12(void){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__10));
v___x_684_ = l_Lean_mkAtom(v___x_683_);
return v___x_684_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__13(void){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_685_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__12, &l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__12_once, _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__12);
v___x_686_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__5));
v___x_687_ = lean_array_push(v___x_686_, v___x_685_);
return v___x_687_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__18(void){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_696_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__17));
v___x_697_ = l_Lean_mkAtom(v___x_696_);
return v___x_697_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__19(void){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_698_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__18, &l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__18_once, _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__18);
v___x_699_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__5));
v___x_700_ = lean_array_push(v___x_699_, v___x_698_);
return v___x_700_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__20(void){
_start:
{
lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_701_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__19, &l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__19_once, _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__19);
v___x_702_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__16));
v___x_703_ = lean_box(2);
v___x_704_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_704_, 0, v___x_703_);
lean_ctor_set(v___x_704_, 1, v___x_702_);
lean_ctor_set(v___x_704_, 2, v___x_701_);
return v___x_704_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__21(void){
_start:
{
lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_705_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__20, &l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__20_once, _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__20);
v___x_706_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__13, &l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__13_once, _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__13);
v___x_707_ = lean_array_push(v___x_706_, v___x_705_);
return v___x_707_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__22(void){
_start:
{
lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_708_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__21, &l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__21_once, _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__21);
v___x_709_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__11));
v___x_710_ = lean_box(2);
v___x_711_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_711_, 0, v___x_710_);
lean_ctor_set(v___x_711_, 1, v___x_709_);
lean_ctor_set(v___x_711_, 2, v___x_708_);
return v___x_711_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__23(void){
_start:
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_712_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__22, &l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__22_once, _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__22);
v___x_713_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__5));
v___x_714_ = lean_array_push(v___x_713_, v___x_712_);
return v___x_714_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__24(void){
_start:
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; 
v___x_715_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__23, &l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__23_once, _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__23);
v___x_716_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__9));
v___x_717_ = lean_box(2);
v___x_718_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_718_, 0, v___x_717_);
lean_ctor_set(v___x_718_, 1, v___x_716_);
lean_ctor_set(v___x_718_, 2, v___x_715_);
return v___x_718_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__25(void){
_start:
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_719_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__24, &l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__24_once, _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__24);
v___x_720_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__5));
v___x_721_ = lean_array_push(v___x_720_, v___x_719_);
return v___x_721_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__26(void){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v___x_722_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__25, &l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__25_once, _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__25);
v___x_723_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__7));
v___x_724_ = lean_box(2);
v___x_725_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_725_, 0, v___x_724_);
lean_ctor_set(v___x_725_, 1, v___x_723_);
lean_ctor_set(v___x_725_, 2, v___x_722_);
return v___x_725_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__27(void){
_start:
{
lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_726_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__26, &l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__26_once, _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__26);
v___x_727_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__5));
v___x_728_ = lean_array_push(v___x_727_, v___x_726_);
return v___x_728_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__28(void){
_start:
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_729_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__27, &l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__27_once, _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__27);
v___x_730_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__4));
v___x_731_ = lean_box(2);
v___x_732_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_732_, 0, v___x_731_);
lean_ctor_set(v___x_732_, 1, v___x_730_);
lean_ctor_set(v___x_732_, 2, v___x_729_);
return v___x_732_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1(void){
_start:
{
lean_object* v___x_733_; 
v___x_733_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__28, &l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__28_once, _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1___closed__28);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___lam__0(uint8_t v_lvl_734_, lean_object* v_thm_735_){
_start:
{
uint8_t v___y_737_; lean_object* v_expr_740_; 
v_expr_740_ = lean_ctor_get(v_thm_735_, 0);
if (lean_obj_tag(v_expr_740_) == 4)
{
lean_object* v_declName_741_; uint8_t v___x_742_; uint8_t v___x_743_; 
v_declName_741_ = lean_ctor_get(v_expr_740_, 0);
v___x_742_ = 2;
v___x_743_ = l_Lean_instDecidableEqOLeanLevel(v_lvl_734_, v___x_742_);
if (v___x_743_ == 0)
{
uint8_t v___x_744_; 
v___x_744_ = l_Lean_isPrivateName(v_declName_741_);
if (v___x_744_ == 0)
{
lean_object* v___x_745_; 
v___x_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_745_, 0, v_thm_735_);
return v___x_745_;
}
else
{
v___y_737_ = v___x_743_;
goto v___jp_736_;
}
}
else
{
v___y_737_ = v___x_743_;
goto v___jp_736_;
}
}
else
{
lean_object* v___x_746_; 
v___x_746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_746_, 0, v_thm_735_);
return v___x_746_;
}
v___jp_736_:
{
if (v___y_737_ == 0)
{
lean_object* v___x_738_; 
lean_dec_ref(v_thm_735_);
v___x_738_ = lean_box(0);
return v___x_738_;
}
else
{
lean_object* v___x_739_; 
v___x_739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_739_, 0, v_thm_735_);
return v___x_739_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___lam__0___boxed(lean_object* v_lvl_747_, lean_object* v_thm_748_){
_start:
{
uint8_t v_lvl_boxed_749_; lean_object* v_res_750_; 
v_lvl_boxed_749_ = lean_unbox(v_lvl_747_);
v_res_750_ = l_Lean_Meta_Sym_Simp_mkSymSimpExt___lam__0(v_lvl_boxed_749_, v_thm_748_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___lam__1(lean_object* v___y_751_){
_start:
{
lean_inc_ref(v___y_751_);
return v___y_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___lam__1___boxed(lean_object* v___y_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Lean_Meta_Sym_Simp_mkSymSimpExt___lam__1(v___y_752_);
lean_dec_ref(v___y_752_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt(lean_object* v_name_757_){
_start:
{
lean_object* v___f_759_; lean_object* v___f_760_; lean_object* v___f_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; 
v___f_759_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkSymSimpExt___closed__0));
v___f_760_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkSymSimpExt___closed__1));
v___f_761_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_mkSymSimpExt___closed__2));
v___x_762_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default___closed__1, &l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default___closed__1_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default___closed__1);
v___x_763_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_763_, 0, v_name_757_);
lean_ctor_set(v___x_763_, 1, v___f_759_);
lean_ctor_set(v___x_763_, 2, v___x_762_);
lean_ctor_set(v___x_763_, 3, v___f_761_);
lean_ctor_set(v___x_763_, 4, v___f_760_);
v___x_764_ = l_Lean_registerSimpleScopedEnvExtension___redArg(v___x_763_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkSymSimpExt___boxed(lean_object* v_name_765_, lean_object* v_a_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l_Lean_Meta_Sym_Simp_mkSymSimpExt(v_name_765_);
return v_res_767_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_initFn___closed__0_00___x40_Lean_Meta_Sym_Simp_Theorems_3071968463____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___x_768_ = lean_box(0);
v___x_769_ = lean_unsigned_to_nat(16u);
v___x_770_ = lean_mk_array(v___x_769_, v___x_768_);
return v___x_770_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Theorems_3071968463____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_771_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_initFn___closed__0_00___x40_Lean_Meta_Sym_Simp_Theorems_3071968463____hygCtx___hyg_2_, &l_Lean_Meta_Sym_Simp_initFn___closed__0_00___x40_Lean_Meta_Sym_Simp_Theorems_3071968463____hygCtx___hyg_2__once, _init_l_Lean_Meta_Sym_Simp_initFn___closed__0_00___x40_Lean_Meta_Sym_Simp_Theorems_3071968463____hygCtx___hyg_2_);
v___x_772_ = lean_unsigned_to_nat(0u);
v___x_773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_773_, 0, v___x_772_);
lean_ctor_set(v___x_773_, 1, v___x_771_);
return v___x_773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Theorems_3071968463____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_775_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Theorems_3071968463____hygCtx___hyg_2_, &l_Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Theorems_3071968463____hygCtx___hyg_2__once, _init_l_Lean_Meta_Sym_Simp_initFn___closed__1_00___x40_Lean_Meta_Sym_Simp_Theorems_3071968463____hygCtx___hyg_2_);
v___x_776_ = lean_st_mk_ref(v___x_775_);
v___x_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_777_, 0, v___x_776_);
return v___x_777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Theorems_3071968463____hygCtx___hyg_2____boxed(lean_object* v_a_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Theorems_3071968463____hygCtx___hyg_2_();
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4___redArg(lean_object* v_cls_783_, lean_object* v___y_784_){
_start:
{
lean_object* v_options_786_; uint8_t v_hasTrace_787_; 
v_options_786_ = lean_ctor_get(v___y_784_, 2);
v_hasTrace_787_ = lean_ctor_get_uint8(v_options_786_, sizeof(void*)*1);
if (v_hasTrace_787_ == 0)
{
lean_object* v___x_788_; lean_object* v___x_789_; 
lean_dec(v_cls_783_);
v___x_788_ = lean_box(v_hasTrace_787_);
v___x_789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_789_, 0, v___x_788_);
return v___x_789_;
}
else
{
lean_object* v_inheritedTraceOptions_790_; lean_object* v___x_791_; lean_object* v___x_792_; uint8_t v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
v_inheritedTraceOptions_790_ = lean_ctor_get(v___y_784_, 13);
v___x_791_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4___redArg___closed__1));
v___x_792_ = l_Lean_Name_append(v___x_791_, v_cls_783_);
v___x_793_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_790_, v_options_786_, v___x_792_);
lean_dec(v___x_792_);
v___x_794_ = lean_box(v___x_793_);
v___x_795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_795_, 0, v___x_794_);
return v___x_795_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_cls_796_, lean_object* v___y_797_, lean_object* v___y_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4___redArg(v_cls_796_, v___y_797_);
lean_dec_ref(v___y_797_);
return v_res_799_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4_spec__7___redArg(lean_object* v_keys_800_, lean_object* v_i_801_, lean_object* v_k_802_){
_start:
{
lean_object* v___x_803_; uint8_t v___x_804_; 
v___x_803_ = lean_array_get_size(v_keys_800_);
v___x_804_ = lean_nat_dec_lt(v_i_801_, v___x_803_);
if (v___x_804_ == 0)
{
lean_dec(v_i_801_);
return v___x_804_;
}
else
{
lean_object* v_k_x27_805_; uint8_t v___x_806_; 
v_k_x27_805_ = lean_array_fget_borrowed(v_keys_800_, v_i_801_);
v___x_806_ = l_Lean_instBEqExtraModUse_beq(v_k_802_, v_k_x27_805_);
if (v___x_806_ == 0)
{
lean_object* v___x_807_; lean_object* v___x_808_; 
v___x_807_ = lean_unsigned_to_nat(1u);
v___x_808_ = lean_nat_add(v_i_801_, v___x_807_);
lean_dec(v_i_801_);
v_i_801_ = v___x_808_;
goto _start;
}
else
{
lean_dec(v_i_801_);
return v___x_806_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4_spec__7___redArg___boxed(lean_object* v_keys_810_, lean_object* v_i_811_, lean_object* v_k_812_){
_start:
{
uint8_t v_res_813_; lean_object* v_r_814_; 
v_res_813_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4_spec__7___redArg(v_keys_810_, v_i_811_, v_k_812_);
lean_dec_ref(v_k_812_);
lean_dec_ref(v_keys_810_);
v_r_814_ = lean_box(v_res_813_);
return v_r_814_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_x_815_, size_t v_x_816_, lean_object* v_x_817_){
_start:
{
if (lean_obj_tag(v_x_815_) == 0)
{
lean_object* v_es_818_; lean_object* v___x_819_; size_t v___x_820_; size_t v___x_821_; size_t v___x_822_; lean_object* v_j_823_; lean_object* v___x_824_; 
v_es_818_ = lean_ctor_get(v_x_815_, 0);
lean_inc_ref(v_es_818_);
lean_dec_ref(v_x_815_);
v___x_819_ = lean_box(2);
v___x_820_ = ((size_t)5ULL);
v___x_821_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Meta_Sym_Simp_Theorems_insert_spec__0_spec__0_spec__1_spec__2___redArg___closed__1);
v___x_822_ = lean_usize_land(v_x_816_, v___x_821_);
v_j_823_ = lean_usize_to_nat(v___x_822_);
v___x_824_ = lean_array_get(v___x_819_, v_es_818_, v_j_823_);
lean_dec(v_j_823_);
lean_dec_ref(v_es_818_);
switch(lean_obj_tag(v___x_824_))
{
case 0:
{
lean_object* v_key_825_; uint8_t v___x_826_; 
v_key_825_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_key_825_);
lean_dec_ref(v___x_824_);
v___x_826_ = l_Lean_instBEqExtraModUse_beq(v_x_817_, v_key_825_);
lean_dec(v_key_825_);
return v___x_826_;
}
case 1:
{
lean_object* v_node_827_; size_t v___x_828_; 
v_node_827_ = lean_ctor_get(v___x_824_, 0);
lean_inc(v_node_827_);
lean_dec_ref(v___x_824_);
v___x_828_ = lean_usize_shift_right(v_x_816_, v___x_820_);
v_x_815_ = v_node_827_;
v_x_816_ = v___x_828_;
goto _start;
}
default: 
{
uint8_t v___x_830_; 
v___x_830_ = 0;
return v___x_830_;
}
}
}
else
{
lean_object* v_ks_831_; lean_object* v___x_832_; uint8_t v___x_833_; 
v_ks_831_ = lean_ctor_get(v_x_815_, 0);
lean_inc_ref(v_ks_831_);
lean_dec_ref(v_x_815_);
v___x_832_ = lean_unsigned_to_nat(0u);
v___x_833_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4_spec__7___redArg(v_ks_831_, v___x_832_, v_x_817_);
lean_dec_ref(v_ks_831_);
return v___x_833_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_x_834_, lean_object* v_x_835_, lean_object* v_x_836_){
_start:
{
size_t v_x_3885__boxed_837_; uint8_t v_res_838_; lean_object* v_r_839_; 
v_x_3885__boxed_837_ = lean_unbox_usize(v_x_835_);
lean_dec(v_x_835_);
v_res_838_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4___redArg(v_x_834_, v_x_3885__boxed_837_, v_x_836_);
lean_dec_ref(v_x_836_);
v_r_839_ = lean_box(v_res_838_);
return v_r_839_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3___redArg(lean_object* v_x_840_, lean_object* v_x_841_){
_start:
{
uint64_t v___x_842_; size_t v___x_843_; uint8_t v___x_844_; 
v___x_842_ = l_Lean_instHashableExtraModUse_hash(v_x_841_);
v___x_843_ = lean_uint64_to_usize(v___x_842_);
v___x_844_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4___redArg(v_x_840_, v___x_843_, v_x_841_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_x_845_, lean_object* v_x_846_){
_start:
{
uint8_t v_res_847_; lean_object* v_r_848_; 
v_res_847_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3___redArg(v_x_845_, v_x_846_);
lean_dec_ref(v_x_846_);
v_r_848_ = lean_box(v_res_847_);
return v_r_848_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__0(void){
_start:
{
lean_object* v___x_849_; 
v___x_849_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_849_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__1(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_850_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__0);
v___x_851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_851_, 0, v___x_850_);
return v___x_851_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__2(void){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_852_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__1);
v___x_853_ = lean_unsigned_to_nat(0u);
v___x_854_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
lean_ctor_set(v___x_854_, 1, v___x_853_);
lean_ctor_set(v___x_854_, 2, v___x_853_);
lean_ctor_set(v___x_854_, 3, v___x_852_);
lean_ctor_set(v___x_854_, 4, v___x_852_);
lean_ctor_set(v___x_854_, 5, v___x_852_);
lean_ctor_set(v___x_854_, 6, v___x_852_);
lean_ctor_set(v___x_854_, 7, v___x_852_);
lean_ctor_set(v___x_854_, 8, v___x_852_);
return v___x_854_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__3(void){
_start:
{
lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_855_ = lean_unsigned_to_nat(32u);
v___x_856_ = lean_mk_empty_array_with_capacity(v___x_855_);
v___x_857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_857_, 0, v___x_856_);
return v___x_857_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__4(void){
_start:
{
size_t v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_858_ = ((size_t)5ULL);
v___x_859_ = lean_unsigned_to_nat(0u);
v___x_860_ = lean_unsigned_to_nat(32u);
v___x_861_ = lean_mk_empty_array_with_capacity(v___x_860_);
v___x_862_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__3);
v___x_863_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_863_, 0, v___x_862_);
lean_ctor_set(v___x_863_, 1, v___x_861_);
lean_ctor_set(v___x_863_, 2, v___x_859_);
lean_ctor_set(v___x_863_, 3, v___x_859_);
lean_ctor_set_usize(v___x_863_, 4, v___x_858_);
return v___x_863_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__5(void){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_864_ = lean_box(1);
v___x_865_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__4);
v___x_866_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__1);
v___x_867_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_867_, 0, v___x_866_);
lean_ctor_set(v___x_867_, 1, v___x_865_);
lean_ctor_set(v___x_867_, 2, v___x_864_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7(lean_object* v_msgData_868_, lean_object* v___y_869_, lean_object* v___y_870_){
_start:
{
lean_object* v___x_872_; lean_object* v_env_873_; lean_object* v_options_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_872_ = lean_st_ref_get(v___y_870_);
v_env_873_ = lean_ctor_get(v___x_872_, 0);
lean_inc_ref(v_env_873_);
lean_dec(v___x_872_);
v_options_874_ = lean_ctor_get(v___y_869_, 2);
v___x_875_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__2);
v___x_876_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___closed__5);
lean_inc_ref(v_options_874_);
v___x_877_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_877_, 0, v_env_873_);
lean_ctor_set(v___x_877_, 1, v___x_875_);
lean_ctor_set(v___x_877_, 2, v___x_876_);
lean_ctor_set(v___x_877_, 3, v_options_874_);
v___x_878_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_878_, 0, v___x_877_);
lean_ctor_set(v___x_878_, 1, v_msgData_868_);
v___x_879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_879_, 0, v___x_878_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7___boxed(lean_object* v_msgData_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7(v_msgData_880_, v___y_881_, v___y_882_);
lean_dec(v___y_882_);
lean_dec_ref(v___y_881_);
return v_res_884_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5___closed__0(void){
_start:
{
lean_object* v___x_885_; double v___x_886_; 
v___x_885_ = lean_unsigned_to_nat(0u);
v___x_886_ = lean_float_of_nat(v___x_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5(lean_object* v_cls_890_, lean_object* v_msg_891_, lean_object* v___y_892_, lean_object* v___y_893_){
_start:
{
lean_object* v_ref_895_; lean_object* v___x_896_; lean_object* v_a_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_941_; 
v_ref_895_ = lean_ctor_get(v___y_892_, 5);
v___x_896_ = l_Lean_addMessageContextPartial___at___00Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5_spec__7(v_msg_891_, v___y_892_, v___y_893_);
v_a_897_ = lean_ctor_get(v___x_896_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_896_);
if (v_isSharedCheck_941_ == 0)
{
v___x_899_ = v___x_896_;
v_isShared_900_ = v_isSharedCheck_941_;
goto v_resetjp_898_;
}
else
{
lean_inc(v_a_897_);
lean_dec(v___x_896_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_941_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_901_; lean_object* v_traceState_902_; lean_object* v_env_903_; lean_object* v_nextMacroScope_904_; lean_object* v_ngen_905_; lean_object* v_auxDeclNGen_906_; lean_object* v_cache_907_; lean_object* v_messages_908_; lean_object* v_infoState_909_; lean_object* v_snapshotTasks_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_940_; 
v___x_901_ = lean_st_ref_take(v___y_893_);
v_traceState_902_ = lean_ctor_get(v___x_901_, 4);
v_env_903_ = lean_ctor_get(v___x_901_, 0);
v_nextMacroScope_904_ = lean_ctor_get(v___x_901_, 1);
v_ngen_905_ = lean_ctor_get(v___x_901_, 2);
v_auxDeclNGen_906_ = lean_ctor_get(v___x_901_, 3);
v_cache_907_ = lean_ctor_get(v___x_901_, 5);
v_messages_908_ = lean_ctor_get(v___x_901_, 6);
v_infoState_909_ = lean_ctor_get(v___x_901_, 7);
v_snapshotTasks_910_ = lean_ctor_get(v___x_901_, 8);
v_isSharedCheck_940_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_940_ == 0)
{
v___x_912_ = v___x_901_;
v_isShared_913_ = v_isSharedCheck_940_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_snapshotTasks_910_);
lean_inc(v_infoState_909_);
lean_inc(v_messages_908_);
lean_inc(v_cache_907_);
lean_inc(v_traceState_902_);
lean_inc(v_auxDeclNGen_906_);
lean_inc(v_ngen_905_);
lean_inc(v_nextMacroScope_904_);
lean_inc(v_env_903_);
lean_dec(v___x_901_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_940_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
uint64_t v_tid_914_; lean_object* v_traces_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_939_; 
v_tid_914_ = lean_ctor_get_uint64(v_traceState_902_, sizeof(void*)*1);
v_traces_915_ = lean_ctor_get(v_traceState_902_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v_traceState_902_);
if (v_isSharedCheck_939_ == 0)
{
v___x_917_ = v_traceState_902_;
v_isShared_918_ = v_isSharedCheck_939_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_traces_915_);
lean_dec(v_traceState_902_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_939_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_919_; double v___x_920_; uint8_t v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_929_; 
v___x_919_ = lean_box(0);
v___x_920_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5___closed__0);
v___x_921_ = 0;
v___x_922_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5___closed__1));
v___x_923_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_923_, 0, v_cls_890_);
lean_ctor_set(v___x_923_, 1, v___x_919_);
lean_ctor_set(v___x_923_, 2, v___x_922_);
lean_ctor_set_float(v___x_923_, sizeof(void*)*3, v___x_920_);
lean_ctor_set_float(v___x_923_, sizeof(void*)*3 + 8, v___x_920_);
lean_ctor_set_uint8(v___x_923_, sizeof(void*)*3 + 16, v___x_921_);
v___x_924_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5___closed__2));
v___x_925_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_925_, 0, v___x_923_);
lean_ctor_set(v___x_925_, 1, v_a_897_);
lean_ctor_set(v___x_925_, 2, v___x_924_);
lean_inc(v_ref_895_);
v___x_926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_926_, 0, v_ref_895_);
lean_ctor_set(v___x_926_, 1, v___x_925_);
v___x_927_ = l_Lean_PersistentArray_push___redArg(v_traces_915_, v___x_926_);
if (v_isShared_918_ == 0)
{
lean_ctor_set(v___x_917_, 0, v___x_927_);
v___x_929_ = v___x_917_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v___x_927_);
lean_ctor_set_uint64(v_reuseFailAlloc_938_, sizeof(void*)*1, v_tid_914_);
v___x_929_ = v_reuseFailAlloc_938_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
lean_object* v___x_931_; 
if (v_isShared_913_ == 0)
{
lean_ctor_set(v___x_912_, 4, v___x_929_);
v___x_931_ = v___x_912_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_env_903_);
lean_ctor_set(v_reuseFailAlloc_937_, 1, v_nextMacroScope_904_);
lean_ctor_set(v_reuseFailAlloc_937_, 2, v_ngen_905_);
lean_ctor_set(v_reuseFailAlloc_937_, 3, v_auxDeclNGen_906_);
lean_ctor_set(v_reuseFailAlloc_937_, 4, v___x_929_);
lean_ctor_set(v_reuseFailAlloc_937_, 5, v_cache_907_);
lean_ctor_set(v_reuseFailAlloc_937_, 6, v_messages_908_);
lean_ctor_set(v_reuseFailAlloc_937_, 7, v_infoState_909_);
lean_ctor_set(v_reuseFailAlloc_937_, 8, v_snapshotTasks_910_);
v___x_931_ = v_reuseFailAlloc_937_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_935_; 
v___x_932_ = lean_st_ref_set(v___y_893_, v___x_931_);
v___x_933_ = lean_box(0);
if (v_isShared_900_ == 0)
{
lean_ctor_set(v___x_899_, 0, v___x_933_);
v___x_935_ = v___x_899_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v___x_933_);
v___x_935_ = v_reuseFailAlloc_936_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
return v___x_935_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5___boxed(lean_object* v_cls_942_, lean_object* v_msg_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5(v_cls_942_, v_msg_943_, v___y_944_, v___y_945_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
return v_res_947_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__2(void){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_950_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__1));
v___x_951_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__0));
v___x_952_ = l_Lean_PersistentHashMap_empty(lean_box(0), lean_box(0), v___x_951_, v___x_950_);
return v___x_952_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__3(void){
_start:
{
lean_object* v___x_953_; 
v___x_953_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_953_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_954_; lean_object* v___x_955_; 
v___x_954_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__3);
v___x_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_955_, 0, v___x_954_);
return v___x_955_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_956_; lean_object* v___x_957_; 
v___x_956_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__4);
v___x_957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_956_);
lean_ctor_set(v___x_957_, 1, v___x_956_);
return v___x_957_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__9(void){
_start:
{
lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_962_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__8));
v___x_963_ = l_Lean_stringToMessageData(v___x_962_);
return v___x_963_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__11(void){
_start:
{
lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_965_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__10));
v___x_966_ = l_Lean_stringToMessageData(v___x_965_);
return v___x_966_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__12(void){
_start:
{
lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_967_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5___closed__1));
v___x_968_ = l_Lean_stringToMessageData(v___x_967_);
return v___x_968_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__14(void){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; 
v___x_970_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__13));
v___x_971_ = l_Lean_stringToMessageData(v___x_970_);
return v___x_971_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__16(void){
_start:
{
lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_973_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__15));
v___x_974_ = l_Lean_stringToMessageData(v___x_973_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2(lean_object* v_mod_979_, uint8_t v_isMeta_980_, lean_object* v_hint_981_, lean_object* v___y_982_, lean_object* v___y_983_){
_start:
{
lean_object* v___x_985_; lean_object* v_env_986_; uint8_t v_isExporting_987_; lean_object* v___x_988_; lean_object* v_env_989_; lean_object* v___x_990_; lean_object* v_entry_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___y_996_; lean_object* v___x_1021_; uint8_t v___x_1022_; 
v___x_985_ = lean_st_ref_get(v___y_983_);
v_env_986_ = lean_ctor_get(v___x_985_, 0);
lean_inc_ref(v_env_986_);
lean_dec(v___x_985_);
v_isExporting_987_ = lean_ctor_get_uint8(v_env_986_, sizeof(void*)*8);
lean_dec_ref(v_env_986_);
v___x_988_ = lean_st_ref_get(v___y_983_);
v_env_989_ = lean_ctor_get(v___x_988_, 0);
lean_inc_ref(v_env_989_);
lean_dec(v___x_988_);
v___x_990_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__2);
lean_inc(v_mod_979_);
v_entry_991_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_991_, 0, v_mod_979_);
lean_ctor_set_uint8(v_entry_991_, sizeof(void*)*1, v_isExporting_987_);
lean_ctor_set_uint8(v_entry_991_, sizeof(void*)*1 + 1, v_isMeta_980_);
v___x_992_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_993_ = lean_box(1);
v___x_994_ = lean_box(0);
v___x_1021_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_990_, v___x_992_, v_env_989_, v___x_993_, v___x_994_);
v___x_1022_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3___redArg(v___x_1021_, v_entry_991_);
if (v___x_1022_ == 0)
{
lean_object* v_cls_1023_; lean_object* v___x_1024_; lean_object* v_a_1025_; lean_object* v___y_1027_; lean_object* v___y_1028_; lean_object* v___y_1032_; lean_object* v___y_1033_; uint8_t v___x_1045_; 
v_cls_1023_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__7));
v___x_1024_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4___redArg(v_cls_1023_, v___y_982_);
v_a_1025_ = lean_ctor_get(v___x_1024_, 0);
lean_inc(v_a_1025_);
lean_dec_ref(v___x_1024_);
v___x_1045_ = lean_unbox(v_a_1025_);
lean_dec(v_a_1025_);
if (v___x_1045_ == 0)
{
lean_dec(v_hint_981_);
lean_dec(v_mod_979_);
v___y_996_ = v___y_983_;
goto v___jp_995_;
}
else
{
lean_object* v___x_1046_; lean_object* v___y_1048_; 
v___x_1046_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__14);
if (v_isExporting_987_ == 0)
{
lean_object* v___x_1055_; 
v___x_1055_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__19));
v___y_1048_ = v___x_1055_;
goto v___jp_1047_;
}
else
{
lean_object* v___x_1056_; 
v___x_1056_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__20));
v___y_1048_ = v___x_1056_;
goto v___jp_1047_;
}
v___jp_1047_:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1049_ = l_Lean_stringToMessageData(v___y_1048_);
v___x_1050_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1046_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
v___x_1051_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__16);
v___x_1052_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1050_);
lean_ctor_set(v___x_1052_, 1, v___x_1051_);
if (v_isMeta_980_ == 0)
{
lean_object* v___x_1053_; 
v___x_1053_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__17));
v___y_1032_ = v___x_1052_;
v___y_1033_ = v___x_1053_;
goto v___jp_1031_;
}
else
{
lean_object* v___x_1054_; 
v___x_1054_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__18));
v___y_1032_ = v___x_1052_;
v___y_1033_ = v___x_1054_;
goto v___jp_1031_;
}
}
}
v___jp_1026_:
{
lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1029_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1029_, 0, v___y_1027_);
lean_ctor_set(v___x_1029_, 1, v___y_1028_);
v___x_1030_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__5(v_cls_1023_, v___x_1029_, v___y_982_, v___y_983_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_dec_ref(v___x_1030_);
v___y_996_ = v___y_983_;
goto v___jp_995_;
}
else
{
lean_dec_ref(v_entry_991_);
return v___x_1030_;
}
}
v___jp_1031_:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; uint8_t v___x_1040_; 
v___x_1034_ = l_Lean_stringToMessageData(v___y_1033_);
v___x_1035_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1035_, 0, v___y_1032_);
lean_ctor_set(v___x_1035_, 1, v___x_1034_);
v___x_1036_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__9);
v___x_1037_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1035_);
lean_ctor_set(v___x_1037_, 1, v___x_1036_);
v___x_1038_ = l_Lean_MessageData_ofName(v_mod_979_);
v___x_1039_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1037_);
lean_ctor_set(v___x_1039_, 1, v___x_1038_);
v___x_1040_ = l_Lean_Name_isAnonymous(v_hint_981_);
if (v___x_1040_ == 0)
{
lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_1041_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__11);
v___x_1042_ = l_Lean_MessageData_ofName(v_hint_981_);
v___x_1043_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1041_);
lean_ctor_set(v___x_1043_, 1, v___x_1042_);
v___y_1027_ = v___x_1039_;
v___y_1028_ = v___x_1043_;
goto v___jp_1026_;
}
else
{
lean_object* v___x_1044_; 
lean_dec(v_hint_981_);
v___x_1044_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__12);
v___y_1027_ = v___x_1039_;
v___y_1028_ = v___x_1044_;
goto v___jp_1026_;
}
}
}
else
{
lean_object* v___x_1057_; lean_object* v___x_1058_; 
lean_dec_ref(v_entry_991_);
lean_dec(v_hint_981_);
lean_dec(v_mod_979_);
v___x_1057_ = lean_box(0);
v___x_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1057_);
return v___x_1058_;
}
v___jp_995_:
{
lean_object* v___x_997_; lean_object* v_toEnvExtension_998_; lean_object* v_env_999_; lean_object* v_nextMacroScope_1000_; lean_object* v_ngen_1001_; lean_object* v_auxDeclNGen_1002_; lean_object* v_traceState_1003_; lean_object* v_messages_1004_; lean_object* v_infoState_1005_; lean_object* v_snapshotTasks_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1019_; 
v___x_997_ = lean_st_ref_take(v___y_996_);
v_toEnvExtension_998_ = lean_ctor_get(v___x_992_, 0);
lean_inc_ref(v_toEnvExtension_998_);
v_env_999_ = lean_ctor_get(v___x_997_, 0);
v_nextMacroScope_1000_ = lean_ctor_get(v___x_997_, 1);
v_ngen_1001_ = lean_ctor_get(v___x_997_, 2);
v_auxDeclNGen_1002_ = lean_ctor_get(v___x_997_, 3);
v_traceState_1003_ = lean_ctor_get(v___x_997_, 4);
v_messages_1004_ = lean_ctor_get(v___x_997_, 6);
v_infoState_1005_ = lean_ctor_get(v___x_997_, 7);
v_snapshotTasks_1006_ = lean_ctor_get(v___x_997_, 8);
v_isSharedCheck_1019_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1019_ == 0)
{
lean_object* v_unused_1020_; 
v_unused_1020_ = lean_ctor_get(v___x_997_, 5);
lean_dec(v_unused_1020_);
v___x_1008_ = v___x_997_;
v_isShared_1009_ = v_isSharedCheck_1019_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_snapshotTasks_1006_);
lean_inc(v_infoState_1005_);
lean_inc(v_messages_1004_);
lean_inc(v_traceState_1003_);
lean_inc(v_auxDeclNGen_1002_);
lean_inc(v_ngen_1001_);
lean_inc(v_nextMacroScope_1000_);
lean_inc(v_env_999_);
lean_dec(v___x_997_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1019_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v_asyncMode_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1014_; 
v_asyncMode_1010_ = lean_ctor_get(v_toEnvExtension_998_, 2);
lean_inc(v_asyncMode_1010_);
lean_dec_ref(v_toEnvExtension_998_);
v___x_1011_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_992_, v_env_999_, v_entry_991_, v_asyncMode_1010_, v___x_994_);
lean_dec(v_asyncMode_1010_);
v___x_1012_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___closed__5);
if (v_isShared_1009_ == 0)
{
lean_ctor_set(v___x_1008_, 5, v___x_1012_);
lean_ctor_set(v___x_1008_, 0, v___x_1011_);
v___x_1014_ = v___x_1008_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v___x_1011_);
lean_ctor_set(v_reuseFailAlloc_1018_, 1, v_nextMacroScope_1000_);
lean_ctor_set(v_reuseFailAlloc_1018_, 2, v_ngen_1001_);
lean_ctor_set(v_reuseFailAlloc_1018_, 3, v_auxDeclNGen_1002_);
lean_ctor_set(v_reuseFailAlloc_1018_, 4, v_traceState_1003_);
lean_ctor_set(v_reuseFailAlloc_1018_, 5, v___x_1012_);
lean_ctor_set(v_reuseFailAlloc_1018_, 6, v_messages_1004_);
lean_ctor_set(v_reuseFailAlloc_1018_, 7, v_infoState_1005_);
lean_ctor_set(v_reuseFailAlloc_1018_, 8, v_snapshotTasks_1006_);
v___x_1014_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1015_ = lean_st_ref_set(v___y_996_, v___x_1014_);
v___x_1016_ = lean_box(0);
v___x_1017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
return v___x_1017_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2___boxed(lean_object* v_mod_1059_, lean_object* v_isMeta_1060_, lean_object* v_hint_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_){
_start:
{
uint8_t v_isMeta_boxed_1065_; lean_object* v_res_1066_; 
v_isMeta_boxed_1065_ = lean_unbox(v_isMeta_1060_);
v_res_1066_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2(v_mod_1059_, v_isMeta_boxed_1065_, v_hint_1061_, v___y_1062_, v___y_1063_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0_spec__0___redArg(lean_object* v_a_1067_, lean_object* v_x_1068_){
_start:
{
if (lean_obj_tag(v_x_1068_) == 0)
{
lean_object* v___x_1069_; 
v___x_1069_ = lean_box(0);
return v___x_1069_;
}
else
{
lean_object* v_key_1070_; lean_object* v_value_1071_; lean_object* v_tail_1072_; uint8_t v___x_1073_; 
v_key_1070_ = lean_ctor_get(v_x_1068_, 0);
v_value_1071_ = lean_ctor_get(v_x_1068_, 1);
v_tail_1072_ = lean_ctor_get(v_x_1068_, 2);
v___x_1073_ = lean_name_eq(v_key_1070_, v_a_1067_);
if (v___x_1073_ == 0)
{
v_x_1068_ = v_tail_1072_;
goto _start;
}
else
{
lean_object* v___x_1075_; 
lean_inc(v_value_1071_);
v___x_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1075_, 0, v_value_1071_);
return v___x_1075_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_a_1076_, lean_object* v_x_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0_spec__0___redArg(v_a_1076_, v_x_1077_);
lean_dec(v_x_1077_);
lean_dec(v_a_1076_);
return v_res_1078_;
}
}
static uint64_t _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1079_; uint64_t v___x_1080_; 
v___x_1079_ = lean_unsigned_to_nat(1723u);
v___x_1080_ = lean_uint64_of_nat(v___x_1079_);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0___redArg(lean_object* v_m_1081_, lean_object* v_a_1082_){
_start:
{
lean_object* v_buckets_1083_; lean_object* v___x_1084_; uint64_t v___y_1086_; 
v_buckets_1083_ = lean_ctor_get(v_m_1081_, 1);
v___x_1084_ = lean_array_get_size(v_buckets_1083_);
if (lean_obj_tag(v_a_1082_) == 0)
{
uint64_t v___x_1100_; 
v___x_1100_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0___redArg___closed__0);
v___y_1086_ = v___x_1100_;
goto v___jp_1085_;
}
else
{
uint64_t v_hash_1101_; 
v_hash_1101_ = lean_ctor_get_uint64(v_a_1082_, sizeof(void*)*2);
v___y_1086_ = v_hash_1101_;
goto v___jp_1085_;
}
v___jp_1085_:
{
uint64_t v___x_1087_; uint64_t v___x_1088_; uint64_t v_fold_1089_; uint64_t v___x_1090_; uint64_t v___x_1091_; uint64_t v___x_1092_; size_t v___x_1093_; size_t v___x_1094_; size_t v___x_1095_; size_t v___x_1096_; size_t v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1087_ = 32ULL;
v___x_1088_ = lean_uint64_shift_right(v___y_1086_, v___x_1087_);
v_fold_1089_ = lean_uint64_xor(v___y_1086_, v___x_1088_);
v___x_1090_ = 16ULL;
v___x_1091_ = lean_uint64_shift_right(v_fold_1089_, v___x_1090_);
v___x_1092_ = lean_uint64_xor(v_fold_1089_, v___x_1091_);
v___x_1093_ = lean_uint64_to_usize(v___x_1092_);
v___x_1094_ = lean_usize_of_nat(v___x_1084_);
v___x_1095_ = ((size_t)1ULL);
v___x_1096_ = lean_usize_sub(v___x_1094_, v___x_1095_);
v___x_1097_ = lean_usize_land(v___x_1093_, v___x_1096_);
v___x_1098_ = lean_array_uget_borrowed(v_buckets_1083_, v___x_1097_);
v___x_1099_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0_spec__0___redArg(v_a_1082_, v___x_1098_);
return v___x_1099_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0___redArg___boxed(lean_object* v_m_1102_, lean_object* v_a_1103_){
_start:
{
lean_object* v_res_1104_; 
v_res_1104_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0___redArg(v_m_1102_, v_a_1103_);
lean_dec(v_a_1103_);
lean_dec_ref(v_m_1102_);
return v_res_1104_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__3(lean_object* v___x_1105_, lean_object* v_declName_1106_, lean_object* v_as_1107_, size_t v_sz_1108_, size_t v_i_1109_, lean_object* v_b_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_){
_start:
{
uint8_t v___x_1114_; 
v___x_1114_ = lean_usize_dec_lt(v_i_1109_, v_sz_1108_);
if (v___x_1114_ == 0)
{
lean_object* v___x_1115_; 
lean_dec(v_declName_1106_);
v___x_1115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1115_, 0, v_b_1110_);
return v___x_1115_;
}
else
{
lean_object* v___x_1116_; lean_object* v_modules_1117_; lean_object* v___x_1118_; lean_object* v_a_1119_; lean_object* v___x_1120_; lean_object* v_toImport_1121_; lean_object* v_module_1122_; uint8_t v___x_1123_; lean_object* v___x_1124_; 
v___x_1116_ = l_Lean_Environment_header(v___x_1105_);
v_modules_1117_ = lean_ctor_get(v___x_1116_, 3);
lean_inc_ref(v_modules_1117_);
lean_dec_ref(v___x_1116_);
v___x_1118_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_1119_ = lean_array_uget_borrowed(v_as_1107_, v_i_1109_);
v___x_1120_ = lean_array_get(v___x_1118_, v_modules_1117_, v_a_1119_);
lean_dec_ref(v_modules_1117_);
v_toImport_1121_ = lean_ctor_get(v___x_1120_, 0);
lean_inc_ref(v_toImport_1121_);
lean_dec(v___x_1120_);
v_module_1122_ = lean_ctor_get(v_toImport_1121_, 0);
lean_inc(v_module_1122_);
lean_dec_ref(v_toImport_1121_);
v___x_1123_ = 0;
lean_inc(v_declName_1106_);
v___x_1124_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2(v_module_1122_, v___x_1123_, v_declName_1106_, v___y_1111_, v___y_1112_);
if (lean_obj_tag(v___x_1124_) == 0)
{
lean_object* v___x_1125_; size_t v___x_1126_; size_t v___x_1127_; 
lean_dec_ref(v___x_1124_);
v___x_1125_ = lean_box(0);
v___x_1126_ = ((size_t)1ULL);
v___x_1127_ = lean_usize_add(v_i_1109_, v___x_1126_);
v_i_1109_ = v___x_1127_;
v_b_1110_ = v___x_1125_;
goto _start;
}
else
{
lean_dec(v_declName_1106_);
return v___x_1124_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__3___boxed(lean_object* v___x_1129_, lean_object* v_declName_1130_, lean_object* v_as_1131_, lean_object* v_sz_1132_, lean_object* v_i_1133_, lean_object* v_b_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_){
_start:
{
size_t v_sz_boxed_1138_; size_t v_i_boxed_1139_; lean_object* v_res_1140_; 
v_sz_boxed_1138_ = lean_unbox_usize(v_sz_1132_);
lean_dec(v_sz_1132_);
v_i_boxed_1139_ = lean_unbox_usize(v_i_1133_);
lean_dec(v_i_1133_);
v_res_1140_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__3(v___x_1129_, v_declName_1130_, v_as_1131_, v_sz_boxed_1138_, v_i_boxed_1139_, v_b_1134_, v___y_1135_, v___y_1136_);
lean_dec(v___y_1136_);
lean_dec_ref(v___y_1135_);
lean_dec_ref(v_as_1131_);
lean_dec_ref(v___x_1129_);
return v_res_1140_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___closed__2(void){
_start:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1143_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___closed__1));
v___x_1144_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___closed__0));
v___x_1145_ = l_Std_HashMap_instInhabited(lean_box(0), lean_box(0), v___x_1144_, v___x_1143_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1(lean_object* v_declName_1148_, uint8_t v_isMeta_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_){
_start:
{
lean_object* v___x_1153_; lean_object* v_env_1157_; lean_object* v___y_1159_; lean_object* v___x_1172_; 
v___x_1153_ = lean_st_ref_get(v___y_1151_);
v_env_1157_ = lean_ctor_get(v___x_1153_, 0);
lean_inc_ref(v_env_1157_);
lean_dec(v___x_1153_);
v___x_1172_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1157_, v_declName_1148_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_dec_ref(v_env_1157_);
lean_dec(v_declName_1148_);
goto v___jp_1154_;
}
else
{
lean_object* v_val_1173_; lean_object* v___x_1174_; lean_object* v_modules_1175_; lean_object* v___x_1176_; uint8_t v___x_1177_; 
v_val_1173_ = lean_ctor_get(v___x_1172_, 0);
lean_inc(v_val_1173_);
lean_dec_ref(v___x_1172_);
v___x_1174_ = l_Lean_Environment_header(v_env_1157_);
v_modules_1175_ = lean_ctor_get(v___x_1174_, 3);
lean_inc_ref(v_modules_1175_);
lean_dec_ref(v___x_1174_);
v___x_1176_ = lean_array_get_size(v_modules_1175_);
v___x_1177_ = lean_nat_dec_lt(v_val_1173_, v___x_1176_);
if (v___x_1177_ == 0)
{
lean_dec_ref(v_modules_1175_);
lean_dec(v_val_1173_);
lean_dec_ref(v_env_1157_);
lean_dec(v_declName_1148_);
goto v___jp_1154_;
}
else
{
lean_object* v___x_1178_; lean_object* v_env_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; uint8_t v___y_1183_; 
v___x_1178_ = lean_st_ref_get(v___y_1151_);
v_env_1179_ = lean_ctor_get(v___x_1178_, 0);
lean_inc_ref(v_env_1179_);
lean_dec(v___x_1178_);
v___x_1180_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___closed__2, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___closed__2_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___closed__2);
v___x_1181_ = lean_array_fget(v_modules_1175_, v_val_1173_);
lean_dec(v_val_1173_);
lean_dec_ref(v_modules_1175_);
if (v_isMeta_1149_ == 0)
{
lean_dec_ref(v_env_1179_);
v___y_1183_ = v_isMeta_1149_;
goto v___jp_1182_;
}
else
{
uint8_t v___x_1194_; 
lean_inc(v_declName_1148_);
v___x_1194_ = l_Lean_isMarkedMeta(v_env_1179_, v_declName_1148_);
if (v___x_1194_ == 0)
{
v___y_1183_ = v_isMeta_1149_;
goto v___jp_1182_;
}
else
{
uint8_t v___x_1195_; 
v___x_1195_ = 0;
v___y_1183_ = v___x_1195_;
goto v___jp_1182_;
}
}
v___jp_1182_:
{
lean_object* v_toImport_1184_; lean_object* v_module_1185_; lean_object* v___x_1186_; 
v_toImport_1184_ = lean_ctor_get(v___x_1181_, 0);
lean_inc_ref(v_toImport_1184_);
lean_dec(v___x_1181_);
v_module_1185_ = lean_ctor_get(v_toImport_1184_, 0);
lean_inc(v_module_1185_);
lean_dec_ref(v_toImport_1184_);
lean_inc(v_declName_1148_);
v___x_1186_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2(v_module_1185_, v___y_1183_, v_declName_1148_, v___y_1150_, v___y_1151_);
if (lean_obj_tag(v___x_1186_) == 0)
{
lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; 
lean_dec_ref(v___x_1186_);
v___x_1187_ = l_Lean_indirectModUseExt;
v___x_1188_ = lean_box(1);
v___x_1189_ = lean_box(0);
lean_inc_ref(v_env_1157_);
v___x_1190_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1180_, v___x_1187_, v_env_1157_, v___x_1188_, v___x_1189_);
v___x_1191_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0___redArg(v___x_1190_, v_declName_1148_);
lean_dec(v___x_1190_);
if (lean_obj_tag(v___x_1191_) == 0)
{
lean_object* v___x_1192_; 
v___x_1192_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___closed__3));
v___y_1159_ = v___x_1192_;
goto v___jp_1158_;
}
else
{
lean_object* v_val_1193_; 
v_val_1193_ = lean_ctor_get(v___x_1191_, 0);
lean_inc(v_val_1193_);
lean_dec_ref(v___x_1191_);
v___y_1159_ = v_val_1193_;
goto v___jp_1158_;
}
}
else
{
lean_dec_ref(v_env_1157_);
lean_dec(v_declName_1148_);
return v___x_1186_;
}
}
}
}
v___jp_1154_:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1155_ = lean_box(0);
v___x_1156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
return v___x_1156_;
}
v___jp_1158_:
{
lean_object* v___x_1160_; size_t v_sz_1161_; size_t v___x_1162_; lean_object* v___x_1163_; 
v___x_1160_ = lean_box(0);
v_sz_1161_ = lean_array_size(v___y_1159_);
v___x_1162_ = ((size_t)0ULL);
v___x_1163_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__3(v_env_1157_, v_declName_1148_, v___y_1159_, v_sz_1161_, v___x_1162_, v___x_1160_, v___y_1150_, v___y_1151_);
lean_dec_ref(v___y_1159_);
lean_dec_ref(v_env_1157_);
if (lean_obj_tag(v___x_1163_) == 0)
{
lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1170_; 
v_isSharedCheck_1170_ = !lean_is_exclusive(v___x_1163_);
if (v_isSharedCheck_1170_ == 0)
{
lean_object* v_unused_1171_; 
v_unused_1171_ = lean_ctor_get(v___x_1163_, 0);
lean_dec(v_unused_1171_);
v___x_1165_ = v___x_1163_;
v_isShared_1166_ = v_isSharedCheck_1170_;
goto v_resetjp_1164_;
}
else
{
lean_dec(v___x_1163_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1170_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1168_; 
if (v_isShared_1166_ == 0)
{
lean_ctor_set(v___x_1165_, 0, v___x_1160_);
v___x_1168_ = v___x_1165_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v___x_1160_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
}
else
{
return v___x_1163_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1___boxed(lean_object* v_declName_1196_, lean_object* v_isMeta_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_){
_start:
{
uint8_t v_isMeta_boxed_1201_; lean_object* v_res_1202_; 
v_isMeta_boxed_1201_ = lean_unbox(v_isMeta_1197_);
v_res_1202_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1(v_declName_1196_, v_isMeta_boxed_1201_, v___y_1198_, v___y_1199_);
lean_dec(v___y_1199_);
lean_dec_ref(v___y_1198_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getSymSimpExtension_x3f(lean_object* v_attrName_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_){
_start:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1207_ = l_Lean_Meta_Sym_Simp_symSimpExtensionMapRef;
v___x_1208_ = lean_st_ref_get(v___x_1207_);
v___x_1209_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0___redArg(v___x_1208_, v_attrName_1203_);
lean_dec(v___x_1208_);
if (lean_obj_tag(v___x_1209_) == 1)
{
lean_object* v_val_1210_; lean_object* v_ext_1211_; lean_object* v_name_1212_; uint8_t v___x_1213_; lean_object* v___x_1214_; 
v_val_1210_ = lean_ctor_get(v___x_1209_, 0);
lean_inc(v_val_1210_);
v_ext_1211_ = lean_ctor_get(v_val_1210_, 1);
lean_inc_ref(v_ext_1211_);
lean_dec(v_val_1210_);
v_name_1212_ = lean_ctor_get(v_ext_1211_, 1);
lean_inc(v_name_1212_);
lean_dec_ref(v_ext_1211_);
v___x_1213_ = 1;
v___x_1214_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1(v_name_1212_, v___x_1213_, v_a_1204_, v_a_1205_);
if (lean_obj_tag(v___x_1214_) == 0)
{
lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1221_; 
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1221_ == 0)
{
lean_object* v_unused_1222_; 
v_unused_1222_ = lean_ctor_get(v___x_1214_, 0);
lean_dec(v_unused_1222_);
v___x_1216_ = v___x_1214_;
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
else
{
lean_dec(v___x_1214_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1219_; 
if (v_isShared_1217_ == 0)
{
lean_ctor_set(v___x_1216_, 0, v___x_1209_);
v___x_1219_ = v___x_1216_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v___x_1209_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
}
else
{
lean_object* v_a_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1230_; 
lean_dec_ref(v___x_1209_);
v_a_1223_ = lean_ctor_get(v___x_1214_, 0);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1225_ = v___x_1214_;
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_a_1223_);
lean_dec(v___x_1214_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1228_; 
if (v_isShared_1226_ == 0)
{
v___x_1228_ = v___x_1225_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_a_1223_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
}
else
{
lean_object* v___x_1231_; 
v___x_1231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1209_);
return v___x_1231_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getSymSimpExtension_x3f___boxed(lean_object* v_attrName_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l_Lean_Meta_Sym_Simp_getSymSimpExtension_x3f(v_attrName_1232_, v_a_1233_, v_a_1234_);
lean_dec(v_a_1234_);
lean_dec_ref(v_a_1233_);
lean_dec(v_attrName_1232_);
return v_res_1236_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0(lean_object* v_00_u03b2_1237_, lean_object* v_m_1238_, lean_object* v_a_1239_){
_start:
{
lean_object* v___x_1240_; 
v___x_1240_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0___redArg(v_m_1238_, v_a_1239_);
return v___x_1240_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0___boxed(lean_object* v_00_u03b2_1241_, lean_object* v_m_1242_, lean_object* v_a_1243_){
_start:
{
lean_object* v_res_1244_; 
v_res_1244_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0(v_00_u03b2_1241_, v_m_1242_, v_a_1243_);
lean_dec(v_a_1243_);
lean_dec_ref(v_m_1242_);
return v_res_1244_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1245_, lean_object* v_a_1246_, lean_object* v_x_1247_){
_start:
{
lean_object* v___x_1248_; 
v___x_1248_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0_spec__0___redArg(v_a_1246_, v_x_1247_);
return v___x_1248_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1249_, lean_object* v_a_1250_, lean_object* v_x_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__0_spec__0(v_00_u03b2_1249_, v_a_1250_, v_x_1251_);
lean_dec(v_x_1251_);
lean_dec(v_a_1250_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4(lean_object* v_cls_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_){
_start:
{
lean_object* v___x_1257_; 
v___x_1257_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4___redArg(v_cls_1253_, v___y_1254_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4___boxed(lean_object* v_cls_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__4(v_cls_1258_, v___y_1259_, v___y_1260_);
lean_dec(v___y_1260_);
lean_dec_ref(v___y_1259_);
return v_res_1262_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_1263_, lean_object* v_x_1264_, lean_object* v_x_1265_){
_start:
{
uint8_t v___x_1266_; 
v___x_1266_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3___redArg(v_x_1264_, v_x_1265_);
return v___x_1266_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03b2_1267_, lean_object* v_x_1268_, lean_object* v_x_1269_){
_start:
{
uint8_t v_res_1270_; lean_object* v_r_1271_; 
v_res_1270_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3(v_00_u03b2_1267_, v_x_1268_, v_x_1269_);
lean_dec_ref(v_x_1269_);
v_r_1271_ = lean_box(v_res_1270_);
return v_r_1271_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_1272_, lean_object* v_x_1273_, size_t v_x_1274_, lean_object* v_x_1275_){
_start:
{
uint8_t v___x_1276_; 
v___x_1276_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4___redArg(v_x_1273_, v_x_1274_, v_x_1275_);
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b2_1277_, lean_object* v_x_1278_, lean_object* v_x_1279_, lean_object* v_x_1280_){
_start:
{
size_t v_x_4641__boxed_1281_; uint8_t v_res_1282_; lean_object* v_r_1283_; 
v_x_4641__boxed_1281_ = lean_unbox_usize(v_x_1279_);
lean_dec(v_x_1279_);
v_res_1282_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4(v_00_u03b2_1277_, v_x_1278_, v_x_4641__boxed_1281_, v_x_1280_);
lean_dec_ref(v_x_1280_);
v_r_1283_ = lean_box(v_res_1282_);
return v_r_1283_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4_spec__7(lean_object* v_00_u03b2_1284_, lean_object* v_keys_1285_, lean_object* v_vals_1286_, lean_object* v_heq_1287_, lean_object* v_i_1288_, lean_object* v_k_1289_){
_start:
{
uint8_t v___x_1290_; 
v___x_1290_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4_spec__7___redArg(v_keys_1285_, v_i_1288_, v_k_1289_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4_spec__7___boxed(lean_object* v_00_u03b2_1291_, lean_object* v_keys_1292_, lean_object* v_vals_1293_, lean_object* v_heq_1294_, lean_object* v_i_1295_, lean_object* v_k_1296_){
_start:
{
uint8_t v_res_1297_; lean_object* v_r_1298_; 
v_res_1297_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Meta_Sym_Simp_getSymSimpExtension_x3f_spec__1_spec__2_spec__3_spec__4_spec__7(v_00_u03b2_1291_, v_keys_1292_, v_vals_1293_, v_heq_1294_, v_i_1295_, v_k_1296_);
lean_dec_ref(v_k_1296_);
lean_dec_ref(v_vals_1293_);
lean_dec_ref(v_keys_1292_);
v_r_1298_ = lean_box(v_res_1297_);
return v_r_1298_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DiscrTree(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_DiscrTree(uint8_t builtin);
lean_object* runtime_initialize_Lean_ExtraModUses(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Theorems(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default = _init_l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_instInhabitedTheorem_default);
l_Lean_Meta_Sym_Simp_instInhabitedTheorem = _init_l_Lean_Meta_Sym_Simp_instInhabitedTheorem();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_instInhabitedTheorem);
l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default = _init_l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_instInhabitedTheorems_default);
l_Lean_Meta_Sym_Simp_instInhabitedTheorems = _init_l_Lean_Meta_Sym_Simp_instInhabitedTheorems();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_instInhabitedTheorems);
res = l_Lean_Meta_Sym_Simp_initFn_00___x40_Lean_Meta_Sym_Simp_Theorems_3071968463____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Sym_Simp_symSimpExtensionMapRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Sym_Simp_symSimpExtensionMapRef);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_Theorems(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1 = _init_l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_mkSymSimpExt___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
lean_object* initialize_Lean_Meta_DiscrTree(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_DiscrTree(uint8_t builtin);
lean_object* initialize_Lean_ExtraModUses(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_Theorems(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ExtraModUses(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Theorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_Theorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_Theorems(builtin);
}
#ifdef __cplusplus
}
#endif
