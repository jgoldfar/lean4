// Lean compiler output
// Module: Lean.Compiler.LCNF.ExplicitRC
// Imports: public import Lean.Compiler.LCNF.CompilerM public import Lean.Compiler.LCNF.PassManager import Lean.Compiler.LCNF.PhaseExt import Lean.Compiler.LCNF.PrettyPrinter
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
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instBEqFVarId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instHashableFVarId_hash___boxed(lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1(uint8_t);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
extern lean_object* l_Lean_instEmptyCollectionFVarIdHashSet;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedParam_default(uint8_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_qpartition___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedFVarIdHashSet;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Std_DHashMap_Raw_instForInSigmaOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertMany___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_CtorInfo_type(lean_object*);
uint8_t l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_LetValue_isPersistent(lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedSignature_default(uint8_t);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedFunDecl_default__1(uint8_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqFVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableFVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__4_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__5_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__6_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__7_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__8 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__2_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__9 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__9_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__9_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__4_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__5_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__6_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__7_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__10 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__10_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__10_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__8_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__4;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0_spec__3_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "getInternal"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "get!Internal"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "uget"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 93, .m_data = "_private.Lean.Compiler.LCNF.ExplicitRC.0.Lean.Compiler.LCNF.CollectDerivedValInfo.collectCode"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.Compiler.LCNF.ExplicitRC"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__4_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0_spec__3_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__0;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__1;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedVarInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedVarInfo_default___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedVarInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedVarInfo_default = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedVarInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedVarInfo = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedVarInfo_default___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___lam__0, .m_arity = 5, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1_value)} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__0_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_DHashMap_Raw_instForInSigmaOfMonad___redArg___lam__2, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11_value)} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__1_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___lam__1, .m_arity = 5, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__0_value)} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_erase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_insertBorrow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_insertLive(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5_spec__6(lean_object*);
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Std.Data.DHashMap.Internal.AssocList.Basic"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___closed__0_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DHashMap.Internal.AssocList.get!"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___closed__1 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___closed__1_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "key is not present in hash table"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___closed__2 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___closed__2_value;
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__5_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__2_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "_private.Lean.Compiler.LCNF.ExplicitRC.0.Lean.Compiler.LCNF.useLetValue"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0_spec__0(lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Std.Data.DTreeMap.Internal.Queries"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Std.DTreeMap.Internal.Impl.Const.get!"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__1_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Key is not present in map"};
static const lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__2 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__2_value;
static lean_once_cell_t l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__0_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__0_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___closed__0;
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateLetImp"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ugetBorrowed"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "get!InternalBorrowed"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__4_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "getInternalBorrowed"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__5_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__1_value),LEAN_SCALAR_PTR_LITERAL(91, 223, 205, 20, 178, 155, 84, 168)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__6_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__7_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__8 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__8_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__9 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__9_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "_private.Lean.Compiler.LCNF.ExplicitRC.0.Lean.Compiler.LCNF.LetDecl.explicitRc"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__11 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__11_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__12;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10_spec__14(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__12(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__9(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "_private.Lean.Compiler.LCNF.ExplicitRC.0.Lean.Compiler.LCNF.Code.explicitRc"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_runExplicitRc_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_runExplicitRc_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_runExplicitRc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_runExplicitRc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_explicitRc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "explicitRc"};
static const lean_object* l_Lean_Compiler_LCNF_explicitRc___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_explicitRc___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_explicitRc___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_explicitRc___closed__0_value),LEAN_SCALAR_PTR_LITERAL(9, 173, 65, 140, 38, 197, 53, 106)}};
static const lean_object* l_Lean_Compiler_LCNF_explicitRc___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_explicitRc___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_explicitRc___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_explicitRc___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_explicitRc___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_explicitRc___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_explicitRc___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_explicitRc;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_explicitRc___closed__0_value),LEAN_SCALAR_PTR_LITERAL(31, 132, 102, 171, 122, 154, 149, 18)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ExplicitRC"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(87, 164, 3, 212, 141, 65, 76, 246)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(234, 211, 142, 143, 107, 33, 215, 207)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(107, 250, 223, 192, 104, 128, 184, 149)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(141, 253, 97, 148, 179, 46, 109, 198)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(184, 97, 91, 211, 31, 209, 125, 32)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(245, 202, 70, 178, 192, 164, 153, 156)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(8, 238, 44, 6, 75, 144, 17, 52)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 123, 124, 125, 95, 169, 195, 145)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(143, 99, 255, 139, 23, 91, 187, 231)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(226, 146, 98, 9, 226, 177, 155, 125)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(152, 80, 138, 101, 161, 95, 63, 48)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = l_Lean_instInhabitedFVarIdHashSet;
v___x_4_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__0));
v___x_5_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5_, 0, v___x_4_);
lean_ctor_set(v___x_5_, 1, v___x_3_);
return v___x_5_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__1, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__1);
return v___x_6_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default;
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__0(lean_object* v___x_8_, lean_object* v___x_9_, lean_object* v_child_10_, lean_object* v_info_11_){
_start:
{
lean_object* v_parents_12_; lean_object* v_children_13_; lean_object* v___x_15_; uint8_t v_isShared_16_; uint8_t v_isSharedCheck_22_; 
v_parents_12_ = lean_ctor_get(v_info_11_, 0);
v_children_13_ = lean_ctor_get(v_info_11_, 1);
v_isSharedCheck_22_ = !lean_is_exclusive(v_info_11_);
if (v_isSharedCheck_22_ == 0)
{
v___x_15_ = v_info_11_;
v_isShared_16_ = v_isSharedCheck_22_;
goto v_resetjp_14_;
}
else
{
lean_inc(v_children_13_);
lean_inc(v_parents_12_);
lean_dec(v_info_11_);
v___x_15_ = lean_box(0);
v_isShared_16_ = v_isSharedCheck_22_;
goto v_resetjp_14_;
}
v_resetjp_14_:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_20_; 
v___x_17_ = lean_box(0);
v___x_18_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_8_, v___x_9_, v_children_13_, v_child_10_, v___x_17_);
if (v_isShared_16_ == 0)
{
lean_ctor_set(v___x_15_, 1, v___x_18_);
v___x_20_ = v___x_15_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v_parents_12_);
lean_ctor_set(v_reuseFailAlloc_21_, 1, v___x_18_);
v___x_20_ = v_reuseFailAlloc_21_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
return v___x_20_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__1(lean_object* v___x_23_, lean_object* v___x_24_, lean_object* v___f_25_, lean_object* v_x1_26_, lean_object* v_x2_27_){
_start:
{
lean_object* v___x_28_; 
v___x_28_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify___redArg(v___x_23_, v___x_24_, v_x1_26_, v_x2_27_, v___f_25_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg(lean_object* v_parents_50_, lean_object* v_child_51_, lean_object* v_a_52_){
_start:
{
lean_object* v___x_54_; lean_object* v_varMap_55_; lean_object* v_borrowedValues_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_86_; 
v___x_54_ = lean_st_ref_take(v_a_52_);
v_varMap_55_ = lean_ctor_get(v___x_54_, 0);
v_borrowedValues_56_ = lean_ctor_get(v___x_54_, 1);
v_isSharedCheck_86_ = !lean_is_exclusive(v___x_54_);
if (v_isSharedCheck_86_ == 0)
{
v___x_58_ = v___x_54_;
v_isShared_59_ = v_isSharedCheck_86_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_borrowedValues_56_);
lean_inc(v_varMap_55_);
lean_dec(v___x_54_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_86_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___y_65_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; uint8_t v___x_76_; 
v___x_60_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_61_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_62_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_63_ = lean_box(0);
v___x_73_ = lean_unsigned_to_nat(0u);
v___x_74_ = lean_array_get_size(v_parents_50_);
v___x_75_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11));
v___x_76_ = lean_nat_dec_lt(v___x_73_, v___x_74_);
if (v___x_76_ == 0)
{
v___y_65_ = v_varMap_55_;
goto v___jp_64_;
}
else
{
lean_object* v___f_77_; lean_object* v___f_78_; uint8_t v___x_79_; 
lean_inc(v_child_51_);
v___f_77_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__0), 4, 3);
lean_closure_set(v___f_77_, 0, v___x_60_);
lean_closure_set(v___f_77_, 1, v___x_61_);
lean_closure_set(v___f_77_, 2, v_child_51_);
v___f_78_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__1), 5, 3);
lean_closure_set(v___f_78_, 0, v___x_60_);
lean_closure_set(v___f_78_, 1, v___x_61_);
lean_closure_set(v___f_78_, 2, v___f_77_);
v___x_79_ = lean_nat_dec_le(v___x_74_, v___x_74_);
if (v___x_79_ == 0)
{
if (v___x_76_ == 0)
{
lean_dec_ref(v___f_78_);
v___y_65_ = v_varMap_55_;
goto v___jp_64_;
}
else
{
size_t v___x_80_; size_t v___x_81_; lean_object* v___x_82_; 
v___x_80_ = ((size_t)0ULL);
v___x_81_ = lean_usize_of_nat(v___x_74_);
lean_inc_ref(v_parents_50_);
v___x_82_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_75_, v___f_78_, v_parents_50_, v___x_80_, v___x_81_, v_varMap_55_);
v___y_65_ = v___x_82_;
goto v___jp_64_;
}
}
else
{
size_t v___x_83_; size_t v___x_84_; lean_object* v___x_85_; 
v___x_83_ = ((size_t)0ULL);
v___x_84_ = lean_usize_of_nat(v___x_74_);
lean_inc_ref(v_parents_50_);
v___x_85_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_75_, v___f_78_, v_parents_50_, v___x_83_, v___x_84_, v_varMap_55_);
v___y_65_ = v___x_85_;
goto v___jp_64_;
}
}
v___jp_64_:
{
lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_69_; 
v___x_66_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_66_, 0, v_parents_50_);
lean_ctor_set(v___x_66_, 1, v___x_62_);
v___x_67_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_60_, v___x_61_, v___y_65_, v_child_51_, v___x_66_);
if (v_isShared_59_ == 0)
{
lean_ctor_set(v___x_58_, 0, v___x_67_);
v___x_69_ = v___x_58_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_72_; 
v_reuseFailAlloc_72_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_72_, 0, v___x_67_);
lean_ctor_set(v_reuseFailAlloc_72_, 1, v_borrowedValues_56_);
v___x_69_ = v_reuseFailAlloc_72_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_st_ref_set(v_a_52_, v___x_69_);
v___x_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_71_, 0, v___x_63_);
return v___x_71_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___boxed(lean_object* v_parents_87_, lean_object* v_child_88_, lean_object* v_a_89_, lean_object* v_a_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg(v_parents_87_, v_child_88_, v_a_89_);
lean_dec(v_a_89_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue(lean_object* v_parents_92_, lean_object* v_child_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_){
_start:
{
lean_object* v___x_100_; lean_object* v_varMap_101_; lean_object* v_borrowedValues_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_132_; 
v___x_100_ = lean_st_ref_take(v_a_94_);
v_varMap_101_ = lean_ctor_get(v___x_100_, 0);
v_borrowedValues_102_ = lean_ctor_get(v___x_100_, 1);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_132_ == 0)
{
v___x_104_ = v___x_100_;
v_isShared_105_ = v_isSharedCheck_132_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_borrowedValues_102_);
lean_inc(v_varMap_101_);
lean_dec(v___x_100_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_132_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___y_111_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_106_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_107_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_108_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_109_ = lean_box(0);
v___x_119_ = lean_unsigned_to_nat(0u);
v___x_120_ = lean_array_get_size(v_parents_92_);
v___x_121_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11));
v___x_122_ = lean_nat_dec_lt(v___x_119_, v___x_120_);
if (v___x_122_ == 0)
{
v___y_111_ = v_varMap_101_;
goto v___jp_110_;
}
else
{
lean_object* v___f_123_; lean_object* v___f_124_; uint8_t v___x_125_; 
lean_inc(v_child_93_);
v___f_123_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__0), 4, 3);
lean_closure_set(v___f_123_, 0, v___x_106_);
lean_closure_set(v___f_123_, 1, v___x_107_);
lean_closure_set(v___f_123_, 2, v_child_93_);
v___f_124_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__1), 5, 3);
lean_closure_set(v___f_124_, 0, v___x_106_);
lean_closure_set(v___f_124_, 1, v___x_107_);
lean_closure_set(v___f_124_, 2, v___f_123_);
v___x_125_ = lean_nat_dec_le(v___x_120_, v___x_120_);
if (v___x_125_ == 0)
{
if (v___x_122_ == 0)
{
lean_dec_ref(v___f_124_);
v___y_111_ = v_varMap_101_;
goto v___jp_110_;
}
else
{
size_t v___x_126_; size_t v___x_127_; lean_object* v___x_128_; 
v___x_126_ = ((size_t)0ULL);
v___x_127_ = lean_usize_of_nat(v___x_120_);
lean_inc_ref(v_parents_92_);
v___x_128_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_121_, v___f_124_, v_parents_92_, v___x_126_, v___x_127_, v_varMap_101_);
v___y_111_ = v___x_128_;
goto v___jp_110_;
}
}
else
{
size_t v___x_129_; size_t v___x_130_; lean_object* v___x_131_; 
v___x_129_ = ((size_t)0ULL);
v___x_130_ = lean_usize_of_nat(v___x_120_);
lean_inc_ref(v_parents_92_);
v___x_131_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_121_, v___f_124_, v_parents_92_, v___x_129_, v___x_130_, v_varMap_101_);
v___y_111_ = v___x_131_;
goto v___jp_110_;
}
}
v___jp_110_:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_115_; 
v___x_112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_112_, 0, v_parents_92_);
lean_ctor_set(v___x_112_, 1, v___x_108_);
v___x_113_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_106_, v___x_107_, v___y_111_, v_child_93_, v___x_112_);
if (v_isShared_105_ == 0)
{
lean_ctor_set(v___x_104_, 0, v___x_113_);
v___x_115_ = v___x_104_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v___x_113_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v_borrowedValues_102_);
v___x_115_ = v_reuseFailAlloc_118_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_116_ = lean_st_ref_set(v_a_94_, v___x_115_);
v___x_117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_117_, 0, v___x_109_);
return v___x_117_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___boxed(lean_object* v_parents_133_, lean_object* v_child_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue(v_parents_133_, v_child_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_, v_a_139_);
lean_dec(v_a_139_);
lean_dec_ref(v_a_138_);
lean_dec(v_a_137_);
lean_dec_ref(v_a_136_);
lean_dec(v_a_135_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue___redArg(lean_object* v_fvarId_142_, lean_object* v_a_143_){
_start:
{
lean_object* v___x_145_; lean_object* v_varMap_146_; lean_object* v_borrowedValues_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_160_; 
v___x_145_ = lean_st_ref_take(v_a_143_);
v_varMap_146_ = lean_ctor_get(v___x_145_, 0);
v_borrowedValues_147_ = lean_ctor_get(v___x_145_, 1);
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_145_);
if (v_isSharedCheck_160_ == 0)
{
v___x_149_ = v___x_145_;
v_isShared_150_ = v_isSharedCheck_160_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_borrowedValues_147_);
lean_inc(v_varMap_146_);
lean_dec(v___x_145_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_160_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_156_; 
v___x_151_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_152_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_153_ = lean_box(0);
v___x_154_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_151_, v___x_152_, v_borrowedValues_147_, v_fvarId_142_, v___x_153_);
if (v_isShared_150_ == 0)
{
lean_ctor_set(v___x_149_, 1, v___x_154_);
v___x_156_ = v___x_149_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_varMap_146_);
lean_ctor_set(v_reuseFailAlloc_159_, 1, v___x_154_);
v___x_156_ = v_reuseFailAlloc_159_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = lean_st_ref_set(v_a_143_, v___x_156_);
v___x_158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_158_, 0, v___x_153_);
return v___x_158_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue___redArg___boxed(lean_object* v_fvarId_161_, lean_object* v_a_162_, lean_object* v_a_163_){
_start:
{
lean_object* v_res_164_; 
v_res_164_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue___redArg(v_fvarId_161_, v_a_162_);
lean_dec(v_a_162_);
return v_res_164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue(lean_object* v_fvarId_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_){
_start:
{
lean_object* v___x_172_; lean_object* v_varMap_173_; lean_object* v_borrowedValues_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_187_; 
v___x_172_ = lean_st_ref_take(v_a_166_);
v_varMap_173_ = lean_ctor_get(v___x_172_, 0);
v_borrowedValues_174_ = lean_ctor_get(v___x_172_, 1);
v_isSharedCheck_187_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_187_ == 0)
{
v___x_176_ = v___x_172_;
v_isShared_177_ = v_isSharedCheck_187_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_borrowedValues_174_);
lean_inc(v_varMap_173_);
lean_dec(v___x_172_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_187_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_183_; 
v___x_178_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_179_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_180_ = lean_box(0);
v___x_181_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_178_, v___x_179_, v_borrowedValues_174_, v_fvarId_165_, v___x_180_);
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 1, v___x_181_);
v___x_183_ = v___x_176_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v_varMap_173_);
lean_ctor_set(v_reuseFailAlloc_186_, 1, v___x_181_);
v___x_183_ = v_reuseFailAlloc_186_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
lean_object* v___x_184_; lean_object* v___x_185_; 
v___x_184_ = lean_st_ref_set(v_a_166_, v___x_183_);
v___x_185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_185_, 0, v___x_180_);
return v___x_185_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue___boxed(lean_object* v_fvarId_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue(v_fvarId_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_);
lean_dec(v_a_193_);
lean_dec_ref(v_a_192_);
lean_dec(v_a_191_);
lean_dec_ref(v_a_190_);
lean_dec(v_a_189_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___lam__0(lean_object* v___x_196_, lean_object* v___x_197_, lean_object* v_fvarId_198_, lean_object* v_info_199_){
_start:
{
lean_object* v_parents_200_; lean_object* v_children_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_210_; 
v_parents_200_ = lean_ctor_get(v_info_199_, 0);
v_children_201_ = lean_ctor_get(v_info_199_, 1);
v_isSharedCheck_210_ = !lean_is_exclusive(v_info_199_);
if (v_isSharedCheck_210_ == 0)
{
v___x_203_ = v_info_199_;
v_isShared_204_ = v_isSharedCheck_210_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_children_201_);
lean_inc(v_parents_200_);
lean_dec(v_info_199_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_210_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_208_; 
v___x_205_ = lean_box(0);
v___x_206_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_196_, v___x_197_, v_children_201_, v_fvarId_198_, v___x_205_);
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 1, v___x_206_);
v___x_208_ = v___x_203_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_parents_200_);
lean_ctor_set(v_reuseFailAlloc_209_, 1, v___x_206_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1(void){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_213_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_214_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0));
v___x_215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_214_);
lean_ctor_set(v___x_215_, 1, v___x_213_);
return v___x_215_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2(void){
_start:
{
lean_object* v___x_216_; lean_object* v___x_217_; 
v___x_216_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0));
v___x_217_ = lean_array_get_size(v___x_216_);
return v___x_217_;
}
}
static uint8_t _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3(void){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; uint8_t v___x_220_; 
v___x_218_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2);
v___x_219_ = lean_unsigned_to_nat(0u);
v___x_220_ = lean_nat_dec_lt(v___x_219_, v___x_218_);
return v___x_220_;
}
}
static uint8_t _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__4(void){
_start:
{
lean_object* v___x_221_; uint8_t v___x_222_; 
v___x_221_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2);
v___x_222_ = lean_nat_dec_le(v___x_221_, v___x_221_);
return v___x_222_;
}
}
static size_t _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5(void){
_start:
{
lean_object* v___x_223_; size_t v___x_224_; 
v___x_223_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2);
v___x_224_ = lean_usize_of_nat(v___x_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg(lean_object* v_p_225_, lean_object* v_a_226_){
_start:
{
lean_object* v___x_231_; lean_object* v_fvarId_232_; lean_object* v_type_233_; uint8_t v_borrow_234_; lean_object* v_varMap_235_; lean_object* v_borrowedValues_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_277_; 
v___x_231_ = lean_st_ref_take(v_a_226_);
v_fvarId_232_ = lean_ctor_get(v_p_225_, 0);
lean_inc(v_fvarId_232_);
v_type_233_ = lean_ctor_get(v_p_225_, 2);
lean_inc_ref(v_type_233_);
v_borrow_234_ = lean_ctor_get_uint8(v_p_225_, sizeof(void*)*3);
lean_dec_ref(v_p_225_);
v_varMap_235_ = lean_ctor_get(v___x_231_, 0);
v_borrowedValues_236_ = lean_ctor_get(v___x_231_, 1);
v_isSharedCheck_277_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_277_ == 0)
{
v___x_238_ = v___x_231_;
v_isShared_239_ = v_isSharedCheck_277_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_borrowedValues_236_);
lean_inc(v_varMap_235_);
lean_dec(v___x_231_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_277_;
goto v_resetjp_237_;
}
v___jp_228_:
{
lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_229_ = lean_box(0);
v___x_230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_230_, 0, v___x_229_);
return v___x_230_;
}
v_resetjp_237_:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___y_244_; lean_object* v___x_266_; uint8_t v___x_267_; 
v___x_240_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_241_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_242_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0));
v___x_266_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11));
v___x_267_ = lean_uint8_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3);
if (v___x_267_ == 0)
{
v___y_244_ = v_varMap_235_;
goto v___jp_243_;
}
else
{
lean_object* v___f_268_; lean_object* v___f_269_; uint8_t v___x_270_; 
lean_inc(v_fvarId_232_);
v___f_268_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___lam__0), 4, 3);
lean_closure_set(v___f_268_, 0, v___x_240_);
lean_closure_set(v___f_268_, 1, v___x_241_);
lean_closure_set(v___f_268_, 2, v_fvarId_232_);
v___f_269_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__1), 5, 3);
lean_closure_set(v___f_269_, 0, v___x_240_);
lean_closure_set(v___f_269_, 1, v___x_241_);
lean_closure_set(v___f_269_, 2, v___f_268_);
v___x_270_ = lean_uint8_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__4, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__4_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__4);
if (v___x_270_ == 0)
{
if (v___x_267_ == 0)
{
lean_dec_ref(v___f_269_);
v___y_244_ = v_varMap_235_;
goto v___jp_243_;
}
else
{
size_t v___x_271_; size_t v___x_272_; lean_object* v___x_273_; 
v___x_271_ = ((size_t)0ULL);
v___x_272_ = lean_usize_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5);
v___x_273_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_266_, v___f_269_, v___x_242_, v___x_271_, v___x_272_, v_varMap_235_);
v___y_244_ = v___x_273_;
goto v___jp_243_;
}
}
else
{
size_t v___x_274_; size_t v___x_275_; lean_object* v___x_276_; 
v___x_274_ = ((size_t)0ULL);
v___x_275_ = lean_usize_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5);
v___x_276_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_266_, v___f_269_, v___x_242_, v___x_274_, v___x_275_, v_varMap_235_);
v___y_244_ = v___x_276_;
goto v___jp_243_;
}
}
v___jp_243_:
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_248_; 
v___x_245_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1);
lean_inc(v_fvarId_232_);
v___x_246_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_240_, v___x_241_, v___y_244_, v_fvarId_232_, v___x_245_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 0, v___x_246_);
v___x_248_ = v___x_238_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v___x_246_);
lean_ctor_set(v_reuseFailAlloc_265_, 1, v_borrowedValues_236_);
v___x_248_ = v_reuseFailAlloc_265_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
lean_object* v___x_249_; 
v___x_249_ = lean_st_ref_set(v_a_226_, v___x_248_);
if (v_borrow_234_ == 0)
{
lean_dec_ref(v_type_233_);
lean_dec(v_fvarId_232_);
goto v___jp_228_;
}
else
{
uint8_t v___x_250_; 
v___x_250_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_233_);
lean_dec_ref(v_type_233_);
if (v___x_250_ == 0)
{
lean_dec(v_fvarId_232_);
goto v___jp_228_;
}
else
{
lean_object* v___x_251_; lean_object* v_varMap_252_; lean_object* v_borrowedValues_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_264_; 
v___x_251_ = lean_st_ref_take(v_a_226_);
v_varMap_252_ = lean_ctor_get(v___x_251_, 0);
v_borrowedValues_253_ = lean_ctor_get(v___x_251_, 1);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_251_);
if (v_isSharedCheck_264_ == 0)
{
v___x_255_ = v___x_251_;
v_isShared_256_ = v_isSharedCheck_264_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_borrowedValues_253_);
lean_inc(v_varMap_252_);
lean_dec(v___x_251_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_264_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_260_; 
v___x_257_ = lean_box(0);
v___x_258_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_240_, v___x_241_, v_borrowedValues_253_, v_fvarId_232_, v___x_257_);
if (v_isShared_256_ == 0)
{
lean_ctor_set(v___x_255_, 1, v___x_258_);
v___x_260_ = v___x_255_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_varMap_252_);
lean_ctor_set(v_reuseFailAlloc_263_, 1, v___x_258_);
v___x_260_ = v_reuseFailAlloc_263_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_261_ = lean_st_ref_set(v_a_226_, v___x_260_);
v___x_262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_262_, 0, v___x_257_);
return v___x_262_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___boxed(lean_object* v_p_278_, lean_object* v_a_279_, lean_object* v_a_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg(v_p_278_, v_a_279_);
lean_dec(v_a_279_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam(lean_object* v_p_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_){
_start:
{
lean_object* v___x_292_; lean_object* v_fvarId_293_; lean_object* v_type_294_; uint8_t v_borrow_295_; lean_object* v_varMap_296_; lean_object* v_borrowedValues_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_338_; 
v___x_292_ = lean_st_ref_take(v_a_283_);
v_fvarId_293_ = lean_ctor_get(v_p_282_, 0);
lean_inc(v_fvarId_293_);
v_type_294_ = lean_ctor_get(v_p_282_, 2);
lean_inc_ref(v_type_294_);
v_borrow_295_ = lean_ctor_get_uint8(v_p_282_, sizeof(void*)*3);
lean_dec_ref(v_p_282_);
v_varMap_296_ = lean_ctor_get(v___x_292_, 0);
v_borrowedValues_297_ = lean_ctor_get(v___x_292_, 1);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_292_);
if (v_isSharedCheck_338_ == 0)
{
v___x_299_ = v___x_292_;
v_isShared_300_ = v_isSharedCheck_338_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_borrowedValues_297_);
lean_inc(v_varMap_296_);
lean_dec(v___x_292_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_338_;
goto v_resetjp_298_;
}
v___jp_289_:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = lean_box(0);
v___x_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
return v___x_291_;
}
v_resetjp_298_:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___y_305_; lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_301_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_302_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_303_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0));
v___x_327_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11));
v___x_328_ = lean_uint8_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3);
if (v___x_328_ == 0)
{
v___y_305_ = v_varMap_296_;
goto v___jp_304_;
}
else
{
lean_object* v___f_329_; lean_object* v___f_330_; uint8_t v___x_331_; 
lean_inc(v_fvarId_293_);
v___f_329_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___lam__0), 4, 3);
lean_closure_set(v___f_329_, 0, v___x_301_);
lean_closure_set(v___f_329_, 1, v___x_302_);
lean_closure_set(v___f_329_, 2, v_fvarId_293_);
v___f_330_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__1), 5, 3);
lean_closure_set(v___f_330_, 0, v___x_301_);
lean_closure_set(v___f_330_, 1, v___x_302_);
lean_closure_set(v___f_330_, 2, v___f_329_);
v___x_331_ = lean_uint8_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__4, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__4_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__4);
if (v___x_331_ == 0)
{
if (v___x_328_ == 0)
{
lean_dec_ref(v___f_330_);
v___y_305_ = v_varMap_296_;
goto v___jp_304_;
}
else
{
size_t v___x_332_; size_t v___x_333_; lean_object* v___x_334_; 
v___x_332_ = ((size_t)0ULL);
v___x_333_ = lean_usize_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5);
v___x_334_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_327_, v___f_330_, v___x_303_, v___x_332_, v___x_333_, v_varMap_296_);
v___y_305_ = v___x_334_;
goto v___jp_304_;
}
}
else
{
size_t v___x_335_; size_t v___x_336_; lean_object* v___x_337_; 
v___x_335_ = ((size_t)0ULL);
v___x_336_ = lean_usize_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5);
v___x_337_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_327_, v___f_330_, v___x_303_, v___x_335_, v___x_336_, v_varMap_296_);
v___y_305_ = v___x_337_;
goto v___jp_304_;
}
}
v___jp_304_:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_309_; 
v___x_306_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1);
lean_inc(v_fvarId_293_);
v___x_307_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_301_, v___x_302_, v___y_305_, v_fvarId_293_, v___x_306_);
if (v_isShared_300_ == 0)
{
lean_ctor_set(v___x_299_, 0, v___x_307_);
v___x_309_ = v___x_299_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v___x_307_);
lean_ctor_set(v_reuseFailAlloc_326_, 1, v_borrowedValues_297_);
v___x_309_ = v_reuseFailAlloc_326_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
lean_object* v___x_310_; 
v___x_310_ = lean_st_ref_set(v_a_283_, v___x_309_);
if (v_borrow_295_ == 0)
{
lean_dec_ref(v_type_294_);
lean_dec(v_fvarId_293_);
goto v___jp_289_;
}
else
{
uint8_t v___x_311_; 
v___x_311_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_294_);
lean_dec_ref(v_type_294_);
if (v___x_311_ == 0)
{
lean_dec(v_fvarId_293_);
goto v___jp_289_;
}
else
{
lean_object* v___x_312_; lean_object* v_varMap_313_; lean_object* v_borrowedValues_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_325_; 
v___x_312_ = lean_st_ref_take(v_a_283_);
v_varMap_313_ = lean_ctor_get(v___x_312_, 0);
v_borrowedValues_314_ = lean_ctor_get(v___x_312_, 1);
v_isSharedCheck_325_ = !lean_is_exclusive(v___x_312_);
if (v_isSharedCheck_325_ == 0)
{
v___x_316_ = v___x_312_;
v_isShared_317_ = v_isSharedCheck_325_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_borrowedValues_314_);
lean_inc(v_varMap_313_);
lean_dec(v___x_312_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_325_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_321_; 
v___x_318_ = lean_box(0);
v___x_319_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_301_, v___x_302_, v_borrowedValues_314_, v_fvarId_293_, v___x_318_);
if (v_isShared_317_ == 0)
{
lean_ctor_set(v___x_316_, 1, v___x_319_);
v___x_321_ = v___x_316_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_varMap_313_);
lean_ctor_set(v_reuseFailAlloc_324_, 1, v___x_319_);
v___x_321_ = v_reuseFailAlloc_324_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = lean_st_ref_set(v_a_283_, v___x_321_);
v___x_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_323_, 0, v___x_318_);
return v___x_323_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___boxed(lean_object* v_p_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam(v_p_339_, v_a_340_, v_a_341_, v_a_342_, v_a_343_, v_a_344_);
lean_dec(v_a_344_);
lean_dec_ref(v_a_343_);
lean_dec(v_a_342_);
lean_dec_ref(v_a_341_);
lean_dec(v_a_340_);
return v_res_346_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg(lean_object* v_a_347_, lean_object* v_x_348_){
_start:
{
if (lean_obj_tag(v_x_348_) == 0)
{
uint8_t v___x_349_; 
v___x_349_ = 0;
return v___x_349_;
}
else
{
lean_object* v_key_350_; lean_object* v_tail_351_; uint8_t v___x_352_; 
v_key_350_ = lean_ctor_get(v_x_348_, 0);
v_tail_351_ = lean_ctor_get(v_x_348_, 2);
v___x_352_ = l_Lean_instBEqFVarId_beq(v_key_350_, v_a_347_);
if (v___x_352_ == 0)
{
v_x_348_ = v_tail_351_;
goto _start;
}
else
{
return v___x_352_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg___boxed(lean_object* v_a_354_, lean_object* v_x_355_){
_start:
{
uint8_t v_res_356_; lean_object* v_r_357_; 
v_res_356_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg(v_a_354_, v_x_355_);
lean_dec(v_x_355_);
lean_dec(v_a_354_);
v_r_357_ = lean_box(v_res_356_);
return v_r_357_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__1___redArg(lean_object* v_a_358_, lean_object* v_x_359_){
_start:
{
if (lean_obj_tag(v_x_359_) == 0)
{
return v_x_359_;
}
else
{
lean_object* v_key_360_; lean_object* v_value_361_; lean_object* v_tail_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_371_; 
v_key_360_ = lean_ctor_get(v_x_359_, 0);
v_value_361_ = lean_ctor_get(v_x_359_, 1);
v_tail_362_ = lean_ctor_get(v_x_359_, 2);
v_isSharedCheck_371_ = !lean_is_exclusive(v_x_359_);
if (v_isSharedCheck_371_ == 0)
{
v___x_364_ = v_x_359_;
v_isShared_365_ = v_isSharedCheck_371_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_tail_362_);
lean_inc(v_value_361_);
lean_inc(v_key_360_);
lean_dec(v_x_359_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_371_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
uint8_t v___x_366_; 
v___x_366_ = l_Lean_instBEqFVarId_beq(v_key_360_, v_a_358_);
if (v___x_366_ == 0)
{
lean_object* v___x_367_; lean_object* v___x_369_; 
v___x_367_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__1___redArg(v_a_358_, v_tail_362_);
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 2, v___x_367_);
v___x_369_ = v___x_364_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_key_360_);
lean_ctor_set(v_reuseFailAlloc_370_, 1, v_value_361_);
lean_ctor_set(v_reuseFailAlloc_370_, 2, v___x_367_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
else
{
lean_del_object(v___x_364_);
lean_dec(v_value_361_);
lean_dec(v_key_360_);
return v_tail_362_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__1___redArg___boxed(lean_object* v_a_372_, lean_object* v_x_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__1___redArg(v_a_372_, v_x_373_);
lean_dec(v_a_372_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(lean_object* v_m_375_, lean_object* v_a_376_){
_start:
{
lean_object* v_size_377_; lean_object* v_buckets_378_; lean_object* v___x_379_; uint64_t v___x_380_; uint64_t v___x_381_; uint64_t v___x_382_; uint64_t v_fold_383_; uint64_t v___x_384_; uint64_t v___x_385_; uint64_t v___x_386_; size_t v___x_387_; size_t v___x_388_; size_t v___x_389_; size_t v___x_390_; size_t v___x_391_; lean_object* v_bkt_392_; uint8_t v___x_393_; 
v_size_377_ = lean_ctor_get(v_m_375_, 0);
v_buckets_378_ = lean_ctor_get(v_m_375_, 1);
v___x_379_ = lean_array_get_size(v_buckets_378_);
v___x_380_ = l_Lean_instHashableFVarId_hash(v_a_376_);
v___x_381_ = 32ULL;
v___x_382_ = lean_uint64_shift_right(v___x_380_, v___x_381_);
v_fold_383_ = lean_uint64_xor(v___x_380_, v___x_382_);
v___x_384_ = 16ULL;
v___x_385_ = lean_uint64_shift_right(v_fold_383_, v___x_384_);
v___x_386_ = lean_uint64_xor(v_fold_383_, v___x_385_);
v___x_387_ = lean_uint64_to_usize(v___x_386_);
v___x_388_ = lean_usize_of_nat(v___x_379_);
v___x_389_ = ((size_t)1ULL);
v___x_390_ = lean_usize_sub(v___x_388_, v___x_389_);
v___x_391_ = lean_usize_land(v___x_387_, v___x_390_);
v_bkt_392_ = lean_array_uget_borrowed(v_buckets_378_, v___x_391_);
v___x_393_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg(v_a_376_, v_bkt_392_);
if (v___x_393_ == 0)
{
return v_m_375_;
}
else
{
lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_406_; 
lean_inc(v_bkt_392_);
lean_inc_ref(v_buckets_378_);
lean_inc(v_size_377_);
v_isSharedCheck_406_ = !lean_is_exclusive(v_m_375_);
if (v_isSharedCheck_406_ == 0)
{
lean_object* v_unused_407_; lean_object* v_unused_408_; 
v_unused_407_ = lean_ctor_get(v_m_375_, 1);
lean_dec(v_unused_407_);
v_unused_408_ = lean_ctor_get(v_m_375_, 0);
lean_dec(v_unused_408_);
v___x_395_ = v_m_375_;
v_isShared_396_ = v_isSharedCheck_406_;
goto v_resetjp_394_;
}
else
{
lean_dec(v_m_375_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_406_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v___x_397_; lean_object* v_buckets_x27_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_404_; 
v___x_397_ = lean_box(0);
v_buckets_x27_398_ = lean_array_uset(v_buckets_378_, v___x_391_, v___x_397_);
v___x_399_ = lean_unsigned_to_nat(1u);
v___x_400_ = lean_nat_sub(v_size_377_, v___x_399_);
lean_dec(v_size_377_);
v___x_401_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__1___redArg(v_a_376_, v_bkt_392_);
v___x_402_ = lean_array_uset(v_buckets_x27_398_, v___x_391_, v___x_401_);
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 1, v___x_402_);
lean_ctor_set(v___x_395_, 0, v___x_400_);
v___x_404_ = v___x_395_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v___x_400_);
lean_ctor_set(v_reuseFailAlloc_405_, 1, v___x_402_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg___boxed(lean_object* v_m_409_, lean_object* v_a_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(v_m_409_, v_a_410_);
lean_dec(v_a_410_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2_spec__5(lean_object* v_child_412_, lean_object* v_a_413_, lean_object* v_x_414_){
_start:
{
if (lean_obj_tag(v_x_414_) == 0)
{
lean_dec(v_a_413_);
return v_x_414_;
}
else
{
lean_object* v_key_415_; lean_object* v_value_416_; lean_object* v_tail_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_439_; 
v_key_415_ = lean_ctor_get(v_x_414_, 0);
v_value_416_ = lean_ctor_get(v_x_414_, 1);
v_tail_417_ = lean_ctor_get(v_x_414_, 2);
v_isSharedCheck_439_ = !lean_is_exclusive(v_x_414_);
if (v_isSharedCheck_439_ == 0)
{
v___x_419_ = v_x_414_;
v_isShared_420_ = v_isSharedCheck_439_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_tail_417_);
lean_inc(v_value_416_);
lean_inc(v_key_415_);
lean_dec(v_x_414_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_439_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
uint8_t v___x_421_; 
v___x_421_ = l_Lean_instBEqFVarId_beq(v_key_415_, v_a_413_);
if (v___x_421_ == 0)
{
lean_object* v___x_422_; lean_object* v___x_424_; 
v___x_422_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2_spec__5(v_child_412_, v_a_413_, v_tail_417_);
if (v_isShared_420_ == 0)
{
lean_ctor_set(v___x_419_, 2, v___x_422_);
v___x_424_ = v___x_419_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_key_415_);
lean_ctor_set(v_reuseFailAlloc_425_, 1, v_value_416_);
lean_ctor_set(v_reuseFailAlloc_425_, 2, v___x_422_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
else
{
lean_object* v_parents_426_; lean_object* v_children_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_438_; 
lean_dec(v_key_415_);
v_parents_426_ = lean_ctor_get(v_value_416_, 0);
v_children_427_ = lean_ctor_get(v_value_416_, 1);
v_isSharedCheck_438_ = !lean_is_exclusive(v_value_416_);
if (v_isSharedCheck_438_ == 0)
{
v___x_429_ = v_value_416_;
v_isShared_430_ = v_isSharedCheck_438_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_children_427_);
lean_inc(v_parents_426_);
lean_dec(v_value_416_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_438_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_431_; lean_object* v___x_433_; 
v___x_431_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(v_children_427_, v_child_412_);
if (v_isShared_430_ == 0)
{
lean_ctor_set(v___x_429_, 1, v___x_431_);
v___x_433_ = v___x_429_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v_parents_426_);
lean_ctor_set(v_reuseFailAlloc_437_, 1, v___x_431_);
v___x_433_ = v_reuseFailAlloc_437_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
lean_object* v___x_435_; 
if (v_isShared_420_ == 0)
{
lean_ctor_set(v___x_419_, 1, v___x_433_);
lean_ctor_set(v___x_419_, 0, v_a_413_);
v___x_435_ = v___x_419_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_a_413_);
lean_ctor_set(v_reuseFailAlloc_436_, 1, v___x_433_);
lean_ctor_set(v_reuseFailAlloc_436_, 2, v_tail_417_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2_spec__5___boxed(lean_object* v_child_440_, lean_object* v_a_441_, lean_object* v_x_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2_spec__5(v_child_440_, v_a_441_, v_x_442_);
lean_dec(v_child_440_);
return v_res_443_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2(lean_object* v_child_444_, lean_object* v_m_445_, lean_object* v_a_446_){
_start:
{
lean_object* v_size_447_; lean_object* v_buckets_448_; lean_object* v___x_449_; uint64_t v___x_450_; uint64_t v___x_451_; uint64_t v___x_452_; uint64_t v_fold_453_; uint64_t v___x_454_; uint64_t v___x_455_; uint64_t v___x_456_; size_t v___x_457_; size_t v___x_458_; size_t v___x_459_; size_t v___x_460_; size_t v___x_461_; lean_object* v_bucket_462_; uint8_t v___x_463_; 
v_size_447_ = lean_ctor_get(v_m_445_, 0);
v_buckets_448_ = lean_ctor_get(v_m_445_, 1);
v___x_449_ = lean_array_get_size(v_buckets_448_);
v___x_450_ = l_Lean_instHashableFVarId_hash(v_a_446_);
v___x_451_ = 32ULL;
v___x_452_ = lean_uint64_shift_right(v___x_450_, v___x_451_);
v_fold_453_ = lean_uint64_xor(v___x_450_, v___x_452_);
v___x_454_ = 16ULL;
v___x_455_ = lean_uint64_shift_right(v_fold_453_, v___x_454_);
v___x_456_ = lean_uint64_xor(v_fold_453_, v___x_455_);
v___x_457_ = lean_uint64_to_usize(v___x_456_);
v___x_458_ = lean_usize_of_nat(v___x_449_);
v___x_459_ = ((size_t)1ULL);
v___x_460_ = lean_usize_sub(v___x_458_, v___x_459_);
v___x_461_ = lean_usize_land(v___x_457_, v___x_460_);
v_bucket_462_ = lean_array_uget_borrowed(v_buckets_448_, v___x_461_);
v___x_463_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg(v_a_446_, v_bucket_462_);
if (v___x_463_ == 0)
{
lean_dec(v_a_446_);
return v_m_445_;
}
else
{
lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_474_; 
lean_inc(v_bucket_462_);
lean_inc_ref(v_buckets_448_);
lean_inc(v_size_447_);
v_isSharedCheck_474_ = !lean_is_exclusive(v_m_445_);
if (v_isSharedCheck_474_ == 0)
{
lean_object* v_unused_475_; lean_object* v_unused_476_; 
v_unused_475_ = lean_ctor_get(v_m_445_, 1);
lean_dec(v_unused_475_);
v_unused_476_ = lean_ctor_get(v_m_445_, 0);
lean_dec(v_unused_476_);
v___x_465_ = v_m_445_;
v_isShared_466_ = v_isSharedCheck_474_;
goto v_resetjp_464_;
}
else
{
lean_dec(v_m_445_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_474_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_467_; lean_object* v_buckets_468_; lean_object* v_bucket_469_; lean_object* v___x_470_; lean_object* v___x_472_; 
v___x_467_ = lean_box(0);
v_buckets_468_ = lean_array_uset(v_buckets_448_, v___x_461_, v___x_467_);
v_bucket_469_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2_spec__5(v_child_444_, v_a_446_, v_bucket_462_);
v___x_470_ = lean_array_uset(v_buckets_468_, v___x_461_, v_bucket_469_);
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 1, v___x_470_);
v___x_472_ = v___x_465_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_size_447_);
lean_ctor_set(v_reuseFailAlloc_473_, 1, v___x_470_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2___boxed(lean_object* v_child_477_, lean_object* v_m_478_, lean_object* v_a_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2(v_child_477_, v_m_478_, v_a_479_);
lean_dec(v_child_477_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__3___redArg(lean_object* v_child_481_, lean_object* v_as_482_, size_t v_sz_483_, size_t v_i_484_, lean_object* v_b_485_, lean_object* v___y_486_){
_start:
{
uint8_t v___x_488_; 
v___x_488_ = lean_usize_dec_lt(v_i_484_, v_sz_483_);
if (v___x_488_ == 0)
{
lean_object* v___x_489_; 
v___x_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_489_, 0, v_b_485_);
return v___x_489_;
}
else
{
lean_object* v___x_490_; lean_object* v_varMap_491_; lean_object* v_borrowedValues_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_506_; 
v___x_490_ = lean_st_ref_take(v___y_486_);
v_varMap_491_ = lean_ctor_get(v___x_490_, 0);
v_borrowedValues_492_ = lean_ctor_get(v___x_490_, 1);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_506_ == 0)
{
v___x_494_ = v___x_490_;
v_isShared_495_ = v_isSharedCheck_506_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_borrowedValues_492_);
lean_inc(v_varMap_491_);
lean_dec(v___x_490_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_506_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v_a_496_; lean_object* v___x_497_; lean_object* v___x_499_; 
v_a_496_ = lean_array_uget_borrowed(v_as_482_, v_i_484_);
lean_inc(v_a_496_);
v___x_497_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2(v_child_481_, v_varMap_491_, v_a_496_);
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 0, v___x_497_);
v___x_499_ = v___x_494_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_497_);
lean_ctor_set(v_reuseFailAlloc_505_, 1, v_borrowedValues_492_);
v___x_499_ = v_reuseFailAlloc_505_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
lean_object* v___x_500_; lean_object* v___x_501_; size_t v___x_502_; size_t v___x_503_; 
v___x_500_ = lean_st_ref_set(v___y_486_, v___x_499_);
v___x_501_ = lean_box(0);
v___x_502_ = ((size_t)1ULL);
v___x_503_ = lean_usize_add(v_i_484_, v___x_502_);
v_i_484_ = v___x_503_;
v_b_485_ = v___x_501_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__3___redArg___boxed(lean_object* v_child_507_, lean_object* v_as_508_, lean_object* v_sz_509_, lean_object* v_i_510_, lean_object* v_b_511_, lean_object* v___y_512_, lean_object* v___y_513_){
_start:
{
size_t v_sz_boxed_514_; size_t v_i_boxed_515_; lean_object* v_res_516_; 
v_sz_boxed_514_ = lean_unbox_usize(v_sz_509_);
lean_dec(v_sz_509_);
v_i_boxed_515_ = lean_unbox_usize(v_i_510_);
lean_dec(v_i_510_);
v_res_516_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__3___redArg(v_child_507_, v_as_508_, v_sz_boxed_514_, v_i_boxed_515_, v_b_511_, v___y_512_);
lean_dec(v___y_512_);
lean_dec_ref(v_as_508_);
lean_dec(v_child_507_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__3___redArg(lean_object* v_a_517_, lean_object* v_x_518_){
_start:
{
if (lean_obj_tag(v_x_518_) == 0)
{
lean_object* v___x_519_; 
v___x_519_ = lean_box(0);
return v___x_519_;
}
else
{
lean_object* v_key_520_; lean_object* v_value_521_; lean_object* v_tail_522_; uint8_t v___x_523_; 
v_key_520_ = lean_ctor_get(v_x_518_, 0);
v_value_521_ = lean_ctor_get(v_x_518_, 1);
v_tail_522_ = lean_ctor_get(v_x_518_, 2);
v___x_523_ = l_Lean_instBEqFVarId_beq(v_key_520_, v_a_517_);
if (v___x_523_ == 0)
{
v_x_518_ = v_tail_522_;
goto _start;
}
else
{
lean_object* v___x_525_; 
lean_inc(v_value_521_);
v___x_525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_525_, 0, v_value_521_);
return v___x_525_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__3___redArg___boxed(lean_object* v_a_526_, lean_object* v_x_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__3___redArg(v_a_526_, v_x_527_);
lean_dec(v_x_527_);
lean_dec(v_a_526_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1___redArg(lean_object* v_m_529_, lean_object* v_a_530_){
_start:
{
lean_object* v_buckets_531_; lean_object* v___x_532_; uint64_t v___x_533_; uint64_t v___x_534_; uint64_t v___x_535_; uint64_t v_fold_536_; uint64_t v___x_537_; uint64_t v___x_538_; uint64_t v___x_539_; size_t v___x_540_; size_t v___x_541_; size_t v___x_542_; size_t v___x_543_; size_t v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v_buckets_531_ = lean_ctor_get(v_m_529_, 1);
v___x_532_ = lean_array_get_size(v_buckets_531_);
v___x_533_ = l_Lean_instHashableFVarId_hash(v_a_530_);
v___x_534_ = 32ULL;
v___x_535_ = lean_uint64_shift_right(v___x_533_, v___x_534_);
v_fold_536_ = lean_uint64_xor(v___x_533_, v___x_535_);
v___x_537_ = 16ULL;
v___x_538_ = lean_uint64_shift_right(v_fold_536_, v___x_537_);
v___x_539_ = lean_uint64_xor(v_fold_536_, v___x_538_);
v___x_540_ = lean_uint64_to_usize(v___x_539_);
v___x_541_ = lean_usize_of_nat(v___x_532_);
v___x_542_ = ((size_t)1ULL);
v___x_543_ = lean_usize_sub(v___x_541_, v___x_542_);
v___x_544_ = lean_usize_land(v___x_540_, v___x_543_);
v___x_545_ = lean_array_uget_borrowed(v_buckets_531_, v___x_544_);
v___x_546_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__3___redArg(v_a_530_, v___x_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1___redArg___boxed(lean_object* v_m_547_, lean_object* v_a_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1___redArg(v_m_547_, v_a_548_);
lean_dec(v_a_548_);
lean_dec_ref(v_m_547_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents(lean_object* v_child_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_){
_start:
{
lean_object* v___x_557_; lean_object* v_varMap_558_; lean_object* v___x_559_; 
v___x_557_ = lean_st_ref_get(v_a_551_);
v_varMap_558_ = lean_ctor_get(v___x_557_, 0);
lean_inc_ref(v_varMap_558_);
lean_dec(v___x_557_);
v___x_559_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1___redArg(v_varMap_558_, v_child_550_);
lean_dec_ref(v_varMap_558_);
if (lean_obj_tag(v___x_559_) == 1)
{
lean_object* v_val_560_; lean_object* v_parents_561_; lean_object* v___x_562_; size_t v_sz_563_; size_t v___x_564_; lean_object* v___x_565_; 
v_val_560_ = lean_ctor_get(v___x_559_, 0);
lean_inc(v_val_560_);
lean_dec_ref(v___x_559_);
v_parents_561_ = lean_ctor_get(v_val_560_, 0);
lean_inc_ref(v_parents_561_);
lean_dec(v_val_560_);
v___x_562_ = lean_box(0);
v_sz_563_ = lean_array_size(v_parents_561_);
v___x_564_ = ((size_t)0ULL);
v___x_565_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__3___redArg(v_child_550_, v_parents_561_, v_sz_563_, v___x_564_, v___x_562_, v_a_551_);
lean_dec_ref(v_parents_561_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_572_; 
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_572_ == 0)
{
lean_object* v_unused_573_; 
v_unused_573_ = lean_ctor_get(v___x_565_, 0);
lean_dec(v_unused_573_);
v___x_567_ = v___x_565_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_dec(v___x_565_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_570_; 
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 0, v___x_562_);
v___x_570_ = v___x_567_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v___x_562_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
else
{
return v___x_565_;
}
}
else
{
lean_object* v___x_574_; lean_object* v___x_575_; 
lean_dec(v___x_559_);
v___x_574_ = lean_box(0);
v___x_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
return v___x_575_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents___boxed(lean_object* v_child_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents(v_child_576_, v_a_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_);
lean_dec(v_a_581_);
lean_dec_ref(v_a_580_);
lean_dec(v_a_579_);
lean_dec_ref(v_a_578_);
lean_dec(v_a_577_);
lean_dec(v_child_576_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0(lean_object* v_00_u03b2_584_, lean_object* v_m_585_, lean_object* v_a_586_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(v_m_585_, v_a_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___boxed(lean_object* v_00_u03b2_588_, lean_object* v_m_589_, lean_object* v_a_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0(v_00_u03b2_588_, v_m_589_, v_a_590_);
lean_dec(v_a_590_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1(lean_object* v_00_u03b2_592_, lean_object* v_m_593_, lean_object* v_a_594_){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1___redArg(v_m_593_, v_a_594_);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1___boxed(lean_object* v_00_u03b2_596_, lean_object* v_m_597_, lean_object* v_a_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1(v_00_u03b2_596_, v_m_597_, v_a_598_);
lean_dec(v_a_598_);
lean_dec_ref(v_m_597_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__3(lean_object* v_child_600_, lean_object* v_as_601_, size_t v_sz_602_, size_t v_i_603_, lean_object* v_b_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
lean_object* v___x_611_; 
v___x_611_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__3___redArg(v_child_600_, v_as_601_, v_sz_602_, v_i_603_, v_b_604_, v___y_605_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__3___boxed(lean_object* v_child_612_, lean_object* v_as_613_, lean_object* v_sz_614_, lean_object* v_i_615_, lean_object* v_b_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_, lean_object* v___y_620_, lean_object* v___y_621_, lean_object* v___y_622_){
_start:
{
size_t v_sz_boxed_623_; size_t v_i_boxed_624_; lean_object* v_res_625_; 
v_sz_boxed_623_ = lean_unbox_usize(v_sz_614_);
lean_dec(v_sz_614_);
v_i_boxed_624_ = lean_unbox_usize(v_i_615_);
lean_dec(v_i_615_);
v_res_625_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__3(v_child_612_, v_as_613_, v_sz_boxed_623_, v_i_boxed_624_, v_b_616_, v___y_617_, v___y_618_, v___y_619_, v___y_620_, v___y_621_);
lean_dec(v___y_621_);
lean_dec_ref(v___y_620_);
lean_dec(v___y_619_);
lean_dec_ref(v___y_618_);
lean_dec(v___y_617_);
lean_dec_ref(v_as_613_);
lean_dec(v_child_612_);
return v_res_625_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0(lean_object* v_00_u03b2_626_, lean_object* v_a_627_, lean_object* v_x_628_){
_start:
{
uint8_t v___x_629_; 
v___x_629_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg(v_a_627_, v_x_628_);
return v___x_629_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___boxed(lean_object* v_00_u03b2_630_, lean_object* v_a_631_, lean_object* v_x_632_){
_start:
{
uint8_t v_res_633_; lean_object* v_r_634_; 
v_res_633_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0(v_00_u03b2_630_, v_a_631_, v_x_632_);
lean_dec(v_x_632_);
lean_dec(v_a_631_);
v_r_634_ = lean_box(v_res_633_);
return v_r_634_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__1(lean_object* v_00_u03b2_635_, lean_object* v_a_636_, lean_object* v_x_637_){
_start:
{
lean_object* v___x_638_; 
v___x_638_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__1___redArg(v_a_636_, v_x_637_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__1___boxed(lean_object* v_00_u03b2_639_, lean_object* v_a_640_, lean_object* v_x_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__1(v_00_u03b2_639_, v_a_640_, v_x_641_);
lean_dec(v_a_640_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__3(lean_object* v_00_u03b2_643_, lean_object* v_a_644_, lean_object* v_x_645_){
_start:
{
lean_object* v___x_646_; 
v___x_646_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__3___redArg(v_a_644_, v_x_645_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__3___boxed(lean_object* v_00_u03b2_647_, lean_object* v_a_648_, lean_object* v_x_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__3(v_00_u03b2_647_, v_a_648_, v_x_649_);
lean_dec(v_x_649_);
lean_dec(v_a_648_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__4___redArg(lean_object* v_alt_651_, lean_object* v_f_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_){
_start:
{
switch(lean_obj_tag(v_alt_651_))
{
case 0:
{
lean_object* v_code_659_; lean_object* v___x_660_; 
v_code_659_ = lean_ctor_get(v_alt_651_, 2);
lean_inc_ref(v_code_659_);
lean_dec_ref(v_alt_651_);
lean_inc(v___y_657_);
lean_inc_ref(v___y_656_);
lean_inc(v___y_655_);
lean_inc_ref(v___y_654_);
lean_inc(v___y_653_);
v___x_660_ = lean_apply_7(v_f_652_, v_code_659_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, lean_box(0));
return v___x_660_;
}
case 1:
{
lean_object* v_code_661_; lean_object* v___x_662_; 
v_code_661_ = lean_ctor_get(v_alt_651_, 1);
lean_inc_ref(v_code_661_);
lean_dec_ref(v_alt_651_);
lean_inc(v___y_657_);
lean_inc_ref(v___y_656_);
lean_inc(v___y_655_);
lean_inc_ref(v___y_654_);
lean_inc(v___y_653_);
v___x_662_ = lean_apply_7(v_f_652_, v_code_661_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, lean_box(0));
return v___x_662_;
}
default: 
{
lean_object* v_code_663_; lean_object* v___x_664_; 
v_code_663_ = lean_ctor_get(v_alt_651_, 0);
lean_inc_ref(v_code_663_);
lean_dec_ref(v_alt_651_);
lean_inc(v___y_657_);
lean_inc_ref(v___y_656_);
lean_inc(v___y_655_);
lean_inc_ref(v___y_654_);
lean_inc(v___y_653_);
v___x_664_ = lean_apply_7(v_f_652_, v_code_663_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, lean_box(0));
return v___x_664_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__4___redArg___boxed(lean_object* v_alt_665_, lean_object* v_f_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__4___redArg(v_alt_665_, v_f_666_, v___y_667_, v___y_668_, v___y_669_, v___y_670_, v___y_671_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v___y_669_);
lean_dec_ref(v___y_668_);
lean_dec(v___y_667_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__4(uint8_t v_pu_674_, lean_object* v_alt_675_, lean_object* v_f_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_){
_start:
{
lean_object* v___x_683_; 
v___x_683_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__4___redArg(v_alt_675_, v_f_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__4___boxed(lean_object* v_pu_684_, lean_object* v_alt_685_, lean_object* v_f_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_){
_start:
{
uint8_t v_pu_boxed_693_; lean_object* v_res_694_; 
v_pu_boxed_693_ = lean_unbox(v_pu_684_);
v_res_694_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__4(v_pu_boxed_693_, v_alt_685_, v_f_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_);
lean_dec(v___y_691_);
lean_dec_ref(v___y_690_);
lean_dec(v___y_689_);
lean_dec_ref(v___y_688_);
lean_dec(v___y_687_);
return v_res_694_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__0(void){
_start:
{
lean_object* v___x_695_; 
v___x_695_ = l_instMonadEIO(lean_box(0));
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7(lean_object* v_msg_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v_toApplicative_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_771_; 
v___x_707_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__0);
v___x_708_ = l_StateRefT_x27_instMonad___redArg(v___x_707_);
v_toApplicative_709_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_771_ == 0)
{
lean_object* v_unused_772_; 
v_unused_772_ = lean_ctor_get(v___x_708_, 1);
lean_dec(v_unused_772_);
v___x_711_ = v___x_708_;
v_isShared_712_ = v_isSharedCheck_771_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_toApplicative_709_);
lean_dec(v___x_708_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_771_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v_toFunctor_713_; lean_object* v_toSeq_714_; lean_object* v_toSeqLeft_715_; lean_object* v_toSeqRight_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_769_; 
v_toFunctor_713_ = lean_ctor_get(v_toApplicative_709_, 0);
v_toSeq_714_ = lean_ctor_get(v_toApplicative_709_, 2);
v_toSeqLeft_715_ = lean_ctor_get(v_toApplicative_709_, 3);
v_toSeqRight_716_ = lean_ctor_get(v_toApplicative_709_, 4);
v_isSharedCheck_769_ = !lean_is_exclusive(v_toApplicative_709_);
if (v_isSharedCheck_769_ == 0)
{
lean_object* v_unused_770_; 
v_unused_770_ = lean_ctor_get(v_toApplicative_709_, 1);
lean_dec(v_unused_770_);
v___x_718_ = v_toApplicative_709_;
v_isShared_719_ = v_isSharedCheck_769_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_toSeqRight_716_);
lean_inc(v_toSeqLeft_715_);
lean_inc(v_toSeq_714_);
lean_inc(v_toFunctor_713_);
lean_dec(v_toApplicative_709_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_769_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___f_720_; lean_object* v___f_721_; lean_object* v___f_722_; lean_object* v___f_723_; lean_object* v___x_724_; lean_object* v___f_725_; lean_object* v___f_726_; lean_object* v___f_727_; lean_object* v___x_729_; 
v___f_720_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__1));
v___f_721_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__2));
lean_inc_ref(v_toFunctor_713_);
v___f_722_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_722_, 0, v_toFunctor_713_);
v___f_723_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_723_, 0, v_toFunctor_713_);
v___x_724_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_724_, 0, v___f_722_);
lean_ctor_set(v___x_724_, 1, v___f_723_);
v___f_725_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_725_, 0, v_toSeqRight_716_);
v___f_726_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_726_, 0, v_toSeqLeft_715_);
v___f_727_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_727_, 0, v_toSeq_714_);
if (v_isShared_719_ == 0)
{
lean_ctor_set(v___x_718_, 4, v___f_725_);
lean_ctor_set(v___x_718_, 3, v___f_726_);
lean_ctor_set(v___x_718_, 2, v___f_727_);
lean_ctor_set(v___x_718_, 1, v___f_720_);
lean_ctor_set(v___x_718_, 0, v___x_724_);
v___x_729_ = v___x_718_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v___x_724_);
lean_ctor_set(v_reuseFailAlloc_768_, 1, v___f_720_);
lean_ctor_set(v_reuseFailAlloc_768_, 2, v___f_727_);
lean_ctor_set(v_reuseFailAlloc_768_, 3, v___f_726_);
lean_ctor_set(v_reuseFailAlloc_768_, 4, v___f_725_);
v___x_729_ = v_reuseFailAlloc_768_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
lean_object* v___x_731_; 
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 1, v___f_721_);
lean_ctor_set(v___x_711_, 0, v___x_729_);
v___x_731_ = v___x_711_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v___x_729_);
lean_ctor_set(v_reuseFailAlloc_767_, 1, v___f_721_);
v___x_731_ = v_reuseFailAlloc_767_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
lean_object* v___x_732_; lean_object* v_toApplicative_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_765_; 
v___x_732_ = l_StateRefT_x27_instMonad___redArg(v___x_731_);
v_toApplicative_733_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_765_ == 0)
{
lean_object* v_unused_766_; 
v_unused_766_ = lean_ctor_get(v___x_732_, 1);
lean_dec(v_unused_766_);
v___x_735_ = v___x_732_;
v_isShared_736_ = v_isSharedCheck_765_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_toApplicative_733_);
lean_dec(v___x_732_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_765_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v_toFunctor_737_; lean_object* v_toSeq_738_; lean_object* v_toSeqLeft_739_; lean_object* v_toSeqRight_740_; lean_object* v___x_742_; uint8_t v_isShared_743_; uint8_t v_isSharedCheck_763_; 
v_toFunctor_737_ = lean_ctor_get(v_toApplicative_733_, 0);
v_toSeq_738_ = lean_ctor_get(v_toApplicative_733_, 2);
v_toSeqLeft_739_ = lean_ctor_get(v_toApplicative_733_, 3);
v_toSeqRight_740_ = lean_ctor_get(v_toApplicative_733_, 4);
v_isSharedCheck_763_ = !lean_is_exclusive(v_toApplicative_733_);
if (v_isSharedCheck_763_ == 0)
{
lean_object* v_unused_764_; 
v_unused_764_ = lean_ctor_get(v_toApplicative_733_, 1);
lean_dec(v_unused_764_);
v___x_742_ = v_toApplicative_733_;
v_isShared_743_ = v_isSharedCheck_763_;
goto v_resetjp_741_;
}
else
{
lean_inc(v_toSeqRight_740_);
lean_inc(v_toSeqLeft_739_);
lean_inc(v_toSeq_738_);
lean_inc(v_toFunctor_737_);
lean_dec(v_toApplicative_733_);
v___x_742_ = lean_box(0);
v_isShared_743_ = v_isSharedCheck_763_;
goto v_resetjp_741_;
}
v_resetjp_741_:
{
lean_object* v___f_744_; lean_object* v___f_745_; lean_object* v___f_746_; lean_object* v___f_747_; lean_object* v___x_748_; lean_object* v___f_749_; lean_object* v___f_750_; lean_object* v___f_751_; lean_object* v___x_753_; 
v___f_744_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__3));
v___f_745_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__4));
lean_inc_ref(v_toFunctor_737_);
v___f_746_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_746_, 0, v_toFunctor_737_);
v___f_747_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_747_, 0, v_toFunctor_737_);
v___x_748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_748_, 0, v___f_746_);
lean_ctor_set(v___x_748_, 1, v___f_747_);
v___f_749_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_749_, 0, v_toSeqRight_740_);
v___f_750_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_750_, 0, v_toSeqLeft_739_);
v___f_751_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_751_, 0, v_toSeq_738_);
if (v_isShared_743_ == 0)
{
lean_ctor_set(v___x_742_, 4, v___f_749_);
lean_ctor_set(v___x_742_, 3, v___f_750_);
lean_ctor_set(v___x_742_, 2, v___f_751_);
lean_ctor_set(v___x_742_, 1, v___f_744_);
lean_ctor_set(v___x_742_, 0, v___x_748_);
v___x_753_ = v___x_742_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v___x_748_);
lean_ctor_set(v_reuseFailAlloc_762_, 1, v___f_744_);
lean_ctor_set(v_reuseFailAlloc_762_, 2, v___f_751_);
lean_ctor_set(v_reuseFailAlloc_762_, 3, v___f_750_);
lean_ctor_set(v_reuseFailAlloc_762_, 4, v___f_749_);
v___x_753_ = v_reuseFailAlloc_762_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
lean_object* v___x_755_; 
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 1, v___f_745_);
lean_ctor_set(v___x_735_, 0, v___x_753_);
v___x_755_ = v___x_735_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v___x_753_);
lean_ctor_set(v_reuseFailAlloc_761_, 1, v___f_745_);
v___x_755_ = v_reuseFailAlloc_761_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_6732__overap_759_; lean_object* v___x_760_; 
v___x_756_ = l_StateRefT_x27_instMonad___redArg(v___x_755_);
v___x_757_ = lean_box(0);
v___x_758_ = l_instInhabitedOfMonad___redArg(v___x_756_, v___x_757_);
v___x_6732__overap_759_ = lean_panic_fn_borrowed(v___x_758_, v_msg_700_);
lean_dec(v___x_758_);
lean_inc(v___y_705_);
lean_inc_ref(v___y_704_);
lean_inc(v___y_703_);
lean_inc_ref(v___y_702_);
lean_inc(v___y_701_);
v___x_760_ = lean_apply_6(v___x_6732__overap_759_, v___y_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_, lean_box(0));
return v___x_760_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___boxed(lean_object* v_msg_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7(v_msg_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_);
lean_dec(v___y_778_);
lean_dec_ref(v___y_777_);
lean_dec(v___y_776_);
lean_dec_ref(v___y_775_);
lean_dec(v___y_774_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0_spec__3_spec__9___redArg(lean_object* v_x_781_, lean_object* v_x_782_){
_start:
{
if (lean_obj_tag(v_x_782_) == 0)
{
return v_x_781_;
}
else
{
lean_object* v_key_783_; lean_object* v_value_784_; lean_object* v_tail_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_808_; 
v_key_783_ = lean_ctor_get(v_x_782_, 0);
v_value_784_ = lean_ctor_get(v_x_782_, 1);
v_tail_785_ = lean_ctor_get(v_x_782_, 2);
v_isSharedCheck_808_ = !lean_is_exclusive(v_x_782_);
if (v_isSharedCheck_808_ == 0)
{
v___x_787_ = v_x_782_;
v_isShared_788_ = v_isSharedCheck_808_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_tail_785_);
lean_inc(v_value_784_);
lean_inc(v_key_783_);
lean_dec(v_x_782_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_808_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v___x_789_; uint64_t v___x_790_; uint64_t v___x_791_; uint64_t v___x_792_; uint64_t v_fold_793_; uint64_t v___x_794_; uint64_t v___x_795_; uint64_t v___x_796_; size_t v___x_797_; size_t v___x_798_; size_t v___x_799_; size_t v___x_800_; size_t v___x_801_; lean_object* v___x_802_; lean_object* v___x_804_; 
v___x_789_ = lean_array_get_size(v_x_781_);
v___x_790_ = l_Lean_instHashableFVarId_hash(v_key_783_);
v___x_791_ = 32ULL;
v___x_792_ = lean_uint64_shift_right(v___x_790_, v___x_791_);
v_fold_793_ = lean_uint64_xor(v___x_790_, v___x_792_);
v___x_794_ = 16ULL;
v___x_795_ = lean_uint64_shift_right(v_fold_793_, v___x_794_);
v___x_796_ = lean_uint64_xor(v_fold_793_, v___x_795_);
v___x_797_ = lean_uint64_to_usize(v___x_796_);
v___x_798_ = lean_usize_of_nat(v___x_789_);
v___x_799_ = ((size_t)1ULL);
v___x_800_ = lean_usize_sub(v___x_798_, v___x_799_);
v___x_801_ = lean_usize_land(v___x_797_, v___x_800_);
v___x_802_ = lean_array_uget_borrowed(v_x_781_, v___x_801_);
lean_inc(v___x_802_);
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 2, v___x_802_);
v___x_804_ = v___x_787_;
goto v_reusejp_803_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_key_783_);
lean_ctor_set(v_reuseFailAlloc_807_, 1, v_value_784_);
lean_ctor_set(v_reuseFailAlloc_807_, 2, v___x_802_);
v___x_804_ = v_reuseFailAlloc_807_;
goto v_reusejp_803_;
}
v_reusejp_803_:
{
lean_object* v___x_805_; 
v___x_805_ = lean_array_uset(v_x_781_, v___x_801_, v___x_804_);
v_x_781_ = v___x_805_;
v_x_782_ = v_tail_785_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0_spec__3___redArg(lean_object* v_i_809_, lean_object* v_source_810_, lean_object* v_target_811_){
_start:
{
lean_object* v___x_812_; uint8_t v___x_813_; 
v___x_812_ = lean_array_get_size(v_source_810_);
v___x_813_ = lean_nat_dec_lt(v_i_809_, v___x_812_);
if (v___x_813_ == 0)
{
lean_dec_ref(v_source_810_);
lean_dec(v_i_809_);
return v_target_811_;
}
else
{
lean_object* v_es_814_; lean_object* v___x_815_; lean_object* v_source_816_; lean_object* v_target_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v_es_814_ = lean_array_fget(v_source_810_, v_i_809_);
v___x_815_ = lean_box(0);
v_source_816_ = lean_array_fset(v_source_810_, v_i_809_, v___x_815_);
v_target_817_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0_spec__3_spec__9___redArg(v_target_811_, v_es_814_);
v___x_818_ = lean_unsigned_to_nat(1u);
v___x_819_ = lean_nat_add(v_i_809_, v___x_818_);
lean_dec(v_i_809_);
v_i_809_ = v___x_819_;
v_source_810_ = v_source_816_;
v_target_811_ = v_target_817_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0___redArg(lean_object* v_data_821_){
_start:
{
lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v_nbuckets_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_822_ = lean_array_get_size(v_data_821_);
v___x_823_ = lean_unsigned_to_nat(2u);
v_nbuckets_824_ = lean_nat_mul(v___x_822_, v___x_823_);
v___x_825_ = lean_unsigned_to_nat(0u);
v___x_826_ = lean_box(0);
v___x_827_ = lean_mk_array(v_nbuckets_824_, v___x_826_);
v___x_828_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0_spec__3___redArg(v___x_825_, v_data_821_, v___x_827_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(lean_object* v_m_829_, lean_object* v_a_830_, lean_object* v_b_831_){
_start:
{
lean_object* v_size_832_; lean_object* v_buckets_833_; lean_object* v___x_834_; uint64_t v___x_835_; uint64_t v___x_836_; uint64_t v___x_837_; uint64_t v_fold_838_; uint64_t v___x_839_; uint64_t v___x_840_; uint64_t v___x_841_; size_t v___x_842_; size_t v___x_843_; size_t v___x_844_; size_t v___x_845_; size_t v___x_846_; lean_object* v_bkt_847_; uint8_t v___x_848_; 
v_size_832_ = lean_ctor_get(v_m_829_, 0);
v_buckets_833_ = lean_ctor_get(v_m_829_, 1);
v___x_834_ = lean_array_get_size(v_buckets_833_);
v___x_835_ = l_Lean_instHashableFVarId_hash(v_a_830_);
v___x_836_ = 32ULL;
v___x_837_ = lean_uint64_shift_right(v___x_835_, v___x_836_);
v_fold_838_ = lean_uint64_xor(v___x_835_, v___x_837_);
v___x_839_ = 16ULL;
v___x_840_ = lean_uint64_shift_right(v_fold_838_, v___x_839_);
v___x_841_ = lean_uint64_xor(v_fold_838_, v___x_840_);
v___x_842_ = lean_uint64_to_usize(v___x_841_);
v___x_843_ = lean_usize_of_nat(v___x_834_);
v___x_844_ = ((size_t)1ULL);
v___x_845_ = lean_usize_sub(v___x_843_, v___x_844_);
v___x_846_ = lean_usize_land(v___x_842_, v___x_845_);
v_bkt_847_ = lean_array_uget_borrowed(v_buckets_833_, v___x_846_);
v___x_848_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg(v_a_830_, v_bkt_847_);
if (v___x_848_ == 0)
{
lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_869_; 
lean_inc_ref(v_buckets_833_);
lean_inc(v_size_832_);
v_isSharedCheck_869_ = !lean_is_exclusive(v_m_829_);
if (v_isSharedCheck_869_ == 0)
{
lean_object* v_unused_870_; lean_object* v_unused_871_; 
v_unused_870_ = lean_ctor_get(v_m_829_, 1);
lean_dec(v_unused_870_);
v_unused_871_ = lean_ctor_get(v_m_829_, 0);
lean_dec(v_unused_871_);
v___x_850_ = v_m_829_;
v_isShared_851_ = v_isSharedCheck_869_;
goto v_resetjp_849_;
}
else
{
lean_dec(v_m_829_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_869_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_852_; lean_object* v_size_x27_853_; lean_object* v___x_854_; lean_object* v_buckets_x27_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; uint8_t v___x_861_; 
v___x_852_ = lean_unsigned_to_nat(1u);
v_size_x27_853_ = lean_nat_add(v_size_832_, v___x_852_);
lean_dec(v_size_832_);
lean_inc(v_bkt_847_);
v___x_854_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_854_, 0, v_a_830_);
lean_ctor_set(v___x_854_, 1, v_b_831_);
lean_ctor_set(v___x_854_, 2, v_bkt_847_);
v_buckets_x27_855_ = lean_array_uset(v_buckets_833_, v___x_846_, v___x_854_);
v___x_856_ = lean_unsigned_to_nat(4u);
v___x_857_ = lean_nat_mul(v_size_x27_853_, v___x_856_);
v___x_858_ = lean_unsigned_to_nat(3u);
v___x_859_ = lean_nat_div(v___x_857_, v___x_858_);
lean_dec(v___x_857_);
v___x_860_ = lean_array_get_size(v_buckets_x27_855_);
v___x_861_ = lean_nat_dec_le(v___x_859_, v___x_860_);
lean_dec(v___x_859_);
if (v___x_861_ == 0)
{
lean_object* v_val_862_; lean_object* v___x_864_; 
v_val_862_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0___redArg(v_buckets_x27_855_);
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 1, v_val_862_);
lean_ctor_set(v___x_850_, 0, v_size_x27_853_);
v___x_864_ = v___x_850_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_size_x27_853_);
lean_ctor_set(v_reuseFailAlloc_865_, 1, v_val_862_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
else
{
lean_object* v___x_867_; 
if (v_isShared_851_ == 0)
{
lean_ctor_set(v___x_850_, 1, v_buckets_x27_855_);
lean_ctor_set(v___x_850_, 0, v_size_x27_853_);
v___x_867_ = v___x_850_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v_size_x27_853_);
lean_ctor_set(v_reuseFailAlloc_868_, 1, v_buckets_x27_855_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
}
else
{
lean_dec(v_b_831_);
lean_dec(v_a_830_);
return v_m_829_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1_spec__2(lean_object* v___x_872_, lean_object* v_a_873_, lean_object* v_x_874_){
_start:
{
if (lean_obj_tag(v_x_874_) == 0)
{
lean_dec(v_a_873_);
lean_dec(v___x_872_);
return v_x_874_;
}
else
{
lean_object* v_key_875_; lean_object* v_value_876_; lean_object* v_tail_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_900_; 
v_key_875_ = lean_ctor_get(v_x_874_, 0);
v_value_876_ = lean_ctor_get(v_x_874_, 1);
v_tail_877_ = lean_ctor_get(v_x_874_, 2);
v_isSharedCheck_900_ = !lean_is_exclusive(v_x_874_);
if (v_isSharedCheck_900_ == 0)
{
v___x_879_ = v_x_874_;
v_isShared_880_ = v_isSharedCheck_900_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_tail_877_);
lean_inc(v_value_876_);
lean_inc(v_key_875_);
lean_dec(v_x_874_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_900_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
uint8_t v___x_881_; 
v___x_881_ = l_Lean_instBEqFVarId_beq(v_key_875_, v_a_873_);
if (v___x_881_ == 0)
{
lean_object* v___x_882_; lean_object* v___x_884_; 
v___x_882_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1_spec__2(v___x_872_, v_a_873_, v_tail_877_);
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 2, v___x_882_);
v___x_884_ = v___x_879_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_key_875_);
lean_ctor_set(v_reuseFailAlloc_885_, 1, v_value_876_);
lean_ctor_set(v_reuseFailAlloc_885_, 2, v___x_882_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
else
{
lean_object* v_parents_886_; lean_object* v_children_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_899_; 
lean_dec(v_key_875_);
v_parents_886_ = lean_ctor_get(v_value_876_, 0);
v_children_887_ = lean_ctor_get(v_value_876_, 1);
v_isSharedCheck_899_ = !lean_is_exclusive(v_value_876_);
if (v_isSharedCheck_899_ == 0)
{
v___x_889_ = v_value_876_;
v_isShared_890_ = v_isSharedCheck_899_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_children_887_);
lean_inc(v_parents_886_);
lean_dec(v_value_876_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_899_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_894_; 
v___x_891_ = lean_box(0);
v___x_892_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(v_children_887_, v___x_872_, v___x_891_);
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 1, v___x_892_);
v___x_894_ = v___x_889_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_parents_886_);
lean_ctor_set(v_reuseFailAlloc_898_, 1, v___x_892_);
v___x_894_ = v_reuseFailAlloc_898_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
lean_object* v___x_896_; 
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 1, v___x_894_);
lean_ctor_set(v___x_879_, 0, v_a_873_);
v___x_896_ = v___x_879_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_a_873_);
lean_ctor_set(v_reuseFailAlloc_897_, 1, v___x_894_);
lean_ctor_set(v_reuseFailAlloc_897_, 2, v_tail_877_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1(lean_object* v___x_901_, lean_object* v_m_902_, lean_object* v_a_903_){
_start:
{
lean_object* v_size_904_; lean_object* v_buckets_905_; lean_object* v___x_906_; uint64_t v___x_907_; uint64_t v___x_908_; uint64_t v___x_909_; uint64_t v_fold_910_; uint64_t v___x_911_; uint64_t v___x_912_; uint64_t v___x_913_; size_t v___x_914_; size_t v___x_915_; size_t v___x_916_; size_t v___x_917_; size_t v___x_918_; lean_object* v_bucket_919_; uint8_t v___x_920_; 
v_size_904_ = lean_ctor_get(v_m_902_, 0);
v_buckets_905_ = lean_ctor_get(v_m_902_, 1);
v___x_906_ = lean_array_get_size(v_buckets_905_);
v___x_907_ = l_Lean_instHashableFVarId_hash(v_a_903_);
v___x_908_ = 32ULL;
v___x_909_ = lean_uint64_shift_right(v___x_907_, v___x_908_);
v_fold_910_ = lean_uint64_xor(v___x_907_, v___x_909_);
v___x_911_ = 16ULL;
v___x_912_ = lean_uint64_shift_right(v_fold_910_, v___x_911_);
v___x_913_ = lean_uint64_xor(v_fold_910_, v___x_912_);
v___x_914_ = lean_uint64_to_usize(v___x_913_);
v___x_915_ = lean_usize_of_nat(v___x_906_);
v___x_916_ = ((size_t)1ULL);
v___x_917_ = lean_usize_sub(v___x_915_, v___x_916_);
v___x_918_ = lean_usize_land(v___x_914_, v___x_917_);
v_bucket_919_ = lean_array_uget_borrowed(v_buckets_905_, v___x_918_);
v___x_920_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg(v_a_903_, v_bucket_919_);
if (v___x_920_ == 0)
{
lean_dec(v_a_903_);
lean_dec(v___x_901_);
return v_m_902_;
}
else
{
lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_931_; 
lean_inc(v_bucket_919_);
lean_inc_ref(v_buckets_905_);
lean_inc(v_size_904_);
v_isSharedCheck_931_ = !lean_is_exclusive(v_m_902_);
if (v_isSharedCheck_931_ == 0)
{
lean_object* v_unused_932_; lean_object* v_unused_933_; 
v_unused_932_ = lean_ctor_get(v_m_902_, 1);
lean_dec(v_unused_932_);
v_unused_933_ = lean_ctor_get(v_m_902_, 0);
lean_dec(v_unused_933_);
v___x_922_ = v_m_902_;
v_isShared_923_ = v_isSharedCheck_931_;
goto v_resetjp_921_;
}
else
{
lean_dec(v_m_902_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_931_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_924_; lean_object* v_buckets_925_; lean_object* v_bucket_926_; lean_object* v___x_927_; lean_object* v___x_929_; 
v___x_924_ = lean_box(0);
v_buckets_925_ = lean_array_uset(v_buckets_905_, v___x_918_, v___x_924_);
v_bucket_926_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1_spec__2(v___x_901_, v_a_903_, v_bucket_919_);
v___x_927_ = lean_array_uset(v_buckets_925_, v___x_918_, v_bucket_926_);
if (v_isShared_923_ == 0)
{
lean_ctor_set(v___x_922_, 1, v___x_927_);
v___x_929_ = v___x_922_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_size_904_);
lean_ctor_set(v_reuseFailAlloc_930_, 1, v___x_927_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(lean_object* v___x_934_, lean_object* v_as_935_, size_t v_i_936_, size_t v_stop_937_, lean_object* v_b_938_){
_start:
{
uint8_t v___x_939_; 
v___x_939_ = lean_usize_dec_eq(v_i_936_, v_stop_937_);
if (v___x_939_ == 0)
{
lean_object* v___x_940_; lean_object* v___x_941_; size_t v___x_942_; size_t v___x_943_; 
v___x_940_ = lean_array_uget_borrowed(v_as_935_, v_i_936_);
lean_inc(v___x_940_);
lean_inc(v___x_934_);
v___x_941_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1(v___x_934_, v_b_938_, v___x_940_);
v___x_942_ = ((size_t)1ULL);
v___x_943_ = lean_usize_add(v_i_936_, v___x_942_);
v_i_936_ = v___x_943_;
v_b_938_ = v___x_941_;
goto _start;
}
else
{
lean_dec(v___x_934_);
return v_b_938_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___boxed(lean_object* v___x_945_, lean_object* v_as_946_, lean_object* v_i_947_, lean_object* v_stop_948_, lean_object* v_b_949_){
_start:
{
size_t v_i_boxed_950_; size_t v_stop_boxed_951_; lean_object* v_res_952_; 
v_i_boxed_950_ = lean_unbox_usize(v_i_947_);
lean_dec(v_i_947_);
v_stop_boxed_951_ = lean_unbox_usize(v_stop_948_);
lean_dec(v_stop_948_);
v_res_952_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(v___x_945_, v_as_946_, v_i_boxed_950_, v_stop_boxed_951_, v_b_949_);
lean_dec_ref(v_as_946_);
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2_spec__4___redArg(lean_object* v_a_953_, lean_object* v_b_954_, lean_object* v_x_955_){
_start:
{
if (lean_obj_tag(v_x_955_) == 0)
{
lean_dec(v_b_954_);
lean_dec(v_a_953_);
return v_x_955_;
}
else
{
lean_object* v_key_956_; lean_object* v_value_957_; lean_object* v_tail_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_970_; 
v_key_956_ = lean_ctor_get(v_x_955_, 0);
v_value_957_ = lean_ctor_get(v_x_955_, 1);
v_tail_958_ = lean_ctor_get(v_x_955_, 2);
v_isSharedCheck_970_ = !lean_is_exclusive(v_x_955_);
if (v_isSharedCheck_970_ == 0)
{
v___x_960_ = v_x_955_;
v_isShared_961_ = v_isSharedCheck_970_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_tail_958_);
lean_inc(v_value_957_);
lean_inc(v_key_956_);
lean_dec(v_x_955_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_970_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
uint8_t v___x_962_; 
v___x_962_ = l_Lean_instBEqFVarId_beq(v_key_956_, v_a_953_);
if (v___x_962_ == 0)
{
lean_object* v___x_963_; lean_object* v___x_965_; 
v___x_963_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2_spec__4___redArg(v_a_953_, v_b_954_, v_tail_958_);
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 2, v___x_963_);
v___x_965_ = v___x_960_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v_key_956_);
lean_ctor_set(v_reuseFailAlloc_966_, 1, v_value_957_);
lean_ctor_set(v_reuseFailAlloc_966_, 2, v___x_963_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
else
{
lean_object* v___x_968_; 
lean_dec(v_value_957_);
lean_dec(v_key_956_);
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 1, v_b_954_);
lean_ctor_set(v___x_960_, 0, v_a_953_);
v___x_968_ = v___x_960_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_a_953_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v_b_954_);
lean_ctor_set(v_reuseFailAlloc_969_, 2, v_tail_958_);
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
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2___redArg(lean_object* v_m_971_, lean_object* v_a_972_, lean_object* v_b_973_){
_start:
{
lean_object* v_size_974_; lean_object* v_buckets_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_1018_; 
v_size_974_ = lean_ctor_get(v_m_971_, 0);
v_buckets_975_ = lean_ctor_get(v_m_971_, 1);
v_isSharedCheck_1018_ = !lean_is_exclusive(v_m_971_);
if (v_isSharedCheck_1018_ == 0)
{
v___x_977_ = v_m_971_;
v_isShared_978_ = v_isSharedCheck_1018_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_buckets_975_);
lean_inc(v_size_974_);
lean_dec(v_m_971_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_1018_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_979_; uint64_t v___x_980_; uint64_t v___x_981_; uint64_t v___x_982_; uint64_t v_fold_983_; uint64_t v___x_984_; uint64_t v___x_985_; uint64_t v___x_986_; size_t v___x_987_; size_t v___x_988_; size_t v___x_989_; size_t v___x_990_; size_t v___x_991_; lean_object* v_bkt_992_; uint8_t v___x_993_; 
v___x_979_ = lean_array_get_size(v_buckets_975_);
v___x_980_ = l_Lean_instHashableFVarId_hash(v_a_972_);
v___x_981_ = 32ULL;
v___x_982_ = lean_uint64_shift_right(v___x_980_, v___x_981_);
v_fold_983_ = lean_uint64_xor(v___x_980_, v___x_982_);
v___x_984_ = 16ULL;
v___x_985_ = lean_uint64_shift_right(v_fold_983_, v___x_984_);
v___x_986_ = lean_uint64_xor(v_fold_983_, v___x_985_);
v___x_987_ = lean_uint64_to_usize(v___x_986_);
v___x_988_ = lean_usize_of_nat(v___x_979_);
v___x_989_ = ((size_t)1ULL);
v___x_990_ = lean_usize_sub(v___x_988_, v___x_989_);
v___x_991_ = lean_usize_land(v___x_987_, v___x_990_);
v_bkt_992_ = lean_array_uget_borrowed(v_buckets_975_, v___x_991_);
v___x_993_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg(v_a_972_, v_bkt_992_);
if (v___x_993_ == 0)
{
lean_object* v___x_994_; lean_object* v_size_x27_995_; lean_object* v___x_996_; lean_object* v_buckets_x27_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; uint8_t v___x_1003_; 
v___x_994_ = lean_unsigned_to_nat(1u);
v_size_x27_995_ = lean_nat_add(v_size_974_, v___x_994_);
lean_dec(v_size_974_);
lean_inc(v_bkt_992_);
v___x_996_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_996_, 0, v_a_972_);
lean_ctor_set(v___x_996_, 1, v_b_973_);
lean_ctor_set(v___x_996_, 2, v_bkt_992_);
v_buckets_x27_997_ = lean_array_uset(v_buckets_975_, v___x_991_, v___x_996_);
v___x_998_ = lean_unsigned_to_nat(4u);
v___x_999_ = lean_nat_mul(v_size_x27_995_, v___x_998_);
v___x_1000_ = lean_unsigned_to_nat(3u);
v___x_1001_ = lean_nat_div(v___x_999_, v___x_1000_);
lean_dec(v___x_999_);
v___x_1002_ = lean_array_get_size(v_buckets_x27_997_);
v___x_1003_ = lean_nat_dec_le(v___x_1001_, v___x_1002_);
lean_dec(v___x_1001_);
if (v___x_1003_ == 0)
{
lean_object* v_val_1004_; lean_object* v___x_1006_; 
v_val_1004_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0___redArg(v_buckets_x27_997_);
if (v_isShared_978_ == 0)
{
lean_ctor_set(v___x_977_, 1, v_val_1004_);
lean_ctor_set(v___x_977_, 0, v_size_x27_995_);
v___x_1006_ = v___x_977_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_size_x27_995_);
lean_ctor_set(v_reuseFailAlloc_1007_, 1, v_val_1004_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
else
{
lean_object* v___x_1009_; 
if (v_isShared_978_ == 0)
{
lean_ctor_set(v___x_977_, 1, v_buckets_x27_997_);
lean_ctor_set(v___x_977_, 0, v_size_x27_995_);
v___x_1009_ = v___x_977_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_size_x27_995_);
lean_ctor_set(v_reuseFailAlloc_1010_, 1, v_buckets_x27_997_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
else
{
lean_object* v___x_1011_; lean_object* v_buckets_x27_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1016_; 
lean_inc(v_bkt_992_);
v___x_1011_ = lean_box(0);
v_buckets_x27_1012_ = lean_array_uset(v_buckets_975_, v___x_991_, v___x_1011_);
v___x_1013_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2_spec__4___redArg(v_a_972_, v_b_973_, v_bkt_992_);
v___x_1014_ = lean_array_uset(v_buckets_x27_1012_, v___x_991_, v___x_1013_);
if (v_isShared_978_ == 0)
{
lean_ctor_set(v___x_977_, 1, v___x_1014_);
v___x_1016_ = v___x_977_;
goto v_reusejp_1015_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v_size_974_);
lean_ctor_set(v_reuseFailAlloc_1017_, 1, v___x_1014_);
v___x_1016_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1015_;
}
v_reusejp_1015_:
{
return v___x_1016_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__5___redArg(lean_object* v_as_1019_, size_t v_i_1020_, size_t v_stop_1021_, lean_object* v_b_1022_, lean_object* v___y_1023_){
_start:
{
lean_object* v_a_1026_; uint8_t v___x_1032_; 
v___x_1032_ = lean_usize_dec_eq(v_i_1020_, v_stop_1021_);
if (v___x_1032_ == 0)
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v_fvarId_1035_; lean_object* v_type_1036_; uint8_t v_borrow_1037_; lean_object* v_varMap_1038_; lean_object* v_borrowedValues_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1074_; 
v___x_1033_ = lean_st_ref_take(v___y_1023_);
v___x_1034_ = lean_array_uget_borrowed(v_as_1019_, v_i_1020_);
v_fvarId_1035_ = lean_ctor_get(v___x_1034_, 0);
v_type_1036_ = lean_ctor_get(v___x_1034_, 2);
v_borrow_1037_ = lean_ctor_get_uint8(v___x_1034_, sizeof(void*)*3);
v_varMap_1038_ = lean_ctor_get(v___x_1033_, 0);
v_borrowedValues_1039_ = lean_ctor_get(v___x_1033_, 1);
v_isSharedCheck_1074_ = !lean_is_exclusive(v___x_1033_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1041_ = v___x_1033_;
v_isShared_1042_ = v_isSharedCheck_1074_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_borrowedValues_1039_);
lean_inc(v_varMap_1038_);
lean_dec(v___x_1033_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1074_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1043_; lean_object* v___y_1045_; uint8_t v___x_1066_; 
v___x_1043_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0));
v___x_1066_ = lean_uint8_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3);
if (v___x_1066_ == 0)
{
v___y_1045_ = v_varMap_1038_;
goto v___jp_1044_;
}
else
{
uint8_t v___x_1067_; 
v___x_1067_ = lean_uint8_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__4, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__4_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__4);
if (v___x_1067_ == 0)
{
if (v___x_1066_ == 0)
{
v___y_1045_ = v_varMap_1038_;
goto v___jp_1044_;
}
else
{
size_t v___x_1068_; size_t v___x_1069_; lean_object* v___x_1070_; 
v___x_1068_ = ((size_t)0ULL);
v___x_1069_ = lean_usize_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5);
lean_inc(v_fvarId_1035_);
v___x_1070_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(v_fvarId_1035_, v___x_1043_, v___x_1068_, v___x_1069_, v_varMap_1038_);
v___y_1045_ = v___x_1070_;
goto v___jp_1044_;
}
}
else
{
size_t v___x_1071_; size_t v___x_1072_; lean_object* v___x_1073_; 
v___x_1071_ = ((size_t)0ULL);
v___x_1072_ = lean_usize_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5);
lean_inc(v_fvarId_1035_);
v___x_1073_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(v_fvarId_1035_, v___x_1043_, v___x_1071_, v___x_1072_, v_varMap_1038_);
v___y_1045_ = v___x_1073_;
goto v___jp_1044_;
}
}
v___jp_1044_:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1049_; 
v___x_1046_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1);
lean_inc(v_fvarId_1035_);
v___x_1047_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2___redArg(v___y_1045_, v_fvarId_1035_, v___x_1046_);
if (v_isShared_1042_ == 0)
{
lean_ctor_set(v___x_1041_, 0, v___x_1047_);
v___x_1049_ = v___x_1041_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v___x_1047_);
lean_ctor_set(v_reuseFailAlloc_1065_, 1, v_borrowedValues_1039_);
v___x_1049_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
lean_object* v___x_1050_; 
v___x_1050_ = lean_st_ref_set(v___y_1023_, v___x_1049_);
if (v_borrow_1037_ == 0)
{
goto v___jp_1030_;
}
else
{
uint8_t v___x_1051_; 
v___x_1051_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_1036_);
if (v___x_1051_ == 0)
{
goto v___jp_1030_;
}
else
{
lean_object* v___x_1052_; lean_object* v_varMap_1053_; lean_object* v_borrowedValues_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1064_; 
v___x_1052_ = lean_st_ref_take(v___y_1023_);
v_varMap_1053_ = lean_ctor_get(v___x_1052_, 0);
v_borrowedValues_1054_ = lean_ctor_get(v___x_1052_, 1);
v_isSharedCheck_1064_ = !lean_is_exclusive(v___x_1052_);
if (v_isSharedCheck_1064_ == 0)
{
v___x_1056_ = v___x_1052_;
v_isShared_1057_ = v_isSharedCheck_1064_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_borrowedValues_1054_);
lean_inc(v_varMap_1053_);
lean_dec(v___x_1052_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1064_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1061_; 
v___x_1058_ = lean_box(0);
lean_inc(v_fvarId_1035_);
v___x_1059_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(v_borrowedValues_1054_, v_fvarId_1035_, v___x_1058_);
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 1, v___x_1059_);
v___x_1061_ = v___x_1056_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v_varMap_1053_);
lean_ctor_set(v_reuseFailAlloc_1063_, 1, v___x_1059_);
v___x_1061_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
lean_object* v___x_1062_; 
v___x_1062_ = lean_st_ref_set(v___y_1023_, v___x_1061_);
v_a_1026_ = v___x_1058_;
goto v___jp_1025_;
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
lean_object* v___x_1075_; 
v___x_1075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1075_, 0, v_b_1022_);
return v___x_1075_;
}
v___jp_1025_:
{
size_t v___x_1027_; size_t v___x_1028_; 
v___x_1027_ = ((size_t)1ULL);
v___x_1028_ = lean_usize_add(v_i_1020_, v___x_1027_);
v_i_1020_ = v___x_1028_;
v_b_1022_ = v_a_1026_;
goto _start;
}
v___jp_1030_:
{
lean_object* v___x_1031_; 
v___x_1031_ = lean_box(0);
v_a_1026_ = v___x_1031_;
goto v___jp_1025_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__5___redArg___boxed(lean_object* v_as_1076_, lean_object* v_i_1077_, lean_object* v_stop_1078_, lean_object* v_b_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
size_t v_i_boxed_1082_; size_t v_stop_boxed_1083_; lean_object* v_res_1084_; 
v_i_boxed_1082_ = lean_unbox_usize(v_i_1077_);
lean_dec(v_i_1077_);
v_stop_boxed_1083_ = lean_unbox_usize(v_stop_1078_);
lean_dec(v_stop_1078_);
v_res_1084_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__5___redArg(v_as_1076_, v_i_boxed_1082_, v_stop_boxed_1083_, v_b_1079_, v___y_1080_);
lean_dec(v___y_1080_);
lean_dec_ref(v_as_1076_);
return v_res_1084_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__7(void){
_start:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1092_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6));
v___x_1093_ = lean_unsigned_to_nat(59u);
v___x_1094_ = lean_unsigned_to_nat(140u);
v___x_1095_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__5));
v___x_1096_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__4));
v___x_1097_ = l_mkPanicMessageWithDecl(v___x_1096_, v___x_1095_, v___x_1094_, v___x_1093_, v___x_1092_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(lean_object* v_code_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_){
_start:
{
switch(lean_obj_tag(v_code_1098_))
{
case 0:
{
lean_object* v_decl_1105_; lean_object* v_k_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1337_; 
v_decl_1105_ = lean_ctor_get(v_code_1098_, 0);
v_k_1106_ = lean_ctor_get(v_code_1098_, 1);
v_isSharedCheck_1337_ = !lean_is_exclusive(v_code_1098_);
if (v_isSharedCheck_1337_ == 0)
{
v___x_1108_ = v_code_1098_;
v_isShared_1109_ = v_isSharedCheck_1337_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_k_1106_);
lean_inc(v_decl_1105_);
lean_dec(v_code_1098_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1337_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___y_1111_; lean_object* v___y_1112_; lean_object* v___y_1113_; lean_object* v___y_1114_; lean_object* v___y_1115_; lean_object* v___y_1116_; lean_object* v___y_1117_; lean_object* v_borrowedValues_1118_; lean_object* v___y_1119_; lean_object* v___y_1120_; lean_object* v___y_1129_; lean_object* v___y_1130_; lean_object* v_borrowedValues_1131_; lean_object* v___y_1132_; lean_object* v___y_1133_; lean_object* v___y_1134_; lean_object* v___y_1135_; lean_object* v___y_1136_; lean_object* v___y_1137_; lean_object* v___y_1138_; lean_object* v___y_1145_; lean_object* v___y_1146_; lean_object* v___y_1147_; lean_object* v___y_1148_; lean_object* v___y_1149_; lean_object* v___y_1150_; lean_object* v_borrowedValues_1151_; lean_object* v___y_1152_; lean_object* v___y_1153_; lean_object* v___y_1154_; lean_object* v_fvarId_1173_; lean_object* v_value_1174_; lean_object* v___y_1176_; lean_object* v___y_1177_; lean_object* v___y_1178_; lean_object* v___y_1179_; lean_object* v___y_1180_; lean_object* v_args_1195_; lean_object* v___y_1196_; lean_object* v___y_1197_; lean_object* v___y_1198_; lean_object* v___y_1199_; lean_object* v___y_1200_; lean_object* v_parents_1223_; lean_object* v___y_1224_; lean_object* v___y_1225_; lean_object* v___y_1226_; lean_object* v___y_1227_; lean_object* v___y_1228_; 
v_fvarId_1173_ = lean_ctor_get(v_decl_1105_, 0);
lean_inc(v_fvarId_1173_);
v_value_1174_ = lean_ctor_get(v_decl_1105_, 3);
lean_inc(v_value_1174_);
lean_dec_ref(v_decl_1105_);
switch(lean_obj_tag(v_value_1174_))
{
case 6:
{
lean_object* v_var_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1279_; 
lean_del_object(v___x_1108_);
v_var_1243_ = lean_ctor_get(v_value_1174_, 1);
v_isSharedCheck_1279_ = !lean_is_exclusive(v_value_1174_);
if (v_isSharedCheck_1279_ == 0)
{
lean_object* v_unused_1280_; 
v_unused_1280_ = lean_ctor_get(v_value_1174_, 0);
lean_dec(v_unused_1280_);
v___x_1245_ = v_value_1174_;
v_isShared_1246_ = v_isSharedCheck_1279_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_var_1243_);
lean_dec(v_value_1174_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1279_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1247_; lean_object* v_varMap_1248_; lean_object* v_borrowedValues_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1278_; 
v___x_1247_ = lean_st_ref_take(v_a_1099_);
v_varMap_1248_ = lean_ctor_get(v___x_1247_, 0);
v_borrowedValues_1249_ = lean_ctor_get(v___x_1247_, 1);
v_isSharedCheck_1278_ = !lean_is_exclusive(v___x_1247_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1251_ = v___x_1247_;
v_isShared_1252_ = v_isSharedCheck_1278_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_borrowedValues_1249_);
lean_inc(v_varMap_1248_);
lean_dec(v___x_1247_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1278_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___y_1258_; lean_object* v___x_1268_; lean_object* v___x_1269_; uint8_t v___x_1270_; 
v___x_1253_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_1254_ = lean_unsigned_to_nat(1u);
v___x_1255_ = lean_mk_empty_array_with_capacity(v___x_1254_);
v___x_1256_ = lean_array_push(v___x_1255_, v_var_1243_);
v___x_1268_ = lean_unsigned_to_nat(0u);
v___x_1269_ = lean_array_get_size(v___x_1256_);
v___x_1270_ = lean_nat_dec_lt(v___x_1268_, v___x_1269_);
if (v___x_1270_ == 0)
{
v___y_1258_ = v_varMap_1248_;
goto v___jp_1257_;
}
else
{
uint8_t v___x_1271_; 
v___x_1271_ = lean_nat_dec_le(v___x_1269_, v___x_1269_);
if (v___x_1271_ == 0)
{
if (v___x_1270_ == 0)
{
v___y_1258_ = v_varMap_1248_;
goto v___jp_1257_;
}
else
{
size_t v___x_1272_; size_t v___x_1273_; lean_object* v___x_1274_; 
v___x_1272_ = ((size_t)0ULL);
v___x_1273_ = lean_usize_of_nat(v___x_1269_);
lean_inc(v_fvarId_1173_);
v___x_1274_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(v_fvarId_1173_, v___x_1256_, v___x_1272_, v___x_1273_, v_varMap_1248_);
v___y_1258_ = v___x_1274_;
goto v___jp_1257_;
}
}
else
{
size_t v___x_1275_; size_t v___x_1276_; lean_object* v___x_1277_; 
v___x_1275_ = ((size_t)0ULL);
v___x_1276_ = lean_usize_of_nat(v___x_1269_);
lean_inc(v_fvarId_1173_);
v___x_1277_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(v_fvarId_1173_, v___x_1256_, v___x_1275_, v___x_1276_, v_varMap_1248_);
v___y_1258_ = v___x_1277_;
goto v___jp_1257_;
}
}
v___jp_1257_:
{
lean_object* v___x_1260_; 
if (v_isShared_1246_ == 0)
{
lean_ctor_set_tag(v___x_1245_, 0);
lean_ctor_set(v___x_1245_, 1, v___x_1253_);
lean_ctor_set(v___x_1245_, 0, v___x_1256_);
v___x_1260_ = v___x_1245_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v___x_1256_);
lean_ctor_set(v_reuseFailAlloc_1267_, 1, v___x_1253_);
v___x_1260_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
lean_object* v___x_1261_; lean_object* v___x_1263_; 
v___x_1261_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2___redArg(v___y_1258_, v_fvarId_1173_, v___x_1260_);
if (v_isShared_1252_ == 0)
{
lean_ctor_set(v___x_1251_, 0, v___x_1261_);
v___x_1263_ = v___x_1251_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1266_; 
v_reuseFailAlloc_1266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1266_, 0, v___x_1261_);
lean_ctor_set(v_reuseFailAlloc_1266_, 1, v_borrowedValues_1249_);
v___x_1263_ = v_reuseFailAlloc_1266_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
lean_object* v___x_1264_; 
v___x_1264_ = lean_st_ref_set(v_a_1099_, v___x_1263_);
v_code_1098_ = v_k_1106_;
goto _start;
}
}
}
}
}
}
case 9:
{
lean_object* v_fn_1281_; lean_object* v_args_1282_; lean_object* v_parents_1284_; lean_object* v___y_1285_; lean_object* v___y_1286_; lean_object* v___y_1287_; lean_object* v___y_1288_; lean_object* v___y_1289_; 
v_fn_1281_ = lean_ctor_get(v_value_1174_, 0);
lean_inc(v_fn_1281_);
v_args_1282_ = lean_ctor_get(v_value_1174_, 1);
lean_inc_ref(v_args_1282_);
lean_dec_ref(v_value_1174_);
if (lean_obj_tag(v_fn_1281_) == 1)
{
lean_object* v_pre_1295_; 
v_pre_1295_ = lean_ctor_get(v_fn_1281_, 0);
lean_inc(v_pre_1295_);
if (lean_obj_tag(v_pre_1295_) == 1)
{
lean_object* v_pre_1296_; 
v_pre_1296_ = lean_ctor_get(v_pre_1295_, 0);
if (lean_obj_tag(v_pre_1296_) == 0)
{
lean_object* v_str_1297_; lean_object* v_str_1298_; lean_object* v___x_1299_; uint8_t v___x_1300_; 
v_str_1297_ = lean_ctor_get(v_fn_1281_, 1);
lean_inc_ref(v_str_1297_);
lean_dec_ref(v_fn_1281_);
v_str_1298_ = lean_ctor_get(v_pre_1295_, 1);
lean_inc_ref(v_str_1298_);
lean_dec_ref(v_pre_1295_);
v___x_1299_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__0));
v___x_1300_ = lean_string_dec_eq(v_str_1298_, v___x_1299_);
lean_dec_ref(v_str_1298_);
if (v___x_1300_ == 0)
{
lean_object* v___x_1301_; lean_object* v___x_1302_; uint8_t v___x_1303_; 
lean_dec_ref(v_str_1297_);
lean_del_object(v___x_1108_);
v___x_1301_ = lean_array_get_size(v_args_1282_);
lean_dec_ref(v_args_1282_);
v___x_1302_ = lean_unsigned_to_nat(0u);
v___x_1303_ = lean_nat_dec_eq(v___x_1301_, v___x_1302_);
if (v___x_1303_ == 0)
{
lean_dec(v_fvarId_1173_);
v_code_1098_ = v_k_1106_;
goto _start;
}
else
{
v___y_1176_ = v_a_1099_;
v___y_1177_ = v_a_1100_;
v___y_1178_ = v_a_1101_;
v___y_1179_ = v_a_1102_;
v___y_1180_ = v_a_1103_;
goto v___jp_1175_;
}
}
else
{
lean_object* v___x_1305_; uint8_t v___x_1306_; 
v___x_1305_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__1));
v___x_1306_ = lean_string_dec_eq(v_str_1297_, v___x_1305_);
if (v___x_1306_ == 0)
{
lean_object* v___x_1307_; uint8_t v___x_1308_; 
v___x_1307_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__2));
v___x_1308_ = lean_string_dec_eq(v_str_1297_, v___x_1307_);
if (v___x_1308_ == 0)
{
lean_object* v___x_1309_; uint8_t v___x_1310_; 
lean_del_object(v___x_1108_);
v___x_1309_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__3));
v___x_1310_ = lean_string_dec_eq(v_str_1297_, v___x_1309_);
lean_dec_ref(v_str_1297_);
if (v___x_1310_ == 0)
{
lean_object* v___x_1311_; lean_object* v___x_1312_; uint8_t v___x_1313_; 
v___x_1311_ = lean_array_get_size(v_args_1282_);
lean_dec_ref(v_args_1282_);
v___x_1312_ = lean_unsigned_to_nat(0u);
v___x_1313_ = lean_nat_dec_eq(v___x_1311_, v___x_1312_);
if (v___x_1313_ == 0)
{
lean_dec(v_fvarId_1173_);
v_code_1098_ = v_k_1106_;
goto _start;
}
else
{
v___y_1176_ = v_a_1099_;
v___y_1177_ = v_a_1100_;
v___y_1178_ = v_a_1101_;
v___y_1179_ = v_a_1102_;
v___y_1180_ = v_a_1103_;
goto v___jp_1175_;
}
}
else
{
v_args_1195_ = v_args_1282_;
v___y_1196_ = v_a_1099_;
v___y_1197_ = v_a_1100_;
v___y_1198_ = v_a_1101_;
v___y_1199_ = v_a_1102_;
v___y_1200_ = v_a_1103_;
goto v___jp_1194_;
}
}
else
{
lean_object* v_parents_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
lean_dec_ref(v_str_1297_);
v_parents_1315_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0));
v___x_1316_ = lean_box(0);
v___x_1317_ = lean_unsigned_to_nat(1u);
v___x_1318_ = lean_array_get(v___x_1316_, v_args_1282_, v___x_1317_);
if (lean_obj_tag(v___x_1318_) == 1)
{
lean_object* v_fvarId_1319_; lean_object* v_parents_1320_; 
v_fvarId_1319_ = lean_ctor_get(v___x_1318_, 0);
lean_inc(v_fvarId_1319_);
lean_dec_ref(v___x_1318_);
v_parents_1320_ = lean_array_push(v_parents_1315_, v_fvarId_1319_);
v_parents_1284_ = v_parents_1320_;
v___y_1285_ = v_a_1099_;
v___y_1286_ = v_a_1100_;
v___y_1287_ = v_a_1101_;
v___y_1288_ = v_a_1102_;
v___y_1289_ = v_a_1103_;
goto v___jp_1283_;
}
else
{
lean_dec(v___x_1318_);
v_parents_1284_ = v_parents_1315_;
v___y_1285_ = v_a_1099_;
v___y_1286_ = v_a_1100_;
v___y_1287_ = v_a_1101_;
v___y_1288_ = v_a_1102_;
v___y_1289_ = v_a_1103_;
goto v___jp_1283_;
}
}
}
else
{
lean_dec_ref(v_str_1297_);
lean_del_object(v___x_1108_);
v_args_1195_ = v_args_1282_;
v___y_1196_ = v_a_1099_;
v___y_1197_ = v_a_1100_;
v___y_1198_ = v_a_1101_;
v___y_1199_ = v_a_1102_;
v___y_1200_ = v_a_1103_;
goto v___jp_1194_;
}
}
}
else
{
lean_object* v___x_1321_; lean_object* v___x_1322_; uint8_t v___x_1323_; 
lean_dec_ref(v_pre_1295_);
lean_dec_ref(v_fn_1281_);
lean_del_object(v___x_1108_);
v___x_1321_ = lean_array_get_size(v_args_1282_);
lean_dec_ref(v_args_1282_);
v___x_1322_ = lean_unsigned_to_nat(0u);
v___x_1323_ = lean_nat_dec_eq(v___x_1321_, v___x_1322_);
if (v___x_1323_ == 0)
{
lean_dec(v_fvarId_1173_);
v_code_1098_ = v_k_1106_;
goto _start;
}
else
{
v___y_1176_ = v_a_1099_;
v___y_1177_ = v_a_1100_;
v___y_1178_ = v_a_1101_;
v___y_1179_ = v_a_1102_;
v___y_1180_ = v_a_1103_;
goto v___jp_1175_;
}
}
}
else
{
lean_object* v___x_1325_; lean_object* v___x_1326_; uint8_t v___x_1327_; 
lean_dec(v_pre_1295_);
lean_dec_ref(v_fn_1281_);
lean_del_object(v___x_1108_);
v___x_1325_ = lean_array_get_size(v_args_1282_);
lean_dec_ref(v_args_1282_);
v___x_1326_ = lean_unsigned_to_nat(0u);
v___x_1327_ = lean_nat_dec_eq(v___x_1325_, v___x_1326_);
if (v___x_1327_ == 0)
{
lean_dec(v_fvarId_1173_);
v_code_1098_ = v_k_1106_;
goto _start;
}
else
{
v___y_1176_ = v_a_1099_;
v___y_1177_ = v_a_1100_;
v___y_1178_ = v_a_1101_;
v___y_1179_ = v_a_1102_;
v___y_1180_ = v_a_1103_;
goto v___jp_1175_;
}
}
}
else
{
lean_object* v___x_1329_; lean_object* v___x_1330_; uint8_t v___x_1331_; 
lean_dec(v_fn_1281_);
lean_del_object(v___x_1108_);
v___x_1329_ = lean_array_get_size(v_args_1282_);
lean_dec_ref(v_args_1282_);
v___x_1330_ = lean_unsigned_to_nat(0u);
v___x_1331_ = lean_nat_dec_eq(v___x_1329_, v___x_1330_);
if (v___x_1331_ == 0)
{
lean_dec(v_fvarId_1173_);
v_code_1098_ = v_k_1106_;
goto _start;
}
else
{
v___y_1176_ = v_a_1099_;
v___y_1177_ = v_a_1100_;
v___y_1178_ = v_a_1101_;
v___y_1179_ = v_a_1102_;
v___y_1180_ = v_a_1103_;
goto v___jp_1175_;
}
}
v___jp_1283_:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1290_ = lean_box(0);
v___x_1291_ = lean_unsigned_to_nat(2u);
v___x_1292_ = lean_array_get(v___x_1290_, v_args_1282_, v___x_1291_);
lean_dec_ref(v_args_1282_);
if (lean_obj_tag(v___x_1292_) == 1)
{
lean_object* v_fvarId_1293_; lean_object* v_parents_1294_; 
v_fvarId_1293_ = lean_ctor_get(v___x_1292_, 0);
lean_inc(v_fvarId_1293_);
lean_dec_ref(v___x_1292_);
v_parents_1294_ = lean_array_push(v_parents_1284_, v_fvarId_1293_);
v_parents_1223_ = v_parents_1294_;
v___y_1224_ = v___y_1285_;
v___y_1225_ = v___y_1286_;
v___y_1226_ = v___y_1287_;
v___y_1227_ = v___y_1288_;
v___y_1228_ = v___y_1289_;
goto v___jp_1222_;
}
else
{
lean_dec(v___x_1292_);
v_parents_1223_ = v_parents_1284_;
v___y_1224_ = v___y_1285_;
v___y_1225_ = v___y_1286_;
v___y_1226_ = v___y_1287_;
v___y_1227_ = v___y_1288_;
v___y_1228_ = v___y_1289_;
goto v___jp_1222_;
}
}
}
case 11:
{
lean_object* v_var_1333_; lean_object* v___x_1334_; 
lean_dec(v_fvarId_1173_);
lean_del_object(v___x_1108_);
v_var_1333_ = lean_ctor_get(v_value_1174_, 1);
lean_inc(v_var_1333_);
lean_dec_ref(v_value_1174_);
v___x_1334_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents(v_var_1333_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_, v_a_1103_);
lean_dec(v_var_1333_);
if (lean_obj_tag(v___x_1334_) == 0)
{
lean_dec_ref(v___x_1334_);
v_code_1098_ = v_k_1106_;
goto _start;
}
else
{
lean_dec_ref(v_k_1106_);
return v___x_1334_;
}
}
default: 
{
lean_dec(v_value_1174_);
lean_dec(v_fvarId_1173_);
lean_del_object(v___x_1108_);
v_code_1098_ = v_k_1106_;
goto _start;
}
}
v___jp_1110_:
{
lean_object* v___x_1122_; 
lean_inc_ref(v___y_1112_);
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 1, v___y_1112_);
lean_ctor_set(v___x_1108_, 0, v___y_1119_);
v___x_1122_ = v___x_1108_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v___y_1119_);
lean_ctor_set(v_reuseFailAlloc_1127_, 1, v___y_1112_);
v___x_1122_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
v___x_1123_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2___redArg(v___y_1120_, v___y_1114_, v___x_1122_);
v___x_1124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1123_);
lean_ctor_set(v___x_1124_, 1, v_borrowedValues_1118_);
v___x_1125_ = lean_st_ref_set(v___y_1116_, v___x_1124_);
v_code_1098_ = v_k_1106_;
v_a_1099_ = v___y_1116_;
v_a_1100_ = v___y_1111_;
v_a_1101_ = v___y_1113_;
v_a_1102_ = v___y_1115_;
v_a_1103_ = v___y_1117_;
goto _start;
}
}
v___jp_1128_:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
lean_inc_ref(v___y_1136_);
v___x_1139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1139_, 0, v___y_1133_);
lean_ctor_set(v___x_1139_, 1, v___y_1136_);
v___x_1140_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2___redArg(v___y_1138_, v___y_1137_, v___x_1139_);
v___x_1141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1141_, 0, v___x_1140_);
lean_ctor_set(v___x_1141_, 1, v_borrowedValues_1131_);
v___x_1142_ = lean_st_ref_set(v___y_1132_, v___x_1141_);
v_code_1098_ = v_k_1106_;
v_a_1099_ = v___y_1132_;
v_a_1100_ = v___y_1135_;
v_a_1101_ = v___y_1130_;
v_a_1102_ = v___y_1129_;
v_a_1103_ = v___y_1134_;
goto _start;
}
v___jp_1144_:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v_varMap_1160_; lean_object* v_borrowedValues_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1172_; 
lean_inc_ref(v___y_1149_);
lean_inc_ref(v___y_1153_);
v___x_1155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1155_, 0, v___y_1153_);
lean_ctor_set(v___x_1155_, 1, v___y_1149_);
lean_inc(v___y_1145_);
v___x_1156_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2___redArg(v___y_1154_, v___y_1145_, v___x_1155_);
v___x_1157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1157_, 0, v___x_1156_);
lean_ctor_set(v___x_1157_, 1, v_borrowedValues_1151_);
v___x_1158_ = lean_st_ref_set(v___y_1146_, v___x_1157_);
v___x_1159_ = lean_st_ref_take(v___y_1146_);
v_varMap_1160_ = lean_ctor_get(v___x_1159_, 0);
v_borrowedValues_1161_ = lean_ctor_get(v___x_1159_, 1);
v_isSharedCheck_1172_ = !lean_is_exclusive(v___x_1159_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1163_ = v___x_1159_;
v_isShared_1164_ = v_isSharedCheck_1172_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_borrowedValues_1161_);
lean_inc(v_varMap_1160_);
lean_dec(v___x_1159_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1172_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1168_; 
v___x_1165_ = lean_box(0);
v___x_1166_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(v_borrowedValues_1161_, v___y_1145_, v___x_1165_);
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 1, v___x_1166_);
v___x_1168_ = v___x_1163_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_varMap_1160_);
lean_ctor_set(v_reuseFailAlloc_1171_, 1, v___x_1166_);
v___x_1168_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
lean_object* v___x_1169_; 
v___x_1169_ = lean_st_ref_set(v___y_1146_, v___x_1168_);
v_code_1098_ = v_k_1106_;
v_a_1099_ = v___y_1146_;
v_a_1100_ = v___y_1148_;
v_a_1101_ = v___y_1150_;
v_a_1102_ = v___y_1152_;
v_a_1103_ = v___y_1147_;
goto _start;
}
}
}
v___jp_1175_:
{
lean_object* v___x_1181_; lean_object* v_varMap_1182_; lean_object* v_borrowedValues_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; uint8_t v___x_1186_; 
v___x_1181_ = lean_st_ref_take(v___y_1176_);
v_varMap_1182_ = lean_ctor_get(v___x_1181_, 0);
lean_inc_ref(v_varMap_1182_);
v_borrowedValues_1183_ = lean_ctor_get(v___x_1181_, 1);
lean_inc_ref(v_borrowedValues_1183_);
lean_dec(v___x_1181_);
v___x_1184_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_1185_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0));
v___x_1186_ = lean_uint8_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3);
if (v___x_1186_ == 0)
{
v___y_1145_ = v_fvarId_1173_;
v___y_1146_ = v___y_1176_;
v___y_1147_ = v___y_1180_;
v___y_1148_ = v___y_1177_;
v___y_1149_ = v___x_1184_;
v___y_1150_ = v___y_1178_;
v_borrowedValues_1151_ = v_borrowedValues_1183_;
v___y_1152_ = v___y_1179_;
v___y_1153_ = v___x_1185_;
v___y_1154_ = v_varMap_1182_;
goto v___jp_1144_;
}
else
{
uint8_t v___x_1187_; 
v___x_1187_ = lean_uint8_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__4, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__4_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__4);
if (v___x_1187_ == 0)
{
if (v___x_1186_ == 0)
{
v___y_1145_ = v_fvarId_1173_;
v___y_1146_ = v___y_1176_;
v___y_1147_ = v___y_1180_;
v___y_1148_ = v___y_1177_;
v___y_1149_ = v___x_1184_;
v___y_1150_ = v___y_1178_;
v_borrowedValues_1151_ = v_borrowedValues_1183_;
v___y_1152_ = v___y_1179_;
v___y_1153_ = v___x_1185_;
v___y_1154_ = v_varMap_1182_;
goto v___jp_1144_;
}
else
{
size_t v___x_1188_; size_t v___x_1189_; lean_object* v___x_1190_; 
v___x_1188_ = ((size_t)0ULL);
v___x_1189_ = lean_usize_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5);
lean_inc(v_fvarId_1173_);
v___x_1190_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(v_fvarId_1173_, v___x_1185_, v___x_1188_, v___x_1189_, v_varMap_1182_);
v___y_1145_ = v_fvarId_1173_;
v___y_1146_ = v___y_1176_;
v___y_1147_ = v___y_1180_;
v___y_1148_ = v___y_1177_;
v___y_1149_ = v___x_1184_;
v___y_1150_ = v___y_1178_;
v_borrowedValues_1151_ = v_borrowedValues_1183_;
v___y_1152_ = v___y_1179_;
v___y_1153_ = v___x_1185_;
v___y_1154_ = v___x_1190_;
goto v___jp_1144_;
}
}
else
{
size_t v___x_1191_; size_t v___x_1192_; lean_object* v___x_1193_; 
v___x_1191_ = ((size_t)0ULL);
v___x_1192_ = lean_usize_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__5);
lean_inc(v_fvarId_1173_);
v___x_1193_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(v_fvarId_1173_, v___x_1185_, v___x_1191_, v___x_1192_, v_varMap_1182_);
v___y_1145_ = v_fvarId_1173_;
v___y_1146_ = v___y_1176_;
v___y_1147_ = v___y_1180_;
v___y_1148_ = v___y_1177_;
v___y_1149_ = v___x_1184_;
v___y_1150_ = v___y_1178_;
v_borrowedValues_1151_ = v_borrowedValues_1183_;
v___y_1152_ = v___y_1179_;
v___y_1153_ = v___x_1185_;
v___y_1154_ = v___x_1193_;
goto v___jp_1144_;
}
}
}
v___jp_1194_:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1201_ = lean_box(0);
v___x_1202_ = lean_unsigned_to_nat(1u);
v___x_1203_ = lean_array_get(v___x_1201_, v_args_1195_, v___x_1202_);
lean_dec_ref(v_args_1195_);
if (lean_obj_tag(v___x_1203_) == 1)
{
lean_object* v_fvarId_1204_; lean_object* v___x_1205_; lean_object* v_varMap_1206_; lean_object* v_borrowedValues_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; uint8_t v___x_1213_; 
v_fvarId_1204_ = lean_ctor_get(v___x_1203_, 0);
lean_inc(v_fvarId_1204_);
lean_dec_ref(v___x_1203_);
v___x_1205_ = lean_st_ref_take(v___y_1196_);
v_varMap_1206_ = lean_ctor_get(v___x_1205_, 0);
lean_inc_ref(v_varMap_1206_);
v_borrowedValues_1207_ = lean_ctor_get(v___x_1205_, 1);
lean_inc_ref(v_borrowedValues_1207_);
lean_dec(v___x_1205_);
v___x_1208_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_1209_ = lean_mk_empty_array_with_capacity(v___x_1202_);
v___x_1210_ = lean_array_push(v___x_1209_, v_fvarId_1204_);
v___x_1211_ = lean_unsigned_to_nat(0u);
v___x_1212_ = lean_array_get_size(v___x_1210_);
v___x_1213_ = lean_nat_dec_lt(v___x_1211_, v___x_1212_);
if (v___x_1213_ == 0)
{
v___y_1129_ = v___y_1199_;
v___y_1130_ = v___y_1198_;
v_borrowedValues_1131_ = v_borrowedValues_1207_;
v___y_1132_ = v___y_1196_;
v___y_1133_ = v___x_1210_;
v___y_1134_ = v___y_1200_;
v___y_1135_ = v___y_1197_;
v___y_1136_ = v___x_1208_;
v___y_1137_ = v_fvarId_1173_;
v___y_1138_ = v_varMap_1206_;
goto v___jp_1128_;
}
else
{
uint8_t v___x_1214_; 
v___x_1214_ = lean_nat_dec_le(v___x_1212_, v___x_1212_);
if (v___x_1214_ == 0)
{
if (v___x_1213_ == 0)
{
v___y_1129_ = v___y_1199_;
v___y_1130_ = v___y_1198_;
v_borrowedValues_1131_ = v_borrowedValues_1207_;
v___y_1132_ = v___y_1196_;
v___y_1133_ = v___x_1210_;
v___y_1134_ = v___y_1200_;
v___y_1135_ = v___y_1197_;
v___y_1136_ = v___x_1208_;
v___y_1137_ = v_fvarId_1173_;
v___y_1138_ = v_varMap_1206_;
goto v___jp_1128_;
}
else
{
size_t v___x_1215_; size_t v___x_1216_; lean_object* v___x_1217_; 
v___x_1215_ = ((size_t)0ULL);
v___x_1216_ = lean_usize_of_nat(v___x_1212_);
lean_inc(v_fvarId_1173_);
v___x_1217_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(v_fvarId_1173_, v___x_1210_, v___x_1215_, v___x_1216_, v_varMap_1206_);
v___y_1129_ = v___y_1199_;
v___y_1130_ = v___y_1198_;
v_borrowedValues_1131_ = v_borrowedValues_1207_;
v___y_1132_ = v___y_1196_;
v___y_1133_ = v___x_1210_;
v___y_1134_ = v___y_1200_;
v___y_1135_ = v___y_1197_;
v___y_1136_ = v___x_1208_;
v___y_1137_ = v_fvarId_1173_;
v___y_1138_ = v___x_1217_;
goto v___jp_1128_;
}
}
else
{
size_t v___x_1218_; size_t v___x_1219_; lean_object* v___x_1220_; 
v___x_1218_ = ((size_t)0ULL);
v___x_1219_ = lean_usize_of_nat(v___x_1212_);
lean_inc(v_fvarId_1173_);
v___x_1220_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(v_fvarId_1173_, v___x_1210_, v___x_1218_, v___x_1219_, v_varMap_1206_);
v___y_1129_ = v___y_1199_;
v___y_1130_ = v___y_1198_;
v_borrowedValues_1131_ = v_borrowedValues_1207_;
v___y_1132_ = v___y_1196_;
v___y_1133_ = v___x_1210_;
v___y_1134_ = v___y_1200_;
v___y_1135_ = v___y_1197_;
v___y_1136_ = v___x_1208_;
v___y_1137_ = v_fvarId_1173_;
v___y_1138_ = v___x_1220_;
goto v___jp_1128_;
}
}
}
else
{
lean_dec(v___x_1203_);
lean_dec(v_fvarId_1173_);
v_code_1098_ = v_k_1106_;
v_a_1099_ = v___y_1196_;
v_a_1100_ = v___y_1197_;
v_a_1101_ = v___y_1198_;
v_a_1102_ = v___y_1199_;
v_a_1103_ = v___y_1200_;
goto _start;
}
}
v___jp_1222_:
{
lean_object* v___x_1229_; lean_object* v_varMap_1230_; lean_object* v_borrowedValues_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; uint8_t v___x_1235_; 
v___x_1229_ = lean_st_ref_take(v___y_1224_);
v_varMap_1230_ = lean_ctor_get(v___x_1229_, 0);
lean_inc_ref(v_varMap_1230_);
v_borrowedValues_1231_ = lean_ctor_get(v___x_1229_, 1);
lean_inc_ref(v_borrowedValues_1231_);
lean_dec(v___x_1229_);
v___x_1232_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_1233_ = lean_unsigned_to_nat(0u);
v___x_1234_ = lean_array_get_size(v_parents_1223_);
v___x_1235_ = lean_nat_dec_lt(v___x_1233_, v___x_1234_);
if (v___x_1235_ == 0)
{
v___y_1111_ = v___y_1225_;
v___y_1112_ = v___x_1232_;
v___y_1113_ = v___y_1226_;
v___y_1114_ = v_fvarId_1173_;
v___y_1115_ = v___y_1227_;
v___y_1116_ = v___y_1224_;
v___y_1117_ = v___y_1228_;
v_borrowedValues_1118_ = v_borrowedValues_1231_;
v___y_1119_ = v_parents_1223_;
v___y_1120_ = v_varMap_1230_;
goto v___jp_1110_;
}
else
{
uint8_t v___x_1236_; 
v___x_1236_ = lean_nat_dec_le(v___x_1234_, v___x_1234_);
if (v___x_1236_ == 0)
{
if (v___x_1235_ == 0)
{
v___y_1111_ = v___y_1225_;
v___y_1112_ = v___x_1232_;
v___y_1113_ = v___y_1226_;
v___y_1114_ = v_fvarId_1173_;
v___y_1115_ = v___y_1227_;
v___y_1116_ = v___y_1224_;
v___y_1117_ = v___y_1228_;
v_borrowedValues_1118_ = v_borrowedValues_1231_;
v___y_1119_ = v_parents_1223_;
v___y_1120_ = v_varMap_1230_;
goto v___jp_1110_;
}
else
{
size_t v___x_1237_; size_t v___x_1238_; lean_object* v___x_1239_; 
v___x_1237_ = ((size_t)0ULL);
v___x_1238_ = lean_usize_of_nat(v___x_1234_);
lean_inc(v_fvarId_1173_);
v___x_1239_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(v_fvarId_1173_, v_parents_1223_, v___x_1237_, v___x_1238_, v_varMap_1230_);
v___y_1111_ = v___y_1225_;
v___y_1112_ = v___x_1232_;
v___y_1113_ = v___y_1226_;
v___y_1114_ = v_fvarId_1173_;
v___y_1115_ = v___y_1227_;
v___y_1116_ = v___y_1224_;
v___y_1117_ = v___y_1228_;
v_borrowedValues_1118_ = v_borrowedValues_1231_;
v___y_1119_ = v_parents_1223_;
v___y_1120_ = v___x_1239_;
goto v___jp_1110_;
}
}
else
{
size_t v___x_1240_; size_t v___x_1241_; lean_object* v___x_1242_; 
v___x_1240_ = ((size_t)0ULL);
v___x_1241_ = lean_usize_of_nat(v___x_1234_);
lean_inc(v_fvarId_1173_);
v___x_1242_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(v_fvarId_1173_, v_parents_1223_, v___x_1240_, v___x_1241_, v_varMap_1230_);
v___y_1111_ = v___y_1225_;
v___y_1112_ = v___x_1232_;
v___y_1113_ = v___y_1226_;
v___y_1114_ = v_fvarId_1173_;
v___y_1115_ = v___y_1227_;
v___y_1116_ = v___y_1224_;
v___y_1117_ = v___y_1228_;
v_borrowedValues_1118_ = v_borrowedValues_1231_;
v___y_1119_ = v_parents_1223_;
v___y_1120_ = v___x_1242_;
goto v___jp_1110_;
}
}
}
}
}
case 2:
{
lean_object* v_decl_1338_; lean_object* v_k_1339_; lean_object* v_params_1340_; lean_object* v_value_1341_; lean_object* v___y_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; uint8_t v___x_1349_; 
v_decl_1338_ = lean_ctor_get(v_code_1098_, 0);
lean_inc_ref(v_decl_1338_);
v_k_1339_ = lean_ctor_get(v_code_1098_, 1);
lean_inc_ref(v_k_1339_);
lean_dec_ref(v_code_1098_);
v_params_1340_ = lean_ctor_get(v_decl_1338_, 2);
lean_inc_ref(v_params_1340_);
v_value_1341_ = lean_ctor_get(v_decl_1338_, 4);
lean_inc_ref(v_value_1341_);
lean_dec_ref(v_decl_1338_);
v___x_1347_ = lean_unsigned_to_nat(0u);
v___x_1348_ = lean_array_get_size(v_params_1340_);
v___x_1349_ = lean_nat_dec_lt(v___x_1347_, v___x_1348_);
if (v___x_1349_ == 0)
{
lean_dec_ref(v_params_1340_);
goto v___jp_1342_;
}
else
{
lean_object* v___x_1350_; uint8_t v___x_1351_; 
v___x_1350_ = lean_box(0);
v___x_1351_ = lean_nat_dec_le(v___x_1348_, v___x_1348_);
if (v___x_1351_ == 0)
{
if (v___x_1349_ == 0)
{
lean_dec_ref(v_params_1340_);
goto v___jp_1342_;
}
else
{
size_t v___x_1352_; size_t v___x_1353_; lean_object* v___x_1354_; 
v___x_1352_ = ((size_t)0ULL);
v___x_1353_ = lean_usize_of_nat(v___x_1348_);
v___x_1354_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__5___redArg(v_params_1340_, v___x_1352_, v___x_1353_, v___x_1350_, v_a_1099_);
lean_dec_ref(v_params_1340_);
v___y_1346_ = v___x_1354_;
goto v___jp_1345_;
}
}
else
{
size_t v___x_1355_; size_t v___x_1356_; lean_object* v___x_1357_; 
v___x_1355_ = ((size_t)0ULL);
v___x_1356_ = lean_usize_of_nat(v___x_1348_);
v___x_1357_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__5___redArg(v_params_1340_, v___x_1355_, v___x_1356_, v___x_1350_, v_a_1099_);
lean_dec_ref(v_params_1340_);
v___y_1346_ = v___x_1357_;
goto v___jp_1345_;
}
}
v___jp_1342_:
{
lean_object* v___x_1343_; 
v___x_1343_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(v_value_1341_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_, v_a_1103_);
if (lean_obj_tag(v___x_1343_) == 0)
{
lean_dec_ref(v___x_1343_);
v_code_1098_ = v_k_1339_;
goto _start;
}
else
{
lean_dec_ref(v_k_1339_);
return v___x_1343_;
}
}
v___jp_1345_:
{
if (lean_obj_tag(v___y_1346_) == 0)
{
lean_dec_ref(v___y_1346_);
goto v___jp_1342_;
}
else
{
lean_dec_ref(v_value_1341_);
lean_dec_ref(v_k_1339_);
return v___y_1346_;
}
}
}
case 3:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; 
lean_dec_ref(v_code_1098_);
v___x_1358_ = lean_box(0);
v___x_1359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1358_);
return v___x_1359_;
}
case 4:
{
lean_object* v_cases_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1382_; 
v_cases_1360_ = lean_ctor_get(v_code_1098_, 0);
v_isSharedCheck_1382_ = !lean_is_exclusive(v_code_1098_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1362_ = v_code_1098_;
v_isShared_1363_ = v_isSharedCheck_1382_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_cases_1360_);
lean_dec(v_code_1098_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1382_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v_alts_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; uint8_t v___x_1368_; 
v_alts_1364_ = lean_ctor_get(v_cases_1360_, 3);
lean_inc_ref(v_alts_1364_);
lean_dec_ref(v_cases_1360_);
v___x_1365_ = lean_unsigned_to_nat(0u);
v___x_1366_ = lean_array_get_size(v_alts_1364_);
v___x_1367_ = lean_box(0);
v___x_1368_ = lean_nat_dec_lt(v___x_1365_, v___x_1366_);
if (v___x_1368_ == 0)
{
lean_object* v___x_1370_; 
lean_dec_ref(v_alts_1364_);
if (v_isShared_1363_ == 0)
{
lean_ctor_set_tag(v___x_1362_, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1367_);
v___x_1370_ = v___x_1362_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v___x_1367_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
return v___x_1370_;
}
}
else
{
uint8_t v___x_1372_; 
v___x_1372_ = lean_nat_dec_le(v___x_1366_, v___x_1366_);
if (v___x_1372_ == 0)
{
if (v___x_1368_ == 0)
{
lean_object* v___x_1374_; 
lean_dec_ref(v_alts_1364_);
if (v_isShared_1363_ == 0)
{
lean_ctor_set_tag(v___x_1362_, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1367_);
v___x_1374_ = v___x_1362_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v___x_1367_);
v___x_1374_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1373_;
}
v_reusejp_1373_:
{
return v___x_1374_;
}
}
else
{
size_t v___x_1376_; size_t v___x_1377_; lean_object* v___x_1378_; 
lean_del_object(v___x_1362_);
v___x_1376_ = ((size_t)0ULL);
v___x_1377_ = lean_usize_of_nat(v___x_1366_);
v___x_1378_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__6(v_alts_1364_, v___x_1376_, v___x_1377_, v___x_1367_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_, v_a_1103_);
lean_dec_ref(v_alts_1364_);
return v___x_1378_;
}
}
else
{
size_t v___x_1379_; size_t v___x_1380_; lean_object* v___x_1381_; 
lean_del_object(v___x_1362_);
v___x_1379_ = ((size_t)0ULL);
v___x_1380_ = lean_usize_of_nat(v___x_1366_);
v___x_1381_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__6(v_alts_1364_, v___x_1379_, v___x_1380_, v___x_1367_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_, v_a_1103_);
lean_dec_ref(v_alts_1364_);
return v___x_1381_;
}
}
}
}
case 5:
{
lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1390_; 
v_isSharedCheck_1390_ = !lean_is_exclusive(v_code_1098_);
if (v_isSharedCheck_1390_ == 0)
{
lean_object* v_unused_1391_; 
v_unused_1391_ = lean_ctor_get(v_code_1098_, 0);
lean_dec(v_unused_1391_);
v___x_1384_ = v_code_1098_;
v_isShared_1385_ = v_isSharedCheck_1390_;
goto v_resetjp_1383_;
}
else
{
lean_dec(v_code_1098_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1390_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1386_; lean_object* v___x_1388_; 
v___x_1386_ = lean_box(0);
if (v_isShared_1385_ == 0)
{
lean_ctor_set_tag(v___x_1384_, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1386_);
v___x_1388_ = v___x_1384_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1389_; 
v_reuseFailAlloc_1389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1389_, 0, v___x_1386_);
v___x_1388_ = v_reuseFailAlloc_1389_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
return v___x_1388_;
}
}
}
case 6:
{
lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1399_; 
v_isSharedCheck_1399_ = !lean_is_exclusive(v_code_1098_);
if (v_isSharedCheck_1399_ == 0)
{
lean_object* v_unused_1400_; 
v_unused_1400_ = lean_ctor_get(v_code_1098_, 0);
lean_dec(v_unused_1400_);
v___x_1393_ = v_code_1098_;
v_isShared_1394_ = v_isSharedCheck_1399_;
goto v_resetjp_1392_;
}
else
{
lean_dec(v_code_1098_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1399_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1395_; lean_object* v___x_1397_; 
v___x_1395_ = lean_box(0);
if (v_isShared_1394_ == 0)
{
lean_ctor_set_tag(v___x_1393_, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1395_);
v___x_1397_ = v___x_1393_;
goto v_reusejp_1396_;
}
else
{
lean_object* v_reuseFailAlloc_1398_; 
v_reuseFailAlloc_1398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1398_, 0, v___x_1395_);
v___x_1397_ = v_reuseFailAlloc_1398_;
goto v_reusejp_1396_;
}
v_reusejp_1396_:
{
return v___x_1397_;
}
}
}
case 8:
{
lean_object* v_k_1401_; 
v_k_1401_ = lean_ctor_get(v_code_1098_, 3);
lean_inc_ref(v_k_1401_);
lean_dec_ref(v_code_1098_);
v_code_1098_ = v_k_1401_;
goto _start;
}
case 9:
{
lean_object* v_k_1403_; 
v_k_1403_ = lean_ctor_get(v_code_1098_, 5);
lean_inc_ref(v_k_1403_);
lean_dec_ref(v_code_1098_);
v_code_1098_ = v_k_1403_;
goto _start;
}
default: 
{
lean_object* v___x_1405_; lean_object* v___x_1406_; 
lean_dec_ref(v_code_1098_);
v___x_1405_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__7, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__7_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__7);
v___x_1406_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7(v___x_1405_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_, v_a_1103_);
return v___x_1406_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___boxed(lean_object* v_code_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_){
_start:
{
lean_object* v_res_1414_; 
v_res_1414_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(v_code_1407_, v_a_1408_, v_a_1409_, v_a_1410_, v_a_1411_, v_a_1412_);
lean_dec(v_a_1412_);
lean_dec_ref(v_a_1411_);
lean_dec(v_a_1410_);
lean_dec_ref(v_a_1409_);
lean_dec(v_a_1408_);
return v_res_1414_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__6(lean_object* v_as_1415_, size_t v_i_1416_, size_t v_stop_1417_, lean_object* v_b_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_){
_start:
{
uint8_t v___x_1425_; 
v___x_1425_ = lean_usize_dec_eq(v_i_1416_, v_stop_1417_);
if (v___x_1425_ == 0)
{
lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
v___x_1426_ = lean_array_uget_borrowed(v_as_1415_, v_i_1416_);
v___x_1427_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___boxed), 7, 0);
lean_inc(v___x_1426_);
v___x_1428_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__4___redArg(v___x_1426_, v___x_1427_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_, v___y_1423_);
if (lean_obj_tag(v___x_1428_) == 0)
{
lean_object* v_a_1429_; size_t v___x_1430_; size_t v___x_1431_; 
v_a_1429_ = lean_ctor_get(v___x_1428_, 0);
lean_inc(v_a_1429_);
lean_dec_ref(v___x_1428_);
v___x_1430_ = ((size_t)1ULL);
v___x_1431_ = lean_usize_add(v_i_1416_, v___x_1430_);
v_i_1416_ = v___x_1431_;
v_b_1418_ = v_a_1429_;
goto _start;
}
else
{
return v___x_1428_;
}
}
else
{
lean_object* v___x_1433_; 
v___x_1433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1433_, 0, v_b_1418_);
return v___x_1433_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__6___boxed(lean_object* v_as_1434_, lean_object* v_i_1435_, lean_object* v_stop_1436_, lean_object* v_b_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_){
_start:
{
size_t v_i_boxed_1444_; size_t v_stop_boxed_1445_; lean_object* v_res_1446_; 
v_i_boxed_1444_ = lean_unbox_usize(v_i_1435_);
lean_dec(v_i_1435_);
v_stop_boxed_1445_ = lean_unbox_usize(v_stop_1436_);
lean_dec(v_stop_1436_);
v_res_1446_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__6(v_as_1434_, v_i_boxed_1444_, v_stop_boxed_1445_, v_b_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1441_);
lean_dec(v___y_1440_);
lean_dec_ref(v___y_1439_);
lean_dec(v___y_1438_);
lean_dec_ref(v_as_1434_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0(lean_object* v_00_u03b2_1447_, lean_object* v_m_1448_, lean_object* v_a_1449_, lean_object* v_b_1450_){
_start:
{
lean_object* v___x_1451_; 
v___x_1451_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(v_m_1448_, v_a_1449_, v_b_1450_);
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2(lean_object* v_00_u03b2_1452_, lean_object* v_m_1453_, lean_object* v_a_1454_, lean_object* v_b_1455_){
_start:
{
lean_object* v___x_1456_; 
v___x_1456_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2___redArg(v_m_1453_, v_a_1454_, v_b_1455_);
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__5(lean_object* v_as_1457_, size_t v_i_1458_, size_t v_stop_1459_, lean_object* v_b_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_){
_start:
{
lean_object* v___x_1467_; 
v___x_1467_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__5___redArg(v_as_1457_, v_i_1458_, v_stop_1459_, v_b_1460_, v___y_1461_);
return v___x_1467_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__5___boxed(lean_object* v_as_1468_, lean_object* v_i_1469_, lean_object* v_stop_1470_, lean_object* v_b_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_){
_start:
{
size_t v_i_boxed_1478_; size_t v_stop_boxed_1479_; lean_object* v_res_1480_; 
v_i_boxed_1478_ = lean_unbox_usize(v_i_1469_);
lean_dec(v_i_1469_);
v_stop_boxed_1479_ = lean_unbox_usize(v_stop_1470_);
lean_dec(v_stop_1470_);
v_res_1480_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__5(v_as_1468_, v_i_boxed_1478_, v_stop_boxed_1479_, v_b_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec(v___y_1474_);
lean_dec_ref(v___y_1473_);
lean_dec(v___y_1472_);
lean_dec_ref(v_as_1468_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0(lean_object* v_00_u03b2_1481_, lean_object* v_data_1482_){
_start:
{
lean_object* v___x_1483_; 
v___x_1483_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0___redArg(v_data_1482_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2_spec__4(lean_object* v_00_u03b2_1484_, lean_object* v_a_1485_, lean_object* v_b_1486_, lean_object* v_x_1487_){
_start:
{
lean_object* v___x_1488_; 
v___x_1488_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2_spec__4___redArg(v_a_1485_, v_b_1486_, v_x_1487_);
return v___x_1488_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_1489_, lean_object* v_i_1490_, lean_object* v_source_1491_, lean_object* v_target_1492_){
_start:
{
lean_object* v___x_1493_; 
v___x_1493_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0_spec__3___redArg(v_i_1490_, v_source_1491_, v_target_1492_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0_spec__3_spec__9(lean_object* v_00_u03b2_1494_, lean_object* v_x_1495_, lean_object* v_x_1496_){
_start:
{
lean_object* v___x_1497_; 
v___x_1497_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0_spec__0_spec__3_spec__9___redArg(v_x_1495_, v_x_1496_);
return v___x_1497_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect_go(lean_object* v_ps_1498_, lean_object* v_code_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_, lean_object* v_a_1503_, lean_object* v_a_1504_){
_start:
{
lean_object* v___y_1507_; lean_object* v___x_1509_; lean_object* v___x_1510_; uint8_t v___x_1511_; 
v___x_1509_ = lean_unsigned_to_nat(0u);
v___x_1510_ = lean_array_get_size(v_ps_1498_);
v___x_1511_ = lean_nat_dec_lt(v___x_1509_, v___x_1510_);
if (v___x_1511_ == 0)
{
lean_object* v___x_1512_; 
v___x_1512_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(v_code_1499_, v_a_1500_, v_a_1501_, v_a_1502_, v_a_1503_, v_a_1504_);
return v___x_1512_;
}
else
{
lean_object* v___x_1513_; uint8_t v___x_1514_; 
v___x_1513_ = lean_box(0);
v___x_1514_ = lean_nat_dec_le(v___x_1510_, v___x_1510_);
if (v___x_1514_ == 0)
{
if (v___x_1511_ == 0)
{
lean_object* v___x_1515_; 
v___x_1515_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(v_code_1499_, v_a_1500_, v_a_1501_, v_a_1502_, v_a_1503_, v_a_1504_);
return v___x_1515_;
}
else
{
size_t v___x_1516_; size_t v___x_1517_; lean_object* v___x_1518_; 
v___x_1516_ = ((size_t)0ULL);
v___x_1517_ = lean_usize_of_nat(v___x_1510_);
v___x_1518_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__5___redArg(v_ps_1498_, v___x_1516_, v___x_1517_, v___x_1513_, v_a_1500_);
v___y_1507_ = v___x_1518_;
goto v___jp_1506_;
}
}
else
{
size_t v___x_1519_; size_t v___x_1520_; lean_object* v___x_1521_; 
v___x_1519_ = ((size_t)0ULL);
v___x_1520_ = lean_usize_of_nat(v___x_1510_);
v___x_1521_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__5___redArg(v_ps_1498_, v___x_1519_, v___x_1520_, v___x_1513_, v_a_1500_);
v___y_1507_ = v___x_1521_;
goto v___jp_1506_;
}
}
v___jp_1506_:
{
if (lean_obj_tag(v___y_1507_) == 0)
{
lean_object* v___x_1508_; 
lean_dec_ref(v___y_1507_);
v___x_1508_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(v_code_1499_, v_a_1500_, v_a_1501_, v_a_1502_, v_a_1503_, v_a_1504_);
return v___x_1508_;
}
else
{
lean_dec_ref(v_code_1499_);
return v___y_1507_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect_go___boxed(lean_object* v_ps_1522_, lean_object* v_code_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_){
_start:
{
lean_object* v_res_1530_; 
v_res_1530_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect_go(v_ps_1522_, v_code_1523_, v_a_1524_, v_a_1525_, v_a_1526_, v_a_1527_, v_a_1528_);
lean_dec(v_a_1528_);
lean_dec_ref(v_a_1527_);
lean_dec(v_a_1526_);
lean_dec_ref(v_a_1525_);
lean_dec(v_a_1524_);
lean_dec_ref(v_ps_1522_);
return v_res_1530_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__0(void){
_start:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1531_ = lean_box(0);
v___x_1532_ = lean_unsigned_to_nat(16u);
v___x_1533_ = lean_mk_array(v___x_1532_, v___x_1531_);
return v___x_1533_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__1(void){
_start:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1534_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__0);
v___x_1535_ = lean_unsigned_to_nat(0u);
v___x_1536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1536_, 0, v___x_1535_);
lean_ctor_set(v___x_1536_, 1, v___x_1534_);
return v___x_1536_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__2(void){
_start:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___x_1537_ = l_Lean_instEmptyCollectionFVarIdHashSet;
v___x_1538_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__1, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__1);
v___x_1539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1539_, 0, v___x_1538_);
lean_ctor_set(v___x_1539_, 1, v___x_1537_);
return v___x_1539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect(lean_object* v_ps_1540_, lean_object* v_code_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_){
_start:
{
lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1547_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__2);
v___x_1548_ = lean_st_mk_ref(v___x_1547_);
v___x_1549_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect_go(v_ps_1540_, v_code_1541_, v___x_1548_, v_a_1542_, v_a_1543_, v_a_1544_, v_a_1545_);
if (lean_obj_tag(v___x_1549_) == 0)
{
lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1566_; 
v_isSharedCheck_1566_ = !lean_is_exclusive(v___x_1549_);
if (v_isSharedCheck_1566_ == 0)
{
lean_object* v_unused_1567_; 
v_unused_1567_ = lean_ctor_get(v___x_1549_, 0);
lean_dec(v_unused_1567_);
v___x_1551_ = v___x_1549_;
v_isShared_1552_ = v_isSharedCheck_1566_;
goto v_resetjp_1550_;
}
else
{
lean_dec(v___x_1549_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1566_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
lean_object* v___x_1553_; lean_object* v_varMap_1554_; lean_object* v_borrowedValues_1555_; lean_object* v___x_1557_; uint8_t v_isShared_1558_; uint8_t v_isSharedCheck_1565_; 
v___x_1553_ = lean_st_ref_get(v___x_1548_);
lean_dec(v___x_1548_);
v_varMap_1554_ = lean_ctor_get(v___x_1553_, 0);
v_borrowedValues_1555_ = lean_ctor_get(v___x_1553_, 1);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1557_ = v___x_1553_;
v_isShared_1558_ = v_isSharedCheck_1565_;
goto v_resetjp_1556_;
}
else
{
lean_inc(v_borrowedValues_1555_);
lean_inc(v_varMap_1554_);
lean_dec(v___x_1553_);
v___x_1557_ = lean_box(0);
v_isShared_1558_ = v_isSharedCheck_1565_;
goto v_resetjp_1556_;
}
v_resetjp_1556_:
{
lean_object* v___x_1560_; 
if (v_isShared_1558_ == 0)
{
v___x_1560_ = v___x_1557_;
goto v_reusejp_1559_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_varMap_1554_);
lean_ctor_set(v_reuseFailAlloc_1564_, 1, v_borrowedValues_1555_);
v___x_1560_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1559_;
}
v_reusejp_1559_:
{
lean_object* v___x_1562_; 
if (v_isShared_1552_ == 0)
{
lean_ctor_set(v___x_1551_, 0, v___x_1560_);
v___x_1562_ = v___x_1551_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v___x_1560_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
return v___x_1562_;
}
}
}
}
}
else
{
lean_object* v_a_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1575_; 
lean_dec(v___x_1548_);
v_a_1568_ = lean_ctor_get(v___x_1549_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v___x_1549_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1570_ = v___x_1549_;
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
else
{
lean_inc(v_a_1568_);
lean_dec(v___x_1549_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___boxed(lean_object* v_ps_1576_, lean_object* v_code_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect(v_ps_1576_, v_code_1577_, v_a_1578_, v_a_1579_, v_a_1580_, v_a_1581_);
lean_dec(v_a_1581_);
lean_dec_ref(v_a_1580_);
lean_dec(v_a_1579_);
lean_dec_ref(v_a_1578_);
lean_dec_ref(v_ps_1576_);
return v_res_1583_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0(void){
_start:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1589_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__1, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__1);
v___x_1590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1590_, 0, v___x_1589_);
lean_ctor_set(v___x_1590_, 1, v___x_1589_);
return v___x_1590_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default(void){
_start:
{
lean_object* v___x_1591_; 
v___x_1591_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
return v___x_1591_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars(void){
_start:
{
lean_object* v___x_1592_; 
v___x_1592_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default;
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___lam__0(lean_object* v___x_1593_, lean_object* v___x_1594_, lean_object* v_a_1595_, lean_object* v_b_1596_, lean_object* v_acc_1597_){
_start:
{
lean_object* v_r_1598_; lean_object* v___x_1599_; 
v_r_1598_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_1593_, v___x_1594_, v_acc_1597_, v_a_1595_, v_b_1596_);
v___x_1599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1599_, 0, v_r_1598_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___lam__1(lean_object* v___x_1600_, lean_object* v___f_1601_, lean_object* v_a_1602_, lean_object* v_x_1603_, lean_object* v___y_1604_){
_start:
{
lean_object* v___x_1605_; 
v___x_1605_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go(lean_box(0), lean_box(0), lean_box(0), lean_box(0), v___x_1600_, v___f_1601_, v_a_1602_, v___y_1604_);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union(lean_object* v_liveVars1_1614_, lean_object* v_liveVars2_1615_){
_start:
{
lean_object* v_vars_1616_; lean_object* v_vars_1617_; lean_object* v_borrows_1618_; lean_object* v_borrows_1619_; lean_object* v___x_1621_; uint8_t v_isShared_1622_; uint8_t v_isSharedCheck_1655_; 
v_vars_1616_ = lean_ctor_get(v_liveVars1_1614_, 0);
lean_inc_ref(v_vars_1616_);
v_vars_1617_ = lean_ctor_get(v_liveVars2_1615_, 0);
lean_inc_ref(v_vars_1617_);
v_borrows_1618_ = lean_ctor_get(v_liveVars1_1614_, 1);
lean_inc_ref(v_borrows_1618_);
lean_dec_ref(v_liveVars1_1614_);
v_borrows_1619_ = lean_ctor_get(v_liveVars2_1615_, 1);
v_isSharedCheck_1655_ = !lean_is_exclusive(v_liveVars2_1615_);
if (v_isSharedCheck_1655_ == 0)
{
lean_object* v_unused_1656_; 
v_unused_1656_ = lean_ctor_get(v_liveVars2_1615_, 0);
lean_dec(v_unused_1656_);
v___x_1621_ = v_liveVars2_1615_;
v_isShared_1622_ = v_isSharedCheck_1655_;
goto v_resetjp_1620_;
}
else
{
lean_inc(v_borrows_1619_);
lean_dec(v_liveVars2_1615_);
v___x_1621_ = lean_box(0);
v_isShared_1622_ = v_isSharedCheck_1655_;
goto v_resetjp_1620_;
}
v_resetjp_1620_:
{
lean_object* v_size_1623_; lean_object* v_buckets_1624_; lean_object* v_size_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___y_1629_; uint8_t v___x_1647_; 
v_size_1623_ = lean_ctor_get(v_vars_1616_, 0);
v_buckets_1624_ = lean_ctor_get(v_vars_1616_, 1);
v_size_1625_ = lean_ctor_get(v_vars_1617_, 0);
v___x_1626_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1627_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1647_ = lean_nat_dec_le(v_size_1623_, v_size_1625_);
if (v___x_1647_ == 0)
{
lean_object* v___f_1648_; lean_object* v___x_1649_; 
v___f_1648_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__1));
v___x_1649_ = l_Std_DHashMap_Internal_Raw_u2080_insertMany___redArg(v___f_1648_, v___x_1626_, v___x_1627_, v_vars_1616_, v_vars_1617_);
v___y_1629_ = v___x_1649_;
goto v___jp_1628_;
}
else
{
lean_object* v___x_1650_; lean_object* v___f_1651_; size_t v_sz_1652_; size_t v___x_1653_; lean_object* v___x_1654_; 
lean_inc_ref(v_buckets_1624_);
lean_dec_ref(v_vars_1616_);
v___x_1650_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11));
v___f_1651_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__2));
v_sz_1652_ = lean_array_size(v_buckets_1624_);
v___x_1653_ = ((size_t)0ULL);
v___x_1654_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1650_, v_buckets_1624_, v___f_1651_, v_sz_1652_, v___x_1653_, v_vars_1617_);
v___y_1629_ = v___x_1654_;
goto v___jp_1628_;
}
v___jp_1628_:
{
lean_object* v_size_1630_; lean_object* v_buckets_1631_; lean_object* v_size_1632_; uint8_t v___x_1633_; 
v_size_1630_ = lean_ctor_get(v_borrows_1618_, 0);
v_buckets_1631_ = lean_ctor_get(v_borrows_1618_, 1);
v_size_1632_ = lean_ctor_get(v_borrows_1619_, 0);
v___x_1633_ = lean_nat_dec_le(v_size_1630_, v_size_1632_);
if (v___x_1633_ == 0)
{
lean_object* v___f_1634_; lean_object* v___x_1635_; lean_object* v___x_1637_; 
v___f_1634_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__1));
v___x_1635_ = l_Std_DHashMap_Internal_Raw_u2080_insertMany___redArg(v___f_1634_, v___x_1626_, v___x_1627_, v_borrows_1618_, v_borrows_1619_);
if (v_isShared_1622_ == 0)
{
lean_ctor_set(v___x_1621_, 1, v___x_1635_);
lean_ctor_set(v___x_1621_, 0, v___y_1629_);
v___x_1637_ = v___x_1621_;
goto v_reusejp_1636_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1638_, 0, v___y_1629_);
lean_ctor_set(v_reuseFailAlloc_1638_, 1, v___x_1635_);
v___x_1637_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1636_;
}
v_reusejp_1636_:
{
return v___x_1637_;
}
}
else
{
lean_object* v___x_1639_; lean_object* v___f_1640_; size_t v_sz_1641_; size_t v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1645_; 
lean_inc_ref(v_buckets_1631_);
lean_dec_ref(v_borrows_1618_);
v___x_1639_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11));
v___f_1640_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__2));
v_sz_1641_ = lean_array_size(v_buckets_1631_);
v___x_1642_ = ((size_t)0ULL);
v___x_1643_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1639_, v_buckets_1631_, v___f_1640_, v_sz_1641_, v___x_1642_, v_borrows_1619_);
if (v_isShared_1622_ == 0)
{
lean_ctor_set(v___x_1621_, 1, v___x_1643_);
lean_ctor_set(v___x_1621_, 0, v___y_1629_);
v___x_1645_ = v___x_1621_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v___y_1629_);
lean_ctor_set(v_reuseFailAlloc_1646_, 1, v___x_1643_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_erase(lean_object* v_liveVars_1657_, lean_object* v_fvarId_1658_){
_start:
{
lean_object* v_vars_1659_; lean_object* v_borrows_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1671_; 
v_vars_1659_ = lean_ctor_get(v_liveVars_1657_, 0);
v_borrows_1660_ = lean_ctor_get(v_liveVars_1657_, 1);
v_isSharedCheck_1671_ = !lean_is_exclusive(v_liveVars_1657_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1662_ = v_liveVars_1657_;
v_isShared_1663_ = v_isSharedCheck_1671_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_borrows_1660_);
lean_inc(v_vars_1659_);
lean_dec(v_liveVars_1657_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1671_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v_vars_1666_; lean_object* v_borrows_1667_; lean_object* v___x_1669_; 
v___x_1664_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1665_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
lean_inc(v_fvarId_1658_);
v_vars_1666_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_1664_, v___x_1665_, v_vars_1659_, v_fvarId_1658_);
v_borrows_1667_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_1664_, v___x_1665_, v_borrows_1660_, v_fvarId_1658_);
if (v_isShared_1663_ == 0)
{
lean_ctor_set(v___x_1662_, 1, v_borrows_1667_);
lean_ctor_set(v___x_1662_, 0, v_vars_1666_);
v___x_1669_ = v___x_1662_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_vars_1666_);
lean_ctor_set(v_reuseFailAlloc_1670_, 1, v_borrows_1667_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_insertBorrow(lean_object* v_liveVars_1672_, lean_object* v_fvarId_1673_){
_start:
{
lean_object* v_vars_1674_; lean_object* v_borrows_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1686_; 
v_vars_1674_ = lean_ctor_get(v_liveVars_1672_, 0);
v_borrows_1675_ = lean_ctor_get(v_liveVars_1672_, 1);
v_isSharedCheck_1686_ = !lean_is_exclusive(v_liveVars_1672_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1677_ = v_liveVars_1672_;
v_isShared_1678_ = v_isSharedCheck_1686_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_borrows_1675_);
lean_inc(v_vars_1674_);
lean_dec(v_liveVars_1672_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1686_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1684_; 
v___x_1679_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1680_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1681_ = lean_box(0);
v___x_1682_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_1679_, v___x_1680_, v_borrows_1675_, v_fvarId_1673_, v___x_1681_);
if (v_isShared_1678_ == 0)
{
lean_ctor_set(v___x_1677_, 1, v___x_1682_);
v___x_1684_ = v___x_1677_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_vars_1674_);
lean_ctor_set(v_reuseFailAlloc_1685_, 1, v___x_1682_);
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
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_insertLive(lean_object* v_liveVars_1687_, lean_object* v_fvarId_1688_){
_start:
{
lean_object* v_vars_1689_; lean_object* v_borrows_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1701_; 
v_vars_1689_ = lean_ctor_get(v_liveVars_1687_, 0);
v_borrows_1690_ = lean_ctor_get(v_liveVars_1687_, 1);
v_isSharedCheck_1701_ = !lean_is_exclusive(v_liveVars_1687_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1692_ = v_liveVars_1687_;
v_isShared_1693_ = v_isSharedCheck_1701_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_borrows_1690_);
lean_inc(v_vars_1689_);
lean_dec(v_liveVars_1687_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1701_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1699_; 
v___x_1694_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1695_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1696_ = lean_box(0);
v___x_1697_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_1694_, v___x_1695_, v_vars_1689_, v_fvarId_1688_, v___x_1696_);
if (v_isShared_1693_ == 0)
{
lean_ctor_set(v___x_1692_, 0, v___x_1697_);
v___x_1699_ = v___x_1692_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v___x_1697_);
lean_ctor_set(v_reuseFailAlloc_1700_, 1, v_borrows_1690_);
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
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg(lean_object* v_fvarId_1703_, lean_object* v_a_1704_){
_start:
{
lean_object* v_varMap_1706_; lean_object* v___f_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; 
v_varMap_1706_ = lean_ctor_get(v_a_1704_, 2);
v___f_1707_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg___closed__0));
v___x_1708_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_varMap_1706_);
v___x_1709_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___redArg(v___f_1707_, v___x_1708_, v_varMap_1706_, v_fvarId_1703_);
v___x_1710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1710_, 0, v___x_1709_);
return v___x_1710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg___boxed(lean_object* v_fvarId_1711_, lean_object* v_a_1712_, lean_object* v_a_1713_){
_start:
{
lean_object* v_res_1714_; 
v_res_1714_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg(v_fvarId_1711_, v_a_1712_);
lean_dec_ref(v_a_1712_);
return v_res_1714_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo(lean_object* v_fvarId_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_, lean_object* v_a_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_){
_start:
{
lean_object* v_varMap_1723_; lean_object* v___f_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; 
v_varMap_1723_ = lean_ctor_get(v_a_1716_, 2);
v___f_1724_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg___closed__0));
v___x_1725_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_varMap_1723_);
v___x_1726_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___redArg(v___f_1724_, v___x_1725_, v_varMap_1723_, v_fvarId_1715_);
v___x_1727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1727_, 0, v___x_1726_);
return v___x_1727_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___boxed(lean_object* v_fvarId_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_){
_start:
{
lean_object* v_res_1736_; 
v_res_1736_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo(v_fvarId_1728_, v_a_1729_, v_a_1730_, v_a_1731_, v_a_1732_, v_a_1733_, v_a_1734_);
lean_dec(v_a_1734_);
lean_dec_ref(v_a_1733_);
lean_dec(v_a_1732_);
lean_dec_ref(v_a_1731_);
lean_dec(v_a_1730_);
lean_dec_ref(v_a_1729_);
return v_res_1736_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars___redArg(lean_object* v_fvarId_1737_, lean_object* v_a_1738_){
_start:
{
lean_object* v_jpLiveVarMap_1740_; lean_object* v___f_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
v_jpLiveVarMap_1740_ = lean_ctor_get(v_a_1738_, 3);
v___f_1741_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg___closed__0));
v___x_1742_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default;
lean_inc(v_jpLiveVarMap_1740_);
v___x_1743_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___redArg(v___f_1741_, v___x_1742_, v_jpLiveVarMap_1740_, v_fvarId_1737_);
v___x_1744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1744_, 0, v___x_1743_);
return v___x_1744_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars___redArg___boxed(lean_object* v_fvarId_1745_, lean_object* v_a_1746_, lean_object* v_a_1747_){
_start:
{
lean_object* v_res_1748_; 
v_res_1748_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars___redArg(v_fvarId_1745_, v_a_1746_);
lean_dec_ref(v_a_1746_);
return v_res_1748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars(lean_object* v_fvarId_1749_, lean_object* v_a_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_, lean_object* v_a_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_){
_start:
{
lean_object* v_jpLiveVarMap_1757_; lean_object* v___f_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
v_jpLiveVarMap_1757_ = lean_ctor_get(v_a_1750_, 3);
v___f_1758_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg___closed__0));
v___x_1759_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default;
lean_inc(v_jpLiveVarMap_1757_);
v___x_1760_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___redArg(v___f_1758_, v___x_1759_, v_jpLiveVarMap_1757_, v_fvarId_1749_);
v___x_1761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1761_, 0, v___x_1760_);
return v___x_1761_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars___boxed(lean_object* v_fvarId_1762_, lean_object* v_a_1763_, lean_object* v_a_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_, lean_object* v_a_1769_){
_start:
{
lean_object* v_res_1770_; 
v_res_1770_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars(v_fvarId_1762_, v_a_1763_, v_a_1764_, v_a_1765_, v_a_1766_, v_a_1767_, v_a_1768_);
lean_dec(v_a_1768_);
lean_dec_ref(v_a_1767_);
lean_dec(v_a_1766_);
lean_dec_ref(v_a_1765_);
lean_dec(v_a_1764_);
lean_dec_ref(v_a_1763_);
return v_res_1770_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive___redArg(lean_object* v_fvarId_1771_, lean_object* v_a_1772_){
_start:
{
lean_object* v___x_1774_; lean_object* v_vars_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; uint8_t v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; 
v___x_1774_ = lean_st_ref_get(v_a_1772_);
v_vars_1775_ = lean_ctor_get(v___x_1774_, 0);
lean_inc_ref(v_vars_1775_);
lean_dec(v___x_1774_);
v___x_1776_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1777_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1778_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1776_, v___x_1777_, v_vars_1775_, v_fvarId_1771_);
lean_dec_ref(v_vars_1775_);
v___x_1779_ = lean_box(v___x_1778_);
v___x_1780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1779_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive___redArg___boxed(lean_object* v_fvarId_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_){
_start:
{
lean_object* v_res_1784_; 
v_res_1784_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive___redArg(v_fvarId_1781_, v_a_1782_);
lean_dec(v_a_1782_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive(lean_object* v_fvarId_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_){
_start:
{
lean_object* v___x_1793_; lean_object* v_vars_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; uint8_t v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; 
v___x_1793_ = lean_st_ref_get(v_a_1787_);
v_vars_1794_ = lean_ctor_get(v___x_1793_, 0);
lean_inc_ref(v_vars_1794_);
lean_dec(v___x_1793_);
v___x_1795_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1796_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1797_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1795_, v___x_1796_, v_vars_1794_, v_fvarId_1785_);
lean_dec_ref(v_vars_1794_);
v___x_1798_ = lean_box(v___x_1797_);
v___x_1799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1798_);
return v___x_1799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive___boxed(lean_object* v_fvarId_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_){
_start:
{
lean_object* v_res_1808_; 
v_res_1808_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive(v_fvarId_1800_, v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_);
lean_dec(v_a_1806_);
lean_dec_ref(v_a_1805_);
lean_dec(v_a_1804_);
lean_dec_ref(v_a_1803_);
lean_dec(v_a_1802_);
lean_dec_ref(v_a_1801_);
return v_res_1808_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed___redArg(lean_object* v_fvarId_1809_, lean_object* v_a_1810_){
_start:
{
lean_object* v___x_1812_; lean_object* v_borrows_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; uint8_t v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1812_ = lean_st_ref_get(v_a_1810_);
v_borrows_1813_ = lean_ctor_get(v___x_1812_, 1);
lean_inc_ref(v_borrows_1813_);
lean_dec(v___x_1812_);
v___x_1814_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1815_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1816_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1814_, v___x_1815_, v_borrows_1813_, v_fvarId_1809_);
lean_dec_ref(v_borrows_1813_);
v___x_1817_ = lean_box(v___x_1816_);
v___x_1818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1818_, 0, v___x_1817_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed___redArg___boxed(lean_object* v_fvarId_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_){
_start:
{
lean_object* v_res_1822_; 
v_res_1822_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed___redArg(v_fvarId_1819_, v_a_1820_);
lean_dec(v_a_1820_);
return v_res_1822_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed(lean_object* v_fvarId_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_){
_start:
{
lean_object* v___x_1831_; lean_object* v_borrows_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; uint8_t v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1831_ = lean_st_ref_get(v_a_1825_);
v_borrows_1832_ = lean_ctor_get(v___x_1831_, 1);
lean_inc_ref(v_borrows_1832_);
lean_dec(v___x_1831_);
v___x_1833_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1834_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1835_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1833_, v___x_1834_, v_borrows_1832_, v_fvarId_1823_);
lean_dec_ref(v_borrows_1832_);
v___x_1836_ = lean_box(v___x_1835_);
v___x_1837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1836_);
return v___x_1837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed___boxed(lean_object* v_fvarId_1838_, lean_object* v_a_1839_, lean_object* v_a_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_){
_start:
{
lean_object* v_res_1846_; 
v_res_1846_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed(v_fvarId_1838_, v_a_1839_, v_a_1840_, v_a_1841_, v_a_1842_, v_a_1843_, v_a_1844_);
lean_dec(v_a_1844_);
lean_dec_ref(v_a_1843_);
lean_dec(v_a_1842_);
lean_dec_ref(v_a_1841_);
lean_dec(v_a_1840_);
lean_dec_ref(v_a_1839_);
return v_res_1846_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive___redArg(lean_object* v_f_1847_, lean_object* v_a_1848_){
_start:
{
lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; 
v___x_1850_ = lean_st_ref_take(v_a_1848_);
v___x_1851_ = lean_apply_1(v_f_1847_, v___x_1850_);
v___x_1852_ = lean_st_ref_set(v_a_1848_, v___x_1851_);
v___x_1853_ = lean_box(0);
v___x_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1853_);
return v___x_1854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive___redArg___boxed(lean_object* v_f_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_){
_start:
{
lean_object* v_res_1858_; 
v_res_1858_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive___redArg(v_f_1855_, v_a_1856_);
lean_dec(v_a_1856_);
return v_res_1858_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive(lean_object* v_f_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_){
_start:
{
lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; 
v___x_1867_ = lean_st_ref_take(v_a_1861_);
v___x_1868_ = lean_apply_1(v_f_1859_, v___x_1867_);
v___x_1869_ = lean_st_ref_set(v_a_1861_, v___x_1868_);
v___x_1870_ = lean_box(0);
v___x_1871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1871_, 0, v___x_1870_);
return v___x_1871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive___boxed(lean_object* v_f_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_){
_start:
{
lean_object* v_res_1880_; 
v_res_1880_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive(v_f_1872_, v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_, v_a_1878_);
lean_dec(v_a_1878_);
lean_dec_ref(v_a_1877_);
lean_dec(v_a_1876_);
lean_dec_ref(v_a_1875_);
lean_dec(v_a_1874_);
lean_dec_ref(v_a_1873_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___lam__0(lean_object* v_x1_1881_, lean_object* v_x2_1882_){
_start:
{
lean_object* v_borrowedValues_1883_; lean_object* v_derivedValMap_1884_; lean_object* v_varMap_1885_; lean_object* v_jpLiveVarMap_1886_; lean_object* v_idx_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1903_; 
v_borrowedValues_1883_ = lean_ctor_get(v_x1_1881_, 0);
v_derivedValMap_1884_ = lean_ctor_get(v_x1_1881_, 1);
v_varMap_1885_ = lean_ctor_get(v_x1_1881_, 2);
v_jpLiveVarMap_1886_ = lean_ctor_get(v_x1_1881_, 3);
v_idx_1887_ = lean_ctor_get(v_x1_1881_, 4);
v_isSharedCheck_1903_ = !lean_is_exclusive(v_x1_1881_);
if (v_isSharedCheck_1903_ == 0)
{
v___x_1889_ = v_x1_1881_;
v_isShared_1890_ = v_isSharedCheck_1903_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_idx_1887_);
lean_inc(v_jpLiveVarMap_1886_);
lean_inc(v_varMap_1885_);
lean_inc(v_derivedValMap_1884_);
lean_inc(v_borrowedValues_1883_);
lean_dec(v_x1_1881_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1903_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v_fvarId_1891_; lean_object* v_type_1892_; uint8_t v___x_1893_; uint8_t v___x_1894_; uint8_t v___x_1895_; lean_object* v___x_1896_; lean_object* v_varMap_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1901_; 
v_fvarId_1891_ = lean_ctor_get(v_x2_1882_, 0);
lean_inc(v_fvarId_1891_);
v_type_1892_ = lean_ctor_get(v_x2_1882_, 2);
lean_inc_ref(v_type_1892_);
lean_dec_ref(v_x2_1882_);
v___x_1893_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_1892_);
v___x_1894_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v_type_1892_);
lean_dec_ref(v_type_1892_);
v___x_1895_ = 0;
lean_inc(v_idx_1887_);
v___x_1896_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_1896_, 0, v_idx_1887_);
lean_ctor_set_uint8(v___x_1896_, sizeof(void*)*1, v___x_1893_);
lean_ctor_set_uint8(v___x_1896_, sizeof(void*)*1 + 1, v___x_1894_);
lean_ctor_set_uint8(v___x_1896_, sizeof(void*)*1 + 2, v___x_1895_);
v_varMap_1897_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_1891_, v___x_1896_, v_varMap_1885_);
v___x_1898_ = lean_unsigned_to_nat(1u);
v___x_1899_ = lean_nat_add(v_idx_1887_, v___x_1898_);
lean_dec(v_idx_1887_);
if (v_isShared_1890_ == 0)
{
lean_ctor_set(v___x_1889_, 4, v___x_1899_);
lean_ctor_set(v___x_1889_, 2, v_varMap_1897_);
v___x_1901_ = v___x_1889_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1902_; 
v_reuseFailAlloc_1902_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1902_, 0, v_borrowedValues_1883_);
lean_ctor_set(v_reuseFailAlloc_1902_, 1, v_derivedValMap_1884_);
lean_ctor_set(v_reuseFailAlloc_1902_, 2, v_varMap_1897_);
lean_ctor_set(v_reuseFailAlloc_1902_, 3, v_jpLiveVarMap_1886_);
lean_ctor_set(v_reuseFailAlloc_1902_, 4, v___x_1899_);
v___x_1901_ = v_reuseFailAlloc_1902_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
return v___x_1901_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg(lean_object* v_ps_1905_, lean_object* v_x_1906_, lean_object* v_a_1907_, lean_object* v_a_1908_, lean_object* v_a_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_){
_start:
{
lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; uint8_t v___x_1917_; 
v___x_1914_ = lean_unsigned_to_nat(0u);
v___x_1915_ = lean_array_get_size(v_ps_1905_);
v___x_1916_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11));
v___x_1917_ = lean_nat_dec_lt(v___x_1914_, v___x_1915_);
if (v___x_1917_ == 0)
{
lean_object* v___x_1918_; 
lean_dec_ref(v_ps_1905_);
lean_inc(v_a_1912_);
lean_inc_ref(v_a_1911_);
lean_inc(v_a_1910_);
lean_inc_ref(v_a_1909_);
lean_inc(v_a_1908_);
lean_inc_ref(v_a_1907_);
v___x_1918_ = lean_apply_7(v_x_1906_, v_a_1907_, v_a_1908_, v_a_1909_, v_a_1910_, v_a_1911_, v_a_1912_, lean_box(0));
return v___x_1918_;
}
else
{
lean_object* v___f_1919_; uint8_t v___x_1920_; 
v___f_1919_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___closed__0));
v___x_1920_ = lean_nat_dec_le(v___x_1915_, v___x_1915_);
if (v___x_1920_ == 0)
{
if (v___x_1917_ == 0)
{
lean_object* v___x_1921_; 
lean_dec_ref(v_ps_1905_);
lean_inc(v_a_1912_);
lean_inc_ref(v_a_1911_);
lean_inc(v_a_1910_);
lean_inc_ref(v_a_1909_);
lean_inc(v_a_1908_);
lean_inc_ref(v_a_1907_);
v___x_1921_ = lean_apply_7(v_x_1906_, v_a_1907_, v_a_1908_, v_a_1909_, v_a_1910_, v_a_1911_, v_a_1912_, lean_box(0));
return v___x_1921_;
}
else
{
size_t v___x_1922_; size_t v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; 
v___x_1922_ = ((size_t)0ULL);
v___x_1923_ = lean_usize_of_nat(v___x_1915_);
lean_inc_ref(v_a_1907_);
v___x_1924_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1916_, v___f_1919_, v_ps_1905_, v___x_1922_, v___x_1923_, v_a_1907_);
lean_inc(v_a_1912_);
lean_inc_ref(v_a_1911_);
lean_inc(v_a_1910_);
lean_inc_ref(v_a_1909_);
lean_inc(v_a_1908_);
v___x_1925_ = lean_apply_7(v_x_1906_, v___x_1924_, v_a_1908_, v_a_1909_, v_a_1910_, v_a_1911_, v_a_1912_, lean_box(0));
return v___x_1925_;
}
}
else
{
size_t v___x_1926_; size_t v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1926_ = ((size_t)0ULL);
v___x_1927_ = lean_usize_of_nat(v___x_1915_);
lean_inc_ref(v_a_1907_);
v___x_1928_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1916_, v___f_1919_, v_ps_1905_, v___x_1926_, v___x_1927_, v_a_1907_);
lean_inc(v_a_1912_);
lean_inc_ref(v_a_1911_);
lean_inc(v_a_1910_);
lean_inc_ref(v_a_1909_);
lean_inc(v_a_1908_);
v___x_1929_ = lean_apply_7(v_x_1906_, v___x_1928_, v_a_1908_, v_a_1909_, v_a_1910_, v_a_1911_, v_a_1912_, lean_box(0));
return v___x_1929_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___boxed(lean_object* v_ps_1930_, lean_object* v_x_1931_, lean_object* v_a_1932_, lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_, lean_object* v_a_1937_, lean_object* v_a_1938_){
_start:
{
lean_object* v_res_1939_; 
v_res_1939_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg(v_ps_1930_, v_x_1931_, v_a_1932_, v_a_1933_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_);
lean_dec(v_a_1937_);
lean_dec_ref(v_a_1936_);
lean_dec(v_a_1935_);
lean_dec_ref(v_a_1934_);
lean_dec(v_a_1933_);
lean_dec_ref(v_a_1932_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams(lean_object* v_00_u03b1_1940_, lean_object* v_ps_1941_, lean_object* v_x_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_){
_start:
{
lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; uint8_t v___x_1953_; 
v___x_1950_ = lean_unsigned_to_nat(0u);
v___x_1951_ = lean_array_get_size(v_ps_1941_);
v___x_1952_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11));
v___x_1953_ = lean_nat_dec_lt(v___x_1950_, v___x_1951_);
if (v___x_1953_ == 0)
{
lean_object* v___x_1954_; 
lean_dec_ref(v_ps_1941_);
lean_inc(v_a_1948_);
lean_inc_ref(v_a_1947_);
lean_inc(v_a_1946_);
lean_inc_ref(v_a_1945_);
lean_inc(v_a_1944_);
lean_inc_ref(v_a_1943_);
v___x_1954_ = lean_apply_7(v_x_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_, lean_box(0));
return v___x_1954_;
}
else
{
lean_object* v___f_1955_; uint8_t v___x_1956_; 
v___f_1955_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___closed__0));
v___x_1956_ = lean_nat_dec_le(v___x_1951_, v___x_1951_);
if (v___x_1956_ == 0)
{
if (v___x_1953_ == 0)
{
lean_object* v___x_1957_; 
lean_dec_ref(v_ps_1941_);
lean_inc(v_a_1948_);
lean_inc_ref(v_a_1947_);
lean_inc(v_a_1946_);
lean_inc_ref(v_a_1945_);
lean_inc(v_a_1944_);
lean_inc_ref(v_a_1943_);
v___x_1957_ = lean_apply_7(v_x_1942_, v_a_1943_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_, lean_box(0));
return v___x_1957_;
}
else
{
size_t v___x_1958_; size_t v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; 
v___x_1958_ = ((size_t)0ULL);
v___x_1959_ = lean_usize_of_nat(v___x_1951_);
lean_inc_ref(v_a_1943_);
v___x_1960_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1952_, v___f_1955_, v_ps_1941_, v___x_1958_, v___x_1959_, v_a_1943_);
lean_inc(v_a_1948_);
lean_inc_ref(v_a_1947_);
lean_inc(v_a_1946_);
lean_inc_ref(v_a_1945_);
lean_inc(v_a_1944_);
v___x_1961_ = lean_apply_7(v_x_1942_, v___x_1960_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_, lean_box(0));
return v___x_1961_;
}
}
else
{
size_t v___x_1962_; size_t v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___x_1962_ = ((size_t)0ULL);
v___x_1963_ = lean_usize_of_nat(v___x_1951_);
lean_inc_ref(v_a_1943_);
v___x_1964_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1952_, v___f_1955_, v_ps_1941_, v___x_1962_, v___x_1963_, v_a_1943_);
lean_inc(v_a_1948_);
lean_inc_ref(v_a_1947_);
lean_inc(v_a_1946_);
lean_inc_ref(v_a_1945_);
lean_inc(v_a_1944_);
v___x_1965_ = lean_apply_7(v_x_1942_, v___x_1964_, v_a_1944_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_, lean_box(0));
return v___x_1965_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___boxed(lean_object* v_00_u03b1_1966_, lean_object* v_ps_1967_, lean_object* v_x_1968_, lean_object* v_a_1969_, lean_object* v_a_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_){
_start:
{
lean_object* v_res_1976_; 
v_res_1976_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams(v_00_u03b1_1966_, v_ps_1967_, v_x_1968_, v_a_1969_, v_a_1970_, v_a_1971_, v_a_1972_, v_a_1973_, v_a_1974_);
lean_dec(v_a_1974_);
lean_dec_ref(v_a_1973_);
lean_dec(v_a_1972_);
lean_dec_ref(v_a_1971_);
lean_dec(v_a_1970_);
lean_dec_ref(v_a_1969_);
return v_res_1976_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl___redArg(lean_object* v_decl_1977_, lean_object* v_x_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_, lean_object* v_a_1981_, lean_object* v_a_1982_, lean_object* v_a_1983_, lean_object* v_a_1984_){
_start:
{
lean_object* v_fvarId_1986_; lean_object* v_type_1987_; lean_object* v_value_1988_; lean_object* v_borrowedValues_1989_; lean_object* v_derivedValMap_1990_; lean_object* v_varMap_1991_; lean_object* v_jpLiveVarMap_1992_; lean_object* v_idx_1993_; uint8_t v___x_1994_; uint8_t v___x_1995_; uint8_t v___x_1996_; lean_object* v_varInfo_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; 
v_fvarId_1986_ = lean_ctor_get(v_decl_1977_, 0);
lean_inc(v_fvarId_1986_);
v_type_1987_ = lean_ctor_get(v_decl_1977_, 2);
lean_inc_ref(v_type_1987_);
v_value_1988_ = lean_ctor_get(v_decl_1977_, 3);
lean_inc(v_value_1988_);
lean_dec_ref(v_decl_1977_);
v_borrowedValues_1989_ = lean_ctor_get(v_a_1979_, 0);
v_derivedValMap_1990_ = lean_ctor_get(v_a_1979_, 1);
v_varMap_1991_ = lean_ctor_get(v_a_1979_, 2);
v_jpLiveVarMap_1992_ = lean_ctor_get(v_a_1979_, 3);
v_idx_1993_ = lean_ctor_get(v_a_1979_, 4);
v___x_1994_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_1987_);
v___x_1995_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v_type_1987_);
lean_dec_ref(v_type_1987_);
v___x_1996_ = l_Lean_Compiler_LCNF_LetValue_isPersistent(v_value_1988_);
lean_dec(v_value_1988_);
lean_inc(v_idx_1993_);
v_varInfo_1997_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v_varInfo_1997_, 0, v_idx_1993_);
lean_ctor_set_uint8(v_varInfo_1997_, sizeof(void*)*1, v___x_1994_);
lean_ctor_set_uint8(v_varInfo_1997_, sizeof(void*)*1 + 1, v___x_1995_);
lean_ctor_set_uint8(v_varInfo_1997_, sizeof(void*)*1 + 2, v___x_1996_);
lean_inc(v_varMap_1991_);
v___x_1998_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_1986_, v_varInfo_1997_, v_varMap_1991_);
v___x_1999_ = lean_unsigned_to_nat(1u);
v___x_2000_ = lean_nat_add(v_idx_1993_, v___x_1999_);
lean_inc(v_jpLiveVarMap_1992_);
lean_inc_ref(v_derivedValMap_1990_);
lean_inc_ref(v_borrowedValues_1989_);
v___x_2001_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2001_, 0, v_borrowedValues_1989_);
lean_ctor_set(v___x_2001_, 1, v_derivedValMap_1990_);
lean_ctor_set(v___x_2001_, 2, v___x_1998_);
lean_ctor_set(v___x_2001_, 3, v_jpLiveVarMap_1992_);
lean_ctor_set(v___x_2001_, 4, v___x_2000_);
lean_inc(v_a_1984_);
lean_inc_ref(v_a_1983_);
lean_inc(v_a_1982_);
lean_inc_ref(v_a_1981_);
lean_inc(v_a_1980_);
v___x_2002_ = lean_apply_7(v_x_1978_, v___x_2001_, v_a_1980_, v_a_1981_, v_a_1982_, v_a_1983_, v_a_1984_, lean_box(0));
return v___x_2002_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl___redArg___boxed(lean_object* v_decl_2003_, lean_object* v_x_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_, lean_object* v_a_2010_, lean_object* v_a_2011_){
_start:
{
lean_object* v_res_2012_; 
v_res_2012_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl___redArg(v_decl_2003_, v_x_2004_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_);
lean_dec(v_a_2010_);
lean_dec_ref(v_a_2009_);
lean_dec(v_a_2008_);
lean_dec_ref(v_a_2007_);
lean_dec(v_a_2006_);
lean_dec_ref(v_a_2005_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl(lean_object* v_00_u03b1_2013_, lean_object* v_decl_2014_, lean_object* v_x_2015_, lean_object* v_a_2016_, lean_object* v_a_2017_, lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_){
_start:
{
lean_object* v_fvarId_2023_; lean_object* v_type_2024_; lean_object* v_value_2025_; lean_object* v_borrowedValues_2026_; lean_object* v_derivedValMap_2027_; lean_object* v_varMap_2028_; lean_object* v_jpLiveVarMap_2029_; lean_object* v_idx_2030_; uint8_t v___x_2031_; uint8_t v___x_2032_; uint8_t v___x_2033_; lean_object* v_varInfo_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v_fvarId_2023_ = lean_ctor_get(v_decl_2014_, 0);
lean_inc(v_fvarId_2023_);
v_type_2024_ = lean_ctor_get(v_decl_2014_, 2);
lean_inc_ref(v_type_2024_);
v_value_2025_ = lean_ctor_get(v_decl_2014_, 3);
lean_inc(v_value_2025_);
lean_dec_ref(v_decl_2014_);
v_borrowedValues_2026_ = lean_ctor_get(v_a_2016_, 0);
v_derivedValMap_2027_ = lean_ctor_get(v_a_2016_, 1);
v_varMap_2028_ = lean_ctor_get(v_a_2016_, 2);
v_jpLiveVarMap_2029_ = lean_ctor_get(v_a_2016_, 3);
v_idx_2030_ = lean_ctor_get(v_a_2016_, 4);
v___x_2031_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_2024_);
v___x_2032_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v_type_2024_);
lean_dec_ref(v_type_2024_);
v___x_2033_ = l_Lean_Compiler_LCNF_LetValue_isPersistent(v_value_2025_);
lean_dec(v_value_2025_);
lean_inc(v_idx_2030_);
v_varInfo_2034_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v_varInfo_2034_, 0, v_idx_2030_);
lean_ctor_set_uint8(v_varInfo_2034_, sizeof(void*)*1, v___x_2031_);
lean_ctor_set_uint8(v_varInfo_2034_, sizeof(void*)*1 + 1, v___x_2032_);
lean_ctor_set_uint8(v_varInfo_2034_, sizeof(void*)*1 + 2, v___x_2033_);
lean_inc(v_varMap_2028_);
v___x_2035_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_2023_, v_varInfo_2034_, v_varMap_2028_);
v___x_2036_ = lean_unsigned_to_nat(1u);
v___x_2037_ = lean_nat_add(v_idx_2030_, v___x_2036_);
lean_inc(v_jpLiveVarMap_2029_);
lean_inc_ref(v_derivedValMap_2027_);
lean_inc_ref(v_borrowedValues_2026_);
v___x_2038_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2038_, 0, v_borrowedValues_2026_);
lean_ctor_set(v___x_2038_, 1, v_derivedValMap_2027_);
lean_ctor_set(v___x_2038_, 2, v___x_2035_);
lean_ctor_set(v___x_2038_, 3, v_jpLiveVarMap_2029_);
lean_ctor_set(v___x_2038_, 4, v___x_2037_);
lean_inc(v_a_2021_);
lean_inc_ref(v_a_2020_);
lean_inc(v_a_2019_);
lean_inc_ref(v_a_2018_);
lean_inc(v_a_2017_);
v___x_2039_ = lean_apply_7(v_x_2015_, v___x_2038_, v_a_2017_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_, lean_box(0));
return v___x_2039_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl___boxed(lean_object* v_00_u03b1_2040_, lean_object* v_decl_2041_, lean_object* v_x_2042_, lean_object* v_a_2043_, lean_object* v_a_2044_, lean_object* v_a_2045_, lean_object* v_a_2046_, lean_object* v_a_2047_, lean_object* v_a_2048_, lean_object* v_a_2049_){
_start:
{
lean_object* v_res_2050_; 
v_res_2050_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl(v_00_u03b1_2040_, v_decl_2041_, v_x_2042_, v_a_2043_, v_a_2044_, v_a_2045_, v_a_2046_, v_a_2047_, v_a_2048_);
lean_dec(v_a_2048_);
lean_dec_ref(v_a_2047_);
lean_dec(v_a_2046_);
lean_dec_ref(v_a_2045_);
lean_dec(v_a_2044_);
lean_dec_ref(v_a_2043_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt___redArg(lean_object* v_discr_2051_, lean_object* v_c_2052_, lean_object* v_x_2053_, lean_object* v_a_2054_, lean_object* v_a_2055_, lean_object* v_a_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_){
_start:
{
lean_object* v_borrowedValues_2061_; lean_object* v_derivedValMap_2062_; lean_object* v_varMap_2063_; lean_object* v_jpLiveVarMap_2064_; lean_object* v_idx_2065_; lean_object* v___y_2067_; lean_object* v___f_2072_; lean_object* v___x_2073_; 
v_borrowedValues_2061_ = lean_ctor_get(v_a_2054_, 0);
v_derivedValMap_2062_ = lean_ctor_get(v_a_2054_, 1);
v_varMap_2063_ = lean_ctor_get(v_a_2054_, 2);
v_jpLiveVarMap_2064_ = lean_ctor_get(v_a_2054_, 3);
v_idx_2065_ = lean_ctor_get(v_a_2054_, 4);
v___f_2072_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg___closed__0));
lean_inc(v_discr_2051_);
lean_inc(v_varMap_2063_);
v___x_2073_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v___f_2072_, v_varMap_2063_, v_discr_2051_);
if (lean_obj_tag(v___x_2073_) == 0)
{
lean_dec(v_discr_2051_);
lean_inc(v_varMap_2063_);
v___y_2067_ = v_varMap_2063_;
goto v___jp_2066_;
}
else
{
lean_object* v_val_2074_; uint8_t v_persistent_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2088_; 
v_val_2074_ = lean_ctor_get(v___x_2073_, 0);
lean_inc(v_val_2074_);
lean_dec_ref(v___x_2073_);
v_persistent_2075_ = lean_ctor_get_uint8(v_val_2074_, sizeof(void*)*1 + 2);
v_isSharedCheck_2088_ = !lean_is_exclusive(v_val_2074_);
if (v_isSharedCheck_2088_ == 0)
{
lean_object* v_unused_2089_; 
v_unused_2089_ = lean_ctor_get(v_val_2074_, 0);
lean_dec(v_unused_2089_);
v___x_2077_ = v_val_2074_;
v_isShared_2078_ = v_isSharedCheck_2088_;
goto v_resetjp_2076_;
}
else
{
lean_dec(v_val_2074_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2088_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v___x_2079_; uint8_t v___x_2080_; uint8_t v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2085_; 
v___x_2079_ = l_Lean_Compiler_LCNF_CtorInfo_type(v_c_2052_);
v___x_2080_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v___x_2079_);
v___x_2081_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v___x_2079_);
lean_dec_ref(v___x_2079_);
v___x_2082_ = lean_unsigned_to_nat(1u);
v___x_2083_ = lean_nat_add(v_idx_2065_, v___x_2082_);
if (v_isShared_2078_ == 0)
{
lean_ctor_set(v___x_2077_, 0, v___x_2083_);
v___x_2085_ = v___x_2077_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v___x_2083_);
lean_ctor_set_uint8(v_reuseFailAlloc_2087_, sizeof(void*)*1 + 2, v_persistent_2075_);
v___x_2085_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
lean_object* v___x_2086_; 
lean_ctor_set_uint8(v___x_2085_, sizeof(void*)*1, v___x_2080_);
lean_ctor_set_uint8(v___x_2085_, sizeof(void*)*1 + 1, v___x_2081_);
lean_inc(v_varMap_2063_);
v___x_2086_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_discr_2051_, v___x_2085_, v_varMap_2063_);
v___y_2067_ = v___x_2086_;
goto v___jp_2066_;
}
}
}
v___jp_2066_:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; 
v___x_2068_ = lean_unsigned_to_nat(1u);
v___x_2069_ = lean_nat_add(v_idx_2065_, v___x_2068_);
lean_inc(v_jpLiveVarMap_2064_);
lean_inc_ref(v_derivedValMap_2062_);
lean_inc_ref(v_borrowedValues_2061_);
v___x_2070_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2070_, 0, v_borrowedValues_2061_);
lean_ctor_set(v___x_2070_, 1, v_derivedValMap_2062_);
lean_ctor_set(v___x_2070_, 2, v___y_2067_);
lean_ctor_set(v___x_2070_, 3, v_jpLiveVarMap_2064_);
lean_ctor_set(v___x_2070_, 4, v___x_2069_);
lean_inc(v_a_2059_);
lean_inc_ref(v_a_2058_);
lean_inc(v_a_2057_);
lean_inc_ref(v_a_2056_);
lean_inc(v_a_2055_);
v___x_2071_ = lean_apply_7(v_x_2053_, v___x_2070_, v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_, v_a_2059_, lean_box(0));
return v___x_2071_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt___redArg___boxed(lean_object* v_discr_2090_, lean_object* v_c_2091_, lean_object* v_x_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_, lean_object* v_a_2096_, lean_object* v_a_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_){
_start:
{
lean_object* v_res_2100_; 
v_res_2100_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt___redArg(v_discr_2090_, v_c_2091_, v_x_2092_, v_a_2093_, v_a_2094_, v_a_2095_, v_a_2096_, v_a_2097_, v_a_2098_);
lean_dec(v_a_2098_);
lean_dec_ref(v_a_2097_);
lean_dec(v_a_2096_);
lean_dec_ref(v_a_2095_);
lean_dec(v_a_2094_);
lean_dec_ref(v_a_2093_);
lean_dec_ref(v_c_2091_);
return v_res_2100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt(lean_object* v_00_u03b1_2101_, lean_object* v_discr_2102_, lean_object* v_c_2103_, lean_object* v_x_2104_, lean_object* v_a_2105_, lean_object* v_a_2106_, lean_object* v_a_2107_, lean_object* v_a_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_){
_start:
{
lean_object* v_borrowedValues_2112_; lean_object* v_derivedValMap_2113_; lean_object* v_varMap_2114_; lean_object* v_jpLiveVarMap_2115_; lean_object* v_idx_2116_; lean_object* v___y_2118_; lean_object* v___f_2123_; lean_object* v___x_2124_; 
v_borrowedValues_2112_ = lean_ctor_get(v_a_2105_, 0);
v_derivedValMap_2113_ = lean_ctor_get(v_a_2105_, 1);
v_varMap_2114_ = lean_ctor_get(v_a_2105_, 2);
v_jpLiveVarMap_2115_ = lean_ctor_get(v_a_2105_, 3);
v_idx_2116_ = lean_ctor_get(v_a_2105_, 4);
v___f_2123_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg___closed__0));
lean_inc(v_discr_2102_);
lean_inc(v_varMap_2114_);
v___x_2124_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___redArg(v___f_2123_, v_varMap_2114_, v_discr_2102_);
if (lean_obj_tag(v___x_2124_) == 0)
{
lean_dec(v_discr_2102_);
lean_inc(v_varMap_2114_);
v___y_2118_ = v_varMap_2114_;
goto v___jp_2117_;
}
else
{
lean_object* v_val_2125_; uint8_t v_persistent_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2139_; 
v_val_2125_ = lean_ctor_get(v___x_2124_, 0);
lean_inc(v_val_2125_);
lean_dec_ref(v___x_2124_);
v_persistent_2126_ = lean_ctor_get_uint8(v_val_2125_, sizeof(void*)*1 + 2);
v_isSharedCheck_2139_ = !lean_is_exclusive(v_val_2125_);
if (v_isSharedCheck_2139_ == 0)
{
lean_object* v_unused_2140_; 
v_unused_2140_ = lean_ctor_get(v_val_2125_, 0);
lean_dec(v_unused_2140_);
v___x_2128_ = v_val_2125_;
v_isShared_2129_ = v_isSharedCheck_2139_;
goto v_resetjp_2127_;
}
else
{
lean_dec(v_val_2125_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2139_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v___x_2130_; uint8_t v___x_2131_; uint8_t v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2136_; 
v___x_2130_ = l_Lean_Compiler_LCNF_CtorInfo_type(v_c_2103_);
v___x_2131_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v___x_2130_);
v___x_2132_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v___x_2130_);
lean_dec_ref(v___x_2130_);
v___x_2133_ = lean_unsigned_to_nat(1u);
v___x_2134_ = lean_nat_add(v_idx_2116_, v___x_2133_);
if (v_isShared_2129_ == 0)
{
lean_ctor_set(v___x_2128_, 0, v___x_2134_);
v___x_2136_ = v___x_2128_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v___x_2134_);
lean_ctor_set_uint8(v_reuseFailAlloc_2138_, sizeof(void*)*1 + 2, v_persistent_2126_);
v___x_2136_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
lean_object* v___x_2137_; 
lean_ctor_set_uint8(v___x_2136_, sizeof(void*)*1, v___x_2131_);
lean_ctor_set_uint8(v___x_2136_, sizeof(void*)*1 + 1, v___x_2132_);
lean_inc(v_varMap_2114_);
v___x_2137_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_discr_2102_, v___x_2136_, v_varMap_2114_);
v___y_2118_ = v___x_2137_;
goto v___jp_2117_;
}
}
}
v___jp_2117_:
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; 
v___x_2119_ = lean_unsigned_to_nat(1u);
v___x_2120_ = lean_nat_add(v_idx_2116_, v___x_2119_);
lean_inc(v_jpLiveVarMap_2115_);
lean_inc_ref(v_derivedValMap_2113_);
lean_inc_ref(v_borrowedValues_2112_);
v___x_2121_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2121_, 0, v_borrowedValues_2112_);
lean_ctor_set(v___x_2121_, 1, v_derivedValMap_2113_);
lean_ctor_set(v___x_2121_, 2, v___y_2118_);
lean_ctor_set(v___x_2121_, 3, v_jpLiveVarMap_2115_);
lean_ctor_set(v___x_2121_, 4, v___x_2120_);
lean_inc(v_a_2110_);
lean_inc_ref(v_a_2109_);
lean_inc(v_a_2108_);
lean_inc_ref(v_a_2107_);
lean_inc(v_a_2106_);
v___x_2122_ = lean_apply_7(v_x_2104_, v___x_2121_, v_a_2106_, v_a_2107_, v_a_2108_, v_a_2109_, v_a_2110_, lean_box(0));
return v___x_2122_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt___boxed(lean_object* v_00_u03b1_2141_, lean_object* v_discr_2142_, lean_object* v_c_2143_, lean_object* v_x_2144_, lean_object* v_a_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_, lean_object* v_a_2149_, lean_object* v_a_2150_, lean_object* v_a_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt(v_00_u03b1_2141_, v_discr_2142_, v_c_2143_, v_x_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_, v_a_2150_);
lean_dec(v_a_2150_);
lean_dec_ref(v_a_2149_);
lean_dec(v_a_2148_);
lean_dec_ref(v_a_2147_);
lean_dec(v_a_2146_);
lean_dec_ref(v_a_2145_);
lean_dec_ref(v_c_2143_);
return v_res_2152_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars___redArg(lean_object* v_x_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_, lean_object* v_a_2158_, lean_object* v_a_2159_){
_start:
{
lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; 
v___x_2161_ = lean_st_ref_get(v_a_2155_);
v___x_2162_ = lean_st_ref_take(v_a_2155_);
lean_dec(v___x_2162_);
v___x_2163_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_2164_ = lean_st_ref_set(v_a_2155_, v___x_2163_);
lean_inc(v_a_2159_);
lean_inc_ref(v_a_2158_);
lean_inc(v_a_2157_);
lean_inc_ref(v_a_2156_);
lean_inc(v_a_2155_);
lean_inc_ref(v_a_2154_);
v___x_2165_ = lean_apply_7(v_x_2153_, v_a_2154_, v_a_2155_, v_a_2156_, v_a_2157_, v_a_2158_, v_a_2159_, lean_box(0));
if (lean_obj_tag(v___x_2165_) == 0)
{
lean_object* v_a_2166_; lean_object* v___x_2168_; uint8_t v_isShared_2169_; uint8_t v_isSharedCheck_2177_; 
v_a_2166_ = lean_ctor_get(v___x_2165_, 0);
v_isSharedCheck_2177_ = !lean_is_exclusive(v___x_2165_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2168_ = v___x_2165_;
v_isShared_2169_ = v_isSharedCheck_2177_;
goto v_resetjp_2167_;
}
else
{
lean_inc(v_a_2166_);
lean_dec(v___x_2165_);
v___x_2168_ = lean_box(0);
v_isShared_2169_ = v_isSharedCheck_2177_;
goto v_resetjp_2167_;
}
v_resetjp_2167_:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2175_; 
v___x_2170_ = lean_st_ref_get(v_a_2155_);
v___x_2171_ = lean_st_ref_take(v_a_2155_);
lean_dec(v___x_2171_);
v___x_2172_ = lean_st_ref_set(v_a_2155_, v___x_2161_);
v___x_2173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2173_, 0, v_a_2166_);
lean_ctor_set(v___x_2173_, 1, v___x_2170_);
if (v_isShared_2169_ == 0)
{
lean_ctor_set(v___x_2168_, 0, v___x_2173_);
v___x_2175_ = v___x_2168_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v___x_2173_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
return v___x_2175_;
}
}
}
else
{
lean_object* v_a_2178_; lean_object* v___x_2180_; uint8_t v_isShared_2181_; uint8_t v_isSharedCheck_2185_; 
lean_dec(v___x_2161_);
v_a_2178_ = lean_ctor_get(v___x_2165_, 0);
v_isSharedCheck_2185_ = !lean_is_exclusive(v___x_2165_);
if (v_isSharedCheck_2185_ == 0)
{
v___x_2180_ = v___x_2165_;
v_isShared_2181_ = v_isSharedCheck_2185_;
goto v_resetjp_2179_;
}
else
{
lean_inc(v_a_2178_);
lean_dec(v___x_2165_);
v___x_2180_ = lean_box(0);
v_isShared_2181_ = v_isSharedCheck_2185_;
goto v_resetjp_2179_;
}
v_resetjp_2179_:
{
lean_object* v___x_2183_; 
if (v_isShared_2181_ == 0)
{
v___x_2183_ = v___x_2180_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v_a_2178_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
return v___x_2183_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars___redArg___boxed(lean_object* v_x_2186_, lean_object* v_a_2187_, lean_object* v_a_2188_, lean_object* v_a_2189_, lean_object* v_a_2190_, lean_object* v_a_2191_, lean_object* v_a_2192_, lean_object* v_a_2193_){
_start:
{
lean_object* v_res_2194_; 
v_res_2194_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars___redArg(v_x_2186_, v_a_2187_, v_a_2188_, v_a_2189_, v_a_2190_, v_a_2191_, v_a_2192_);
lean_dec(v_a_2192_);
lean_dec_ref(v_a_2191_);
lean_dec(v_a_2190_);
lean_dec_ref(v_a_2189_);
lean_dec(v_a_2188_);
lean_dec_ref(v_a_2187_);
return v_res_2194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars(lean_object* v_00_u03b1_2195_, lean_object* v_x_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_, lean_object* v_a_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_){
_start:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
v___x_2204_ = lean_st_ref_get(v_a_2198_);
v___x_2205_ = lean_st_ref_take(v_a_2198_);
lean_dec(v___x_2205_);
v___x_2206_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_2207_ = lean_st_ref_set(v_a_2198_, v___x_2206_);
lean_inc(v_a_2202_);
lean_inc_ref(v_a_2201_);
lean_inc(v_a_2200_);
lean_inc_ref(v_a_2199_);
lean_inc(v_a_2198_);
lean_inc_ref(v_a_2197_);
v___x_2208_ = lean_apply_7(v_x_2196_, v_a_2197_, v_a_2198_, v_a_2199_, v_a_2200_, v_a_2201_, v_a_2202_, lean_box(0));
if (lean_obj_tag(v___x_2208_) == 0)
{
lean_object* v_a_2209_; lean_object* v___x_2211_; uint8_t v_isShared_2212_; uint8_t v_isSharedCheck_2220_; 
v_a_2209_ = lean_ctor_get(v___x_2208_, 0);
v_isSharedCheck_2220_ = !lean_is_exclusive(v___x_2208_);
if (v_isSharedCheck_2220_ == 0)
{
v___x_2211_ = v___x_2208_;
v_isShared_2212_ = v_isSharedCheck_2220_;
goto v_resetjp_2210_;
}
else
{
lean_inc(v_a_2209_);
lean_dec(v___x_2208_);
v___x_2211_ = lean_box(0);
v_isShared_2212_ = v_isSharedCheck_2220_;
goto v_resetjp_2210_;
}
v_resetjp_2210_:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2218_; 
v___x_2213_ = lean_st_ref_get(v_a_2198_);
v___x_2214_ = lean_st_ref_take(v_a_2198_);
lean_dec(v___x_2214_);
v___x_2215_ = lean_st_ref_set(v_a_2198_, v___x_2204_);
v___x_2216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2216_, 0, v_a_2209_);
lean_ctor_set(v___x_2216_, 1, v___x_2213_);
if (v_isShared_2212_ == 0)
{
lean_ctor_set(v___x_2211_, 0, v___x_2216_);
v___x_2218_ = v___x_2211_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v___x_2216_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
}
else
{
lean_object* v_a_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2228_; 
lean_dec(v___x_2204_);
v_a_2221_ = lean_ctor_get(v___x_2208_, 0);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2208_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2223_ = v___x_2208_;
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_a_2221_);
lean_dec(v___x_2208_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
lean_object* v___x_2226_; 
if (v_isShared_2224_ == 0)
{
v___x_2226_ = v___x_2223_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_a_2221_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars___boxed(lean_object* v_00_u03b1_2229_, lean_object* v_x_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_, lean_object* v_a_2234_, lean_object* v_a_2235_, lean_object* v_a_2236_, lean_object* v_a_2237_){
_start:
{
lean_object* v_res_2238_; 
v_res_2238_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars(v_00_u03b1_2229_, v_x_2230_, v_a_2231_, v_a_2232_, v_a_2233_, v_a_2234_, v_a_2235_, v_a_2236_);
lean_dec(v_a_2236_);
lean_dec_ref(v_a_2235_);
lean_dec(v_a_2234_);
lean_dec_ref(v_a_2233_);
lean_dec(v_a_2232_);
lean_dec_ref(v_a_2231_);
return v_res_2238_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__0(lean_object* v_x1_2239_, uint8_t v___x_2240_, lean_object* v___x_2241_, lean_object* v___x_2242_, lean_object* v_v_2243_){
_start:
{
uint8_t v___y_2245_; lean_object* v_vars_2247_; lean_object* v_borrows_2248_; uint8_t v___x_2249_; 
v_vars_2247_ = lean_ctor_get(v_x1_2239_, 0);
v_borrows_2248_ = lean_ctor_get(v_x1_2239_, 1);
lean_inc(v_v_2243_);
lean_inc_ref(v___x_2242_);
lean_inc_ref(v___x_2241_);
v___x_2249_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_2241_, v___x_2242_, v_vars_2247_, v_v_2243_);
if (v___x_2249_ == 0)
{
uint8_t v___x_2250_; 
v___x_2250_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_2241_, v___x_2242_, v_borrows_2248_, v_v_2243_);
v___y_2245_ = v___x_2250_;
goto v___jp_2244_;
}
else
{
lean_dec(v_v_2243_);
lean_dec_ref(v___x_2242_);
lean_dec_ref(v___x_2241_);
v___y_2245_ = v___x_2249_;
goto v___jp_2244_;
}
v___jp_2244_:
{
if (v___y_2245_ == 0)
{
return v___x_2240_;
}
else
{
uint8_t v___x_2246_; 
v___x_2246_ = 0;
return v___x_2246_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__0___boxed(lean_object* v_x1_2251_, lean_object* v___x_2252_, lean_object* v___x_2253_, lean_object* v___x_2254_, lean_object* v_v_2255_){
_start:
{
uint8_t v___x_544__boxed_2256_; uint8_t v_res_2257_; lean_object* v_r_2258_; 
v___x_544__boxed_2256_ = lean_unbox(v___x_2252_);
v_res_2257_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__0(v_x1_2251_, v___x_544__boxed_2256_, v___x_2253_, v___x_2254_, v_v_2255_);
lean_dec_ref(v_x1_2251_);
v_r_2258_ = lean_box(v_res_2257_);
return v_r_2258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__2(lean_object* v___x_2259_, lean_object* v___f_2260_, lean_object* v_acc_2261_, lean_object* v_l_2262_){
_start:
{
lean_object* v___x_2263_; 
v___x_2263_ = l_Std_DHashMap_Internal_AssocList_foldlM___redArg(v___x_2259_, v___f_2260_, v_acc_2261_, v_l_2262_);
return v___x_2263_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__1(lean_object* v___x_2264_, lean_object* v___x_2265_, lean_object* v___x_2266_, lean_object* v_derivedValMap_2267_, lean_object* v_shouldAdd_2268_, lean_object* v_x1_2269_, lean_object* v_x2_2270_, lean_object* v_x3_2271_){
_start:
{
lean_object* v_cinfo_2288_; lean_object* v_parents_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; uint8_t v___x_2293_; 
lean_inc(v_x2_2270_);
lean_inc_ref(v___x_2265_);
lean_inc_ref(v___x_2264_);
v_cinfo_2288_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___redArg(v___x_2264_, v___x_2265_, v___x_2266_, v_derivedValMap_2267_, v_x2_2270_);
v_parents_2289_ = lean_ctor_get(v_cinfo_2288_, 0);
lean_inc_ref(v_parents_2289_);
lean_dec(v_cinfo_2288_);
v___x_2290_ = lean_unsigned_to_nat(0u);
v___x_2291_ = lean_array_get_size(v_parents_2289_);
v___x_2292_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11));
v___x_2293_ = lean_nat_dec_lt(v___x_2290_, v___x_2291_);
if (v___x_2293_ == 0)
{
lean_dec_ref(v_parents_2289_);
goto v___jp_2272_;
}
else
{
if (v___x_2293_ == 0)
{
lean_dec_ref(v_parents_2289_);
goto v___jp_2272_;
}
else
{
lean_object* v___x_2294_; lean_object* v___f_2295_; size_t v___x_2296_; size_t v___x_2297_; lean_object* v___x_2298_; uint8_t v___x_2299_; 
v___x_2294_ = lean_box(v___x_2293_);
lean_inc_ref(v___x_2265_);
lean_inc_ref(v___x_2264_);
lean_inc_ref(v_x1_2269_);
v___f_2295_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2295_, 0, v_x1_2269_);
lean_closure_set(v___f_2295_, 1, v___x_2294_);
lean_closure_set(v___f_2295_, 2, v___x_2264_);
lean_closure_set(v___f_2295_, 3, v___x_2265_);
v___x_2296_ = ((size_t)0ULL);
v___x_2297_ = lean_usize_of_nat(v___x_2291_);
v___x_2298_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_2292_, v___f_2295_, v_parents_2289_, v___x_2296_, v___x_2297_);
v___x_2299_ = lean_unbox(v___x_2298_);
lean_dec(v___x_2298_);
if (v___x_2299_ == 0)
{
goto v___jp_2272_;
}
else
{
lean_object* v___x_2300_; 
lean_dec_ref(v___x_2265_);
lean_dec_ref(v___x_2264_);
v___x_2300_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(v_x2_2270_, v_derivedValMap_2267_, v_x1_2269_, v_shouldAdd_2268_);
return v___x_2300_;
}
}
}
v___jp_2272_:
{
lean_object* v___x_2273_; uint8_t v___x_2274_; 
lean_inc_ref(v_shouldAdd_2268_);
lean_inc(v_x2_2270_);
v___x_2273_ = lean_apply_1(v_shouldAdd_2268_, v_x2_2270_);
v___x_2274_ = lean_unbox(v___x_2273_);
if (v___x_2274_ == 0)
{
lean_object* v___x_2275_; 
lean_dec_ref(v___x_2265_);
lean_dec_ref(v___x_2264_);
v___x_2275_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(v_x2_2270_, v_derivedValMap_2267_, v_x1_2269_, v_shouldAdd_2268_);
return v___x_2275_;
}
else
{
lean_object* v_vars_2276_; lean_object* v_borrows_2277_; lean_object* v___x_2279_; uint8_t v_isShared_2280_; uint8_t v_isSharedCheck_2287_; 
v_vars_2276_ = lean_ctor_get(v_x1_2269_, 0);
v_borrows_2277_ = lean_ctor_get(v_x1_2269_, 1);
v_isSharedCheck_2287_ = !lean_is_exclusive(v_x1_2269_);
if (v_isSharedCheck_2287_ == 0)
{
v___x_2279_ = v_x1_2269_;
v_isShared_2280_ = v_isSharedCheck_2287_;
goto v_resetjp_2278_;
}
else
{
lean_inc(v_borrows_2277_);
lean_inc(v_vars_2276_);
lean_dec(v_x1_2269_);
v___x_2279_ = lean_box(0);
v_isShared_2280_ = v_isSharedCheck_2287_;
goto v_resetjp_2278_;
}
v_resetjp_2278_:
{
lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2284_; 
v___x_2281_ = lean_box(0);
lean_inc(v_x2_2270_);
v___x_2282_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2264_, v___x_2265_, v_borrows_2277_, v_x2_2270_, v___x_2281_);
if (v_isShared_2280_ == 0)
{
lean_ctor_set(v___x_2279_, 1, v___x_2282_);
v___x_2284_ = v___x_2279_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_vars_2276_);
lean_ctor_set(v_reuseFailAlloc_2286_, 1, v___x_2282_);
v___x_2284_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
lean_object* v___x_2285_; 
v___x_2285_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(v_x2_2270_, v_derivedValMap_2267_, v___x_2284_, v_shouldAdd_2268_);
return v___x_2285_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__1___boxed(lean_object* v___x_2301_, lean_object* v___x_2302_, lean_object* v___x_2303_, lean_object* v_derivedValMap_2304_, lean_object* v_shouldAdd_2305_, lean_object* v_x1_2306_, lean_object* v_x2_2307_, lean_object* v_x3_2308_){
_start:
{
lean_object* v_res_2309_; 
v_res_2309_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__1(v___x_2301_, v___x_2302_, v___x_2303_, v_derivedValMap_2304_, v_shouldAdd_2305_, v_x1_2306_, v_x2_2307_, v_x3_2308_);
lean_dec_ref(v___x_2303_);
return v_res_2309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(lean_object* v_fvarId_2310_, lean_object* v_derivedValMap_2311_, lean_object* v_liveVars_2312_, lean_object* v_shouldAdd_2313_){
_start:
{
lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2314_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_2315_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_2316_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_2314_, v___x_2315_, v_derivedValMap_2311_, v_fvarId_2310_);
if (lean_obj_tag(v___x_2316_) == 1)
{
lean_object* v_val_2317_; lean_object* v_children_2318_; lean_object* v___x_2319_; lean_object* v_buckets_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; uint8_t v___x_2323_; 
v_val_2317_ = lean_ctor_get(v___x_2316_, 0);
lean_inc(v_val_2317_);
lean_dec_ref(v___x_2316_);
v_children_2318_ = lean_ctor_get(v_val_2317_, 1);
lean_inc_ref(v_children_2318_);
lean_dec(v_val_2317_);
v___x_2319_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11));
v_buckets_2320_ = lean_ctor_get(v_children_2318_, 1);
lean_inc_ref(v_buckets_2320_);
lean_dec_ref(v_children_2318_);
v___x_2321_ = lean_unsigned_to_nat(0u);
v___x_2322_ = lean_array_get_size(v_buckets_2320_);
v___x_2323_ = lean_nat_dec_lt(v___x_2321_, v___x_2322_);
if (v___x_2323_ == 0)
{
lean_dec_ref(v_buckets_2320_);
lean_dec_ref(v_shouldAdd_2313_);
lean_dec_ref(v_derivedValMap_2311_);
return v_liveVars_2312_;
}
else
{
lean_object* v___x_2324_; lean_object* v___f_2325_; lean_object* v___f_2326_; uint8_t v___x_2327_; 
v___x_2324_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default;
v___f_2325_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__1___boxed), 8, 5);
lean_closure_set(v___f_2325_, 0, v___x_2314_);
lean_closure_set(v___f_2325_, 1, v___x_2315_);
lean_closure_set(v___f_2325_, 2, v___x_2324_);
lean_closure_set(v___f_2325_, 3, v_derivedValMap_2311_);
lean_closure_set(v___f_2325_, 4, v_shouldAdd_2313_);
v___f_2326_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__2), 4, 2);
lean_closure_set(v___f_2326_, 0, v___x_2319_);
lean_closure_set(v___f_2326_, 1, v___f_2325_);
v___x_2327_ = lean_nat_dec_le(v___x_2322_, v___x_2322_);
if (v___x_2327_ == 0)
{
if (v___x_2323_ == 0)
{
lean_dec_ref(v___f_2326_);
lean_dec_ref(v_buckets_2320_);
return v_liveVars_2312_;
}
else
{
size_t v___x_2328_; size_t v___x_2329_; lean_object* v___x_2330_; 
v___x_2328_ = ((size_t)0ULL);
v___x_2329_ = lean_usize_of_nat(v___x_2322_);
v___x_2330_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2319_, v___f_2326_, v_buckets_2320_, v___x_2328_, v___x_2329_, v_liveVars_2312_);
return v___x_2330_;
}
}
else
{
size_t v___x_2331_; size_t v___x_2332_; lean_object* v___x_2333_; 
v___x_2331_ = ((size_t)0ULL);
v___x_2332_ = lean_usize_of_nat(v___x_2322_);
v___x_2333_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_2319_, v___f_2326_, v_buckets_2320_, v___x_2331_, v___x_2332_, v_liveVars_2312_);
return v___x_2333_;
}
}
}
else
{
lean_dec(v___x_2316_);
lean_dec_ref(v_shouldAdd_2313_);
lean_dec_ref(v_derivedValMap_2311_);
return v_liveVars_2312_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___lam__0(lean_object* v_val_2334_, lean_object* v___x_2335_, lean_object* v___x_2336_, lean_object* v_shouldBorrow_2337_, uint8_t v___x_2338_, lean_object* v_y_2339_){
_start:
{
lean_object* v_vars_2340_; uint8_t v___x_2341_; 
v_vars_2340_ = lean_ctor_get(v_val_2334_, 0);
lean_inc(v_y_2339_);
v___x_2341_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_2335_, v___x_2336_, v_vars_2340_, v_y_2339_);
if (v___x_2341_ == 0)
{
lean_object* v___x_2342_; uint8_t v___x_2343_; 
v___x_2342_ = lean_apply_1(v_shouldBorrow_2337_, v_y_2339_);
v___x_2343_ = lean_unbox(v___x_2342_);
return v___x_2343_;
}
else
{
lean_dec(v_y_2339_);
lean_dec_ref(v_shouldBorrow_2337_);
return v___x_2338_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___lam__0___boxed(lean_object* v_val_2344_, lean_object* v___x_2345_, lean_object* v___x_2346_, lean_object* v_shouldBorrow_2347_, lean_object* v___x_2348_, lean_object* v_y_2349_){
_start:
{
uint8_t v___x_2235__boxed_2350_; uint8_t v_res_2351_; lean_object* v_r_2352_; 
v___x_2235__boxed_2350_ = lean_unbox(v___x_2348_);
v_res_2351_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___lam__0(v_val_2344_, v___x_2345_, v___x_2346_, v_shouldBorrow_2347_, v___x_2235__boxed_2350_, v_y_2349_);
lean_dec_ref(v_val_2344_);
v_r_2352_ = lean_box(v_res_2351_);
return v_r_2352_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg(lean_object* v_fvarId_2353_, lean_object* v_shouldBorrow_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_){
_start:
{
lean_object* v___x_2358_; lean_object* v_vars_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; uint8_t v___x_2362_; 
v___x_2358_ = lean_st_ref_get(v_a_2356_);
v_vars_2359_ = lean_ctor_get(v___x_2358_, 0);
lean_inc_ref(v_vars_2359_);
lean_dec(v___x_2358_);
v___x_2360_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_2361_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
lean_inc(v_fvarId_2353_);
v___x_2362_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_2360_, v___x_2361_, v_vars_2359_, v_fvarId_2353_);
lean_dec_ref(v_vars_2359_);
if (v___x_2362_ == 0)
{
lean_object* v___x_2363_; lean_object* v_vars_2364_; lean_object* v_borrows_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2382_; 
v___x_2363_ = lean_st_ref_take(v_a_2356_);
v_vars_2364_ = lean_ctor_get(v___x_2363_, 0);
v_borrows_2365_ = lean_ctor_get(v___x_2363_, 1);
v_isSharedCheck_2382_ = !lean_is_exclusive(v___x_2363_);
if (v_isSharedCheck_2382_ == 0)
{
v___x_2367_ = v___x_2363_;
v_isShared_2368_ = v_isSharedCheck_2382_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_borrows_2365_);
lean_inc(v_vars_2364_);
lean_dec(v___x_2363_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2382_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2372_; 
v___x_2369_ = lean_box(0);
lean_inc(v_fvarId_2353_);
v___x_2370_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2360_, v___x_2361_, v_vars_2364_, v_fvarId_2353_, v___x_2369_);
if (v_isShared_2368_ == 0)
{
lean_ctor_set(v___x_2367_, 0, v___x_2370_);
v___x_2372_ = v___x_2367_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v___x_2370_);
lean_ctor_set(v_reuseFailAlloc_2381_, 1, v_borrows_2365_);
v___x_2372_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v_derivedValMap_2375_; lean_object* v___x_2376_; lean_object* v___f_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; 
v___x_2373_ = lean_st_ref_set(v_a_2356_, v___x_2372_);
v___x_2374_ = lean_st_ref_take(v_a_2356_);
v_derivedValMap_2375_ = lean_ctor_get(v_a_2355_, 1);
v___x_2376_ = lean_box(v___x_2362_);
lean_inc(v___x_2374_);
v___f_2377_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2377_, 0, v___x_2374_);
lean_closure_set(v___f_2377_, 1, v___x_2360_);
lean_closure_set(v___f_2377_, 2, v___x_2361_);
lean_closure_set(v___f_2377_, 3, v_shouldBorrow_2354_);
lean_closure_set(v___f_2377_, 4, v___x_2376_);
lean_inc_ref(v_derivedValMap_2375_);
v___x_2378_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(v_fvarId_2353_, v_derivedValMap_2375_, v___x_2374_, v___f_2377_);
v___x_2379_ = lean_st_ref_set(v_a_2356_, v___x_2378_);
v___x_2380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2380_, 0, v___x_2369_);
return v___x_2380_;
}
}
}
else
{
lean_object* v___x_2383_; lean_object* v___x_2384_; 
lean_dec_ref(v_shouldBorrow_2354_);
lean_dec(v_fvarId_2353_);
v___x_2383_ = lean_box(0);
v___x_2384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2384_, 0, v___x_2383_);
return v___x_2384_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___boxed(lean_object* v_fvarId_2385_, lean_object* v_shouldBorrow_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_, lean_object* v_a_2389_){
_start:
{
lean_object* v_res_2390_; 
v_res_2390_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg(v_fvarId_2385_, v_shouldBorrow_2386_, v_a_2387_, v_a_2388_);
lean_dec(v_a_2388_);
lean_dec_ref(v_a_2387_);
return v_res_2390_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar(lean_object* v_fvarId_2391_, lean_object* v_shouldBorrow_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_){
_start:
{
lean_object* v___x_2400_; 
v___x_2400_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg(v_fvarId_2391_, v_shouldBorrow_2392_, v_a_2393_, v_a_2394_);
return v___x_2400_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___boxed(lean_object* v_fvarId_2401_, lean_object* v_shouldBorrow_2402_, lean_object* v_a_2403_, lean_object* v_a_2404_, lean_object* v_a_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar(v_fvarId_2401_, v_shouldBorrow_2402_, v_a_2403_, v_a_2404_, v_a_2405_, v_a_2406_, v_a_2407_, v_a_2408_);
lean_dec(v_a_2408_);
lean_dec_ref(v_a_2407_);
lean_dec(v_a_2406_);
lean_dec_ref(v_a_2405_);
lean_dec(v_a_2404_);
lean_dec_ref(v_a_2403_);
return v_res_2410_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(lean_object* v_m_2411_, lean_object* v_a_2412_){
_start:
{
lean_object* v_buckets_2413_; lean_object* v___x_2414_; uint64_t v___x_2415_; uint64_t v___x_2416_; uint64_t v___x_2417_; uint64_t v_fold_2418_; uint64_t v___x_2419_; uint64_t v___x_2420_; uint64_t v___x_2421_; size_t v___x_2422_; size_t v___x_2423_; size_t v___x_2424_; size_t v___x_2425_; size_t v___x_2426_; lean_object* v___x_2427_; uint8_t v___x_2428_; 
v_buckets_2413_ = lean_ctor_get(v_m_2411_, 1);
v___x_2414_ = lean_array_get_size(v_buckets_2413_);
v___x_2415_ = l_Lean_instHashableFVarId_hash(v_a_2412_);
v___x_2416_ = 32ULL;
v___x_2417_ = lean_uint64_shift_right(v___x_2415_, v___x_2416_);
v_fold_2418_ = lean_uint64_xor(v___x_2415_, v___x_2417_);
v___x_2419_ = 16ULL;
v___x_2420_ = lean_uint64_shift_right(v_fold_2418_, v___x_2419_);
v___x_2421_ = lean_uint64_xor(v_fold_2418_, v___x_2420_);
v___x_2422_ = lean_uint64_to_usize(v___x_2421_);
v___x_2423_ = lean_usize_of_nat(v___x_2414_);
v___x_2424_ = ((size_t)1ULL);
v___x_2425_ = lean_usize_sub(v___x_2423_, v___x_2424_);
v___x_2426_ = lean_usize_land(v___x_2422_, v___x_2425_);
v___x_2427_ = lean_array_uget_borrowed(v_buckets_2413_, v___x_2426_);
v___x_2428_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg(v_a_2412_, v___x_2427_);
return v___x_2428_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg___boxed(lean_object* v_m_2429_, lean_object* v_a_2430_){
_start:
{
uint8_t v_res_2431_; lean_object* v_r_2432_; 
v_res_2431_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_m_2429_, v_a_2430_);
lean_dec(v_a_2430_);
lean_dec_ref(v_m_2429_);
v_r_2432_ = lean_box(v_res_2431_);
return v_r_2432_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__4(lean_object* v_x1_2433_, lean_object* v_as_2434_, size_t v_i_2435_, size_t v_stop_2436_){
_start:
{
uint8_t v___x_2437_; 
v___x_2437_ = lean_usize_dec_eq(v_i_2435_, v_stop_2436_);
if (v___x_2437_ == 0)
{
lean_object* v_vars_2438_; lean_object* v_borrows_2439_; uint8_t v___x_2440_; uint8_t v___y_2442_; lean_object* v___x_2446_; uint8_t v___x_2447_; 
v_vars_2438_ = lean_ctor_get(v_x1_2433_, 0);
v_borrows_2439_ = lean_ctor_get(v_x1_2433_, 1);
v___x_2440_ = 1;
v___x_2446_ = lean_array_uget_borrowed(v_as_2434_, v_i_2435_);
v___x_2447_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_2438_, v___x_2446_);
if (v___x_2447_ == 0)
{
uint8_t v___x_2448_; 
v___x_2448_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_2439_, v___x_2446_);
v___y_2442_ = v___x_2448_;
goto v___jp_2441_;
}
else
{
v___y_2442_ = v___x_2447_;
goto v___jp_2441_;
}
v___jp_2441_:
{
if (v___y_2442_ == 0)
{
return v___x_2440_;
}
else
{
if (v___x_2437_ == 0)
{
size_t v___x_2443_; size_t v___x_2444_; 
v___x_2443_ = ((size_t)1ULL);
v___x_2444_ = lean_usize_add(v_i_2435_, v___x_2443_);
v_i_2435_ = v___x_2444_;
goto _start;
}
else
{
return v___x_2440_;
}
}
}
}
else
{
uint8_t v___x_2449_; 
v___x_2449_ = 0;
return v___x_2449_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__4___boxed(lean_object* v_x1_2450_, lean_object* v_as_2451_, lean_object* v_i_2452_, lean_object* v_stop_2453_){
_start:
{
size_t v_i_boxed_2454_; size_t v_stop_boxed_2455_; uint8_t v_res_2456_; lean_object* v_r_2457_; 
v_i_boxed_2454_ = lean_unbox_usize(v_i_2452_);
lean_dec(v_i_2452_);
v_stop_boxed_2455_ = lean_unbox_usize(v_stop_2453_);
lean_dec(v_stop_2453_);
v_res_2456_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__4(v_x1_2450_, v_as_2451_, v_i_boxed_2454_, v_stop_boxed_2455_);
lean_dec_ref(v_as_2451_);
lean_dec_ref(v_x1_2450_);
v_r_2457_ = lean_box(v_res_2456_);
return v_r_2457_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__0(lean_object* v_y_2458_, lean_object* v_as_2459_, size_t v_i_2460_, size_t v_stop_2461_){
_start:
{
uint8_t v___x_2462_; 
v___x_2462_ = lean_usize_dec_eq(v_i_2460_, v_stop_2461_);
if (v___x_2462_ == 0)
{
uint8_t v___x_2463_; uint8_t v___y_2465_; lean_object* v___x_2469_; 
v___x_2463_ = 1;
v___x_2469_ = lean_array_uget_borrowed(v_as_2459_, v_i_2460_);
if (lean_obj_tag(v___x_2469_) == 0)
{
v___y_2465_ = v___x_2462_;
goto v___jp_2464_;
}
else
{
lean_object* v_fvarId_2470_; uint8_t v___x_2471_; 
v_fvarId_2470_ = lean_ctor_get(v___x_2469_, 0);
v___x_2471_ = l_Lean_instBEqFVarId_beq(v_y_2458_, v_fvarId_2470_);
v___y_2465_ = v___x_2471_;
goto v___jp_2464_;
}
v___jp_2464_:
{
if (v___y_2465_ == 0)
{
size_t v___x_2466_; size_t v___x_2467_; 
v___x_2466_ = ((size_t)1ULL);
v___x_2467_ = lean_usize_add(v_i_2460_, v___x_2466_);
v_i_2460_ = v___x_2467_;
goto _start;
}
else
{
return v___x_2463_;
}
}
}
else
{
uint8_t v___x_2472_; 
v___x_2472_ = 0;
return v___x_2472_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__0___boxed(lean_object* v_y_2473_, lean_object* v_as_2474_, lean_object* v_i_2475_, lean_object* v_stop_2476_){
_start:
{
size_t v_i_boxed_2477_; size_t v_stop_boxed_2478_; uint8_t v_res_2479_; lean_object* v_r_2480_; 
v_i_boxed_2477_ = lean_unbox_usize(v_i_2475_);
lean_dec(v_i_2475_);
v_stop_boxed_2478_ = lean_unbox_usize(v_stop_2476_);
lean_dec(v_stop_2476_);
v_res_2479_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__0(v_y_2473_, v_as_2474_, v_i_boxed_2477_, v_stop_boxed_2478_);
lean_dec_ref(v_as_2474_);
lean_dec(v_y_2473_);
v_r_2480_ = lean_box(v_res_2479_);
return v_r_2480_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5_spec__6(lean_object* v_msg_2481_){
_start:
{
lean_object* v___x_2482_; lean_object* v___x_2483_; 
v___x_2482_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default;
v___x_2483_ = lean_panic_fn_borrowed(v___x_2482_, v_msg_2481_);
return v___x_2483_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___closed__3(void){
_start:
{
lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; 
v___x_2487_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___closed__2));
v___x_2488_ = lean_unsigned_to_nat(11u);
v___x_2489_ = lean_unsigned_to_nat(163u);
v___x_2490_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___closed__1));
v___x_2491_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___closed__0));
v___x_2492_ = l_mkPanicMessageWithDecl(v___x_2491_, v___x_2490_, v___x_2489_, v___x_2488_, v___x_2487_);
return v___x_2492_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5(lean_object* v_a_2493_, lean_object* v_x_2494_){
_start:
{
if (lean_obj_tag(v_x_2494_) == 0)
{
lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2495_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___closed__3);
v___x_2496_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5_spec__6(v___x_2495_);
return v___x_2496_;
}
else
{
lean_object* v_key_2497_; lean_object* v_value_2498_; lean_object* v_tail_2499_; uint8_t v___x_2500_; 
v_key_2497_ = lean_ctor_get(v_x_2494_, 0);
v_value_2498_ = lean_ctor_get(v_x_2494_, 1);
v_tail_2499_ = lean_ctor_get(v_x_2494_, 2);
v___x_2500_ = l_Lean_instBEqFVarId_beq(v_key_2497_, v_a_2493_);
if (v___x_2500_ == 0)
{
v_x_2494_ = v_tail_2499_;
goto _start;
}
else
{
lean_inc(v_value_2498_);
return v_value_2498_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_a_2502_, lean_object* v_x_2503_){
_start:
{
lean_object* v_res_2504_; 
v_res_2504_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5(v_a_2502_, v_x_2503_);
lean_dec(v_x_2503_);
lean_dec(v_a_2502_);
return v_res_2504_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3(lean_object* v_m_2505_, lean_object* v_a_2506_){
_start:
{
lean_object* v_buckets_2507_; lean_object* v___x_2508_; uint64_t v___x_2509_; uint64_t v___x_2510_; uint64_t v___x_2511_; uint64_t v_fold_2512_; uint64_t v___x_2513_; uint64_t v___x_2514_; uint64_t v___x_2515_; size_t v___x_2516_; size_t v___x_2517_; size_t v___x_2518_; size_t v___x_2519_; size_t v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; 
v_buckets_2507_ = lean_ctor_get(v_m_2505_, 1);
v___x_2508_ = lean_array_get_size(v_buckets_2507_);
v___x_2509_ = l_Lean_instHashableFVarId_hash(v_a_2506_);
v___x_2510_ = 32ULL;
v___x_2511_ = lean_uint64_shift_right(v___x_2509_, v___x_2510_);
v_fold_2512_ = lean_uint64_xor(v___x_2509_, v___x_2511_);
v___x_2513_ = 16ULL;
v___x_2514_ = lean_uint64_shift_right(v_fold_2512_, v___x_2513_);
v___x_2515_ = lean_uint64_xor(v_fold_2512_, v___x_2514_);
v___x_2516_ = lean_uint64_to_usize(v___x_2515_);
v___x_2517_ = lean_usize_of_nat(v___x_2508_);
v___x_2518_ = ((size_t)1ULL);
v___x_2519_ = lean_usize_sub(v___x_2517_, v___x_2518_);
v___x_2520_ = lean_usize_land(v___x_2516_, v___x_2519_);
v___x_2521_ = lean_array_uget_borrowed(v_buckets_2507_, v___x_2520_);
v___x_2522_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3_spec__5(v_a_2506_, v___x_2521_);
return v___x_2522_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3___boxed(lean_object* v_m_2523_, lean_object* v_a_2524_){
_start:
{
lean_object* v_res_2525_; 
v_res_2525_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3(v_m_2523_, v_a_2524_);
lean_dec(v_a_2524_);
lean_dec_ref(v_m_2523_);
return v_res_2525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2(lean_object* v___x_2526_, lean_object* v_args_2527_, uint8_t v___x_2528_, lean_object* v_fvarId_2529_, lean_object* v_derivedValMap_2530_, lean_object* v_liveVars_2531_){
_start:
{
lean_object* v___x_2532_; 
v___x_2532_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1___redArg(v_derivedValMap_2530_, v_fvarId_2529_);
if (lean_obj_tag(v___x_2532_) == 1)
{
lean_object* v_val_2533_; lean_object* v_children_2534_; lean_object* v_buckets_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; uint8_t v___x_2538_; 
v_val_2533_ = lean_ctor_get(v___x_2532_, 0);
lean_inc(v_val_2533_);
lean_dec_ref(v___x_2532_);
v_children_2534_ = lean_ctor_get(v_val_2533_, 1);
lean_inc_ref(v_children_2534_);
lean_dec(v_val_2533_);
v_buckets_2535_ = lean_ctor_get(v_children_2534_, 1);
lean_inc_ref(v_buckets_2535_);
lean_dec_ref(v_children_2534_);
v___x_2536_ = lean_unsigned_to_nat(0u);
v___x_2537_ = lean_array_get_size(v_buckets_2535_);
v___x_2538_ = lean_nat_dec_lt(v___x_2536_, v___x_2537_);
if (v___x_2538_ == 0)
{
lean_dec_ref(v_buckets_2535_);
return v_liveVars_2531_;
}
else
{
uint8_t v___x_2539_; 
v___x_2539_ = lean_nat_dec_le(v___x_2537_, v___x_2537_);
if (v___x_2539_ == 0)
{
if (v___x_2538_ == 0)
{
lean_dec_ref(v_buckets_2535_);
return v_liveVars_2531_;
}
else
{
size_t v___x_2540_; size_t v___x_2541_; lean_object* v___x_2542_; 
v___x_2540_ = ((size_t)0ULL);
v___x_2541_ = lean_usize_of_nat(v___x_2537_);
v___x_2542_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__6(v___x_2526_, v_args_2527_, v___x_2528_, v_derivedValMap_2530_, v_buckets_2535_, v___x_2540_, v___x_2541_, v_liveVars_2531_);
lean_dec_ref(v_buckets_2535_);
return v___x_2542_;
}
}
else
{
size_t v___x_2543_; size_t v___x_2544_; lean_object* v___x_2545_; 
v___x_2543_ = ((size_t)0ULL);
v___x_2544_ = lean_usize_of_nat(v___x_2537_);
v___x_2545_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__6(v___x_2526_, v_args_2527_, v___x_2528_, v_derivedValMap_2530_, v_buckets_2535_, v___x_2543_, v___x_2544_, v_liveVars_2531_);
lean_dec_ref(v_buckets_2535_);
return v___x_2545_;
}
}
}
else
{
lean_dec(v___x_2532_);
return v_liveVars_2531_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__5_spec__8(lean_object* v___x_2546_, lean_object* v_args_2547_, uint8_t v___x_2548_, lean_object* v_derivedValMap_2549_, lean_object* v_x_2550_, lean_object* v_x_2551_){
_start:
{
if (lean_obj_tag(v_x_2551_) == 0)
{
return v_x_2550_;
}
else
{
lean_object* v_key_2552_; lean_object* v_tail_2553_; uint8_t v___y_2569_; lean_object* v_cinfo_2581_; lean_object* v_parents_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; uint8_t v___x_2585_; 
v_key_2552_ = lean_ctor_get(v_x_2551_, 0);
lean_inc(v_key_2552_);
v_tail_2553_ = lean_ctor_get(v_x_2551_, 2);
lean_inc(v_tail_2553_);
lean_dec_ref(v_x_2551_);
v_cinfo_2581_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3(v_derivedValMap_2549_, v_key_2552_);
v_parents_2582_ = lean_ctor_get(v_cinfo_2581_, 0);
lean_inc_ref(v_parents_2582_);
lean_dec_ref(v_cinfo_2581_);
v___x_2583_ = lean_unsigned_to_nat(0u);
v___x_2584_ = lean_array_get_size(v_parents_2582_);
v___x_2585_ = lean_nat_dec_lt(v___x_2583_, v___x_2584_);
if (v___x_2585_ == 0)
{
lean_dec_ref(v_parents_2582_);
goto v___jp_2572_;
}
else
{
if (v___x_2585_ == 0)
{
lean_dec_ref(v_parents_2582_);
goto v___jp_2572_;
}
else
{
size_t v___x_2586_; size_t v___x_2587_; uint8_t v___x_2588_; 
v___x_2586_ = ((size_t)0ULL);
v___x_2587_ = lean_usize_of_nat(v___x_2584_);
v___x_2588_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__4(v_x_2550_, v_parents_2582_, v___x_2586_, v___x_2587_);
lean_dec_ref(v_parents_2582_);
if (v___x_2588_ == 0)
{
goto v___jp_2572_;
}
else
{
lean_object* v___x_2589_; 
v___x_2589_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2(v___x_2546_, v_args_2547_, v___x_2548_, v_key_2552_, v_derivedValMap_2549_, v_x_2550_);
lean_dec(v_key_2552_);
v_x_2550_ = v___x_2589_;
v_x_2551_ = v_tail_2553_;
goto _start;
}
}
}
v___jp_2554_:
{
lean_object* v_vars_2555_; lean_object* v_borrows_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2567_; 
v_vars_2555_ = lean_ctor_get(v_x_2550_, 0);
v_borrows_2556_ = lean_ctor_get(v_x_2550_, 1);
v_isSharedCheck_2567_ = !lean_is_exclusive(v_x_2550_);
if (v_isSharedCheck_2567_ == 0)
{
v___x_2558_ = v_x_2550_;
v_isShared_2559_ = v_isSharedCheck_2567_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_borrows_2556_);
lean_inc(v_vars_2555_);
lean_dec(v_x_2550_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2567_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2563_; 
v___x_2560_ = lean_box(0);
lean_inc(v_key_2552_);
v___x_2561_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(v_borrows_2556_, v_key_2552_, v___x_2560_);
if (v_isShared_2559_ == 0)
{
lean_ctor_set(v___x_2558_, 1, v___x_2561_);
v___x_2563_ = v___x_2558_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2566_; 
v_reuseFailAlloc_2566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2566_, 0, v_vars_2555_);
lean_ctor_set(v_reuseFailAlloc_2566_, 1, v___x_2561_);
v___x_2563_ = v_reuseFailAlloc_2566_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
lean_object* v___x_2564_; 
v___x_2564_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2(v___x_2546_, v_args_2547_, v___x_2548_, v_key_2552_, v_derivedValMap_2549_, v___x_2563_);
lean_dec(v_key_2552_);
v_x_2550_ = v___x_2564_;
v_x_2551_ = v_tail_2553_;
goto _start;
}
}
}
v___jp_2568_:
{
if (v___y_2569_ == 0)
{
lean_object* v___x_2570_; 
v___x_2570_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2(v___x_2546_, v_args_2547_, v___x_2548_, v_key_2552_, v_derivedValMap_2549_, v_x_2550_);
lean_dec(v_key_2552_);
v_x_2550_ = v___x_2570_;
v_x_2551_ = v_tail_2553_;
goto _start;
}
else
{
goto v___jp_2554_;
}
}
v___jp_2572_:
{
lean_object* v_vars_2573_; uint8_t v___x_2574_; 
v_vars_2573_ = lean_ctor_get(v___x_2546_, 0);
v___x_2574_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_2573_, v_key_2552_);
if (v___x_2574_ == 0)
{
lean_object* v___x_2575_; lean_object* v___x_2576_; uint8_t v___x_2577_; 
v___x_2575_ = lean_unsigned_to_nat(0u);
v___x_2576_ = lean_array_get_size(v_args_2547_);
v___x_2577_ = lean_nat_dec_lt(v___x_2575_, v___x_2576_);
if (v___x_2577_ == 0)
{
goto v___jp_2554_;
}
else
{
if (v___x_2577_ == 0)
{
goto v___jp_2554_;
}
else
{
size_t v___x_2578_; size_t v___x_2579_; uint8_t v___x_2580_; 
v___x_2578_ = ((size_t)0ULL);
v___x_2579_ = lean_usize_of_nat(v___x_2576_);
v___x_2580_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__0(v_key_2552_, v_args_2547_, v___x_2578_, v___x_2579_);
if (v___x_2580_ == 0)
{
goto v___jp_2554_;
}
else
{
v___y_2569_ = v___x_2574_;
goto v___jp_2568_;
}
}
}
}
else
{
v___y_2569_ = v___x_2548_;
goto v___jp_2568_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__5(lean_object* v___x_2591_, lean_object* v_args_2592_, uint8_t v___x_2593_, lean_object* v_derivedValMap_2594_, lean_object* v_x_2595_, lean_object* v_x_2596_){
_start:
{
if (lean_obj_tag(v_x_2596_) == 0)
{
return v_x_2595_;
}
else
{
lean_object* v_key_2597_; lean_object* v_tail_2598_; uint8_t v___y_2614_; lean_object* v_cinfo_2626_; lean_object* v_parents_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; uint8_t v___x_2630_; 
v_key_2597_ = lean_ctor_get(v_x_2596_, 0);
lean_inc(v_key_2597_);
v_tail_2598_ = lean_ctor_get(v_x_2596_, 2);
lean_inc(v_tail_2598_);
lean_dec_ref(v_x_2596_);
v_cinfo_2626_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3(v_derivedValMap_2594_, v_key_2597_);
v_parents_2627_ = lean_ctor_get(v_cinfo_2626_, 0);
lean_inc_ref(v_parents_2627_);
lean_dec_ref(v_cinfo_2626_);
v___x_2628_ = lean_unsigned_to_nat(0u);
v___x_2629_ = lean_array_get_size(v_parents_2627_);
v___x_2630_ = lean_nat_dec_lt(v___x_2628_, v___x_2629_);
if (v___x_2630_ == 0)
{
lean_dec_ref(v_parents_2627_);
goto v___jp_2617_;
}
else
{
if (v___x_2630_ == 0)
{
lean_dec_ref(v_parents_2627_);
goto v___jp_2617_;
}
else
{
size_t v___x_2631_; size_t v___x_2632_; uint8_t v___x_2633_; 
v___x_2631_ = ((size_t)0ULL);
v___x_2632_ = lean_usize_of_nat(v___x_2629_);
v___x_2633_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__4(v_x_2595_, v_parents_2627_, v___x_2631_, v___x_2632_);
lean_dec_ref(v_parents_2627_);
if (v___x_2633_ == 0)
{
goto v___jp_2617_;
}
else
{
lean_object* v___x_2634_; lean_object* v___x_2635_; 
v___x_2634_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2(v___x_2591_, v_args_2592_, v___x_2593_, v_key_2597_, v_derivedValMap_2594_, v_x_2595_);
lean_dec(v_key_2597_);
v___x_2635_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__5_spec__8(v___x_2591_, v_args_2592_, v___x_2593_, v_derivedValMap_2594_, v___x_2634_, v_tail_2598_);
return v___x_2635_;
}
}
}
v___jp_2599_:
{
lean_object* v_vars_2600_; lean_object* v_borrows_2601_; lean_object* v___x_2603_; uint8_t v_isShared_2604_; uint8_t v_isSharedCheck_2612_; 
v_vars_2600_ = lean_ctor_get(v_x_2595_, 0);
v_borrows_2601_ = lean_ctor_get(v_x_2595_, 1);
v_isSharedCheck_2612_ = !lean_is_exclusive(v_x_2595_);
if (v_isSharedCheck_2612_ == 0)
{
v___x_2603_ = v_x_2595_;
v_isShared_2604_ = v_isSharedCheck_2612_;
goto v_resetjp_2602_;
}
else
{
lean_inc(v_borrows_2601_);
lean_inc(v_vars_2600_);
lean_dec(v_x_2595_);
v___x_2603_ = lean_box(0);
v_isShared_2604_ = v_isSharedCheck_2612_;
goto v_resetjp_2602_;
}
v_resetjp_2602_:
{
lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2608_; 
v___x_2605_ = lean_box(0);
lean_inc(v_key_2597_);
v___x_2606_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(v_borrows_2601_, v_key_2597_, v___x_2605_);
if (v_isShared_2604_ == 0)
{
lean_ctor_set(v___x_2603_, 1, v___x_2606_);
v___x_2608_ = v___x_2603_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v_vars_2600_);
lean_ctor_set(v_reuseFailAlloc_2611_, 1, v___x_2606_);
v___x_2608_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
lean_object* v___x_2609_; lean_object* v___x_2610_; 
v___x_2609_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2(v___x_2591_, v_args_2592_, v___x_2593_, v_key_2597_, v_derivedValMap_2594_, v___x_2608_);
lean_dec(v_key_2597_);
v___x_2610_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__5_spec__8(v___x_2591_, v_args_2592_, v___x_2593_, v_derivedValMap_2594_, v___x_2609_, v_tail_2598_);
return v___x_2610_;
}
}
}
v___jp_2613_:
{
if (v___y_2614_ == 0)
{
lean_object* v___x_2615_; lean_object* v___x_2616_; 
v___x_2615_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2(v___x_2591_, v_args_2592_, v___x_2593_, v_key_2597_, v_derivedValMap_2594_, v_x_2595_);
lean_dec(v_key_2597_);
v___x_2616_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__5_spec__8(v___x_2591_, v_args_2592_, v___x_2593_, v_derivedValMap_2594_, v___x_2615_, v_tail_2598_);
return v___x_2616_;
}
else
{
goto v___jp_2599_;
}
}
v___jp_2617_:
{
lean_object* v_vars_2618_; uint8_t v___x_2619_; 
v_vars_2618_ = lean_ctor_get(v___x_2591_, 0);
v___x_2619_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_2618_, v_key_2597_);
if (v___x_2619_ == 0)
{
lean_object* v___x_2620_; lean_object* v___x_2621_; uint8_t v___x_2622_; 
v___x_2620_ = lean_unsigned_to_nat(0u);
v___x_2621_ = lean_array_get_size(v_args_2592_);
v___x_2622_ = lean_nat_dec_lt(v___x_2620_, v___x_2621_);
if (v___x_2622_ == 0)
{
goto v___jp_2599_;
}
else
{
if (v___x_2622_ == 0)
{
goto v___jp_2599_;
}
else
{
size_t v___x_2623_; size_t v___x_2624_; uint8_t v___x_2625_; 
v___x_2623_ = ((size_t)0ULL);
v___x_2624_ = lean_usize_of_nat(v___x_2621_);
v___x_2625_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__0(v_key_2597_, v_args_2592_, v___x_2623_, v___x_2624_);
if (v___x_2625_ == 0)
{
goto v___jp_2599_;
}
else
{
v___y_2614_ = v___x_2619_;
goto v___jp_2613_;
}
}
}
}
else
{
v___y_2614_ = v___x_2593_;
goto v___jp_2613_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__6(lean_object* v___x_2636_, lean_object* v_args_2637_, uint8_t v___x_2638_, lean_object* v_derivedValMap_2639_, lean_object* v_as_2640_, size_t v_i_2641_, size_t v_stop_2642_, lean_object* v_b_2643_){
_start:
{
uint8_t v___x_2644_; 
v___x_2644_ = lean_usize_dec_eq(v_i_2641_, v_stop_2642_);
if (v___x_2644_ == 0)
{
lean_object* v___x_2645_; lean_object* v___x_2646_; size_t v___x_2647_; size_t v___x_2648_; 
v___x_2645_ = lean_array_uget_borrowed(v_as_2640_, v_i_2641_);
lean_inc(v___x_2645_);
v___x_2646_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__5(v___x_2636_, v_args_2637_, v___x_2638_, v_derivedValMap_2639_, v_b_2643_, v___x_2645_);
v___x_2647_ = ((size_t)1ULL);
v___x_2648_ = lean_usize_add(v_i_2641_, v___x_2647_);
v_i_2641_ = v___x_2648_;
v_b_2643_ = v___x_2646_;
goto _start;
}
else
{
return v_b_2643_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__6___boxed(lean_object* v___x_2650_, lean_object* v_args_2651_, lean_object* v___x_2652_, lean_object* v_derivedValMap_2653_, lean_object* v_as_2654_, lean_object* v_i_2655_, lean_object* v_stop_2656_, lean_object* v_b_2657_){
_start:
{
uint8_t v___x_2798__boxed_2658_; size_t v_i_boxed_2659_; size_t v_stop_boxed_2660_; lean_object* v_res_2661_; 
v___x_2798__boxed_2658_ = lean_unbox(v___x_2652_);
v_i_boxed_2659_ = lean_unbox_usize(v_i_2655_);
lean_dec(v_i_2655_);
v_stop_boxed_2660_ = lean_unbox_usize(v_stop_2656_);
lean_dec(v_stop_2656_);
v_res_2661_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__6(v___x_2650_, v_args_2651_, v___x_2798__boxed_2658_, v_derivedValMap_2653_, v_as_2654_, v_i_boxed_2659_, v_stop_boxed_2660_, v_b_2657_);
lean_dec_ref(v_as_2654_);
lean_dec_ref(v_derivedValMap_2653_);
lean_dec_ref(v_args_2651_);
lean_dec_ref(v___x_2650_);
return v_res_2661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___boxed(lean_object* v___x_2662_, lean_object* v_args_2663_, lean_object* v___x_2664_, lean_object* v_fvarId_2665_, lean_object* v_derivedValMap_2666_, lean_object* v_liveVars_2667_){
_start:
{
uint8_t v___x_2806__boxed_2668_; lean_object* v_res_2669_; 
v___x_2806__boxed_2668_ = lean_unbox(v___x_2664_);
v_res_2669_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2(v___x_2662_, v_args_2663_, v___x_2806__boxed_2668_, v_fvarId_2665_, v_derivedValMap_2666_, v_liveVars_2667_);
lean_dec_ref(v_derivedValMap_2666_);
lean_dec(v_fvarId_2665_);
lean_dec_ref(v_args_2663_);
lean_dec_ref(v___x_2662_);
return v_res_2669_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__5_spec__8___boxed(lean_object* v___x_2670_, lean_object* v_args_2671_, lean_object* v___x_2672_, lean_object* v_derivedValMap_2673_, lean_object* v_x_2674_, lean_object* v_x_2675_){
_start:
{
uint8_t v___x_2820__boxed_2676_; lean_object* v_res_2677_; 
v___x_2820__boxed_2676_ = lean_unbox(v___x_2672_);
v_res_2677_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__5_spec__8(v___x_2670_, v_args_2671_, v___x_2820__boxed_2676_, v_derivedValMap_2673_, v_x_2674_, v_x_2675_);
lean_dec_ref(v_derivedValMap_2673_);
lean_dec_ref(v_args_2671_);
lean_dec_ref(v___x_2670_);
return v_res_2677_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__5___boxed(lean_object* v___x_2678_, lean_object* v_args_2679_, lean_object* v___x_2680_, lean_object* v_derivedValMap_2681_, lean_object* v_x_2682_, lean_object* v_x_2683_){
_start:
{
uint8_t v___x_2853__boxed_2684_; lean_object* v_res_2685_; 
v___x_2853__boxed_2684_ = lean_unbox(v___x_2680_);
v_res_2685_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__5(v___x_2678_, v_args_2679_, v___x_2853__boxed_2684_, v_derivedValMap_2681_, v_x_2682_, v_x_2683_);
lean_dec_ref(v_derivedValMap_2681_);
lean_dec_ref(v_args_2679_);
lean_dec_ref(v___x_2678_);
return v_res_2685_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg(lean_object* v_args_2686_, lean_object* v_fvarId_2687_, lean_object* v_a_2688_, lean_object* v_a_2689_){
_start:
{
lean_object* v___x_2691_; lean_object* v_vars_2692_; uint8_t v___x_2693_; 
v___x_2691_ = lean_st_ref_get(v_a_2689_);
v_vars_2692_ = lean_ctor_get(v___x_2691_, 0);
lean_inc_ref(v_vars_2692_);
lean_dec(v___x_2691_);
v___x_2693_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_2692_, v_fvarId_2687_);
lean_dec_ref(v_vars_2692_);
if (v___x_2693_ == 0)
{
lean_object* v___x_2694_; lean_object* v_vars_2695_; lean_object* v_borrows_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2711_; 
v___x_2694_ = lean_st_ref_take(v_a_2689_);
v_vars_2695_ = lean_ctor_get(v___x_2694_, 0);
v_borrows_2696_ = lean_ctor_get(v___x_2694_, 1);
v_isSharedCheck_2711_ = !lean_is_exclusive(v___x_2694_);
if (v_isSharedCheck_2711_ == 0)
{
v___x_2698_ = v___x_2694_;
v_isShared_2699_ = v_isSharedCheck_2711_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_borrows_2696_);
lean_inc(v_vars_2695_);
lean_dec(v___x_2694_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2711_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2703_; 
v___x_2700_ = lean_box(0);
lean_inc(v_fvarId_2687_);
v___x_2701_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(v_vars_2695_, v_fvarId_2687_, v___x_2700_);
if (v_isShared_2699_ == 0)
{
lean_ctor_set(v___x_2698_, 0, v___x_2701_);
v___x_2703_ = v___x_2698_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v___x_2701_);
lean_ctor_set(v_reuseFailAlloc_2710_, 1, v_borrows_2696_);
v___x_2703_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v_derivedValMap_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; 
v___x_2704_ = lean_st_ref_set(v_a_2689_, v___x_2703_);
v___x_2705_ = lean_st_ref_take(v_a_2689_);
v_derivedValMap_2706_ = lean_ctor_get(v_a_2688_, 1);
lean_inc(v___x_2705_);
v___x_2707_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2(v___x_2705_, v_args_2686_, v___x_2693_, v_fvarId_2687_, v_derivedValMap_2706_, v___x_2705_);
lean_dec(v_fvarId_2687_);
lean_dec(v___x_2705_);
v___x_2708_ = lean_st_ref_set(v_a_2689_, v___x_2707_);
v___x_2709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2709_, 0, v___x_2700_);
return v___x_2709_;
}
}
}
else
{
lean_object* v___x_2712_; lean_object* v___x_2713_; 
lean_dec(v_fvarId_2687_);
v___x_2712_ = lean_box(0);
v___x_2713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2713_, 0, v___x_2712_);
return v___x_2713_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg___boxed(lean_object* v_args_2714_, lean_object* v_fvarId_2715_, lean_object* v_a_2716_, lean_object* v_a_2717_, lean_object* v_a_2718_){
_start:
{
lean_object* v_res_2719_; 
v_res_2719_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg(v_args_2714_, v_fvarId_2715_, v_a_2716_, v_a_2717_);
lean_dec(v_a_2717_);
lean_dec_ref(v_a_2716_);
lean_dec_ref(v_args_2714_);
return v_res_2719_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2(lean_object* v_args_2720_, lean_object* v_as_2721_, size_t v_i_2722_, size_t v_stop_2723_, lean_object* v_b_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_){
_start:
{
lean_object* v_a_2733_; uint8_t v___x_2737_; 
v___x_2737_ = lean_usize_dec_eq(v_i_2722_, v_stop_2723_);
if (v___x_2737_ == 0)
{
lean_object* v___x_2738_; 
v___x_2738_ = lean_array_uget_borrowed(v_as_2721_, v_i_2722_);
if (lean_obj_tag(v___x_2738_) == 0)
{
lean_object* v___x_2739_; 
v___x_2739_ = lean_box(0);
v_a_2733_ = v___x_2739_;
goto v___jp_2732_;
}
else
{
lean_object* v_fvarId_2740_; lean_object* v___x_2741_; 
v_fvarId_2740_ = lean_ctor_get(v___x_2738_, 0);
lean_inc(v_fvarId_2740_);
v___x_2741_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg(v_args_2720_, v_fvarId_2740_, v___y_2725_, v___y_2726_);
if (lean_obj_tag(v___x_2741_) == 0)
{
lean_object* v_a_2742_; 
v_a_2742_ = lean_ctor_get(v___x_2741_, 0);
lean_inc(v_a_2742_);
lean_dec_ref(v___x_2741_);
v_a_2733_ = v_a_2742_;
goto v___jp_2732_;
}
else
{
return v___x_2741_;
}
}
}
else
{
lean_object* v___x_2743_; 
v___x_2743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2743_, 0, v_b_2724_);
return v___x_2743_;
}
v___jp_2732_:
{
size_t v___x_2734_; size_t v___x_2735_; 
v___x_2734_ = ((size_t)1ULL);
v___x_2735_ = lean_usize_add(v_i_2722_, v___x_2734_);
v_i_2722_ = v___x_2735_;
v_b_2724_ = v_a_2733_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2___boxed(lean_object* v_args_2744_, lean_object* v_as_2745_, lean_object* v_i_2746_, lean_object* v_stop_2747_, lean_object* v_b_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_){
_start:
{
size_t v_i_boxed_2756_; size_t v_stop_boxed_2757_; lean_object* v_res_2758_; 
v_i_boxed_2756_ = lean_unbox_usize(v_i_2746_);
lean_dec(v_i_2746_);
v_stop_boxed_2757_ = lean_unbox_usize(v_stop_2747_);
lean_dec(v_stop_2747_);
v_res_2758_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2(v_args_2744_, v_as_2745_, v_i_boxed_2756_, v_stop_boxed_2757_, v_b_2748_, v___y_2749_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_);
lean_dec(v___y_2754_);
lean_dec_ref(v___y_2753_);
lean_dec(v___y_2752_);
lean_dec_ref(v___y_2751_);
lean_dec(v___y_2750_);
lean_dec_ref(v___y_2749_);
lean_dec_ref(v_as_2745_);
lean_dec_ref(v_args_2744_);
return v_res_2758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(lean_object* v_args_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_, lean_object* v_a_2762_, lean_object* v_a_2763_, lean_object* v_a_2764_, lean_object* v_a_2765_){
_start:
{
lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; uint8_t v___x_2770_; 
v___x_2767_ = lean_unsigned_to_nat(0u);
v___x_2768_ = lean_array_get_size(v_args_2759_);
v___x_2769_ = lean_box(0);
v___x_2770_ = lean_nat_dec_lt(v___x_2767_, v___x_2768_);
if (v___x_2770_ == 0)
{
lean_object* v___x_2771_; 
v___x_2771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2771_, 0, v___x_2769_);
return v___x_2771_;
}
else
{
uint8_t v___x_2772_; 
v___x_2772_ = lean_nat_dec_le(v___x_2768_, v___x_2768_);
if (v___x_2772_ == 0)
{
if (v___x_2770_ == 0)
{
lean_object* v___x_2773_; 
v___x_2773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2773_, 0, v___x_2769_);
return v___x_2773_;
}
else
{
size_t v___x_2774_; size_t v___x_2775_; lean_object* v___x_2776_; 
v___x_2774_ = ((size_t)0ULL);
v___x_2775_ = lean_usize_of_nat(v___x_2768_);
v___x_2776_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2(v_args_2759_, v_args_2759_, v___x_2774_, v___x_2775_, v___x_2769_, v_a_2760_, v_a_2761_, v_a_2762_, v_a_2763_, v_a_2764_, v_a_2765_);
return v___x_2776_;
}
}
else
{
size_t v___x_2777_; size_t v___x_2778_; lean_object* v___x_2779_; 
v___x_2777_ = ((size_t)0ULL);
v___x_2778_ = lean_usize_of_nat(v___x_2768_);
v___x_2779_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2(v_args_2759_, v_args_2759_, v___x_2777_, v___x_2778_, v___x_2769_, v_a_2760_, v_a_2761_, v_a_2762_, v_a_2763_, v_a_2764_, v_a_2765_);
return v___x_2779_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs___boxed(lean_object* v_args_2780_, lean_object* v_a_2781_, lean_object* v_a_2782_, lean_object* v_a_2783_, lean_object* v_a_2784_, lean_object* v_a_2785_, lean_object* v_a_2786_, lean_object* v_a_2787_){
_start:
{
lean_object* v_res_2788_; 
v_res_2788_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_2780_, v_a_2781_, v_a_2782_, v_a_2783_, v_a_2784_, v_a_2785_, v_a_2786_);
lean_dec(v_a_2786_);
lean_dec_ref(v_a_2785_);
lean_dec(v_a_2784_);
lean_dec_ref(v_a_2783_);
lean_dec(v_a_2782_);
lean_dec_ref(v_a_2781_);
lean_dec_ref(v_args_2780_);
return v_res_2788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1(lean_object* v_args_2789_, lean_object* v_fvarId_2790_, lean_object* v_a_2791_, lean_object* v_a_2792_, lean_object* v_a_2793_, lean_object* v_a_2794_, lean_object* v_a_2795_, lean_object* v_a_2796_){
_start:
{
lean_object* v___x_2798_; 
v___x_2798_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg(v_args_2789_, v_fvarId_2790_, v_a_2791_, v_a_2792_);
return v___x_2798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___boxed(lean_object* v_args_2799_, lean_object* v_fvarId_2800_, lean_object* v_a_2801_, lean_object* v_a_2802_, lean_object* v_a_2803_, lean_object* v_a_2804_, lean_object* v_a_2805_, lean_object* v_a_2806_, lean_object* v_a_2807_){
_start:
{
lean_object* v_res_2808_; 
v_res_2808_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1(v_args_2799_, v_fvarId_2800_, v_a_2801_, v_a_2802_, v_a_2803_, v_a_2804_, v_a_2805_, v_a_2806_);
lean_dec(v_a_2806_);
lean_dec_ref(v_a_2805_);
lean_dec(v_a_2804_);
lean_dec_ref(v_a_2803_);
lean_dec(v_a_2802_);
lean_dec_ref(v_a_2801_);
lean_dec_ref(v_args_2799_);
return v_res_2808_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1(lean_object* v_00_u03b2_2809_, lean_object* v_m_2810_, lean_object* v_a_2811_){
_start:
{
uint8_t v___x_2812_; 
v___x_2812_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_m_2810_, v_a_2811_);
return v___x_2812_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___boxed(lean_object* v_00_u03b2_2813_, lean_object* v_m_2814_, lean_object* v_a_2815_){
_start:
{
uint8_t v_res_2816_; lean_object* v_r_2817_; 
v_res_2816_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1(v_00_u03b2_2813_, v_m_2814_, v_a_2815_);
lean_dec(v_a_2815_);
lean_dec_ref(v_m_2814_);
v_r_2817_ = lean_box(v_res_2816_);
return v_r_2817_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__1(lean_object* v_msg_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_){
_start:
{
lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v_toApplicative_2828_; lean_object* v___x_2830_; uint8_t v_isShared_2831_; uint8_t v_isSharedCheck_2891_; 
v___x_2826_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__0);
v___x_2827_ = l_StateRefT_x27_instMonad___redArg(v___x_2826_);
v_toApplicative_2828_ = lean_ctor_get(v___x_2827_, 0);
v_isSharedCheck_2891_ = !lean_is_exclusive(v___x_2827_);
if (v_isSharedCheck_2891_ == 0)
{
lean_object* v_unused_2892_; 
v_unused_2892_ = lean_ctor_get(v___x_2827_, 1);
lean_dec(v_unused_2892_);
v___x_2830_ = v___x_2827_;
v_isShared_2831_ = v_isSharedCheck_2891_;
goto v_resetjp_2829_;
}
else
{
lean_inc(v_toApplicative_2828_);
lean_dec(v___x_2827_);
v___x_2830_ = lean_box(0);
v_isShared_2831_ = v_isSharedCheck_2891_;
goto v_resetjp_2829_;
}
v_resetjp_2829_:
{
lean_object* v_toFunctor_2832_; lean_object* v_toSeq_2833_; lean_object* v_toSeqLeft_2834_; lean_object* v_toSeqRight_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2889_; 
v_toFunctor_2832_ = lean_ctor_get(v_toApplicative_2828_, 0);
v_toSeq_2833_ = lean_ctor_get(v_toApplicative_2828_, 2);
v_toSeqLeft_2834_ = lean_ctor_get(v_toApplicative_2828_, 3);
v_toSeqRight_2835_ = lean_ctor_get(v_toApplicative_2828_, 4);
v_isSharedCheck_2889_ = !lean_is_exclusive(v_toApplicative_2828_);
if (v_isSharedCheck_2889_ == 0)
{
lean_object* v_unused_2890_; 
v_unused_2890_ = lean_ctor_get(v_toApplicative_2828_, 1);
lean_dec(v_unused_2890_);
v___x_2837_ = v_toApplicative_2828_;
v_isShared_2838_ = v_isSharedCheck_2889_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_toSeqRight_2835_);
lean_inc(v_toSeqLeft_2834_);
lean_inc(v_toSeq_2833_);
lean_inc(v_toFunctor_2832_);
lean_dec(v_toApplicative_2828_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2889_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___f_2839_; lean_object* v___f_2840_; lean_object* v___f_2841_; lean_object* v___f_2842_; lean_object* v___x_2843_; lean_object* v___f_2844_; lean_object* v___f_2845_; lean_object* v___f_2846_; lean_object* v___x_2848_; 
v___f_2839_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__1));
v___f_2840_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__2));
lean_inc_ref(v_toFunctor_2832_);
v___f_2841_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2841_, 0, v_toFunctor_2832_);
v___f_2842_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2842_, 0, v_toFunctor_2832_);
v___x_2843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2843_, 0, v___f_2841_);
lean_ctor_set(v___x_2843_, 1, v___f_2842_);
v___f_2844_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2844_, 0, v_toSeqRight_2835_);
v___f_2845_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2845_, 0, v_toSeqLeft_2834_);
v___f_2846_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2846_, 0, v_toSeq_2833_);
if (v_isShared_2838_ == 0)
{
lean_ctor_set(v___x_2837_, 4, v___f_2844_);
lean_ctor_set(v___x_2837_, 3, v___f_2845_);
lean_ctor_set(v___x_2837_, 2, v___f_2846_);
lean_ctor_set(v___x_2837_, 1, v___f_2839_);
lean_ctor_set(v___x_2837_, 0, v___x_2843_);
v___x_2848_ = v___x_2837_;
goto v_reusejp_2847_;
}
else
{
lean_object* v_reuseFailAlloc_2888_; 
v_reuseFailAlloc_2888_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2888_, 0, v___x_2843_);
lean_ctor_set(v_reuseFailAlloc_2888_, 1, v___f_2839_);
lean_ctor_set(v_reuseFailAlloc_2888_, 2, v___f_2846_);
lean_ctor_set(v_reuseFailAlloc_2888_, 3, v___f_2845_);
lean_ctor_set(v_reuseFailAlloc_2888_, 4, v___f_2844_);
v___x_2848_ = v_reuseFailAlloc_2888_;
goto v_reusejp_2847_;
}
v_reusejp_2847_:
{
lean_object* v___x_2850_; 
if (v_isShared_2831_ == 0)
{
lean_ctor_set(v___x_2830_, 1, v___f_2840_);
lean_ctor_set(v___x_2830_, 0, v___x_2848_);
v___x_2850_ = v___x_2830_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2887_; 
v_reuseFailAlloc_2887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2887_, 0, v___x_2848_);
lean_ctor_set(v_reuseFailAlloc_2887_, 1, v___f_2840_);
v___x_2850_ = v_reuseFailAlloc_2887_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
lean_object* v___x_2851_; lean_object* v_toApplicative_2852_; lean_object* v___x_2854_; uint8_t v_isShared_2855_; uint8_t v_isSharedCheck_2885_; 
v___x_2851_ = l_StateRefT_x27_instMonad___redArg(v___x_2850_);
v_toApplicative_2852_ = lean_ctor_get(v___x_2851_, 0);
v_isSharedCheck_2885_ = !lean_is_exclusive(v___x_2851_);
if (v_isSharedCheck_2885_ == 0)
{
lean_object* v_unused_2886_; 
v_unused_2886_ = lean_ctor_get(v___x_2851_, 1);
lean_dec(v_unused_2886_);
v___x_2854_ = v___x_2851_;
v_isShared_2855_ = v_isSharedCheck_2885_;
goto v_resetjp_2853_;
}
else
{
lean_inc(v_toApplicative_2852_);
lean_dec(v___x_2851_);
v___x_2854_ = lean_box(0);
v_isShared_2855_ = v_isSharedCheck_2885_;
goto v_resetjp_2853_;
}
v_resetjp_2853_:
{
lean_object* v_toFunctor_2856_; lean_object* v_toSeq_2857_; lean_object* v_toSeqLeft_2858_; lean_object* v_toSeqRight_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2883_; 
v_toFunctor_2856_ = lean_ctor_get(v_toApplicative_2852_, 0);
v_toSeq_2857_ = lean_ctor_get(v_toApplicative_2852_, 2);
v_toSeqLeft_2858_ = lean_ctor_get(v_toApplicative_2852_, 3);
v_toSeqRight_2859_ = lean_ctor_get(v_toApplicative_2852_, 4);
v_isSharedCheck_2883_ = !lean_is_exclusive(v_toApplicative_2852_);
if (v_isSharedCheck_2883_ == 0)
{
lean_object* v_unused_2884_; 
v_unused_2884_ = lean_ctor_get(v_toApplicative_2852_, 1);
lean_dec(v_unused_2884_);
v___x_2861_ = v_toApplicative_2852_;
v_isShared_2862_ = v_isSharedCheck_2883_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_toSeqRight_2859_);
lean_inc(v_toSeqLeft_2858_);
lean_inc(v_toSeq_2857_);
lean_inc(v_toFunctor_2856_);
lean_dec(v_toApplicative_2852_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2883_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v___f_2863_; lean_object* v___f_2864_; lean_object* v___f_2865_; lean_object* v___f_2866_; lean_object* v___x_2867_; lean_object* v___f_2868_; lean_object* v___f_2869_; lean_object* v___f_2870_; lean_object* v___x_2872_; 
v___f_2863_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__3));
v___f_2864_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__4));
lean_inc_ref(v_toFunctor_2856_);
v___f_2865_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2865_, 0, v_toFunctor_2856_);
v___f_2866_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2866_, 0, v_toFunctor_2856_);
v___x_2867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2867_, 0, v___f_2865_);
lean_ctor_set(v___x_2867_, 1, v___f_2866_);
v___f_2868_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2868_, 0, v_toSeqRight_2859_);
v___f_2869_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2869_, 0, v_toSeqLeft_2858_);
v___f_2870_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2870_, 0, v_toSeq_2857_);
if (v_isShared_2862_ == 0)
{
lean_ctor_set(v___x_2861_, 4, v___f_2868_);
lean_ctor_set(v___x_2861_, 3, v___f_2869_);
lean_ctor_set(v___x_2861_, 2, v___f_2870_);
lean_ctor_set(v___x_2861_, 1, v___f_2863_);
lean_ctor_set(v___x_2861_, 0, v___x_2867_);
v___x_2872_ = v___x_2861_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2882_; 
v_reuseFailAlloc_2882_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2882_, 0, v___x_2867_);
lean_ctor_set(v_reuseFailAlloc_2882_, 1, v___f_2863_);
lean_ctor_set(v_reuseFailAlloc_2882_, 2, v___f_2870_);
lean_ctor_set(v_reuseFailAlloc_2882_, 3, v___f_2869_);
lean_ctor_set(v_reuseFailAlloc_2882_, 4, v___f_2868_);
v___x_2872_ = v_reuseFailAlloc_2882_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
lean_object* v___x_2874_; 
if (v_isShared_2855_ == 0)
{
lean_ctor_set(v___x_2854_, 1, v___f_2864_);
lean_ctor_set(v___x_2854_, 0, v___x_2872_);
v___x_2874_ = v___x_2854_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v___x_2872_);
lean_ctor_set(v_reuseFailAlloc_2881_, 1, v___f_2864_);
v___x_2874_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___f_2878_; lean_object* v___x_1698__overap_2879_; lean_object* v___x_2880_; 
v___x_2875_ = l_StateRefT_x27_instMonad___redArg(v___x_2874_);
v___x_2876_ = lean_box(0);
v___x_2877_ = l_instInhabitedOfMonad___redArg(v___x_2875_, v___x_2876_);
v___f_2878_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2878_, 0, v___x_2877_);
v___x_1698__overap_2879_ = lean_panic_fn_borrowed(v___f_2878_, v_msg_2818_);
lean_dec_ref(v___f_2878_);
lean_inc(v___y_2824_);
lean_inc_ref(v___y_2823_);
lean_inc(v___y_2822_);
lean_inc_ref(v___y_2821_);
lean_inc(v___y_2820_);
lean_inc_ref(v___y_2819_);
v___x_2880_ = lean_apply_7(v___x_1698__overap_2879_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_, lean_box(0));
return v___x_2880_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__1___boxed(lean_object* v_msg_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_){
_start:
{
lean_object* v_res_2901_; 
v_res_2901_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__1(v_msg_2893_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
lean_dec(v___y_2899_);
lean_dec_ref(v___y_2898_);
lean_dec(v___y_2897_);
lean_dec_ref(v___y_2896_);
lean_dec(v___y_2895_);
lean_dec_ref(v___y_2894_);
return v_res_2901_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(lean_object* v___x_2902_, uint8_t v___x_2903_, lean_object* v_fvarId_2904_, lean_object* v_derivedValMap_2905_, lean_object* v_liveVars_2906_){
_start:
{
lean_object* v___x_2907_; 
v___x_2907_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1___redArg(v_derivedValMap_2905_, v_fvarId_2904_);
if (lean_obj_tag(v___x_2907_) == 1)
{
lean_object* v_val_2908_; lean_object* v_children_2909_; lean_object* v_buckets_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; uint8_t v___x_2913_; 
v_val_2908_ = lean_ctor_get(v___x_2907_, 0);
lean_inc(v_val_2908_);
lean_dec_ref(v___x_2907_);
v_children_2909_ = lean_ctor_get(v_val_2908_, 1);
lean_inc_ref(v_children_2909_);
lean_dec(v_val_2908_);
v_buckets_2910_ = lean_ctor_get(v_children_2909_, 1);
lean_inc_ref(v_buckets_2910_);
lean_dec_ref(v_children_2909_);
v___x_2911_ = lean_unsigned_to_nat(0u);
v___x_2912_ = lean_array_get_size(v_buckets_2910_);
v___x_2913_ = lean_nat_dec_lt(v___x_2911_, v___x_2912_);
if (v___x_2913_ == 0)
{
lean_dec_ref(v_buckets_2910_);
return v_liveVars_2906_;
}
else
{
uint8_t v___x_2914_; 
v___x_2914_ = lean_nat_dec_le(v___x_2912_, v___x_2912_);
if (v___x_2914_ == 0)
{
if (v___x_2913_ == 0)
{
lean_dec_ref(v_buckets_2910_);
return v_liveVars_2906_;
}
else
{
size_t v___x_2915_; size_t v___x_2916_; lean_object* v___x_2917_; 
v___x_2915_ = ((size_t)0ULL);
v___x_2916_ = lean_usize_of_nat(v___x_2912_);
v___x_2917_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__3(v___x_2902_, v___x_2903_, v_derivedValMap_2905_, v_buckets_2910_, v___x_2915_, v___x_2916_, v_liveVars_2906_);
lean_dec_ref(v_buckets_2910_);
return v___x_2917_;
}
}
else
{
size_t v___x_2918_; size_t v___x_2919_; lean_object* v___x_2920_; 
v___x_2918_ = ((size_t)0ULL);
v___x_2919_ = lean_usize_of_nat(v___x_2912_);
v___x_2920_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__3(v___x_2902_, v___x_2903_, v_derivedValMap_2905_, v_buckets_2910_, v___x_2918_, v___x_2919_, v_liveVars_2906_);
lean_dec_ref(v_buckets_2910_);
return v___x_2920_;
}
}
}
else
{
lean_dec(v___x_2907_);
return v_liveVars_2906_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__2_spec__3(lean_object* v___x_2921_, uint8_t v___x_2922_, lean_object* v_derivedValMap_2923_, lean_object* v_x_2924_, lean_object* v_x_2925_){
_start:
{
if (lean_obj_tag(v_x_2925_) == 0)
{
return v_x_2924_;
}
else
{
lean_object* v_key_2926_; lean_object* v_tail_2927_; lean_object* v_cinfo_2947_; lean_object* v_parents_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; uint8_t v___x_2951_; 
v_key_2926_ = lean_ctor_get(v_x_2925_, 0);
lean_inc(v_key_2926_);
v_tail_2927_ = lean_ctor_get(v_x_2925_, 2);
lean_inc(v_tail_2927_);
lean_dec_ref(v_x_2925_);
v_cinfo_2947_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3(v_derivedValMap_2923_, v_key_2926_);
v_parents_2948_ = lean_ctor_get(v_cinfo_2947_, 0);
lean_inc_ref(v_parents_2948_);
lean_dec_ref(v_cinfo_2947_);
v___x_2949_ = lean_unsigned_to_nat(0u);
v___x_2950_ = lean_array_get_size(v_parents_2948_);
v___x_2951_ = lean_nat_dec_lt(v___x_2949_, v___x_2950_);
if (v___x_2951_ == 0)
{
lean_dec_ref(v_parents_2948_);
goto v___jp_2942_;
}
else
{
if (v___x_2951_ == 0)
{
lean_dec_ref(v_parents_2948_);
goto v___jp_2942_;
}
else
{
size_t v___x_2952_; size_t v___x_2953_; uint8_t v___x_2954_; 
v___x_2952_ = ((size_t)0ULL);
v___x_2953_ = lean_usize_of_nat(v___x_2950_);
v___x_2954_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__4(v_x_2924_, v_parents_2948_, v___x_2952_, v___x_2953_);
lean_dec_ref(v_parents_2948_);
if (v___x_2954_ == 0)
{
goto v___jp_2942_;
}
else
{
lean_object* v___x_2955_; 
v___x_2955_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(v___x_2921_, v___x_2922_, v_key_2926_, v_derivedValMap_2923_, v_x_2924_);
lean_dec(v_key_2926_);
v_x_2924_ = v___x_2955_;
v_x_2925_ = v_tail_2927_;
goto _start;
}
}
}
v___jp_2928_:
{
lean_object* v_vars_2929_; lean_object* v_borrows_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2941_; 
v_vars_2929_ = lean_ctor_get(v_x_2924_, 0);
v_borrows_2930_ = lean_ctor_get(v_x_2924_, 1);
v_isSharedCheck_2941_ = !lean_is_exclusive(v_x_2924_);
if (v_isSharedCheck_2941_ == 0)
{
v___x_2932_ = v_x_2924_;
v_isShared_2933_ = v_isSharedCheck_2941_;
goto v_resetjp_2931_;
}
else
{
lean_inc(v_borrows_2930_);
lean_inc(v_vars_2929_);
lean_dec(v_x_2924_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_2941_;
goto v_resetjp_2931_;
}
v_resetjp_2931_:
{
lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2937_; 
v___x_2934_ = lean_box(0);
lean_inc(v_key_2926_);
v___x_2935_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(v_borrows_2930_, v_key_2926_, v___x_2934_);
if (v_isShared_2933_ == 0)
{
lean_ctor_set(v___x_2932_, 1, v___x_2935_);
v___x_2937_ = v___x_2932_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2940_; 
v_reuseFailAlloc_2940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2940_, 0, v_vars_2929_);
lean_ctor_set(v_reuseFailAlloc_2940_, 1, v___x_2935_);
v___x_2937_ = v_reuseFailAlloc_2940_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
lean_object* v___x_2938_; 
v___x_2938_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(v___x_2921_, v___x_2922_, v_key_2926_, v_derivedValMap_2923_, v___x_2937_);
lean_dec(v_key_2926_);
v_x_2924_ = v___x_2938_;
v_x_2925_ = v_tail_2927_;
goto _start;
}
}
}
v___jp_2942_:
{
lean_object* v_vars_2943_; uint8_t v___x_2944_; 
v_vars_2943_ = lean_ctor_get(v___x_2921_, 0);
v___x_2944_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_2943_, v_key_2926_);
if (v___x_2944_ == 0)
{
goto v___jp_2928_;
}
else
{
if (v___x_2922_ == 0)
{
lean_object* v___x_2945_; 
v___x_2945_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(v___x_2921_, v___x_2922_, v_key_2926_, v_derivedValMap_2923_, v_x_2924_);
lean_dec(v_key_2926_);
v_x_2924_ = v___x_2945_;
v_x_2925_ = v_tail_2927_;
goto _start;
}
else
{
goto v___jp_2928_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__2(lean_object* v___x_2957_, uint8_t v___x_2958_, lean_object* v_derivedValMap_2959_, lean_object* v_x_2960_, lean_object* v_x_2961_){
_start:
{
if (lean_obj_tag(v_x_2961_) == 0)
{
return v_x_2960_;
}
else
{
lean_object* v_key_2962_; lean_object* v_tail_2963_; lean_object* v_cinfo_2983_; lean_object* v_parents_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; uint8_t v___x_2987_; 
v_key_2962_ = lean_ctor_get(v_x_2961_, 0);
lean_inc(v_key_2962_);
v_tail_2963_ = lean_ctor_get(v_x_2961_, 2);
lean_inc(v_tail_2963_);
lean_dec_ref(v_x_2961_);
v_cinfo_2983_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3(v_derivedValMap_2959_, v_key_2962_);
v_parents_2984_ = lean_ctor_get(v_cinfo_2983_, 0);
lean_inc_ref(v_parents_2984_);
lean_dec_ref(v_cinfo_2983_);
v___x_2985_ = lean_unsigned_to_nat(0u);
v___x_2986_ = lean_array_get_size(v_parents_2984_);
v___x_2987_ = lean_nat_dec_lt(v___x_2985_, v___x_2986_);
if (v___x_2987_ == 0)
{
lean_dec_ref(v_parents_2984_);
goto v___jp_2978_;
}
else
{
if (v___x_2987_ == 0)
{
lean_dec_ref(v_parents_2984_);
goto v___jp_2978_;
}
else
{
size_t v___x_2988_; size_t v___x_2989_; uint8_t v___x_2990_; 
v___x_2988_ = ((size_t)0ULL);
v___x_2989_ = lean_usize_of_nat(v___x_2986_);
v___x_2990_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__4(v_x_2960_, v_parents_2984_, v___x_2988_, v___x_2989_);
lean_dec_ref(v_parents_2984_);
if (v___x_2990_ == 0)
{
goto v___jp_2978_;
}
else
{
lean_object* v___x_2991_; lean_object* v___x_2992_; 
v___x_2991_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(v___x_2957_, v___x_2958_, v_key_2962_, v_derivedValMap_2959_, v_x_2960_);
lean_dec(v_key_2962_);
v___x_2992_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__2_spec__3(v___x_2957_, v___x_2958_, v_derivedValMap_2959_, v___x_2991_, v_tail_2963_);
return v___x_2992_;
}
}
}
v___jp_2964_:
{
lean_object* v_vars_2965_; lean_object* v_borrows_2966_; lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_2977_; 
v_vars_2965_ = lean_ctor_get(v_x_2960_, 0);
v_borrows_2966_ = lean_ctor_get(v_x_2960_, 1);
v_isSharedCheck_2977_ = !lean_is_exclusive(v_x_2960_);
if (v_isSharedCheck_2977_ == 0)
{
v___x_2968_ = v_x_2960_;
v_isShared_2969_ = v_isSharedCheck_2977_;
goto v_resetjp_2967_;
}
else
{
lean_inc(v_borrows_2966_);
lean_inc(v_vars_2965_);
lean_dec(v_x_2960_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_2977_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2973_; 
v___x_2970_ = lean_box(0);
lean_inc(v_key_2962_);
v___x_2971_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(v_borrows_2966_, v_key_2962_, v___x_2970_);
if (v_isShared_2969_ == 0)
{
lean_ctor_set(v___x_2968_, 1, v___x_2971_);
v___x_2973_ = v___x_2968_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2976_; 
v_reuseFailAlloc_2976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2976_, 0, v_vars_2965_);
lean_ctor_set(v_reuseFailAlloc_2976_, 1, v___x_2971_);
v___x_2973_ = v_reuseFailAlloc_2976_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
lean_object* v___x_2974_; lean_object* v___x_2975_; 
v___x_2974_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(v___x_2957_, v___x_2958_, v_key_2962_, v_derivedValMap_2959_, v___x_2973_);
lean_dec(v_key_2962_);
v___x_2975_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__2_spec__3(v___x_2957_, v___x_2958_, v_derivedValMap_2959_, v___x_2974_, v_tail_2963_);
return v___x_2975_;
}
}
}
v___jp_2978_:
{
lean_object* v_vars_2979_; uint8_t v___x_2980_; 
v_vars_2979_ = lean_ctor_get(v___x_2957_, 0);
v___x_2980_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_2979_, v_key_2962_);
if (v___x_2980_ == 0)
{
goto v___jp_2964_;
}
else
{
if (v___x_2958_ == 0)
{
lean_object* v___x_2981_; lean_object* v___x_2982_; 
v___x_2981_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(v___x_2957_, v___x_2958_, v_key_2962_, v_derivedValMap_2959_, v_x_2960_);
lean_dec(v_key_2962_);
v___x_2982_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__2_spec__3(v___x_2957_, v___x_2958_, v_derivedValMap_2959_, v___x_2981_, v_tail_2963_);
return v___x_2982_;
}
else
{
goto v___jp_2964_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__3(lean_object* v___x_2993_, uint8_t v___x_2994_, lean_object* v_derivedValMap_2995_, lean_object* v_as_2996_, size_t v_i_2997_, size_t v_stop_2998_, lean_object* v_b_2999_){
_start:
{
uint8_t v___x_3000_; 
v___x_3000_ = lean_usize_dec_eq(v_i_2997_, v_stop_2998_);
if (v___x_3000_ == 0)
{
lean_object* v___x_3001_; lean_object* v___x_3002_; size_t v___x_3003_; size_t v___x_3004_; 
v___x_3001_ = lean_array_uget_borrowed(v_as_2996_, v_i_2997_);
lean_inc(v___x_3001_);
v___x_3002_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__2(v___x_2993_, v___x_2994_, v_derivedValMap_2995_, v_b_2999_, v___x_3001_);
v___x_3003_ = ((size_t)1ULL);
v___x_3004_ = lean_usize_add(v_i_2997_, v___x_3003_);
v_i_2997_ = v___x_3004_;
v_b_2999_ = v___x_3002_;
goto _start;
}
else
{
return v_b_2999_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__3___boxed(lean_object* v___x_3006_, lean_object* v___x_3007_, lean_object* v_derivedValMap_3008_, lean_object* v_as_3009_, lean_object* v_i_3010_, lean_object* v_stop_3011_, lean_object* v_b_3012_){
_start:
{
uint8_t v___x_2650__boxed_3013_; size_t v_i_boxed_3014_; size_t v_stop_boxed_3015_; lean_object* v_res_3016_; 
v___x_2650__boxed_3013_ = lean_unbox(v___x_3007_);
v_i_boxed_3014_ = lean_unbox_usize(v_i_3010_);
lean_dec(v_i_3010_);
v_stop_boxed_3015_ = lean_unbox_usize(v_stop_3011_);
lean_dec(v_stop_3011_);
v_res_3016_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__3(v___x_3006_, v___x_2650__boxed_3013_, v_derivedValMap_3008_, v_as_3009_, v_i_boxed_3014_, v_stop_boxed_3015_, v_b_3012_);
lean_dec_ref(v_as_3009_);
lean_dec_ref(v_derivedValMap_3008_);
lean_dec_ref(v___x_3006_);
return v_res_3016_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0___boxed(lean_object* v___x_3017_, lean_object* v___x_3018_, lean_object* v_fvarId_3019_, lean_object* v_derivedValMap_3020_, lean_object* v_liveVars_3021_){
_start:
{
uint8_t v___x_2658__boxed_3022_; lean_object* v_res_3023_; 
v___x_2658__boxed_3022_ = lean_unbox(v___x_3018_);
v_res_3023_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(v___x_3017_, v___x_2658__boxed_3022_, v_fvarId_3019_, v_derivedValMap_3020_, v_liveVars_3021_);
lean_dec_ref(v_derivedValMap_3020_);
lean_dec(v_fvarId_3019_);
lean_dec_ref(v___x_3017_);
return v_res_3023_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v___x_3024_, lean_object* v___x_3025_, lean_object* v_derivedValMap_3026_, lean_object* v_x_3027_, lean_object* v_x_3028_){
_start:
{
uint8_t v___x_2672__boxed_3029_; lean_object* v_res_3030_; 
v___x_2672__boxed_3029_ = lean_unbox(v___x_3025_);
v_res_3030_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__2_spec__3(v___x_3024_, v___x_2672__boxed_3029_, v_derivedValMap_3026_, v_x_3027_, v_x_3028_);
lean_dec_ref(v_derivedValMap_3026_);
lean_dec_ref(v___x_3024_);
return v_res_3030_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__2___boxed(lean_object* v___x_3031_, lean_object* v___x_3032_, lean_object* v_derivedValMap_3033_, lean_object* v_x_3034_, lean_object* v_x_3035_){
_start:
{
uint8_t v___x_2697__boxed_3036_; lean_object* v_res_3037_; 
v___x_2697__boxed_3036_ = lean_unbox(v___x_3032_);
v_res_3037_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0_spec__2(v___x_3031_, v___x_2697__boxed_3036_, v_derivedValMap_3033_, v_x_3034_, v_x_3035_);
lean_dec_ref(v_derivedValMap_3033_);
lean_dec_ref(v___x_3031_);
return v_res_3037_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(lean_object* v_fvarId_3038_, lean_object* v_a_3039_, lean_object* v_a_3040_){
_start:
{
lean_object* v___x_3042_; lean_object* v_vars_3043_; uint8_t v___x_3044_; 
v___x_3042_ = lean_st_ref_get(v_a_3040_);
v_vars_3043_ = lean_ctor_get(v___x_3042_, 0);
lean_inc_ref(v_vars_3043_);
lean_dec(v___x_3042_);
v___x_3044_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_3043_, v_fvarId_3038_);
lean_dec_ref(v_vars_3043_);
if (v___x_3044_ == 0)
{
lean_object* v___x_3045_; lean_object* v_vars_3046_; lean_object* v_borrows_3047_; lean_object* v___x_3049_; uint8_t v_isShared_3050_; uint8_t v_isSharedCheck_3062_; 
v___x_3045_ = lean_st_ref_take(v_a_3040_);
v_vars_3046_ = lean_ctor_get(v___x_3045_, 0);
v_borrows_3047_ = lean_ctor_get(v___x_3045_, 1);
v_isSharedCheck_3062_ = !lean_is_exclusive(v___x_3045_);
if (v_isSharedCheck_3062_ == 0)
{
v___x_3049_ = v___x_3045_;
v_isShared_3050_ = v_isSharedCheck_3062_;
goto v_resetjp_3048_;
}
else
{
lean_inc(v_borrows_3047_);
lean_inc(v_vars_3046_);
lean_dec(v___x_3045_);
v___x_3049_ = lean_box(0);
v_isShared_3050_ = v_isSharedCheck_3062_;
goto v_resetjp_3048_;
}
v_resetjp_3048_:
{
lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3054_; 
v___x_3051_ = lean_box(0);
lean_inc(v_fvarId_3038_);
v___x_3052_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(v_vars_3046_, v_fvarId_3038_, v___x_3051_);
if (v_isShared_3050_ == 0)
{
lean_ctor_set(v___x_3049_, 0, v___x_3052_);
v___x_3054_ = v___x_3049_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v___x_3052_);
lean_ctor_set(v_reuseFailAlloc_3061_, 1, v_borrows_3047_);
v___x_3054_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3053_;
}
v_reusejp_3053_:
{
lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v_derivedValMap_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; 
v___x_3055_ = lean_st_ref_set(v_a_3040_, v___x_3054_);
v___x_3056_ = lean_st_ref_take(v_a_3040_);
v_derivedValMap_3057_ = lean_ctor_get(v_a_3039_, 1);
lean_inc(v___x_3056_);
v___x_3058_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(v___x_3056_, v___x_3044_, v_fvarId_3038_, v_derivedValMap_3057_, v___x_3056_);
lean_dec(v_fvarId_3038_);
lean_dec(v___x_3056_);
v___x_3059_ = lean_st_ref_set(v_a_3040_, v___x_3058_);
v___x_3060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3060_, 0, v___x_3051_);
return v___x_3060_;
}
}
}
else
{
lean_object* v___x_3063_; lean_object* v___x_3064_; 
lean_dec(v_fvarId_3038_);
v___x_3063_ = lean_box(0);
v___x_3064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3064_, 0, v___x_3063_);
return v___x_3064_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg___boxed(lean_object* v_fvarId_3065_, lean_object* v_a_3066_, lean_object* v_a_3067_, lean_object* v_a_3068_){
_start:
{
lean_object* v_res_3069_; 
v_res_3069_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_3065_, v_a_3066_, v_a_3067_);
lean_dec(v_a_3067_);
lean_dec_ref(v_a_3066_);
return v_res_3069_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__1(void){
_start:
{
lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; 
v___x_3071_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6));
v___x_3072_ = lean_unsigned_to_nat(20u);
v___x_3073_ = lean_unsigned_to_nat(364u);
v___x_3074_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__0));
v___x_3075_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__4));
v___x_3076_ = l_mkPanicMessageWithDecl(v___x_3075_, v___x_3074_, v___x_3073_, v___x_3072_, v___x_3071_);
return v___x_3076_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue(lean_object* v_value_3077_, lean_object* v_a_3078_, lean_object* v_a_3079_, lean_object* v_a_3080_, lean_object* v_a_3081_, lean_object* v_a_3082_, lean_object* v_a_3083_){
_start:
{
switch(lean_obj_tag(v_value_3077_))
{
case 0:
{
lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3092_; 
v_isSharedCheck_3092_ = !lean_is_exclusive(v_value_3077_);
if (v_isSharedCheck_3092_ == 0)
{
lean_object* v_unused_3093_; 
v_unused_3093_ = lean_ctor_get(v_value_3077_, 0);
lean_dec(v_unused_3093_);
v___x_3086_ = v_value_3077_;
v_isShared_3087_ = v_isSharedCheck_3092_;
goto v_resetjp_3085_;
}
else
{
lean_dec(v_value_3077_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3092_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___x_3088_; lean_object* v___x_3090_; 
v___x_3088_ = lean_box(0);
if (v_isShared_3087_ == 0)
{
lean_ctor_set(v___x_3086_, 0, v___x_3088_);
v___x_3090_ = v___x_3086_;
goto v_reusejp_3089_;
}
else
{
lean_object* v_reuseFailAlloc_3091_; 
v_reuseFailAlloc_3091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3091_, 0, v___x_3088_);
v___x_3090_ = v_reuseFailAlloc_3091_;
goto v_reusejp_3089_;
}
v_reusejp_3089_:
{
return v___x_3090_;
}
}
}
case 1:
{
lean_object* v___x_3094_; lean_object* v___x_3095_; 
v___x_3094_ = lean_box(0);
v___x_3095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3095_, 0, v___x_3094_);
return v___x_3095_;
}
case 4:
{
lean_object* v_fvarId_3096_; lean_object* v_args_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; 
v_fvarId_3096_ = lean_ctor_get(v_value_3077_, 0);
lean_inc(v_fvarId_3096_);
v_args_3097_ = lean_ctor_get(v_value_3077_, 1);
lean_inc_ref(v_args_3097_);
lean_dec_ref(v_value_3077_);
v___x_3098_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_3096_, v_a_3078_, v_a_3079_);
lean_dec_ref(v___x_3098_);
v___x_3099_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_3097_, v_a_3078_, v_a_3079_, v_a_3080_, v_a_3081_, v_a_3082_, v_a_3083_);
lean_dec_ref(v_args_3097_);
return v___x_3099_;
}
case 5:
{
lean_object* v_args_3100_; lean_object* v___x_3101_; 
v_args_3100_ = lean_ctor_get(v_value_3077_, 1);
lean_inc_ref(v_args_3100_);
lean_dec_ref(v_value_3077_);
v___x_3101_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_3100_, v_a_3078_, v_a_3079_, v_a_3080_, v_a_3081_, v_a_3082_, v_a_3083_);
lean_dec_ref(v_args_3100_);
return v___x_3101_;
}
case 8:
{
lean_object* v_var_3102_; lean_object* v___x_3103_; 
v_var_3102_ = lean_ctor_get(v_value_3077_, 2);
lean_inc(v_var_3102_);
lean_dec_ref(v_value_3077_);
v___x_3103_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_var_3102_, v_a_3078_, v_a_3079_);
return v___x_3103_;
}
case 9:
{
lean_object* v_args_3104_; lean_object* v___x_3105_; 
v_args_3104_ = lean_ctor_get(v_value_3077_, 1);
lean_inc_ref(v_args_3104_);
lean_dec_ref(v_value_3077_);
v___x_3105_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_3104_, v_a_3078_, v_a_3079_, v_a_3080_, v_a_3081_, v_a_3082_, v_a_3083_);
lean_dec_ref(v_args_3104_);
return v___x_3105_;
}
case 10:
{
lean_object* v_args_3106_; lean_object* v___x_3107_; 
v_args_3106_ = lean_ctor_get(v_value_3077_, 1);
lean_inc_ref(v_args_3106_);
lean_dec_ref(v_value_3077_);
v___x_3107_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_3106_, v_a_3078_, v_a_3079_, v_a_3080_, v_a_3081_, v_a_3082_, v_a_3083_);
lean_dec_ref(v_args_3106_);
return v___x_3107_;
}
case 12:
{
lean_object* v_var_3108_; lean_object* v_args_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; 
v_var_3108_ = lean_ctor_get(v_value_3077_, 0);
lean_inc(v_var_3108_);
v_args_3109_ = lean_ctor_get(v_value_3077_, 2);
lean_inc_ref(v_args_3109_);
lean_dec_ref(v_value_3077_);
v___x_3110_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_var_3108_, v_a_3078_, v_a_3079_);
lean_dec_ref(v___x_3110_);
v___x_3111_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_3109_, v_a_3078_, v_a_3079_, v_a_3080_, v_a_3081_, v_a_3082_, v_a_3083_);
lean_dec_ref(v_args_3109_);
return v___x_3111_;
}
case 14:
{
lean_object* v_fvarId_3112_; lean_object* v___x_3113_; 
v_fvarId_3112_ = lean_ctor_get(v_value_3077_, 0);
lean_inc(v_fvarId_3112_);
lean_dec_ref(v_value_3077_);
v___x_3113_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_3112_, v_a_3078_, v_a_3079_);
return v___x_3113_;
}
case 15:
{
lean_object* v___x_3114_; lean_object* v___x_3115_; 
lean_dec_ref(v_value_3077_);
v___x_3114_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__1, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__1);
v___x_3115_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__1(v___x_3114_, v_a_3078_, v_a_3079_, v_a_3080_, v_a_3081_, v_a_3082_, v_a_3083_);
return v___x_3115_;
}
default: 
{
lean_object* v_var_3116_; lean_object* v___x_3117_; 
v_var_3116_ = lean_ctor_get(v_value_3077_, 1);
lean_inc(v_var_3116_);
lean_dec(v_value_3077_);
v___x_3117_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_var_3116_, v_a_3078_, v_a_3079_);
return v___x_3117_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___boxed(lean_object* v_value_3118_, lean_object* v_a_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_, lean_object* v_a_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_){
_start:
{
lean_object* v_res_3126_; 
v_res_3126_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue(v_value_3118_, v_a_3119_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_, v_a_3124_);
lean_dec(v_a_3124_);
lean_dec_ref(v_a_3123_);
lean_dec(v_a_3122_);
lean_dec_ref(v_a_3121_);
lean_dec(v_a_3120_);
lean_dec_ref(v_a_3119_);
return v_res_3126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0(lean_object* v_fvarId_3127_, lean_object* v_a_3128_, lean_object* v_a_3129_, lean_object* v_a_3130_, lean_object* v_a_3131_, lean_object* v_a_3132_, lean_object* v_a_3133_){
_start:
{
lean_object* v___x_3135_; 
v___x_3135_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_3127_, v_a_3128_, v_a_3129_);
return v___x_3135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___boxed(lean_object* v_fvarId_3136_, lean_object* v_a_3137_, lean_object* v_a_3138_, lean_object* v_a_3139_, lean_object* v_a_3140_, lean_object* v_a_3141_, lean_object* v_a_3142_, lean_object* v_a_3143_){
_start:
{
lean_object* v_res_3144_; 
v_res_3144_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0(v_fvarId_3136_, v_a_3137_, v_a_3138_, v_a_3139_, v_a_3140_, v_a_3141_, v_a_3142_);
lean_dec(v_a_3142_);
lean_dec_ref(v_a_3141_);
lean_dec(v_a_3140_);
lean_dec_ref(v_a_3139_);
lean_dec(v_a_3138_);
lean_dec_ref(v_a_3137_);
return v_res_3144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar___redArg(lean_object* v_fvarId_3145_, lean_object* v_a_3146_){
_start:
{
lean_object* v___x_3148_; lean_object* v_vars_3149_; lean_object* v_borrows_3150_; lean_object* v___x_3152_; uint8_t v_isShared_3153_; uint8_t v_isSharedCheck_3164_; 
v___x_3148_ = lean_st_ref_take(v_a_3146_);
v_vars_3149_ = lean_ctor_get(v___x_3148_, 0);
v_borrows_3150_ = lean_ctor_get(v___x_3148_, 1);
v_isSharedCheck_3164_ = !lean_is_exclusive(v___x_3148_);
if (v_isSharedCheck_3164_ == 0)
{
v___x_3152_ = v___x_3148_;
v_isShared_3153_ = v_isSharedCheck_3164_;
goto v_resetjp_3151_;
}
else
{
lean_inc(v_borrows_3150_);
lean_inc(v_vars_3149_);
lean_dec(v___x_3148_);
v___x_3152_ = lean_box(0);
v_isShared_3153_ = v_isSharedCheck_3164_;
goto v_resetjp_3151_;
}
v_resetjp_3151_:
{
lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v_vars_3156_; lean_object* v_borrows_3157_; lean_object* v___x_3159_; 
v___x_3154_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_3155_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
lean_inc(v_fvarId_3145_);
v_vars_3156_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_3154_, v___x_3155_, v_vars_3149_, v_fvarId_3145_);
v_borrows_3157_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_3154_, v___x_3155_, v_borrows_3150_, v_fvarId_3145_);
if (v_isShared_3153_ == 0)
{
lean_ctor_set(v___x_3152_, 1, v_borrows_3157_);
lean_ctor_set(v___x_3152_, 0, v_vars_3156_);
v___x_3159_ = v___x_3152_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3163_; 
v_reuseFailAlloc_3163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3163_, 0, v_vars_3156_);
lean_ctor_set(v_reuseFailAlloc_3163_, 1, v_borrows_3157_);
v___x_3159_ = v_reuseFailAlloc_3163_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; 
v___x_3160_ = lean_st_ref_set(v_a_3146_, v___x_3159_);
v___x_3161_ = lean_box(0);
v___x_3162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3161_);
return v___x_3162_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar___redArg___boxed(lean_object* v_fvarId_3165_, lean_object* v_a_3166_, lean_object* v_a_3167_){
_start:
{
lean_object* v_res_3168_; 
v_res_3168_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar___redArg(v_fvarId_3165_, v_a_3166_);
lean_dec(v_a_3166_);
return v_res_3168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar(lean_object* v_fvarId_3169_, lean_object* v_a_3170_, lean_object* v_a_3171_, lean_object* v_a_3172_, lean_object* v_a_3173_, lean_object* v_a_3174_, lean_object* v_a_3175_){
_start:
{
lean_object* v___x_3177_; lean_object* v_vars_3178_; lean_object* v_borrows_3179_; lean_object* v___x_3181_; uint8_t v_isShared_3182_; uint8_t v_isSharedCheck_3193_; 
v___x_3177_ = lean_st_ref_take(v_a_3171_);
v_vars_3178_ = lean_ctor_get(v___x_3177_, 0);
v_borrows_3179_ = lean_ctor_get(v___x_3177_, 1);
v_isSharedCheck_3193_ = !lean_is_exclusive(v___x_3177_);
if (v_isSharedCheck_3193_ == 0)
{
v___x_3181_ = v___x_3177_;
v_isShared_3182_ = v_isSharedCheck_3193_;
goto v_resetjp_3180_;
}
else
{
lean_inc(v_borrows_3179_);
lean_inc(v_vars_3178_);
lean_dec(v___x_3177_);
v___x_3181_ = lean_box(0);
v_isShared_3182_ = v_isSharedCheck_3193_;
goto v_resetjp_3180_;
}
v_resetjp_3180_:
{
lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v_vars_3185_; lean_object* v_borrows_3186_; lean_object* v___x_3188_; 
v___x_3183_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_3184_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
lean_inc(v_fvarId_3169_);
v_vars_3185_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_3183_, v___x_3184_, v_vars_3178_, v_fvarId_3169_);
v_borrows_3186_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_3183_, v___x_3184_, v_borrows_3179_, v_fvarId_3169_);
if (v_isShared_3182_ == 0)
{
lean_ctor_set(v___x_3181_, 1, v_borrows_3186_);
lean_ctor_set(v___x_3181_, 0, v_vars_3185_);
v___x_3188_ = v___x_3181_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3192_; 
v_reuseFailAlloc_3192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3192_, 0, v_vars_3185_);
lean_ctor_set(v_reuseFailAlloc_3192_, 1, v_borrows_3186_);
v___x_3188_ = v_reuseFailAlloc_3192_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; 
v___x_3189_ = lean_st_ref_set(v_a_3171_, v___x_3188_);
v___x_3190_ = lean_box(0);
v___x_3191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3191_, 0, v___x_3190_);
return v___x_3191_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar___boxed(lean_object* v_fvarId_3194_, lean_object* v_a_3195_, lean_object* v_a_3196_, lean_object* v_a_3197_, lean_object* v_a_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_){
_start:
{
lean_object* v_res_3202_; 
v_res_3202_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar(v_fvarId_3194_, v_a_3195_, v_a_3196_, v_a_3197_, v_a_3198_, v_a_3199_, v_a_3200_);
lean_dec(v_a_3200_);
lean_dec_ref(v_a_3199_);
lean_dec(v_a_3198_);
lean_dec_ref(v_a_3197_);
lean_dec(v_a_3196_);
lean_dec_ref(v_a_3195_);
return v_res_3202_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__0(uint8_t v___x_3203_, lean_object* v_x_3204_){
_start:
{
return v___x_3203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__0___boxed(lean_object* v___x_3205_, lean_object* v_x_3206_){
_start:
{
uint8_t v___x_1797__boxed_3207_; uint8_t v_res_3208_; lean_object* v_r_3209_; 
v___x_1797__boxed_3207_ = lean_unbox(v___x_3205_);
v_res_3208_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__0(v___x_1797__boxed_3207_, v_x_3206_);
lean_dec(v_x_3206_);
v_r_3209_ = lean_box(v_res_3208_);
return v_r_3209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__1(lean_object* v___x_3210_, lean_object* v___x_3211_, lean_object* v_derivedValMap_3212_, lean_object* v___f_3213_, lean_object* v_x1_3214_, lean_object* v_x2_3215_, lean_object* v_x3_3216_){
_start:
{
lean_object* v_vars_3217_; lean_object* v_borrows_3218_; lean_object* v___x_3220_; uint8_t v_isShared_3221_; uint8_t v_isSharedCheck_3228_; 
v_vars_3217_ = lean_ctor_get(v_x1_3214_, 0);
v_borrows_3218_ = lean_ctor_get(v_x1_3214_, 1);
v_isSharedCheck_3228_ = !lean_is_exclusive(v_x1_3214_);
if (v_isSharedCheck_3228_ == 0)
{
v___x_3220_ = v_x1_3214_;
v_isShared_3221_ = v_isSharedCheck_3228_;
goto v_resetjp_3219_;
}
else
{
lean_inc(v_borrows_3218_);
lean_inc(v_vars_3217_);
lean_dec(v_x1_3214_);
v___x_3220_ = lean_box(0);
v_isShared_3221_ = v_isSharedCheck_3228_;
goto v_resetjp_3219_;
}
v_resetjp_3219_:
{
lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3225_; 
v___x_3222_ = lean_box(0);
lean_inc(v_x2_3215_);
v___x_3223_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_3210_, v___x_3211_, v_borrows_3218_, v_x2_3215_, v___x_3222_);
if (v_isShared_3221_ == 0)
{
lean_ctor_set(v___x_3220_, 1, v___x_3223_);
v___x_3225_ = v___x_3220_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3227_; 
v_reuseFailAlloc_3227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3227_, 0, v_vars_3217_);
lean_ctor_set(v_reuseFailAlloc_3227_, 1, v___x_3223_);
v___x_3225_ = v_reuseFailAlloc_3227_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
lean_object* v___x_3226_; 
v___x_3226_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(v_x2_3215_, v_derivedValMap_3212_, v___x_3225_, v___f_3213_);
return v___x_3226_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__2(lean_object* v___x_3229_, lean_object* v___f_3230_, lean_object* v_acc_3231_, lean_object* v_l_3232_){
_start:
{
lean_object* v___x_3233_; 
v___x_3233_ = l_Std_DHashMap_Internal_AssocList_foldlM___redArg(v___x_3229_, v___f_3230_, v_acc_3231_, v_l_3232_);
return v___x_3233_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg(lean_object* v_a_3234_, lean_object* v_a_3235_){
_start:
{
lean_object* v___y_3238_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v_borrowedValues_3245_; lean_object* v_derivedValMap_3246_; lean_object* v___x_3247_; lean_object* v_buckets_3248_; lean_object* v___x_3249_; uint8_t v___x_3250_; 
v___x_3243_ = lean_unsigned_to_nat(0u);
v___x_3244_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v_borrowedValues_3245_ = lean_ctor_get(v_a_3234_, 0);
v_derivedValMap_3246_ = lean_ctor_get(v_a_3234_, 1);
v___x_3247_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11));
v_buckets_3248_ = lean_ctor_get(v_borrowedValues_3245_, 1);
v___x_3249_ = lean_array_get_size(v_buckets_3248_);
v___x_3250_ = lean_nat_dec_lt(v___x_3243_, v___x_3249_);
if (v___x_3250_ == 0)
{
v___y_3238_ = v___x_3244_;
goto v___jp_3237_;
}
else
{
lean_object* v___x_3251_; lean_object* v___f_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___f_3255_; lean_object* v___f_3256_; uint8_t v___x_3257_; 
v___x_3251_ = lean_box(v___x_3250_);
v___f_3252_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3252_, 0, v___x_3251_);
v___x_3253_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_3254_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
lean_inc_ref(v_derivedValMap_3246_);
v___f_3255_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__1), 7, 4);
lean_closure_set(v___f_3255_, 0, v___x_3253_);
lean_closure_set(v___f_3255_, 1, v___x_3254_);
lean_closure_set(v___f_3255_, 2, v_derivedValMap_3246_);
lean_closure_set(v___f_3255_, 3, v___f_3252_);
v___f_3256_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__2), 4, 2);
lean_closure_set(v___f_3256_, 0, v___x_3247_);
lean_closure_set(v___f_3256_, 1, v___f_3255_);
v___x_3257_ = lean_nat_dec_le(v___x_3249_, v___x_3249_);
if (v___x_3257_ == 0)
{
if (v___x_3250_ == 0)
{
lean_dec_ref(v___f_3256_);
v___y_3238_ = v___x_3244_;
goto v___jp_3237_;
}
else
{
size_t v___x_3258_; size_t v___x_3259_; lean_object* v___x_3260_; 
v___x_3258_ = ((size_t)0ULL);
v___x_3259_ = lean_usize_of_nat(v___x_3249_);
lean_inc_ref(v_buckets_3248_);
v___x_3260_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3247_, v___f_3256_, v_buckets_3248_, v___x_3258_, v___x_3259_, v___x_3244_);
v___y_3238_ = v___x_3260_;
goto v___jp_3237_;
}
}
else
{
size_t v___x_3261_; size_t v___x_3262_; lean_object* v___x_3263_; 
v___x_3261_ = ((size_t)0ULL);
v___x_3262_ = lean_usize_of_nat(v___x_3249_);
lean_inc_ref(v_buckets_3248_);
v___x_3263_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3247_, v___f_3256_, v_buckets_3248_, v___x_3261_, v___x_3262_, v___x_3244_);
v___y_3238_ = v___x_3263_;
goto v___jp_3237_;
}
}
v___jp_3237_:
{
lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; 
v___x_3239_ = lean_st_ref_take(v_a_3235_);
lean_dec(v___x_3239_);
v___x_3240_ = lean_st_ref_set(v_a_3235_, v___y_3238_);
v___x_3241_ = lean_box(0);
v___x_3242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3242_, 0, v___x_3241_);
return v___x_3242_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___boxed(lean_object* v_a_3264_, lean_object* v_a_3265_, lean_object* v_a_3266_){
_start:
{
lean_object* v_res_3267_; 
v_res_3267_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg(v_a_3264_, v_a_3265_);
lean_dec(v_a_3265_);
lean_dec_ref(v_a_3264_);
return v_res_3267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars(lean_object* v_a_3268_, lean_object* v_a_3269_, lean_object* v_a_3270_, lean_object* v_a_3271_, lean_object* v_a_3272_, lean_object* v_a_3273_){
_start:
{
lean_object* v___y_3276_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v_borrowedValues_3283_; lean_object* v_derivedValMap_3284_; lean_object* v___x_3285_; lean_object* v_buckets_3286_; lean_object* v___x_3287_; uint8_t v___x_3288_; 
v___x_3281_ = lean_unsigned_to_nat(0u);
v___x_3282_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v_borrowedValues_3283_ = lean_ctor_get(v_a_3268_, 0);
v_derivedValMap_3284_ = lean_ctor_get(v_a_3268_, 1);
v___x_3285_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11));
v_buckets_3286_ = lean_ctor_get(v_borrowedValues_3283_, 1);
v___x_3287_ = lean_array_get_size(v_buckets_3286_);
v___x_3288_ = lean_nat_dec_lt(v___x_3281_, v___x_3287_);
if (v___x_3288_ == 0)
{
v___y_3276_ = v___x_3282_;
goto v___jp_3275_;
}
else
{
lean_object* v___x_3289_; lean_object* v___f_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___f_3293_; lean_object* v___f_3294_; uint8_t v___x_3295_; 
v___x_3289_ = lean_box(v___x_3288_);
v___f_3290_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3290_, 0, v___x_3289_);
v___x_3291_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_3292_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
lean_inc_ref(v_derivedValMap_3284_);
v___f_3293_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__1), 7, 4);
lean_closure_set(v___f_3293_, 0, v___x_3291_);
lean_closure_set(v___f_3293_, 1, v___x_3292_);
lean_closure_set(v___f_3293_, 2, v_derivedValMap_3284_);
lean_closure_set(v___f_3293_, 3, v___f_3290_);
v___f_3294_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__2), 4, 2);
lean_closure_set(v___f_3294_, 0, v___x_3285_);
lean_closure_set(v___f_3294_, 1, v___f_3293_);
v___x_3295_ = lean_nat_dec_le(v___x_3287_, v___x_3287_);
if (v___x_3295_ == 0)
{
if (v___x_3288_ == 0)
{
lean_dec_ref(v___f_3294_);
v___y_3276_ = v___x_3282_;
goto v___jp_3275_;
}
else
{
size_t v___x_3296_; size_t v___x_3297_; lean_object* v___x_3298_; 
v___x_3296_ = ((size_t)0ULL);
v___x_3297_ = lean_usize_of_nat(v___x_3287_);
lean_inc_ref(v_buckets_3286_);
v___x_3298_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3285_, v___f_3294_, v_buckets_3286_, v___x_3296_, v___x_3297_, v___x_3282_);
v___y_3276_ = v___x_3298_;
goto v___jp_3275_;
}
}
else
{
size_t v___x_3299_; size_t v___x_3300_; lean_object* v___x_3301_; 
v___x_3299_ = ((size_t)0ULL);
v___x_3300_ = lean_usize_of_nat(v___x_3287_);
lean_inc_ref(v_buckets_3286_);
v___x_3301_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3285_, v___f_3294_, v_buckets_3286_, v___x_3299_, v___x_3300_, v___x_3282_);
v___y_3276_ = v___x_3301_;
goto v___jp_3275_;
}
}
v___jp_3275_:
{
lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; 
v___x_3277_ = lean_st_ref_take(v_a_3269_);
lean_dec(v___x_3277_);
v___x_3278_ = lean_st_ref_set(v_a_3269_, v___y_3276_);
v___x_3279_ = lean_box(0);
v___x_3280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3280_, 0, v___x_3279_);
return v___x_3280_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___boxed(lean_object* v_a_3302_, lean_object* v_a_3303_, lean_object* v_a_3304_, lean_object* v_a_3305_, lean_object* v_a_3306_, lean_object* v_a_3307_, lean_object* v_a_3308_){
_start:
{
lean_object* v_res_3309_; 
v_res_3309_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars(v_a_3302_, v_a_3303_, v_a_3304_, v_a_3305_, v_a_3306_, v_a_3307_);
lean_dec(v_a_3307_);
lean_dec_ref(v_a_3306_);
lean_dec(v_a_3305_);
lean_dec_ref(v_a_3304_);
lean_dec(v_a_3303_);
lean_dec_ref(v_a_3302_);
return v_res_3309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc___redArg(lean_object* v_fvarId_3310_, lean_object* v_k_3311_, lean_object* v_n_3312_, lean_object* v_a_3313_){
_start:
{
lean_object* v___x_3315_; uint8_t v___x_3316_; 
v___x_3315_ = lean_unsigned_to_nat(0u);
v___x_3316_ = lean_nat_dec_eq(v_n_3312_, v___x_3315_);
if (v___x_3316_ == 0)
{
lean_object* v_varMap_3317_; lean_object* v___f_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; uint8_t v___y_3322_; uint8_t v_isDefiniteRef_3326_; 
v_varMap_3317_ = lean_ctor_get(v_a_3313_, 2);
v___f_3318_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg___closed__0));
v___x_3319_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_3310_);
lean_inc(v_varMap_3317_);
v___x_3320_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___redArg(v___f_3318_, v___x_3319_, v_varMap_3317_, v_fvarId_3310_);
v_isDefiniteRef_3326_ = lean_ctor_get_uint8(v___x_3320_, sizeof(void*)*1 + 1);
if (v_isDefiniteRef_3326_ == 0)
{
uint8_t v___x_3327_; 
v___x_3327_ = 1;
v___y_3322_ = v___x_3327_;
goto v___jp_3321_;
}
else
{
v___y_3322_ = v___x_3316_;
goto v___jp_3321_;
}
v___jp_3321_:
{
uint8_t v_persistent_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; 
v_persistent_3323_ = lean_ctor_get_uint8(v___x_3320_, sizeof(void*)*1 + 2);
lean_dec(v___x_3320_);
v___x_3324_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_3324_, 0, v_fvarId_3310_);
lean_ctor_set(v___x_3324_, 1, v_n_3312_);
lean_ctor_set(v___x_3324_, 2, v_k_3311_);
lean_ctor_set_uint8(v___x_3324_, sizeof(void*)*3, v___y_3322_);
lean_ctor_set_uint8(v___x_3324_, sizeof(void*)*3 + 1, v_persistent_3323_);
v___x_3325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3325_, 0, v___x_3324_);
return v___x_3325_;
}
}
else
{
lean_object* v___x_3328_; 
lean_dec(v_n_3312_);
lean_dec(v_fvarId_3310_);
v___x_3328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3328_, 0, v_k_3311_);
return v___x_3328_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc___redArg___boxed(lean_object* v_fvarId_3329_, lean_object* v_k_3330_, lean_object* v_n_3331_, lean_object* v_a_3332_, lean_object* v_a_3333_){
_start:
{
lean_object* v_res_3334_; 
v_res_3334_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc___redArg(v_fvarId_3329_, v_k_3330_, v_n_3331_, v_a_3332_);
lean_dec_ref(v_a_3332_);
return v_res_3334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc(lean_object* v_fvarId_3335_, lean_object* v_k_3336_, lean_object* v_n_3337_, lean_object* v_a_3338_, lean_object* v_a_3339_, lean_object* v_a_3340_, lean_object* v_a_3341_, lean_object* v_a_3342_, lean_object* v_a_3343_){
_start:
{
lean_object* v___x_3345_; uint8_t v___x_3346_; 
v___x_3345_ = lean_unsigned_to_nat(0u);
v___x_3346_ = lean_nat_dec_eq(v_n_3337_, v___x_3345_);
if (v___x_3346_ == 0)
{
lean_object* v_varMap_3347_; lean_object* v___f_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; uint8_t v___y_3352_; uint8_t v_isDefiniteRef_3356_; 
v_varMap_3347_ = lean_ctor_get(v_a_3338_, 2);
v___f_3348_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg___closed__0));
v___x_3349_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_3335_);
lean_inc(v_varMap_3347_);
v___x_3350_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___redArg(v___f_3348_, v___x_3349_, v_varMap_3347_, v_fvarId_3335_);
v_isDefiniteRef_3356_ = lean_ctor_get_uint8(v___x_3350_, sizeof(void*)*1 + 1);
if (v_isDefiniteRef_3356_ == 0)
{
uint8_t v___x_3357_; 
v___x_3357_ = 1;
v___y_3352_ = v___x_3357_;
goto v___jp_3351_;
}
else
{
v___y_3352_ = v___x_3346_;
goto v___jp_3351_;
}
v___jp_3351_:
{
uint8_t v_persistent_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; 
v_persistent_3353_ = lean_ctor_get_uint8(v___x_3350_, sizeof(void*)*1 + 2);
lean_dec(v___x_3350_);
v___x_3354_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_3354_, 0, v_fvarId_3335_);
lean_ctor_set(v___x_3354_, 1, v_n_3337_);
lean_ctor_set(v___x_3354_, 2, v_k_3336_);
lean_ctor_set_uint8(v___x_3354_, sizeof(void*)*3, v___y_3352_);
lean_ctor_set_uint8(v___x_3354_, sizeof(void*)*3 + 1, v_persistent_3353_);
v___x_3355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3355_, 0, v___x_3354_);
return v___x_3355_;
}
}
else
{
lean_object* v___x_3358_; 
lean_dec(v_n_3337_);
lean_dec(v_fvarId_3335_);
v___x_3358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3358_, 0, v_k_3336_);
return v___x_3358_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc___boxed(lean_object* v_fvarId_3359_, lean_object* v_k_3360_, lean_object* v_n_3361_, lean_object* v_a_3362_, lean_object* v_a_3363_, lean_object* v_a_3364_, lean_object* v_a_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_, lean_object* v_a_3368_){
_start:
{
lean_object* v_res_3369_; 
v_res_3369_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc(v_fvarId_3359_, v_k_3360_, v_n_3361_, v_a_3362_, v_a_3363_, v_a_3364_, v_a_3365_, v_a_3366_, v_a_3367_);
lean_dec(v_a_3367_);
lean_dec_ref(v_a_3366_);
lean_dec(v_a_3365_);
lean_dec_ref(v_a_3364_);
lean_dec(v_a_3363_);
lean_dec_ref(v_a_3362_);
return v_res_3369_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg(lean_object* v_fvarId_3370_, lean_object* v_k_3371_, lean_object* v_a_3372_){
_start:
{
lean_object* v_varMap_3374_; lean_object* v___f_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; uint8_t v_isDefiniteRef_3378_; lean_object* v___x_3379_; uint8_t v___y_3381_; 
v_varMap_3374_ = lean_ctor_get(v_a_3372_, 2);
v___f_3375_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg___closed__0));
v___x_3376_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_3370_);
lean_inc(v_varMap_3374_);
v___x_3377_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___redArg(v___f_3375_, v___x_3376_, v_varMap_3374_, v_fvarId_3370_);
v_isDefiniteRef_3378_ = lean_ctor_get_uint8(v___x_3377_, sizeof(void*)*1 + 1);
v___x_3379_ = lean_unsigned_to_nat(1u);
if (v_isDefiniteRef_3378_ == 0)
{
uint8_t v___x_3385_; 
v___x_3385_ = 1;
v___y_3381_ = v___x_3385_;
goto v___jp_3380_;
}
else
{
uint8_t v___x_3386_; 
v___x_3386_ = 0;
v___y_3381_ = v___x_3386_;
goto v___jp_3380_;
}
v___jp_3380_:
{
uint8_t v_persistent_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v_persistent_3382_ = lean_ctor_get_uint8(v___x_3377_, sizeof(void*)*1 + 2);
lean_dec(v___x_3377_);
v___x_3383_ = lean_alloc_ctor(12, 3, 2);
lean_ctor_set(v___x_3383_, 0, v_fvarId_3370_);
lean_ctor_set(v___x_3383_, 1, v___x_3379_);
lean_ctor_set(v___x_3383_, 2, v_k_3371_);
lean_ctor_set_uint8(v___x_3383_, sizeof(void*)*3, v___y_3381_);
lean_ctor_set_uint8(v___x_3383_, sizeof(void*)*3 + 1, v_persistent_3382_);
v___x_3384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3384_, 0, v___x_3383_);
return v___x_3384_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg___boxed(lean_object* v_fvarId_3387_, lean_object* v_k_3388_, lean_object* v_a_3389_, lean_object* v_a_3390_){
_start:
{
lean_object* v_res_3391_; 
v_res_3391_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg(v_fvarId_3387_, v_k_3388_, v_a_3389_);
lean_dec_ref(v_a_3389_);
return v_res_3391_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec(lean_object* v_fvarId_3392_, lean_object* v_k_3393_, lean_object* v_a_3394_, lean_object* v_a_3395_, lean_object* v_a_3396_, lean_object* v_a_3397_, lean_object* v_a_3398_, lean_object* v_a_3399_){
_start:
{
lean_object* v_varMap_3401_; lean_object* v___f_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; uint8_t v_isDefiniteRef_3405_; lean_object* v___x_3406_; uint8_t v___y_3408_; 
v_varMap_3401_ = lean_ctor_get(v_a_3394_, 2);
v___f_3402_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg___closed__0));
v___x_3403_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_3392_);
lean_inc(v_varMap_3401_);
v___x_3404_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___redArg(v___f_3402_, v___x_3403_, v_varMap_3401_, v_fvarId_3392_);
v_isDefiniteRef_3405_ = lean_ctor_get_uint8(v___x_3404_, sizeof(void*)*1 + 1);
v___x_3406_ = lean_unsigned_to_nat(1u);
if (v_isDefiniteRef_3405_ == 0)
{
uint8_t v___x_3412_; 
v___x_3412_ = 1;
v___y_3408_ = v___x_3412_;
goto v___jp_3407_;
}
else
{
uint8_t v___x_3413_; 
v___x_3413_ = 0;
v___y_3408_ = v___x_3413_;
goto v___jp_3407_;
}
v___jp_3407_:
{
uint8_t v_persistent_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; 
v_persistent_3409_ = lean_ctor_get_uint8(v___x_3404_, sizeof(void*)*1 + 2);
lean_dec(v___x_3404_);
v___x_3410_ = lean_alloc_ctor(12, 3, 2);
lean_ctor_set(v___x_3410_, 0, v_fvarId_3392_);
lean_ctor_set(v___x_3410_, 1, v___x_3406_);
lean_ctor_set(v___x_3410_, 2, v_k_3393_);
lean_ctor_set_uint8(v___x_3410_, sizeof(void*)*3, v___y_3408_);
lean_ctor_set_uint8(v___x_3410_, sizeof(void*)*3 + 1, v_persistent_3409_);
v___x_3411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3411_, 0, v___x_3410_);
return v___x_3411_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___boxed(lean_object* v_fvarId_3414_, lean_object* v_k_3415_, lean_object* v_a_3416_, lean_object* v_a_3417_, lean_object* v_a_3418_, lean_object* v_a_3419_, lean_object* v_a_3420_, lean_object* v_a_3421_, lean_object* v_a_3422_){
_start:
{
lean_object* v_res_3423_; 
v_res_3423_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec(v_fvarId_3414_, v_k_3415_, v_a_3416_, v_a_3417_, v_a_3418_, v_a_3419_, v_a_3420_, v_a_3421_);
lean_dec(v_a_3421_);
lean_dec_ref(v_a_3420_);
lean_dec(v_a_3419_);
lean_dec_ref(v_a_3418_);
lean_dec(v_a_3417_);
lean_dec_ref(v_a_3416_);
return v_res_3423_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0_spec__0(lean_object* v_msg_3424_){
_start:
{
lean_object* v___x_3425_; lean_object* v___x_3426_; 
v___x_3425_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedVarInfo_default));
v___x_3426_ = lean_panic_fn_borrowed(v___x_3425_, v_msg_3424_);
return v___x_3426_;
}
}
static lean_object* _init_l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__3(void){
_start:
{
lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; 
v___x_3430_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__2));
v___x_3431_ = lean_unsigned_to_nat(13u);
v___x_3432_ = lean_unsigned_to_nat(227u);
v___x_3433_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__1));
v___x_3434_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__0));
v___x_3435_ = l_mkPanicMessageWithDecl(v___x_3434_, v___x_3433_, v___x_3432_, v___x_3431_, v___x_3430_);
return v___x_3435_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0(lean_object* v_t_3436_, lean_object* v_k_3437_){
_start:
{
if (lean_obj_tag(v_t_3436_) == 0)
{
lean_object* v_k_3438_; lean_object* v_v_3439_; lean_object* v_l_3440_; lean_object* v_r_3441_; uint8_t v___x_3442_; 
v_k_3438_ = lean_ctor_get(v_t_3436_, 1);
v_v_3439_ = lean_ctor_get(v_t_3436_, 2);
v_l_3440_ = lean_ctor_get(v_t_3436_, 3);
v_r_3441_ = lean_ctor_get(v_t_3436_, 4);
v___x_3442_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3437_, v_k_3438_);
switch(v___x_3442_)
{
case 0:
{
v_t_3436_ = v_l_3440_;
goto _start;
}
case 1:
{
lean_inc(v_v_3439_);
return v_v_3439_;
}
default: 
{
v_t_3436_ = v_r_3441_;
goto _start;
}
}
}
else
{
lean_object* v___x_3445_; lean_object* v___x_3446_; 
v___x_3445_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__3, &l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__3);
v___x_3446_ = l_panic___at___00Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0_spec__0(v___x_3445_);
return v___x_3446_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___boxed(lean_object* v_t_3447_, lean_object* v_k_3448_){
_start:
{
lean_object* v_res_3449_; 
v_res_3449_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0(v_t_3447_, v_k_3448_);
lean_dec(v_k_3448_);
lean_dec(v_t_3447_);
return v_res_3449_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(lean_object* v_as_3450_, size_t v_i_3451_, size_t v_stop_3452_, lean_object* v_b_3453_, lean_object* v___y_3454_){
_start:
{
uint8_t v___x_3456_; 
v___x_3456_ = lean_usize_dec_eq(v_i_3451_, v_stop_3452_);
if (v___x_3456_ == 0)
{
lean_object* v___x_3457_; lean_object* v_fst_3458_; lean_object* v_varMap_3459_; lean_object* v___x_3460_; uint8_t v_isDefiniteRef_3461_; lean_object* v___x_3462_; uint8_t v___y_3464_; 
v___x_3457_ = lean_array_uget_borrowed(v_as_3450_, v_i_3451_);
v_fst_3458_ = lean_ctor_get(v___x_3457_, 0);
v_varMap_3459_ = lean_ctor_get(v___y_3454_, 2);
v___x_3460_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0(v_varMap_3459_, v_fst_3458_);
v_isDefiniteRef_3461_ = lean_ctor_get_uint8(v___x_3460_, sizeof(void*)*1 + 1);
v___x_3462_ = lean_unsigned_to_nat(1u);
if (v_isDefiniteRef_3461_ == 0)
{
uint8_t v___x_3470_; 
v___x_3470_ = 1;
v___y_3464_ = v___x_3470_;
goto v___jp_3463_;
}
else
{
v___y_3464_ = v___x_3456_;
goto v___jp_3463_;
}
v___jp_3463_:
{
uint8_t v_persistent_3465_; lean_object* v___x_3466_; size_t v___x_3467_; size_t v___x_3468_; 
v_persistent_3465_ = lean_ctor_get_uint8(v___x_3460_, sizeof(void*)*1 + 2);
lean_dec_ref(v___x_3460_);
lean_inc(v_fst_3458_);
v___x_3466_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_3466_, 0, v_fst_3458_);
lean_ctor_set(v___x_3466_, 1, v___x_3462_);
lean_ctor_set(v___x_3466_, 2, v_b_3453_);
lean_ctor_set_uint8(v___x_3466_, sizeof(void*)*3, v___y_3464_);
lean_ctor_set_uint8(v___x_3466_, sizeof(void*)*3 + 1, v_persistent_3465_);
v___x_3467_ = ((size_t)1ULL);
v___x_3468_ = lean_usize_add(v_i_3451_, v___x_3467_);
v_i_3451_ = v___x_3468_;
v_b_3453_ = v___x_3466_;
goto _start;
}
}
else
{
lean_object* v___x_3471_; 
v___x_3471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3471_, 0, v_b_3453_);
return v___x_3471_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___boxed(lean_object* v_as_3472_, lean_object* v_i_3473_, lean_object* v_stop_3474_, lean_object* v_b_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_){
_start:
{
size_t v_i_boxed_3478_; size_t v_stop_boxed_3479_; lean_object* v_res_3480_; 
v_i_boxed_3478_ = lean_unbox_usize(v_i_3473_);
lean_dec(v_i_3473_);
v_stop_boxed_3479_ = lean_unbox_usize(v_stop_3474_);
lean_dec(v_stop_3474_);
v_res_3480_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(v_as_3472_, v_i_boxed_3478_, v_stop_boxed_3479_, v_b_3475_, v___y_3476_);
lean_dec_ref(v___y_3476_);
lean_dec_ref(v_as_3472_);
return v_res_3480_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg___lam__0(lean_object* v_x_3481_, lean_object* v_x_3482_){
_start:
{
lean_object* v_snd_3483_; lean_object* v_snd_3484_; uint8_t v___x_3485_; 
v_snd_3483_ = lean_ctor_get(v_x_3481_, 1);
v_snd_3484_ = lean_ctor_get(v_x_3482_, 1);
v___x_3485_ = lean_nat_dec_lt(v_snd_3483_, v_snd_3484_);
return v___x_3485_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg___lam__0___boxed(lean_object* v_x_3486_, lean_object* v_x_3487_){
_start:
{
uint8_t v_res_3488_; lean_object* v_r_3489_; 
v_res_3488_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg___lam__0(v_x_3486_, v_x_3487_);
lean_dec_ref(v_x_3487_);
lean_dec_ref(v_x_3486_);
v_r_3489_ = lean_box(v_res_3488_);
return v_r_3489_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg(lean_object* v_as_3491_, lean_object* v_lo_3492_, lean_object* v_hi_3493_){
_start:
{
uint8_t v___x_3494_; 
v___x_3494_ = lean_nat_dec_lt(v_lo_3492_, v_hi_3493_);
if (v___x_3494_ == 0)
{
lean_dec(v_lo_3492_);
return v_as_3491_;
}
else
{
lean_object* v___f_3495_; lean_object* v___x_3496_; lean_object* v_fst_3497_; lean_object* v_snd_3498_; uint8_t v___x_3499_; 
v___f_3495_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg___closed__0));
lean_inc(v_lo_3492_);
v___x_3496_ = l_Array_qpartition___redArg(v_as_3491_, v___f_3495_, v_lo_3492_, v_hi_3493_);
v_fst_3497_ = lean_ctor_get(v___x_3496_, 0);
lean_inc(v_fst_3497_);
v_snd_3498_ = lean_ctor_get(v___x_3496_, 1);
lean_inc(v_snd_3498_);
lean_dec_ref(v___x_3496_);
v___x_3499_ = lean_nat_dec_le(v_hi_3493_, v_fst_3497_);
if (v___x_3499_ == 0)
{
lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; 
v___x_3500_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg(v_snd_3498_, v_lo_3492_, v_fst_3497_);
v___x_3501_ = lean_unsigned_to_nat(1u);
v___x_3502_ = lean_nat_add(v_fst_3497_, v___x_3501_);
lean_dec(v_fst_3497_);
v_as_3491_ = v___x_3500_;
v_lo_3492_ = v___x_3502_;
goto _start;
}
else
{
lean_dec(v_fst_3497_);
lean_dec(v_lo_3492_);
return v_snd_3498_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg___boxed(lean_object* v_as_3504_, lean_object* v_lo_3505_, lean_object* v_hi_3506_){
_start:
{
lean_object* v_res_3507_; 
v_res_3507_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg(v_as_3504_, v_lo_3505_, v_hi_3506_);
lean_dec(v_hi_3506_);
return v_res_3507_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__5___redArg(lean_object* v_as_3508_, size_t v_i_3509_, size_t v_stop_3510_, lean_object* v_b_3511_, lean_object* v___y_3512_){
_start:
{
uint8_t v___x_3514_; 
v___x_3514_ = lean_usize_dec_eq(v_i_3509_, v_stop_3510_);
if (v___x_3514_ == 0)
{
lean_object* v___x_3515_; lean_object* v_fst_3516_; lean_object* v_varMap_3517_; lean_object* v___x_3518_; uint8_t v_isDefiniteRef_3519_; lean_object* v___x_3520_; uint8_t v___y_3522_; 
v___x_3515_ = lean_array_uget_borrowed(v_as_3508_, v_i_3509_);
v_fst_3516_ = lean_ctor_get(v___x_3515_, 0);
v_varMap_3517_ = lean_ctor_get(v___y_3512_, 2);
v___x_3518_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0(v_varMap_3517_, v_fst_3516_);
v_isDefiniteRef_3519_ = lean_ctor_get_uint8(v___x_3518_, sizeof(void*)*1 + 1);
v___x_3520_ = lean_unsigned_to_nat(1u);
if (v_isDefiniteRef_3519_ == 0)
{
uint8_t v___x_3528_; 
v___x_3528_ = 1;
v___y_3522_ = v___x_3528_;
goto v___jp_3521_;
}
else
{
v___y_3522_ = v___x_3514_;
goto v___jp_3521_;
}
v___jp_3521_:
{
uint8_t v_persistent_3523_; lean_object* v___x_3524_; size_t v___x_3525_; size_t v___x_3526_; 
v_persistent_3523_ = lean_ctor_get_uint8(v___x_3518_, sizeof(void*)*1 + 2);
lean_dec_ref(v___x_3518_);
lean_inc(v_fst_3516_);
v___x_3524_ = lean_alloc_ctor(12, 3, 2);
lean_ctor_set(v___x_3524_, 0, v_fst_3516_);
lean_ctor_set(v___x_3524_, 1, v___x_3520_);
lean_ctor_set(v___x_3524_, 2, v_b_3511_);
lean_ctor_set_uint8(v___x_3524_, sizeof(void*)*3, v___y_3522_);
lean_ctor_set_uint8(v___x_3524_, sizeof(void*)*3 + 1, v_persistent_3523_);
v___x_3525_ = ((size_t)1ULL);
v___x_3526_ = lean_usize_add(v_i_3509_, v___x_3525_);
v_i_3509_ = v___x_3526_;
v_b_3511_ = v___x_3524_;
goto _start;
}
}
else
{
lean_object* v___x_3529_; 
v___x_3529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3529_, 0, v_b_3511_);
return v___x_3529_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__5___redArg___boxed(lean_object* v_as_3530_, lean_object* v_i_3531_, lean_object* v_stop_3532_, lean_object* v_b_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_){
_start:
{
size_t v_i_boxed_3536_; size_t v_stop_boxed_3537_; lean_object* v_res_3538_; 
v_i_boxed_3536_ = lean_unbox_usize(v_i_3531_);
lean_dec(v_i_3531_);
v_stop_boxed_3537_ = lean_unbox_usize(v_stop_3532_);
lean_dec(v_stop_3532_);
v_res_3538_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__5___redArg(v_as_3530_, v_i_boxed_3536_, v_stop_boxed_3537_, v_b_3533_, v___y_3534_);
lean_dec_ref(v___y_3534_);
lean_dec_ref(v_as_3530_);
return v_res_3538_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1___redArg(lean_object* v_altLiveVars_3539_, lean_object* v_a_3540_, lean_object* v_a_3541_, lean_object* v___y_3542_, lean_object* v___y_3543_){
_start:
{
if (lean_obj_tag(v_a_3540_) == 0)
{
lean_object* v___x_3545_; lean_object* v___x_3546_; 
v___x_3545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3545_, 0, v_a_3541_);
v___x_3546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3546_, 0, v___x_3545_);
return v___x_3546_;
}
else
{
lean_object* v_key_3547_; lean_object* v_tail_3548_; lean_object* v_fst_3549_; lean_object* v_snd_3550_; lean_object* v___x_3552_; uint8_t v_isShared_3553_; uint8_t v_isSharedCheck_3596_; 
v_key_3547_ = lean_ctor_get(v_a_3540_, 0);
v_tail_3548_ = lean_ctor_get(v_a_3540_, 2);
v_fst_3549_ = lean_ctor_get(v_a_3541_, 0);
v_snd_3550_ = lean_ctor_get(v_a_3541_, 1);
v_isSharedCheck_3596_ = !lean_is_exclusive(v_a_3541_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3552_ = v_a_3541_;
v_isShared_3553_ = v_isSharedCheck_3596_;
goto v_resetjp_3551_;
}
else
{
lean_inc(v_snd_3550_);
lean_inc(v_fst_3549_);
lean_dec(v_a_3541_);
v___x_3552_ = lean_box(0);
v_isShared_3553_ = v_isSharedCheck_3596_;
goto v_resetjp_3551_;
}
v_resetjp_3551_:
{
lean_object* v_varMap_3554_; lean_object* v_vars_3555_; lean_object* v_borrows_3556_; lean_object* v___x_3557_; uint8_t v___x_3558_; 
v_varMap_3554_ = lean_ctor_get(v___y_3542_, 2);
v_vars_3555_ = lean_ctor_get(v_altLiveVars_3539_, 0);
v_borrows_3556_ = lean_ctor_get(v_altLiveVars_3539_, 1);
v___x_3557_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0(v_varMap_3554_, v_key_3547_);
v___x_3558_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_3555_, v_key_3547_);
if (v___x_3558_ == 0)
{
lean_object* v___x_3559_; uint8_t v_isPossibleRef_3565_; 
v___x_3559_ = lean_st_ref_get(v___y_3543_);
v_isPossibleRef_3565_ = lean_ctor_get_uint8(v___x_3557_, sizeof(void*)*1);
if (v_isPossibleRef_3565_ == 0)
{
lean_dec(v___x_3559_);
lean_dec_ref(v___x_3557_);
goto v___jp_3560_;
}
else
{
lean_object* v_idx_3566_; lean_object* v_borrows_3567_; lean_object* v___x_3569_; uint8_t v_isShared_3570_; uint8_t v_isSharedCheck_3578_; 
v_idx_3566_ = lean_ctor_get(v___x_3557_, 0);
lean_inc(v_idx_3566_);
lean_dec_ref(v___x_3557_);
v_borrows_3567_ = lean_ctor_get(v___x_3559_, 1);
v_isSharedCheck_3578_ = !lean_is_exclusive(v___x_3559_);
if (v_isSharedCheck_3578_ == 0)
{
lean_object* v_unused_3579_; 
v_unused_3579_ = lean_ctor_get(v___x_3559_, 0);
lean_dec(v_unused_3579_);
v___x_3569_ = v___x_3559_;
v_isShared_3570_ = v_isSharedCheck_3578_;
goto v_resetjp_3568_;
}
else
{
lean_inc(v_borrows_3567_);
lean_dec(v___x_3559_);
v___x_3569_ = lean_box(0);
v_isShared_3570_ = v_isSharedCheck_3578_;
goto v_resetjp_3568_;
}
v_resetjp_3568_:
{
uint8_t v___x_3571_; 
v___x_3571_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_3567_, v_key_3547_);
lean_dec_ref(v_borrows_3567_);
if (v___x_3571_ == 0)
{
lean_object* v___x_3573_; 
lean_del_object(v___x_3552_);
lean_inc(v_key_3547_);
if (v_isShared_3570_ == 0)
{
lean_ctor_set(v___x_3569_, 1, v_idx_3566_);
lean_ctor_set(v___x_3569_, 0, v_key_3547_);
v___x_3573_ = v___x_3569_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v_key_3547_);
lean_ctor_set(v_reuseFailAlloc_3577_, 1, v_idx_3566_);
v___x_3573_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
lean_object* v___x_3574_; lean_object* v___x_3575_; 
v___x_3574_ = lean_array_push(v_snd_3550_, v___x_3573_);
v___x_3575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3575_, 0, v_fst_3549_);
lean_ctor_set(v___x_3575_, 1, v___x_3574_);
v_a_3540_ = v_tail_3548_;
v_a_3541_ = v___x_3575_;
goto _start;
}
}
else
{
lean_del_object(v___x_3569_);
lean_dec(v_idx_3566_);
goto v___jp_3560_;
}
}
}
v___jp_3560_:
{
lean_object* v___x_3562_; 
if (v_isShared_3553_ == 0)
{
v___x_3562_ = v___x_3552_;
goto v_reusejp_3561_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v_fst_3549_);
lean_ctor_set(v_reuseFailAlloc_3564_, 1, v_snd_3550_);
v___x_3562_ = v_reuseFailAlloc_3564_;
goto v_reusejp_3561_;
}
v_reusejp_3561_:
{
v_a_3540_ = v_tail_3548_;
v_a_3541_ = v___x_3562_;
goto _start;
}
}
}
else
{
lean_object* v___x_3580_; uint8_t v___y_3587_; lean_object* v_borrows_3593_; uint8_t v___x_3594_; 
v___x_3580_ = lean_st_ref_get(v___y_3543_);
v_borrows_3593_ = lean_ctor_get(v___x_3580_, 1);
lean_inc_ref(v_borrows_3593_);
lean_dec(v___x_3580_);
v___x_3594_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_3593_, v_key_3547_);
lean_dec_ref(v_borrows_3593_);
if (v___x_3594_ == 0)
{
v___y_3587_ = v___x_3594_;
goto v___jp_3586_;
}
else
{
uint8_t v___x_3595_; 
v___x_3595_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_3556_, v_key_3547_);
if (v___x_3595_ == 0)
{
v___y_3587_ = v___x_3594_;
goto v___jp_3586_;
}
else
{
lean_dec_ref(v___x_3557_);
goto v___jp_3581_;
}
}
v___jp_3581_:
{
lean_object* v___x_3583_; 
if (v_isShared_3553_ == 0)
{
v___x_3583_ = v___x_3552_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3585_; 
v_reuseFailAlloc_3585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3585_, 0, v_fst_3549_);
lean_ctor_set(v_reuseFailAlloc_3585_, 1, v_snd_3550_);
v___x_3583_ = v_reuseFailAlloc_3585_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
v_a_3540_ = v_tail_3548_;
v_a_3541_ = v___x_3583_;
goto _start;
}
}
v___jp_3586_:
{
if (v___y_3587_ == 0)
{
lean_dec_ref(v___x_3557_);
goto v___jp_3581_;
}
else
{
lean_object* v_idx_3588_; lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; 
lean_del_object(v___x_3552_);
v_idx_3588_ = lean_ctor_get(v___x_3557_, 0);
lean_inc(v_idx_3588_);
lean_dec_ref(v___x_3557_);
lean_inc(v_key_3547_);
v___x_3589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3589_, 0, v_key_3547_);
lean_ctor_set(v___x_3589_, 1, v_idx_3588_);
v___x_3590_ = lean_array_push(v_fst_3549_, v___x_3589_);
v___x_3591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3591_, 0, v___x_3590_);
lean_ctor_set(v___x_3591_, 1, v_snd_3550_);
v_a_3540_ = v_tail_3548_;
v_a_3541_ = v___x_3591_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1___redArg___boxed(lean_object* v_altLiveVars_3597_, lean_object* v_a_3598_, lean_object* v_a_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_){
_start:
{
lean_object* v_res_3603_; 
v_res_3603_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1___redArg(v_altLiveVars_3597_, v_a_3598_, v_a_3599_, v___y_3600_, v___y_3601_);
lean_dec(v___y_3601_);
lean_dec_ref(v___y_3600_);
lean_dec(v_a_3598_);
lean_dec_ref(v_altLiveVars_3597_);
return v_res_3603_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2(lean_object* v_altLiveVars_3604_, lean_object* v_as_3605_, size_t v_sz_3606_, size_t v_i_3607_, lean_object* v_b_3608_, lean_object* v___y_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_){
_start:
{
uint8_t v___x_3616_; 
v___x_3616_ = lean_usize_dec_lt(v_i_3607_, v_sz_3606_);
if (v___x_3616_ == 0)
{
lean_object* v___x_3617_; 
v___x_3617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3617_, 0, v_b_3608_);
return v___x_3617_;
}
else
{
lean_object* v_a_3618_; lean_object* v___x_3619_; 
v_a_3618_ = lean_array_uget_borrowed(v_as_3605_, v_i_3607_);
v___x_3619_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1___redArg(v_altLiveVars_3604_, v_a_3618_, v_b_3608_, v___y_3609_, v___y_3610_);
if (lean_obj_tag(v___x_3619_) == 0)
{
lean_object* v_a_3620_; lean_object* v___x_3622_; uint8_t v_isShared_3623_; uint8_t v_isSharedCheck_3632_; 
v_a_3620_ = lean_ctor_get(v___x_3619_, 0);
v_isSharedCheck_3632_ = !lean_is_exclusive(v___x_3619_);
if (v_isSharedCheck_3632_ == 0)
{
v___x_3622_ = v___x_3619_;
v_isShared_3623_ = v_isSharedCheck_3632_;
goto v_resetjp_3621_;
}
else
{
lean_inc(v_a_3620_);
lean_dec(v___x_3619_);
v___x_3622_ = lean_box(0);
v_isShared_3623_ = v_isSharedCheck_3632_;
goto v_resetjp_3621_;
}
v_resetjp_3621_:
{
if (lean_obj_tag(v_a_3620_) == 0)
{
lean_object* v_a_3624_; lean_object* v___x_3626_; 
v_a_3624_ = lean_ctor_get(v_a_3620_, 0);
lean_inc(v_a_3624_);
lean_dec_ref(v_a_3620_);
if (v_isShared_3623_ == 0)
{
lean_ctor_set(v___x_3622_, 0, v_a_3624_);
v___x_3626_ = v___x_3622_;
goto v_reusejp_3625_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v_a_3624_);
v___x_3626_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3625_;
}
v_reusejp_3625_:
{
return v___x_3626_;
}
}
else
{
lean_object* v_a_3628_; size_t v___x_3629_; size_t v___x_3630_; 
lean_del_object(v___x_3622_);
v_a_3628_ = lean_ctor_get(v_a_3620_, 0);
lean_inc(v_a_3628_);
lean_dec_ref(v_a_3620_);
v___x_3629_ = ((size_t)1ULL);
v___x_3630_ = lean_usize_add(v_i_3607_, v___x_3629_);
v_i_3607_ = v___x_3630_;
v_b_3608_ = v_a_3628_;
goto _start;
}
}
}
else
{
lean_object* v_a_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3640_; 
v_a_3633_ = lean_ctor_get(v___x_3619_, 0);
v_isSharedCheck_3640_ = !lean_is_exclusive(v___x_3619_);
if (v_isSharedCheck_3640_ == 0)
{
v___x_3635_ = v___x_3619_;
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_a_3633_);
lean_dec(v___x_3619_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v___x_3638_; 
if (v_isShared_3636_ == 0)
{
v___x_3638_ = v___x_3635_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v_a_3633_);
v___x_3638_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
return v___x_3638_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___boxed(lean_object* v_altLiveVars_3641_, lean_object* v_as_3642_, lean_object* v_sz_3643_, lean_object* v_i_3644_, lean_object* v_b_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_){
_start:
{
size_t v_sz_boxed_3653_; size_t v_i_boxed_3654_; lean_object* v_res_3655_; 
v_sz_boxed_3653_ = lean_unbox_usize(v_sz_3643_);
lean_dec(v_sz_3643_);
v_i_boxed_3654_ = lean_unbox_usize(v_i_3644_);
lean_dec(v_i_3644_);
v_res_3655_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2(v_altLiveVars_3641_, v_as_3642_, v_sz_boxed_3653_, v_i_boxed_3654_, v_b_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, v___y_3651_);
lean_dec(v___y_3651_);
lean_dec_ref(v___y_3650_);
lean_dec(v___y_3649_);
lean_dec_ref(v___y_3648_);
lean_dec(v___y_3647_);
lean_dec_ref(v___y_3646_);
lean_dec_ref(v_as_3642_);
lean_dec_ref(v_altLiveVars_3641_);
return v_res_3655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt(lean_object* v_altLiveVars_3660_, lean_object* v_k_3661_, lean_object* v_a_3662_, lean_object* v_a_3663_, lean_object* v_a_3664_, lean_object* v_a_3665_, lean_object* v_a_3666_, lean_object* v_a_3667_){
_start:
{
lean_object* v___x_3669_; lean_object* v_vars_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v_buckets_3673_; size_t v_sz_3674_; size_t v___x_3675_; lean_object* v___y_3677_; lean_object* v___y_3678_; lean_object* v___y_3679_; lean_object* v___x_3687_; 
v___x_3669_ = lean_st_ref_get(v_a_3663_);
v_vars_3670_ = lean_ctor_get(v___x_3669_, 0);
lean_inc_ref(v_vars_3670_);
lean_dec(v___x_3669_);
v___x_3671_ = lean_unsigned_to_nat(0u);
v___x_3672_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__1));
v_buckets_3673_ = lean_ctor_get(v_vars_3670_, 1);
lean_inc_ref(v_buckets_3673_);
lean_dec_ref(v_vars_3670_);
v_sz_3674_ = lean_array_size(v_buckets_3673_);
v___x_3675_ = ((size_t)0ULL);
v___x_3687_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2(v_altLiveVars_3660_, v_buckets_3673_, v_sz_3674_, v___x_3675_, v___x_3672_, v_a_3662_, v_a_3663_, v_a_3664_, v_a_3665_, v_a_3666_, v_a_3667_);
lean_dec_ref(v_buckets_3673_);
if (lean_obj_tag(v___x_3687_) == 0)
{
lean_object* v_a_3688_; lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3745_; 
v_a_3688_ = lean_ctor_get(v___x_3687_, 0);
v_isSharedCheck_3745_ = !lean_is_exclusive(v___x_3687_);
if (v_isSharedCheck_3745_ == 0)
{
v___x_3690_ = v___x_3687_;
v_isShared_3691_ = v_isSharedCheck_3745_;
goto v_resetjp_3689_;
}
else
{
lean_inc(v_a_3688_);
lean_dec(v___x_3687_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3745_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
lean_object* v_fst_3692_; lean_object* v_snd_3693_; lean_object* v___y_3695_; lean_object* v___y_3696_; lean_object* v___y_3697_; lean_object* v___y_3698_; lean_object* v___y_3699_; lean_object* v___y_3702_; lean_object* v___y_3703_; lean_object* v___y_3704_; lean_object* v___y_3705_; lean_object* v___y_3706_; lean_object* v___x_3708_; lean_object* v___y_3710_; lean_object* v_a_3711_; lean_object* v___y_3717_; lean_object* v___y_3720_; lean_object* v___y_3735_; lean_object* v___y_3736_; lean_object* v___x_3738_; uint8_t v___x_3739_; 
v_fst_3692_ = lean_ctor_get(v_a_3688_, 0);
lean_inc(v_fst_3692_);
v_snd_3693_ = lean_ctor_get(v_a_3688_, 1);
lean_inc(v_snd_3693_);
lean_dec(v_a_3688_);
v___x_3708_ = lean_unsigned_to_nat(1u);
v___x_3738_ = lean_array_get_size(v_snd_3693_);
v___x_3739_ = lean_nat_dec_eq(v___x_3738_, v___x_3671_);
if (v___x_3739_ == 0)
{
lean_object* v___x_3740_; lean_object* v___y_3742_; uint8_t v___x_3744_; 
v___x_3740_ = lean_nat_sub(v___x_3738_, v___x_3708_);
v___x_3744_ = lean_nat_dec_le(v___x_3671_, v___x_3740_);
if (v___x_3744_ == 0)
{
lean_inc(v___x_3740_);
v___y_3742_ = v___x_3740_;
goto v___jp_3741_;
}
else
{
v___y_3742_ = v___x_3671_;
goto v___jp_3741_;
}
v___jp_3741_:
{
uint8_t v___x_3743_; 
v___x_3743_ = lean_nat_dec_le(v___y_3742_, v___x_3740_);
if (v___x_3743_ == 0)
{
lean_dec(v___x_3740_);
lean_inc(v___y_3742_);
v___y_3735_ = v___y_3742_;
v___y_3736_ = v___y_3742_;
goto v___jp_3734_;
}
else
{
v___y_3735_ = v___y_3742_;
v___y_3736_ = v___x_3740_;
goto v___jp_3734_;
}
}
}
else
{
v___y_3720_ = v_snd_3693_;
goto v___jp_3719_;
}
v___jp_3694_:
{
lean_object* v___x_3700_; 
lean_dec(v___y_3695_);
v___x_3700_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg(v_fst_3692_, v___y_3698_, v___y_3699_);
lean_dec(v___y_3699_);
v___y_3677_ = v___y_3696_;
v___y_3678_ = v___y_3697_;
v___y_3679_ = v___x_3700_;
goto v___jp_3676_;
}
v___jp_3701_:
{
uint8_t v___x_3707_; 
v___x_3707_ = lean_nat_dec_le(v___y_3706_, v___y_3704_);
if (v___x_3707_ == 0)
{
lean_dec(v___y_3704_);
lean_inc(v___y_3706_);
v___y_3695_ = v___y_3702_;
v___y_3696_ = v___y_3703_;
v___y_3697_ = v___y_3705_;
v___y_3698_ = v___y_3706_;
v___y_3699_ = v___y_3706_;
goto v___jp_3694_;
}
else
{
v___y_3695_ = v___y_3702_;
v___y_3696_ = v___y_3703_;
v___y_3697_ = v___y_3705_;
v___y_3698_ = v___y_3706_;
v___y_3699_ = v___y_3704_;
goto v___jp_3694_;
}
}
v___jp_3709_:
{
lean_object* v___x_3712_; uint8_t v___x_3713_; 
v___x_3712_ = lean_array_get_size(v_fst_3692_);
v___x_3713_ = lean_nat_dec_eq(v___x_3712_, v___x_3671_);
if (v___x_3713_ == 0)
{
lean_object* v___x_3714_; uint8_t v___x_3715_; 
v___x_3714_ = lean_nat_sub(v___x_3712_, v___x_3708_);
v___x_3715_ = lean_nat_dec_le(v___x_3671_, v___x_3714_);
if (v___x_3715_ == 0)
{
lean_inc(v___x_3714_);
v___y_3702_ = v___x_3712_;
v___y_3703_ = v_a_3711_;
v___y_3704_ = v___x_3714_;
v___y_3705_ = v___y_3710_;
v___y_3706_ = v___x_3714_;
goto v___jp_3701_;
}
else
{
v___y_3702_ = v___x_3712_;
v___y_3703_ = v_a_3711_;
v___y_3704_ = v___x_3714_;
v___y_3705_ = v___y_3710_;
v___y_3706_ = v___x_3671_;
goto v___jp_3701_;
}
}
else
{
v___y_3677_ = v_a_3711_;
v___y_3678_ = v___y_3710_;
v___y_3679_ = v_fst_3692_;
goto v___jp_3676_;
}
}
v___jp_3716_:
{
if (lean_obj_tag(v___y_3717_) == 0)
{
lean_object* v_a_3718_; 
v_a_3718_ = lean_ctor_get(v___y_3717_, 0);
lean_inc(v_a_3718_);
v___y_3710_ = v___y_3717_;
v_a_3711_ = v_a_3718_;
goto v___jp_3709_;
}
else
{
lean_dec(v_fst_3692_);
return v___y_3717_;
}
}
v___jp_3719_:
{
lean_object* v___x_3721_; uint8_t v___x_3722_; 
v___x_3721_ = lean_array_get_size(v___y_3720_);
v___x_3722_ = lean_nat_dec_lt(v___x_3671_, v___x_3721_);
if (v___x_3722_ == 0)
{
lean_object* v___x_3724_; 
lean_dec_ref(v___y_3720_);
lean_inc_ref(v_k_3661_);
if (v_isShared_3691_ == 0)
{
lean_ctor_set(v___x_3690_, 0, v_k_3661_);
v___x_3724_ = v___x_3690_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v_k_3661_);
v___x_3724_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
v___y_3710_ = v___x_3724_;
v_a_3711_ = v_k_3661_;
goto v___jp_3709_;
}
}
else
{
uint8_t v___x_3726_; 
v___x_3726_ = lean_nat_dec_le(v___x_3721_, v___x_3721_);
if (v___x_3726_ == 0)
{
if (v___x_3722_ == 0)
{
lean_object* v___x_3728_; 
lean_dec_ref(v___y_3720_);
lean_inc_ref(v_k_3661_);
if (v_isShared_3691_ == 0)
{
lean_ctor_set(v___x_3690_, 0, v_k_3661_);
v___x_3728_ = v___x_3690_;
goto v_reusejp_3727_;
}
else
{
lean_object* v_reuseFailAlloc_3729_; 
v_reuseFailAlloc_3729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3729_, 0, v_k_3661_);
v___x_3728_ = v_reuseFailAlloc_3729_;
goto v_reusejp_3727_;
}
v_reusejp_3727_:
{
v___y_3710_ = v___x_3728_;
v_a_3711_ = v_k_3661_;
goto v___jp_3709_;
}
}
else
{
size_t v___x_3730_; lean_object* v___x_3731_; 
lean_del_object(v___x_3690_);
v___x_3730_ = lean_usize_of_nat(v___x_3721_);
v___x_3731_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__5___redArg(v___y_3720_, v___x_3675_, v___x_3730_, v_k_3661_, v_a_3662_);
lean_dec_ref(v___y_3720_);
v___y_3717_ = v___x_3731_;
goto v___jp_3716_;
}
}
else
{
size_t v___x_3732_; lean_object* v___x_3733_; 
lean_del_object(v___x_3690_);
v___x_3732_ = lean_usize_of_nat(v___x_3721_);
v___x_3733_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__5___redArg(v___y_3720_, v___x_3675_, v___x_3732_, v_k_3661_, v_a_3662_);
lean_dec_ref(v___y_3720_);
v___y_3717_ = v___x_3733_;
goto v___jp_3716_;
}
}
}
v___jp_3734_:
{
lean_object* v___x_3737_; 
v___x_3737_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg(v_snd_3693_, v___y_3735_, v___y_3736_);
lean_dec(v___y_3736_);
v___y_3720_ = v___x_3737_;
goto v___jp_3719_;
}
}
}
else
{
lean_object* v_a_3746_; lean_object* v___x_3748_; uint8_t v_isShared_3749_; uint8_t v_isSharedCheck_3753_; 
lean_dec_ref(v_k_3661_);
v_a_3746_ = lean_ctor_get(v___x_3687_, 0);
v_isSharedCheck_3753_ = !lean_is_exclusive(v___x_3687_);
if (v_isSharedCheck_3753_ == 0)
{
v___x_3748_ = v___x_3687_;
v_isShared_3749_ = v_isSharedCheck_3753_;
goto v_resetjp_3747_;
}
else
{
lean_inc(v_a_3746_);
lean_dec(v___x_3687_);
v___x_3748_ = lean_box(0);
v_isShared_3749_ = v_isSharedCheck_3753_;
goto v_resetjp_3747_;
}
v_resetjp_3747_:
{
lean_object* v___x_3751_; 
if (v_isShared_3749_ == 0)
{
v___x_3751_ = v___x_3748_;
goto v_reusejp_3750_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v_a_3746_);
v___x_3751_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3750_;
}
v_reusejp_3750_:
{
return v___x_3751_;
}
}
}
v___jp_3676_:
{
lean_object* v___x_3680_; uint8_t v___x_3681_; 
v___x_3680_ = lean_array_get_size(v___y_3679_);
v___x_3681_ = lean_nat_dec_lt(v___x_3671_, v___x_3680_);
if (v___x_3681_ == 0)
{
lean_dec_ref(v___y_3679_);
lean_dec_ref(v___y_3677_);
return v___y_3678_;
}
else
{
uint8_t v___x_3682_; 
v___x_3682_ = lean_nat_dec_le(v___x_3680_, v___x_3680_);
if (v___x_3682_ == 0)
{
if (v___x_3681_ == 0)
{
lean_dec_ref(v___y_3679_);
lean_dec_ref(v___y_3677_);
return v___y_3678_;
}
else
{
size_t v___x_3683_; lean_object* v___x_3684_; 
lean_dec_ref(v___y_3678_);
v___x_3683_ = lean_usize_of_nat(v___x_3680_);
v___x_3684_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(v___y_3679_, v___x_3675_, v___x_3683_, v___y_3677_, v_a_3662_);
lean_dec_ref(v___y_3679_);
return v___x_3684_;
}
}
else
{
size_t v___x_3685_; lean_object* v___x_3686_; 
lean_dec_ref(v___y_3678_);
v___x_3685_ = lean_usize_of_nat(v___x_3680_);
v___x_3686_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(v___y_3679_, v___x_3675_, v___x_3685_, v___y_3677_, v_a_3662_);
lean_dec_ref(v___y_3679_);
return v___x_3686_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___boxed(lean_object* v_altLiveVars_3754_, lean_object* v_k_3755_, lean_object* v_a_3756_, lean_object* v_a_3757_, lean_object* v_a_3758_, lean_object* v_a_3759_, lean_object* v_a_3760_, lean_object* v_a_3761_, lean_object* v_a_3762_){
_start:
{
lean_object* v_res_3763_; 
v_res_3763_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt(v_altLiveVars_3754_, v_k_3755_, v_a_3756_, v_a_3757_, v_a_3758_, v_a_3759_, v_a_3760_, v_a_3761_);
lean_dec(v_a_3761_);
lean_dec_ref(v_a_3760_);
lean_dec(v_a_3759_);
lean_dec_ref(v_a_3758_);
lean_dec(v_a_3757_);
lean_dec_ref(v_a_3756_);
lean_dec_ref(v_altLiveVars_3754_);
return v_res_3763_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1(lean_object* v_altLiveVars_3764_, lean_object* v_a_3765_, lean_object* v_a_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_){
_start:
{
lean_object* v___x_3774_; 
v___x_3774_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1___redArg(v_altLiveVars_3764_, v_a_3765_, v_a_3766_, v___y_3767_, v___y_3768_);
return v___x_3774_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1___boxed(lean_object* v_altLiveVars_3775_, lean_object* v_a_3776_, lean_object* v_a_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_){
_start:
{
lean_object* v_res_3785_; 
v_res_3785_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1(v_altLiveVars_3775_, v_a_3776_, v_a_3777_, v___y_3778_, v___y_3779_, v___y_3780_, v___y_3781_, v___y_3782_, v___y_3783_);
lean_dec(v___y_3783_);
lean_dec_ref(v___y_3782_);
lean_dec(v___y_3781_);
lean_dec_ref(v___y_3780_);
lean_dec(v___y_3779_);
lean_dec_ref(v___y_3778_);
lean_dec(v_a_3776_);
lean_dec_ref(v_altLiveVars_3775_);
return v_res_3785_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3(lean_object* v_as_3786_, size_t v_i_3787_, size_t v_stop_3788_, lean_object* v_b_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_){
_start:
{
lean_object* v___x_3797_; 
v___x_3797_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(v_as_3786_, v_i_3787_, v_stop_3788_, v_b_3789_, v___y_3790_);
return v___x_3797_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___boxed(lean_object* v_as_3798_, lean_object* v_i_3799_, lean_object* v_stop_3800_, lean_object* v_b_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_){
_start:
{
size_t v_i_boxed_3809_; size_t v_stop_boxed_3810_; lean_object* v_res_3811_; 
v_i_boxed_3809_ = lean_unbox_usize(v_i_3799_);
lean_dec(v_i_3799_);
v_stop_boxed_3810_ = lean_unbox_usize(v_stop_3800_);
lean_dec(v_stop_3800_);
v_res_3811_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3(v_as_3798_, v_i_boxed_3809_, v_stop_boxed_3810_, v_b_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_, v___y_3806_, v___y_3807_);
lean_dec(v___y_3807_);
lean_dec_ref(v___y_3806_);
lean_dec(v___y_3805_);
lean_dec_ref(v___y_3804_);
lean_dec(v___y_3803_);
lean_dec_ref(v___y_3802_);
lean_dec_ref(v_as_3798_);
return v_res_3811_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4(lean_object* v_n_3812_, lean_object* v_as_3813_, lean_object* v_lo_3814_, lean_object* v_hi_3815_, lean_object* v_w_3816_, lean_object* v_hlo_3817_, lean_object* v_hhi_3818_){
_start:
{
lean_object* v___x_3819_; 
v___x_3819_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg(v_as_3813_, v_lo_3814_, v_hi_3815_);
return v___x_3819_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___boxed(lean_object* v_n_3820_, lean_object* v_as_3821_, lean_object* v_lo_3822_, lean_object* v_hi_3823_, lean_object* v_w_3824_, lean_object* v_hlo_3825_, lean_object* v_hhi_3826_){
_start:
{
lean_object* v_res_3827_; 
v_res_3827_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4(v_n_3820_, v_as_3821_, v_lo_3822_, v_hi_3823_, v_w_3824_, v_hlo_3825_, v_hhi_3826_);
lean_dec(v_hi_3823_);
lean_dec(v_n_3820_);
return v_res_3827_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__5(lean_object* v_as_3828_, size_t v_i_3829_, size_t v_stop_3830_, lean_object* v_b_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_){
_start:
{
lean_object* v___x_3839_; 
v___x_3839_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__5___redArg(v_as_3828_, v_i_3829_, v_stop_3830_, v_b_3831_, v___y_3832_);
return v___x_3839_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__5___boxed(lean_object* v_as_3840_, lean_object* v_i_3841_, lean_object* v_stop_3842_, lean_object* v_b_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_){
_start:
{
size_t v_i_boxed_3851_; size_t v_stop_boxed_3852_; lean_object* v_res_3853_; 
v_i_boxed_3851_ = lean_unbox_usize(v_i_3841_);
lean_dec(v_i_3841_);
v_stop_boxed_3852_ = lean_unbox_usize(v_stop_3842_);
lean_dec(v_stop_3842_);
v_res_3853_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__5(v_as_3840_, v_i_boxed_3851_, v_stop_boxed_3852_, v_b_3843_, v___y_3844_, v___y_3845_, v___y_3846_, v___y_3847_, v___y_3848_, v___y_3849_);
lean_dec(v___y_3849_);
lean_dec_ref(v___y_3848_);
lean_dec(v___y_3847_);
lean_dec_ref(v___y_3846_);
lean_dec(v___y_3845_);
lean_dec_ref(v___y_3844_);
lean_dec_ref(v_as_3840_);
return v_res_3853_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg(lean_object* v_args_3854_, lean_object* v_x_3855_, lean_object* v_n_3856_, lean_object* v_i_3857_){
_start:
{
lean_object* v_zero_3858_; uint8_t v_isZero_3859_; 
v_zero_3858_ = lean_unsigned_to_nat(0u);
v_isZero_3859_ = lean_nat_dec_eq(v_i_3857_, v_zero_3858_);
if (v_isZero_3859_ == 1)
{
lean_dec(v_i_3857_);
return v_isZero_3859_;
}
else
{
lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; uint8_t v___x_3863_; 
v___x_3860_ = lean_box(0);
v___x_3861_ = lean_nat_sub(v_n_3856_, v_i_3857_);
v___x_3862_ = lean_array_get(v___x_3860_, v_args_3854_, v___x_3861_);
lean_dec(v___x_3861_);
v___x_3863_ = l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(v___x_3862_, v_x_3855_);
lean_dec(v___x_3862_);
if (v___x_3863_ == 0)
{
lean_object* v_one_3864_; lean_object* v_n_3865_; 
v_one_3864_ = lean_unsigned_to_nat(1u);
v_n_3865_ = lean_nat_sub(v_i_3857_, v_one_3864_);
lean_dec(v_i_3857_);
v_i_3857_ = v_n_3865_;
goto _start;
}
else
{
lean_dec(v_i_3857_);
return v_isZero_3859_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg___boxed(lean_object* v_args_3867_, lean_object* v_x_3868_, lean_object* v_n_3869_, lean_object* v_i_3870_){
_start:
{
uint8_t v_res_3871_; lean_object* v_r_3872_; 
v_res_3871_ = l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg(v_args_3867_, v_x_3868_, v_n_3869_, v_i_3870_);
lean_dec(v_n_3869_);
lean_dec(v_x_3868_);
lean_dec_ref(v_args_3867_);
v_r_3872_ = lean_box(v_res_3871_);
return v_r_3872_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc(lean_object* v_args_3873_, lean_object* v_i_3874_){
_start:
{
lean_object* v___x_3875_; lean_object* v_x_3876_; uint8_t v___x_3877_; 
v___x_3875_ = lean_box(0);
v_x_3876_ = lean_array_get(v___x_3875_, v_args_3873_, v_i_3874_);
lean_inc(v_i_3874_);
v___x_3877_ = l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg(v_args_3873_, v_x_3876_, v_i_3874_, v_i_3874_);
lean_dec(v_i_3874_);
lean_dec(v_x_3876_);
return v___x_3877_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc___boxed(lean_object* v_args_3878_, lean_object* v_i_3879_){
_start:
{
uint8_t v_res_3880_; lean_object* v_r_3881_; 
v_res_3880_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc(v_args_3878_, v_i_3879_);
lean_dec_ref(v_args_3878_);
v_r_3881_ = lean_box(v_res_3880_);
return v_r_3881_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0(lean_object* v_args_3882_, lean_object* v_x_3883_, lean_object* v_n_3884_, lean_object* v_i_3885_, lean_object* v_a_3886_){
_start:
{
uint8_t v___x_3887_; 
v___x_3887_ = l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg(v_args_3882_, v_x_3883_, v_n_3884_, v_i_3885_);
return v___x_3887_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___boxed(lean_object* v_args_3888_, lean_object* v_x_3889_, lean_object* v_n_3890_, lean_object* v_i_3891_, lean_object* v_a_3892_){
_start:
{
uint8_t v_res_3893_; lean_object* v_r_3894_; 
v_res_3893_ = l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0(v_args_3888_, v_x_3889_, v_n_3890_, v_i_3891_, v_a_3892_);
lean_dec(v_n_3890_);
lean_dec(v_x_3889_);
lean_dec_ref(v_args_3888_);
v_r_3894_ = lean_box(v_res_3893_);
return v_r_3894_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg(lean_object* v_args_3895_, lean_object* v_arg_3896_, lean_object* v_consumeParamPred_3897_, lean_object* v_n_3898_, lean_object* v_i_3899_){
_start:
{
lean_object* v_zero_3900_; uint8_t v_isZero_3901_; 
v_zero_3900_ = lean_unsigned_to_nat(0u);
v_isZero_3901_ = lean_nat_dec_eq(v_i_3899_, v_zero_3900_);
if (v_isZero_3901_ == 1)
{
uint8_t v___x_3902_; 
lean_dec(v_i_3899_);
lean_dec_ref(v_consumeParamPred_3897_);
v___x_3902_ = 0;
return v___x_3902_;
}
else
{
lean_object* v_one_3903_; lean_object* v_n_3904_; uint8_t v___y_3906_; lean_object* v___x_3908_; lean_object* v_arg_x27_3909_; 
v_one_3903_ = lean_unsigned_to_nat(1u);
v_n_3904_ = lean_nat_sub(v_i_3899_, v_one_3903_);
v___x_3908_ = lean_nat_sub(v_n_3898_, v_i_3899_);
lean_dec(v_i_3899_);
v_arg_x27_3909_ = lean_array_fget_borrowed(v_args_3895_, v___x_3908_);
if (lean_obj_tag(v_arg_x27_3909_) == 0)
{
lean_dec(v___x_3908_);
v_i_3899_ = v_n_3904_;
goto _start;
}
else
{
lean_object* v_fvarId_3911_; uint8_t v___x_3912_; 
v_fvarId_3911_ = lean_ctor_get(v_arg_x27_3909_, 0);
v___x_3912_ = l_Lean_instBEqFVarId_beq(v_arg_3896_, v_fvarId_3911_);
if (v___x_3912_ == 0)
{
lean_dec(v___x_3908_);
v___y_3906_ = v___x_3912_;
goto v___jp_3905_;
}
else
{
lean_object* v___x_3913_; uint8_t v___x_3914_; 
lean_inc_ref(v_consumeParamPred_3897_);
v___x_3913_ = lean_apply_1(v_consumeParamPred_3897_, v___x_3908_);
v___x_3914_ = lean_unbox(v___x_3913_);
if (v___x_3914_ == 0)
{
v___y_3906_ = v___x_3912_;
goto v___jp_3905_;
}
else
{
v_i_3899_ = v_n_3904_;
goto _start;
}
}
}
v___jp_3905_:
{
if (v___y_3906_ == 0)
{
v_i_3899_ = v_n_3904_;
goto _start;
}
else
{
lean_dec(v_n_3904_);
lean_dec_ref(v_consumeParamPred_3897_);
return v___y_3906_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg___boxed(lean_object* v_args_3916_, lean_object* v_arg_3917_, lean_object* v_consumeParamPred_3918_, lean_object* v_n_3919_, lean_object* v_i_3920_){
_start:
{
uint8_t v_res_3921_; lean_object* v_r_3922_; 
v_res_3921_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg(v_args_3916_, v_arg_3917_, v_consumeParamPred_3918_, v_n_3919_, v_i_3920_);
lean_dec(v_n_3919_);
lean_dec(v_arg_3917_);
lean_dec_ref(v_args_3916_);
v_r_3922_ = lean_box(v_res_3921_);
return v_r_3922_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux(lean_object* v_arg_3923_, lean_object* v_args_3924_, lean_object* v_consumeParamPred_3925_){
_start:
{
lean_object* v___x_3926_; uint8_t v___x_3927_; 
v___x_3926_ = lean_array_get_size(v_args_3924_);
v___x_3927_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg(v_args_3924_, v_arg_3923_, v_consumeParamPred_3925_, v___x_3926_, v___x_3926_);
return v___x_3927_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux___boxed(lean_object* v_arg_3928_, lean_object* v_args_3929_, lean_object* v_consumeParamPred_3930_){
_start:
{
uint8_t v_res_3931_; lean_object* v_r_3932_; 
v_res_3931_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux(v_arg_3928_, v_args_3929_, v_consumeParamPred_3930_);
lean_dec_ref(v_args_3929_);
lean_dec(v_arg_3928_);
v_r_3932_ = lean_box(v_res_3931_);
return v_r_3932_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0(lean_object* v_args_3933_, lean_object* v_arg_3934_, lean_object* v_consumeParamPred_3935_, lean_object* v_n_3936_, lean_object* v_i_3937_, lean_object* v_a_3938_){
_start:
{
uint8_t v___x_3939_; 
v___x_3939_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg(v_args_3933_, v_arg_3934_, v_consumeParamPred_3935_, v_n_3936_, v_i_3937_);
return v___x_3939_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___boxed(lean_object* v_args_3940_, lean_object* v_arg_3941_, lean_object* v_consumeParamPred_3942_, lean_object* v_n_3943_, lean_object* v_i_3944_, lean_object* v_a_3945_){
_start:
{
uint8_t v_res_3946_; lean_object* v_r_3947_; 
v_res_3946_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0(v_args_3940_, v_arg_3941_, v_consumeParamPred_3942_, v_n_3943_, v_i_3944_, v_a_3945_);
lean_dec(v_n_3943_);
lean_dec(v_arg_3941_);
lean_dec_ref(v_args_3940_);
v_r_3947_ = lean_box(v_res_3946_);
return v_r_3947_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___closed__0(void){
_start:
{
uint8_t v___x_3948_; lean_object* v___x_3949_; 
v___x_3948_ = 1;
v___x_3949_ = l_Lean_Compiler_LCNF_instInhabitedParam_default(v___x_3948_);
return v___x_3949_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0(lean_object* v_ps_3950_, lean_object* v_i_3951_){
_start:
{
lean_object* v___x_3952_; lean_object* v___x_3953_; uint8_t v_borrow_3954_; 
v___x_3952_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___closed__0);
v___x_3953_ = lean_array_get_borrowed(v___x_3952_, v_ps_3950_, v_i_3951_);
v_borrow_3954_ = lean_ctor_get_uint8(v___x_3953_, sizeof(void*)*3);
if (v_borrow_3954_ == 0)
{
uint8_t v___x_3955_; 
v___x_3955_ = 1;
return v___x_3955_;
}
else
{
uint8_t v___x_3956_; 
v___x_3956_ = 0;
return v___x_3956_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___boxed(lean_object* v_ps_3957_, lean_object* v_i_3958_){
_start:
{
uint8_t v_res_3959_; lean_object* v_r_3960_; 
v_res_3959_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0(v_ps_3957_, v_i_3958_);
lean_dec(v_i_3958_);
lean_dec_ref(v_ps_3957_);
v_r_3960_ = lean_box(v_res_3959_);
return v_r_3960_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam(lean_object* v_arg_3961_, lean_object* v_args_3962_, lean_object* v_ps_3963_){
_start:
{
lean_object* v___f_3964_; uint8_t v___x_3965_; 
v___f_3964_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3964_, 0, v_ps_3963_);
v___x_3965_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux(v_arg_3961_, v_args_3962_, v___f_3964_);
return v___x_3965_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___boxed(lean_object* v_arg_3966_, lean_object* v_args_3967_, lean_object* v_ps_3968_){
_start:
{
uint8_t v_res_3969_; lean_object* v_r_3970_; 
v_res_3969_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam(v_arg_3966_, v_args_3967_, v_ps_3968_);
lean_dec_ref(v_args_3967_);
lean_dec(v_arg_3966_);
v_r_3970_ = lean_box(v_res_3969_);
return v_r_3970_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg(lean_object* v_upperBound_3971_, lean_object* v_args_3972_, lean_object* v_arg_3973_, lean_object* v_consumeParamPred_3974_, lean_object* v_a_3975_, lean_object* v_b_3976_){
_start:
{
lean_object* v_a_3978_; uint8_t v___y_3983_; uint8_t v___x_3986_; 
v___x_3986_ = lean_nat_dec_lt(v_a_3975_, v_upperBound_3971_);
if (v___x_3986_ == 0)
{
lean_dec(v_a_3975_);
lean_dec_ref(v_consumeParamPred_3974_);
return v_b_3976_;
}
else
{
lean_object* v___x_3987_; 
v___x_3987_ = lean_array_fget_borrowed(v_args_3972_, v_a_3975_);
if (lean_obj_tag(v___x_3987_) == 1)
{
lean_object* v_fvarId_3988_; uint8_t v___x_3989_; 
v_fvarId_3988_ = lean_ctor_get(v___x_3987_, 0);
v___x_3989_ = l_Lean_instBEqFVarId_beq(v_arg_3973_, v_fvarId_3988_);
if (v___x_3989_ == 0)
{
v___y_3983_ = v___x_3989_;
goto v___jp_3982_;
}
else
{
lean_object* v___x_3990_; uint8_t v___x_3991_; 
lean_inc_ref(v_consumeParamPred_3974_);
lean_inc(v_a_3975_);
v___x_3990_ = lean_apply_1(v_consumeParamPred_3974_, v_a_3975_);
v___x_3991_ = lean_unbox(v___x_3990_);
v___y_3983_ = v___x_3991_;
goto v___jp_3982_;
}
}
else
{
v_a_3978_ = v_b_3976_;
goto v___jp_3977_;
}
}
v___jp_3977_:
{
lean_object* v___x_3979_; lean_object* v___x_3980_; 
v___x_3979_ = lean_unsigned_to_nat(1u);
v___x_3980_ = lean_nat_add(v_a_3975_, v___x_3979_);
lean_dec(v_a_3975_);
v_a_3975_ = v___x_3980_;
v_b_3976_ = v_a_3978_;
goto _start;
}
v___jp_3982_:
{
if (v___y_3983_ == 0)
{
v_a_3978_ = v_b_3976_;
goto v___jp_3977_;
}
else
{
lean_object* v___x_3984_; lean_object* v___x_3985_; 
v___x_3984_ = lean_unsigned_to_nat(1u);
v___x_3985_ = lean_nat_add(v_b_3976_, v___x_3984_);
lean_dec(v_b_3976_);
v_a_3978_ = v___x_3985_;
goto v___jp_3977_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg___boxed(lean_object* v_upperBound_3992_, lean_object* v_args_3993_, lean_object* v_arg_3994_, lean_object* v_consumeParamPred_3995_, lean_object* v_a_3996_, lean_object* v_b_3997_){
_start:
{
lean_object* v_res_3998_; 
v_res_3998_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg(v_upperBound_3992_, v_args_3993_, v_arg_3994_, v_consumeParamPred_3995_, v_a_3996_, v_b_3997_);
lean_dec(v_arg_3994_);
lean_dec_ref(v_args_3993_);
lean_dec(v_upperBound_3992_);
return v_res_3998_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions(lean_object* v_arg_3999_, lean_object* v_args_4000_, lean_object* v_consumeParamPred_4001_){
_start:
{
lean_object* v_num_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; 
v_num_4002_ = lean_unsigned_to_nat(0u);
v___x_4003_ = lean_array_get_size(v_args_4000_);
v___x_4004_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg(v___x_4003_, v_args_4000_, v_arg_3999_, v_consumeParamPred_4001_, v_num_4002_, v_num_4002_);
return v___x_4004_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions___boxed(lean_object* v_arg_4005_, lean_object* v_args_4006_, lean_object* v_consumeParamPred_4007_){
_start:
{
lean_object* v_res_4008_; 
v_res_4008_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions(v_arg_4005_, v_args_4006_, v_consumeParamPred_4007_);
lean_dec_ref(v_args_4006_);
lean_dec(v_arg_4005_);
return v_res_4008_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0(lean_object* v_upperBound_4009_, lean_object* v_args_4010_, lean_object* v_arg_4011_, lean_object* v_consumeParamPred_4012_, lean_object* v_inst_4013_, lean_object* v_R_4014_, lean_object* v_a_4015_, lean_object* v_b_4016_, lean_object* v_c_4017_){
_start:
{
lean_object* v___x_4018_; 
v___x_4018_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg(v_upperBound_4009_, v_args_4010_, v_arg_4011_, v_consumeParamPred_4012_, v_a_4015_, v_b_4016_);
return v___x_4018_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___boxed(lean_object* v_upperBound_4019_, lean_object* v_args_4020_, lean_object* v_arg_4021_, lean_object* v_consumeParamPred_4022_, lean_object* v_inst_4023_, lean_object* v_R_4024_, lean_object* v_a_4025_, lean_object* v_b_4026_, lean_object* v_c_4027_){
_start:
{
lean_object* v_res_4028_; 
v_res_4028_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0(v_upperBound_4019_, v_args_4020_, v_arg_4021_, v_consumeParamPred_4022_, v_inst_4023_, v_R_4024_, v_a_4025_, v_b_4026_, v_c_4027_);
lean_dec(v_arg_4021_);
lean_dec_ref(v_args_4020_);
lean_dec(v_upperBound_4019_);
return v_res_4028_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0(lean_object* v_fvarId_4029_, lean_object* v_b_4030_, uint8_t v___x_4031_, lean_object* v_numIncs_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_){
_start:
{
lean_object* v_a_4041_; lean_object* v___x_4044_; uint8_t v___x_4045_; 
v___x_4044_ = lean_unsigned_to_nat(0u);
v___x_4045_ = lean_nat_dec_eq(v_numIncs_4032_, v___x_4044_);
if (v___x_4045_ == 0)
{
lean_object* v_varMap_4046_; lean_object* v___x_4047_; uint8_t v___y_4049_; uint8_t v_isDefiniteRef_4052_; 
v_varMap_4046_ = lean_ctor_get(v___y_4033_, 2);
v___x_4047_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0(v_varMap_4046_, v_fvarId_4029_);
v_isDefiniteRef_4052_ = lean_ctor_get_uint8(v___x_4047_, sizeof(void*)*1 + 1);
if (v_isDefiniteRef_4052_ == 0)
{
v___y_4049_ = v___x_4031_;
goto v___jp_4048_;
}
else
{
v___y_4049_ = v___x_4045_;
goto v___jp_4048_;
}
v___jp_4048_:
{
uint8_t v_persistent_4050_; lean_object* v___x_4051_; 
v_persistent_4050_ = lean_ctor_get_uint8(v___x_4047_, sizeof(void*)*1 + 2);
lean_dec_ref(v___x_4047_);
v___x_4051_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_4051_, 0, v_fvarId_4029_);
lean_ctor_set(v___x_4051_, 1, v_numIncs_4032_);
lean_ctor_set(v___x_4051_, 2, v_b_4030_);
lean_ctor_set_uint8(v___x_4051_, sizeof(void*)*3, v___y_4049_);
lean_ctor_set_uint8(v___x_4051_, sizeof(void*)*3 + 1, v_persistent_4050_);
v_a_4041_ = v___x_4051_;
goto v___jp_4040_;
}
}
else
{
lean_dec(v_numIncs_4032_);
lean_dec(v_fvarId_4029_);
v_a_4041_ = v_b_4030_;
goto v___jp_4040_;
}
v___jp_4040_:
{
lean_object* v___x_4042_; lean_object* v___x_4043_; 
v___x_4042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4042_, 0, v_a_4041_);
v___x_4043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4043_, 0, v___x_4042_);
return v___x_4043_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0___boxed(lean_object* v_fvarId_4053_, lean_object* v_b_4054_, lean_object* v___x_4055_, lean_object* v_numIncs_4056_, lean_object* v___y_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_){
_start:
{
uint8_t v___x_7704__boxed_4064_; lean_object* v_res_4065_; 
v___x_7704__boxed_4064_ = lean_unbox(v___x_4055_);
v_res_4065_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0(v_fvarId_4053_, v_b_4054_, v___x_7704__boxed_4064_, v_numIncs_4056_, v___y_4057_, v___y_4058_, v___y_4059_, v___y_4060_, v___y_4061_, v___y_4062_);
lean_dec(v___y_4062_);
lean_dec_ref(v___y_4061_);
lean_dec(v___y_4060_);
lean_dec_ref(v___y_4059_);
lean_dec(v___y_4058_);
lean_dec_ref(v___y_4057_);
return v_res_4065_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg(lean_object* v_upperBound_4066_, lean_object* v_args_4067_, lean_object* v_consumeParamPred_4068_, lean_object* v_a_4069_, lean_object* v_b_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_){
_start:
{
lean_object* v_a_4079_; lean_object* v___y_4084_; uint8_t v___x_4103_; 
v___x_4103_ = lean_nat_dec_lt(v_a_4069_, v_upperBound_4066_);
if (v___x_4103_ == 0)
{
lean_object* v___x_4104_; 
lean_dec(v_a_4069_);
lean_dec_ref(v_consumeParamPred_4068_);
v___x_4104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4104_, 0, v_b_4070_);
return v___x_4104_;
}
else
{
lean_object* v___x_4105_; 
v___x_4105_ = lean_array_fget_borrowed(v_args_4067_, v_a_4069_);
if (lean_obj_tag(v___x_4105_) == 1)
{
lean_object* v_fvarId_4106_; lean_object* v_varMap_4107_; lean_object* v___x_4108_; uint8_t v_isPossibleRef_4109_; 
v_fvarId_4106_ = lean_ctor_get(v___x_4105_, 0);
v_varMap_4107_ = lean_ctor_get(v___y_4071_, 2);
v___x_4108_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0(v_varMap_4107_, v_fvarId_4106_);
v_isPossibleRef_4109_ = lean_ctor_get_uint8(v___x_4108_, sizeof(void*)*1);
lean_dec_ref(v___x_4108_);
if (v_isPossibleRef_4109_ == 0)
{
v_a_4079_ = v_b_4070_;
goto v___jp_4078_;
}
else
{
uint8_t v___x_4110_; 
lean_inc(v_a_4069_);
v___x_4110_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc(v_args_4067_, v_a_4069_);
if (v___x_4110_ == 0)
{
v_a_4079_ = v_b_4070_;
goto v___jp_4078_;
}
else
{
lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v_vars_4113_; lean_object* v___x_4114_; uint8_t v___y_4118_; uint8_t v___x_4123_; 
v___x_4111_ = lean_st_ref_get(v___y_4072_);
v___x_4112_ = lean_st_ref_get(v___y_4072_);
v_vars_4113_ = lean_ctor_get(v___x_4111_, 0);
lean_inc_ref(v_vars_4113_);
lean_dec(v___x_4111_);
lean_inc_ref(v_consumeParamPred_4068_);
v___x_4114_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions(v_fvarId_4106_, v_args_4067_, v_consumeParamPred_4068_);
v___x_4123_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_4113_, v_fvarId_4106_);
lean_dec_ref(v_vars_4113_);
if (v___x_4123_ == 0)
{
lean_object* v_borrows_4124_; uint8_t v___x_4125_; 
v_borrows_4124_ = lean_ctor_get(v___x_4112_, 1);
lean_inc_ref(v_borrows_4124_);
lean_dec(v___x_4112_);
v___x_4125_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4124_, v_fvarId_4106_);
lean_dec_ref(v_borrows_4124_);
v___y_4118_ = v___x_4125_;
goto v___jp_4117_;
}
else
{
lean_dec(v___x_4112_);
v___y_4118_ = v___x_4123_;
goto v___jp_4117_;
}
v___jp_4115_:
{
lean_object* v___x_4116_; 
lean_inc(v_fvarId_4106_);
v___x_4116_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0(v_fvarId_4106_, v_b_4070_, v___x_4110_, v___x_4114_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_);
v___y_4084_ = v___x_4116_;
goto v___jp_4083_;
}
v___jp_4117_:
{
if (v___y_4118_ == 0)
{
uint8_t v___x_4119_; 
lean_inc_ref(v_consumeParamPred_4068_);
v___x_4119_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux(v_fvarId_4106_, v_args_4067_, v_consumeParamPred_4068_);
if (v___x_4119_ == 0)
{
lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; 
v___x_4120_ = lean_unsigned_to_nat(1u);
v___x_4121_ = lean_nat_sub(v___x_4114_, v___x_4120_);
lean_dec(v___x_4114_);
lean_inc(v_fvarId_4106_);
v___x_4122_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0(v_fvarId_4106_, v_b_4070_, v___x_4110_, v___x_4121_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_);
v___y_4084_ = v___x_4122_;
goto v___jp_4083_;
}
else
{
goto v___jp_4115_;
}
}
else
{
goto v___jp_4115_;
}
}
}
}
}
else
{
v_a_4079_ = v_b_4070_;
goto v___jp_4078_;
}
}
v___jp_4078_:
{
lean_object* v___x_4080_; lean_object* v___x_4081_; 
v___x_4080_ = lean_unsigned_to_nat(1u);
v___x_4081_ = lean_nat_add(v_a_4069_, v___x_4080_);
lean_dec(v_a_4069_);
v_a_4069_ = v___x_4081_;
v_b_4070_ = v_a_4079_;
goto _start;
}
v___jp_4083_:
{
if (lean_obj_tag(v___y_4084_) == 0)
{
lean_object* v_a_4085_; lean_object* v___x_4087_; uint8_t v_isShared_4088_; uint8_t v_isSharedCheck_4094_; 
v_a_4085_ = lean_ctor_get(v___y_4084_, 0);
v_isSharedCheck_4094_ = !lean_is_exclusive(v___y_4084_);
if (v_isSharedCheck_4094_ == 0)
{
v___x_4087_ = v___y_4084_;
v_isShared_4088_ = v_isSharedCheck_4094_;
goto v_resetjp_4086_;
}
else
{
lean_inc(v_a_4085_);
lean_dec(v___y_4084_);
v___x_4087_ = lean_box(0);
v_isShared_4088_ = v_isSharedCheck_4094_;
goto v_resetjp_4086_;
}
v_resetjp_4086_:
{
if (lean_obj_tag(v_a_4085_) == 0)
{
lean_object* v_a_4089_; lean_object* v___x_4091_; 
lean_dec(v_a_4069_);
lean_dec_ref(v_consumeParamPred_4068_);
v_a_4089_ = lean_ctor_get(v_a_4085_, 0);
lean_inc(v_a_4089_);
lean_dec_ref(v_a_4085_);
if (v_isShared_4088_ == 0)
{
lean_ctor_set(v___x_4087_, 0, v_a_4089_);
v___x_4091_ = v___x_4087_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v_a_4089_);
v___x_4091_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
return v___x_4091_;
}
}
else
{
lean_object* v_a_4093_; 
lean_del_object(v___x_4087_);
v_a_4093_ = lean_ctor_get(v_a_4085_, 0);
lean_inc(v_a_4093_);
lean_dec_ref(v_a_4085_);
v_a_4079_ = v_a_4093_;
goto v___jp_4078_;
}
}
}
else
{
lean_object* v_a_4095_; lean_object* v___x_4097_; uint8_t v_isShared_4098_; uint8_t v_isSharedCheck_4102_; 
lean_dec(v_a_4069_);
lean_dec_ref(v_consumeParamPred_4068_);
v_a_4095_ = lean_ctor_get(v___y_4084_, 0);
v_isSharedCheck_4102_ = !lean_is_exclusive(v___y_4084_);
if (v_isSharedCheck_4102_ == 0)
{
v___x_4097_ = v___y_4084_;
v_isShared_4098_ = v_isSharedCheck_4102_;
goto v_resetjp_4096_;
}
else
{
lean_inc(v_a_4095_);
lean_dec(v___y_4084_);
v___x_4097_ = lean_box(0);
v_isShared_4098_ = v_isSharedCheck_4102_;
goto v_resetjp_4096_;
}
v_resetjp_4096_:
{
lean_object* v___x_4100_; 
if (v_isShared_4098_ == 0)
{
v___x_4100_ = v___x_4097_;
goto v_reusejp_4099_;
}
else
{
lean_object* v_reuseFailAlloc_4101_; 
v_reuseFailAlloc_4101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4101_, 0, v_a_4095_);
v___x_4100_ = v_reuseFailAlloc_4101_;
goto v_reusejp_4099_;
}
v_reusejp_4099_:
{
return v___x_4100_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___boxed(lean_object* v_upperBound_4126_, lean_object* v_args_4127_, lean_object* v_consumeParamPred_4128_, lean_object* v_a_4129_, lean_object* v_b_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_){
_start:
{
lean_object* v_res_4138_; 
v_res_4138_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg(v_upperBound_4126_, v_args_4127_, v_consumeParamPred_4128_, v_a_4129_, v_b_4130_, v___y_4131_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_, v___y_4136_);
lean_dec(v___y_4136_);
lean_dec_ref(v___y_4135_);
lean_dec(v___y_4134_);
lean_dec_ref(v___y_4133_);
lean_dec(v___y_4132_);
lean_dec_ref(v___y_4131_);
lean_dec_ref(v_args_4127_);
lean_dec(v_upperBound_4126_);
return v_res_4138_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux(lean_object* v_args_4139_, lean_object* v_consumeParamPred_4140_, lean_object* v_k_4141_, lean_object* v_a_4142_, lean_object* v_a_4143_, lean_object* v_a_4144_, lean_object* v_a_4145_, lean_object* v_a_4146_, lean_object* v_a_4147_){
_start:
{
lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; 
v___x_4149_ = lean_unsigned_to_nat(0u);
v___x_4150_ = lean_array_get_size(v_args_4139_);
v___x_4151_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg(v___x_4150_, v_args_4139_, v_consumeParamPred_4140_, v___x_4149_, v_k_4141_, v_a_4142_, v_a_4143_, v_a_4144_, v_a_4145_, v_a_4146_, v_a_4147_);
return v___x_4151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux___boxed(lean_object* v_args_4152_, lean_object* v_consumeParamPred_4153_, lean_object* v_k_4154_, lean_object* v_a_4155_, lean_object* v_a_4156_, lean_object* v_a_4157_, lean_object* v_a_4158_, lean_object* v_a_4159_, lean_object* v_a_4160_, lean_object* v_a_4161_){
_start:
{
lean_object* v_res_4162_; 
v_res_4162_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux(v_args_4152_, v_consumeParamPred_4153_, v_k_4154_, v_a_4155_, v_a_4156_, v_a_4157_, v_a_4158_, v_a_4159_, v_a_4160_);
lean_dec(v_a_4160_);
lean_dec_ref(v_a_4159_);
lean_dec(v_a_4158_);
lean_dec_ref(v_a_4157_);
lean_dec(v_a_4156_);
lean_dec_ref(v_a_4155_);
lean_dec_ref(v_args_4152_);
return v_res_4162_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0(lean_object* v_upperBound_4163_, lean_object* v_args_4164_, lean_object* v_consumeParamPred_4165_, lean_object* v_inst_4166_, lean_object* v_R_4167_, lean_object* v_a_4168_, lean_object* v_b_4169_, lean_object* v_c_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_){
_start:
{
lean_object* v___x_4178_; 
v___x_4178_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg(v_upperBound_4163_, v_args_4164_, v_consumeParamPred_4165_, v_a_4168_, v_b_4169_, v___y_4171_, v___y_4172_, v___y_4173_, v___y_4174_, v___y_4175_, v___y_4176_);
return v___x_4178_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___boxed(lean_object* v_upperBound_4179_, lean_object* v_args_4180_, lean_object* v_consumeParamPred_4181_, lean_object* v_inst_4182_, lean_object* v_R_4183_, lean_object* v_a_4184_, lean_object* v_b_4185_, lean_object* v_c_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_){
_start:
{
lean_object* v_res_4194_; 
v_res_4194_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0(v_upperBound_4179_, v_args_4180_, v_consumeParamPred_4181_, v_inst_4182_, v_R_4183_, v_a_4184_, v_b_4185_, v_c_4186_, v___y_4187_, v___y_4188_, v___y_4189_, v___y_4190_, v___y_4191_, v___y_4192_);
lean_dec(v___y_4192_);
lean_dec_ref(v___y_4191_);
lean_dec(v___y_4190_);
lean_dec_ref(v___y_4189_);
lean_dec(v___y_4188_);
lean_dec_ref(v___y_4187_);
lean_dec_ref(v_args_4180_);
lean_dec(v_upperBound_4179_);
return v_res_4194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore(lean_object* v_args_4195_, lean_object* v_ps_4196_, lean_object* v_k_4197_, lean_object* v_a_4198_, lean_object* v_a_4199_, lean_object* v_a_4200_, lean_object* v_a_4201_, lean_object* v_a_4202_, lean_object* v_a_4203_){
_start:
{
lean_object* v___f_4205_; lean_object* v___x_4206_; 
v___f_4205_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4205_, 0, v_ps_4196_);
v___x_4206_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux(v_args_4195_, v___f_4205_, v_k_4197_, v_a_4198_, v_a_4199_, v_a_4200_, v_a_4201_, v_a_4202_, v_a_4203_);
return v___x_4206_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore___boxed(lean_object* v_args_4207_, lean_object* v_ps_4208_, lean_object* v_k_4209_, lean_object* v_a_4210_, lean_object* v_a_4211_, lean_object* v_a_4212_, lean_object* v_a_4213_, lean_object* v_a_4214_, lean_object* v_a_4215_, lean_object* v_a_4216_){
_start:
{
lean_object* v_res_4217_; 
v_res_4217_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore(v_args_4207_, v_ps_4208_, v_k_4209_, v_a_4210_, v_a_4211_, v_a_4212_, v_a_4213_, v_a_4214_, v_a_4215_);
lean_dec(v_a_4215_);
lean_dec_ref(v_a_4214_);
lean_dec(v_a_4213_);
lean_dec_ref(v_a_4212_);
lean_dec(v_a_4211_);
lean_dec_ref(v_a_4210_);
lean_dec_ref(v_args_4207_);
return v_res_4217_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___lam__0(lean_object* v_x_4218_){
_start:
{
uint8_t v___x_4219_; 
v___x_4219_ = 1;
return v___x_4219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___lam__0___boxed(lean_object* v_x_4220_){
_start:
{
uint8_t v_res_4221_; lean_object* v_r_4222_; 
v_res_4221_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___lam__0(v_x_4220_);
lean_dec(v_x_4220_);
v_r_4222_ = lean_box(v_res_4221_);
return v_r_4222_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(lean_object* v_args_4224_, lean_object* v_k_4225_, lean_object* v_a_4226_, lean_object* v_a_4227_, lean_object* v_a_4228_, lean_object* v_a_4229_, lean_object* v_a_4230_, lean_object* v_a_4231_){
_start:
{
lean_object* v___f_4233_; lean_object* v___x_4234_; 
v___f_4233_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___closed__0));
v___x_4234_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux(v_args_4224_, v___f_4233_, v_k_4225_, v_a_4226_, v_a_4227_, v_a_4228_, v_a_4229_, v_a_4230_, v_a_4231_);
return v___x_4234_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___boxed(lean_object* v_args_4235_, lean_object* v_k_4236_, lean_object* v_a_4237_, lean_object* v_a_4238_, lean_object* v_a_4239_, lean_object* v_a_4240_, lean_object* v_a_4241_, lean_object* v_a_4242_, lean_object* v_a_4243_){
_start:
{
lean_object* v_res_4244_; 
v_res_4244_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(v_args_4235_, v_k_4236_, v_a_4237_, v_a_4238_, v_a_4239_, v_a_4240_, v_a_4241_, v_a_4242_);
lean_dec(v_a_4242_);
lean_dec_ref(v_a_4241_);
lean_dec(v_a_4240_);
lean_dec_ref(v_a_4239_);
lean_dec(v_a_4238_);
lean_dec_ref(v_a_4237_);
lean_dec_ref(v_args_4235_);
return v_res_4244_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg(lean_object* v_upperBound_4245_, lean_object* v_args_4246_, lean_object* v_ps_4247_, lean_object* v_a_4248_, lean_object* v_b_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_){
_start:
{
lean_object* v_a_4254_; uint8_t v___x_4258_; 
v___x_4258_ = lean_nat_dec_lt(v_a_4248_, v_upperBound_4245_);
if (v___x_4258_ == 0)
{
lean_object* v___x_4259_; 
lean_dec(v_a_4248_);
lean_dec_ref(v_ps_4247_);
v___x_4259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4259_, 0, v_b_4249_);
return v___x_4259_;
}
else
{
lean_object* v___x_4260_; 
v___x_4260_ = lean_array_fget_borrowed(v_args_4246_, v_a_4248_);
if (lean_obj_tag(v___x_4260_) == 0)
{
v_a_4254_ = v_b_4249_;
goto v___jp_4253_;
}
else
{
lean_object* v_fvarId_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v_varMap_4264_; lean_object* v___x_4265_; uint8_t v_isPossibleRef_4266_; 
v_fvarId_4261_ = lean_ctor_get(v___x_4260_, 0);
v___x_4262_ = lean_st_ref_get(v___y_4251_);
v___x_4263_ = lean_st_ref_get(v___y_4251_);
v_varMap_4264_ = lean_ctor_get(v___y_4250_, 2);
v___x_4265_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0(v_varMap_4264_, v_fvarId_4261_);
v_isPossibleRef_4266_ = lean_ctor_get_uint8(v___x_4265_, sizeof(void*)*1);
if (v_isPossibleRef_4266_ == 0)
{
lean_dec_ref(v___x_4265_);
lean_dec(v___x_4263_);
lean_dec(v___x_4262_);
v_a_4254_ = v_b_4249_;
goto v___jp_4253_;
}
else
{
uint8_t v_isDefiniteRef_4267_; uint8_t v_persistent_4268_; uint8_t v___x_4269_; 
v_isDefiniteRef_4267_ = lean_ctor_get_uint8(v___x_4265_, sizeof(void*)*1 + 1);
v_persistent_4268_ = lean_ctor_get_uint8(v___x_4265_, sizeof(void*)*1 + 2);
lean_dec_ref(v___x_4265_);
lean_inc(v_a_4248_);
v___x_4269_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc(v_args_4246_, v_a_4248_);
if (v___x_4269_ == 0)
{
lean_dec(v___x_4263_);
lean_dec(v___x_4262_);
v_a_4254_ = v_b_4249_;
goto v___jp_4253_;
}
else
{
uint8_t v___x_4270_; 
lean_inc_ref(v_ps_4247_);
v___x_4270_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam(v_fvarId_4261_, v_args_4246_, v_ps_4247_);
if (v___x_4270_ == 0)
{
lean_dec(v___x_4263_);
lean_dec(v___x_4262_);
v_a_4254_ = v_b_4249_;
goto v___jp_4253_;
}
else
{
lean_object* v_vars_4271_; uint8_t v___x_4272_; 
v_vars_4271_ = lean_ctor_get(v___x_4262_, 0);
lean_inc_ref(v_vars_4271_);
lean_dec(v___x_4262_);
v___x_4272_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_4271_, v_fvarId_4261_);
lean_dec_ref(v_vars_4271_);
if (v___x_4272_ == 0)
{
lean_object* v_borrows_4273_; uint8_t v___x_4274_; 
v_borrows_4273_ = lean_ctor_get(v___x_4263_, 1);
lean_inc_ref(v_borrows_4273_);
lean_dec(v___x_4263_);
v___x_4274_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4273_, v_fvarId_4261_);
lean_dec_ref(v_borrows_4273_);
if (v___x_4274_ == 0)
{
lean_object* v___x_4275_; uint8_t v___y_4277_; 
v___x_4275_ = lean_unsigned_to_nat(1u);
if (v_isDefiniteRef_4267_ == 0)
{
v___y_4277_ = v___x_4270_;
goto v___jp_4276_;
}
else
{
v___y_4277_ = v___x_4274_;
goto v___jp_4276_;
}
v___jp_4276_:
{
lean_object* v___x_4278_; 
lean_inc(v_fvarId_4261_);
v___x_4278_ = lean_alloc_ctor(12, 3, 2);
lean_ctor_set(v___x_4278_, 0, v_fvarId_4261_);
lean_ctor_set(v___x_4278_, 1, v___x_4275_);
lean_ctor_set(v___x_4278_, 2, v_b_4249_);
lean_ctor_set_uint8(v___x_4278_, sizeof(void*)*3, v___y_4277_);
lean_ctor_set_uint8(v___x_4278_, sizeof(void*)*3 + 1, v_persistent_4268_);
v_a_4254_ = v___x_4278_;
goto v___jp_4253_;
}
}
else
{
v_a_4254_ = v_b_4249_;
goto v___jp_4253_;
}
}
else
{
lean_dec(v___x_4263_);
v_a_4254_ = v_b_4249_;
goto v___jp_4253_;
}
}
}
}
}
}
v___jp_4253_:
{
lean_object* v___x_4255_; lean_object* v___x_4256_; 
v___x_4255_ = lean_unsigned_to_nat(1u);
v___x_4256_ = lean_nat_add(v_a_4248_, v___x_4255_);
lean_dec(v_a_4248_);
v_a_4248_ = v___x_4256_;
v_b_4249_ = v_a_4254_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg___boxed(lean_object* v_upperBound_4279_, lean_object* v_args_4280_, lean_object* v_ps_4281_, lean_object* v_a_4282_, lean_object* v_b_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_){
_start:
{
lean_object* v_res_4287_; 
v_res_4287_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg(v_upperBound_4279_, v_args_4280_, v_ps_4281_, v_a_4282_, v_b_4283_, v___y_4284_, v___y_4285_);
lean_dec(v___y_4285_);
lean_dec_ref(v___y_4284_);
lean_dec_ref(v_args_4280_);
lean_dec(v_upperBound_4279_);
return v_res_4287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp(lean_object* v_args_4288_, lean_object* v_ps_4289_, lean_object* v_k_4290_, lean_object* v_a_4291_, lean_object* v_a_4292_, lean_object* v_a_4293_, lean_object* v_a_4294_, lean_object* v_a_4295_, lean_object* v_a_4296_){
_start:
{
lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; 
v___x_4298_ = lean_unsigned_to_nat(0u);
v___x_4299_ = lean_array_get_size(v_args_4288_);
v___x_4300_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg(v___x_4299_, v_args_4288_, v_ps_4289_, v___x_4298_, v_k_4290_, v_a_4291_, v_a_4292_);
return v___x_4300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp___boxed(lean_object* v_args_4301_, lean_object* v_ps_4302_, lean_object* v_k_4303_, lean_object* v_a_4304_, lean_object* v_a_4305_, lean_object* v_a_4306_, lean_object* v_a_4307_, lean_object* v_a_4308_, lean_object* v_a_4309_, lean_object* v_a_4310_){
_start:
{
lean_object* v_res_4311_; 
v_res_4311_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp(v_args_4301_, v_ps_4302_, v_k_4303_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_, v_a_4308_, v_a_4309_);
lean_dec(v_a_4309_);
lean_dec_ref(v_a_4308_);
lean_dec(v_a_4307_);
lean_dec_ref(v_a_4306_);
lean_dec(v_a_4305_);
lean_dec_ref(v_a_4304_);
lean_dec_ref(v_args_4301_);
return v_res_4311_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0(lean_object* v_upperBound_4312_, lean_object* v_args_4313_, lean_object* v_ps_4314_, lean_object* v_inst_4315_, lean_object* v_R_4316_, lean_object* v_a_4317_, lean_object* v_b_4318_, lean_object* v_c_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_){
_start:
{
lean_object* v___x_4327_; 
v___x_4327_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg(v_upperBound_4312_, v_args_4313_, v_ps_4314_, v_a_4317_, v_b_4318_, v___y_4320_, v___y_4321_);
return v___x_4327_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___boxed(lean_object* v_upperBound_4328_, lean_object* v_args_4329_, lean_object* v_ps_4330_, lean_object* v_inst_4331_, lean_object* v_R_4332_, lean_object* v_a_4333_, lean_object* v_b_4334_, lean_object* v_c_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_){
_start:
{
lean_object* v_res_4343_; 
v_res_4343_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0(v_upperBound_4328_, v_args_4329_, v_ps_4330_, v_inst_4331_, v_R_4332_, v_a_4333_, v_b_4334_, v_c_4335_, v___y_4336_, v___y_4337_, v___y_4338_, v___y_4339_, v___y_4340_, v___y_4341_);
lean_dec(v___y_4341_);
lean_dec_ref(v___y_4340_);
lean_dec(v___y_4339_);
lean_dec_ref(v___y_4338_);
lean_dec(v___y_4337_);
lean_dec_ref(v___y_4336_);
lean_dec_ref(v_args_4329_);
lean_dec(v_upperBound_4328_);
return v_res_4343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(lean_object* v_fvarId_4344_, lean_object* v_k_4345_, lean_object* v_a_4346_, lean_object* v_a_4347_){
_start:
{
lean_object* v___x_4349_; lean_object* v_varMap_4350_; lean_object* v___x_4351_; lean_object* v_borrows_4352_; lean_object* v___x_4353_; uint8_t v_isPossibleRef_4354_; 
v___x_4349_ = lean_st_ref_get(v_a_4347_);
v_varMap_4350_ = lean_ctor_get(v_a_4346_, 2);
v___x_4351_ = lean_st_ref_get(v_a_4347_);
v_borrows_4352_ = lean_ctor_get(v___x_4349_, 1);
lean_inc_ref(v_borrows_4352_);
lean_dec(v___x_4349_);
v___x_4353_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0(v_varMap_4350_, v_fvarId_4344_);
v_isPossibleRef_4354_ = lean_ctor_get_uint8(v___x_4353_, sizeof(void*)*1);
if (v_isPossibleRef_4354_ == 0)
{
lean_object* v___x_4355_; 
lean_dec_ref(v___x_4353_);
lean_dec_ref(v_borrows_4352_);
lean_dec(v___x_4351_);
lean_dec(v_fvarId_4344_);
v___x_4355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4355_, 0, v_k_4345_);
return v___x_4355_;
}
else
{
uint8_t v_isDefiniteRef_4356_; uint8_t v_persistent_4357_; uint8_t v___x_4358_; 
v_isDefiniteRef_4356_ = lean_ctor_get_uint8(v___x_4353_, sizeof(void*)*1 + 1);
v_persistent_4357_ = lean_ctor_get_uint8(v___x_4353_, sizeof(void*)*1 + 2);
lean_dec_ref(v___x_4353_);
v___x_4358_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4352_, v_fvarId_4344_);
lean_dec_ref(v_borrows_4352_);
if (v___x_4358_ == 0)
{
lean_object* v_vars_4359_; uint8_t v___x_4360_; 
v_vars_4359_ = lean_ctor_get(v___x_4351_, 0);
lean_inc_ref(v_vars_4359_);
lean_dec(v___x_4351_);
v___x_4360_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_4359_, v_fvarId_4344_);
lean_dec_ref(v_vars_4359_);
if (v___x_4360_ == 0)
{
lean_object* v___x_4361_; uint8_t v___y_4363_; 
v___x_4361_ = lean_unsigned_to_nat(1u);
if (v_isDefiniteRef_4356_ == 0)
{
v___y_4363_ = v_isPossibleRef_4354_;
goto v___jp_4362_;
}
else
{
v___y_4363_ = v___x_4360_;
goto v___jp_4362_;
}
v___jp_4362_:
{
lean_object* v___x_4364_; lean_object* v___x_4365_; 
v___x_4364_ = lean_alloc_ctor(12, 3, 2);
lean_ctor_set(v___x_4364_, 0, v_fvarId_4344_);
lean_ctor_set(v___x_4364_, 1, v___x_4361_);
lean_ctor_set(v___x_4364_, 2, v_k_4345_);
lean_ctor_set_uint8(v___x_4364_, sizeof(void*)*3, v___y_4363_);
lean_ctor_set_uint8(v___x_4364_, sizeof(void*)*3 + 1, v_persistent_4357_);
v___x_4365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4365_, 0, v___x_4364_);
return v___x_4365_;
}
}
else
{
lean_object* v___x_4366_; 
lean_dec(v_fvarId_4344_);
v___x_4366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4366_, 0, v_k_4345_);
return v___x_4366_;
}
}
else
{
lean_object* v___x_4367_; 
lean_dec(v___x_4351_);
lean_dec(v_fvarId_4344_);
v___x_4367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4367_, 0, v_k_4345_);
return v___x_4367_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg___boxed(lean_object* v_fvarId_4368_, lean_object* v_k_4369_, lean_object* v_a_4370_, lean_object* v_a_4371_, lean_object* v_a_4372_){
_start:
{
lean_object* v_res_4373_; 
v_res_4373_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_fvarId_4368_, v_k_4369_, v_a_4370_, v_a_4371_);
lean_dec(v_a_4371_);
lean_dec_ref(v_a_4370_);
return v_res_4373_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded(lean_object* v_fvarId_4374_, lean_object* v_k_4375_, lean_object* v_a_4376_, lean_object* v_a_4377_, lean_object* v_a_4378_, lean_object* v_a_4379_, lean_object* v_a_4380_, lean_object* v_a_4381_){
_start:
{
lean_object* v___x_4383_; 
v___x_4383_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_fvarId_4374_, v_k_4375_, v_a_4376_, v_a_4377_);
return v___x_4383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___boxed(lean_object* v_fvarId_4384_, lean_object* v_k_4385_, lean_object* v_a_4386_, lean_object* v_a_4387_, lean_object* v_a_4388_, lean_object* v_a_4389_, lean_object* v_a_4390_, lean_object* v_a_4391_, lean_object* v_a_4392_){
_start:
{
lean_object* v_res_4393_; 
v_res_4393_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded(v_fvarId_4384_, v_k_4385_, v_a_4386_, v_a_4387_, v_a_4388_, v_a_4389_, v_a_4390_, v_a_4391_);
lean_dec(v_a_4391_);
lean_dec_ref(v_a_4390_);
lean_dec(v_a_4389_);
lean_dec_ref(v_a_4388_);
lean_dec(v_a_4387_);
lean_dec_ref(v_a_4386_);
return v_res_4393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(lean_object* v_as_4394_, size_t v_i_4395_, size_t v_stop_4396_, lean_object* v_b_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_){
_start:
{
lean_object* v_a_4402_; uint8_t v___x_4406_; 
v___x_4406_ = lean_usize_dec_eq(v_i_4395_, v_stop_4396_);
if (v___x_4406_ == 0)
{
lean_object* v___x_4407_; lean_object* v_fvarId_4408_; lean_object* v___x_4409_; 
v___x_4407_ = lean_array_uget_borrowed(v_as_4394_, v_i_4395_);
v_fvarId_4408_ = lean_ctor_get(v___x_4407_, 0);
lean_inc(v_fvarId_4408_);
v___x_4409_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_fvarId_4408_, v_b_4397_, v___y_4398_, v___y_4399_);
if (lean_obj_tag(v___x_4409_) == 0)
{
lean_object* v_a_4410_; lean_object* v___x_4411_; lean_object* v_vars_4412_; lean_object* v_borrows_4413_; lean_object* v___x_4415_; uint8_t v_isShared_4416_; uint8_t v_isSharedCheck_4423_; 
v_a_4410_ = lean_ctor_get(v___x_4409_, 0);
lean_inc(v_a_4410_);
lean_dec_ref(v___x_4409_);
v___x_4411_ = lean_st_ref_take(v___y_4399_);
v_vars_4412_ = lean_ctor_get(v___x_4411_, 0);
v_borrows_4413_ = lean_ctor_get(v___x_4411_, 1);
v_isSharedCheck_4423_ = !lean_is_exclusive(v___x_4411_);
if (v_isSharedCheck_4423_ == 0)
{
v___x_4415_ = v___x_4411_;
v_isShared_4416_ = v_isSharedCheck_4423_;
goto v_resetjp_4414_;
}
else
{
lean_inc(v_borrows_4413_);
lean_inc(v_vars_4412_);
lean_dec(v___x_4411_);
v___x_4415_ = lean_box(0);
v_isShared_4416_ = v_isSharedCheck_4423_;
goto v_resetjp_4414_;
}
v_resetjp_4414_:
{
lean_object* v_vars_4417_; lean_object* v_borrows_4418_; lean_object* v___x_4420_; 
v_vars_4417_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(v_vars_4412_, v_fvarId_4408_);
v_borrows_4418_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(v_borrows_4413_, v_fvarId_4408_);
if (v_isShared_4416_ == 0)
{
lean_ctor_set(v___x_4415_, 1, v_borrows_4418_);
lean_ctor_set(v___x_4415_, 0, v_vars_4417_);
v___x_4420_ = v___x_4415_;
goto v_reusejp_4419_;
}
else
{
lean_object* v_reuseFailAlloc_4422_; 
v_reuseFailAlloc_4422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4422_, 0, v_vars_4417_);
lean_ctor_set(v_reuseFailAlloc_4422_, 1, v_borrows_4418_);
v___x_4420_ = v_reuseFailAlloc_4422_;
goto v_reusejp_4419_;
}
v_reusejp_4419_:
{
lean_object* v___x_4421_; 
v___x_4421_ = lean_st_ref_set(v___y_4399_, v___x_4420_);
v_a_4402_ = v_a_4410_;
goto v___jp_4401_;
}
}
}
else
{
if (lean_obj_tag(v___x_4409_) == 0)
{
lean_object* v_a_4424_; 
v_a_4424_ = lean_ctor_get(v___x_4409_, 0);
lean_inc(v_a_4424_);
lean_dec_ref(v___x_4409_);
v_a_4402_ = v_a_4424_;
goto v___jp_4401_;
}
else
{
return v___x_4409_;
}
}
}
else
{
lean_object* v___x_4425_; 
v___x_4425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4425_, 0, v_b_4397_);
return v___x_4425_;
}
v___jp_4401_:
{
size_t v___x_4403_; size_t v___x_4404_; 
v___x_4403_ = ((size_t)1ULL);
v___x_4404_ = lean_usize_add(v_i_4395_, v___x_4403_);
v_i_4395_ = v___x_4404_;
v_b_4397_ = v_a_4402_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg___boxed(lean_object* v_as_4426_, lean_object* v_i_4427_, lean_object* v_stop_4428_, lean_object* v_b_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_){
_start:
{
size_t v_i_boxed_4433_; size_t v_stop_boxed_4434_; lean_object* v_res_4435_; 
v_i_boxed_4433_ = lean_unbox_usize(v_i_4427_);
lean_dec(v_i_4427_);
v_stop_boxed_4434_ = lean_unbox_usize(v_stop_4428_);
lean_dec(v_stop_4428_);
v_res_4435_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(v_as_4426_, v_i_boxed_4433_, v_stop_boxed_4434_, v_b_4429_, v___y_4430_, v___y_4431_);
lean_dec(v___y_4431_);
lean_dec_ref(v___y_4430_);
lean_dec_ref(v_as_4426_);
return v_res_4435_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(lean_object* v_ps_4436_, lean_object* v_k_4437_, lean_object* v_a_4438_, lean_object* v_a_4439_, lean_object* v_a_4440_, lean_object* v_a_4441_, lean_object* v_a_4442_, lean_object* v_a_4443_){
_start:
{
lean_object* v___x_4445_; lean_object* v___x_4446_; uint8_t v___x_4447_; 
v___x_4445_ = lean_unsigned_to_nat(0u);
v___x_4446_ = lean_array_get_size(v_ps_4436_);
v___x_4447_ = lean_nat_dec_lt(v___x_4445_, v___x_4446_);
if (v___x_4447_ == 0)
{
lean_object* v___x_4448_; 
v___x_4448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4448_, 0, v_k_4437_);
return v___x_4448_;
}
else
{
uint8_t v___x_4449_; 
v___x_4449_ = lean_nat_dec_le(v___x_4446_, v___x_4446_);
if (v___x_4449_ == 0)
{
if (v___x_4447_ == 0)
{
lean_object* v___x_4450_; 
v___x_4450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4450_, 0, v_k_4437_);
return v___x_4450_;
}
else
{
size_t v___x_4451_; size_t v___x_4452_; lean_object* v___x_4453_; 
v___x_4451_ = ((size_t)0ULL);
v___x_4452_ = lean_usize_of_nat(v___x_4446_);
v___x_4453_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(v_ps_4436_, v___x_4451_, v___x_4452_, v_k_4437_, v_a_4438_, v_a_4439_);
return v___x_4453_;
}
}
else
{
size_t v___x_4454_; size_t v___x_4455_; lean_object* v___x_4456_; 
v___x_4454_ = ((size_t)0ULL);
v___x_4455_ = lean_usize_of_nat(v___x_4446_);
v___x_4456_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(v_ps_4436_, v___x_4454_, v___x_4455_, v_k_4437_, v_a_4438_, v_a_4439_);
return v___x_4456_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams___boxed(lean_object* v_ps_4457_, lean_object* v_k_4458_, lean_object* v_a_4459_, lean_object* v_a_4460_, lean_object* v_a_4461_, lean_object* v_a_4462_, lean_object* v_a_4463_, lean_object* v_a_4464_, lean_object* v_a_4465_){
_start:
{
lean_object* v_res_4466_; 
v_res_4466_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(v_ps_4457_, v_k_4458_, v_a_4459_, v_a_4460_, v_a_4461_, v_a_4462_, v_a_4463_, v_a_4464_);
lean_dec(v_a_4464_);
lean_dec_ref(v_a_4463_);
lean_dec(v_a_4462_);
lean_dec_ref(v_a_4461_);
lean_dec(v_a_4460_);
lean_dec_ref(v_a_4459_);
lean_dec_ref(v_ps_4457_);
return v_res_4466_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0(lean_object* v_as_4467_, size_t v_i_4468_, size_t v_stop_4469_, lean_object* v_b_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_){
_start:
{
lean_object* v___x_4478_; 
v___x_4478_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(v_as_4467_, v_i_4468_, v_stop_4469_, v_b_4470_, v___y_4471_, v___y_4472_);
return v___x_4478_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___boxed(lean_object* v_as_4479_, lean_object* v_i_4480_, lean_object* v_stop_4481_, lean_object* v_b_4482_, lean_object* v___y_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_){
_start:
{
size_t v_i_boxed_4490_; size_t v_stop_boxed_4491_; lean_object* v_res_4492_; 
v_i_boxed_4490_ = lean_unbox_usize(v_i_4480_);
lean_dec(v_i_4480_);
v_stop_boxed_4491_ = lean_unbox_usize(v_stop_4481_);
lean_dec(v_stop_4481_);
v_res_4492_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0(v_as_4479_, v_i_boxed_4490_, v_stop_boxed_4491_, v_b_4482_, v___y_4483_, v___y_4484_, v___y_4485_, v___y_4486_, v___y_4487_, v___y_4488_);
lean_dec(v___y_4488_);
lean_dec_ref(v___y_4487_);
lean_dec(v___y_4486_);
lean_dec_ref(v___y_4485_);
lean_dec(v___y_4484_);
lean_dec_ref(v___y_4483_);
lean_dec_ref(v_as_4479_);
return v_res_4492_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0(void){
_start:
{
uint8_t v___x_4493_; lean_object* v___x_4494_; 
v___x_4493_ = 1;
v___x_4494_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1(v___x_4493_);
return v___x_4494_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(lean_object* v_msg_4495_){
_start:
{
lean_object* v___x_4496_; lean_object* v___x_4497_; 
v___x_4496_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0);
v___x_4497_ = lean_panic_fn_borrowed(v___x_4496_, v_msg_4495_);
return v___x_4497_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1___closed__0(void){
_start:
{
uint8_t v___x_4498_; lean_object* v___x_4499_; 
v___x_4498_ = 1;
v___x_4499_ = l_Lean_Compiler_LCNF_instInhabitedSignature_default(v___x_4498_);
return v___x_4499_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1(lean_object* v_msg_4500_){
_start:
{
lean_object* v___x_4501_; lean_object* v___x_4502_; 
v___x_4501_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1___closed__0);
v___x_4502_ = lean_panic_fn_borrowed(v___x_4501_, v_msg_4500_);
return v___x_4502_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2(lean_object* v_msg_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_){
_start:
{
lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v_toApplicative_4513_; lean_object* v___x_4515_; uint8_t v_isShared_4516_; uint8_t v_isSharedCheck_4576_; 
v___x_4511_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__0);
v___x_4512_ = l_StateRefT_x27_instMonad___redArg(v___x_4511_);
v_toApplicative_4513_ = lean_ctor_get(v___x_4512_, 0);
v_isSharedCheck_4576_ = !lean_is_exclusive(v___x_4512_);
if (v_isSharedCheck_4576_ == 0)
{
lean_object* v_unused_4577_; 
v_unused_4577_ = lean_ctor_get(v___x_4512_, 1);
lean_dec(v_unused_4577_);
v___x_4515_ = v___x_4512_;
v_isShared_4516_ = v_isSharedCheck_4576_;
goto v_resetjp_4514_;
}
else
{
lean_inc(v_toApplicative_4513_);
lean_dec(v___x_4512_);
v___x_4515_ = lean_box(0);
v_isShared_4516_ = v_isSharedCheck_4576_;
goto v_resetjp_4514_;
}
v_resetjp_4514_:
{
lean_object* v_toFunctor_4517_; lean_object* v_toSeq_4518_; lean_object* v_toSeqLeft_4519_; lean_object* v_toSeqRight_4520_; lean_object* v___x_4522_; uint8_t v_isShared_4523_; uint8_t v_isSharedCheck_4574_; 
v_toFunctor_4517_ = lean_ctor_get(v_toApplicative_4513_, 0);
v_toSeq_4518_ = lean_ctor_get(v_toApplicative_4513_, 2);
v_toSeqLeft_4519_ = lean_ctor_get(v_toApplicative_4513_, 3);
v_toSeqRight_4520_ = lean_ctor_get(v_toApplicative_4513_, 4);
v_isSharedCheck_4574_ = !lean_is_exclusive(v_toApplicative_4513_);
if (v_isSharedCheck_4574_ == 0)
{
lean_object* v_unused_4575_; 
v_unused_4575_ = lean_ctor_get(v_toApplicative_4513_, 1);
lean_dec(v_unused_4575_);
v___x_4522_ = v_toApplicative_4513_;
v_isShared_4523_ = v_isSharedCheck_4574_;
goto v_resetjp_4521_;
}
else
{
lean_inc(v_toSeqRight_4520_);
lean_inc(v_toSeqLeft_4519_);
lean_inc(v_toSeq_4518_);
lean_inc(v_toFunctor_4517_);
lean_dec(v_toApplicative_4513_);
v___x_4522_ = lean_box(0);
v_isShared_4523_ = v_isSharedCheck_4574_;
goto v_resetjp_4521_;
}
v_resetjp_4521_:
{
lean_object* v___f_4524_; lean_object* v___f_4525_; lean_object* v___f_4526_; lean_object* v___f_4527_; lean_object* v___x_4528_; lean_object* v___f_4529_; lean_object* v___f_4530_; lean_object* v___f_4531_; lean_object* v___x_4533_; 
v___f_4524_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__1));
v___f_4525_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__2));
lean_inc_ref(v_toFunctor_4517_);
v___f_4526_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4526_, 0, v_toFunctor_4517_);
v___f_4527_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4527_, 0, v_toFunctor_4517_);
v___x_4528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4528_, 0, v___f_4526_);
lean_ctor_set(v___x_4528_, 1, v___f_4527_);
v___f_4529_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4529_, 0, v_toSeqRight_4520_);
v___f_4530_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4530_, 0, v_toSeqLeft_4519_);
v___f_4531_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4531_, 0, v_toSeq_4518_);
if (v_isShared_4523_ == 0)
{
lean_ctor_set(v___x_4522_, 4, v___f_4529_);
lean_ctor_set(v___x_4522_, 3, v___f_4530_);
lean_ctor_set(v___x_4522_, 2, v___f_4531_);
lean_ctor_set(v___x_4522_, 1, v___f_4524_);
lean_ctor_set(v___x_4522_, 0, v___x_4528_);
v___x_4533_ = v___x_4522_;
goto v_reusejp_4532_;
}
else
{
lean_object* v_reuseFailAlloc_4573_; 
v_reuseFailAlloc_4573_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4573_, 0, v___x_4528_);
lean_ctor_set(v_reuseFailAlloc_4573_, 1, v___f_4524_);
lean_ctor_set(v_reuseFailAlloc_4573_, 2, v___f_4531_);
lean_ctor_set(v_reuseFailAlloc_4573_, 3, v___f_4530_);
lean_ctor_set(v_reuseFailAlloc_4573_, 4, v___f_4529_);
v___x_4533_ = v_reuseFailAlloc_4573_;
goto v_reusejp_4532_;
}
v_reusejp_4532_:
{
lean_object* v___x_4535_; 
if (v_isShared_4516_ == 0)
{
lean_ctor_set(v___x_4515_, 1, v___f_4525_);
lean_ctor_set(v___x_4515_, 0, v___x_4533_);
v___x_4535_ = v___x_4515_;
goto v_reusejp_4534_;
}
else
{
lean_object* v_reuseFailAlloc_4572_; 
v_reuseFailAlloc_4572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4572_, 0, v___x_4533_);
lean_ctor_set(v_reuseFailAlloc_4572_, 1, v___f_4525_);
v___x_4535_ = v_reuseFailAlloc_4572_;
goto v_reusejp_4534_;
}
v_reusejp_4534_:
{
lean_object* v___x_4536_; lean_object* v_toApplicative_4537_; lean_object* v___x_4539_; uint8_t v_isShared_4540_; uint8_t v_isSharedCheck_4570_; 
v___x_4536_ = l_StateRefT_x27_instMonad___redArg(v___x_4535_);
v_toApplicative_4537_ = lean_ctor_get(v___x_4536_, 0);
v_isSharedCheck_4570_ = !lean_is_exclusive(v___x_4536_);
if (v_isSharedCheck_4570_ == 0)
{
lean_object* v_unused_4571_; 
v_unused_4571_ = lean_ctor_get(v___x_4536_, 1);
lean_dec(v_unused_4571_);
v___x_4539_ = v___x_4536_;
v_isShared_4540_ = v_isSharedCheck_4570_;
goto v_resetjp_4538_;
}
else
{
lean_inc(v_toApplicative_4537_);
lean_dec(v___x_4536_);
v___x_4539_ = lean_box(0);
v_isShared_4540_ = v_isSharedCheck_4570_;
goto v_resetjp_4538_;
}
v_resetjp_4538_:
{
lean_object* v_toFunctor_4541_; lean_object* v_toSeq_4542_; lean_object* v_toSeqLeft_4543_; lean_object* v_toSeqRight_4544_; lean_object* v___x_4546_; uint8_t v_isShared_4547_; uint8_t v_isSharedCheck_4568_; 
v_toFunctor_4541_ = lean_ctor_get(v_toApplicative_4537_, 0);
v_toSeq_4542_ = lean_ctor_get(v_toApplicative_4537_, 2);
v_toSeqLeft_4543_ = lean_ctor_get(v_toApplicative_4537_, 3);
v_toSeqRight_4544_ = lean_ctor_get(v_toApplicative_4537_, 4);
v_isSharedCheck_4568_ = !lean_is_exclusive(v_toApplicative_4537_);
if (v_isSharedCheck_4568_ == 0)
{
lean_object* v_unused_4569_; 
v_unused_4569_ = lean_ctor_get(v_toApplicative_4537_, 1);
lean_dec(v_unused_4569_);
v___x_4546_ = v_toApplicative_4537_;
v_isShared_4547_ = v_isSharedCheck_4568_;
goto v_resetjp_4545_;
}
else
{
lean_inc(v_toSeqRight_4544_);
lean_inc(v_toSeqLeft_4543_);
lean_inc(v_toSeq_4542_);
lean_inc(v_toFunctor_4541_);
lean_dec(v_toApplicative_4537_);
v___x_4546_ = lean_box(0);
v_isShared_4547_ = v_isSharedCheck_4568_;
goto v_resetjp_4545_;
}
v_resetjp_4545_:
{
lean_object* v___f_4548_; lean_object* v___f_4549_; lean_object* v___f_4550_; lean_object* v___f_4551_; lean_object* v___x_4552_; lean_object* v___f_4553_; lean_object* v___f_4554_; lean_object* v___f_4555_; lean_object* v___x_4557_; 
v___f_4548_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__3));
v___f_4549_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__7___closed__4));
lean_inc_ref(v_toFunctor_4541_);
v___f_4550_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4550_, 0, v_toFunctor_4541_);
v___f_4551_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4551_, 0, v_toFunctor_4541_);
v___x_4552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4552_, 0, v___f_4550_);
lean_ctor_set(v___x_4552_, 1, v___f_4551_);
v___f_4553_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4553_, 0, v_toSeqRight_4544_);
v___f_4554_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4554_, 0, v_toSeqLeft_4543_);
v___f_4555_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4555_, 0, v_toSeq_4542_);
if (v_isShared_4547_ == 0)
{
lean_ctor_set(v___x_4546_, 4, v___f_4553_);
lean_ctor_set(v___x_4546_, 3, v___f_4554_);
lean_ctor_set(v___x_4546_, 2, v___f_4555_);
lean_ctor_set(v___x_4546_, 1, v___f_4548_);
lean_ctor_set(v___x_4546_, 0, v___x_4552_);
v___x_4557_ = v___x_4546_;
goto v_reusejp_4556_;
}
else
{
lean_object* v_reuseFailAlloc_4567_; 
v_reuseFailAlloc_4567_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4567_, 0, v___x_4552_);
lean_ctor_set(v_reuseFailAlloc_4567_, 1, v___f_4548_);
lean_ctor_set(v_reuseFailAlloc_4567_, 2, v___f_4555_);
lean_ctor_set(v_reuseFailAlloc_4567_, 3, v___f_4554_);
lean_ctor_set(v_reuseFailAlloc_4567_, 4, v___f_4553_);
v___x_4557_ = v_reuseFailAlloc_4567_;
goto v_reusejp_4556_;
}
v_reusejp_4556_:
{
lean_object* v___x_4559_; 
if (v_isShared_4540_ == 0)
{
lean_ctor_set(v___x_4539_, 1, v___f_4549_);
lean_ctor_set(v___x_4539_, 0, v___x_4557_);
v___x_4559_ = v___x_4539_;
goto v_reusejp_4558_;
}
else
{
lean_object* v_reuseFailAlloc_4566_; 
v_reuseFailAlloc_4566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4566_, 0, v___x_4557_);
lean_ctor_set(v_reuseFailAlloc_4566_, 1, v___f_4549_);
v___x_4559_ = v_reuseFailAlloc_4566_;
goto v_reusejp_4558_;
}
v_reusejp_4558_:
{
lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___f_4563_; lean_object* v___x_16882__overap_4564_; lean_object* v___x_4565_; 
v___x_4560_ = l_StateRefT_x27_instMonad___redArg(v___x_4559_);
v___x_4561_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0);
v___x_4562_ = l_instInhabitedOfMonad___redArg(v___x_4560_, v___x_4561_);
v___f_4563_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4563_, 0, v___x_4562_);
v___x_16882__overap_4564_ = lean_panic_fn_borrowed(v___f_4563_, v_msg_4503_);
lean_dec_ref(v___f_4563_);
lean_inc(v___y_4509_);
lean_inc_ref(v___y_4508_);
lean_inc(v___y_4507_);
lean_inc_ref(v___y_4506_);
lean_inc(v___y_4505_);
lean_inc_ref(v___y_4504_);
v___x_4565_ = lean_apply_7(v___x_16882__overap_4564_, v___y_4504_, v___y_4505_, v___y_4506_, v___y_4507_, v___y_4508_, v___y_4509_, lean_box(0));
return v___x_4565_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2___boxed(lean_object* v_msg_4578_, lean_object* v___y_4579_, lean_object* v___y_4580_, lean_object* v___y_4581_, lean_object* v___y_4582_, lean_object* v___y_4583_, lean_object* v___y_4584_, lean_object* v___y_4585_){
_start:
{
lean_object* v_res_4586_; 
v_res_4586_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2(v_msg_4578_, v___y_4579_, v___y_4580_, v___y_4581_, v___y_4582_, v___y_4583_, v___y_4584_);
lean_dec(v___y_4584_);
lean_dec_ref(v___y_4583_);
lean_dec(v___y_4582_);
lean_dec_ref(v___y_4581_);
lean_dec(v___y_4580_);
lean_dec_ref(v___y_4579_);
return v_res_4586_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2(void){
_start:
{
lean_object* v___x_4589_; lean_object* v___x_4590_; lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v___x_4594_; 
v___x_4589_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6));
v___x_4590_ = lean_unsigned_to_nat(9u);
v___x_4591_ = lean_unsigned_to_nat(616u);
v___x_4592_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__1));
v___x_4593_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__0));
v___x_4594_ = l_mkPanicMessageWithDecl(v___x_4593_, v___x_4592_, v___x_4591_, v___x_4590_, v___x_4589_);
return v___x_4594_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10(void){
_start:
{
lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; 
v___x_4604_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__9));
v___x_4605_ = lean_unsigned_to_nat(14u);
v___x_4606_ = lean_unsigned_to_nat(22u);
v___x_4607_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__8));
v___x_4608_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__7));
v___x_4609_ = l_mkPanicMessageWithDecl(v___x_4608_, v___x_4607_, v___x_4606_, v___x_4605_, v___x_4604_);
return v___x_4609_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__12(void){
_start:
{
lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; lean_object* v___x_4615_; lean_object* v___x_4616_; 
v___x_4611_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6));
v___x_4612_ = lean_unsigned_to_nat(22u);
v___x_4613_ = lean_unsigned_to_nat(578u);
v___x_4614_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__11));
v___x_4615_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__4));
v___x_4616_ = l_mkPanicMessageWithDecl(v___x_4615_, v___x_4614_, v___x_4613_, v___x_4612_, v___x_4611_);
return v___x_4616_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc(lean_object* v_code_4617_, lean_object* v_decl_4618_, lean_object* v_k_4619_, lean_object* v_a_4620_, lean_object* v_a_4621_, lean_object* v_a_4622_, lean_object* v_a_4623_, lean_object* v_a_4624_, lean_object* v_a_4625_){
_start:
{
lean_object* v_fvarId_4627_; lean_object* v_value_4628_; lean_object* v_k_4630_; lean_object* v___y_4631_; lean_object* v___y_4632_; lean_object* v___y_4633_; lean_object* v___y_4634_; lean_object* v___y_4635_; lean_object* v___y_4636_; lean_object* v___y_4668_; lean_object* v___y_4669_; lean_object* v___y_4670_; lean_object* v___y_4671_; lean_object* v___y_4672_; lean_object* v___y_4673_; lean_object* v___y_4674_; uint8_t v___y_4675_; lean_object* v_k_4678_; lean_object* v___y_4679_; lean_object* v___y_4680_; lean_object* v___y_4681_; lean_object* v___y_4682_; lean_object* v___y_4683_; lean_object* v___y_4684_; lean_object* v___x_4695_; lean_object* v_a_4696_; lean_object* v___x_4698_; uint8_t v_isShared_4699_; uint8_t v_isSharedCheck_4996_; 
v_fvarId_4627_ = lean_ctor_get(v_decl_4618_, 0);
lean_inc_n(v_fvarId_4627_, 2);
v_value_4628_ = lean_ctor_get(v_decl_4618_, 3);
lean_inc(v_value_4628_);
v___x_4695_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_fvarId_4627_, v_k_4619_, v_a_4620_, v_a_4621_);
v_a_4696_ = lean_ctor_get(v___x_4695_, 0);
v_isSharedCheck_4996_ = !lean_is_exclusive(v___x_4695_);
if (v_isSharedCheck_4996_ == 0)
{
v___x_4698_ = v___x_4695_;
v_isShared_4699_ = v_isSharedCheck_4996_;
goto v_resetjp_4697_;
}
else
{
lean_inc(v_a_4696_);
lean_dec(v___x_4695_);
v___x_4698_ = lean_box(0);
v_isShared_4699_ = v_isSharedCheck_4996_;
goto v_resetjp_4697_;
}
v___jp_4629_:
{
lean_object* v___x_4637_; 
v___x_4637_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue(v_value_4628_, v___y_4631_, v___y_4632_, v___y_4633_, v___y_4634_, v___y_4635_, v___y_4636_);
if (lean_obj_tag(v___x_4637_) == 0)
{
lean_object* v___x_4639_; uint8_t v_isShared_4640_; uint8_t v_isSharedCheck_4657_; 
v_isSharedCheck_4657_ = !lean_is_exclusive(v___x_4637_);
if (v_isSharedCheck_4657_ == 0)
{
lean_object* v_unused_4658_; 
v_unused_4658_ = lean_ctor_get(v___x_4637_, 0);
lean_dec(v_unused_4658_);
v___x_4639_ = v___x_4637_;
v_isShared_4640_ = v_isSharedCheck_4657_;
goto v_resetjp_4638_;
}
else
{
lean_dec(v___x_4637_);
v___x_4639_ = lean_box(0);
v_isShared_4640_ = v_isSharedCheck_4657_;
goto v_resetjp_4638_;
}
v_resetjp_4638_:
{
lean_object* v___x_4641_; lean_object* v_vars_4642_; lean_object* v_borrows_4643_; lean_object* v___x_4645_; uint8_t v_isShared_4646_; uint8_t v_isSharedCheck_4656_; 
v___x_4641_ = lean_st_ref_take(v___y_4632_);
v_vars_4642_ = lean_ctor_get(v___x_4641_, 0);
v_borrows_4643_ = lean_ctor_get(v___x_4641_, 1);
v_isSharedCheck_4656_ = !lean_is_exclusive(v___x_4641_);
if (v_isSharedCheck_4656_ == 0)
{
v___x_4645_ = v___x_4641_;
v_isShared_4646_ = v_isSharedCheck_4656_;
goto v_resetjp_4644_;
}
else
{
lean_inc(v_borrows_4643_);
lean_inc(v_vars_4642_);
lean_dec(v___x_4641_);
v___x_4645_ = lean_box(0);
v_isShared_4646_ = v_isSharedCheck_4656_;
goto v_resetjp_4644_;
}
v_resetjp_4644_:
{
lean_object* v_vars_4647_; lean_object* v_borrows_4648_; lean_object* v___x_4650_; 
v_vars_4647_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(v_vars_4642_, v_fvarId_4627_);
v_borrows_4648_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(v_borrows_4643_, v_fvarId_4627_);
lean_dec(v_fvarId_4627_);
if (v_isShared_4646_ == 0)
{
lean_ctor_set(v___x_4645_, 1, v_borrows_4648_);
lean_ctor_set(v___x_4645_, 0, v_vars_4647_);
v___x_4650_ = v___x_4645_;
goto v_reusejp_4649_;
}
else
{
lean_object* v_reuseFailAlloc_4655_; 
v_reuseFailAlloc_4655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4655_, 0, v_vars_4647_);
lean_ctor_set(v_reuseFailAlloc_4655_, 1, v_borrows_4648_);
v___x_4650_ = v_reuseFailAlloc_4655_;
goto v_reusejp_4649_;
}
v_reusejp_4649_:
{
lean_object* v___x_4651_; lean_object* v___x_4653_; 
v___x_4651_ = lean_st_ref_set(v___y_4632_, v___x_4650_);
if (v_isShared_4640_ == 0)
{
lean_ctor_set(v___x_4639_, 0, v_k_4630_);
v___x_4653_ = v___x_4639_;
goto v_reusejp_4652_;
}
else
{
lean_object* v_reuseFailAlloc_4654_; 
v_reuseFailAlloc_4654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4654_, 0, v_k_4630_);
v___x_4653_ = v_reuseFailAlloc_4654_;
goto v_reusejp_4652_;
}
v_reusejp_4652_:
{
return v___x_4653_;
}
}
}
}
}
else
{
lean_object* v_a_4659_; lean_object* v___x_4661_; uint8_t v_isShared_4662_; uint8_t v_isSharedCheck_4666_; 
lean_dec_ref(v_k_4630_);
lean_dec(v_fvarId_4627_);
v_a_4659_ = lean_ctor_get(v___x_4637_, 0);
v_isSharedCheck_4666_ = !lean_is_exclusive(v___x_4637_);
if (v_isSharedCheck_4666_ == 0)
{
v___x_4661_ = v___x_4637_;
v_isShared_4662_ = v_isSharedCheck_4666_;
goto v_resetjp_4660_;
}
else
{
lean_inc(v_a_4659_);
lean_dec(v___x_4637_);
v___x_4661_ = lean_box(0);
v_isShared_4662_ = v_isSharedCheck_4666_;
goto v_resetjp_4660_;
}
v_resetjp_4660_:
{
lean_object* v___x_4664_; 
if (v_isShared_4662_ == 0)
{
v___x_4664_ = v___x_4661_;
goto v_reusejp_4663_;
}
else
{
lean_object* v_reuseFailAlloc_4665_; 
v_reuseFailAlloc_4665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4665_, 0, v_a_4659_);
v___x_4664_ = v_reuseFailAlloc_4665_;
goto v_reusejp_4663_;
}
v_reusejp_4663_:
{
return v___x_4664_;
}
}
}
}
v___jp_4667_:
{
if (v___y_4675_ == 0)
{
lean_object* v___x_4676_; 
lean_dec_ref(v_code_4617_);
v___x_4676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4676_, 0, v_decl_4618_);
lean_ctor_set(v___x_4676_, 1, v___y_4673_);
v_k_4630_ = v___x_4676_;
v___y_4631_ = v___y_4669_;
v___y_4632_ = v___y_4674_;
v___y_4633_ = v___y_4672_;
v___y_4634_ = v___y_4671_;
v___y_4635_ = v___y_4668_;
v___y_4636_ = v___y_4670_;
goto v___jp_4629_;
}
else
{
lean_dec_ref(v___y_4673_);
lean_dec_ref(v_decl_4618_);
v_k_4630_ = v_code_4617_;
v___y_4631_ = v___y_4669_;
v___y_4632_ = v___y_4674_;
v___y_4633_ = v___y_4672_;
v___y_4634_ = v___y_4671_;
v___y_4635_ = v___y_4668_;
v___y_4636_ = v___y_4670_;
goto v___jp_4629_;
}
}
v___jp_4677_:
{
if (lean_obj_tag(v_code_4617_) == 0)
{
lean_object* v_decl_4685_; lean_object* v_k_4686_; size_t v___x_4687_; size_t v___x_4688_; uint8_t v___x_4689_; 
v_decl_4685_ = lean_ctor_get(v_code_4617_, 0);
v_k_4686_ = lean_ctor_get(v_code_4617_, 1);
v___x_4687_ = lean_ptr_addr(v_k_4686_);
v___x_4688_ = lean_ptr_addr(v_k_4678_);
v___x_4689_ = lean_usize_dec_eq(v___x_4687_, v___x_4688_);
if (v___x_4689_ == 0)
{
v___y_4668_ = v___y_4683_;
v___y_4669_ = v___y_4679_;
v___y_4670_ = v___y_4684_;
v___y_4671_ = v___y_4682_;
v___y_4672_ = v___y_4681_;
v___y_4673_ = v_k_4678_;
v___y_4674_ = v___y_4680_;
v___y_4675_ = v___x_4689_;
goto v___jp_4667_;
}
else
{
size_t v___x_4690_; size_t v___x_4691_; uint8_t v___x_4692_; 
v___x_4690_ = lean_ptr_addr(v_decl_4685_);
v___x_4691_ = lean_ptr_addr(v_decl_4618_);
v___x_4692_ = lean_usize_dec_eq(v___x_4690_, v___x_4691_);
v___y_4668_ = v___y_4683_;
v___y_4669_ = v___y_4679_;
v___y_4670_ = v___y_4684_;
v___y_4671_ = v___y_4682_;
v___y_4672_ = v___y_4681_;
v___y_4673_ = v_k_4678_;
v___y_4674_ = v___y_4680_;
v___y_4675_ = v___x_4692_;
goto v___jp_4667_;
}
}
else
{
lean_object* v___x_4693_; lean_object* v___x_4694_; 
lean_dec_ref(v_k_4678_);
lean_dec_ref(v_decl_4618_);
lean_dec_ref(v_code_4617_);
v___x_4693_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4694_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4693_);
v_k_4630_ = v___x_4694_;
v___y_4631_ = v___y_4679_;
v___y_4632_ = v___y_4680_;
v___y_4633_ = v___y_4681_;
v___y_4634_ = v___y_4682_;
v___y_4635_ = v___y_4683_;
v___y_4636_ = v___y_4684_;
goto v___jp_4629_;
}
}
v_resetjp_4697_:
{
uint8_t v___y_4701_; uint8_t v___y_4704_; uint8_t v___y_4707_; uint8_t v___y_4710_; 
switch(lean_obj_tag(v_value_4628_))
{
case 0:
{
lean_del_object(v___x_4698_);
if (lean_obj_tag(v_code_4617_) == 0)
{
lean_object* v_decl_4712_; lean_object* v_k_4713_; size_t v___x_4714_; size_t v___x_4715_; uint8_t v___x_4716_; 
v_decl_4712_ = lean_ctor_get(v_code_4617_, 0);
v_k_4713_ = lean_ctor_get(v_code_4617_, 1);
v___x_4714_ = lean_ptr_addr(v_k_4713_);
v___x_4715_ = lean_ptr_addr(v_a_4696_);
v___x_4716_ = lean_usize_dec_eq(v___x_4714_, v___x_4715_);
if (v___x_4716_ == 0)
{
v___y_4701_ = v___x_4716_;
goto v___jp_4700_;
}
else
{
size_t v___x_4717_; size_t v___x_4718_; uint8_t v___x_4719_; 
v___x_4717_ = lean_ptr_addr(v_decl_4712_);
v___x_4718_ = lean_ptr_addr(v_decl_4618_);
v___x_4719_ = lean_usize_dec_eq(v___x_4717_, v___x_4718_);
v___y_4701_ = v___x_4719_;
goto v___jp_4700_;
}
}
else
{
lean_object* v___x_4720_; lean_object* v___x_4721_; 
lean_dec(v_a_4696_);
lean_dec_ref(v_decl_4618_);
lean_dec_ref(v_code_4617_);
v___x_4720_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4721_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4720_);
v_k_4630_ = v___x_4721_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
}
case 1:
{
lean_del_object(v___x_4698_);
if (lean_obj_tag(v_code_4617_) == 0)
{
lean_object* v_decl_4722_; lean_object* v_k_4723_; size_t v___x_4724_; size_t v___x_4725_; uint8_t v___x_4726_; 
v_decl_4722_ = lean_ctor_get(v_code_4617_, 0);
v_k_4723_ = lean_ctor_get(v_code_4617_, 1);
v___x_4724_ = lean_ptr_addr(v_k_4723_);
v___x_4725_ = lean_ptr_addr(v_a_4696_);
v___x_4726_ = lean_usize_dec_eq(v___x_4724_, v___x_4725_);
if (v___x_4726_ == 0)
{
v___y_4704_ = v___x_4726_;
goto v___jp_4703_;
}
else
{
size_t v___x_4727_; size_t v___x_4728_; uint8_t v___x_4729_; 
v___x_4727_ = lean_ptr_addr(v_decl_4722_);
v___x_4728_ = lean_ptr_addr(v_decl_4618_);
v___x_4729_ = lean_usize_dec_eq(v___x_4727_, v___x_4728_);
v___y_4704_ = v___x_4729_;
goto v___jp_4703_;
}
}
else
{
lean_object* v___x_4730_; lean_object* v___x_4731_; 
lean_dec(v_a_4696_);
lean_dec_ref(v_decl_4618_);
lean_dec_ref(v_code_4617_);
v___x_4730_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4731_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4730_);
v_k_4630_ = v___x_4731_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
}
case 4:
{
lean_object* v_fvarId_4732_; lean_object* v_args_4733_; lean_object* v___x_4735_; 
v_fvarId_4732_ = lean_ctor_get(v_value_4628_, 0);
v_args_4733_ = lean_ctor_get(v_value_4628_, 1);
lean_inc(v_fvarId_4732_);
if (v_isShared_4699_ == 0)
{
lean_ctor_set_tag(v___x_4698_, 1);
lean_ctor_set(v___x_4698_, 0, v_fvarId_4732_);
v___x_4735_ = v___x_4698_;
goto v_reusejp_4734_;
}
else
{
lean_object* v_reuseFailAlloc_4754_; 
v_reuseFailAlloc_4754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4754_, 0, v_fvarId_4732_);
v___x_4735_ = v_reuseFailAlloc_4754_;
goto v_reusejp_4734_;
}
v_reusejp_4734_:
{
lean_object* v___x_4736_; lean_object* v___y_4738_; uint8_t v___y_4742_; 
lean_inc_ref(v_args_4733_);
v___x_4736_ = lean_array_push(v_args_4733_, v___x_4735_);
if (lean_obj_tag(v_code_4617_) == 0)
{
lean_object* v_decl_4744_; lean_object* v_k_4745_; size_t v___x_4746_; size_t v___x_4747_; uint8_t v___x_4748_; 
v_decl_4744_ = lean_ctor_get(v_code_4617_, 0);
v_k_4745_ = lean_ctor_get(v_code_4617_, 1);
v___x_4746_ = lean_ptr_addr(v_k_4745_);
v___x_4747_ = lean_ptr_addr(v_a_4696_);
v___x_4748_ = lean_usize_dec_eq(v___x_4746_, v___x_4747_);
if (v___x_4748_ == 0)
{
v___y_4742_ = v___x_4748_;
goto v___jp_4741_;
}
else
{
size_t v___x_4749_; size_t v___x_4750_; uint8_t v___x_4751_; 
v___x_4749_ = lean_ptr_addr(v_decl_4744_);
v___x_4750_ = lean_ptr_addr(v_decl_4618_);
v___x_4751_ = lean_usize_dec_eq(v___x_4749_, v___x_4750_);
v___y_4742_ = v___x_4751_;
goto v___jp_4741_;
}
}
else
{
lean_object* v___x_4752_; lean_object* v___x_4753_; 
lean_dec(v_a_4696_);
lean_dec_ref(v_decl_4618_);
lean_dec_ref(v_code_4617_);
v___x_4752_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4753_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4752_);
v___y_4738_ = v___x_4753_;
goto v___jp_4737_;
}
v___jp_4737_:
{
lean_object* v___x_4739_; 
v___x_4739_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(v___x_4736_, v___y_4738_, v_a_4620_, v_a_4621_, v_a_4622_, v_a_4623_, v_a_4624_, v_a_4625_);
lean_dec_ref(v___x_4736_);
if (lean_obj_tag(v___x_4739_) == 0)
{
lean_object* v_a_4740_; 
v_a_4740_ = lean_ctor_get(v___x_4739_, 0);
lean_inc(v_a_4740_);
lean_dec_ref(v___x_4739_);
v_k_4630_ = v_a_4740_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
else
{
lean_dec_ref(v_value_4628_);
lean_dec(v_fvarId_4627_);
return v___x_4739_;
}
}
v___jp_4741_:
{
if (v___y_4742_ == 0)
{
lean_object* v___x_4743_; 
lean_dec_ref(v_code_4617_);
v___x_4743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4743_, 0, v_decl_4618_);
lean_ctor_set(v___x_4743_, 1, v_a_4696_);
v___y_4738_ = v___x_4743_;
goto v___jp_4737_;
}
else
{
lean_dec(v_a_4696_);
lean_dec_ref(v_decl_4618_);
v___y_4738_ = v_code_4617_;
goto v___jp_4737_;
}
}
}
}
case 6:
{
lean_object* v_var_4755_; lean_object* v___x_4756_; lean_object* v_a_4757_; lean_object* v___x_4758_; lean_object* v_borrows_4759_; uint8_t v___x_4760_; 
lean_del_object(v___x_4698_);
v_var_4755_ = lean_ctor_get(v_value_4628_, 1);
lean_inc(v_var_4755_);
v___x_4756_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_var_4755_, v_a_4696_, v_a_4620_, v_a_4621_);
v_a_4757_ = lean_ctor_get(v___x_4756_, 0);
lean_inc(v_a_4757_);
lean_dec_ref(v___x_4756_);
v___x_4758_ = lean_st_ref_get(v_a_4621_);
v_borrows_4759_ = lean_ctor_get(v___x_4758_, 1);
lean_inc_ref(v_borrows_4759_);
lean_dec(v___x_4758_);
v___x_4760_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4759_, v_fvarId_4627_);
lean_dec_ref(v_borrows_4759_);
if (v___x_4760_ == 0)
{
lean_object* v_varMap_4761_; lean_object* v___x_4762_; uint8_t v_isDefiniteRef_4763_; lean_object* v___x_4764_; uint8_t v___y_4766_; 
v_varMap_4761_ = lean_ctor_get(v_a_4620_, 2);
v___x_4762_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0(v_varMap_4761_, v_fvarId_4627_);
v_isDefiniteRef_4763_ = lean_ctor_get_uint8(v___x_4762_, sizeof(void*)*1 + 1);
v___x_4764_ = lean_unsigned_to_nat(1u);
if (v_isDefiniteRef_4763_ == 0)
{
uint8_t v___x_4769_; 
v___x_4769_ = 1;
v___y_4766_ = v___x_4769_;
goto v___jp_4765_;
}
else
{
v___y_4766_ = v___x_4760_;
goto v___jp_4765_;
}
v___jp_4765_:
{
uint8_t v_persistent_4767_; lean_object* v___x_4768_; 
v_persistent_4767_ = lean_ctor_get_uint8(v___x_4762_, sizeof(void*)*1 + 2);
lean_dec_ref(v___x_4762_);
lean_inc(v_fvarId_4627_);
v___x_4768_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_4768_, 0, v_fvarId_4627_);
lean_ctor_set(v___x_4768_, 1, v___x_4764_);
lean_ctor_set(v___x_4768_, 2, v_a_4757_);
lean_ctor_set_uint8(v___x_4768_, sizeof(void*)*3, v___y_4766_);
lean_ctor_set_uint8(v___x_4768_, sizeof(void*)*3 + 1, v_persistent_4767_);
v_k_4678_ = v___x_4768_;
v___y_4679_ = v_a_4620_;
v___y_4680_ = v_a_4621_;
v___y_4681_ = v_a_4622_;
v___y_4682_ = v_a_4623_;
v___y_4683_ = v_a_4624_;
v___y_4684_ = v_a_4625_;
goto v___jp_4677_;
}
}
else
{
v_k_4678_ = v_a_4757_;
v___y_4679_ = v_a_4620_;
v___y_4680_ = v_a_4621_;
v___y_4681_ = v_a_4622_;
v___y_4682_ = v_a_4623_;
v___y_4683_ = v_a_4624_;
v___y_4684_ = v_a_4625_;
goto v___jp_4677_;
}
}
case 7:
{
lean_object* v_var_4770_; lean_object* v___x_4771_; lean_object* v_a_4772_; uint8_t v___y_4774_; 
lean_del_object(v___x_4698_);
v_var_4770_ = lean_ctor_get(v_value_4628_, 1);
lean_inc(v_var_4770_);
v___x_4771_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_var_4770_, v_a_4696_, v_a_4620_, v_a_4621_);
v_a_4772_ = lean_ctor_get(v___x_4771_, 0);
lean_inc(v_a_4772_);
lean_dec_ref(v___x_4771_);
if (lean_obj_tag(v_code_4617_) == 0)
{
lean_object* v_decl_4776_; lean_object* v_k_4777_; size_t v___x_4778_; size_t v___x_4779_; uint8_t v___x_4780_; 
v_decl_4776_ = lean_ctor_get(v_code_4617_, 0);
v_k_4777_ = lean_ctor_get(v_code_4617_, 1);
v___x_4778_ = lean_ptr_addr(v_k_4777_);
v___x_4779_ = lean_ptr_addr(v_a_4772_);
v___x_4780_ = lean_usize_dec_eq(v___x_4778_, v___x_4779_);
if (v___x_4780_ == 0)
{
v___y_4774_ = v___x_4780_;
goto v___jp_4773_;
}
else
{
size_t v___x_4781_; size_t v___x_4782_; uint8_t v___x_4783_; 
v___x_4781_ = lean_ptr_addr(v_decl_4776_);
v___x_4782_ = lean_ptr_addr(v_decl_4618_);
v___x_4783_ = lean_usize_dec_eq(v___x_4781_, v___x_4782_);
v___y_4774_ = v___x_4783_;
goto v___jp_4773_;
}
}
else
{
lean_object* v___x_4784_; lean_object* v___x_4785_; 
lean_dec(v_a_4772_);
lean_dec_ref(v_decl_4618_);
lean_dec_ref(v_code_4617_);
v___x_4784_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4785_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4784_);
v_k_4630_ = v___x_4785_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
v___jp_4773_:
{
if (v___y_4774_ == 0)
{
lean_object* v___x_4775_; 
lean_dec_ref(v_code_4617_);
v___x_4775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4775_, 0, v_decl_4618_);
lean_ctor_set(v___x_4775_, 1, v_a_4772_);
v_k_4630_ = v___x_4775_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
else
{
lean_dec(v_a_4772_);
lean_dec_ref(v_decl_4618_);
v_k_4630_ = v_code_4617_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
}
}
case 8:
{
lean_object* v_var_4786_; lean_object* v___x_4787_; lean_object* v_a_4788_; uint8_t v___y_4790_; 
lean_del_object(v___x_4698_);
v_var_4786_ = lean_ctor_get(v_value_4628_, 2);
lean_inc(v_var_4786_);
v___x_4787_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_var_4786_, v_a_4696_, v_a_4620_, v_a_4621_);
v_a_4788_ = lean_ctor_get(v___x_4787_, 0);
lean_inc(v_a_4788_);
lean_dec_ref(v___x_4787_);
if (lean_obj_tag(v_code_4617_) == 0)
{
lean_object* v_decl_4792_; lean_object* v_k_4793_; size_t v___x_4794_; size_t v___x_4795_; uint8_t v___x_4796_; 
v_decl_4792_ = lean_ctor_get(v_code_4617_, 0);
v_k_4793_ = lean_ctor_get(v_code_4617_, 1);
v___x_4794_ = lean_ptr_addr(v_k_4793_);
v___x_4795_ = lean_ptr_addr(v_a_4788_);
v___x_4796_ = lean_usize_dec_eq(v___x_4794_, v___x_4795_);
if (v___x_4796_ == 0)
{
v___y_4790_ = v___x_4796_;
goto v___jp_4789_;
}
else
{
size_t v___x_4797_; size_t v___x_4798_; uint8_t v___x_4799_; 
v___x_4797_ = lean_ptr_addr(v_decl_4792_);
v___x_4798_ = lean_ptr_addr(v_decl_4618_);
v___x_4799_ = lean_usize_dec_eq(v___x_4797_, v___x_4798_);
v___y_4790_ = v___x_4799_;
goto v___jp_4789_;
}
}
else
{
lean_object* v___x_4800_; lean_object* v___x_4801_; 
lean_dec(v_a_4788_);
lean_dec_ref(v_decl_4618_);
lean_dec_ref(v_code_4617_);
v___x_4800_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4801_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4800_);
v_k_4630_ = v___x_4801_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
v___jp_4789_:
{
if (v___y_4790_ == 0)
{
lean_object* v___x_4791_; 
lean_dec_ref(v_code_4617_);
v___x_4791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4791_, 0, v_decl_4618_);
lean_ctor_set(v___x_4791_, 1, v_a_4788_);
v_k_4630_ = v___x_4791_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
else
{
lean_dec(v_a_4788_);
lean_dec_ref(v_decl_4618_);
v_k_4630_ = v_code_4617_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
}
}
case 9:
{
lean_object* v_fn_4802_; lean_object* v_args_4803_; lean_object* v___y_4805_; lean_object* v___y_4806_; lean_object* v___y_4807_; lean_object* v___y_4808_; lean_object* v___y_4809_; lean_object* v___y_4810_; lean_object* v___y_4811_; lean_object* v___y_4812_; lean_object* v___y_4816_; lean_object* v___y_4817_; lean_object* v___y_4818_; lean_object* v___y_4819_; lean_object* v___y_4820_; lean_object* v___y_4821_; lean_object* v___y_4822_; lean_object* v___y_4823_; lean_object* v___y_4824_; uint8_t v___y_4825_; lean_object* v___x_4827_; 
lean_del_object(v___x_4698_);
v_fn_4802_ = lean_ctor_get(v_value_4628_, 0);
v_args_4803_ = lean_ctor_get(v_value_4628_, 1);
lean_inc(v_fn_4802_);
v___x_4827_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_fn_4802_, v_a_4625_);
if (lean_obj_tag(v___x_4827_) == 0)
{
lean_object* v_a_4828_; uint8_t v___x_4829_; lean_object* v___y_4831_; lean_object* v___y_4832_; lean_object* v_value_4833_; lean_object* v___y_4834_; lean_object* v___y_4835_; lean_object* v___y_4836_; lean_object* v___y_4837_; lean_object* v___y_4838_; lean_object* v___y_4839_; lean_object* v___y_4861_; lean_object* v___y_4862_; lean_object* v___y_4863_; uint8_t v___y_4864_; lean_object* v___y_4869_; lean_object* v___y_4870_; uint8_t v___y_4871_; lean_object* v___y_4872_; uint8_t v___y_4873_; lean_object* v___y_4881_; lean_object* v___y_4882_; uint8_t v___y_4883_; uint8_t v___y_4884_; lean_object* v___y_4885_; uint8_t v___y_4886_; lean_object* v___y_4894_; 
v_a_4828_ = lean_ctor_get(v___x_4827_, 0);
lean_inc(v_a_4828_);
lean_dec_ref(v___x_4827_);
v___x_4829_ = 1;
if (lean_obj_tag(v_a_4828_) == 0)
{
lean_object* v___x_4910_; lean_object* v___x_4911_; 
v___x_4910_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10);
v___x_4911_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1(v___x_4910_);
v___y_4894_ = v___x_4911_;
goto v___jp_4893_;
}
else
{
lean_object* v_val_4912_; 
v_val_4912_ = lean_ctor_get(v_a_4828_, 0);
lean_inc(v_val_4912_);
lean_dec_ref(v_a_4828_);
v___y_4894_ = v_val_4912_;
goto v___jp_4893_;
}
v___jp_4830_:
{
lean_object* v___x_4840_; 
v___x_4840_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___x_4829_, v_decl_4618_, v_value_4833_, v___y_4837_);
if (lean_obj_tag(v___x_4840_) == 0)
{
if (lean_obj_tag(v_code_4617_) == 0)
{
lean_object* v_a_4841_; lean_object* v_decl_4842_; lean_object* v_k_4843_; size_t v___x_4844_; size_t v___x_4845_; uint8_t v___x_4846_; 
v_a_4841_ = lean_ctor_get(v___x_4840_, 0);
lean_inc(v_a_4841_);
lean_dec_ref(v___x_4840_);
v_decl_4842_ = lean_ctor_get(v_code_4617_, 0);
v_k_4843_ = lean_ctor_get(v_code_4617_, 1);
v___x_4844_ = lean_ptr_addr(v_k_4843_);
v___x_4845_ = lean_ptr_addr(v___y_4832_);
v___x_4846_ = lean_usize_dec_eq(v___x_4844_, v___x_4845_);
if (v___x_4846_ == 0)
{
v___y_4816_ = v___y_4831_;
v___y_4817_ = v___y_4839_;
v___y_4818_ = v___y_4838_;
v___y_4819_ = v_a_4841_;
v___y_4820_ = v___y_4834_;
v___y_4821_ = v___y_4832_;
v___y_4822_ = v___y_4835_;
v___y_4823_ = v___y_4837_;
v___y_4824_ = v___y_4836_;
v___y_4825_ = v___x_4846_;
goto v___jp_4815_;
}
else
{
size_t v___x_4847_; size_t v___x_4848_; uint8_t v___x_4849_; 
v___x_4847_ = lean_ptr_addr(v_decl_4842_);
v___x_4848_ = lean_ptr_addr(v_a_4841_);
v___x_4849_ = lean_usize_dec_eq(v___x_4847_, v___x_4848_);
v___y_4816_ = v___y_4831_;
v___y_4817_ = v___y_4839_;
v___y_4818_ = v___y_4838_;
v___y_4819_ = v_a_4841_;
v___y_4820_ = v___y_4834_;
v___y_4821_ = v___y_4832_;
v___y_4822_ = v___y_4835_;
v___y_4823_ = v___y_4837_;
v___y_4824_ = v___y_4836_;
v___y_4825_ = v___x_4849_;
goto v___jp_4815_;
}
}
else
{
lean_object* v___x_4850_; lean_object* v___x_4851_; 
lean_dec_ref(v___x_4840_);
lean_dec_ref(v___y_4832_);
lean_dec_ref(v_code_4617_);
v___x_4850_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4851_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4850_);
v___y_4805_ = v___y_4831_;
v___y_4806_ = v___y_4839_;
v___y_4807_ = v___y_4838_;
v___y_4808_ = v___y_4834_;
v___y_4809_ = v___y_4835_;
v___y_4810_ = v___y_4837_;
v___y_4811_ = v___y_4836_;
v___y_4812_ = v___x_4851_;
goto v___jp_4804_;
}
}
else
{
lean_object* v_a_4852_; lean_object* v___x_4854_; uint8_t v_isShared_4855_; uint8_t v_isSharedCheck_4859_; 
lean_dec_ref(v___y_4832_);
lean_dec_ref(v___y_4831_);
lean_dec_ref(v_value_4628_);
lean_dec(v_fvarId_4627_);
lean_dec_ref(v_code_4617_);
v_a_4852_ = lean_ctor_get(v___x_4840_, 0);
v_isSharedCheck_4859_ = !lean_is_exclusive(v___x_4840_);
if (v_isSharedCheck_4859_ == 0)
{
v___x_4854_ = v___x_4840_;
v_isShared_4855_ = v_isSharedCheck_4859_;
goto v_resetjp_4853_;
}
else
{
lean_inc(v_a_4852_);
lean_dec(v___x_4840_);
v___x_4854_ = lean_box(0);
v_isShared_4855_ = v_isSharedCheck_4859_;
goto v_resetjp_4853_;
}
v_resetjp_4853_:
{
lean_object* v___x_4857_; 
if (v_isShared_4855_ == 0)
{
v___x_4857_ = v___x_4854_;
goto v_reusejp_4856_;
}
else
{
lean_object* v_reuseFailAlloc_4858_; 
v_reuseFailAlloc_4858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4858_, 0, v_a_4852_);
v___x_4857_ = v_reuseFailAlloc_4858_;
goto v_reusejp_4856_;
}
v_reusejp_4856_:
{
return v___x_4857_;
}
}
}
}
v___jp_4860_:
{
if (v___y_4864_ == 0)
{
lean_inc_ref(v_value_4628_);
v___y_4831_ = v___y_4862_;
v___y_4832_ = v___y_4863_;
v_value_4833_ = v_value_4628_;
v___y_4834_ = v_a_4620_;
v___y_4835_ = v_a_4621_;
v___y_4836_ = v_a_4622_;
v___y_4837_ = v_a_4623_;
v___y_4838_ = v_a_4624_;
v___y_4839_ = v_a_4625_;
goto v___jp_4830_;
}
else
{
lean_object* v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; 
v___x_4865_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__3));
lean_inc_ref(v___y_4861_);
v___x_4866_ = l_Lean_Name_mkStr2(v___y_4861_, v___x_4865_);
lean_inc_ref(v_args_4803_);
v___x_4867_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4867_, 0, v___x_4866_);
lean_ctor_set(v___x_4867_, 1, v_args_4803_);
v___y_4831_ = v___y_4862_;
v___y_4832_ = v___y_4863_;
v_value_4833_ = v___x_4867_;
v___y_4834_ = v_a_4620_;
v___y_4835_ = v_a_4621_;
v___y_4836_ = v_a_4622_;
v___y_4837_ = v_a_4623_;
v___y_4838_ = v_a_4624_;
v___y_4839_ = v_a_4625_;
goto v___jp_4830_;
}
}
v___jp_4868_:
{
if (v___y_4873_ == 0)
{
lean_object* v___x_4874_; lean_object* v___x_4875_; uint8_t v___x_4876_; 
v___x_4874_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__3));
lean_inc_ref(v___y_4869_);
v___x_4875_ = l_Lean_Name_mkStr2(v___y_4869_, v___x_4874_);
v___x_4876_ = lean_name_eq(v_fn_4802_, v___x_4875_);
lean_dec(v___x_4875_);
if (v___x_4876_ == 0)
{
v___y_4861_ = v___y_4869_;
v___y_4862_ = v___y_4870_;
v___y_4863_ = v___y_4872_;
v___y_4864_ = v___x_4876_;
goto v___jp_4860_;
}
else
{
v___y_4861_ = v___y_4869_;
v___y_4862_ = v___y_4870_;
v___y_4863_ = v___y_4872_;
v___y_4864_ = v___y_4871_;
goto v___jp_4860_;
}
}
else
{
lean_object* v___x_4877_; lean_object* v___x_4878_; lean_object* v___x_4879_; 
v___x_4877_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__4));
lean_inc_ref(v___y_4869_);
v___x_4878_ = l_Lean_Name_mkStr2(v___y_4869_, v___x_4877_);
lean_inc_ref(v_args_4803_);
v___x_4879_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4879_, 0, v___x_4878_);
lean_ctor_set(v___x_4879_, 1, v_args_4803_);
v___y_4831_ = v___y_4870_;
v___y_4832_ = v___y_4872_;
v_value_4833_ = v___x_4879_;
v___y_4834_ = v_a_4620_;
v___y_4835_ = v_a_4621_;
v___y_4836_ = v_a_4622_;
v___y_4837_ = v_a_4623_;
v___y_4838_ = v_a_4624_;
v___y_4839_ = v_a_4625_;
goto v___jp_4830_;
}
}
v___jp_4880_:
{
if (v___y_4886_ == 0)
{
lean_object* v___x_4887_; lean_object* v___x_4888_; uint8_t v___x_4889_; 
v___x_4887_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__2));
lean_inc_ref(v___y_4881_);
v___x_4888_ = l_Lean_Name_mkStr2(v___y_4881_, v___x_4887_);
v___x_4889_ = lean_name_eq(v_fn_4802_, v___x_4888_);
lean_dec(v___x_4888_);
if (v___x_4889_ == 0)
{
v___y_4869_ = v___y_4881_;
v___y_4870_ = v___y_4882_;
v___y_4871_ = v___y_4883_;
v___y_4872_ = v___y_4885_;
v___y_4873_ = v___x_4889_;
goto v___jp_4868_;
}
else
{
v___y_4869_ = v___y_4881_;
v___y_4870_ = v___y_4882_;
v___y_4871_ = v___y_4883_;
v___y_4872_ = v___y_4885_;
v___y_4873_ = v___y_4884_;
goto v___jp_4868_;
}
}
else
{
lean_object* v___x_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; 
v___x_4890_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__5));
lean_inc_ref(v___y_4881_);
v___x_4891_ = l_Lean_Name_mkStr2(v___y_4881_, v___x_4890_);
lean_inc_ref(v_args_4803_);
v___x_4892_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4892_, 0, v___x_4891_);
lean_ctor_set(v___x_4892_, 1, v_args_4803_);
v___y_4831_ = v___y_4882_;
v___y_4832_ = v___y_4885_;
v_value_4833_ = v___x_4892_;
v___y_4834_ = v_a_4620_;
v___y_4835_ = v_a_4621_;
v___y_4836_ = v_a_4622_;
v___y_4837_ = v_a_4623_;
v___y_4838_ = v_a_4624_;
v___y_4839_ = v_a_4625_;
goto v___jp_4830_;
}
}
v___jp_4893_:
{
lean_object* v_params_4895_; lean_object* v___x_4896_; 
v_params_4895_ = lean_ctor_get(v___y_4894_, 3);
lean_inc_ref_n(v_params_4895_, 2);
lean_dec_ref(v___y_4894_);
v___x_4896_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp(v_args_4803_, v_params_4895_, v_a_4696_, v_a_4620_, v_a_4621_, v_a_4622_, v_a_4623_, v_a_4624_, v_a_4625_);
if (lean_obj_tag(v___x_4896_) == 0)
{
lean_object* v_a_4897_; lean_object* v___x_4898_; lean_object* v___x_4899_; lean_object* v_borrows_4900_; lean_object* v___x_4901_; lean_object* v_borrows_4902_; lean_object* v_borrows_4903_; uint8_t v___x_4904_; uint8_t v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; uint8_t v___x_4908_; 
v_a_4897_ = lean_ctor_get(v___x_4896_, 0);
lean_inc(v_a_4897_);
lean_dec_ref(v___x_4896_);
v___x_4898_ = lean_st_ref_get(v_a_4621_);
v___x_4899_ = lean_st_ref_get(v_a_4621_);
v_borrows_4900_ = lean_ctor_get(v___x_4898_, 1);
lean_inc_ref(v_borrows_4900_);
lean_dec(v___x_4898_);
v___x_4901_ = lean_st_ref_get(v_a_4621_);
v_borrows_4902_ = lean_ctor_get(v___x_4899_, 1);
lean_inc_ref(v_borrows_4902_);
lean_dec(v___x_4899_);
v_borrows_4903_ = lean_ctor_get(v___x_4901_, 1);
lean_inc_ref(v_borrows_4903_);
lean_dec(v___x_4901_);
v___x_4904_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4902_, v_fvarId_4627_);
lean_dec_ref(v_borrows_4902_);
v___x_4905_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4903_, v_fvarId_4627_);
lean_dec_ref(v_borrows_4903_);
v___x_4906_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__0));
v___x_4907_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__6));
v___x_4908_ = lean_name_eq(v_fn_4802_, v___x_4907_);
if (v___x_4908_ == 0)
{
lean_dec_ref(v_borrows_4900_);
v___y_4881_ = v___x_4906_;
v___y_4882_ = v_params_4895_;
v___y_4883_ = v___x_4905_;
v___y_4884_ = v___x_4904_;
v___y_4885_ = v_a_4897_;
v___y_4886_ = v___x_4908_;
goto v___jp_4880_;
}
else
{
uint8_t v___x_4909_; 
v___x_4909_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4900_, v_fvarId_4627_);
lean_dec_ref(v_borrows_4900_);
v___y_4881_ = v___x_4906_;
v___y_4882_ = v_params_4895_;
v___y_4883_ = v___x_4905_;
v___y_4884_ = v___x_4904_;
v___y_4885_ = v_a_4897_;
v___y_4886_ = v___x_4909_;
goto v___jp_4880_;
}
}
else
{
lean_dec_ref(v_params_4895_);
lean_dec_ref(v_value_4628_);
lean_dec(v_fvarId_4627_);
lean_dec_ref(v_decl_4618_);
lean_dec_ref(v_code_4617_);
return v___x_4896_;
}
}
}
else
{
lean_object* v_a_4913_; lean_object* v___x_4915_; uint8_t v_isShared_4916_; uint8_t v_isSharedCheck_4920_; 
lean_dec_ref(v_value_4628_);
lean_dec(v_a_4696_);
lean_dec(v_fvarId_4627_);
lean_dec_ref(v_decl_4618_);
lean_dec_ref(v_code_4617_);
v_a_4913_ = lean_ctor_get(v___x_4827_, 0);
v_isSharedCheck_4920_ = !lean_is_exclusive(v___x_4827_);
if (v_isSharedCheck_4920_ == 0)
{
v___x_4915_ = v___x_4827_;
v_isShared_4916_ = v_isSharedCheck_4920_;
goto v_resetjp_4914_;
}
else
{
lean_inc(v_a_4913_);
lean_dec(v___x_4827_);
v___x_4915_ = lean_box(0);
v_isShared_4916_ = v_isSharedCheck_4920_;
goto v_resetjp_4914_;
}
v_resetjp_4914_:
{
lean_object* v___x_4918_; 
if (v_isShared_4916_ == 0)
{
v___x_4918_ = v___x_4915_;
goto v_reusejp_4917_;
}
else
{
lean_object* v_reuseFailAlloc_4919_; 
v_reuseFailAlloc_4919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4919_, 0, v_a_4913_);
v___x_4918_ = v_reuseFailAlloc_4919_;
goto v_reusejp_4917_;
}
v_reusejp_4917_:
{
return v___x_4918_;
}
}
}
v___jp_4804_:
{
lean_object* v___x_4813_; 
v___x_4813_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore(v_args_4803_, v___y_4805_, v___y_4812_, v___y_4808_, v___y_4809_, v___y_4811_, v___y_4810_, v___y_4807_, v___y_4806_);
if (lean_obj_tag(v___x_4813_) == 0)
{
lean_object* v_a_4814_; 
v_a_4814_ = lean_ctor_get(v___x_4813_, 0);
lean_inc(v_a_4814_);
lean_dec_ref(v___x_4813_);
v_k_4630_ = v_a_4814_;
v___y_4631_ = v___y_4808_;
v___y_4632_ = v___y_4809_;
v___y_4633_ = v___y_4811_;
v___y_4634_ = v___y_4810_;
v___y_4635_ = v___y_4807_;
v___y_4636_ = v___y_4806_;
goto v___jp_4629_;
}
else
{
lean_dec_ref(v_value_4628_);
lean_dec(v_fvarId_4627_);
return v___x_4813_;
}
}
v___jp_4815_:
{
if (v___y_4825_ == 0)
{
lean_object* v___x_4826_; 
lean_dec_ref(v_code_4617_);
v___x_4826_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4826_, 0, v___y_4819_);
lean_ctor_set(v___x_4826_, 1, v___y_4821_);
v___y_4805_ = v___y_4816_;
v___y_4806_ = v___y_4817_;
v___y_4807_ = v___y_4818_;
v___y_4808_ = v___y_4820_;
v___y_4809_ = v___y_4822_;
v___y_4810_ = v___y_4823_;
v___y_4811_ = v___y_4824_;
v___y_4812_ = v___x_4826_;
goto v___jp_4804_;
}
else
{
lean_dec_ref(v___y_4821_);
lean_dec_ref(v___y_4819_);
v___y_4805_ = v___y_4816_;
v___y_4806_ = v___y_4817_;
v___y_4807_ = v___y_4818_;
v___y_4808_ = v___y_4820_;
v___y_4809_ = v___y_4822_;
v___y_4810_ = v___y_4823_;
v___y_4811_ = v___y_4824_;
v___y_4812_ = v_code_4617_;
goto v___jp_4804_;
}
}
}
case 11:
{
lean_del_object(v___x_4698_);
if (lean_obj_tag(v_code_4617_) == 0)
{
lean_object* v_decl_4921_; lean_object* v_k_4922_; size_t v___x_4923_; size_t v___x_4924_; uint8_t v___x_4925_; 
v_decl_4921_ = lean_ctor_get(v_code_4617_, 0);
v_k_4922_ = lean_ctor_get(v_code_4617_, 1);
v___x_4923_ = lean_ptr_addr(v_k_4922_);
v___x_4924_ = lean_ptr_addr(v_a_4696_);
v___x_4925_ = lean_usize_dec_eq(v___x_4923_, v___x_4924_);
if (v___x_4925_ == 0)
{
v___y_4707_ = v___x_4925_;
goto v___jp_4706_;
}
else
{
size_t v___x_4926_; size_t v___x_4927_; uint8_t v___x_4928_; 
v___x_4926_ = lean_ptr_addr(v_decl_4921_);
v___x_4927_ = lean_ptr_addr(v_decl_4618_);
v___x_4928_ = lean_usize_dec_eq(v___x_4926_, v___x_4927_);
v___y_4707_ = v___x_4928_;
goto v___jp_4706_;
}
}
else
{
lean_object* v___x_4929_; lean_object* v___x_4930_; 
lean_dec(v_a_4696_);
lean_dec_ref(v_decl_4618_);
lean_dec_ref(v_code_4617_);
v___x_4929_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4930_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4929_);
v_k_4630_ = v___x_4930_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
}
case 12:
{
lean_object* v_args_4931_; lean_object* v___y_4933_; uint8_t v___y_4937_; 
lean_del_object(v___x_4698_);
v_args_4931_ = lean_ctor_get(v_value_4628_, 2);
if (lean_obj_tag(v_code_4617_) == 0)
{
lean_object* v_decl_4939_; lean_object* v_k_4940_; size_t v___x_4941_; size_t v___x_4942_; uint8_t v___x_4943_; 
v_decl_4939_ = lean_ctor_get(v_code_4617_, 0);
v_k_4940_ = lean_ctor_get(v_code_4617_, 1);
v___x_4941_ = lean_ptr_addr(v_k_4940_);
v___x_4942_ = lean_ptr_addr(v_a_4696_);
v___x_4943_ = lean_usize_dec_eq(v___x_4941_, v___x_4942_);
if (v___x_4943_ == 0)
{
v___y_4937_ = v___x_4943_;
goto v___jp_4936_;
}
else
{
size_t v___x_4944_; size_t v___x_4945_; uint8_t v___x_4946_; 
v___x_4944_ = lean_ptr_addr(v_decl_4939_);
v___x_4945_ = lean_ptr_addr(v_decl_4618_);
v___x_4946_ = lean_usize_dec_eq(v___x_4944_, v___x_4945_);
v___y_4937_ = v___x_4946_;
goto v___jp_4936_;
}
}
else
{
lean_object* v___x_4947_; lean_object* v___x_4948_; 
lean_dec(v_a_4696_);
lean_dec_ref(v_decl_4618_);
lean_dec_ref(v_code_4617_);
v___x_4947_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4948_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4947_);
v___y_4933_ = v___x_4948_;
goto v___jp_4932_;
}
v___jp_4932_:
{
lean_object* v___x_4934_; 
v___x_4934_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(v_args_4931_, v___y_4933_, v_a_4620_, v_a_4621_, v_a_4622_, v_a_4623_, v_a_4624_, v_a_4625_);
if (lean_obj_tag(v___x_4934_) == 0)
{
lean_object* v_a_4935_; 
v_a_4935_ = lean_ctor_get(v___x_4934_, 0);
lean_inc(v_a_4935_);
lean_dec_ref(v___x_4934_);
v_k_4630_ = v_a_4935_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
else
{
lean_dec_ref(v_value_4628_);
lean_dec(v_fvarId_4627_);
return v___x_4934_;
}
}
v___jp_4936_:
{
if (v___y_4937_ == 0)
{
lean_object* v___x_4938_; 
lean_dec_ref(v_code_4617_);
v___x_4938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4938_, 0, v_decl_4618_);
lean_ctor_set(v___x_4938_, 1, v_a_4696_);
v___y_4933_ = v___x_4938_;
goto v___jp_4932_;
}
else
{
lean_dec(v_a_4696_);
lean_dec_ref(v_decl_4618_);
v___y_4933_ = v_code_4617_;
goto v___jp_4932_;
}
}
}
case 13:
{
lean_del_object(v___x_4698_);
if (lean_obj_tag(v_code_4617_) == 0)
{
lean_object* v_decl_4949_; lean_object* v_k_4950_; size_t v___x_4951_; size_t v___x_4952_; uint8_t v___x_4953_; 
v_decl_4949_ = lean_ctor_get(v_code_4617_, 0);
v_k_4950_ = lean_ctor_get(v_code_4617_, 1);
v___x_4951_ = lean_ptr_addr(v_k_4950_);
v___x_4952_ = lean_ptr_addr(v_a_4696_);
v___x_4953_ = lean_usize_dec_eq(v___x_4951_, v___x_4952_);
if (v___x_4953_ == 0)
{
v___y_4710_ = v___x_4953_;
goto v___jp_4709_;
}
else
{
size_t v___x_4954_; size_t v___x_4955_; uint8_t v___x_4956_; 
v___x_4954_ = lean_ptr_addr(v_decl_4949_);
v___x_4955_ = lean_ptr_addr(v_decl_4618_);
v___x_4956_ = lean_usize_dec_eq(v___x_4954_, v___x_4955_);
v___y_4710_ = v___x_4956_;
goto v___jp_4709_;
}
}
else
{
lean_object* v___x_4957_; lean_object* v___x_4958_; 
lean_dec(v_a_4696_);
lean_dec_ref(v_decl_4618_);
lean_dec_ref(v_code_4617_);
v___x_4957_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4958_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4957_);
v_k_4630_ = v___x_4958_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
}
case 14:
{
lean_object* v_fvarId_4959_; lean_object* v___x_4960_; lean_object* v_a_4961_; uint8_t v___y_4963_; 
lean_del_object(v___x_4698_);
v_fvarId_4959_ = lean_ctor_get(v_value_4628_, 0);
lean_inc(v_fvarId_4959_);
v___x_4960_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_fvarId_4959_, v_a_4696_, v_a_4620_, v_a_4621_);
v_a_4961_ = lean_ctor_get(v___x_4960_, 0);
lean_inc(v_a_4961_);
lean_dec_ref(v___x_4960_);
if (lean_obj_tag(v_code_4617_) == 0)
{
lean_object* v_decl_4965_; lean_object* v_k_4966_; size_t v___x_4967_; size_t v___x_4968_; uint8_t v___x_4969_; 
v_decl_4965_ = lean_ctor_get(v_code_4617_, 0);
v_k_4966_ = lean_ctor_get(v_code_4617_, 1);
v___x_4967_ = lean_ptr_addr(v_k_4966_);
v___x_4968_ = lean_ptr_addr(v_a_4961_);
v___x_4969_ = lean_usize_dec_eq(v___x_4967_, v___x_4968_);
if (v___x_4969_ == 0)
{
v___y_4963_ = v___x_4969_;
goto v___jp_4962_;
}
else
{
size_t v___x_4970_; size_t v___x_4971_; uint8_t v___x_4972_; 
v___x_4970_ = lean_ptr_addr(v_decl_4965_);
v___x_4971_ = lean_ptr_addr(v_decl_4618_);
v___x_4972_ = lean_usize_dec_eq(v___x_4970_, v___x_4971_);
v___y_4963_ = v___x_4972_;
goto v___jp_4962_;
}
}
else
{
lean_object* v___x_4973_; lean_object* v___x_4974_; 
lean_dec(v_a_4961_);
lean_dec_ref(v_decl_4618_);
lean_dec_ref(v_code_4617_);
v___x_4973_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4974_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4973_);
v_k_4630_ = v___x_4974_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
v___jp_4962_:
{
if (v___y_4963_ == 0)
{
lean_object* v___x_4964_; 
lean_dec_ref(v_code_4617_);
v___x_4964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4964_, 0, v_decl_4618_);
lean_ctor_set(v___x_4964_, 1, v_a_4961_);
v_k_4630_ = v___x_4964_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
else
{
lean_dec(v_a_4961_);
lean_dec_ref(v_decl_4618_);
v_k_4630_ = v_code_4617_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
}
}
case 15:
{
lean_object* v___x_4975_; lean_object* v___x_4976_; 
lean_del_object(v___x_4698_);
lean_dec(v_a_4696_);
lean_dec_ref(v_decl_4618_);
lean_dec_ref(v_code_4617_);
v___x_4975_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__12, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__12_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__12);
v___x_4976_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2(v___x_4975_, v_a_4620_, v_a_4621_, v_a_4622_, v_a_4623_, v_a_4624_, v_a_4625_);
if (lean_obj_tag(v___x_4976_) == 0)
{
lean_object* v_a_4977_; 
v_a_4977_ = lean_ctor_get(v___x_4976_, 0);
lean_inc(v_a_4977_);
lean_dec_ref(v___x_4976_);
v_k_4630_ = v_a_4977_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
else
{
lean_dec_ref(v_value_4628_);
lean_dec(v_fvarId_4627_);
return v___x_4976_;
}
}
default: 
{
lean_object* v_args_4978_; lean_object* v___y_4980_; uint8_t v___y_4984_; 
lean_del_object(v___x_4698_);
v_args_4978_ = lean_ctor_get(v_value_4628_, 1);
if (lean_obj_tag(v_code_4617_) == 0)
{
lean_object* v_decl_4986_; lean_object* v_k_4987_; size_t v___x_4988_; size_t v___x_4989_; uint8_t v___x_4990_; 
v_decl_4986_ = lean_ctor_get(v_code_4617_, 0);
v_k_4987_ = lean_ctor_get(v_code_4617_, 1);
v___x_4988_ = lean_ptr_addr(v_k_4987_);
v___x_4989_ = lean_ptr_addr(v_a_4696_);
v___x_4990_ = lean_usize_dec_eq(v___x_4988_, v___x_4989_);
if (v___x_4990_ == 0)
{
v___y_4984_ = v___x_4990_;
goto v___jp_4983_;
}
else
{
size_t v___x_4991_; size_t v___x_4992_; uint8_t v___x_4993_; 
v___x_4991_ = lean_ptr_addr(v_decl_4986_);
v___x_4992_ = lean_ptr_addr(v_decl_4618_);
v___x_4993_ = lean_usize_dec_eq(v___x_4991_, v___x_4992_);
v___y_4984_ = v___x_4993_;
goto v___jp_4983_;
}
}
else
{
lean_object* v___x_4994_; lean_object* v___x_4995_; 
lean_dec(v_a_4696_);
lean_dec_ref(v_decl_4618_);
lean_dec_ref(v_code_4617_);
v___x_4994_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4995_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4994_);
v___y_4980_ = v___x_4995_;
goto v___jp_4979_;
}
v___jp_4979_:
{
lean_object* v___x_4981_; 
v___x_4981_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(v_args_4978_, v___y_4980_, v_a_4620_, v_a_4621_, v_a_4622_, v_a_4623_, v_a_4624_, v_a_4625_);
if (lean_obj_tag(v___x_4981_) == 0)
{
lean_object* v_a_4982_; 
v_a_4982_ = lean_ctor_get(v___x_4981_, 0);
lean_inc(v_a_4982_);
lean_dec_ref(v___x_4981_);
v_k_4630_ = v_a_4982_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
else
{
lean_dec(v_value_4628_);
lean_dec(v_fvarId_4627_);
return v___x_4981_;
}
}
v___jp_4983_:
{
if (v___y_4984_ == 0)
{
lean_object* v___x_4985_; 
lean_dec_ref(v_code_4617_);
v___x_4985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4985_, 0, v_decl_4618_);
lean_ctor_set(v___x_4985_, 1, v_a_4696_);
v___y_4980_ = v___x_4985_;
goto v___jp_4979_;
}
else
{
lean_dec(v_a_4696_);
lean_dec_ref(v_decl_4618_);
v___y_4980_ = v_code_4617_;
goto v___jp_4979_;
}
}
}
}
v___jp_4700_:
{
if (v___y_4701_ == 0)
{
lean_object* v___x_4702_; 
lean_dec_ref(v_code_4617_);
v___x_4702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4702_, 0, v_decl_4618_);
lean_ctor_set(v___x_4702_, 1, v_a_4696_);
v_k_4630_ = v___x_4702_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
else
{
lean_dec(v_a_4696_);
lean_dec_ref(v_decl_4618_);
v_k_4630_ = v_code_4617_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
}
v___jp_4703_:
{
if (v___y_4704_ == 0)
{
lean_object* v___x_4705_; 
lean_dec_ref(v_code_4617_);
v___x_4705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4705_, 0, v_decl_4618_);
lean_ctor_set(v___x_4705_, 1, v_a_4696_);
v_k_4630_ = v___x_4705_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
else
{
lean_dec(v_a_4696_);
lean_dec_ref(v_decl_4618_);
v_k_4630_ = v_code_4617_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
}
v___jp_4706_:
{
if (v___y_4707_ == 0)
{
lean_object* v___x_4708_; 
lean_dec_ref(v_code_4617_);
v___x_4708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4708_, 0, v_decl_4618_);
lean_ctor_set(v___x_4708_, 1, v_a_4696_);
v_k_4630_ = v___x_4708_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
else
{
lean_dec(v_a_4696_);
lean_dec_ref(v_decl_4618_);
v_k_4630_ = v_code_4617_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
}
v___jp_4709_:
{
if (v___y_4710_ == 0)
{
lean_object* v___x_4711_; 
lean_dec_ref(v_code_4617_);
v___x_4711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4711_, 0, v_decl_4618_);
lean_ctor_set(v___x_4711_, 1, v_a_4696_);
v_k_4630_ = v___x_4711_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
else
{
lean_dec(v_a_4696_);
lean_dec_ref(v_decl_4618_);
v_k_4630_ = v_code_4617_;
v___y_4631_ = v_a_4620_;
v___y_4632_ = v_a_4621_;
v___y_4633_ = v_a_4622_;
v___y_4634_ = v_a_4623_;
v___y_4635_ = v_a_4624_;
v___y_4636_ = v_a_4625_;
goto v___jp_4629_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___boxed(lean_object* v_code_4997_, lean_object* v_decl_4998_, lean_object* v_k_4999_, lean_object* v_a_5000_, lean_object* v_a_5001_, lean_object* v_a_5002_, lean_object* v_a_5003_, lean_object* v_a_5004_, lean_object* v_a_5005_, lean_object* v_a_5006_){
_start:
{
lean_object* v_res_5007_; 
v_res_5007_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc(v_code_4997_, v_decl_4998_, v_k_4999_, v_a_5000_, v_a_5001_, v_a_5002_, v_a_5003_, v_a_5004_, v_a_5005_);
lean_dec(v_a_5005_);
lean_dec_ref(v_a_5004_);
lean_dec(v_a_5003_);
lean_dec_ref(v_a_5002_);
lean_dec(v_a_5001_);
lean_dec_ref(v_a_5000_);
return v_res_5007_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5___closed__0(void){
_start:
{
uint8_t v___x_5008_; lean_object* v___x_5009_; 
v___x_5008_ = 1;
v___x_5009_ = l_Lean_Compiler_LCNF_instInhabitedFunDecl_default__1(v___x_5008_);
return v___x_5009_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5(lean_object* v_msg_5010_){
_start:
{
lean_object* v___x_5011_; lean_object* v___x_5012_; 
v___x_5011_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5___closed__0);
v___x_5012_ = lean_panic_fn_borrowed(v___x_5011_, v_msg_5010_);
return v___x_5012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___lam__0(lean_object* v_params_5013_, uint8_t v___x_5014_, lean_object* v_decl_5015_, lean_object* v_type_5016_, lean_object* v_value_5017_, lean_object* v___y_5018_, lean_object* v___y_5019_, lean_object* v___y_5020_, lean_object* v___y_5021_, lean_object* v___y_5022_, lean_object* v___y_5023_){
_start:
{
lean_object* v___x_5025_; 
v___x_5025_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(v_params_5013_, v_value_5017_, v___y_5018_, v___y_5019_, v___y_5020_, v___y_5021_, v___y_5022_, v___y_5023_);
if (lean_obj_tag(v___x_5025_) == 0)
{
lean_object* v_a_5026_; lean_object* v___x_5027_; 
v_a_5026_ = lean_ctor_get(v___x_5025_, 0);
lean_inc(v_a_5026_);
lean_dec_ref(v___x_5025_);
v___x_5027_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_5014_, v_decl_5015_, v_type_5016_, v_params_5013_, v_a_5026_, v___y_5021_);
return v___x_5027_;
}
else
{
lean_object* v_a_5028_; lean_object* v___x_5030_; uint8_t v_isShared_5031_; uint8_t v_isSharedCheck_5035_; 
lean_dec_ref(v_type_5016_);
lean_dec_ref(v_decl_5015_);
lean_dec_ref(v_params_5013_);
v_a_5028_ = lean_ctor_get(v___x_5025_, 0);
v_isSharedCheck_5035_ = !lean_is_exclusive(v___x_5025_);
if (v_isSharedCheck_5035_ == 0)
{
v___x_5030_ = v___x_5025_;
v_isShared_5031_ = v_isSharedCheck_5035_;
goto v_resetjp_5029_;
}
else
{
lean_inc(v_a_5028_);
lean_dec(v___x_5025_);
v___x_5030_ = lean_box(0);
v_isShared_5031_ = v_isSharedCheck_5035_;
goto v_resetjp_5029_;
}
v_resetjp_5029_:
{
lean_object* v___x_5033_; 
if (v_isShared_5031_ == 0)
{
v___x_5033_ = v___x_5030_;
goto v_reusejp_5032_;
}
else
{
lean_object* v_reuseFailAlloc_5034_; 
v_reuseFailAlloc_5034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5034_, 0, v_a_5028_);
v___x_5033_ = v_reuseFailAlloc_5034_;
goto v_reusejp_5032_;
}
v_reusejp_5032_:
{
return v___x_5033_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___lam__0___boxed(lean_object* v_params_5036_, lean_object* v___x_5037_, lean_object* v_decl_5038_, lean_object* v_type_5039_, lean_object* v_value_5040_, lean_object* v___y_5041_, lean_object* v___y_5042_, lean_object* v___y_5043_, lean_object* v___y_5044_, lean_object* v___y_5045_, lean_object* v___y_5046_, lean_object* v___y_5047_){
_start:
{
uint8_t v___x_20394__boxed_5048_; lean_object* v_res_5049_; 
v___x_20394__boxed_5048_ = lean_unbox(v___x_5037_);
v_res_5049_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___lam__0(v_params_5036_, v___x_20394__boxed_5048_, v_decl_5038_, v_type_5039_, v_value_5040_, v___y_5041_, v___y_5042_, v___y_5043_, v___y_5044_, v___y_5045_, v___y_5046_);
lean_dec(v___y_5046_);
lean_dec_ref(v___y_5045_);
lean_dec(v___y_5044_);
lean_dec_ref(v___y_5043_);
lean_dec(v___y_5042_);
lean_dec_ref(v___y_5041_);
return v_res_5049_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10(lean_object* v_fvarId_5050_, lean_object* v_derivedValMap_5051_, lean_object* v_liveVars_5052_){
_start:
{
lean_object* v___x_5053_; 
v___x_5053_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1___redArg(v_derivedValMap_5051_, v_fvarId_5050_);
if (lean_obj_tag(v___x_5053_) == 1)
{
lean_object* v_val_5054_; lean_object* v_children_5055_; lean_object* v_buckets_5056_; lean_object* v___x_5057_; lean_object* v___x_5058_; uint8_t v___x_5059_; 
v_val_5054_ = lean_ctor_get(v___x_5053_, 0);
lean_inc(v_val_5054_);
lean_dec_ref(v___x_5053_);
v_children_5055_ = lean_ctor_get(v_val_5054_, 1);
lean_inc_ref(v_children_5055_);
lean_dec(v_val_5054_);
v_buckets_5056_ = lean_ctor_get(v_children_5055_, 1);
lean_inc_ref(v_buckets_5056_);
lean_dec_ref(v_children_5055_);
v___x_5057_ = lean_unsigned_to_nat(0u);
v___x_5058_ = lean_array_get_size(v_buckets_5056_);
v___x_5059_ = lean_nat_dec_lt(v___x_5057_, v___x_5058_);
if (v___x_5059_ == 0)
{
lean_dec_ref(v_buckets_5056_);
return v_liveVars_5052_;
}
else
{
uint8_t v___x_5060_; 
v___x_5060_ = lean_nat_dec_le(v___x_5058_, v___x_5058_);
if (v___x_5060_ == 0)
{
if (v___x_5059_ == 0)
{
lean_dec_ref(v_buckets_5056_);
return v_liveVars_5052_;
}
else
{
size_t v___x_5061_; size_t v___x_5062_; lean_object* v___x_5063_; 
v___x_5061_ = ((size_t)0ULL);
v___x_5062_ = lean_usize_of_nat(v___x_5058_);
v___x_5063_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10_spec__14(v_derivedValMap_5051_, v_buckets_5056_, v___x_5061_, v___x_5062_, v_liveVars_5052_);
lean_dec_ref(v_buckets_5056_);
return v___x_5063_;
}
}
else
{
size_t v___x_5064_; size_t v___x_5065_; lean_object* v___x_5066_; 
v___x_5064_ = ((size_t)0ULL);
v___x_5065_ = lean_usize_of_nat(v___x_5058_);
v___x_5066_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10_spec__14(v_derivedValMap_5051_, v_buckets_5056_, v___x_5064_, v___x_5065_, v_liveVars_5052_);
lean_dec_ref(v_buckets_5056_);
return v___x_5066_;
}
}
}
else
{
lean_dec(v___x_5053_);
return v_liveVars_5052_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10_spec__13(lean_object* v_derivedValMap_5067_, lean_object* v_x_5068_, lean_object* v_x_5069_){
_start:
{
if (lean_obj_tag(v_x_5069_) == 0)
{
return v_x_5068_;
}
else
{
lean_object* v_key_5070_; lean_object* v_tail_5071_; lean_object* v_cinfo_5086_; lean_object* v_parents_5087_; lean_object* v___x_5088_; lean_object* v___x_5089_; uint8_t v___x_5090_; 
v_key_5070_ = lean_ctor_get(v_x_5069_, 0);
lean_inc(v_key_5070_);
v_tail_5071_ = lean_ctor_get(v_x_5069_, 2);
lean_inc(v_tail_5071_);
lean_dec_ref(v_x_5069_);
v_cinfo_5086_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__3(v_derivedValMap_5067_, v_key_5070_);
v_parents_5087_ = lean_ctor_get(v_cinfo_5086_, 0);
lean_inc_ref(v_parents_5087_);
lean_dec_ref(v_cinfo_5086_);
v___x_5088_ = lean_unsigned_to_nat(0u);
v___x_5089_ = lean_array_get_size(v_parents_5087_);
v___x_5090_ = lean_nat_dec_lt(v___x_5088_, v___x_5089_);
if (v___x_5090_ == 0)
{
lean_dec_ref(v_parents_5087_);
goto v___jp_5072_;
}
else
{
if (v___x_5090_ == 0)
{
lean_dec_ref(v_parents_5087_);
goto v___jp_5072_;
}
else
{
size_t v___x_5091_; size_t v___x_5092_; uint8_t v___x_5093_; 
v___x_5091_ = ((size_t)0ULL);
v___x_5092_ = lean_usize_of_nat(v___x_5089_);
v___x_5093_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2_spec__4(v_x_5068_, v_parents_5087_, v___x_5091_, v___x_5092_);
lean_dec_ref(v_parents_5087_);
if (v___x_5093_ == 0)
{
goto v___jp_5072_;
}
else
{
lean_object* v___x_5094_; 
v___x_5094_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10(v_key_5070_, v_derivedValMap_5067_, v_x_5068_);
lean_dec(v_key_5070_);
v_x_5068_ = v___x_5094_;
v_x_5069_ = v_tail_5071_;
goto _start;
}
}
}
v___jp_5072_:
{
lean_object* v_vars_5073_; lean_object* v_borrows_5074_; lean_object* v___x_5076_; uint8_t v_isShared_5077_; uint8_t v_isSharedCheck_5085_; 
v_vars_5073_ = lean_ctor_get(v_x_5068_, 0);
v_borrows_5074_ = lean_ctor_get(v_x_5068_, 1);
v_isSharedCheck_5085_ = !lean_is_exclusive(v_x_5068_);
if (v_isSharedCheck_5085_ == 0)
{
v___x_5076_ = v_x_5068_;
v_isShared_5077_ = v_isSharedCheck_5085_;
goto v_resetjp_5075_;
}
else
{
lean_inc(v_borrows_5074_);
lean_inc(v_vars_5073_);
lean_dec(v_x_5068_);
v___x_5076_ = lean_box(0);
v_isShared_5077_ = v_isSharedCheck_5085_;
goto v_resetjp_5075_;
}
v_resetjp_5075_:
{
lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5081_; 
v___x_5078_ = lean_box(0);
lean_inc(v_key_5070_);
v___x_5079_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(v_borrows_5074_, v_key_5070_, v___x_5078_);
if (v_isShared_5077_ == 0)
{
lean_ctor_set(v___x_5076_, 1, v___x_5079_);
v___x_5081_ = v___x_5076_;
goto v_reusejp_5080_;
}
else
{
lean_object* v_reuseFailAlloc_5084_; 
v_reuseFailAlloc_5084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5084_, 0, v_vars_5073_);
lean_ctor_set(v_reuseFailAlloc_5084_, 1, v___x_5079_);
v___x_5081_ = v_reuseFailAlloc_5084_;
goto v_reusejp_5080_;
}
v_reusejp_5080_:
{
lean_object* v___x_5082_; 
v___x_5082_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10(v_key_5070_, v_derivedValMap_5067_, v___x_5081_);
lean_dec(v_key_5070_);
v_x_5068_ = v___x_5082_;
v_x_5069_ = v_tail_5071_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10_spec__14(lean_object* v_derivedValMap_5096_, lean_object* v_as_5097_, size_t v_i_5098_, size_t v_stop_5099_, lean_object* v_b_5100_){
_start:
{
uint8_t v___x_5101_; 
v___x_5101_ = lean_usize_dec_eq(v_i_5098_, v_stop_5099_);
if (v___x_5101_ == 0)
{
lean_object* v___x_5102_; lean_object* v___x_5103_; size_t v___x_5104_; size_t v___x_5105_; 
v___x_5102_ = lean_array_uget_borrowed(v_as_5097_, v_i_5098_);
lean_inc(v___x_5102_);
v___x_5103_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10_spec__13(v_derivedValMap_5096_, v_b_5100_, v___x_5102_);
v___x_5104_ = ((size_t)1ULL);
v___x_5105_ = lean_usize_add(v_i_5098_, v___x_5104_);
v_i_5098_ = v___x_5105_;
v_b_5100_ = v___x_5103_;
goto _start;
}
else
{
return v_b_5100_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10_spec__14___boxed(lean_object* v_derivedValMap_5107_, lean_object* v_as_5108_, lean_object* v_i_5109_, lean_object* v_stop_5110_, lean_object* v_b_5111_){
_start:
{
size_t v_i_boxed_5112_; size_t v_stop_boxed_5113_; lean_object* v_res_5114_; 
v_i_boxed_5112_ = lean_unbox_usize(v_i_5109_);
lean_dec(v_i_5109_);
v_stop_boxed_5113_ = lean_unbox_usize(v_stop_5110_);
lean_dec(v_stop_5110_);
v_res_5114_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10_spec__14(v_derivedValMap_5107_, v_as_5108_, v_i_boxed_5112_, v_stop_boxed_5113_, v_b_5111_);
lean_dec_ref(v_as_5108_);
lean_dec_ref(v_derivedValMap_5107_);
return v_res_5114_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10___boxed(lean_object* v_fvarId_5115_, lean_object* v_derivedValMap_5116_, lean_object* v_liveVars_5117_){
_start:
{
lean_object* v_res_5118_; 
v_res_5118_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10(v_fvarId_5115_, v_derivedValMap_5116_, v_liveVars_5117_);
lean_dec_ref(v_derivedValMap_5116_);
lean_dec(v_fvarId_5115_);
return v_res_5118_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10_spec__13___boxed(lean_object* v_derivedValMap_5119_, lean_object* v_x_5120_, lean_object* v_x_5121_){
_start:
{
lean_object* v_res_5122_; 
v_res_5122_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10_spec__13(v_derivedValMap_5119_, v_x_5120_, v_x_5121_);
lean_dec_ref(v_derivedValMap_5119_);
return v_res_5122_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__11(lean_object* v___x_5123_, lean_object* v_x_5124_, lean_object* v_x_5125_){
_start:
{
if (lean_obj_tag(v_x_5125_) == 0)
{
return v_x_5124_;
}
else
{
lean_object* v_key_5126_; lean_object* v_tail_5127_; lean_object* v_vars_5128_; lean_object* v_borrows_5129_; lean_object* v___x_5131_; uint8_t v_isShared_5132_; uint8_t v_isSharedCheck_5140_; 
v_key_5126_ = lean_ctor_get(v_x_5125_, 0);
lean_inc(v_key_5126_);
v_tail_5127_ = lean_ctor_get(v_x_5125_, 2);
lean_inc(v_tail_5127_);
lean_dec_ref(v_x_5125_);
v_vars_5128_ = lean_ctor_get(v_x_5124_, 0);
v_borrows_5129_ = lean_ctor_get(v_x_5124_, 1);
v_isSharedCheck_5140_ = !lean_is_exclusive(v_x_5124_);
if (v_isSharedCheck_5140_ == 0)
{
v___x_5131_ = v_x_5124_;
v_isShared_5132_ = v_isSharedCheck_5140_;
goto v_resetjp_5130_;
}
else
{
lean_inc(v_borrows_5129_);
lean_inc(v_vars_5128_);
lean_dec(v_x_5124_);
v___x_5131_ = lean_box(0);
v_isShared_5132_ = v_isSharedCheck_5140_;
goto v_resetjp_5130_;
}
v_resetjp_5130_:
{
lean_object* v___x_5133_; lean_object* v___x_5134_; lean_object* v___x_5136_; 
v___x_5133_ = lean_box(0);
lean_inc(v_key_5126_);
v___x_5134_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(v_borrows_5129_, v_key_5126_, v___x_5133_);
if (v_isShared_5132_ == 0)
{
lean_ctor_set(v___x_5131_, 1, v___x_5134_);
v___x_5136_ = v___x_5131_;
goto v_reusejp_5135_;
}
else
{
lean_object* v_reuseFailAlloc_5139_; 
v_reuseFailAlloc_5139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5139_, 0, v_vars_5128_);
lean_ctor_set(v_reuseFailAlloc_5139_, 1, v___x_5134_);
v___x_5136_ = v_reuseFailAlloc_5139_;
goto v_reusejp_5135_;
}
v_reusejp_5135_:
{
lean_object* v___x_5137_; 
v___x_5137_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__10(v_key_5126_, v___x_5123_, v___x_5136_);
lean_dec(v_key_5126_);
v_x_5124_ = v___x_5137_;
v_x_5125_ = v_tail_5127_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__11___boxed(lean_object* v___x_5141_, lean_object* v_x_5142_, lean_object* v_x_5143_){
_start:
{
lean_object* v_res_5144_; 
v_res_5144_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__11(v___x_5141_, v_x_5142_, v_x_5143_);
lean_dec_ref(v___x_5141_);
return v_res_5144_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__12(lean_object* v___x_5145_, lean_object* v_as_5146_, size_t v_i_5147_, size_t v_stop_5148_, lean_object* v_b_5149_){
_start:
{
uint8_t v___x_5150_; 
v___x_5150_ = lean_usize_dec_eq(v_i_5147_, v_stop_5148_);
if (v___x_5150_ == 0)
{
lean_object* v___x_5151_; lean_object* v___x_5152_; size_t v___x_5153_; size_t v___x_5154_; 
v___x_5151_ = lean_array_uget_borrowed(v_as_5146_, v_i_5147_);
lean_inc(v___x_5151_);
v___x_5152_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__11(v___x_5145_, v_b_5149_, v___x_5151_);
v___x_5153_ = ((size_t)1ULL);
v___x_5154_ = lean_usize_add(v_i_5147_, v___x_5153_);
v_i_5147_ = v___x_5154_;
v_b_5149_ = v___x_5152_;
goto _start;
}
else
{
return v_b_5149_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__12___boxed(lean_object* v___x_5156_, lean_object* v_as_5157_, lean_object* v_i_5158_, lean_object* v_stop_5159_, lean_object* v_b_5160_){
_start:
{
size_t v_i_boxed_5161_; size_t v_stop_boxed_5162_; lean_object* v_res_5163_; 
v_i_boxed_5161_ = lean_unbox_usize(v_i_5158_);
lean_dec(v_i_5158_);
v_stop_boxed_5162_ = lean_unbox_usize(v_stop_5159_);
lean_dec(v_stop_5159_);
v_res_5163_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__12(v___x_5156_, v_as_5157_, v_i_boxed_5161_, v_stop_boxed_5162_, v_b_5160_);
lean_dec_ref(v_as_5157_);
lean_dec_ref(v___x_5156_);
return v_res_5163_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3(lean_object* v_as_5164_, size_t v_i_5165_, size_t v_stop_5166_, lean_object* v_b_5167_){
_start:
{
uint8_t v___x_5168_; 
v___x_5168_ = lean_usize_dec_eq(v_i_5165_, v_stop_5166_);
if (v___x_5168_ == 0)
{
lean_object* v_borrowedValues_5169_; lean_object* v_derivedValMap_5170_; lean_object* v_varMap_5171_; lean_object* v_jpLiveVarMap_5172_; lean_object* v_idx_5173_; lean_object* v___x_5175_; uint8_t v_isShared_5176_; uint8_t v_isSharedCheck_5192_; 
v_borrowedValues_5169_ = lean_ctor_get(v_b_5167_, 0);
v_derivedValMap_5170_ = lean_ctor_get(v_b_5167_, 1);
v_varMap_5171_ = lean_ctor_get(v_b_5167_, 2);
v_jpLiveVarMap_5172_ = lean_ctor_get(v_b_5167_, 3);
v_idx_5173_ = lean_ctor_get(v_b_5167_, 4);
v_isSharedCheck_5192_ = !lean_is_exclusive(v_b_5167_);
if (v_isSharedCheck_5192_ == 0)
{
v___x_5175_ = v_b_5167_;
v_isShared_5176_ = v_isSharedCheck_5192_;
goto v_resetjp_5174_;
}
else
{
lean_inc(v_idx_5173_);
lean_inc(v_jpLiveVarMap_5172_);
lean_inc(v_varMap_5171_);
lean_inc(v_derivedValMap_5170_);
lean_inc(v_borrowedValues_5169_);
lean_dec(v_b_5167_);
v___x_5175_ = lean_box(0);
v_isShared_5176_ = v_isSharedCheck_5192_;
goto v_resetjp_5174_;
}
v_resetjp_5174_:
{
lean_object* v___x_5177_; lean_object* v_fvarId_5178_; lean_object* v_type_5179_; uint8_t v___x_5180_; uint8_t v___x_5181_; lean_object* v___x_5182_; lean_object* v_varMap_5183_; lean_object* v___x_5184_; lean_object* v___x_5185_; lean_object* v___x_5187_; 
v___x_5177_ = lean_array_uget_borrowed(v_as_5164_, v_i_5165_);
v_fvarId_5178_ = lean_ctor_get(v___x_5177_, 0);
v_type_5179_ = lean_ctor_get(v___x_5177_, 2);
v___x_5180_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_5179_);
v___x_5181_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v_type_5179_);
lean_inc(v_idx_5173_);
v___x_5182_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_5182_, 0, v_idx_5173_);
lean_ctor_set_uint8(v___x_5182_, sizeof(void*)*1, v___x_5180_);
lean_ctor_set_uint8(v___x_5182_, sizeof(void*)*1 + 1, v___x_5181_);
lean_ctor_set_uint8(v___x_5182_, sizeof(void*)*1 + 2, v___x_5168_);
lean_inc(v_fvarId_5178_);
v_varMap_5183_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_5178_, v___x_5182_, v_varMap_5171_);
v___x_5184_ = lean_unsigned_to_nat(1u);
v___x_5185_ = lean_nat_add(v_idx_5173_, v___x_5184_);
lean_dec(v_idx_5173_);
if (v_isShared_5176_ == 0)
{
lean_ctor_set(v___x_5175_, 4, v___x_5185_);
lean_ctor_set(v___x_5175_, 2, v_varMap_5183_);
v___x_5187_ = v___x_5175_;
goto v_reusejp_5186_;
}
else
{
lean_object* v_reuseFailAlloc_5191_; 
v_reuseFailAlloc_5191_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5191_, 0, v_borrowedValues_5169_);
lean_ctor_set(v_reuseFailAlloc_5191_, 1, v_derivedValMap_5170_);
lean_ctor_set(v_reuseFailAlloc_5191_, 2, v_varMap_5183_);
lean_ctor_set(v_reuseFailAlloc_5191_, 3, v_jpLiveVarMap_5172_);
lean_ctor_set(v_reuseFailAlloc_5191_, 4, v___x_5185_);
v___x_5187_ = v_reuseFailAlloc_5191_;
goto v_reusejp_5186_;
}
v_reusejp_5186_:
{
size_t v___x_5188_; size_t v___x_5189_; 
v___x_5188_ = ((size_t)1ULL);
v___x_5189_ = lean_usize_add(v_i_5165_, v___x_5188_);
v_i_5165_ = v___x_5189_;
v_b_5167_ = v___x_5187_;
goto _start;
}
}
}
else
{
return v_b_5167_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3___boxed(lean_object* v_as_5193_, lean_object* v_i_5194_, lean_object* v_stop_5195_, lean_object* v_b_5196_){
_start:
{
size_t v_i_boxed_5197_; size_t v_stop_boxed_5198_; lean_object* v_res_5199_; 
v_i_boxed_5197_ = lean_unbox_usize(v_i_5194_);
lean_dec(v_i_5194_);
v_stop_boxed_5198_ = lean_unbox_usize(v_stop_5195_);
lean_dec(v_stop_5195_);
v_res_5199_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3(v_as_5193_, v_i_boxed_5197_, v_stop_boxed_5198_, v_b_5196_);
lean_dec_ref(v_as_5193_);
return v_res_5199_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6___redArg(lean_object* v_t_5200_, lean_object* v_k_5201_){
_start:
{
if (lean_obj_tag(v_t_5200_) == 0)
{
lean_object* v_k_5202_; lean_object* v_v_5203_; lean_object* v_l_5204_; lean_object* v_r_5205_; uint8_t v___x_5206_; 
v_k_5202_ = lean_ctor_get(v_t_5200_, 1);
v_v_5203_ = lean_ctor_get(v_t_5200_, 2);
v_l_5204_ = lean_ctor_get(v_t_5200_, 3);
v_r_5205_ = lean_ctor_get(v_t_5200_, 4);
v___x_5206_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_5201_, v_k_5202_);
switch(v___x_5206_)
{
case 0:
{
v_t_5200_ = v_l_5204_;
goto _start;
}
case 1:
{
lean_object* v___x_5208_; 
lean_inc(v_v_5203_);
v___x_5208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5208_, 0, v_v_5203_);
return v___x_5208_;
}
default: 
{
v_t_5200_ = v_r_5205_;
goto _start;
}
}
}
else
{
lean_object* v___x_5210_; 
v___x_5210_ = lean_box(0);
return v___x_5210_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6___redArg___boxed(lean_object* v_t_5211_, lean_object* v_k_5212_){
_start:
{
lean_object* v_res_5213_; 
v_res_5213_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6___redArg(v_t_5211_, v_k_5212_);
lean_dec(v_k_5212_);
lean_dec(v_t_5211_);
return v_res_5213_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8(lean_object* v_discr_5214_, size_t v_sz_5215_, size_t v_i_5216_, lean_object* v_bs_5217_, lean_object* v___y_5218_, lean_object* v___y_5219_, lean_object* v___y_5220_, lean_object* v___y_5221_, lean_object* v___y_5222_, lean_object* v___y_5223_){
_start:
{
uint8_t v___x_5225_; 
v___x_5225_ = lean_usize_dec_lt(v_i_5216_, v_sz_5215_);
if (v___x_5225_ == 0)
{
lean_object* v___x_5226_; 
lean_dec(v_discr_5214_);
v___x_5226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5226_, 0, v_bs_5217_);
return v___x_5226_;
}
else
{
lean_object* v_v_5227_; lean_object* v_fst_5228_; lean_object* v_snd_5229_; lean_object* v___x_5230_; lean_object* v_bs_x27_5231_; lean_object* v_a_5233_; 
v_v_5227_ = lean_array_uget_borrowed(v_bs_5217_, v_i_5216_);
v_fst_5228_ = lean_ctor_get(v_v_5227_, 0);
lean_inc(v_fst_5228_);
v_snd_5229_ = lean_ctor_get(v_v_5227_, 1);
lean_inc(v_snd_5229_);
v___x_5230_ = lean_unsigned_to_nat(0u);
v_bs_x27_5231_ = lean_array_uset(v_bs_5217_, v_i_5216_, v___x_5230_);
if (lean_obj_tag(v_fst_5228_) == 1)
{
lean_object* v_info_5238_; lean_object* v_code_5239_; lean_object* v_borrowedValues_5240_; lean_object* v_derivedValMap_5241_; lean_object* v_varMap_5242_; lean_object* v_jpLiveVarMap_5243_; lean_object* v_idx_5244_; lean_object* v___y_5246_; lean_object* v___x_5261_; 
v_info_5238_ = lean_ctor_get(v_fst_5228_, 0);
v_code_5239_ = lean_ctor_get(v_fst_5228_, 1);
v_borrowedValues_5240_ = lean_ctor_get(v___y_5218_, 0);
v_derivedValMap_5241_ = lean_ctor_get(v___y_5218_, 1);
v_varMap_5242_ = lean_ctor_get(v___y_5218_, 2);
v_jpLiveVarMap_5243_ = lean_ctor_get(v___y_5218_, 3);
v_idx_5244_ = lean_ctor_get(v___y_5218_, 4);
v___x_5261_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6___redArg(v_varMap_5242_, v_discr_5214_);
if (lean_obj_tag(v___x_5261_) == 0)
{
lean_inc(v_varMap_5242_);
v___y_5246_ = v_varMap_5242_;
goto v___jp_5245_;
}
else
{
lean_object* v_val_5262_; uint8_t v_persistent_5263_; lean_object* v___x_5265_; uint8_t v_isShared_5266_; uint8_t v_isSharedCheck_5276_; 
v_val_5262_ = lean_ctor_get(v___x_5261_, 0);
lean_inc(v_val_5262_);
lean_dec_ref(v___x_5261_);
v_persistent_5263_ = lean_ctor_get_uint8(v_val_5262_, sizeof(void*)*1 + 2);
v_isSharedCheck_5276_ = !lean_is_exclusive(v_val_5262_);
if (v_isSharedCheck_5276_ == 0)
{
lean_object* v_unused_5277_; 
v_unused_5277_ = lean_ctor_get(v_val_5262_, 0);
lean_dec(v_unused_5277_);
v___x_5265_ = v_val_5262_;
v_isShared_5266_ = v_isSharedCheck_5276_;
goto v_resetjp_5264_;
}
else
{
lean_dec(v_val_5262_);
v___x_5265_ = lean_box(0);
v_isShared_5266_ = v_isSharedCheck_5276_;
goto v_resetjp_5264_;
}
v_resetjp_5264_:
{
lean_object* v___x_5267_; uint8_t v___x_5268_; uint8_t v___x_5269_; lean_object* v___x_5270_; lean_object* v___x_5271_; lean_object* v___x_5273_; 
v___x_5267_ = l_Lean_Compiler_LCNF_CtorInfo_type(v_info_5238_);
v___x_5268_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v___x_5267_);
v___x_5269_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v___x_5267_);
lean_dec_ref(v___x_5267_);
v___x_5270_ = lean_unsigned_to_nat(1u);
v___x_5271_ = lean_nat_add(v_idx_5244_, v___x_5270_);
if (v_isShared_5266_ == 0)
{
lean_ctor_set(v___x_5265_, 0, v___x_5271_);
v___x_5273_ = v___x_5265_;
goto v_reusejp_5272_;
}
else
{
lean_object* v_reuseFailAlloc_5275_; 
v_reuseFailAlloc_5275_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v_reuseFailAlloc_5275_, 0, v___x_5271_);
lean_ctor_set_uint8(v_reuseFailAlloc_5275_, sizeof(void*)*1 + 2, v_persistent_5263_);
v___x_5273_ = v_reuseFailAlloc_5275_;
goto v_reusejp_5272_;
}
v_reusejp_5272_:
{
lean_object* v___x_5274_; 
lean_ctor_set_uint8(v___x_5273_, sizeof(void*)*1, v___x_5268_);
lean_ctor_set_uint8(v___x_5273_, sizeof(void*)*1 + 1, v___x_5269_);
lean_inc(v_varMap_5242_);
lean_inc(v_discr_5214_);
v___x_5274_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_discr_5214_, v___x_5273_, v_varMap_5242_);
v___y_5246_ = v___x_5274_;
goto v___jp_5245_;
}
}
}
v___jp_5245_:
{
lean_object* v___x_5247_; lean_object* v___x_5248_; lean_object* v___x_5249_; lean_object* v___x_5250_; 
v___x_5247_ = lean_unsigned_to_nat(1u);
v___x_5248_ = lean_nat_add(v_idx_5244_, v___x_5247_);
lean_inc(v_jpLiveVarMap_5243_);
lean_inc_ref(v_derivedValMap_5241_);
lean_inc_ref(v_borrowedValues_5240_);
v___x_5249_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5249_, 0, v_borrowedValues_5240_);
lean_ctor_set(v___x_5249_, 1, v_derivedValMap_5241_);
lean_ctor_set(v___x_5249_, 2, v___y_5246_);
lean_ctor_set(v___x_5249_, 3, v_jpLiveVarMap_5243_);
lean_ctor_set(v___x_5249_, 4, v___x_5248_);
lean_inc_ref(v_code_5239_);
v___x_5250_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt(v_snd_5229_, v_code_5239_, v___x_5249_, v___y_5219_, v___y_5220_, v___y_5221_, v___y_5222_, v___y_5223_);
lean_dec_ref(v___x_5249_);
lean_dec(v_snd_5229_);
if (lean_obj_tag(v___x_5250_) == 0)
{
lean_object* v_a_5251_; lean_object* v___x_5252_; 
v_a_5251_ = lean_ctor_get(v___x_5250_, 0);
lean_inc(v_a_5251_);
lean_dec_ref(v___x_5250_);
v___x_5252_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_fst_5228_, v_a_5251_);
v_a_5233_ = v___x_5252_;
goto v___jp_5232_;
}
else
{
lean_object* v_a_5253_; lean_object* v___x_5255_; uint8_t v_isShared_5256_; uint8_t v_isSharedCheck_5260_; 
lean_dec_ref(v_fst_5228_);
lean_dec_ref(v_bs_x27_5231_);
lean_dec(v_discr_5214_);
v_a_5253_ = lean_ctor_get(v___x_5250_, 0);
v_isSharedCheck_5260_ = !lean_is_exclusive(v___x_5250_);
if (v_isSharedCheck_5260_ == 0)
{
v___x_5255_ = v___x_5250_;
v_isShared_5256_ = v_isSharedCheck_5260_;
goto v_resetjp_5254_;
}
else
{
lean_inc(v_a_5253_);
lean_dec(v___x_5250_);
v___x_5255_ = lean_box(0);
v_isShared_5256_ = v_isSharedCheck_5260_;
goto v_resetjp_5254_;
}
v_resetjp_5254_:
{
lean_object* v___x_5258_; 
if (v_isShared_5256_ == 0)
{
v___x_5258_ = v___x_5255_;
goto v_reusejp_5257_;
}
else
{
lean_object* v_reuseFailAlloc_5259_; 
v_reuseFailAlloc_5259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5259_, 0, v_a_5253_);
v___x_5258_ = v_reuseFailAlloc_5259_;
goto v_reusejp_5257_;
}
v_reusejp_5257_:
{
return v___x_5258_;
}
}
}
}
}
else
{
lean_object* v_code_5278_; lean_object* v___x_5279_; 
v_code_5278_ = lean_ctor_get(v_fst_5228_, 0);
lean_inc_ref(v_code_5278_);
v___x_5279_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt(v_snd_5229_, v_code_5278_, v___y_5218_, v___y_5219_, v___y_5220_, v___y_5221_, v___y_5222_, v___y_5223_);
lean_dec(v_snd_5229_);
if (lean_obj_tag(v___x_5279_) == 0)
{
lean_object* v_a_5280_; lean_object* v___x_5281_; 
v_a_5280_ = lean_ctor_get(v___x_5279_, 0);
lean_inc(v_a_5280_);
lean_dec_ref(v___x_5279_);
v___x_5281_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_fst_5228_, v_a_5280_);
v_a_5233_ = v___x_5281_;
goto v___jp_5232_;
}
else
{
lean_object* v_a_5282_; lean_object* v___x_5284_; uint8_t v_isShared_5285_; uint8_t v_isSharedCheck_5289_; 
lean_dec_ref(v_fst_5228_);
lean_dec_ref(v_bs_x27_5231_);
lean_dec(v_discr_5214_);
v_a_5282_ = lean_ctor_get(v___x_5279_, 0);
v_isSharedCheck_5289_ = !lean_is_exclusive(v___x_5279_);
if (v_isSharedCheck_5289_ == 0)
{
v___x_5284_ = v___x_5279_;
v_isShared_5285_ = v_isSharedCheck_5289_;
goto v_resetjp_5283_;
}
else
{
lean_inc(v_a_5282_);
lean_dec(v___x_5279_);
v___x_5284_ = lean_box(0);
v_isShared_5285_ = v_isSharedCheck_5289_;
goto v_resetjp_5283_;
}
v_resetjp_5283_:
{
lean_object* v___x_5287_; 
if (v_isShared_5285_ == 0)
{
v___x_5287_ = v___x_5284_;
goto v_reusejp_5286_;
}
else
{
lean_object* v_reuseFailAlloc_5288_; 
v_reuseFailAlloc_5288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5288_, 0, v_a_5282_);
v___x_5287_ = v_reuseFailAlloc_5288_;
goto v_reusejp_5286_;
}
v_reusejp_5286_:
{
return v___x_5287_;
}
}
}
}
v___jp_5232_:
{
size_t v___x_5234_; size_t v___x_5235_; lean_object* v___x_5236_; 
v___x_5234_ = ((size_t)1ULL);
v___x_5235_ = lean_usize_add(v_i_5216_, v___x_5234_);
v___x_5236_ = lean_array_uset(v_bs_x27_5231_, v_i_5216_, v_a_5233_);
v_i_5216_ = v___x_5235_;
v_bs_5217_ = v___x_5236_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8___boxed(lean_object* v_discr_5290_, lean_object* v_sz_5291_, lean_object* v_i_5292_, lean_object* v_bs_5293_, lean_object* v___y_5294_, lean_object* v___y_5295_, lean_object* v___y_5296_, lean_object* v___y_5297_, lean_object* v___y_5298_, lean_object* v___y_5299_, lean_object* v___y_5300_){
_start:
{
size_t v_sz_boxed_5301_; size_t v_i_boxed_5302_; lean_object* v_res_5303_; 
v_sz_boxed_5301_ = lean_unbox_usize(v_sz_5291_);
lean_dec(v_sz_5291_);
v_i_boxed_5302_ = lean_unbox_usize(v_i_5292_);
lean_dec(v_i_5292_);
v_res_5303_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8(v_discr_5290_, v_sz_boxed_5301_, v_i_boxed_5302_, v_bs_5293_, v___y_5294_, v___y_5295_, v___y_5296_, v___y_5297_, v___y_5298_, v___y_5299_);
lean_dec(v___y_5299_);
lean_dec_ref(v___y_5298_);
lean_dec(v___y_5297_);
lean_dec_ref(v___y_5296_);
lean_dec(v___y_5295_);
lean_dec_ref(v___y_5294_);
return v_res_5303_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0_spec__0(lean_object* v_a_5304_, lean_object* v_a_5305_){
_start:
{
if (lean_obj_tag(v_a_5304_) == 0)
{
lean_object* v___x_5306_; 
v___x_5306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5306_, 0, v_a_5305_);
return v___x_5306_;
}
else
{
lean_object* v_key_5307_; lean_object* v_value_5308_; lean_object* v_tail_5309_; lean_object* v_r_5310_; 
v_key_5307_ = lean_ctor_get(v_a_5304_, 0);
lean_inc(v_key_5307_);
v_value_5308_ = lean_ctor_get(v_a_5304_, 1);
lean_inc(v_value_5308_);
v_tail_5309_ = lean_ctor_get(v_a_5304_, 2);
lean_inc(v_tail_5309_);
lean_dec_ref(v_a_5304_);
v_r_5310_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2___redArg(v_a_5305_, v_key_5307_, v_value_5308_);
v_a_5304_ = v_tail_5309_;
v_a_5305_ = v_r_5310_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0_spec__1(lean_object* v_as_5312_, size_t v_sz_5313_, size_t v_i_5314_, lean_object* v_b_5315_){
_start:
{
uint8_t v___x_5316_; 
v___x_5316_ = lean_usize_dec_lt(v_i_5314_, v_sz_5313_);
if (v___x_5316_ == 0)
{
return v_b_5315_;
}
else
{
lean_object* v_a_5317_; lean_object* v___x_5318_; 
v_a_5317_ = lean_array_uget_borrowed(v_as_5312_, v_i_5314_);
lean_inc(v_a_5317_);
v___x_5318_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0_spec__0(v_a_5317_, v_b_5315_);
if (lean_obj_tag(v___x_5318_) == 0)
{
lean_object* v_a_5319_; 
v_a_5319_ = lean_ctor_get(v___x_5318_, 0);
lean_inc(v_a_5319_);
lean_dec_ref(v___x_5318_);
return v_a_5319_;
}
else
{
lean_object* v_a_5320_; size_t v___x_5321_; size_t v___x_5322_; 
v_a_5320_ = lean_ctor_get(v___x_5318_, 0);
lean_inc(v_a_5320_);
lean_dec_ref(v___x_5318_);
v___x_5321_ = ((size_t)1ULL);
v___x_5322_ = lean_usize_add(v_i_5314_, v___x_5321_);
v_i_5314_ = v___x_5322_;
v_b_5315_ = v_a_5320_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0_spec__1___boxed(lean_object* v_as_5324_, lean_object* v_sz_5325_, lean_object* v_i_5326_, lean_object* v_b_5327_){
_start:
{
size_t v_sz_boxed_5328_; size_t v_i_boxed_5329_; lean_object* v_res_5330_; 
v_sz_boxed_5328_ = lean_unbox_usize(v_sz_5325_);
lean_dec(v_sz_5325_);
v_i_boxed_5329_ = lean_unbox_usize(v_i_5326_);
lean_dec(v_i_5326_);
v_res_5330_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0_spec__1(v_as_5324_, v_sz_boxed_5328_, v_i_boxed_5329_, v_b_5327_);
lean_dec_ref(v_as_5324_);
return v_res_5330_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0(lean_object* v_m_5331_, lean_object* v_l_5332_){
_start:
{
lean_object* v_buckets_5333_; size_t v_sz_5334_; size_t v___x_5335_; lean_object* v___x_5336_; 
v_buckets_5333_ = lean_ctor_get(v_l_5332_, 1);
v_sz_5334_ = lean_array_size(v_buckets_5333_);
v___x_5335_ = ((size_t)0ULL);
v___x_5336_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0_spec__1(v_buckets_5333_, v_sz_5334_, v___x_5335_, v_m_5331_);
return v___x_5336_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0___boxed(lean_object* v_m_5337_, lean_object* v_l_5338_){
_start:
{
lean_object* v_res_5339_; 
v_res_5339_ = l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0(v_m_5337_, v_l_5338_);
lean_dec_ref(v_l_5338_);
return v_res_5339_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1(lean_object* v_a_5340_, lean_object* v_a_5341_){
_start:
{
if (lean_obj_tag(v_a_5340_) == 0)
{
lean_object* v___x_5342_; 
v___x_5342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5342_, 0, v_a_5341_);
return v___x_5342_;
}
else
{
lean_object* v_key_5343_; lean_object* v_value_5344_; lean_object* v_tail_5345_; lean_object* v_r_5346_; 
v_key_5343_ = lean_ctor_get(v_a_5340_, 0);
lean_inc(v_key_5343_);
v_value_5344_ = lean_ctor_get(v_a_5340_, 1);
lean_inc(v_value_5344_);
v_tail_5345_ = lean_ctor_get(v_a_5340_, 2);
lean_inc(v_tail_5345_);
lean_dec_ref(v_a_5340_);
v_r_5346_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(v_a_5341_, v_key_5343_, v_value_5344_);
v_a_5340_ = v_tail_5345_;
v_a_5341_ = v_r_5346_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2(lean_object* v_as_5348_, size_t v_sz_5349_, size_t v_i_5350_, lean_object* v_b_5351_){
_start:
{
uint8_t v___x_5352_; 
v___x_5352_ = lean_usize_dec_lt(v_i_5350_, v_sz_5349_);
if (v___x_5352_ == 0)
{
return v_b_5351_;
}
else
{
lean_object* v_a_5353_; lean_object* v___x_5354_; 
v_a_5353_ = lean_array_uget_borrowed(v_as_5348_, v_i_5350_);
lean_inc(v_a_5353_);
v___x_5354_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1(v_a_5353_, v_b_5351_);
if (lean_obj_tag(v___x_5354_) == 0)
{
lean_object* v_a_5355_; 
v_a_5355_ = lean_ctor_get(v___x_5354_, 0);
lean_inc(v_a_5355_);
lean_dec_ref(v___x_5354_);
return v_a_5355_;
}
else
{
lean_object* v_a_5356_; size_t v___x_5357_; size_t v___x_5358_; 
v_a_5356_ = lean_ctor_get(v___x_5354_, 0);
lean_inc(v_a_5356_);
lean_dec_ref(v___x_5354_);
v___x_5357_ = ((size_t)1ULL);
v___x_5358_ = lean_usize_add(v_i_5350_, v___x_5357_);
v_i_5350_ = v___x_5358_;
v_b_5351_ = v_a_5356_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2___boxed(lean_object* v_as_5360_, lean_object* v_sz_5361_, lean_object* v_i_5362_, lean_object* v_b_5363_){
_start:
{
size_t v_sz_boxed_5364_; size_t v_i_boxed_5365_; lean_object* v_res_5366_; 
v_sz_boxed_5364_ = lean_unbox_usize(v_sz_5361_);
lean_dec(v_sz_5361_);
v_i_boxed_5365_ = lean_unbox_usize(v_i_5362_);
lean_dec(v_i_5362_);
v_res_5366_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2(v_as_5360_, v_sz_boxed_5364_, v_i_boxed_5365_, v_b_5363_);
lean_dec_ref(v_as_5360_);
return v_res_5366_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__9(lean_object* v_as_5367_, size_t v_i_5368_, size_t v_stop_5369_, lean_object* v_b_5370_){
_start:
{
lean_object* v___y_5372_; lean_object* v___y_5373_; uint8_t v___x_5378_; 
v___x_5378_ = lean_usize_dec_eq(v_i_5368_, v_stop_5369_);
if (v___x_5378_ == 0)
{
lean_object* v___x_5379_; lean_object* v_snd_5380_; lean_object* v_vars_5381_; lean_object* v_borrows_5382_; lean_object* v_vars_5383_; lean_object* v_borrows_5384_; lean_object* v___y_5386_; lean_object* v_size_5395_; lean_object* v_buckets_5396_; lean_object* v_size_5397_; uint8_t v___x_5398_; 
v___x_5379_ = lean_array_uget_borrowed(v_as_5367_, v_i_5368_);
v_snd_5380_ = lean_ctor_get(v___x_5379_, 1);
v_vars_5381_ = lean_ctor_get(v_b_5370_, 0);
lean_inc_ref(v_vars_5381_);
v_borrows_5382_ = lean_ctor_get(v_b_5370_, 1);
lean_inc_ref(v_borrows_5382_);
lean_dec_ref(v_b_5370_);
v_vars_5383_ = lean_ctor_get(v_snd_5380_, 0);
v_borrows_5384_ = lean_ctor_get(v_snd_5380_, 1);
v_size_5395_ = lean_ctor_get(v_vars_5381_, 0);
v_buckets_5396_ = lean_ctor_get(v_vars_5381_, 1);
v_size_5397_ = lean_ctor_get(v_vars_5383_, 0);
v___x_5398_ = lean_nat_dec_le(v_size_5395_, v_size_5397_);
if (v___x_5398_ == 0)
{
lean_object* v___x_5399_; 
v___x_5399_ = l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0(v_vars_5381_, v_vars_5383_);
v___y_5386_ = v___x_5399_;
goto v___jp_5385_;
}
else
{
size_t v_sz_5400_; size_t v___x_5401_; lean_object* v___x_5402_; 
lean_inc_ref(v_buckets_5396_);
lean_dec_ref(v_vars_5381_);
v_sz_5400_ = lean_array_size(v_buckets_5396_);
v___x_5401_ = ((size_t)0ULL);
lean_inc_ref(v_vars_5383_);
v___x_5402_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2(v_buckets_5396_, v_sz_5400_, v___x_5401_, v_vars_5383_);
lean_dec_ref(v_buckets_5396_);
v___y_5386_ = v___x_5402_;
goto v___jp_5385_;
}
v___jp_5385_:
{
lean_object* v_size_5387_; lean_object* v_buckets_5388_; lean_object* v_size_5389_; uint8_t v___x_5390_; 
v_size_5387_ = lean_ctor_get(v_borrows_5382_, 0);
v_buckets_5388_ = lean_ctor_get(v_borrows_5382_, 1);
v_size_5389_ = lean_ctor_get(v_borrows_5384_, 0);
v___x_5390_ = lean_nat_dec_le(v_size_5387_, v_size_5389_);
if (v___x_5390_ == 0)
{
lean_object* v___x_5391_; 
v___x_5391_ = l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0(v_borrows_5382_, v_borrows_5384_);
v___y_5372_ = v___y_5386_;
v___y_5373_ = v___x_5391_;
goto v___jp_5371_;
}
else
{
size_t v_sz_5392_; size_t v___x_5393_; lean_object* v___x_5394_; 
lean_inc_ref(v_buckets_5388_);
lean_dec_ref(v_borrows_5382_);
v_sz_5392_ = lean_array_size(v_buckets_5388_);
v___x_5393_ = ((size_t)0ULL);
lean_inc_ref(v_borrows_5384_);
v___x_5394_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2(v_buckets_5388_, v_sz_5392_, v___x_5393_, v_borrows_5384_);
lean_dec_ref(v_buckets_5388_);
v___y_5372_ = v___y_5386_;
v___y_5373_ = v___x_5394_;
goto v___jp_5371_;
}
}
}
else
{
return v_b_5370_;
}
v___jp_5371_:
{
lean_object* v___x_5374_; size_t v___x_5375_; size_t v___x_5376_; 
v___x_5374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5374_, 0, v___y_5372_);
lean_ctor_set(v___x_5374_, 1, v___y_5373_);
v___x_5375_ = ((size_t)1ULL);
v___x_5376_ = lean_usize_add(v_i_5368_, v___x_5375_);
v_i_5368_ = v___x_5376_;
v_b_5370_ = v___x_5374_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__9___boxed(lean_object* v_as_5403_, lean_object* v_i_5404_, lean_object* v_stop_5405_, lean_object* v_b_5406_){
_start:
{
size_t v_i_boxed_5407_; size_t v_stop_boxed_5408_; lean_object* v_res_5409_; 
v_i_boxed_5407_ = lean_unbox_usize(v_i_5404_);
lean_dec(v_i_5404_);
v_stop_boxed_5408_ = lean_unbox_usize(v_stop_5405_);
lean_dec(v_stop_5405_);
v_res_5409_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__9(v_as_5403_, v_i_boxed_5407_, v_stop_boxed_5408_, v_b_5406_);
lean_dec_ref(v_as_5403_);
return v_res_5409_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4_spec__6(lean_object* v_msg_5410_){
_start:
{
lean_object* v___x_5411_; lean_object* v___x_5412_; 
v___x_5411_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default;
v___x_5412_ = lean_panic_fn_borrowed(v___x_5411_, v_msg_5410_);
return v___x_5412_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4(lean_object* v_t_5413_, lean_object* v_k_5414_){
_start:
{
if (lean_obj_tag(v_t_5413_) == 0)
{
lean_object* v_k_5415_; lean_object* v_v_5416_; lean_object* v_l_5417_; lean_object* v_r_5418_; uint8_t v___x_5419_; 
v_k_5415_ = lean_ctor_get(v_t_5413_, 1);
v_v_5416_ = lean_ctor_get(v_t_5413_, 2);
v_l_5417_ = lean_ctor_get(v_t_5413_, 3);
v_r_5418_ = lean_ctor_get(v_t_5413_, 4);
v___x_5419_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_5414_, v_k_5415_);
switch(v___x_5419_)
{
case 0:
{
v_t_5413_ = v_l_5417_;
goto _start;
}
case 1:
{
lean_inc(v_v_5416_);
return v_v_5416_;
}
default: 
{
v_t_5413_ = v_r_5418_;
goto _start;
}
}
}
else
{
lean_object* v___x_5422_; lean_object* v___x_5423_; 
v___x_5422_ = lean_obj_once(&l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__3, &l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__3_once, _init_l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___closed__3);
v___x_5423_ = l_panic___at___00Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4_spec__6(v___x_5422_);
return v___x_5423_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4___boxed(lean_object* v_t_5424_, lean_object* v_k_5425_){
_start:
{
lean_object* v_res_5426_; 
v_res_5426_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4(v_t_5424_, v_k_5425_);
lean_dec(v_k_5425_);
lean_dec(v_t_5424_);
return v_res_5426_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__1(void){
_start:
{
lean_object* v___x_5428_; lean_object* v___x_5429_; lean_object* v___x_5430_; lean_object* v___x_5431_; lean_object* v___x_5432_; lean_object* v___x_5433_; 
v___x_5428_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6));
v___x_5429_ = lean_unsigned_to_nat(59u);
v___x_5430_ = lean_unsigned_to_nat(654u);
v___x_5431_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__0));
v___x_5432_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__4));
v___x_5433_ = l_mkPanicMessageWithDecl(v___x_5432_, v___x_5431_, v___x_5430_, v___x_5429_, v___x_5428_);
return v___x_5433_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(lean_object* v_code_5434_, lean_object* v_a_5435_, lean_object* v_a_5436_, lean_object* v_a_5437_, lean_object* v_a_5438_, lean_object* v_a_5439_, lean_object* v_a_5440_){
_start:
{
lean_object* v___y_5443_; lean_object* v___y_5444_; uint8_t v___y_5445_; lean_object* v___y_5450_; 
switch(lean_obj_tag(v_code_5434_))
{
case 0:
{
lean_object* v_decl_5454_; lean_object* v_k_5455_; lean_object* v_fvarId_5456_; lean_object* v_type_5457_; lean_object* v_value_5458_; lean_object* v_borrowedValues_5459_; lean_object* v_derivedValMap_5460_; lean_object* v_varMap_5461_; lean_object* v_jpLiveVarMap_5462_; lean_object* v_idx_5463_; uint8_t v___x_5464_; uint8_t v___x_5465_; uint8_t v___x_5466_; lean_object* v_varInfo_5467_; lean_object* v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5470_; lean_object* v___x_5471_; lean_object* v___x_5472_; 
v_decl_5454_ = lean_ctor_get(v_code_5434_, 0);
lean_inc_ref(v_decl_5454_);
v_k_5455_ = lean_ctor_get(v_code_5434_, 1);
v_fvarId_5456_ = lean_ctor_get(v_decl_5454_, 0);
v_type_5457_ = lean_ctor_get(v_decl_5454_, 2);
v_value_5458_ = lean_ctor_get(v_decl_5454_, 3);
v_borrowedValues_5459_ = lean_ctor_get(v_a_5435_, 0);
v_derivedValMap_5460_ = lean_ctor_get(v_a_5435_, 1);
v_varMap_5461_ = lean_ctor_get(v_a_5435_, 2);
v_jpLiveVarMap_5462_ = lean_ctor_get(v_a_5435_, 3);
v_idx_5463_ = lean_ctor_get(v_a_5435_, 4);
v___x_5464_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_5457_);
v___x_5465_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v_type_5457_);
v___x_5466_ = l_Lean_Compiler_LCNF_LetValue_isPersistent(v_value_5458_);
lean_inc(v_idx_5463_);
v_varInfo_5467_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v_varInfo_5467_, 0, v_idx_5463_);
lean_ctor_set_uint8(v_varInfo_5467_, sizeof(void*)*1, v___x_5464_);
lean_ctor_set_uint8(v_varInfo_5467_, sizeof(void*)*1 + 1, v___x_5465_);
lean_ctor_set_uint8(v_varInfo_5467_, sizeof(void*)*1 + 2, v___x_5466_);
lean_inc(v_varMap_5461_);
lean_inc(v_fvarId_5456_);
v___x_5468_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_5456_, v_varInfo_5467_, v_varMap_5461_);
v___x_5469_ = lean_unsigned_to_nat(1u);
v___x_5470_ = lean_nat_add(v_idx_5463_, v___x_5469_);
lean_inc(v_jpLiveVarMap_5462_);
lean_inc_ref(v_derivedValMap_5460_);
lean_inc_ref(v_borrowedValues_5459_);
v___x_5471_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5471_, 0, v_borrowedValues_5459_);
lean_ctor_set(v___x_5471_, 1, v_derivedValMap_5460_);
lean_ctor_set(v___x_5471_, 2, v___x_5468_);
lean_ctor_set(v___x_5471_, 3, v_jpLiveVarMap_5462_);
lean_ctor_set(v___x_5471_, 4, v___x_5470_);
lean_inc_ref(v_k_5455_);
v___x_5472_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_k_5455_, v___x_5471_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
if (lean_obj_tag(v___x_5472_) == 0)
{
lean_object* v_a_5473_; lean_object* v___x_5474_; 
v_a_5473_ = lean_ctor_get(v___x_5472_, 0);
lean_inc(v_a_5473_);
lean_dec_ref(v___x_5472_);
v___x_5474_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc(v_code_5434_, v_decl_5454_, v_a_5473_, v___x_5471_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
lean_dec_ref(v___x_5471_);
return v___x_5474_;
}
else
{
lean_dec_ref(v___x_5471_);
lean_dec_ref(v_code_5434_);
lean_dec_ref(v_decl_5454_);
return v___x_5472_;
}
}
case 2:
{
lean_object* v_decl_5475_; lean_object* v_k_5476_; lean_object* v_fst_5478_; lean_object* v_snd_5479_; lean_object* v_params_5496_; lean_object* v_type_5497_; lean_object* v_value_5498_; uint8_t v___x_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; uint8_t v___x_5502_; 
v_decl_5475_ = lean_ctor_get(v_code_5434_, 0);
v_k_5476_ = lean_ctor_get(v_code_5434_, 1);
v_params_5496_ = lean_ctor_get(v_decl_5475_, 2);
v_type_5497_ = lean_ctor_get(v_decl_5475_, 3);
v_value_5498_ = lean_ctor_get(v_decl_5475_, 4);
v___x_5499_ = 1;
v___x_5500_ = lean_unsigned_to_nat(0u);
v___x_5501_ = lean_array_get_size(v_params_5496_);
v___x_5502_ = lean_nat_dec_lt(v___x_5500_, v___x_5501_);
if (v___x_5502_ == 0)
{
lean_object* v___x_5503_; lean_object* v___x_5504_; lean_object* v___x_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; 
v___x_5503_ = lean_st_ref_get(v_a_5436_);
v___x_5504_ = lean_st_ref_take(v_a_5436_);
lean_dec(v___x_5504_);
v___x_5505_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5506_ = lean_st_ref_set(v_a_5436_, v___x_5505_);
lean_inc_ref(v_value_5498_);
v___x_5507_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_value_5498_, v_a_5435_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
if (lean_obj_tag(v___x_5507_) == 0)
{
lean_object* v_a_5508_; lean_object* v___x_5509_; 
v_a_5508_ = lean_ctor_get(v___x_5507_, 0);
lean_inc(v_a_5508_);
lean_dec_ref(v___x_5507_);
v___x_5509_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(v_params_5496_, v_a_5508_, v_a_5435_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
if (lean_obj_tag(v___x_5509_) == 0)
{
lean_object* v_a_5510_; lean_object* v___x_5511_; 
v_a_5510_ = lean_ctor_get(v___x_5509_, 0);
lean_inc(v_a_5510_);
lean_dec_ref(v___x_5509_);
lean_inc_ref(v_params_5496_);
lean_inc_ref(v_type_5497_);
lean_inc_ref(v_decl_5475_);
v___x_5511_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_5499_, v_decl_5475_, v_type_5497_, v_params_5496_, v_a_5510_, v_a_5438_);
if (lean_obj_tag(v___x_5511_) == 0)
{
lean_object* v_a_5512_; lean_object* v___x_5513_; lean_object* v___x_5514_; lean_object* v___x_5515_; 
v_a_5512_ = lean_ctor_get(v___x_5511_, 0);
lean_inc(v_a_5512_);
lean_dec_ref(v___x_5511_);
v___x_5513_ = lean_st_ref_get(v_a_5436_);
v___x_5514_ = lean_st_ref_take(v_a_5436_);
lean_dec(v___x_5514_);
v___x_5515_ = lean_st_ref_set(v_a_5436_, v___x_5503_);
v_fst_5478_ = v_a_5512_;
v_snd_5479_ = v___x_5513_;
goto v___jp_5477_;
}
else
{
lean_object* v_a_5516_; lean_object* v___x_5518_; uint8_t v_isShared_5519_; uint8_t v_isSharedCheck_5523_; 
lean_dec(v___x_5503_);
lean_dec_ref(v_code_5434_);
v_a_5516_ = lean_ctor_get(v___x_5511_, 0);
v_isSharedCheck_5523_ = !lean_is_exclusive(v___x_5511_);
if (v_isSharedCheck_5523_ == 0)
{
v___x_5518_ = v___x_5511_;
v_isShared_5519_ = v_isSharedCheck_5523_;
goto v_resetjp_5517_;
}
else
{
lean_inc(v_a_5516_);
lean_dec(v___x_5511_);
v___x_5518_ = lean_box(0);
v_isShared_5519_ = v_isSharedCheck_5523_;
goto v_resetjp_5517_;
}
v_resetjp_5517_:
{
lean_object* v___x_5521_; 
if (v_isShared_5519_ == 0)
{
v___x_5521_ = v___x_5518_;
goto v_reusejp_5520_;
}
else
{
lean_object* v_reuseFailAlloc_5522_; 
v_reuseFailAlloc_5522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5522_, 0, v_a_5516_);
v___x_5521_ = v_reuseFailAlloc_5522_;
goto v_reusejp_5520_;
}
v_reusejp_5520_:
{
return v___x_5521_;
}
}
}
}
else
{
lean_dec(v___x_5503_);
lean_dec_ref(v_code_5434_);
return v___x_5509_;
}
}
else
{
lean_dec(v___x_5503_);
lean_dec_ref(v_code_5434_);
return v___x_5507_;
}
}
else
{
uint8_t v___x_5524_; 
v___x_5524_ = lean_nat_dec_le(v___x_5501_, v___x_5501_);
if (v___x_5524_ == 0)
{
if (v___x_5502_ == 0)
{
lean_object* v___x_5525_; lean_object* v___x_5526_; lean_object* v___x_5527_; lean_object* v___x_5528_; lean_object* v___x_5529_; 
v___x_5525_ = lean_st_ref_get(v_a_5436_);
v___x_5526_ = lean_st_ref_take(v_a_5436_);
lean_dec(v___x_5526_);
v___x_5527_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5528_ = lean_st_ref_set(v_a_5436_, v___x_5527_);
lean_inc_ref(v_value_5498_);
v___x_5529_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_value_5498_, v_a_5435_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
if (lean_obj_tag(v___x_5529_) == 0)
{
lean_object* v_a_5530_; lean_object* v___x_5531_; 
v_a_5530_ = lean_ctor_get(v___x_5529_, 0);
lean_inc(v_a_5530_);
lean_dec_ref(v___x_5529_);
lean_inc_ref(v_type_5497_);
lean_inc_ref(v_decl_5475_);
lean_inc_ref(v_params_5496_);
v___x_5531_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___lam__0(v_params_5496_, v___x_5499_, v_decl_5475_, v_type_5497_, v_a_5530_, v_a_5435_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
if (lean_obj_tag(v___x_5531_) == 0)
{
lean_object* v_a_5532_; lean_object* v___x_5533_; lean_object* v___x_5534_; lean_object* v___x_5535_; 
v_a_5532_ = lean_ctor_get(v___x_5531_, 0);
lean_inc(v_a_5532_);
lean_dec_ref(v___x_5531_);
v___x_5533_ = lean_st_ref_get(v_a_5436_);
v___x_5534_ = lean_st_ref_take(v_a_5436_);
lean_dec(v___x_5534_);
v___x_5535_ = lean_st_ref_set(v_a_5436_, v___x_5525_);
v_fst_5478_ = v_a_5532_;
v_snd_5479_ = v___x_5533_;
goto v___jp_5477_;
}
else
{
lean_object* v_a_5536_; lean_object* v___x_5538_; uint8_t v_isShared_5539_; uint8_t v_isSharedCheck_5543_; 
lean_dec(v___x_5525_);
lean_dec_ref(v_code_5434_);
v_a_5536_ = lean_ctor_get(v___x_5531_, 0);
v_isSharedCheck_5543_ = !lean_is_exclusive(v___x_5531_);
if (v_isSharedCheck_5543_ == 0)
{
v___x_5538_ = v___x_5531_;
v_isShared_5539_ = v_isSharedCheck_5543_;
goto v_resetjp_5537_;
}
else
{
lean_inc(v_a_5536_);
lean_dec(v___x_5531_);
v___x_5538_ = lean_box(0);
v_isShared_5539_ = v_isSharedCheck_5543_;
goto v_resetjp_5537_;
}
v_resetjp_5537_:
{
lean_object* v___x_5541_; 
if (v_isShared_5539_ == 0)
{
v___x_5541_ = v___x_5538_;
goto v_reusejp_5540_;
}
else
{
lean_object* v_reuseFailAlloc_5542_; 
v_reuseFailAlloc_5542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5542_, 0, v_a_5536_);
v___x_5541_ = v_reuseFailAlloc_5542_;
goto v_reusejp_5540_;
}
v_reusejp_5540_:
{
return v___x_5541_;
}
}
}
}
else
{
lean_dec(v___x_5525_);
lean_dec_ref(v_code_5434_);
return v___x_5529_;
}
}
else
{
lean_object* v___x_5544_; lean_object* v___x_5545_; lean_object* v___x_5546_; lean_object* v___x_5547_; size_t v___x_5548_; size_t v___x_5549_; lean_object* v___x_5550_; lean_object* v___x_5551_; 
v___x_5544_ = lean_st_ref_get(v_a_5436_);
v___x_5545_ = lean_st_ref_take(v_a_5436_);
lean_dec(v___x_5545_);
v___x_5546_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5547_ = lean_st_ref_set(v_a_5436_, v___x_5546_);
v___x_5548_ = ((size_t)0ULL);
v___x_5549_ = lean_usize_of_nat(v___x_5501_);
lean_inc_ref(v_a_5435_);
v___x_5550_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3(v_params_5496_, v___x_5548_, v___x_5549_, v_a_5435_);
lean_inc_ref(v_value_5498_);
v___x_5551_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_value_5498_, v___x_5550_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
if (lean_obj_tag(v___x_5551_) == 0)
{
lean_object* v_a_5552_; lean_object* v___x_5553_; 
v_a_5552_ = lean_ctor_get(v___x_5551_, 0);
lean_inc(v_a_5552_);
lean_dec_ref(v___x_5551_);
lean_inc_ref(v_type_5497_);
lean_inc_ref(v_decl_5475_);
lean_inc_ref(v_params_5496_);
v___x_5553_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___lam__0(v_params_5496_, v___x_5499_, v_decl_5475_, v_type_5497_, v_a_5552_, v___x_5550_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
lean_dec_ref(v___x_5550_);
if (lean_obj_tag(v___x_5553_) == 0)
{
lean_object* v_a_5554_; lean_object* v___x_5555_; lean_object* v___x_5556_; lean_object* v___x_5557_; 
v_a_5554_ = lean_ctor_get(v___x_5553_, 0);
lean_inc(v_a_5554_);
lean_dec_ref(v___x_5553_);
v___x_5555_ = lean_st_ref_get(v_a_5436_);
v___x_5556_ = lean_st_ref_take(v_a_5436_);
lean_dec(v___x_5556_);
v___x_5557_ = lean_st_ref_set(v_a_5436_, v___x_5544_);
v_fst_5478_ = v_a_5554_;
v_snd_5479_ = v___x_5555_;
goto v___jp_5477_;
}
else
{
lean_object* v_a_5558_; lean_object* v___x_5560_; uint8_t v_isShared_5561_; uint8_t v_isSharedCheck_5565_; 
lean_dec(v___x_5544_);
lean_dec_ref(v_code_5434_);
v_a_5558_ = lean_ctor_get(v___x_5553_, 0);
v_isSharedCheck_5565_ = !lean_is_exclusive(v___x_5553_);
if (v_isSharedCheck_5565_ == 0)
{
v___x_5560_ = v___x_5553_;
v_isShared_5561_ = v_isSharedCheck_5565_;
goto v_resetjp_5559_;
}
else
{
lean_inc(v_a_5558_);
lean_dec(v___x_5553_);
v___x_5560_ = lean_box(0);
v_isShared_5561_ = v_isSharedCheck_5565_;
goto v_resetjp_5559_;
}
v_resetjp_5559_:
{
lean_object* v___x_5563_; 
if (v_isShared_5561_ == 0)
{
v___x_5563_ = v___x_5560_;
goto v_reusejp_5562_;
}
else
{
lean_object* v_reuseFailAlloc_5564_; 
v_reuseFailAlloc_5564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5564_, 0, v_a_5558_);
v___x_5563_ = v_reuseFailAlloc_5564_;
goto v_reusejp_5562_;
}
v_reusejp_5562_:
{
return v___x_5563_;
}
}
}
}
else
{
lean_dec_ref(v___x_5550_);
lean_dec(v___x_5544_);
lean_dec_ref(v_code_5434_);
return v___x_5551_;
}
}
}
else
{
lean_object* v___x_5566_; lean_object* v___x_5567_; lean_object* v___x_5568_; lean_object* v___x_5569_; size_t v___x_5570_; size_t v___x_5571_; lean_object* v___x_5572_; lean_object* v___x_5573_; 
v___x_5566_ = lean_st_ref_get(v_a_5436_);
v___x_5567_ = lean_st_ref_take(v_a_5436_);
lean_dec(v___x_5567_);
v___x_5568_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5569_ = lean_st_ref_set(v_a_5436_, v___x_5568_);
v___x_5570_ = ((size_t)0ULL);
v___x_5571_ = lean_usize_of_nat(v___x_5501_);
lean_inc_ref(v_a_5435_);
v___x_5572_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3(v_params_5496_, v___x_5570_, v___x_5571_, v_a_5435_);
lean_inc_ref(v_value_5498_);
v___x_5573_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_value_5498_, v___x_5572_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
if (lean_obj_tag(v___x_5573_) == 0)
{
lean_object* v_a_5574_; lean_object* v___x_5575_; 
v_a_5574_ = lean_ctor_get(v___x_5573_, 0);
lean_inc(v_a_5574_);
lean_dec_ref(v___x_5573_);
lean_inc_ref(v_type_5497_);
lean_inc_ref(v_decl_5475_);
lean_inc_ref(v_params_5496_);
v___x_5575_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___lam__0(v_params_5496_, v___x_5499_, v_decl_5475_, v_type_5497_, v_a_5574_, v___x_5572_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
lean_dec_ref(v___x_5572_);
if (lean_obj_tag(v___x_5575_) == 0)
{
lean_object* v_a_5576_; lean_object* v___x_5577_; lean_object* v___x_5578_; lean_object* v___x_5579_; 
v_a_5576_ = lean_ctor_get(v___x_5575_, 0);
lean_inc(v_a_5576_);
lean_dec_ref(v___x_5575_);
v___x_5577_ = lean_st_ref_get(v_a_5436_);
v___x_5578_ = lean_st_ref_take(v_a_5436_);
lean_dec(v___x_5578_);
v___x_5579_ = lean_st_ref_set(v_a_5436_, v___x_5566_);
v_fst_5478_ = v_a_5576_;
v_snd_5479_ = v___x_5577_;
goto v___jp_5477_;
}
else
{
lean_object* v_a_5580_; lean_object* v___x_5582_; uint8_t v_isShared_5583_; uint8_t v_isSharedCheck_5587_; 
lean_dec(v___x_5566_);
lean_dec_ref(v_code_5434_);
v_a_5580_ = lean_ctor_get(v___x_5575_, 0);
v_isSharedCheck_5587_ = !lean_is_exclusive(v___x_5575_);
if (v_isSharedCheck_5587_ == 0)
{
v___x_5582_ = v___x_5575_;
v_isShared_5583_ = v_isSharedCheck_5587_;
goto v_resetjp_5581_;
}
else
{
lean_inc(v_a_5580_);
lean_dec(v___x_5575_);
v___x_5582_ = lean_box(0);
v_isShared_5583_ = v_isSharedCheck_5587_;
goto v_resetjp_5581_;
}
v_resetjp_5581_:
{
lean_object* v___x_5585_; 
if (v_isShared_5583_ == 0)
{
v___x_5585_ = v___x_5582_;
goto v_reusejp_5584_;
}
else
{
lean_object* v_reuseFailAlloc_5586_; 
v_reuseFailAlloc_5586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5586_, 0, v_a_5580_);
v___x_5585_ = v_reuseFailAlloc_5586_;
goto v_reusejp_5584_;
}
v_reusejp_5584_:
{
return v___x_5585_;
}
}
}
}
else
{
lean_dec_ref(v___x_5572_);
lean_dec(v___x_5566_);
lean_dec_ref(v_code_5434_);
return v___x_5573_;
}
}
}
v___jp_5477_:
{
lean_object* v_fvarId_5480_; lean_object* v_borrowedValues_5481_; lean_object* v_derivedValMap_5482_; lean_object* v_varMap_5483_; lean_object* v_jpLiveVarMap_5484_; lean_object* v_idx_5485_; lean_object* v___x_5486_; lean_object* v___x_5487_; lean_object* v___x_5488_; 
v_fvarId_5480_ = lean_ctor_get(v_fst_5478_, 0);
v_borrowedValues_5481_ = lean_ctor_get(v_a_5435_, 0);
v_derivedValMap_5482_ = lean_ctor_get(v_a_5435_, 1);
v_varMap_5483_ = lean_ctor_get(v_a_5435_, 2);
v_jpLiveVarMap_5484_ = lean_ctor_get(v_a_5435_, 3);
v_idx_5485_ = lean_ctor_get(v_a_5435_, 4);
lean_inc(v_jpLiveVarMap_5484_);
lean_inc(v_fvarId_5480_);
v___x_5486_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_fvarId_5480_, v_snd_5479_, v_jpLiveVarMap_5484_);
lean_inc(v_idx_5485_);
lean_inc(v_varMap_5483_);
lean_inc_ref(v_derivedValMap_5482_);
lean_inc_ref(v_borrowedValues_5481_);
v___x_5487_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5487_, 0, v_borrowedValues_5481_);
lean_ctor_set(v___x_5487_, 1, v_derivedValMap_5482_);
lean_ctor_set(v___x_5487_, 2, v_varMap_5483_);
lean_ctor_set(v___x_5487_, 3, v___x_5486_);
lean_ctor_set(v___x_5487_, 4, v_idx_5485_);
lean_inc_ref(v_k_5476_);
v___x_5488_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_k_5476_, v___x_5487_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
lean_dec_ref(v___x_5487_);
if (lean_obj_tag(v___x_5488_) == 0)
{
lean_object* v_a_5489_; size_t v___x_5490_; size_t v___x_5491_; uint8_t v___x_5492_; 
v_a_5489_ = lean_ctor_get(v___x_5488_, 0);
lean_inc(v_a_5489_);
lean_dec_ref(v___x_5488_);
v___x_5490_ = lean_ptr_addr(v_k_5476_);
v___x_5491_ = lean_ptr_addr(v_a_5489_);
v___x_5492_ = lean_usize_dec_eq(v___x_5490_, v___x_5491_);
if (v___x_5492_ == 0)
{
v___y_5443_ = v_a_5489_;
v___y_5444_ = v_fst_5478_;
v___y_5445_ = v___x_5492_;
goto v___jp_5442_;
}
else
{
size_t v___x_5493_; size_t v___x_5494_; uint8_t v___x_5495_; 
v___x_5493_ = lean_ptr_addr(v_decl_5475_);
v___x_5494_ = lean_ptr_addr(v_fst_5478_);
v___x_5495_ = lean_usize_dec_eq(v___x_5493_, v___x_5494_);
v___y_5443_ = v_a_5489_;
v___y_5444_ = v_fst_5478_;
v___y_5445_ = v___x_5495_;
goto v___jp_5442_;
}
}
else
{
lean_dec_ref(v_fst_5478_);
lean_dec_ref(v_code_5434_);
return v___x_5488_;
}
}
}
case 3:
{
lean_object* v_fvarId_5588_; lean_object* v_args_5589_; lean_object* v___x_5590_; lean_object* v_jpLiveVarMap_5591_; lean_object* v___x_5592_; lean_object* v___x_5593_; uint8_t v___x_5594_; lean_object* v___x_5595_; 
v_fvarId_5588_ = lean_ctor_get(v_code_5434_, 0);
v_args_5589_ = lean_ctor_get(v_code_5434_, 1);
lean_inc_ref(v_args_5589_);
v___x_5590_ = lean_st_ref_take(v_a_5436_);
lean_dec(v___x_5590_);
v_jpLiveVarMap_5591_ = lean_ctor_get(v_a_5435_, 3);
v___x_5592_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4(v_jpLiveVarMap_5591_, v_fvarId_5588_);
v___x_5593_ = lean_st_ref_set(v_a_5436_, v___x_5592_);
v___x_5594_ = 1;
v___x_5595_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_5594_, v_fvarId_5588_, v_a_5438_);
if (lean_obj_tag(v___x_5595_) == 0)
{
lean_object* v_a_5596_; lean_object* v___y_5598_; 
v_a_5596_ = lean_ctor_get(v___x_5595_, 0);
lean_inc(v_a_5596_);
lean_dec_ref(v___x_5595_);
if (lean_obj_tag(v_a_5596_) == 0)
{
lean_object* v___x_5619_; lean_object* v___x_5620_; 
v___x_5619_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10);
v___x_5620_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5(v___x_5619_);
v___y_5598_ = v___x_5620_;
goto v___jp_5597_;
}
else
{
lean_object* v_val_5621_; 
v_val_5621_ = lean_ctor_get(v_a_5596_, 0);
lean_inc(v_val_5621_);
lean_dec_ref(v_a_5596_);
v___y_5598_ = v_val_5621_;
goto v___jp_5597_;
}
v___jp_5597_:
{
lean_object* v_params_5599_; lean_object* v___x_5600_; 
v_params_5599_ = lean_ctor_get(v___y_5598_, 2);
lean_inc_ref(v_params_5599_);
lean_dec_ref(v___y_5598_);
v___x_5600_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore(v_args_5589_, v_params_5599_, v_code_5434_, v_a_5435_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
if (lean_obj_tag(v___x_5600_) == 0)
{
lean_object* v_a_5601_; lean_object* v___x_5602_; 
v_a_5601_ = lean_ctor_get(v___x_5600_, 0);
lean_inc(v_a_5601_);
lean_dec_ref(v___x_5600_);
v___x_5602_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_5589_, v_a_5435_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
lean_dec_ref(v_args_5589_);
if (lean_obj_tag(v___x_5602_) == 0)
{
lean_object* v___x_5604_; uint8_t v_isShared_5605_; uint8_t v_isSharedCheck_5609_; 
v_isSharedCheck_5609_ = !lean_is_exclusive(v___x_5602_);
if (v_isSharedCheck_5609_ == 0)
{
lean_object* v_unused_5610_; 
v_unused_5610_ = lean_ctor_get(v___x_5602_, 0);
lean_dec(v_unused_5610_);
v___x_5604_ = v___x_5602_;
v_isShared_5605_ = v_isSharedCheck_5609_;
goto v_resetjp_5603_;
}
else
{
lean_dec(v___x_5602_);
v___x_5604_ = lean_box(0);
v_isShared_5605_ = v_isSharedCheck_5609_;
goto v_resetjp_5603_;
}
v_resetjp_5603_:
{
lean_object* v___x_5607_; 
if (v_isShared_5605_ == 0)
{
lean_ctor_set(v___x_5604_, 0, v_a_5601_);
v___x_5607_ = v___x_5604_;
goto v_reusejp_5606_;
}
else
{
lean_object* v_reuseFailAlloc_5608_; 
v_reuseFailAlloc_5608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5608_, 0, v_a_5601_);
v___x_5607_ = v_reuseFailAlloc_5608_;
goto v_reusejp_5606_;
}
v_reusejp_5606_:
{
return v___x_5607_;
}
}
}
else
{
lean_object* v_a_5611_; lean_object* v___x_5613_; uint8_t v_isShared_5614_; uint8_t v_isSharedCheck_5618_; 
lean_dec(v_a_5601_);
v_a_5611_ = lean_ctor_get(v___x_5602_, 0);
v_isSharedCheck_5618_ = !lean_is_exclusive(v___x_5602_);
if (v_isSharedCheck_5618_ == 0)
{
v___x_5613_ = v___x_5602_;
v_isShared_5614_ = v_isSharedCheck_5618_;
goto v_resetjp_5612_;
}
else
{
lean_inc(v_a_5611_);
lean_dec(v___x_5602_);
v___x_5613_ = lean_box(0);
v_isShared_5614_ = v_isSharedCheck_5618_;
goto v_resetjp_5612_;
}
v_resetjp_5612_:
{
lean_object* v___x_5616_; 
if (v_isShared_5614_ == 0)
{
v___x_5616_ = v___x_5613_;
goto v_reusejp_5615_;
}
else
{
lean_object* v_reuseFailAlloc_5617_; 
v_reuseFailAlloc_5617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5617_, 0, v_a_5611_);
v___x_5616_ = v_reuseFailAlloc_5617_;
goto v_reusejp_5615_;
}
v_reusejp_5615_:
{
return v___x_5616_;
}
}
}
}
else
{
lean_dec_ref(v_args_5589_);
return v___x_5600_;
}
}
}
else
{
lean_object* v_a_5622_; lean_object* v___x_5624_; uint8_t v_isShared_5625_; uint8_t v_isSharedCheck_5629_; 
lean_dec_ref(v_args_5589_);
lean_dec_ref(v_code_5434_);
v_a_5622_ = lean_ctor_get(v___x_5595_, 0);
v_isSharedCheck_5629_ = !lean_is_exclusive(v___x_5595_);
if (v_isSharedCheck_5629_ == 0)
{
v___x_5624_ = v___x_5595_;
v_isShared_5625_ = v_isSharedCheck_5629_;
goto v_resetjp_5623_;
}
else
{
lean_inc(v_a_5622_);
lean_dec(v___x_5595_);
v___x_5624_ = lean_box(0);
v_isShared_5625_ = v_isSharedCheck_5629_;
goto v_resetjp_5623_;
}
v_resetjp_5623_:
{
lean_object* v___x_5627_; 
if (v_isShared_5625_ == 0)
{
v___x_5627_ = v___x_5624_;
goto v_reusejp_5626_;
}
else
{
lean_object* v_reuseFailAlloc_5628_; 
v_reuseFailAlloc_5628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5628_, 0, v_a_5622_);
v___x_5627_ = v_reuseFailAlloc_5628_;
goto v_reusejp_5626_;
}
v_reusejp_5626_:
{
return v___x_5627_;
}
}
}
}
case 4:
{
lean_object* v_cases_5630_; lean_object* v_typeName_5631_; lean_object* v_resultType_5632_; lean_object* v_discr_5633_; lean_object* v_alts_5634_; size_t v_sz_5635_; size_t v___x_5636_; lean_object* v___x_5637_; 
v_cases_5630_ = lean_ctor_get(v_code_5434_, 0);
v_typeName_5631_ = lean_ctor_get(v_cases_5630_, 0);
v_resultType_5632_ = lean_ctor_get(v_cases_5630_, 1);
v_discr_5633_ = lean_ctor_get(v_cases_5630_, 2);
v_alts_5634_ = lean_ctor_get(v_cases_5630_, 3);
v_sz_5635_ = lean_array_size(v_alts_5634_);
v___x_5636_ = ((size_t)0ULL);
lean_inc_ref(v_alts_5634_);
lean_inc_ref(v_cases_5630_);
v___x_5637_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__7(v_cases_5630_, v_sz_5635_, v___x_5636_, v_alts_5634_, v_a_5435_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
if (lean_obj_tag(v___x_5637_) == 0)
{
lean_object* v_a_5638_; lean_object* v___y_5640_; lean_object* v___x_5685_; lean_object* v___x_5686_; lean_object* v___x_5687_; uint8_t v___x_5688_; 
v_a_5638_ = lean_ctor_get(v___x_5637_, 0);
lean_inc(v_a_5638_);
lean_dec_ref(v___x_5637_);
v___x_5685_ = lean_unsigned_to_nat(0u);
v___x_5686_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5687_ = lean_array_get_size(v_a_5638_);
v___x_5688_ = lean_nat_dec_lt(v___x_5685_, v___x_5687_);
if (v___x_5688_ == 0)
{
v___y_5640_ = v___x_5686_;
goto v___jp_5639_;
}
else
{
uint8_t v___x_5689_; 
v___x_5689_ = lean_nat_dec_le(v___x_5687_, v___x_5687_);
if (v___x_5689_ == 0)
{
if (v___x_5688_ == 0)
{
v___y_5640_ = v___x_5686_;
goto v___jp_5639_;
}
else
{
size_t v___x_5690_; lean_object* v___x_5691_; 
v___x_5690_ = lean_usize_of_nat(v___x_5687_);
v___x_5691_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__9(v_a_5638_, v___x_5636_, v___x_5690_, v___x_5686_);
v___y_5640_ = v___x_5691_;
goto v___jp_5639_;
}
}
else
{
size_t v___x_5692_; lean_object* v___x_5693_; 
v___x_5692_ = lean_usize_of_nat(v___x_5687_);
v___x_5693_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__9(v_a_5638_, v___x_5636_, v___x_5692_, v___x_5686_);
v___y_5640_ = v___x_5693_;
goto v___jp_5639_;
}
}
v___jp_5639_:
{
lean_object* v___x_5641_; lean_object* v___x_5642_; lean_object* v___x_5643_; 
v___x_5641_ = lean_st_ref_take(v_a_5436_);
lean_dec(v___x_5641_);
v___x_5642_ = lean_st_ref_set(v_a_5436_, v___y_5640_);
lean_inc(v_discr_5633_);
v___x_5643_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_discr_5633_, v_a_5435_, v_a_5436_);
if (lean_obj_tag(v___x_5643_) == 0)
{
size_t v_sz_5644_; lean_object* v___x_5645_; 
lean_dec_ref(v___x_5643_);
v_sz_5644_ = lean_array_size(v_a_5638_);
lean_inc(v_discr_5633_);
v___x_5645_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8(v_discr_5633_, v_sz_5644_, v___x_5636_, v_a_5638_, v_a_5435_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
if (lean_obj_tag(v___x_5645_) == 0)
{
lean_object* v_a_5646_; lean_object* v___x_5648_; uint8_t v_isShared_5649_; uint8_t v_isSharedCheck_5668_; 
v_a_5646_ = lean_ctor_get(v___x_5645_, 0);
v_isSharedCheck_5668_ = !lean_is_exclusive(v___x_5645_);
if (v_isSharedCheck_5668_ == 0)
{
v___x_5648_ = v___x_5645_;
v_isShared_5649_ = v_isSharedCheck_5668_;
goto v_resetjp_5647_;
}
else
{
lean_inc(v_a_5646_);
lean_dec(v___x_5645_);
v___x_5648_ = lean_box(0);
v_isShared_5649_ = v_isSharedCheck_5668_;
goto v_resetjp_5647_;
}
v_resetjp_5647_:
{
size_t v___x_5650_; size_t v___x_5651_; uint8_t v___x_5652_; 
v___x_5650_ = lean_ptr_addr(v_alts_5634_);
v___x_5651_ = lean_ptr_addr(v_a_5646_);
v___x_5652_ = lean_usize_dec_eq(v___x_5650_, v___x_5651_);
if (v___x_5652_ == 0)
{
lean_object* v___x_5654_; uint8_t v_isShared_5655_; uint8_t v_isSharedCheck_5663_; 
lean_inc(v_discr_5633_);
lean_inc_ref(v_resultType_5632_);
lean_inc(v_typeName_5631_);
v_isSharedCheck_5663_ = !lean_is_exclusive(v_code_5434_);
if (v_isSharedCheck_5663_ == 0)
{
lean_object* v_unused_5664_; 
v_unused_5664_ = lean_ctor_get(v_code_5434_, 0);
lean_dec(v_unused_5664_);
v___x_5654_ = v_code_5434_;
v_isShared_5655_ = v_isSharedCheck_5663_;
goto v_resetjp_5653_;
}
else
{
lean_dec(v_code_5434_);
v___x_5654_ = lean_box(0);
v_isShared_5655_ = v_isSharedCheck_5663_;
goto v_resetjp_5653_;
}
v_resetjp_5653_:
{
lean_object* v___x_5656_; lean_object* v___x_5658_; 
v___x_5656_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5656_, 0, v_typeName_5631_);
lean_ctor_set(v___x_5656_, 1, v_resultType_5632_);
lean_ctor_set(v___x_5656_, 2, v_discr_5633_);
lean_ctor_set(v___x_5656_, 3, v_a_5646_);
if (v_isShared_5655_ == 0)
{
lean_ctor_set(v___x_5654_, 0, v___x_5656_);
v___x_5658_ = v___x_5654_;
goto v_reusejp_5657_;
}
else
{
lean_object* v_reuseFailAlloc_5662_; 
v_reuseFailAlloc_5662_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5662_, 0, v___x_5656_);
v___x_5658_ = v_reuseFailAlloc_5662_;
goto v_reusejp_5657_;
}
v_reusejp_5657_:
{
lean_object* v___x_5660_; 
if (v_isShared_5649_ == 0)
{
lean_ctor_set(v___x_5648_, 0, v___x_5658_);
v___x_5660_ = v___x_5648_;
goto v_reusejp_5659_;
}
else
{
lean_object* v_reuseFailAlloc_5661_; 
v_reuseFailAlloc_5661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5661_, 0, v___x_5658_);
v___x_5660_ = v_reuseFailAlloc_5661_;
goto v_reusejp_5659_;
}
v_reusejp_5659_:
{
return v___x_5660_;
}
}
}
}
else
{
lean_object* v___x_5666_; 
lean_dec(v_a_5646_);
if (v_isShared_5649_ == 0)
{
lean_ctor_set(v___x_5648_, 0, v_code_5434_);
v___x_5666_ = v___x_5648_;
goto v_reusejp_5665_;
}
else
{
lean_object* v_reuseFailAlloc_5667_; 
v_reuseFailAlloc_5667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5667_, 0, v_code_5434_);
v___x_5666_ = v_reuseFailAlloc_5667_;
goto v_reusejp_5665_;
}
v_reusejp_5665_:
{
return v___x_5666_;
}
}
}
}
else
{
lean_object* v_a_5669_; lean_object* v___x_5671_; uint8_t v_isShared_5672_; uint8_t v_isSharedCheck_5676_; 
lean_dec_ref(v_code_5434_);
v_a_5669_ = lean_ctor_get(v___x_5645_, 0);
v_isSharedCheck_5676_ = !lean_is_exclusive(v___x_5645_);
if (v_isSharedCheck_5676_ == 0)
{
v___x_5671_ = v___x_5645_;
v_isShared_5672_ = v_isSharedCheck_5676_;
goto v_resetjp_5670_;
}
else
{
lean_inc(v_a_5669_);
lean_dec(v___x_5645_);
v___x_5671_ = lean_box(0);
v_isShared_5672_ = v_isSharedCheck_5676_;
goto v_resetjp_5670_;
}
v_resetjp_5670_:
{
lean_object* v___x_5674_; 
if (v_isShared_5672_ == 0)
{
v___x_5674_ = v___x_5671_;
goto v_reusejp_5673_;
}
else
{
lean_object* v_reuseFailAlloc_5675_; 
v_reuseFailAlloc_5675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5675_, 0, v_a_5669_);
v___x_5674_ = v_reuseFailAlloc_5675_;
goto v_reusejp_5673_;
}
v_reusejp_5673_:
{
return v___x_5674_;
}
}
}
}
else
{
lean_object* v_a_5677_; lean_object* v___x_5679_; uint8_t v_isShared_5680_; uint8_t v_isSharedCheck_5684_; 
lean_dec(v_a_5638_);
lean_dec_ref(v_code_5434_);
v_a_5677_ = lean_ctor_get(v___x_5643_, 0);
v_isSharedCheck_5684_ = !lean_is_exclusive(v___x_5643_);
if (v_isSharedCheck_5684_ == 0)
{
v___x_5679_ = v___x_5643_;
v_isShared_5680_ = v_isSharedCheck_5684_;
goto v_resetjp_5678_;
}
else
{
lean_inc(v_a_5677_);
lean_dec(v___x_5643_);
v___x_5679_ = lean_box(0);
v_isShared_5680_ = v_isSharedCheck_5684_;
goto v_resetjp_5678_;
}
v_resetjp_5678_:
{
lean_object* v___x_5682_; 
if (v_isShared_5680_ == 0)
{
v___x_5682_ = v___x_5679_;
goto v_reusejp_5681_;
}
else
{
lean_object* v_reuseFailAlloc_5683_; 
v_reuseFailAlloc_5683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5683_, 0, v_a_5677_);
v___x_5682_ = v_reuseFailAlloc_5683_;
goto v_reusejp_5681_;
}
v_reusejp_5681_:
{
return v___x_5682_;
}
}
}
}
}
else
{
lean_object* v_a_5694_; lean_object* v___x_5696_; uint8_t v_isShared_5697_; uint8_t v_isSharedCheck_5701_; 
lean_dec_ref(v_code_5434_);
v_a_5694_ = lean_ctor_get(v___x_5637_, 0);
v_isSharedCheck_5701_ = !lean_is_exclusive(v___x_5637_);
if (v_isSharedCheck_5701_ == 0)
{
v___x_5696_ = v___x_5637_;
v_isShared_5697_ = v_isSharedCheck_5701_;
goto v_resetjp_5695_;
}
else
{
lean_inc(v_a_5694_);
lean_dec(v___x_5637_);
v___x_5696_ = lean_box(0);
v_isShared_5697_ = v_isSharedCheck_5701_;
goto v_resetjp_5695_;
}
v_resetjp_5695_:
{
lean_object* v___x_5699_; 
if (v_isShared_5697_ == 0)
{
v___x_5699_ = v___x_5696_;
goto v_reusejp_5698_;
}
else
{
lean_object* v_reuseFailAlloc_5700_; 
v_reuseFailAlloc_5700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5700_, 0, v_a_5694_);
v___x_5699_ = v_reuseFailAlloc_5700_;
goto v_reusejp_5698_;
}
v_reusejp_5698_:
{
return v___x_5699_;
}
}
}
}
case 5:
{
lean_object* v_fvarId_5702_; uint8_t v___y_5704_; lean_object* v___y_5705_; uint8_t v___y_5706_; lean_object* v___x_5709_; lean_object* v___x_5710_; lean_object* v_borrowedValues_5711_; lean_object* v_derivedValMap_5712_; lean_object* v_varMap_5713_; lean_object* v___y_5715_; lean_object* v_buckets_5747_; lean_object* v___x_5748_; uint8_t v___x_5749_; 
v_fvarId_5702_ = lean_ctor_get(v_code_5434_, 0);
v___x_5709_ = lean_unsigned_to_nat(0u);
v___x_5710_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v_borrowedValues_5711_ = lean_ctor_get(v_a_5435_, 0);
v_derivedValMap_5712_ = lean_ctor_get(v_a_5435_, 1);
v_varMap_5713_ = lean_ctor_get(v_a_5435_, 2);
v_buckets_5747_ = lean_ctor_get(v_borrowedValues_5711_, 1);
v___x_5748_ = lean_array_get_size(v_buckets_5747_);
v___x_5749_ = lean_nat_dec_lt(v___x_5709_, v___x_5748_);
if (v___x_5749_ == 0)
{
v___y_5715_ = v___x_5710_;
goto v___jp_5714_;
}
else
{
uint8_t v___x_5750_; 
v___x_5750_ = lean_nat_dec_le(v___x_5748_, v___x_5748_);
if (v___x_5750_ == 0)
{
if (v___x_5749_ == 0)
{
v___y_5715_ = v___x_5710_;
goto v___jp_5714_;
}
else
{
size_t v___x_5751_; size_t v___x_5752_; lean_object* v___x_5753_; 
v___x_5751_ = ((size_t)0ULL);
v___x_5752_ = lean_usize_of_nat(v___x_5748_);
v___x_5753_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__12(v_derivedValMap_5712_, v_buckets_5747_, v___x_5751_, v___x_5752_, v___x_5710_);
v___y_5715_ = v___x_5753_;
goto v___jp_5714_;
}
}
else
{
size_t v___x_5754_; size_t v___x_5755_; lean_object* v___x_5756_; 
v___x_5754_ = ((size_t)0ULL);
v___x_5755_ = lean_usize_of_nat(v___x_5748_);
v___x_5756_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__12(v_derivedValMap_5712_, v_buckets_5747_, v___x_5754_, v___x_5755_, v___x_5710_);
v___y_5715_ = v___x_5756_;
goto v___jp_5714_;
}
}
v___jp_5703_:
{
lean_object* v___x_5707_; lean_object* v___x_5708_; 
v___x_5707_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_5707_, 0, v_fvarId_5702_);
lean_ctor_set(v___x_5707_, 1, v___y_5705_);
lean_ctor_set(v___x_5707_, 2, v_code_5434_);
lean_ctor_set_uint8(v___x_5707_, sizeof(void*)*3, v___y_5706_);
lean_ctor_set_uint8(v___x_5707_, sizeof(void*)*3 + 1, v___y_5704_);
v___x_5708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5708_, 0, v___x_5707_);
return v___x_5708_;
}
v___jp_5714_:
{
lean_object* v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; 
v___x_5716_ = lean_st_ref_take(v_a_5436_);
lean_dec(v___x_5716_);
v___x_5717_ = lean_st_ref_set(v_a_5436_, v___y_5715_);
v___x_5718_ = l_Std_DTreeMap_Internal_Impl_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0(v_varMap_5713_, v_fvarId_5702_);
lean_inc(v_fvarId_5702_);
v___x_5719_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_5702_, v_a_5435_, v_a_5436_);
if (lean_obj_tag(v___x_5719_) == 0)
{
lean_object* v___x_5721_; uint8_t v_isShared_5722_; uint8_t v_isSharedCheck_5737_; 
v_isSharedCheck_5737_ = !lean_is_exclusive(v___x_5719_);
if (v_isSharedCheck_5737_ == 0)
{
lean_object* v_unused_5738_; 
v_unused_5738_ = lean_ctor_get(v___x_5719_, 0);
lean_dec(v_unused_5738_);
v___x_5721_ = v___x_5719_;
v_isShared_5722_ = v_isSharedCheck_5737_;
goto v_resetjp_5720_;
}
else
{
lean_dec(v___x_5719_);
v___x_5721_ = lean_box(0);
v_isShared_5722_ = v_isSharedCheck_5737_;
goto v_resetjp_5720_;
}
v_resetjp_5720_:
{
lean_object* v___x_5723_; uint8_t v_isPossibleRef_5724_; 
v___x_5723_ = lean_st_ref_get(v_a_5436_);
v_isPossibleRef_5724_ = lean_ctor_get_uint8(v___x_5718_, sizeof(void*)*1);
if (v_isPossibleRef_5724_ == 0)
{
lean_object* v___x_5726_; 
lean_dec(v___x_5723_);
lean_dec_ref(v___x_5718_);
if (v_isShared_5722_ == 0)
{
lean_ctor_set(v___x_5721_, 0, v_code_5434_);
v___x_5726_ = v___x_5721_;
goto v_reusejp_5725_;
}
else
{
lean_object* v_reuseFailAlloc_5727_; 
v_reuseFailAlloc_5727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5727_, 0, v_code_5434_);
v___x_5726_ = v_reuseFailAlloc_5727_;
goto v_reusejp_5725_;
}
v_reusejp_5725_:
{
return v___x_5726_;
}
}
else
{
uint8_t v_isDefiniteRef_5728_; uint8_t v_persistent_5729_; lean_object* v_borrows_5730_; uint8_t v___x_5731_; 
v_isDefiniteRef_5728_ = lean_ctor_get_uint8(v___x_5718_, sizeof(void*)*1 + 1);
v_persistent_5729_ = lean_ctor_get_uint8(v___x_5718_, sizeof(void*)*1 + 2);
lean_dec_ref(v___x_5718_);
v_borrows_5730_ = lean_ctor_get(v___x_5723_, 1);
lean_inc_ref(v_borrows_5730_);
lean_dec(v___x_5723_);
v___x_5731_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_5730_, v_fvarId_5702_);
lean_dec_ref(v_borrows_5730_);
if (v___x_5731_ == 0)
{
lean_object* v___x_5733_; 
if (v_isShared_5722_ == 0)
{
lean_ctor_set(v___x_5721_, 0, v_code_5434_);
v___x_5733_ = v___x_5721_;
goto v_reusejp_5732_;
}
else
{
lean_object* v_reuseFailAlloc_5734_; 
v_reuseFailAlloc_5734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5734_, 0, v_code_5434_);
v___x_5733_ = v_reuseFailAlloc_5734_;
goto v_reusejp_5732_;
}
v_reusejp_5732_:
{
return v___x_5733_;
}
}
else
{
lean_object* v___x_5735_; 
lean_inc(v_fvarId_5702_);
lean_del_object(v___x_5721_);
v___x_5735_ = lean_unsigned_to_nat(1u);
if (v_isDefiniteRef_5728_ == 0)
{
v___y_5704_ = v_persistent_5729_;
v___y_5705_ = v___x_5735_;
v___y_5706_ = v___x_5731_;
goto v___jp_5703_;
}
else
{
uint8_t v___x_5736_; 
v___x_5736_ = 0;
v___y_5704_ = v_persistent_5729_;
v___y_5705_ = v___x_5735_;
v___y_5706_ = v___x_5736_;
goto v___jp_5703_;
}
}
}
}
}
else
{
lean_object* v_a_5739_; lean_object* v___x_5741_; uint8_t v_isShared_5742_; uint8_t v_isSharedCheck_5746_; 
lean_dec_ref(v___x_5718_);
lean_dec_ref(v_code_5434_);
v_a_5739_ = lean_ctor_get(v___x_5719_, 0);
v_isSharedCheck_5746_ = !lean_is_exclusive(v___x_5719_);
if (v_isSharedCheck_5746_ == 0)
{
v___x_5741_ = v___x_5719_;
v_isShared_5742_ = v_isSharedCheck_5746_;
goto v_resetjp_5740_;
}
else
{
lean_inc(v_a_5739_);
lean_dec(v___x_5719_);
v___x_5741_ = lean_box(0);
v_isShared_5742_ = v_isSharedCheck_5746_;
goto v_resetjp_5740_;
}
v_resetjp_5740_:
{
lean_object* v___x_5744_; 
if (v_isShared_5742_ == 0)
{
v___x_5744_ = v___x_5741_;
goto v_reusejp_5743_;
}
else
{
lean_object* v_reuseFailAlloc_5745_; 
v_reuseFailAlloc_5745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5745_, 0, v_a_5739_);
v___x_5744_ = v_reuseFailAlloc_5745_;
goto v_reusejp_5743_;
}
v_reusejp_5743_:
{
return v___x_5744_;
}
}
}
}
}
case 6:
{
lean_object* v___x_5757_; lean_object* v___x_5758_; lean_object* v_borrowedValues_5759_; lean_object* v_derivedValMap_5760_; lean_object* v_buckets_5761_; lean_object* v___x_5762_; uint8_t v___x_5763_; 
v___x_5757_ = lean_unsigned_to_nat(0u);
v___x_5758_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v_borrowedValues_5759_ = lean_ctor_get(v_a_5435_, 0);
v_derivedValMap_5760_ = lean_ctor_get(v_a_5435_, 1);
v_buckets_5761_ = lean_ctor_get(v_borrowedValues_5759_, 1);
v___x_5762_ = lean_array_get_size(v_buckets_5761_);
v___x_5763_ = lean_nat_dec_lt(v___x_5757_, v___x_5762_);
if (v___x_5763_ == 0)
{
v___y_5450_ = v___x_5758_;
goto v___jp_5449_;
}
else
{
uint8_t v___x_5764_; 
v___x_5764_ = lean_nat_dec_le(v___x_5762_, v___x_5762_);
if (v___x_5764_ == 0)
{
if (v___x_5763_ == 0)
{
v___y_5450_ = v___x_5758_;
goto v___jp_5449_;
}
else
{
size_t v___x_5765_; size_t v___x_5766_; lean_object* v___x_5767_; 
v___x_5765_ = ((size_t)0ULL);
v___x_5766_ = lean_usize_of_nat(v___x_5762_);
v___x_5767_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__12(v_derivedValMap_5760_, v_buckets_5761_, v___x_5765_, v___x_5766_, v___x_5758_);
v___y_5450_ = v___x_5767_;
goto v___jp_5449_;
}
}
else
{
size_t v___x_5768_; size_t v___x_5769_; lean_object* v___x_5770_; 
v___x_5768_ = ((size_t)0ULL);
v___x_5769_ = lean_usize_of_nat(v___x_5762_);
v___x_5770_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__12(v_derivedValMap_5760_, v_buckets_5761_, v___x_5768_, v___x_5769_, v___x_5758_);
v___y_5450_ = v___x_5770_;
goto v___jp_5449_;
}
}
}
case 8:
{
lean_object* v_fvarId_5771_; lean_object* v_i_5772_; lean_object* v_y_5773_; lean_object* v_k_5774_; lean_object* v___x_5775_; 
v_fvarId_5771_ = lean_ctor_get(v_code_5434_, 0);
v_i_5772_ = lean_ctor_get(v_code_5434_, 1);
v_y_5773_ = lean_ctor_get(v_code_5434_, 2);
v_k_5774_ = lean_ctor_get(v_code_5434_, 3);
lean_inc_ref(v_k_5774_);
v___x_5775_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_k_5774_, v_a_5435_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
if (lean_obj_tag(v___x_5775_) == 0)
{
lean_object* v_a_5776_; lean_object* v___x_5777_; 
v_a_5776_ = lean_ctor_get(v___x_5775_, 0);
lean_inc(v_a_5776_);
lean_dec_ref(v___x_5775_);
lean_inc(v_fvarId_5771_);
v___x_5777_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_5771_, v_a_5435_, v_a_5436_);
if (lean_obj_tag(v___x_5777_) == 0)
{
lean_object* v___x_5779_; uint8_t v_isShared_5780_; uint8_t v_isSharedCheck_5801_; 
v_isSharedCheck_5801_ = !lean_is_exclusive(v___x_5777_);
if (v_isSharedCheck_5801_ == 0)
{
lean_object* v_unused_5802_; 
v_unused_5802_ = lean_ctor_get(v___x_5777_, 0);
lean_dec(v_unused_5802_);
v___x_5779_ = v___x_5777_;
v_isShared_5780_ = v_isSharedCheck_5801_;
goto v_resetjp_5778_;
}
else
{
lean_dec(v___x_5777_);
v___x_5779_ = lean_box(0);
v_isShared_5780_ = v_isSharedCheck_5801_;
goto v_resetjp_5778_;
}
v_resetjp_5778_:
{
size_t v___x_5781_; size_t v___x_5782_; uint8_t v___x_5783_; 
v___x_5781_ = lean_ptr_addr(v_k_5774_);
v___x_5782_ = lean_ptr_addr(v_a_5776_);
v___x_5783_ = lean_usize_dec_eq(v___x_5781_, v___x_5782_);
if (v___x_5783_ == 0)
{
lean_object* v___x_5785_; uint8_t v_isShared_5786_; uint8_t v_isSharedCheck_5793_; 
lean_inc(v_y_5773_);
lean_inc(v_i_5772_);
lean_inc(v_fvarId_5771_);
v_isSharedCheck_5793_ = !lean_is_exclusive(v_code_5434_);
if (v_isSharedCheck_5793_ == 0)
{
lean_object* v_unused_5794_; lean_object* v_unused_5795_; lean_object* v_unused_5796_; lean_object* v_unused_5797_; 
v_unused_5794_ = lean_ctor_get(v_code_5434_, 3);
lean_dec(v_unused_5794_);
v_unused_5795_ = lean_ctor_get(v_code_5434_, 2);
lean_dec(v_unused_5795_);
v_unused_5796_ = lean_ctor_get(v_code_5434_, 1);
lean_dec(v_unused_5796_);
v_unused_5797_ = lean_ctor_get(v_code_5434_, 0);
lean_dec(v_unused_5797_);
v___x_5785_ = v_code_5434_;
v_isShared_5786_ = v_isSharedCheck_5793_;
goto v_resetjp_5784_;
}
else
{
lean_dec(v_code_5434_);
v___x_5785_ = lean_box(0);
v_isShared_5786_ = v_isSharedCheck_5793_;
goto v_resetjp_5784_;
}
v_resetjp_5784_:
{
lean_object* v___x_5788_; 
if (v_isShared_5786_ == 0)
{
lean_ctor_set(v___x_5785_, 3, v_a_5776_);
v___x_5788_ = v___x_5785_;
goto v_reusejp_5787_;
}
else
{
lean_object* v_reuseFailAlloc_5792_; 
v_reuseFailAlloc_5792_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_5792_, 0, v_fvarId_5771_);
lean_ctor_set(v_reuseFailAlloc_5792_, 1, v_i_5772_);
lean_ctor_set(v_reuseFailAlloc_5792_, 2, v_y_5773_);
lean_ctor_set(v_reuseFailAlloc_5792_, 3, v_a_5776_);
v___x_5788_ = v_reuseFailAlloc_5792_;
goto v_reusejp_5787_;
}
v_reusejp_5787_:
{
lean_object* v___x_5790_; 
if (v_isShared_5780_ == 0)
{
lean_ctor_set(v___x_5779_, 0, v___x_5788_);
v___x_5790_ = v___x_5779_;
goto v_reusejp_5789_;
}
else
{
lean_object* v_reuseFailAlloc_5791_; 
v_reuseFailAlloc_5791_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5791_, 0, v___x_5788_);
v___x_5790_ = v_reuseFailAlloc_5791_;
goto v_reusejp_5789_;
}
v_reusejp_5789_:
{
return v___x_5790_;
}
}
}
}
else
{
lean_object* v___x_5799_; 
lean_dec(v_a_5776_);
if (v_isShared_5780_ == 0)
{
lean_ctor_set(v___x_5779_, 0, v_code_5434_);
v___x_5799_ = v___x_5779_;
goto v_reusejp_5798_;
}
else
{
lean_object* v_reuseFailAlloc_5800_; 
v_reuseFailAlloc_5800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5800_, 0, v_code_5434_);
v___x_5799_ = v_reuseFailAlloc_5800_;
goto v_reusejp_5798_;
}
v_reusejp_5798_:
{
return v___x_5799_;
}
}
}
}
else
{
lean_object* v_a_5803_; lean_object* v___x_5805_; uint8_t v_isShared_5806_; uint8_t v_isSharedCheck_5810_; 
lean_dec(v_a_5776_);
lean_dec_ref(v_code_5434_);
v_a_5803_ = lean_ctor_get(v___x_5777_, 0);
v_isSharedCheck_5810_ = !lean_is_exclusive(v___x_5777_);
if (v_isSharedCheck_5810_ == 0)
{
v___x_5805_ = v___x_5777_;
v_isShared_5806_ = v_isSharedCheck_5810_;
goto v_resetjp_5804_;
}
else
{
lean_inc(v_a_5803_);
lean_dec(v___x_5777_);
v___x_5805_ = lean_box(0);
v_isShared_5806_ = v_isSharedCheck_5810_;
goto v_resetjp_5804_;
}
v_resetjp_5804_:
{
lean_object* v___x_5808_; 
if (v_isShared_5806_ == 0)
{
v___x_5808_ = v___x_5805_;
goto v_reusejp_5807_;
}
else
{
lean_object* v_reuseFailAlloc_5809_; 
v_reuseFailAlloc_5809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5809_, 0, v_a_5803_);
v___x_5808_ = v_reuseFailAlloc_5809_;
goto v_reusejp_5807_;
}
v_reusejp_5807_:
{
return v___x_5808_;
}
}
}
}
else
{
lean_dec_ref(v_code_5434_);
return v___x_5775_;
}
}
case 9:
{
lean_object* v_fvarId_5811_; lean_object* v_i_5812_; lean_object* v_offset_5813_; lean_object* v_y_5814_; lean_object* v_ty_5815_; lean_object* v_k_5816_; lean_object* v___x_5817_; 
v_fvarId_5811_ = lean_ctor_get(v_code_5434_, 0);
v_i_5812_ = lean_ctor_get(v_code_5434_, 1);
v_offset_5813_ = lean_ctor_get(v_code_5434_, 2);
v_y_5814_ = lean_ctor_get(v_code_5434_, 3);
v_ty_5815_ = lean_ctor_get(v_code_5434_, 4);
v_k_5816_ = lean_ctor_get(v_code_5434_, 5);
lean_inc_ref(v_k_5816_);
v___x_5817_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_k_5816_, v_a_5435_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
if (lean_obj_tag(v___x_5817_) == 0)
{
lean_object* v_a_5818_; lean_object* v___x_5819_; 
v_a_5818_ = lean_ctor_get(v___x_5817_, 0);
lean_inc(v_a_5818_);
lean_dec_ref(v___x_5817_);
lean_inc(v_fvarId_5811_);
v___x_5819_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_5811_, v_a_5435_, v_a_5436_);
if (lean_obj_tag(v___x_5819_) == 0)
{
lean_object* v___x_5821_; uint8_t v_isShared_5822_; uint8_t v_isSharedCheck_5845_; 
v_isSharedCheck_5845_ = !lean_is_exclusive(v___x_5819_);
if (v_isSharedCheck_5845_ == 0)
{
lean_object* v_unused_5846_; 
v_unused_5846_ = lean_ctor_get(v___x_5819_, 0);
lean_dec(v_unused_5846_);
v___x_5821_ = v___x_5819_;
v_isShared_5822_ = v_isSharedCheck_5845_;
goto v_resetjp_5820_;
}
else
{
lean_dec(v___x_5819_);
v___x_5821_ = lean_box(0);
v_isShared_5822_ = v_isSharedCheck_5845_;
goto v_resetjp_5820_;
}
v_resetjp_5820_:
{
size_t v___x_5823_; size_t v___x_5824_; uint8_t v___x_5825_; 
v___x_5823_ = lean_ptr_addr(v_k_5816_);
v___x_5824_ = lean_ptr_addr(v_a_5818_);
v___x_5825_ = lean_usize_dec_eq(v___x_5823_, v___x_5824_);
if (v___x_5825_ == 0)
{
lean_object* v___x_5827_; uint8_t v_isShared_5828_; uint8_t v_isSharedCheck_5835_; 
lean_inc_ref(v_ty_5815_);
lean_inc(v_y_5814_);
lean_inc(v_offset_5813_);
lean_inc(v_i_5812_);
lean_inc(v_fvarId_5811_);
v_isSharedCheck_5835_ = !lean_is_exclusive(v_code_5434_);
if (v_isSharedCheck_5835_ == 0)
{
lean_object* v_unused_5836_; lean_object* v_unused_5837_; lean_object* v_unused_5838_; lean_object* v_unused_5839_; lean_object* v_unused_5840_; lean_object* v_unused_5841_; 
v_unused_5836_ = lean_ctor_get(v_code_5434_, 5);
lean_dec(v_unused_5836_);
v_unused_5837_ = lean_ctor_get(v_code_5434_, 4);
lean_dec(v_unused_5837_);
v_unused_5838_ = lean_ctor_get(v_code_5434_, 3);
lean_dec(v_unused_5838_);
v_unused_5839_ = lean_ctor_get(v_code_5434_, 2);
lean_dec(v_unused_5839_);
v_unused_5840_ = lean_ctor_get(v_code_5434_, 1);
lean_dec(v_unused_5840_);
v_unused_5841_ = lean_ctor_get(v_code_5434_, 0);
lean_dec(v_unused_5841_);
v___x_5827_ = v_code_5434_;
v_isShared_5828_ = v_isSharedCheck_5835_;
goto v_resetjp_5826_;
}
else
{
lean_dec(v_code_5434_);
v___x_5827_ = lean_box(0);
v_isShared_5828_ = v_isSharedCheck_5835_;
goto v_resetjp_5826_;
}
v_resetjp_5826_:
{
lean_object* v___x_5830_; 
if (v_isShared_5828_ == 0)
{
lean_ctor_set(v___x_5827_, 5, v_a_5818_);
v___x_5830_ = v___x_5827_;
goto v_reusejp_5829_;
}
else
{
lean_object* v_reuseFailAlloc_5834_; 
v_reuseFailAlloc_5834_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_5834_, 0, v_fvarId_5811_);
lean_ctor_set(v_reuseFailAlloc_5834_, 1, v_i_5812_);
lean_ctor_set(v_reuseFailAlloc_5834_, 2, v_offset_5813_);
lean_ctor_set(v_reuseFailAlloc_5834_, 3, v_y_5814_);
lean_ctor_set(v_reuseFailAlloc_5834_, 4, v_ty_5815_);
lean_ctor_set(v_reuseFailAlloc_5834_, 5, v_a_5818_);
v___x_5830_ = v_reuseFailAlloc_5834_;
goto v_reusejp_5829_;
}
v_reusejp_5829_:
{
lean_object* v___x_5832_; 
if (v_isShared_5822_ == 0)
{
lean_ctor_set(v___x_5821_, 0, v___x_5830_);
v___x_5832_ = v___x_5821_;
goto v_reusejp_5831_;
}
else
{
lean_object* v_reuseFailAlloc_5833_; 
v_reuseFailAlloc_5833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5833_, 0, v___x_5830_);
v___x_5832_ = v_reuseFailAlloc_5833_;
goto v_reusejp_5831_;
}
v_reusejp_5831_:
{
return v___x_5832_;
}
}
}
}
else
{
lean_object* v___x_5843_; 
lean_dec(v_a_5818_);
if (v_isShared_5822_ == 0)
{
lean_ctor_set(v___x_5821_, 0, v_code_5434_);
v___x_5843_ = v___x_5821_;
goto v_reusejp_5842_;
}
else
{
lean_object* v_reuseFailAlloc_5844_; 
v_reuseFailAlloc_5844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5844_, 0, v_code_5434_);
v___x_5843_ = v_reuseFailAlloc_5844_;
goto v_reusejp_5842_;
}
v_reusejp_5842_:
{
return v___x_5843_;
}
}
}
}
else
{
lean_object* v_a_5847_; lean_object* v___x_5849_; uint8_t v_isShared_5850_; uint8_t v_isSharedCheck_5854_; 
lean_dec(v_a_5818_);
lean_dec_ref(v_code_5434_);
v_a_5847_ = lean_ctor_get(v___x_5819_, 0);
v_isSharedCheck_5854_ = !lean_is_exclusive(v___x_5819_);
if (v_isSharedCheck_5854_ == 0)
{
v___x_5849_ = v___x_5819_;
v_isShared_5850_ = v_isSharedCheck_5854_;
goto v_resetjp_5848_;
}
else
{
lean_inc(v_a_5847_);
lean_dec(v___x_5819_);
v___x_5849_ = lean_box(0);
v_isShared_5850_ = v_isSharedCheck_5854_;
goto v_resetjp_5848_;
}
v_resetjp_5848_:
{
lean_object* v___x_5852_; 
if (v_isShared_5850_ == 0)
{
v___x_5852_ = v___x_5849_;
goto v_reusejp_5851_;
}
else
{
lean_object* v_reuseFailAlloc_5853_; 
v_reuseFailAlloc_5853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5853_, 0, v_a_5847_);
v___x_5852_ = v_reuseFailAlloc_5853_;
goto v_reusejp_5851_;
}
v_reusejp_5851_:
{
return v___x_5852_;
}
}
}
}
else
{
lean_dec_ref(v_code_5434_);
return v___x_5817_;
}
}
default: 
{
lean_object* v___x_5855_; lean_object* v___x_5856_; 
lean_dec_ref(v_code_5434_);
v___x_5855_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__1, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__1);
v___x_5856_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2(v___x_5855_, v_a_5435_, v_a_5436_, v_a_5437_, v_a_5438_, v_a_5439_, v_a_5440_);
return v___x_5856_;
}
}
v___jp_5442_:
{
if (v___y_5445_ == 0)
{
lean_object* v___x_5446_; lean_object* v___x_5447_; 
lean_dec_ref(v_code_5434_);
v___x_5446_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5446_, 0, v___y_5444_);
lean_ctor_set(v___x_5446_, 1, v___y_5443_);
v___x_5447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5447_, 0, v___x_5446_);
return v___x_5447_;
}
else
{
lean_object* v___x_5448_; 
lean_dec_ref(v___y_5444_);
lean_dec_ref(v___y_5443_);
v___x_5448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5448_, 0, v_code_5434_);
return v___x_5448_;
}
}
v___jp_5449_:
{
lean_object* v___x_5451_; lean_object* v___x_5452_; lean_object* v___x_5453_; 
v___x_5451_ = lean_st_ref_take(v_a_5436_);
lean_dec(v___x_5451_);
v___x_5452_ = lean_st_ref_set(v_a_5436_, v___y_5450_);
v___x_5453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5453_, 0, v_code_5434_);
return v___x_5453_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__7(lean_object* v_cases_5857_, size_t v_sz_5858_, size_t v_i_5859_, lean_object* v_bs_5860_, lean_object* v___y_5861_, lean_object* v___y_5862_, lean_object* v___y_5863_, lean_object* v___y_5864_, lean_object* v___y_5865_, lean_object* v___y_5866_){
_start:
{
uint8_t v___x_5868_; 
v___x_5868_ = lean_usize_dec_lt(v_i_5859_, v_sz_5858_);
if (v___x_5868_ == 0)
{
lean_object* v___x_5869_; 
lean_dec_ref(v_cases_5857_);
v___x_5869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5869_, 0, v_bs_5860_);
return v___x_5869_;
}
else
{
lean_object* v___x_5870_; lean_object* v___x_5871_; lean_object* v___x_5872_; lean_object* v___x_5873_; lean_object* v___x_5874_; lean_object* v_v_5875_; lean_object* v_bs_x27_5876_; lean_object* v_a_5878_; 
v___x_5870_ = lean_st_ref_get(v___y_5862_);
v___x_5871_ = lean_st_ref_take(v___y_5862_);
lean_dec(v___x_5871_);
v___x_5872_ = lean_unsigned_to_nat(0u);
v___x_5873_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5874_ = lean_st_ref_set(v___y_5862_, v___x_5873_);
v_v_5875_ = lean_array_uget(v_bs_5860_, v_i_5859_);
v_bs_x27_5876_ = lean_array_uset(v_bs_5860_, v_i_5859_, v___x_5872_);
if (lean_obj_tag(v_v_5875_) == 1)
{
lean_object* v_info_5887_; lean_object* v_code_5888_; lean_object* v_discr_5889_; lean_object* v_borrowedValues_5890_; lean_object* v_derivedValMap_5891_; lean_object* v_varMap_5892_; lean_object* v_jpLiveVarMap_5893_; lean_object* v_idx_5894_; lean_object* v___y_5896_; lean_object* v___x_5911_; 
v_info_5887_ = lean_ctor_get(v_v_5875_, 0);
v_code_5888_ = lean_ctor_get(v_v_5875_, 1);
v_discr_5889_ = lean_ctor_get(v_cases_5857_, 2);
v_borrowedValues_5890_ = lean_ctor_get(v___y_5861_, 0);
v_derivedValMap_5891_ = lean_ctor_get(v___y_5861_, 1);
v_varMap_5892_ = lean_ctor_get(v___y_5861_, 2);
v_jpLiveVarMap_5893_ = lean_ctor_get(v___y_5861_, 3);
v_idx_5894_ = lean_ctor_get(v___y_5861_, 4);
v___x_5911_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6___redArg(v_varMap_5892_, v_discr_5889_);
if (lean_obj_tag(v___x_5911_) == 0)
{
lean_inc(v_varMap_5892_);
v___y_5896_ = v_varMap_5892_;
goto v___jp_5895_;
}
else
{
lean_object* v_val_5912_; uint8_t v_persistent_5913_; lean_object* v___x_5915_; uint8_t v_isShared_5916_; uint8_t v_isSharedCheck_5926_; 
v_val_5912_ = lean_ctor_get(v___x_5911_, 0);
lean_inc(v_val_5912_);
lean_dec_ref(v___x_5911_);
v_persistent_5913_ = lean_ctor_get_uint8(v_val_5912_, sizeof(void*)*1 + 2);
v_isSharedCheck_5926_ = !lean_is_exclusive(v_val_5912_);
if (v_isSharedCheck_5926_ == 0)
{
lean_object* v_unused_5927_; 
v_unused_5927_ = lean_ctor_get(v_val_5912_, 0);
lean_dec(v_unused_5927_);
v___x_5915_ = v_val_5912_;
v_isShared_5916_ = v_isSharedCheck_5926_;
goto v_resetjp_5914_;
}
else
{
lean_dec(v_val_5912_);
v___x_5915_ = lean_box(0);
v_isShared_5916_ = v_isSharedCheck_5926_;
goto v_resetjp_5914_;
}
v_resetjp_5914_:
{
lean_object* v___x_5917_; uint8_t v___x_5918_; uint8_t v___x_5919_; lean_object* v___x_5920_; lean_object* v___x_5921_; lean_object* v___x_5923_; 
v___x_5917_ = l_Lean_Compiler_LCNF_CtorInfo_type(v_info_5887_);
v___x_5918_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v___x_5917_);
v___x_5919_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v___x_5917_);
lean_dec_ref(v___x_5917_);
v___x_5920_ = lean_unsigned_to_nat(1u);
v___x_5921_ = lean_nat_add(v_idx_5894_, v___x_5920_);
if (v_isShared_5916_ == 0)
{
lean_ctor_set(v___x_5915_, 0, v___x_5921_);
v___x_5923_ = v___x_5915_;
goto v_reusejp_5922_;
}
else
{
lean_object* v_reuseFailAlloc_5925_; 
v_reuseFailAlloc_5925_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v_reuseFailAlloc_5925_, 0, v___x_5921_);
lean_ctor_set_uint8(v_reuseFailAlloc_5925_, sizeof(void*)*1 + 2, v_persistent_5913_);
v___x_5923_ = v_reuseFailAlloc_5925_;
goto v_reusejp_5922_;
}
v_reusejp_5922_:
{
lean_object* v___x_5924_; 
lean_ctor_set_uint8(v___x_5923_, sizeof(void*)*1, v___x_5918_);
lean_ctor_set_uint8(v___x_5923_, sizeof(void*)*1 + 1, v___x_5919_);
lean_inc(v_varMap_5892_);
lean_inc(v_discr_5889_);
v___x_5924_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_instSingletonFVarIdFVarIdSet_spec__1___redArg(v_discr_5889_, v___x_5923_, v_varMap_5892_);
v___y_5896_ = v___x_5924_;
goto v___jp_5895_;
}
}
}
v___jp_5895_:
{
lean_object* v___x_5897_; lean_object* v___x_5898_; lean_object* v___x_5899_; lean_object* v___x_5900_; 
v___x_5897_ = lean_unsigned_to_nat(1u);
v___x_5898_ = lean_nat_add(v_idx_5894_, v___x_5897_);
lean_inc(v_jpLiveVarMap_5893_);
lean_inc_ref(v_derivedValMap_5891_);
lean_inc_ref(v_borrowedValues_5890_);
v___x_5899_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5899_, 0, v_borrowedValues_5890_);
lean_ctor_set(v___x_5899_, 1, v_derivedValMap_5891_);
lean_ctor_set(v___x_5899_, 2, v___y_5896_);
lean_ctor_set(v___x_5899_, 3, v_jpLiveVarMap_5893_);
lean_ctor_set(v___x_5899_, 4, v___x_5898_);
lean_inc_ref(v_code_5888_);
v___x_5900_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_code_5888_, v___x_5899_, v___y_5862_, v___y_5863_, v___y_5864_, v___y_5865_, v___y_5866_);
lean_dec_ref(v___x_5899_);
if (lean_obj_tag(v___x_5900_) == 0)
{
lean_object* v_a_5901_; lean_object* v___x_5902_; 
v_a_5901_ = lean_ctor_get(v___x_5900_, 0);
lean_inc(v_a_5901_);
lean_dec_ref(v___x_5900_);
v___x_5902_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_5875_, v_a_5901_);
v_a_5878_ = v___x_5902_;
goto v___jp_5877_;
}
else
{
lean_object* v_a_5903_; lean_object* v___x_5905_; uint8_t v_isShared_5906_; uint8_t v_isSharedCheck_5910_; 
lean_dec_ref(v_v_5875_);
lean_dec_ref(v_bs_x27_5876_);
lean_dec(v___x_5870_);
lean_dec_ref(v_cases_5857_);
v_a_5903_ = lean_ctor_get(v___x_5900_, 0);
v_isSharedCheck_5910_ = !lean_is_exclusive(v___x_5900_);
if (v_isSharedCheck_5910_ == 0)
{
v___x_5905_ = v___x_5900_;
v_isShared_5906_ = v_isSharedCheck_5910_;
goto v_resetjp_5904_;
}
else
{
lean_inc(v_a_5903_);
lean_dec(v___x_5900_);
v___x_5905_ = lean_box(0);
v_isShared_5906_ = v_isSharedCheck_5910_;
goto v_resetjp_5904_;
}
v_resetjp_5904_:
{
lean_object* v___x_5908_; 
if (v_isShared_5906_ == 0)
{
v___x_5908_ = v___x_5905_;
goto v_reusejp_5907_;
}
else
{
lean_object* v_reuseFailAlloc_5909_; 
v_reuseFailAlloc_5909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5909_, 0, v_a_5903_);
v___x_5908_ = v_reuseFailAlloc_5909_;
goto v_reusejp_5907_;
}
v_reusejp_5907_:
{
return v___x_5908_;
}
}
}
}
}
else
{
lean_object* v_code_5928_; lean_object* v___x_5929_; 
v_code_5928_ = lean_ctor_get(v_v_5875_, 0);
lean_inc_ref(v_code_5928_);
v___x_5929_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_code_5928_, v___y_5861_, v___y_5862_, v___y_5863_, v___y_5864_, v___y_5865_, v___y_5866_);
if (lean_obj_tag(v___x_5929_) == 0)
{
lean_object* v_a_5930_; lean_object* v___x_5931_; 
v_a_5930_ = lean_ctor_get(v___x_5929_, 0);
lean_inc(v_a_5930_);
lean_dec_ref(v___x_5929_);
v___x_5931_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_5875_, v_a_5930_);
v_a_5878_ = v___x_5931_;
goto v___jp_5877_;
}
else
{
lean_object* v_a_5932_; lean_object* v___x_5934_; uint8_t v_isShared_5935_; uint8_t v_isSharedCheck_5939_; 
lean_dec_ref(v_v_5875_);
lean_dec_ref(v_bs_x27_5876_);
lean_dec(v___x_5870_);
lean_dec_ref(v_cases_5857_);
v_a_5932_ = lean_ctor_get(v___x_5929_, 0);
v_isSharedCheck_5939_ = !lean_is_exclusive(v___x_5929_);
if (v_isSharedCheck_5939_ == 0)
{
v___x_5934_ = v___x_5929_;
v_isShared_5935_ = v_isSharedCheck_5939_;
goto v_resetjp_5933_;
}
else
{
lean_inc(v_a_5932_);
lean_dec(v___x_5929_);
v___x_5934_ = lean_box(0);
v_isShared_5935_ = v_isSharedCheck_5939_;
goto v_resetjp_5933_;
}
v_resetjp_5933_:
{
lean_object* v___x_5937_; 
if (v_isShared_5935_ == 0)
{
v___x_5937_ = v___x_5934_;
goto v_reusejp_5936_;
}
else
{
lean_object* v_reuseFailAlloc_5938_; 
v_reuseFailAlloc_5938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5938_, 0, v_a_5932_);
v___x_5937_ = v_reuseFailAlloc_5938_;
goto v_reusejp_5936_;
}
v_reusejp_5936_:
{
return v___x_5937_;
}
}
}
}
v___jp_5877_:
{
lean_object* v___x_5879_; lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; size_t v___x_5883_; size_t v___x_5884_; lean_object* v___x_5885_; 
v___x_5879_ = lean_st_ref_get(v___y_5862_);
v___x_5880_ = lean_st_ref_take(v___y_5862_);
lean_dec(v___x_5880_);
v___x_5881_ = lean_st_ref_set(v___y_5862_, v___x_5870_);
v___x_5882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5882_, 0, v_a_5878_);
lean_ctor_set(v___x_5882_, 1, v___x_5879_);
v___x_5883_ = ((size_t)1ULL);
v___x_5884_ = lean_usize_add(v_i_5859_, v___x_5883_);
v___x_5885_ = lean_array_uset(v_bs_x27_5876_, v_i_5859_, v___x_5882_);
v_i_5859_ = v___x_5884_;
v_bs_5860_ = v___x_5885_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__7___boxed(lean_object* v_cases_5940_, lean_object* v_sz_5941_, lean_object* v_i_5942_, lean_object* v_bs_5943_, lean_object* v___y_5944_, lean_object* v___y_5945_, lean_object* v___y_5946_, lean_object* v___y_5947_, lean_object* v___y_5948_, lean_object* v___y_5949_, lean_object* v___y_5950_){
_start:
{
size_t v_sz_boxed_5951_; size_t v_i_boxed_5952_; lean_object* v_res_5953_; 
v_sz_boxed_5951_ = lean_unbox_usize(v_sz_5941_);
lean_dec(v_sz_5941_);
v_i_boxed_5952_ = lean_unbox_usize(v_i_5942_);
lean_dec(v_i_5942_);
v_res_5953_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__7(v_cases_5940_, v_sz_boxed_5951_, v_i_boxed_5952_, v_bs_5943_, v___y_5944_, v___y_5945_, v___y_5946_, v___y_5947_, v___y_5948_, v___y_5949_);
lean_dec(v___y_5949_);
lean_dec_ref(v___y_5948_);
lean_dec(v___y_5947_);
lean_dec_ref(v___y_5946_);
lean_dec(v___y_5945_);
lean_dec_ref(v___y_5944_);
return v_res_5953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___boxed(lean_object* v_code_5954_, lean_object* v_a_5955_, lean_object* v_a_5956_, lean_object* v_a_5957_, lean_object* v_a_5958_, lean_object* v_a_5959_, lean_object* v_a_5960_, lean_object* v_a_5961_){
_start:
{
lean_object* v_res_5962_; 
v_res_5962_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_code_5954_, v_a_5955_, v_a_5956_, v_a_5957_, v_a_5958_, v_a_5959_, v_a_5960_);
lean_dec(v_a_5960_);
lean_dec_ref(v_a_5959_);
lean_dec(v_a_5958_);
lean_dec_ref(v_a_5957_);
lean_dec(v_a_5956_);
lean_dec_ref(v_a_5955_);
return v_res_5962_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6(lean_object* v_00_u03b4_5963_, lean_object* v_t_5964_, lean_object* v_k_5965_){
_start:
{
lean_object* v___x_5966_; 
v___x_5966_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6___redArg(v_t_5964_, v_k_5965_);
return v___x_5966_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6___boxed(lean_object* v_00_u03b4_5967_, lean_object* v_t_5968_, lean_object* v_k_5969_){
_start:
{
lean_object* v_res_5970_; 
v_res_5970_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6(v_00_u03b4_5967_, v_t_5968_, v_k_5969_);
lean_dec(v_k_5969_);
lean_dec(v_t_5968_);
return v_res_5970_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_go(lean_object* v_decl_5971_, lean_object* v_code_5972_, lean_object* v_a_5973_, lean_object* v_a_5974_, lean_object* v_a_5975_, lean_object* v_a_5976_, lean_object* v_a_5977_, lean_object* v_a_5978_){
_start:
{
lean_object* v_toSignature_5980_; lean_object* v_params_5981_; lean_object* v___x_5982_; lean_object* v___x_5983_; uint8_t v___x_5984_; 
v_toSignature_5980_ = lean_ctor_get(v_decl_5971_, 0);
v_params_5981_ = lean_ctor_get(v_toSignature_5980_, 3);
v___x_5982_ = lean_unsigned_to_nat(0u);
v___x_5983_ = lean_array_get_size(v_params_5981_);
v___x_5984_ = lean_nat_dec_lt(v___x_5982_, v___x_5983_);
if (v___x_5984_ == 0)
{
lean_object* v___x_5985_; 
v___x_5985_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_code_5972_, v_a_5973_, v_a_5974_, v_a_5975_, v_a_5976_, v_a_5977_, v_a_5978_);
if (lean_obj_tag(v___x_5985_) == 0)
{
lean_object* v_a_5986_; lean_object* v___x_5987_; 
v_a_5986_ = lean_ctor_get(v___x_5985_, 0);
lean_inc(v_a_5986_);
lean_dec_ref(v___x_5985_);
v___x_5987_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(v_params_5981_, v_a_5986_, v_a_5973_, v_a_5974_, v_a_5975_, v_a_5976_, v_a_5977_, v_a_5978_);
return v___x_5987_;
}
else
{
return v___x_5985_;
}
}
else
{
uint8_t v___x_5988_; 
v___x_5988_ = lean_nat_dec_le(v___x_5983_, v___x_5983_);
if (v___x_5988_ == 0)
{
if (v___x_5984_ == 0)
{
lean_object* v___x_5989_; 
v___x_5989_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_code_5972_, v_a_5973_, v_a_5974_, v_a_5975_, v_a_5976_, v_a_5977_, v_a_5978_);
if (lean_obj_tag(v___x_5989_) == 0)
{
lean_object* v_a_5990_; lean_object* v___x_5991_; 
v_a_5990_ = lean_ctor_get(v___x_5989_, 0);
lean_inc(v_a_5990_);
lean_dec_ref(v___x_5989_);
v___x_5991_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(v_params_5981_, v_a_5990_, v_a_5973_, v_a_5974_, v_a_5975_, v_a_5976_, v_a_5977_, v_a_5978_);
return v___x_5991_;
}
else
{
return v___x_5989_;
}
}
else
{
size_t v___x_5992_; size_t v___x_5993_; lean_object* v___x_5994_; lean_object* v___x_5995_; 
v___x_5992_ = ((size_t)0ULL);
v___x_5993_ = lean_usize_of_nat(v___x_5983_);
lean_inc_ref(v_a_5973_);
v___x_5994_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3(v_params_5981_, v___x_5992_, v___x_5993_, v_a_5973_);
v___x_5995_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_code_5972_, v___x_5994_, v_a_5974_, v_a_5975_, v_a_5976_, v_a_5977_, v_a_5978_);
if (lean_obj_tag(v___x_5995_) == 0)
{
lean_object* v_a_5996_; lean_object* v___x_5997_; 
v_a_5996_ = lean_ctor_get(v___x_5995_, 0);
lean_inc(v_a_5996_);
lean_dec_ref(v___x_5995_);
v___x_5997_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(v_params_5981_, v_a_5996_, v___x_5994_, v_a_5974_, v_a_5975_, v_a_5976_, v_a_5977_, v_a_5978_);
lean_dec_ref(v___x_5994_);
return v___x_5997_;
}
else
{
lean_dec_ref(v___x_5994_);
return v___x_5995_;
}
}
}
else
{
size_t v___x_5998_; size_t v___x_5999_; lean_object* v___x_6000_; lean_object* v___x_6001_; 
v___x_5998_ = ((size_t)0ULL);
v___x_5999_ = lean_usize_of_nat(v___x_5983_);
lean_inc_ref(v_a_5973_);
v___x_6000_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3(v_params_5981_, v___x_5998_, v___x_5999_, v_a_5973_);
v___x_6001_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_code_5972_, v___x_6000_, v_a_5974_, v_a_5975_, v_a_5976_, v_a_5977_, v_a_5978_);
if (lean_obj_tag(v___x_6001_) == 0)
{
lean_object* v_a_6002_; lean_object* v___x_6003_; 
v_a_6002_ = lean_ctor_get(v___x_6001_, 0);
lean_inc(v_a_6002_);
lean_dec_ref(v___x_6001_);
v___x_6003_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(v_params_5981_, v_a_6002_, v___x_6000_, v_a_5974_, v_a_5975_, v_a_5976_, v_a_5977_, v_a_5978_);
lean_dec_ref(v___x_6000_);
return v___x_6003_;
}
else
{
lean_dec_ref(v___x_6000_);
return v___x_6001_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_go___boxed(lean_object* v_decl_6004_, lean_object* v_code_6005_, lean_object* v_a_6006_, lean_object* v_a_6007_, lean_object* v_a_6008_, lean_object* v_a_6009_, lean_object* v_a_6010_, lean_object* v_a_6011_, lean_object* v_a_6012_){
_start:
{
lean_object* v_res_6013_; 
v_res_6013_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_go(v_decl_6004_, v_code_6005_, v_a_6006_, v_a_6007_, v_a_6008_, v_a_6009_, v_a_6010_, v_a_6011_);
lean_dec(v_a_6011_);
lean_dec_ref(v_a_6010_);
lean_dec(v_a_6009_);
lean_dec_ref(v_a_6008_);
lean_dec(v_a_6007_);
lean_dec_ref(v_a_6006_);
lean_dec_ref(v_decl_6004_);
return v_res_6013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg(lean_object* v_f_6014_, lean_object* v_v_6015_, lean_object* v___y_6016_, lean_object* v___y_6017_, lean_object* v___y_6018_, lean_object* v___y_6019_){
_start:
{
if (lean_obj_tag(v_v_6015_) == 0)
{
lean_object* v_code_6021_; lean_object* v___x_6023_; uint8_t v_isShared_6024_; uint8_t v_isSharedCheck_6045_; 
v_code_6021_ = lean_ctor_get(v_v_6015_, 0);
v_isSharedCheck_6045_ = !lean_is_exclusive(v_v_6015_);
if (v_isSharedCheck_6045_ == 0)
{
v___x_6023_ = v_v_6015_;
v_isShared_6024_ = v_isSharedCheck_6045_;
goto v_resetjp_6022_;
}
else
{
lean_inc(v_code_6021_);
lean_dec(v_v_6015_);
v___x_6023_ = lean_box(0);
v_isShared_6024_ = v_isSharedCheck_6045_;
goto v_resetjp_6022_;
}
v_resetjp_6022_:
{
lean_object* v___x_6025_; 
lean_inc(v___y_6019_);
lean_inc_ref(v___y_6018_);
lean_inc(v___y_6017_);
lean_inc_ref(v___y_6016_);
v___x_6025_ = lean_apply_6(v_f_6014_, v_code_6021_, v___y_6016_, v___y_6017_, v___y_6018_, v___y_6019_, lean_box(0));
if (lean_obj_tag(v___x_6025_) == 0)
{
lean_object* v_a_6026_; lean_object* v___x_6028_; uint8_t v_isShared_6029_; uint8_t v_isSharedCheck_6036_; 
v_a_6026_ = lean_ctor_get(v___x_6025_, 0);
v_isSharedCheck_6036_ = !lean_is_exclusive(v___x_6025_);
if (v_isSharedCheck_6036_ == 0)
{
v___x_6028_ = v___x_6025_;
v_isShared_6029_ = v_isSharedCheck_6036_;
goto v_resetjp_6027_;
}
else
{
lean_inc(v_a_6026_);
lean_dec(v___x_6025_);
v___x_6028_ = lean_box(0);
v_isShared_6029_ = v_isSharedCheck_6036_;
goto v_resetjp_6027_;
}
v_resetjp_6027_:
{
lean_object* v___x_6031_; 
if (v_isShared_6024_ == 0)
{
lean_ctor_set(v___x_6023_, 0, v_a_6026_);
v___x_6031_ = v___x_6023_;
goto v_reusejp_6030_;
}
else
{
lean_object* v_reuseFailAlloc_6035_; 
v_reuseFailAlloc_6035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6035_, 0, v_a_6026_);
v___x_6031_ = v_reuseFailAlloc_6035_;
goto v_reusejp_6030_;
}
v_reusejp_6030_:
{
lean_object* v___x_6033_; 
if (v_isShared_6029_ == 0)
{
lean_ctor_set(v___x_6028_, 0, v___x_6031_);
v___x_6033_ = v___x_6028_;
goto v_reusejp_6032_;
}
else
{
lean_object* v_reuseFailAlloc_6034_; 
v_reuseFailAlloc_6034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6034_, 0, v___x_6031_);
v___x_6033_ = v_reuseFailAlloc_6034_;
goto v_reusejp_6032_;
}
v_reusejp_6032_:
{
return v___x_6033_;
}
}
}
}
else
{
lean_object* v_a_6037_; lean_object* v___x_6039_; uint8_t v_isShared_6040_; uint8_t v_isSharedCheck_6044_; 
lean_del_object(v___x_6023_);
v_a_6037_ = lean_ctor_get(v___x_6025_, 0);
v_isSharedCheck_6044_ = !lean_is_exclusive(v___x_6025_);
if (v_isSharedCheck_6044_ == 0)
{
v___x_6039_ = v___x_6025_;
v_isShared_6040_ = v_isSharedCheck_6044_;
goto v_resetjp_6038_;
}
else
{
lean_inc(v_a_6037_);
lean_dec(v___x_6025_);
v___x_6039_ = lean_box(0);
v_isShared_6040_ = v_isSharedCheck_6044_;
goto v_resetjp_6038_;
}
v_resetjp_6038_:
{
lean_object* v___x_6042_; 
if (v_isShared_6040_ == 0)
{
v___x_6042_ = v___x_6039_;
goto v_reusejp_6041_;
}
else
{
lean_object* v_reuseFailAlloc_6043_; 
v_reuseFailAlloc_6043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6043_, 0, v_a_6037_);
v___x_6042_ = v_reuseFailAlloc_6043_;
goto v_reusejp_6041_;
}
v_reusejp_6041_:
{
return v___x_6042_;
}
}
}
}
}
else
{
lean_object* v___x_6046_; 
lean_dec_ref(v_f_6014_);
v___x_6046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6046_, 0, v_v_6015_);
return v___x_6046_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg___boxed(lean_object* v_f_6047_, lean_object* v_v_6048_, lean_object* v___y_6049_, lean_object* v___y_6050_, lean_object* v___y_6051_, lean_object* v___y_6052_, lean_object* v___y_6053_){
_start:
{
lean_object* v_res_6054_; 
v_res_6054_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg(v_f_6047_, v_v_6048_, v___y_6049_, v___y_6050_, v___y_6051_, v___y_6052_);
lean_dec(v___y_6052_);
lean_dec_ref(v___y_6051_);
lean_dec(v___y_6050_);
lean_dec_ref(v___y_6049_);
return v_res_6054_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0(uint8_t v_pu_6055_, lean_object* v_f_6056_, lean_object* v_v_6057_, lean_object* v___y_6058_, lean_object* v___y_6059_, lean_object* v___y_6060_, lean_object* v___y_6061_){
_start:
{
lean_object* v___x_6063_; 
v___x_6063_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg(v_f_6056_, v_v_6057_, v___y_6058_, v___y_6059_, v___y_6060_, v___y_6061_);
return v___x_6063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___boxed(lean_object* v_pu_6064_, lean_object* v_f_6065_, lean_object* v_v_6066_, lean_object* v___y_6067_, lean_object* v___y_6068_, lean_object* v___y_6069_, lean_object* v___y_6070_, lean_object* v___y_6071_){
_start:
{
uint8_t v_pu_boxed_6072_; lean_object* v_res_6073_; 
v_pu_boxed_6072_ = lean_unbox(v_pu_6064_);
v_res_6073_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0(v_pu_boxed_6072_, v_f_6065_, v_v_6066_, v___y_6067_, v___y_6068_, v___y_6069_, v___y_6070_);
lean_dec(v___y_6070_);
lean_dec_ref(v___y_6069_);
lean_dec(v___y_6068_);
lean_dec_ref(v___y_6067_);
return v_res_6073_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___lam__0(lean_object* v_toSignature_6074_, lean_object* v_decl_6075_, lean_object* v_code_6076_, lean_object* v___y_6077_, lean_object* v___y_6078_, lean_object* v___y_6079_, lean_object* v___y_6080_){
_start:
{
lean_object* v_params_6082_; lean_object* v___x_6083_; 
v_params_6082_ = lean_ctor_get(v_toSignature_6074_, 3);
lean_inc_ref(v_code_6076_);
v___x_6083_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect(v_params_6082_, v_code_6076_, v___y_6077_, v___y_6078_, v___y_6079_, v___y_6080_);
if (lean_obj_tag(v___x_6083_) == 0)
{
lean_object* v_a_6084_; lean_object* v_fst_6085_; lean_object* v_snd_6086_; lean_object* v___x_6087_; lean_object* v___x_6088_; lean_object* v___x_6089_; lean_object* v___x_6090_; lean_object* v___x_6091_; lean_object* v___x_6092_; 
v_a_6084_ = lean_ctor_get(v___x_6083_, 0);
lean_inc(v_a_6084_);
lean_dec_ref(v___x_6083_);
v_fst_6085_ = lean_ctor_get(v_a_6084_, 0);
lean_inc(v_fst_6085_);
v_snd_6086_ = lean_ctor_get(v_a_6084_, 1);
lean_inc(v_snd_6086_);
lean_dec(v_a_6084_);
v___x_6087_ = lean_unsigned_to_nat(0u);
v___x_6088_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_6089_ = lean_st_mk_ref(v___x_6088_);
v___x_6090_ = lean_box(1);
v___x_6091_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6091_, 0, v_snd_6086_);
lean_ctor_set(v___x_6091_, 1, v_fst_6085_);
lean_ctor_set(v___x_6091_, 2, v___x_6090_);
lean_ctor_set(v___x_6091_, 3, v___x_6090_);
lean_ctor_set(v___x_6091_, 4, v___x_6087_);
v___x_6092_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_go(v_decl_6075_, v_code_6076_, v___x_6091_, v___x_6089_, v___y_6077_, v___y_6078_, v___y_6079_, v___y_6080_);
lean_dec_ref(v___x_6091_);
if (lean_obj_tag(v___x_6092_) == 0)
{
lean_object* v_a_6093_; lean_object* v___x_6095_; uint8_t v_isShared_6096_; uint8_t v_isSharedCheck_6101_; 
v_a_6093_ = lean_ctor_get(v___x_6092_, 0);
v_isSharedCheck_6101_ = !lean_is_exclusive(v___x_6092_);
if (v_isSharedCheck_6101_ == 0)
{
v___x_6095_ = v___x_6092_;
v_isShared_6096_ = v_isSharedCheck_6101_;
goto v_resetjp_6094_;
}
else
{
lean_inc(v_a_6093_);
lean_dec(v___x_6092_);
v___x_6095_ = lean_box(0);
v_isShared_6096_ = v_isSharedCheck_6101_;
goto v_resetjp_6094_;
}
v_resetjp_6094_:
{
lean_object* v___x_6097_; lean_object* v___x_6099_; 
v___x_6097_ = lean_st_ref_get(v___x_6089_);
lean_dec(v___x_6089_);
lean_dec(v___x_6097_);
if (v_isShared_6096_ == 0)
{
v___x_6099_ = v___x_6095_;
goto v_reusejp_6098_;
}
else
{
lean_object* v_reuseFailAlloc_6100_; 
v_reuseFailAlloc_6100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6100_, 0, v_a_6093_);
v___x_6099_ = v_reuseFailAlloc_6100_;
goto v_reusejp_6098_;
}
v_reusejp_6098_:
{
return v___x_6099_;
}
}
}
else
{
lean_dec(v___x_6089_);
return v___x_6092_;
}
}
else
{
lean_object* v_a_6102_; lean_object* v___x_6104_; uint8_t v_isShared_6105_; uint8_t v_isSharedCheck_6109_; 
lean_dec_ref(v_code_6076_);
v_a_6102_ = lean_ctor_get(v___x_6083_, 0);
v_isSharedCheck_6109_ = !lean_is_exclusive(v___x_6083_);
if (v_isSharedCheck_6109_ == 0)
{
v___x_6104_ = v___x_6083_;
v_isShared_6105_ = v_isSharedCheck_6109_;
goto v_resetjp_6103_;
}
else
{
lean_inc(v_a_6102_);
lean_dec(v___x_6083_);
v___x_6104_ = lean_box(0);
v_isShared_6105_ = v_isSharedCheck_6109_;
goto v_resetjp_6103_;
}
v_resetjp_6103_:
{
lean_object* v___x_6107_; 
if (v_isShared_6105_ == 0)
{
v___x_6107_ = v___x_6104_;
goto v_reusejp_6106_;
}
else
{
lean_object* v_reuseFailAlloc_6108_; 
v_reuseFailAlloc_6108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6108_, 0, v_a_6102_);
v___x_6107_ = v_reuseFailAlloc_6108_;
goto v_reusejp_6106_;
}
v_reusejp_6106_:
{
return v___x_6107_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___lam__0___boxed(lean_object* v_toSignature_6110_, lean_object* v_decl_6111_, lean_object* v_code_6112_, lean_object* v___y_6113_, lean_object* v___y_6114_, lean_object* v___y_6115_, lean_object* v___y_6116_, lean_object* v___y_6117_){
_start:
{
lean_object* v_res_6118_; 
v_res_6118_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___lam__0(v_toSignature_6110_, v_decl_6111_, v_code_6112_, v___y_6113_, v___y_6114_, v___y_6115_, v___y_6116_);
lean_dec(v___y_6116_);
lean_dec_ref(v___y_6115_);
lean_dec(v___y_6114_);
lean_dec_ref(v___y_6113_);
lean_dec_ref(v_decl_6111_);
lean_dec_ref(v_toSignature_6110_);
return v_res_6118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc(lean_object* v_decl_6119_, lean_object* v_a_6120_, lean_object* v_a_6121_, lean_object* v_a_6122_, lean_object* v_a_6123_){
_start:
{
lean_object* v_toSignature_6125_; lean_object* v_value_6126_; uint8_t v_recursive_6127_; lean_object* v_inlineAttr_x3f_6128_; lean_object* v___f_6129_; lean_object* v___x_6130_; 
v_toSignature_6125_ = lean_ctor_get(v_decl_6119_, 0);
lean_inc_ref_n(v_toSignature_6125_, 2);
v_value_6126_ = lean_ctor_get(v_decl_6119_, 1);
lean_inc_ref(v_value_6126_);
v_recursive_6127_ = lean_ctor_get_uint8(v_decl_6119_, sizeof(void*)*3);
v_inlineAttr_x3f_6128_ = lean_ctor_get(v_decl_6119_, 2);
lean_inc(v_inlineAttr_x3f_6128_);
v___f_6129_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___lam__0___boxed), 8, 2);
lean_closure_set(v___f_6129_, 0, v_toSignature_6125_);
lean_closure_set(v___f_6129_, 1, v_decl_6119_);
v___x_6130_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg(v___f_6129_, v_value_6126_, v_a_6120_, v_a_6121_, v_a_6122_, v_a_6123_);
if (lean_obj_tag(v___x_6130_) == 0)
{
lean_object* v_a_6131_; lean_object* v___x_6133_; uint8_t v_isShared_6134_; uint8_t v_isSharedCheck_6139_; 
v_a_6131_ = lean_ctor_get(v___x_6130_, 0);
v_isSharedCheck_6139_ = !lean_is_exclusive(v___x_6130_);
if (v_isSharedCheck_6139_ == 0)
{
v___x_6133_ = v___x_6130_;
v_isShared_6134_ = v_isSharedCheck_6139_;
goto v_resetjp_6132_;
}
else
{
lean_inc(v_a_6131_);
lean_dec(v___x_6130_);
v___x_6133_ = lean_box(0);
v_isShared_6134_ = v_isSharedCheck_6139_;
goto v_resetjp_6132_;
}
v_resetjp_6132_:
{
lean_object* v___x_6135_; lean_object* v___x_6137_; 
v___x_6135_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_6135_, 0, v_toSignature_6125_);
lean_ctor_set(v___x_6135_, 1, v_a_6131_);
lean_ctor_set(v___x_6135_, 2, v_inlineAttr_x3f_6128_);
lean_ctor_set_uint8(v___x_6135_, sizeof(void*)*3, v_recursive_6127_);
if (v_isShared_6134_ == 0)
{
lean_ctor_set(v___x_6133_, 0, v___x_6135_);
v___x_6137_ = v___x_6133_;
goto v_reusejp_6136_;
}
else
{
lean_object* v_reuseFailAlloc_6138_; 
v_reuseFailAlloc_6138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6138_, 0, v___x_6135_);
v___x_6137_ = v_reuseFailAlloc_6138_;
goto v_reusejp_6136_;
}
v_reusejp_6136_:
{
return v___x_6137_;
}
}
}
else
{
lean_object* v_a_6140_; lean_object* v___x_6142_; uint8_t v_isShared_6143_; uint8_t v_isSharedCheck_6147_; 
lean_dec(v_inlineAttr_x3f_6128_);
lean_dec_ref(v_toSignature_6125_);
v_a_6140_ = lean_ctor_get(v___x_6130_, 0);
v_isSharedCheck_6147_ = !lean_is_exclusive(v___x_6130_);
if (v_isSharedCheck_6147_ == 0)
{
v___x_6142_ = v___x_6130_;
v_isShared_6143_ = v_isSharedCheck_6147_;
goto v_resetjp_6141_;
}
else
{
lean_inc(v_a_6140_);
lean_dec(v___x_6130_);
v___x_6142_ = lean_box(0);
v_isShared_6143_ = v_isSharedCheck_6147_;
goto v_resetjp_6141_;
}
v_resetjp_6141_:
{
lean_object* v___x_6145_; 
if (v_isShared_6143_ == 0)
{
v___x_6145_ = v___x_6142_;
goto v_reusejp_6144_;
}
else
{
lean_object* v_reuseFailAlloc_6146_; 
v_reuseFailAlloc_6146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6146_, 0, v_a_6140_);
v___x_6145_ = v_reuseFailAlloc_6146_;
goto v_reusejp_6144_;
}
v_reusejp_6144_:
{
return v___x_6145_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___boxed(lean_object* v_decl_6148_, lean_object* v_a_6149_, lean_object* v_a_6150_, lean_object* v_a_6151_, lean_object* v_a_6152_, lean_object* v_a_6153_){
_start:
{
lean_object* v_res_6154_; 
v_res_6154_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc(v_decl_6148_, v_a_6149_, v_a_6150_, v_a_6151_, v_a_6152_);
lean_dec(v_a_6152_);
lean_dec_ref(v_a_6151_);
lean_dec(v_a_6150_);
lean_dec_ref(v_a_6149_);
return v_res_6154_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_runExplicitRc_spec__0(size_t v_sz_6155_, size_t v_i_6156_, lean_object* v_bs_6157_, lean_object* v___y_6158_, lean_object* v___y_6159_, lean_object* v___y_6160_, lean_object* v___y_6161_){
_start:
{
uint8_t v___x_6163_; 
v___x_6163_ = lean_usize_dec_lt(v_i_6156_, v_sz_6155_);
if (v___x_6163_ == 0)
{
lean_object* v___x_6164_; 
v___x_6164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6164_, 0, v_bs_6157_);
return v___x_6164_;
}
else
{
lean_object* v_v_6165_; lean_object* v___x_6166_; 
v_v_6165_ = lean_array_uget_borrowed(v_bs_6157_, v_i_6156_);
lean_inc(v_v_6165_);
v___x_6166_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc(v_v_6165_, v___y_6158_, v___y_6159_, v___y_6160_, v___y_6161_);
if (lean_obj_tag(v___x_6166_) == 0)
{
lean_object* v_a_6167_; lean_object* v___x_6168_; lean_object* v_bs_x27_6169_; size_t v___x_6170_; size_t v___x_6171_; lean_object* v___x_6172_; 
v_a_6167_ = lean_ctor_get(v___x_6166_, 0);
lean_inc(v_a_6167_);
lean_dec_ref(v___x_6166_);
v___x_6168_ = lean_unsigned_to_nat(0u);
v_bs_x27_6169_ = lean_array_uset(v_bs_6157_, v_i_6156_, v___x_6168_);
v___x_6170_ = ((size_t)1ULL);
v___x_6171_ = lean_usize_add(v_i_6156_, v___x_6170_);
v___x_6172_ = lean_array_uset(v_bs_x27_6169_, v_i_6156_, v_a_6167_);
v_i_6156_ = v___x_6171_;
v_bs_6157_ = v___x_6172_;
goto _start;
}
else
{
lean_object* v_a_6174_; lean_object* v___x_6176_; uint8_t v_isShared_6177_; uint8_t v_isSharedCheck_6181_; 
lean_dec_ref(v_bs_6157_);
v_a_6174_ = lean_ctor_get(v___x_6166_, 0);
v_isSharedCheck_6181_ = !lean_is_exclusive(v___x_6166_);
if (v_isSharedCheck_6181_ == 0)
{
v___x_6176_ = v___x_6166_;
v_isShared_6177_ = v_isSharedCheck_6181_;
goto v_resetjp_6175_;
}
else
{
lean_inc(v_a_6174_);
lean_dec(v___x_6166_);
v___x_6176_ = lean_box(0);
v_isShared_6177_ = v_isSharedCheck_6181_;
goto v_resetjp_6175_;
}
v_resetjp_6175_:
{
lean_object* v___x_6179_; 
if (v_isShared_6177_ == 0)
{
v___x_6179_ = v___x_6176_;
goto v_reusejp_6178_;
}
else
{
lean_object* v_reuseFailAlloc_6180_; 
v_reuseFailAlloc_6180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6180_, 0, v_a_6174_);
v___x_6179_ = v_reuseFailAlloc_6180_;
goto v_reusejp_6178_;
}
v_reusejp_6178_:
{
return v___x_6179_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_runExplicitRc_spec__0___boxed(lean_object* v_sz_6182_, lean_object* v_i_6183_, lean_object* v_bs_6184_, lean_object* v___y_6185_, lean_object* v___y_6186_, lean_object* v___y_6187_, lean_object* v___y_6188_, lean_object* v___y_6189_){
_start:
{
size_t v_sz_boxed_6190_; size_t v_i_boxed_6191_; lean_object* v_res_6192_; 
v_sz_boxed_6190_ = lean_unbox_usize(v_sz_6182_);
lean_dec(v_sz_6182_);
v_i_boxed_6191_ = lean_unbox_usize(v_i_6183_);
lean_dec(v_i_6183_);
v_res_6192_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_runExplicitRc_spec__0(v_sz_boxed_6190_, v_i_boxed_6191_, v_bs_6184_, v___y_6185_, v___y_6186_, v___y_6187_, v___y_6188_);
lean_dec(v___y_6188_);
lean_dec_ref(v___y_6187_);
lean_dec(v___y_6186_);
lean_dec_ref(v___y_6185_);
return v_res_6192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_runExplicitRc(lean_object* v_decls_6193_, lean_object* v_a_6194_, lean_object* v_a_6195_, lean_object* v_a_6196_, lean_object* v_a_6197_){
_start:
{
size_t v_sz_6199_; size_t v___x_6200_; lean_object* v___x_6201_; 
v_sz_6199_ = lean_array_size(v_decls_6193_);
v___x_6200_ = ((size_t)0ULL);
v___x_6201_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_runExplicitRc_spec__0(v_sz_6199_, v___x_6200_, v_decls_6193_, v_a_6194_, v_a_6195_, v_a_6196_, v_a_6197_);
return v___x_6201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_runExplicitRc___boxed(lean_object* v_decls_6202_, lean_object* v_a_6203_, lean_object* v_a_6204_, lean_object* v_a_6205_, lean_object* v_a_6206_, lean_object* v_a_6207_){
_start:
{
lean_object* v_res_6208_; 
v_res_6208_ = l_Lean_Compiler_LCNF_runExplicitRc(v_decls_6202_, v_a_6203_, v_a_6204_, v_a_6205_, v_a_6206_);
lean_dec(v_a_6206_);
lean_dec_ref(v_a_6205_);
lean_dec(v_a_6204_);
lean_dec_ref(v_a_6203_);
return v_res_6208_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_explicitRc___closed__3(void){
_start:
{
lean_object* v___x_6213_; lean_object* v___x_6214_; uint8_t v___x_6215_; lean_object* v___x_6216_; lean_object* v___x_6217_; 
v___x_6213_ = lean_unsigned_to_nat(0u);
v___x_6214_ = ((lean_object*)(l_Lean_Compiler_LCNF_explicitRc___closed__2));
v___x_6215_ = 2;
v___x_6216_ = ((lean_object*)(l_Lean_Compiler_LCNF_explicitRc___closed__1));
v___x_6217_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_6216_, v___x_6215_, v___x_6214_, v___x_6213_);
return v___x_6217_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_explicitRc(void){
_start:
{
lean_object* v___x_6218_; 
v___x_6218_ = lean_obj_once(&l_Lean_Compiler_LCNF_explicitRc___closed__3, &l_Lean_Compiler_LCNF_explicitRc___closed__3_once, _init_l_Lean_Compiler_LCNF_explicitRc___closed__3);
return v___x_6218_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6274_; lean_object* v___x_6275_; lean_object* v___x_6276_; 
v___x_6274_ = lean_unsigned_to_nat(3791338971u);
v___x_6275_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_));
v___x_6276_ = l_Lean_Name_num___override(v___x_6275_, v___x_6274_);
return v___x_6276_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6278_; lean_object* v___x_6279_; lean_object* v___x_6280_; 
v___x_6278_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_));
v___x_6279_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_);
v___x_6280_ = l_Lean_Name_str___override(v___x_6279_, v___x_6278_);
return v___x_6280_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6282_; lean_object* v___x_6283_; lean_object* v___x_6284_; 
v___x_6282_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_));
v___x_6283_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_);
v___x_6284_ = l_Lean_Name_str___override(v___x_6283_, v___x_6282_);
return v___x_6284_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6285_; lean_object* v___x_6286_; lean_object* v___x_6287_; 
v___x_6285_ = lean_unsigned_to_nat(2u);
v___x_6286_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_);
v___x_6287_ = l_Lean_Name_num___override(v___x_6286_, v___x_6285_);
return v___x_6287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6289_; uint8_t v___x_6290_; lean_object* v___x_6291_; lean_object* v___x_6292_; 
v___x_6289_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_));
v___x_6290_ = 1;
v___x_6291_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_);
v___x_6292_ = l_Lean_registerTraceClass(v___x_6289_, v___x_6290_, v___x_6291_);
return v___x_6292_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2____boxed(lean_object* v_a_6293_){
_start:
{
lean_object* v_res_6294_; 
v_res_6294_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_();
return v_res_6294_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PrettyPrinter(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ExplicitRC(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default = _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default();
lean_mark_persistent(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default);
l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo = _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo();
lean_mark_persistent(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo);
l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default = _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default();
lean_mark_persistent(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars_default);
l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars = _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars();
lean_mark_persistent(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars);
l_Lean_Compiler_LCNF_explicitRc = _init_l_Lean_Compiler_LCNF_explicitRc();
lean_mark_persistent(l_Lean_Compiler_LCNF_explicitRc);
res = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ExplicitRC(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PrettyPrinter(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ExplicitRC(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ExplicitRC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ExplicitRC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ExplicitRC(builtin);
}
#ifdef __cplusplus
}
#endif
