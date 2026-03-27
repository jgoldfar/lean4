// Lean compiler output
// Module: Lean.Compiler.LCNF.PhaseExt
// Imports: public import Lean.Compiler.LCNF.PassManager public import Lean.Compiler.LCNF.PublicDeclsExt
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_instInhabitedEnvExtension_default(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_Phase_toPurity(uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Array_qpartition___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_Compiler_LCNF_isDeclPublic(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkOrderedDeclSetExt();
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedDecl_default(uint8_t);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_PersistentEnvExtension_getModuleIREntries_unsafe__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_EnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedSignature_default(uint8_t);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3496178540____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3496178540____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_baseTransparentDeclsExt;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1977385844____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1977385844____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_monoTransparentDeclsExt;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_975450157____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_975450157____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_impureTransparentDeclsExt;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_getTransparencyExt(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_getTransparencyExt___boxed(lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_isDeclTransparent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_isDeclTransparent___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_isDeclTransparent___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_isDeclTransparent(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isDeclTransparent___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setDeclTransparent___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setDeclTransparent(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setDeclTransparent___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___closed__0_value;
static const lean_array_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "number of local entries: "};
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__1_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "(`Inhabited.default` for `IO.Error`)"};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__2___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__2___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__2___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__2___closed__0_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__2___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__3_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___boxed(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4_value_aux_1),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4_value_aux_2),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4_value;
static const lean_array_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__5_value;
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7_value_aux_1),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7_value_aux_2),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7_value;
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__9_value;
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__10_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11_value_aux_1),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11_value_aux_2),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__12;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__13;
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__14 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__14_value;
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__15 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__15_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16_value_aux_1),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16_value_aux_2),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16_value;
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__17 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__17_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__18;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__19;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__20;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__21;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__22;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__23;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__24;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__25;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__26;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__27;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__28;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_mkDeclExt___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__2___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__3(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_mkDeclExt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_mkDeclExt___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_mkDeclExt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_mkDeclExt___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_mkDeclExt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_mkDeclExt___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___closed__6;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l_Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "baseExt"};
static const lean_object* l_Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(145, 223, 165, 126, 7, 177, 183, 38)}};
static const lean_object* l_Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_baseExt;
static const lean_string_object l_Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "monoExt"};
static const lean_object* l_Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 71, 195, 20, 53, 75, 103, 187)}};
static const lean_object* l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_monoExt;
static const lean_closure_object l_Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___boxed, .m_arity = 6, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))} };
static const lean_object* l_Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_impureExt;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__2___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__2___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__2___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__2___closed__0_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__2___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__3_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___auto__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_mkSigDeclExt___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_mkSigDeclExt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_mkSigDeclExt___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_mkSigDeclExt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_mkSigDeclExt___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_mkSigDeclExt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_mkSigDeclExt___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_mkSigDeclExt___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_mkSigDeclExt___lam__3___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__2_value)} };
static const lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__3_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkSigDeclExt___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkSigDeclExt___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkSigDeclExt___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___closed__6;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkSigDeclExt___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___closed__7;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "impureSigExt"};
static const lean_object* l_Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(245, 150, 154, 56, 193, 204, 147, 237)}};
static const lean_object* l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_impureSigExt;
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclCore_x3f(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclCore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_getSigCore_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getSigCore_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSigCore_x3f(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSigCore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBaseDecl_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBaseDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBaseDecl_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBaseDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___closed__0_value;
static const lean_array_object l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecls(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecls___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveBaseDeclCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveMonoDeclCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveImpureDeclCore___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveImpureDeclCore(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveBase___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveBase___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveBase(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveBase___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveMono___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveMono___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveMono(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_save___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_save___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_save___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_save___closed__1;
static const lean_closure_object l_Lean_Compiler_LCNF_Decl_save___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Decl_save___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_save___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Decl_save___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Decl_save___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_save___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "Internal compiler error: getDecl\? on impure is unuspported for now"};
static const lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDecl_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDecl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDeclAt_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDecl_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDecl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_2540780834____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_2540780834____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_declOrderExt;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_recordFinalImpureDecl___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_recordFinalImpureDecl(lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__0 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__5 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__6 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__6_value;
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__7;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__5(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Compiler.LCNF.PhaseExt"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Compiler.LCNF.getImpureDeclIndices"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "assertion violation: i != 0\n    "};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__2_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__3;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "assertion violation: map.size == targets.size\n  "};
static const lean_object* l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureDeclIndices(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureDeclIndices___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3496178540____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = l_Lean_Compiler_LCNF_mkOrderedDeclSetExt();
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3496178540____hygCtx___hyg_2____boxed(lean_object* v_a_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3496178540____hygCtx___hyg_2_();
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1977385844____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = l_Lean_Compiler_LCNF_mkOrderedDeclSetExt();
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1977385844____hygCtx___hyg_2____boxed(lean_object* v_a_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1977385844____hygCtx___hyg_2_();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_975450157____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = l_Lean_Compiler_LCNF_mkOrderedDeclSetExt();
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_975450157____hygCtx___hyg_2____boxed(lean_object* v_a_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_975450157____hygCtx___hyg_2_();
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_getTransparencyExt(uint8_t v_x_13_){
_start:
{
switch(v_x_13_)
{
case 0:
{
lean_object* v___x_14_; 
v___x_14_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_baseTransparentDeclsExt;
return v___x_14_;
}
case 1:
{
lean_object* v___x_15_; 
v___x_15_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_monoTransparentDeclsExt;
return v___x_15_;
}
default: 
{
lean_object* v___x_16_; 
v___x_16_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_impureTransparentDeclsExt;
return v___x_16_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_getTransparencyExt___boxed(lean_object* v_x_17_){
_start:
{
uint8_t v_x_25__boxed_18_; lean_object* v_res_19_; 
v_x_25__boxed_18_ = lean_unbox(v_x_17_);
v_res_19_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_getTransparencyExt(v_x_25__boxed_18_);
return v_res_19_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_isDeclTransparent(lean_object* v_env_23_, uint8_t v_phase_24_, lean_object* v_declName_25_){
_start:
{
lean_object* v___x_26_; uint8_t v_isModule_27_; 
v___x_26_ = l_Lean_Environment_header(v_env_23_);
v_isModule_27_ = lean_ctor_get_uint8(v___x_26_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_26_);
if (v_isModule_27_ == 0)
{
uint8_t v___x_28_; 
lean_dec_ref(v_env_23_);
v___x_28_ = 1;
return v___x_28_;
}
else
{
lean_object* v___x_29_; lean_object* v_asyncMode_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v_snd_34_; uint8_t v___x_35_; 
v___x_29_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_getTransparencyExt(v_phase_24_);
v_asyncMode_30_ = lean_ctor_get(v___x_29_, 2);
lean_inc(v_asyncMode_30_);
v___x_31_ = ((lean_object*)(l_Lean_Compiler_LCNF_isDeclTransparent___closed__0));
v___x_32_ = lean_box(0);
v___x_33_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_31_, v___x_29_, v_env_23_, v_asyncMode_30_, v___x_32_);
lean_dec(v_asyncMode_30_);
lean_dec_ref(v___x_29_);
v_snd_34_ = lean_ctor_get(v___x_33_, 1);
lean_inc(v_snd_34_);
lean_dec(v___x_33_);
v___x_35_ = l_Lean_NameSet_contains(v_snd_34_, v_declName_25_);
lean_dec(v_snd_34_);
return v___x_35_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isDeclTransparent___boxed(lean_object* v_env_36_, lean_object* v_phase_37_, lean_object* v_declName_38_){
_start:
{
uint8_t v_phase_boxed_39_; uint8_t v_res_40_; lean_object* v_r_41_; 
v_phase_boxed_39_ = lean_unbox(v_phase_37_);
v_res_40_ = l_Lean_Compiler_LCNF_isDeclTransparent(v_env_36_, v_phase_boxed_39_, v_declName_38_);
lean_dec(v_declName_38_);
v_r_41_ = lean_box(v_res_40_);
return v_r_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setDeclTransparent___lam__0(lean_object* v_declName_42_, lean_object* v_s_43_){
_start:
{
lean_object* v_fst_44_; lean_object* v_snd_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_54_; 
v_fst_44_ = lean_ctor_get(v_s_43_, 0);
v_snd_45_ = lean_ctor_get(v_s_43_, 1);
v_isSharedCheck_54_ = !lean_is_exclusive(v_s_43_);
if (v_isSharedCheck_54_ == 0)
{
v___x_47_ = v_s_43_;
v_isShared_48_ = v_isSharedCheck_54_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_snd_45_);
lean_inc(v_fst_44_);
lean_dec(v_s_43_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_54_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_52_; 
lean_inc(v_declName_42_);
v___x_49_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_49_, 0, v_declName_42_);
lean_ctor_set(v___x_49_, 1, v_fst_44_);
v___x_50_ = l_Lean_NameSet_insert(v_snd_45_, v_declName_42_);
if (v_isShared_48_ == 0)
{
lean_ctor_set(v___x_47_, 1, v___x_50_);
lean_ctor_set(v___x_47_, 0, v___x_49_);
v___x_52_ = v___x_47_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_53_; 
v_reuseFailAlloc_53_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_53_, 0, v___x_49_);
lean_ctor_set(v_reuseFailAlloc_53_, 1, v___x_50_);
v___x_52_ = v_reuseFailAlloc_53_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
return v___x_52_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setDeclTransparent(lean_object* v_env_55_, uint8_t v_phase_56_, lean_object* v_declName_57_){
_start:
{
uint8_t v___x_58_; 
lean_inc_ref(v_env_55_);
v___x_58_ = l_Lean_Compiler_LCNF_isDeclTransparent(v_env_55_, v_phase_56_, v_declName_57_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; lean_object* v_asyncMode_60_; lean_object* v___f_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_59_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_getTransparencyExt(v_phase_56_);
v_asyncMode_60_ = lean_ctor_get(v___x_59_, 2);
lean_inc(v_asyncMode_60_);
v___f_61_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_setDeclTransparent___lam__0), 2, 1);
lean_closure_set(v___f_61_, 0, v_declName_57_);
v___x_62_ = lean_box(0);
v___x_63_ = l_Lean_EnvExtension_modifyState___redArg(v___x_59_, v_env_55_, v___f_61_, v_asyncMode_60_, v___x_62_);
lean_dec(v_asyncMode_60_);
return v___x_63_;
}
else
{
lean_dec(v_declName_57_);
return v_env_55_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setDeclTransparent___boxed(lean_object* v_env_64_, lean_object* v_phase_65_, lean_object* v_declName_66_){
_start:
{
uint8_t v_phase_boxed_67_; lean_object* v_res_68_; 
v_phase_boxed_67_ = lean_unbox(v_phase_65_);
v_res_68_ = l_Lean_Compiler_LCNF_setDeclTransparent(v_env_64_, v_phase_boxed_67_, v_declName_66_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___lam__0(lean_object* v_ps_69_, lean_object* v_x_70_, lean_object* v_v_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lean_array_push(v_ps_69_, v_v_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___lam__0___boxed(lean_object* v_ps_73_, lean_object* v_x_74_, lean_object* v_v_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___lam__0(v_ps_73_, v_x_74_, v_v_75_);
lean_dec(v_x_74_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_f_77_, lean_object* v_keys_78_, lean_object* v_vals_79_, lean_object* v_i_80_, lean_object* v_acc_81_){
_start:
{
lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_82_ = lean_array_get_size(v_keys_78_);
v___x_83_ = lean_nat_dec_lt(v_i_80_, v___x_82_);
if (v___x_83_ == 0)
{
lean_dec(v_i_80_);
lean_dec(v_f_77_);
return v_acc_81_;
}
else
{
lean_object* v_k_84_; lean_object* v_v_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v_k_84_ = lean_array_fget_borrowed(v_keys_78_, v_i_80_);
v_v_85_ = lean_array_fget_borrowed(v_vals_79_, v_i_80_);
lean_inc(v_f_77_);
lean_inc(v_v_85_);
lean_inc(v_k_84_);
v___x_86_ = lean_apply_3(v_f_77_, v_acc_81_, v_k_84_, v_v_85_);
v___x_87_ = lean_unsigned_to_nat(1u);
v___x_88_ = lean_nat_add(v_i_80_, v___x_87_);
lean_dec(v_i_80_);
v_i_80_ = v___x_88_;
v_acc_81_ = v___x_86_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_f_90_, lean_object* v_keys_91_, lean_object* v_vals_92_, lean_object* v_i_93_, lean_object* v_acc_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4___redArg(v_f_90_, v_keys_91_, v_vals_92_, v_i_93_, v_acc_94_);
lean_dec_ref(v_vals_92_);
lean_dec_ref(v_keys_91_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg(lean_object* v_f_96_, lean_object* v_x_97_, lean_object* v_x_98_){
_start:
{
if (lean_obj_tag(v_x_97_) == 0)
{
lean_object* v_es_99_; lean_object* v___x_100_; lean_object* v___x_101_; uint8_t v___x_102_; 
v_es_99_ = lean_ctor_get(v_x_97_, 0);
v___x_100_ = lean_unsigned_to_nat(0u);
v___x_101_ = lean_array_get_size(v_es_99_);
v___x_102_ = lean_nat_dec_lt(v___x_100_, v___x_101_);
if (v___x_102_ == 0)
{
lean_dec(v_f_96_);
return v_x_98_;
}
else
{
uint8_t v___x_103_; 
v___x_103_ = lean_nat_dec_le(v___x_101_, v___x_101_);
if (v___x_103_ == 0)
{
if (v___x_102_ == 0)
{
lean_dec(v_f_96_);
return v_x_98_;
}
else
{
size_t v___x_104_; size_t v___x_105_; lean_object* v___x_106_; 
v___x_104_ = ((size_t)0ULL);
v___x_105_ = lean_usize_of_nat(v___x_101_);
v___x_106_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___redArg(v_f_96_, v_es_99_, v___x_104_, v___x_105_, v_x_98_);
return v___x_106_;
}
}
else
{
size_t v___x_107_; size_t v___x_108_; lean_object* v___x_109_; 
v___x_107_ = ((size_t)0ULL);
v___x_108_ = lean_usize_of_nat(v___x_101_);
v___x_109_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___redArg(v_f_96_, v_es_99_, v___x_107_, v___x_108_, v_x_98_);
return v___x_109_;
}
}
}
else
{
lean_object* v_ks_110_; lean_object* v_vs_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v_ks_110_ = lean_ctor_get(v_x_97_, 0);
v_vs_111_ = lean_ctor_get(v_x_97_, 1);
v___x_112_ = lean_unsigned_to_nat(0u);
v___x_113_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4___redArg(v_f_96_, v_ks_110_, v_vs_111_, v___x_112_, v_x_98_);
return v___x_113_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_f_114_, lean_object* v_as_115_, size_t v_i_116_, size_t v_stop_117_, lean_object* v_b_118_){
_start:
{
lean_object* v___y_120_; uint8_t v___x_124_; 
v___x_124_ = lean_usize_dec_eq(v_i_116_, v_stop_117_);
if (v___x_124_ == 0)
{
lean_object* v___x_125_; 
v___x_125_ = lean_array_uget_borrowed(v_as_115_, v_i_116_);
switch(lean_obj_tag(v___x_125_))
{
case 0:
{
lean_object* v_key_126_; lean_object* v_val_127_; lean_object* v___x_128_; 
v_key_126_ = lean_ctor_get(v___x_125_, 0);
v_val_127_ = lean_ctor_get(v___x_125_, 1);
lean_inc(v_f_114_);
lean_inc(v_val_127_);
lean_inc(v_key_126_);
v___x_128_ = lean_apply_3(v_f_114_, v_b_118_, v_key_126_, v_val_127_);
v___y_120_ = v___x_128_;
goto v___jp_119_;
}
case 1:
{
lean_object* v_node_129_; lean_object* v___x_130_; 
v_node_129_ = lean_ctor_get(v___x_125_, 0);
lean_inc(v_f_114_);
v___x_130_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg(v_f_114_, v_node_129_, v_b_118_);
v___y_120_ = v___x_130_;
goto v___jp_119_;
}
default: 
{
v___y_120_ = v_b_118_;
goto v___jp_119_;
}
}
}
else
{
lean_dec(v_f_114_);
return v_b_118_;
}
v___jp_119_:
{
size_t v___x_121_; size_t v___x_122_; 
v___x_121_ = ((size_t)1ULL);
v___x_122_ = lean_usize_add(v_i_116_, v___x_121_);
v_i_116_ = v___x_122_;
v_b_118_ = v___y_120_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_f_131_, lean_object* v_as_132_, lean_object* v_i_133_, lean_object* v_stop_134_, lean_object* v_b_135_){
_start:
{
size_t v_i_boxed_136_; size_t v_stop_boxed_137_; lean_object* v_res_138_; 
v_i_boxed_136_ = lean_unbox_usize(v_i_133_);
lean_dec(v_i_133_);
v_stop_boxed_137_ = lean_unbox_usize(v_stop_134_);
lean_dec(v_stop_134_);
v_res_138_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___redArg(v_f_131_, v_as_132_, v_i_boxed_136_, v_stop_boxed_137_, v_b_135_);
lean_dec_ref(v_as_132_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_139_, lean_object* v_x_140_, lean_object* v_x_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg(v_f_139_, v_x_140_, v_x_141_);
lean_dec_ref(v_x_140_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg___lam__0(lean_object* v_f_143_, lean_object* v_x1_144_, lean_object* v_x2_145_, lean_object* v_x3_146_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = lean_apply_3(v_f_143_, v_x1_144_, v_x2_145_, v_x3_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg(lean_object* v_map_148_, lean_object* v_f_149_, lean_object* v_init_150_){
_start:
{
lean_object* v___f_151_; lean_object* v___x_152_; 
v___f_151_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg___lam__0), 4, 1);
lean_closure_set(v___f_151_, 0, v_f_149_);
v___x_152_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg(v___f_151_, v_map_148_, v_init_150_);
return v___x_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg___boxed(lean_object* v_map_153_, lean_object* v_f_154_, lean_object* v_init_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg(v_map_153_, v_f_154_, v_init_155_);
lean_dec_ref(v_map_153_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___redArg(lean_object* v_lt_157_, lean_object* v_as_158_, lean_object* v_lo_159_, lean_object* v_hi_160_){
_start:
{
uint8_t v___x_161_; 
v___x_161_ = lean_nat_dec_lt(v_lo_159_, v_hi_160_);
if (v___x_161_ == 0)
{
lean_dec(v_lo_159_);
lean_dec_ref(v_lt_157_);
return v_as_158_;
}
else
{
lean_object* v___x_162_; lean_object* v_fst_163_; lean_object* v_snd_164_; uint8_t v___x_165_; 
lean_inc(v_lo_159_);
lean_inc_ref(v_lt_157_);
v___x_162_ = l_Array_qpartition___redArg(v_as_158_, v_lt_157_, v_lo_159_, v_hi_160_);
v_fst_163_ = lean_ctor_get(v___x_162_, 0);
lean_inc(v_fst_163_);
v_snd_164_ = lean_ctor_get(v___x_162_, 1);
lean_inc(v_snd_164_);
lean_dec_ref(v___x_162_);
v___x_165_ = lean_nat_dec_le(v_hi_160_, v_fst_163_);
if (v___x_165_ == 0)
{
lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
lean_inc_ref(v_lt_157_);
v___x_166_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___redArg(v_lt_157_, v_snd_164_, v_lo_159_, v_fst_163_);
v___x_167_ = lean_unsigned_to_nat(1u);
v___x_168_ = lean_nat_add(v_fst_163_, v___x_167_);
lean_dec(v_fst_163_);
v_as_158_ = v___x_166_;
v_lo_159_ = v___x_168_;
goto _start;
}
else
{
lean_dec(v_fst_163_);
lean_dec(v_lo_159_);
lean_dec_ref(v_lt_157_);
return v_snd_164_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___redArg___boxed(lean_object* v_lt_170_, lean_object* v_as_171_, lean_object* v_lo_172_, lean_object* v_hi_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___redArg(v_lt_170_, v_as_171_, v_lo_172_, v_hi_173_);
lean_dec(v_hi_173_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg(lean_object* v_s_178_, lean_object* v_lt_179_){
_start:
{
lean_object* v___f_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v_decls_183_; lean_object* v___x_184_; uint8_t v___x_185_; 
v___f_180_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___closed__0));
v___x_181_ = lean_unsigned_to_nat(0u);
v___x_182_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___closed__1));
v_decls_183_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg(v_s_178_, v___f_180_, v___x_182_);
v___x_184_ = lean_array_get_size(v_decls_183_);
v___x_185_ = lean_nat_dec_eq(v___x_184_, v___x_181_);
if (v___x_185_ == 0)
{
lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___y_189_; uint8_t v___x_193_; 
v___x_186_ = lean_unsigned_to_nat(1u);
v___x_187_ = lean_nat_sub(v___x_184_, v___x_186_);
v___x_193_ = lean_nat_dec_le(v___x_181_, v___x_187_);
if (v___x_193_ == 0)
{
lean_inc(v___x_187_);
v___y_189_ = v___x_187_;
goto v___jp_188_;
}
else
{
v___y_189_ = v___x_181_;
goto v___jp_188_;
}
v___jp_188_:
{
uint8_t v___x_190_; 
v___x_190_ = lean_nat_dec_le(v___y_189_, v___x_187_);
if (v___x_190_ == 0)
{
lean_object* v___x_191_; 
lean_dec(v___x_187_);
lean_inc(v___y_189_);
v___x_191_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___redArg(v_lt_179_, v_decls_183_, v___y_189_, v___y_189_);
lean_dec(v___y_189_);
return v___x_191_;
}
else
{
lean_object* v___x_192_; 
v___x_192_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___redArg(v_lt_179_, v_decls_183_, v___y_189_, v___x_187_);
lean_dec(v___x_187_);
return v___x_192_;
}
}
}
else
{
lean_dec_ref(v_lt_179_);
return v_decls_183_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___boxed(lean_object* v_s_194_, lean_object* v_lt_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg(v_s_194_, v_lt_195_);
lean_dec_ref(v_s_194_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries(uint8_t v_pu_197_, lean_object* v_00_u03b2_198_, lean_object* v_s_199_, lean_object* v_lt_200_){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg(v_s_199_, v_lt_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___boxed(lean_object* v_pu_202_, lean_object* v_00_u03b2_203_, lean_object* v_s_204_, lean_object* v_lt_205_){
_start:
{
uint8_t v_pu_boxed_206_; lean_object* v_res_207_; 
v_pu_boxed_206_ = lean_unbox(v_pu_202_);
v_res_207_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries(v_pu_boxed_206_, v_00_u03b2_203_, v_s_204_, v_lt_205_);
lean_dec_ref(v_s_204_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0(lean_object* v_00_u03c3_208_, lean_object* v_00_u03b2_209_, lean_object* v_map_210_, lean_object* v_f_211_, lean_object* v_init_212_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg(v_map_210_, v_f_211_, v_init_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___boxed(lean_object* v_00_u03c3_214_, lean_object* v_00_u03b2_215_, lean_object* v_map_216_, lean_object* v_f_217_, lean_object* v_init_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0(v_00_u03c3_214_, v_00_u03b2_215_, v_map_216_, v_f_217_, v_init_218_);
lean_dec_ref(v_map_216_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1(lean_object* v_00_u03b2_220_, lean_object* v_lt_221_, lean_object* v_n_222_, lean_object* v_as_223_, lean_object* v_lo_224_, lean_object* v_hi_225_, lean_object* v_w_226_, lean_object* v_hlo_227_, lean_object* v_hhi_228_){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___redArg(v_lt_221_, v_as_223_, v_lo_224_, v_hi_225_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___boxed(lean_object* v_00_u03b2_230_, lean_object* v_lt_231_, lean_object* v_n_232_, lean_object* v_as_233_, lean_object* v_lo_234_, lean_object* v_hi_235_, lean_object* v_w_236_, lean_object* v_hlo_237_, lean_object* v_hhi_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1(v_00_u03b2_230_, v_lt_231_, v_n_232_, v_as_233_, v_lo_234_, v_hi_235_, v_w_236_, v_hlo_237_, v_hhi_238_);
lean_dec(v_hi_235_);
lean_dec(v_n_232_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0___redArg(lean_object* v_map_240_, lean_object* v_f_241_, lean_object* v_init_242_){
_start:
{
lean_object* v___x_243_; 
v___x_243_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg(v_f_241_, v_map_240_, v_init_242_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0___redArg___boxed(lean_object* v_map_244_, lean_object* v_f_245_, lean_object* v_init_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0___redArg(v_map_244_, v_f_245_, v_init_246_);
lean_dec_ref(v_map_244_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0(lean_object* v_00_u03c3_248_, lean_object* v_00_u03b2_249_, lean_object* v_map_250_, lean_object* v_f_251_, lean_object* v_init_252_){
_start:
{
lean_object* v___x_253_; 
v___x_253_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg(v_f_251_, v_map_250_, v_init_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0___boxed(lean_object* v_00_u03c3_254_, lean_object* v_00_u03b2_255_, lean_object* v_map_256_, lean_object* v_f_257_, lean_object* v_init_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0(v_00_u03c3_254_, v_00_u03b2_255_, v_map_256_, v_f_257_, v_init_258_);
lean_dec_ref(v_map_256_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1(lean_object* v_00_u03c3_260_, lean_object* v_00_u03b1_261_, lean_object* v_00_u03b2_262_, lean_object* v_f_263_, lean_object* v_x_264_, lean_object* v_x_265_){
_start:
{
lean_object* v___x_266_; 
v___x_266_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg(v_f_263_, v_x_264_, v_x_265_);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03c3_267_, lean_object* v_00_u03b1_268_, lean_object* v_00_u03b2_269_, lean_object* v_f_270_, lean_object* v_x_271_, lean_object* v_x_272_){
_start:
{
lean_object* v_res_273_; 
v_res_273_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1(v_00_u03c3_267_, v_00_u03b1_268_, v_00_u03b2_269_, v_f_270_, v_x_271_, v_x_272_);
lean_dec_ref(v_x_271_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b1_274_, lean_object* v_00_u03b2_275_, lean_object* v_00_u03c3_276_, lean_object* v_f_277_, lean_object* v_as_278_, size_t v_i_279_, size_t v_stop_280_, lean_object* v_b_281_){
_start:
{
lean_object* v___x_282_; 
v___x_282_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___redArg(v_f_277_, v_as_278_, v_i_279_, v_stop_280_, v_b_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b1_283_, lean_object* v_00_u03b2_284_, lean_object* v_00_u03c3_285_, lean_object* v_f_286_, lean_object* v_as_287_, lean_object* v_i_288_, lean_object* v_stop_289_, lean_object* v_b_290_){
_start:
{
size_t v_i_boxed_291_; size_t v_stop_boxed_292_; lean_object* v_res_293_; 
v_i_boxed_291_ = lean_unbox_usize(v_i_288_);
lean_dec(v_i_288_);
v_stop_boxed_292_ = lean_unbox_usize(v_stop_289_);
lean_dec(v_stop_289_);
v_res_293_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3(v_00_u03b1_283_, v_00_u03b2_284_, v_00_u03c3_285_, v_f_286_, v_as_287_, v_i_boxed_291_, v_stop_boxed_292_, v_b_290_);
lean_dec_ref(v_as_287_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03c3_294_, lean_object* v_00_u03b1_295_, lean_object* v_00_u03b2_296_, lean_object* v_f_297_, lean_object* v_keys_298_, lean_object* v_vals_299_, lean_object* v_heq_300_, lean_object* v_i_301_, lean_object* v_acc_302_){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4___redArg(v_f_297_, v_keys_298_, v_vals_299_, v_i_301_, v_acc_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03c3_304_, lean_object* v_00_u03b1_305_, lean_object* v_00_u03b2_306_, lean_object* v_f_307_, lean_object* v_keys_308_, lean_object* v_vals_309_, lean_object* v_heq_310_, lean_object* v_i_311_, lean_object* v_acc_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4(v_00_u03c3_304_, v_00_u03b1_305_, v_00_u03b2_306_, v_f_307_, v_keys_308_, v_vals_309_, v_heq_310_, v_i_311_, v_acc_312_);
lean_dec_ref(v_vals_309_);
lean_dec_ref(v_keys_308_);
return v_res_313_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_314_, lean_object* v_i_315_, lean_object* v_k_316_){
_start:
{
lean_object* v___x_317_; uint8_t v___x_318_; 
v___x_317_ = lean_array_get_size(v_keys_314_);
v___x_318_ = lean_nat_dec_lt(v_i_315_, v___x_317_);
if (v___x_318_ == 0)
{
lean_dec(v_i_315_);
return v___x_318_;
}
else
{
lean_object* v_k_x27_319_; uint8_t v___x_320_; 
v_k_x27_319_ = lean_array_fget_borrowed(v_keys_314_, v_i_315_);
v___x_320_ = lean_name_eq(v_k_316_, v_k_x27_319_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_321_ = lean_unsigned_to_nat(1u);
v___x_322_ = lean_nat_add(v_i_315_, v___x_321_);
lean_dec(v_i_315_);
v_i_315_ = v___x_322_;
goto _start;
}
else
{
lean_dec(v_i_315_);
return v___x_320_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_324_, lean_object* v_i_325_, lean_object* v_k_326_){
_start:
{
uint8_t v_res_327_; lean_object* v_r_328_; 
v_res_327_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1___redArg(v_keys_324_, v_i_325_, v_k_326_);
lean_dec(v_k_326_);
lean_dec_ref(v_keys_324_);
v_r_328_ = lean_box(v_res_327_);
return v_r_328_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_329_; size_t v___x_330_; size_t v___x_331_; 
v___x_329_ = ((size_t)5ULL);
v___x_330_ = ((size_t)1ULL);
v___x_331_ = lean_usize_shift_left(v___x_330_, v___x_329_);
return v___x_331_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_332_; size_t v___x_333_; size_t v___x_334_; 
v___x_332_ = ((size_t)1ULL);
v___x_333_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___closed__0);
v___x_334_ = lean_usize_sub(v___x_333_, v___x_332_);
return v___x_334_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg(lean_object* v_x_335_, size_t v_x_336_, lean_object* v_x_337_){
_start:
{
if (lean_obj_tag(v_x_335_) == 0)
{
lean_object* v_es_338_; lean_object* v___x_339_; size_t v___x_340_; size_t v___x_341_; size_t v___x_342_; lean_object* v_j_343_; lean_object* v___x_344_; 
v_es_338_ = lean_ctor_get(v_x_335_, 0);
lean_inc_ref(v_es_338_);
lean_dec_ref(v_x_335_);
v___x_339_ = lean_box(2);
v___x_340_ = ((size_t)5ULL);
v___x_341_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___closed__1);
v___x_342_ = lean_usize_land(v_x_336_, v___x_341_);
v_j_343_ = lean_usize_to_nat(v___x_342_);
v___x_344_ = lean_array_get(v___x_339_, v_es_338_, v_j_343_);
lean_dec(v_j_343_);
lean_dec_ref(v_es_338_);
switch(lean_obj_tag(v___x_344_))
{
case 0:
{
lean_object* v_key_345_; uint8_t v___x_346_; 
v_key_345_ = lean_ctor_get(v___x_344_, 0);
lean_inc(v_key_345_);
lean_dec_ref(v___x_344_);
v___x_346_ = lean_name_eq(v_x_337_, v_key_345_);
lean_dec(v_key_345_);
return v___x_346_;
}
case 1:
{
lean_object* v_node_347_; size_t v___x_348_; 
v_node_347_ = lean_ctor_get(v___x_344_, 0);
lean_inc(v_node_347_);
lean_dec_ref(v___x_344_);
v___x_348_ = lean_usize_shift_right(v_x_336_, v___x_340_);
v_x_335_ = v_node_347_;
v_x_336_ = v___x_348_;
goto _start;
}
default: 
{
uint8_t v___x_350_; 
v___x_350_ = 0;
return v___x_350_;
}
}
}
else
{
lean_object* v_ks_351_; lean_object* v___x_352_; uint8_t v___x_353_; 
v_ks_351_ = lean_ctor_get(v_x_335_, 0);
lean_inc_ref(v_ks_351_);
lean_dec_ref(v_x_335_);
v___x_352_ = lean_unsigned_to_nat(0u);
v___x_353_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1___redArg(v_ks_351_, v___x_352_, v_x_337_);
lean_dec_ref(v_ks_351_);
return v___x_353_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___boxed(lean_object* v_x_354_, lean_object* v_x_355_, lean_object* v_x_356_){
_start:
{
size_t v_x_433__boxed_357_; uint8_t v_res_358_; lean_object* v_r_359_; 
v_x_433__boxed_357_ = lean_unbox_usize(v_x_355_);
lean_dec(v_x_355_);
v_res_358_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg(v_x_354_, v_x_433__boxed_357_, v_x_356_);
lean_dec(v_x_356_);
v_r_359_ = lean_box(v_res_358_);
return v_r_359_;
}
}
static uint64_t _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_360_; uint64_t v___x_361_; 
v___x_360_ = lean_unsigned_to_nat(1723u);
v___x_361_ = lean_uint64_of_nat(v___x_360_);
return v___x_361_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg(lean_object* v_x_362_, lean_object* v_x_363_){
_start:
{
uint64_t v___y_365_; 
if (lean_obj_tag(v_x_363_) == 0)
{
uint64_t v___x_368_; 
v___x_368_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0);
v___y_365_ = v___x_368_;
goto v___jp_364_;
}
else
{
uint64_t v_hash_369_; 
v_hash_369_ = lean_ctor_get_uint64(v_x_363_, sizeof(void*)*2);
v___y_365_ = v_hash_369_;
goto v___jp_364_;
}
v___jp_364_:
{
size_t v___x_366_; uint8_t v___x_367_; 
v___x_366_ = lean_uint64_to_usize(v___y_365_);
v___x_367_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg(v_x_362_, v___x_366_, v_x_363_);
return v___x_367_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___boxed(lean_object* v_x_370_, lean_object* v_x_371_){
_start:
{
uint8_t v_res_372_; lean_object* v_r_373_; 
v_res_372_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg(v_x_370_, v_x_371_);
lean_dec(v_x_371_);
v_r_373_ = lean_box(v_res_372_);
return v_r_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_374_, lean_object* v_x_375_, lean_object* v_x_376_, lean_object* v_x_377_){
_start:
{
lean_object* v_ks_378_; lean_object* v_vs_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_403_; 
v_ks_378_ = lean_ctor_get(v_x_374_, 0);
v_vs_379_ = lean_ctor_get(v_x_374_, 1);
v_isSharedCheck_403_ = !lean_is_exclusive(v_x_374_);
if (v_isSharedCheck_403_ == 0)
{
v___x_381_ = v_x_374_;
v_isShared_382_ = v_isSharedCheck_403_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_vs_379_);
lean_inc(v_ks_378_);
lean_dec(v_x_374_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_403_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v___x_383_; uint8_t v___x_384_; 
v___x_383_ = lean_array_get_size(v_ks_378_);
v___x_384_ = lean_nat_dec_lt(v_x_375_, v___x_383_);
if (v___x_384_ == 0)
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_388_; 
lean_dec(v_x_375_);
v___x_385_ = lean_array_push(v_ks_378_, v_x_376_);
v___x_386_ = lean_array_push(v_vs_379_, v_x_377_);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 1, v___x_386_);
lean_ctor_set(v___x_381_, 0, v___x_385_);
v___x_388_ = v___x_381_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_385_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v___x_386_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
else
{
lean_object* v_k_x27_390_; uint8_t v___x_391_; 
v_k_x27_390_ = lean_array_fget_borrowed(v_ks_378_, v_x_375_);
v___x_391_ = lean_name_eq(v_x_376_, v_k_x27_390_);
if (v___x_391_ == 0)
{
lean_object* v___x_393_; 
if (v_isShared_382_ == 0)
{
v___x_393_ = v___x_381_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_ks_378_);
lean_ctor_set(v_reuseFailAlloc_397_, 1, v_vs_379_);
v___x_393_ = v_reuseFailAlloc_397_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_unsigned_to_nat(1u);
v___x_395_ = lean_nat_add(v_x_375_, v___x_394_);
lean_dec(v_x_375_);
v_x_374_ = v___x_393_;
v_x_375_ = v___x_395_;
goto _start;
}
}
else
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_401_; 
v___x_398_ = lean_array_fset(v_ks_378_, v_x_375_, v_x_376_);
v___x_399_ = lean_array_fset(v_vs_379_, v_x_375_, v_x_377_);
lean_dec(v_x_375_);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 1, v___x_399_);
lean_ctor_set(v___x_381_, 0, v___x_398_);
v___x_401_ = v___x_381_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v___x_398_);
lean_ctor_set(v_reuseFailAlloc_402_, 1, v___x_399_);
v___x_401_ = v_reuseFailAlloc_402_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
return v___x_401_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4___redArg(lean_object* v_n_404_, lean_object* v_k_405_, lean_object* v_v_406_){
_start:
{
lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_407_ = lean_unsigned_to_nat(0u);
v___x_408_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4_spec__5___redArg(v_n_404_, v___x_407_, v_k_405_, v_v_406_);
return v___x_408_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg(lean_object* v_x_410_, size_t v_x_411_, size_t v_x_412_, lean_object* v_x_413_, lean_object* v_x_414_){
_start:
{
if (lean_obj_tag(v_x_410_) == 0)
{
lean_object* v_es_415_; size_t v___x_416_; size_t v___x_417_; size_t v___x_418_; size_t v___x_419_; lean_object* v_j_420_; lean_object* v___x_421_; uint8_t v___x_422_; 
v_es_415_ = lean_ctor_get(v_x_410_, 0);
v___x_416_ = ((size_t)5ULL);
v___x_417_ = ((size_t)1ULL);
v___x_418_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___closed__1);
v___x_419_ = lean_usize_land(v_x_411_, v___x_418_);
v_j_420_ = lean_usize_to_nat(v___x_419_);
v___x_421_ = lean_array_get_size(v_es_415_);
v___x_422_ = lean_nat_dec_lt(v_j_420_, v___x_421_);
if (v___x_422_ == 0)
{
lean_dec(v_j_420_);
lean_dec(v_x_414_);
lean_dec(v_x_413_);
return v_x_410_;
}
else
{
lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_459_; 
lean_inc_ref(v_es_415_);
v_isSharedCheck_459_ = !lean_is_exclusive(v_x_410_);
if (v_isSharedCheck_459_ == 0)
{
lean_object* v_unused_460_; 
v_unused_460_ = lean_ctor_get(v_x_410_, 0);
lean_dec(v_unused_460_);
v___x_424_ = v_x_410_;
v_isShared_425_ = v_isSharedCheck_459_;
goto v_resetjp_423_;
}
else
{
lean_dec(v_x_410_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_459_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v_v_426_; lean_object* v___x_427_; lean_object* v_xs_x27_428_; lean_object* v___y_430_; 
v_v_426_ = lean_array_fget(v_es_415_, v_j_420_);
v___x_427_ = lean_box(0);
v_xs_x27_428_ = lean_array_fset(v_es_415_, v_j_420_, v___x_427_);
switch(lean_obj_tag(v_v_426_))
{
case 0:
{
lean_object* v_key_435_; lean_object* v_val_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_446_; 
v_key_435_ = lean_ctor_get(v_v_426_, 0);
v_val_436_ = lean_ctor_get(v_v_426_, 1);
v_isSharedCheck_446_ = !lean_is_exclusive(v_v_426_);
if (v_isSharedCheck_446_ == 0)
{
v___x_438_ = v_v_426_;
v_isShared_439_ = v_isSharedCheck_446_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_val_436_);
lean_inc(v_key_435_);
lean_dec(v_v_426_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_446_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
uint8_t v___x_440_; 
v___x_440_ = lean_name_eq(v_x_413_, v_key_435_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; lean_object* v___x_442_; 
lean_del_object(v___x_438_);
v___x_441_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_435_, v_val_436_, v_x_413_, v_x_414_);
v___x_442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_442_, 0, v___x_441_);
v___y_430_ = v___x_442_;
goto v___jp_429_;
}
else
{
lean_object* v___x_444_; 
lean_dec(v_val_436_);
lean_dec(v_key_435_);
if (v_isShared_439_ == 0)
{
lean_ctor_set(v___x_438_, 1, v_x_414_);
lean_ctor_set(v___x_438_, 0, v_x_413_);
v___x_444_ = v___x_438_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_x_413_);
lean_ctor_set(v_reuseFailAlloc_445_, 1, v_x_414_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
v___y_430_ = v___x_444_;
goto v___jp_429_;
}
}
}
}
case 1:
{
lean_object* v_node_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_457_; 
v_node_447_ = lean_ctor_get(v_v_426_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v_v_426_);
if (v_isSharedCheck_457_ == 0)
{
v___x_449_ = v_v_426_;
v_isShared_450_ = v_isSharedCheck_457_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_node_447_);
lean_dec(v_v_426_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_457_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
size_t v___x_451_; size_t v___x_452_; lean_object* v___x_453_; lean_object* v___x_455_; 
v___x_451_ = lean_usize_shift_right(v_x_411_, v___x_416_);
v___x_452_ = lean_usize_add(v_x_412_, v___x_417_);
v___x_453_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg(v_node_447_, v___x_451_, v___x_452_, v_x_413_, v_x_414_);
if (v_isShared_450_ == 0)
{
lean_ctor_set(v___x_449_, 0, v___x_453_);
v___x_455_ = v___x_449_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v___x_453_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
v___y_430_ = v___x_455_;
goto v___jp_429_;
}
}
}
default: 
{
lean_object* v___x_458_; 
v___x_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_458_, 0, v_x_413_);
lean_ctor_set(v___x_458_, 1, v_x_414_);
v___y_430_ = v___x_458_;
goto v___jp_429_;
}
}
v___jp_429_:
{
lean_object* v___x_431_; lean_object* v___x_433_; 
v___x_431_ = lean_array_fset(v_xs_x27_428_, v_j_420_, v___y_430_);
lean_dec(v_j_420_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 0, v___x_431_);
v___x_433_ = v___x_424_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v___x_431_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
}
}
else
{
lean_object* v_ks_461_; lean_object* v_vs_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_482_; 
v_ks_461_ = lean_ctor_get(v_x_410_, 0);
v_vs_462_ = lean_ctor_get(v_x_410_, 1);
v_isSharedCheck_482_ = !lean_is_exclusive(v_x_410_);
if (v_isSharedCheck_482_ == 0)
{
v___x_464_ = v_x_410_;
v_isShared_465_ = v_isSharedCheck_482_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_vs_462_);
lean_inc(v_ks_461_);
lean_dec(v_x_410_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_482_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v___x_467_; 
if (v_isShared_465_ == 0)
{
v___x_467_ = v___x_464_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v_ks_461_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v_vs_462_);
v___x_467_ = v_reuseFailAlloc_481_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
lean_object* v_newNode_468_; uint8_t v___y_470_; size_t v___x_476_; uint8_t v___x_477_; 
v_newNode_468_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4___redArg(v___x_467_, v_x_413_, v_x_414_);
v___x_476_ = ((size_t)7ULL);
v___x_477_ = lean_usize_dec_le(v___x_476_, v_x_412_);
if (v___x_477_ == 0)
{
lean_object* v___x_478_; lean_object* v___x_479_; uint8_t v___x_480_; 
v___x_478_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_468_);
v___x_479_ = lean_unsigned_to_nat(4u);
v___x_480_ = lean_nat_dec_lt(v___x_478_, v___x_479_);
lean_dec(v___x_478_);
v___y_470_ = v___x_480_;
goto v___jp_469_;
}
else
{
v___y_470_ = v___x_477_;
goto v___jp_469_;
}
v___jp_469_:
{
if (v___y_470_ == 0)
{
lean_object* v_ks_471_; lean_object* v_vs_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
v_ks_471_ = lean_ctor_get(v_newNode_468_, 0);
lean_inc_ref(v_ks_471_);
v_vs_472_ = lean_ctor_get(v_newNode_468_, 1);
lean_inc_ref(v_vs_472_);
lean_dec_ref(v_newNode_468_);
v___x_473_ = lean_unsigned_to_nat(0u);
v___x_474_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg___closed__0);
v___x_475_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5___redArg(v_x_412_, v_ks_471_, v_vs_472_, v___x_473_, v___x_474_);
lean_dec_ref(v_vs_472_);
lean_dec_ref(v_ks_471_);
return v___x_475_;
}
else
{
return v_newNode_468_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5___redArg(size_t v_depth_483_, lean_object* v_keys_484_, lean_object* v_vals_485_, lean_object* v_i_486_, lean_object* v_entries_487_){
_start:
{
lean_object* v___x_488_; uint8_t v___x_489_; 
v___x_488_ = lean_array_get_size(v_keys_484_);
v___x_489_ = lean_nat_dec_lt(v_i_486_, v___x_488_);
if (v___x_489_ == 0)
{
lean_dec(v_i_486_);
return v_entries_487_;
}
else
{
lean_object* v_k_490_; lean_object* v_v_491_; uint64_t v___y_493_; 
v_k_490_ = lean_array_fget_borrowed(v_keys_484_, v_i_486_);
v_v_491_ = lean_array_fget_borrowed(v_vals_485_, v_i_486_);
if (lean_obj_tag(v_k_490_) == 0)
{
uint64_t v___x_504_; 
v___x_504_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0);
v___y_493_ = v___x_504_;
goto v___jp_492_;
}
else
{
uint64_t v_hash_505_; 
v_hash_505_ = lean_ctor_get_uint64(v_k_490_, sizeof(void*)*2);
v___y_493_ = v_hash_505_;
goto v___jp_492_;
}
v___jp_492_:
{
size_t v_h_494_; size_t v___x_495_; lean_object* v___x_496_; size_t v___x_497_; size_t v___x_498_; size_t v___x_499_; size_t v_h_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v_h_494_ = lean_uint64_to_usize(v___y_493_);
v___x_495_ = ((size_t)5ULL);
v___x_496_ = lean_unsigned_to_nat(1u);
v___x_497_ = ((size_t)1ULL);
v___x_498_ = lean_usize_sub(v_depth_483_, v___x_497_);
v___x_499_ = lean_usize_mul(v___x_495_, v___x_498_);
v_h_500_ = lean_usize_shift_right(v_h_494_, v___x_499_);
v___x_501_ = lean_nat_add(v_i_486_, v___x_496_);
lean_dec(v_i_486_);
lean_inc(v_v_491_);
lean_inc(v_k_490_);
v___x_502_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg(v_entries_487_, v_h_500_, v_depth_483_, v_k_490_, v_v_491_);
v_i_486_ = v___x_501_;
v_entries_487_ = v___x_502_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_506_, lean_object* v_keys_507_, lean_object* v_vals_508_, lean_object* v_i_509_, lean_object* v_entries_510_){
_start:
{
size_t v_depth_boxed_511_; lean_object* v_res_512_; 
v_depth_boxed_511_ = lean_unbox_usize(v_depth_506_);
lean_dec(v_depth_506_);
v_res_512_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5___redArg(v_depth_boxed_511_, v_keys_507_, v_vals_508_, v_i_509_, v_entries_510_);
lean_dec_ref(v_vals_508_);
lean_dec_ref(v_keys_507_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg___boxed(lean_object* v_x_513_, lean_object* v_x_514_, lean_object* v_x_515_, lean_object* v_x_516_, lean_object* v_x_517_){
_start:
{
size_t v_x_589__boxed_518_; size_t v_x_590__boxed_519_; lean_object* v_res_520_; 
v_x_589__boxed_518_ = lean_unbox_usize(v_x_514_);
lean_dec(v_x_514_);
v_x_590__boxed_519_ = lean_unbox_usize(v_x_515_);
lean_dec(v_x_515_);
v_res_520_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg(v_x_513_, v_x_589__boxed_518_, v_x_590__boxed_519_, v_x_516_, v_x_517_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1___redArg(lean_object* v_x_521_, lean_object* v_x_522_, lean_object* v_x_523_){
_start:
{
uint64_t v___y_525_; 
if (lean_obj_tag(v_x_522_) == 0)
{
uint64_t v___x_529_; 
v___x_529_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0);
v___y_525_ = v___x_529_;
goto v___jp_524_;
}
else
{
uint64_t v_hash_530_; 
v_hash_530_ = lean_ctor_get_uint64(v_x_522_, sizeof(void*)*2);
v___y_525_ = v_hash_530_;
goto v___jp_524_;
}
v___jp_524_:
{
size_t v___x_526_; size_t v___x_527_; lean_object* v___x_528_; 
v___x_526_ = lean_uint64_to_usize(v___y_525_);
v___x_527_ = ((size_t)1ULL);
v___x_528_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg(v_x_521_, v___x_526_, v___x_527_, v_x_522_, v_x_523_);
return v___x_528_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg___lam__0(lean_object* v_oldState_531_, lean_object* v_otherState_532_, lean_object* v_k_533_, lean_object* v_v_534_){
_start:
{
uint8_t v___x_535_; 
v___x_535_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg(v_oldState_531_, v_k_533_);
if (v___x_535_ == 0)
{
lean_object* v___x_536_; 
v___x_536_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1___redArg(v_otherState_532_, v_k_533_, v_v_534_);
return v___x_536_;
}
else
{
lean_dec(v_v_534_);
lean_dec(v_k_533_);
return v_otherState_532_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg(lean_object* v_oldState_537_, lean_object* v_newState_538_, lean_object* v_otherState_539_){
_start:
{
lean_object* v___f_540_; lean_object* v___x_541_; 
v___f_540_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg___lam__0), 4, 1);
lean_closure_set(v___f_540_, 0, v_oldState_537_);
v___x_541_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg(v_newState_538_, v___f_540_, v_otherState_539_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg___boxed(lean_object* v_oldState_542_, lean_object* v_newState_543_, lean_object* v_otherState_544_){
_start:
{
lean_object* v_res_545_; 
v_res_545_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg(v_oldState_542_, v_newState_543_, v_otherState_544_);
lean_dec_ref(v_newState_543_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn(lean_object* v_00_u03b2_546_, uint8_t v_phase_547_, lean_object* v_oldState_548_, lean_object* v_newState_549_, lean_object* v_x_550_, lean_object* v_otherState_551_){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg(v_oldState_548_, v_newState_549_, v_otherState_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___boxed(lean_object* v_00_u03b2_553_, lean_object* v_phase_554_, lean_object* v_oldState_555_, lean_object* v_newState_556_, lean_object* v_x_557_, lean_object* v_otherState_558_){
_start:
{
uint8_t v_phase_boxed_559_; lean_object* v_res_560_; 
v_phase_boxed_559_ = lean_unbox(v_phase_554_);
v_res_560_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn(v_00_u03b2_553_, v_phase_boxed_559_, v_oldState_555_, v_newState_556_, v_x_557_, v_otherState_558_);
lean_dec(v_x_557_);
lean_dec_ref(v_newState_556_);
return v_res_560_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0(lean_object* v_00_u03b2_561_, lean_object* v_x_562_, lean_object* v_x_563_){
_start:
{
uint8_t v___x_564_; 
v___x_564_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg(v_x_562_, v_x_563_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___boxed(lean_object* v_00_u03b2_565_, lean_object* v_x_566_, lean_object* v_x_567_){
_start:
{
uint8_t v_res_568_; lean_object* v_r_569_; 
v_res_568_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0(v_00_u03b2_565_, v_x_566_, v_x_567_);
lean_dec(v_x_567_);
v_r_569_ = lean_box(v_res_568_);
return v_r_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1(lean_object* v_00_u03b2_570_, lean_object* v_x_571_, lean_object* v_x_572_, lean_object* v_x_573_){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1___redArg(v_x_571_, v_x_572_, v_x_573_);
return v___x_574_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0(lean_object* v_00_u03b2_575_, lean_object* v_x_576_, size_t v_x_577_, lean_object* v_x_578_){
_start:
{
uint8_t v___x_579_; 
v___x_579_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg(v_x_576_, v_x_577_, v_x_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___boxed(lean_object* v_00_u03b2_580_, lean_object* v_x_581_, lean_object* v_x_582_, lean_object* v_x_583_){
_start:
{
size_t v_x_797__boxed_584_; uint8_t v_res_585_; lean_object* v_r_586_; 
v_x_797__boxed_584_ = lean_unbox_usize(v_x_582_);
lean_dec(v_x_582_);
v_res_585_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0(v_00_u03b2_580_, v_x_581_, v_x_797__boxed_584_, v_x_583_);
lean_dec(v_x_583_);
v_r_586_ = lean_box(v_res_585_);
return v_r_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2(lean_object* v_00_u03b2_587_, lean_object* v_x_588_, size_t v_x_589_, size_t v_x_590_, lean_object* v_x_591_, lean_object* v_x_592_){
_start:
{
lean_object* v___x_593_; 
v___x_593_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg(v_x_588_, v_x_589_, v_x_590_, v_x_591_, v_x_592_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___boxed(lean_object* v_00_u03b2_594_, lean_object* v_x_595_, lean_object* v_x_596_, lean_object* v_x_597_, lean_object* v_x_598_, lean_object* v_x_599_){
_start:
{
size_t v_x_808__boxed_600_; size_t v_x_809__boxed_601_; lean_object* v_res_602_; 
v_x_808__boxed_600_ = lean_unbox_usize(v_x_596_);
lean_dec(v_x_596_);
v_x_809__boxed_601_ = lean_unbox_usize(v_x_597_);
lean_dec(v_x_597_);
v_res_602_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2(v_00_u03b2_594_, v_x_595_, v_x_808__boxed_600_, v_x_809__boxed_601_, v_x_598_, v_x_599_);
return v_res_602_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_603_, lean_object* v_keys_604_, lean_object* v_vals_605_, lean_object* v_heq_606_, lean_object* v_i_607_, lean_object* v_k_608_){
_start:
{
uint8_t v___x_609_; 
v___x_609_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1___redArg(v_keys_604_, v_i_607_, v_k_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_610_, lean_object* v_keys_611_, lean_object* v_vals_612_, lean_object* v_heq_613_, lean_object* v_i_614_, lean_object* v_k_615_){
_start:
{
uint8_t v_res_616_; lean_object* v_r_617_; 
v_res_616_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1(v_00_u03b2_610_, v_keys_611_, v_vals_612_, v_heq_613_, v_i_614_, v_k_615_);
lean_dec(v_k_615_);
lean_dec_ref(v_vals_612_);
lean_dec_ref(v_keys_611_);
v_r_617_ = lean_box(v_res_616_);
return v_r_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_618_, lean_object* v_n_619_, lean_object* v_k_620_, lean_object* v_v_621_){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4___redArg(v_n_619_, v_k_620_, v_v_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_623_, size_t v_depth_624_, lean_object* v_keys_625_, lean_object* v_vals_626_, lean_object* v_heq_627_, lean_object* v_i_628_, lean_object* v_entries_629_){
_start:
{
lean_object* v___x_630_; 
v___x_630_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5___redArg(v_depth_624_, v_keys_625_, v_vals_626_, v_i_628_, v_entries_629_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_631_, lean_object* v_depth_632_, lean_object* v_keys_633_, lean_object* v_vals_634_, lean_object* v_heq_635_, lean_object* v_i_636_, lean_object* v_entries_637_){
_start:
{
size_t v_depth_boxed_638_; lean_object* v_res_639_; 
v_depth_boxed_638_ = lean_unbox_usize(v_depth_632_);
lean_dec(v_depth_632_);
v_res_639_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5(v_00_u03b2_631_, v_depth_boxed_638_, v_keys_633_, v_vals_634_, v_heq_635_, v_i_636_, v_entries_637_);
lean_dec_ref(v_vals_634_);
lean_dec_ref(v_keys_633_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_640_, lean_object* v_x_641_, lean_object* v_x_642_, lean_object* v_x_643_, lean_object* v_x_644_){
_start:
{
lean_object* v___x_645_; 
v___x_645_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4_spec__5___redArg(v_x_641_, v_x_642_, v_x_643_, v_x_644_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___lam__0(lean_object* v_count_646_, lean_object* v_x_647_, lean_object* v_x_648_){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_649_ = lean_unsigned_to_nat(1u);
v___x_650_ = lean_nat_add(v_count_646_, v___x_649_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___lam__0___boxed(lean_object* v_count_651_, lean_object* v_x_652_, lean_object* v_x_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___lam__0(v_count_651_, v_x_652_, v_x_653_);
lean_dec(v_x_653_);
lean_dec(v_x_652_);
lean_dec(v_count_651_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg(lean_object* v_state_659_){
_start:
{
lean_object* v___f_660_; lean_object* v___x_661_; lean_object* v_numEntries_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
v___f_660_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__0));
v___x_661_ = lean_unsigned_to_nat(0u);
v_numEntries_662_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg(v_state_659_, v___f_660_, v___x_661_);
v___x_663_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__2));
v___x_664_ = l_Nat_reprFast(v_numEntries_662_);
v___x_665_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
v___x_666_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_666_, 0, v___x_663_);
lean_ctor_set(v___x_666_, 1, v___x_665_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___boxed(lean_object* v_state_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg(v_state_667_);
lean_dec_ref(v_state_667_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn(uint8_t v_pu_669_, lean_object* v_00_u03b2_670_, lean_object* v_state_671_){
_start:
{
lean_object* v___x_672_; 
v___x_672_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg(v_state_671_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___boxed(lean_object* v_pu_673_, lean_object* v_00_u03b2_674_, lean_object* v_state_675_){
_start:
{
uint8_t v_pu_boxed_676_; lean_object* v_res_677_; 
v_pu_boxed_676_ = lean_unbox(v_pu_673_);
v_res_677_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn(v_pu_boxed_676_, v_00_u03b2_674_, v_state_675_);
lean_dec_ref(v_state_675_);
return v_res_677_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt___redArg(lean_object* v_a_678_, lean_object* v_b_679_){
_start:
{
lean_object* v_toSignature_680_; lean_object* v_toSignature_681_; lean_object* v_name_682_; lean_object* v_name_683_; uint8_t v___x_684_; 
v_toSignature_680_ = lean_ctor_get(v_a_678_, 0);
v_toSignature_681_ = lean_ctor_get(v_b_679_, 0);
v_name_682_ = lean_ctor_get(v_toSignature_680_, 0);
v_name_683_ = lean_ctor_get(v_toSignature_681_, 0);
v___x_684_ = l_Lean_Name_quickLt(v_name_682_, v_name_683_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt___redArg___boxed(lean_object* v_a_685_, lean_object* v_b_686_){
_start:
{
uint8_t v_res_687_; lean_object* v_r_688_; 
v_res_687_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt___redArg(v_a_685_, v_b_686_);
lean_dec_ref(v_b_686_);
lean_dec_ref(v_a_685_);
v_r_688_ = lean_box(v_res_687_);
return v_r_688_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt(uint8_t v_pu_689_, lean_object* v_a_690_, lean_object* v_b_691_){
_start:
{
lean_object* v_toSignature_692_; lean_object* v_toSignature_693_; lean_object* v_name_694_; lean_object* v_name_695_; uint8_t v___x_696_; 
v_toSignature_692_ = lean_ctor_get(v_a_690_, 0);
v_toSignature_693_ = lean_ctor_get(v_b_691_, 0);
v_name_694_ = lean_ctor_get(v_toSignature_692_, 0);
v_name_695_ = lean_ctor_get(v_toSignature_693_, 0);
v___x_696_ = l_Lean_Name_quickLt(v_name_694_, v_name_695_);
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt___boxed(lean_object* v_pu_697_, lean_object* v_a_698_, lean_object* v_b_699_){
_start:
{
uint8_t v_pu_boxed_700_; uint8_t v_res_701_; lean_object* v_r_702_; 
v_pu_boxed_700_ = lean_unbox(v_pu_697_);
v_res_701_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt(v_pu_boxed_700_, v_a_698_, v_b_699_);
lean_dec_ref(v_b_699_);
lean_dec_ref(v_a_698_);
v_r_702_ = lean_box(v_res_701_);
return v_r_702_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f(uint8_t v_pu_704_, lean_object* v_decls_705_, lean_object* v_declName_706_){
_start:
{
lean_object* v_tmpDecl_707_; lean_object* v_toSignature_708_; lean_object* v_value_709_; uint8_t v_recursive_710_; lean_object* v_inlineAttr_x3f_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_742_; 
v_tmpDecl_707_ = l_Lean_Compiler_LCNF_instInhabitedDecl_default(v_pu_704_);
v_toSignature_708_ = lean_ctor_get(v_tmpDecl_707_, 0);
v_value_709_ = lean_ctor_get(v_tmpDecl_707_, 1);
v_recursive_710_ = lean_ctor_get_uint8(v_tmpDecl_707_, sizeof(void*)*3);
v_inlineAttr_x3f_711_ = lean_ctor_get(v_tmpDecl_707_, 2);
v_isSharedCheck_742_ = !lean_is_exclusive(v_tmpDecl_707_);
if (v_isSharedCheck_742_ == 0)
{
v___x_713_ = v_tmpDecl_707_;
v_isShared_714_ = v_isSharedCheck_742_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_inlineAttr_x3f_711_);
lean_inc(v_value_709_);
lean_inc(v_toSignature_708_);
lean_dec(v_tmpDecl_707_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_742_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v_levelParams_715_; lean_object* v_type_716_; lean_object* v_params_717_; uint8_t v_safe_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_740_; 
v_levelParams_715_ = lean_ctor_get(v_toSignature_708_, 1);
v_type_716_ = lean_ctor_get(v_toSignature_708_, 2);
v_params_717_ = lean_ctor_get(v_toSignature_708_, 3);
v_safe_718_ = lean_ctor_get_uint8(v_toSignature_708_, sizeof(void*)*4);
v_isSharedCheck_740_ = !lean_is_exclusive(v_toSignature_708_);
if (v_isSharedCheck_740_ == 0)
{
lean_object* v_unused_741_; 
v_unused_741_ = lean_ctor_get(v_toSignature_708_, 0);
lean_dec(v_unused_741_);
v___x_720_ = v_toSignature_708_;
v_isShared_721_ = v_isSharedCheck_740_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_params_717_);
lean_inc(v_type_716_);
lean_inc(v_levelParams_715_);
lean_dec(v_toSignature_708_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_740_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_722_; lean_object* v___x_723_; uint8_t v___x_724_; 
v___x_722_ = lean_unsigned_to_nat(0u);
v___x_723_ = lean_array_get_size(v_decls_705_);
v___x_724_ = lean_nat_dec_lt(v___x_722_, v___x_723_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; 
lean_del_object(v___x_720_);
lean_dec_ref(v_params_717_);
lean_dec_ref(v_type_716_);
lean_dec(v_levelParams_715_);
lean_del_object(v___x_713_);
lean_dec(v_inlineAttr_x3f_711_);
lean_dec_ref(v_value_709_);
lean_dec(v_declName_706_);
v___x_725_ = lean_box(0);
return v___x_725_;
}
else
{
lean_object* v___x_726_; lean_object* v___x_727_; uint8_t v___x_728_; 
v___x_726_ = lean_unsigned_to_nat(1u);
v___x_727_ = lean_nat_sub(v___x_723_, v___x_726_);
v___x_728_ = lean_nat_dec_le(v___x_722_, v___x_727_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; 
lean_dec(v___x_727_);
lean_del_object(v___x_720_);
lean_dec_ref(v_params_717_);
lean_dec_ref(v_type_716_);
lean_dec(v_levelParams_715_);
lean_del_object(v___x_713_);
lean_dec(v_inlineAttr_x3f_711_);
lean_dec_ref(v_value_709_);
lean_dec(v_declName_706_);
v___x_729_ = lean_box(0);
return v___x_729_;
}
else
{
lean_object* v___x_731_; 
if (v_isShared_721_ == 0)
{
lean_ctor_set(v___x_720_, 0, v_declName_706_);
v___x_731_ = v___x_720_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_declName_706_);
lean_ctor_set(v_reuseFailAlloc_739_, 1, v_levelParams_715_);
lean_ctor_set(v_reuseFailAlloc_739_, 2, v_type_716_);
lean_ctor_set(v_reuseFailAlloc_739_, 3, v_params_717_);
lean_ctor_set_uint8(v_reuseFailAlloc_739_, sizeof(void*)*4, v_safe_718_);
v___x_731_ = v_reuseFailAlloc_739_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
lean_object* v_tmpDecl_733_; 
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 0, v___x_731_);
v_tmpDecl_733_ = v___x_713_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_738_; 
v_reuseFailAlloc_738_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_738_, 0, v___x_731_);
lean_ctor_set(v_reuseFailAlloc_738_, 1, v_value_709_);
lean_ctor_set(v_reuseFailAlloc_738_, 2, v_inlineAttr_x3f_711_);
lean_ctor_set_uint8(v_reuseFailAlloc_738_, sizeof(void*)*3, v_recursive_710_);
v_tmpDecl_733_ = v_reuseFailAlloc_738_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_734_ = lean_box(v_pu_704_);
v___x_735_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt___boxed), 3, 1);
lean_closure_set(v___x_735_, 0, v___x_734_);
v___x_736_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__0));
v___x_737_ = l_Array_binSearchAux___redArg(v___x_735_, v___x_736_, v_decls_705_, v_tmpDecl_733_, v___x_722_, v___x_727_);
return v___x_737_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___boxed(lean_object* v_pu_743_, lean_object* v_decls_744_, lean_object* v_declName_745_){
_start:
{
uint8_t v_pu_boxed_746_; lean_object* v_res_747_; 
v_pu_boxed_746_ = lean_unbox(v_pu_743_);
v_res_747_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f(v_pu_boxed_746_, v_decls_744_, v_declName_745_);
lean_dec_ref(v_decls_744_);
return v_res_747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__0(lean_object* v_x_751_, lean_object* v___y_752_){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_754_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__0___closed__1));
v___x_755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_755_, 0, v___x_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__0___boxed(lean_object* v_x_756_, lean_object* v___y_757_, lean_object* v___y_758_){
_start:
{
lean_object* v_res_759_; 
v_res_759_ = l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__0(v_x_756_, v___y_757_);
lean_dec_ref(v___y_757_);
lean_dec_ref(v_x_756_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__1(lean_object* v_s_760_, lean_object* v_x_761_){
_start:
{
lean_inc_ref(v_s_760_);
return v_s_760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__1___boxed(lean_object* v_s_762_, lean_object* v_x_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__1(v_s_762_, v_x_763_);
lean_dec_ref(v_x_763_);
lean_dec_ref(v_s_762_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__2(lean_object* v_x_769_, lean_object* v_x_770_){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__2___closed__1));
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__2___boxed(lean_object* v_x_772_, lean_object* v_x_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__2(v_x_772_, v_x_773_);
lean_dec_ref(v_x_773_);
lean_dec_ref(v_x_772_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__3(lean_object* v_x_775_){
_start:
{
lean_object* v___x_776_; 
v___x_776_ = lean_box(0);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__3___boxed(lean_object* v_x_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__3(v_x_777_);
lean_dec_ref(v_x_777_);
return v_res_778_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__4(void){
_start:
{
lean_object* v___x_783_; 
v___x_783_ = l_Lean_instInhabitedEnvExtension_default(lean_box(0));
return v___x_783_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__5(void){
_start:
{
lean_object* v___f_784_; lean_object* v___f_785_; lean_object* v___f_786_; lean_object* v___f_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v___f_784_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__3));
v___f_785_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__2));
v___f_786_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__1));
v___f_787_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__0));
v___x_788_ = lean_box(0);
v___x_789_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__4, &l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__4_once, _init_l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__4);
v___x_790_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_790_, 0, v___x_789_);
lean_ctor_set(v___x_790_, 1, v___x_788_);
lean_ctor_set(v___x_790_, 2, v___f_787_);
lean_ctor_set(v___x_790_, 3, v___f_786_);
lean_ctor_set(v___x_790_, 4, v___f_785_);
lean_ctor_set(v___x_790_, 5, v___f_784_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1(uint8_t v_pu_791_){
_start:
{
lean_object* v___x_792_; 
v___x_792_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__5, &l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__5_once, _init_l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__5);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___boxed(lean_object* v_pu_793_){
_start:
{
uint8_t v_pu_boxed_794_; lean_object* v_res_795_; 
v_pu_boxed_794_ = lean_unbox(v_pu_793_);
v_res_795_ = l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1(v_pu_boxed_794_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt(uint8_t v_pu_796_){
_start:
{
lean_object* v___x_797_; 
v___x_797_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__5, &l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__5_once, _init_l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___closed__5);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___boxed(lean_object* v_pu_798_){
_start:
{
uint8_t v_pu_boxed_799_; lean_object* v_res_800_; 
v_pu_boxed_799_ = lean_unbox(v_pu_798_);
v_res_800_ = l_Lean_Compiler_LCNF_instInhabitedDeclExt(v_pu_boxed_799_);
return v_res_800_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__12(void){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_827_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__10));
v___x_828_ = l_Lean_mkAtom(v___x_827_);
return v___x_828_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__13(void){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_829_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__12, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__12_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__12);
v___x_830_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__5));
v___x_831_ = lean_array_push(v___x_830_, v___x_829_);
return v___x_831_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__18(void){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__17));
v___x_841_ = l_Lean_mkAtom(v___x_840_);
return v___x_841_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__19(void){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_842_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__18, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__18_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__18);
v___x_843_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__5));
v___x_844_ = lean_array_push(v___x_843_, v___x_842_);
return v___x_844_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__20(void){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_845_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__19, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__19_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__19);
v___x_846_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16));
v___x_847_ = lean_box(2);
v___x_848_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_848_, 0, v___x_847_);
lean_ctor_set(v___x_848_, 1, v___x_846_);
lean_ctor_set(v___x_848_, 2, v___x_845_);
return v___x_848_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__21(void){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_849_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__20, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__20_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__20);
v___x_850_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__13, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__13_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__13);
v___x_851_ = lean_array_push(v___x_850_, v___x_849_);
return v___x_851_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__22(void){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_852_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__21, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__21_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__21);
v___x_853_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11));
v___x_854_ = lean_box(2);
v___x_855_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_855_, 0, v___x_854_);
lean_ctor_set(v___x_855_, 1, v___x_853_);
lean_ctor_set(v___x_855_, 2, v___x_852_);
return v___x_855_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__23(void){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_856_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__22, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__22_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__22);
v___x_857_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__5));
v___x_858_ = lean_array_push(v___x_857_, v___x_856_);
return v___x_858_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__24(void){
_start:
{
lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_859_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__23, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__23_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__23);
v___x_860_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__9));
v___x_861_ = lean_box(2);
v___x_862_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_862_, 0, v___x_861_);
lean_ctor_set(v___x_862_, 1, v___x_860_);
lean_ctor_set(v___x_862_, 2, v___x_859_);
return v___x_862_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__25(void){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_863_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__24, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__24_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__24);
v___x_864_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__5));
v___x_865_ = lean_array_push(v___x_864_, v___x_863_);
return v___x_865_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__26(void){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v___x_866_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__25, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__25_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__25);
v___x_867_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7));
v___x_868_ = lean_box(2);
v___x_869_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_869_, 0, v___x_868_);
lean_ctor_set(v___x_869_, 1, v___x_867_);
lean_ctor_set(v___x_869_, 2, v___x_866_);
return v___x_869_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__27(void){
_start:
{
lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_870_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__26, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__26_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__26);
v___x_871_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__5));
v___x_872_ = lean_array_push(v___x_871_, v___x_870_);
return v___x_872_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__28(void){
_start:
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_873_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__27, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__27_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__27);
v___x_874_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4));
v___x_875_ = lean_box(2);
v___x_876_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
lean_ctor_set(v___x_876_, 1, v___x_874_);
lean_ctor_set(v___x_876_, 2, v___x_873_);
return v___x_876_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1(void){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__28, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__28_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__28);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__0(lean_object* v_s_878_, lean_object* v_decl_879_){
_start:
{
lean_object* v_toSignature_880_; lean_object* v_name_881_; lean_object* v___x_882_; 
v_toSignature_880_ = lean_ctor_get(v_decl_879_, 0);
v_name_881_ = lean_ctor_get(v_toSignature_880_, 0);
lean_inc(v_name_881_);
v___x_882_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1___redArg(v_s_878_, v_name_881_, v_decl_879_);
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__1(lean_object* v_x_883_){
_start:
{
lean_object* v___x_884_; 
v___x_884_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__2___closed__0));
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__1___boxed(lean_object* v_x_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l_Lean_Compiler_LCNF_mkDeclExt___lam__1(v_x_885_);
lean_dec_ref(v_x_885_);
return v_res_886_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_mkDeclExt___lam__2(lean_object* v___y_887_, lean_object* v___y_888_){
_start:
{
lean_object* v_toSignature_889_; lean_object* v_toSignature_890_; lean_object* v_name_891_; lean_object* v_name_892_; uint8_t v___x_893_; 
v_toSignature_889_ = lean_ctor_get(v___y_887_, 0);
v_toSignature_890_ = lean_ctor_get(v___y_888_, 0);
v_name_891_ = lean_ctor_get(v_toSignature_889_, 0);
v_name_892_ = lean_ctor_get(v_toSignature_890_, 0);
v___x_893_ = l_Lean_Name_quickLt(v_name_891_, v_name_892_);
return v___x_893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__2___boxed(lean_object* v___y_894_, lean_object* v___y_895_){
_start:
{
uint8_t v_res_896_; lean_object* v_r_897_; 
v_res_896_ = l_Lean_Compiler_LCNF_mkDeclExt___lam__2(v___y_894_, v___y_895_);
lean_dec_ref(v___y_895_);
lean_dec_ref(v___y_894_);
v_r_897_ = lean_box(v_res_896_);
return v_r_897_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg(lean_object* v_env_903_, uint8_t v_phase_904_, lean_object* v_as_905_, size_t v_i_906_, size_t v_stop_907_, lean_object* v_b_908_){
_start:
{
lean_object* v___y_910_; uint8_t v___x_914_; 
v___x_914_ = lean_usize_dec_eq(v_i_906_, v_stop_907_);
if (v___x_914_ == 0)
{
lean_object* v___x_915_; lean_object* v_toSignature_916_; uint8_t v_recursive_917_; lean_object* v_inlineAttr_x3f_918_; lean_object* v_name_919_; uint8_t v___x_920_; 
v___x_915_ = lean_array_uget(v_as_905_, v_i_906_);
v_toSignature_916_ = lean_ctor_get(v___x_915_, 0);
v_recursive_917_ = lean_ctor_get_uint8(v___x_915_, sizeof(void*)*3);
v_inlineAttr_x3f_918_ = lean_ctor_get(v___x_915_, 2);
v_name_919_ = lean_ctor_get(v_toSignature_916_, 0);
lean_inc_ref(v_env_903_);
v___x_920_ = l_Lean_Compiler_LCNF_isDeclPublic(v_env_903_, v_name_919_);
if (v___x_920_ == 0)
{
lean_dec(v___x_915_);
v___y_910_ = v_b_908_;
goto v___jp_909_;
}
else
{
uint8_t v___x_921_; 
lean_inc_ref(v_env_903_);
v___x_921_ = l_Lean_Compiler_LCNF_isDeclTransparent(v_env_903_, v_phase_904_, v_name_919_);
if (v___x_921_ == 0)
{
lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_930_; 
lean_inc(v_inlineAttr_x3f_918_);
lean_inc_ref(v_toSignature_916_);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_915_);
if (v_isSharedCheck_930_ == 0)
{
lean_object* v_unused_931_; lean_object* v_unused_932_; lean_object* v_unused_933_; 
v_unused_931_ = lean_ctor_get(v___x_915_, 2);
lean_dec(v_unused_931_);
v_unused_932_ = lean_ctor_get(v___x_915_, 1);
lean_dec(v_unused_932_);
v_unused_933_ = lean_ctor_get(v___x_915_, 0);
lean_dec(v_unused_933_);
v___x_923_ = v___x_915_;
v_isShared_924_ = v_isSharedCheck_930_;
goto v_resetjp_922_;
}
else
{
lean_dec(v___x_915_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_930_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_925_; lean_object* v___x_927_; 
v___x_925_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___closed__1));
if (v_isShared_924_ == 0)
{
lean_ctor_set(v___x_923_, 1, v___x_925_);
v___x_927_ = v___x_923_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_toSignature_916_);
lean_ctor_set(v_reuseFailAlloc_929_, 1, v___x_925_);
lean_ctor_set(v_reuseFailAlloc_929_, 2, v_inlineAttr_x3f_918_);
lean_ctor_set_uint8(v_reuseFailAlloc_929_, sizeof(void*)*3, v_recursive_917_);
v___x_927_ = v_reuseFailAlloc_929_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
lean_object* v___x_928_; 
v___x_928_ = lean_array_push(v_b_908_, v___x_927_);
v___y_910_ = v___x_928_;
goto v___jp_909_;
}
}
}
else
{
lean_object* v___x_934_; 
v___x_934_ = lean_array_push(v_b_908_, v___x_915_);
v___y_910_ = v___x_934_;
goto v___jp_909_;
}
}
}
else
{
lean_dec_ref(v_env_903_);
return v_b_908_;
}
v___jp_909_:
{
size_t v___x_911_; size_t v___x_912_; 
v___x_911_ = ((size_t)1ULL);
v___x_912_ = lean_usize_add(v_i_906_, v___x_911_);
v_i_906_ = v___x_912_;
v_b_908_ = v___y_910_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___boxed(lean_object* v_env_935_, lean_object* v_phase_936_, lean_object* v_as_937_, lean_object* v_i_938_, lean_object* v_stop_939_, lean_object* v_b_940_){
_start:
{
uint8_t v_phase_boxed_941_; size_t v_i_boxed_942_; size_t v_stop_boxed_943_; lean_object* v_res_944_; 
v_phase_boxed_941_ = lean_unbox(v_phase_936_);
v_i_boxed_942_ = lean_unbox_usize(v_i_938_);
lean_dec(v_i_938_);
v_stop_boxed_943_ = lean_unbox_usize(v_stop_939_);
lean_dec(v_stop_939_);
v_res_944_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg(v_env_935_, v_phase_boxed_941_, v_as_937_, v_i_boxed_942_, v_stop_boxed_943_, v_b_940_);
lean_dec_ref(v_as_937_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0(lean_object* v_env_945_, uint8_t v_phase_946_, uint8_t v___x_947_, lean_object* v_as_948_, lean_object* v_start_949_, lean_object* v_stop_950_){
_start:
{
lean_object* v___x_951_; uint8_t v___x_952_; 
v___x_951_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__2___closed__0));
v___x_952_ = lean_nat_dec_lt(v_start_949_, v_stop_950_);
if (v___x_952_ == 0)
{
lean_dec_ref(v_env_945_);
return v___x_951_;
}
else
{
lean_object* v___x_953_; uint8_t v___x_954_; 
v___x_953_ = lean_array_get_size(v_as_948_);
v___x_954_ = lean_nat_dec_le(v_stop_950_, v___x_953_);
if (v___x_954_ == 0)
{
uint8_t v___x_955_; 
v___x_955_ = lean_nat_dec_lt(v_start_949_, v___x_953_);
if (v___x_955_ == 0)
{
lean_dec_ref(v_env_945_);
return v___x_951_;
}
else
{
size_t v___x_956_; size_t v___x_957_; lean_object* v___x_958_; 
v___x_956_ = lean_usize_of_nat(v_start_949_);
v___x_957_ = lean_usize_of_nat(v___x_953_);
v___x_958_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg(v_env_945_, v_phase_946_, v_as_948_, v___x_956_, v___x_957_, v___x_951_);
return v___x_958_;
}
}
else
{
size_t v___x_959_; size_t v___x_960_; lean_object* v___x_961_; 
v___x_959_ = lean_usize_of_nat(v_start_949_);
v___x_960_ = lean_usize_of_nat(v_stop_950_);
v___x_961_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg(v_env_945_, v_phase_946_, v_as_948_, v___x_959_, v___x_960_, v___x_951_);
return v___x_961_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0___boxed(lean_object* v_env_962_, lean_object* v_phase_963_, lean_object* v___x_964_, lean_object* v_as_965_, lean_object* v_start_966_, lean_object* v_stop_967_){
_start:
{
uint8_t v_phase_boxed_968_; uint8_t v___x_1053__boxed_969_; lean_object* v_res_970_; 
v_phase_boxed_968_ = lean_unbox(v_phase_963_);
v___x_1053__boxed_969_ = lean_unbox(v___x_964_);
v_res_970_ = l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0(v_env_962_, v_phase_boxed_968_, v___x_1053__boxed_969_, v_as_965_, v_start_966_, v_stop_967_);
lean_dec(v_stop_967_);
lean_dec(v_start_966_);
lean_dec_ref(v_as_965_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__3(uint8_t v_phase_971_, lean_object* v___f_972_, lean_object* v_env_973_, lean_object* v_s_974_){
_start:
{
uint8_t v___x_975_; lean_object* v_all_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v_exported_979_; lean_object* v___x_980_; 
v___x_975_ = l_Lean_Compiler_LCNF_Phase_toPurity(v_phase_971_);
v_all_976_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg(v_s_974_, v___f_972_);
v___x_977_ = lean_unsigned_to_nat(0u);
v___x_978_ = lean_array_get_size(v_all_976_);
v_exported_979_ = l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0(v_env_973_, v_phase_971_, v___x_975_, v_all_976_, v___x_977_, v___x_978_);
lean_inc_ref(v_exported_979_);
v___x_980_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_980_, 0, v_exported_979_);
lean_ctor_set(v___x_980_, 1, v_exported_979_);
lean_ctor_set(v___x_980_, 2, v_all_976_);
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__3___boxed(lean_object* v_phase_981_, lean_object* v___f_982_, lean_object* v_env_983_, lean_object* v_s_984_){
_start:
{
uint8_t v_phase_boxed_985_; lean_object* v_res_986_; 
v_phase_boxed_985_ = lean_unbox(v_phase_981_);
v_res_986_ = l_Lean_Compiler_LCNF_mkDeclExt___lam__3(v_phase_boxed_985_, v___f_982_, v_env_983_, v_s_984_);
lean_dec_ref(v_s_984_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__4(lean_object* v___x_987_){
_start:
{
lean_object* v___x_989_; 
v___x_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_989_, 0, v___x_987_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__4___boxed(lean_object* v___x_990_, lean_object* v___y_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_Lean_Compiler_LCNF_mkDeclExt___lam__4(v___x_990_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__5(lean_object* v___x_993_, lean_object* v_x_994_, lean_object* v___y_995_){
_start:
{
lean_object* v___x_997_; 
v___x_997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_997_, 0, v___x_993_);
return v___x_997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__5___boxed(lean_object* v___x_998_, lean_object* v_x_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l_Lean_Compiler_LCNF_mkDeclExt___lam__5(v___x_998_, v_x_999_, v___y_1000_);
lean_dec_ref(v___y_1000_);
lean_dec_ref(v_x_999_);
return v_res_1002_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__3(void){
_start:
{
lean_object* v___x_1006_; 
v___x_1006_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1006_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__4(void){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___closed__3, &l_Lean_Compiler_LCNF_mkDeclExt___closed__3_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__3);
v___x_1008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1008_, 0, v___x_1007_);
return v___x_1008_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__5(void){
_start:
{
lean_object* v___x_1009_; lean_object* v___f_1010_; 
v___x_1009_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___closed__4, &l_Lean_Compiler_LCNF_mkDeclExt___closed__4_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__4);
v___f_1010_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_mkDeclExt___lam__4___boxed), 2, 1);
lean_closure_set(v___f_1010_, 0, v___x_1009_);
return v___f_1010_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__6(void){
_start:
{
lean_object* v___x_1011_; lean_object* v___f_1012_; 
v___x_1011_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___closed__4, &l_Lean_Compiler_LCNF_mkDeclExt___closed__4_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__4);
v___f_1012_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_mkDeclExt___lam__5___boxed), 4, 1);
lean_closure_set(v___f_1012_, 0, v___x_1011_);
return v___f_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt(uint8_t v_phase_1013_, lean_object* v_name_1014_){
_start:
{
lean_object* v___f_1016_; lean_object* v___f_1017_; lean_object* v___f_1018_; lean_object* v___x_1019_; lean_object* v___f_1020_; lean_object* v___f_1021_; lean_object* v___f_1022_; uint8_t v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___f_1016_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___closed__0));
v___f_1017_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___closed__1));
v___f_1018_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___closed__2));
v___x_1019_ = lean_box(v_phase_1013_);
v___f_1020_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_mkDeclExt___lam__3___boxed), 4, 2);
lean_closure_set(v___f_1020_, 0, v___x_1019_);
lean_closure_set(v___f_1020_, 1, v___f_1018_);
v___f_1021_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___closed__5, &l_Lean_Compiler_LCNF_mkDeclExt___closed__5_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__5);
v___f_1022_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___closed__6, &l_Lean_Compiler_LCNF_mkDeclExt___closed__6_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__6);
v___x_1023_ = l_Lean_Compiler_LCNF_Phase_toPurity(v_phase_1013_);
v___x_1024_ = lean_box(v___x_1023_);
v___x_1025_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___boxed), 3, 2);
lean_closure_set(v___x_1025_, 0, v___x_1024_);
lean_closure_set(v___x_1025_, 1, lean_box(0));
v___x_1026_ = lean_box(0);
v___x_1027_ = lean_box(v_phase_1013_);
v___x_1028_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___boxed), 6, 2);
lean_closure_set(v___x_1028_, 0, lean_box(0));
lean_closure_set(v___x_1028_, 1, v___x_1027_);
v___x_1029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1028_);
v___x_1030_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1030_, 0, v_name_1014_);
lean_ctor_set(v___x_1030_, 1, v___f_1021_);
lean_ctor_set(v___x_1030_, 2, v___f_1022_);
lean_ctor_set(v___x_1030_, 3, v___f_1016_);
lean_ctor_set(v___x_1030_, 4, v___f_1020_);
lean_ctor_set(v___x_1030_, 5, v___x_1025_);
lean_ctor_set(v___x_1030_, 6, v___x_1026_);
lean_ctor_set(v___x_1030_, 7, v___x_1029_);
v___x_1031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
lean_ctor_set(v___x_1031_, 1, v___f_1017_);
v___x_1032_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_1031_);
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___boxed(lean_object* v_phase_1033_, lean_object* v_name_1034_, lean_object* v_a_1035_){
_start:
{
uint8_t v_phase_boxed_1036_; lean_object* v_res_1037_; 
v_phase_boxed_1036_ = lean_unbox(v_phase_1033_);
v_res_1037_ = l_Lean_Compiler_LCNF_mkDeclExt(v_phase_boxed_1036_, v_name_1034_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0(lean_object* v_env_1038_, uint8_t v_phase_1039_, uint8_t v___x_1040_, lean_object* v_as_1041_, size_t v_i_1042_, size_t v_stop_1043_, lean_object* v_b_1044_){
_start:
{
lean_object* v___x_1045_; 
v___x_1045_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg(v_env_1038_, v_phase_1039_, v_as_1041_, v_i_1042_, v_stop_1043_, v_b_1044_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___boxed(lean_object* v_env_1046_, lean_object* v_phase_1047_, lean_object* v___x_1048_, lean_object* v_as_1049_, lean_object* v_i_1050_, lean_object* v_stop_1051_, lean_object* v_b_1052_){
_start:
{
uint8_t v_phase_boxed_1053_; uint8_t v___x_1179__boxed_1054_; size_t v_i_boxed_1055_; size_t v_stop_boxed_1056_; lean_object* v_res_1057_; 
v_phase_boxed_1053_ = lean_unbox(v_phase_1047_);
v___x_1179__boxed_1054_ = lean_unbox(v___x_1048_);
v_i_boxed_1055_ = lean_unbox_usize(v_i_1050_);
lean_dec(v_i_1050_);
v_stop_boxed_1056_ = lean_unbox_usize(v_stop_1051_);
lean_dec(v_stop_1051_);
v_res_1057_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0(v_env_1046_, v_phase_boxed_1053_, v___x_1179__boxed_1054_, v_as_1049_, v_i_boxed_1055_, v_stop_boxed_1056_, v_b_1052_);
lean_dec_ref(v_as_1049_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2_(){
_start:
{
uint8_t v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1067_ = 0;
v___x_1068_ = ((lean_object*)(l_Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2_));
v___x_1069_ = l_Lean_Compiler_LCNF_mkDeclExt(v___x_1067_, v___x_1068_);
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2____boxed(lean_object* v_a_1070_){
_start:
{
lean_object* v_res_1071_; 
v_res_1071_ = l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2_();
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2_(){
_start:
{
uint8_t v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1079_ = 1;
v___x_1080_ = ((lean_object*)(l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2_));
v___x_1081_ = l_Lean_Compiler_LCNF_mkDeclExt(v___x_1079_, v___x_1080_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2____boxed(lean_object* v_a_1082_){
_start:
{
lean_object* v_res_1083_; 
v_res_1083_ = l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2_();
return v_res_1083_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___f_1090_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___closed__5, &l_Lean_Compiler_LCNF_mkDeclExt___closed__5_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__5);
v___x_1091_ = ((lean_object*)(l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2_));
v___x_1092_ = lean_box(0);
v___x_1093_ = l_Lean_registerEnvExtension___redArg(v___f_1090_, v___x_1091_, v___x_1092_);
return v___x_1093_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2____boxed(lean_object* v_a_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2_();
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__0(lean_object* v_x_1096_, lean_object* v___y_1097_){
_start:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1099_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDeclExt___aux__1___lam__0___closed__1));
v___x_1100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1099_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__0___boxed(lean_object* v_x_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_){
_start:
{
lean_object* v_res_1104_; 
v_res_1104_ = l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__0(v_x_1101_, v___y_1102_);
lean_dec_ref(v___y_1102_);
lean_dec_ref(v_x_1101_);
return v_res_1104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__1(lean_object* v_s_1105_, lean_object* v_x_1106_){
_start:
{
lean_inc_ref(v_s_1105_);
return v_s_1105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__1___boxed(lean_object* v_s_1107_, lean_object* v_x_1108_){
_start:
{
lean_object* v_res_1109_; 
v_res_1109_ = l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__1(v_s_1107_, v_x_1108_);
lean_dec_ref(v_x_1108_);
lean_dec_ref(v_s_1107_);
return v_res_1109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__2(lean_object* v_x_1114_, lean_object* v_x_1115_){
_start:
{
lean_object* v___x_1116_; 
v___x_1116_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__2___closed__1));
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__2___boxed(lean_object* v_x_1117_, lean_object* v_x_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__2(v_x_1117_, v_x_1118_);
lean_dec_ref(v_x_1118_);
lean_dec_ref(v_x_1117_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__3(lean_object* v_x_1120_){
_start:
{
lean_object* v___x_1121_; 
v___x_1121_ = lean_box(0);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__3___boxed(lean_object* v_x_1122_){
_start:
{
lean_object* v_res_1123_; 
v_res_1123_ = l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__3(v_x_1122_);
lean_dec_ref(v_x_1122_);
return v_res_1123_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__4(void){
_start:
{
lean_object* v___x_1128_; 
v___x_1128_ = l_Lean_instInhabitedEnvExtension_default(lean_box(0));
return v___x_1128_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__5(void){
_start:
{
lean_object* v___f_1129_; lean_object* v___f_1130_; lean_object* v___f_1131_; lean_object* v___f_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___f_1129_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__3));
v___f_1130_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__2));
v___f_1131_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__1));
v___f_1132_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__0));
v___x_1133_ = lean_box(0);
v___x_1134_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__4, &l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__4_once, _init_l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__4);
v___x_1135_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1134_);
lean_ctor_set(v___x_1135_, 1, v___x_1133_);
lean_ctor_set(v___x_1135_, 2, v___f_1132_);
lean_ctor_set(v___x_1135_, 3, v___f_1131_);
lean_ctor_set(v___x_1135_, 4, v___f_1130_);
lean_ctor_set(v___x_1135_, 5, v___f_1129_);
return v___x_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1(uint8_t v_pu_1136_){
_start:
{
lean_object* v___x_1137_; 
v___x_1137_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__5, &l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__5_once, _init_l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__5);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___boxed(lean_object* v_pu_1138_){
_start:
{
uint8_t v_pu_boxed_1139_; lean_object* v_res_1140_; 
v_pu_boxed_1139_ = lean_unbox(v_pu_1138_);
v_res_1140_ = l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1(v_pu_boxed_1139_);
return v_res_1140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt(uint8_t v_pu_1141_){
_start:
{
lean_object* v___x_1142_; 
v___x_1142_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__5, &l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__5_once, _init_l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___closed__5);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___boxed(lean_object* v_pu_1143_){
_start:
{
uint8_t v_pu_boxed_1144_; lean_object* v_res_1145_; 
v_pu_boxed_1144_ = lean_unbox(v_pu_1143_);
v_res_1145_ = l_Lean_Compiler_LCNF_instInhabitedSigExt(v_pu_boxed_1144_);
return v_res_1145_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt___redArg(lean_object* v_a_1146_, lean_object* v_b_1147_){
_start:
{
lean_object* v_name_1148_; lean_object* v_name_1149_; uint8_t v___x_1150_; 
v_name_1148_ = lean_ctor_get(v_a_1146_, 0);
v_name_1149_ = lean_ctor_get(v_b_1147_, 0);
v___x_1150_ = l_Lean_Name_quickLt(v_name_1148_, v_name_1149_);
return v___x_1150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt___redArg___boxed(lean_object* v_a_1151_, lean_object* v_b_1152_){
_start:
{
uint8_t v_res_1153_; lean_object* v_r_1154_; 
v_res_1153_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt___redArg(v_a_1151_, v_b_1152_);
lean_dec_ref(v_b_1152_);
lean_dec_ref(v_a_1151_);
v_r_1154_ = lean_box(v_res_1153_);
return v_r_1154_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt(uint8_t v_pu_1155_, lean_object* v_a_1156_, lean_object* v_b_1157_){
_start:
{
lean_object* v_name_1158_; lean_object* v_name_1159_; uint8_t v___x_1160_; 
v_name_1158_ = lean_ctor_get(v_a_1156_, 0);
v_name_1159_ = lean_ctor_get(v_b_1157_, 0);
v___x_1160_ = l_Lean_Name_quickLt(v_name_1158_, v_name_1159_);
return v___x_1160_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt___boxed(lean_object* v_pu_1161_, lean_object* v_a_1162_, lean_object* v_b_1163_){
_start:
{
uint8_t v_pu_boxed_1164_; uint8_t v_res_1165_; lean_object* v_r_1166_; 
v_pu_boxed_1164_ = lean_unbox(v_pu_1161_);
v_res_1165_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt(v_pu_boxed_1164_, v_a_1162_, v_b_1163_);
lean_dec_ref(v_b_1163_);
lean_dec_ref(v_a_1162_);
v_r_1166_ = lean_box(v_res_1165_);
return v_r_1166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f(uint8_t v_pu_1168_, lean_object* v_sigs_1169_, lean_object* v_declName_1170_){
_start:
{
lean_object* v_tmpSig_1171_; lean_object* v_levelParams_1172_; lean_object* v_type_1173_; lean_object* v_params_1174_; uint8_t v_safe_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1194_; 
v_tmpSig_1171_ = l_Lean_Compiler_LCNF_instInhabitedSignature_default(v_pu_1168_);
v_levelParams_1172_ = lean_ctor_get(v_tmpSig_1171_, 1);
v_type_1173_ = lean_ctor_get(v_tmpSig_1171_, 2);
v_params_1174_ = lean_ctor_get(v_tmpSig_1171_, 3);
v_safe_1175_ = lean_ctor_get_uint8(v_tmpSig_1171_, sizeof(void*)*4);
v_isSharedCheck_1194_ = !lean_is_exclusive(v_tmpSig_1171_);
if (v_isSharedCheck_1194_ == 0)
{
lean_object* v_unused_1195_; 
v_unused_1195_ = lean_ctor_get(v_tmpSig_1171_, 0);
lean_dec(v_unused_1195_);
v___x_1177_ = v_tmpSig_1171_;
v_isShared_1178_ = v_isSharedCheck_1194_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_params_1174_);
lean_inc(v_type_1173_);
lean_inc(v_levelParams_1172_);
lean_dec(v_tmpSig_1171_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1194_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; uint8_t v___x_1181_; 
v___x_1179_ = lean_unsigned_to_nat(0u);
v___x_1180_ = lean_array_get_size(v_sigs_1169_);
v___x_1181_ = lean_nat_dec_lt(v___x_1179_, v___x_1180_);
if (v___x_1181_ == 0)
{
lean_object* v___x_1182_; 
lean_del_object(v___x_1177_);
lean_dec_ref(v_params_1174_);
lean_dec_ref(v_type_1173_);
lean_dec(v_levelParams_1172_);
lean_dec(v_declName_1170_);
v___x_1182_ = lean_box(0);
return v___x_1182_;
}
else
{
lean_object* v___x_1183_; lean_object* v___x_1184_; uint8_t v___x_1185_; 
v___x_1183_ = lean_unsigned_to_nat(1u);
v___x_1184_ = lean_nat_sub(v___x_1180_, v___x_1183_);
v___x_1185_ = lean_nat_dec_le(v___x_1179_, v___x_1184_);
if (v___x_1185_ == 0)
{
lean_object* v___x_1186_; 
lean_dec(v___x_1184_);
lean_del_object(v___x_1177_);
lean_dec_ref(v_params_1174_);
lean_dec_ref(v_type_1173_);
lean_dec(v_levelParams_1172_);
lean_dec(v_declName_1170_);
v___x_1186_ = lean_box(0);
return v___x_1186_;
}
else
{
lean_object* v_tmpSig_1188_; 
if (v_isShared_1178_ == 0)
{
lean_ctor_set(v___x_1177_, 0, v_declName_1170_);
v_tmpSig_1188_ = v___x_1177_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v_declName_1170_);
lean_ctor_set(v_reuseFailAlloc_1193_, 1, v_levelParams_1172_);
lean_ctor_set(v_reuseFailAlloc_1193_, 2, v_type_1173_);
lean_ctor_set(v_reuseFailAlloc_1193_, 3, v_params_1174_);
lean_ctor_set_uint8(v_reuseFailAlloc_1193_, sizeof(void*)*4, v_safe_1175_);
v_tmpSig_1188_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1189_ = lean_box(v_pu_1168_);
v___x_1190_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt___boxed), 3, 1);
lean_closure_set(v___x_1190_, 0, v___x_1189_);
v___x_1191_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__0));
v___x_1192_ = l_Array_binSearchAux___redArg(v___x_1190_, v___x_1191_, v_sigs_1169_, v_tmpSig_1188_, v___x_1179_, v___x_1184_);
return v___x_1192_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___boxed(lean_object* v_pu_1196_, lean_object* v_sigs_1197_, lean_object* v_declName_1198_){
_start:
{
uint8_t v_pu_boxed_1199_; lean_object* v_res_1200_; 
v_pu_boxed_1199_ = lean_unbox(v_pu_1196_);
v_res_1200_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f(v_pu_boxed_1199_, v_sigs_1197_, v_declName_1198_);
lean_dec_ref(v_sigs_1197_);
return v_res_1200_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkSigDeclExt___auto__1(void){
_start:
{
lean_object* v___x_1201_; 
v___x_1201_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__28, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__28_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__28);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__0(lean_object* v_s_1202_, lean_object* v_sig_1203_){
_start:
{
lean_object* v_name_1204_; lean_object* v___x_1205_; 
v_name_1204_ = lean_ctor_get(v_sig_1203_, 0);
lean_inc(v_name_1204_);
v___x_1205_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1___redArg(v_s_1202_, v_name_1204_, v_sig_1203_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__1(lean_object* v_x_1206_){
_start:
{
lean_object* v___x_1207_; 
v___x_1207_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__2___closed__0));
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__1___boxed(lean_object* v_x_1208_){
_start:
{
lean_object* v_res_1209_; 
v_res_1209_ = l_Lean_Compiler_LCNF_mkSigDeclExt___lam__1(v_x_1208_);
lean_dec_ref(v_x_1208_);
return v_res_1209_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_mkSigDeclExt___lam__2(lean_object* v___y_1210_, lean_object* v___y_1211_){
_start:
{
lean_object* v_name_1212_; lean_object* v_name_1213_; uint8_t v___x_1214_; 
v_name_1212_ = lean_ctor_get(v___y_1210_, 0);
v_name_1213_ = lean_ctor_get(v___y_1211_, 0);
v___x_1214_ = l_Lean_Name_quickLt(v_name_1212_, v_name_1213_);
return v___x_1214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__2___boxed(lean_object* v___y_1215_, lean_object* v___y_1216_){
_start:
{
uint8_t v_res_1217_; lean_object* v_r_1218_; 
v_res_1217_ = l_Lean_Compiler_LCNF_mkSigDeclExt___lam__2(v___y_1215_, v___y_1216_);
lean_dec_ref(v___y_1216_);
lean_dec_ref(v___y_1215_);
v_r_1218_ = lean_box(v_res_1217_);
return v_r_1218_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0_spec__0(lean_object* v_env_1219_, lean_object* v_as_1220_, size_t v_i_1221_, size_t v_stop_1222_, lean_object* v_b_1223_){
_start:
{
lean_object* v___y_1225_; uint8_t v___x_1229_; 
v___x_1229_ = lean_usize_dec_eq(v_i_1221_, v_stop_1222_);
if (v___x_1229_ == 0)
{
lean_object* v___x_1230_; lean_object* v_name_1231_; uint8_t v___x_1232_; 
v___x_1230_ = lean_array_uget_borrowed(v_as_1220_, v_i_1221_);
v_name_1231_ = lean_ctor_get(v___x_1230_, 0);
lean_inc_ref(v_env_1219_);
v___x_1232_ = l_Lean_Compiler_LCNF_isDeclPublic(v_env_1219_, v_name_1231_);
if (v___x_1232_ == 0)
{
v___y_1225_ = v_b_1223_;
goto v___jp_1224_;
}
else
{
lean_object* v___x_1233_; 
lean_inc(v___x_1230_);
v___x_1233_ = lean_array_push(v_b_1223_, v___x_1230_);
v___y_1225_ = v___x_1233_;
goto v___jp_1224_;
}
}
else
{
lean_dec_ref(v_env_1219_);
return v_b_1223_;
}
v___jp_1224_:
{
size_t v___x_1226_; size_t v___x_1227_; 
v___x_1226_ = ((size_t)1ULL);
v___x_1227_ = lean_usize_add(v_i_1221_, v___x_1226_);
v_i_1221_ = v___x_1227_;
v_b_1223_ = v___y_1225_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0_spec__0___boxed(lean_object* v_env_1234_, lean_object* v_as_1235_, lean_object* v_i_1236_, lean_object* v_stop_1237_, lean_object* v_b_1238_){
_start:
{
size_t v_i_boxed_1239_; size_t v_stop_boxed_1240_; lean_object* v_res_1241_; 
v_i_boxed_1239_ = lean_unbox_usize(v_i_1236_);
lean_dec(v_i_1236_);
v_stop_boxed_1240_ = lean_unbox_usize(v_stop_1237_);
lean_dec(v_stop_1237_);
v_res_1241_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0_spec__0(v_env_1234_, v_as_1235_, v_i_boxed_1239_, v_stop_boxed_1240_, v_b_1238_);
lean_dec_ref(v_as_1235_);
return v_res_1241_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0(lean_object* v_env_1242_, lean_object* v_as_1243_, lean_object* v_start_1244_, lean_object* v_stop_1245_){
_start:
{
lean_object* v___x_1246_; uint8_t v___x_1247_; 
v___x_1246_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedSigExt___aux__1___lam__2___closed__0));
v___x_1247_ = lean_nat_dec_lt(v_start_1244_, v_stop_1245_);
if (v___x_1247_ == 0)
{
lean_dec_ref(v_env_1242_);
return v___x_1246_;
}
else
{
lean_object* v___x_1248_; uint8_t v___x_1249_; 
v___x_1248_ = lean_array_get_size(v_as_1243_);
v___x_1249_ = lean_nat_dec_le(v_stop_1245_, v___x_1248_);
if (v___x_1249_ == 0)
{
uint8_t v___x_1250_; 
v___x_1250_ = lean_nat_dec_lt(v_start_1244_, v___x_1248_);
if (v___x_1250_ == 0)
{
lean_dec_ref(v_env_1242_);
return v___x_1246_;
}
else
{
size_t v___x_1251_; size_t v___x_1252_; lean_object* v___x_1253_; 
v___x_1251_ = lean_usize_of_nat(v_start_1244_);
v___x_1252_ = lean_usize_of_nat(v___x_1248_);
v___x_1253_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0_spec__0(v_env_1242_, v_as_1243_, v___x_1251_, v___x_1252_, v___x_1246_);
return v___x_1253_;
}
}
else
{
size_t v___x_1254_; size_t v___x_1255_; lean_object* v___x_1256_; 
v___x_1254_ = lean_usize_of_nat(v_start_1244_);
v___x_1255_ = lean_usize_of_nat(v_stop_1245_);
v___x_1256_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0_spec__0(v_env_1242_, v_as_1243_, v___x_1254_, v___x_1255_, v___x_1246_);
return v___x_1256_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0___boxed(lean_object* v_env_1257_, lean_object* v_as_1258_, lean_object* v_start_1259_, lean_object* v_stop_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0(v_env_1257_, v_as_1258_, v_start_1259_, v_stop_1260_);
lean_dec(v_stop_1260_);
lean_dec(v_start_1259_);
lean_dec_ref(v_as_1258_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__3(lean_object* v___f_1262_, lean_object* v_env_1263_, lean_object* v_s_1264_){
_start:
{
lean_object* v_all_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v_exported_1268_; lean_object* v___x_1269_; 
v_all_1265_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg(v_s_1264_, v___f_1262_);
v___x_1266_ = lean_unsigned_to_nat(0u);
v___x_1267_ = lean_array_get_size(v_all_1265_);
v_exported_1268_ = l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0(v_env_1263_, v_all_1265_, v___x_1266_, v___x_1267_);
lean_inc_ref(v_exported_1268_);
v___x_1269_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1269_, 0, v_exported_1268_);
lean_ctor_set(v___x_1269_, 1, v_exported_1268_);
lean_ctor_set(v___x_1269_, 2, v_all_1265_);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__3___boxed(lean_object* v___f_1270_, lean_object* v_env_1271_, lean_object* v_s_1272_){
_start:
{
lean_object* v_res_1273_; 
v_res_1273_ = l_Lean_Compiler_LCNF_mkSigDeclExt___lam__3(v___f_1270_, v_env_1271_, v_s_1272_);
lean_dec_ref(v_s_1272_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__4(lean_object* v___x_1274_){
_start:
{
lean_object* v___x_1276_; 
v___x_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1274_);
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__4___boxed(lean_object* v___x_1277_, lean_object* v___y_1278_){
_start:
{
lean_object* v_res_1279_; 
v_res_1279_ = l_Lean_Compiler_LCNF_mkSigDeclExt___lam__4(v___x_1277_);
return v_res_1279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__5(lean_object* v___x_1280_, lean_object* v_x_1281_, lean_object* v___y_1282_){
_start:
{
lean_object* v___x_1284_; 
v___x_1284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1284_, 0, v___x_1280_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__5___boxed(lean_object* v___x_1285_, lean_object* v_x_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Lean_Compiler_LCNF_mkSigDeclExt___lam__5(v___x_1285_, v_x_1286_, v___y_1287_);
lean_dec_ref(v___y_1287_);
lean_dec_ref(v_x_1286_);
return v_res_1289_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkSigDeclExt___closed__4(void){
_start:
{
lean_object* v___x_1295_; 
v___x_1295_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1295_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkSigDeclExt___closed__5(void){
_start:
{
lean_object* v___x_1296_; lean_object* v___x_1297_; 
v___x_1296_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__4, &l_Lean_Compiler_LCNF_mkSigDeclExt___closed__4_once, _init_l_Lean_Compiler_LCNF_mkSigDeclExt___closed__4);
v___x_1297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1296_);
return v___x_1297_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkSigDeclExt___closed__6(void){
_start:
{
lean_object* v___x_1298_; lean_object* v___f_1299_; 
v___x_1298_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__5, &l_Lean_Compiler_LCNF_mkSigDeclExt___closed__5_once, _init_l_Lean_Compiler_LCNF_mkSigDeclExt___closed__5);
v___f_1299_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_mkSigDeclExt___lam__4___boxed), 2, 1);
lean_closure_set(v___f_1299_, 0, v___x_1298_);
return v___f_1299_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkSigDeclExt___closed__7(void){
_start:
{
lean_object* v___x_1300_; lean_object* v___f_1301_; 
v___x_1300_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__5, &l_Lean_Compiler_LCNF_mkSigDeclExt___closed__5_once, _init_l_Lean_Compiler_LCNF_mkSigDeclExt___closed__5);
v___f_1301_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_mkSigDeclExt___lam__5___boxed), 4, 1);
lean_closure_set(v___f_1301_, 0, v___x_1300_);
return v___f_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt(uint8_t v_phase_1302_, lean_object* v_name_1303_){
_start:
{
lean_object* v___f_1305_; lean_object* v___f_1306_; lean_object* v___f_1307_; lean_object* v___f_1308_; lean_object* v___f_1309_; uint8_t v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___f_1305_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkSigDeclExt___closed__0));
v___f_1306_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkSigDeclExt___closed__1));
v___f_1307_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkSigDeclExt___closed__3));
v___f_1308_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__6, &l_Lean_Compiler_LCNF_mkSigDeclExt___closed__6_once, _init_l_Lean_Compiler_LCNF_mkSigDeclExt___closed__6);
v___f_1309_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__7, &l_Lean_Compiler_LCNF_mkSigDeclExt___closed__7_once, _init_l_Lean_Compiler_LCNF_mkSigDeclExt___closed__7);
v___x_1310_ = l_Lean_Compiler_LCNF_Phase_toPurity(v_phase_1302_);
v___x_1311_ = lean_box(v___x_1310_);
v___x_1312_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___boxed), 3, 2);
lean_closure_set(v___x_1312_, 0, v___x_1311_);
lean_closure_set(v___x_1312_, 1, lean_box(0));
v___x_1313_ = lean_box(0);
v___x_1314_ = lean_box(v_phase_1302_);
v___x_1315_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___boxed), 6, 2);
lean_closure_set(v___x_1315_, 0, lean_box(0));
lean_closure_set(v___x_1315_, 1, v___x_1314_);
v___x_1316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1316_, 0, v___x_1315_);
v___x_1317_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1317_, 0, v_name_1303_);
lean_ctor_set(v___x_1317_, 1, v___f_1308_);
lean_ctor_set(v___x_1317_, 2, v___f_1309_);
lean_ctor_set(v___x_1317_, 3, v___f_1305_);
lean_ctor_set(v___x_1317_, 4, v___f_1307_);
lean_ctor_set(v___x_1317_, 5, v___x_1312_);
lean_ctor_set(v___x_1317_, 6, v___x_1313_);
lean_ctor_set(v___x_1317_, 7, v___x_1316_);
v___x_1318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
lean_ctor_set(v___x_1318_, 1, v___f_1306_);
v___x_1319_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_1318_);
return v___x_1319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___boxed(lean_object* v_phase_1320_, lean_object* v_name_1321_, lean_object* v_a_1322_){
_start:
{
uint8_t v_phase_boxed_1323_; lean_object* v_res_1324_; 
v_phase_boxed_1323_ = lean_unbox(v_phase_1320_);
v_res_1324_ = l_Lean_Compiler_LCNF_mkSigDeclExt(v_phase_boxed_1323_, v_name_1321_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2_(){
_start:
{
uint8_t v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; 
v___x_1332_ = 2;
v___x_1333_ = ((lean_object*)(l_Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2_));
v___x_1334_ = l_Lean_Compiler_LCNF_mkSigDeclExt(v___x_1332_, v___x_1333_);
return v___x_1334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2____boxed(lean_object* v_a_1335_){
_start:
{
lean_object* v_res_1336_; 
v_res_1336_ = l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2_();
return v_res_1336_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___redArg(lean_object* v_as_1337_, lean_object* v_k_1338_, lean_object* v_x_1339_, lean_object* v_x_1340_){
_start:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v_m_1343_; lean_object* v_a_1344_; uint8_t v___x_1345_; 
v___x_1341_ = lean_nat_add(v_x_1339_, v_x_1340_);
v___x_1342_ = lean_unsigned_to_nat(1u);
v_m_1343_ = lean_nat_shiftr(v___x_1341_, v___x_1342_);
lean_dec(v___x_1341_);
v_a_1344_ = lean_array_fget_borrowed(v_as_1337_, v_m_1343_);
v___x_1345_ = l_Lean_Compiler_LCNF_mkDeclExt___lam__2(v_a_1344_, v_k_1338_);
if (v___x_1345_ == 0)
{
uint8_t v___x_1346_; 
lean_dec(v_x_1340_);
v___x_1346_ = l_Lean_Compiler_LCNF_mkDeclExt___lam__2(v_k_1338_, v_a_1344_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1347_; 
lean_dec(v_m_1343_);
lean_dec(v_x_1339_);
lean_inc(v_a_1344_);
v___x_1347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1347_, 0, v_a_1344_);
return v___x_1347_;
}
else
{
lean_object* v___x_1348_; uint8_t v___x_1349_; 
v___x_1348_ = lean_unsigned_to_nat(0u);
v___x_1349_ = lean_nat_dec_eq(v_m_1343_, v___x_1348_);
if (v___x_1349_ == 0)
{
lean_object* v___x_1350_; uint8_t v___x_1351_; 
v___x_1350_ = lean_nat_sub(v_m_1343_, v___x_1342_);
lean_dec(v_m_1343_);
v___x_1351_ = lean_nat_dec_lt(v___x_1350_, v_x_1339_);
if (v___x_1351_ == 0)
{
v_x_1340_ = v___x_1350_;
goto _start;
}
else
{
lean_object* v___x_1353_; 
lean_dec(v___x_1350_);
lean_dec(v_x_1339_);
v___x_1353_ = lean_box(0);
return v___x_1353_;
}
}
else
{
lean_object* v___x_1354_; 
lean_dec(v_m_1343_);
lean_dec(v_x_1339_);
v___x_1354_ = lean_box(0);
return v___x_1354_;
}
}
}
else
{
lean_object* v___x_1355_; uint8_t v___x_1356_; 
lean_dec(v_x_1339_);
v___x_1355_ = lean_nat_add(v_m_1343_, v___x_1342_);
lean_dec(v_m_1343_);
v___x_1356_ = lean_nat_dec_le(v___x_1355_, v_x_1340_);
if (v___x_1356_ == 0)
{
lean_object* v___x_1357_; 
lean_dec(v___x_1355_);
lean_dec(v_x_1340_);
v___x_1357_ = lean_box(0);
return v___x_1357_;
}
else
{
v_x_1339_ = v___x_1355_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___redArg___boxed(lean_object* v_as_1359_, lean_object* v_k_1360_, lean_object* v_x_1361_, lean_object* v_x_1362_){
_start:
{
lean_object* v_res_1363_; 
v_res_1363_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___redArg(v_as_1359_, v_k_1360_, v_x_1361_, v_x_1362_);
lean_dec_ref(v_k_1360_);
lean_dec_ref(v_as_1359_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1364_, lean_object* v_vals_1365_, lean_object* v_i_1366_, lean_object* v_k_1367_){
_start:
{
lean_object* v___x_1368_; uint8_t v___x_1369_; 
v___x_1368_ = lean_array_get_size(v_keys_1364_);
v___x_1369_ = lean_nat_dec_lt(v_i_1366_, v___x_1368_);
if (v___x_1369_ == 0)
{
lean_object* v___x_1370_; 
lean_dec(v_i_1366_);
v___x_1370_ = lean_box(0);
return v___x_1370_;
}
else
{
lean_object* v_k_x27_1371_; uint8_t v___x_1372_; 
v_k_x27_1371_ = lean_array_fget_borrowed(v_keys_1364_, v_i_1366_);
v___x_1372_ = lean_name_eq(v_k_1367_, v_k_x27_1371_);
if (v___x_1372_ == 0)
{
lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___x_1373_ = lean_unsigned_to_nat(1u);
v___x_1374_ = lean_nat_add(v_i_1366_, v___x_1373_);
lean_dec(v_i_1366_);
v_i_1366_ = v___x_1374_;
goto _start;
}
else
{
lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1376_ = lean_array_fget_borrowed(v_vals_1365_, v_i_1366_);
lean_dec(v_i_1366_);
lean_inc(v___x_1376_);
v___x_1377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1376_);
return v___x_1377_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1378_, lean_object* v_vals_1379_, lean_object* v_i_1380_, lean_object* v_k_1381_){
_start:
{
lean_object* v_res_1382_; 
v_res_1382_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1378_, v_vals_1379_, v_i_1380_, v_k_1381_);
lean_dec(v_k_1381_);
lean_dec_ref(v_vals_1379_);
lean_dec_ref(v_keys_1378_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0___redArg(lean_object* v_x_1383_, size_t v_x_1384_, lean_object* v_x_1385_){
_start:
{
if (lean_obj_tag(v_x_1383_) == 0)
{
lean_object* v_es_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1407_; 
v_es_1386_ = lean_ctor_get(v_x_1383_, 0);
v_isSharedCheck_1407_ = !lean_is_exclusive(v_x_1383_);
if (v_isSharedCheck_1407_ == 0)
{
v___x_1388_ = v_x_1383_;
v_isShared_1389_ = v_isSharedCheck_1407_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_es_1386_);
lean_dec(v_x_1383_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1407_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1390_; size_t v___x_1391_; size_t v___x_1392_; size_t v___x_1393_; lean_object* v_j_1394_; lean_object* v___x_1395_; 
v___x_1390_ = lean_box(2);
v___x_1391_ = ((size_t)5ULL);
v___x_1392_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___closed__1);
v___x_1393_ = lean_usize_land(v_x_1384_, v___x_1392_);
v_j_1394_ = lean_usize_to_nat(v___x_1393_);
v___x_1395_ = lean_array_get(v___x_1390_, v_es_1386_, v_j_1394_);
lean_dec(v_j_1394_);
lean_dec_ref(v_es_1386_);
switch(lean_obj_tag(v___x_1395_))
{
case 0:
{
lean_object* v_key_1396_; lean_object* v_val_1397_; uint8_t v___x_1398_; 
v_key_1396_ = lean_ctor_get(v___x_1395_, 0);
lean_inc(v_key_1396_);
v_val_1397_ = lean_ctor_get(v___x_1395_, 1);
lean_inc(v_val_1397_);
lean_dec_ref(v___x_1395_);
v___x_1398_ = lean_name_eq(v_x_1385_, v_key_1396_);
lean_dec(v_key_1396_);
if (v___x_1398_ == 0)
{
lean_object* v___x_1399_; 
lean_dec(v_val_1397_);
lean_del_object(v___x_1388_);
v___x_1399_ = lean_box(0);
return v___x_1399_;
}
else
{
lean_object* v___x_1401_; 
if (v_isShared_1389_ == 0)
{
lean_ctor_set_tag(v___x_1388_, 1);
lean_ctor_set(v___x_1388_, 0, v_val_1397_);
v___x_1401_ = v___x_1388_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1402_; 
v_reuseFailAlloc_1402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1402_, 0, v_val_1397_);
v___x_1401_ = v_reuseFailAlloc_1402_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
return v___x_1401_;
}
}
}
case 1:
{
lean_object* v_node_1403_; size_t v___x_1404_; 
lean_del_object(v___x_1388_);
v_node_1403_ = lean_ctor_get(v___x_1395_, 0);
lean_inc(v_node_1403_);
lean_dec_ref(v___x_1395_);
v___x_1404_ = lean_usize_shift_right(v_x_1384_, v___x_1391_);
v_x_1383_ = v_node_1403_;
v_x_1384_ = v___x_1404_;
goto _start;
}
default: 
{
lean_object* v___x_1406_; 
lean_del_object(v___x_1388_);
v___x_1406_ = lean_box(0);
return v___x_1406_;
}
}
}
}
else
{
lean_object* v_ks_1408_; lean_object* v_vs_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
v_ks_1408_ = lean_ctor_get(v_x_1383_, 0);
lean_inc_ref(v_ks_1408_);
v_vs_1409_ = lean_ctor_get(v_x_1383_, 1);
lean_inc_ref(v_vs_1409_);
lean_dec_ref(v_x_1383_);
v___x_1410_ = lean_unsigned_to_nat(0u);
v___x_1411_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1___redArg(v_ks_1408_, v_vs_1409_, v___x_1410_, v_x_1385_);
lean_dec_ref(v_vs_1409_);
lean_dec_ref(v_ks_1408_);
return v___x_1411_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_1412_, lean_object* v_x_1413_, lean_object* v_x_1414_){
_start:
{
size_t v_x_429__boxed_1415_; lean_object* v_res_1416_; 
v_x_429__boxed_1415_ = lean_unbox_usize(v_x_1413_);
lean_dec(v_x_1413_);
v_res_1416_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0___redArg(v_x_1412_, v_x_429__boxed_1415_, v_x_1414_);
lean_dec(v_x_1414_);
return v_res_1416_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(lean_object* v_x_1417_, lean_object* v_x_1418_){
_start:
{
uint64_t v___y_1420_; 
if (lean_obj_tag(v_x_1418_) == 0)
{
uint64_t v___x_1423_; 
v___x_1423_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0);
v___y_1420_ = v___x_1423_;
goto v___jp_1419_;
}
else
{
uint64_t v_hash_1424_; 
v_hash_1424_ = lean_ctor_get_uint64(v_x_1418_, sizeof(void*)*2);
v___y_1420_ = v_hash_1424_;
goto v___jp_1419_;
}
v___jp_1419_:
{
size_t v___x_1421_; lean_object* v___x_1422_; 
v___x_1421_ = lean_uint64_to_usize(v___y_1420_);
v___x_1422_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0___redArg(v_x_1417_, v___x_1421_, v_x_1418_);
return v___x_1422_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg___boxed(lean_object* v_x_1425_, lean_object* v_x_1426_){
_start:
{
lean_object* v_res_1427_; 
v_res_1427_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(v_x_1425_, v_x_1426_);
lean_dec(v_x_1426_);
return v_res_1427_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__2(void){
_start:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
v___x_1430_ = ((lean_object*)(l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__1));
v___x_1431_ = ((lean_object*)(l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__0));
v___x_1432_ = l_Lean_PersistentHashMap_instInhabited(lean_box(0), lean_box(0), v___x_1431_, v___x_1430_);
return v___x_1432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclCore_x3f(uint8_t v_pu_1433_, lean_object* v_env_1434_, lean_object* v_ext_1435_, lean_object* v_declName_1436_){
_start:
{
lean_object* v___x_1437_; lean_object* v___x_1444_; 
v___x_1437_ = lean_obj_once(&l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__2, &l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__2_once, _init_l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__2);
v___x_1444_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1434_, v_declName_1436_);
if (lean_obj_tag(v___x_1444_) == 0)
{
goto v___jp_1438_;
}
else
{
lean_object* v_val_1445_; lean_object* v_tmpDecl_1480_; lean_object* v_toSignature_1481_; lean_object* v_value_1482_; uint8_t v_recursive_1483_; lean_object* v_inlineAttr_x3f_1484_; lean_object* v___x_1486_; uint8_t v_isShared_1487_; uint8_t v_isSharedCheck_1511_; 
v_val_1445_ = lean_ctor_get(v___x_1444_, 0);
lean_inc(v_val_1445_);
lean_dec_ref(v___x_1444_);
v_tmpDecl_1480_ = l_Lean_Compiler_LCNF_instInhabitedDecl_default(v_pu_1433_);
v_toSignature_1481_ = lean_ctor_get(v_tmpDecl_1480_, 0);
v_value_1482_ = lean_ctor_get(v_tmpDecl_1480_, 1);
v_recursive_1483_ = lean_ctor_get_uint8(v_tmpDecl_1480_, sizeof(void*)*3);
v_inlineAttr_x3f_1484_ = lean_ctor_get(v_tmpDecl_1480_, 2);
v_isSharedCheck_1511_ = !lean_is_exclusive(v_tmpDecl_1480_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1486_ = v_tmpDecl_1480_;
v_isShared_1487_ = v_isSharedCheck_1511_;
goto v_resetjp_1485_;
}
else
{
lean_inc(v_inlineAttr_x3f_1484_);
lean_inc(v_value_1482_);
lean_inc(v_toSignature_1481_);
lean_dec(v_tmpDecl_1480_);
v___x_1486_ = lean_box(0);
v_isShared_1487_ = v_isSharedCheck_1511_;
goto v_resetjp_1485_;
}
v___jp_1446_:
{
lean_object* v_tmpDecl_1447_; lean_object* v_toSignature_1448_; lean_object* v_value_1449_; uint8_t v_recursive_1450_; lean_object* v_inlineAttr_x3f_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1479_; 
v_tmpDecl_1447_ = l_Lean_Compiler_LCNF_instInhabitedDecl_default(v_pu_1433_);
v_toSignature_1448_ = lean_ctor_get(v_tmpDecl_1447_, 0);
v_value_1449_ = lean_ctor_get(v_tmpDecl_1447_, 1);
v_recursive_1450_ = lean_ctor_get_uint8(v_tmpDecl_1447_, sizeof(void*)*3);
v_inlineAttr_x3f_1451_ = lean_ctor_get(v_tmpDecl_1447_, 2);
v_isSharedCheck_1479_ = !lean_is_exclusive(v_tmpDecl_1447_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1453_ = v_tmpDecl_1447_;
v_isShared_1454_ = v_isSharedCheck_1479_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_inlineAttr_x3f_1451_);
lean_inc(v_value_1449_);
lean_inc(v_toSignature_1448_);
lean_dec(v_tmpDecl_1447_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1479_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v_levelParams_1455_; lean_object* v_type_1456_; lean_object* v_params_1457_; uint8_t v_safe_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1477_; 
v_levelParams_1455_ = lean_ctor_get(v_toSignature_1448_, 1);
v_type_1456_ = lean_ctor_get(v_toSignature_1448_, 2);
v_params_1457_ = lean_ctor_get(v_toSignature_1448_, 3);
v_safe_1458_ = lean_ctor_get_uint8(v_toSignature_1448_, sizeof(void*)*4);
v_isSharedCheck_1477_ = !lean_is_exclusive(v_toSignature_1448_);
if (v_isSharedCheck_1477_ == 0)
{
lean_object* v_unused_1478_; 
v_unused_1478_ = lean_ctor_get(v_toSignature_1448_, 0);
lean_dec(v_unused_1478_);
v___x_1460_ = v_toSignature_1448_;
v_isShared_1461_ = v_isSharedCheck_1477_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_params_1457_);
lean_inc(v_type_1456_);
lean_inc(v_levelParams_1455_);
lean_dec(v_toSignature_1448_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1477_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
uint8_t v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; uint8_t v___x_1466_; 
v___x_1462_ = 0;
v___x_1463_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1437_, v_ext_1435_, v_env_1434_, v_val_1445_, v___x_1462_);
lean_dec(v_val_1445_);
v___x_1464_ = lean_unsigned_to_nat(0u);
v___x_1465_ = lean_array_get_size(v___x_1463_);
v___x_1466_ = lean_nat_dec_lt(v___x_1464_, v___x_1465_);
if (v___x_1466_ == 0)
{
lean_dec_ref(v___x_1463_);
lean_del_object(v___x_1460_);
lean_dec_ref(v_params_1457_);
lean_dec_ref(v_type_1456_);
lean_dec(v_levelParams_1455_);
lean_del_object(v___x_1453_);
lean_dec(v_inlineAttr_x3f_1451_);
lean_dec_ref(v_value_1449_);
goto v___jp_1438_;
}
else
{
lean_object* v___x_1467_; lean_object* v___x_1468_; uint8_t v___x_1469_; 
v___x_1467_ = lean_unsigned_to_nat(1u);
v___x_1468_ = lean_nat_sub(v___x_1465_, v___x_1467_);
v___x_1469_ = lean_nat_dec_le(v___x_1464_, v___x_1468_);
if (v___x_1469_ == 0)
{
lean_dec(v___x_1468_);
lean_dec_ref(v___x_1463_);
lean_del_object(v___x_1460_);
lean_dec_ref(v_params_1457_);
lean_dec_ref(v_type_1456_);
lean_dec(v_levelParams_1455_);
lean_del_object(v___x_1453_);
lean_dec(v_inlineAttr_x3f_1451_);
lean_dec_ref(v_value_1449_);
goto v___jp_1438_;
}
else
{
lean_object* v___x_1471_; 
lean_inc(v_declName_1436_);
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 0, v_declName_1436_);
v___x_1471_ = v___x_1460_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_declName_1436_);
lean_ctor_set(v_reuseFailAlloc_1476_, 1, v_levelParams_1455_);
lean_ctor_set(v_reuseFailAlloc_1476_, 2, v_type_1456_);
lean_ctor_set(v_reuseFailAlloc_1476_, 3, v_params_1457_);
lean_ctor_set_uint8(v_reuseFailAlloc_1476_, sizeof(void*)*4, v_safe_1458_);
v___x_1471_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
lean_object* v_tmpDecl_1473_; 
if (v_isShared_1454_ == 0)
{
lean_ctor_set(v___x_1453_, 0, v___x_1471_);
v_tmpDecl_1473_ = v___x_1453_;
goto v_reusejp_1472_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v___x_1471_);
lean_ctor_set(v_reuseFailAlloc_1475_, 1, v_value_1449_);
lean_ctor_set(v_reuseFailAlloc_1475_, 2, v_inlineAttr_x3f_1451_);
lean_ctor_set_uint8(v_reuseFailAlloc_1475_, sizeof(void*)*3, v_recursive_1450_);
v_tmpDecl_1473_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1472_;
}
v_reusejp_1472_:
{
lean_object* v___x_1474_; 
v___x_1474_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___redArg(v___x_1463_, v_tmpDecl_1473_, v___x_1464_, v___x_1468_);
lean_dec_ref(v_tmpDecl_1473_);
lean_dec_ref(v___x_1463_);
if (lean_obj_tag(v___x_1474_) == 0)
{
goto v___jp_1438_;
}
else
{
lean_dec(v_declName_1436_);
lean_dec_ref(v_env_1434_);
return v___x_1474_;
}
}
}
}
}
}
}
}
v_resetjp_1485_:
{
lean_object* v_levelParams_1488_; lean_object* v_type_1489_; lean_object* v_params_1490_; uint8_t v_safe_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1509_; 
v_levelParams_1488_ = lean_ctor_get(v_toSignature_1481_, 1);
v_type_1489_ = lean_ctor_get(v_toSignature_1481_, 2);
v_params_1490_ = lean_ctor_get(v_toSignature_1481_, 3);
v_safe_1491_ = lean_ctor_get_uint8(v_toSignature_1481_, sizeof(void*)*4);
v_isSharedCheck_1509_ = !lean_is_exclusive(v_toSignature_1481_);
if (v_isSharedCheck_1509_ == 0)
{
lean_object* v_unused_1510_; 
v_unused_1510_ = lean_ctor_get(v_toSignature_1481_, 0);
lean_dec(v_unused_1510_);
v___x_1493_ = v_toSignature_1481_;
v_isShared_1494_ = v_isSharedCheck_1509_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_params_1490_);
lean_inc(v_type_1489_);
lean_inc(v_levelParams_1488_);
lean_dec(v_toSignature_1481_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1509_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; uint8_t v___x_1498_; 
v___x_1495_ = l___private_Lean_Environment_0__Lean_PersistentEnvExtension_getModuleIREntries_unsafe__1(lean_box(0), lean_box(0), lean_box(0), v___x_1437_, v_ext_1435_, v_env_1434_, v_val_1445_);
v___x_1496_ = lean_unsigned_to_nat(0u);
v___x_1497_ = lean_array_get_size(v___x_1495_);
v___x_1498_ = lean_nat_dec_lt(v___x_1496_, v___x_1497_);
if (v___x_1498_ == 0)
{
lean_dec_ref(v___x_1495_);
lean_del_object(v___x_1493_);
lean_dec_ref(v_params_1490_);
lean_dec_ref(v_type_1489_);
lean_dec(v_levelParams_1488_);
lean_del_object(v___x_1486_);
lean_dec(v_inlineAttr_x3f_1484_);
lean_dec_ref(v_value_1482_);
goto v___jp_1446_;
}
else
{
lean_object* v___x_1499_; lean_object* v___x_1500_; uint8_t v___x_1501_; 
v___x_1499_ = lean_unsigned_to_nat(1u);
v___x_1500_ = lean_nat_sub(v___x_1497_, v___x_1499_);
v___x_1501_ = lean_nat_dec_le(v___x_1496_, v___x_1500_);
if (v___x_1501_ == 0)
{
lean_dec(v___x_1500_);
lean_dec_ref(v___x_1495_);
lean_del_object(v___x_1493_);
lean_dec_ref(v_params_1490_);
lean_dec_ref(v_type_1489_);
lean_dec(v_levelParams_1488_);
lean_del_object(v___x_1486_);
lean_dec(v_inlineAttr_x3f_1484_);
lean_dec_ref(v_value_1482_);
goto v___jp_1446_;
}
else
{
lean_object* v___x_1503_; 
lean_inc(v_declName_1436_);
if (v_isShared_1494_ == 0)
{
lean_ctor_set(v___x_1493_, 0, v_declName_1436_);
v___x_1503_ = v___x_1493_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v_declName_1436_);
lean_ctor_set(v_reuseFailAlloc_1508_, 1, v_levelParams_1488_);
lean_ctor_set(v_reuseFailAlloc_1508_, 2, v_type_1489_);
lean_ctor_set(v_reuseFailAlloc_1508_, 3, v_params_1490_);
lean_ctor_set_uint8(v_reuseFailAlloc_1508_, sizeof(void*)*4, v_safe_1491_);
v___x_1503_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
lean_object* v_tmpDecl_1505_; 
if (v_isShared_1487_ == 0)
{
lean_ctor_set(v___x_1486_, 0, v___x_1503_);
v_tmpDecl_1505_ = v___x_1486_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v___x_1503_);
lean_ctor_set(v_reuseFailAlloc_1507_, 1, v_value_1482_);
lean_ctor_set(v_reuseFailAlloc_1507_, 2, v_inlineAttr_x3f_1484_);
lean_ctor_set_uint8(v_reuseFailAlloc_1507_, sizeof(void*)*3, v_recursive_1483_);
v_tmpDecl_1505_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
lean_object* v___x_1506_; 
v___x_1506_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___redArg(v___x_1495_, v_tmpDecl_1505_, v___x_1496_, v___x_1500_);
lean_dec_ref(v_tmpDecl_1505_);
lean_dec_ref(v___x_1495_);
if (lean_obj_tag(v___x_1506_) == 0)
{
goto v___jp_1446_;
}
else
{
lean_dec(v_val_1445_);
lean_dec(v_declName_1436_);
lean_dec_ref(v_env_1434_);
return v___x_1506_;
}
}
}
}
}
}
}
}
v___jp_1438_:
{
lean_object* v_toEnvExtension_1439_; lean_object* v_asyncMode_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
v_toEnvExtension_1439_ = lean_ctor_get(v_ext_1435_, 0);
v_asyncMode_1440_ = lean_ctor_get(v_toEnvExtension_1439_, 2);
v___x_1441_ = lean_box(0);
v___x_1442_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1437_, v_ext_1435_, v_env_1434_, v_asyncMode_1440_, v___x_1441_);
v___x_1443_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(v___x_1442_, v_declName_1436_);
lean_dec(v_declName_1436_);
return v___x_1443_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclCore_x3f___boxed(lean_object* v_pu_1512_, lean_object* v_env_1513_, lean_object* v_ext_1514_, lean_object* v_declName_1515_){
_start:
{
uint8_t v_pu_boxed_1516_; lean_object* v_res_1517_; 
v_pu_boxed_1516_ = lean_unbox(v_pu_1512_);
v_res_1517_ = l_Lean_Compiler_LCNF_getDeclCore_x3f(v_pu_boxed_1516_, v_env_1513_, v_ext_1514_, v_declName_1515_);
lean_dec_ref(v_ext_1514_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0(lean_object* v_00_u03b2_1518_, lean_object* v_x_1519_, lean_object* v_x_1520_){
_start:
{
lean_object* v___x_1521_; 
v___x_1521_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(v_x_1519_, v_x_1520_);
return v___x_1521_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___boxed(lean_object* v_00_u03b2_1522_, lean_object* v_x_1523_, lean_object* v_x_1524_){
_start:
{
lean_object* v_res_1525_; 
v_res_1525_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0(v_00_u03b2_1522_, v_x_1523_, v_x_1524_);
lean_dec(v_x_1524_);
return v_res_1525_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1(lean_object* v_as_1526_, lean_object* v_k_1527_, lean_object* v_x_1528_, lean_object* v_x_1529_, lean_object* v_x_1530_){
_start:
{
lean_object* v___x_1531_; 
v___x_1531_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___redArg(v_as_1526_, v_k_1527_, v_x_1528_, v_x_1529_);
return v___x_1531_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___boxed(lean_object* v_as_1532_, lean_object* v_k_1533_, lean_object* v_x_1534_, lean_object* v_x_1535_, lean_object* v_x_1536_){
_start:
{
lean_object* v_res_1537_; 
v_res_1537_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1(v_as_1532_, v_k_1533_, v_x_1534_, v_x_1535_, v_x_1536_);
lean_dec_ref(v_k_1533_);
lean_dec_ref(v_as_1532_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1538_, lean_object* v_x_1539_, size_t v_x_1540_, lean_object* v_x_1541_){
_start:
{
lean_object* v___x_1542_; 
v___x_1542_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0___redArg(v_x_1539_, v_x_1540_, v_x_1541_);
return v___x_1542_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1543_, lean_object* v_x_1544_, lean_object* v_x_1545_, lean_object* v_x_1546_){
_start:
{
size_t v_x_651__boxed_1547_; lean_object* v_res_1548_; 
v_x_651__boxed_1547_ = lean_unbox_usize(v_x_1545_);
lean_dec(v_x_1545_);
v_res_1548_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0(v_00_u03b2_1543_, v_x_1544_, v_x_651__boxed_1547_, v_x_1546_);
lean_dec(v_x_1546_);
return v_res_1548_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1549_, lean_object* v_keys_1550_, lean_object* v_vals_1551_, lean_object* v_heq_1552_, lean_object* v_i_1553_, lean_object* v_k_1554_){
_start:
{
lean_object* v___x_1555_; 
v___x_1555_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1550_, v_vals_1551_, v_i_1553_, v_k_1554_);
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1556_, lean_object* v_keys_1557_, lean_object* v_vals_1558_, lean_object* v_heq_1559_, lean_object* v_i_1560_, lean_object* v_k_1561_){
_start:
{
lean_object* v_res_1562_; 
v_res_1562_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1(v_00_u03b2_1556_, v_keys_1557_, v_vals_1558_, v_heq_1559_, v_i_1560_, v_k_1561_);
lean_dec(v_k_1561_);
lean_dec_ref(v_vals_1558_);
lean_dec_ref(v_keys_1557_);
return v_res_1562_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___redArg(lean_object* v_as_1563_, lean_object* v_k_1564_, lean_object* v_x_1565_, lean_object* v_x_1566_){
_start:
{
lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v_m_1569_; lean_object* v_a_1570_; uint8_t v___x_1571_; 
v___x_1567_ = lean_nat_add(v_x_1565_, v_x_1566_);
v___x_1568_ = lean_unsigned_to_nat(1u);
v_m_1569_ = lean_nat_shiftr(v___x_1567_, v___x_1568_);
lean_dec(v___x_1567_);
v_a_1570_ = lean_array_fget_borrowed(v_as_1563_, v_m_1569_);
v___x_1571_ = l_Lean_Compiler_LCNF_mkSigDeclExt___lam__2(v_a_1570_, v_k_1564_);
if (v___x_1571_ == 0)
{
uint8_t v___x_1572_; 
lean_dec(v_x_1566_);
v___x_1572_ = l_Lean_Compiler_LCNF_mkSigDeclExt___lam__2(v_k_1564_, v_a_1570_);
if (v___x_1572_ == 0)
{
lean_object* v___x_1573_; 
lean_dec(v_m_1569_);
lean_dec(v_x_1565_);
lean_inc(v_a_1570_);
v___x_1573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1573_, 0, v_a_1570_);
return v___x_1573_;
}
else
{
lean_object* v___x_1574_; uint8_t v___x_1575_; 
v___x_1574_ = lean_unsigned_to_nat(0u);
v___x_1575_ = lean_nat_dec_eq(v_m_1569_, v___x_1574_);
if (v___x_1575_ == 0)
{
lean_object* v___x_1576_; uint8_t v___x_1577_; 
v___x_1576_ = lean_nat_sub(v_m_1569_, v___x_1568_);
lean_dec(v_m_1569_);
v___x_1577_ = lean_nat_dec_lt(v___x_1576_, v_x_1565_);
if (v___x_1577_ == 0)
{
v_x_1566_ = v___x_1576_;
goto _start;
}
else
{
lean_object* v___x_1579_; 
lean_dec(v___x_1576_);
lean_dec(v_x_1565_);
v___x_1579_ = lean_box(0);
return v___x_1579_;
}
}
else
{
lean_object* v___x_1580_; 
lean_dec(v_m_1569_);
lean_dec(v_x_1565_);
v___x_1580_ = lean_box(0);
return v___x_1580_;
}
}
}
else
{
lean_object* v___x_1581_; uint8_t v___x_1582_; 
lean_dec(v_x_1565_);
v___x_1581_ = lean_nat_add(v_m_1569_, v___x_1568_);
lean_dec(v_m_1569_);
v___x_1582_ = lean_nat_dec_le(v___x_1581_, v_x_1566_);
if (v___x_1582_ == 0)
{
lean_object* v___x_1583_; 
lean_dec(v___x_1581_);
lean_dec(v_x_1566_);
v___x_1583_ = lean_box(0);
return v___x_1583_;
}
else
{
v_x_1565_ = v___x_1581_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___redArg___boxed(lean_object* v_as_1585_, lean_object* v_k_1586_, lean_object* v_x_1587_, lean_object* v_x_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___redArg(v_as_1585_, v_k_1586_, v_x_1587_, v_x_1588_);
lean_dec_ref(v_k_1586_);
lean_dec_ref(v_as_1585_);
return v_res_1589_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getSigCore_x3f___closed__0(void){
_start:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1590_ = ((lean_object*)(l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__1));
v___x_1591_ = ((lean_object*)(l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__0));
v___x_1592_ = l_Lean_PersistentHashMap_instInhabited(lean_box(0), lean_box(0), v___x_1591_, v___x_1590_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSigCore_x3f(uint8_t v_pu_1593_, lean_object* v_env_1594_, lean_object* v_ext_1595_, lean_object* v_declName_1596_){
_start:
{
lean_object* v___x_1597_; lean_object* v___x_1604_; 
v___x_1597_ = lean_obj_once(&l_Lean_Compiler_LCNF_getSigCore_x3f___closed__0, &l_Lean_Compiler_LCNF_getSigCore_x3f___closed__0_once, _init_l_Lean_Compiler_LCNF_getSigCore_x3f___closed__0);
v___x_1604_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1594_, v_declName_1596_);
if (lean_obj_tag(v___x_1604_) == 0)
{
goto v___jp_1598_;
}
else
{
lean_object* v_val_1605_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; uint8_t v___x_1632_; 
v_val_1605_ = lean_ctor_get(v___x_1604_, 0);
lean_inc(v_val_1605_);
lean_dec_ref(v___x_1604_);
v___x_1629_ = l___private_Lean_Environment_0__Lean_PersistentEnvExtension_getModuleIREntries_unsafe__1(lean_box(0), lean_box(0), lean_box(0), v___x_1597_, v_ext_1595_, v_env_1594_, v_val_1605_);
v___x_1630_ = lean_unsigned_to_nat(0u);
v___x_1631_ = lean_array_get_size(v___x_1629_);
v___x_1632_ = lean_nat_dec_lt(v___x_1630_, v___x_1631_);
if (v___x_1632_ == 0)
{
lean_dec_ref(v___x_1629_);
goto v___jp_1606_;
}
else
{
lean_object* v_tmpSig_1633_; lean_object* v_levelParams_1634_; lean_object* v_type_1635_; lean_object* v_params_1636_; uint8_t v_safe_1637_; lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1648_; 
v_tmpSig_1633_ = l_Lean_Compiler_LCNF_instInhabitedSignature_default(v_pu_1593_);
v_levelParams_1634_ = lean_ctor_get(v_tmpSig_1633_, 1);
v_type_1635_ = lean_ctor_get(v_tmpSig_1633_, 2);
v_params_1636_ = lean_ctor_get(v_tmpSig_1633_, 3);
v_safe_1637_ = lean_ctor_get_uint8(v_tmpSig_1633_, sizeof(void*)*4);
v_isSharedCheck_1648_ = !lean_is_exclusive(v_tmpSig_1633_);
if (v_isSharedCheck_1648_ == 0)
{
lean_object* v_unused_1649_; 
v_unused_1649_ = lean_ctor_get(v_tmpSig_1633_, 0);
lean_dec(v_unused_1649_);
v___x_1639_ = v_tmpSig_1633_;
v_isShared_1640_ = v_isSharedCheck_1648_;
goto v_resetjp_1638_;
}
else
{
lean_inc(v_params_1636_);
lean_inc(v_type_1635_);
lean_inc(v_levelParams_1634_);
lean_dec(v_tmpSig_1633_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1648_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v___x_1641_; lean_object* v___x_1642_; uint8_t v___x_1643_; 
v___x_1641_ = lean_unsigned_to_nat(1u);
v___x_1642_ = lean_nat_sub(v___x_1631_, v___x_1641_);
v___x_1643_ = lean_nat_dec_le(v___x_1630_, v___x_1642_);
if (v___x_1643_ == 0)
{
lean_dec(v___x_1642_);
lean_del_object(v___x_1639_);
lean_dec_ref(v_params_1636_);
lean_dec_ref(v_type_1635_);
lean_dec(v_levelParams_1634_);
lean_dec_ref(v___x_1629_);
goto v___jp_1606_;
}
else
{
lean_object* v_tmpSig_1645_; 
lean_inc(v_declName_1596_);
if (v_isShared_1640_ == 0)
{
lean_ctor_set(v___x_1639_, 0, v_declName_1596_);
v_tmpSig_1645_ = v___x_1639_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_declName_1596_);
lean_ctor_set(v_reuseFailAlloc_1647_, 1, v_levelParams_1634_);
lean_ctor_set(v_reuseFailAlloc_1647_, 2, v_type_1635_);
lean_ctor_set(v_reuseFailAlloc_1647_, 3, v_params_1636_);
lean_ctor_set_uint8(v_reuseFailAlloc_1647_, sizeof(void*)*4, v_safe_1637_);
v_tmpSig_1645_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
lean_object* v___x_1646_; 
v___x_1646_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___redArg(v___x_1629_, v_tmpSig_1645_, v___x_1630_, v___x_1642_);
lean_dec_ref(v_tmpSig_1645_);
lean_dec_ref(v___x_1629_);
if (lean_obj_tag(v___x_1646_) == 0)
{
goto v___jp_1606_;
}
else
{
lean_dec(v_val_1605_);
lean_dec(v_declName_1596_);
lean_dec_ref(v_env_1594_);
return v___x_1646_;
}
}
}
}
}
v___jp_1606_:
{
uint8_t v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; uint8_t v___x_1611_; 
v___x_1607_ = 0;
v___x_1608_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1597_, v_ext_1595_, v_env_1594_, v_val_1605_, v___x_1607_);
lean_dec(v_val_1605_);
v___x_1609_ = lean_unsigned_to_nat(0u);
v___x_1610_ = lean_array_get_size(v___x_1608_);
v___x_1611_ = lean_nat_dec_lt(v___x_1609_, v___x_1610_);
if (v___x_1611_ == 0)
{
lean_dec_ref(v___x_1608_);
goto v___jp_1598_;
}
else
{
lean_object* v_tmpSig_1612_; lean_object* v_levelParams_1613_; lean_object* v_type_1614_; lean_object* v_params_1615_; uint8_t v_safe_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1627_; 
v_tmpSig_1612_ = l_Lean_Compiler_LCNF_instInhabitedSignature_default(v_pu_1593_);
v_levelParams_1613_ = lean_ctor_get(v_tmpSig_1612_, 1);
v_type_1614_ = lean_ctor_get(v_tmpSig_1612_, 2);
v_params_1615_ = lean_ctor_get(v_tmpSig_1612_, 3);
v_safe_1616_ = lean_ctor_get_uint8(v_tmpSig_1612_, sizeof(void*)*4);
v_isSharedCheck_1627_ = !lean_is_exclusive(v_tmpSig_1612_);
if (v_isSharedCheck_1627_ == 0)
{
lean_object* v_unused_1628_; 
v_unused_1628_ = lean_ctor_get(v_tmpSig_1612_, 0);
lean_dec(v_unused_1628_);
v___x_1618_ = v_tmpSig_1612_;
v_isShared_1619_ = v_isSharedCheck_1627_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_params_1615_);
lean_inc(v_type_1614_);
lean_inc(v_levelParams_1613_);
lean_dec(v_tmpSig_1612_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1627_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; uint8_t v___x_1622_; 
v___x_1620_ = lean_unsigned_to_nat(1u);
v___x_1621_ = lean_nat_sub(v___x_1610_, v___x_1620_);
v___x_1622_ = lean_nat_dec_le(v___x_1609_, v___x_1621_);
if (v___x_1622_ == 0)
{
lean_dec(v___x_1621_);
lean_del_object(v___x_1618_);
lean_dec_ref(v_params_1615_);
lean_dec_ref(v_type_1614_);
lean_dec(v_levelParams_1613_);
lean_dec_ref(v___x_1608_);
goto v___jp_1598_;
}
else
{
lean_object* v_tmpSig_1624_; 
lean_inc(v_declName_1596_);
if (v_isShared_1619_ == 0)
{
lean_ctor_set(v___x_1618_, 0, v_declName_1596_);
v_tmpSig_1624_ = v___x_1618_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v_declName_1596_);
lean_ctor_set(v_reuseFailAlloc_1626_, 1, v_levelParams_1613_);
lean_ctor_set(v_reuseFailAlloc_1626_, 2, v_type_1614_);
lean_ctor_set(v_reuseFailAlloc_1626_, 3, v_params_1615_);
lean_ctor_set_uint8(v_reuseFailAlloc_1626_, sizeof(void*)*4, v_safe_1616_);
v_tmpSig_1624_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
lean_object* v___x_1625_; 
v___x_1625_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___redArg(v___x_1608_, v_tmpSig_1624_, v___x_1609_, v___x_1621_);
lean_dec_ref(v_tmpSig_1624_);
lean_dec_ref(v___x_1608_);
if (lean_obj_tag(v___x_1625_) == 0)
{
goto v___jp_1598_;
}
else
{
lean_dec(v_declName_1596_);
lean_dec_ref(v_env_1594_);
return v___x_1625_;
}
}
}
}
}
}
}
v___jp_1598_:
{
lean_object* v_toEnvExtension_1599_; lean_object* v_asyncMode_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; 
v_toEnvExtension_1599_ = lean_ctor_get(v_ext_1595_, 0);
v_asyncMode_1600_ = lean_ctor_get(v_toEnvExtension_1599_, 2);
v___x_1601_ = lean_box(0);
v___x_1602_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1597_, v_ext_1595_, v_env_1594_, v_asyncMode_1600_, v___x_1601_);
v___x_1603_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(v___x_1602_, v_declName_1596_);
lean_dec(v_declName_1596_);
return v___x_1603_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSigCore_x3f___boxed(lean_object* v_pu_1650_, lean_object* v_env_1651_, lean_object* v_ext_1652_, lean_object* v_declName_1653_){
_start:
{
uint8_t v_pu_boxed_1654_; lean_object* v_res_1655_; 
v_pu_boxed_1654_ = lean_unbox(v_pu_1650_);
v_res_1655_ = l_Lean_Compiler_LCNF_getSigCore_x3f(v_pu_boxed_1654_, v_env_1651_, v_ext_1652_, v_declName_1653_);
lean_dec_ref(v_ext_1652_);
return v_res_1655_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0(lean_object* v_as_1656_, lean_object* v_k_1657_, lean_object* v_x_1658_, lean_object* v_x_1659_, lean_object* v_x_1660_){
_start:
{
lean_object* v___x_1661_; 
v___x_1661_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___redArg(v_as_1656_, v_k_1657_, v_x_1658_, v_x_1659_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___boxed(lean_object* v_as_1662_, lean_object* v_k_1663_, lean_object* v_x_1664_, lean_object* v_x_1665_, lean_object* v_x_1666_){
_start:
{
lean_object* v_res_1667_; 
v_res_1667_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0(v_as_1662_, v_k_1663_, v_x_1664_, v_x_1665_, v_x_1666_);
lean_dec_ref(v_k_1663_);
lean_dec_ref(v_as_1662_);
return v_res_1667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBaseDecl_x3f___redArg(lean_object* v_declName_1668_, lean_object* v_a_1669_){
_start:
{
lean_object* v___x_1671_; lean_object* v_env_1672_; uint8_t v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; 
v___x_1671_ = lean_st_ref_get(v_a_1669_);
v_env_1672_ = lean_ctor_get(v___x_1671_, 0);
lean_inc_ref(v_env_1672_);
lean_dec(v___x_1671_);
v___x_1673_ = 0;
v___x_1674_ = l_Lean_Compiler_LCNF_baseExt;
v___x_1675_ = l_Lean_Compiler_LCNF_getDeclCore_x3f(v___x_1673_, v_env_1672_, v___x_1674_, v_declName_1668_);
v___x_1676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1676_, 0, v___x_1675_);
return v___x_1676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBaseDecl_x3f___redArg___boxed(lean_object* v_declName_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_){
_start:
{
lean_object* v_res_1680_; 
v_res_1680_ = l_Lean_Compiler_LCNF_getBaseDecl_x3f___redArg(v_declName_1677_, v_a_1678_);
lean_dec(v_a_1678_);
return v_res_1680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBaseDecl_x3f(lean_object* v_declName_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_){
_start:
{
lean_object* v___x_1685_; 
v___x_1685_ = l_Lean_Compiler_LCNF_getBaseDecl_x3f___redArg(v_declName_1681_, v_a_1683_);
return v___x_1685_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBaseDecl_x3f___boxed(lean_object* v_declName_1686_, lean_object* v_a_1687_, lean_object* v_a_1688_, lean_object* v_a_1689_){
_start:
{
lean_object* v_res_1690_; 
v_res_1690_ = l_Lean_Compiler_LCNF_getBaseDecl_x3f(v_declName_1686_, v_a_1687_, v_a_1688_);
lean_dec(v_a_1688_);
lean_dec_ref(v_a_1687_);
return v_res_1690_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(lean_object* v_declName_1691_, lean_object* v_a_1692_){
_start:
{
lean_object* v___x_1694_; lean_object* v_env_1695_; uint8_t v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; 
v___x_1694_ = lean_st_ref_get(v_a_1692_);
v_env_1695_ = lean_ctor_get(v___x_1694_, 0);
lean_inc_ref(v_env_1695_);
lean_dec(v___x_1694_);
v___x_1696_ = 0;
v___x_1697_ = l_Lean_Compiler_LCNF_monoExt;
v___x_1698_ = l_Lean_Compiler_LCNF_getDeclCore_x3f(v___x_1696_, v_env_1695_, v___x_1697_, v_declName_1691_);
v___x_1699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1699_, 0, v___x_1698_);
return v___x_1699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg___boxed(lean_object* v_declName_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_){
_start:
{
lean_object* v_res_1703_; 
v_res_1703_ = l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(v_declName_1700_, v_a_1701_);
lean_dec(v_a_1701_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f(lean_object* v_declName_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_){
_start:
{
lean_object* v___x_1708_; 
v___x_1708_ = l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(v_declName_1704_, v_a_1706_);
return v___x_1708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f___boxed(lean_object* v_declName_1709_, lean_object* v_a_1710_, lean_object* v_a_1711_, lean_object* v_a_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l_Lean_Compiler_LCNF_getMonoDecl_x3f(v_declName_1709_, v_a_1710_, v_a_1711_);
lean_dec(v_a_1711_);
lean_dec_ref(v_a_1710_);
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___redArg(lean_object* v_declName_1714_, lean_object* v_a_1715_){
_start:
{
lean_object* v___x_1717_; lean_object* v_env_1718_; lean_object* v___x_1719_; lean_object* v_asyncMode_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1717_ = lean_st_ref_get(v_a_1715_);
v_env_1718_ = lean_ctor_get(v___x_1717_, 0);
lean_inc_ref(v_env_1718_);
lean_dec(v___x_1717_);
v___x_1719_ = l_Lean_Compiler_LCNF_impureExt;
v_asyncMode_1720_ = lean_ctor_get(v___x_1719_, 2);
v___x_1721_ = lean_obj_once(&l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__2, &l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__2_once, _init_l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__2);
v___x_1722_ = lean_box(0);
v___x_1723_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_1721_, v___x_1719_, v_env_1718_, v_asyncMode_1720_, v___x_1722_);
v___x_1724_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(v___x_1723_, v_declName_1714_);
v___x_1725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1725_, 0, v___x_1724_);
return v___x_1725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___redArg___boxed(lean_object* v_declName_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_){
_start:
{
lean_object* v_res_1729_; 
v_res_1729_ = l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___redArg(v_declName_1726_, v_a_1727_);
lean_dec(v_a_1727_);
lean_dec(v_declName_1726_);
return v_res_1729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f(lean_object* v_declName_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_){
_start:
{
lean_object* v___x_1734_; 
v___x_1734_ = l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___redArg(v_declName_1730_, v_a_1732_);
return v___x_1734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___boxed(lean_object* v_declName_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f(v_declName_1735_, v_a_1736_, v_a_1737_);
lean_dec(v_a_1737_);
lean_dec_ref(v_a_1736_);
lean_dec(v_declName_1735_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__1(size_t v_sz_1740_, size_t v_i_1741_, lean_object* v_bs_1742_){
_start:
{
uint8_t v___x_1743_; 
v___x_1743_ = lean_usize_dec_lt(v_i_1741_, v_sz_1740_);
if (v___x_1743_ == 0)
{
return v_bs_1742_;
}
else
{
lean_object* v_v_1744_; lean_object* v_fst_1745_; lean_object* v___x_1746_; lean_object* v_bs_x27_1747_; size_t v___x_1748_; size_t v___x_1749_; lean_object* v___x_1750_; 
v_v_1744_ = lean_array_uget_borrowed(v_bs_1742_, v_i_1741_);
v_fst_1745_ = lean_ctor_get(v_v_1744_, 0);
lean_inc(v_fst_1745_);
v___x_1746_ = lean_unsigned_to_nat(0u);
v_bs_x27_1747_ = lean_array_uset(v_bs_1742_, v_i_1741_, v___x_1746_);
v___x_1748_ = ((size_t)1ULL);
v___x_1749_ = lean_usize_add(v_i_1741_, v___x_1748_);
v___x_1750_ = lean_array_uset(v_bs_x27_1747_, v_i_1741_, v_fst_1745_);
v_i_1741_ = v___x_1749_;
v_bs_1742_ = v___x_1750_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__1___boxed(lean_object* v_sz_1752_, lean_object* v_i_1753_, lean_object* v_bs_1754_){
_start:
{
size_t v_sz_boxed_1755_; size_t v_i_boxed_1756_; lean_object* v_res_1757_; 
v_sz_boxed_1755_ = lean_unbox_usize(v_sz_1752_);
lean_dec(v_sz_1752_);
v_i_boxed_1756_ = lean_unbox_usize(v_i_1753_);
lean_dec(v_i_1753_);
v_res_1757_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__1(v_sz_boxed_1755_, v_i_boxed_1756_, v_bs_1754_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___lam__0(lean_object* v_ps_1758_, lean_object* v_k_1759_, lean_object* v_v_1760_){
_start:
{
lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1761_, 0, v_k_1759_);
lean_ctor_set(v___x_1761_, 1, v_v_1760_);
v___x_1762_ = lean_array_push(v_ps_1758_, v___x_1761_);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg(lean_object* v_m_1766_){
_start:
{
lean_object* v___f_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___f_1767_ = ((lean_object*)(l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___closed__0));
v___x_1768_ = ((lean_object*)(l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___closed__1));
v___x_1769_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg(v_m_1766_, v___f_1767_, v___x_1768_);
return v___x_1769_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___boxed(lean_object* v_m_1770_){
_start:
{
lean_object* v_res_1771_; 
v_res_1771_ = l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg(v_m_1770_);
lean_dec_ref(v_m_1770_);
return v_res_1771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(lean_object* v_a_1772_){
_start:
{
lean_object* v___x_1774_; lean_object* v_env_1775_; lean_object* v___x_1776_; lean_object* v_asyncMode_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; size_t v_sz_1782_; size_t v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1774_ = lean_st_ref_get(v_a_1772_);
v_env_1775_ = lean_ctor_get(v___x_1774_, 0);
lean_inc_ref(v_env_1775_);
lean_dec(v___x_1774_);
v___x_1776_ = l_Lean_Compiler_LCNF_impureExt;
v_asyncMode_1777_ = lean_ctor_get(v___x_1776_, 2);
v___x_1778_ = lean_obj_once(&l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__2, &l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__2_once, _init_l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__2);
v___x_1779_ = lean_box(0);
v___x_1780_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_1778_, v___x_1776_, v_env_1775_, v_asyncMode_1777_, v___x_1779_);
v___x_1781_ = l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg(v___x_1780_);
lean_dec(v___x_1780_);
v_sz_1782_ = lean_array_size(v___x_1781_);
v___x_1783_ = ((size_t)0ULL);
v___x_1784_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__1(v_sz_1782_, v___x_1783_, v___x_1781_);
v___x_1785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1785_, 0, v___x_1784_);
return v___x_1785_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg___boxed(lean_object* v_a_1786_, lean_object* v_a_1787_){
_start:
{
lean_object* v_res_1788_; 
v_res_1788_ = l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(v_a_1786_);
lean_dec(v_a_1786_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecls(lean_object* v_a_1789_, lean_object* v_a_1790_){
_start:
{
lean_object* v___x_1792_; 
v___x_1792_ = l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(v_a_1790_);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecls___boxed(lean_object* v_a_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_){
_start:
{
lean_object* v_res_1796_; 
v_res_1796_ = l_Lean_Compiler_LCNF_getLocalImpureDecls(v_a_1793_, v_a_1794_);
lean_dec(v_a_1794_);
lean_dec_ref(v_a_1793_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0(lean_object* v_00_u03b2_1797_, lean_object* v_m_1798_){
_start:
{
lean_object* v___x_1799_; 
v___x_1799_ = l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg(v_m_1798_);
return v___x_1799_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___boxed(lean_object* v_00_u03b2_1800_, lean_object* v_m_1801_){
_start:
{
lean_object* v_res_1802_; 
v_res_1802_ = l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0(v_00_u03b2_1800_, v_m_1801_);
lean_dec_ref(v_m_1801_);
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object* v_declName_1803_, lean_object* v_a_1804_){
_start:
{
lean_object* v___x_1806_; lean_object* v_env_1807_; uint8_t v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___x_1806_ = lean_st_ref_get(v_a_1804_);
v_env_1807_ = lean_ctor_get(v___x_1806_, 0);
lean_inc_ref(v_env_1807_);
lean_dec(v___x_1806_);
v___x_1808_ = 1;
v___x_1809_ = l_Lean_Compiler_LCNF_impureSigExt;
v___x_1810_ = l_Lean_Compiler_LCNF_getSigCore_x3f(v___x_1808_, v_env_1807_, v___x_1809_, v_declName_1803_);
v___x_1811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1811_, 0, v___x_1810_);
return v___x_1811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg___boxed(lean_object* v_declName_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_){
_start:
{
lean_object* v_res_1815_; 
v_res_1815_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_declName_1812_, v_a_1813_);
lean_dec(v_a_1813_);
return v_res_1815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f(lean_object* v_declName_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_){
_start:
{
lean_object* v___x_1820_; 
v___x_1820_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_declName_1816_, v_a_1818_);
return v___x_1820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___boxed(lean_object* v_declName_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_){
_start:
{
lean_object* v_res_1825_; 
v_res_1825_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f(v_declName_1821_, v_a_1822_, v_a_1823_);
lean_dec(v_a_1823_);
lean_dec_ref(v_a_1822_);
return v_res_1825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveBaseDeclCore(lean_object* v_env_1826_, lean_object* v_decl_1827_){
_start:
{
lean_object* v___x_1828_; lean_object* v_toEnvExtension_1829_; lean_object* v_asyncMode_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; 
v___x_1828_ = l_Lean_Compiler_LCNF_baseExt;
v_toEnvExtension_1829_ = lean_ctor_get(v___x_1828_, 0);
v_asyncMode_1830_ = lean_ctor_get(v_toEnvExtension_1829_, 2);
v___x_1831_ = lean_box(0);
v___x_1832_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1828_, v_env_1826_, v_decl_1827_, v_asyncMode_1830_, v___x_1831_);
return v___x_1832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveMonoDeclCore(lean_object* v_env_1833_, lean_object* v_decl_1834_){
_start:
{
lean_object* v___x_1835_; lean_object* v_toEnvExtension_1836_; lean_object* v_asyncMode_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1835_ = l_Lean_Compiler_LCNF_monoExt;
v_toEnvExtension_1836_ = lean_ctor_get(v___x_1835_, 0);
v_asyncMode_1837_ = lean_ctor_get(v_toEnvExtension_1836_, 2);
v___x_1838_ = lean_box(0);
v___x_1839_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1835_, v_env_1833_, v_decl_1834_, v_asyncMode_1837_, v___x_1838_);
return v___x_1839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveImpureDeclCore___lam__0(lean_object* v_toSignature_1840_, lean_object* v_decl_1841_, lean_object* v_s_1842_){
_start:
{
lean_object* v_name_1843_; lean_object* v___x_1844_; 
v_name_1843_ = lean_ctor_get(v_toSignature_1840_, 0);
lean_inc(v_name_1843_);
lean_dec_ref(v_toSignature_1840_);
v___x_1844_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1___redArg(v_s_1842_, v_name_1843_, v_decl_1841_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveImpureDeclCore(lean_object* v_env_1845_, lean_object* v_decl_1846_){
_start:
{
lean_object* v___x_1847_; lean_object* v_asyncMode_1848_; lean_object* v_toSignature_1849_; lean_object* v___x_1850_; lean_object* v_toEnvExtension_1851_; lean_object* v_asyncMode_1852_; lean_object* v___f_1853_; lean_object* v___x_1854_; lean_object* v_env_1855_; lean_object* v___x_1856_; 
v___x_1847_ = l_Lean_Compiler_LCNF_impureExt;
v_asyncMode_1848_ = lean_ctor_get(v___x_1847_, 2);
v_toSignature_1849_ = lean_ctor_get(v_decl_1846_, 0);
lean_inc_ref(v_toSignature_1849_);
v___x_1850_ = l_Lean_Compiler_LCNF_impureSigExt;
v_toEnvExtension_1851_ = lean_ctor_get(v___x_1850_, 0);
v_asyncMode_1852_ = lean_ctor_get(v_toEnvExtension_1851_, 2);
lean_inc_ref(v_toSignature_1849_);
v___f_1853_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_saveImpureDeclCore___lam__0), 3, 2);
lean_closure_set(v___f_1853_, 0, v_toSignature_1849_);
lean_closure_set(v___f_1853_, 1, v_decl_1846_);
v___x_1854_ = lean_box(0);
v_env_1855_ = l_Lean_EnvExtension_modifyState___redArg(v___x_1847_, v_env_1845_, v___f_1853_, v_asyncMode_1848_, v___x_1854_);
v___x_1856_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1850_, v_env_1855_, v_toSignature_1849_, v_asyncMode_1852_, v___x_1854_);
return v___x_1856_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__0(void){
_start:
{
lean_object* v___x_1857_; 
v___x_1857_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1857_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__1(void){
_start:
{
lean_object* v___x_1858_; lean_object* v___x_1859_; 
v___x_1858_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__0, &l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__0);
v___x_1859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1859_, 0, v___x_1858_);
return v___x_1859_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__2(void){
_start:
{
lean_object* v___x_1860_; lean_object* v___x_1861_; 
v___x_1860_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__1, &l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__1);
v___x_1861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1861_, 0, v___x_1860_);
lean_ctor_set(v___x_1861_, 1, v___x_1860_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveBase___redArg(lean_object* v_decl_1862_, lean_object* v_a_1863_){
_start:
{
lean_object* v___x_1865_; lean_object* v_env_1866_; lean_object* v_nextMacroScope_1867_; lean_object* v_ngen_1868_; lean_object* v_auxDeclNGen_1869_; lean_object* v_traceState_1870_; lean_object* v_messages_1871_; lean_object* v_infoState_1872_; lean_object* v_snapshotTasks_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1885_; 
v___x_1865_ = lean_st_ref_take(v_a_1863_);
v_env_1866_ = lean_ctor_get(v___x_1865_, 0);
v_nextMacroScope_1867_ = lean_ctor_get(v___x_1865_, 1);
v_ngen_1868_ = lean_ctor_get(v___x_1865_, 2);
v_auxDeclNGen_1869_ = lean_ctor_get(v___x_1865_, 3);
v_traceState_1870_ = lean_ctor_get(v___x_1865_, 4);
v_messages_1871_ = lean_ctor_get(v___x_1865_, 6);
v_infoState_1872_ = lean_ctor_get(v___x_1865_, 7);
v_snapshotTasks_1873_ = lean_ctor_get(v___x_1865_, 8);
v_isSharedCheck_1885_ = !lean_is_exclusive(v___x_1865_);
if (v_isSharedCheck_1885_ == 0)
{
lean_object* v_unused_1886_; 
v_unused_1886_ = lean_ctor_get(v___x_1865_, 5);
lean_dec(v_unused_1886_);
v___x_1875_ = v___x_1865_;
v_isShared_1876_ = v_isSharedCheck_1885_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_snapshotTasks_1873_);
lean_inc(v_infoState_1872_);
lean_inc(v_messages_1871_);
lean_inc(v_traceState_1870_);
lean_inc(v_auxDeclNGen_1869_);
lean_inc(v_ngen_1868_);
lean_inc(v_nextMacroScope_1867_);
lean_inc(v_env_1866_);
lean_dec(v___x_1865_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1885_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1880_; 
v___x_1877_ = l_Lean_Compiler_LCNF_saveBaseDeclCore(v_env_1866_, v_decl_1862_);
v___x_1878_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__2, &l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__2);
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 5, v___x_1878_);
lean_ctor_set(v___x_1875_, 0, v___x_1877_);
v___x_1880_ = v___x_1875_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v___x_1877_);
lean_ctor_set(v_reuseFailAlloc_1884_, 1, v_nextMacroScope_1867_);
lean_ctor_set(v_reuseFailAlloc_1884_, 2, v_ngen_1868_);
lean_ctor_set(v_reuseFailAlloc_1884_, 3, v_auxDeclNGen_1869_);
lean_ctor_set(v_reuseFailAlloc_1884_, 4, v_traceState_1870_);
lean_ctor_set(v_reuseFailAlloc_1884_, 5, v___x_1878_);
lean_ctor_set(v_reuseFailAlloc_1884_, 6, v_messages_1871_);
lean_ctor_set(v_reuseFailAlloc_1884_, 7, v_infoState_1872_);
lean_ctor_set(v_reuseFailAlloc_1884_, 8, v_snapshotTasks_1873_);
v___x_1880_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1881_ = lean_st_ref_set(v_a_1863_, v___x_1880_);
v___x_1882_ = lean_box(0);
v___x_1883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1883_, 0, v___x_1882_);
return v___x_1883_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveBase___redArg___boxed(lean_object* v_decl_1887_, lean_object* v_a_1888_, lean_object* v_a_1889_){
_start:
{
lean_object* v_res_1890_; 
v_res_1890_ = l_Lean_Compiler_LCNF_Decl_saveBase___redArg(v_decl_1887_, v_a_1888_);
lean_dec(v_a_1888_);
return v_res_1890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveBase(lean_object* v_decl_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_){
_start:
{
lean_object* v___x_1895_; 
v___x_1895_ = l_Lean_Compiler_LCNF_Decl_saveBase___redArg(v_decl_1891_, v_a_1893_);
return v___x_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveBase___boxed(lean_object* v_decl_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_){
_start:
{
lean_object* v_res_1900_; 
v_res_1900_ = l_Lean_Compiler_LCNF_Decl_saveBase(v_decl_1896_, v_a_1897_, v_a_1898_);
lean_dec(v_a_1898_);
lean_dec_ref(v_a_1897_);
return v_res_1900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveMono___redArg(lean_object* v_decl_1901_, lean_object* v_a_1902_){
_start:
{
lean_object* v___x_1904_; lean_object* v_env_1905_; lean_object* v_nextMacroScope_1906_; lean_object* v_ngen_1907_; lean_object* v_auxDeclNGen_1908_; lean_object* v_traceState_1909_; lean_object* v_messages_1910_; lean_object* v_infoState_1911_; lean_object* v_snapshotTasks_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1924_; 
v___x_1904_ = lean_st_ref_take(v_a_1902_);
v_env_1905_ = lean_ctor_get(v___x_1904_, 0);
v_nextMacroScope_1906_ = lean_ctor_get(v___x_1904_, 1);
v_ngen_1907_ = lean_ctor_get(v___x_1904_, 2);
v_auxDeclNGen_1908_ = lean_ctor_get(v___x_1904_, 3);
v_traceState_1909_ = lean_ctor_get(v___x_1904_, 4);
v_messages_1910_ = lean_ctor_get(v___x_1904_, 6);
v_infoState_1911_ = lean_ctor_get(v___x_1904_, 7);
v_snapshotTasks_1912_ = lean_ctor_get(v___x_1904_, 8);
v_isSharedCheck_1924_ = !lean_is_exclusive(v___x_1904_);
if (v_isSharedCheck_1924_ == 0)
{
lean_object* v_unused_1925_; 
v_unused_1925_ = lean_ctor_get(v___x_1904_, 5);
lean_dec(v_unused_1925_);
v___x_1914_ = v___x_1904_;
v_isShared_1915_ = v_isSharedCheck_1924_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_snapshotTasks_1912_);
lean_inc(v_infoState_1911_);
lean_inc(v_messages_1910_);
lean_inc(v_traceState_1909_);
lean_inc(v_auxDeclNGen_1908_);
lean_inc(v_ngen_1907_);
lean_inc(v_nextMacroScope_1906_);
lean_inc(v_env_1905_);
lean_dec(v___x_1904_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1924_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1919_; 
v___x_1916_ = l_Lean_Compiler_LCNF_saveMonoDeclCore(v_env_1905_, v_decl_1901_);
v___x_1917_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__2, &l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__2);
if (v_isShared_1915_ == 0)
{
lean_ctor_set(v___x_1914_, 5, v___x_1917_);
lean_ctor_set(v___x_1914_, 0, v___x_1916_);
v___x_1919_ = v___x_1914_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v___x_1916_);
lean_ctor_set(v_reuseFailAlloc_1923_, 1, v_nextMacroScope_1906_);
lean_ctor_set(v_reuseFailAlloc_1923_, 2, v_ngen_1907_);
lean_ctor_set(v_reuseFailAlloc_1923_, 3, v_auxDeclNGen_1908_);
lean_ctor_set(v_reuseFailAlloc_1923_, 4, v_traceState_1909_);
lean_ctor_set(v_reuseFailAlloc_1923_, 5, v___x_1917_);
lean_ctor_set(v_reuseFailAlloc_1923_, 6, v_messages_1910_);
lean_ctor_set(v_reuseFailAlloc_1923_, 7, v_infoState_1911_);
lean_ctor_set(v_reuseFailAlloc_1923_, 8, v_snapshotTasks_1912_);
v___x_1919_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; 
v___x_1920_ = lean_st_ref_set(v_a_1902_, v___x_1919_);
v___x_1921_ = lean_box(0);
v___x_1922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1921_);
return v___x_1922_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveMono___redArg___boxed(lean_object* v_decl_1926_, lean_object* v_a_1927_, lean_object* v_a_1928_){
_start:
{
lean_object* v_res_1929_; 
v_res_1929_ = l_Lean_Compiler_LCNF_Decl_saveMono___redArg(v_decl_1926_, v_a_1927_);
lean_dec(v_a_1927_);
return v_res_1929_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveMono(lean_object* v_decl_1930_, lean_object* v_a_1931_, lean_object* v_a_1932_){
_start:
{
lean_object* v___x_1934_; 
v___x_1934_ = l_Lean_Compiler_LCNF_Decl_saveMono___redArg(v_decl_1930_, v_a_1932_);
return v___x_1934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveMono___boxed(lean_object* v_decl_1935_, lean_object* v_a_1936_, lean_object* v_a_1937_, lean_object* v_a_1938_){
_start:
{
lean_object* v_res_1939_; 
v_res_1939_ = l_Lean_Compiler_LCNF_Decl_saveMono(v_decl_1935_, v_a_1936_, v_a_1937_);
lean_dec(v_a_1937_);
lean_dec_ref(v_a_1936_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure___redArg(lean_object* v_decl_1940_, lean_object* v_a_1941_){
_start:
{
lean_object* v___x_1943_; lean_object* v_env_1944_; lean_object* v_nextMacroScope_1945_; lean_object* v_ngen_1946_; lean_object* v_auxDeclNGen_1947_; lean_object* v_traceState_1948_; lean_object* v_messages_1949_; lean_object* v_infoState_1950_; lean_object* v_snapshotTasks_1951_; lean_object* v___x_1953_; uint8_t v_isShared_1954_; uint8_t v_isSharedCheck_1963_; 
v___x_1943_ = lean_st_ref_take(v_a_1941_);
v_env_1944_ = lean_ctor_get(v___x_1943_, 0);
v_nextMacroScope_1945_ = lean_ctor_get(v___x_1943_, 1);
v_ngen_1946_ = lean_ctor_get(v___x_1943_, 2);
v_auxDeclNGen_1947_ = lean_ctor_get(v___x_1943_, 3);
v_traceState_1948_ = lean_ctor_get(v___x_1943_, 4);
v_messages_1949_ = lean_ctor_get(v___x_1943_, 6);
v_infoState_1950_ = lean_ctor_get(v___x_1943_, 7);
v_snapshotTasks_1951_ = lean_ctor_get(v___x_1943_, 8);
v_isSharedCheck_1963_ = !lean_is_exclusive(v___x_1943_);
if (v_isSharedCheck_1963_ == 0)
{
lean_object* v_unused_1964_; 
v_unused_1964_ = lean_ctor_get(v___x_1943_, 5);
lean_dec(v_unused_1964_);
v___x_1953_ = v___x_1943_;
v_isShared_1954_ = v_isSharedCheck_1963_;
goto v_resetjp_1952_;
}
else
{
lean_inc(v_snapshotTasks_1951_);
lean_inc(v_infoState_1950_);
lean_inc(v_messages_1949_);
lean_inc(v_traceState_1948_);
lean_inc(v_auxDeclNGen_1947_);
lean_inc(v_ngen_1946_);
lean_inc(v_nextMacroScope_1945_);
lean_inc(v_env_1944_);
lean_dec(v___x_1943_);
v___x_1953_ = lean_box(0);
v_isShared_1954_ = v_isSharedCheck_1963_;
goto v_resetjp_1952_;
}
v_resetjp_1952_:
{
lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1958_; 
v___x_1955_ = l_Lean_Compiler_LCNF_saveImpureDeclCore(v_env_1944_, v_decl_1940_);
v___x_1956_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__2, &l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__2);
if (v_isShared_1954_ == 0)
{
lean_ctor_set(v___x_1953_, 5, v___x_1956_);
lean_ctor_set(v___x_1953_, 0, v___x_1955_);
v___x_1958_ = v___x_1953_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v___x_1955_);
lean_ctor_set(v_reuseFailAlloc_1962_, 1, v_nextMacroScope_1945_);
lean_ctor_set(v_reuseFailAlloc_1962_, 2, v_ngen_1946_);
lean_ctor_set(v_reuseFailAlloc_1962_, 3, v_auxDeclNGen_1947_);
lean_ctor_set(v_reuseFailAlloc_1962_, 4, v_traceState_1948_);
lean_ctor_set(v_reuseFailAlloc_1962_, 5, v___x_1956_);
lean_ctor_set(v_reuseFailAlloc_1962_, 6, v_messages_1949_);
lean_ctor_set(v_reuseFailAlloc_1962_, 7, v_infoState_1950_);
lean_ctor_set(v_reuseFailAlloc_1962_, 8, v_snapshotTasks_1951_);
v___x_1958_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; 
v___x_1959_ = lean_st_ref_set(v_a_1941_, v___x_1958_);
v___x_1960_ = lean_box(0);
v___x_1961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1960_);
return v___x_1961_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure___redArg___boxed(lean_object* v_decl_1965_, lean_object* v_a_1966_, lean_object* v_a_1967_){
_start:
{
lean_object* v_res_1968_; 
v_res_1968_ = l_Lean_Compiler_LCNF_Decl_saveImpure___redArg(v_decl_1965_, v_a_1966_);
lean_dec(v_a_1966_);
return v_res_1968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure(lean_object* v_decl_1969_, lean_object* v_a_1970_, lean_object* v_a_1971_){
_start:
{
lean_object* v___x_1973_; 
v___x_1973_ = l_Lean_Compiler_LCNF_Decl_saveImpure___redArg(v_decl_1969_, v_a_1971_);
return v___x_1973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure___boxed(lean_object* v_decl_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_){
_start:
{
lean_object* v_res_1978_; 
v_res_1978_ = l_Lean_Compiler_LCNF_Decl_saveImpure(v_decl_1974_, v_a_1975_, v_a_1976_);
lean_dec(v_a_1976_);
lean_dec_ref(v_a_1975_);
return v_res_1978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__0(lean_object* v_decl_1979_, lean_object* v_h_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_){
_start:
{
lean_object* v___x_1986_; 
v___x_1986_ = l_Lean_Compiler_LCNF_Decl_saveBase___redArg(v_decl_1979_, v___y_1984_);
return v___x_1986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__0___boxed(lean_object* v_decl_1987_, lean_object* v_h_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_){
_start:
{
lean_object* v_res_1994_; 
v_res_1994_ = l_Lean_Compiler_LCNF_Decl_save___lam__0(v_decl_1987_, v_h_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_);
lean_dec(v___y_1992_);
lean_dec_ref(v___y_1991_);
lean_dec(v___y_1990_);
lean_dec_ref(v___y_1989_);
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__1(lean_object* v_decl_1995_, lean_object* v_h_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_){
_start:
{
lean_object* v___x_2002_; 
v___x_2002_ = l_Lean_Compiler_LCNF_Decl_saveMono___redArg(v_decl_1995_, v___y_2000_);
return v___x_2002_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__1___boxed(lean_object* v_decl_2003_, lean_object* v_h_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_){
_start:
{
lean_object* v_res_2010_; 
v_res_2010_ = l_Lean_Compiler_LCNF_Decl_save___lam__1(v_decl_2003_, v_h_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_);
lean_dec(v___y_2008_);
lean_dec_ref(v___y_2007_);
lean_dec(v___y_2006_);
lean_dec_ref(v___y_2005_);
return v_res_2010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__2(lean_object* v_decl_2011_, lean_object* v_h_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_){
_start:
{
lean_object* v___x_2018_; 
v___x_2018_ = l_Lean_Compiler_LCNF_Decl_saveImpure___redArg(v_decl_2011_, v___y_2016_);
return v___x_2018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__2___boxed(lean_object* v_decl_2019_, lean_object* v_h_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_){
_start:
{
lean_object* v_res_2026_; 
v_res_2026_ = l_Lean_Compiler_LCNF_Decl_save___lam__2(v_decl_2019_, v_h_2020_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_);
lean_dec(v___y_2024_);
lean_dec_ref(v___y_2023_);
lean_dec(v___y_2022_);
lean_dec_ref(v___y_2021_);
return v_res_2026_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_save___closed__0(void){
_start:
{
lean_object* v___x_2027_; 
v___x_2027_ = l_instMonadEIO(lean_box(0));
return v___x_2027_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_save___closed__1(void){
_start:
{
lean_object* v___x_2028_; lean_object* v___x_2029_; 
v___x_2028_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_save___closed__0, &l_Lean_Compiler_LCNF_Decl_save___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_save___closed__0);
v___x_2029_ = l_StateRefT_x27_instMonad___redArg(v___x_2028_);
return v___x_2029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save(uint8_t v_pu_2032_, lean_object* v_decl_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_, lean_object* v_a_2037_){
_start:
{
lean_object* v___x_2039_; lean_object* v_toApplicative_2040_; lean_object* v_toFunctor_2041_; lean_object* v_toSeq_2042_; lean_object* v_toSeqLeft_2043_; lean_object* v_toSeqRight_2044_; lean_object* v___f_2045_; lean_object* v___f_2046_; lean_object* v___f_2047_; lean_object* v___f_2048_; lean_object* v___x_2049_; lean_object* v___f_2050_; lean_object* v___f_2051_; lean_object* v___f_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; 
v___x_2039_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_save___closed__1, &l_Lean_Compiler_LCNF_Decl_save___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_save___closed__1);
v_toApplicative_2040_ = lean_ctor_get(v___x_2039_, 0);
v_toFunctor_2041_ = lean_ctor_get(v_toApplicative_2040_, 0);
v_toSeq_2042_ = lean_ctor_get(v_toApplicative_2040_, 2);
v_toSeqLeft_2043_ = lean_ctor_get(v_toApplicative_2040_, 3);
v_toSeqRight_2044_ = lean_ctor_get(v_toApplicative_2040_, 4);
v___f_2045_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_save___closed__2));
v___f_2046_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_save___closed__3));
lean_inc_ref(v_toFunctor_2041_);
v___f_2047_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2047_, 0, v_toFunctor_2041_);
lean_inc_ref(v_toFunctor_2041_);
v___f_2048_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2048_, 0, v_toFunctor_2041_);
v___x_2049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2049_, 0, v___f_2047_);
lean_ctor_set(v___x_2049_, 1, v___f_2048_);
lean_inc(v_toSeqRight_2044_);
v___f_2050_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2050_, 0, v_toSeqRight_2044_);
lean_inc(v_toSeqLeft_2043_);
v___f_2051_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2051_, 0, v_toSeqLeft_2043_);
lean_inc(v_toSeq_2042_);
v___f_2052_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2052_, 0, v_toSeq_2042_);
v___x_2053_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2053_, 0, v___x_2049_);
lean_ctor_set(v___x_2053_, 1, v___f_2045_);
lean_ctor_set(v___x_2053_, 2, v___f_2052_);
lean_ctor_set(v___x_2053_, 3, v___f_2051_);
lean_ctor_set(v___x_2053_, 4, v___f_2050_);
v___x_2054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2054_, 0, v___x_2053_);
lean_ctor_set(v___x_2054_, 1, v___f_2046_);
v___x_2055_ = l_StateRefT_x27_instMonad___redArg(v___x_2054_);
v___x_2056_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_2034_);
if (lean_obj_tag(v___x_2056_) == 0)
{
lean_object* v_a_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___f_2060_; uint8_t v___x_2061_; 
v_a_2057_ = lean_ctor_get(v___x_2056_, 0);
lean_inc(v_a_2057_);
lean_dec_ref(v___x_2056_);
v___x_2058_ = lean_box(0);
v___x_2059_ = l_instInhabitedOfMonad___redArg(v___x_2055_, v___x_2058_);
v___f_2060_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2060_, 0, v___x_2059_);
v___x_2061_ = lean_unbox(v_a_2057_);
switch(v___x_2061_)
{
case 0:
{
lean_object* v___f_2062_; uint8_t v___x_2063_; lean_object* v___x_380__overap_2064_; lean_object* v___x_2065_; 
v___f_2062_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_save___lam__0___boxed), 7, 1);
lean_closure_set(v___f_2062_, 0, v_decl_2033_);
v___x_2063_ = lean_unbox(v_a_2057_);
lean_dec(v_a_2057_);
v___x_380__overap_2064_ = l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(v___f_2060_, v___x_2063_, v_pu_2032_, v___f_2062_);
lean_dec_ref(v___f_2060_);
lean_inc(v_a_2037_);
lean_inc_ref(v_a_2036_);
lean_inc(v_a_2035_);
lean_inc_ref(v_a_2034_);
v___x_2065_ = lean_apply_5(v___x_380__overap_2064_, v_a_2034_, v_a_2035_, v_a_2036_, v_a_2037_, lean_box(0));
return v___x_2065_;
}
case 1:
{
lean_object* v___f_2066_; uint8_t v___x_2067_; lean_object* v___x_398__overap_2068_; lean_object* v___x_2069_; 
v___f_2066_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_save___lam__1___boxed), 7, 1);
lean_closure_set(v___f_2066_, 0, v_decl_2033_);
v___x_2067_ = lean_unbox(v_a_2057_);
lean_dec(v_a_2057_);
v___x_398__overap_2068_ = l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(v___f_2060_, v___x_2067_, v_pu_2032_, v___f_2066_);
lean_dec_ref(v___f_2060_);
lean_inc(v_a_2037_);
lean_inc_ref(v_a_2036_);
lean_inc(v_a_2035_);
lean_inc_ref(v_a_2034_);
v___x_2069_ = lean_apply_5(v___x_398__overap_2068_, v_a_2034_, v_a_2035_, v_a_2036_, v_a_2037_, lean_box(0));
return v___x_2069_;
}
default: 
{
lean_object* v___f_2070_; uint8_t v___x_2071_; lean_object* v___x_416__overap_2072_; lean_object* v___x_2073_; 
v___f_2070_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_save___lam__2___boxed), 7, 1);
lean_closure_set(v___f_2070_, 0, v_decl_2033_);
v___x_2071_ = lean_unbox(v_a_2057_);
lean_dec(v_a_2057_);
v___x_416__overap_2072_ = l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(v___f_2060_, v___x_2071_, v_pu_2032_, v___f_2070_);
lean_dec_ref(v___f_2060_);
lean_inc(v_a_2037_);
lean_inc_ref(v_a_2036_);
lean_inc(v_a_2035_);
lean_inc_ref(v_a_2034_);
v___x_2073_ = lean_apply_5(v___x_416__overap_2072_, v_a_2034_, v_a_2035_, v_a_2036_, v_a_2037_, lean_box(0));
return v___x_2073_;
}
}
}
else
{
lean_object* v_a_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2081_; 
lean_dec_ref(v___x_2055_);
lean_dec_ref(v_decl_2033_);
v_a_2074_ = lean_ctor_get(v___x_2056_, 0);
v_isSharedCheck_2081_ = !lean_is_exclusive(v___x_2056_);
if (v_isSharedCheck_2081_ == 0)
{
v___x_2076_ = v___x_2056_;
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_a_2074_);
lean_dec(v___x_2056_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v___x_2079_; 
if (v_isShared_2077_ == 0)
{
v___x_2079_ = v___x_2076_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v_a_2074_);
v___x_2079_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
return v___x_2079_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___boxed(lean_object* v_pu_2082_, lean_object* v_decl_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_){
_start:
{
uint8_t v_pu_boxed_2089_; lean_object* v_res_2090_; 
v_pu_boxed_2089_ = lean_unbox(v_pu_2082_);
v_res_2090_ = l_Lean_Compiler_LCNF_Decl_save(v_pu_boxed_2089_, v_decl_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_);
lean_dec(v_a_2087_);
lean_dec_ref(v_a_2086_);
lean_dec(v_a_2085_);
lean_dec_ref(v_a_2084_);
return v_res_2090_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2091_; 
v___x_2091_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2091_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2092_; lean_object* v___x_2093_; 
v___x_2092_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__0);
v___x_2093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2093_, 0, v___x_2092_);
return v___x_2093_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; 
v___x_2094_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__1);
v___x_2095_ = lean_unsigned_to_nat(0u);
v___x_2096_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2095_);
lean_ctor_set(v___x_2096_, 1, v___x_2095_);
lean_ctor_set(v___x_2096_, 2, v___x_2095_);
lean_ctor_set(v___x_2096_, 3, v___x_2094_);
lean_ctor_set(v___x_2096_, 4, v___x_2094_);
lean_ctor_set(v___x_2096_, 5, v___x_2094_);
lean_ctor_set(v___x_2096_, 6, v___x_2094_);
lean_ctor_set(v___x_2096_, 7, v___x_2094_);
lean_ctor_set(v___x_2096_, 8, v___x_2094_);
return v___x_2096_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; 
v___x_2097_ = lean_unsigned_to_nat(32u);
v___x_2098_ = lean_mk_empty_array_with_capacity(v___x_2097_);
v___x_2099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2098_);
return v___x_2099_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2100_ = ((size_t)5ULL);
v___x_2101_ = lean_unsigned_to_nat(0u);
v___x_2102_ = lean_unsigned_to_nat(32u);
v___x_2103_ = lean_mk_empty_array_with_capacity(v___x_2102_);
v___x_2104_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__3);
v___x_2105_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2105_, 0, v___x_2104_);
lean_ctor_set(v___x_2105_, 1, v___x_2103_);
lean_ctor_set(v___x_2105_, 2, v___x_2101_);
lean_ctor_set(v___x_2105_, 3, v___x_2101_);
lean_ctor_set_usize(v___x_2105_, 4, v___x_2100_);
return v___x_2105_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
v___x_2106_ = lean_box(1);
v___x_2107_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__4);
v___x_2108_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__1);
v___x_2109_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2109_, 0, v___x_2108_);
lean_ctor_set(v___x_2109_, 1, v___x_2107_);
lean_ctor_set(v___x_2109_, 2, v___x_2106_);
return v___x_2109_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0(lean_object* v_msgData_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_){
_start:
{
lean_object* v___x_2114_; lean_object* v_env_2115_; lean_object* v_options_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; 
v___x_2114_ = lean_st_ref_get(v___y_2112_);
v_env_2115_ = lean_ctor_get(v___x_2114_, 0);
lean_inc_ref(v_env_2115_);
lean_dec(v___x_2114_);
v_options_2116_ = lean_ctor_get(v___y_2111_, 2);
v___x_2117_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__2);
v___x_2118_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_2116_);
v___x_2119_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2119_, 0, v_env_2115_);
lean_ctor_set(v___x_2119_, 1, v___x_2117_);
lean_ctor_set(v___x_2119_, 2, v___x_2118_);
lean_ctor_set(v___x_2119_, 3, v_options_2116_);
v___x_2120_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2119_);
lean_ctor_set(v___x_2120_, 1, v_msgData_2110_);
v___x_2121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2120_);
return v___x_2121_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___boxed(lean_object* v_msgData_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_){
_start:
{
lean_object* v_res_2126_; 
v_res_2126_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0(v_msgData_2122_, v___y_2123_, v___y_2124_);
lean_dec(v___y_2124_);
lean_dec_ref(v___y_2123_);
return v_res_2126_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0___redArg(lean_object* v_msg_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_){
_start:
{
lean_object* v_ref_2131_; lean_object* v___x_2132_; lean_object* v_a_2133_; lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2141_; 
v_ref_2131_ = lean_ctor_get(v___y_2128_, 5);
v___x_2132_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0(v_msg_2127_, v___y_2128_, v___y_2129_);
v_a_2133_ = lean_ctor_get(v___x_2132_, 0);
v_isSharedCheck_2141_ = !lean_is_exclusive(v___x_2132_);
if (v_isSharedCheck_2141_ == 0)
{
v___x_2135_ = v___x_2132_;
v_isShared_2136_ = v_isSharedCheck_2141_;
goto v_resetjp_2134_;
}
else
{
lean_inc(v_a_2133_);
lean_dec(v___x_2132_);
v___x_2135_ = lean_box(0);
v_isShared_2136_ = v_isSharedCheck_2141_;
goto v_resetjp_2134_;
}
v_resetjp_2134_:
{
lean_object* v___x_2137_; lean_object* v___x_2139_; 
lean_inc(v_ref_2131_);
v___x_2137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2137_, 0, v_ref_2131_);
lean_ctor_set(v___x_2137_, 1, v_a_2133_);
if (v_isShared_2136_ == 0)
{
lean_ctor_set_tag(v___x_2135_, 1);
lean_ctor_set(v___x_2135_, 0, v___x_2137_);
v___x_2139_ = v___x_2135_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2140_; 
v_reuseFailAlloc_2140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2140_, 0, v___x_2137_);
v___x_2139_ = v_reuseFailAlloc_2140_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
return v___x_2139_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0___redArg___boxed(lean_object* v_msg_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_){
_start:
{
lean_object* v_res_2146_; 
v_res_2146_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0___redArg(v_msg_2142_, v___y_2143_, v___y_2144_);
lean_dec(v___y_2144_);
lean_dec_ref(v___y_2143_);
return v_res_2146_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__1(void){
_start:
{
lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2148_ = ((lean_object*)(l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__0));
v___x_2149_ = l_Lean_stringToMessageData(v___x_2148_);
return v___x_2149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f(lean_object* v_declName_2150_, uint8_t v_phase_2151_, lean_object* v_a_2152_, lean_object* v_a_2153_){
_start:
{
switch(v_phase_2151_)
{
case 0:
{
lean_object* v___x_2155_; 
v___x_2155_ = l_Lean_Compiler_LCNF_getBaseDecl_x3f___redArg(v_declName_2150_, v_a_2153_);
return v___x_2155_;
}
case 1:
{
lean_object* v___x_2156_; 
v___x_2156_ = l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(v_declName_2150_, v_a_2153_);
return v___x_2156_;
}
default: 
{
lean_object* v___x_2157_; lean_object* v___x_2158_; 
lean_dec(v_declName_2150_);
v___x_2157_ = lean_obj_once(&l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__1, &l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__1);
v___x_2158_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0___redArg(v___x_2157_, v_a_2152_, v_a_2153_);
return v___x_2158_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f___boxed(lean_object* v_declName_2159_, lean_object* v_phase_2160_, lean_object* v_a_2161_, lean_object* v_a_2162_, lean_object* v_a_2163_){
_start:
{
uint8_t v_phase_boxed_2164_; lean_object* v_res_2165_; 
v_phase_boxed_2164_ = lean_unbox(v_phase_2160_);
v_res_2165_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_2159_, v_phase_boxed_2164_, v_a_2161_, v_a_2162_);
lean_dec(v_a_2162_);
lean_dec_ref(v_a_2161_);
return v_res_2165_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0(lean_object* v_00_u03b1_2166_, lean_object* v_msg_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_){
_start:
{
lean_object* v___x_2171_; 
v___x_2171_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0___redArg(v_msg_2167_, v___y_2168_, v___y_2169_);
return v___x_2171_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0___boxed(lean_object* v_00_u03b1_2172_, lean_object* v_msg_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_){
_start:
{
lean_object* v_res_2177_; 
v_res_2177_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0(v_00_u03b1_2172_, v_msg_2173_, v___y_2174_, v___y_2175_);
lean_dec(v___y_2175_);
lean_dec_ref(v___y_2174_);
return v_res_2177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDecl_x3f___redArg(lean_object* v_declName_2178_, lean_object* v_a_2179_, lean_object* v_a_2180_, lean_object* v_a_2181_){
_start:
{
lean_object* v___x_2183_; 
v___x_2183_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_2179_);
if (lean_obj_tag(v___x_2183_) == 0)
{
lean_object* v_a_2184_; uint8_t v___x_2185_; lean_object* v___x_2186_; 
v_a_2184_ = lean_ctor_get(v___x_2183_, 0);
lean_inc(v_a_2184_);
lean_dec_ref(v___x_2183_);
v___x_2185_ = lean_unbox(v_a_2184_);
v___x_2186_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_2178_, v___x_2185_, v_a_2180_, v_a_2181_);
if (lean_obj_tag(v___x_2186_) == 0)
{
lean_object* v_a_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2210_; 
v_a_2187_ = lean_ctor_get(v___x_2186_, 0);
v_isSharedCheck_2210_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2210_ == 0)
{
v___x_2189_ = v___x_2186_;
v_isShared_2190_ = v_isSharedCheck_2210_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_a_2187_);
lean_dec(v___x_2186_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2210_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
if (lean_obj_tag(v_a_2187_) == 1)
{
lean_object* v_val_2191_; lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2205_; 
v_val_2191_ = lean_ctor_get(v_a_2187_, 0);
v_isSharedCheck_2205_ = !lean_is_exclusive(v_a_2187_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2193_ = v_a_2187_;
v_isShared_2194_ = v_isSharedCheck_2205_;
goto v_resetjp_2192_;
}
else
{
lean_inc(v_val_2191_);
lean_dec(v_a_2187_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2205_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
uint8_t v___x_2195_; uint8_t v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2200_; 
v___x_2195_ = lean_unbox(v_a_2184_);
lean_dec(v_a_2184_);
v___x_2196_ = l_Lean_Compiler_LCNF_Phase_toPurity(v___x_2195_);
v___x_2197_ = lean_box(v___x_2196_);
v___x_2198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2198_, 0, v___x_2197_);
lean_ctor_set(v___x_2198_, 1, v_val_2191_);
if (v_isShared_2194_ == 0)
{
lean_ctor_set(v___x_2193_, 0, v___x_2198_);
v___x_2200_ = v___x_2193_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v___x_2198_);
v___x_2200_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
lean_object* v___x_2202_; 
if (v_isShared_2190_ == 0)
{
lean_ctor_set(v___x_2189_, 0, v___x_2200_);
v___x_2202_ = v___x_2189_;
goto v_reusejp_2201_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v___x_2200_);
v___x_2202_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2201_;
}
v_reusejp_2201_:
{
return v___x_2202_;
}
}
}
}
else
{
lean_object* v___x_2206_; lean_object* v___x_2208_; 
lean_dec(v_a_2187_);
lean_dec(v_a_2184_);
v___x_2206_ = lean_box(0);
if (v_isShared_2190_ == 0)
{
lean_ctor_set(v___x_2189_, 0, v___x_2206_);
v___x_2208_ = v___x_2189_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v___x_2206_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
}
}
else
{
lean_object* v_a_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2218_; 
lean_dec(v_a_2184_);
v_a_2211_ = lean_ctor_get(v___x_2186_, 0);
v_isSharedCheck_2218_ = !lean_is_exclusive(v___x_2186_);
if (v_isSharedCheck_2218_ == 0)
{
v___x_2213_ = v___x_2186_;
v_isShared_2214_ = v_isSharedCheck_2218_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_a_2211_);
lean_dec(v___x_2186_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2218_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v___x_2216_; 
if (v_isShared_2214_ == 0)
{
v___x_2216_ = v___x_2213_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2217_; 
v_reuseFailAlloc_2217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2217_, 0, v_a_2211_);
v___x_2216_ = v_reuseFailAlloc_2217_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
return v___x_2216_;
}
}
}
}
else
{
lean_object* v_a_2219_; lean_object* v___x_2221_; uint8_t v_isShared_2222_; uint8_t v_isSharedCheck_2226_; 
lean_dec(v_declName_2178_);
v_a_2219_ = lean_ctor_get(v___x_2183_, 0);
v_isSharedCheck_2226_ = !lean_is_exclusive(v___x_2183_);
if (v_isSharedCheck_2226_ == 0)
{
v___x_2221_ = v___x_2183_;
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
else
{
lean_inc(v_a_2219_);
lean_dec(v___x_2183_);
v___x_2221_ = lean_box(0);
v_isShared_2222_ = v_isSharedCheck_2226_;
goto v_resetjp_2220_;
}
v_resetjp_2220_:
{
lean_object* v___x_2224_; 
if (v_isShared_2222_ == 0)
{
v___x_2224_ = v___x_2221_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v_a_2219_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDecl_x3f___redArg___boxed(lean_object* v_declName_2227_, lean_object* v_a_2228_, lean_object* v_a_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_){
_start:
{
lean_object* v_res_2232_; 
v_res_2232_ = l_Lean_Compiler_LCNF_getDecl_x3f___redArg(v_declName_2227_, v_a_2228_, v_a_2229_, v_a_2230_);
lean_dec(v_a_2230_);
lean_dec_ref(v_a_2229_);
lean_dec_ref(v_a_2228_);
return v_res_2232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDecl_x3f(lean_object* v_declName_2233_, lean_object* v_a_2234_, lean_object* v_a_2235_, lean_object* v_a_2236_, lean_object* v_a_2237_){
_start:
{
lean_object* v___x_2239_; 
v___x_2239_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_2234_);
if (lean_obj_tag(v___x_2239_) == 0)
{
lean_object* v_a_2240_; uint8_t v___x_2241_; lean_object* v___x_2242_; 
v_a_2240_ = lean_ctor_get(v___x_2239_, 0);
lean_inc(v_a_2240_);
lean_dec_ref(v___x_2239_);
v___x_2241_ = lean_unbox(v_a_2240_);
v___x_2242_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_2233_, v___x_2241_, v_a_2236_, v_a_2237_);
if (lean_obj_tag(v___x_2242_) == 0)
{
lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2266_; 
v_a_2243_ = lean_ctor_get(v___x_2242_, 0);
v_isSharedCheck_2266_ = !lean_is_exclusive(v___x_2242_);
if (v_isSharedCheck_2266_ == 0)
{
v___x_2245_ = v___x_2242_;
v_isShared_2246_ = v_isSharedCheck_2266_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_dec(v___x_2242_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2266_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
if (lean_obj_tag(v_a_2243_) == 1)
{
lean_object* v_val_2247_; lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2261_; 
v_val_2247_ = lean_ctor_get(v_a_2243_, 0);
v_isSharedCheck_2261_ = !lean_is_exclusive(v_a_2243_);
if (v_isSharedCheck_2261_ == 0)
{
v___x_2249_ = v_a_2243_;
v_isShared_2250_ = v_isSharedCheck_2261_;
goto v_resetjp_2248_;
}
else
{
lean_inc(v_val_2247_);
lean_dec(v_a_2243_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2261_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
uint8_t v___x_2251_; uint8_t v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2256_; 
v___x_2251_ = lean_unbox(v_a_2240_);
lean_dec(v_a_2240_);
v___x_2252_ = l_Lean_Compiler_LCNF_Phase_toPurity(v___x_2251_);
v___x_2253_ = lean_box(v___x_2252_);
v___x_2254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2254_, 0, v___x_2253_);
lean_ctor_set(v___x_2254_, 1, v_val_2247_);
if (v_isShared_2250_ == 0)
{
lean_ctor_set(v___x_2249_, 0, v___x_2254_);
v___x_2256_ = v___x_2249_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2260_; 
v_reuseFailAlloc_2260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2260_, 0, v___x_2254_);
v___x_2256_ = v_reuseFailAlloc_2260_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
lean_object* v___x_2258_; 
if (v_isShared_2246_ == 0)
{
lean_ctor_set(v___x_2245_, 0, v___x_2256_);
v___x_2258_ = v___x_2245_;
goto v_reusejp_2257_;
}
else
{
lean_object* v_reuseFailAlloc_2259_; 
v_reuseFailAlloc_2259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2259_, 0, v___x_2256_);
v___x_2258_ = v_reuseFailAlloc_2259_;
goto v_reusejp_2257_;
}
v_reusejp_2257_:
{
return v___x_2258_;
}
}
}
}
else
{
lean_object* v___x_2262_; lean_object* v___x_2264_; 
lean_dec(v_a_2243_);
lean_dec(v_a_2240_);
v___x_2262_ = lean_box(0);
if (v_isShared_2246_ == 0)
{
lean_ctor_set(v___x_2245_, 0, v___x_2262_);
v___x_2264_ = v___x_2245_;
goto v_reusejp_2263_;
}
else
{
lean_object* v_reuseFailAlloc_2265_; 
v_reuseFailAlloc_2265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2265_, 0, v___x_2262_);
v___x_2264_ = v_reuseFailAlloc_2265_;
goto v_reusejp_2263_;
}
v_reusejp_2263_:
{
return v___x_2264_;
}
}
}
}
else
{
lean_object* v_a_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2274_; 
lean_dec(v_a_2240_);
v_a_2267_ = lean_ctor_get(v___x_2242_, 0);
v_isSharedCheck_2274_ = !lean_is_exclusive(v___x_2242_);
if (v_isSharedCheck_2274_ == 0)
{
v___x_2269_ = v___x_2242_;
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_a_2267_);
lean_dec(v___x_2242_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2274_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2272_; 
if (v_isShared_2270_ == 0)
{
v___x_2272_ = v___x_2269_;
goto v_reusejp_2271_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v_a_2267_);
v___x_2272_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2271_;
}
v_reusejp_2271_:
{
return v___x_2272_;
}
}
}
}
else
{
lean_object* v_a_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2282_; 
lean_dec(v_declName_2233_);
v_a_2275_ = lean_ctor_get(v___x_2239_, 0);
v_isSharedCheck_2282_ = !lean_is_exclusive(v___x_2239_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2277_ = v___x_2239_;
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_a_2275_);
lean_dec(v___x_2239_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v___x_2280_; 
if (v_isShared_2278_ == 0)
{
v___x_2280_ = v___x_2277_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v_a_2275_);
v___x_2280_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
return v___x_2280_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDecl_x3f___boxed(lean_object* v_declName_2283_, lean_object* v_a_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_){
_start:
{
lean_object* v_res_2289_; 
v_res_2289_ = l_Lean_Compiler_LCNF_getDecl_x3f(v_declName_2283_, v_a_2284_, v_a_2285_, v_a_2286_, v_a_2287_);
lean_dec(v_a_2287_);
lean_dec_ref(v_a_2286_);
lean_dec(v_a_2285_);
lean_dec_ref(v_a_2284_);
return v_res_2289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg(lean_object* v_declName_2290_, uint8_t v_phase_2291_, lean_object* v_a_2292_){
_start:
{
lean_object* v___x_2294_; 
v___x_2294_ = lean_obj_once(&l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__2, &l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__2_once, _init_l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__2);
switch(v_phase_2291_)
{
case 0:
{
lean_object* v___x_2295_; lean_object* v_env_2296_; lean_object* v___x_2297_; lean_object* v_toEnvExtension_2298_; lean_object* v_asyncMode_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v___x_2295_ = lean_st_ref_get(v_a_2292_);
v_env_2296_ = lean_ctor_get(v___x_2295_, 0);
lean_inc_ref(v_env_2296_);
lean_dec(v___x_2295_);
v___x_2297_ = l_Lean_Compiler_LCNF_baseExt;
v_toEnvExtension_2298_ = lean_ctor_get(v___x_2297_, 0);
v_asyncMode_2299_ = lean_ctor_get(v_toEnvExtension_2298_, 2);
v___x_2300_ = lean_box(0);
v___x_2301_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2294_, v___x_2297_, v_env_2296_, v_asyncMode_2299_, v___x_2300_);
v___x_2302_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(v___x_2301_, v_declName_2290_);
v___x_2303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2303_, 0, v___x_2302_);
return v___x_2303_;
}
case 1:
{
lean_object* v___x_2304_; lean_object* v_env_2305_; lean_object* v___x_2306_; lean_object* v_toEnvExtension_2307_; lean_object* v_asyncMode_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2304_ = lean_st_ref_get(v_a_2292_);
v_env_2305_ = lean_ctor_get(v___x_2304_, 0);
lean_inc_ref(v_env_2305_);
lean_dec(v___x_2304_);
v___x_2306_ = l_Lean_Compiler_LCNF_monoExt;
v_toEnvExtension_2307_ = lean_ctor_get(v___x_2306_, 0);
v_asyncMode_2308_ = lean_ctor_get(v_toEnvExtension_2307_, 2);
v___x_2309_ = lean_box(0);
v___x_2310_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2294_, v___x_2306_, v_env_2305_, v_asyncMode_2308_, v___x_2309_);
v___x_2311_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(v___x_2310_, v_declName_2290_);
v___x_2312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2312_, 0, v___x_2311_);
return v___x_2312_;
}
default: 
{
lean_object* v___x_2313_; lean_object* v_env_2314_; lean_object* v___x_2315_; lean_object* v_asyncMode_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2313_ = lean_st_ref_get(v_a_2292_);
v_env_2314_ = lean_ctor_get(v___x_2313_, 0);
lean_inc_ref(v_env_2314_);
lean_dec(v___x_2313_);
v___x_2315_ = l_Lean_Compiler_LCNF_impureExt;
v_asyncMode_2316_ = lean_ctor_get(v___x_2315_, 2);
v___x_2317_ = lean_box(0);
v___x_2318_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2294_, v___x_2315_, v_env_2314_, v_asyncMode_2316_, v___x_2317_);
v___x_2319_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(v___x_2318_, v_declName_2290_);
v___x_2320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2319_);
return v___x_2320_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg___boxed(lean_object* v_declName_2321_, lean_object* v_phase_2322_, lean_object* v_a_2323_, lean_object* v_a_2324_){
_start:
{
uint8_t v_phase_boxed_2325_; lean_object* v_res_2326_; 
v_phase_boxed_2325_ = lean_unbox(v_phase_2322_);
v_res_2326_ = l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg(v_declName_2321_, v_phase_boxed_2325_, v_a_2323_);
lean_dec(v_a_2323_);
lean_dec(v_declName_2321_);
return v_res_2326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDeclAt_x3f(lean_object* v_declName_2327_, uint8_t v_phase_2328_, lean_object* v_a_2329_, lean_object* v_a_2330_, lean_object* v_a_2331_, lean_object* v_a_2332_){
_start:
{
lean_object* v___x_2334_; 
v___x_2334_ = l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg(v_declName_2327_, v_phase_2328_, v_a_2332_);
return v___x_2334_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___boxed(lean_object* v_declName_2335_, lean_object* v_phase_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_){
_start:
{
uint8_t v_phase_boxed_2342_; lean_object* v_res_2343_; 
v_phase_boxed_2342_ = lean_unbox(v_phase_2336_);
v_res_2343_ = l_Lean_Compiler_LCNF_getLocalDeclAt_x3f(v_declName_2335_, v_phase_boxed_2342_, v_a_2337_, v_a_2338_, v_a_2339_, v_a_2340_);
lean_dec(v_a_2340_);
lean_dec_ref(v_a_2339_);
lean_dec(v_a_2338_);
lean_dec_ref(v_a_2337_);
lean_dec(v_declName_2335_);
return v_res_2343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDecl_x3f___redArg(lean_object* v_declName_2344_, lean_object* v_a_2345_, lean_object* v_a_2346_){
_start:
{
lean_object* v___x_2348_; 
v___x_2348_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_2345_);
if (lean_obj_tag(v___x_2348_) == 0)
{
lean_object* v_a_2349_; uint8_t v___x_2350_; lean_object* v___x_2351_; lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2375_; 
v_a_2349_ = lean_ctor_get(v___x_2348_, 0);
lean_inc(v_a_2349_);
lean_dec_ref(v___x_2348_);
v___x_2350_ = lean_unbox(v_a_2349_);
v___x_2351_ = l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg(v_declName_2344_, v___x_2350_, v_a_2346_);
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2351_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2354_ = v___x_2351_;
v_isShared_2355_ = v_isSharedCheck_2375_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v___x_2351_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2375_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
if (lean_obj_tag(v_a_2352_) == 1)
{
lean_object* v_val_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2370_; 
v_val_2356_ = lean_ctor_get(v_a_2352_, 0);
v_isSharedCheck_2370_ = !lean_is_exclusive(v_a_2352_);
if (v_isSharedCheck_2370_ == 0)
{
v___x_2358_ = v_a_2352_;
v_isShared_2359_ = v_isSharedCheck_2370_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_val_2356_);
lean_dec(v_a_2352_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2370_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
uint8_t v___x_2360_; uint8_t v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2365_; 
v___x_2360_ = lean_unbox(v_a_2349_);
lean_dec(v_a_2349_);
v___x_2361_ = l_Lean_Compiler_LCNF_Phase_toPurity(v___x_2360_);
v___x_2362_ = lean_box(v___x_2361_);
v___x_2363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2363_, 0, v___x_2362_);
lean_ctor_set(v___x_2363_, 1, v_val_2356_);
if (v_isShared_2359_ == 0)
{
lean_ctor_set(v___x_2358_, 0, v___x_2363_);
v___x_2365_ = v___x_2358_;
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
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 0, v___x_2365_);
v___x_2367_ = v___x_2354_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v___x_2365_);
v___x_2367_ = v_reuseFailAlloc_2368_;
goto v_reusejp_2366_;
}
v_reusejp_2366_:
{
return v___x_2367_;
}
}
}
}
else
{
lean_object* v___x_2371_; lean_object* v___x_2373_; 
lean_dec(v_a_2352_);
lean_dec(v_a_2349_);
v___x_2371_ = lean_box(0);
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 0, v___x_2371_);
v___x_2373_ = v___x_2354_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v___x_2371_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
}
else
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2383_; 
v_a_2376_ = lean_ctor_get(v___x_2348_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2348_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2378_ = v___x_2348_;
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2348_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2381_; 
if (v_isShared_2379_ == 0)
{
v___x_2381_ = v___x_2378_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_a_2376_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDecl_x3f___redArg___boxed(lean_object* v_declName_2384_, lean_object* v_a_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_){
_start:
{
lean_object* v_res_2388_; 
v_res_2388_ = l_Lean_Compiler_LCNF_getLocalDecl_x3f___redArg(v_declName_2384_, v_a_2385_, v_a_2386_);
lean_dec(v_a_2386_);
lean_dec_ref(v_a_2385_);
lean_dec(v_declName_2384_);
return v_res_2388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDecl_x3f(lean_object* v_declName_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_, lean_object* v_a_2392_, lean_object* v_a_2393_){
_start:
{
lean_object* v___x_2395_; 
v___x_2395_ = l_Lean_Compiler_LCNF_getPhase___redArg(v_a_2390_);
if (lean_obj_tag(v___x_2395_) == 0)
{
lean_object* v_a_2396_; uint8_t v___x_2397_; lean_object* v___x_2398_; lean_object* v_a_2399_; lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2422_; 
v_a_2396_ = lean_ctor_get(v___x_2395_, 0);
lean_inc(v_a_2396_);
lean_dec_ref(v___x_2395_);
v___x_2397_ = lean_unbox(v_a_2396_);
v___x_2398_ = l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg(v_declName_2389_, v___x_2397_, v_a_2393_);
v_a_2399_ = lean_ctor_get(v___x_2398_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2398_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2401_ = v___x_2398_;
v_isShared_2402_ = v_isSharedCheck_2422_;
goto v_resetjp_2400_;
}
else
{
lean_inc(v_a_2399_);
lean_dec(v___x_2398_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2422_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
if (lean_obj_tag(v_a_2399_) == 1)
{
lean_object* v_val_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2417_; 
v_val_2403_ = lean_ctor_get(v_a_2399_, 0);
v_isSharedCheck_2417_ = !lean_is_exclusive(v_a_2399_);
if (v_isSharedCheck_2417_ == 0)
{
v___x_2405_ = v_a_2399_;
v_isShared_2406_ = v_isSharedCheck_2417_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_val_2403_);
lean_dec(v_a_2399_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2417_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
uint8_t v___x_2407_; uint8_t v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2412_; 
v___x_2407_ = lean_unbox(v_a_2396_);
lean_dec(v_a_2396_);
v___x_2408_ = l_Lean_Compiler_LCNF_Phase_toPurity(v___x_2407_);
v___x_2409_ = lean_box(v___x_2408_);
v___x_2410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2410_, 0, v___x_2409_);
lean_ctor_set(v___x_2410_, 1, v_val_2403_);
if (v_isShared_2406_ == 0)
{
lean_ctor_set(v___x_2405_, 0, v___x_2410_);
v___x_2412_ = v___x_2405_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2416_; 
v_reuseFailAlloc_2416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2416_, 0, v___x_2410_);
v___x_2412_ = v_reuseFailAlloc_2416_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
lean_object* v___x_2414_; 
if (v_isShared_2402_ == 0)
{
lean_ctor_set(v___x_2401_, 0, v___x_2412_);
v___x_2414_ = v___x_2401_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v___x_2412_);
v___x_2414_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
return v___x_2414_;
}
}
}
}
else
{
lean_object* v___x_2418_; lean_object* v___x_2420_; 
lean_dec(v_a_2399_);
lean_dec(v_a_2396_);
v___x_2418_ = lean_box(0);
if (v_isShared_2402_ == 0)
{
lean_ctor_set(v___x_2401_, 0, v___x_2418_);
v___x_2420_ = v___x_2401_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v___x_2418_);
v___x_2420_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
return v___x_2420_;
}
}
}
}
else
{
lean_object* v_a_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2430_; 
v_a_2423_ = lean_ctor_get(v___x_2395_, 0);
v_isSharedCheck_2430_ = !lean_is_exclusive(v___x_2395_);
if (v_isSharedCheck_2430_ == 0)
{
v___x_2425_ = v___x_2395_;
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_a_2423_);
lean_dec(v___x_2395_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2430_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v___x_2428_; 
if (v_isShared_2426_ == 0)
{
v___x_2428_ = v___x_2425_;
goto v_reusejp_2427_;
}
else
{
lean_object* v_reuseFailAlloc_2429_; 
v_reuseFailAlloc_2429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2429_, 0, v_a_2423_);
v___x_2428_ = v_reuseFailAlloc_2429_;
goto v_reusejp_2427_;
}
v_reusejp_2427_:
{
return v___x_2428_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDecl_x3f___boxed(lean_object* v_declName_2431_, lean_object* v_a_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l_Lean_Compiler_LCNF_getLocalDecl_x3f(v_declName_2431_, v_a_2432_, v_a_2433_, v_a_2434_, v_a_2435_);
lean_dec(v_a_2435_);
lean_dec_ref(v_a_2434_);
lean_dec(v_a_2433_);
lean_dec_ref(v_a_2432_);
lean_dec(v_declName_2431_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_2540780834____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2439_; 
v___x_2439_ = l_Lean_Compiler_LCNF_mkOrderedDeclSetExt();
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_2540780834____hygCtx___hyg_2____boxed(lean_object* v_a_2440_){
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_2540780834____hygCtx___hyg_2_();
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_recordFinalImpureDecl___lam__0(lean_object* v_name_2442_, lean_object* v_s_2443_){
_start:
{
lean_object* v_fst_2444_; lean_object* v_snd_2445_; lean_object* v___x_2447_; uint8_t v_isShared_2448_; uint8_t v_isSharedCheck_2454_; 
v_fst_2444_ = lean_ctor_get(v_s_2443_, 0);
v_snd_2445_ = lean_ctor_get(v_s_2443_, 1);
v_isSharedCheck_2454_ = !lean_is_exclusive(v_s_2443_);
if (v_isSharedCheck_2454_ == 0)
{
v___x_2447_ = v_s_2443_;
v_isShared_2448_ = v_isSharedCheck_2454_;
goto v_resetjp_2446_;
}
else
{
lean_inc(v_snd_2445_);
lean_inc(v_fst_2444_);
lean_dec(v_s_2443_);
v___x_2447_ = lean_box(0);
v_isShared_2448_ = v_isSharedCheck_2454_;
goto v_resetjp_2446_;
}
v_resetjp_2446_:
{
lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2452_; 
lean_inc(v_name_2442_);
v___x_2449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2449_, 0, v_name_2442_);
lean_ctor_set(v___x_2449_, 1, v_fst_2444_);
v___x_2450_ = l_Lean_NameSet_insert(v_snd_2445_, v_name_2442_);
if (v_isShared_2448_ == 0)
{
lean_ctor_set(v___x_2447_, 1, v___x_2450_);
lean_ctor_set(v___x_2447_, 0, v___x_2449_);
v___x_2452_ = v___x_2447_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v___x_2449_);
lean_ctor_set(v_reuseFailAlloc_2453_, 1, v___x_2450_);
v___x_2452_ = v_reuseFailAlloc_2453_;
goto v_reusejp_2451_;
}
v_reusejp_2451_:
{
return v___x_2452_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_recordFinalImpureDecl(lean_object* v_env_2455_, lean_object* v_name_2456_){
_start:
{
lean_object* v___x_2457_; lean_object* v_asyncMode_2458_; lean_object* v___f_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
v___x_2457_ = l_Lean_Compiler_LCNF_declOrderExt;
v_asyncMode_2458_ = lean_ctor_get(v___x_2457_, 2);
v___f_2459_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_recordFinalImpureDecl___lam__0), 2, 1);
lean_closure_set(v___f_2459_, 0, v_name_2456_);
v___x_2460_ = lean_box(0);
v___x_2461_ = l_Lean_EnvExtension_modifyState___redArg(v___x_2457_, v_env_2455_, v___f_2459_, v_asyncMode_2458_, v___x_2460_);
return v___x_2461_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__7(void){
_start:
{
lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2469_ = ((lean_object*)(l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__1));
v___x_2470_ = ((lean_object*)(l_Lean_Compiler_LCNF_getDeclCore_x3f___closed__0));
v___x_2471_ = l_Std_HashMap_instInhabited(lean_box(0), lean_box(0), v___x_2470_, v___x_2469_);
return v___x_2471_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1(lean_object* v_msg_2472_){
_start:
{
lean_object* v___f_2473_; lean_object* v___f_2474_; lean_object* v___f_2475_; lean_object* v___f_2476_; lean_object* v___f_2477_; lean_object* v___f_2478_; lean_object* v___f_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; 
v___f_2473_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__0));
v___f_2474_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__1));
v___f_2475_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__2));
v___f_2476_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__3));
v___f_2477_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__4));
v___f_2478_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__5));
v___f_2479_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__6));
v___x_2480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2480_, 0, v___f_2473_);
lean_ctor_set(v___x_2480_, 1, v___f_2474_);
v___x_2481_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2481_, 0, v___x_2480_);
lean_ctor_set(v___x_2481_, 1, v___f_2475_);
lean_ctor_set(v___x_2481_, 2, v___f_2476_);
lean_ctor_set(v___x_2481_, 3, v___f_2477_);
lean_ctor_set(v___x_2481_, 4, v___f_2478_);
v___x_2482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2482_, 0, v___x_2481_);
lean_ctor_set(v___x_2482_, 1, v___f_2479_);
v___x_2483_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__7, &l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__7_once, _init_l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__7);
v___x_2484_ = lean_unsigned_to_nat(0u);
v___x_2485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2485_, 0, v___x_2483_);
lean_ctor_set(v___x_2485_, 1, v___x_2484_);
v___x_2486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2486_, 0, v___x_2485_);
v___x_2487_ = l_instInhabitedOfMonad___redArg(v___x_2482_, v___x_2486_);
v___x_2488_ = lean_panic_fn_borrowed(v___x_2487_, v_msg_2472_);
lean_dec(v___x_2487_);
return v___x_2488_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__5(lean_object* v_msg_2489_){
_start:
{
lean_object* v___f_2490_; lean_object* v___f_2491_; lean_object* v___f_2492_; lean_object* v___f_2493_; lean_object* v___f_2494_; lean_object* v___f_2495_; lean_object* v___f_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; 
v___f_2490_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__0));
v___f_2491_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__1));
v___f_2492_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__2));
v___f_2493_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__3));
v___f_2494_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__4));
v___f_2495_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__5));
v___f_2496_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__6));
v___x_2497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2497_, 0, v___f_2490_);
lean_ctor_set(v___x_2497_, 1, v___f_2491_);
v___x_2498_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2497_);
lean_ctor_set(v___x_2498_, 1, v___f_2492_);
lean_ctor_set(v___x_2498_, 2, v___f_2493_);
lean_ctor_set(v___x_2498_, 3, v___f_2494_);
lean_ctor_set(v___x_2498_, 4, v___f_2495_);
v___x_2499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2499_, 0, v___x_2498_);
lean_ctor_set(v___x_2499_, 1, v___f_2496_);
v___x_2500_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__7, &l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__7_once, _init_l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__7);
v___x_2501_ = l_instInhabitedOfMonad___redArg(v___x_2499_, v___x_2500_);
v___x_2502_ = lean_panic_fn_borrowed(v___x_2501_, v_msg_2489_);
lean_dec(v___x_2501_);
return v___x_2502_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___redArg(lean_object* v_a_2503_, lean_object* v_x_2504_){
_start:
{
if (lean_obj_tag(v_x_2504_) == 0)
{
uint8_t v___x_2505_; 
v___x_2505_ = 0;
return v___x_2505_;
}
else
{
lean_object* v_key_2506_; lean_object* v_tail_2507_; uint8_t v___x_2508_; 
v_key_2506_ = lean_ctor_get(v_x_2504_, 0);
v_tail_2507_ = lean_ctor_get(v_x_2504_, 2);
v___x_2508_ = lean_name_eq(v_key_2506_, v_a_2503_);
if (v___x_2508_ == 0)
{
v_x_2504_ = v_tail_2507_;
goto _start;
}
else
{
return v___x_2508_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___redArg___boxed(lean_object* v_a_2510_, lean_object* v_x_2511_){
_start:
{
uint8_t v_res_2512_; lean_object* v_r_2513_; 
v_res_2512_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___redArg(v_a_2510_, v_x_2511_);
lean_dec(v_x_2511_);
lean_dec(v_a_2510_);
v_r_2513_ = lean_box(v_res_2512_);
return v_r_2513_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8_spec__10___redArg(lean_object* v_x_2514_, lean_object* v_x_2515_){
_start:
{
if (lean_obj_tag(v_x_2515_) == 0)
{
return v_x_2514_;
}
else
{
lean_object* v_key_2516_; lean_object* v_value_2517_; lean_object* v_tail_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2544_; 
v_key_2516_ = lean_ctor_get(v_x_2515_, 0);
v_value_2517_ = lean_ctor_get(v_x_2515_, 1);
v_tail_2518_ = lean_ctor_get(v_x_2515_, 2);
v_isSharedCheck_2544_ = !lean_is_exclusive(v_x_2515_);
if (v_isSharedCheck_2544_ == 0)
{
v___x_2520_ = v_x_2515_;
v_isShared_2521_ = v_isSharedCheck_2544_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_tail_2518_);
lean_inc(v_value_2517_);
lean_inc(v_key_2516_);
lean_dec(v_x_2515_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2544_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v___x_2522_; uint64_t v___y_2524_; 
v___x_2522_ = lean_array_get_size(v_x_2514_);
if (lean_obj_tag(v_key_2516_) == 0)
{
uint64_t v___x_2542_; 
v___x_2542_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0);
v___y_2524_ = v___x_2542_;
goto v___jp_2523_;
}
else
{
uint64_t v_hash_2543_; 
v_hash_2543_ = lean_ctor_get_uint64(v_key_2516_, sizeof(void*)*2);
v___y_2524_ = v_hash_2543_;
goto v___jp_2523_;
}
v___jp_2523_:
{
uint64_t v___x_2525_; uint64_t v___x_2526_; uint64_t v_fold_2527_; uint64_t v___x_2528_; uint64_t v___x_2529_; uint64_t v___x_2530_; size_t v___x_2531_; size_t v___x_2532_; size_t v___x_2533_; size_t v___x_2534_; size_t v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2538_; 
v___x_2525_ = 32ULL;
v___x_2526_ = lean_uint64_shift_right(v___y_2524_, v___x_2525_);
v_fold_2527_ = lean_uint64_xor(v___y_2524_, v___x_2526_);
v___x_2528_ = 16ULL;
v___x_2529_ = lean_uint64_shift_right(v_fold_2527_, v___x_2528_);
v___x_2530_ = lean_uint64_xor(v_fold_2527_, v___x_2529_);
v___x_2531_ = lean_uint64_to_usize(v___x_2530_);
v___x_2532_ = lean_usize_of_nat(v___x_2522_);
v___x_2533_ = ((size_t)1ULL);
v___x_2534_ = lean_usize_sub(v___x_2532_, v___x_2533_);
v___x_2535_ = lean_usize_land(v___x_2531_, v___x_2534_);
v___x_2536_ = lean_array_uget_borrowed(v_x_2514_, v___x_2535_);
lean_inc(v___x_2536_);
if (v_isShared_2521_ == 0)
{
lean_ctor_set(v___x_2520_, 2, v___x_2536_);
v___x_2538_ = v___x_2520_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v_key_2516_);
lean_ctor_set(v_reuseFailAlloc_2541_, 1, v_value_2517_);
lean_ctor_set(v_reuseFailAlloc_2541_, 2, v___x_2536_);
v___x_2538_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
lean_object* v___x_2539_; 
v___x_2539_ = lean_array_uset(v_x_2514_, v___x_2535_, v___x_2538_);
v_x_2514_ = v___x_2539_;
v_x_2515_ = v_tail_2518_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8___redArg(lean_object* v_i_2545_, lean_object* v_source_2546_, lean_object* v_target_2547_){
_start:
{
lean_object* v___x_2548_; uint8_t v___x_2549_; 
v___x_2548_ = lean_array_get_size(v_source_2546_);
v___x_2549_ = lean_nat_dec_lt(v_i_2545_, v___x_2548_);
if (v___x_2549_ == 0)
{
lean_dec_ref(v_source_2546_);
lean_dec(v_i_2545_);
return v_target_2547_;
}
else
{
lean_object* v_es_2550_; lean_object* v___x_2551_; lean_object* v_source_2552_; lean_object* v_target_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; 
v_es_2550_ = lean_array_fget(v_source_2546_, v_i_2545_);
v___x_2551_ = lean_box(0);
v_source_2552_ = lean_array_fset(v_source_2546_, v_i_2545_, v___x_2551_);
v_target_2553_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8_spec__10___redArg(v_target_2547_, v_es_2550_);
v___x_2554_ = lean_unsigned_to_nat(1u);
v___x_2555_ = lean_nat_add(v_i_2545_, v___x_2554_);
lean_dec(v_i_2545_);
v_i_2545_ = v___x_2555_;
v_source_2546_ = v_source_2552_;
v_target_2547_ = v_target_2553_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6___redArg(lean_object* v_data_2557_){
_start:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v_nbuckets_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; 
v___x_2558_ = lean_array_get_size(v_data_2557_);
v___x_2559_ = lean_unsigned_to_nat(2u);
v_nbuckets_2560_ = lean_nat_mul(v___x_2558_, v___x_2559_);
v___x_2561_ = lean_unsigned_to_nat(0u);
v___x_2562_ = lean_box(0);
v___x_2563_ = lean_mk_array(v_nbuckets_2560_, v___x_2562_);
v___x_2564_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8___redArg(v___x_2561_, v_data_2557_, v___x_2563_);
return v___x_2564_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__0___redArg(lean_object* v_m_2565_, lean_object* v_a_2566_, lean_object* v_b_2567_){
_start:
{
lean_object* v_size_2568_; lean_object* v_buckets_2569_; lean_object* v___x_2570_; uint64_t v___y_2572_; 
v_size_2568_ = lean_ctor_get(v_m_2565_, 0);
v_buckets_2569_ = lean_ctor_get(v_m_2565_, 1);
v___x_2570_ = lean_array_get_size(v_buckets_2569_);
if (lean_obj_tag(v_a_2566_) == 0)
{
uint64_t v___x_2609_; 
v___x_2609_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0);
v___y_2572_ = v___x_2609_;
goto v___jp_2571_;
}
else
{
uint64_t v_hash_2610_; 
v_hash_2610_ = lean_ctor_get_uint64(v_a_2566_, sizeof(void*)*2);
v___y_2572_ = v_hash_2610_;
goto v___jp_2571_;
}
v___jp_2571_:
{
uint64_t v___x_2573_; uint64_t v___x_2574_; uint64_t v_fold_2575_; uint64_t v___x_2576_; uint64_t v___x_2577_; uint64_t v___x_2578_; size_t v___x_2579_; size_t v___x_2580_; size_t v___x_2581_; size_t v___x_2582_; size_t v___x_2583_; lean_object* v_bkt_2584_; uint8_t v___x_2585_; 
v___x_2573_ = 32ULL;
v___x_2574_ = lean_uint64_shift_right(v___y_2572_, v___x_2573_);
v_fold_2575_ = lean_uint64_xor(v___y_2572_, v___x_2574_);
v___x_2576_ = 16ULL;
v___x_2577_ = lean_uint64_shift_right(v_fold_2575_, v___x_2576_);
v___x_2578_ = lean_uint64_xor(v_fold_2575_, v___x_2577_);
v___x_2579_ = lean_uint64_to_usize(v___x_2578_);
v___x_2580_ = lean_usize_of_nat(v___x_2570_);
v___x_2581_ = ((size_t)1ULL);
v___x_2582_ = lean_usize_sub(v___x_2580_, v___x_2581_);
v___x_2583_ = lean_usize_land(v___x_2579_, v___x_2582_);
v_bkt_2584_ = lean_array_uget_borrowed(v_buckets_2569_, v___x_2583_);
v___x_2585_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___redArg(v_a_2566_, v_bkt_2584_);
if (v___x_2585_ == 0)
{
lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_2606_; 
lean_inc_ref(v_buckets_2569_);
lean_inc(v_size_2568_);
v_isSharedCheck_2606_ = !lean_is_exclusive(v_m_2565_);
if (v_isSharedCheck_2606_ == 0)
{
lean_object* v_unused_2607_; lean_object* v_unused_2608_; 
v_unused_2607_ = lean_ctor_get(v_m_2565_, 1);
lean_dec(v_unused_2607_);
v_unused_2608_ = lean_ctor_get(v_m_2565_, 0);
lean_dec(v_unused_2608_);
v___x_2587_ = v_m_2565_;
v_isShared_2588_ = v_isSharedCheck_2606_;
goto v_resetjp_2586_;
}
else
{
lean_dec(v_m_2565_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_2606_;
goto v_resetjp_2586_;
}
v_resetjp_2586_:
{
lean_object* v___x_2589_; lean_object* v_size_x27_2590_; lean_object* v___x_2591_; lean_object* v_buckets_x27_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; uint8_t v___x_2598_; 
v___x_2589_ = lean_unsigned_to_nat(1u);
v_size_x27_2590_ = lean_nat_add(v_size_2568_, v___x_2589_);
lean_dec(v_size_2568_);
lean_inc(v_bkt_2584_);
v___x_2591_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2591_, 0, v_a_2566_);
lean_ctor_set(v___x_2591_, 1, v_b_2567_);
lean_ctor_set(v___x_2591_, 2, v_bkt_2584_);
v_buckets_x27_2592_ = lean_array_uset(v_buckets_2569_, v___x_2583_, v___x_2591_);
v___x_2593_ = lean_unsigned_to_nat(4u);
v___x_2594_ = lean_nat_mul(v_size_x27_2590_, v___x_2593_);
v___x_2595_ = lean_unsigned_to_nat(3u);
v___x_2596_ = lean_nat_div(v___x_2594_, v___x_2595_);
lean_dec(v___x_2594_);
v___x_2597_ = lean_array_get_size(v_buckets_x27_2592_);
v___x_2598_ = lean_nat_dec_le(v___x_2596_, v___x_2597_);
lean_dec(v___x_2596_);
if (v___x_2598_ == 0)
{
lean_object* v_val_2599_; lean_object* v___x_2601_; 
v_val_2599_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6___redArg(v_buckets_x27_2592_);
if (v_isShared_2588_ == 0)
{
lean_ctor_set(v___x_2587_, 1, v_val_2599_);
lean_ctor_set(v___x_2587_, 0, v_size_x27_2590_);
v___x_2601_ = v___x_2587_;
goto v_reusejp_2600_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v_size_x27_2590_);
lean_ctor_set(v_reuseFailAlloc_2602_, 1, v_val_2599_);
v___x_2601_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2600_;
}
v_reusejp_2600_:
{
return v___x_2601_;
}
}
else
{
lean_object* v___x_2604_; 
if (v_isShared_2588_ == 0)
{
lean_ctor_set(v___x_2587_, 1, v_buckets_x27_2592_);
lean_ctor_set(v___x_2587_, 0, v_size_x27_2590_);
v___x_2604_ = v___x_2587_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v_size_x27_2590_);
lean_ctor_set(v_reuseFailAlloc_2605_, 1, v_buckets_x27_2592_);
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
lean_dec(v_b_2567_);
lean_dec(v_a_2566_);
return v_m_2565_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__1(lean_object* v_as_2611_, size_t v_sz_2612_, size_t v_i_2613_, lean_object* v_b_2614_){
_start:
{
uint8_t v___x_2615_; 
v___x_2615_ = lean_usize_dec_lt(v_i_2613_, v_sz_2612_);
if (v___x_2615_ == 0)
{
return v_b_2614_;
}
else
{
lean_object* v_a_2616_; lean_object* v___x_2617_; lean_object* v_r_2618_; size_t v___x_2619_; size_t v___x_2620_; 
v_a_2616_ = lean_array_uget_borrowed(v_as_2611_, v_i_2613_);
v___x_2617_ = lean_box(0);
lean_inc(v_a_2616_);
v_r_2618_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__0___redArg(v_b_2614_, v_a_2616_, v___x_2617_);
v___x_2619_ = ((size_t)1ULL);
v___x_2620_ = lean_usize_add(v_i_2613_, v___x_2619_);
v_i_2613_ = v___x_2620_;
v_b_2614_ = v_r_2618_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__1___boxed(lean_object* v_as_2622_, lean_object* v_sz_2623_, lean_object* v_i_2624_, lean_object* v_b_2625_){
_start:
{
size_t v_sz_boxed_2626_; size_t v_i_boxed_2627_; lean_object* v_res_2628_; 
v_sz_boxed_2626_ = lean_unbox_usize(v_sz_2623_);
lean_dec(v_sz_2623_);
v_i_boxed_2627_ = lean_unbox_usize(v_i_2624_);
lean_dec(v_i_2624_);
v_res_2628_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__1(v_as_2622_, v_sz_boxed_2626_, v_i_boxed_2627_, v_b_2625_);
lean_dec_ref(v_as_2622_);
return v_res_2628_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0(lean_object* v_m_2629_, lean_object* v_l_2630_){
_start:
{
size_t v_sz_2631_; size_t v___x_2632_; lean_object* v___x_2633_; 
v_sz_2631_ = lean_array_size(v_l_2630_);
v___x_2632_ = ((size_t)0ULL);
v___x_2633_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__1(v_l_2630_, v_sz_2631_, v___x_2632_, v_m_2629_);
return v___x_2633_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0___boxed(lean_object* v_m_2634_, lean_object* v_l_2635_){
_start:
{
lean_object* v_res_2636_; 
v_res_2636_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0(v_m_2634_, v_l_2635_);
lean_dec_ref(v_l_2635_);
return v_res_2636_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2___redArg(lean_object* v_m_2637_, lean_object* v_a_2638_){
_start:
{
lean_object* v_buckets_2639_; lean_object* v___x_2640_; uint64_t v___y_2642_; 
v_buckets_2639_ = lean_ctor_get(v_m_2637_, 1);
v___x_2640_ = lean_array_get_size(v_buckets_2639_);
if (lean_obj_tag(v_a_2638_) == 0)
{
uint64_t v___x_2656_; 
v___x_2656_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0);
v___y_2642_ = v___x_2656_;
goto v___jp_2641_;
}
else
{
uint64_t v_hash_2657_; 
v_hash_2657_ = lean_ctor_get_uint64(v_a_2638_, sizeof(void*)*2);
v___y_2642_ = v_hash_2657_;
goto v___jp_2641_;
}
v___jp_2641_:
{
uint64_t v___x_2643_; uint64_t v___x_2644_; uint64_t v_fold_2645_; uint64_t v___x_2646_; uint64_t v___x_2647_; uint64_t v___x_2648_; size_t v___x_2649_; size_t v___x_2650_; size_t v___x_2651_; size_t v___x_2652_; size_t v___x_2653_; lean_object* v___x_2654_; uint8_t v___x_2655_; 
v___x_2643_ = 32ULL;
v___x_2644_ = lean_uint64_shift_right(v___y_2642_, v___x_2643_);
v_fold_2645_ = lean_uint64_xor(v___y_2642_, v___x_2644_);
v___x_2646_ = 16ULL;
v___x_2647_ = lean_uint64_shift_right(v_fold_2645_, v___x_2646_);
v___x_2648_ = lean_uint64_xor(v_fold_2645_, v___x_2647_);
v___x_2649_ = lean_uint64_to_usize(v___x_2648_);
v___x_2650_ = lean_usize_of_nat(v___x_2640_);
v___x_2651_ = ((size_t)1ULL);
v___x_2652_ = lean_usize_sub(v___x_2650_, v___x_2651_);
v___x_2653_ = lean_usize_land(v___x_2649_, v___x_2652_);
v___x_2654_ = lean_array_uget_borrowed(v_buckets_2639_, v___x_2653_);
v___x_2655_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___redArg(v_a_2638_, v___x_2654_);
return v___x_2655_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2___redArg___boxed(lean_object* v_m_2658_, lean_object* v_a_2659_){
_start:
{
uint8_t v_res_2660_; lean_object* v_r_2661_; 
v_res_2660_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2___redArg(v_m_2658_, v_a_2659_);
lean_dec(v_a_2659_);
lean_dec_ref(v_m_2658_);
v_r_2661_ = lean_box(v_res_2660_);
return v_r_2661_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__7___redArg(lean_object* v_a_2662_, lean_object* v_b_2663_, lean_object* v_x_2664_){
_start:
{
if (lean_obj_tag(v_x_2664_) == 0)
{
lean_dec(v_b_2663_);
lean_dec(v_a_2662_);
return v_x_2664_;
}
else
{
lean_object* v_key_2665_; lean_object* v_value_2666_; lean_object* v_tail_2667_; lean_object* v___x_2669_; uint8_t v_isShared_2670_; uint8_t v_isSharedCheck_2679_; 
v_key_2665_ = lean_ctor_get(v_x_2664_, 0);
v_value_2666_ = lean_ctor_get(v_x_2664_, 1);
v_tail_2667_ = lean_ctor_get(v_x_2664_, 2);
v_isSharedCheck_2679_ = !lean_is_exclusive(v_x_2664_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2669_ = v_x_2664_;
v_isShared_2670_ = v_isSharedCheck_2679_;
goto v_resetjp_2668_;
}
else
{
lean_inc(v_tail_2667_);
lean_inc(v_value_2666_);
lean_inc(v_key_2665_);
lean_dec(v_x_2664_);
v___x_2669_ = lean_box(0);
v_isShared_2670_ = v_isSharedCheck_2679_;
goto v_resetjp_2668_;
}
v_resetjp_2668_:
{
uint8_t v___x_2671_; 
v___x_2671_ = lean_name_eq(v_key_2665_, v_a_2662_);
if (v___x_2671_ == 0)
{
lean_object* v___x_2672_; lean_object* v___x_2674_; 
v___x_2672_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__7___redArg(v_a_2662_, v_b_2663_, v_tail_2667_);
if (v_isShared_2670_ == 0)
{
lean_ctor_set(v___x_2669_, 2, v___x_2672_);
v___x_2674_ = v___x_2669_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v_key_2665_);
lean_ctor_set(v_reuseFailAlloc_2675_, 1, v_value_2666_);
lean_ctor_set(v_reuseFailAlloc_2675_, 2, v___x_2672_);
v___x_2674_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
return v___x_2674_;
}
}
else
{
lean_object* v___x_2677_; 
lean_dec(v_value_2666_);
lean_dec(v_key_2665_);
if (v_isShared_2670_ == 0)
{
lean_ctor_set(v___x_2669_, 1, v_b_2663_);
lean_ctor_set(v___x_2669_, 0, v_a_2662_);
v___x_2677_ = v___x_2669_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v_a_2662_);
lean_ctor_set(v_reuseFailAlloc_2678_, 1, v_b_2663_);
lean_ctor_set(v_reuseFailAlloc_2678_, 2, v_tail_2667_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3___redArg(lean_object* v_m_2680_, lean_object* v_a_2681_, lean_object* v_b_2682_){
_start:
{
lean_object* v_size_2683_; lean_object* v_buckets_2684_; lean_object* v___x_2686_; uint8_t v_isShared_2687_; uint8_t v_isSharedCheck_2730_; 
v_size_2683_ = lean_ctor_get(v_m_2680_, 0);
v_buckets_2684_ = lean_ctor_get(v_m_2680_, 1);
v_isSharedCheck_2730_ = !lean_is_exclusive(v_m_2680_);
if (v_isSharedCheck_2730_ == 0)
{
v___x_2686_ = v_m_2680_;
v_isShared_2687_ = v_isSharedCheck_2730_;
goto v_resetjp_2685_;
}
else
{
lean_inc(v_buckets_2684_);
lean_inc(v_size_2683_);
lean_dec(v_m_2680_);
v___x_2686_ = lean_box(0);
v_isShared_2687_ = v_isSharedCheck_2730_;
goto v_resetjp_2685_;
}
v_resetjp_2685_:
{
lean_object* v___x_2688_; uint64_t v___y_2690_; 
v___x_2688_ = lean_array_get_size(v_buckets_2684_);
if (lean_obj_tag(v_a_2681_) == 0)
{
uint64_t v___x_2728_; 
v___x_2728_ = lean_uint64_once(&l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___closed__0);
v___y_2690_ = v___x_2728_;
goto v___jp_2689_;
}
else
{
uint64_t v_hash_2729_; 
v_hash_2729_ = lean_ctor_get_uint64(v_a_2681_, sizeof(void*)*2);
v___y_2690_ = v_hash_2729_;
goto v___jp_2689_;
}
v___jp_2689_:
{
uint64_t v___x_2691_; uint64_t v___x_2692_; uint64_t v_fold_2693_; uint64_t v___x_2694_; uint64_t v___x_2695_; uint64_t v___x_2696_; size_t v___x_2697_; size_t v___x_2698_; size_t v___x_2699_; size_t v___x_2700_; size_t v___x_2701_; lean_object* v_bkt_2702_; uint8_t v___x_2703_; 
v___x_2691_ = 32ULL;
v___x_2692_ = lean_uint64_shift_right(v___y_2690_, v___x_2691_);
v_fold_2693_ = lean_uint64_xor(v___y_2690_, v___x_2692_);
v___x_2694_ = 16ULL;
v___x_2695_ = lean_uint64_shift_right(v_fold_2693_, v___x_2694_);
v___x_2696_ = lean_uint64_xor(v_fold_2693_, v___x_2695_);
v___x_2697_ = lean_uint64_to_usize(v___x_2696_);
v___x_2698_ = lean_usize_of_nat(v___x_2688_);
v___x_2699_ = ((size_t)1ULL);
v___x_2700_ = lean_usize_sub(v___x_2698_, v___x_2699_);
v___x_2701_ = lean_usize_land(v___x_2697_, v___x_2700_);
v_bkt_2702_ = lean_array_uget_borrowed(v_buckets_2684_, v___x_2701_);
v___x_2703_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___redArg(v_a_2681_, v_bkt_2702_);
if (v___x_2703_ == 0)
{
lean_object* v___x_2704_; lean_object* v_size_x27_2705_; lean_object* v___x_2706_; lean_object* v_buckets_x27_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; uint8_t v___x_2713_; 
v___x_2704_ = lean_unsigned_to_nat(1u);
v_size_x27_2705_ = lean_nat_add(v_size_2683_, v___x_2704_);
lean_dec(v_size_2683_);
lean_inc(v_bkt_2702_);
v___x_2706_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2706_, 0, v_a_2681_);
lean_ctor_set(v___x_2706_, 1, v_b_2682_);
lean_ctor_set(v___x_2706_, 2, v_bkt_2702_);
v_buckets_x27_2707_ = lean_array_uset(v_buckets_2684_, v___x_2701_, v___x_2706_);
v___x_2708_ = lean_unsigned_to_nat(4u);
v___x_2709_ = lean_nat_mul(v_size_x27_2705_, v___x_2708_);
v___x_2710_ = lean_unsigned_to_nat(3u);
v___x_2711_ = lean_nat_div(v___x_2709_, v___x_2710_);
lean_dec(v___x_2709_);
v___x_2712_ = lean_array_get_size(v_buckets_x27_2707_);
v___x_2713_ = lean_nat_dec_le(v___x_2711_, v___x_2712_);
lean_dec(v___x_2711_);
if (v___x_2713_ == 0)
{
lean_object* v_val_2714_; lean_object* v___x_2716_; 
v_val_2714_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6___redArg(v_buckets_x27_2707_);
if (v_isShared_2687_ == 0)
{
lean_ctor_set(v___x_2686_, 1, v_val_2714_);
lean_ctor_set(v___x_2686_, 0, v_size_x27_2705_);
v___x_2716_ = v___x_2686_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v_size_x27_2705_);
lean_ctor_set(v_reuseFailAlloc_2717_, 1, v_val_2714_);
v___x_2716_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
return v___x_2716_;
}
}
else
{
lean_object* v___x_2719_; 
if (v_isShared_2687_ == 0)
{
lean_ctor_set(v___x_2686_, 1, v_buckets_x27_2707_);
lean_ctor_set(v___x_2686_, 0, v_size_x27_2705_);
v___x_2719_ = v___x_2686_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v_size_x27_2705_);
lean_ctor_set(v_reuseFailAlloc_2720_, 1, v_buckets_x27_2707_);
v___x_2719_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
return v___x_2719_;
}
}
}
else
{
lean_object* v___x_2721_; lean_object* v_buckets_x27_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2726_; 
lean_inc(v_bkt_2702_);
v___x_2721_ = lean_box(0);
v_buckets_x27_2722_ = lean_array_uset(v_buckets_2684_, v___x_2701_, v___x_2721_);
v___x_2723_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__7___redArg(v_a_2681_, v_b_2682_, v_bkt_2702_);
v___x_2724_ = lean_array_uset(v_buckets_x27_2722_, v___x_2701_, v___x_2723_);
if (v_isShared_2687_ == 0)
{
lean_ctor_set(v___x_2686_, 1, v___x_2724_);
v___x_2726_ = v___x_2686_;
goto v_reusejp_2725_;
}
else
{
lean_object* v_reuseFailAlloc_2727_; 
v_reuseFailAlloc_2727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2727_, 0, v_size_2683_);
lean_ctor_set(v_reuseFailAlloc_2727_, 1, v___x_2724_);
v___x_2726_ = v_reuseFailAlloc_2727_;
goto v_reusejp_2725_;
}
v_reusejp_2725_:
{
return v___x_2726_;
}
}
}
}
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; 
v___x_2734_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__2));
v___x_2735_ = lean_unsigned_to_nat(4u);
v___x_2736_ = lean_unsigned_to_nat(238u);
v___x_2737_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__1));
v___x_2738_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__0));
v___x_2739_ = l_mkPanicMessageWithDecl(v___x_2738_, v___x_2737_, v___x_2736_, v___x_2735_, v___x_2734_);
return v___x_2739_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg(lean_object* v___x_2740_, lean_object* v_as_x27_2741_, lean_object* v_b_2742_){
_start:
{
if (lean_obj_tag(v_as_x27_2741_) == 0)
{
return v_b_2742_;
}
else
{
lean_object* v_head_2743_; lean_object* v_tail_2744_; lean_object* v_fst_2745_; lean_object* v_snd_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2767_; 
v_head_2743_ = lean_ctor_get(v_as_x27_2741_, 0);
lean_inc(v_head_2743_);
v_tail_2744_ = lean_ctor_get(v_as_x27_2741_, 1);
lean_inc(v_tail_2744_);
lean_dec_ref(v_as_x27_2741_);
v_fst_2745_ = lean_ctor_get(v_b_2742_, 0);
v_snd_2746_ = lean_ctor_get(v_b_2742_, 1);
v_isSharedCheck_2767_ = !lean_is_exclusive(v_b_2742_);
if (v_isSharedCheck_2767_ == 0)
{
v___x_2748_ = v_b_2742_;
v_isShared_2749_ = v_isSharedCheck_2767_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_snd_2746_);
lean_inc(v_fst_2745_);
lean_dec(v_b_2742_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2767_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v_map_2751_; uint8_t v___x_2765_; 
v___x_2765_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2___redArg(v___x_2740_, v_head_2743_);
if (v___x_2765_ == 0)
{
lean_dec(v_head_2743_);
v_map_2751_ = v_fst_2745_;
goto v___jp_2750_;
}
else
{
lean_object* v___x_2766_; 
lean_inc(v_snd_2746_);
v___x_2766_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3___redArg(v_fst_2745_, v_head_2743_, v_snd_2746_);
v_map_2751_ = v___x_2766_;
goto v___jp_2750_;
}
v___jp_2750_:
{
lean_object* v___x_2752_; uint8_t v___x_2753_; 
v___x_2752_ = lean_unsigned_to_nat(0u);
v___x_2753_ = lean_nat_dec_eq(v_snd_2746_, v___x_2752_);
if (v___x_2753_ == 0)
{
lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2757_; 
v___x_2754_ = lean_unsigned_to_nat(1u);
v___x_2755_ = lean_nat_sub(v_snd_2746_, v___x_2754_);
lean_dec(v_snd_2746_);
if (v_isShared_2749_ == 0)
{
lean_ctor_set(v___x_2748_, 1, v___x_2755_);
lean_ctor_set(v___x_2748_, 0, v_map_2751_);
v___x_2757_ = v___x_2748_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v_map_2751_);
lean_ctor_set(v_reuseFailAlloc_2759_, 1, v___x_2755_);
v___x_2757_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
v_as_x27_2741_ = v_tail_2744_;
v_b_2742_ = v___x_2757_;
goto _start;
}
}
else
{
lean_object* v___x_2760_; lean_object* v___x_2761_; 
lean_dec_ref(v_map_2751_);
lean_del_object(v___x_2748_);
lean_dec(v_snd_2746_);
v___x_2760_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__3, &l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__3_once, _init_l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__3);
v___x_2761_ = l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1(v___x_2760_);
if (lean_obj_tag(v___x_2761_) == 0)
{
lean_object* v_a_2762_; 
lean_dec(v_tail_2744_);
v_a_2762_ = lean_ctor_get(v___x_2761_, 0);
lean_inc(v_a_2762_);
lean_dec_ref(v___x_2761_);
return v_a_2762_;
}
else
{
lean_object* v_a_2763_; 
v_a_2763_ = lean_ctor_get(v___x_2761_, 0);
lean_inc(v_a_2763_);
lean_dec_ref(v___x_2761_);
v_as_x27_2741_ = v_tail_2744_;
v_b_2742_ = v_a_2763_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___boxed(lean_object* v___x_2768_, lean_object* v_as_x27_2769_, lean_object* v_b_2770_){
_start:
{
lean_object* v_res_2771_; 
v_res_2771_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg(v___x_2768_, v_as_x27_2769_, v_b_2770_);
lean_dec_ref(v___x_2768_);
return v_res_2771_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__0(void){
_start:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; 
v___x_2772_ = lean_box(0);
v___x_2773_ = lean_unsigned_to_nat(16u);
v___x_2774_ = lean_mk_array(v___x_2773_, v___x_2772_);
return v___x_2774_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__1(void){
_start:
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; 
v___x_2775_ = lean_obj_once(&l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__0, &l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__0_once, _init_l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__0);
v___x_2776_ = lean_unsigned_to_nat(0u);
v___x_2777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2777_, 0, v___x_2776_);
lean_ctor_set(v___x_2777_, 1, v___x_2775_);
return v___x_2777_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__3(void){
_start:
{
lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; 
v___x_2779_ = ((lean_object*)(l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__2));
v___x_2780_ = lean_unsigned_to_nat(2u);
v___x_2781_ = lean_unsigned_to_nat(240u);
v___x_2782_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__1));
v___x_2783_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__0));
v___x_2784_ = l_mkPanicMessageWithDecl(v___x_2783_, v___x_2782_, v___x_2781_, v___x_2780_, v___x_2779_);
return v___x_2784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureDeclIndices(lean_object* v_env_2785_, lean_object* v_targets_2786_){
_start:
{
lean_object* v___x_2787_; lean_object* v_asyncMode_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v_fst_2792_; lean_object* v_snd_2793_; lean_object* v___x_2795_; uint8_t v_isShared_2796_; uint8_t v_isSharedCheck_2822_; 
v___x_2787_ = l_Lean_Compiler_LCNF_declOrderExt;
v_asyncMode_2788_ = lean_ctor_get(v___x_2787_, 2);
v___x_2789_ = ((lean_object*)(l_Lean_Compiler_LCNF_isDeclTransparent___closed__0));
v___x_2790_ = lean_box(0);
v___x_2791_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2789_, v___x_2787_, v_env_2785_, v_asyncMode_2788_, v___x_2790_);
v_fst_2792_ = lean_ctor_get(v___x_2791_, 0);
v_snd_2793_ = lean_ctor_get(v___x_2791_, 1);
v_isSharedCheck_2822_ = !lean_is_exclusive(v___x_2791_);
if (v_isSharedCheck_2822_ == 0)
{
v___x_2795_ = v___x_2791_;
v_isShared_2796_ = v_isSharedCheck_2822_;
goto v_resetjp_2794_;
}
else
{
lean_inc(v_snd_2793_);
lean_inc(v_fst_2792_);
lean_dec(v___x_2791_);
v___x_2795_ = lean_box(0);
v_isShared_2796_ = v_isSharedCheck_2822_;
goto v_resetjp_2794_;
}
v_resetjp_2794_:
{
lean_object* v___y_2798_; 
if (lean_obj_tag(v_snd_2793_) == 0)
{
lean_object* v_size_2820_; 
v_size_2820_ = lean_ctor_get(v_snd_2793_, 0);
lean_inc(v_size_2820_);
lean_dec_ref(v_snd_2793_);
v___y_2798_ = v_size_2820_;
goto v___jp_2797_;
}
else
{
lean_object* v___x_2821_; 
v___x_2821_ = lean_unsigned_to_nat(0u);
v___y_2798_ = v___x_2821_;
goto v___jp_2797_;
}
v___jp_2797_:
{
lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v_map_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2811_; 
v___x_2799_ = lean_unsigned_to_nat(0u);
v___x_2800_ = lean_unsigned_to_nat(4u);
v___x_2801_ = lean_nat_mul(v___y_2798_, v___x_2800_);
v___x_2802_ = lean_unsigned_to_nat(3u);
v___x_2803_ = lean_nat_div(v___x_2801_, v___x_2802_);
lean_dec(v___x_2801_);
v___x_2804_ = l_Nat_nextPowerOfTwo(v___x_2803_);
lean_dec(v___x_2803_);
v___x_2805_ = lean_box(0);
v___x_2806_ = lean_mk_array(v___x_2804_, v___x_2805_);
v_map_2807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_map_2807_, 0, v___x_2799_);
lean_ctor_set(v_map_2807_, 1, v___x_2806_);
v___x_2808_ = lean_obj_once(&l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__1, &l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__1_once, _init_l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__1);
v___x_2809_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0(v___x_2808_, v_targets_2786_);
if (v_isShared_2796_ == 0)
{
lean_ctor_set(v___x_2795_, 1, v___y_2798_);
lean_ctor_set(v___x_2795_, 0, v_map_2807_);
v___x_2811_ = v___x_2795_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2819_; 
v_reuseFailAlloc_2819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2819_, 0, v_map_2807_);
lean_ctor_set(v_reuseFailAlloc_2819_, 1, v___y_2798_);
v___x_2811_ = v_reuseFailAlloc_2819_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
lean_object* v___x_2812_; lean_object* v_fst_2813_; lean_object* v_size_2814_; lean_object* v___x_2815_; uint8_t v___x_2816_; 
v___x_2812_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg(v___x_2809_, v_fst_2792_, v___x_2811_);
lean_dec_ref(v___x_2809_);
v_fst_2813_ = lean_ctor_get(v___x_2812_, 0);
lean_inc(v_fst_2813_);
lean_dec_ref(v___x_2812_);
v_size_2814_ = lean_ctor_get(v_fst_2813_, 0);
v___x_2815_ = lean_array_get_size(v_targets_2786_);
v___x_2816_ = lean_nat_dec_eq(v_size_2814_, v___x_2815_);
if (v___x_2816_ == 0)
{
lean_object* v___x_2817_; lean_object* v___x_2818_; 
lean_dec(v_fst_2813_);
v___x_2817_ = lean_obj_once(&l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__3, &l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__3_once, _init_l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__3);
v___x_2818_ = l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__5(v___x_2817_);
return v___x_2818_;
}
else
{
return v_fst_2813_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureDeclIndices___boxed(lean_object* v_env_2823_, lean_object* v_targets_2824_){
_start:
{
lean_object* v_res_2825_; 
v_res_2825_ = l_Lean_Compiler_LCNF_getImpureDeclIndices(v_env_2823_, v_targets_2824_);
lean_dec_ref(v_targets_2824_);
return v_res_2825_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2(lean_object* v_00_u03b2_2826_, lean_object* v_m_2827_, lean_object* v_a_2828_){
_start:
{
uint8_t v___x_2829_; 
v___x_2829_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2___redArg(v_m_2827_, v_a_2828_);
return v___x_2829_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2___boxed(lean_object* v_00_u03b2_2830_, lean_object* v_m_2831_, lean_object* v_a_2832_){
_start:
{
uint8_t v_res_2833_; lean_object* v_r_2834_; 
v_res_2833_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2(v_00_u03b2_2830_, v_m_2831_, v_a_2832_);
lean_dec(v_a_2832_);
lean_dec_ref(v_m_2831_);
v_r_2834_ = lean_box(v_res_2833_);
return v_r_2834_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3(lean_object* v_00_u03b2_2835_, lean_object* v_m_2836_, lean_object* v_a_2837_, lean_object* v_b_2838_){
_start:
{
lean_object* v___x_2839_; 
v___x_2839_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3___redArg(v_m_2836_, v_a_2837_, v_b_2838_);
return v___x_2839_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4(lean_object* v___x_2840_, lean_object* v_as_2841_, lean_object* v_as_x27_2842_, lean_object* v_b_2843_, lean_object* v_a_2844_){
_start:
{
lean_object* v___x_2845_; 
v___x_2845_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg(v___x_2840_, v_as_x27_2842_, v_b_2843_);
return v___x_2845_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___boxed(lean_object* v___x_2846_, lean_object* v_as_2847_, lean_object* v_as_x27_2848_, lean_object* v_b_2849_, lean_object* v_a_2850_){
_start:
{
lean_object* v_res_2851_; 
v_res_2851_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4(v___x_2846_, v_as_2847_, v_as_x27_2848_, v_b_2849_, v_a_2850_);
lean_dec(v_as_2847_);
lean_dec_ref(v___x_2846_);
return v_res_2851_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__0(lean_object* v_00_u03b2_2852_, lean_object* v_m_2853_, lean_object* v_a_2854_, lean_object* v_b_2855_){
_start:
{
lean_object* v___x_2856_; 
v___x_2856_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__0___redArg(v_m_2853_, v_a_2854_, v_b_2855_);
return v___x_2856_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4(lean_object* v_00_u03b2_2857_, lean_object* v_a_2858_, lean_object* v_x_2859_){
_start:
{
uint8_t v___x_2860_; 
v___x_2860_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___redArg(v_a_2858_, v_x_2859_);
return v___x_2860_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___boxed(lean_object* v_00_u03b2_2861_, lean_object* v_a_2862_, lean_object* v_x_2863_){
_start:
{
uint8_t v_res_2864_; lean_object* v_r_2865_; 
v_res_2864_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4(v_00_u03b2_2861_, v_a_2862_, v_x_2863_);
lean_dec(v_x_2863_);
lean_dec(v_a_2862_);
v_r_2865_ = lean_box(v_res_2864_);
return v_r_2865_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6(lean_object* v_00_u03b2_2866_, lean_object* v_data_2867_){
_start:
{
lean_object* v___x_2868_; 
v___x_2868_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6___redArg(v_data_2867_);
return v___x_2868_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__7(lean_object* v_00_u03b2_2869_, lean_object* v_a_2870_, lean_object* v_b_2871_, lean_object* v_x_2872_){
_start:
{
lean_object* v___x_2873_; 
v___x_2873_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__7___redArg(v_a_2870_, v_b_2871_, v_x_2872_);
return v___x_2873_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8(lean_object* v_00_u03b2_2874_, lean_object* v_i_2875_, lean_object* v_source_2876_, lean_object* v_target_2877_){
_start:
{
lean_object* v___x_2878_; 
v___x_2878_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8___redArg(v_i_2875_, v_source_2876_, v_target_2877_);
return v___x_2878_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8_spec__10(lean_object* v_00_u03b2_2879_, lean_object* v_x_2880_, lean_object* v_x_2881_){
_start:
{
lean_object* v___x_2882_; 
v___x_2882_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8_spec__10___redArg(v_x_2880_, v_x_2881_);
return v___x_2882_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PublicDeclsExt(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PublicDeclsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3496178540____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_baseTransparentDeclsExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_baseTransparentDeclsExt);
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1977385844____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_monoTransparentDeclsExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_monoTransparentDeclsExt);
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_975450157____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_impureTransparentDeclsExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_impureTransparentDeclsExt);
lean_dec_ref(res);
res = l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Compiler_LCNF_baseExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Compiler_LCNF_baseExt);
lean_dec_ref(res);
res = l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Compiler_LCNF_monoExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Compiler_LCNF_monoExt);
lean_dec_ref(res);
res = l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Compiler_LCNF_impureExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Compiler_LCNF_impureExt);
lean_dec_ref(res);
res = l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Compiler_LCNF_impureSigExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Compiler_LCNF_impureSigExt);
lean_dec_ref(res);
res = l_Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_2540780834____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Compiler_LCNF_declOrderExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Compiler_LCNF_declOrderExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Compiler_LCNF_mkDeclExt___auto__1 = _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_mkDeclExt___auto__1);
l_Lean_Compiler_LCNF_mkSigDeclExt___auto__1 = _init_l_Lean_Compiler_LCNF_mkSigDeclExt___auto__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_mkSigDeclExt___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PublicDeclsExt(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PublicDeclsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
}
#ifdef __cplusplus
}
#endif
