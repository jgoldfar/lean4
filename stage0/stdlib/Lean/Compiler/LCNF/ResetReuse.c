// Lean compiler output
// Module: Lean.Compiler.LCNF.ResetReuse
// Imports: public import Lean.Compiler.LCNF.CompilerM public import Lean.Compiler.LCNF.PassManager import Lean.Compiler.LCNF.LiveVars import Lean.Compiler.LCNF.DependsOn import Lean.Compiler.LCNF.PhaseExt import Lean.Compiler.LCNF.PropagateBorrow
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
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEST(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
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
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(uint8_t, lean_object*);
extern lean_object* l_Lean_instSingletonFVarIdFVarIdSet;
uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn(uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_CodeDecl_dependsOn(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(uint8_t, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1(uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addLetDecl(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_isFVarLiveIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getConfig___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_applyOwnedness(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
uint8_t l_Lean_Compiler_LCNF_instBEqOwnedness_beq(uint8_t, uint8_t);
uint8_t l_Lean_Compiler_LCNF_CtorInfo_isScalar(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0(lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateContImp"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "_private.Lean.Compiler.LCNF.ResetReuse.0.Lean.Compiler.LCNF.S.go"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.Compiler.LCNF.ResetReuse"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tobj"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__2_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__2_value),LEAN_SCALAR_PTR_LITERAL(25, 168, 138, 20, 203, 141, 233, 12)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__3_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "_private.Lean.Compiler.LCNF.ResetReuse.0.Lean.Compiler.LCNF.D.go"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = "_private.Lean.Compiler.LCNF.ResetReuse.0.Lean.Compiler.LCNF.Code.insertResetReuse"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3(uint8_t, lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 100, .m_capacity = 100, .m_length = 99, .m_data = "_private.Lean.Compiler.LCNF.ResetReuse.0.Lean.Compiler.LCNF.Decl.insertResetReuseCore.collectResets"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_insertResetReuse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "resetReuse"};
static const lean_object* l_Lean_Compiler_LCNF_insertResetReuse___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_insertResetReuse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(148, 201, 93, 114, 179, 16, 247, 72)}};
static const lean_object* l_Lean_Compiler_LCNF_insertResetReuse___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_insertResetReuse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_insertResetReuse___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_insertResetReuse___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_insertResetReuse___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_insertResetReuse;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_insertResetReuse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(42, 22, 75, 214, 119, 69, 48, 225)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ResetReuse"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 165, 194, 12, 198, 157, 117, 65)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(105, 150, 117, 254, 63, 70, 178, 234)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(44, 242, 201, 181, 138, 172, 149, 255)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(182, 154, 112, 50, 132, 225, 68, 23)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(31, 182, 243, 139, 183, 248, 56, 98)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(190, 130, 185, 126, 60, 87, 109, 106)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(223, 224, 225, 246, 174, 48, 45, 78)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(146, 47, 104, 191, 68, 113, 248, 179)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(96, 193, 129, 108, 61, 130, 124, 18)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(217, 251, 249, 254, 208, 86, 150, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(8, 85, 80, 162, 8, 82, 178, 101)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(lean_object* v_c_u2081_1_, lean_object* v_c_u2082_2_, lean_object* v_a_3_){
_start:
{
lean_object* v_name_5_; lean_object* v_size_6_; lean_object* v_usize_7_; lean_object* v_ssize_8_; lean_object* v_name_9_; lean_object* v_size_10_; lean_object* v_usize_11_; lean_object* v_ssize_12_; uint8_t v___y_14_; uint8_t v___x_28_; 
v_name_5_ = lean_ctor_get(v_c_u2081_1_, 0);
v_size_6_ = lean_ctor_get(v_c_u2081_1_, 2);
v_usize_7_ = lean_ctor_get(v_c_u2081_1_, 3);
v_ssize_8_ = lean_ctor_get(v_c_u2081_1_, 4);
v_name_9_ = lean_ctor_get(v_c_u2082_2_, 0);
v_size_10_ = lean_ctor_get(v_c_u2082_2_, 2);
v_usize_11_ = lean_ctor_get(v_c_u2082_2_, 3);
v_ssize_12_ = lean_ctor_get(v_c_u2082_2_, 4);
v___x_28_ = lean_nat_dec_eq(v_size_6_, v_size_10_);
if (v___x_28_ == 0)
{
v___y_14_ = v___x_28_;
goto v___jp_13_;
}
else
{
uint8_t v___x_29_; 
v___x_29_ = lean_nat_dec_eq(v_usize_7_, v_usize_11_);
v___y_14_ = v___x_29_;
goto v___jp_13_;
}
v___jp_13_:
{
if (v___y_14_ == 0)
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_box(v___y_14_);
v___x_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
return v___x_16_;
}
else
{
uint8_t v___x_17_; 
v___x_17_ = lean_nat_dec_eq(v_ssize_8_, v_ssize_12_);
if (v___x_17_ == 0)
{
lean_object* v___x_18_; lean_object* v___x_19_; 
v___x_18_ = lean_box(v___x_17_);
v___x_19_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_19_, 0, v___x_18_);
return v___x_19_;
}
else
{
uint8_t v_relaxedReuse_20_; 
v_relaxedReuse_20_ = lean_ctor_get_uint8(v_a_3_, sizeof(void*)*2);
if (v_relaxedReuse_20_ == 0)
{
lean_object* v___x_21_; lean_object* v___x_22_; uint8_t v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_21_ = l_Lean_Name_getPrefix(v_name_5_);
v___x_22_ = l_Lean_Name_getPrefix(v_name_9_);
v___x_23_ = lean_name_eq(v___x_21_, v___x_22_);
lean_dec(v___x_22_);
lean_dec(v___x_21_);
v___x_24_ = lean_box(v___x_23_);
v___x_25_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
return v___x_25_;
}
else
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = lean_box(v_relaxedReuse_20_);
v___x_27_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
return v___x_27_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg___boxed(lean_object* v_c_u2081_30_, lean_object* v_c_u2082_31_, lean_object* v_a_32_, lean_object* v_a_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(v_c_u2081_30_, v_c_u2082_31_, v_a_32_);
lean_dec_ref(v_a_32_);
lean_dec_ref(v_c_u2082_31_);
lean_dec_ref(v_c_u2081_30_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse(lean_object* v_c_u2081_35_, lean_object* v_c_u2082_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(v_c_u2081_35_, v_c_u2082_36_, v_a_37_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___boxed(lean_object* v_c_u2081_44_, lean_object* v_c_u2082_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse(v_c_u2081_44_, v_c_u2082_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_a_46_);
lean_dec_ref(v_c_u2082_45_);
lean_dec_ref(v_c_u2081_44_);
return v_res_52_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0(void){
_start:
{
uint8_t v___x_53_; lean_object* v___x_54_; 
v___x_53_ = 1;
v___x_54_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1(v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0(lean_object* v_msg_55_){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0);
v___x_57_ = lean_panic_fn(v___x_56_, v_msg_55_);
return v___x_57_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0(void){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_instMonadEST(lean_box(0), lean_box(0));
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(lean_object* v_msg_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v_toApplicative_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_107_; 
v___x_68_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0);
v___x_69_ = l_ReaderT_instMonad___redArg(v___x_68_);
v_toApplicative_70_ = lean_ctor_get(v___x_69_, 0);
v_isSharedCheck_107_ = !lean_is_exclusive(v___x_69_);
if (v_isSharedCheck_107_ == 0)
{
lean_object* v_unused_108_; 
v_unused_108_ = lean_ctor_get(v___x_69_, 1);
lean_dec(v_unused_108_);
v___x_72_ = v___x_69_;
v_isShared_73_ = v_isSharedCheck_107_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_toApplicative_70_);
lean_dec(v___x_69_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_107_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v_toFunctor_74_; lean_object* v_toSeq_75_; lean_object* v_toSeqLeft_76_; lean_object* v_toSeqRight_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_105_; 
v_toFunctor_74_ = lean_ctor_get(v_toApplicative_70_, 0);
v_toSeq_75_ = lean_ctor_get(v_toApplicative_70_, 2);
v_toSeqLeft_76_ = lean_ctor_get(v_toApplicative_70_, 3);
v_toSeqRight_77_ = lean_ctor_get(v_toApplicative_70_, 4);
v_isSharedCheck_105_ = !lean_is_exclusive(v_toApplicative_70_);
if (v_isSharedCheck_105_ == 0)
{
lean_object* v_unused_106_; 
v_unused_106_ = lean_ctor_get(v_toApplicative_70_, 1);
lean_dec(v_unused_106_);
v___x_79_ = v_toApplicative_70_;
v_isShared_80_ = v_isSharedCheck_105_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_toSeqRight_77_);
lean_inc(v_toSeqLeft_76_);
lean_inc(v_toSeq_75_);
lean_inc(v_toFunctor_74_);
lean_dec(v_toApplicative_70_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_105_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___f_81_; lean_object* v___f_82_; lean_object* v___f_83_; lean_object* v___f_84_; lean_object* v___x_85_; lean_object* v___f_86_; lean_object* v___f_87_; lean_object* v___f_88_; lean_object* v___x_90_; 
v___f_81_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1));
v___f_82_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2));
lean_inc_ref(v_toFunctor_74_);
v___f_83_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_83_, 0, v_toFunctor_74_);
v___f_84_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_84_, 0, v_toFunctor_74_);
v___x_85_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_85_, 0, v___f_83_);
lean_ctor_set(v___x_85_, 1, v___f_84_);
v___f_86_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_86_, 0, v_toSeqRight_77_);
v___f_87_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_87_, 0, v_toSeqLeft_76_);
v___f_88_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_88_, 0, v_toSeq_75_);
if (v_isShared_80_ == 0)
{
lean_ctor_set(v___x_79_, 4, v___f_86_);
lean_ctor_set(v___x_79_, 3, v___f_87_);
lean_ctor_set(v___x_79_, 2, v___f_88_);
lean_ctor_set(v___x_79_, 1, v___f_81_);
lean_ctor_set(v___x_79_, 0, v___x_85_);
v___x_90_ = v___x_79_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v___x_85_);
lean_ctor_set(v_reuseFailAlloc_104_, 1, v___f_81_);
lean_ctor_set(v_reuseFailAlloc_104_, 2, v___f_88_);
lean_ctor_set(v_reuseFailAlloc_104_, 3, v___f_87_);
lean_ctor_set(v_reuseFailAlloc_104_, 4, v___f_86_);
v___x_90_ = v_reuseFailAlloc_104_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
lean_object* v___x_92_; 
if (v_isShared_73_ == 0)
{
lean_ctor_set(v___x_72_, 1, v___f_82_);
lean_ctor_set(v___x_72_, 0, v___x_90_);
v___x_92_ = v___x_72_;
goto v_reusejp_91_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_90_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v___f_82_);
v___x_92_ = v_reuseFailAlloc_103_;
goto v_reusejp_91_;
}
v_reusejp_91_:
{
lean_object* v___x_93_; lean_object* v___x_94_; uint8_t v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___f_99_; lean_object* v___f_100_; lean_object* v___x_3796__overap_101_; lean_object* v___x_102_; 
v___x_93_ = l_ReaderT_instMonad___redArg(v___x_92_);
v___x_94_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0);
v___x_95_ = 0;
v___x_96_ = lean_box(v___x_95_);
v___x_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_94_);
lean_ctor_set(v___x_97_, 1, v___x_96_);
v___x_98_ = l_instInhabitedOfMonad___redArg(v___x_93_, v___x_97_);
v___f_99_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_99_, 0, v___x_98_);
v___f_100_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_100_, 0, v___f_99_);
v___x_3796__overap_101_ = lean_panic_fn(v___f_100_, v_msg_61_);
v___x_102_ = lean_apply_6(v___x_3796__overap_101_, v___y_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_, lean_box(0));
return v___x_102_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___boxed(lean_object* v_msg_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(v_msg_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_);
return v_res_116_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(lean_object* v_as_117_, size_t v_i_118_, size_t v_stop_119_){
_start:
{
uint8_t v___x_120_; 
v___x_120_ = lean_usize_dec_eq(v_i_118_, v_stop_119_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = lean_array_uget_borrowed(v_as_117_, v_i_118_);
v___x_122_ = lean_unbox(v___x_121_);
if (v___x_122_ == 0)
{
size_t v___x_123_; size_t v___x_124_; 
v___x_123_ = ((size_t)1ULL);
v___x_124_ = lean_usize_add(v_i_118_, v___x_123_);
v_i_118_ = v___x_124_;
goto _start;
}
else
{
uint8_t v___x_126_; 
v___x_126_ = lean_unbox(v___x_121_);
return v___x_126_;
}
}
else
{
uint8_t v___x_127_; 
v___x_127_ = 0;
return v___x_127_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2___boxed(lean_object* v_as_128_, lean_object* v_i_129_, lean_object* v_stop_130_){
_start:
{
size_t v_i_boxed_131_; size_t v_stop_boxed_132_; uint8_t v_res_133_; lean_object* v_r_134_; 
v_i_boxed_131_ = lean_unbox_usize(v_i_129_);
lean_dec(v_i_129_);
v_stop_boxed_132_ = lean_unbox_usize(v_stop_130_);
lean_dec(v_stop_130_);
v_res_133_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(v_as_128_, v_i_boxed_131_, v_stop_boxed_132_);
lean_dec_ref(v_as_128_);
v_r_134_ = lean_box(v_res_133_);
return v_r_134_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3(void){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_138_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_139_ = lean_unsigned_to_nat(9u);
v___x_140_ = lean_unsigned_to_nat(627u);
v___x_141_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__1));
v___x_142_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__0));
v___x_143_ = l_mkPanicMessageWithDecl(v___x_142_, v___x_141_, v___x_140_, v___x_139_, v___x_138_);
return v___x_143_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_146_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_147_ = lean_unsigned_to_nat(61u);
v___x_148_ = lean_unsigned_to_nat(125u);
v___x_149_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__5));
v___x_150_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_151_ = l_mkPanicMessageWithDecl(v___x_150_, v___x_149_, v___x_148_, v___x_147_, v___x_146_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(lean_object* v_info_152_, lean_object* v_w_153_, lean_object* v_c_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_){
_start:
{
uint8_t v___y_162_; lean_object* v___y_163_; lean_object* v_k_168_; lean_object* v___y_169_; lean_object* v___y_170_; lean_object* v___y_171_; lean_object* v___y_172_; lean_object* v___y_173_; 
switch(lean_obj_tag(v_c_154_))
{
case 0:
{
lean_object* v_decl_386_; lean_object* v_value_387_; 
v_decl_386_ = lean_ctor_get(v_c_154_, 0);
lean_inc_ref(v_decl_386_);
v_value_387_ = lean_ctor_get(v_decl_386_, 3);
lean_inc(v_value_387_);
if (lean_obj_tag(v_value_387_) == 5)
{
lean_object* v_k_388_; lean_object* v_fvarId_389_; lean_object* v_binderName_390_; lean_object* v_type_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_454_; 
v_k_388_ = lean_ctor_get(v_c_154_, 1);
v_fvarId_389_ = lean_ctor_get(v_decl_386_, 0);
v_binderName_390_ = lean_ctor_get(v_decl_386_, 1);
v_type_391_ = lean_ctor_get(v_decl_386_, 2);
v_isSharedCheck_454_ = !lean_is_exclusive(v_decl_386_);
if (v_isSharedCheck_454_ == 0)
{
lean_object* v_unused_455_; 
v_unused_455_ = lean_ctor_get(v_decl_386_, 3);
lean_dec(v_unused_455_);
v___x_393_ = v_decl_386_;
v_isShared_394_ = v_isSharedCheck_454_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_type_391_);
lean_inc(v_binderName_390_);
lean_inc(v_fvarId_389_);
lean_dec(v_decl_386_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_454_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v_i_395_; lean_object* v_args_396_; lean_object* v___x_398_; uint8_t v_isShared_399_; uint8_t v_isSharedCheck_453_; 
v_i_395_ = lean_ctor_get(v_value_387_, 0);
v_args_396_ = lean_ctor_get(v_value_387_, 1);
v_isSharedCheck_453_ = !lean_is_exclusive(v_value_387_);
if (v_isSharedCheck_453_ == 0)
{
v___x_398_ = v_value_387_;
v_isShared_399_ = v_isSharedCheck_453_;
goto v_resetjp_397_;
}
else
{
lean_inc(v_args_396_);
lean_inc(v_i_395_);
lean_dec(v_value_387_);
v___x_398_ = lean_box(0);
v_isShared_399_ = v_isSharedCheck_453_;
goto v_resetjp_397_;
}
v_resetjp_397_:
{
lean_object* v___x_400_; 
v___x_400_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_mayReuse___redArg(v_info_152_, v_i_395_, v_a_155_);
if (lean_obj_tag(v___x_400_) == 0)
{
lean_object* v_a_401_; uint8_t v___x_402_; 
v_a_401_ = lean_ctor_get(v___x_400_, 0);
lean_inc(v_a_401_);
lean_dec_ref(v___x_400_);
v___x_402_ = lean_unbox(v_a_401_);
if (v___x_402_ == 0)
{
lean_dec(v_a_401_);
lean_del_object(v___x_398_);
lean_dec_ref(v_args_396_);
lean_dec_ref(v_i_395_);
lean_del_object(v___x_393_);
lean_dec_ref(v_type_391_);
lean_dec(v_binderName_390_);
lean_dec(v_fvarId_389_);
lean_inc_ref(v_k_388_);
v_k_168_ = v_k_388_;
v___y_169_ = v_a_155_;
v___y_170_ = v_a_156_;
v___y_171_ = v_a_157_;
v___y_172_ = v_a_158_;
v___y_173_ = v_a_159_;
goto v___jp_167_;
}
else
{
lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_442_; 
lean_inc_ref(v_k_388_);
lean_dec(v_a_159_);
lean_dec_ref(v_a_158_);
lean_dec_ref(v_a_156_);
lean_dec_ref(v_a_155_);
v_isSharedCheck_442_ = !lean_is_exclusive(v_c_154_);
if (v_isSharedCheck_442_ == 0)
{
lean_object* v_unused_443_; lean_object* v_unused_444_; 
v_unused_443_ = lean_ctor_get(v_c_154_, 1);
lean_dec(v_unused_443_);
v_unused_444_ = lean_ctor_get(v_c_154_, 0);
lean_dec(v_unused_444_);
v___x_404_ = v_c_154_;
v_isShared_405_ = v_isSharedCheck_442_;
goto v_resetjp_403_;
}
else
{
lean_dec(v_c_154_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_442_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v_cidx_406_; lean_object* v_cidx_407_; uint8_t v___x_408_; lean_object* v___x_410_; 
v_cidx_406_ = lean_ctor_get(v_info_152_, 1);
v_cidx_407_ = lean_ctor_get(v_i_395_, 1);
v___x_408_ = 1;
lean_inc_ref(v_args_396_);
lean_inc_ref(v_i_395_);
if (v_isShared_399_ == 0)
{
v___x_410_ = v___x_398_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_i_395_);
lean_ctor_set(v_reuseFailAlloc_441_, 1, v_args_396_);
v___x_410_ = v_reuseFailAlloc_441_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
lean_object* v___x_412_; 
lean_inc_ref(v_type_391_);
if (v_isShared_394_ == 0)
{
lean_ctor_set(v___x_393_, 3, v___x_410_);
v___x_412_ = v___x_393_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_fvarId_389_);
lean_ctor_set(v_reuseFailAlloc_440_, 1, v_binderName_390_);
lean_ctor_set(v_reuseFailAlloc_440_, 2, v_type_391_);
lean_ctor_set(v_reuseFailAlloc_440_, 3, v___x_410_);
v___x_412_ = v_reuseFailAlloc_440_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
uint8_t v___y_414_; uint8_t v___x_437_; 
v___x_437_ = lean_nat_dec_eq(v_cidx_406_, v_cidx_407_);
if (v___x_437_ == 0)
{
uint8_t v___x_438_; 
v___x_438_ = lean_unbox(v_a_401_);
v___y_414_ = v___x_438_;
goto v___jp_413_;
}
else
{
uint8_t v___x_439_; 
v___x_439_ = 0;
v___y_414_ = v___x_439_;
goto v___jp_413_;
}
v___jp_413_:
{
lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_415_ = lean_alloc_ctor(12, 3, 1);
lean_ctor_set(v___x_415_, 0, v_w_153_);
lean_ctor_set(v___x_415_, 1, v_i_395_);
lean_ctor_set(v___x_415_, 2, v_args_396_);
lean_ctor_set_uint8(v___x_415_, sizeof(void*)*3, v___y_414_);
v___x_416_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v___x_408_, v___x_412_, v_type_391_, v___x_415_, v_a_157_);
lean_dec(v_a_157_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_428_; 
v_a_417_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_428_ == 0)
{
v___x_419_ = v___x_416_;
v_isShared_420_ = v_isSharedCheck_428_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_416_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_428_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v_a_417_);
v___x_422_ = v___x_404_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_a_417_);
lean_ctor_set(v_reuseFailAlloc_427_, 1, v_k_388_);
v___x_422_ = v_reuseFailAlloc_427_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
lean_object* v___x_423_; lean_object* v___x_425_; 
v___x_423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_423_, 0, v___x_422_);
lean_ctor_set(v___x_423_, 1, v_a_401_);
if (v_isShared_420_ == 0)
{
lean_ctor_set(v___x_419_, 0, v___x_423_);
v___x_425_ = v___x_419_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v___x_423_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
}
else
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_436_; 
lean_del_object(v___x_404_);
lean_dec(v_a_401_);
lean_dec_ref(v_k_388_);
v_a_429_ = lean_ctor_get(v___x_416_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_416_);
if (v_isSharedCheck_436_ == 0)
{
v___x_431_ = v___x_416_;
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_416_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_434_; 
if (v_isShared_432_ == 0)
{
v___x_434_ = v___x_431_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_a_429_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
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
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_452_; 
lean_del_object(v___x_398_);
lean_dec_ref(v_args_396_);
lean_dec_ref(v_i_395_);
lean_del_object(v___x_393_);
lean_dec_ref(v_type_391_);
lean_dec(v_binderName_390_);
lean_dec(v_fvarId_389_);
lean_dec_ref(v_c_154_);
lean_dec(v_a_159_);
lean_dec_ref(v_a_158_);
lean_dec(v_a_157_);
lean_dec_ref(v_a_156_);
lean_dec_ref(v_a_155_);
lean_dec(v_w_153_);
v_a_445_ = lean_ctor_get(v___x_400_, 0);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_400_);
if (v_isSharedCheck_452_ == 0)
{
v___x_447_ = v___x_400_;
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_400_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v___x_450_; 
if (v_isShared_448_ == 0)
{
v___x_450_ = v___x_447_;
goto v_reusejp_449_;
}
else
{
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_a_445_);
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
}
else
{
lean_object* v_k_456_; 
lean_dec(v_value_387_);
lean_dec_ref(v_decl_386_);
v_k_456_ = lean_ctor_get(v_c_154_, 1);
lean_inc_ref(v_k_456_);
v_k_168_ = v_k_456_;
v___y_169_ = v_a_155_;
v___y_170_ = v_a_156_;
v___y_171_ = v_a_157_;
v___y_172_ = v_a_158_;
v___y_173_ = v_a_159_;
goto v___jp_167_;
}
}
case 2:
{
lean_object* v_decl_457_; lean_object* v_k_458_; lean_object* v_params_459_; lean_object* v_type_460_; lean_object* v_value_461_; lean_object* v___x_462_; 
v_decl_457_ = lean_ctor_get(v_c_154_, 0);
v_k_458_ = lean_ctor_get(v_c_154_, 1);
v_params_459_ = lean_ctor_get(v_decl_457_, 2);
v_type_460_ = lean_ctor_get(v_decl_457_, 3);
v_value_461_ = lean_ctor_get(v_decl_457_, 4);
lean_inc(v_a_159_);
lean_inc_ref(v_a_158_);
lean_inc(v_a_157_);
lean_inc_ref(v_a_156_);
lean_inc_ref(v_a_155_);
lean_inc_ref(v_value_461_);
lean_inc(v_w_153_);
v___x_462_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_152_, v_w_153_, v_value_461_, v_a_155_, v_a_156_, v_a_157_, v_a_158_, v_a_159_);
if (lean_obj_tag(v___x_462_) == 0)
{
lean_object* v_a_463_; lean_object* v_snd_464_; uint8_t v___x_465_; 
v_a_463_ = lean_ctor_get(v___x_462_, 0);
lean_inc(v_a_463_);
lean_dec_ref(v___x_462_);
v_snd_464_ = lean_ctor_get(v_a_463_, 1);
lean_inc(v_snd_464_);
v___x_465_ = lean_unbox(v_snd_464_);
if (v___x_465_ == 0)
{
lean_dec(v_snd_464_);
lean_dec(v_a_463_);
lean_inc_ref(v_k_458_);
v_k_168_ = v_k_458_;
v___y_169_ = v_a_155_;
v___y_170_ = v_a_156_;
v___y_171_ = v_a_157_;
v___y_172_ = v_a_158_;
v___y_173_ = v_a_159_;
goto v___jp_167_;
}
else
{
lean_object* v_fst_466_; lean_object* v___x_468_; uint8_t v_isShared_469_; uint8_t v_isSharedCheck_509_; 
lean_dec(v_a_159_);
lean_dec_ref(v_a_158_);
lean_dec_ref(v_a_156_);
lean_dec_ref(v_a_155_);
lean_dec(v_w_153_);
v_fst_466_ = lean_ctor_get(v_a_463_, 0);
v_isSharedCheck_509_ = !lean_is_exclusive(v_a_463_);
if (v_isSharedCheck_509_ == 0)
{
lean_object* v_unused_510_; 
v_unused_510_ = lean_ctor_get(v_a_463_, 1);
lean_dec(v_unused_510_);
v___x_468_ = v_a_463_;
v_isShared_469_ = v_isSharedCheck_509_;
goto v_resetjp_467_;
}
else
{
lean_inc(v_fst_466_);
lean_dec(v_a_463_);
v___x_468_ = lean_box(0);
v_isShared_469_ = v_isSharedCheck_509_;
goto v_resetjp_467_;
}
v_resetjp_467_:
{
uint8_t v___x_470_; lean_object* v___x_471_; 
v___x_470_ = 1;
lean_inc_ref(v_params_459_);
lean_inc_ref(v_type_460_);
lean_inc_ref(v_decl_457_);
v___x_471_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_470_, v_decl_457_, v_type_460_, v_params_459_, v_fst_466_, v_a_157_);
lean_dec(v_a_157_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_500_; 
v_a_472_ = lean_ctor_get(v___x_471_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_500_ == 0)
{
v___x_474_ = v___x_471_;
v_isShared_475_ = v_isSharedCheck_500_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_471_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_500_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___y_477_; uint8_t v___y_485_; size_t v___x_495_; uint8_t v___x_496_; 
v___x_495_ = lean_ptr_addr(v_k_458_);
v___x_496_ = lean_usize_dec_eq(v___x_495_, v___x_495_);
if (v___x_496_ == 0)
{
v___y_485_ = v___x_496_;
goto v___jp_484_;
}
else
{
size_t v___x_497_; size_t v___x_498_; uint8_t v___x_499_; 
v___x_497_ = lean_ptr_addr(v_decl_457_);
v___x_498_ = lean_ptr_addr(v_a_472_);
v___x_499_ = lean_usize_dec_eq(v___x_497_, v___x_498_);
v___y_485_ = v___x_499_;
goto v___jp_484_;
}
v___jp_476_:
{
lean_object* v___x_479_; 
if (v_isShared_469_ == 0)
{
lean_ctor_set(v___x_468_, 0, v___y_477_);
v___x_479_ = v___x_468_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___y_477_);
lean_ctor_set(v_reuseFailAlloc_483_, 1, v_snd_464_);
v___x_479_ = v_reuseFailAlloc_483_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
lean_object* v___x_481_; 
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 0, v___x_479_);
v___x_481_ = v___x_474_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v___x_479_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
v___jp_484_:
{
if (v___y_485_ == 0)
{
lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_492_; 
lean_inc_ref(v_k_458_);
v_isSharedCheck_492_ = !lean_is_exclusive(v_c_154_);
if (v_isSharedCheck_492_ == 0)
{
lean_object* v_unused_493_; lean_object* v_unused_494_; 
v_unused_493_ = lean_ctor_get(v_c_154_, 1);
lean_dec(v_unused_493_);
v_unused_494_ = lean_ctor_get(v_c_154_, 0);
lean_dec(v_unused_494_);
v___x_487_ = v_c_154_;
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
else
{
lean_dec(v_c_154_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_490_; 
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v_a_472_);
v___x_490_ = v___x_487_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_a_472_);
lean_ctor_set(v_reuseFailAlloc_491_, 1, v_k_458_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
v___y_477_ = v___x_490_;
goto v___jp_476_;
}
}
}
else
{
lean_dec(v_a_472_);
v___y_477_ = v_c_154_;
goto v___jp_476_;
}
}
}
}
else
{
lean_object* v_a_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_508_; 
lean_del_object(v___x_468_);
lean_dec(v_snd_464_);
lean_dec_ref(v_c_154_);
v_a_501_ = lean_ctor_get(v___x_471_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_508_ == 0)
{
v___x_503_ = v___x_471_;
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_a_501_);
lean_dec(v___x_471_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___x_506_; 
if (v_isShared_504_ == 0)
{
v___x_506_ = v___x_503_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_a_501_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_c_154_);
lean_dec(v_a_159_);
lean_dec_ref(v_a_158_);
lean_dec(v_a_157_);
lean_dec_ref(v_a_156_);
lean_dec_ref(v_a_155_);
lean_dec(v_w_153_);
return v___x_462_;
}
}
case 3:
{
uint8_t v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
lean_dec(v_a_159_);
lean_dec_ref(v_a_158_);
lean_dec(v_a_157_);
lean_dec_ref(v_a_156_);
lean_dec_ref(v_a_155_);
lean_dec(v_w_153_);
v___x_511_ = 0;
v___x_512_ = lean_box(v___x_511_);
v___x_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_513_, 0, v_c_154_);
lean_ctor_set(v___x_513_, 1, v___x_512_);
v___x_514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
return v___x_514_;
}
case 4:
{
lean_object* v_cases_515_; lean_object* v_typeName_516_; lean_object* v_resultType_517_; lean_object* v_discr_518_; lean_object* v_alts_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_571_; 
v_cases_515_ = lean_ctor_get(v_c_154_, 0);
lean_inc_ref(v_cases_515_);
v_typeName_516_ = lean_ctor_get(v_cases_515_, 0);
v_resultType_517_ = lean_ctor_get(v_cases_515_, 1);
v_discr_518_ = lean_ctor_get(v_cases_515_, 2);
v_alts_519_ = lean_ctor_get(v_cases_515_, 3);
v_isSharedCheck_571_ = !lean_is_exclusive(v_cases_515_);
if (v_isSharedCheck_571_ == 0)
{
v___x_521_ = v_cases_515_;
v_isShared_522_ = v_isSharedCheck_571_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_alts_519_);
lean_inc(v_discr_518_);
lean_inc(v_resultType_517_);
lean_inc(v_typeName_516_);
lean_dec(v_cases_515_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_571_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
size_t v_sz_523_; size_t v___x_524_; lean_object* v___x_525_; 
v_sz_523_ = lean_array_size(v_alts_519_);
v___x_524_ = ((size_t)0ULL);
lean_inc_ref(v_alts_519_);
v___x_525_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1(v_info_152_, v_w_153_, v_sz_523_, v___x_524_, v_alts_519_, v_a_155_, v_a_156_, v_a_157_, v_a_158_, v_a_159_);
if (lean_obj_tag(v___x_525_) == 0)
{
lean_object* v_a_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_562_; 
v_a_526_ = lean_ctor_get(v___x_525_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_562_ == 0)
{
v___x_528_ = v___x_525_;
v_isShared_529_ = v_isSharedCheck_562_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_a_526_);
lean_dec(v___x_525_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_562_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___y_531_; uint8_t v___y_532_; lean_object* v___x_538_; lean_object* v_fst_539_; lean_object* v_snd_540_; lean_object* v___y_542_; size_t v___x_548_; size_t v___x_549_; uint8_t v___x_550_; 
v___x_538_ = l_Array_unzip___redArg(v_a_526_);
lean_dec(v_a_526_);
v_fst_539_ = lean_ctor_get(v___x_538_, 0);
lean_inc(v_fst_539_);
v_snd_540_ = lean_ctor_get(v___x_538_, 1);
lean_inc(v_snd_540_);
lean_dec_ref(v___x_538_);
v___x_548_ = lean_ptr_addr(v_alts_519_);
lean_dec_ref(v_alts_519_);
v___x_549_ = lean_ptr_addr(v_fst_539_);
v___x_550_ = lean_usize_dec_eq(v___x_548_, v___x_549_);
if (v___x_550_ == 0)
{
lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_560_; 
v_isSharedCheck_560_ = !lean_is_exclusive(v_c_154_);
if (v_isSharedCheck_560_ == 0)
{
lean_object* v_unused_561_; 
v_unused_561_ = lean_ctor_get(v_c_154_, 0);
lean_dec(v_unused_561_);
v___x_552_ = v_c_154_;
v_isShared_553_ = v_isSharedCheck_560_;
goto v_resetjp_551_;
}
else
{
lean_dec(v_c_154_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_560_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_522_ == 0)
{
lean_ctor_set(v___x_521_, 3, v_fst_539_);
v___x_555_ = v___x_521_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_typeName_516_);
lean_ctor_set(v_reuseFailAlloc_559_, 1, v_resultType_517_);
lean_ctor_set(v_reuseFailAlloc_559_, 2, v_discr_518_);
lean_ctor_set(v_reuseFailAlloc_559_, 3, v_fst_539_);
v___x_555_ = v_reuseFailAlloc_559_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
lean_object* v___x_557_; 
if (v_isShared_553_ == 0)
{
lean_ctor_set(v___x_552_, 0, v___x_555_);
v___x_557_ = v___x_552_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v___x_555_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
v___y_542_ = v___x_557_;
goto v___jp_541_;
}
}
}
}
else
{
lean_dec(v_fst_539_);
lean_del_object(v___x_521_);
lean_dec(v_discr_518_);
lean_dec_ref(v_resultType_517_);
lean_dec(v_typeName_516_);
v___y_542_ = v_c_154_;
goto v___jp_541_;
}
v___jp_530_:
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_536_; 
v___x_533_ = lean_box(v___y_532_);
v___x_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_534_, 0, v___y_531_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 0, v___x_534_);
v___x_536_ = v___x_528_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v___x_534_);
v___x_536_ = v_reuseFailAlloc_537_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
return v___x_536_;
}
}
v___jp_541_:
{
lean_object* v___x_543_; lean_object* v___x_544_; uint8_t v___x_545_; 
v___x_543_ = lean_unsigned_to_nat(0u);
v___x_544_ = lean_array_get_size(v_snd_540_);
v___x_545_ = lean_nat_dec_lt(v___x_543_, v___x_544_);
if (v___x_545_ == 0)
{
lean_dec(v_snd_540_);
v___y_531_ = v___y_542_;
v___y_532_ = v___x_545_;
goto v___jp_530_;
}
else
{
if (v___x_545_ == 0)
{
lean_dec(v_snd_540_);
v___y_531_ = v___y_542_;
v___y_532_ = v___x_545_;
goto v___jp_530_;
}
else
{
size_t v___x_546_; uint8_t v___x_547_; 
v___x_546_ = lean_usize_of_nat(v___x_544_);
v___x_547_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__2(v_snd_540_, v___x_524_, v___x_546_);
lean_dec(v_snd_540_);
v___y_531_ = v___y_542_;
v___y_532_ = v___x_547_;
goto v___jp_530_;
}
}
}
}
}
else
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_570_; 
lean_del_object(v___x_521_);
lean_dec_ref(v_alts_519_);
lean_dec(v_discr_518_);
lean_dec_ref(v_resultType_517_);
lean_dec(v_typeName_516_);
lean_dec_ref(v_c_154_);
v_a_563_ = lean_ctor_get(v___x_525_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_570_ == 0)
{
v___x_565_ = v___x_525_;
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_525_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_568_; 
if (v_isShared_566_ == 0)
{
v___x_568_ = v___x_565_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_a_563_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
}
}
case 5:
{
uint8_t v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
lean_dec(v_a_159_);
lean_dec_ref(v_a_158_);
lean_dec(v_a_157_);
lean_dec_ref(v_a_156_);
lean_dec_ref(v_a_155_);
lean_dec(v_w_153_);
v___x_572_ = 0;
v___x_573_ = lean_box(v___x_572_);
v___x_574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_574_, 0, v_c_154_);
lean_ctor_set(v___x_574_, 1, v___x_573_);
v___x_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
return v___x_575_;
}
case 6:
{
uint8_t v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
lean_dec(v_a_159_);
lean_dec_ref(v_a_158_);
lean_dec(v_a_157_);
lean_dec_ref(v_a_156_);
lean_dec_ref(v_a_155_);
lean_dec(v_w_153_);
v___x_576_ = 0;
v___x_577_ = lean_box(v___x_576_);
v___x_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_578_, 0, v_c_154_);
lean_ctor_set(v___x_578_, 1, v___x_577_);
v___x_579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
return v___x_579_;
}
case 8:
{
lean_object* v_k_580_; 
v_k_580_ = lean_ctor_get(v_c_154_, 3);
lean_inc_ref(v_k_580_);
v_k_168_ = v_k_580_;
v___y_169_ = v_a_155_;
v___y_170_ = v_a_156_;
v___y_171_ = v_a_157_;
v___y_172_ = v_a_158_;
v___y_173_ = v_a_159_;
goto v___jp_167_;
}
case 9:
{
lean_object* v_k_581_; 
v_k_581_ = lean_ctor_get(v_c_154_, 5);
lean_inc_ref(v_k_581_);
v_k_168_ = v_k_581_;
v___y_169_ = v_a_155_;
v___y_170_ = v_a_156_;
v___y_171_ = v_a_157_;
v___y_172_ = v_a_158_;
v___y_173_ = v_a_159_;
goto v___jp_167_;
}
default: 
{
lean_object* v___x_582_; lean_object* v___x_583_; 
lean_dec_ref(v_c_154_);
lean_dec(v_w_153_);
v___x_582_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__6);
v___x_583_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(v___x_582_, v_a_155_, v_a_156_, v_a_157_, v_a_158_, v_a_159_);
return v___x_583_;
}
}
v___jp_161_:
{
lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_164_ = lean_box(v___y_162_);
v___x_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_165_, 0, v___y_163_);
lean_ctor_set(v___x_165_, 1, v___x_164_);
v___x_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_166_, 0, v___x_165_);
return v___x_166_;
}
v___jp_167_:
{
lean_object* v___x_174_; 
v___x_174_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_152_, v_w_153_, v_k_168_, v___y_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_);
if (lean_obj_tag(v___x_174_) == 0)
{
lean_object* v_a_175_; 
v_a_175_ = lean_ctor_get(v___x_174_, 0);
lean_inc(v_a_175_);
lean_dec_ref(v___x_174_);
switch(lean_obj_tag(v_c_154_))
{
case 0:
{
lean_object* v_fst_176_; lean_object* v_snd_177_; lean_object* v_decl_178_; lean_object* v_k_179_; size_t v___x_180_; size_t v___x_181_; uint8_t v___x_182_; 
v_fst_176_ = lean_ctor_get(v_a_175_, 0);
lean_inc(v_fst_176_);
v_snd_177_ = lean_ctor_get(v_a_175_, 1);
lean_inc(v_snd_177_);
lean_dec(v_a_175_);
v_decl_178_ = lean_ctor_get(v_c_154_, 0);
v_k_179_ = lean_ctor_get(v_c_154_, 1);
v___x_180_ = lean_ptr_addr(v_k_179_);
v___x_181_ = lean_ptr_addr(v_fst_176_);
v___x_182_ = lean_usize_dec_eq(v___x_180_, v___x_181_);
if (v___x_182_ == 0)
{
lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_190_; 
lean_inc_ref(v_decl_178_);
v_isSharedCheck_190_ = !lean_is_exclusive(v_c_154_);
if (v_isSharedCheck_190_ == 0)
{
lean_object* v_unused_191_; lean_object* v_unused_192_; 
v_unused_191_ = lean_ctor_get(v_c_154_, 1);
lean_dec(v_unused_191_);
v_unused_192_ = lean_ctor_get(v_c_154_, 0);
lean_dec(v_unused_192_);
v___x_184_ = v_c_154_;
v_isShared_185_ = v_isSharedCheck_190_;
goto v_resetjp_183_;
}
else
{
lean_dec(v_c_154_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_190_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_187_; 
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 1, v_fst_176_);
v___x_187_ = v___x_184_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_decl_178_);
lean_ctor_set(v_reuseFailAlloc_189_, 1, v_fst_176_);
v___x_187_ = v_reuseFailAlloc_189_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
uint8_t v___x_188_; 
v___x_188_ = lean_unbox(v_snd_177_);
lean_dec(v_snd_177_);
v___y_162_ = v___x_188_;
v___y_163_ = v___x_187_;
goto v___jp_161_;
}
}
}
else
{
uint8_t v___x_193_; 
lean_dec(v_fst_176_);
v___x_193_ = lean_unbox(v_snd_177_);
lean_dec(v_snd_177_);
v___y_162_ = v___x_193_;
v___y_163_ = v_c_154_;
goto v___jp_161_;
}
}
case 1:
{
lean_object* v_fst_194_; lean_object* v_snd_195_; lean_object* v_decl_196_; lean_object* v_k_197_; size_t v___x_198_; size_t v___x_199_; uint8_t v___x_200_; 
v_fst_194_ = lean_ctor_get(v_a_175_, 0);
lean_inc(v_fst_194_);
v_snd_195_ = lean_ctor_get(v_a_175_, 1);
lean_inc(v_snd_195_);
lean_dec(v_a_175_);
v_decl_196_ = lean_ctor_get(v_c_154_, 0);
v_k_197_ = lean_ctor_get(v_c_154_, 1);
v___x_198_ = lean_ptr_addr(v_k_197_);
v___x_199_ = lean_ptr_addr(v_fst_194_);
v___x_200_ = lean_usize_dec_eq(v___x_198_, v___x_199_);
if (v___x_200_ == 0)
{
lean_object* v___x_202_; uint8_t v_isShared_203_; uint8_t v_isSharedCheck_208_; 
lean_inc_ref(v_decl_196_);
v_isSharedCheck_208_ = !lean_is_exclusive(v_c_154_);
if (v_isSharedCheck_208_ == 0)
{
lean_object* v_unused_209_; lean_object* v_unused_210_; 
v_unused_209_ = lean_ctor_get(v_c_154_, 1);
lean_dec(v_unused_209_);
v_unused_210_ = lean_ctor_get(v_c_154_, 0);
lean_dec(v_unused_210_);
v___x_202_ = v_c_154_;
v_isShared_203_ = v_isSharedCheck_208_;
goto v_resetjp_201_;
}
else
{
lean_dec(v_c_154_);
v___x_202_ = lean_box(0);
v_isShared_203_ = v_isSharedCheck_208_;
goto v_resetjp_201_;
}
v_resetjp_201_:
{
lean_object* v___x_205_; 
if (v_isShared_203_ == 0)
{
lean_ctor_set(v___x_202_, 1, v_fst_194_);
v___x_205_ = v___x_202_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_decl_196_);
lean_ctor_set(v_reuseFailAlloc_207_, 1, v_fst_194_);
v___x_205_ = v_reuseFailAlloc_207_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
uint8_t v___x_206_; 
v___x_206_ = lean_unbox(v_snd_195_);
lean_dec(v_snd_195_);
v___y_162_ = v___x_206_;
v___y_163_ = v___x_205_;
goto v___jp_161_;
}
}
}
else
{
uint8_t v___x_211_; 
lean_dec(v_fst_194_);
v___x_211_ = lean_unbox(v_snd_195_);
lean_dec(v_snd_195_);
v___y_162_ = v___x_211_;
v___y_163_ = v_c_154_;
goto v___jp_161_;
}
}
case 2:
{
lean_object* v_fst_212_; lean_object* v_snd_213_; lean_object* v_decl_214_; lean_object* v_k_215_; size_t v___x_216_; size_t v___x_217_; uint8_t v___x_218_; 
v_fst_212_ = lean_ctor_get(v_a_175_, 0);
lean_inc(v_fst_212_);
v_snd_213_ = lean_ctor_get(v_a_175_, 1);
lean_inc(v_snd_213_);
lean_dec(v_a_175_);
v_decl_214_ = lean_ctor_get(v_c_154_, 0);
v_k_215_ = lean_ctor_get(v_c_154_, 1);
v___x_216_ = lean_ptr_addr(v_k_215_);
v___x_217_ = lean_ptr_addr(v_fst_212_);
v___x_218_ = lean_usize_dec_eq(v___x_216_, v___x_217_);
if (v___x_218_ == 0)
{
lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_226_; 
lean_inc_ref(v_decl_214_);
v_isSharedCheck_226_ = !lean_is_exclusive(v_c_154_);
if (v_isSharedCheck_226_ == 0)
{
lean_object* v_unused_227_; lean_object* v_unused_228_; 
v_unused_227_ = lean_ctor_get(v_c_154_, 1);
lean_dec(v_unused_227_);
v_unused_228_ = lean_ctor_get(v_c_154_, 0);
lean_dec(v_unused_228_);
v___x_220_ = v_c_154_;
v_isShared_221_ = v_isSharedCheck_226_;
goto v_resetjp_219_;
}
else
{
lean_dec(v_c_154_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_226_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_223_; 
if (v_isShared_221_ == 0)
{
lean_ctor_set(v___x_220_, 1, v_fst_212_);
v___x_223_ = v___x_220_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v_decl_214_);
lean_ctor_set(v_reuseFailAlloc_225_, 1, v_fst_212_);
v___x_223_ = v_reuseFailAlloc_225_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
uint8_t v___x_224_; 
v___x_224_ = lean_unbox(v_snd_213_);
lean_dec(v_snd_213_);
v___y_162_ = v___x_224_;
v___y_163_ = v___x_223_;
goto v___jp_161_;
}
}
}
else
{
uint8_t v___x_229_; 
lean_dec(v_fst_212_);
v___x_229_ = lean_unbox(v_snd_213_);
lean_dec(v_snd_213_);
v___y_162_ = v___x_229_;
v___y_163_ = v_c_154_;
goto v___jp_161_;
}
}
case 7:
{
lean_object* v_fst_230_; lean_object* v_snd_231_; lean_object* v_fvarId_232_; lean_object* v_i_233_; lean_object* v_y_234_; lean_object* v_k_235_; size_t v___x_236_; size_t v___x_237_; uint8_t v___x_238_; 
v_fst_230_ = lean_ctor_get(v_a_175_, 0);
lean_inc(v_fst_230_);
v_snd_231_ = lean_ctor_get(v_a_175_, 1);
lean_inc(v_snd_231_);
lean_dec(v_a_175_);
v_fvarId_232_ = lean_ctor_get(v_c_154_, 0);
v_i_233_ = lean_ctor_get(v_c_154_, 1);
v_y_234_ = lean_ctor_get(v_c_154_, 2);
v_k_235_ = lean_ctor_get(v_c_154_, 3);
v___x_236_ = lean_ptr_addr(v_k_235_);
v___x_237_ = lean_ptr_addr(v_fst_230_);
v___x_238_ = lean_usize_dec_eq(v___x_236_, v___x_237_);
if (v___x_238_ == 0)
{
lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_246_; 
lean_inc(v_y_234_);
lean_inc(v_i_233_);
lean_inc(v_fvarId_232_);
v_isSharedCheck_246_ = !lean_is_exclusive(v_c_154_);
if (v_isSharedCheck_246_ == 0)
{
lean_object* v_unused_247_; lean_object* v_unused_248_; lean_object* v_unused_249_; lean_object* v_unused_250_; 
v_unused_247_ = lean_ctor_get(v_c_154_, 3);
lean_dec(v_unused_247_);
v_unused_248_ = lean_ctor_get(v_c_154_, 2);
lean_dec(v_unused_248_);
v_unused_249_ = lean_ctor_get(v_c_154_, 1);
lean_dec(v_unused_249_);
v_unused_250_ = lean_ctor_get(v_c_154_, 0);
lean_dec(v_unused_250_);
v___x_240_ = v_c_154_;
v_isShared_241_ = v_isSharedCheck_246_;
goto v_resetjp_239_;
}
else
{
lean_dec(v_c_154_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_246_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_243_; 
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 3, v_fst_230_);
v___x_243_ = v___x_240_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_fvarId_232_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v_i_233_);
lean_ctor_set(v_reuseFailAlloc_245_, 2, v_y_234_);
lean_ctor_set(v_reuseFailAlloc_245_, 3, v_fst_230_);
v___x_243_ = v_reuseFailAlloc_245_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
uint8_t v___x_244_; 
v___x_244_ = lean_unbox(v_snd_231_);
lean_dec(v_snd_231_);
v___y_162_ = v___x_244_;
v___y_163_ = v___x_243_;
goto v___jp_161_;
}
}
}
else
{
uint8_t v___x_251_; 
lean_dec(v_fst_230_);
v___x_251_ = lean_unbox(v_snd_231_);
lean_dec(v_snd_231_);
v___y_162_ = v___x_251_;
v___y_163_ = v_c_154_;
goto v___jp_161_;
}
}
case 9:
{
lean_object* v_fst_252_; lean_object* v_snd_253_; lean_object* v_fvarId_254_; lean_object* v_i_255_; lean_object* v_offset_256_; lean_object* v_y_257_; lean_object* v_ty_258_; lean_object* v_k_259_; size_t v___x_260_; size_t v___x_261_; uint8_t v___x_262_; 
v_fst_252_ = lean_ctor_get(v_a_175_, 0);
lean_inc(v_fst_252_);
v_snd_253_ = lean_ctor_get(v_a_175_, 1);
lean_inc(v_snd_253_);
lean_dec(v_a_175_);
v_fvarId_254_ = lean_ctor_get(v_c_154_, 0);
v_i_255_ = lean_ctor_get(v_c_154_, 1);
v_offset_256_ = lean_ctor_get(v_c_154_, 2);
v_y_257_ = lean_ctor_get(v_c_154_, 3);
v_ty_258_ = lean_ctor_get(v_c_154_, 4);
v_k_259_ = lean_ctor_get(v_c_154_, 5);
v___x_260_ = lean_ptr_addr(v_k_259_);
v___x_261_ = lean_ptr_addr(v_fst_252_);
v___x_262_ = lean_usize_dec_eq(v___x_260_, v___x_261_);
if (v___x_262_ == 0)
{
lean_object* v___x_264_; uint8_t v_isShared_265_; uint8_t v_isSharedCheck_270_; 
lean_inc_ref(v_ty_258_);
lean_inc(v_y_257_);
lean_inc(v_offset_256_);
lean_inc(v_i_255_);
lean_inc(v_fvarId_254_);
v_isSharedCheck_270_ = !lean_is_exclusive(v_c_154_);
if (v_isSharedCheck_270_ == 0)
{
lean_object* v_unused_271_; lean_object* v_unused_272_; lean_object* v_unused_273_; lean_object* v_unused_274_; lean_object* v_unused_275_; lean_object* v_unused_276_; 
v_unused_271_ = lean_ctor_get(v_c_154_, 5);
lean_dec(v_unused_271_);
v_unused_272_ = lean_ctor_get(v_c_154_, 4);
lean_dec(v_unused_272_);
v_unused_273_ = lean_ctor_get(v_c_154_, 3);
lean_dec(v_unused_273_);
v_unused_274_ = lean_ctor_get(v_c_154_, 2);
lean_dec(v_unused_274_);
v_unused_275_ = lean_ctor_get(v_c_154_, 1);
lean_dec(v_unused_275_);
v_unused_276_ = lean_ctor_get(v_c_154_, 0);
lean_dec(v_unused_276_);
v___x_264_ = v_c_154_;
v_isShared_265_ = v_isSharedCheck_270_;
goto v_resetjp_263_;
}
else
{
lean_dec(v_c_154_);
v___x_264_ = lean_box(0);
v_isShared_265_ = v_isSharedCheck_270_;
goto v_resetjp_263_;
}
v_resetjp_263_:
{
lean_object* v___x_267_; 
if (v_isShared_265_ == 0)
{
lean_ctor_set(v___x_264_, 5, v_fst_252_);
v___x_267_ = v___x_264_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v_fvarId_254_);
lean_ctor_set(v_reuseFailAlloc_269_, 1, v_i_255_);
lean_ctor_set(v_reuseFailAlloc_269_, 2, v_offset_256_);
lean_ctor_set(v_reuseFailAlloc_269_, 3, v_y_257_);
lean_ctor_set(v_reuseFailAlloc_269_, 4, v_ty_258_);
lean_ctor_set(v_reuseFailAlloc_269_, 5, v_fst_252_);
v___x_267_ = v_reuseFailAlloc_269_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
uint8_t v___x_268_; 
v___x_268_ = lean_unbox(v_snd_253_);
lean_dec(v_snd_253_);
v___y_162_ = v___x_268_;
v___y_163_ = v___x_267_;
goto v___jp_161_;
}
}
}
else
{
uint8_t v___x_277_; 
lean_dec(v_fst_252_);
v___x_277_ = lean_unbox(v_snd_253_);
lean_dec(v_snd_253_);
v___y_162_ = v___x_277_;
v___y_163_ = v_c_154_;
goto v___jp_161_;
}
}
case 8:
{
lean_object* v_fst_278_; lean_object* v_snd_279_; lean_object* v_fvarId_280_; lean_object* v_i_281_; lean_object* v_y_282_; lean_object* v_k_283_; size_t v___x_284_; size_t v___x_285_; uint8_t v___x_286_; 
v_fst_278_ = lean_ctor_get(v_a_175_, 0);
lean_inc(v_fst_278_);
v_snd_279_ = lean_ctor_get(v_a_175_, 1);
lean_inc(v_snd_279_);
lean_dec(v_a_175_);
v_fvarId_280_ = lean_ctor_get(v_c_154_, 0);
v_i_281_ = lean_ctor_get(v_c_154_, 1);
v_y_282_ = lean_ctor_get(v_c_154_, 2);
v_k_283_ = lean_ctor_get(v_c_154_, 3);
v___x_284_ = lean_ptr_addr(v_k_283_);
v___x_285_ = lean_ptr_addr(v_fst_278_);
v___x_286_ = lean_usize_dec_eq(v___x_284_, v___x_285_);
if (v___x_286_ == 0)
{
lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_294_; 
lean_inc(v_y_282_);
lean_inc(v_i_281_);
lean_inc(v_fvarId_280_);
v_isSharedCheck_294_ = !lean_is_exclusive(v_c_154_);
if (v_isSharedCheck_294_ == 0)
{
lean_object* v_unused_295_; lean_object* v_unused_296_; lean_object* v_unused_297_; lean_object* v_unused_298_; 
v_unused_295_ = lean_ctor_get(v_c_154_, 3);
lean_dec(v_unused_295_);
v_unused_296_ = lean_ctor_get(v_c_154_, 2);
lean_dec(v_unused_296_);
v_unused_297_ = lean_ctor_get(v_c_154_, 1);
lean_dec(v_unused_297_);
v_unused_298_ = lean_ctor_get(v_c_154_, 0);
lean_dec(v_unused_298_);
v___x_288_ = v_c_154_;
v_isShared_289_ = v_isSharedCheck_294_;
goto v_resetjp_287_;
}
else
{
lean_dec(v_c_154_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_294_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_291_; 
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 3, v_fst_278_);
v___x_291_ = v___x_288_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_fvarId_280_);
lean_ctor_set(v_reuseFailAlloc_293_, 1, v_i_281_);
lean_ctor_set(v_reuseFailAlloc_293_, 2, v_y_282_);
lean_ctor_set(v_reuseFailAlloc_293_, 3, v_fst_278_);
v___x_291_ = v_reuseFailAlloc_293_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
uint8_t v___x_292_; 
v___x_292_ = lean_unbox(v_snd_279_);
lean_dec(v_snd_279_);
v___y_162_ = v___x_292_;
v___y_163_ = v___x_291_;
goto v___jp_161_;
}
}
}
else
{
uint8_t v___x_299_; 
lean_dec(v_fst_278_);
v___x_299_ = lean_unbox(v_snd_279_);
lean_dec(v_snd_279_);
v___y_162_ = v___x_299_;
v___y_163_ = v_c_154_;
goto v___jp_161_;
}
}
case 10:
{
lean_object* v_fst_300_; lean_object* v_snd_301_; lean_object* v_fvarId_302_; lean_object* v_cidx_303_; lean_object* v_k_304_; size_t v___x_305_; size_t v___x_306_; uint8_t v___x_307_; 
v_fst_300_ = lean_ctor_get(v_a_175_, 0);
lean_inc(v_fst_300_);
v_snd_301_ = lean_ctor_get(v_a_175_, 1);
lean_inc(v_snd_301_);
lean_dec(v_a_175_);
v_fvarId_302_ = lean_ctor_get(v_c_154_, 0);
v_cidx_303_ = lean_ctor_get(v_c_154_, 1);
v_k_304_ = lean_ctor_get(v_c_154_, 2);
v___x_305_ = lean_ptr_addr(v_k_304_);
v___x_306_ = lean_ptr_addr(v_fst_300_);
v___x_307_ = lean_usize_dec_eq(v___x_305_, v___x_306_);
if (v___x_307_ == 0)
{
lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_315_; 
lean_inc(v_cidx_303_);
lean_inc(v_fvarId_302_);
v_isSharedCheck_315_ = !lean_is_exclusive(v_c_154_);
if (v_isSharedCheck_315_ == 0)
{
lean_object* v_unused_316_; lean_object* v_unused_317_; lean_object* v_unused_318_; 
v_unused_316_ = lean_ctor_get(v_c_154_, 2);
lean_dec(v_unused_316_);
v_unused_317_ = lean_ctor_get(v_c_154_, 1);
lean_dec(v_unused_317_);
v_unused_318_ = lean_ctor_get(v_c_154_, 0);
lean_dec(v_unused_318_);
v___x_309_ = v_c_154_;
v_isShared_310_ = v_isSharedCheck_315_;
goto v_resetjp_308_;
}
else
{
lean_dec(v_c_154_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_315_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_312_; 
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 2, v_fst_300_);
v___x_312_ = v___x_309_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_fvarId_302_);
lean_ctor_set(v_reuseFailAlloc_314_, 1, v_cidx_303_);
lean_ctor_set(v_reuseFailAlloc_314_, 2, v_fst_300_);
v___x_312_ = v_reuseFailAlloc_314_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
uint8_t v___x_313_; 
v___x_313_ = lean_unbox(v_snd_301_);
lean_dec(v_snd_301_);
v___y_162_ = v___x_313_;
v___y_163_ = v___x_312_;
goto v___jp_161_;
}
}
}
else
{
uint8_t v___x_319_; 
lean_dec(v_fst_300_);
v___x_319_ = lean_unbox(v_snd_301_);
lean_dec(v_snd_301_);
v___y_162_ = v___x_319_;
v___y_163_ = v_c_154_;
goto v___jp_161_;
}
}
case 11:
{
lean_object* v_fst_320_; lean_object* v_snd_321_; lean_object* v_fvarId_322_; lean_object* v_n_323_; uint8_t v_check_324_; uint8_t v_persistent_325_; lean_object* v_k_326_; size_t v___x_327_; size_t v___x_328_; uint8_t v___x_329_; 
v_fst_320_ = lean_ctor_get(v_a_175_, 0);
lean_inc(v_fst_320_);
v_snd_321_ = lean_ctor_get(v_a_175_, 1);
lean_inc(v_snd_321_);
lean_dec(v_a_175_);
v_fvarId_322_ = lean_ctor_get(v_c_154_, 0);
v_n_323_ = lean_ctor_get(v_c_154_, 1);
v_check_324_ = lean_ctor_get_uint8(v_c_154_, sizeof(void*)*3);
v_persistent_325_ = lean_ctor_get_uint8(v_c_154_, sizeof(void*)*3 + 1);
v_k_326_ = lean_ctor_get(v_c_154_, 2);
v___x_327_ = lean_ptr_addr(v_k_326_);
v___x_328_ = lean_ptr_addr(v_fst_320_);
v___x_329_ = lean_usize_dec_eq(v___x_327_, v___x_328_);
if (v___x_329_ == 0)
{
lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_337_; 
lean_inc(v_n_323_);
lean_inc(v_fvarId_322_);
v_isSharedCheck_337_ = !lean_is_exclusive(v_c_154_);
if (v_isSharedCheck_337_ == 0)
{
lean_object* v_unused_338_; lean_object* v_unused_339_; lean_object* v_unused_340_; 
v_unused_338_ = lean_ctor_get(v_c_154_, 2);
lean_dec(v_unused_338_);
v_unused_339_ = lean_ctor_get(v_c_154_, 1);
lean_dec(v_unused_339_);
v_unused_340_ = lean_ctor_get(v_c_154_, 0);
lean_dec(v_unused_340_);
v___x_331_ = v_c_154_;
v_isShared_332_ = v_isSharedCheck_337_;
goto v_resetjp_330_;
}
else
{
lean_dec(v_c_154_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_337_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_334_; 
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 2, v_fst_320_);
v___x_334_ = v___x_331_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_fvarId_322_);
lean_ctor_set(v_reuseFailAlloc_336_, 1, v_n_323_);
lean_ctor_set(v_reuseFailAlloc_336_, 2, v_fst_320_);
lean_ctor_set_uint8(v_reuseFailAlloc_336_, sizeof(void*)*3, v_check_324_);
lean_ctor_set_uint8(v_reuseFailAlloc_336_, sizeof(void*)*3 + 1, v_persistent_325_);
v___x_334_ = v_reuseFailAlloc_336_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
uint8_t v___x_335_; 
v___x_335_ = lean_unbox(v_snd_321_);
lean_dec(v_snd_321_);
v___y_162_ = v___x_335_;
v___y_163_ = v___x_334_;
goto v___jp_161_;
}
}
}
else
{
uint8_t v___x_341_; 
lean_dec(v_fst_320_);
v___x_341_ = lean_unbox(v_snd_321_);
lean_dec(v_snd_321_);
v___y_162_ = v___x_341_;
v___y_163_ = v_c_154_;
goto v___jp_161_;
}
}
case 12:
{
lean_object* v_fst_342_; lean_object* v_snd_343_; lean_object* v_fvarId_344_; lean_object* v_n_345_; uint8_t v_check_346_; uint8_t v_persistent_347_; lean_object* v_k_348_; size_t v___x_349_; size_t v___x_350_; uint8_t v___x_351_; 
v_fst_342_ = lean_ctor_get(v_a_175_, 0);
lean_inc(v_fst_342_);
v_snd_343_ = lean_ctor_get(v_a_175_, 1);
lean_inc(v_snd_343_);
lean_dec(v_a_175_);
v_fvarId_344_ = lean_ctor_get(v_c_154_, 0);
v_n_345_ = lean_ctor_get(v_c_154_, 1);
v_check_346_ = lean_ctor_get_uint8(v_c_154_, sizeof(void*)*3);
v_persistent_347_ = lean_ctor_get_uint8(v_c_154_, sizeof(void*)*3 + 1);
v_k_348_ = lean_ctor_get(v_c_154_, 2);
v___x_349_ = lean_ptr_addr(v_k_348_);
v___x_350_ = lean_ptr_addr(v_fst_342_);
v___x_351_ = lean_usize_dec_eq(v___x_349_, v___x_350_);
if (v___x_351_ == 0)
{
lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_359_; 
lean_inc(v_n_345_);
lean_inc(v_fvarId_344_);
v_isSharedCheck_359_ = !lean_is_exclusive(v_c_154_);
if (v_isSharedCheck_359_ == 0)
{
lean_object* v_unused_360_; lean_object* v_unused_361_; lean_object* v_unused_362_; 
v_unused_360_ = lean_ctor_get(v_c_154_, 2);
lean_dec(v_unused_360_);
v_unused_361_ = lean_ctor_get(v_c_154_, 1);
lean_dec(v_unused_361_);
v_unused_362_ = lean_ctor_get(v_c_154_, 0);
lean_dec(v_unused_362_);
v___x_353_ = v_c_154_;
v_isShared_354_ = v_isSharedCheck_359_;
goto v_resetjp_352_;
}
else
{
lean_dec(v_c_154_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_359_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_356_; 
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 2, v_fst_342_);
v___x_356_ = v___x_353_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(12, 3, 2);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_fvarId_344_);
lean_ctor_set(v_reuseFailAlloc_358_, 1, v_n_345_);
lean_ctor_set(v_reuseFailAlloc_358_, 2, v_fst_342_);
lean_ctor_set_uint8(v_reuseFailAlloc_358_, sizeof(void*)*3, v_check_346_);
lean_ctor_set_uint8(v_reuseFailAlloc_358_, sizeof(void*)*3 + 1, v_persistent_347_);
v___x_356_ = v_reuseFailAlloc_358_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
uint8_t v___x_357_; 
v___x_357_ = lean_unbox(v_snd_343_);
lean_dec(v_snd_343_);
v___y_162_ = v___x_357_;
v___y_163_ = v___x_356_;
goto v___jp_161_;
}
}
}
else
{
uint8_t v___x_363_; 
lean_dec(v_fst_342_);
v___x_363_ = lean_unbox(v_snd_343_);
lean_dec(v_snd_343_);
v___y_162_ = v___x_363_;
v___y_163_ = v_c_154_;
goto v___jp_161_;
}
}
case 13:
{
lean_object* v_fst_364_; lean_object* v_snd_365_; lean_object* v_fvarId_366_; lean_object* v_k_367_; size_t v___x_368_; size_t v___x_369_; uint8_t v___x_370_; 
v_fst_364_ = lean_ctor_get(v_a_175_, 0);
lean_inc(v_fst_364_);
v_snd_365_ = lean_ctor_get(v_a_175_, 1);
lean_inc(v_snd_365_);
lean_dec(v_a_175_);
v_fvarId_366_ = lean_ctor_get(v_c_154_, 0);
v_k_367_ = lean_ctor_get(v_c_154_, 1);
v___x_368_ = lean_ptr_addr(v_k_367_);
v___x_369_ = lean_ptr_addr(v_fst_364_);
v___x_370_ = lean_usize_dec_eq(v___x_368_, v___x_369_);
if (v___x_370_ == 0)
{
lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_378_; 
lean_inc(v_fvarId_366_);
v_isSharedCheck_378_ = !lean_is_exclusive(v_c_154_);
if (v_isSharedCheck_378_ == 0)
{
lean_object* v_unused_379_; lean_object* v_unused_380_; 
v_unused_379_ = lean_ctor_get(v_c_154_, 1);
lean_dec(v_unused_379_);
v_unused_380_ = lean_ctor_get(v_c_154_, 0);
lean_dec(v_unused_380_);
v___x_372_ = v_c_154_;
v_isShared_373_ = v_isSharedCheck_378_;
goto v_resetjp_371_;
}
else
{
lean_dec(v_c_154_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_378_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_375_; 
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 1, v_fst_364_);
v___x_375_ = v___x_372_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v_fvarId_366_);
lean_ctor_set(v_reuseFailAlloc_377_, 1, v_fst_364_);
v___x_375_ = v_reuseFailAlloc_377_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
uint8_t v___x_376_; 
v___x_376_ = lean_unbox(v_snd_365_);
lean_dec(v_snd_365_);
v___y_162_ = v___x_376_;
v___y_163_ = v___x_375_;
goto v___jp_161_;
}
}
}
else
{
uint8_t v___x_381_; 
lean_dec(v_fst_364_);
v___x_381_ = lean_unbox(v_snd_365_);
lean_dec(v_snd_365_);
v___y_162_ = v___x_381_;
v___y_163_ = v_c_154_;
goto v___jp_161_;
}
}
default: 
{
lean_object* v_snd_382_; lean_object* v___x_383_; lean_object* v___x_384_; uint8_t v___x_385_; 
lean_dec_ref(v_c_154_);
v_snd_382_ = lean_ctor_get(v_a_175_, 1);
lean_inc(v_snd_382_);
lean_dec(v_a_175_);
v___x_383_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__3);
v___x_384_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0(v___x_383_);
v___x_385_ = lean_unbox(v_snd_382_);
lean_dec(v_snd_382_);
v___y_162_ = v___x_385_;
v___y_163_ = v___x_384_;
goto v___jp_161_;
}
}
}
else
{
lean_dec_ref(v_c_154_);
return v___x_174_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1(lean_object* v_info_584_, lean_object* v_w_585_, size_t v_sz_586_, size_t v_i_587_, lean_object* v_bs_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
uint8_t v___x_595_; 
v___x_595_ = lean_usize_dec_lt(v_i_587_, v_sz_586_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; 
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec(v_w_585_);
v___x_596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_596_, 0, v_bs_588_);
return v___x_596_;
}
else
{
lean_object* v_v_597_; lean_object* v___x_598_; lean_object* v_bs_x27_599_; lean_object* v___y_601_; 
v_v_597_ = lean_array_uget(v_bs_588_, v_i_587_);
v___x_598_ = lean_unsigned_to_nat(0u);
v_bs_x27_599_ = lean_array_uset(v_bs_588_, v_i_587_, v___x_598_);
switch(lean_obj_tag(v_v_597_))
{
case 0:
{
lean_object* v_code_626_; 
v_code_626_ = lean_ctor_get(v_v_597_, 2);
lean_inc_ref(v_code_626_);
v___y_601_ = v_code_626_;
goto v___jp_600_;
}
case 1:
{
lean_object* v_code_627_; 
v_code_627_ = lean_ctor_get(v_v_597_, 1);
lean_inc_ref(v_code_627_);
v___y_601_ = v_code_627_;
goto v___jp_600_;
}
default: 
{
lean_object* v_code_628_; 
v_code_628_ = lean_ctor_get(v_v_597_, 0);
lean_inc_ref(v_code_628_);
v___y_601_ = v_code_628_;
goto v___jp_600_;
}
}
v___jp_600_:
{
lean_object* v___x_602_; 
lean_inc(v___y_593_);
lean_inc_ref(v___y_592_);
lean_inc(v___y_591_);
lean_inc_ref(v___y_590_);
lean_inc_ref(v___y_589_);
lean_inc(v_w_585_);
v___x_602_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_584_, v_w_585_, v___y_601_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v_a_603_; lean_object* v_fst_604_; lean_object* v_snd_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_617_; 
v_a_603_ = lean_ctor_get(v___x_602_, 0);
lean_inc(v_a_603_);
lean_dec_ref(v___x_602_);
v_fst_604_ = lean_ctor_get(v_a_603_, 0);
v_snd_605_ = lean_ctor_get(v_a_603_, 1);
v_isSharedCheck_617_ = !lean_is_exclusive(v_a_603_);
if (v_isSharedCheck_617_ == 0)
{
v___x_607_ = v_a_603_;
v_isShared_608_ = v_isSharedCheck_617_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_snd_605_);
lean_inc(v_fst_604_);
lean_dec(v_a_603_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_617_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_609_; lean_object* v___x_611_; 
v___x_609_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_597_, v_fst_604_);
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 0, v___x_609_);
v___x_611_ = v___x_607_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v___x_609_);
lean_ctor_set(v_reuseFailAlloc_616_, 1, v_snd_605_);
v___x_611_ = v_reuseFailAlloc_616_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
size_t v___x_612_; size_t v___x_613_; lean_object* v___x_614_; 
v___x_612_ = ((size_t)1ULL);
v___x_613_ = lean_usize_add(v_i_587_, v___x_612_);
v___x_614_ = lean_array_uset(v_bs_x27_599_, v_i_587_, v___x_611_);
v_i_587_ = v___x_613_;
v_bs_588_ = v___x_614_;
goto _start;
}
}
}
else
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_625_; 
lean_dec_ref(v_bs_x27_599_);
lean_dec(v_v_597_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec(v_w_585_);
v_a_618_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_625_ == 0)
{
v___x_620_ = v___x_602_;
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v___x_602_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_625_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_623_; 
if (v_isShared_621_ == 0)
{
v___x_623_ = v___x_620_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_a_618_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
return v___x_623_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1___boxed(lean_object* v_info_629_, lean_object* v_w_630_, lean_object* v_sz_631_, lean_object* v_i_632_, lean_object* v_bs_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_){
_start:
{
size_t v_sz_boxed_640_; size_t v_i_boxed_641_; lean_object* v_res_642_; 
v_sz_boxed_640_ = lean_unbox_usize(v_sz_631_);
lean_dec(v_sz_631_);
v_i_boxed_641_ = lean_unbox_usize(v_i_632_);
lean_dec(v_i_632_);
v_res_642_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__1(v_info_629_, v_w_630_, v_sz_boxed_640_, v_i_boxed_641_, v_bs_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_);
lean_dec_ref(v_info_629_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___boxed(lean_object* v_info_643_, lean_object* v_w_644_, lean_object* v_c_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_, lean_object* v_a_650_, lean_object* v_a_651_){
_start:
{
lean_object* v_res_652_; 
v_res_652_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_643_, v_w_644_, v_c_645_, v_a_646_, v_a_647_, v_a_648_, v_a_649_, v_a_650_);
lean_dec_ref(v_info_643_);
return v_res_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(lean_object* v___y_653_){
_start:
{
lean_object* v___x_655_; lean_object* v_ngen_656_; lean_object* v_namePrefix_657_; lean_object* v_idx_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_687_; 
v___x_655_ = lean_st_ref_get(v___y_653_);
v_ngen_656_ = lean_ctor_get(v___x_655_, 2);
lean_inc_ref(v_ngen_656_);
lean_dec(v___x_655_);
v_namePrefix_657_ = lean_ctor_get(v_ngen_656_, 0);
v_idx_658_ = lean_ctor_get(v_ngen_656_, 1);
v_isSharedCheck_687_ = !lean_is_exclusive(v_ngen_656_);
if (v_isSharedCheck_687_ == 0)
{
v___x_660_ = v_ngen_656_;
v_isShared_661_ = v_isSharedCheck_687_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_idx_658_);
lean_inc(v_namePrefix_657_);
lean_dec(v_ngen_656_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_687_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v___x_662_; lean_object* v_env_663_; lean_object* v_nextMacroScope_664_; lean_object* v_auxDeclNGen_665_; lean_object* v_traceState_666_; lean_object* v_cache_667_; lean_object* v_messages_668_; lean_object* v_infoState_669_; lean_object* v_snapshotTasks_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_685_; 
v___x_662_ = lean_st_ref_take(v___y_653_);
v_env_663_ = lean_ctor_get(v___x_662_, 0);
v_nextMacroScope_664_ = lean_ctor_get(v___x_662_, 1);
v_auxDeclNGen_665_ = lean_ctor_get(v___x_662_, 3);
v_traceState_666_ = lean_ctor_get(v___x_662_, 4);
v_cache_667_ = lean_ctor_get(v___x_662_, 5);
v_messages_668_ = lean_ctor_get(v___x_662_, 6);
v_infoState_669_ = lean_ctor_get(v___x_662_, 7);
v_snapshotTasks_670_ = lean_ctor_get(v___x_662_, 8);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_685_ == 0)
{
lean_object* v_unused_686_; 
v_unused_686_ = lean_ctor_get(v___x_662_, 2);
lean_dec(v_unused_686_);
v___x_672_ = v___x_662_;
v_isShared_673_ = v_isSharedCheck_685_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_snapshotTasks_670_);
lean_inc(v_infoState_669_);
lean_inc(v_messages_668_);
lean_inc(v_cache_667_);
lean_inc(v_traceState_666_);
lean_inc(v_auxDeclNGen_665_);
lean_inc(v_nextMacroScope_664_);
lean_inc(v_env_663_);
lean_dec(v___x_662_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_685_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v_r_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_678_; 
lean_inc(v_idx_658_);
lean_inc(v_namePrefix_657_);
v_r_674_ = l_Lean_Name_num___override(v_namePrefix_657_, v_idx_658_);
v___x_675_ = lean_unsigned_to_nat(1u);
v___x_676_ = lean_nat_add(v_idx_658_, v___x_675_);
lean_dec(v_idx_658_);
if (v_isShared_661_ == 0)
{
lean_ctor_set(v___x_660_, 1, v___x_676_);
v___x_678_ = v___x_660_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_namePrefix_657_);
lean_ctor_set(v_reuseFailAlloc_684_, 1, v___x_676_);
v___x_678_ = v_reuseFailAlloc_684_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
lean_object* v___x_680_; 
if (v_isShared_673_ == 0)
{
lean_ctor_set(v___x_672_, 2, v___x_678_);
v___x_680_ = v___x_672_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_env_663_);
lean_ctor_set(v_reuseFailAlloc_683_, 1, v_nextMacroScope_664_);
lean_ctor_set(v_reuseFailAlloc_683_, 2, v___x_678_);
lean_ctor_set(v_reuseFailAlloc_683_, 3, v_auxDeclNGen_665_);
lean_ctor_set(v_reuseFailAlloc_683_, 4, v_traceState_666_);
lean_ctor_set(v_reuseFailAlloc_683_, 5, v_cache_667_);
lean_ctor_set(v_reuseFailAlloc_683_, 6, v_messages_668_);
lean_ctor_set(v_reuseFailAlloc_683_, 7, v_infoState_669_);
lean_ctor_set(v_reuseFailAlloc_683_, 8, v_snapshotTasks_670_);
v___x_680_ = v_reuseFailAlloc_683_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_681_ = lean_st_ref_set(v___y_653_, v___x_680_);
v___x_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_682_, 0, v_r_674_);
return v___x_682_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg___boxed(lean_object* v___y_688_, lean_object* v___y_689_){
_start:
{
lean_object* v_res_690_; 
v_res_690_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(v___y_688_);
lean_dec(v___y_688_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_){
_start:
{
lean_object* v___x_697_; lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
v___x_697_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(v___y_695_);
v_a_698_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v___x_697_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_697_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_a_698_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0___boxed(lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
lean_dec(v___y_710_);
lean_dec_ref(v___y_709_);
lean_dec(v___y_708_);
lean_dec_ref(v___y_707_);
lean_dec_ref(v___y_706_);
return v_res_712_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4(void){
_start:
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_719_ = lean_box(0);
v___x_720_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__3));
v___x_721_ = l_Lean_Expr_const___override(v___x_720_, v___x_719_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(lean_object* v_x_722_, lean_object* v_info_723_, lean_object* v_c_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0(v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v_a_732_; lean_object* v___x_733_; 
v_a_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc(v_a_732_);
lean_dec_ref(v___x_731_);
lean_inc(v_a_727_);
lean_inc(v_a_732_);
v___x_733_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go(v_info_723_, v_a_732_, v_c_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_);
if (lean_obj_tag(v___x_733_) == 0)
{
lean_object* v_a_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_788_; 
v_a_734_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_788_ == 0)
{
v___x_736_ = v___x_733_;
v_isShared_737_ = v_isSharedCheck_788_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_a_734_);
lean_dec(v___x_733_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_788_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v_snd_738_; uint8_t v___x_739_; 
v_snd_738_ = lean_ctor_get(v_a_734_, 1);
v___x_739_ = lean_unbox(v_snd_738_);
if (v___x_739_ == 0)
{
lean_object* v_fst_740_; lean_object* v___x_742_; 
lean_dec(v_a_732_);
lean_dec(v_a_727_);
lean_dec(v_x_722_);
v_fst_740_ = lean_ctor_get(v_a_734_, 0);
lean_inc(v_fst_740_);
lean_dec(v_a_734_);
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 0, v_fst_740_);
v___x_742_ = v___x_736_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_fst_740_);
v___x_742_ = v_reuseFailAlloc_743_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
return v___x_742_;
}
}
else
{
lean_object* v_fst_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_786_; 
lean_del_object(v___x_736_);
v_fst_744_ = lean_ctor_get(v_a_734_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v_a_734_);
if (v_isSharedCheck_786_ == 0)
{
lean_object* v_unused_787_; 
v_unused_787_ = lean_ctor_get(v_a_734_, 1);
lean_dec(v_unused_787_);
v___x_746_ = v_a_734_;
v_isShared_747_ = v_isSharedCheck_786_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_fst_744_);
lean_dec(v_a_734_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_786_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__1));
v___x_749_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_748_, v_a_727_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_777_; 
v_a_750_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_777_ == 0)
{
v___x_752_ = v___x_749_;
v_isShared_753_ = v_isSharedCheck_777_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_749_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_777_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v_size_754_; lean_object* v___x_755_; lean_object* v_lctx_756_; lean_object* v_nextIdx_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_776_; 
v_size_754_ = lean_ctor_get(v_info_723_, 2);
v___x_755_ = lean_st_ref_take(v_a_727_);
v_lctx_756_ = lean_ctor_get(v___x_755_, 0);
v_nextIdx_757_ = lean_ctor_get(v___x_755_, 1);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_755_);
if (v_isSharedCheck_776_ == 0)
{
v___x_759_ = v___x_755_;
v_isShared_760_ = v_isSharedCheck_776_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_nextIdx_757_);
lean_inc(v_lctx_756_);
lean_dec(v___x_755_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_776_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
uint8_t v___x_761_; lean_object* v___x_763_; 
v___x_761_ = 1;
lean_inc(v_size_754_);
if (v_isShared_747_ == 0)
{
lean_ctor_set_tag(v___x_746_, 11);
lean_ctor_set(v___x_746_, 1, v_x_722_);
lean_ctor_set(v___x_746_, 0, v_size_754_);
v___x_763_ = v___x_746_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_size_754_);
lean_ctor_set(v_reuseFailAlloc_775_, 1, v_x_722_);
v___x_763_ = v_reuseFailAlloc_775_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_768_; 
v___x_764_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___closed__4);
v___x_765_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_765_, 0, v_a_732_);
lean_ctor_set(v___x_765_, 1, v_a_750_);
lean_ctor_set(v___x_765_, 2, v___x_764_);
lean_ctor_set(v___x_765_, 3, v___x_763_);
lean_inc_ref(v___x_765_);
v___x_766_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_761_, v_lctx_756_, v___x_765_);
if (v_isShared_760_ == 0)
{
lean_ctor_set(v___x_759_, 0, v___x_766_);
v___x_768_ = v___x_759_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v___x_766_);
lean_ctor_set(v_reuseFailAlloc_774_, 1, v_nextIdx_757_);
v___x_768_ = v_reuseFailAlloc_774_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_772_; 
v___x_769_ = lean_st_ref_set(v_a_727_, v___x_768_);
lean_dec(v_a_727_);
v___x_770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_770_, 0, v___x_765_);
lean_ctor_set(v___x_770_, 1, v_fst_744_);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 0, v___x_770_);
v___x_772_ = v___x_752_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v___x_770_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
}
}
}
else
{
lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_785_; 
lean_del_object(v___x_746_);
lean_dec(v_fst_744_);
lean_dec(v_a_732_);
lean_dec(v_a_727_);
lean_dec(v_x_722_);
v_a_778_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_785_ == 0)
{
v___x_780_ = v___x_749_;
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v___x_749_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_783_; 
if (v_isShared_781_ == 0)
{
v___x_783_ = v___x_780_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_a_778_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_796_; 
lean_dec(v_a_732_);
lean_dec(v_a_727_);
lean_dec(v_x_722_);
v_a_789_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_796_ == 0)
{
v___x_791_ = v___x_733_;
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_dec(v___x_733_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_794_; 
if (v_isShared_792_ == 0)
{
v___x_794_ = v___x_791_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_a_789_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
else
{
lean_object* v_a_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_804_; 
lean_dec(v_a_729_);
lean_dec_ref(v_a_728_);
lean_dec(v_a_727_);
lean_dec_ref(v_a_726_);
lean_dec_ref(v_a_725_);
lean_dec_ref(v_c_724_);
lean_dec(v_x_722_);
v_a_797_ = lean_ctor_get(v___x_731_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_804_ == 0)
{
v___x_799_ = v___x_731_;
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_a_797_);
lean_dec(v___x_731_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_802_; 
if (v_isShared_800_ == 0)
{
v___x_802_ = v___x_799_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_a_797_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S___boxed(lean_object* v_x_805_, lean_object* v_info_806_, lean_object* v_c_807_, lean_object* v_a_808_, lean_object* v_a_809_, lean_object* v_a_810_, lean_object* v_a_811_, lean_object* v_a_812_, lean_object* v_a_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_805_, v_info_806_, v_c_807_, v_a_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_);
lean_dec_ref(v_info_806_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0(lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_){
_start:
{
lean_object* v___x_821_; 
v___x_821_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___redArg(v___y_819_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0___boxed(lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_spec__0_spec__0(v___y_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_);
lean_dec(v___y_826_);
lean_dec_ref(v___y_825_);
lean_dec(v___y_824_);
lean_dec_ref(v___y_823_);
lean_dec_ref(v___y_822_);
return v_res_828_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0(lean_object* v_x_829_, lean_object* v_as_830_, size_t v_i_831_, size_t v_stop_832_){
_start:
{
uint8_t v___x_833_; 
v___x_833_ = lean_usize_dec_eq(v_i_831_, v_stop_832_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; uint8_t v___x_835_; lean_object* v___x_281__overap_836_; lean_object* v___x_837_; uint8_t v___x_838_; 
v___x_834_ = lean_array_uget_borrowed(v_as_830_, v_i_831_);
v___x_835_ = 1;
v___x_281__overap_836_ = l_Lean_instSingletonFVarIdFVarIdSet;
lean_inc(v_x_829_);
v___x_837_ = lean_apply_1(v___x_281__overap_836_, v_x_829_);
v___x_838_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_argDepOn(v___x_835_, v___x_834_, v___x_837_);
lean_dec(v___x_837_);
if (v___x_838_ == 0)
{
size_t v___x_839_; size_t v___x_840_; 
v___x_839_ = ((size_t)1ULL);
v___x_840_ = lean_usize_add(v_i_831_, v___x_839_);
v_i_831_ = v___x_840_;
goto _start;
}
else
{
lean_dec(v_x_829_);
return v___x_838_;
}
}
else
{
uint8_t v___x_842_; 
lean_dec(v_x_829_);
v___x_842_ = 0;
return v___x_842_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0___boxed(lean_object* v_x_843_, lean_object* v_as_844_, lean_object* v_i_845_, lean_object* v_stop_846_){
_start:
{
size_t v_i_boxed_847_; size_t v_stop_boxed_848_; uint8_t v_res_849_; lean_object* v_r_850_; 
v_i_boxed_847_ = lean_unbox_usize(v_i_845_);
lean_dec(v_i_845_);
v_stop_boxed_848_ = lean_unbox_usize(v_stop_846_);
lean_dec(v_stop_846_);
v_res_849_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0(v_x_843_, v_as_844_, v_i_boxed_847_, v_stop_boxed_848_);
lean_dec_ref(v_as_844_);
v_r_850_ = lean_box(v_res_849_);
return v_r_850_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(lean_object* v_instr_851_, lean_object* v_x_852_){
_start:
{
if (lean_obj_tag(v_instr_851_) == 0)
{
lean_object* v_decl_853_; lean_object* v_value_854_; 
v_decl_853_ = lean_ctor_get(v_instr_851_, 0);
v_value_854_ = lean_ctor_get(v_decl_853_, 3);
if (lean_obj_tag(v_value_854_) == 5)
{
lean_object* v_args_855_; lean_object* v___x_856_; lean_object* v___x_857_; uint8_t v___x_858_; 
v_args_855_ = lean_ctor_get(v_value_854_, 1);
v___x_856_ = lean_unsigned_to_nat(0u);
v___x_857_ = lean_array_get_size(v_args_855_);
v___x_858_ = lean_nat_dec_lt(v___x_856_, v___x_857_);
if (v___x_858_ == 0)
{
lean_dec(v_x_852_);
return v___x_858_;
}
else
{
if (v___x_858_ == 0)
{
lean_dec(v_x_852_);
return v___x_858_;
}
else
{
size_t v___x_859_; size_t v___x_860_; uint8_t v___x_861_; 
v___x_859_ = ((size_t)0ULL);
v___x_860_ = lean_usize_of_nat(v___x_857_);
v___x_861_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing_spec__0(v_x_852_, v_args_855_, v___x_859_, v___x_860_);
return v___x_861_;
}
}
}
else
{
uint8_t v___x_862_; 
lean_dec(v_x_852_);
v___x_862_ = 0;
return v___x_862_;
}
}
else
{
uint8_t v___x_863_; 
lean_dec(v_x_852_);
v___x_863_ = 0;
return v___x_863_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing___boxed(lean_object* v_instr_864_, lean_object* v_x_865_){
_start:
{
uint8_t v_res_866_; lean_object* v_r_867_; 
v_res_866_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_864_, v_x_865_);
lean_dec_ref(v_instr_864_);
v_r_867_ = lean_box(v_res_866_);
return v_r_867_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx(uint8_t v_x_868_){
_start:
{
switch(v_x_868_)
{
case 0:
{
lean_object* v___x_869_; 
v___x_869_ = lean_unsigned_to_nat(0u);
return v___x_869_;
}
case 1:
{
lean_object* v___x_870_; 
v___x_870_ = lean_unsigned_to_nat(1u);
return v___x_870_;
}
default: 
{
lean_object* v___x_871_; 
v___x_871_ = lean_unsigned_to_nat(2u);
return v___x_871_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx___boxed(lean_object* v_x_872_){
_start:
{
uint8_t v_x_boxed_873_; lean_object* v_res_874_; 
v_x_boxed_873_ = lean_unbox(v_x_872_);
v_res_874_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx(v_x_boxed_873_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_toCtorIdx(uint8_t v_x_875_){
_start:
{
lean_object* v___x_876_; 
v___x_876_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorIdx(v_x_875_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_toCtorIdx___boxed(lean_object* v_x_877_){
_start:
{
uint8_t v_x_4__boxed_878_; lean_object* v_res_879_; 
v_x_4__boxed_878_ = lean_unbox(v_x_877_);
v_res_879_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_toCtorIdx(v_x_4__boxed_878_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg(lean_object* v_k_880_){
_start:
{
lean_inc(v_k_880_);
return v_k_880_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg___boxed(lean_object* v_k_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___redArg(v_k_881_);
lean_dec(v_k_881_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim(lean_object* v_motive_883_, lean_object* v_ctorIdx_884_, uint8_t v_t_885_, lean_object* v_h_886_, lean_object* v_k_887_){
_start:
{
lean_inc(v_k_887_);
return v_k_887_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim___boxed(lean_object* v_motive_888_, lean_object* v_ctorIdx_889_, lean_object* v_t_890_, lean_object* v_h_891_, lean_object* v_k_892_){
_start:
{
uint8_t v_t_boxed_893_; lean_object* v_res_894_; 
v_t_boxed_893_ = lean_unbox(v_t_890_);
v_res_894_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ctorElim(v_motive_888_, v_ctorIdx_889_, v_t_boxed_893_, v_h_891_, v_k_892_);
lean_dec(v_k_892_);
lean_dec(v_ctorIdx_889_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg(lean_object* v_ownedArg_895_){
_start:
{
lean_inc(v_ownedArg_895_);
return v_ownedArg_895_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg___boxed(lean_object* v_ownedArg_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___redArg(v_ownedArg_896_);
lean_dec(v_ownedArg_896_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim(lean_object* v_motive_898_, uint8_t v_t_899_, lean_object* v_h_900_, lean_object* v_ownedArg_901_){
_start:
{
lean_inc(v_ownedArg_901_);
return v_ownedArg_901_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim___boxed(lean_object* v_motive_902_, lean_object* v_t_903_, lean_object* v_h_904_, lean_object* v_ownedArg_905_){
_start:
{
uint8_t v_t_boxed_906_; lean_object* v_res_907_; 
v_t_boxed_906_ = lean_unbox(v_t_903_);
v_res_907_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_ownedArg_elim(v_motive_902_, v_t_boxed_906_, v_h_904_, v_ownedArg_905_);
lean_dec(v_ownedArg_905_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg(lean_object* v_other_908_){
_start:
{
lean_inc(v_other_908_);
return v_other_908_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg___boxed(lean_object* v_other_909_){
_start:
{
lean_object* v_res_910_; 
v_res_910_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___redArg(v_other_909_);
lean_dec(v_other_909_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim(lean_object* v_motive_911_, uint8_t v_t_912_, lean_object* v_h_913_, lean_object* v_other_914_){
_start:
{
lean_inc(v_other_914_);
return v_other_914_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim___boxed(lean_object* v_motive_915_, lean_object* v_t_916_, lean_object* v_h_917_, lean_object* v_other_918_){
_start:
{
uint8_t v_t_boxed_919_; lean_object* v_res_920_; 
v_t_boxed_919_ = lean_unbox(v_t_916_);
v_res_920_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_other_elim(v_motive_915_, v_t_boxed_919_, v_h_917_, v_other_918_);
lean_dec(v_other_918_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg(lean_object* v_none_921_){
_start:
{
lean_inc(v_none_921_);
return v_none_921_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg___boxed(lean_object* v_none_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___redArg(v_none_922_);
lean_dec(v_none_922_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim(lean_object* v_motive_924_, uint8_t v_t_925_, lean_object* v_h_926_, lean_object* v_none_927_){
_start:
{
lean_inc(v_none_927_);
return v_none_927_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim___boxed(lean_object* v_motive_928_, lean_object* v_t_929_, lean_object* v_h_930_, lean_object* v_none_931_){
_start:
{
uint8_t v_t_boxed_932_; lean_object* v_res_933_; 
v_t_boxed_932_ = lean_unbox(v_t_929_);
v_res_933_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_UseClassification_none_elim(v_motive_928_, v_t_boxed_932_, v_h_930_, v_none_931_);
lean_dec(v_none_931_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(lean_object* v_x_934_, lean_object* v_as_935_, size_t v_sz_936_, size_t v_i_937_, lean_object* v_b_938_){
_start:
{
lean_object* v_a_941_; uint8_t v___x_945_; 
v___x_945_ = lean_usize_dec_lt(v_i_937_, v_sz_936_);
if (v___x_945_ == 0)
{
lean_object* v___x_946_; 
v___x_946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_946_, 0, v_b_938_);
return v___x_946_;
}
else
{
lean_object* v_snd_947_; lean_object* v_fst_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_992_; 
v_snd_947_ = lean_ctor_get(v_b_938_, 1);
v_fst_948_ = lean_ctor_get(v_b_938_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v_b_938_);
if (v_isSharedCheck_992_ == 0)
{
v___x_950_ = v_b_938_;
v_isShared_951_ = v_isSharedCheck_992_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_snd_947_);
lean_inc(v_fst_948_);
lean_dec(v_b_938_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_992_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v_array_952_; lean_object* v_start_953_; lean_object* v_stop_954_; uint8_t v___x_955_; 
v_array_952_ = lean_ctor_get(v_snd_947_, 0);
v_start_953_ = lean_ctor_get(v_snd_947_, 1);
v_stop_954_ = lean_ctor_get(v_snd_947_, 2);
v___x_955_ = lean_nat_dec_lt(v_start_953_, v_stop_954_);
if (v___x_955_ == 0)
{
lean_object* v___x_957_; 
if (v_isShared_951_ == 0)
{
v___x_957_ = v___x_950_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_fst_948_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v_snd_947_);
v___x_957_ = v_reuseFailAlloc_959_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
lean_object* v___x_958_; 
v___x_958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_958_, 0, v___x_957_);
return v___x_958_;
}
}
else
{
lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_988_; 
lean_inc(v_stop_954_);
lean_inc(v_start_953_);
lean_inc_ref(v_array_952_);
v_isSharedCheck_988_ = !lean_is_exclusive(v_snd_947_);
if (v_isSharedCheck_988_ == 0)
{
lean_object* v_unused_989_; lean_object* v_unused_990_; lean_object* v_unused_991_; 
v_unused_989_ = lean_ctor_get(v_snd_947_, 2);
lean_dec(v_unused_989_);
v_unused_990_ = lean_ctor_get(v_snd_947_, 1);
lean_dec(v_unused_990_);
v_unused_991_ = lean_ctor_get(v_snd_947_, 0);
lean_dec(v_unused_991_);
v___x_961_ = v_snd_947_;
v_isShared_962_ = v_isSharedCheck_988_;
goto v_resetjp_960_;
}
else
{
lean_dec(v_snd_947_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_988_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v_a_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_968_; 
v_a_963_ = lean_array_uget_borrowed(v_as_935_, v_i_937_);
v___x_964_ = lean_array_fget(v_array_952_, v_start_953_);
v___x_965_ = lean_unsigned_to_nat(1u);
v___x_966_ = lean_nat_add(v_start_953_, v___x_965_);
lean_dec(v_start_953_);
if (v_isShared_962_ == 0)
{
lean_ctor_set(v___x_961_, 1, v___x_966_);
v___x_968_ = v___x_961_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_array_952_);
lean_ctor_set(v_reuseFailAlloc_987_, 1, v___x_966_);
lean_ctor_set(v_reuseFailAlloc_987_, 2, v_stop_954_);
v___x_968_ = v_reuseFailAlloc_987_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
uint8_t v___y_970_; 
if (lean_obj_tag(v_a_963_) == 1)
{
lean_object* v_fvarId_975_; uint8_t v___x_976_; 
v_fvarId_975_ = lean_ctor_get(v_a_963_, 0);
v___x_976_ = l_Lean_instBEqFVarId_beq(v_fvarId_975_, v_x_934_);
if (v___x_976_ == 0)
{
lean_object* v___x_977_; 
lean_dec(v___x_964_);
lean_del_object(v___x_950_);
v___x_977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_977_, 0, v_fst_948_);
lean_ctor_set(v___x_977_, 1, v___x_968_);
v_a_941_ = v___x_977_;
goto v___jp_940_;
}
else
{
uint8_t v___x_978_; 
v___x_978_ = lean_unbox(v_fst_948_);
switch(v___x_978_)
{
case 0:
{
uint8_t v_borrow_979_; 
v_borrow_979_ = lean_ctor_get_uint8(v___x_964_, sizeof(void*)*3);
lean_dec(v___x_964_);
if (v_borrow_979_ == 0)
{
uint8_t v___x_980_; 
v___x_980_ = lean_unbox(v_fst_948_);
lean_dec(v_fst_948_);
v___y_970_ = v___x_980_;
goto v___jp_969_;
}
else
{
uint8_t v___x_981_; 
lean_dec(v_fst_948_);
v___x_981_ = 1;
v___y_970_ = v___x_981_;
goto v___jp_969_;
}
}
case 1:
{
uint8_t v___x_982_; 
lean_dec(v___x_964_);
v___x_982_ = lean_unbox(v_fst_948_);
lean_dec(v_fst_948_);
v___y_970_ = v___x_982_;
goto v___jp_969_;
}
default: 
{
uint8_t v_borrow_983_; 
lean_dec(v_fst_948_);
v_borrow_983_ = lean_ctor_get_uint8(v___x_964_, sizeof(void*)*3);
lean_dec(v___x_964_);
if (v_borrow_983_ == 0)
{
uint8_t v___x_984_; 
v___x_984_ = 0;
v___y_970_ = v___x_984_;
goto v___jp_969_;
}
else
{
uint8_t v___x_985_; 
v___x_985_ = 1;
v___y_970_ = v___x_985_;
goto v___jp_969_;
}
}
}
}
}
else
{
lean_object* v___x_986_; 
lean_dec(v___x_964_);
lean_del_object(v___x_950_);
v___x_986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_986_, 0, v_fst_948_);
lean_ctor_set(v___x_986_, 1, v___x_968_);
v_a_941_ = v___x_986_;
goto v___jp_940_;
}
v___jp_969_:
{
lean_object* v___x_971_; lean_object* v___x_973_; 
v___x_971_ = lean_box(v___y_970_);
if (v_isShared_951_ == 0)
{
lean_ctor_set(v___x_950_, 1, v___x_968_);
lean_ctor_set(v___x_950_, 0, v___x_971_);
v___x_973_ = v___x_950_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v___x_971_);
lean_ctor_set(v_reuseFailAlloc_974_, 1, v___x_968_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
v_a_941_ = v___x_973_;
goto v___jp_940_;
}
}
}
}
}
}
}
v___jp_940_:
{
size_t v___x_942_; size_t v___x_943_; 
v___x_942_ = ((size_t)1ULL);
v___x_943_ = lean_usize_add(v_i_937_, v___x_942_);
v_i_937_ = v___x_943_;
v_b_938_ = v_a_941_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg___boxed(lean_object* v_x_993_, lean_object* v_as_994_, lean_object* v_sz_995_, lean_object* v_i_996_, lean_object* v_b_997_, lean_object* v___y_998_){
_start:
{
size_t v_sz_boxed_999_; size_t v_i_boxed_1000_; lean_object* v_res_1001_; 
v_sz_boxed_999_ = lean_unbox_usize(v_sz_995_);
lean_dec(v_sz_995_);
v_i_boxed_1000_ = lean_unbox_usize(v_i_996_);
lean_dec(v_i_996_);
v_res_1001_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(v_x_993_, v_as_994_, v_sz_boxed_999_, v_i_boxed_1000_, v_b_997_);
lean_dec_ref(v_as_994_);
lean_dec(v_x_993_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(lean_object* v_instr_1002_, lean_object* v_x_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_){
_start:
{
if (lean_obj_tag(v_instr_1002_) == 0)
{
lean_object* v_decl_1021_; lean_object* v_value_1022_; 
v_decl_1021_ = lean_ctor_get(v_instr_1002_, 0);
v_value_1022_ = lean_ctor_get(v_decl_1021_, 3);
lean_inc(v_value_1022_);
switch(lean_obj_tag(v_value_1022_))
{
case 9:
{
lean_object* v_fn_1023_; lean_object* v_args_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1087_; 
lean_dec_ref(v_instr_1002_);
v_fn_1023_ = lean_ctor_get(v_value_1022_, 0);
v_args_1024_ = lean_ctor_get(v_value_1022_, 1);
v_isSharedCheck_1087_ = !lean_is_exclusive(v_value_1022_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1026_ = v_value_1022_;
v_isShared_1027_ = v_isSharedCheck_1087_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_args_1024_);
lean_inc(v_fn_1023_);
lean_dec(v_value_1022_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1087_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1029_; 
lean_inc_ref(v_args_1024_);
lean_inc(v_fn_1023_);
if (v_isShared_1027_ == 0)
{
v___x_1029_ = v___x_1026_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_fn_1023_);
lean_ctor_set(v_reuseFailAlloc_1086_, 1, v_args_1024_);
v___x_1029_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
lean_object* v___x_1030_; 
v___x_1030_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_fn_1023_, v_a_1008_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1077_; 
v_a_1031_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1077_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1077_ == 0)
{
v___x_1033_ = v___x_1030_;
v_isShared_1034_ = v_isSharedCheck_1077_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_dec(v___x_1030_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1077_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
if (lean_obj_tag(v_a_1031_) == 1)
{
lean_object* v_val_1035_; lean_object* v_params_1036_; uint8_t v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; size_t v_sz_1043_; size_t v___x_1044_; lean_object* v___x_1045_; 
lean_del_object(v___x_1033_);
lean_dec_ref(v___x_1029_);
v_val_1035_ = lean_ctor_get(v_a_1031_, 0);
lean_inc(v_val_1035_);
lean_dec_ref(v_a_1031_);
v_params_1036_ = lean_ctor_get(v_val_1035_, 3);
lean_inc_ref(v_params_1036_);
lean_dec(v_val_1035_);
v___x_1037_ = 2;
v___x_1038_ = lean_unsigned_to_nat(0u);
v___x_1039_ = lean_array_get_size(v_params_1036_);
v___x_1040_ = l_Array_toSubarray___redArg(v_params_1036_, v___x_1038_, v___x_1039_);
v___x_1041_ = lean_box(v___x_1037_);
v___x_1042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1041_);
lean_ctor_set(v___x_1042_, 1, v___x_1040_);
v_sz_1043_ = lean_array_size(v_args_1024_);
v___x_1044_ = ((size_t)0ULL);
v___x_1045_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(v_x_1003_, v_args_1024_, v_sz_1043_, v___x_1044_, v___x_1042_);
lean_dec_ref(v_args_1024_);
lean_dec(v_x_1003_);
if (lean_obj_tag(v___x_1045_) == 0)
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1054_; 
v_a_1046_ = lean_ctor_get(v___x_1045_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1045_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1048_ = v___x_1045_;
v_isShared_1049_ = v_isSharedCheck_1054_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_1045_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1054_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v_fst_1050_; lean_object* v___x_1052_; 
v_fst_1050_ = lean_ctor_get(v_a_1046_, 0);
lean_inc(v_fst_1050_);
lean_dec(v_a_1046_);
if (v_isShared_1049_ == 0)
{
lean_ctor_set(v___x_1048_, 0, v_fst_1050_);
v___x_1052_ = v___x_1048_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_fst_1050_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
}
else
{
lean_object* v_a_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1062_; 
v_a_1055_ = lean_ctor_get(v___x_1045_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1045_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1057_ = v___x_1045_;
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_a_1055_);
lean_dec(v___x_1045_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1060_; 
if (v_isShared_1058_ == 0)
{
v___x_1060_ = v___x_1057_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v_a_1055_);
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
uint8_t v___x_1063_; lean_object* v___x_3332__overap_1064_; lean_object* v___x_1065_; uint8_t v___x_1066_; 
lean_dec(v_a_1031_);
lean_dec_ref(v_args_1024_);
v___x_1063_ = 1;
v___x_3332__overap_1064_ = l_Lean_instSingletonFVarIdFVarIdSet;
v___x_1065_ = lean_apply_1(v___x_3332__overap_1064_, v_x_1003_);
v___x_1066_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(v___x_1063_, v___x_1029_, v___x_1065_);
lean_dec(v___x_1065_);
lean_dec_ref(v___x_1029_);
if (v___x_1066_ == 0)
{
uint8_t v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1070_; 
v___x_1067_ = 2;
v___x_1068_ = lean_box(v___x_1067_);
if (v_isShared_1034_ == 0)
{
lean_ctor_set(v___x_1033_, 0, v___x_1068_);
v___x_1070_ = v___x_1033_;
goto v_reusejp_1069_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v___x_1068_);
v___x_1070_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1069_;
}
v_reusejp_1069_:
{
return v___x_1070_;
}
}
else
{
uint8_t v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1075_; 
v___x_1072_ = 0;
v___x_1073_ = lean_box(v___x_1072_);
if (v_isShared_1034_ == 0)
{
lean_ctor_set(v___x_1033_, 0, v___x_1073_);
v___x_1075_ = v___x_1033_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v___x_1073_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
}
}
}
}
}
else
{
lean_object* v_a_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1085_; 
lean_dec_ref(v___x_1029_);
lean_dec_ref(v_args_1024_);
lean_dec(v_x_1003_);
v_a_1078_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1085_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1085_ == 0)
{
v___x_1080_ = v___x_1030_;
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_a_1078_);
lean_dec(v___x_1030_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v___x_1083_; 
if (v_isShared_1081_ == 0)
{
v___x_1083_ = v___x_1080_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v_a_1078_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
}
}
}
}
case 10:
{
lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1114_; 
v_isSharedCheck_1114_ = !lean_is_exclusive(v_instr_1002_);
if (v_isSharedCheck_1114_ == 0)
{
lean_object* v_unused_1115_; 
v_unused_1115_ = lean_ctor_get(v_instr_1002_, 0);
lean_dec(v_unused_1115_);
v___x_1089_ = v_instr_1002_;
v_isShared_1090_ = v_isSharedCheck_1114_;
goto v_resetjp_1088_;
}
else
{
lean_dec(v_instr_1002_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1114_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v_fn_1091_; lean_object* v_args_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1113_; 
v_fn_1091_ = lean_ctor_get(v_value_1022_, 0);
v_args_1092_ = lean_ctor_get(v_value_1022_, 1);
v_isSharedCheck_1113_ = !lean_is_exclusive(v_value_1022_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1094_ = v_value_1022_;
v_isShared_1095_ = v_isSharedCheck_1113_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_args_1092_);
lean_inc(v_fn_1091_);
lean_dec(v_value_1022_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1113_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
uint8_t v___x_1096_; lean_object* v___x_1098_; 
v___x_1096_ = 1;
if (v_isShared_1095_ == 0)
{
v___x_1098_ = v___x_1094_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v_fn_1091_);
lean_ctor_set(v_reuseFailAlloc_1112_, 1, v_args_1092_);
v___x_1098_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
lean_object* v___x_3353__overap_1099_; lean_object* v___x_1100_; uint8_t v___x_1101_; 
v___x_3353__overap_1099_ = l_Lean_instSingletonFVarIdFVarIdSet;
v___x_1100_ = lean_apply_1(v___x_3353__overap_1099_, v_x_1003_);
v___x_1101_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(v___x_1096_, v___x_1098_, v___x_1100_);
lean_dec(v___x_1100_);
lean_dec_ref(v___x_1098_);
if (v___x_1101_ == 0)
{
uint8_t v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1105_; 
v___x_1102_ = 2;
v___x_1103_ = lean_box(v___x_1102_);
if (v_isShared_1090_ == 0)
{
lean_ctor_set(v___x_1089_, 0, v___x_1103_);
v___x_1105_ = v___x_1089_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v___x_1103_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
else
{
uint8_t v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1110_; 
v___x_1107_ = 0;
v___x_1108_ = lean_box(v___x_1107_);
if (v_isShared_1090_ == 0)
{
lean_ctor_set(v___x_1089_, 0, v___x_1108_);
v___x_1110_ = v___x_1089_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v___x_1108_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
}
}
}
}
case 4:
{
lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1142_; 
v_isSharedCheck_1142_ = !lean_is_exclusive(v_instr_1002_);
if (v_isSharedCheck_1142_ == 0)
{
lean_object* v_unused_1143_; 
v_unused_1143_ = lean_ctor_get(v_instr_1002_, 0);
lean_dec(v_unused_1143_);
v___x_1117_ = v_instr_1002_;
v_isShared_1118_ = v_isSharedCheck_1142_;
goto v_resetjp_1116_;
}
else
{
lean_dec(v_instr_1002_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1142_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v_fvarId_1119_; lean_object* v_args_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1141_; 
v_fvarId_1119_ = lean_ctor_get(v_value_1022_, 0);
v_args_1120_ = lean_ctor_get(v_value_1022_, 1);
v_isSharedCheck_1141_ = !lean_is_exclusive(v_value_1022_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1122_ = v_value_1022_;
v_isShared_1123_ = v_isSharedCheck_1141_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_args_1120_);
lean_inc(v_fvarId_1119_);
lean_dec(v_value_1022_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1141_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
uint8_t v___x_1124_; lean_object* v___x_1126_; 
v___x_1124_ = 1;
if (v_isShared_1123_ == 0)
{
v___x_1126_ = v___x_1122_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_fvarId_1119_);
lean_ctor_set(v_reuseFailAlloc_1140_, 1, v_args_1120_);
v___x_1126_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
lean_object* v___x_3383__overap_1127_; lean_object* v___x_1128_; uint8_t v___x_1129_; 
v___x_3383__overap_1127_ = l_Lean_instSingletonFVarIdFVarIdSet;
v___x_1128_ = lean_apply_1(v___x_3383__overap_1127_, v_x_1003_);
v___x_1129_ = l___private_Lean_Compiler_LCNF_DependsOn_0__Lean_Compiler_LCNF_letValueDepOn(v___x_1124_, v___x_1126_, v___x_1128_);
lean_dec(v___x_1128_);
lean_dec_ref(v___x_1126_);
if (v___x_1129_ == 0)
{
uint8_t v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1133_; 
v___x_1130_ = 2;
v___x_1131_ = lean_box(v___x_1130_);
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 0, v___x_1131_);
v___x_1133_ = v___x_1117_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v___x_1131_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
else
{
uint8_t v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1138_; 
v___x_1135_ = 0;
v___x_1136_ = lean_box(v___x_1135_);
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 0, v___x_1136_);
v___x_1138_ = v___x_1117_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
}
}
}
default: 
{
lean_dec(v_value_1022_);
goto v___jp_1010_;
}
}
}
else
{
goto v___jp_1010_;
}
v___jp_1010_:
{
uint8_t v___x_1011_; lean_object* v___x_323__overap_1012_; lean_object* v___x_1013_; uint8_t v___x_1014_; 
v___x_1011_ = 1;
v___x_323__overap_1012_ = l_Lean_instSingletonFVarIdFVarIdSet;
v___x_1013_ = lean_apply_1(v___x_323__overap_1012_, v_x_1003_);
v___x_1014_ = l_Lean_Compiler_LCNF_CodeDecl_dependsOn(v___x_1011_, v_instr_1002_, v___x_1013_);
lean_dec(v___x_1013_);
lean_dec_ref(v_instr_1002_);
if (v___x_1014_ == 0)
{
uint8_t v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1015_ = 2;
v___x_1016_ = lean_box(v___x_1015_);
v___x_1017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
return v___x_1017_;
}
else
{
uint8_t v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1018_ = 1;
v___x_1019_ = lean_box(v___x_1018_);
v___x_1020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1020_, 0, v___x_1019_);
return v___x_1020_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse___boxed(lean_object* v_instr_1144_, lean_object* v_x_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_){
_start:
{
lean_object* v_res_1152_; 
v_res_1152_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_1144_, v_x_1145_, v_a_1146_, v_a_1147_, v_a_1148_, v_a_1149_, v_a_1150_);
lean_dec(v_a_1150_);
lean_dec_ref(v_a_1149_);
lean_dec(v_a_1148_);
lean_dec_ref(v_a_1147_);
lean_dec_ref(v_a_1146_);
return v_res_1152_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0(lean_object* v_x_1153_, lean_object* v_as_1154_, size_t v_sz_1155_, size_t v_i_1156_, lean_object* v_b_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_){
_start:
{
lean_object* v___x_1164_; 
v___x_1164_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___redArg(v_x_1153_, v_as_1154_, v_sz_1155_, v_i_1156_, v_b_1157_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0___boxed(lean_object* v_x_1165_, lean_object* v_as_1166_, lean_object* v_sz_1167_, lean_object* v_i_1168_, lean_object* v_b_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
size_t v_sz_boxed_1176_; size_t v_i_boxed_1177_; lean_object* v_res_1178_; 
v_sz_boxed_1176_ = lean_unbox_usize(v_sz_1167_);
lean_dec(v_sz_1167_);
v_i_boxed_1177_ = lean_unbox_usize(v_i_1168_);
lean_dec(v_i_1168_);
v_res_1178_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse_spec__0(v_x_1165_, v_as_1166_, v_sz_boxed_1176_, v_i_boxed_1177_, v_b_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1173_);
lean_dec(v___y_1172_);
lean_dec_ref(v___y_1171_);
lean_dec_ref(v___y_1170_);
lean_dec_ref(v_as_1166_);
lean_dec(v_x_1165_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(lean_object* v_alt_1179_, lean_object* v_f_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_){
_start:
{
lean_object* v___y_1188_; 
switch(lean_obj_tag(v_alt_1179_))
{
case 0:
{
lean_object* v_code_1207_; 
v_code_1207_ = lean_ctor_get(v_alt_1179_, 2);
lean_inc_ref(v_code_1207_);
v___y_1188_ = v_code_1207_;
goto v___jp_1187_;
}
case 1:
{
lean_object* v_code_1208_; 
v_code_1208_ = lean_ctor_get(v_alt_1179_, 1);
lean_inc_ref(v_code_1208_);
v___y_1188_ = v_code_1208_;
goto v___jp_1187_;
}
default: 
{
lean_object* v_code_1209_; 
v_code_1209_ = lean_ctor_get(v_alt_1179_, 0);
lean_inc_ref(v_code_1209_);
v___y_1188_ = v_code_1209_;
goto v___jp_1187_;
}
}
v___jp_1187_:
{
lean_object* v___x_1189_; 
v___x_1189_ = lean_apply_7(v_f_1180_, v___y_1188_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, lean_box(0));
if (lean_obj_tag(v___x_1189_) == 0)
{
lean_object* v_a_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1198_; 
v_a_1190_ = lean_ctor_get(v___x_1189_, 0);
v_isSharedCheck_1198_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1192_ = v___x_1189_;
v_isShared_1193_ = v_isSharedCheck_1198_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_a_1190_);
lean_dec(v___x_1189_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1198_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1194_; lean_object* v___x_1196_; 
v___x_1194_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_alt_1179_, v_a_1190_);
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 0, v___x_1194_);
v___x_1196_ = v___x_1192_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v___x_1194_);
v___x_1196_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
return v___x_1196_;
}
}
}
else
{
lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1206_; 
lean_dec_ref(v_alt_1179_);
v_a_1199_ = lean_ctor_get(v___x_1189_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1189_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1201_ = v___x_1189_;
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_dec(v___x_1189_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1204_; 
if (v_isShared_1202_ == 0)
{
v___x_1204_ = v___x_1201_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_a_1199_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
return v___x_1204_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg___boxed(lean_object* v_alt_1210_, lean_object* v_f_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_){
_start:
{
lean_object* v_res_1218_; 
v_res_1218_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_alt_1210_, v_f_1211_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D___boxed(lean_object* v_x_1219_, lean_object* v_info_1220_, lean_object* v_c_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_, lean_object* v_a_1224_, lean_object* v_a_1225_, lean_object* v_a_1226_, lean_object* v_a_1227_){
_start:
{
lean_object* v_res_1228_; 
v_res_1228_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(v_x_1219_, v_info_1220_, v_c_1221_, v_a_1222_, v_a_1223_, v_a_1224_, v_a_1225_, v_a_1226_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(lean_object* v_x_1229_, lean_object* v_info_1230_, lean_object* v_i_1231_, lean_object* v_as_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_){
_start:
{
lean_object* v___x_1239_; uint8_t v___x_1240_; 
v___x_1239_ = lean_array_get_size(v_as_1232_);
v___x_1240_ = lean_nat_dec_lt(v_i_1231_, v___x_1239_);
if (v___x_1240_ == 0)
{
lean_object* v___x_1241_; 
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
lean_dec(v___y_1235_);
lean_dec_ref(v___y_1234_);
lean_dec_ref(v___y_1233_);
lean_dec(v_i_1231_);
lean_dec_ref(v_info_1230_);
lean_dec(v_x_1229_);
v___x_1241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1241_, 0, v_as_1232_);
return v___x_1241_;
}
else
{
lean_object* v_a_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
v_a_1242_ = lean_array_fget_borrowed(v_as_1232_, v_i_1231_);
lean_inc_ref(v_info_1230_);
lean_inc(v_x_1229_);
v___x_1243_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D___boxed), 9, 2);
lean_closure_set(v___x_1243_, 0, v_x_1229_);
lean_closure_set(v___x_1243_, 1, v_info_1230_);
lean_inc(v___y_1237_);
lean_inc_ref(v___y_1236_);
lean_inc(v___y_1235_);
lean_inc_ref(v___y_1234_);
lean_inc_ref(v___y_1233_);
lean_inc(v_a_1242_);
v___x_1244_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_a_1242_, v___x_1243_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_);
if (lean_obj_tag(v___x_1244_) == 0)
{
lean_object* v_a_1245_; size_t v___x_1246_; size_t v___x_1247_; uint8_t v___x_1248_; 
v_a_1245_ = lean_ctor_get(v___x_1244_, 0);
lean_inc(v_a_1245_);
lean_dec_ref(v___x_1244_);
v___x_1246_ = lean_ptr_addr(v_a_1242_);
v___x_1247_ = lean_ptr_addr(v_a_1245_);
v___x_1248_ = lean_usize_dec_eq(v___x_1246_, v___x_1247_);
if (v___x_1248_ == 0)
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1249_ = lean_unsigned_to_nat(1u);
v___x_1250_ = lean_nat_add(v_i_1231_, v___x_1249_);
v___x_1251_ = lean_array_fset(v_as_1232_, v_i_1231_, v_a_1245_);
lean_dec(v_i_1231_);
v_i_1231_ = v___x_1250_;
v_as_1232_ = v___x_1251_;
goto _start;
}
else
{
lean_object* v___x_1253_; lean_object* v___x_1254_; 
lean_dec(v_a_1245_);
v___x_1253_ = lean_unsigned_to_nat(1u);
v___x_1254_ = lean_nat_add(v_i_1231_, v___x_1253_);
lean_dec(v_i_1231_);
v_i_1231_ = v___x_1254_;
goto _start;
}
}
else
{
lean_object* v_a_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1263_; 
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
lean_dec(v___y_1235_);
lean_dec_ref(v___y_1234_);
lean_dec_ref(v___y_1233_);
lean_dec_ref(v_as_1232_);
lean_dec(v_i_1231_);
lean_dec_ref(v_info_1230_);
lean_dec(v_x_1229_);
v_a_1256_ = lean_ctor_get(v___x_1244_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v___x_1244_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1258_ = v___x_1244_;
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_a_1256_);
lean_dec(v___x_1244_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1261_; 
if (v_isShared_1259_ == 0)
{
v___x_1261_ = v___x_1258_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_a_1256_);
v___x_1261_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
return v___x_1261_;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1(void){
_start:
{
lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1265_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_1266_ = lean_unsigned_to_nat(61u);
v___x_1267_ = lean_unsigned_to_nat(247u);
v___x_1268_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__0));
v___x_1269_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_1270_ = l_mkPanicMessageWithDecl(v___x_1269_, v___x_1268_, v___x_1267_, v___x_1266_, v___x_1265_);
return v___x_1270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(lean_object* v_x_1271_, lean_object* v_info_1272_, lean_object* v_c_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_){
_start:
{
switch(lean_obj_tag(v_c_1273_))
{
case 0:
{
lean_object* v_decl_1280_; lean_object* v_k_1281_; uint8_t v___x_1282_; lean_object* v_instr_1283_; uint8_t v___x_1284_; uint8_t v___x_1285_; 
v_decl_1280_ = lean_ctor_get(v_c_1273_, 0);
v_k_1281_ = lean_ctor_get(v_c_1273_, 1);
v___x_1282_ = 1;
v_instr_1283_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_1282_, v_c_1273_);
lean_inc(v_x_1271_);
v___x_1284_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_1283_, v_x_1271_);
v___x_1285_ = 1;
if (v___x_1284_ == 0)
{
lean_object* v___x_1286_; 
lean_inc(v_a_1278_);
lean_inc_ref(v_a_1277_);
lean_inc(v_a_1276_);
lean_inc_ref(v_a_1275_);
lean_inc_ref(v_a_1274_);
lean_inc_ref(v_k_1281_);
lean_inc_ref(v_info_1272_);
lean_inc(v_x_1271_);
v___x_1286_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1271_, v_info_1272_, v_k_1281_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1404_; 
v_a_1287_ = lean_ctor_get(v___x_1286_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v___x_1286_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1289_ = v___x_1286_;
v_isShared_1290_ = v_isSharedCheck_1404_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_dec(v___x_1286_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1404_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v___y_1292_; lean_object* v_snd_1298_; uint8_t v___x_1299_; 
v_snd_1298_ = lean_ctor_get(v_a_1287_, 1);
v___x_1299_ = lean_unbox(v_snd_1298_);
if (v___x_1299_ == 0)
{
lean_object* v_fst_1300_; lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1389_; 
lean_inc(v_snd_1298_);
lean_del_object(v___x_1289_);
v_fst_1300_ = lean_ctor_get(v_a_1287_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_a_1287_);
if (v_isSharedCheck_1389_ == 0)
{
lean_object* v_unused_1390_; 
v_unused_1390_ = lean_ctor_get(v_a_1287_, 1);
lean_dec(v_unused_1390_);
v___x_1302_ = v_a_1287_;
v_isShared_1303_ = v_isSharedCheck_1389_;
goto v_resetjp_1301_;
}
else
{
lean_inc(v_fst_1300_);
lean_dec(v_a_1287_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1389_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
lean_object* v___x_1304_; 
lean_inc(v_x_1271_);
v___x_1304_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_1283_, v_x_1271_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1304_) == 0)
{
lean_object* v_a_1305_; lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1380_; 
v_a_1305_ = lean_ctor_get(v___x_1304_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1304_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1307_ = v___x_1304_;
v_isShared_1308_ = v_isSharedCheck_1380_;
goto v_resetjp_1306_;
}
else
{
lean_inc(v_a_1305_);
lean_dec(v___x_1304_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1380_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v___y_1310_; lean_object* v___y_1318_; uint8_t v___x_1322_; 
v___x_1322_ = lean_unbox(v_a_1305_);
lean_dec(v_a_1305_);
switch(v___x_1322_)
{
case 0:
{
size_t v___x_1323_; size_t v___x_1324_; uint8_t v___x_1325_; 
lean_del_object(v___x_1307_);
lean_del_object(v___x_1302_);
lean_dec(v_snd_1298_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1323_ = lean_ptr_addr(v_k_1281_);
v___x_1324_ = lean_ptr_addr(v_fst_1300_);
v___x_1325_ = lean_usize_dec_eq(v___x_1323_, v___x_1324_);
if (v___x_1325_ == 0)
{
lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1332_; 
lean_inc_ref(v_decl_1280_);
v_isSharedCheck_1332_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1332_ == 0)
{
lean_object* v_unused_1333_; lean_object* v_unused_1334_; 
v_unused_1333_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1333_);
v_unused_1334_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1334_);
v___x_1327_ = v_c_1273_;
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
else
{
lean_dec(v_c_1273_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
lean_ctor_set(v___x_1327_, 1, v_fst_1300_);
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_decl_1280_);
lean_ctor_set(v_reuseFailAlloc_1331_, 1, v_fst_1300_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
v___y_1318_ = v___x_1330_;
goto v___jp_1317_;
}
}
}
else
{
lean_dec(v_fst_1300_);
v___y_1318_ = v_c_1273_;
goto v___jp_1317_;
}
}
case 1:
{
lean_object* v___x_1335_; 
lean_del_object(v___x_1307_);
lean_del_object(v___x_1302_);
lean_dec(v_snd_1298_);
v___x_1335_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_1271_, v_info_1272_, v_fst_1300_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
lean_dec_ref(v_info_1272_);
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v_a_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1359_; 
v_a_1336_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1338_ = v___x_1335_;
v_isShared_1339_ = v_isSharedCheck_1359_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_a_1336_);
lean_dec(v___x_1335_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1359_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___y_1341_; size_t v___x_1347_; size_t v___x_1348_; uint8_t v___x_1349_; 
v___x_1347_ = lean_ptr_addr(v_k_1281_);
v___x_1348_ = lean_ptr_addr(v_a_1336_);
v___x_1349_ = lean_usize_dec_eq(v___x_1347_, v___x_1348_);
if (v___x_1349_ == 0)
{
lean_object* v___x_1351_; uint8_t v_isShared_1352_; uint8_t v_isSharedCheck_1356_; 
lean_inc_ref(v_decl_1280_);
v_isSharedCheck_1356_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1356_ == 0)
{
lean_object* v_unused_1357_; lean_object* v_unused_1358_; 
v_unused_1357_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1357_);
v_unused_1358_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1358_);
v___x_1351_ = v_c_1273_;
v_isShared_1352_ = v_isSharedCheck_1356_;
goto v_resetjp_1350_;
}
else
{
lean_dec(v_c_1273_);
v___x_1351_ = lean_box(0);
v_isShared_1352_ = v_isSharedCheck_1356_;
goto v_resetjp_1350_;
}
v_resetjp_1350_:
{
lean_object* v___x_1354_; 
if (v_isShared_1352_ == 0)
{
lean_ctor_set(v___x_1351_, 1, v_a_1336_);
v___x_1354_ = v___x_1351_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v_decl_1280_);
lean_ctor_set(v_reuseFailAlloc_1355_, 1, v_a_1336_);
v___x_1354_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
v___y_1341_ = v___x_1354_;
goto v___jp_1340_;
}
}
}
else
{
lean_dec(v_a_1336_);
v___y_1341_ = v_c_1273_;
goto v___jp_1340_;
}
v___jp_1340_:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1345_; 
v___x_1342_ = lean_box(v___x_1285_);
v___x_1343_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1343_, 0, v___y_1341_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
if (v_isShared_1339_ == 0)
{
lean_ctor_set(v___x_1338_, 0, v___x_1343_);
v___x_1345_ = v___x_1338_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v___x_1343_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
else
{
lean_object* v_a_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1367_; 
lean_dec_ref(v_c_1273_);
v_a_1360_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1362_ = v___x_1335_;
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_a_1360_);
lean_dec(v___x_1335_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1367_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v___x_1365_; 
if (v_isShared_1363_ == 0)
{
v___x_1365_ = v___x_1362_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v_a_1360_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
return v___x_1365_;
}
}
}
}
default: 
{
size_t v___x_1368_; size_t v___x_1369_; uint8_t v___x_1370_; 
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1368_ = lean_ptr_addr(v_k_1281_);
v___x_1369_ = lean_ptr_addr(v_fst_1300_);
v___x_1370_ = lean_usize_dec_eq(v___x_1368_, v___x_1369_);
if (v___x_1370_ == 0)
{
lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1377_; 
lean_inc_ref(v_decl_1280_);
v_isSharedCheck_1377_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1377_ == 0)
{
lean_object* v_unused_1378_; lean_object* v_unused_1379_; 
v_unused_1378_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1378_);
v_unused_1379_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1379_);
v___x_1372_ = v_c_1273_;
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
else
{
lean_dec(v_c_1273_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1375_; 
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 1, v_fst_1300_);
v___x_1375_ = v___x_1372_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v_decl_1280_);
lean_ctor_set(v_reuseFailAlloc_1376_, 1, v_fst_1300_);
v___x_1375_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
v___y_1310_ = v___x_1375_;
goto v___jp_1309_;
}
}
}
else
{
lean_dec(v_fst_1300_);
v___y_1310_ = v_c_1273_;
goto v___jp_1309_;
}
}
}
v___jp_1309_:
{
lean_object* v___x_1312_; 
if (v_isShared_1303_ == 0)
{
lean_ctor_set(v___x_1302_, 0, v___y_1310_);
v___x_1312_ = v___x_1302_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v___y_1310_);
lean_ctor_set(v_reuseFailAlloc_1316_, 1, v_snd_1298_);
v___x_1312_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
lean_object* v___x_1314_; 
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 0, v___x_1312_);
v___x_1314_ = v___x_1307_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v___x_1312_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
v___jp_1317_:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1319_ = lean_box(v___x_1285_);
v___x_1320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1320_, 0, v___y_1318_);
lean_ctor_set(v___x_1320_, 1, v___x_1319_);
v___x_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
return v___x_1321_;
}
}
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
lean_del_object(v___x_1302_);
lean_dec(v_fst_1300_);
lean_dec(v_snd_1298_);
lean_dec_ref(v_c_1273_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v_a_1381_ = lean_ctor_get(v___x_1304_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1304_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1304_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1304_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
else
{
lean_object* v_fst_1391_; size_t v___x_1392_; size_t v___x_1393_; uint8_t v___x_1394_; 
lean_dec_ref(v_instr_1283_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v_fst_1391_ = lean_ctor_get(v_a_1287_, 0);
lean_inc(v_fst_1391_);
lean_dec(v_a_1287_);
v___x_1392_ = lean_ptr_addr(v_k_1281_);
v___x_1393_ = lean_ptr_addr(v_fst_1391_);
v___x_1394_ = lean_usize_dec_eq(v___x_1392_, v___x_1393_);
if (v___x_1394_ == 0)
{
lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1401_; 
lean_inc_ref(v_decl_1280_);
v_isSharedCheck_1401_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1401_ == 0)
{
lean_object* v_unused_1402_; lean_object* v_unused_1403_; 
v_unused_1402_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1402_);
v_unused_1403_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1403_);
v___x_1396_ = v_c_1273_;
v_isShared_1397_ = v_isSharedCheck_1401_;
goto v_resetjp_1395_;
}
else
{
lean_dec(v_c_1273_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1401_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1399_; 
if (v_isShared_1397_ == 0)
{
lean_ctor_set(v___x_1396_, 1, v_fst_1391_);
v___x_1399_ = v___x_1396_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v_decl_1280_);
lean_ctor_set(v_reuseFailAlloc_1400_, 1, v_fst_1391_);
v___x_1399_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
v___y_1292_ = v___x_1399_;
goto v___jp_1291_;
}
}
}
else
{
lean_dec(v_fst_1391_);
v___y_1292_ = v_c_1273_;
goto v___jp_1291_;
}
}
v___jp_1291_:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1296_; 
v___x_1293_ = lean_box(v___x_1285_);
v___x_1294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1294_, 0, v___y_1292_);
lean_ctor_set(v___x_1294_, 1, v___x_1293_);
if (v_isShared_1290_ == 0)
{
lean_ctor_set(v___x_1289_, 0, v___x_1294_);
v___x_1296_ = v___x_1289_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v___x_1294_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
else
{
lean_dec_ref(v_instr_1283_);
lean_dec_ref(v_c_1273_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
return v___x_1286_;
}
}
else
{
lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
lean_dec_ref(v_instr_1283_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1405_ = lean_box(v___x_1285_);
v___x_1406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1406_, 0, v_c_1273_);
lean_ctor_set(v___x_1406_, 1, v___x_1405_);
v___x_1407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1406_);
return v___x_1407_;
}
}
case 2:
{
lean_object* v_decl_1408_; lean_object* v_k_1409_; lean_object* v___x_1410_; 
v_decl_1408_ = lean_ctor_get(v_c_1273_, 0);
v_k_1409_ = lean_ctor_get(v_c_1273_, 1);
lean_inc(v_a_1278_);
lean_inc_ref(v_a_1277_);
lean_inc(v_a_1276_);
lean_inc_ref(v_a_1275_);
lean_inc_ref(v_a_1274_);
lean_inc_ref(v_k_1409_);
lean_inc_ref(v_info_1272_);
lean_inc(v_x_1271_);
v___x_1410_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1271_, v_info_1272_, v_k_1409_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1410_) == 0)
{
lean_object* v_a_1411_; lean_object* v_fst_1412_; lean_object* v_snd_1413_; lean_object* v_params_1414_; lean_object* v_type_1415_; lean_object* v_value_1416_; lean_object* v___x_1417_; 
v_a_1411_ = lean_ctor_get(v___x_1410_, 0);
lean_inc(v_a_1411_);
lean_dec_ref(v___x_1410_);
v_fst_1412_ = lean_ctor_get(v_a_1411_, 0);
lean_inc(v_fst_1412_);
v_snd_1413_ = lean_ctor_get(v_a_1411_, 1);
lean_inc(v_snd_1413_);
lean_dec(v_a_1411_);
v_params_1414_ = lean_ctor_get(v_decl_1408_, 2);
v_type_1415_ = lean_ctor_get(v_decl_1408_, 3);
v_value_1416_ = lean_ctor_get(v_decl_1408_, 4);
lean_inc(v_a_1276_);
lean_inc_ref(v_value_1416_);
v___x_1417_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1271_, v_info_1272_, v_value_1416_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v_a_1418_; lean_object* v_fst_1419_; lean_object* v___x_1421_; uint8_t v_isShared_1422_; uint8_t v_isSharedCheck_1463_; 
v_a_1418_ = lean_ctor_get(v___x_1417_, 0);
lean_inc(v_a_1418_);
lean_dec_ref(v___x_1417_);
v_fst_1419_ = lean_ctor_get(v_a_1418_, 0);
v_isSharedCheck_1463_ = !lean_is_exclusive(v_a_1418_);
if (v_isSharedCheck_1463_ == 0)
{
lean_object* v_unused_1464_; 
v_unused_1464_ = lean_ctor_get(v_a_1418_, 1);
lean_dec(v_unused_1464_);
v___x_1421_ = v_a_1418_;
v_isShared_1422_ = v_isSharedCheck_1463_;
goto v_resetjp_1420_;
}
else
{
lean_inc(v_fst_1419_);
lean_dec(v_a_1418_);
v___x_1421_ = lean_box(0);
v_isShared_1422_ = v_isSharedCheck_1463_;
goto v_resetjp_1420_;
}
v_resetjp_1420_:
{
uint8_t v___x_1423_; lean_object* v___x_1424_; 
v___x_1423_ = 1;
lean_inc_ref(v_params_1414_);
lean_inc_ref(v_type_1415_);
lean_inc_ref(v_decl_1408_);
v___x_1424_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_1423_, v_decl_1408_, v_type_1415_, v_params_1414_, v_fst_1419_, v_a_1276_);
lean_dec(v_a_1276_);
if (lean_obj_tag(v___x_1424_) == 0)
{
lean_object* v_a_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1454_; 
v_a_1425_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1427_ = v___x_1424_;
v_isShared_1428_ = v_isSharedCheck_1454_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_a_1425_);
lean_dec(v___x_1424_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1454_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
lean_object* v___y_1430_; uint8_t v___y_1438_; size_t v___x_1448_; size_t v___x_1449_; uint8_t v___x_1450_; 
v___x_1448_ = lean_ptr_addr(v_k_1409_);
v___x_1449_ = lean_ptr_addr(v_fst_1412_);
v___x_1450_ = lean_usize_dec_eq(v___x_1448_, v___x_1449_);
if (v___x_1450_ == 0)
{
v___y_1438_ = v___x_1450_;
goto v___jp_1437_;
}
else
{
size_t v___x_1451_; size_t v___x_1452_; uint8_t v___x_1453_; 
v___x_1451_ = lean_ptr_addr(v_decl_1408_);
v___x_1452_ = lean_ptr_addr(v_a_1425_);
v___x_1453_ = lean_usize_dec_eq(v___x_1451_, v___x_1452_);
v___y_1438_ = v___x_1453_;
goto v___jp_1437_;
}
v___jp_1429_:
{
lean_object* v___x_1432_; 
if (v_isShared_1422_ == 0)
{
lean_ctor_set(v___x_1421_, 1, v_snd_1413_);
lean_ctor_set(v___x_1421_, 0, v___y_1430_);
v___x_1432_ = v___x_1421_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v___y_1430_);
lean_ctor_set(v_reuseFailAlloc_1436_, 1, v_snd_1413_);
v___x_1432_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
lean_object* v___x_1434_; 
if (v_isShared_1428_ == 0)
{
lean_ctor_set(v___x_1427_, 0, v___x_1432_);
v___x_1434_ = v___x_1427_;
goto v_reusejp_1433_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v___x_1432_);
v___x_1434_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1433_;
}
v_reusejp_1433_:
{
return v___x_1434_;
}
}
}
v___jp_1437_:
{
if (v___y_1438_ == 0)
{
lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
v_isSharedCheck_1445_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1445_ == 0)
{
lean_object* v_unused_1446_; lean_object* v_unused_1447_; 
v_unused_1446_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1446_);
v_unused_1447_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1447_);
v___x_1440_ = v_c_1273_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_dec(v_c_1273_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
lean_ctor_set(v___x_1440_, 1, v_fst_1412_);
lean_ctor_set(v___x_1440_, 0, v_a_1425_);
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1425_);
lean_ctor_set(v_reuseFailAlloc_1444_, 1, v_fst_1412_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
v___y_1430_ = v___x_1443_;
goto v___jp_1429_;
}
}
}
else
{
lean_dec(v_a_1425_);
lean_dec(v_fst_1412_);
v___y_1430_ = v_c_1273_;
goto v___jp_1429_;
}
}
}
}
else
{
lean_object* v_a_1455_; lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1462_; 
lean_del_object(v___x_1421_);
lean_dec(v_snd_1413_);
lean_dec(v_fst_1412_);
lean_dec_ref(v_c_1273_);
v_a_1455_ = lean_ctor_get(v___x_1424_, 0);
v_isSharedCheck_1462_ = !lean_is_exclusive(v___x_1424_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1457_ = v___x_1424_;
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
else
{
lean_inc(v_a_1455_);
lean_dec(v___x_1424_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1462_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v___x_1460_; 
if (v_isShared_1458_ == 0)
{
v___x_1460_ = v___x_1457_;
goto v_reusejp_1459_;
}
else
{
lean_object* v_reuseFailAlloc_1461_; 
v_reuseFailAlloc_1461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1461_, 0, v_a_1455_);
v___x_1460_ = v_reuseFailAlloc_1461_;
goto v_reusejp_1459_;
}
v_reusejp_1459_:
{
return v___x_1460_;
}
}
}
}
}
else
{
lean_dec(v_snd_1413_);
lean_dec(v_fst_1412_);
lean_dec_ref(v_c_1273_);
lean_dec(v_a_1276_);
return v___x_1417_;
}
}
else
{
lean_dec_ref(v_c_1273_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
return v___x_1410_;
}
}
case 3:
{
lean_object* v___x_1465_; 
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_inc_ref(v_c_1273_);
v___x_1465_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1273_, v_x_1271_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1465_) == 0)
{
lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1474_; 
v_a_1466_ = lean_ctor_get(v___x_1465_, 0);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___x_1465_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1468_ = v___x_1465_;
v_isShared_1469_ = v_isSharedCheck_1474_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v___x_1465_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1474_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1470_; lean_object* v___x_1472_; 
v___x_1470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1470_, 0, v_c_1273_);
lean_ctor_set(v___x_1470_, 1, v_a_1466_);
if (v_isShared_1469_ == 0)
{
lean_ctor_set(v___x_1468_, 0, v___x_1470_);
v___x_1472_ = v___x_1468_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v___x_1470_);
v___x_1472_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
return v___x_1472_;
}
}
}
else
{
lean_object* v_a_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1482_; 
lean_dec_ref(v_c_1273_);
v_a_1475_ = lean_ctor_get(v___x_1465_, 0);
v_isSharedCheck_1482_ = !lean_is_exclusive(v___x_1465_);
if (v_isSharedCheck_1482_ == 0)
{
v___x_1477_ = v___x_1465_;
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_a_1475_);
lean_dec(v___x_1465_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v___x_1480_; 
if (v_isShared_1478_ == 0)
{
v___x_1480_ = v___x_1477_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v_a_1475_);
v___x_1480_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
return v___x_1480_;
}
}
}
}
case 4:
{
lean_object* v_cases_1483_; lean_object* v___x_1484_; 
v_cases_1483_ = lean_ctor_get(v_c_1273_, 0);
lean_inc_ref(v_cases_1483_);
lean_inc(v_a_1278_);
lean_inc_ref(v_a_1277_);
lean_inc(v_a_1276_);
lean_inc_ref(v_a_1275_);
lean_inc(v_x_1271_);
lean_inc_ref(v_c_1273_);
v___x_1484_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1273_, v_x_1271_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1484_) == 0)
{
lean_object* v_a_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1537_; 
v_a_1485_ = lean_ctor_get(v___x_1484_, 0);
v_isSharedCheck_1537_ = !lean_is_exclusive(v___x_1484_);
if (v_isSharedCheck_1537_ == 0)
{
v___x_1487_ = v___x_1484_;
v_isShared_1488_ = v_isSharedCheck_1537_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_a_1485_);
lean_dec(v___x_1484_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1537_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
uint8_t v___x_1489_; 
v___x_1489_ = lean_unbox(v_a_1485_);
if (v___x_1489_ == 0)
{
lean_object* v___x_1490_; lean_object* v___x_1492_; 
lean_dec_ref(v_cases_1483_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1490_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1490_, 0, v_c_1273_);
lean_ctor_set(v___x_1490_, 1, v_a_1485_);
if (v_isShared_1488_ == 0)
{
lean_ctor_set(v___x_1487_, 0, v___x_1490_);
v___x_1492_ = v___x_1487_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v___x_1490_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
else
{
lean_object* v_typeName_1494_; lean_object* v_resultType_1495_; lean_object* v_discr_1496_; lean_object* v_alts_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1536_; 
lean_del_object(v___x_1487_);
v_typeName_1494_ = lean_ctor_get(v_cases_1483_, 0);
v_resultType_1495_ = lean_ctor_get(v_cases_1483_, 1);
v_discr_1496_ = lean_ctor_get(v_cases_1483_, 2);
v_alts_1497_ = lean_ctor_get(v_cases_1483_, 3);
v_isSharedCheck_1536_ = !lean_is_exclusive(v_cases_1483_);
if (v_isSharedCheck_1536_ == 0)
{
v___x_1499_ = v_cases_1483_;
v_isShared_1500_ = v_isSharedCheck_1536_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_alts_1497_);
lean_inc(v_discr_1496_);
lean_inc(v_resultType_1495_);
lean_inc(v_typeName_1494_);
lean_dec(v_cases_1483_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1536_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1501_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_1497_);
v___x_1502_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(v_x_1271_, v_info_1272_, v___x_1501_, v_alts_1497_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1502_) == 0)
{
lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1527_; 
v_a_1503_ = lean_ctor_get(v___x_1502_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1502_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1505_ = v___x_1502_;
v_isShared_1506_ = v_isSharedCheck_1527_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_dec(v___x_1502_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1527_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___y_1508_; size_t v___x_1513_; size_t v___x_1514_; uint8_t v___x_1515_; 
v___x_1513_ = lean_ptr_addr(v_alts_1497_);
lean_dec_ref(v_alts_1497_);
v___x_1514_ = lean_ptr_addr(v_a_1503_);
v___x_1515_ = lean_usize_dec_eq(v___x_1513_, v___x_1514_);
if (v___x_1515_ == 0)
{
lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1525_; 
v_isSharedCheck_1525_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1525_ == 0)
{
lean_object* v_unused_1526_; 
v_unused_1526_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1526_);
v___x_1517_ = v_c_1273_;
v_isShared_1518_ = v_isSharedCheck_1525_;
goto v_resetjp_1516_;
}
else
{
lean_dec(v_c_1273_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1525_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
lean_object* v___x_1520_; 
if (v_isShared_1500_ == 0)
{
lean_ctor_set(v___x_1499_, 3, v_a_1503_);
v___x_1520_ = v___x_1499_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v_typeName_1494_);
lean_ctor_set(v_reuseFailAlloc_1524_, 1, v_resultType_1495_);
lean_ctor_set(v_reuseFailAlloc_1524_, 2, v_discr_1496_);
lean_ctor_set(v_reuseFailAlloc_1524_, 3, v_a_1503_);
v___x_1520_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
lean_object* v___x_1522_; 
if (v_isShared_1518_ == 0)
{
lean_ctor_set(v___x_1517_, 0, v___x_1520_);
v___x_1522_ = v___x_1517_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v___x_1520_);
v___x_1522_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
v___y_1508_ = v___x_1522_;
goto v___jp_1507_;
}
}
}
}
else
{
lean_dec(v_a_1503_);
lean_del_object(v___x_1499_);
lean_dec(v_discr_1496_);
lean_dec_ref(v_resultType_1495_);
lean_dec(v_typeName_1494_);
v___y_1508_ = v_c_1273_;
goto v___jp_1507_;
}
v___jp_1507_:
{
lean_object* v___x_1509_; lean_object* v___x_1511_; 
v___x_1509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1509_, 0, v___y_1508_);
lean_ctor_set(v___x_1509_, 1, v_a_1485_);
if (v_isShared_1506_ == 0)
{
lean_ctor_set(v___x_1505_, 0, v___x_1509_);
v___x_1511_ = v___x_1505_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v___x_1509_);
v___x_1511_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
return v___x_1511_;
}
}
}
}
else
{
lean_object* v_a_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1535_; 
lean_del_object(v___x_1499_);
lean_dec_ref(v_alts_1497_);
lean_dec(v_discr_1496_);
lean_dec_ref(v_resultType_1495_);
lean_dec(v_typeName_1494_);
lean_dec(v_a_1485_);
lean_dec_ref(v_c_1273_);
v_a_1528_ = lean_ctor_get(v___x_1502_, 0);
v_isSharedCheck_1535_ = !lean_is_exclusive(v___x_1502_);
if (v_isSharedCheck_1535_ == 0)
{
v___x_1530_ = v___x_1502_;
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_a_1528_);
lean_dec(v___x_1502_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1533_; 
if (v_isShared_1531_ == 0)
{
v___x_1533_ = v___x_1530_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v_a_1528_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1545_; 
lean_dec_ref(v_cases_1483_);
lean_dec_ref(v_c_1273_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v_a_1538_ = lean_ctor_get(v___x_1484_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1484_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1540_ = v___x_1484_;
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v___x_1484_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1543_; 
if (v_isShared_1541_ == 0)
{
v___x_1543_ = v___x_1540_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_a_1538_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
return v___x_1543_;
}
}
}
}
case 5:
{
lean_object* v___x_1546_; 
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_inc_ref(v_c_1273_);
v___x_1546_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1273_, v_x_1271_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1546_) == 0)
{
lean_object* v_a_1547_; lean_object* v___x_1549_; uint8_t v_isShared_1550_; uint8_t v_isSharedCheck_1555_; 
v_a_1547_ = lean_ctor_get(v___x_1546_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1549_ = v___x_1546_;
v_isShared_1550_ = v_isSharedCheck_1555_;
goto v_resetjp_1548_;
}
else
{
lean_inc(v_a_1547_);
lean_dec(v___x_1546_);
v___x_1549_ = lean_box(0);
v_isShared_1550_ = v_isSharedCheck_1555_;
goto v_resetjp_1548_;
}
v_resetjp_1548_:
{
lean_object* v___x_1551_; lean_object* v___x_1553_; 
v___x_1551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1551_, 0, v_c_1273_);
lean_ctor_set(v___x_1551_, 1, v_a_1547_);
if (v_isShared_1550_ == 0)
{
lean_ctor_set(v___x_1549_, 0, v___x_1551_);
v___x_1553_ = v___x_1549_;
goto v_reusejp_1552_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v___x_1551_);
v___x_1553_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1552_;
}
v_reusejp_1552_:
{
return v___x_1553_;
}
}
}
else
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1563_; 
lean_dec_ref(v_c_1273_);
v_a_1556_ = lean_ctor_get(v___x_1546_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1558_ = v___x_1546_;
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v___x_1546_);
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
case 6:
{
lean_object* v___x_1564_; 
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_inc_ref(v_c_1273_);
v___x_1564_ = l_Lean_Compiler_LCNF_Code_isFVarLiveIn(v_c_1273_, v_x_1271_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1564_) == 0)
{
lean_object* v_a_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1573_; 
v_a_1565_ = lean_ctor_get(v___x_1564_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v___x_1564_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1567_ = v___x_1564_;
v_isShared_1568_ = v_isSharedCheck_1573_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_a_1565_);
lean_dec(v___x_1564_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1573_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1569_; lean_object* v___x_1571_; 
v___x_1569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1569_, 0, v_c_1273_);
lean_ctor_set(v___x_1569_, 1, v_a_1565_);
if (v_isShared_1568_ == 0)
{
lean_ctor_set(v___x_1567_, 0, v___x_1569_);
v___x_1571_ = v___x_1567_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v___x_1569_);
v___x_1571_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
return v___x_1571_;
}
}
}
else
{
lean_object* v_a_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1581_; 
lean_dec_ref(v_c_1273_);
v_a_1574_ = lean_ctor_get(v___x_1564_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___x_1564_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1576_ = v___x_1564_;
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_a_1574_);
lean_dec(v___x_1564_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1579_; 
if (v_isShared_1577_ == 0)
{
v___x_1579_ = v___x_1576_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v_a_1574_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
}
}
case 8:
{
lean_object* v_fvarId_1582_; lean_object* v_i_1583_; lean_object* v_y_1584_; lean_object* v_k_1585_; uint8_t v___x_1586_; lean_object* v_instr_1587_; uint8_t v___x_1588_; uint8_t v___x_1589_; 
v_fvarId_1582_ = lean_ctor_get(v_c_1273_, 0);
v_i_1583_ = lean_ctor_get(v_c_1273_, 1);
v_y_1584_ = lean_ctor_get(v_c_1273_, 2);
v_k_1585_ = lean_ctor_get(v_c_1273_, 3);
v___x_1586_ = 1;
v_instr_1587_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_1586_, v_c_1273_);
lean_inc(v_x_1271_);
v___x_1588_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_1587_, v_x_1271_);
v___x_1589_ = 1;
if (v___x_1588_ == 0)
{
lean_object* v___x_1590_; 
lean_inc(v_a_1278_);
lean_inc_ref(v_a_1277_);
lean_inc(v_a_1276_);
lean_inc_ref(v_a_1275_);
lean_inc_ref(v_a_1274_);
lean_inc_ref(v_k_1585_);
lean_inc_ref(v_info_1272_);
lean_inc(v_x_1271_);
v___x_1590_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1271_, v_info_1272_, v_k_1585_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1590_) == 0)
{
lean_object* v_a_1591_; lean_object* v___x_1593_; uint8_t v_isShared_1594_; uint8_t v_isSharedCheck_1716_; 
v_a_1591_ = lean_ctor_get(v___x_1590_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v___x_1590_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1593_ = v___x_1590_;
v_isShared_1594_ = v_isSharedCheck_1716_;
goto v_resetjp_1592_;
}
else
{
lean_inc(v_a_1591_);
lean_dec(v___x_1590_);
v___x_1593_ = lean_box(0);
v_isShared_1594_ = v_isSharedCheck_1716_;
goto v_resetjp_1592_;
}
v_resetjp_1592_:
{
lean_object* v___y_1596_; lean_object* v_snd_1602_; uint8_t v___x_1603_; 
v_snd_1602_ = lean_ctor_get(v_a_1591_, 1);
v___x_1603_ = lean_unbox(v_snd_1602_);
if (v___x_1603_ == 0)
{
lean_object* v_fst_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1699_; 
lean_inc(v_snd_1602_);
lean_del_object(v___x_1593_);
v_fst_1604_ = lean_ctor_get(v_a_1591_, 0);
v_isSharedCheck_1699_ = !lean_is_exclusive(v_a_1591_);
if (v_isSharedCheck_1699_ == 0)
{
lean_object* v_unused_1700_; 
v_unused_1700_ = lean_ctor_get(v_a_1591_, 1);
lean_dec(v_unused_1700_);
v___x_1606_ = v_a_1591_;
v_isShared_1607_ = v_isSharedCheck_1699_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_fst_1604_);
lean_dec(v_a_1591_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1699_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v___x_1608_; 
lean_inc(v_x_1271_);
v___x_1608_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_1587_, v_x_1271_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1608_) == 0)
{
lean_object* v_a_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1690_; 
v_a_1609_ = lean_ctor_get(v___x_1608_, 0);
v_isSharedCheck_1690_ = !lean_is_exclusive(v___x_1608_);
if (v_isSharedCheck_1690_ == 0)
{
v___x_1611_ = v___x_1608_;
v_isShared_1612_ = v_isSharedCheck_1690_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_a_1609_);
lean_dec(v___x_1608_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1690_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___y_1614_; lean_object* v___y_1622_; uint8_t v___x_1626_; 
v___x_1626_ = lean_unbox(v_a_1609_);
lean_dec(v_a_1609_);
switch(v___x_1626_)
{
case 0:
{
size_t v___x_1627_; size_t v___x_1628_; uint8_t v___x_1629_; 
lean_del_object(v___x_1611_);
lean_del_object(v___x_1606_);
lean_dec(v_snd_1602_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1627_ = lean_ptr_addr(v_k_1585_);
v___x_1628_ = lean_ptr_addr(v_fst_1604_);
v___x_1629_ = lean_usize_dec_eq(v___x_1627_, v___x_1628_);
if (v___x_1629_ == 0)
{
lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1636_; 
lean_inc(v_y_1584_);
lean_inc(v_i_1583_);
lean_inc(v_fvarId_1582_);
v_isSharedCheck_1636_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1636_ == 0)
{
lean_object* v_unused_1637_; lean_object* v_unused_1638_; lean_object* v_unused_1639_; lean_object* v_unused_1640_; 
v_unused_1637_ = lean_ctor_get(v_c_1273_, 3);
lean_dec(v_unused_1637_);
v_unused_1638_ = lean_ctor_get(v_c_1273_, 2);
lean_dec(v_unused_1638_);
v_unused_1639_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1639_);
v_unused_1640_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1640_);
v___x_1631_ = v_c_1273_;
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
else
{
lean_dec(v_c_1273_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
lean_object* v___x_1634_; 
if (v_isShared_1632_ == 0)
{
lean_ctor_set(v___x_1631_, 3, v_fst_1604_);
v___x_1634_ = v___x_1631_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v_fvarId_1582_);
lean_ctor_set(v_reuseFailAlloc_1635_, 1, v_i_1583_);
lean_ctor_set(v_reuseFailAlloc_1635_, 2, v_y_1584_);
lean_ctor_set(v_reuseFailAlloc_1635_, 3, v_fst_1604_);
v___x_1634_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
v___y_1622_ = v___x_1634_;
goto v___jp_1621_;
}
}
}
else
{
lean_dec(v_fst_1604_);
v___y_1622_ = v_c_1273_;
goto v___jp_1621_;
}
}
case 1:
{
lean_object* v___x_1641_; 
lean_del_object(v___x_1611_);
lean_del_object(v___x_1606_);
lean_dec(v_snd_1602_);
v___x_1641_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_1271_, v_info_1272_, v_fst_1604_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
lean_dec_ref(v_info_1272_);
if (lean_obj_tag(v___x_1641_) == 0)
{
lean_object* v_a_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1667_; 
v_a_1642_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1644_ = v___x_1641_;
v_isShared_1645_ = v_isSharedCheck_1667_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_a_1642_);
lean_dec(v___x_1641_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1667_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___y_1647_; size_t v___x_1653_; size_t v___x_1654_; uint8_t v___x_1655_; 
v___x_1653_ = lean_ptr_addr(v_k_1585_);
v___x_1654_ = lean_ptr_addr(v_a_1642_);
v___x_1655_ = lean_usize_dec_eq(v___x_1653_, v___x_1654_);
if (v___x_1655_ == 0)
{
lean_object* v___x_1657_; uint8_t v_isShared_1658_; uint8_t v_isSharedCheck_1662_; 
lean_inc(v_y_1584_);
lean_inc(v_i_1583_);
lean_inc(v_fvarId_1582_);
v_isSharedCheck_1662_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1662_ == 0)
{
lean_object* v_unused_1663_; lean_object* v_unused_1664_; lean_object* v_unused_1665_; lean_object* v_unused_1666_; 
v_unused_1663_ = lean_ctor_get(v_c_1273_, 3);
lean_dec(v_unused_1663_);
v_unused_1664_ = lean_ctor_get(v_c_1273_, 2);
lean_dec(v_unused_1664_);
v_unused_1665_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1665_);
v_unused_1666_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1666_);
v___x_1657_ = v_c_1273_;
v_isShared_1658_ = v_isSharedCheck_1662_;
goto v_resetjp_1656_;
}
else
{
lean_dec(v_c_1273_);
v___x_1657_ = lean_box(0);
v_isShared_1658_ = v_isSharedCheck_1662_;
goto v_resetjp_1656_;
}
v_resetjp_1656_:
{
lean_object* v___x_1660_; 
if (v_isShared_1658_ == 0)
{
lean_ctor_set(v___x_1657_, 3, v_a_1642_);
v___x_1660_ = v___x_1657_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v_fvarId_1582_);
lean_ctor_set(v_reuseFailAlloc_1661_, 1, v_i_1583_);
lean_ctor_set(v_reuseFailAlloc_1661_, 2, v_y_1584_);
lean_ctor_set(v_reuseFailAlloc_1661_, 3, v_a_1642_);
v___x_1660_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
v___y_1647_ = v___x_1660_;
goto v___jp_1646_;
}
}
}
else
{
lean_dec(v_a_1642_);
v___y_1647_ = v_c_1273_;
goto v___jp_1646_;
}
v___jp_1646_:
{
lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1651_; 
v___x_1648_ = lean_box(v___x_1589_);
v___x_1649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1649_, 0, v___y_1647_);
lean_ctor_set(v___x_1649_, 1, v___x_1648_);
if (v_isShared_1645_ == 0)
{
lean_ctor_set(v___x_1644_, 0, v___x_1649_);
v___x_1651_ = v___x_1644_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v___x_1649_);
v___x_1651_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
return v___x_1651_;
}
}
}
}
else
{
lean_object* v_a_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1675_; 
lean_dec_ref(v_c_1273_);
v_a_1668_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1670_ = v___x_1641_;
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_a_1668_);
lean_dec(v___x_1641_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1673_; 
if (v_isShared_1671_ == 0)
{
v___x_1673_ = v___x_1670_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_a_1668_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
}
default: 
{
size_t v___x_1676_; size_t v___x_1677_; uint8_t v___x_1678_; 
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1676_ = lean_ptr_addr(v_k_1585_);
v___x_1677_ = lean_ptr_addr(v_fst_1604_);
v___x_1678_ = lean_usize_dec_eq(v___x_1676_, v___x_1677_);
if (v___x_1678_ == 0)
{
lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1685_; 
lean_inc(v_y_1584_);
lean_inc(v_i_1583_);
lean_inc(v_fvarId_1582_);
v_isSharedCheck_1685_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1685_ == 0)
{
lean_object* v_unused_1686_; lean_object* v_unused_1687_; lean_object* v_unused_1688_; lean_object* v_unused_1689_; 
v_unused_1686_ = lean_ctor_get(v_c_1273_, 3);
lean_dec(v_unused_1686_);
v_unused_1687_ = lean_ctor_get(v_c_1273_, 2);
lean_dec(v_unused_1687_);
v_unused_1688_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1688_);
v_unused_1689_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1689_);
v___x_1680_ = v_c_1273_;
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
else
{
lean_dec(v_c_1273_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1683_; 
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 3, v_fst_1604_);
v___x_1683_ = v___x_1680_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v_fvarId_1582_);
lean_ctor_set(v_reuseFailAlloc_1684_, 1, v_i_1583_);
lean_ctor_set(v_reuseFailAlloc_1684_, 2, v_y_1584_);
lean_ctor_set(v_reuseFailAlloc_1684_, 3, v_fst_1604_);
v___x_1683_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
v___y_1614_ = v___x_1683_;
goto v___jp_1613_;
}
}
}
else
{
lean_dec(v_fst_1604_);
v___y_1614_ = v_c_1273_;
goto v___jp_1613_;
}
}
}
v___jp_1613_:
{
lean_object* v___x_1616_; 
if (v_isShared_1607_ == 0)
{
lean_ctor_set(v___x_1606_, 0, v___y_1614_);
v___x_1616_ = v___x_1606_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v___y_1614_);
lean_ctor_set(v_reuseFailAlloc_1620_, 1, v_snd_1602_);
v___x_1616_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
lean_object* v___x_1618_; 
if (v_isShared_1612_ == 0)
{
lean_ctor_set(v___x_1611_, 0, v___x_1616_);
v___x_1618_ = v___x_1611_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v___x_1616_);
v___x_1618_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
return v___x_1618_;
}
}
}
v___jp_1621_:
{
lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; 
v___x_1623_ = lean_box(v___x_1589_);
v___x_1624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1624_, 0, v___y_1622_);
lean_ctor_set(v___x_1624_, 1, v___x_1623_);
v___x_1625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1625_, 0, v___x_1624_);
return v___x_1625_;
}
}
}
else
{
lean_object* v_a_1691_; lean_object* v___x_1693_; uint8_t v_isShared_1694_; uint8_t v_isSharedCheck_1698_; 
lean_del_object(v___x_1606_);
lean_dec(v_fst_1604_);
lean_dec(v_snd_1602_);
lean_dec_ref(v_c_1273_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v_a_1691_ = lean_ctor_get(v___x_1608_, 0);
v_isSharedCheck_1698_ = !lean_is_exclusive(v___x_1608_);
if (v_isSharedCheck_1698_ == 0)
{
v___x_1693_ = v___x_1608_;
v_isShared_1694_ = v_isSharedCheck_1698_;
goto v_resetjp_1692_;
}
else
{
lean_inc(v_a_1691_);
lean_dec(v___x_1608_);
v___x_1693_ = lean_box(0);
v_isShared_1694_ = v_isSharedCheck_1698_;
goto v_resetjp_1692_;
}
v_resetjp_1692_:
{
lean_object* v___x_1696_; 
if (v_isShared_1694_ == 0)
{
v___x_1696_ = v___x_1693_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v_a_1691_);
v___x_1696_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
return v___x_1696_;
}
}
}
}
}
else
{
lean_object* v_fst_1701_; size_t v___x_1702_; size_t v___x_1703_; uint8_t v___x_1704_; 
lean_dec_ref(v_instr_1587_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v_fst_1701_ = lean_ctor_get(v_a_1591_, 0);
lean_inc(v_fst_1701_);
lean_dec(v_a_1591_);
v___x_1702_ = lean_ptr_addr(v_k_1585_);
v___x_1703_ = lean_ptr_addr(v_fst_1701_);
v___x_1704_ = lean_usize_dec_eq(v___x_1702_, v___x_1703_);
if (v___x_1704_ == 0)
{
lean_object* v___x_1706_; uint8_t v_isShared_1707_; uint8_t v_isSharedCheck_1711_; 
lean_inc(v_y_1584_);
lean_inc(v_i_1583_);
lean_inc(v_fvarId_1582_);
v_isSharedCheck_1711_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1711_ == 0)
{
lean_object* v_unused_1712_; lean_object* v_unused_1713_; lean_object* v_unused_1714_; lean_object* v_unused_1715_; 
v_unused_1712_ = lean_ctor_get(v_c_1273_, 3);
lean_dec(v_unused_1712_);
v_unused_1713_ = lean_ctor_get(v_c_1273_, 2);
lean_dec(v_unused_1713_);
v_unused_1714_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1714_);
v_unused_1715_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1715_);
v___x_1706_ = v_c_1273_;
v_isShared_1707_ = v_isSharedCheck_1711_;
goto v_resetjp_1705_;
}
else
{
lean_dec(v_c_1273_);
v___x_1706_ = lean_box(0);
v_isShared_1707_ = v_isSharedCheck_1711_;
goto v_resetjp_1705_;
}
v_resetjp_1705_:
{
lean_object* v___x_1709_; 
if (v_isShared_1707_ == 0)
{
lean_ctor_set(v___x_1706_, 3, v_fst_1701_);
v___x_1709_ = v___x_1706_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v_fvarId_1582_);
lean_ctor_set(v_reuseFailAlloc_1710_, 1, v_i_1583_);
lean_ctor_set(v_reuseFailAlloc_1710_, 2, v_y_1584_);
lean_ctor_set(v_reuseFailAlloc_1710_, 3, v_fst_1701_);
v___x_1709_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
v___y_1596_ = v___x_1709_;
goto v___jp_1595_;
}
}
}
else
{
lean_dec(v_fst_1701_);
v___y_1596_ = v_c_1273_;
goto v___jp_1595_;
}
}
v___jp_1595_:
{
lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1600_; 
v___x_1597_ = lean_box(v___x_1589_);
v___x_1598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1598_, 0, v___y_1596_);
lean_ctor_set(v___x_1598_, 1, v___x_1597_);
if (v_isShared_1594_ == 0)
{
lean_ctor_set(v___x_1593_, 0, v___x_1598_);
v___x_1600_ = v___x_1593_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v___x_1598_);
v___x_1600_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
return v___x_1600_;
}
}
}
}
else
{
lean_dec_ref(v_instr_1587_);
lean_dec_ref(v_c_1273_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
return v___x_1590_;
}
}
else
{
lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
lean_dec_ref(v_instr_1587_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1717_ = lean_box(v___x_1589_);
v___x_1718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1718_, 0, v_c_1273_);
lean_ctor_set(v___x_1718_, 1, v___x_1717_);
v___x_1719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1719_, 0, v___x_1718_);
return v___x_1719_;
}
}
case 9:
{
lean_object* v_fvarId_1720_; lean_object* v_i_1721_; lean_object* v_offset_1722_; lean_object* v_y_1723_; lean_object* v_ty_1724_; lean_object* v_k_1725_; uint8_t v___x_1726_; lean_object* v_instr_1727_; uint8_t v___x_1728_; uint8_t v___x_1729_; 
v_fvarId_1720_ = lean_ctor_get(v_c_1273_, 0);
v_i_1721_ = lean_ctor_get(v_c_1273_, 1);
v_offset_1722_ = lean_ctor_get(v_c_1273_, 2);
v_y_1723_ = lean_ctor_get(v_c_1273_, 3);
v_ty_1724_ = lean_ctor_get(v_c_1273_, 4);
v_k_1725_ = lean_ctor_get(v_c_1273_, 5);
v___x_1726_ = 1;
v_instr_1727_ = l_Lean_Compiler_LCNF_Code_toCodeDecl_x21(v___x_1726_, v_c_1273_);
lean_inc(v_x_1271_);
v___x_1728_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_isCtorUsing(v_instr_1727_, v_x_1271_);
v___x_1729_ = 1;
if (v___x_1728_ == 0)
{
lean_object* v___x_1730_; 
lean_inc(v_a_1278_);
lean_inc_ref(v_a_1277_);
lean_inc(v_a_1276_);
lean_inc_ref(v_a_1275_);
lean_inc_ref(v_a_1274_);
lean_inc_ref(v_k_1725_);
lean_inc_ref(v_info_1272_);
lean_inc(v_x_1271_);
v___x_1730_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1271_, v_info_1272_, v_k_1725_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1730_) == 0)
{
lean_object* v_a_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1864_; 
v_a_1731_ = lean_ctor_get(v___x_1730_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1730_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1733_ = v___x_1730_;
v_isShared_1734_ = v_isSharedCheck_1864_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_a_1731_);
lean_dec(v___x_1730_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1864_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___y_1736_; lean_object* v_snd_1742_; uint8_t v___x_1743_; 
v_snd_1742_ = lean_ctor_get(v_a_1731_, 1);
v___x_1743_ = lean_unbox(v_snd_1742_);
if (v___x_1743_ == 0)
{
lean_object* v_fst_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1845_; 
lean_inc(v_snd_1742_);
lean_del_object(v___x_1733_);
v_fst_1744_ = lean_ctor_get(v_a_1731_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v_a_1731_);
if (v_isSharedCheck_1845_ == 0)
{
lean_object* v_unused_1846_; 
v_unused_1846_ = lean_ctor_get(v_a_1731_, 1);
lean_dec(v_unused_1846_);
v___x_1746_ = v_a_1731_;
v_isShared_1747_ = v_isSharedCheck_1845_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_fst_1744_);
lean_dec(v_a_1731_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1845_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v___x_1748_; 
lean_inc(v_x_1271_);
v___x_1748_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_classifyUse(v_instr_1727_, v_x_1271_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; lean_object* v___x_1751_; uint8_t v_isShared_1752_; uint8_t v_isSharedCheck_1836_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1751_ = v___x_1748_;
v_isShared_1752_ = v_isSharedCheck_1836_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_a_1749_);
lean_dec(v___x_1748_);
v___x_1751_ = lean_box(0);
v_isShared_1752_ = v_isSharedCheck_1836_;
goto v_resetjp_1750_;
}
v_resetjp_1750_:
{
lean_object* v___y_1754_; lean_object* v___y_1762_; uint8_t v___x_1766_; 
v___x_1766_ = lean_unbox(v_a_1749_);
lean_dec(v_a_1749_);
switch(v___x_1766_)
{
case 0:
{
size_t v___x_1767_; size_t v___x_1768_; uint8_t v___x_1769_; 
lean_del_object(v___x_1751_);
lean_del_object(v___x_1746_);
lean_dec(v_snd_1742_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1767_ = lean_ptr_addr(v_k_1725_);
v___x_1768_ = lean_ptr_addr(v_fst_1744_);
v___x_1769_ = lean_usize_dec_eq(v___x_1767_, v___x_1768_);
if (v___x_1769_ == 0)
{
lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1776_; 
lean_inc_ref(v_ty_1724_);
lean_inc(v_y_1723_);
lean_inc(v_offset_1722_);
lean_inc(v_i_1721_);
lean_inc(v_fvarId_1720_);
v_isSharedCheck_1776_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1776_ == 0)
{
lean_object* v_unused_1777_; lean_object* v_unused_1778_; lean_object* v_unused_1779_; lean_object* v_unused_1780_; lean_object* v_unused_1781_; lean_object* v_unused_1782_; 
v_unused_1777_ = lean_ctor_get(v_c_1273_, 5);
lean_dec(v_unused_1777_);
v_unused_1778_ = lean_ctor_get(v_c_1273_, 4);
lean_dec(v_unused_1778_);
v_unused_1779_ = lean_ctor_get(v_c_1273_, 3);
lean_dec(v_unused_1779_);
v_unused_1780_ = lean_ctor_get(v_c_1273_, 2);
lean_dec(v_unused_1780_);
v_unused_1781_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1781_);
v_unused_1782_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1782_);
v___x_1771_ = v_c_1273_;
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
else
{
lean_dec(v_c_1273_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1776_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1774_; 
if (v_isShared_1772_ == 0)
{
lean_ctor_set(v___x_1771_, 5, v_fst_1744_);
v___x_1774_ = v___x_1771_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v_fvarId_1720_);
lean_ctor_set(v_reuseFailAlloc_1775_, 1, v_i_1721_);
lean_ctor_set(v_reuseFailAlloc_1775_, 2, v_offset_1722_);
lean_ctor_set(v_reuseFailAlloc_1775_, 3, v_y_1723_);
lean_ctor_set(v_reuseFailAlloc_1775_, 4, v_ty_1724_);
lean_ctor_set(v_reuseFailAlloc_1775_, 5, v_fst_1744_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
v___y_1762_ = v___x_1774_;
goto v___jp_1761_;
}
}
}
else
{
lean_dec(v_fst_1744_);
v___y_1762_ = v_c_1273_;
goto v___jp_1761_;
}
}
case 1:
{
lean_object* v___x_1783_; 
lean_del_object(v___x_1751_);
lean_del_object(v___x_1746_);
lean_dec(v_snd_1742_);
v___x_1783_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_1271_, v_info_1272_, v_fst_1744_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
lean_dec_ref(v_info_1272_);
if (lean_obj_tag(v___x_1783_) == 0)
{
lean_object* v_a_1784_; lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1811_; 
v_a_1784_ = lean_ctor_get(v___x_1783_, 0);
v_isSharedCheck_1811_ = !lean_is_exclusive(v___x_1783_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1786_ = v___x_1783_;
v_isShared_1787_ = v_isSharedCheck_1811_;
goto v_resetjp_1785_;
}
else
{
lean_inc(v_a_1784_);
lean_dec(v___x_1783_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1811_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
lean_object* v___y_1789_; size_t v___x_1795_; size_t v___x_1796_; uint8_t v___x_1797_; 
v___x_1795_ = lean_ptr_addr(v_k_1725_);
v___x_1796_ = lean_ptr_addr(v_a_1784_);
v___x_1797_ = lean_usize_dec_eq(v___x_1795_, v___x_1796_);
if (v___x_1797_ == 0)
{
lean_object* v___x_1799_; uint8_t v_isShared_1800_; uint8_t v_isSharedCheck_1804_; 
lean_inc_ref(v_ty_1724_);
lean_inc(v_y_1723_);
lean_inc(v_offset_1722_);
lean_inc(v_i_1721_);
lean_inc(v_fvarId_1720_);
v_isSharedCheck_1804_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1804_ == 0)
{
lean_object* v_unused_1805_; lean_object* v_unused_1806_; lean_object* v_unused_1807_; lean_object* v_unused_1808_; lean_object* v_unused_1809_; lean_object* v_unused_1810_; 
v_unused_1805_ = lean_ctor_get(v_c_1273_, 5);
lean_dec(v_unused_1805_);
v_unused_1806_ = lean_ctor_get(v_c_1273_, 4);
lean_dec(v_unused_1806_);
v_unused_1807_ = lean_ctor_get(v_c_1273_, 3);
lean_dec(v_unused_1807_);
v_unused_1808_ = lean_ctor_get(v_c_1273_, 2);
lean_dec(v_unused_1808_);
v_unused_1809_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1809_);
v_unused_1810_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1810_);
v___x_1799_ = v_c_1273_;
v_isShared_1800_ = v_isSharedCheck_1804_;
goto v_resetjp_1798_;
}
else
{
lean_dec(v_c_1273_);
v___x_1799_ = lean_box(0);
v_isShared_1800_ = v_isSharedCheck_1804_;
goto v_resetjp_1798_;
}
v_resetjp_1798_:
{
lean_object* v___x_1802_; 
if (v_isShared_1800_ == 0)
{
lean_ctor_set(v___x_1799_, 5, v_a_1784_);
v___x_1802_ = v___x_1799_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v_fvarId_1720_);
lean_ctor_set(v_reuseFailAlloc_1803_, 1, v_i_1721_);
lean_ctor_set(v_reuseFailAlloc_1803_, 2, v_offset_1722_);
lean_ctor_set(v_reuseFailAlloc_1803_, 3, v_y_1723_);
lean_ctor_set(v_reuseFailAlloc_1803_, 4, v_ty_1724_);
lean_ctor_set(v_reuseFailAlloc_1803_, 5, v_a_1784_);
v___x_1802_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
v___y_1789_ = v___x_1802_;
goto v___jp_1788_;
}
}
}
else
{
lean_dec(v_a_1784_);
v___y_1789_ = v_c_1273_;
goto v___jp_1788_;
}
v___jp_1788_:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1793_; 
v___x_1790_ = lean_box(v___x_1729_);
v___x_1791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1791_, 0, v___y_1789_);
lean_ctor_set(v___x_1791_, 1, v___x_1790_);
if (v_isShared_1787_ == 0)
{
lean_ctor_set(v___x_1786_, 0, v___x_1791_);
v___x_1793_ = v___x_1786_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v___x_1791_);
v___x_1793_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
return v___x_1793_;
}
}
}
}
else
{
lean_object* v_a_1812_; lean_object* v___x_1814_; uint8_t v_isShared_1815_; uint8_t v_isSharedCheck_1819_; 
lean_dec_ref(v_c_1273_);
v_a_1812_ = lean_ctor_get(v___x_1783_, 0);
v_isSharedCheck_1819_ = !lean_is_exclusive(v___x_1783_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1814_ = v___x_1783_;
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
else
{
lean_inc(v_a_1812_);
lean_dec(v___x_1783_);
v___x_1814_ = lean_box(0);
v_isShared_1815_ = v_isSharedCheck_1819_;
goto v_resetjp_1813_;
}
v_resetjp_1813_:
{
lean_object* v___x_1817_; 
if (v_isShared_1815_ == 0)
{
v___x_1817_ = v___x_1814_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v_a_1812_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
}
default: 
{
size_t v___x_1820_; size_t v___x_1821_; uint8_t v___x_1822_; 
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1820_ = lean_ptr_addr(v_k_1725_);
v___x_1821_ = lean_ptr_addr(v_fst_1744_);
v___x_1822_ = lean_usize_dec_eq(v___x_1820_, v___x_1821_);
if (v___x_1822_ == 0)
{
lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1829_; 
lean_inc_ref(v_ty_1724_);
lean_inc(v_y_1723_);
lean_inc(v_offset_1722_);
lean_inc(v_i_1721_);
lean_inc(v_fvarId_1720_);
v_isSharedCheck_1829_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1829_ == 0)
{
lean_object* v_unused_1830_; lean_object* v_unused_1831_; lean_object* v_unused_1832_; lean_object* v_unused_1833_; lean_object* v_unused_1834_; lean_object* v_unused_1835_; 
v_unused_1830_ = lean_ctor_get(v_c_1273_, 5);
lean_dec(v_unused_1830_);
v_unused_1831_ = lean_ctor_get(v_c_1273_, 4);
lean_dec(v_unused_1831_);
v_unused_1832_ = lean_ctor_get(v_c_1273_, 3);
lean_dec(v_unused_1832_);
v_unused_1833_ = lean_ctor_get(v_c_1273_, 2);
lean_dec(v_unused_1833_);
v_unused_1834_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1834_);
v_unused_1835_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1835_);
v___x_1824_ = v_c_1273_;
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
else
{
lean_dec(v_c_1273_);
v___x_1824_ = lean_box(0);
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
v_resetjp_1823_:
{
lean_object* v___x_1827_; 
if (v_isShared_1825_ == 0)
{
lean_ctor_set(v___x_1824_, 5, v_fst_1744_);
v___x_1827_ = v___x_1824_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v_fvarId_1720_);
lean_ctor_set(v_reuseFailAlloc_1828_, 1, v_i_1721_);
lean_ctor_set(v_reuseFailAlloc_1828_, 2, v_offset_1722_);
lean_ctor_set(v_reuseFailAlloc_1828_, 3, v_y_1723_);
lean_ctor_set(v_reuseFailAlloc_1828_, 4, v_ty_1724_);
lean_ctor_set(v_reuseFailAlloc_1828_, 5, v_fst_1744_);
v___x_1827_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
v___y_1754_ = v___x_1827_;
goto v___jp_1753_;
}
}
}
else
{
lean_dec(v_fst_1744_);
v___y_1754_ = v_c_1273_;
goto v___jp_1753_;
}
}
}
v___jp_1753_:
{
lean_object* v___x_1756_; 
if (v_isShared_1747_ == 0)
{
lean_ctor_set(v___x_1746_, 0, v___y_1754_);
v___x_1756_ = v___x_1746_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v___y_1754_);
lean_ctor_set(v_reuseFailAlloc_1760_, 1, v_snd_1742_);
v___x_1756_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
lean_object* v___x_1758_; 
if (v_isShared_1752_ == 0)
{
lean_ctor_set(v___x_1751_, 0, v___x_1756_);
v___x_1758_ = v___x_1751_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v___x_1756_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
}
}
}
v___jp_1761_:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; 
v___x_1763_ = lean_box(v___x_1729_);
v___x_1764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1764_, 0, v___y_1762_);
lean_ctor_set(v___x_1764_, 1, v___x_1763_);
v___x_1765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1765_, 0, v___x_1764_);
return v___x_1765_;
}
}
}
else
{
lean_object* v_a_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1844_; 
lean_del_object(v___x_1746_);
lean_dec(v_fst_1744_);
lean_dec(v_snd_1742_);
lean_dec_ref(v_c_1273_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v_a_1837_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1844_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1844_ == 0)
{
v___x_1839_ = v___x_1748_;
v_isShared_1840_ = v_isSharedCheck_1844_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_a_1837_);
lean_dec(v___x_1748_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1844_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v___x_1842_; 
if (v_isShared_1840_ == 0)
{
v___x_1842_ = v___x_1839_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v_a_1837_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
return v___x_1842_;
}
}
}
}
}
else
{
lean_object* v_fst_1847_; size_t v___x_1848_; size_t v___x_1849_; uint8_t v___x_1850_; 
lean_dec_ref(v_instr_1727_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v_fst_1847_ = lean_ctor_get(v_a_1731_, 0);
lean_inc(v_fst_1847_);
lean_dec(v_a_1731_);
v___x_1848_ = lean_ptr_addr(v_k_1725_);
v___x_1849_ = lean_ptr_addr(v_fst_1847_);
v___x_1850_ = lean_usize_dec_eq(v___x_1848_, v___x_1849_);
if (v___x_1850_ == 0)
{
lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1857_; 
lean_inc_ref(v_ty_1724_);
lean_inc(v_y_1723_);
lean_inc(v_offset_1722_);
lean_inc(v_i_1721_);
lean_inc(v_fvarId_1720_);
v_isSharedCheck_1857_ = !lean_is_exclusive(v_c_1273_);
if (v_isSharedCheck_1857_ == 0)
{
lean_object* v_unused_1858_; lean_object* v_unused_1859_; lean_object* v_unused_1860_; lean_object* v_unused_1861_; lean_object* v_unused_1862_; lean_object* v_unused_1863_; 
v_unused_1858_ = lean_ctor_get(v_c_1273_, 5);
lean_dec(v_unused_1858_);
v_unused_1859_ = lean_ctor_get(v_c_1273_, 4);
lean_dec(v_unused_1859_);
v_unused_1860_ = lean_ctor_get(v_c_1273_, 3);
lean_dec(v_unused_1860_);
v_unused_1861_ = lean_ctor_get(v_c_1273_, 2);
lean_dec(v_unused_1861_);
v_unused_1862_ = lean_ctor_get(v_c_1273_, 1);
lean_dec(v_unused_1862_);
v_unused_1863_ = lean_ctor_get(v_c_1273_, 0);
lean_dec(v_unused_1863_);
v___x_1852_ = v_c_1273_;
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
else
{
lean_dec(v_c_1273_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1855_; 
if (v_isShared_1853_ == 0)
{
lean_ctor_set(v___x_1852_, 5, v_fst_1847_);
v___x_1855_ = v___x_1852_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v_fvarId_1720_);
lean_ctor_set(v_reuseFailAlloc_1856_, 1, v_i_1721_);
lean_ctor_set(v_reuseFailAlloc_1856_, 2, v_offset_1722_);
lean_ctor_set(v_reuseFailAlloc_1856_, 3, v_y_1723_);
lean_ctor_set(v_reuseFailAlloc_1856_, 4, v_ty_1724_);
lean_ctor_set(v_reuseFailAlloc_1856_, 5, v_fst_1847_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
v___y_1736_ = v___x_1855_;
goto v___jp_1735_;
}
}
}
else
{
lean_dec(v_fst_1847_);
v___y_1736_ = v_c_1273_;
goto v___jp_1735_;
}
}
v___jp_1735_:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1740_; 
v___x_1737_ = lean_box(v___x_1729_);
v___x_1738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1738_, 0, v___y_1736_);
lean_ctor_set(v___x_1738_, 1, v___x_1737_);
if (v_isShared_1734_ == 0)
{
lean_ctor_set(v___x_1733_, 0, v___x_1738_);
v___x_1740_ = v___x_1733_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v___x_1738_);
v___x_1740_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
return v___x_1740_;
}
}
}
}
else
{
lean_dec_ref(v_instr_1727_);
lean_dec_ref(v_c_1273_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
return v___x_1730_;
}
}
else
{
lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
lean_dec_ref(v_instr_1727_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec(v_a_1276_);
lean_dec_ref(v_a_1275_);
lean_dec_ref(v_a_1274_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1865_ = lean_box(v___x_1729_);
v___x_1866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1866_, 0, v_c_1273_);
lean_ctor_set(v___x_1866_, 1, v___x_1865_);
v___x_1867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1867_, 0, v___x_1866_);
return v___x_1867_;
}
}
default: 
{
lean_object* v___x_1868_; lean_object* v___x_1869_; 
lean_dec_ref(v_c_1273_);
lean_dec_ref(v_info_1272_);
lean_dec(v_x_1271_);
v___x_1868_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___closed__1);
v___x_1869_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3(v___x_1868_, v_a_1274_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
return v___x_1869_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(lean_object* v_x_1870_, lean_object* v_info_1871_, lean_object* v_c_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_){
_start:
{
lean_object* v___x_1879_; 
lean_inc(v_a_1877_);
lean_inc_ref(v_a_1876_);
lean_inc(v_a_1875_);
lean_inc_ref(v_a_1874_);
lean_inc_ref(v_a_1873_);
lean_inc_ref(v_info_1871_);
lean_inc(v_x_1870_);
v___x_1879_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1870_, v_info_1871_, v_c_1872_, v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_);
if (lean_obj_tag(v___x_1879_) == 0)
{
lean_object* v_a_1880_; lean_object* v___x_1882_; uint8_t v_isShared_1883_; uint8_t v_isSharedCheck_1892_; 
v_a_1880_ = lean_ctor_get(v___x_1879_, 0);
v_isSharedCheck_1892_ = !lean_is_exclusive(v___x_1879_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1882_ = v___x_1879_;
v_isShared_1883_ = v_isSharedCheck_1892_;
goto v_resetjp_1881_;
}
else
{
lean_inc(v_a_1880_);
lean_dec(v___x_1879_);
v___x_1882_ = lean_box(0);
v_isShared_1883_ = v_isSharedCheck_1892_;
goto v_resetjp_1881_;
}
v_resetjp_1881_:
{
lean_object* v_snd_1884_; uint8_t v___x_1885_; 
v_snd_1884_ = lean_ctor_get(v_a_1880_, 1);
v___x_1885_ = lean_unbox(v_snd_1884_);
if (v___x_1885_ == 0)
{
lean_object* v_fst_1886_; lean_object* v___x_1887_; 
lean_del_object(v___x_1882_);
v_fst_1886_ = lean_ctor_get(v_a_1880_, 0);
lean_inc(v_fst_1886_);
lean_dec(v_a_1880_);
v___x_1887_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S(v_x_1870_, v_info_1871_, v_fst_1886_, v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_);
lean_dec_ref(v_info_1871_);
return v___x_1887_;
}
else
{
lean_object* v_fst_1888_; lean_object* v___x_1890_; 
lean_dec(v_a_1877_);
lean_dec_ref(v_a_1876_);
lean_dec(v_a_1875_);
lean_dec_ref(v_a_1874_);
lean_dec_ref(v_a_1873_);
lean_dec_ref(v_info_1871_);
lean_dec(v_x_1870_);
v_fst_1888_ = lean_ctor_get(v_a_1880_, 0);
lean_inc(v_fst_1888_);
lean_dec(v_a_1880_);
if (v_isShared_1883_ == 0)
{
lean_ctor_set(v___x_1882_, 0, v_fst_1888_);
v___x_1890_ = v___x_1882_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_fst_1888_);
v___x_1890_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
return v___x_1890_;
}
}
}
}
else
{
lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1900_; 
lean_dec(v_a_1877_);
lean_dec_ref(v_a_1876_);
lean_dec(v_a_1875_);
lean_dec_ref(v_a_1874_);
lean_dec_ref(v_a_1873_);
lean_dec_ref(v_info_1871_);
lean_dec(v_x_1870_);
v_a_1893_ = lean_ctor_get(v___x_1879_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1879_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1895_ = v___x_1879_;
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v___x_1879_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1898_; 
if (v_isShared_1896_ == 0)
{
v___x_1898_ = v___x_1895_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v_a_1893_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1___boxed(lean_object* v_x_1901_, lean_object* v_info_1902_, lean_object* v_i_1903_, lean_object* v_as_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_){
_start:
{
lean_object* v_res_1911_; 
v_res_1911_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__1(v_x_1901_, v_info_1902_, v_i_1903_, v_as_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_);
return v_res_1911_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go___boxed(lean_object* v_x_1912_, lean_object* v_info_1913_, lean_object* v_c_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_, lean_object* v_a_1917_, lean_object* v_a_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_){
_start:
{
lean_object* v_res_1921_; 
v_res_1921_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go(v_x_1912_, v_info_1913_, v_c_1914_, v_a_1915_, v_a_1916_, v_a_1917_, v_a_1918_, v_a_1919_);
return v_res_1921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0(uint8_t v_pu_1922_, lean_object* v_alt_1923_, lean_object* v_f_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_){
_start:
{
lean_object* v___x_1931_; 
v___x_1931_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_alt_1923_, v_f_1924_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_);
return v___x_1931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___boxed(lean_object* v_pu_1932_, lean_object* v_alt_1933_, lean_object* v_f_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_){
_start:
{
uint8_t v_pu_boxed_1941_; lean_object* v_res_1942_; 
v_pu_boxed_1941_ = lean_unbox(v_pu_1932_);
v_res_1942_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0(v_pu_boxed_1941_, v_alt_1933_, v_f_1934_, v___y_1935_, v___y_1936_, v___y_1937_, v___y_1938_, v___y_1939_);
return v_res_1942_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(lean_object* v_msg_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_){
_start:
{
lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v_toApplicative_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1986_; 
v___x_1950_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0);
v___x_1951_ = l_ReaderT_instMonad___redArg(v___x_1950_);
v_toApplicative_1952_ = lean_ctor_get(v___x_1951_, 0);
v_isSharedCheck_1986_ = !lean_is_exclusive(v___x_1951_);
if (v_isSharedCheck_1986_ == 0)
{
lean_object* v_unused_1987_; 
v_unused_1987_ = lean_ctor_get(v___x_1951_, 1);
lean_dec(v_unused_1987_);
v___x_1954_ = v___x_1951_;
v_isShared_1955_ = v_isSharedCheck_1986_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_toApplicative_1952_);
lean_dec(v___x_1951_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1986_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v_toFunctor_1956_; lean_object* v_toSeq_1957_; lean_object* v_toSeqLeft_1958_; lean_object* v_toSeqRight_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_1984_; 
v_toFunctor_1956_ = lean_ctor_get(v_toApplicative_1952_, 0);
v_toSeq_1957_ = lean_ctor_get(v_toApplicative_1952_, 2);
v_toSeqLeft_1958_ = lean_ctor_get(v_toApplicative_1952_, 3);
v_toSeqRight_1959_ = lean_ctor_get(v_toApplicative_1952_, 4);
v_isSharedCheck_1984_ = !lean_is_exclusive(v_toApplicative_1952_);
if (v_isSharedCheck_1984_ == 0)
{
lean_object* v_unused_1985_; 
v_unused_1985_ = lean_ctor_get(v_toApplicative_1952_, 1);
lean_dec(v_unused_1985_);
v___x_1961_ = v_toApplicative_1952_;
v_isShared_1962_ = v_isSharedCheck_1984_;
goto v_resetjp_1960_;
}
else
{
lean_inc(v_toSeqRight_1959_);
lean_inc(v_toSeqLeft_1958_);
lean_inc(v_toSeq_1957_);
lean_inc(v_toFunctor_1956_);
lean_dec(v_toApplicative_1952_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_1984_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v___f_1963_; lean_object* v___f_1964_; lean_object* v___f_1965_; lean_object* v___f_1966_; lean_object* v___x_1967_; lean_object* v___f_1968_; lean_object* v___f_1969_; lean_object* v___f_1970_; lean_object* v___x_1972_; 
v___f_1963_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1));
v___f_1964_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2));
lean_inc_ref(v_toFunctor_1956_);
v___f_1965_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1965_, 0, v_toFunctor_1956_);
v___f_1966_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1966_, 0, v_toFunctor_1956_);
v___x_1967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1967_, 0, v___f_1965_);
lean_ctor_set(v___x_1967_, 1, v___f_1966_);
v___f_1968_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1968_, 0, v_toSeqRight_1959_);
v___f_1969_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1969_, 0, v_toSeqLeft_1958_);
v___f_1970_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1970_, 0, v_toSeq_1957_);
if (v_isShared_1962_ == 0)
{
lean_ctor_set(v___x_1961_, 4, v___f_1968_);
lean_ctor_set(v___x_1961_, 3, v___f_1969_);
lean_ctor_set(v___x_1961_, 2, v___f_1970_);
lean_ctor_set(v___x_1961_, 1, v___f_1963_);
lean_ctor_set(v___x_1961_, 0, v___x_1967_);
v___x_1972_ = v___x_1961_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v___x_1967_);
lean_ctor_set(v_reuseFailAlloc_1983_, 1, v___f_1963_);
lean_ctor_set(v_reuseFailAlloc_1983_, 2, v___f_1970_);
lean_ctor_set(v_reuseFailAlloc_1983_, 3, v___f_1969_);
lean_ctor_set(v_reuseFailAlloc_1983_, 4, v___f_1968_);
v___x_1972_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
lean_object* v___x_1974_; 
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 1, v___f_1964_);
lean_ctor_set(v___x_1954_, 0, v___x_1972_);
v___x_1974_ = v___x_1954_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v___x_1972_);
lean_ctor_set(v_reuseFailAlloc_1982_, 1, v___f_1964_);
v___x_1974_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___f_1978_; lean_object* v___f_1979_; lean_object* v___x_5616__overap_1980_; lean_object* v___x_1981_; 
v___x_1975_ = l_ReaderT_instMonad___redArg(v___x_1974_);
v___x_1976_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__0___closed__0);
v___x_1977_ = l_instInhabitedOfMonad___redArg(v___x_1975_, v___x_1976_);
v___f_1978_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1978_, 0, v___x_1977_);
v___f_1979_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1979_, 0, v___f_1978_);
v___x_5616__overap_1980_ = lean_panic_fn(v___f_1979_, v_msg_1943_);
v___x_1981_ = lean_apply_6(v___x_5616__overap_1980_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_, lean_box(0));
return v___x_1981_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4___boxed(lean_object* v_msg_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_){
_start:
{
lean_object* v_res_1995_; 
v_res_1995_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(v_msg_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_);
return v_res_1995_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(lean_object* v_a_1996_, lean_object* v_fallback_1997_, lean_object* v_x_1998_){
_start:
{
if (lean_obj_tag(v_x_1998_) == 0)
{
lean_inc(v_fallback_1997_);
return v_fallback_1997_;
}
else
{
lean_object* v_key_1999_; lean_object* v_value_2000_; lean_object* v_tail_2001_; uint8_t v___x_2002_; 
v_key_1999_ = lean_ctor_get(v_x_1998_, 0);
v_value_2000_ = lean_ctor_get(v_x_1998_, 1);
v_tail_2001_ = lean_ctor_get(v_x_1998_, 2);
v___x_2002_ = l_Lean_instBEqFVarId_beq(v_key_1999_, v_a_1996_);
if (v___x_2002_ == 0)
{
v_x_1998_ = v_tail_2001_;
goto _start;
}
else
{
lean_inc(v_value_2000_);
return v_value_2000_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg___boxed(lean_object* v_a_2004_, lean_object* v_fallback_2005_, lean_object* v_x_2006_){
_start:
{
lean_object* v_res_2007_; 
v_res_2007_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(v_a_2004_, v_fallback_2005_, v_x_2006_);
lean_dec(v_x_2006_);
lean_dec(v_fallback_2005_);
lean_dec(v_a_2004_);
return v_res_2007_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(lean_object* v_m_2008_, lean_object* v_a_2009_, lean_object* v_fallback_2010_){
_start:
{
lean_object* v_buckets_2011_; lean_object* v___x_2012_; uint64_t v___x_2013_; uint64_t v___x_2014_; uint64_t v___x_2015_; uint64_t v_fold_2016_; uint64_t v___x_2017_; uint64_t v___x_2018_; uint64_t v___x_2019_; size_t v___x_2020_; size_t v___x_2021_; size_t v___x_2022_; size_t v___x_2023_; size_t v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; 
v_buckets_2011_ = lean_ctor_get(v_m_2008_, 1);
v___x_2012_ = lean_array_get_size(v_buckets_2011_);
v___x_2013_ = l_Lean_instHashableFVarId_hash(v_a_2009_);
v___x_2014_ = 32ULL;
v___x_2015_ = lean_uint64_shift_right(v___x_2013_, v___x_2014_);
v_fold_2016_ = lean_uint64_xor(v___x_2013_, v___x_2015_);
v___x_2017_ = 16ULL;
v___x_2018_ = lean_uint64_shift_right(v_fold_2016_, v___x_2017_);
v___x_2019_ = lean_uint64_xor(v_fold_2016_, v___x_2018_);
v___x_2020_ = lean_uint64_to_usize(v___x_2019_);
v___x_2021_ = lean_usize_of_nat(v___x_2012_);
v___x_2022_ = ((size_t)1ULL);
v___x_2023_ = lean_usize_sub(v___x_2021_, v___x_2022_);
v___x_2024_ = lean_usize_land(v___x_2020_, v___x_2023_);
v___x_2025_ = lean_array_uget_borrowed(v_buckets_2011_, v___x_2024_);
v___x_2026_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(v_a_2009_, v_fallback_2010_, v___x_2025_);
return v___x_2026_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg___boxed(lean_object* v_m_2027_, lean_object* v_a_2028_, lean_object* v_fallback_2029_){
_start:
{
lean_object* v_res_2030_; 
v_res_2030_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(v_m_2027_, v_a_2028_, v_fallback_2029_);
lean_dec(v_fallback_2029_);
lean_dec(v_a_2028_);
lean_dec_ref(v_m_2027_);
return v_res_2030_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(lean_object* v_x_2031_, lean_object* v_x_2032_, lean_object* v_x_2033_, lean_object* v_x_2034_){
_start:
{
lean_object* v_ks_2035_; lean_object* v_vs_2036_; lean_object* v___x_2038_; uint8_t v_isShared_2039_; uint8_t v_isSharedCheck_2060_; 
v_ks_2035_ = lean_ctor_get(v_x_2031_, 0);
v_vs_2036_ = lean_ctor_get(v_x_2031_, 1);
v_isSharedCheck_2060_ = !lean_is_exclusive(v_x_2031_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2038_ = v_x_2031_;
v_isShared_2039_ = v_isSharedCheck_2060_;
goto v_resetjp_2037_;
}
else
{
lean_inc(v_vs_2036_);
lean_inc(v_ks_2035_);
lean_dec(v_x_2031_);
v___x_2038_ = lean_box(0);
v_isShared_2039_ = v_isSharedCheck_2060_;
goto v_resetjp_2037_;
}
v_resetjp_2037_:
{
lean_object* v___x_2040_; uint8_t v___x_2041_; 
v___x_2040_ = lean_array_get_size(v_ks_2035_);
v___x_2041_ = lean_nat_dec_lt(v_x_2032_, v___x_2040_);
if (v___x_2041_ == 0)
{
lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2045_; 
lean_dec(v_x_2032_);
v___x_2042_ = lean_array_push(v_ks_2035_, v_x_2033_);
v___x_2043_ = lean_array_push(v_vs_2036_, v_x_2034_);
if (v_isShared_2039_ == 0)
{
lean_ctor_set(v___x_2038_, 1, v___x_2043_);
lean_ctor_set(v___x_2038_, 0, v___x_2042_);
v___x_2045_ = v___x_2038_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v___x_2042_);
lean_ctor_set(v_reuseFailAlloc_2046_, 1, v___x_2043_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
return v___x_2045_;
}
}
else
{
lean_object* v_k_x27_2047_; uint8_t v___x_2048_; 
v_k_x27_2047_ = lean_array_fget_borrowed(v_ks_2035_, v_x_2032_);
v___x_2048_ = l_Lean_instBEqFVarId_beq(v_x_2033_, v_k_x27_2047_);
if (v___x_2048_ == 0)
{
lean_object* v___x_2050_; 
if (v_isShared_2039_ == 0)
{
v___x_2050_ = v___x_2038_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v_ks_2035_);
lean_ctor_set(v_reuseFailAlloc_2054_, 1, v_vs_2036_);
v___x_2050_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
lean_object* v___x_2051_; lean_object* v___x_2052_; 
v___x_2051_ = lean_unsigned_to_nat(1u);
v___x_2052_ = lean_nat_add(v_x_2032_, v___x_2051_);
lean_dec(v_x_2032_);
v_x_2031_ = v___x_2050_;
v_x_2032_ = v___x_2052_;
goto _start;
}
}
else
{
lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2058_; 
v___x_2055_ = lean_array_fset(v_ks_2035_, v_x_2032_, v_x_2033_);
v___x_2056_ = lean_array_fset(v_vs_2036_, v_x_2032_, v_x_2034_);
lean_dec(v_x_2032_);
if (v_isShared_2039_ == 0)
{
lean_ctor_set(v___x_2038_, 1, v___x_2056_);
lean_ctor_set(v___x_2038_, 0, v___x_2055_);
v___x_2058_ = v___x_2038_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v___x_2055_);
lean_ctor_set(v_reuseFailAlloc_2059_, 1, v___x_2056_);
v___x_2058_ = v_reuseFailAlloc_2059_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
return v___x_2058_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(lean_object* v_n_2061_, lean_object* v_k_2062_, lean_object* v_v_2063_){
_start:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; 
v___x_2064_ = lean_unsigned_to_nat(0u);
v___x_2065_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(v_n_2061_, v___x_2064_, v_k_2062_, v_v_2063_);
return v___x_2065_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0(void){
_start:
{
size_t v___x_2066_; size_t v___x_2067_; size_t v___x_2068_; 
v___x_2066_ = ((size_t)5ULL);
v___x_2067_ = ((size_t)1ULL);
v___x_2068_ = lean_usize_shift_left(v___x_2067_, v___x_2066_);
return v___x_2068_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_2069_; size_t v___x_2070_; size_t v___x_2071_; 
v___x_2069_ = ((size_t)1ULL);
v___x_2070_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__0);
v___x_2071_ = lean_usize_sub(v___x_2070_, v___x_2069_);
return v___x_2071_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_2072_; 
v___x_2072_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_2072_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(lean_object* v_x_2073_, size_t v_x_2074_, size_t v_x_2075_, lean_object* v_x_2076_, lean_object* v_x_2077_){
_start:
{
if (lean_obj_tag(v_x_2073_) == 0)
{
lean_object* v_es_2078_; size_t v___x_2079_; size_t v___x_2080_; size_t v___x_2081_; size_t v___x_2082_; lean_object* v_j_2083_; lean_object* v___x_2084_; uint8_t v___x_2085_; 
v_es_2078_ = lean_ctor_get(v_x_2073_, 0);
v___x_2079_ = ((size_t)5ULL);
v___x_2080_ = ((size_t)1ULL);
v___x_2081_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__1);
v___x_2082_ = lean_usize_land(v_x_2074_, v___x_2081_);
v_j_2083_ = lean_usize_to_nat(v___x_2082_);
v___x_2084_ = lean_array_get_size(v_es_2078_);
v___x_2085_ = lean_nat_dec_lt(v_j_2083_, v___x_2084_);
if (v___x_2085_ == 0)
{
lean_dec(v_j_2083_);
lean_dec(v_x_2077_);
lean_dec(v_x_2076_);
return v_x_2073_;
}
else
{
lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2122_; 
lean_inc_ref(v_es_2078_);
v_isSharedCheck_2122_ = !lean_is_exclusive(v_x_2073_);
if (v_isSharedCheck_2122_ == 0)
{
lean_object* v_unused_2123_; 
v_unused_2123_ = lean_ctor_get(v_x_2073_, 0);
lean_dec(v_unused_2123_);
v___x_2087_ = v_x_2073_;
v_isShared_2088_ = v_isSharedCheck_2122_;
goto v_resetjp_2086_;
}
else
{
lean_dec(v_x_2073_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2122_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
lean_object* v_v_2089_; lean_object* v___x_2090_; lean_object* v_xs_x27_2091_; lean_object* v___y_2093_; 
v_v_2089_ = lean_array_fget(v_es_2078_, v_j_2083_);
v___x_2090_ = lean_box(0);
v_xs_x27_2091_ = lean_array_fset(v_es_2078_, v_j_2083_, v___x_2090_);
switch(lean_obj_tag(v_v_2089_))
{
case 0:
{
lean_object* v_key_2098_; lean_object* v_val_2099_; lean_object* v___x_2101_; uint8_t v_isShared_2102_; uint8_t v_isSharedCheck_2109_; 
v_key_2098_ = lean_ctor_get(v_v_2089_, 0);
v_val_2099_ = lean_ctor_get(v_v_2089_, 1);
v_isSharedCheck_2109_ = !lean_is_exclusive(v_v_2089_);
if (v_isSharedCheck_2109_ == 0)
{
v___x_2101_ = v_v_2089_;
v_isShared_2102_ = v_isSharedCheck_2109_;
goto v_resetjp_2100_;
}
else
{
lean_inc(v_val_2099_);
lean_inc(v_key_2098_);
lean_dec(v_v_2089_);
v___x_2101_ = lean_box(0);
v_isShared_2102_ = v_isSharedCheck_2109_;
goto v_resetjp_2100_;
}
v_resetjp_2100_:
{
uint8_t v___x_2103_; 
v___x_2103_ = l_Lean_instBEqFVarId_beq(v_x_2076_, v_key_2098_);
if (v___x_2103_ == 0)
{
lean_object* v___x_2104_; lean_object* v___x_2105_; 
lean_del_object(v___x_2101_);
v___x_2104_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2098_, v_val_2099_, v_x_2076_, v_x_2077_);
v___x_2105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2105_, 0, v___x_2104_);
v___y_2093_ = v___x_2105_;
goto v___jp_2092_;
}
else
{
lean_object* v___x_2107_; 
lean_dec(v_val_2099_);
lean_dec(v_key_2098_);
if (v_isShared_2102_ == 0)
{
lean_ctor_set(v___x_2101_, 1, v_x_2077_);
lean_ctor_set(v___x_2101_, 0, v_x_2076_);
v___x_2107_ = v___x_2101_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v_x_2076_);
lean_ctor_set(v_reuseFailAlloc_2108_, 1, v_x_2077_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
v___y_2093_ = v___x_2107_;
goto v___jp_2092_;
}
}
}
}
case 1:
{
lean_object* v_node_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2120_; 
v_node_2110_ = lean_ctor_get(v_v_2089_, 0);
v_isSharedCheck_2120_ = !lean_is_exclusive(v_v_2089_);
if (v_isSharedCheck_2120_ == 0)
{
v___x_2112_ = v_v_2089_;
v_isShared_2113_ = v_isSharedCheck_2120_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_node_2110_);
lean_dec(v_v_2089_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2120_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
size_t v___x_2114_; size_t v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2118_; 
v___x_2114_ = lean_usize_shift_right(v_x_2074_, v___x_2079_);
v___x_2115_ = lean_usize_add(v_x_2075_, v___x_2080_);
v___x_2116_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_node_2110_, v___x_2114_, v___x_2115_, v_x_2076_, v_x_2077_);
if (v_isShared_2113_ == 0)
{
lean_ctor_set(v___x_2112_, 0, v___x_2116_);
v___x_2118_ = v___x_2112_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v___x_2116_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
v___y_2093_ = v___x_2118_;
goto v___jp_2092_;
}
}
}
default: 
{
lean_object* v___x_2121_; 
v___x_2121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2121_, 0, v_x_2076_);
lean_ctor_set(v___x_2121_, 1, v_x_2077_);
v___y_2093_ = v___x_2121_;
goto v___jp_2092_;
}
}
v___jp_2092_:
{
lean_object* v___x_2094_; lean_object* v___x_2096_; 
v___x_2094_ = lean_array_fset(v_xs_x27_2091_, v_j_2083_, v___y_2093_);
lean_dec(v_j_2083_);
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 0, v___x_2094_);
v___x_2096_ = v___x_2087_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v___x_2094_);
v___x_2096_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
return v___x_2096_;
}
}
}
}
}
else
{
lean_object* v_ks_2124_; lean_object* v_vs_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2145_; 
v_ks_2124_ = lean_ctor_get(v_x_2073_, 0);
v_vs_2125_ = lean_ctor_get(v_x_2073_, 1);
v_isSharedCheck_2145_ = !lean_is_exclusive(v_x_2073_);
if (v_isSharedCheck_2145_ == 0)
{
v___x_2127_ = v_x_2073_;
v_isShared_2128_ = v_isSharedCheck_2145_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_vs_2125_);
lean_inc(v_ks_2124_);
lean_dec(v_x_2073_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2145_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
lean_object* v___x_2130_; 
if (v_isShared_2128_ == 0)
{
v___x_2130_ = v___x_2127_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v_ks_2124_);
lean_ctor_set(v_reuseFailAlloc_2144_, 1, v_vs_2125_);
v___x_2130_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
lean_object* v_newNode_2131_; uint8_t v___y_2133_; size_t v___x_2139_; uint8_t v___x_2140_; 
v_newNode_2131_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(v___x_2130_, v_x_2076_, v_x_2077_);
v___x_2139_ = ((size_t)7ULL);
v___x_2140_ = lean_usize_dec_le(v___x_2139_, v_x_2075_);
if (v___x_2140_ == 0)
{
lean_object* v___x_2141_; lean_object* v___x_2142_; uint8_t v___x_2143_; 
v___x_2141_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2131_);
v___x_2142_ = lean_unsigned_to_nat(4u);
v___x_2143_ = lean_nat_dec_lt(v___x_2141_, v___x_2142_);
lean_dec(v___x_2141_);
v___y_2133_ = v___x_2143_;
goto v___jp_2132_;
}
else
{
v___y_2133_ = v___x_2140_;
goto v___jp_2132_;
}
v___jp_2132_:
{
if (v___y_2133_ == 0)
{
lean_object* v_ks_2134_; lean_object* v_vs_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; 
v_ks_2134_ = lean_ctor_get(v_newNode_2131_, 0);
lean_inc_ref(v_ks_2134_);
v_vs_2135_ = lean_ctor_get(v_newNode_2131_, 1);
lean_inc_ref(v_vs_2135_);
lean_dec_ref(v_newNode_2131_);
v___x_2136_ = lean_unsigned_to_nat(0u);
v___x_2137_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__2);
v___x_2138_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(v_x_2075_, v_ks_2134_, v_vs_2135_, v___x_2136_, v___x_2137_);
lean_dec_ref(v_vs_2135_);
lean_dec_ref(v_ks_2134_);
return v___x_2138_;
}
else
{
return v_newNode_2131_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(size_t v_depth_2146_, lean_object* v_keys_2147_, lean_object* v_vals_2148_, lean_object* v_i_2149_, lean_object* v_entries_2150_){
_start:
{
lean_object* v___x_2151_; uint8_t v___x_2152_; 
v___x_2151_ = lean_array_get_size(v_keys_2147_);
v___x_2152_ = lean_nat_dec_lt(v_i_2149_, v___x_2151_);
if (v___x_2152_ == 0)
{
lean_dec(v_i_2149_);
return v_entries_2150_;
}
else
{
lean_object* v_k_2153_; lean_object* v_v_2154_; uint64_t v___x_2155_; size_t v_h_2156_; size_t v___x_2157_; lean_object* v___x_2158_; size_t v___x_2159_; size_t v___x_2160_; size_t v___x_2161_; size_t v_h_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; 
v_k_2153_ = lean_array_fget_borrowed(v_keys_2147_, v_i_2149_);
v_v_2154_ = lean_array_fget_borrowed(v_vals_2148_, v_i_2149_);
v___x_2155_ = l_Lean_instHashableFVarId_hash(v_k_2153_);
v_h_2156_ = lean_uint64_to_usize(v___x_2155_);
v___x_2157_ = ((size_t)5ULL);
v___x_2158_ = lean_unsigned_to_nat(1u);
v___x_2159_ = ((size_t)1ULL);
v___x_2160_ = lean_usize_sub(v_depth_2146_, v___x_2159_);
v___x_2161_ = lean_usize_mul(v___x_2157_, v___x_2160_);
v_h_2162_ = lean_usize_shift_right(v_h_2156_, v___x_2161_);
v___x_2163_ = lean_nat_add(v_i_2149_, v___x_2158_);
lean_dec(v_i_2149_);
lean_inc(v_v_2154_);
lean_inc(v_k_2153_);
v___x_2164_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_entries_2150_, v_h_2162_, v_depth_2146_, v_k_2153_, v_v_2154_);
v_i_2149_ = v___x_2163_;
v_entries_2150_ = v___x_2164_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_depth_2166_, lean_object* v_keys_2167_, lean_object* v_vals_2168_, lean_object* v_i_2169_, lean_object* v_entries_2170_){
_start:
{
size_t v_depth_boxed_2171_; lean_object* v_res_2172_; 
v_depth_boxed_2171_ = lean_unbox_usize(v_depth_2166_);
lean_dec(v_depth_2166_);
v_res_2172_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(v_depth_boxed_2171_, v_keys_2167_, v_vals_2168_, v_i_2169_, v_entries_2170_);
lean_dec_ref(v_vals_2168_);
lean_dec_ref(v_keys_2167_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___boxed(lean_object* v_x_2173_, lean_object* v_x_2174_, lean_object* v_x_2175_, lean_object* v_x_2176_, lean_object* v_x_2177_){
_start:
{
size_t v_x_6245__boxed_2178_; size_t v_x_6246__boxed_2179_; lean_object* v_res_2180_; 
v_x_6245__boxed_2178_ = lean_unbox_usize(v_x_2174_);
lean_dec(v_x_2174_);
v_x_6246__boxed_2179_ = lean_unbox_usize(v_x_2175_);
lean_dec(v_x_2175_);
v_res_2180_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_x_2173_, v_x_6245__boxed_2178_, v_x_6246__boxed_2179_, v_x_2176_, v_x_2177_);
return v_res_2180_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(lean_object* v_x_2181_, lean_object* v_x_2182_, lean_object* v_x_2183_){
_start:
{
uint64_t v___x_2184_; size_t v___x_2185_; size_t v___x_2186_; lean_object* v___x_2187_; 
v___x_2184_ = l_Lean_instHashableFVarId_hash(v_x_2182_);
v___x_2185_ = lean_uint64_to_usize(v___x_2184_);
v___x_2186_ = ((size_t)1ULL);
v___x_2187_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_x_2181_, v___x_2185_, v___x_2186_, v_x_2182_, v_x_2183_);
return v___x_2187_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(lean_object* v_keys_2188_, lean_object* v_i_2189_, lean_object* v_k_2190_){
_start:
{
lean_object* v___x_2191_; uint8_t v___x_2192_; 
v___x_2191_ = lean_array_get_size(v_keys_2188_);
v___x_2192_ = lean_nat_dec_lt(v_i_2189_, v___x_2191_);
if (v___x_2192_ == 0)
{
lean_dec(v_i_2189_);
return v___x_2192_;
}
else
{
lean_object* v_k_x27_2193_; uint8_t v___x_2194_; 
v_k_x27_2193_ = lean_array_fget_borrowed(v_keys_2188_, v_i_2189_);
v___x_2194_ = l_Lean_instBEqFVarId_beq(v_k_2190_, v_k_x27_2193_);
if (v___x_2194_ == 0)
{
lean_object* v___x_2195_; lean_object* v___x_2196_; 
v___x_2195_ = lean_unsigned_to_nat(1u);
v___x_2196_ = lean_nat_add(v_i_2189_, v___x_2195_);
lean_dec(v_i_2189_);
v_i_2189_ = v___x_2196_;
goto _start;
}
else
{
lean_dec(v_i_2189_);
return v___x_2194_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_keys_2198_, lean_object* v_i_2199_, lean_object* v_k_2200_){
_start:
{
uint8_t v_res_2201_; lean_object* v_r_2202_; 
v_res_2201_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(v_keys_2198_, v_i_2199_, v_k_2200_);
lean_dec(v_k_2200_);
lean_dec_ref(v_keys_2198_);
v_r_2202_ = lean_box(v_res_2201_);
return v_r_2202_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(lean_object* v_x_2203_, size_t v_x_2204_, lean_object* v_x_2205_){
_start:
{
if (lean_obj_tag(v_x_2203_) == 0)
{
lean_object* v_es_2206_; lean_object* v___x_2207_; size_t v___x_2208_; size_t v___x_2209_; size_t v___x_2210_; lean_object* v_j_2211_; lean_object* v___x_2212_; 
v_es_2206_ = lean_ctor_get(v_x_2203_, 0);
lean_inc_ref(v_es_2206_);
lean_dec_ref(v_x_2203_);
v___x_2207_ = lean_box(2);
v___x_2208_ = ((size_t)5ULL);
v___x_2209_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg___closed__1);
v___x_2210_ = lean_usize_land(v_x_2204_, v___x_2209_);
v_j_2211_ = lean_usize_to_nat(v___x_2210_);
v___x_2212_ = lean_array_get(v___x_2207_, v_es_2206_, v_j_2211_);
lean_dec(v_j_2211_);
lean_dec_ref(v_es_2206_);
switch(lean_obj_tag(v___x_2212_))
{
case 0:
{
lean_object* v_key_2213_; uint8_t v___x_2214_; 
v_key_2213_ = lean_ctor_get(v___x_2212_, 0);
lean_inc(v_key_2213_);
lean_dec_ref(v___x_2212_);
v___x_2214_ = l_Lean_instBEqFVarId_beq(v_x_2205_, v_key_2213_);
lean_dec(v_key_2213_);
return v___x_2214_;
}
case 1:
{
lean_object* v_node_2215_; size_t v___x_2216_; 
v_node_2215_ = lean_ctor_get(v___x_2212_, 0);
lean_inc(v_node_2215_);
lean_dec_ref(v___x_2212_);
v___x_2216_ = lean_usize_shift_right(v_x_2204_, v___x_2208_);
v_x_2203_ = v_node_2215_;
v_x_2204_ = v___x_2216_;
goto _start;
}
default: 
{
uint8_t v___x_2218_; 
v___x_2218_ = 0;
return v___x_2218_;
}
}
}
else
{
lean_object* v_ks_2219_; lean_object* v___x_2220_; uint8_t v___x_2221_; 
v_ks_2219_ = lean_ctor_get(v_x_2203_, 0);
lean_inc_ref(v_ks_2219_);
lean_dec_ref(v_x_2203_);
v___x_2220_ = lean_unsigned_to_nat(0u);
v___x_2221_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(v_ks_2219_, v___x_2220_, v_x_2205_);
lean_dec_ref(v_ks_2219_);
return v___x_2221_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg___boxed(lean_object* v_x_2222_, lean_object* v_x_2223_, lean_object* v_x_2224_){
_start:
{
size_t v_x_6439__boxed_2225_; uint8_t v_res_2226_; lean_object* v_r_2227_; 
v_x_6439__boxed_2225_ = lean_unbox_usize(v_x_2223_);
lean_dec(v_x_2223_);
v_res_2226_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(v_x_2222_, v_x_6439__boxed_2225_, v_x_2224_);
lean_dec(v_x_2224_);
v_r_2227_ = lean_box(v_res_2226_);
return v_r_2227_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(lean_object* v_x_2228_, lean_object* v_x_2229_){
_start:
{
uint64_t v___x_2230_; size_t v___x_2231_; uint8_t v___x_2232_; 
v___x_2230_ = l_Lean_instHashableFVarId_hash(v_x_2229_);
v___x_2231_ = lean_uint64_to_usize(v___x_2230_);
v___x_2232_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(v_x_2228_, v___x_2231_, v_x_2229_);
return v___x_2232_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg___boxed(lean_object* v_x_2233_, lean_object* v_x_2234_){
_start:
{
uint8_t v_res_2235_; lean_object* v_r_2236_; 
v_res_2235_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(v_x_2233_, v_x_2234_);
lean_dec(v_x_2234_);
v_r_2236_ = lean_box(v_res_2235_);
return v_r_2236_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1(void){
_start:
{
lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
v___x_2238_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_2239_ = lean_unsigned_to_nat(59u);
v___x_2240_ = lean_unsigned_to_nat(281u);
v___x_2241_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__0));
v___x_2242_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_2243_ = l_mkPanicMessageWithDecl(v___x_2242_, v___x_2241_, v___x_2240_, v___x_2239_, v___x_2238_);
return v___x_2243_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(lean_object* v_c_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_, lean_object* v_a_2247_, lean_object* v_a_2248_, lean_object* v_a_2249_){
_start:
{
switch(lean_obj_tag(v_c_2244_))
{
case 0:
{
lean_object* v_decl_2251_; lean_object* v_k_2252_; lean_object* v___x_2253_; 
v_decl_2251_ = lean_ctor_get(v_c_2244_, 0);
v_k_2252_ = lean_ctor_get(v_c_2244_, 1);
lean_inc_ref(v_k_2252_);
v___x_2253_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2252_, v_a_2245_, v_a_2246_, v_a_2247_, v_a_2248_, v_a_2249_);
if (lean_obj_tag(v___x_2253_) == 0)
{
lean_object* v_a_2254_; lean_object* v___x_2256_; uint8_t v_isShared_2257_; uint8_t v_isSharedCheck_2276_; 
v_a_2254_ = lean_ctor_get(v___x_2253_, 0);
v_isSharedCheck_2276_ = !lean_is_exclusive(v___x_2253_);
if (v_isSharedCheck_2276_ == 0)
{
v___x_2256_ = v___x_2253_;
v_isShared_2257_ = v_isSharedCheck_2276_;
goto v_resetjp_2255_;
}
else
{
lean_inc(v_a_2254_);
lean_dec(v___x_2253_);
v___x_2256_ = lean_box(0);
v_isShared_2257_ = v_isSharedCheck_2276_;
goto v_resetjp_2255_;
}
v_resetjp_2255_:
{
size_t v___x_2258_; size_t v___x_2259_; uint8_t v___x_2260_; 
v___x_2258_ = lean_ptr_addr(v_k_2252_);
v___x_2259_ = lean_ptr_addr(v_a_2254_);
v___x_2260_ = lean_usize_dec_eq(v___x_2258_, v___x_2259_);
if (v___x_2260_ == 0)
{
lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2270_; 
lean_inc_ref(v_decl_2251_);
v_isSharedCheck_2270_ = !lean_is_exclusive(v_c_2244_);
if (v_isSharedCheck_2270_ == 0)
{
lean_object* v_unused_2271_; lean_object* v_unused_2272_; 
v_unused_2271_ = lean_ctor_get(v_c_2244_, 1);
lean_dec(v_unused_2271_);
v_unused_2272_ = lean_ctor_get(v_c_2244_, 0);
lean_dec(v_unused_2272_);
v___x_2262_ = v_c_2244_;
v_isShared_2263_ = v_isSharedCheck_2270_;
goto v_resetjp_2261_;
}
else
{
lean_dec(v_c_2244_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2270_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v___x_2265_; 
if (v_isShared_2263_ == 0)
{
lean_ctor_set(v___x_2262_, 1, v_a_2254_);
v___x_2265_ = v___x_2262_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2269_; 
v_reuseFailAlloc_2269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2269_, 0, v_decl_2251_);
lean_ctor_set(v_reuseFailAlloc_2269_, 1, v_a_2254_);
v___x_2265_ = v_reuseFailAlloc_2269_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
lean_object* v___x_2267_; 
if (v_isShared_2257_ == 0)
{
lean_ctor_set(v___x_2256_, 0, v___x_2265_);
v___x_2267_ = v___x_2256_;
goto v_reusejp_2266_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v___x_2265_);
v___x_2267_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2266_;
}
v_reusejp_2266_:
{
return v___x_2267_;
}
}
}
}
else
{
lean_object* v___x_2274_; 
lean_dec(v_a_2254_);
if (v_isShared_2257_ == 0)
{
lean_ctor_set(v___x_2256_, 0, v_c_2244_);
v___x_2274_ = v___x_2256_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v_c_2244_);
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
lean_dec_ref(v_c_2244_);
return v___x_2253_;
}
}
case 2:
{
lean_object* v_decl_2277_; lean_object* v_k_2278_; lean_object* v_params_2279_; lean_object* v_type_2280_; lean_object* v_value_2281_; lean_object* v___x_2282_; 
v_decl_2277_ = lean_ctor_get(v_c_2244_, 0);
v_k_2278_ = lean_ctor_get(v_c_2244_, 1);
v_params_2279_ = lean_ctor_get(v_decl_2277_, 2);
v_type_2280_ = lean_ctor_get(v_decl_2277_, 3);
v_value_2281_ = lean_ctor_get(v_decl_2277_, 4);
lean_inc(v_a_2249_);
lean_inc_ref(v_a_2248_);
lean_inc(v_a_2247_);
lean_inc_ref(v_a_2246_);
lean_inc_ref(v_a_2245_);
lean_inc_ref(v_value_2281_);
v___x_2282_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_value_2281_, v_a_2245_, v_a_2246_, v_a_2247_, v_a_2248_, v_a_2249_);
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_object* v_a_2283_; uint8_t v___x_2284_; lean_object* v___x_2285_; 
v_a_2283_ = lean_ctor_get(v___x_2282_, 0);
lean_inc(v_a_2283_);
lean_dec_ref(v___x_2282_);
v___x_2284_ = 1;
lean_inc_ref(v_params_2279_);
lean_inc_ref(v_type_2280_);
lean_inc_ref(v_decl_2277_);
v___x_2285_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_2284_, v_decl_2277_, v_type_2280_, v_params_2279_, v_a_2283_, v_a_2247_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_object* v_a_2286_; lean_object* v___x_2287_; 
v_a_2286_ = lean_ctor_get(v___x_2285_, 0);
lean_inc(v_a_2286_);
lean_dec_ref(v___x_2285_);
lean_inc_ref(v_k_2278_);
v___x_2287_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2278_, v_a_2245_, v_a_2246_, v_a_2247_, v_a_2248_, v_a_2249_);
if (lean_obj_tag(v___x_2287_) == 0)
{
lean_object* v_a_2288_; lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2315_; 
v_a_2288_ = lean_ctor_get(v___x_2287_, 0);
v_isSharedCheck_2315_ = !lean_is_exclusive(v___x_2287_);
if (v_isSharedCheck_2315_ == 0)
{
v___x_2290_ = v___x_2287_;
v_isShared_2291_ = v_isSharedCheck_2315_;
goto v_resetjp_2289_;
}
else
{
lean_inc(v_a_2288_);
lean_dec(v___x_2287_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2315_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
uint8_t v___y_2293_; size_t v___x_2309_; size_t v___x_2310_; uint8_t v___x_2311_; 
v___x_2309_ = lean_ptr_addr(v_k_2278_);
v___x_2310_ = lean_ptr_addr(v_a_2288_);
v___x_2311_ = lean_usize_dec_eq(v___x_2309_, v___x_2310_);
if (v___x_2311_ == 0)
{
v___y_2293_ = v___x_2311_;
goto v___jp_2292_;
}
else
{
size_t v___x_2312_; size_t v___x_2313_; uint8_t v___x_2314_; 
v___x_2312_ = lean_ptr_addr(v_decl_2277_);
v___x_2313_ = lean_ptr_addr(v_a_2286_);
v___x_2314_ = lean_usize_dec_eq(v___x_2312_, v___x_2313_);
v___y_2293_ = v___x_2314_;
goto v___jp_2292_;
}
v___jp_2292_:
{
if (v___y_2293_ == 0)
{
lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2303_; 
v_isSharedCheck_2303_ = !lean_is_exclusive(v_c_2244_);
if (v_isSharedCheck_2303_ == 0)
{
lean_object* v_unused_2304_; lean_object* v_unused_2305_; 
v_unused_2304_ = lean_ctor_get(v_c_2244_, 1);
lean_dec(v_unused_2304_);
v_unused_2305_ = lean_ctor_get(v_c_2244_, 0);
lean_dec(v_unused_2305_);
v___x_2295_ = v_c_2244_;
v_isShared_2296_ = v_isSharedCheck_2303_;
goto v_resetjp_2294_;
}
else
{
lean_dec(v_c_2244_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2303_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2298_; 
if (v_isShared_2296_ == 0)
{
lean_ctor_set(v___x_2295_, 1, v_a_2288_);
lean_ctor_set(v___x_2295_, 0, v_a_2286_);
v___x_2298_ = v___x_2295_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v_a_2286_);
lean_ctor_set(v_reuseFailAlloc_2302_, 1, v_a_2288_);
v___x_2298_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
lean_object* v___x_2300_; 
if (v_isShared_2291_ == 0)
{
lean_ctor_set(v___x_2290_, 0, v___x_2298_);
v___x_2300_ = v___x_2290_;
goto v_reusejp_2299_;
}
else
{
lean_object* v_reuseFailAlloc_2301_; 
v_reuseFailAlloc_2301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2301_, 0, v___x_2298_);
v___x_2300_ = v_reuseFailAlloc_2301_;
goto v_reusejp_2299_;
}
v_reusejp_2299_:
{
return v___x_2300_;
}
}
}
}
else
{
lean_object* v___x_2307_; 
lean_dec(v_a_2288_);
lean_dec(v_a_2286_);
if (v_isShared_2291_ == 0)
{
lean_ctor_set(v___x_2290_, 0, v_c_2244_);
v___x_2307_ = v___x_2290_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v_c_2244_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
}
}
else
{
lean_dec(v_a_2286_);
lean_dec_ref(v_c_2244_);
return v___x_2287_;
}
}
else
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
lean_dec_ref(v_c_2244_);
lean_dec(v_a_2249_);
lean_dec_ref(v_a_2248_);
lean_dec(v_a_2247_);
lean_dec_ref(v_a_2246_);
lean_dec_ref(v_a_2245_);
v_a_2316_ = lean_ctor_get(v___x_2285_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2318_ = v___x_2285_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___x_2285_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2321_; 
if (v_isShared_2319_ == 0)
{
v___x_2321_ = v___x_2318_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_a_2316_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
}
else
{
lean_dec_ref(v_c_2244_);
lean_dec(v_a_2249_);
lean_dec_ref(v_a_2248_);
lean_dec(v_a_2247_);
lean_dec_ref(v_a_2246_);
lean_dec_ref(v_a_2245_);
return v___x_2282_;
}
}
case 3:
{
lean_object* v___x_2324_; 
lean_dec(v_a_2249_);
lean_dec_ref(v_a_2248_);
lean_dec(v_a_2247_);
lean_dec_ref(v_a_2246_);
lean_dec_ref(v_a_2245_);
v___x_2324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2324_, 0, v_c_2244_);
return v___x_2324_;
}
case 4:
{
lean_object* v_cases_2325_; lean_object* v_typeName_2326_; lean_object* v_resultType_2327_; lean_object* v_discr_2328_; lean_object* v_alts_2329_; lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2388_; 
v_cases_2325_ = lean_ctor_get(v_c_2244_, 0);
lean_inc_ref(v_cases_2325_);
v_typeName_2326_ = lean_ctor_get(v_cases_2325_, 0);
v_resultType_2327_ = lean_ctor_get(v_cases_2325_, 1);
v_discr_2328_ = lean_ctor_get(v_cases_2325_, 2);
v_alts_2329_ = lean_ctor_get(v_cases_2325_, 3);
v_isSharedCheck_2388_ = !lean_is_exclusive(v_cases_2325_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2331_ = v_cases_2325_;
v_isShared_2332_ = v_isSharedCheck_2388_;
goto v_resetjp_2330_;
}
else
{
lean_inc(v_alts_2329_);
lean_inc(v_discr_2328_);
lean_inc(v_resultType_2327_);
lean_inc(v_typeName_2326_);
lean_dec(v_cases_2325_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2388_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v_alreadyFound_2333_; uint8_t v_relaxedReuse_2334_; lean_object* v_ownedness_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2387_; 
v_alreadyFound_2333_ = lean_ctor_get(v_a_2245_, 0);
v_relaxedReuse_2334_ = lean_ctor_get_uint8(v_a_2245_, sizeof(void*)*2);
v_ownedness_2335_ = lean_ctor_get(v_a_2245_, 1);
v_isSharedCheck_2387_ = !lean_is_exclusive(v_a_2245_);
if (v_isSharedCheck_2387_ == 0)
{
v___x_2337_ = v_a_2245_;
v_isShared_2338_ = v_isSharedCheck_2387_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_ownedness_2335_);
lean_inc(v_alreadyFound_2333_);
lean_dec(v_a_2245_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2387_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
uint8_t v___x_2339_; uint8_t v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; uint8_t v___x_2343_; uint8_t v___x_2344_; uint8_t v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2349_; 
lean_inc_ref(v_alreadyFound_2333_);
v___x_2339_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(v_alreadyFound_2333_, v_discr_2328_);
v___x_2340_ = 0;
v___x_2341_ = lean_box(v___x_2340_);
v___x_2342_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(v_ownedness_2335_, v_discr_2328_, v___x_2341_);
lean_dec(v___x_2341_);
v___x_2343_ = 1;
v___x_2344_ = lean_unbox(v___x_2342_);
lean_dec(v___x_2342_);
v___x_2345_ = l_Lean_Compiler_LCNF_instBEqOwnedness_beq(v___x_2344_, v___x_2343_);
v___x_2346_ = lean_box(0);
lean_inc(v_discr_2328_);
v___x_2347_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(v_alreadyFound_2333_, v_discr_2328_, v___x_2346_);
if (v_isShared_2338_ == 0)
{
lean_ctor_set(v___x_2337_, 0, v___x_2347_);
v___x_2349_ = v___x_2337_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v___x_2347_);
lean_ctor_set(v_reuseFailAlloc_2386_, 1, v_ownedness_2335_);
lean_ctor_set_uint8(v_reuseFailAlloc_2386_, sizeof(void*)*2, v_relaxedReuse_2334_);
v___x_2349_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
size_t v_sz_2350_; size_t v___x_2351_; lean_object* v___x_2352_; 
v_sz_2350_ = lean_array_size(v_alts_2329_);
v___x_2351_ = ((size_t)0ULL);
lean_inc_ref(v_alts_2329_);
lean_inc(v_discr_2328_);
v___x_2352_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3(v___x_2345_, v_discr_2328_, v___x_2339_, v_sz_2350_, v___x_2351_, v_alts_2329_, v___x_2349_, v_a_2246_, v_a_2247_, v_a_2248_, v_a_2249_);
if (lean_obj_tag(v___x_2352_) == 0)
{
lean_object* v_a_2353_; lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2377_; 
v_a_2353_ = lean_ctor_get(v___x_2352_, 0);
v_isSharedCheck_2377_ = !lean_is_exclusive(v___x_2352_);
if (v_isSharedCheck_2377_ == 0)
{
v___x_2355_ = v___x_2352_;
v_isShared_2356_ = v_isSharedCheck_2377_;
goto v_resetjp_2354_;
}
else
{
lean_inc(v_a_2353_);
lean_dec(v___x_2352_);
v___x_2355_ = lean_box(0);
v_isShared_2356_ = v_isSharedCheck_2377_;
goto v_resetjp_2354_;
}
v_resetjp_2354_:
{
size_t v___x_2357_; size_t v___x_2358_; uint8_t v___x_2359_; 
v___x_2357_ = lean_ptr_addr(v_alts_2329_);
lean_dec_ref(v_alts_2329_);
v___x_2358_ = lean_ptr_addr(v_a_2353_);
v___x_2359_ = lean_usize_dec_eq(v___x_2357_, v___x_2358_);
if (v___x_2359_ == 0)
{
lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2372_; 
v_isSharedCheck_2372_ = !lean_is_exclusive(v_c_2244_);
if (v_isSharedCheck_2372_ == 0)
{
lean_object* v_unused_2373_; 
v_unused_2373_ = lean_ctor_get(v_c_2244_, 0);
lean_dec(v_unused_2373_);
v___x_2361_ = v_c_2244_;
v_isShared_2362_ = v_isSharedCheck_2372_;
goto v_resetjp_2360_;
}
else
{
lean_dec(v_c_2244_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2372_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2364_; 
if (v_isShared_2332_ == 0)
{
lean_ctor_set(v___x_2331_, 3, v_a_2353_);
v___x_2364_ = v___x_2331_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_typeName_2326_);
lean_ctor_set(v_reuseFailAlloc_2371_, 1, v_resultType_2327_);
lean_ctor_set(v_reuseFailAlloc_2371_, 2, v_discr_2328_);
lean_ctor_set(v_reuseFailAlloc_2371_, 3, v_a_2353_);
v___x_2364_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
lean_object* v___x_2366_; 
if (v_isShared_2362_ == 0)
{
lean_ctor_set(v___x_2361_, 0, v___x_2364_);
v___x_2366_ = v___x_2361_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2370_; 
v_reuseFailAlloc_2370_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2370_, 0, v___x_2364_);
v___x_2366_ = v_reuseFailAlloc_2370_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
lean_object* v___x_2368_; 
if (v_isShared_2356_ == 0)
{
lean_ctor_set(v___x_2355_, 0, v___x_2366_);
v___x_2368_ = v___x_2355_;
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
}
}
else
{
lean_object* v___x_2375_; 
lean_dec(v_a_2353_);
lean_del_object(v___x_2331_);
lean_dec(v_discr_2328_);
lean_dec_ref(v_resultType_2327_);
lean_dec(v_typeName_2326_);
if (v_isShared_2356_ == 0)
{
lean_ctor_set(v___x_2355_, 0, v_c_2244_);
v___x_2375_ = v___x_2355_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_c_2244_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
else
{
lean_object* v_a_2378_; lean_object* v___x_2380_; uint8_t v_isShared_2381_; uint8_t v_isSharedCheck_2385_; 
lean_del_object(v___x_2331_);
lean_dec_ref(v_alts_2329_);
lean_dec(v_discr_2328_);
lean_dec_ref(v_resultType_2327_);
lean_dec(v_typeName_2326_);
lean_dec_ref(v_c_2244_);
v_a_2378_ = lean_ctor_get(v___x_2352_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___x_2352_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2380_ = v___x_2352_;
v_isShared_2381_ = v_isSharedCheck_2385_;
goto v_resetjp_2379_;
}
else
{
lean_inc(v_a_2378_);
lean_dec(v___x_2352_);
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
}
}
}
case 5:
{
lean_object* v___x_2389_; 
lean_dec(v_a_2249_);
lean_dec_ref(v_a_2248_);
lean_dec(v_a_2247_);
lean_dec_ref(v_a_2246_);
lean_dec_ref(v_a_2245_);
v___x_2389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2389_, 0, v_c_2244_);
return v___x_2389_;
}
case 6:
{
lean_object* v___x_2390_; 
lean_dec(v_a_2249_);
lean_dec_ref(v_a_2248_);
lean_dec(v_a_2247_);
lean_dec_ref(v_a_2246_);
lean_dec_ref(v_a_2245_);
v___x_2390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2390_, 0, v_c_2244_);
return v___x_2390_;
}
case 8:
{
lean_object* v_fvarId_2391_; lean_object* v_i_2392_; lean_object* v_y_2393_; lean_object* v_k_2394_; lean_object* v___x_2395_; 
v_fvarId_2391_ = lean_ctor_get(v_c_2244_, 0);
v_i_2392_ = lean_ctor_get(v_c_2244_, 1);
v_y_2393_ = lean_ctor_get(v_c_2244_, 2);
v_k_2394_ = lean_ctor_get(v_c_2244_, 3);
lean_inc_ref(v_k_2394_);
v___x_2395_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2394_, v_a_2245_, v_a_2246_, v_a_2247_, v_a_2248_, v_a_2249_);
if (lean_obj_tag(v___x_2395_) == 0)
{
lean_object* v_a_2396_; lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2420_; 
v_a_2396_ = lean_ctor_get(v___x_2395_, 0);
v_isSharedCheck_2420_ = !lean_is_exclusive(v___x_2395_);
if (v_isSharedCheck_2420_ == 0)
{
v___x_2398_ = v___x_2395_;
v_isShared_2399_ = v_isSharedCheck_2420_;
goto v_resetjp_2397_;
}
else
{
lean_inc(v_a_2396_);
lean_dec(v___x_2395_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2420_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
size_t v___x_2400_; size_t v___x_2401_; uint8_t v___x_2402_; 
v___x_2400_ = lean_ptr_addr(v_k_2394_);
v___x_2401_ = lean_ptr_addr(v_a_2396_);
v___x_2402_ = lean_usize_dec_eq(v___x_2400_, v___x_2401_);
if (v___x_2402_ == 0)
{
lean_object* v___x_2404_; uint8_t v_isShared_2405_; uint8_t v_isSharedCheck_2412_; 
lean_inc(v_y_2393_);
lean_inc(v_i_2392_);
lean_inc(v_fvarId_2391_);
v_isSharedCheck_2412_ = !lean_is_exclusive(v_c_2244_);
if (v_isSharedCheck_2412_ == 0)
{
lean_object* v_unused_2413_; lean_object* v_unused_2414_; lean_object* v_unused_2415_; lean_object* v_unused_2416_; 
v_unused_2413_ = lean_ctor_get(v_c_2244_, 3);
lean_dec(v_unused_2413_);
v_unused_2414_ = lean_ctor_get(v_c_2244_, 2);
lean_dec(v_unused_2414_);
v_unused_2415_ = lean_ctor_get(v_c_2244_, 1);
lean_dec(v_unused_2415_);
v_unused_2416_ = lean_ctor_get(v_c_2244_, 0);
lean_dec(v_unused_2416_);
v___x_2404_ = v_c_2244_;
v_isShared_2405_ = v_isSharedCheck_2412_;
goto v_resetjp_2403_;
}
else
{
lean_dec(v_c_2244_);
v___x_2404_ = lean_box(0);
v_isShared_2405_ = v_isSharedCheck_2412_;
goto v_resetjp_2403_;
}
v_resetjp_2403_:
{
lean_object* v___x_2407_; 
if (v_isShared_2405_ == 0)
{
lean_ctor_set(v___x_2404_, 3, v_a_2396_);
v___x_2407_ = v___x_2404_;
goto v_reusejp_2406_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v_fvarId_2391_);
lean_ctor_set(v_reuseFailAlloc_2411_, 1, v_i_2392_);
lean_ctor_set(v_reuseFailAlloc_2411_, 2, v_y_2393_);
lean_ctor_set(v_reuseFailAlloc_2411_, 3, v_a_2396_);
v___x_2407_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2406_;
}
v_reusejp_2406_:
{
lean_object* v___x_2409_; 
if (v_isShared_2399_ == 0)
{
lean_ctor_set(v___x_2398_, 0, v___x_2407_);
v___x_2409_ = v___x_2398_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v___x_2407_);
v___x_2409_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
return v___x_2409_;
}
}
}
}
else
{
lean_object* v___x_2418_; 
lean_dec(v_a_2396_);
if (v_isShared_2399_ == 0)
{
lean_ctor_set(v___x_2398_, 0, v_c_2244_);
v___x_2418_ = v___x_2398_;
goto v_reusejp_2417_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v_c_2244_);
v___x_2418_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2417_;
}
v_reusejp_2417_:
{
return v___x_2418_;
}
}
}
}
else
{
lean_dec_ref(v_c_2244_);
return v___x_2395_;
}
}
case 9:
{
lean_object* v_fvarId_2421_; lean_object* v_i_2422_; lean_object* v_offset_2423_; lean_object* v_y_2424_; lean_object* v_ty_2425_; lean_object* v_k_2426_; lean_object* v___x_2427_; 
v_fvarId_2421_ = lean_ctor_get(v_c_2244_, 0);
v_i_2422_ = lean_ctor_get(v_c_2244_, 1);
v_offset_2423_ = lean_ctor_get(v_c_2244_, 2);
v_y_2424_ = lean_ctor_get(v_c_2244_, 3);
v_ty_2425_ = lean_ctor_get(v_c_2244_, 4);
v_k_2426_ = lean_ctor_get(v_c_2244_, 5);
lean_inc_ref(v_k_2426_);
v___x_2427_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_k_2426_, v_a_2245_, v_a_2246_, v_a_2247_, v_a_2248_, v_a_2249_);
if (lean_obj_tag(v___x_2427_) == 0)
{
lean_object* v_a_2428_; lean_object* v___x_2430_; uint8_t v_isShared_2431_; uint8_t v_isSharedCheck_2454_; 
v_a_2428_ = lean_ctor_get(v___x_2427_, 0);
v_isSharedCheck_2454_ = !lean_is_exclusive(v___x_2427_);
if (v_isSharedCheck_2454_ == 0)
{
v___x_2430_ = v___x_2427_;
v_isShared_2431_ = v_isSharedCheck_2454_;
goto v_resetjp_2429_;
}
else
{
lean_inc(v_a_2428_);
lean_dec(v___x_2427_);
v___x_2430_ = lean_box(0);
v_isShared_2431_ = v_isSharedCheck_2454_;
goto v_resetjp_2429_;
}
v_resetjp_2429_:
{
size_t v___x_2432_; size_t v___x_2433_; uint8_t v___x_2434_; 
v___x_2432_ = lean_ptr_addr(v_k_2426_);
v___x_2433_ = lean_ptr_addr(v_a_2428_);
v___x_2434_ = lean_usize_dec_eq(v___x_2432_, v___x_2433_);
if (v___x_2434_ == 0)
{
lean_object* v___x_2436_; uint8_t v_isShared_2437_; uint8_t v_isSharedCheck_2444_; 
lean_inc_ref(v_ty_2425_);
lean_inc(v_y_2424_);
lean_inc(v_offset_2423_);
lean_inc(v_i_2422_);
lean_inc(v_fvarId_2421_);
v_isSharedCheck_2444_ = !lean_is_exclusive(v_c_2244_);
if (v_isSharedCheck_2444_ == 0)
{
lean_object* v_unused_2445_; lean_object* v_unused_2446_; lean_object* v_unused_2447_; lean_object* v_unused_2448_; lean_object* v_unused_2449_; lean_object* v_unused_2450_; 
v_unused_2445_ = lean_ctor_get(v_c_2244_, 5);
lean_dec(v_unused_2445_);
v_unused_2446_ = lean_ctor_get(v_c_2244_, 4);
lean_dec(v_unused_2446_);
v_unused_2447_ = lean_ctor_get(v_c_2244_, 3);
lean_dec(v_unused_2447_);
v_unused_2448_ = lean_ctor_get(v_c_2244_, 2);
lean_dec(v_unused_2448_);
v_unused_2449_ = lean_ctor_get(v_c_2244_, 1);
lean_dec(v_unused_2449_);
v_unused_2450_ = lean_ctor_get(v_c_2244_, 0);
lean_dec(v_unused_2450_);
v___x_2436_ = v_c_2244_;
v_isShared_2437_ = v_isSharedCheck_2444_;
goto v_resetjp_2435_;
}
else
{
lean_dec(v_c_2244_);
v___x_2436_ = lean_box(0);
v_isShared_2437_ = v_isSharedCheck_2444_;
goto v_resetjp_2435_;
}
v_resetjp_2435_:
{
lean_object* v___x_2439_; 
if (v_isShared_2437_ == 0)
{
lean_ctor_set(v___x_2436_, 5, v_a_2428_);
v___x_2439_ = v___x_2436_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v_fvarId_2421_);
lean_ctor_set(v_reuseFailAlloc_2443_, 1, v_i_2422_);
lean_ctor_set(v_reuseFailAlloc_2443_, 2, v_offset_2423_);
lean_ctor_set(v_reuseFailAlloc_2443_, 3, v_y_2424_);
lean_ctor_set(v_reuseFailAlloc_2443_, 4, v_ty_2425_);
lean_ctor_set(v_reuseFailAlloc_2443_, 5, v_a_2428_);
v___x_2439_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
lean_object* v___x_2441_; 
if (v_isShared_2431_ == 0)
{
lean_ctor_set(v___x_2430_, 0, v___x_2439_);
v___x_2441_ = v___x_2430_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v___x_2439_);
v___x_2441_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
return v___x_2441_;
}
}
}
}
else
{
lean_object* v___x_2452_; 
lean_dec(v_a_2428_);
if (v_isShared_2431_ == 0)
{
lean_ctor_set(v___x_2430_, 0, v_c_2244_);
v___x_2452_ = v___x_2430_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v_c_2244_);
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
else
{
lean_dec_ref(v_c_2244_);
return v___x_2427_;
}
}
default: 
{
lean_object* v___x_2455_; lean_object* v___x_2456_; 
lean_dec_ref(v_c_2244_);
v___x_2455_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___closed__1);
v___x_2456_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__4(v___x_2455_, v_a_2245_, v_a_2246_, v_a_2247_, v_a_2248_, v_a_2249_);
return v___x_2456_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___boxed(lean_object* v_c_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_){
_start:
{
lean_object* v_res_2464_; 
v_res_2464_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_c_2457_, v_a_2458_, v_a_2459_, v_a_2460_, v_a_2461_, v_a_2462_);
return v_res_2464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3(uint8_t v___x_2465_, lean_object* v_discr_2466_, uint8_t v___x_2467_, size_t v_sz_2468_, size_t v_i_2469_, lean_object* v_bs_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_){
_start:
{
uint8_t v___x_2477_; 
v___x_2477_ = lean_usize_dec_lt(v_i_2469_, v_sz_2468_);
if (v___x_2477_ == 0)
{
lean_object* v___x_2478_; 
lean_dec(v___y_2475_);
lean_dec_ref(v___y_2474_);
lean_dec(v___y_2473_);
lean_dec_ref(v___y_2472_);
lean_dec_ref(v___y_2471_);
lean_dec(v_discr_2466_);
v___x_2478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2478_, 0, v_bs_2470_);
return v___x_2478_;
}
else
{
lean_object* v___f_2479_; lean_object* v_v_2480_; lean_object* v___x_2481_; lean_object* v_bs_x27_2482_; lean_object* v_a_2484_; lean_object* v___y_2490_; lean_object* v___x_2500_; 
v___f_2479_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse___boxed), 7, 0);
v_v_2480_ = lean_array_uget(v_bs_2470_, v_i_2469_);
v___x_2481_ = lean_unsigned_to_nat(0u);
v_bs_x27_2482_ = lean_array_uset(v_bs_2470_, v_i_2469_, v___x_2481_);
lean_inc(v___y_2475_);
lean_inc_ref(v___y_2474_);
lean_inc(v___y_2473_);
lean_inc_ref(v___y_2472_);
lean_inc_ref(v___y_2471_);
v___x_2500_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D_go_spec__0___redArg(v_v_2480_, v___f_2479_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_);
if (lean_obj_tag(v___x_2500_) == 0)
{
lean_object* v_a_2501_; 
v_a_2501_ = lean_ctor_get(v___x_2500_, 0);
lean_inc(v_a_2501_);
if (lean_obj_tag(v_a_2501_) == 1)
{
lean_object* v_info_2502_; lean_object* v_code_2503_; uint8_t v___y_2505_; uint8_t v___x_2517_; 
v_info_2502_ = lean_ctor_get(v_a_2501_, 0);
v_code_2503_ = lean_ctor_get(v_a_2501_, 1);
v___x_2517_ = l_Lean_Compiler_LCNF_CtorInfo_isScalar(v_info_2502_);
if (v___x_2517_ == 0)
{
v___y_2505_ = v___x_2467_;
goto v___jp_2504_;
}
else
{
v___y_2505_ = v___x_2517_;
goto v___jp_2504_;
}
v___jp_2504_:
{
if (v___y_2505_ == 0)
{
if (v___x_2465_ == 0)
{
lean_object* v___x_2506_; 
lean_dec_ref(v___x_2500_);
lean_inc(v___y_2475_);
lean_inc_ref(v___y_2474_);
lean_inc(v___y_2473_);
lean_inc_ref(v___y_2472_);
lean_inc_ref(v___y_2471_);
lean_inc_ref(v_code_2503_);
lean_inc_ref(v_info_2502_);
lean_inc(v_discr_2466_);
v___x_2506_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_D(v_discr_2466_, v_info_2502_, v_code_2503_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_);
if (lean_obj_tag(v___x_2506_) == 0)
{
lean_object* v_a_2507_; lean_object* v___x_2508_; 
v_a_2507_ = lean_ctor_get(v___x_2506_, 0);
lean_inc(v_a_2507_);
lean_dec_ref(v___x_2506_);
v___x_2508_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_2501_, v_a_2507_);
v_a_2484_ = v___x_2508_;
goto v___jp_2483_;
}
else
{
lean_object* v_a_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2516_; 
lean_dec_ref(v_a_2501_);
lean_dec_ref(v_bs_x27_2482_);
lean_dec(v___y_2475_);
lean_dec_ref(v___y_2474_);
lean_dec(v___y_2473_);
lean_dec_ref(v___y_2472_);
lean_dec_ref(v___y_2471_);
lean_dec(v_discr_2466_);
v_a_2509_ = lean_ctor_get(v___x_2506_, 0);
v_isSharedCheck_2516_ = !lean_is_exclusive(v___x_2506_);
if (v_isSharedCheck_2516_ == 0)
{
v___x_2511_ = v___x_2506_;
v_isShared_2512_ = v_isSharedCheck_2516_;
goto v_resetjp_2510_;
}
else
{
lean_inc(v_a_2509_);
lean_dec(v___x_2506_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2516_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
lean_object* v___x_2514_; 
if (v_isShared_2512_ == 0)
{
v___x_2514_ = v___x_2511_;
goto v_reusejp_2513_;
}
else
{
lean_object* v_reuseFailAlloc_2515_; 
v_reuseFailAlloc_2515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2515_, 0, v_a_2509_);
v___x_2514_ = v_reuseFailAlloc_2515_;
goto v_reusejp_2513_;
}
v_reusejp_2513_:
{
return v___x_2514_;
}
}
}
}
else
{
lean_dec_ref(v_a_2501_);
v___y_2490_ = v___x_2500_;
goto v___jp_2489_;
}
}
else
{
lean_dec_ref(v_a_2501_);
v___y_2490_ = v___x_2500_;
goto v___jp_2489_;
}
}
}
else
{
lean_dec_ref(v_a_2501_);
v___y_2490_ = v___x_2500_;
goto v___jp_2489_;
}
}
else
{
v___y_2490_ = v___x_2500_;
goto v___jp_2489_;
}
v___jp_2483_:
{
size_t v___x_2485_; size_t v___x_2486_; lean_object* v___x_2487_; 
v___x_2485_ = ((size_t)1ULL);
v___x_2486_ = lean_usize_add(v_i_2469_, v___x_2485_);
v___x_2487_ = lean_array_uset(v_bs_x27_2482_, v_i_2469_, v_a_2484_);
v_i_2469_ = v___x_2486_;
v_bs_2470_ = v___x_2487_;
goto _start;
}
v___jp_2489_:
{
if (lean_obj_tag(v___y_2490_) == 0)
{
lean_object* v_a_2491_; 
v_a_2491_ = lean_ctor_get(v___y_2490_, 0);
lean_inc(v_a_2491_);
lean_dec_ref(v___y_2490_);
v_a_2484_ = v_a_2491_;
goto v___jp_2483_;
}
else
{
lean_object* v_a_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2499_; 
lean_dec_ref(v_bs_x27_2482_);
lean_dec(v___y_2475_);
lean_dec_ref(v___y_2474_);
lean_dec(v___y_2473_);
lean_dec_ref(v___y_2472_);
lean_dec_ref(v___y_2471_);
lean_dec(v_discr_2466_);
v_a_2492_ = lean_ctor_get(v___y_2490_, 0);
v_isSharedCheck_2499_ = !lean_is_exclusive(v___y_2490_);
if (v_isSharedCheck_2499_ == 0)
{
v___x_2494_ = v___y_2490_;
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_a_2492_);
lean_dec(v___y_2490_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v___x_2497_; 
if (v_isShared_2495_ == 0)
{
v___x_2497_ = v___x_2494_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v_a_2492_);
v___x_2497_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
return v___x_2497_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3___boxed(lean_object* v___x_2518_, lean_object* v_discr_2519_, lean_object* v___x_2520_, lean_object* v_sz_2521_, lean_object* v_i_2522_, lean_object* v_bs_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_){
_start:
{
uint8_t v___x_6502__boxed_2530_; uint8_t v___x_6504__boxed_2531_; size_t v_sz_boxed_2532_; size_t v_i_boxed_2533_; lean_object* v_res_2534_; 
v___x_6502__boxed_2530_ = lean_unbox(v___x_2518_);
v___x_6504__boxed_2531_ = lean_unbox(v___x_2520_);
v_sz_boxed_2532_ = lean_unbox_usize(v_sz_2521_);
lean_dec(v_sz_2521_);
v_i_boxed_2533_ = lean_unbox_usize(v_i_2522_);
lean_dec(v_i_2522_);
v_res_2534_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__3(v___x_6502__boxed_2530_, v_discr_2519_, v___x_6504__boxed_2531_, v_sz_boxed_2532_, v_i_boxed_2533_, v_bs_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_);
return v_res_2534_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0(lean_object* v_00_u03b2_2535_, lean_object* v_x_2536_, lean_object* v_x_2537_){
_start:
{
uint8_t v___x_2538_; 
v___x_2538_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___redArg(v_x_2536_, v_x_2537_);
return v___x_2538_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0___boxed(lean_object* v_00_u03b2_2539_, lean_object* v_x_2540_, lean_object* v_x_2541_){
_start:
{
uint8_t v_res_2542_; lean_object* v_r_2543_; 
v_res_2542_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0(v_00_u03b2_2539_, v_x_2540_, v_x_2541_);
lean_dec(v_x_2541_);
v_r_2543_ = lean_box(v_res_2542_);
return v_r_2543_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1(lean_object* v_00_u03b2_2544_, lean_object* v_m_2545_, lean_object* v_a_2546_, lean_object* v_fallback_2547_){
_start:
{
lean_object* v___x_2548_; 
v___x_2548_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___redArg(v_m_2545_, v_a_2546_, v_fallback_2547_);
return v___x_2548_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1___boxed(lean_object* v_00_u03b2_2549_, lean_object* v_m_2550_, lean_object* v_a_2551_, lean_object* v_fallback_2552_){
_start:
{
lean_object* v_res_2553_; 
v_res_2553_ = l_Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1(v_00_u03b2_2549_, v_m_2550_, v_a_2551_, v_fallback_2552_);
lean_dec(v_fallback_2552_);
lean_dec(v_a_2551_);
lean_dec_ref(v_m_2550_);
return v_res_2553_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2(lean_object* v_00_u03b2_2554_, lean_object* v_x_2555_, lean_object* v_x_2556_, lean_object* v_x_2557_){
_start:
{
lean_object* v___x_2558_; 
v___x_2558_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(v_x_2555_, v_x_2556_, v_x_2557_);
return v___x_2558_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0(lean_object* v_00_u03b2_2559_, lean_object* v_x_2560_, size_t v_x_2561_, lean_object* v_x_2562_){
_start:
{
uint8_t v___x_2563_; 
v___x_2563_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___redArg(v_x_2560_, v_x_2561_, v_x_2562_);
return v___x_2563_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2564_, lean_object* v_x_2565_, lean_object* v_x_2566_, lean_object* v_x_2567_){
_start:
{
size_t v_x_7080__boxed_2568_; uint8_t v_res_2569_; lean_object* v_r_2570_; 
v_x_7080__boxed_2568_ = lean_unbox_usize(v_x_2566_);
lean_dec(v_x_2566_);
v_res_2569_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0(v_00_u03b2_2564_, v_x_2565_, v_x_7080__boxed_2568_, v_x_2567_);
lean_dec(v_x_2567_);
v_r_2570_ = lean_box(v_res_2569_);
return v_r_2570_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2(lean_object* v_00_u03b2_2571_, lean_object* v_a_2572_, lean_object* v_fallback_2573_, lean_object* v_x_2574_){
_start:
{
lean_object* v___x_2575_; 
v___x_2575_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___redArg(v_a_2572_, v_fallback_2573_, v_x_2574_);
return v___x_2575_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2576_, lean_object* v_a_2577_, lean_object* v_fallback_2578_, lean_object* v_x_2579_){
_start:
{
lean_object* v_res_2580_; 
v_res_2580_ = l_Std_DHashMap_Internal_AssocList_getD___at___00Std_DHashMap_Internal_Raw_u2080_Const_getD___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__1_spec__2(v_00_u03b2_2576_, v_a_2577_, v_fallback_2578_, v_x_2579_);
lean_dec(v_x_2579_);
lean_dec(v_fallback_2578_);
lean_dec(v_a_2577_);
return v_res_2580_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4(lean_object* v_00_u03b2_2581_, lean_object* v_x_2582_, size_t v_x_2583_, size_t v_x_2584_, lean_object* v_x_2585_, lean_object* v_x_2586_){
_start:
{
lean_object* v___x_2587_; 
v___x_2587_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___redArg(v_x_2582_, v_x_2583_, v_x_2584_, v_x_2585_, v_x_2586_);
return v___x_2587_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4___boxed(lean_object* v_00_u03b2_2588_, lean_object* v_x_2589_, lean_object* v_x_2590_, lean_object* v_x_2591_, lean_object* v_x_2592_, lean_object* v_x_2593_){
_start:
{
size_t v_x_7096__boxed_2594_; size_t v_x_7097__boxed_2595_; lean_object* v_res_2596_; 
v_x_7096__boxed_2594_ = lean_unbox_usize(v_x_2590_);
lean_dec(v_x_2590_);
v_x_7097__boxed_2595_ = lean_unbox_usize(v_x_2591_);
lean_dec(v_x_2591_);
v_res_2596_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4(v_00_u03b2_2588_, v_x_2589_, v_x_7096__boxed_2594_, v_x_7097__boxed_2595_, v_x_2592_, v_x_2593_);
return v_res_2596_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_2597_, lean_object* v_keys_2598_, lean_object* v_vals_2599_, lean_object* v_heq_2600_, lean_object* v_i_2601_, lean_object* v_k_2602_){
_start:
{
uint8_t v___x_2603_; 
v___x_2603_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___redArg(v_keys_2598_, v_i_2601_, v_k_2602_);
return v___x_2603_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2604_, lean_object* v_keys_2605_, lean_object* v_vals_2606_, lean_object* v_heq_2607_, lean_object* v_i_2608_, lean_object* v_k_2609_){
_start:
{
uint8_t v_res_2610_; lean_object* v_r_2611_; 
v_res_2610_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__0_spec__0_spec__2(v_00_u03b2_2604_, v_keys_2605_, v_vals_2606_, v_heq_2607_, v_i_2608_, v_k_2609_);
lean_dec(v_k_2609_);
lean_dec_ref(v_vals_2606_);
lean_dec_ref(v_keys_2605_);
v_r_2611_ = lean_box(v_res_2610_);
return v_r_2611_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_2612_, lean_object* v_n_2613_, lean_object* v_k_2614_, lean_object* v_v_2615_){
_start:
{
lean_object* v___x_2616_; 
v___x_2616_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7___redArg(v_n_2613_, v_k_2614_, v_v_2615_);
return v___x_2616_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_2617_, size_t v_depth_2618_, lean_object* v_keys_2619_, lean_object* v_vals_2620_, lean_object* v_heq_2621_, lean_object* v_i_2622_, lean_object* v_entries_2623_){
_start:
{
lean_object* v___x_2624_; 
v___x_2624_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___redArg(v_depth_2618_, v_keys_2619_, v_vals_2620_, v_i_2622_, v_entries_2623_);
return v___x_2624_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03b2_2625_, lean_object* v_depth_2626_, lean_object* v_keys_2627_, lean_object* v_vals_2628_, lean_object* v_heq_2629_, lean_object* v_i_2630_, lean_object* v_entries_2631_){
_start:
{
size_t v_depth_boxed_2632_; lean_object* v_res_2633_; 
v_depth_boxed_2632_ = lean_unbox_usize(v_depth_2626_);
lean_dec(v_depth_2626_);
v_res_2633_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__8(v_00_u03b2_2625_, v_depth_boxed_2632_, v_keys_2627_, v_vals_2628_, v_heq_2629_, v_i_2630_, v_entries_2631_);
lean_dec_ref(v_vals_2628_);
lean_dec_ref(v_keys_2627_);
return v_res_2633_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9(lean_object* v_00_u03b2_2634_, lean_object* v_x_2635_, lean_object* v_x_2636_, lean_object* v_x_2637_, lean_object* v_x_2638_){
_start:
{
lean_object* v___x_2639_; 
v___x_2639_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2_spec__4_spec__7_spec__9___redArg(v_x_2635_, v_x_2636_, v_x_2637_, v_x_2638_);
return v___x_2639_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(lean_object* v_msg_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_){
_start:
{
lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v_toApplicative_2651_; lean_object* v___x_2653_; uint8_t v_isShared_2654_; uint8_t v_isSharedCheck_2713_; 
v___x_2649_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__0);
v___x_2650_ = l_ReaderT_instMonad___redArg(v___x_2649_);
v_toApplicative_2651_ = lean_ctor_get(v___x_2650_, 0);
v_isSharedCheck_2713_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2713_ == 0)
{
lean_object* v_unused_2714_; 
v_unused_2714_ = lean_ctor_get(v___x_2650_, 1);
lean_dec(v_unused_2714_);
v___x_2653_ = v___x_2650_;
v_isShared_2654_ = v_isSharedCheck_2713_;
goto v_resetjp_2652_;
}
else
{
lean_inc(v_toApplicative_2651_);
lean_dec(v___x_2650_);
v___x_2653_ = lean_box(0);
v_isShared_2654_ = v_isSharedCheck_2713_;
goto v_resetjp_2652_;
}
v_resetjp_2652_:
{
lean_object* v_toFunctor_2655_; lean_object* v_toSeq_2656_; lean_object* v_toSeqLeft_2657_; lean_object* v_toSeqRight_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2711_; 
v_toFunctor_2655_ = lean_ctor_get(v_toApplicative_2651_, 0);
v_toSeq_2656_ = lean_ctor_get(v_toApplicative_2651_, 2);
v_toSeqLeft_2657_ = lean_ctor_get(v_toApplicative_2651_, 3);
v_toSeqRight_2658_ = lean_ctor_get(v_toApplicative_2651_, 4);
v_isSharedCheck_2711_ = !lean_is_exclusive(v_toApplicative_2651_);
if (v_isSharedCheck_2711_ == 0)
{
lean_object* v_unused_2712_; 
v_unused_2712_ = lean_ctor_get(v_toApplicative_2651_, 1);
lean_dec(v_unused_2712_);
v___x_2660_ = v_toApplicative_2651_;
v_isShared_2661_ = v_isSharedCheck_2711_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_toSeqRight_2658_);
lean_inc(v_toSeqLeft_2657_);
lean_inc(v_toSeq_2656_);
lean_inc(v_toFunctor_2655_);
lean_dec(v_toApplicative_2651_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2711_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v___f_2662_; lean_object* v___f_2663_; lean_object* v___f_2664_; lean_object* v___f_2665_; lean_object* v___x_2666_; lean_object* v___f_2667_; lean_object* v___f_2668_; lean_object* v___f_2669_; lean_object* v___x_2671_; 
v___f_2662_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__1));
v___f_2663_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go_spec__3___closed__2));
lean_inc_ref(v_toFunctor_2655_);
v___f_2664_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2664_, 0, v_toFunctor_2655_);
v___f_2665_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2665_, 0, v_toFunctor_2655_);
v___x_2666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2666_, 0, v___f_2664_);
lean_ctor_set(v___x_2666_, 1, v___f_2665_);
v___f_2667_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2667_, 0, v_toSeqRight_2658_);
v___f_2668_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2668_, 0, v_toSeqLeft_2657_);
v___f_2669_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2669_, 0, v_toSeq_2656_);
if (v_isShared_2661_ == 0)
{
lean_ctor_set(v___x_2660_, 4, v___f_2667_);
lean_ctor_set(v___x_2660_, 3, v___f_2668_);
lean_ctor_set(v___x_2660_, 2, v___f_2669_);
lean_ctor_set(v___x_2660_, 1, v___f_2662_);
lean_ctor_set(v___x_2660_, 0, v___x_2666_);
v___x_2671_ = v___x_2660_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v___x_2666_);
lean_ctor_set(v_reuseFailAlloc_2710_, 1, v___f_2662_);
lean_ctor_set(v_reuseFailAlloc_2710_, 2, v___f_2669_);
lean_ctor_set(v_reuseFailAlloc_2710_, 3, v___f_2668_);
lean_ctor_set(v_reuseFailAlloc_2710_, 4, v___f_2667_);
v___x_2671_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
lean_object* v___x_2673_; 
if (v_isShared_2654_ == 0)
{
lean_ctor_set(v___x_2653_, 1, v___f_2663_);
lean_ctor_set(v___x_2653_, 0, v___x_2671_);
v___x_2673_ = v___x_2653_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v___x_2671_);
lean_ctor_set(v_reuseFailAlloc_2709_, 1, v___f_2663_);
v___x_2673_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
lean_object* v___x_2674_; lean_object* v_toApplicative_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2707_; 
v___x_2674_ = l_ReaderT_instMonad___redArg(v___x_2673_);
v_toApplicative_2675_ = lean_ctor_get(v___x_2674_, 0);
v_isSharedCheck_2707_ = !lean_is_exclusive(v___x_2674_);
if (v_isSharedCheck_2707_ == 0)
{
lean_object* v_unused_2708_; 
v_unused_2708_ = lean_ctor_get(v___x_2674_, 1);
lean_dec(v_unused_2708_);
v___x_2677_ = v___x_2674_;
v_isShared_2678_ = v_isSharedCheck_2707_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_toApplicative_2675_);
lean_dec(v___x_2674_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2707_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v_toFunctor_2679_; lean_object* v_toSeq_2680_; lean_object* v_toSeqLeft_2681_; lean_object* v_toSeqRight_2682_; lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2705_; 
v_toFunctor_2679_ = lean_ctor_get(v_toApplicative_2675_, 0);
v_toSeq_2680_ = lean_ctor_get(v_toApplicative_2675_, 2);
v_toSeqLeft_2681_ = lean_ctor_get(v_toApplicative_2675_, 3);
v_toSeqRight_2682_ = lean_ctor_get(v_toApplicative_2675_, 4);
v_isSharedCheck_2705_ = !lean_is_exclusive(v_toApplicative_2675_);
if (v_isSharedCheck_2705_ == 0)
{
lean_object* v_unused_2706_; 
v_unused_2706_ = lean_ctor_get(v_toApplicative_2675_, 1);
lean_dec(v_unused_2706_);
v___x_2684_ = v_toApplicative_2675_;
v_isShared_2685_ = v_isSharedCheck_2705_;
goto v_resetjp_2683_;
}
else
{
lean_inc(v_toSeqRight_2682_);
lean_inc(v_toSeqLeft_2681_);
lean_inc(v_toSeq_2680_);
lean_inc(v_toFunctor_2679_);
lean_dec(v_toApplicative_2675_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2705_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
lean_object* v___f_2686_; lean_object* v___f_2687_; lean_object* v___f_2688_; lean_object* v___f_2689_; lean_object* v___x_2690_; lean_object* v___f_2691_; lean_object* v___f_2692_; lean_object* v___f_2693_; lean_object* v___x_2695_; 
v___f_2686_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__0));
v___f_2687_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___closed__1));
lean_inc_ref(v_toFunctor_2679_);
v___f_2688_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2688_, 0, v_toFunctor_2679_);
v___f_2689_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2689_, 0, v_toFunctor_2679_);
v___x_2690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2690_, 0, v___f_2688_);
lean_ctor_set(v___x_2690_, 1, v___f_2689_);
v___f_2691_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2691_, 0, v_toSeqRight_2682_);
v___f_2692_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2692_, 0, v_toSeqLeft_2681_);
v___f_2693_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2693_, 0, v_toSeq_2680_);
if (v_isShared_2685_ == 0)
{
lean_ctor_set(v___x_2684_, 4, v___f_2691_);
lean_ctor_set(v___x_2684_, 3, v___f_2692_);
lean_ctor_set(v___x_2684_, 2, v___f_2693_);
lean_ctor_set(v___x_2684_, 1, v___f_2686_);
lean_ctor_set(v___x_2684_, 0, v___x_2690_);
v___x_2695_ = v___x_2684_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v___x_2690_);
lean_ctor_set(v_reuseFailAlloc_2704_, 1, v___f_2686_);
lean_ctor_set(v_reuseFailAlloc_2704_, 2, v___f_2693_);
lean_ctor_set(v_reuseFailAlloc_2704_, 3, v___f_2692_);
lean_ctor_set(v_reuseFailAlloc_2704_, 4, v___f_2691_);
v___x_2695_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
lean_object* v___x_2697_; 
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 1, v___f_2687_);
lean_ctor_set(v___x_2677_, 0, v___x_2695_);
v___x_2697_ = v___x_2677_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2703_; 
v_reuseFailAlloc_2703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2703_, 0, v___x_2695_);
lean_ctor_set(v_reuseFailAlloc_2703_, 1, v___f_2687_);
v___x_2697_ = v_reuseFailAlloc_2703_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2659__overap_2701_; lean_object* v___x_2702_; 
v___x_2698_ = l_ReaderT_instMonad___redArg(v___x_2697_);
v___x_2699_ = lean_box(0);
v___x_2700_ = l_instInhabitedOfMonad___redArg(v___x_2698_, v___x_2699_);
v___x_2659__overap_2701_ = lean_panic_fn(v___x_2700_, v_msg_2642_);
v___x_2702_ = lean_apply_6(v___x_2659__overap_2701_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_, v___y_2647_, lean_box(0));
return v___x_2702_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1___boxed(lean_object* v_msg_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_){
_start:
{
lean_object* v_res_2722_; 
v_res_2722_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(v_msg_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_);
return v_res_2722_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1(void){
_start:
{
lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; 
v___x_2724_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__2));
v___x_2725_ = lean_unsigned_to_nat(61u);
v___x_2726_ = lean_unsigned_to_nat(304u);
v___x_2727_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__0));
v___x_2728_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_S_go___closed__4));
v___x_2729_ = l_mkPanicMessageWithDecl(v___x_2728_, v___x_2727_, v___x_2726_, v___x_2725_, v___x_2724_);
return v___x_2729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(lean_object* v_c_2730_, lean_object* v_a_2731_, lean_object* v_a_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_, lean_object* v_a_2735_){
_start:
{
switch(lean_obj_tag(v_c_2730_))
{
case 0:
{
lean_object* v_decl_2737_; lean_object* v_value_2738_; 
v_decl_2737_ = lean_ctor_get(v_c_2730_, 0);
v_value_2738_ = lean_ctor_get(v_decl_2737_, 3);
if (lean_obj_tag(v_value_2738_) == 11)
{
lean_object* v_k_2739_; lean_object* v_var_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; 
lean_inc_ref(v_value_2738_);
v_k_2739_ = lean_ctor_get(v_c_2730_, 1);
lean_inc_ref(v_k_2739_);
lean_dec_ref(v_c_2730_);
v_var_2740_ = lean_ctor_get(v_value_2738_, 1);
lean_inc(v_var_2740_);
lean_dec_ref(v_value_2738_);
v___x_2741_ = lean_st_ref_take(v_a_2731_);
v___x_2742_ = lean_box(0);
v___x_2743_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse_spec__2___redArg(v___x_2741_, v_var_2740_, v___x_2742_);
v___x_2744_ = lean_st_ref_set(v_a_2731_, v___x_2743_);
v_c_2730_ = v_k_2739_;
goto _start;
}
else
{
lean_object* v_k_2746_; 
v_k_2746_ = lean_ctor_get(v_c_2730_, 1);
lean_inc_ref(v_k_2746_);
lean_dec_ref(v_c_2730_);
v_c_2730_ = v_k_2746_;
goto _start;
}
}
case 2:
{
lean_object* v_decl_2748_; lean_object* v_k_2749_; lean_object* v_value_2750_; lean_object* v___x_2751_; 
v_decl_2748_ = lean_ctor_get(v_c_2730_, 0);
lean_inc_ref(v_decl_2748_);
v_k_2749_ = lean_ctor_get(v_c_2730_, 1);
lean_inc_ref(v_k_2749_);
lean_dec_ref(v_c_2730_);
v_value_2750_ = lean_ctor_get(v_decl_2748_, 4);
lean_inc_ref(v_value_2750_);
lean_dec_ref(v_decl_2748_);
lean_inc(v_a_2735_);
lean_inc_ref(v_a_2734_);
lean_inc(v_a_2733_);
lean_inc_ref(v_a_2732_);
lean_inc(v_a_2731_);
v___x_2751_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v_value_2750_, v_a_2731_, v_a_2732_, v_a_2733_, v_a_2734_, v_a_2735_);
if (lean_obj_tag(v___x_2751_) == 0)
{
lean_dec_ref(v___x_2751_);
v_c_2730_ = v_k_2749_;
goto _start;
}
else
{
lean_dec_ref(v_k_2749_);
lean_dec(v_a_2735_);
lean_dec_ref(v_a_2734_);
lean_dec(v_a_2733_);
lean_dec_ref(v_a_2732_);
lean_dec(v_a_2731_);
return v___x_2751_;
}
}
case 3:
{
lean_object* v___x_2753_; lean_object* v___x_2754_; 
lean_dec_ref(v_c_2730_);
lean_dec(v_a_2735_);
lean_dec_ref(v_a_2734_);
lean_dec(v_a_2733_);
lean_dec_ref(v_a_2732_);
lean_dec(v_a_2731_);
v___x_2753_ = lean_box(0);
v___x_2754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2754_, 0, v___x_2753_);
return v___x_2754_;
}
case 4:
{
lean_object* v_cases_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2777_; 
v_cases_2755_ = lean_ctor_get(v_c_2730_, 0);
v_isSharedCheck_2777_ = !lean_is_exclusive(v_c_2730_);
if (v_isSharedCheck_2777_ == 0)
{
v___x_2757_ = v_c_2730_;
v_isShared_2758_ = v_isSharedCheck_2777_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_cases_2755_);
lean_dec(v_c_2730_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2777_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
lean_object* v_alts_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; uint8_t v___x_2763_; 
v_alts_2759_ = lean_ctor_get(v_cases_2755_, 3);
lean_inc_ref(v_alts_2759_);
lean_dec_ref(v_cases_2755_);
v___x_2760_ = lean_unsigned_to_nat(0u);
v___x_2761_ = lean_array_get_size(v_alts_2759_);
v___x_2762_ = lean_box(0);
v___x_2763_ = lean_nat_dec_lt(v___x_2760_, v___x_2761_);
if (v___x_2763_ == 0)
{
lean_object* v___x_2765_; 
lean_dec_ref(v_alts_2759_);
lean_dec(v_a_2735_);
lean_dec_ref(v_a_2734_);
lean_dec(v_a_2733_);
lean_dec_ref(v_a_2732_);
lean_dec(v_a_2731_);
if (v_isShared_2758_ == 0)
{
lean_ctor_set_tag(v___x_2757_, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2762_);
v___x_2765_ = v___x_2757_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2766_; 
v_reuseFailAlloc_2766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2766_, 0, v___x_2762_);
v___x_2765_ = v_reuseFailAlloc_2766_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
return v___x_2765_;
}
}
else
{
uint8_t v___x_2767_; 
v___x_2767_ = lean_nat_dec_le(v___x_2761_, v___x_2761_);
if (v___x_2767_ == 0)
{
if (v___x_2763_ == 0)
{
lean_object* v___x_2769_; 
lean_dec_ref(v_alts_2759_);
lean_dec(v_a_2735_);
lean_dec_ref(v_a_2734_);
lean_dec(v_a_2733_);
lean_dec_ref(v_a_2732_);
lean_dec(v_a_2731_);
if (v_isShared_2758_ == 0)
{
lean_ctor_set_tag(v___x_2757_, 0);
lean_ctor_set(v___x_2757_, 0, v___x_2762_);
v___x_2769_ = v___x_2757_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v___x_2762_);
v___x_2769_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
return v___x_2769_;
}
}
else
{
size_t v___x_2771_; size_t v___x_2772_; lean_object* v___x_2773_; 
lean_del_object(v___x_2757_);
v___x_2771_ = ((size_t)0ULL);
v___x_2772_ = lean_usize_of_nat(v___x_2761_);
v___x_2773_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(v_alts_2759_, v___x_2771_, v___x_2772_, v___x_2762_, v_a_2731_, v_a_2732_, v_a_2733_, v_a_2734_, v_a_2735_);
lean_dec_ref(v_alts_2759_);
return v___x_2773_;
}
}
else
{
size_t v___x_2774_; size_t v___x_2775_; lean_object* v___x_2776_; 
lean_del_object(v___x_2757_);
v___x_2774_ = ((size_t)0ULL);
v___x_2775_ = lean_usize_of_nat(v___x_2761_);
v___x_2776_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(v_alts_2759_, v___x_2774_, v___x_2775_, v___x_2762_, v_a_2731_, v_a_2732_, v_a_2733_, v_a_2734_, v_a_2735_);
lean_dec_ref(v_alts_2759_);
return v___x_2776_;
}
}
}
}
case 5:
{
lean_object* v___x_2779_; uint8_t v_isShared_2780_; uint8_t v_isSharedCheck_2785_; 
lean_dec(v_a_2735_);
lean_dec_ref(v_a_2734_);
lean_dec(v_a_2733_);
lean_dec_ref(v_a_2732_);
lean_dec(v_a_2731_);
v_isSharedCheck_2785_ = !lean_is_exclusive(v_c_2730_);
if (v_isSharedCheck_2785_ == 0)
{
lean_object* v_unused_2786_; 
v_unused_2786_ = lean_ctor_get(v_c_2730_, 0);
lean_dec(v_unused_2786_);
v___x_2779_ = v_c_2730_;
v_isShared_2780_ = v_isSharedCheck_2785_;
goto v_resetjp_2778_;
}
else
{
lean_dec(v_c_2730_);
v___x_2779_ = lean_box(0);
v_isShared_2780_ = v_isSharedCheck_2785_;
goto v_resetjp_2778_;
}
v_resetjp_2778_:
{
lean_object* v___x_2781_; lean_object* v___x_2783_; 
v___x_2781_ = lean_box(0);
if (v_isShared_2780_ == 0)
{
lean_ctor_set_tag(v___x_2779_, 0);
lean_ctor_set(v___x_2779_, 0, v___x_2781_);
v___x_2783_ = v___x_2779_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2784_; 
v_reuseFailAlloc_2784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2784_, 0, v___x_2781_);
v___x_2783_ = v_reuseFailAlloc_2784_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
return v___x_2783_;
}
}
}
case 6:
{
lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2794_; 
lean_dec(v_a_2735_);
lean_dec_ref(v_a_2734_);
lean_dec(v_a_2733_);
lean_dec_ref(v_a_2732_);
lean_dec(v_a_2731_);
v_isSharedCheck_2794_ = !lean_is_exclusive(v_c_2730_);
if (v_isSharedCheck_2794_ == 0)
{
lean_object* v_unused_2795_; 
v_unused_2795_ = lean_ctor_get(v_c_2730_, 0);
lean_dec(v_unused_2795_);
v___x_2788_ = v_c_2730_;
v_isShared_2789_ = v_isSharedCheck_2794_;
goto v_resetjp_2787_;
}
else
{
lean_dec(v_c_2730_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2794_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___x_2790_; lean_object* v___x_2792_; 
v___x_2790_ = lean_box(0);
if (v_isShared_2789_ == 0)
{
lean_ctor_set_tag(v___x_2788_, 0);
lean_ctor_set(v___x_2788_, 0, v___x_2790_);
v___x_2792_ = v___x_2788_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v___x_2790_);
v___x_2792_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
return v___x_2792_;
}
}
}
case 8:
{
lean_object* v_k_2796_; 
v_k_2796_ = lean_ctor_get(v_c_2730_, 3);
lean_inc_ref(v_k_2796_);
lean_dec_ref(v_c_2730_);
v_c_2730_ = v_k_2796_;
goto _start;
}
case 9:
{
lean_object* v_k_2798_; 
v_k_2798_ = lean_ctor_get(v_c_2730_, 5);
lean_inc_ref(v_k_2798_);
lean_dec_ref(v_c_2730_);
v_c_2730_ = v_k_2798_;
goto _start;
}
default: 
{
lean_object* v___x_2800_; lean_object* v___x_2801_; 
lean_dec_ref(v_c_2730_);
v___x_2800_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___closed__1);
v___x_2801_ = l_panic___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__1(v___x_2800_, v_a_2731_, v_a_2732_, v_a_2733_, v_a_2734_, v_a_2735_);
return v___x_2801_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(lean_object* v_as_2802_, size_t v_i_2803_, size_t v_stop_2804_, lean_object* v_b_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_){
_start:
{
lean_object* v___y_2813_; uint8_t v___x_2819_; 
v___x_2819_ = lean_usize_dec_eq(v_i_2803_, v_stop_2804_);
if (v___x_2819_ == 0)
{
lean_object* v___x_2820_; 
v___x_2820_ = lean_array_uget_borrowed(v_as_2802_, v_i_2803_);
switch(lean_obj_tag(v___x_2820_))
{
case 0:
{
lean_object* v_code_2821_; 
v_code_2821_ = lean_ctor_get(v___x_2820_, 2);
lean_inc_ref(v_code_2821_);
v___y_2813_ = v_code_2821_;
goto v___jp_2812_;
}
case 1:
{
lean_object* v_code_2822_; 
v_code_2822_ = lean_ctor_get(v___x_2820_, 1);
lean_inc_ref(v_code_2822_);
v___y_2813_ = v_code_2822_;
goto v___jp_2812_;
}
default: 
{
lean_object* v_code_2823_; 
v_code_2823_ = lean_ctor_get(v___x_2820_, 0);
lean_inc_ref(v_code_2823_);
v___y_2813_ = v_code_2823_;
goto v___jp_2812_;
}
}
}
else
{
lean_object* v___x_2824_; 
lean_dec(v___y_2810_);
lean_dec_ref(v___y_2809_);
lean_dec(v___y_2808_);
lean_dec_ref(v___y_2807_);
lean_dec(v___y_2806_);
v___x_2824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2824_, 0, v_b_2805_);
return v___x_2824_;
}
v___jp_2812_:
{
lean_object* v___x_2814_; 
lean_inc(v___y_2810_);
lean_inc_ref(v___y_2809_);
lean_inc(v___y_2808_);
lean_inc_ref(v___y_2807_);
lean_inc(v___y_2806_);
v___x_2814_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v___y_2813_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_, v___y_2810_);
if (lean_obj_tag(v___x_2814_) == 0)
{
lean_object* v_a_2815_; size_t v___x_2816_; size_t v___x_2817_; 
v_a_2815_ = lean_ctor_get(v___x_2814_, 0);
lean_inc(v_a_2815_);
lean_dec_ref(v___x_2814_);
v___x_2816_ = ((size_t)1ULL);
v___x_2817_ = lean_usize_add(v_i_2803_, v___x_2816_);
v_i_2803_ = v___x_2817_;
v_b_2805_ = v_a_2815_;
goto _start;
}
else
{
lean_dec(v___y_2810_);
lean_dec_ref(v___y_2809_);
lean_dec(v___y_2808_);
lean_dec_ref(v___y_2807_);
lean_dec(v___y_2806_);
return v___x_2814_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0___boxed(lean_object* v_as_2825_, lean_object* v_i_2826_, lean_object* v_stop_2827_, lean_object* v_b_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_){
_start:
{
size_t v_i_boxed_2835_; size_t v_stop_boxed_2836_; lean_object* v_res_2837_; 
v_i_boxed_2835_ = lean_unbox_usize(v_i_2826_);
lean_dec(v_i_2826_);
v_stop_boxed_2836_ = lean_unbox_usize(v_stop_2827_);
lean_dec(v_stop_2827_);
v_res_2837_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets_spec__0(v_as_2825_, v_i_boxed_2835_, v_stop_boxed_2836_, v_b_2828_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_);
lean_dec_ref(v_as_2825_);
return v_res_2837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets___boxed(lean_object* v_c_2838_, lean_object* v_a_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_, lean_object* v_a_2843_, lean_object* v_a_2844_){
_start:
{
lean_object* v_res_2845_; 
v_res_2845_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v_c_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_);
return v_res_2845_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2846_; 
v___x_2846_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2846_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2847_; lean_object* v___x_2848_; 
v___x_2847_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__0);
v___x_2848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2847_);
return v___x_2848_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0(lean_object* v_00_u03b2_2849_){
_start:
{
lean_object* v___x_2850_; 
v___x_2850_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__1, &l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0___closed__1);
return v___x_2850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(lean_object* v_f_2851_, lean_object* v_v_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_){
_start:
{
if (lean_obj_tag(v_v_2852_) == 0)
{
lean_object* v_code_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2883_; 
v_code_2859_ = lean_ctor_get(v_v_2852_, 0);
v_isSharedCheck_2883_ = !lean_is_exclusive(v_v_2852_);
if (v_isSharedCheck_2883_ == 0)
{
v___x_2861_ = v_v_2852_;
v_isShared_2862_ = v_isSharedCheck_2883_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_code_2859_);
lean_dec(v_v_2852_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2883_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v___x_2863_; 
v___x_2863_ = lean_apply_7(v_f_2851_, v_code_2859_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_, lean_box(0));
if (lean_obj_tag(v___x_2863_) == 0)
{
lean_object* v_a_2864_; lean_object* v___x_2866_; uint8_t v_isShared_2867_; uint8_t v_isSharedCheck_2874_; 
v_a_2864_ = lean_ctor_get(v___x_2863_, 0);
v_isSharedCheck_2874_ = !lean_is_exclusive(v___x_2863_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2866_ = v___x_2863_;
v_isShared_2867_ = v_isSharedCheck_2874_;
goto v_resetjp_2865_;
}
else
{
lean_inc(v_a_2864_);
lean_dec(v___x_2863_);
v___x_2866_ = lean_box(0);
v_isShared_2867_ = v_isSharedCheck_2874_;
goto v_resetjp_2865_;
}
v_resetjp_2865_:
{
lean_object* v___x_2869_; 
if (v_isShared_2862_ == 0)
{
lean_ctor_set(v___x_2861_, 0, v_a_2864_);
v___x_2869_ = v___x_2861_;
goto v_reusejp_2868_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v_a_2864_);
v___x_2869_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2868_;
}
v_reusejp_2868_:
{
lean_object* v___x_2871_; 
if (v_isShared_2867_ == 0)
{
lean_ctor_set(v___x_2866_, 0, v___x_2869_);
v___x_2871_ = v___x_2866_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v___x_2869_);
v___x_2871_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
return v___x_2871_;
}
}
}
}
else
{
lean_object* v_a_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2882_; 
lean_del_object(v___x_2861_);
v_a_2875_ = lean_ctor_get(v___x_2863_, 0);
v_isSharedCheck_2882_ = !lean_is_exclusive(v___x_2863_);
if (v_isSharedCheck_2882_ == 0)
{
v___x_2877_ = v___x_2863_;
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_a_2875_);
lean_dec(v___x_2863_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2880_; 
if (v_isShared_2878_ == 0)
{
v___x_2880_ = v___x_2877_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v_a_2875_);
v___x_2880_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
return v___x_2880_;
}
}
}
}
}
else
{
lean_object* v___x_2884_; 
lean_dec(v___y_2857_);
lean_dec_ref(v___y_2856_);
lean_dec(v___y_2855_);
lean_dec_ref(v___y_2854_);
lean_dec_ref(v___y_2853_);
lean_dec_ref(v_f_2851_);
v___x_2884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2884_, 0, v_v_2852_);
return v___x_2884_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg___boxed(lean_object* v_f_2885_, lean_object* v_v_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_){
_start:
{
lean_object* v_res_2893_; 
v_res_2893_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(v_f_2885_, v_v_2886_, v___y_2887_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_);
return v_res_2893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1(uint8_t v_pu_2894_, lean_object* v_f_2895_, lean_object* v_v_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_){
_start:
{
lean_object* v___x_2903_; 
v___x_2903_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(v_f_2895_, v_v_2896_, v___y_2897_, v___y_2898_, v___y_2899_, v___y_2900_, v___y_2901_);
return v___x_2903_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___boxed(lean_object* v_pu_2904_, lean_object* v_f_2905_, lean_object* v_v_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_){
_start:
{
uint8_t v_pu_boxed_2913_; lean_object* v_res_2914_; 
v_pu_boxed_2913_ = lean_unbox(v_pu_2904_);
v_res_2914_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1(v_pu_boxed_2913_, v_f_2905_, v_v_2906_, v___y_2907_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_);
return v_res_2914_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2915_; 
v___x_2915_ = l_Lean_PersistentHashMap_empty___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__0(lean_box(0));
return v___x_2915_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0(lean_object* v_code_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_){
_start:
{
lean_object* v_alreadyFound_2924_; uint8_t v_relaxedReuse_2925_; lean_object* v_ownedness_2926_; lean_object* v___y_2927_; lean_object* v___y_2928_; lean_object* v___y_2929_; lean_object* v___y_2930_; uint8_t v_relaxedReuse_2933_; 
v_relaxedReuse_2933_ = lean_ctor_get_uint8(v___y_2917_, sizeof(void*)*2);
if (v_relaxedReuse_2933_ == 0)
{
lean_object* v_ownedness_2934_; lean_object* v___x_2935_; 
v_ownedness_2934_ = lean_ctor_get(v___y_2917_, 1);
lean_inc_ref(v_ownedness_2934_);
lean_dec_ref(v___y_2917_);
v___x_2935_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___closed__0, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___closed__0);
v_alreadyFound_2924_ = v___x_2935_;
v_relaxedReuse_2925_ = v_relaxedReuse_2933_;
v_ownedness_2926_ = v_ownedness_2934_;
v___y_2927_ = v___y_2918_;
v___y_2928_ = v___y_2919_;
v___y_2929_ = v___y_2920_;
v___y_2930_ = v___y_2921_;
goto v___jp_2923_;
}
else
{
lean_object* v_ownedness_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; 
v_ownedness_2936_ = lean_ctor_get(v___y_2917_, 1);
lean_inc_ref(v_ownedness_2936_);
lean_dec_ref(v___y_2917_);
v___x_2937_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___closed__0, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___closed__0);
v___x_2938_ = lean_st_mk_ref(v___x_2937_);
lean_inc(v___y_2921_);
lean_inc_ref(v___y_2920_);
lean_inc(v___y_2919_);
lean_inc_ref(v___y_2918_);
lean_inc(v___x_2938_);
lean_inc_ref(v_code_2916_);
v___x_2939_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_collectResets(v_code_2916_, v___x_2938_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_);
if (lean_obj_tag(v___x_2939_) == 0)
{
lean_object* v___x_2940_; 
lean_dec_ref(v___x_2939_);
v___x_2940_ = lean_st_ref_get(v___x_2938_);
lean_dec(v___x_2938_);
v_alreadyFound_2924_ = v___x_2940_;
v_relaxedReuse_2925_ = v_relaxedReuse_2933_;
v_ownedness_2926_ = v_ownedness_2936_;
v___y_2927_ = v___y_2918_;
v___y_2928_ = v___y_2919_;
v___y_2929_ = v___y_2920_;
v___y_2930_ = v___y_2921_;
goto v___jp_2923_;
}
else
{
lean_object* v_a_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2948_; 
lean_dec(v___x_2938_);
lean_dec_ref(v_ownedness_2936_);
lean_dec(v___y_2921_);
lean_dec_ref(v___y_2920_);
lean_dec(v___y_2919_);
lean_dec_ref(v___y_2918_);
lean_dec_ref(v_code_2916_);
v_a_2941_ = lean_ctor_get(v___x_2939_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v___x_2939_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2943_ = v___x_2939_;
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_a_2941_);
lean_dec(v___x_2939_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2948_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v___x_2946_; 
if (v_isShared_2944_ == 0)
{
v___x_2946_ = v___x_2943_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v_a_2941_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
}
v___jp_2923_:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; 
v___x_2931_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2931_, 0, v_alreadyFound_2924_);
lean_ctor_set(v___x_2931_, 1, v_ownedness_2926_);
lean_ctor_set_uint8(v___x_2931_, sizeof(void*)*2, v_relaxedReuse_2925_);
v___x_2932_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Code_insertResetReuse(v_code_2916_, v___x_2931_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_);
return v___x_2932_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___boxed(lean_object* v_code_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_){
_start:
{
lean_object* v_res_2956_; 
v_res_2956_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0(v_code_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_);
return v_res_2956_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(lean_object* v_decl_2958_, lean_object* v_a_2959_, lean_object* v_a_2960_, lean_object* v_a_2961_, lean_object* v_a_2962_, lean_object* v_a_2963_){
_start:
{
lean_object* v_toSignature_2965_; lean_object* v_value_2966_; uint8_t v_recursive_2967_; lean_object* v_inlineAttr_x3f_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2993_; 
v_toSignature_2965_ = lean_ctor_get(v_decl_2958_, 0);
v_value_2966_ = lean_ctor_get(v_decl_2958_, 1);
v_recursive_2967_ = lean_ctor_get_uint8(v_decl_2958_, sizeof(void*)*3);
v_inlineAttr_x3f_2968_ = lean_ctor_get(v_decl_2958_, 2);
v_isSharedCheck_2993_ = !lean_is_exclusive(v_decl_2958_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2970_ = v_decl_2958_;
v_isShared_2971_ = v_isSharedCheck_2993_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_inlineAttr_x3f_2968_);
lean_inc(v_value_2966_);
lean_inc(v_toSignature_2965_);
lean_dec(v_decl_2958_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2993_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___f_2972_; lean_object* v___x_2973_; 
v___f_2972_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___closed__0));
v___x_2973_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore_spec__1___redArg(v___f_2972_, v_value_2966_, v_a_2959_, v_a_2960_, v_a_2961_, v_a_2962_, v_a_2963_);
if (lean_obj_tag(v___x_2973_) == 0)
{
lean_object* v_a_2974_; lean_object* v___x_2976_; uint8_t v_isShared_2977_; uint8_t v_isSharedCheck_2984_; 
v_a_2974_ = lean_ctor_get(v___x_2973_, 0);
v_isSharedCheck_2984_ = !lean_is_exclusive(v___x_2973_);
if (v_isSharedCheck_2984_ == 0)
{
v___x_2976_ = v___x_2973_;
v_isShared_2977_ = v_isSharedCheck_2984_;
goto v_resetjp_2975_;
}
else
{
lean_inc(v_a_2974_);
lean_dec(v___x_2973_);
v___x_2976_ = lean_box(0);
v_isShared_2977_ = v_isSharedCheck_2984_;
goto v_resetjp_2975_;
}
v_resetjp_2975_:
{
lean_object* v___x_2979_; 
if (v_isShared_2971_ == 0)
{
lean_ctor_set(v___x_2970_, 1, v_a_2974_);
v___x_2979_ = v___x_2970_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v_toSignature_2965_);
lean_ctor_set(v_reuseFailAlloc_2983_, 1, v_a_2974_);
lean_ctor_set(v_reuseFailAlloc_2983_, 2, v_inlineAttr_x3f_2968_);
lean_ctor_set_uint8(v_reuseFailAlloc_2983_, sizeof(void*)*3, v_recursive_2967_);
v___x_2979_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
lean_object* v___x_2981_; 
if (v_isShared_2977_ == 0)
{
lean_ctor_set(v___x_2976_, 0, v___x_2979_);
v___x_2981_ = v___x_2976_;
goto v_reusejp_2980_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v___x_2979_);
v___x_2981_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2980_;
}
v_reusejp_2980_:
{
return v___x_2981_;
}
}
}
}
else
{
lean_object* v_a_2985_; lean_object* v___x_2987_; uint8_t v_isShared_2988_; uint8_t v_isSharedCheck_2992_; 
lean_del_object(v___x_2970_);
lean_dec(v_inlineAttr_x3f_2968_);
lean_dec_ref(v_toSignature_2965_);
v_a_2985_ = lean_ctor_get(v___x_2973_, 0);
v_isSharedCheck_2992_ = !lean_is_exclusive(v___x_2973_);
if (v_isSharedCheck_2992_ == 0)
{
v___x_2987_ = v___x_2973_;
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
else
{
lean_inc(v_a_2985_);
lean_dec(v___x_2973_);
v___x_2987_ = lean_box(0);
v_isShared_2988_ = v_isSharedCheck_2992_;
goto v_resetjp_2986_;
}
v_resetjp_2986_:
{
lean_object* v___x_2990_; 
if (v_isShared_2988_ == 0)
{
v___x_2990_ = v___x_2987_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v_a_2985_);
v___x_2990_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
return v___x_2990_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___boxed(lean_object* v_decl_2994_, lean_object* v_a_2995_, lean_object* v_a_2996_, lean_object* v_a_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_){
_start:
{
lean_object* v_res_3001_; 
v_res_3001_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(v_decl_2994_, v_a_2995_, v_a_2996_, v_a_2997_, v_a_2998_, v_a_2999_);
return v_res_3001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse(lean_object* v_decl_3002_, lean_object* v_a_3003_, lean_object* v_a_3004_, lean_object* v_a_3005_, lean_object* v_a_3006_){
_start:
{
lean_object* v___x_3008_; 
v___x_3008_ = l_Lean_Compiler_LCNF_getConfig___redArg(v_a_3003_);
if (lean_obj_tag(v___x_3008_) == 0)
{
lean_object* v_a_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3036_; 
v_a_3009_ = lean_ctor_get(v___x_3008_, 0);
v_isSharedCheck_3036_ = !lean_is_exclusive(v___x_3008_);
if (v_isSharedCheck_3036_ == 0)
{
v___x_3011_ = v___x_3008_;
v_isShared_3012_ = v_isSharedCheck_3036_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_a_3009_);
lean_dec(v___x_3008_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3036_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
uint8_t v_resetReuse_3013_; 
v_resetReuse_3013_ = lean_ctor_get_uint8(v_a_3009_, sizeof(void*)*4 + 2);
lean_dec(v_a_3009_);
if (v_resetReuse_3013_ == 0)
{
lean_object* v___x_3015_; 
lean_dec(v_a_3006_);
lean_dec_ref(v_a_3005_);
lean_dec(v_a_3004_);
lean_dec_ref(v_a_3003_);
if (v_isShared_3012_ == 0)
{
lean_ctor_set(v___x_3011_, 0, v_decl_3002_);
v___x_3015_ = v___x_3011_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v_decl_3002_);
v___x_3015_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
return v___x_3015_;
}
}
else
{
lean_object* v___x_3017_; 
lean_del_object(v___x_3011_);
lean_inc(v_a_3006_);
lean_inc_ref(v_a_3005_);
lean_inc(v_a_3004_);
lean_inc_ref(v_a_3003_);
lean_inc_ref(v_decl_3002_);
v___x_3017_ = l_Lean_Compiler_LCNF_Decl_analyzePropagatedBorrows(v_decl_3002_, v_a_3003_, v_a_3004_, v_a_3005_, v_a_3006_);
if (lean_obj_tag(v___x_3017_) == 0)
{
lean_object* v_a_3018_; lean_object* v___x_3019_; 
v_a_3018_ = lean_ctor_get(v___x_3017_, 0);
lean_inc(v_a_3018_);
lean_dec_ref(v___x_3017_);
lean_inc(v_a_3006_);
lean_inc_ref(v_a_3005_);
lean_inc(v_a_3004_);
lean_inc_ref(v_a_3003_);
lean_inc(v_a_3018_);
v___x_3019_ = l_Lean_Compiler_LCNF_Decl_applyOwnedness(v_decl_3002_, v_a_3018_, v_a_3003_, v_a_3004_, v_a_3005_, v_a_3006_);
if (lean_obj_tag(v___x_3019_) == 0)
{
lean_object* v_a_3020_; lean_object* v___x_3021_; uint8_t v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; 
v_a_3020_ = lean_ctor_get(v___x_3019_, 0);
lean_inc(v_a_3020_);
lean_dec_ref(v___x_3019_);
v___x_3021_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___closed__0, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore___lam__0___closed__0);
v___x_3022_ = 0;
lean_inc(v_a_3018_);
v___x_3023_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3023_, 0, v___x_3021_);
lean_ctor_set(v___x_3023_, 1, v_a_3018_);
lean_ctor_set_uint8(v___x_3023_, sizeof(void*)*2, v___x_3022_);
lean_inc(v_a_3006_);
lean_inc_ref(v_a_3005_);
lean_inc(v_a_3004_);
lean_inc_ref(v_a_3003_);
v___x_3024_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(v_a_3020_, v___x_3023_, v_a_3003_, v_a_3004_, v_a_3005_, v_a_3006_);
if (lean_obj_tag(v___x_3024_) == 0)
{
lean_object* v_a_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; 
v_a_3025_ = lean_ctor_get(v___x_3024_, 0);
lean_inc(v_a_3025_);
lean_dec_ref(v___x_3024_);
v___x_3026_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3026_, 0, v___x_3021_);
lean_ctor_set(v___x_3026_, 1, v_a_3018_);
lean_ctor_set_uint8(v___x_3026_, sizeof(void*)*2, v_resetReuse_3013_);
v___x_3027_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuseCore(v_a_3025_, v___x_3026_, v_a_3003_, v_a_3004_, v_a_3005_, v_a_3006_);
return v___x_3027_;
}
else
{
lean_dec(v_a_3018_);
lean_dec(v_a_3006_);
lean_dec_ref(v_a_3005_);
lean_dec(v_a_3004_);
lean_dec_ref(v_a_3003_);
return v___x_3024_;
}
}
else
{
lean_dec(v_a_3018_);
lean_dec(v_a_3006_);
lean_dec_ref(v_a_3005_);
lean_dec(v_a_3004_);
lean_dec_ref(v_a_3003_);
return v___x_3019_;
}
}
else
{
lean_object* v_a_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3035_; 
lean_dec(v_a_3006_);
lean_dec_ref(v_a_3005_);
lean_dec(v_a_3004_);
lean_dec_ref(v_a_3003_);
lean_dec_ref(v_decl_3002_);
v_a_3028_ = lean_ctor_get(v___x_3017_, 0);
v_isSharedCheck_3035_ = !lean_is_exclusive(v___x_3017_);
if (v_isSharedCheck_3035_ == 0)
{
v___x_3030_ = v___x_3017_;
v_isShared_3031_ = v_isSharedCheck_3035_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_a_3028_);
lean_dec(v___x_3017_);
v___x_3030_ = lean_box(0);
v_isShared_3031_ = v_isSharedCheck_3035_;
goto v_resetjp_3029_;
}
v_resetjp_3029_:
{
lean_object* v___x_3033_; 
if (v_isShared_3031_ == 0)
{
v___x_3033_ = v___x_3030_;
goto v_reusejp_3032_;
}
else
{
lean_object* v_reuseFailAlloc_3034_; 
v_reuseFailAlloc_3034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3034_, 0, v_a_3028_);
v___x_3033_ = v_reuseFailAlloc_3034_;
goto v_reusejp_3032_;
}
v_reusejp_3032_:
{
return v___x_3033_;
}
}
}
}
}
}
else
{
lean_object* v_a_3037_; lean_object* v___x_3039_; uint8_t v_isShared_3040_; uint8_t v_isSharedCheck_3044_; 
lean_dec(v_a_3006_);
lean_dec_ref(v_a_3005_);
lean_dec(v_a_3004_);
lean_dec_ref(v_a_3003_);
lean_dec_ref(v_decl_3002_);
v_a_3037_ = lean_ctor_get(v___x_3008_, 0);
v_isSharedCheck_3044_ = !lean_is_exclusive(v___x_3008_);
if (v_isSharedCheck_3044_ == 0)
{
v___x_3039_ = v___x_3008_;
v_isShared_3040_ = v_isSharedCheck_3044_;
goto v_resetjp_3038_;
}
else
{
lean_inc(v_a_3037_);
lean_dec(v___x_3008_);
v___x_3039_ = lean_box(0);
v_isShared_3040_ = v_isSharedCheck_3044_;
goto v_resetjp_3038_;
}
v_resetjp_3038_:
{
lean_object* v___x_3042_; 
if (v_isShared_3040_ == 0)
{
v___x_3042_ = v___x_3039_;
goto v_reusejp_3041_;
}
else
{
lean_object* v_reuseFailAlloc_3043_; 
v_reuseFailAlloc_3043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3043_, 0, v_a_3037_);
v___x_3042_ = v_reuseFailAlloc_3043_;
goto v_reusejp_3041_;
}
v_reusejp_3041_:
{
return v___x_3042_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse___boxed(lean_object* v_decl_3045_, lean_object* v_a_3046_, lean_object* v_a_3047_, lean_object* v_a_3048_, lean_object* v_a_3049_, lean_object* v_a_3050_){
_start:
{
lean_object* v_res_3051_; 
v_res_3051_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_Decl_insertResetReuse(v_decl_3045_, v_a_3046_, v_a_3047_, v_a_3048_, v_a_3049_);
return v_res_3051_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_insertResetReuse___closed__3(void){
_start:
{
lean_object* v___x_3056_; lean_object* v___x_3057_; uint8_t v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; 
v___x_3056_ = lean_unsigned_to_nat(0u);
v___x_3057_ = ((lean_object*)(l_Lean_Compiler_LCNF_insertResetReuse___closed__2));
v___x_3058_ = 2;
v___x_3059_ = ((lean_object*)(l_Lean_Compiler_LCNF_insertResetReuse___closed__1));
v___x_3060_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_3059_, v___x_3058_, v___x_3057_, v___x_3056_);
return v___x_3060_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_insertResetReuse(void){
_start:
{
lean_object* v___x_3061_; 
v___x_3061_ = lean_obj_once(&l_Lean_Compiler_LCNF_insertResetReuse___closed__3, &l_Lean_Compiler_LCNF_insertResetReuse___closed__3_once, _init_l_Lean_Compiler_LCNF_insertResetReuse___closed__3);
return v___x_3061_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; 
v___x_3117_ = lean_unsigned_to_nat(2506150707u);
v___x_3118_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3119_ = l_Lean_Name_num___override(v___x_3118_, v___x_3117_);
return v___x_3119_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3121_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3122_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3123_ = l_Lean_Name_str___override(v___x_3122_, v___x_3121_);
return v___x_3123_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; 
v___x_3125_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3126_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3127_ = l_Lean_Name_str___override(v___x_3126_, v___x_3125_);
return v___x_3127_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3128_ = lean_unsigned_to_nat(2u);
v___x_3129_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3130_ = l_Lean_Name_num___override(v___x_3129_, v___x_3128_);
return v___x_3130_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3132_; uint8_t v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
v___x_3132_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_));
v___x_3133_ = 1;
v___x_3134_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_);
v___x_3135_ = l_Lean_registerTraceClass(v___x_3132_, v___x_3133_, v___x_3134_);
return v___x_3135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2____boxed(lean_object* v_a_3136_){
_start:
{
lean_object* v_res_3137_; 
v_res_3137_ = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_();
return v_res_3137_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_LiveVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PropagateBorrow(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ResetReuse(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_LiveVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PropagateBorrow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_insertResetReuse = _init_l_Lean_Compiler_LCNF_insertResetReuse();
lean_mark_persistent(l_Lean_Compiler_LCNF_insertResetReuse);
res = l___private_Lean_Compiler_LCNF_ResetReuse_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ResetReuse_2506150707____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ResetReuse(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_LiveVars(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_DependsOn(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PropagateBorrow(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ResetReuse(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_LiveVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_DependsOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PropagateBorrow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ResetReuse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ResetReuse(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ResetReuse(builtin);
}
#ifdef __cplusplus
}
#endif
