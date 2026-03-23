// Lean compiler output
// Module: Lean.Meta.Sym.Simp.SimpM
// Imports: public import Lean.Meta.Sym.Pattern
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
lean_object* l_ReaderT_instMonadLift___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
extern lean_object* l_Lean_instMonadExceptOfExceptionCoreM;
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedConfig_default = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedConfig = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedConfig_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_rfl_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_rfl_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_step_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_step_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedResult_default = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedResult = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedResult_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResult(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResult___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_Simp_Result_isContextDependent(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_isContextDependent___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_SimpM_0__Lean_Meta_Sym_Simp_MethodsRefPointed;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__1;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__2_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__3_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__4_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__6;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__7;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__8;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__9;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__10;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__11;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__12;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__13;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__14;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__15;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__16;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__17;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__18;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__19;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__20;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__21;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__22;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__23;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__24;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__25;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__26;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__29 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__29_value;
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__31;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__32;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__33;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__34;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__35;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__36;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__37;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__38;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__39;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__40;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__41;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__42;
static const lean_string_object l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "<default>"};
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__43 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__43_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__44_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__44;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Simp_instInhabitedMethods_default_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Simp_instInhabitedMethods_default_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Simp_instInhabitedMethods_default_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Simp_instInhabitedMethods_default_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default;
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Simp_instInhabitedMethods_default_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Simp_instInhabitedMethods_default_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_pre(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_pre___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_post(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_post___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_simp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorIdx(lean_object* v_x_5_){
_start:
{
if (lean_obj_tag(v_x_5_) == 0)
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(0u);
return v___x_6_;
}
else
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(1u);
return v___x_7_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorIdx___boxed(lean_object* v_x_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_Meta_Sym_Simp_Result_ctorIdx(v_x_8_);
lean_dec_ref(v_x_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(lean_object* v_t_10_, lean_object* v_k_11_){
_start:
{
if (lean_obj_tag(v_t_10_) == 0)
{
uint8_t v_done_12_; uint8_t v_contextDependent_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v_done_12_ = lean_ctor_get_uint8(v_t_10_, 0);
v_contextDependent_13_ = lean_ctor_get_uint8(v_t_10_, 1);
lean_dec_ref(v_t_10_);
v___x_14_ = lean_box(v_done_12_);
v___x_15_ = lean_box(v_contextDependent_13_);
v___x_16_ = lean_apply_2(v_k_11_, v___x_14_, v___x_15_);
return v___x_16_;
}
else
{
lean_object* v_e_x27_17_; lean_object* v_proof_18_; uint8_t v_done_19_; uint8_t v_contextDependent_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v_e_x27_17_ = lean_ctor_get(v_t_10_, 0);
lean_inc_ref(v_e_x27_17_);
v_proof_18_ = lean_ctor_get(v_t_10_, 1);
lean_inc_ref(v_proof_18_);
v_done_19_ = lean_ctor_get_uint8(v_t_10_, sizeof(void*)*2);
v_contextDependent_20_ = lean_ctor_get_uint8(v_t_10_, sizeof(void*)*2 + 1);
lean_dec_ref(v_t_10_);
v___x_21_ = lean_box(v_done_19_);
v___x_22_ = lean_box(v_contextDependent_20_);
v___x_23_ = lean_apply_4(v_k_11_, v_e_x27_17_, v_proof_18_, v___x_21_, v___x_22_);
return v___x_23_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim(lean_object* v_motive_24_, lean_object* v_ctorIdx_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_k_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_26_, v_k_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_ctorElim___boxed(lean_object* v_motive_30_, lean_object* v_ctorIdx_31_, lean_object* v_t_32_, lean_object* v_h_33_, lean_object* v_k_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l_Lean_Meta_Sym_Simp_Result_ctorElim(v_motive_30_, v_ctorIdx_31_, v_t_32_, v_h_33_, v_k_34_);
lean_dec(v_ctorIdx_31_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_rfl_elim___redArg(lean_object* v_t_36_, lean_object* v_rfl_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_36_, v_rfl_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_rfl_elim(lean_object* v_motive_39_, lean_object* v_t_40_, lean_object* v_h_41_, lean_object* v_rfl_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_40_, v_rfl_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_step_elim___redArg(lean_object* v_t_44_, lean_object* v_step_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_44_, v_step_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_step_elim(lean_object* v_motive_47_, lean_object* v_t_48_, lean_object* v_h_49_, lean_object* v_step_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lean_Meta_Sym_Simp_Result_ctorElim___redArg(v_t_48_, v_step_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResult(uint8_t v_done_56_, uint8_t v_contextDependent_57_){
_start:
{
if (v_done_56_ == 0)
{
if (v_contextDependent_57_ == 0)
{
lean_object* v___x_58_; 
v___x_58_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_58_, 0, v_contextDependent_57_);
lean_ctor_set_uint8(v___x_58_, 1, v_contextDependent_57_);
return v___x_58_;
}
else
{
lean_object* v___x_59_; 
v___x_59_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_59_, 0, v_done_56_);
lean_ctor_set_uint8(v___x_59_, 1, v_contextDependent_57_);
return v___x_59_;
}
}
else
{
if (v_contextDependent_57_ == 0)
{
lean_object* v___x_60_; 
v___x_60_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_60_, 0, v_done_56_);
lean_ctor_set_uint8(v___x_60_, 1, v_contextDependent_57_);
return v___x_60_;
}
else
{
lean_object* v___x_61_; 
v___x_61_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_61_, 0, v_contextDependent_57_);
lean_ctor_set_uint8(v___x_61_, 1, v_contextDependent_57_);
return v___x_61_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResult___boxed(lean_object* v_done_62_, lean_object* v_contextDependent_63_){
_start:
{
uint8_t v_done_boxed_64_; uint8_t v_contextDependent_boxed_65_; lean_object* v_res_66_; 
v_done_boxed_64_ = lean_unbox(v_done_62_);
v_contextDependent_boxed_65_ = lean_unbox(v_contextDependent_63_);
v_res_66_ = l_Lean_Meta_Sym_Simp_mkRflResult(v_done_boxed_64_, v_contextDependent_boxed_65_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD(uint8_t v_contextDependent_67_){
_start:
{
if (v_contextDependent_67_ == 0)
{
lean_object* v___x_68_; 
v___x_68_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_68_, 0, v_contextDependent_67_);
lean_ctor_set_uint8(v___x_68_, 1, v_contextDependent_67_);
return v___x_68_;
}
else
{
uint8_t v___x_69_; lean_object* v___x_70_; 
v___x_69_ = 0;
v___x_70_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_70_, 0, v___x_69_);
lean_ctor_set_uint8(v___x_70_, 1, v_contextDependent_67_);
return v___x_70_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD___boxed(lean_object* v_contextDependent_71_){
_start:
{
uint8_t v_contextDependent_boxed_72_; lean_object* v_res_73_; 
v_contextDependent_boxed_72_ = lean_unbox(v_contextDependent_71_);
v_res_73_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v_contextDependent_boxed_72_);
return v_res_73_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_Simp_Result_isContextDependent(lean_object* v_x_74_){
_start:
{
if (lean_obj_tag(v_x_74_) == 0)
{
uint8_t v_contextDependent_75_; 
v_contextDependent_75_ = lean_ctor_get_uint8(v_x_74_, 1);
return v_contextDependent_75_;
}
else
{
uint8_t v_contextDependent_76_; 
v_contextDependent_76_ = lean_ctor_get_uint8(v_x_74_, sizeof(void*)*2 + 1);
return v_contextDependent_76_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_isContextDependent___boxed(lean_object* v_x_77_){
_start:
{
uint8_t v_res_78_; lean_object* v_r_79_; 
v_res_78_ = l_Lean_Meta_Sym_Simp_Result_isContextDependent(v_x_77_);
lean_dec_ref(v_x_77_);
v_r_79_ = lean_box(v_res_78_);
return v_r_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object* v_x_80_){
_start:
{
if (lean_obj_tag(v_x_80_) == 0)
{
uint8_t v_done_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_89_; 
v_done_81_ = lean_ctor_get_uint8(v_x_80_, 0);
v_isSharedCheck_89_ = !lean_is_exclusive(v_x_80_);
if (v_isSharedCheck_89_ == 0)
{
v___x_83_ = v_x_80_;
v_isShared_84_ = v_isSharedCheck_89_;
goto v_resetjp_82_;
}
else
{
lean_dec(v_x_80_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_89_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
uint8_t v___x_85_; lean_object* v___x_87_; 
v___x_85_ = 1;
if (v_isShared_84_ == 0)
{
v___x_87_ = v___x_83_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v_reuseFailAlloc_88_, 0, v_done_81_);
v___x_87_ = v_reuseFailAlloc_88_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
lean_ctor_set_uint8(v___x_87_, 1, v___x_85_);
return v___x_87_;
}
}
}
else
{
lean_object* v_e_x27_90_; lean_object* v_proof_91_; uint8_t v_done_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_100_; 
v_e_x27_90_ = lean_ctor_get(v_x_80_, 0);
v_proof_91_ = lean_ctor_get(v_x_80_, 1);
v_done_92_ = lean_ctor_get_uint8(v_x_80_, sizeof(void*)*2);
v_isSharedCheck_100_ = !lean_is_exclusive(v_x_80_);
if (v_isSharedCheck_100_ == 0)
{
v___x_94_ = v_x_80_;
v_isShared_95_ = v_isSharedCheck_100_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_proof_91_);
lean_inc(v_e_x27_90_);
lean_dec(v_x_80_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_100_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
uint8_t v___x_96_; lean_object* v___x_98_; 
v___x_96_ = 1;
if (v_isShared_95_ == 0)
{
v___x_98_ = v___x_94_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v_e_x27_90_);
lean_ctor_set(v_reuseFailAlloc_99_, 1, v_proof_91_);
lean_ctor_set_uint8(v_reuseFailAlloc_99_, sizeof(void*)*2, v_done_92_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
lean_ctor_set_uint8(v___x_98_, sizeof(void*)*2 + 1, v___x_96_);
return v___x_98_;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_SimpM_0__Lean_Meta_Sym_Simp_MethodsRefPointed(void){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_box(0);
return v___x_101_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0(void){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = l_instMonadEIO(lean_box(0));
return v___x_102_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__1(void){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_103_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__0);
v___x_104_ = l_StateRefT_x27_instMonad___redArg(v___x_103_);
return v___x_104_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__6(void){
_start:
{
lean_object* v___x_109_; lean_object* v___f_110_; 
v___x_109_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_110_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_110_, 0, v___x_109_);
return v___f_110_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__7(void){
_start:
{
lean_object* v___x_111_; lean_object* v___f_112_; 
v___x_111_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_112_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_112_, 0, v___x_111_);
return v___f_112_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__8(void){
_start:
{
lean_object* v___f_113_; lean_object* v___f_114_; lean_object* v___x_115_; 
v___f_113_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__7, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__7_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__7);
v___f_114_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__6, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__6_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__6);
v___x_115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_115_, 0, v___f_114_);
lean_ctor_set(v___x_115_, 1, v___f_113_);
return v___x_115_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__9(void){
_start:
{
lean_object* v___x_116_; lean_object* v___f_117_; 
v___x_116_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__8, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__8_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__8);
v___f_117_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_117_, 0, v___x_116_);
return v___f_117_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__10(void){
_start:
{
lean_object* v___x_118_; lean_object* v___f_119_; 
v___x_118_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__8, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__8_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__8);
v___f_119_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_119_, 0, v___x_118_);
return v___f_119_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__11(void){
_start:
{
lean_object* v___f_120_; lean_object* v___f_121_; lean_object* v___x_122_; 
v___f_120_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__10, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__10_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__10);
v___f_121_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__9, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__9_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__9);
v___x_122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_122_, 0, v___f_121_);
lean_ctor_set(v___x_122_, 1, v___f_120_);
return v___x_122_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__12(void){
_start:
{
lean_object* v___x_123_; lean_object* v___f_124_; 
v___x_123_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__11, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__11_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__11);
v___f_124_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_124_, 0, v___x_123_);
return v___f_124_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__13(void){
_start:
{
lean_object* v___x_125_; lean_object* v___f_126_; 
v___x_125_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__11, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__11_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__11);
v___f_126_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_126_, 0, v___x_125_);
return v___f_126_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__14(void){
_start:
{
lean_object* v___f_127_; lean_object* v___f_128_; lean_object* v___x_129_; 
v___f_127_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__13, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__13_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__13);
v___f_128_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__12, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__12_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__12);
v___x_129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_129_, 0, v___f_128_);
lean_ctor_set(v___x_129_, 1, v___f_127_);
return v___x_129_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__15(void){
_start:
{
lean_object* v___x_130_; lean_object* v___f_131_; 
v___x_130_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__14, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__14_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__14);
v___f_131_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_131_, 0, v___x_130_);
return v___f_131_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__16(void){
_start:
{
lean_object* v___x_132_; lean_object* v___f_133_; 
v___x_132_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__14, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__14_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__14);
v___f_133_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_133_, 0, v___x_132_);
return v___f_133_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__17(void){
_start:
{
lean_object* v___f_134_; lean_object* v___f_135_; lean_object* v___x_136_; 
v___f_134_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__16, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__16_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__16);
v___f_135_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__15, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__15_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__15);
v___x_136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_136_, 0, v___f_135_);
lean_ctor_set(v___x_136_, 1, v___f_134_);
return v___x_136_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__18(void){
_start:
{
lean_object* v___x_137_; lean_object* v___f_138_; 
v___x_137_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__17, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__17_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__17);
v___f_138_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_138_, 0, v___x_137_);
return v___f_138_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__19(void){
_start:
{
lean_object* v___x_139_; lean_object* v___f_140_; 
v___x_139_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__17, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__17_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__17);
v___f_140_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_140_, 0, v___x_139_);
return v___f_140_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__20(void){
_start:
{
lean_object* v___f_141_; lean_object* v___f_142_; lean_object* v___x_143_; 
v___f_141_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__19, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__19_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__19);
v___f_142_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__18, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__18_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__18);
v___x_143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_143_, 0, v___f_142_);
lean_ctor_set(v___x_143_, 1, v___f_141_);
return v___x_143_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__21(void){
_start:
{
lean_object* v___x_144_; lean_object* v___f_145_; 
v___x_144_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__20, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__20_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__20);
v___f_145_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_145_, 0, v___x_144_);
return v___f_145_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__22(void){
_start:
{
lean_object* v___x_146_; lean_object* v___f_147_; 
v___x_146_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__20, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__20_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__20);
v___f_147_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_147_, 0, v___x_146_);
return v___f_147_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__23(void){
_start:
{
lean_object* v___f_148_; lean_object* v___f_149_; lean_object* v___x_150_; 
v___f_148_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__22, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__22_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__22);
v___f_149_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__21, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__21_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__21);
v___x_150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_150_, 0, v___f_149_);
lean_ctor_set(v___x_150_, 1, v___f_148_);
return v___x_150_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__24(void){
_start:
{
lean_object* v___x_151_; lean_object* v___f_152_; 
v___x_151_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__23, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__23_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__23);
v___f_152_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_152_, 0, v___x_151_);
return v___f_152_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__25(void){
_start:
{
lean_object* v___x_153_; lean_object* v___f_154_; 
v___x_153_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__23, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__23_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__23);
v___f_154_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_154_, 0, v___x_153_);
return v___f_154_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__26(void){
_start:
{
lean_object* v___f_155_; lean_object* v___f_156_; lean_object* v___x_157_; 
v___f_155_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__25, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__25_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__25);
v___f_156_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__24, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__24_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__24);
v___x_157_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_157_, 0, v___f_156_);
lean_ctor_set(v___x_157_, 1, v___f_155_);
return v___x_157_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__31(void){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_162_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_163_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30));
v___x_164_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__29));
v___x_165_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_164_, v___x_163_, v___x_162_);
return v___x_165_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__32(void){
_start:
{
lean_object* v___x_166_; lean_object* v___f_167_; lean_object* v___f_168_; lean_object* v___x_169_; 
v___x_166_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__31, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__31_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__31);
v___f_167_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28));
v___f_168_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27));
v___x_169_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_168_, v___f_167_, v___x_166_);
return v___x_169_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__33(void){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_170_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__32, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__32_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__32);
v___x_171_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30));
v___x_172_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__29));
v___x_173_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_172_, v___x_171_, v___x_170_);
return v___x_173_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__34(void){
_start:
{
lean_object* v___x_174_; lean_object* v___f_175_; lean_object* v___f_176_; lean_object* v___x_177_; 
v___x_174_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__33, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__33_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__33);
v___f_175_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28));
v___f_176_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27));
v___x_177_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_176_, v___f_175_, v___x_174_);
return v___x_177_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__35(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_178_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__34, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__34_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__34);
v___x_179_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30));
v___x_180_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__29));
v___x_181_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_180_, v___x_179_, v___x_178_);
return v___x_181_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__36(void){
_start:
{
lean_object* v___x_182_; lean_object* v___f_183_; lean_object* v___f_184_; lean_object* v___x_185_; 
v___x_182_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__35, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__35_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__35);
v___f_183_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28));
v___f_184_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27));
v___x_185_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_184_, v___f_183_, v___x_182_);
return v___x_185_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__37(void){
_start:
{
lean_object* v___x_186_; lean_object* v___f_187_; lean_object* v___f_188_; lean_object* v___x_189_; 
v___x_186_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__36, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__36_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__36);
v___f_187_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28));
v___f_188_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__27));
v___x_189_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_188_, v___f_187_, v___x_186_);
return v___x_189_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__38(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___f_192_; 
v___x_190_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30));
v___x_191_ = l_Lean_Meta_instAddMessageContextMetaM;
v___f_192_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_192_, 0, v___x_191_);
lean_closure_set(v___f_192_, 1, v___x_190_);
return v___f_192_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__39(void){
_start:
{
lean_object* v___f_193_; lean_object* v___f_194_; lean_object* v___f_195_; 
v___f_193_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28));
v___f_194_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__38, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__38_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__38);
v___f_195_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_195_, 0, v___f_194_);
lean_closure_set(v___f_195_, 1, v___f_193_);
return v___f_195_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__40(void){
_start:
{
lean_object* v___x_196_; lean_object* v___f_197_; lean_object* v___f_198_; 
v___x_196_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__30));
v___f_197_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__39, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__39_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__39);
v___f_198_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_198_, 0, v___f_197_);
lean_closure_set(v___f_198_, 1, v___x_196_);
return v___f_198_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__41(void){
_start:
{
lean_object* v___f_199_; lean_object* v___f_200_; lean_object* v___f_201_; 
v___f_199_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28));
v___f_200_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__40, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__40_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__40);
v___f_201_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_201_, 0, v___f_200_);
lean_closure_set(v___f_201_, 1, v___f_199_);
return v___f_201_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__42(void){
_start:
{
lean_object* v___f_202_; lean_object* v___f_203_; lean_object* v___f_204_; 
v___f_202_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__28));
v___f_203_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__41, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__41_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__41);
v___f_204_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_204_, 0, v___f_203_);
lean_closure_set(v___f_204_, 1, v___f_202_);
return v___f_204_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__44(void){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_206_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__43));
v___x_207_ = l_Lean_stringToMessageData(v___x_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedSimpM(lean_object* v_00_u03b1_208_){
_start:
{
lean_object* v___x_209_; lean_object* v_toApplicative_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_280_; 
v___x_209_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__1, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__1_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__1);
v_toApplicative_210_ = lean_ctor_get(v___x_209_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_209_);
if (v_isSharedCheck_280_ == 0)
{
lean_object* v_unused_281_; 
v_unused_281_ = lean_ctor_get(v___x_209_, 1);
lean_dec(v_unused_281_);
v___x_212_ = v___x_209_;
v_isShared_213_ = v_isSharedCheck_280_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_toApplicative_210_);
lean_dec(v___x_209_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_280_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v_toFunctor_214_; lean_object* v_toSeq_215_; lean_object* v_toSeqLeft_216_; lean_object* v_toSeqRight_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_278_; 
v_toFunctor_214_ = lean_ctor_get(v_toApplicative_210_, 0);
v_toSeq_215_ = lean_ctor_get(v_toApplicative_210_, 2);
v_toSeqLeft_216_ = lean_ctor_get(v_toApplicative_210_, 3);
v_toSeqRight_217_ = lean_ctor_get(v_toApplicative_210_, 4);
v_isSharedCheck_278_ = !lean_is_exclusive(v_toApplicative_210_);
if (v_isSharedCheck_278_ == 0)
{
lean_object* v_unused_279_; 
v_unused_279_ = lean_ctor_get(v_toApplicative_210_, 1);
lean_dec(v_unused_279_);
v___x_219_ = v_toApplicative_210_;
v_isShared_220_ = v_isSharedCheck_278_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_toSeqRight_217_);
lean_inc(v_toSeqLeft_216_);
lean_inc(v_toSeq_215_);
lean_inc(v_toFunctor_214_);
lean_dec(v_toApplicative_210_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_278_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___f_221_; lean_object* v___f_222_; lean_object* v___f_223_; lean_object* v___f_224_; lean_object* v___x_225_; lean_object* v___f_226_; lean_object* v___f_227_; lean_object* v___f_228_; lean_object* v___x_230_; 
v___f_221_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__2));
v___f_222_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__3));
lean_inc_ref(v_toFunctor_214_);
v___f_223_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_223_, 0, v_toFunctor_214_);
v___f_224_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_224_, 0, v_toFunctor_214_);
v___x_225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_225_, 0, v___f_223_);
lean_ctor_set(v___x_225_, 1, v___f_224_);
v___f_226_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_226_, 0, v_toSeqRight_217_);
v___f_227_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_227_, 0, v_toSeqLeft_216_);
v___f_228_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_228_, 0, v_toSeq_215_);
if (v_isShared_220_ == 0)
{
lean_ctor_set(v___x_219_, 4, v___f_226_);
lean_ctor_set(v___x_219_, 3, v___f_227_);
lean_ctor_set(v___x_219_, 2, v___f_228_);
lean_ctor_set(v___x_219_, 1, v___f_221_);
lean_ctor_set(v___x_219_, 0, v___x_225_);
v___x_230_ = v___x_219_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_277_; 
v_reuseFailAlloc_277_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_277_, 0, v___x_225_);
lean_ctor_set(v_reuseFailAlloc_277_, 1, v___f_221_);
lean_ctor_set(v_reuseFailAlloc_277_, 2, v___f_228_);
lean_ctor_set(v_reuseFailAlloc_277_, 3, v___f_227_);
lean_ctor_set(v_reuseFailAlloc_277_, 4, v___f_226_);
v___x_230_ = v_reuseFailAlloc_277_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
lean_object* v___x_232_; 
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 1, v___f_222_);
lean_ctor_set(v___x_212_, 0, v___x_230_);
v___x_232_ = v___x_212_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v___x_230_);
lean_ctor_set(v_reuseFailAlloc_276_, 1, v___f_222_);
v___x_232_ = v_reuseFailAlloc_276_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
lean_object* v___x_233_; lean_object* v_toApplicative_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_274_; 
v___x_233_ = l_StateRefT_x27_instMonad___redArg(v___x_232_);
v_toApplicative_234_ = lean_ctor_get(v___x_233_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_233_);
if (v_isSharedCheck_274_ == 0)
{
lean_object* v_unused_275_; 
v_unused_275_ = lean_ctor_get(v___x_233_, 1);
lean_dec(v_unused_275_);
v___x_236_ = v___x_233_;
v_isShared_237_ = v_isSharedCheck_274_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_toApplicative_234_);
lean_dec(v___x_233_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_274_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v_toFunctor_238_; lean_object* v_toSeq_239_; lean_object* v_toSeqLeft_240_; lean_object* v_toSeqRight_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_272_; 
v_toFunctor_238_ = lean_ctor_get(v_toApplicative_234_, 0);
v_toSeq_239_ = lean_ctor_get(v_toApplicative_234_, 2);
v_toSeqLeft_240_ = lean_ctor_get(v_toApplicative_234_, 3);
v_toSeqRight_241_ = lean_ctor_get(v_toApplicative_234_, 4);
v_isSharedCheck_272_ = !lean_is_exclusive(v_toApplicative_234_);
if (v_isSharedCheck_272_ == 0)
{
lean_object* v_unused_273_; 
v_unused_273_ = lean_ctor_get(v_toApplicative_234_, 1);
lean_dec(v_unused_273_);
v___x_243_ = v_toApplicative_234_;
v_isShared_244_ = v_isSharedCheck_272_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_toSeqRight_241_);
lean_inc(v_toSeqLeft_240_);
lean_inc(v_toSeq_239_);
lean_inc(v_toFunctor_238_);
lean_dec(v_toApplicative_234_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_272_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___f_245_; lean_object* v___f_246_; lean_object* v___f_247_; lean_object* v___f_248_; lean_object* v___x_249_; lean_object* v___f_250_; lean_object* v___f_251_; lean_object* v___f_252_; lean_object* v___x_254_; 
v___f_245_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__4));
v___f_246_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__5));
lean_inc_ref(v_toFunctor_238_);
v___f_247_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_247_, 0, v_toFunctor_238_);
v___f_248_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_248_, 0, v_toFunctor_238_);
v___x_249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_249_, 0, v___f_247_);
lean_ctor_set(v___x_249_, 1, v___f_248_);
v___f_250_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_250_, 0, v_toSeqRight_241_);
v___f_251_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_251_, 0, v_toSeqLeft_240_);
v___f_252_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_252_, 0, v_toSeq_239_);
if (v_isShared_244_ == 0)
{
lean_ctor_set(v___x_243_, 4, v___f_250_);
lean_ctor_set(v___x_243_, 3, v___f_251_);
lean_ctor_set(v___x_243_, 2, v___f_252_);
lean_ctor_set(v___x_243_, 1, v___f_245_);
lean_ctor_set(v___x_243_, 0, v___x_249_);
v___x_254_ = v___x_243_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v___x_249_);
lean_ctor_set(v_reuseFailAlloc_271_, 1, v___f_245_);
lean_ctor_set(v_reuseFailAlloc_271_, 2, v___f_252_);
lean_ctor_set(v_reuseFailAlloc_271_, 3, v___f_251_);
lean_ctor_set(v_reuseFailAlloc_271_, 4, v___f_250_);
v___x_254_ = v_reuseFailAlloc_271_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
lean_object* v___x_256_; 
if (v_isShared_237_ == 0)
{
lean_ctor_set(v___x_236_, 1, v___f_246_);
lean_ctor_set(v___x_236_, 0, v___x_254_);
v___x_256_ = v___x_236_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v___x_254_);
lean_ctor_set(v_reuseFailAlloc_270_, 1, v___f_246_);
v___x_256_ = v_reuseFailAlloc_270_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v_toMonadRef_264_; lean_object* v___f_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_257_ = l_StateRefT_x27_instMonad___redArg(v___x_256_);
v___x_258_ = l_ReaderT_instMonad___redArg(v___x_257_);
v___x_259_ = l_StateRefT_x27_instMonad___redArg(v___x_258_);
v___x_260_ = l_ReaderT_instMonad___redArg(v___x_259_);
v___x_261_ = l_ReaderT_instMonad___redArg(v___x_260_);
v___x_262_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__26, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__26_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__26);
v___x_263_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__37, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__37_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__37);
v_toMonadRef_264_ = lean_ctor_get(v___x_263_, 0);
lean_inc_ref(v_toMonadRef_264_);
v___f_265_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__42, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__42_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__42);
lean_inc_ref(v___x_261_);
v___x_266_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___f_265_, v___x_261_);
v___x_267_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_267_, 0, v___x_262_);
lean_ctor_set(v___x_267_, 1, v_toMonadRef_264_);
lean_ctor_set(v___x_267_, 2, v___x_266_);
v___x_268_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__44, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__44_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__44);
v___x_269_ = l_Lean_throwError___redArg(v___x_261_, v___x_267_, v___x_268_);
return v___x_269_;
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
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Simp_instInhabitedMethods_default_spec__0_spec__0(lean_object* v_msgData_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_){
_start:
{
lean_object* v___x_288_; lean_object* v_env_289_; lean_object* v___x_290_; lean_object* v_mctx_291_; lean_object* v_lctx_292_; lean_object* v_options_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_288_ = lean_st_ref_get(v___y_286_);
v_env_289_ = lean_ctor_get(v___x_288_, 0);
lean_inc_ref(v_env_289_);
lean_dec(v___x_288_);
v___x_290_ = lean_st_ref_get(v___y_284_);
v_mctx_291_ = lean_ctor_get(v___x_290_, 0);
lean_inc_ref(v_mctx_291_);
lean_dec(v___x_290_);
v_lctx_292_ = lean_ctor_get(v___y_283_, 2);
v_options_293_ = lean_ctor_get(v___y_285_, 2);
lean_inc_ref(v_options_293_);
lean_inc_ref(v_lctx_292_);
v___x_294_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_294_, 0, v_env_289_);
lean_ctor_set(v___x_294_, 1, v_mctx_291_);
lean_ctor_set(v___x_294_, 2, v_lctx_292_);
lean_ctor_set(v___x_294_, 3, v_options_293_);
v___x_295_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
lean_ctor_set(v___x_295_, 1, v_msgData_282_);
v___x_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Simp_instInhabitedMethods_default_spec__0_spec__0___boxed(lean_object* v_msgData_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Simp_instInhabitedMethods_default_spec__0_spec__0(v_msgData_297_, v___y_298_, v___y_299_, v___y_300_, v___y_301_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
lean_dec(v___y_299_);
lean_dec_ref(v___y_298_);
return v_res_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Simp_instInhabitedMethods_default_spec__0___redArg(lean_object* v_msg_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
lean_object* v_ref_310_; lean_object* v___x_311_; lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_320_; 
v_ref_310_ = lean_ctor_get(v___y_307_, 5);
v___x_311_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_Simp_instInhabitedMethods_default_spec__0_spec__0(v_msg_304_, v___y_305_, v___y_306_, v___y_307_, v___y_308_);
v_a_312_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_320_ == 0)
{
v___x_314_ = v___x_311_;
v_isShared_315_ = v_isSharedCheck_320_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v___x_311_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_320_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_316_; lean_object* v___x_318_; 
lean_inc(v_ref_310_);
v___x_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_316_, 0, v_ref_310_);
lean_ctor_set(v___x_316_, 1, v_a_312_);
if (v_isShared_315_ == 0)
{
lean_ctor_set_tag(v___x_314_, 1);
lean_ctor_set(v___x_314_, 0, v___x_316_);
v___x_318_ = v___x_314_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v___x_316_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Simp_instInhabitedMethods_default_spec__0___redArg___boxed(lean_object* v_msg_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lean_throwError___at___00Lean_Meta_Sym_Simp_instInhabitedMethods_default_spec__0___redArg(v_msg_321_, v___y_322_, v___y_323_, v___y_324_, v___y_325_);
lean_dec(v___y_325_);
lean_dec_ref(v___y_324_);
lean_dec(v___y_323_);
lean_dec_ref(v___y_322_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0(lean_object* v_x_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_339_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__44, &l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__44_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedSimpM___closed__44);
v___x_340_ = l_Lean_throwError___at___00Lean_Meta_Sym_Simp_instInhabitedMethods_default_spec__0___redArg(v___x_339_, v___y_334_, v___y_335_, v___y_336_, v___y_337_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0___boxed(lean_object* v_x_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___lam__0(v_x_341_, v___y_342_, v___y_343_, v___y_344_, v___y_345_, v___y_346_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
lean_dec(v___y_350_);
lean_dec_ref(v___y_349_);
lean_dec(v___y_348_);
lean_dec_ref(v___y_347_);
lean_dec(v___y_346_);
lean_dec_ref(v___y_345_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
lean_dec(v___y_342_);
lean_dec_ref(v_x_341_);
return v_res_352_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1(void){
_start:
{
lean_object* v___f_354_; lean_object* v___x_355_; 
v___f_354_ = ((lean_object*)(l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__0));
v___x_355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_355_, 0, v___f_354_);
lean_ctor_set(v___x_355_, 1, v___f_354_);
return v___x_355_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedMethods_default(void){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1, &l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1_once, _init_l_Lean_Meta_Sym_Simp_instInhabitedMethods_default___closed__1);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Simp_instInhabitedMethods_default_spec__0(lean_object* v_00_u03b1_357_, lean_object* v_msg_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_){
_start:
{
lean_object* v___x_369_; 
v___x_369_ = l_Lean_throwError___at___00Lean_Meta_Sym_Simp_instInhabitedMethods_default_spec__0___redArg(v_msg_358_, v___y_364_, v___y_365_, v___y_366_, v___y_367_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_Simp_instInhabitedMethods_default_spec__0___boxed(lean_object* v_00_u03b1_370_, lean_object* v_msg_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l_Lean_throwError___at___00Lean_Meta_Sym_Simp_instInhabitedMethods_default_spec__0(v_00_u03b1_370_, v_msg_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_, v___y_380_);
lean_dec(v___y_380_);
lean_dec_ref(v___y_379_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
lean_dec(v___y_376_);
lean_dec_ref(v___y_375_);
lean_dec(v___y_374_);
lean_dec_ref(v___y_373_);
lean_dec(v___y_372_);
return v_res_382_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_instInhabitedMethods(void){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = l_Lean_Meta_Sym_Simp_instInhabitedMethods_default;
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl(lean_object* v_m_384_){
_start:
{
lean_inc_ref(v_m_384_);
return v_m_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl___boxed(lean_object* v_m_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l_Lean_Meta_Sym_Simp_Methods_toMethodsRefImpl(v_m_385_);
lean_dec_ref(v_m_385_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl(lean_object* v_m_387_){
_start:
{
lean_inc(v_m_387_);
return v_m_387_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl___boxed(lean_object* v_m_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lean_Meta_Sym_Simp_MethodsRef_toMethodsImpl(v_m_388_);
lean_dec(v_m_388_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___redArg(lean_object* v_a_390_){
_start:
{
lean_object* v___x_392_; 
v___x_392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_392_, 0, v_a_390_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___redArg___boxed(lean_object* v_a_393_, lean_object* v_a_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_Lean_Meta_Sym_Simp_getMethods___redArg(v_a_393_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods(lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_){
_start:
{
lean_object* v___x_406_; 
v___x_406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_406_, 0, v_a_396_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getMethods___boxed(lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Lean_Meta_Sym_Simp_getMethods(v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_);
lean_dec(v_a_415_);
lean_dec_ref(v_a_414_);
lean_dec(v_a_413_);
lean_dec_ref(v_a_412_);
lean_dec(v_a_411_);
lean_dec_ref(v_a_410_);
lean_dec(v_a_409_);
lean_dec_ref(v_a_408_);
return v_res_417_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_418_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; 
v___x_419_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0, &l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0_once, _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__0);
v___x_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_420_, 0, v___x_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg(lean_object* v_x_421_, lean_object* v_methods_422_, lean_object* v_config_423_, lean_object* v_s_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_){
_start:
{
lean_object* v_lctx_432_; lean_object* v_decls_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_474_; 
v_lctx_432_ = lean_ctor_get(v_a_427_, 2);
lean_inc_ref(v_lctx_432_);
v_decls_433_ = lean_ctor_get(v_lctx_432_, 1);
v_isSharedCheck_474_ = !lean_is_exclusive(v_lctx_432_);
if (v_isSharedCheck_474_ == 0)
{
lean_object* v_unused_475_; lean_object* v_unused_476_; 
v_unused_475_ = lean_ctor_get(v_lctx_432_, 2);
lean_dec(v_unused_475_);
v_unused_476_ = lean_ctor_get(v_lctx_432_, 0);
lean_dec(v_unused_476_);
v___x_435_ = v_lctx_432_;
v_isShared_436_ = v_isSharedCheck_474_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_decls_433_);
lean_dec(v_lctx_432_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_474_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v_size_437_; lean_object* v_persistentCache_438_; lean_object* v_funext_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_471_; 
v_size_437_ = lean_ctor_get(v_decls_433_, 2);
lean_inc(v_size_437_);
lean_dec_ref(v_decls_433_);
v_persistentCache_438_ = lean_ctor_get(v_s_424_, 1);
v_funext_439_ = lean_ctor_get(v_s_424_, 3);
v_isSharedCheck_471_ = !lean_is_exclusive(v_s_424_);
if (v_isSharedCheck_471_ == 0)
{
lean_object* v_unused_472_; lean_object* v_unused_473_; 
v_unused_472_ = lean_ctor_get(v_s_424_, 2);
lean_dec(v_unused_472_);
v_unused_473_ = lean_ctor_get(v_s_424_, 0);
lean_dec(v_unused_473_);
v___x_441_ = v_s_424_;
v_isShared_442_ = v_isSharedCheck_471_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_funext_439_);
lean_inc(v_persistentCache_438_);
lean_dec(v_s_424_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_471_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_443_; lean_object* v___x_445_; 
v___x_443_ = lean_unsigned_to_nat(0u);
if (v_isShared_436_ == 0)
{
lean_ctor_set(v___x_435_, 2, v___x_443_);
lean_ctor_set(v___x_435_, 1, v_size_437_);
lean_ctor_set(v___x_435_, 0, v_config_423_);
v___x_445_ = v___x_435_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_config_423_);
lean_ctor_set(v_reuseFailAlloc_470_, 1, v_size_437_);
lean_ctor_set(v_reuseFailAlloc_470_, 2, v___x_443_);
v___x_445_ = v_reuseFailAlloc_470_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
lean_object* v___x_446_; lean_object* v___x_448_; 
v___x_446_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1, &l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1_once, _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1);
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 2, v___x_446_);
lean_ctor_set(v___x_441_, 0, v___x_443_);
v___x_448_ = v___x_441_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v___x_443_);
lean_ctor_set(v_reuseFailAlloc_469_, 1, v_persistentCache_438_);
lean_ctor_set(v_reuseFailAlloc_469_, 2, v___x_446_);
lean_ctor_set(v_reuseFailAlloc_469_, 3, v_funext_439_);
v___x_448_ = v_reuseFailAlloc_469_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_449_ = lean_st_mk_ref(v___x_448_);
lean_inc(v___x_449_);
v___x_450_ = lean_apply_10(v_x_421_, v_methods_422_, v___x_445_, v___x_449_, v_a_425_, v_a_426_, v_a_427_, v_a_428_, v_a_429_, v_a_430_, lean_box(0));
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v_a_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_460_; 
v_a_451_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_460_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_460_ == 0)
{
v___x_453_ = v___x_450_;
v_isShared_454_ = v_isSharedCheck_460_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_a_451_);
lean_dec(v___x_450_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_460_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_458_; 
v___x_455_ = lean_st_ref_get(v___x_449_);
lean_dec(v___x_449_);
v___x_456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_456_, 0, v_a_451_);
lean_ctor_set(v___x_456_, 1, v___x_455_);
if (v_isShared_454_ == 0)
{
lean_ctor_set(v___x_453_, 0, v___x_456_);
v___x_458_ = v___x_453_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v___x_456_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
return v___x_458_;
}
}
}
else
{
lean_object* v_a_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_468_; 
lean_dec(v___x_449_);
v_a_461_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_468_ == 0)
{
v___x_463_ = v___x_450_;
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_a_461_);
lean_dec(v___x_450_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_466_; 
if (v_isShared_464_ == 0)
{
v___x_466_ = v___x_463_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_a_461_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg___boxed(lean_object* v_x_477_, lean_object* v_methods_478_, lean_object* v_config_479_, lean_object* v_s_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v_x_477_, v_methods_478_, v_config_479_, v_s_480_, v_a_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run(lean_object* v_00_u03b1_489_, lean_object* v_x_490_, lean_object* v_methods_491_, lean_object* v_config_492_, lean_object* v_s_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v_x_490_, v_methods_491_, v_config_492_, v_s_493_, v_a_494_, v_a_495_, v_a_496_, v_a_497_, v_a_498_, v_a_499_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___boxed(lean_object* v_00_u03b1_502_, lean_object* v_x_503_, lean_object* v_methods_504_, lean_object* v_config_505_, lean_object* v_s_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l_Lean_Meta_Sym_Simp_SimpM_run(v_00_u03b1_502_, v_x_503_, v_methods_504_, v_config_505_, v_s_506_, v_a_507_, v_a_508_, v_a_509_, v_a_510_, v_a_511_, v_a_512_);
return v_res_514_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_515_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1, &l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1_once, _init_l_Lean_Meta_Sym_Simp_SimpM_run___redArg___closed__1);
v___x_516_ = lean_unsigned_to_nat(0u);
v___x_517_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_517_, 0, v___x_516_);
lean_ctor_set(v___x_517_, 1, v___x_515_);
lean_ctor_set(v___x_517_, 2, v___x_515_);
lean_ctor_set(v___x_517_, 3, v___x_515_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(lean_object* v_x_518_, lean_object* v_methods_519_, lean_object* v_config_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_){
_start:
{
lean_object* v_lctx_528_; lean_object* v_decls_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_550_; 
v_lctx_528_ = lean_ctor_get(v_a_523_, 2);
lean_inc_ref(v_lctx_528_);
v_decls_529_ = lean_ctor_get(v_lctx_528_, 1);
v_isSharedCheck_550_ = !lean_is_exclusive(v_lctx_528_);
if (v_isSharedCheck_550_ == 0)
{
lean_object* v_unused_551_; lean_object* v_unused_552_; 
v_unused_551_ = lean_ctor_get(v_lctx_528_, 2);
lean_dec(v_unused_551_);
v_unused_552_ = lean_ctor_get(v_lctx_528_, 0);
lean_dec(v_unused_552_);
v___x_531_ = v_lctx_528_;
v_isShared_532_ = v_isSharedCheck_550_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_decls_529_);
lean_dec(v_lctx_528_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_550_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v_size_533_; lean_object* v___x_534_; lean_object* v___x_536_; 
v_size_533_ = lean_ctor_get(v_decls_529_, 2);
lean_inc(v_size_533_);
lean_dec_ref(v_decls_529_);
v___x_534_ = lean_unsigned_to_nat(0u);
if (v_isShared_532_ == 0)
{
lean_ctor_set(v___x_531_, 2, v___x_534_);
lean_ctor_set(v___x_531_, 1, v_size_533_);
lean_ctor_set(v___x_531_, 0, v_config_520_);
v___x_536_ = v___x_531_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_config_520_);
lean_ctor_set(v_reuseFailAlloc_549_, 1, v_size_533_);
lean_ctor_set(v_reuseFailAlloc_549_, 2, v___x_534_);
v___x_536_ = v_reuseFailAlloc_549_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_537_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0, &l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0_once, _init_l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___closed__0);
v___x_538_ = lean_st_mk_ref(v___x_537_);
lean_inc(v___x_538_);
v___x_539_ = lean_apply_10(v_x_518_, v_methods_519_, v___x_536_, v___x_538_, v_a_521_, v_a_522_, v_a_523_, v_a_524_, v_a_525_, v_a_526_, lean_box(0));
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_548_; 
v_a_540_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_548_ == 0)
{
v___x_542_ = v___x_539_;
v_isShared_543_ = v_isSharedCheck_548_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_539_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_548_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_544_; lean_object* v___x_546_; 
v___x_544_ = lean_st_ref_get(v___x_538_);
lean_dec(v___x_538_);
lean_dec(v___x_544_);
if (v_isShared_543_ == 0)
{
v___x_546_ = v___x_542_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_540_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
else
{
lean_dec(v___x_538_);
return v___x_539_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg___boxed(lean_object* v_x_553_, lean_object* v_methods_554_, lean_object* v_config_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(v_x_553_, v_methods_554_, v_config_555_, v_a_556_, v_a_557_, v_a_558_, v_a_559_, v_a_560_, v_a_561_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27(lean_object* v_00_u03b1_564_, lean_object* v_x_565_, lean_object* v_methods_566_, lean_object* v_config_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_){
_start:
{
lean_object* v___x_575_; 
v___x_575_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(v_x_565_, v_methods_566_, v_config_567_, v_a_568_, v_a_569_, v_a_570_, v_a_571_, v_a_572_, v_a_573_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_SimpM_run_x27___boxed(lean_object* v_00_u03b1_576_, lean_object* v_x_577_, lean_object* v_methods_578_, lean_object* v_config_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27(v_00_u03b1_576_, v_x_577_, v_methods_578_, v_config_579_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object* v_a_00___x40___internal___hyg_599_, lean_object* v_a_00___x40___internal___hyg_600_, lean_object* v_a_00___x40___internal___hyg_601_, lean_object* v_a_00___x40___internal___hyg_602_, lean_object* v_a_00___x40___internal___hyg_603_, lean_object* v_a_00___x40___internal___hyg_604_, lean_object* v_a_00___x40___internal___hyg_605_, lean_object* v_a_00___x40___internal___hyg_606_, lean_object* v_a_00___x40___internal___hyg_607_, lean_object* v_a_00___x40___internal___hyg_608_, lean_object* v_a_00___x40___internal___hyg_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = lean_sym_simp(v_a_00___x40___internal___hyg_599_, v_a_00___x40___internal___hyg_600_, v_a_00___x40___internal___hyg_601_, v_a_00___x40___internal___hyg_602_, v_a_00___x40___internal___hyg_603_, v_a_00___x40___internal___hyg_604_, v_a_00___x40___internal___hyg_605_, v_a_00___x40___internal___hyg_606_, v_a_00___x40___internal___hyg_607_, v_a_00___x40___internal___hyg_608_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg(lean_object* v_a_611_){
_start:
{
lean_object* v_config_613_; lean_object* v___x_614_; 
v_config_613_ = lean_ctor_get(v_a_611_, 0);
lean_inc_ref(v_config_613_);
v___x_614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_614_, 0, v_config_613_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___redArg___boxed(lean_object* v_a_615_, lean_object* v_a_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l_Lean_Meta_Sym_Simp_getConfig___redArg(v_a_615_);
lean_dec_ref(v_a_615_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig(lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_){
_start:
{
lean_object* v___x_628_; 
v___x_628_ = l_Lean_Meta_Sym_Simp_getConfig___redArg(v_a_619_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_getConfig___boxed(lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Lean_Meta_Sym_Simp_getConfig(v_a_629_, v_a_630_, v_a_631_, v_a_632_, v_a_633_, v_a_634_, v_a_635_, v_a_636_, v_a_637_);
lean_dec(v_a_637_);
lean_dec_ref(v_a_636_);
lean_dec(v_a_635_);
lean_dec_ref(v_a_634_);
lean_dec(v_a_633_);
lean_dec_ref(v_a_632_);
lean_dec(v_a_631_);
lean_dec_ref(v_a_630_);
lean_dec(v_a_629_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_pre(lean_object* v_e_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_, lean_object* v_a_647_, lean_object* v_a_648_, lean_object* v_a_649_){
_start:
{
lean_object* v_pre_651_; lean_object* v___x_652_; 
v_pre_651_ = lean_ctor_get(v_a_641_, 0);
lean_inc_ref(v_pre_651_);
v___x_652_ = lean_apply_11(v_pre_651_, v_e_640_, v_a_641_, v_a_642_, v_a_643_, v_a_644_, v_a_645_, v_a_646_, v_a_647_, v_a_648_, v_a_649_, lean_box(0));
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_pre___boxed(lean_object* v_e_653_, lean_object* v_a_654_, lean_object* v_a_655_, lean_object* v_a_656_, lean_object* v_a_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l_Lean_Meta_Sym_Simp_pre(v_e_653_, v_a_654_, v_a_655_, v_a_656_, v_a_657_, v_a_658_, v_a_659_, v_a_660_, v_a_661_, v_a_662_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_post(lean_object* v_e_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_){
_start:
{
lean_object* v_post_676_; lean_object* v___x_677_; 
v_post_676_ = lean_ctor_get(v_a_666_, 1);
lean_inc_ref(v_post_676_);
v___x_677_ = lean_apply_11(v_post_676_, v_e_665_, v_a_666_, v_a_667_, v_a_668_, v_a_669_, v_a_670_, v_a_671_, v_a_672_, v_a_673_, v_a_674_, lean_box(0));
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_post___boxed(lean_object* v_e_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l_Lean_Meta_Sym_Simp_post(v_e_678_, v_a_679_, v_a_680_, v_a_681_, v_a_682_, v_a_683_, v_a_684_, v_a_685_, v_a_686_, v_a_687_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(lean_object* v_a_690_, lean_object* v_persistentCache_691_, lean_object* v_transientCache_692_, lean_object* v_funext_693_, lean_object* v_a_x3f_694_){
_start:
{
lean_object* v___x_696_; lean_object* v_numSteps_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_707_; 
v___x_696_ = lean_st_ref_take(v_a_690_);
v_numSteps_697_ = lean_ctor_get(v___x_696_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_696_);
if (v_isSharedCheck_707_ == 0)
{
lean_object* v_unused_708_; lean_object* v_unused_709_; lean_object* v_unused_710_; 
v_unused_708_ = lean_ctor_get(v___x_696_, 3);
lean_dec(v_unused_708_);
v_unused_709_ = lean_ctor_get(v___x_696_, 2);
lean_dec(v_unused_709_);
v_unused_710_ = lean_ctor_get(v___x_696_, 1);
lean_dec(v_unused_710_);
v___x_699_ = v___x_696_;
v_isShared_700_ = v_isSharedCheck_707_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_numSteps_697_);
lean_dec(v___x_696_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_707_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_702_; 
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 3, v_funext_693_);
lean_ctor_set(v___x_699_, 2, v_transientCache_692_);
lean_ctor_set(v___x_699_, 1, v_persistentCache_691_);
v___x_702_ = v___x_699_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v_numSteps_697_);
lean_ctor_set(v_reuseFailAlloc_706_, 1, v_persistentCache_691_);
lean_ctor_set(v_reuseFailAlloc_706_, 2, v_transientCache_692_);
lean_ctor_set(v_reuseFailAlloc_706_, 3, v_funext_693_);
v___x_702_ = v_reuseFailAlloc_706_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_703_ = lean_st_ref_set(v_a_690_, v___x_702_);
v___x_704_ = lean_box(0);
v___x_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_705_, 0, v___x_704_);
return v___x_705_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0___boxed(lean_object* v_a_711_, lean_object* v_persistentCache_712_, lean_object* v_transientCache_713_, lean_object* v_funext_714_, lean_object* v_a_x3f_715_, lean_object* v___y_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v_a_711_, v_persistentCache_712_, v_transientCache_713_, v_funext_714_, v_a_x3f_715_);
lean_dec(v_a_x3f_715_);
lean_dec(v_a_711_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg(lean_object* v_k_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_){
_start:
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v_persistentCache_732_; lean_object* v_transientCache_733_; lean_object* v_funext_734_; lean_object* v_r_735_; 
v___x_729_ = lean_st_ref_get(v_a_721_);
v___x_730_ = lean_st_ref_get(v_a_721_);
v___x_731_ = lean_st_ref_get(v_a_721_);
v_persistentCache_732_ = lean_ctor_get(v___x_729_, 1);
lean_inc_ref(v_persistentCache_732_);
lean_dec(v___x_729_);
v_transientCache_733_ = lean_ctor_get(v___x_730_, 2);
lean_inc_ref(v_transientCache_733_);
lean_dec(v___x_730_);
v_funext_734_ = lean_ctor_get(v___x_731_, 3);
lean_inc_ref(v_funext_734_);
lean_dec(v___x_731_);
lean_inc(v_a_721_);
v_r_735_ = lean_apply_10(v_k_718_, v_a_719_, v_a_720_, v_a_721_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, lean_box(0));
if (lean_obj_tag(v_r_735_) == 0)
{
lean_object* v_a_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_752_; 
v_a_736_ = lean_ctor_get(v_r_735_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v_r_735_);
if (v_isSharedCheck_752_ == 0)
{
v___x_738_ = v_r_735_;
v_isShared_739_ = v_isSharedCheck_752_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_a_736_);
lean_dec(v_r_735_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_752_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_741_; 
lean_inc(v_a_736_);
if (v_isShared_739_ == 0)
{
lean_ctor_set_tag(v___x_738_, 1);
v___x_741_ = v___x_738_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_a_736_);
v___x_741_ = v_reuseFailAlloc_751_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v___x_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_749_; 
v___x_742_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v_a_721_, v_persistentCache_732_, v_transientCache_733_, v_funext_734_, v___x_741_);
lean_dec_ref(v___x_741_);
lean_dec(v_a_721_);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_742_);
if (v_isSharedCheck_749_ == 0)
{
lean_object* v_unused_750_; 
v_unused_750_ = lean_ctor_get(v___x_742_, 0);
lean_dec(v_unused_750_);
v___x_744_ = v___x_742_;
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
else
{
lean_dec(v___x_742_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_747_; 
if (v_isShared_745_ == 0)
{
lean_ctor_set(v___x_744_, 0, v_a_736_);
v___x_747_ = v___x_744_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_736_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
return v___x_747_;
}
}
}
}
}
else
{
lean_object* v_a_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
v_a_753_ = lean_ctor_get(v_r_735_, 0);
lean_inc(v_a_753_);
lean_dec_ref(v_r_735_);
v___x_754_ = lean_box(0);
v___x_755_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v_a_721_, v_persistentCache_732_, v_transientCache_733_, v_funext_734_, v___x_754_);
lean_dec(v_a_721_);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_755_);
if (v_isSharedCheck_762_ == 0)
{
lean_object* v_unused_763_; 
v_unused_763_ = lean_ctor_get(v___x_755_, 0);
lean_dec(v_unused_763_);
v___x_757_ = v___x_755_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_dec(v___x_755_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
lean_ctor_set_tag(v___x_757_, 1);
lean_ctor_set(v___x_757_, 0, v_a_753_);
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_753_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
return v___x_760_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___boxed(lean_object* v_k_764_, lean_object* v_a_765_, lean_object* v_a_766_, lean_object* v_a_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_){
_start:
{
lean_object* v_res_775_; 
v_res_775_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg(v_k_764_, v_a_765_, v_a_766_, v_a_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_, v_a_772_, v_a_773_);
return v_res_775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache(lean_object* v_00_u03b1_776_, lean_object* v_k_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_){
_start:
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v_persistentCache_791_; lean_object* v_transientCache_792_; lean_object* v_funext_793_; lean_object* v_r_794_; 
v___x_788_ = lean_st_ref_get(v_a_780_);
v___x_789_ = lean_st_ref_get(v_a_780_);
v___x_790_ = lean_st_ref_get(v_a_780_);
v_persistentCache_791_ = lean_ctor_get(v___x_788_, 1);
lean_inc_ref(v_persistentCache_791_);
lean_dec(v___x_788_);
v_transientCache_792_ = lean_ctor_get(v___x_789_, 2);
lean_inc_ref(v_transientCache_792_);
lean_dec(v___x_789_);
v_funext_793_ = lean_ctor_get(v___x_790_, 3);
lean_inc_ref(v_funext_793_);
lean_dec(v___x_790_);
lean_inc(v_a_780_);
v_r_794_ = lean_apply_10(v_k_777_, v_a_778_, v_a_779_, v_a_780_, v_a_781_, v_a_782_, v_a_783_, v_a_784_, v_a_785_, v_a_786_, lean_box(0));
if (lean_obj_tag(v_r_794_) == 0)
{
lean_object* v_a_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_811_; 
v_a_795_ = lean_ctor_get(v_r_794_, 0);
v_isSharedCheck_811_ = !lean_is_exclusive(v_r_794_);
if (v_isSharedCheck_811_ == 0)
{
v___x_797_ = v_r_794_;
v_isShared_798_ = v_isSharedCheck_811_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_a_795_);
lean_dec(v_r_794_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_811_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
lean_inc(v_a_795_);
if (v_isShared_798_ == 0)
{
lean_ctor_set_tag(v___x_797_, 1);
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_a_795_);
v___x_800_ = v_reuseFailAlloc_810_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
lean_object* v___x_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_808_; 
v___x_801_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v_a_780_, v_persistentCache_791_, v_transientCache_792_, v_funext_793_, v___x_800_);
lean_dec_ref(v___x_800_);
lean_dec(v_a_780_);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_808_ == 0)
{
lean_object* v_unused_809_; 
v_unused_809_ = lean_ctor_get(v___x_801_, 0);
lean_dec(v_unused_809_);
v___x_803_ = v___x_801_;
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
else
{
lean_dec(v___x_801_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_806_; 
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 0, v_a_795_);
v___x_806_ = v___x_803_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_a_795_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
}
}
else
{
lean_object* v_a_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
v_a_812_ = lean_ctor_get(v_r_794_, 0);
lean_inc(v_a_812_);
lean_dec_ref(v_r_794_);
v___x_813_ = lean_box(0);
v___x_814_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache___redArg___lam__0(v_a_780_, v_persistentCache_791_, v_transientCache_792_, v_funext_793_, v___x_813_);
lean_dec(v_a_780_);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_821_ == 0)
{
lean_object* v_unused_822_; 
v_unused_822_ = lean_ctor_get(v___x_814_, 0);
lean_dec(v_unused_822_);
v___x_816_ = v___x_814_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_dec(v___x_814_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
lean_ctor_set_tag(v___x_816_, 1);
lean_ctor_set(v___x_816_, 0, v_a_812_);
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_812_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withoutModifyingCache___boxed(lean_object* v_00_u03b1_823_, lean_object* v_k_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l_Lean_Meta_Sym_Simp_withoutModifyingCache(v_00_u03b1_823_, v_k_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_, v_a_831_, v_a_832_, v_a_833_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(lean_object* v_a_836_, lean_object* v_transientCache_837_, lean_object* v_funext_838_, lean_object* v_a_x3f_839_){
_start:
{
lean_object* v___x_841_; lean_object* v_numSteps_842_; lean_object* v_persistentCache_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_853_; 
v___x_841_ = lean_st_ref_take(v_a_836_);
v_numSteps_842_ = lean_ctor_get(v___x_841_, 0);
v_persistentCache_843_ = lean_ctor_get(v___x_841_, 1);
v_isSharedCheck_853_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_853_ == 0)
{
lean_object* v_unused_854_; lean_object* v_unused_855_; 
v_unused_854_ = lean_ctor_get(v___x_841_, 3);
lean_dec(v_unused_854_);
v_unused_855_ = lean_ctor_get(v___x_841_, 2);
lean_dec(v_unused_855_);
v___x_845_ = v___x_841_;
v_isShared_846_ = v_isSharedCheck_853_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_persistentCache_843_);
lean_inc(v_numSteps_842_);
lean_dec(v___x_841_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_853_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_848_; 
if (v_isShared_846_ == 0)
{
lean_ctor_set(v___x_845_, 3, v_funext_838_);
lean_ctor_set(v___x_845_, 2, v_transientCache_837_);
v___x_848_ = v___x_845_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_numSteps_842_);
lean_ctor_set(v_reuseFailAlloc_852_, 1, v_persistentCache_843_);
lean_ctor_set(v_reuseFailAlloc_852_, 2, v_transientCache_837_);
lean_ctor_set(v_reuseFailAlloc_852_, 3, v_funext_838_);
v___x_848_ = v_reuseFailAlloc_852_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_849_ = lean_st_ref_set(v_a_836_, v___x_848_);
v___x_850_ = lean_box(0);
v___x_851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_851_, 0, v___x_850_);
return v___x_851_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0___boxed(lean_object* v_a_856_, lean_object* v_transientCache_857_, lean_object* v_funext_858_, lean_object* v_a_x3f_859_, lean_object* v___y_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v_a_856_, v_transientCache_857_, v_funext_858_, v_a_x3f_859_);
lean_dec(v_a_x3f_859_);
lean_dec(v_a_856_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg(lean_object* v_k_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_){
_start:
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v_transientCache_875_; lean_object* v_funext_876_; lean_object* v_r_877_; 
v___x_873_ = lean_st_ref_get(v_a_865_);
v___x_874_ = lean_st_ref_get(v_a_865_);
v_transientCache_875_ = lean_ctor_get(v___x_873_, 2);
lean_inc_ref(v_transientCache_875_);
lean_dec(v___x_873_);
v_funext_876_ = lean_ctor_get(v___x_874_, 3);
lean_inc_ref(v_funext_876_);
lean_dec(v___x_874_);
lean_inc(v_a_865_);
v_r_877_ = lean_apply_10(v_k_862_, v_a_863_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, lean_box(0));
if (lean_obj_tag(v_r_877_) == 0)
{
lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_894_; 
v_a_878_ = lean_ctor_get(v_r_877_, 0);
v_isSharedCheck_894_ = !lean_is_exclusive(v_r_877_);
if (v_isSharedCheck_894_ == 0)
{
v___x_880_ = v_r_877_;
v_isShared_881_ = v_isSharedCheck_894_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v_r_877_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_894_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_883_; 
lean_inc(v_a_878_);
if (v_isShared_881_ == 0)
{
lean_ctor_set_tag(v___x_880_, 1);
v___x_883_ = v___x_880_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_a_878_);
v___x_883_ = v_reuseFailAlloc_893_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
lean_object* v___x_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_891_; 
v___x_884_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v_a_865_, v_transientCache_875_, v_funext_876_, v___x_883_);
lean_dec_ref(v___x_883_);
lean_dec(v_a_865_);
v_isSharedCheck_891_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_891_ == 0)
{
lean_object* v_unused_892_; 
v_unused_892_ = lean_ctor_get(v___x_884_, 0);
lean_dec(v_unused_892_);
v___x_886_ = v___x_884_;
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
else
{
lean_dec(v___x_884_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_891_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___x_889_; 
if (v_isShared_887_ == 0)
{
lean_ctor_set(v___x_886_, 0, v_a_878_);
v___x_889_ = v___x_886_;
goto v_reusejp_888_;
}
else
{
lean_object* v_reuseFailAlloc_890_; 
v_reuseFailAlloc_890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_890_, 0, v_a_878_);
v___x_889_ = v_reuseFailAlloc_890_;
goto v_reusejp_888_;
}
v_reusejp_888_:
{
return v___x_889_;
}
}
}
}
}
else
{
lean_object* v_a_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_899_; uint8_t v_isShared_900_; uint8_t v_isSharedCheck_904_; 
v_a_895_ = lean_ctor_get(v_r_877_, 0);
lean_inc(v_a_895_);
lean_dec_ref(v_r_877_);
v___x_896_ = lean_box(0);
v___x_897_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v_a_865_, v_transientCache_875_, v_funext_876_, v___x_896_);
lean_dec(v_a_865_);
v_isSharedCheck_904_ = !lean_is_exclusive(v___x_897_);
if (v_isSharedCheck_904_ == 0)
{
lean_object* v_unused_905_; 
v_unused_905_ = lean_ctor_get(v___x_897_, 0);
lean_dec(v_unused_905_);
v___x_899_ = v___x_897_;
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
else
{
lean_dec(v___x_897_);
v___x_899_ = lean_box(0);
v_isShared_900_ = v_isSharedCheck_904_;
goto v_resetjp_898_;
}
v_resetjp_898_:
{
lean_object* v___x_902_; 
if (v_isShared_900_ == 0)
{
lean_ctor_set_tag(v___x_899_, 1);
lean_ctor_set(v___x_899_, 0, v_a_895_);
v___x_902_ = v___x_899_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_a_895_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___boxed(lean_object* v_k_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg(v_k_906_, v_a_907_, v_a_908_, v_a_909_, v_a_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache(lean_object* v_00_u03b1_918_, lean_object* v_k_919_, lean_object* v_a_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_){
_start:
{
lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v_transientCache_932_; lean_object* v_funext_933_; lean_object* v_r_934_; 
v___x_930_ = lean_st_ref_get(v_a_922_);
v___x_931_ = lean_st_ref_get(v_a_922_);
v_transientCache_932_ = lean_ctor_get(v___x_930_, 2);
lean_inc_ref(v_transientCache_932_);
lean_dec(v___x_930_);
v_funext_933_ = lean_ctor_get(v___x_931_, 3);
lean_inc_ref(v_funext_933_);
lean_dec(v___x_931_);
lean_inc(v_a_922_);
v_r_934_ = lean_apply_10(v_k_919_, v_a_920_, v_a_921_, v_a_922_, v_a_923_, v_a_924_, v_a_925_, v_a_926_, v_a_927_, v_a_928_, lean_box(0));
if (lean_obj_tag(v_r_934_) == 0)
{
lean_object* v_a_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_951_; 
v_a_935_ = lean_ctor_get(v_r_934_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v_r_934_);
if (v_isSharedCheck_951_ == 0)
{
v___x_937_ = v_r_934_;
v_isShared_938_ = v_isSharedCheck_951_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_a_935_);
lean_dec(v_r_934_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_951_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_940_; 
lean_inc(v_a_935_);
if (v_isShared_938_ == 0)
{
lean_ctor_set_tag(v___x_937_, 1);
v___x_940_ = v___x_937_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_a_935_);
v___x_940_ = v_reuseFailAlloc_950_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
lean_object* v___x_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_948_; 
v___x_941_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v_a_922_, v_transientCache_932_, v_funext_933_, v___x_940_);
lean_dec_ref(v___x_940_);
lean_dec(v_a_922_);
v_isSharedCheck_948_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_948_ == 0)
{
lean_object* v_unused_949_; 
v_unused_949_ = lean_ctor_get(v___x_941_, 0);
lean_dec(v_unused_949_);
v___x_943_ = v___x_941_;
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
else
{
lean_dec(v___x_941_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_946_; 
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 0, v_a_935_);
v___x_946_ = v___x_943_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_a_935_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
return v___x_946_;
}
}
}
}
}
else
{
lean_object* v_a_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
v_a_952_ = lean_ctor_get(v_r_934_, 0);
lean_inc(v_a_952_);
lean_dec_ref(v_r_934_);
v___x_953_ = lean_box(0);
v___x_954_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache___redArg___lam__0(v_a_922_, v_transientCache_932_, v_funext_933_, v___x_953_);
lean_dec(v_a_922_);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_961_ == 0)
{
lean_object* v_unused_962_; 
v_unused_962_ = lean_ctor_get(v___x_954_, 0);
lean_dec(v_unused_962_);
v___x_956_ = v___x_954_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_dec(v___x_954_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set_tag(v___x_956_, 1);
lean_ctor_set(v___x_956_, 0, v_a_952_);
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_952_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_withFreshTransientCache___boxed(lean_object* v_00_u03b1_963_, lean_object* v_k_964_, lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lean_Meta_Sym_Simp_withFreshTransientCache(v_00_u03b1_963_, v_k_964_, v_a_965_, v_a_966_, v_a_967_, v_a_968_, v_a_969_, v_a_970_, v_a_971_, v_a_972_, v_a_973_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_simp(lean_object* v_e_976_, lean_object* v_methods_977_, lean_object* v_config_978_, lean_object* v_a_979_, lean_object* v_a_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_){
_start:
{
lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_986_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_986_, 0, v_e_976_);
v___x_987_ = l_Lean_Meta_Sym_Simp_SimpM_run_x27___redArg(v___x_986_, v_methods_977_, v_config_978_, v_a_979_, v_a_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_simp___boxed(lean_object* v_e_988_, lean_object* v_methods_989_, lean_object* v_config_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = l_Lean_Meta_Sym_simp(v_e_988_, v_methods_989_, v_config_990_, v_a_991_, v_a_992_, v_a_993_, v_a_994_, v_a_995_, v_a_996_);
return v_res_998_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Sym_Simp_SimpM_0__Lean_Meta_Sym_Simp_MethodsRefPointed = _init_l___private_Lean_Meta_Sym_Simp_SimpM_0__Lean_Meta_Sym_Simp_MethodsRefPointed();
l_Lean_Meta_Sym_Simp_instInhabitedMethods_default = _init_l_Lean_Meta_Sym_Simp_instInhabitedMethods_default();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_instInhabitedMethods_default);
l_Lean_Meta_Sym_Simp_instInhabitedMethods = _init_l_Lean_Meta_Sym_Simp_instInhabitedMethods();
lean_mark_persistent(l_Lean_Meta_Sym_Simp_instInhabitedMethods);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_SimpM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_SimpM(builtin);
}
#ifdef __cplusplus
}
#endif
