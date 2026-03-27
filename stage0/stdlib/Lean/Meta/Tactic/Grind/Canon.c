// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Canon
// Imports: public import Lean.Meta.Tactic.Grind.Types import Init.Grind.Util import Lean.Meta.IntInstTesters import Lean.Meta.NatInstTesters import Lean.Meta.Tactic.Grind.SynthInstance
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
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
uint64_t l_Lean_Meta_Grind_instHashableCanonArgKey_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_instBEqCanonArgKey_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEqD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_updateLastTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_Grind_getBuiltinInstance_x3f(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeFormer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_ParamInfo_isImplicit(lean_object*);
uint64_t l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(lean_object*);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Structural_isInstOfNatInt___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Int_mkType;
lean_object* l_Lean_Meta_Structural_isInstOfNatNat___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Nat_mkType;
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getNatValue_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
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
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_get_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_get_x27___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_get_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_get_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_modify_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_modify_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_modify_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_modify_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "canon"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__2_value),LEAN_SCALAR_PTR_LITERAL(167, 176, 122, 242, 104, 29, 193, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "found "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " ===> "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 4, .m_data = ") ↦ "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonType___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonInst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonInst___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImplicit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImplicit___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImplicit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImplicit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonType_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonType_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonType_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonType_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonInst_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonInst_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonInst_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonInst_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonImplicit_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonImplicit_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonImplicit_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonImplicit_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_visit_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_visit_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_visit_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_visit_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instInhabitedShouldCanonResult_default;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instInhabitedShouldCanonResult;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "canonType"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "canonInst"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__2_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "canonImplicit"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__4_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "visit"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__6_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_shouldCanon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_shouldCanon___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Canon_isSupport(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Canon_isSupport___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__2_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__4_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__1_spec__4_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__0;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Meta.Tactic.Grind.Canon"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "_private.Lean.Meta.Tactic.Grind.Canon.0.Lean.Meta.Grind.Canon.canonImpl.visit"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__4;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "nestedDecidable"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__2_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__3_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__3_value_aux_1),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(65, 76, 105, 85, 179, 183, 200, 153)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__5;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "]: "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__6_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__7;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__8_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__9;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "nestedProof"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___closed__1_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___closed__1_value_aux_1),((lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(182, 140, 29, 19, 223, 104, 218, 25)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___boxed(lean_object**);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__1_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Grind_Canon_canonImpl_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Grind_Canon_canonImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Grind_Canon_canonImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Grind_Canon_canonImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Canon_canonImpl___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Canon_canonImpl___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Canon_canonImpl___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Canon_canonImpl___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Canon_canonImpl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Canon_canonImpl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Canon_canonImpl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "grind canon"};
static const lean_object* l_Lean_Meta_Grind_Canon_canonImpl___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Canon_canonImpl___closed__0_value;
LEAN_EXPORT lean_object* lean_grind_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Canon_canonImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_get_x27___redArg(lean_object* v_a_1_){
_start:
{
lean_object* v___x_3_; lean_object* v_toGoalState_4_; lean_object* v_canon_5_; lean_object* v___x_6_; 
v___x_3_ = lean_st_ref_get(v_a_1_);
v_toGoalState_4_ = lean_ctor_get(v___x_3_, 0);
lean_inc_ref(v_toGoalState_4_);
lean_dec(v___x_3_);
v_canon_5_ = lean_ctor_get(v_toGoalState_4_, 1);
lean_inc_ref(v_canon_5_);
lean_dec_ref(v_toGoalState_4_);
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v_canon_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_get_x27___redArg___boxed(lean_object* v_a_7_, lean_object* v_a_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_get_x27___redArg(v_a_7_);
lean_dec(v_a_7_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_get_x27(lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_, lean_object* v_a_14_, lean_object* v_a_15_, lean_object* v_a_16_, lean_object* v_a_17_, lean_object* v_a_18_, lean_object* v_a_19_){
_start:
{
lean_object* v___x_21_; lean_object* v_toGoalState_22_; lean_object* v_canon_23_; lean_object* v___x_24_; 
v___x_21_ = lean_st_ref_get(v_a_10_);
v_toGoalState_22_ = lean_ctor_get(v___x_21_, 0);
lean_inc_ref(v_toGoalState_22_);
lean_dec(v___x_21_);
v_canon_23_ = lean_ctor_get(v_toGoalState_22_, 1);
lean_inc_ref(v_canon_23_);
lean_dec_ref(v_toGoalState_22_);
v___x_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_24_, 0, v_canon_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_get_x27___boxed(lean_object* v_a_25_, lean_object* v_a_26_, lean_object* v_a_27_, lean_object* v_a_28_, lean_object* v_a_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_get_x27(v_a_25_, v_a_26_, v_a_27_, v_a_28_, v_a_29_, v_a_30_, v_a_31_, v_a_32_, v_a_33_, v_a_34_);
lean_dec(v_a_34_);
lean_dec_ref(v_a_33_);
lean_dec(v_a_32_);
lean_dec_ref(v_a_31_);
lean_dec(v_a_30_);
lean_dec_ref(v_a_29_);
lean_dec(v_a_28_);
lean_dec_ref(v_a_27_);
lean_dec(v_a_26_);
lean_dec(v_a_25_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_modify_x27___redArg(lean_object* v_f_37_, lean_object* v_a_38_){
_start:
{
lean_object* v___x_40_; lean_object* v_toGoalState_41_; lean_object* v_mvarId_42_; lean_object* v___x_44_; uint8_t v_isShared_45_; uint8_t v_isSharedCheck_79_; 
v___x_40_ = lean_st_ref_take(v_a_38_);
v_toGoalState_41_ = lean_ctor_get(v___x_40_, 0);
v_mvarId_42_ = lean_ctor_get(v___x_40_, 1);
v_isSharedCheck_79_ = !lean_is_exclusive(v___x_40_);
if (v_isSharedCheck_79_ == 0)
{
v___x_44_ = v___x_40_;
v_isShared_45_ = v_isSharedCheck_79_;
goto v_resetjp_43_;
}
else
{
lean_inc(v_mvarId_42_);
lean_inc(v_toGoalState_41_);
lean_dec(v___x_40_);
v___x_44_ = lean_box(0);
v_isShared_45_ = v_isSharedCheck_79_;
goto v_resetjp_43_;
}
v_resetjp_43_:
{
lean_object* v_nextDeclIdx_46_; lean_object* v_canon_47_; lean_object* v_enodeMap_48_; lean_object* v_exprs_49_; lean_object* v_parents_50_; lean_object* v_congrTable_51_; lean_object* v_appMap_52_; lean_object* v_indicesFound_53_; lean_object* v_newFacts_54_; uint8_t v_inconsistent_55_; lean_object* v_nextIdx_56_; lean_object* v_newRawFacts_57_; lean_object* v_facts_58_; lean_object* v_extThms_59_; lean_object* v_ematch_60_; lean_object* v_inj_61_; lean_object* v_split_62_; lean_object* v_clean_63_; lean_object* v_sstates_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_78_; 
v_nextDeclIdx_46_ = lean_ctor_get(v_toGoalState_41_, 0);
v_canon_47_ = lean_ctor_get(v_toGoalState_41_, 1);
v_enodeMap_48_ = lean_ctor_get(v_toGoalState_41_, 2);
v_exprs_49_ = lean_ctor_get(v_toGoalState_41_, 3);
v_parents_50_ = lean_ctor_get(v_toGoalState_41_, 4);
v_congrTable_51_ = lean_ctor_get(v_toGoalState_41_, 5);
v_appMap_52_ = lean_ctor_get(v_toGoalState_41_, 6);
v_indicesFound_53_ = lean_ctor_get(v_toGoalState_41_, 7);
v_newFacts_54_ = lean_ctor_get(v_toGoalState_41_, 8);
v_inconsistent_55_ = lean_ctor_get_uint8(v_toGoalState_41_, sizeof(void*)*18);
v_nextIdx_56_ = lean_ctor_get(v_toGoalState_41_, 9);
v_newRawFacts_57_ = lean_ctor_get(v_toGoalState_41_, 10);
v_facts_58_ = lean_ctor_get(v_toGoalState_41_, 11);
v_extThms_59_ = lean_ctor_get(v_toGoalState_41_, 12);
v_ematch_60_ = lean_ctor_get(v_toGoalState_41_, 13);
v_inj_61_ = lean_ctor_get(v_toGoalState_41_, 14);
v_split_62_ = lean_ctor_get(v_toGoalState_41_, 15);
v_clean_63_ = lean_ctor_get(v_toGoalState_41_, 16);
v_sstates_64_ = lean_ctor_get(v_toGoalState_41_, 17);
v_isSharedCheck_78_ = !lean_is_exclusive(v_toGoalState_41_);
if (v_isSharedCheck_78_ == 0)
{
v___x_66_ = v_toGoalState_41_;
v_isShared_67_ = v_isSharedCheck_78_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_sstates_64_);
lean_inc(v_clean_63_);
lean_inc(v_split_62_);
lean_inc(v_inj_61_);
lean_inc(v_ematch_60_);
lean_inc(v_extThms_59_);
lean_inc(v_facts_58_);
lean_inc(v_newRawFacts_57_);
lean_inc(v_nextIdx_56_);
lean_inc(v_newFacts_54_);
lean_inc(v_indicesFound_53_);
lean_inc(v_appMap_52_);
lean_inc(v_congrTable_51_);
lean_inc(v_parents_50_);
lean_inc(v_exprs_49_);
lean_inc(v_enodeMap_48_);
lean_inc(v_canon_47_);
lean_inc(v_nextDeclIdx_46_);
lean_dec(v_toGoalState_41_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_78_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___x_68_; lean_object* v___x_70_; 
v___x_68_ = lean_apply_1(v_f_37_, v_canon_47_);
if (v_isShared_67_ == 0)
{
lean_ctor_set(v___x_66_, 1, v___x_68_);
v___x_70_ = v___x_66_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 18, 1);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v_nextDeclIdx_46_);
lean_ctor_set(v_reuseFailAlloc_77_, 1, v___x_68_);
lean_ctor_set(v_reuseFailAlloc_77_, 2, v_enodeMap_48_);
lean_ctor_set(v_reuseFailAlloc_77_, 3, v_exprs_49_);
lean_ctor_set(v_reuseFailAlloc_77_, 4, v_parents_50_);
lean_ctor_set(v_reuseFailAlloc_77_, 5, v_congrTable_51_);
lean_ctor_set(v_reuseFailAlloc_77_, 6, v_appMap_52_);
lean_ctor_set(v_reuseFailAlloc_77_, 7, v_indicesFound_53_);
lean_ctor_set(v_reuseFailAlloc_77_, 8, v_newFacts_54_);
lean_ctor_set(v_reuseFailAlloc_77_, 9, v_nextIdx_56_);
lean_ctor_set(v_reuseFailAlloc_77_, 10, v_newRawFacts_57_);
lean_ctor_set(v_reuseFailAlloc_77_, 11, v_facts_58_);
lean_ctor_set(v_reuseFailAlloc_77_, 12, v_extThms_59_);
lean_ctor_set(v_reuseFailAlloc_77_, 13, v_ematch_60_);
lean_ctor_set(v_reuseFailAlloc_77_, 14, v_inj_61_);
lean_ctor_set(v_reuseFailAlloc_77_, 15, v_split_62_);
lean_ctor_set(v_reuseFailAlloc_77_, 16, v_clean_63_);
lean_ctor_set(v_reuseFailAlloc_77_, 17, v_sstates_64_);
lean_ctor_set_uint8(v_reuseFailAlloc_77_, sizeof(void*)*18, v_inconsistent_55_);
v___x_70_ = v_reuseFailAlloc_77_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
lean_object* v___x_72_; 
if (v_isShared_45_ == 0)
{
lean_ctor_set(v___x_44_, 0, v___x_70_);
v___x_72_ = v___x_44_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v___x_70_);
lean_ctor_set(v_reuseFailAlloc_76_, 1, v_mvarId_42_);
v___x_72_ = v_reuseFailAlloc_76_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_73_ = lean_st_ref_set(v_a_38_, v___x_72_);
v___x_74_ = lean_box(0);
v___x_75_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
return v___x_75_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_modify_x27___redArg___boxed(lean_object* v_f_80_, lean_object* v_a_81_, lean_object* v_a_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_modify_x27___redArg(v_f_80_, v_a_81_);
lean_dec(v_a_81_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_modify_x27(lean_object* v_f_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_){
_start:
{
lean_object* v___x_96_; lean_object* v_toGoalState_97_; lean_object* v_mvarId_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_135_; 
v___x_96_ = lean_st_ref_take(v_a_85_);
v_toGoalState_97_ = lean_ctor_get(v___x_96_, 0);
v_mvarId_98_ = lean_ctor_get(v___x_96_, 1);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_135_ == 0)
{
v___x_100_ = v___x_96_;
v_isShared_101_ = v_isSharedCheck_135_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_mvarId_98_);
lean_inc(v_toGoalState_97_);
lean_dec(v___x_96_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_135_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v_nextDeclIdx_102_; lean_object* v_canon_103_; lean_object* v_enodeMap_104_; lean_object* v_exprs_105_; lean_object* v_parents_106_; lean_object* v_congrTable_107_; lean_object* v_appMap_108_; lean_object* v_indicesFound_109_; lean_object* v_newFacts_110_; uint8_t v_inconsistent_111_; lean_object* v_nextIdx_112_; lean_object* v_newRawFacts_113_; lean_object* v_facts_114_; lean_object* v_extThms_115_; lean_object* v_ematch_116_; lean_object* v_inj_117_; lean_object* v_split_118_; lean_object* v_clean_119_; lean_object* v_sstates_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_134_; 
v_nextDeclIdx_102_ = lean_ctor_get(v_toGoalState_97_, 0);
v_canon_103_ = lean_ctor_get(v_toGoalState_97_, 1);
v_enodeMap_104_ = lean_ctor_get(v_toGoalState_97_, 2);
v_exprs_105_ = lean_ctor_get(v_toGoalState_97_, 3);
v_parents_106_ = lean_ctor_get(v_toGoalState_97_, 4);
v_congrTable_107_ = lean_ctor_get(v_toGoalState_97_, 5);
v_appMap_108_ = lean_ctor_get(v_toGoalState_97_, 6);
v_indicesFound_109_ = lean_ctor_get(v_toGoalState_97_, 7);
v_newFacts_110_ = lean_ctor_get(v_toGoalState_97_, 8);
v_inconsistent_111_ = lean_ctor_get_uint8(v_toGoalState_97_, sizeof(void*)*18);
v_nextIdx_112_ = lean_ctor_get(v_toGoalState_97_, 9);
v_newRawFacts_113_ = lean_ctor_get(v_toGoalState_97_, 10);
v_facts_114_ = lean_ctor_get(v_toGoalState_97_, 11);
v_extThms_115_ = lean_ctor_get(v_toGoalState_97_, 12);
v_ematch_116_ = lean_ctor_get(v_toGoalState_97_, 13);
v_inj_117_ = lean_ctor_get(v_toGoalState_97_, 14);
v_split_118_ = lean_ctor_get(v_toGoalState_97_, 15);
v_clean_119_ = lean_ctor_get(v_toGoalState_97_, 16);
v_sstates_120_ = lean_ctor_get(v_toGoalState_97_, 17);
v_isSharedCheck_134_ = !lean_is_exclusive(v_toGoalState_97_);
if (v_isSharedCheck_134_ == 0)
{
v___x_122_ = v_toGoalState_97_;
v_isShared_123_ = v_isSharedCheck_134_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_sstates_120_);
lean_inc(v_clean_119_);
lean_inc(v_split_118_);
lean_inc(v_inj_117_);
lean_inc(v_ematch_116_);
lean_inc(v_extThms_115_);
lean_inc(v_facts_114_);
lean_inc(v_newRawFacts_113_);
lean_inc(v_nextIdx_112_);
lean_inc(v_newFacts_110_);
lean_inc(v_indicesFound_109_);
lean_inc(v_appMap_108_);
lean_inc(v_congrTable_107_);
lean_inc(v_parents_106_);
lean_inc(v_exprs_105_);
lean_inc(v_enodeMap_104_);
lean_inc(v_canon_103_);
lean_inc(v_nextDeclIdx_102_);
lean_dec(v_toGoalState_97_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_134_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_124_; lean_object* v___x_126_; 
v___x_124_ = lean_apply_1(v_f_84_, v_canon_103_);
if (v_isShared_123_ == 0)
{
lean_ctor_set(v___x_122_, 1, v___x_124_);
v___x_126_ = v___x_122_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 18, 1);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v_nextDeclIdx_102_);
lean_ctor_set(v_reuseFailAlloc_133_, 1, v___x_124_);
lean_ctor_set(v_reuseFailAlloc_133_, 2, v_enodeMap_104_);
lean_ctor_set(v_reuseFailAlloc_133_, 3, v_exprs_105_);
lean_ctor_set(v_reuseFailAlloc_133_, 4, v_parents_106_);
lean_ctor_set(v_reuseFailAlloc_133_, 5, v_congrTable_107_);
lean_ctor_set(v_reuseFailAlloc_133_, 6, v_appMap_108_);
lean_ctor_set(v_reuseFailAlloc_133_, 7, v_indicesFound_109_);
lean_ctor_set(v_reuseFailAlloc_133_, 8, v_newFacts_110_);
lean_ctor_set(v_reuseFailAlloc_133_, 9, v_nextIdx_112_);
lean_ctor_set(v_reuseFailAlloc_133_, 10, v_newRawFacts_113_);
lean_ctor_set(v_reuseFailAlloc_133_, 11, v_facts_114_);
lean_ctor_set(v_reuseFailAlloc_133_, 12, v_extThms_115_);
lean_ctor_set(v_reuseFailAlloc_133_, 13, v_ematch_116_);
lean_ctor_set(v_reuseFailAlloc_133_, 14, v_inj_117_);
lean_ctor_set(v_reuseFailAlloc_133_, 15, v_split_118_);
lean_ctor_set(v_reuseFailAlloc_133_, 16, v_clean_119_);
lean_ctor_set(v_reuseFailAlloc_133_, 17, v_sstates_120_);
lean_ctor_set_uint8(v_reuseFailAlloc_133_, sizeof(void*)*18, v_inconsistent_111_);
v___x_126_ = v_reuseFailAlloc_133_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
lean_object* v___x_128_; 
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 0, v___x_126_);
v___x_128_ = v___x_100_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v___x_126_);
lean_ctor_set(v_reuseFailAlloc_132_, 1, v_mvarId_98_);
v___x_128_ = v_reuseFailAlloc_132_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_129_ = lean_st_ref_set(v_a_85_, v___x_128_);
v___x_130_ = lean_box(0);
v___x_131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_131_, 0, v___x_130_);
return v___x_131_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_modify_x27___boxed(lean_object* v_f_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_modify_x27(v_f_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_);
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
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___redArg(lean_object* v_cls_152_, lean_object* v___y_153_){
_start:
{
lean_object* v_options_155_; uint8_t v_hasTrace_156_; 
v_options_155_ = lean_ctor_get(v___y_153_, 2);
v_hasTrace_156_ = lean_ctor_get_uint8(v_options_155_, sizeof(void*)*1);
if (v_hasTrace_156_ == 0)
{
lean_object* v___x_157_; lean_object* v___x_158_; 
lean_dec(v_cls_152_);
v___x_157_ = lean_box(v_hasTrace_156_);
v___x_158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_158_, 0, v___x_157_);
return v___x_158_;
}
else
{
lean_object* v_inheritedTraceOptions_159_; lean_object* v___x_160_; lean_object* v___x_161_; uint8_t v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v_inheritedTraceOptions_159_ = lean_ctor_get(v___y_153_, 13);
v___x_160_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___redArg___closed__1));
v___x_161_ = l_Lean_Name_append(v___x_160_, v_cls_152_);
v___x_162_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_159_, v_options_155_, v___x_161_);
lean_dec(v___x_161_);
v___x_163_ = lean_box(v___x_162_);
v___x_164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
return v___x_164_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___redArg___boxed(lean_object* v_cls_165_, lean_object* v___y_166_, lean_object* v___y_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___redArg(v_cls_165_, v___y_166_);
lean_dec_ref(v___y_166_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0(lean_object* v_cls_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_){
_start:
{
lean_object* v___x_181_; 
v___x_181_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___redArg(v_cls_169_, v___y_178_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___boxed(lean_object* v_cls_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0(v_cls_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_, v___y_192_);
lean_dec(v___y_192_);
lean_dec_ref(v___y_191_);
lean_dec(v___y_190_);
lean_dec_ref(v___y_189_);
lean_dec(v___y_188_);
lean_dec_ref(v___y_187_);
lean_dec(v___y_186_);
lean_dec_ref(v___y_185_);
lean_dec(v___y_184_);
lean_dec(v___y_183_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1_spec__1(lean_object* v_msgData_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
lean_object* v___x_201_; lean_object* v_env_202_; lean_object* v___x_203_; lean_object* v_mctx_204_; lean_object* v_lctx_205_; lean_object* v_options_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_201_ = lean_st_ref_get(v___y_199_);
v_env_202_ = lean_ctor_get(v___x_201_, 0);
lean_inc_ref(v_env_202_);
lean_dec(v___x_201_);
v___x_203_ = lean_st_ref_get(v___y_197_);
v_mctx_204_ = lean_ctor_get(v___x_203_, 0);
lean_inc_ref(v_mctx_204_);
lean_dec(v___x_203_);
v_lctx_205_ = lean_ctor_get(v___y_196_, 2);
v_options_206_ = lean_ctor_get(v___y_198_, 2);
lean_inc_ref(v_options_206_);
lean_inc_ref(v_lctx_205_);
v___x_207_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_207_, 0, v_env_202_);
lean_ctor_set(v___x_207_, 1, v_mctx_204_);
lean_ctor_set(v___x_207_, 2, v_lctx_205_);
lean_ctor_set(v___x_207_, 3, v_options_206_);
v___x_208_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
lean_ctor_set(v___x_208_, 1, v_msgData_195_);
v___x_209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1_spec__1___boxed(lean_object* v_msgData_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1_spec__1(v_msgData_210_, v___y_211_, v___y_212_, v___y_213_, v___y_214_);
lean_dec(v___y_214_);
lean_dec_ref(v___y_213_);
lean_dec(v___y_212_);
lean_dec_ref(v___y_211_);
return v_res_216_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_217_; double v___x_218_; 
v___x_217_ = lean_unsigned_to_nat(0u);
v___x_218_ = lean_float_of_nat(v___x_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg(lean_object* v_cls_222_, lean_object* v_msg_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_){
_start:
{
lean_object* v_ref_229_; lean_object* v___x_230_; lean_object* v_a_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_275_; 
v_ref_229_ = lean_ctor_get(v___y_226_, 5);
v___x_230_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1_spec__1(v_msg_223_, v___y_224_, v___y_225_, v___y_226_, v___y_227_);
v_a_231_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_275_ == 0)
{
v___x_233_ = v___x_230_;
v_isShared_234_ = v_isSharedCheck_275_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_a_231_);
lean_dec(v___x_230_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_275_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_235_; lean_object* v_traceState_236_; lean_object* v_env_237_; lean_object* v_nextMacroScope_238_; lean_object* v_ngen_239_; lean_object* v_auxDeclNGen_240_; lean_object* v_cache_241_; lean_object* v_messages_242_; lean_object* v_infoState_243_; lean_object* v_snapshotTasks_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_274_; 
v___x_235_ = lean_st_ref_take(v___y_227_);
v_traceState_236_ = lean_ctor_get(v___x_235_, 4);
v_env_237_ = lean_ctor_get(v___x_235_, 0);
v_nextMacroScope_238_ = lean_ctor_get(v___x_235_, 1);
v_ngen_239_ = lean_ctor_get(v___x_235_, 2);
v_auxDeclNGen_240_ = lean_ctor_get(v___x_235_, 3);
v_cache_241_ = lean_ctor_get(v___x_235_, 5);
v_messages_242_ = lean_ctor_get(v___x_235_, 6);
v_infoState_243_ = lean_ctor_get(v___x_235_, 7);
v_snapshotTasks_244_ = lean_ctor_get(v___x_235_, 8);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_274_ == 0)
{
v___x_246_ = v___x_235_;
v_isShared_247_ = v_isSharedCheck_274_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_snapshotTasks_244_);
lean_inc(v_infoState_243_);
lean_inc(v_messages_242_);
lean_inc(v_cache_241_);
lean_inc(v_traceState_236_);
lean_inc(v_auxDeclNGen_240_);
lean_inc(v_ngen_239_);
lean_inc(v_nextMacroScope_238_);
lean_inc(v_env_237_);
lean_dec(v___x_235_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_274_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
uint64_t v_tid_248_; lean_object* v_traces_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_273_; 
v_tid_248_ = lean_ctor_get_uint64(v_traceState_236_, sizeof(void*)*1);
v_traces_249_ = lean_ctor_get(v_traceState_236_, 0);
v_isSharedCheck_273_ = !lean_is_exclusive(v_traceState_236_);
if (v_isSharedCheck_273_ == 0)
{
v___x_251_ = v_traceState_236_;
v_isShared_252_ = v_isSharedCheck_273_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_traces_249_);
lean_dec(v_traceState_236_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_273_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_253_; double v___x_254_; uint8_t v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_263_; 
v___x_253_ = lean_box(0);
v___x_254_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__0);
v___x_255_ = 0;
v___x_256_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__1));
v___x_257_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_257_, 0, v_cls_222_);
lean_ctor_set(v___x_257_, 1, v___x_253_);
lean_ctor_set(v___x_257_, 2, v___x_256_);
lean_ctor_set_float(v___x_257_, sizeof(void*)*3, v___x_254_);
lean_ctor_set_float(v___x_257_, sizeof(void*)*3 + 8, v___x_254_);
lean_ctor_set_uint8(v___x_257_, sizeof(void*)*3 + 16, v___x_255_);
v___x_258_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__2));
v___x_259_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_259_, 0, v___x_257_);
lean_ctor_set(v___x_259_, 1, v_a_231_);
lean_ctor_set(v___x_259_, 2, v___x_258_);
lean_inc(v_ref_229_);
v___x_260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_260_, 0, v_ref_229_);
lean_ctor_set(v___x_260_, 1, v___x_259_);
v___x_261_ = l_Lean_PersistentArray_push___redArg(v_traces_249_, v___x_260_);
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 0, v___x_261_);
v___x_263_ = v___x_251_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_272_; 
v_reuseFailAlloc_272_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_272_, 0, v___x_261_);
lean_ctor_set_uint64(v_reuseFailAlloc_272_, sizeof(void*)*1, v_tid_248_);
v___x_263_ = v_reuseFailAlloc_272_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
lean_object* v___x_265_; 
if (v_isShared_247_ == 0)
{
lean_ctor_set(v___x_246_, 4, v___x_263_);
v___x_265_ = v___x_246_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_env_237_);
lean_ctor_set(v_reuseFailAlloc_271_, 1, v_nextMacroScope_238_);
lean_ctor_set(v_reuseFailAlloc_271_, 2, v_ngen_239_);
lean_ctor_set(v_reuseFailAlloc_271_, 3, v_auxDeclNGen_240_);
lean_ctor_set(v_reuseFailAlloc_271_, 4, v___x_263_);
lean_ctor_set(v_reuseFailAlloc_271_, 5, v_cache_241_);
lean_ctor_set(v_reuseFailAlloc_271_, 6, v_messages_242_);
lean_ctor_set(v_reuseFailAlloc_271_, 7, v_infoState_243_);
lean_ctor_set(v_reuseFailAlloc_271_, 8, v_snapshotTasks_244_);
v___x_265_ = v_reuseFailAlloc_271_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_269_; 
v___x_266_ = lean_st_ref_set(v___y_227_, v___x_265_);
v___x_267_ = lean_box(0);
if (v_isShared_234_ == 0)
{
lean_ctor_set(v___x_233_, 0, v___x_267_);
v___x_269_ = v___x_233_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v___x_267_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___boxed(lean_object* v_cls_276_, lean_object* v_msg_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_){
_start:
{
lean_object* v_res_283_; 
v_res_283_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg(v_cls_276_, v_msg_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_);
lean_dec(v___y_281_);
lean_dec_ref(v___y_280_);
lean_dec(v___y_279_);
lean_dec_ref(v___y_278_);
return v_res_283_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__5(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__4));
v___x_293_ = l_Lean_stringToMessageData(v___x_292_);
return v___x_293_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__7(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__6));
v___x_296_ = l_Lean_stringToMessageData(v___x_295_);
return v___x_296_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq(lean_object* v_e_297_, lean_object* v_c_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_){
_start:
{
lean_object* v___x_310_; 
lean_inc_ref(v_c_298_);
lean_inc_ref(v_e_297_);
v___x_310_ = l_Lean_Meta_isExprDefEq(v_e_297_, v_c_298_, v_a_305_, v_a_306_, v_a_307_, v_a_308_);
if (lean_obj_tag(v___x_310_) == 0)
{
lean_object* v_a_311_; uint8_t v___x_312_; 
v_a_311_ = lean_ctor_get(v___x_310_, 0);
lean_inc(v_a_311_);
v___x_312_ = lean_unbox(v_a_311_);
if (v___x_312_ == 0)
{
lean_dec(v_a_311_);
lean_dec_ref(v_c_298_);
lean_dec_ref(v_e_297_);
return v___x_310_;
}
else
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v_a_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_356_; 
lean_dec_ref(v___x_310_);
v___x_313_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__3));
v___x_314_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___redArg(v___x_313_, v_a_307_);
v_a_315_ = lean_ctor_get(v___x_314_, 0);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_314_);
if (v_isSharedCheck_356_ == 0)
{
v___x_317_ = v___x_314_;
v_isShared_318_ = v_isSharedCheck_356_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_dec(v___x_314_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_356_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
uint8_t v___x_319_; 
v___x_319_ = lean_unbox(v_a_315_);
lean_dec(v_a_315_);
if (v___x_319_ == 0)
{
lean_object* v___x_321_; 
lean_dec_ref(v_c_298_);
lean_dec_ref(v_e_297_);
if (v_isShared_318_ == 0)
{
lean_ctor_set(v___x_317_, 0, v_a_311_);
v___x_321_ = v___x_317_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_a_311_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
else
{
lean_object* v___x_323_; 
lean_del_object(v___x_317_);
v___x_323_ = l_Lean_Meta_Grind_updateLastTag(v_a_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_, v_a_304_, v_a_305_, v_a_306_, v_a_307_, v_a_308_);
if (lean_obj_tag(v___x_323_) == 0)
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
lean_dec_ref(v___x_323_);
v___x_324_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__5, &l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__5);
v___x_325_ = l_Lean_MessageData_ofExpr(v_e_297_);
v___x_326_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_326_, 0, v___x_324_);
lean_ctor_set(v___x_326_, 1, v___x_325_);
v___x_327_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__7, &l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__7);
v___x_328_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_326_);
lean_ctor_set(v___x_328_, 1, v___x_327_);
v___x_329_ = l_Lean_MessageData_ofExpr(v_c_298_);
v___x_330_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_330_, 0, v___x_328_);
lean_ctor_set(v___x_330_, 1, v___x_329_);
v___x_331_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg(v___x_313_, v___x_330_, v_a_305_, v_a_306_, v_a_307_, v_a_308_);
if (lean_obj_tag(v___x_331_) == 0)
{
lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_338_; 
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_338_ == 0)
{
lean_object* v_unused_339_; 
v_unused_339_ = lean_ctor_get(v___x_331_, 0);
lean_dec(v_unused_339_);
v___x_333_ = v___x_331_;
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
else
{
lean_dec(v___x_331_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_336_; 
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 0, v_a_311_);
v___x_336_ = v___x_333_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_a_311_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
else
{
lean_object* v_a_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_347_; 
lean_dec(v_a_311_);
v_a_340_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_347_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_347_ == 0)
{
v___x_342_ = v___x_331_;
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_a_340_);
lean_dec(v___x_331_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_347_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___x_345_; 
if (v_isShared_343_ == 0)
{
v___x_345_ = v___x_342_;
goto v_reusejp_344_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v_a_340_);
v___x_345_ = v_reuseFailAlloc_346_;
goto v_reusejp_344_;
}
v_reusejp_344_:
{
return v___x_345_;
}
}
}
}
else
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_355_; 
lean_dec(v_a_311_);
lean_dec_ref(v_c_298_);
lean_dec_ref(v_e_297_);
v_a_348_ = lean_ctor_get(v___x_323_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v___x_323_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_323_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_351_ == 0)
{
v___x_353_ = v___x_350_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_a_348_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
}
}
}
}
else
{
lean_dec_ref(v_c_298_);
lean_dec_ref(v_e_297_);
return v___x_310_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___boxed(lean_object* v_e_357_, lean_object* v_c_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq(v_e_357_, v_c_358_, v_a_359_, v_a_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_, v_a_368_);
lean_dec(v_a_368_);
lean_dec_ref(v_a_367_);
lean_dec(v_a_366_);
lean_dec_ref(v_a_365_);
lean_dec(v_a_364_);
lean_dec_ref(v_a_363_);
lean_dec(v_a_362_);
lean_dec_ref(v_a_361_);
lean_dec(v_a_360_);
lean_dec(v_a_359_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1(lean_object* v_cls_371_, lean_object* v_msg_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_, lean_object* v___y_382_){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg(v_cls_371_, v_msg_372_, v___y_379_, v___y_380_, v___y_381_, v___y_382_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___boxed(lean_object* v_cls_385_, lean_object* v_msg_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1(v_cls_385_, v_msg_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
lean_dec(v___y_394_);
lean_dec_ref(v___y_393_);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec(v___y_387_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__1___redArg(lean_object* v_a_402_, lean_object* v_e_403_, lean_object* v_as_x27_404_, lean_object* v_b_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_){
_start:
{
if (lean_obj_tag(v_as_x27_404_) == 0)
{
lean_object* v___x_417_; 
lean_dec_ref(v_e_403_);
lean_dec_ref(v_a_402_);
v___x_417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_417_, 0, v_b_405_);
return v___x_417_;
}
else
{
lean_object* v_head_418_; lean_object* v_tail_419_; lean_object* v_fst_420_; lean_object* v_snd_421_; lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_462_; 
lean_dec_ref(v_b_405_);
v_head_418_ = lean_ctor_get(v_as_x27_404_, 0);
lean_inc(v_head_418_);
v_tail_419_ = lean_ctor_get(v_as_x27_404_, 1);
lean_inc(v_tail_419_);
lean_dec_ref(v_as_x27_404_);
v_fst_420_ = lean_ctor_get(v_head_418_, 0);
v_snd_421_ = lean_ctor_get(v_head_418_, 1);
v_isSharedCheck_462_ = !lean_is_exclusive(v_head_418_);
if (v_isSharedCheck_462_ == 0)
{
v___x_423_ = v_head_418_;
v_isShared_424_ = v_isSharedCheck_462_;
goto v_resetjp_422_;
}
else
{
lean_inc(v_snd_421_);
lean_inc(v_fst_420_);
lean_dec(v_head_418_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_462_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_425_; 
lean_inc_ref(v_a_402_);
v___x_425_ = l_Lean_Meta_isDefEqD(v_a_402_, v_snd_421_, v___y_412_, v___y_413_, v___y_414_, v___y_415_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v_a_426_; lean_object* v___x_427_; lean_object* v___x_428_; uint8_t v___x_429_; 
v_a_426_ = lean_ctor_get(v___x_425_, 0);
lean_inc(v_a_426_);
lean_dec_ref(v___x_425_);
v___x_427_ = lean_box(0);
v___x_428_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__1___redArg___closed__0));
v___x_429_ = lean_unbox(v_a_426_);
lean_dec(v_a_426_);
if (v___x_429_ == 0)
{
lean_del_object(v___x_423_);
lean_dec(v_fst_420_);
v_as_x27_404_ = v_tail_419_;
v_b_405_ = v___x_428_;
goto _start;
}
else
{
lean_object* v___x_431_; 
lean_inc(v_fst_420_);
lean_inc_ref(v_e_403_);
v___x_431_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq(v_e_403_, v_fst_420_, v___y_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_, v___y_414_, v___y_415_);
if (lean_obj_tag(v___x_431_) == 0)
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_445_; 
v_a_432_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_445_ == 0)
{
v___x_434_ = v___x_431_;
v_isShared_435_ = v_isSharedCheck_445_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_431_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_445_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
uint8_t v___x_436_; 
v___x_436_ = lean_unbox(v_a_432_);
lean_dec(v_a_432_);
if (v___x_436_ == 0)
{
lean_del_object(v___x_434_);
lean_del_object(v___x_423_);
lean_dec(v_fst_420_);
v_as_x27_404_ = v_tail_419_;
v_b_405_ = v___x_428_;
goto _start;
}
else
{
lean_object* v___x_438_; lean_object* v___x_440_; 
lean_dec(v_tail_419_);
lean_dec_ref(v_e_403_);
lean_dec_ref(v_a_402_);
v___x_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_438_, 0, v_fst_420_);
if (v_isShared_424_ == 0)
{
lean_ctor_set(v___x_423_, 1, v___x_427_);
lean_ctor_set(v___x_423_, 0, v___x_438_);
v___x_440_ = v___x_423_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v___x_438_);
lean_ctor_set(v_reuseFailAlloc_444_, 1, v___x_427_);
v___x_440_ = v_reuseFailAlloc_444_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
lean_object* v___x_442_; 
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 0, v___x_440_);
v___x_442_ = v___x_434_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v___x_440_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
return v___x_442_;
}
}
}
}
}
else
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_453_; 
lean_del_object(v___x_423_);
lean_dec(v_fst_420_);
lean_dec(v_tail_419_);
lean_dec_ref(v_e_403_);
lean_dec_ref(v_a_402_);
v_a_446_ = lean_ctor_get(v___x_431_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_453_ == 0)
{
v___x_448_ = v___x_431_;
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v___x_431_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_451_; 
if (v_isShared_449_ == 0)
{
v___x_451_ = v___x_448_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_a_446_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
}
}
}
else
{
lean_object* v_a_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_461_; 
lean_del_object(v___x_423_);
lean_dec(v_fst_420_);
lean_dec(v_tail_419_);
lean_dec_ref(v_e_403_);
lean_dec_ref(v_a_402_);
v_a_454_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_461_ == 0)
{
v___x_456_ = v___x_425_;
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_a_454_);
lean_dec(v___x_425_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_459_; 
if (v_isShared_457_ == 0)
{
v___x_459_ = v___x_456_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_a_454_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__1___redArg___boxed(lean_object* v_a_463_, lean_object* v_e_464_, lean_object* v_as_x27_465_, lean_object* v_b_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__1___redArg(v_a_463_, v_e_464_, v_as_x27_465_, v_b_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_);
lean_dec(v___y_476_);
lean_dec_ref(v___y_475_);
lean_dec(v___y_474_);
lean_dec_ref(v___y_473_);
lean_dec(v___y_472_);
lean_dec_ref(v___y_471_);
lean_dec(v___y_470_);
lean_dec_ref(v___y_469_);
lean_dec(v___y_468_);
lean_dec(v___y_467_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_x_479_, lean_object* v_x_480_, lean_object* v_x_481_, lean_object* v_x_482_){
_start:
{
lean_object* v_ks_483_; lean_object* v_vs_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_513_; 
v_ks_483_ = lean_ctor_get(v_x_479_, 0);
v_vs_484_ = lean_ctor_get(v_x_479_, 1);
v_isSharedCheck_513_ = !lean_is_exclusive(v_x_479_);
if (v_isSharedCheck_513_ == 0)
{
v___x_486_ = v_x_479_;
v_isShared_487_ = v_isSharedCheck_513_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_vs_484_);
lean_inc(v_ks_483_);
lean_dec(v_x_479_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_513_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
uint8_t v___y_489_; lean_object* v___x_501_; uint8_t v___x_502_; 
v___x_501_ = lean_array_get_size(v_ks_483_);
v___x_502_ = lean_nat_dec_lt(v_x_480_, v___x_501_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
lean_del_object(v___x_486_);
lean_dec(v_x_480_);
v___x_503_ = lean_array_push(v_ks_483_, v_x_481_);
v___x_504_ = lean_array_push(v_vs_484_, v_x_482_);
v___x_505_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_505_, 0, v___x_503_);
lean_ctor_set(v___x_505_, 1, v___x_504_);
return v___x_505_;
}
else
{
lean_object* v_fst_506_; lean_object* v_snd_507_; lean_object* v_k_x27_508_; lean_object* v_fst_509_; lean_object* v_snd_510_; uint8_t v___x_511_; 
v_fst_506_ = lean_ctor_get(v_x_481_, 0);
v_snd_507_ = lean_ctor_get(v_x_481_, 1);
v_k_x27_508_ = lean_array_fget_borrowed(v_ks_483_, v_x_480_);
v_fst_509_ = lean_ctor_get(v_k_x27_508_, 0);
v_snd_510_ = lean_ctor_get(v_k_x27_508_, 1);
v___x_511_ = lean_expr_eqv(v_fst_506_, v_fst_509_);
if (v___x_511_ == 0)
{
v___y_489_ = v___x_511_;
goto v___jp_488_;
}
else
{
uint8_t v___x_512_; 
v___x_512_ = lean_nat_dec_eq(v_snd_507_, v_snd_510_);
v___y_489_ = v___x_512_;
goto v___jp_488_;
}
}
v___jp_488_:
{
if (v___y_489_ == 0)
{
lean_object* v___x_491_; 
if (v_isShared_487_ == 0)
{
v___x_491_ = v___x_486_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_ks_483_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v_vs_484_);
v___x_491_ = v_reuseFailAlloc_495_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = lean_unsigned_to_nat(1u);
v___x_493_ = lean_nat_add(v_x_480_, v___x_492_);
lean_dec(v_x_480_);
v_x_479_ = v___x_491_;
v_x_480_ = v___x_493_;
goto _start;
}
}
else
{
lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_499_; 
v___x_496_ = lean_array_fset(v_ks_483_, v_x_480_, v_x_481_);
v___x_497_ = lean_array_fset(v_vs_484_, v_x_480_, v_x_482_);
lean_dec(v_x_480_);
if (v_isShared_487_ == 0)
{
lean_ctor_set(v___x_486_, 1, v___x_497_);
lean_ctor_set(v___x_486_, 0, v___x_496_);
v___x_499_ = v___x_486_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v___x_496_);
lean_ctor_set(v_reuseFailAlloc_500_, 1, v___x_497_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__1___redArg(lean_object* v_n_514_, lean_object* v_k_515_, lean_object* v_v_516_){
_start:
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = lean_unsigned_to_nat(0u);
v___x_518_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__1_spec__4___redArg(v_n_514_, v___x_517_, v_k_515_, v_v_516_);
return v___x_518_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_519_; size_t v___x_520_; size_t v___x_521_; 
v___x_519_ = ((size_t)5ULL);
v___x_520_ = ((size_t)1ULL);
v___x_521_ = lean_usize_shift_left(v___x_520_, v___x_519_);
return v___x_521_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_522_; size_t v___x_523_; size_t v___x_524_; 
v___x_522_ = ((size_t)1ULL);
v___x_523_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__0);
v___x_524_ = lean_usize_sub(v___x_523_, v___x_522_);
return v___x_524_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg(lean_object* v_x_526_, size_t v_x_527_, size_t v_x_528_, lean_object* v_x_529_, lean_object* v_x_530_){
_start:
{
if (lean_obj_tag(v_x_526_) == 0)
{
lean_object* v_es_531_; size_t v___x_532_; size_t v___x_533_; size_t v___x_534_; size_t v___x_535_; lean_object* v_j_536_; lean_object* v___x_537_; uint8_t v___x_538_; 
v_es_531_ = lean_ctor_get(v_x_526_, 0);
v___x_532_ = ((size_t)5ULL);
v___x_533_ = ((size_t)1ULL);
v___x_534_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__1);
v___x_535_ = lean_usize_land(v_x_527_, v___x_534_);
v_j_536_ = lean_usize_to_nat(v___x_535_);
v___x_537_ = lean_array_get_size(v_es_531_);
v___x_538_ = lean_nat_dec_lt(v_j_536_, v___x_537_);
if (v___x_538_ == 0)
{
lean_dec(v_j_536_);
lean_dec(v_x_530_);
lean_dec_ref(v_x_529_);
return v_x_526_;
}
else
{
lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_582_; 
lean_inc_ref(v_es_531_);
v_isSharedCheck_582_ = !lean_is_exclusive(v_x_526_);
if (v_isSharedCheck_582_ == 0)
{
lean_object* v_unused_583_; 
v_unused_583_ = lean_ctor_get(v_x_526_, 0);
lean_dec(v_unused_583_);
v___x_540_ = v_x_526_;
v_isShared_541_ = v_isSharedCheck_582_;
goto v_resetjp_539_;
}
else
{
lean_dec(v_x_526_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_582_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v_v_542_; lean_object* v___x_543_; lean_object* v_xs_x27_544_; lean_object* v___y_546_; 
v_v_542_ = lean_array_fget(v_es_531_, v_j_536_);
v___x_543_ = lean_box(0);
v_xs_x27_544_ = lean_array_fset(v_es_531_, v_j_536_, v___x_543_);
switch(lean_obj_tag(v_v_542_))
{
case 0:
{
lean_object* v_key_551_; lean_object* v_val_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_569_; 
v_key_551_ = lean_ctor_get(v_v_542_, 0);
v_val_552_ = lean_ctor_get(v_v_542_, 1);
v_isSharedCheck_569_ = !lean_is_exclusive(v_v_542_);
if (v_isSharedCheck_569_ == 0)
{
v___x_554_ = v_v_542_;
v_isShared_555_ = v_isSharedCheck_569_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_val_552_);
lean_inc(v_key_551_);
lean_dec(v_v_542_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_569_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
uint8_t v___y_557_; lean_object* v_fst_563_; lean_object* v_snd_564_; lean_object* v_fst_565_; lean_object* v_snd_566_; uint8_t v___x_567_; 
v_fst_563_ = lean_ctor_get(v_x_529_, 0);
v_snd_564_ = lean_ctor_get(v_x_529_, 1);
v_fst_565_ = lean_ctor_get(v_key_551_, 0);
v_snd_566_ = lean_ctor_get(v_key_551_, 1);
v___x_567_ = lean_expr_eqv(v_fst_563_, v_fst_565_);
if (v___x_567_ == 0)
{
v___y_557_ = v___x_567_;
goto v___jp_556_;
}
else
{
uint8_t v___x_568_; 
v___x_568_ = lean_nat_dec_eq(v_snd_564_, v_snd_566_);
v___y_557_ = v___x_568_;
goto v___jp_556_;
}
v___jp_556_:
{
if (v___y_557_ == 0)
{
lean_object* v___x_558_; lean_object* v___x_559_; 
lean_del_object(v___x_554_);
v___x_558_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_551_, v_val_552_, v_x_529_, v_x_530_);
v___x_559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_559_, 0, v___x_558_);
v___y_546_ = v___x_559_;
goto v___jp_545_;
}
else
{
lean_object* v___x_561_; 
lean_dec(v_val_552_);
lean_dec(v_key_551_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 1, v_x_530_);
lean_ctor_set(v___x_554_, 0, v_x_529_);
v___x_561_ = v___x_554_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_x_529_);
lean_ctor_set(v_reuseFailAlloc_562_, 1, v_x_530_);
v___x_561_ = v_reuseFailAlloc_562_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
v___y_546_ = v___x_561_;
goto v___jp_545_;
}
}
}
}
}
case 1:
{
lean_object* v_node_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_580_; 
v_node_570_ = lean_ctor_get(v_v_542_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v_v_542_);
if (v_isSharedCheck_580_ == 0)
{
v___x_572_ = v_v_542_;
v_isShared_573_ = v_isSharedCheck_580_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_node_570_);
lean_dec(v_v_542_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_580_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
size_t v___x_574_; size_t v___x_575_; lean_object* v___x_576_; lean_object* v___x_578_; 
v___x_574_ = lean_usize_shift_right(v_x_527_, v___x_532_);
v___x_575_ = lean_usize_add(v_x_528_, v___x_533_);
v___x_576_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg(v_node_570_, v___x_574_, v___x_575_, v_x_529_, v_x_530_);
if (v_isShared_573_ == 0)
{
lean_ctor_set(v___x_572_, 0, v___x_576_);
v___x_578_ = v___x_572_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v___x_576_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
v___y_546_ = v___x_578_;
goto v___jp_545_;
}
}
}
default: 
{
lean_object* v___x_581_; 
v___x_581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_581_, 0, v_x_529_);
lean_ctor_set(v___x_581_, 1, v_x_530_);
v___y_546_ = v___x_581_;
goto v___jp_545_;
}
}
v___jp_545_:
{
lean_object* v___x_547_; lean_object* v___x_549_; 
v___x_547_ = lean_array_fset(v_xs_x27_544_, v_j_536_, v___y_546_);
lean_dec(v_j_536_);
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 0, v___x_547_);
v___x_549_ = v___x_540_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v___x_547_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
}
}
else
{
lean_object* v_ks_584_; lean_object* v_vs_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_605_; 
v_ks_584_ = lean_ctor_get(v_x_526_, 0);
v_vs_585_ = lean_ctor_get(v_x_526_, 1);
v_isSharedCheck_605_ = !lean_is_exclusive(v_x_526_);
if (v_isSharedCheck_605_ == 0)
{
v___x_587_ = v_x_526_;
v_isShared_588_ = v_isSharedCheck_605_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_vs_585_);
lean_inc(v_ks_584_);
lean_dec(v_x_526_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_605_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_590_; 
if (v_isShared_588_ == 0)
{
v___x_590_ = v___x_587_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v_ks_584_);
lean_ctor_set(v_reuseFailAlloc_604_, 1, v_vs_585_);
v___x_590_ = v_reuseFailAlloc_604_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
lean_object* v_newNode_591_; uint8_t v___y_593_; size_t v___x_599_; uint8_t v___x_600_; 
v_newNode_591_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__1___redArg(v___x_590_, v_x_529_, v_x_530_);
v___x_599_ = ((size_t)7ULL);
v___x_600_ = lean_usize_dec_le(v___x_599_, v_x_528_);
if (v___x_600_ == 0)
{
lean_object* v___x_601_; lean_object* v___x_602_; uint8_t v___x_603_; 
v___x_601_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_591_);
v___x_602_ = lean_unsigned_to_nat(4u);
v___x_603_ = lean_nat_dec_lt(v___x_601_, v___x_602_);
lean_dec(v___x_601_);
v___y_593_ = v___x_603_;
goto v___jp_592_;
}
else
{
v___y_593_ = v___x_600_;
goto v___jp_592_;
}
v___jp_592_:
{
if (v___y_593_ == 0)
{
lean_object* v_ks_594_; lean_object* v_vs_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v_ks_594_ = lean_ctor_get(v_newNode_591_, 0);
lean_inc_ref(v_ks_594_);
v_vs_595_ = lean_ctor_get(v_newNode_591_, 1);
lean_inc_ref(v_vs_595_);
lean_dec_ref(v_newNode_591_);
v___x_596_ = lean_unsigned_to_nat(0u);
v___x_597_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__2);
v___x_598_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__2___redArg(v_x_528_, v_ks_594_, v_vs_595_, v___x_596_, v___x_597_);
lean_dec_ref(v_vs_595_);
lean_dec_ref(v_ks_594_);
return v___x_598_;
}
else
{
return v_newNode_591_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__2___redArg(size_t v_depth_606_, lean_object* v_keys_607_, lean_object* v_vals_608_, lean_object* v_i_609_, lean_object* v_entries_610_){
_start:
{
lean_object* v___x_611_; uint8_t v___x_612_; 
v___x_611_ = lean_array_get_size(v_keys_607_);
v___x_612_ = lean_nat_dec_lt(v_i_609_, v___x_611_);
if (v___x_612_ == 0)
{
lean_dec(v_i_609_);
return v_entries_610_;
}
else
{
lean_object* v_k_613_; lean_object* v_fst_614_; lean_object* v_snd_615_; lean_object* v_v_616_; uint64_t v___x_617_; uint64_t v___x_618_; uint64_t v___x_619_; size_t v_h_620_; size_t v___x_621_; lean_object* v___x_622_; size_t v___x_623_; size_t v___x_624_; size_t v___x_625_; size_t v_h_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v_k_613_ = lean_array_fget_borrowed(v_keys_607_, v_i_609_);
v_fst_614_ = lean_ctor_get(v_k_613_, 0);
v_snd_615_ = lean_ctor_get(v_k_613_, 1);
v_v_616_ = lean_array_fget_borrowed(v_vals_608_, v_i_609_);
v___x_617_ = l_Lean_Expr_hash(v_fst_614_);
v___x_618_ = lean_uint64_of_nat(v_snd_615_);
v___x_619_ = lean_uint64_mix_hash(v___x_617_, v___x_618_);
v_h_620_ = lean_uint64_to_usize(v___x_619_);
v___x_621_ = ((size_t)5ULL);
v___x_622_ = lean_unsigned_to_nat(1u);
v___x_623_ = ((size_t)1ULL);
v___x_624_ = lean_usize_sub(v_depth_606_, v___x_623_);
v___x_625_ = lean_usize_mul(v___x_621_, v___x_624_);
v_h_626_ = lean_usize_shift_right(v_h_620_, v___x_625_);
v___x_627_ = lean_nat_add(v_i_609_, v___x_622_);
lean_dec(v_i_609_);
lean_inc(v_v_616_);
lean_inc(v_k_613_);
v___x_628_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg(v_entries_610_, v_h_626_, v_depth_606_, v_k_613_, v_v_616_);
v_i_609_ = v___x_627_;
v_entries_610_ = v___x_628_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_630_, lean_object* v_keys_631_, lean_object* v_vals_632_, lean_object* v_i_633_, lean_object* v_entries_634_){
_start:
{
size_t v_depth_boxed_635_; lean_object* v_res_636_; 
v_depth_boxed_635_ = lean_unbox_usize(v_depth_630_);
lean_dec(v_depth_630_);
v_res_636_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__2___redArg(v_depth_boxed_635_, v_keys_631_, v_vals_632_, v_i_633_, v_entries_634_);
lean_dec_ref(v_vals_632_);
lean_dec_ref(v_keys_631_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___boxed(lean_object* v_x_637_, lean_object* v_x_638_, lean_object* v_x_639_, lean_object* v_x_640_, lean_object* v_x_641_){
_start:
{
size_t v_x_28101__boxed_642_; size_t v_x_28102__boxed_643_; lean_object* v_res_644_; 
v_x_28101__boxed_642_ = lean_unbox_usize(v_x_638_);
lean_dec(v_x_638_);
v_x_28102__boxed_643_ = lean_unbox_usize(v_x_639_);
lean_dec(v_x_639_);
v_res_644_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg(v_x_637_, v_x_28101__boxed_642_, v_x_28102__boxed_643_, v_x_640_, v_x_641_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0___redArg(lean_object* v_x_645_, lean_object* v_x_646_, lean_object* v_x_647_){
_start:
{
lean_object* v_fst_648_; lean_object* v_snd_649_; uint64_t v___x_650_; uint64_t v___x_651_; uint64_t v___x_652_; size_t v___x_653_; size_t v___x_654_; lean_object* v___x_655_; 
v_fst_648_ = lean_ctor_get(v_x_646_, 0);
v_snd_649_ = lean_ctor_get(v_x_646_, 1);
v___x_650_ = l_Lean_Expr_hash(v_fst_648_);
v___x_651_ = lean_uint64_of_nat(v_snd_649_);
v___x_652_ = lean_uint64_mix_hash(v___x_650_, v___x_651_);
v___x_653_ = lean_uint64_to_usize(v___x_652_);
v___x_654_ = ((size_t)1ULL);
v___x_655_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg(v_x_645_, v___x_653_, v___x_654_, v_x_646_, v_x_647_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3_spec__6___redArg(lean_object* v_keys_656_, lean_object* v_vals_657_, lean_object* v_i_658_, lean_object* v_k_659_){
_start:
{
uint8_t v___y_661_; lean_object* v___x_667_; uint8_t v___x_668_; 
v___x_667_ = lean_array_get_size(v_keys_656_);
v___x_668_ = lean_nat_dec_lt(v_i_658_, v___x_667_);
if (v___x_668_ == 0)
{
lean_object* v___x_669_; 
lean_dec(v_i_658_);
v___x_669_ = lean_box(0);
return v___x_669_;
}
else
{
lean_object* v_fst_670_; lean_object* v_snd_671_; lean_object* v_k_x27_672_; lean_object* v_fst_673_; lean_object* v_snd_674_; uint8_t v___x_675_; 
v_fst_670_ = lean_ctor_get(v_k_659_, 0);
v_snd_671_ = lean_ctor_get(v_k_659_, 1);
v_k_x27_672_ = lean_array_fget_borrowed(v_keys_656_, v_i_658_);
v_fst_673_ = lean_ctor_get(v_k_x27_672_, 0);
v_snd_674_ = lean_ctor_get(v_k_x27_672_, 1);
v___x_675_ = lean_expr_eqv(v_fst_670_, v_fst_673_);
if (v___x_675_ == 0)
{
v___y_661_ = v___x_675_;
goto v___jp_660_;
}
else
{
uint8_t v___x_676_; 
v___x_676_ = lean_nat_dec_eq(v_snd_671_, v_snd_674_);
v___y_661_ = v___x_676_;
goto v___jp_660_;
}
}
v___jp_660_:
{
if (v___y_661_ == 0)
{
lean_object* v___x_662_; lean_object* v___x_663_; 
v___x_662_ = lean_unsigned_to_nat(1u);
v___x_663_ = lean_nat_add(v_i_658_, v___x_662_);
lean_dec(v_i_658_);
v_i_658_ = v___x_663_;
goto _start;
}
else
{
lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_665_ = lean_array_fget_borrowed(v_vals_657_, v_i_658_);
lean_dec(v_i_658_);
lean_inc(v___x_665_);
v___x_666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_666_, 0, v___x_665_);
return v___x_666_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_keys_677_, lean_object* v_vals_678_, lean_object* v_i_679_, lean_object* v_k_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3_spec__6___redArg(v_keys_677_, v_vals_678_, v_i_679_, v_k_680_);
lean_dec_ref(v_k_680_);
lean_dec_ref(v_vals_678_);
lean_dec_ref(v_keys_677_);
return v_res_681_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3___redArg(lean_object* v_x_682_, size_t v_x_683_, lean_object* v_x_684_){
_start:
{
if (lean_obj_tag(v_x_682_) == 0)
{
lean_object* v_es_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_713_; 
v_es_685_ = lean_ctor_get(v_x_682_, 0);
v_isSharedCheck_713_ = !lean_is_exclusive(v_x_682_);
if (v_isSharedCheck_713_ == 0)
{
v___x_687_ = v_x_682_;
v_isShared_688_ = v_isSharedCheck_713_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_es_685_);
lean_dec(v_x_682_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_713_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_689_; size_t v___x_690_; size_t v___x_691_; size_t v___x_692_; lean_object* v_j_693_; lean_object* v___x_694_; 
v___x_689_ = lean_box(2);
v___x_690_ = ((size_t)5ULL);
v___x_691_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__1);
v___x_692_ = lean_usize_land(v_x_683_, v___x_691_);
v_j_693_ = lean_usize_to_nat(v___x_692_);
v___x_694_ = lean_array_get(v___x_689_, v_es_685_, v_j_693_);
lean_dec(v_j_693_);
lean_dec_ref(v_es_685_);
switch(lean_obj_tag(v___x_694_))
{
case 0:
{
lean_object* v_key_695_; lean_object* v_val_696_; uint8_t v___y_698_; lean_object* v_fst_703_; lean_object* v_snd_704_; lean_object* v_fst_705_; lean_object* v_snd_706_; uint8_t v___x_707_; 
v_key_695_ = lean_ctor_get(v___x_694_, 0);
lean_inc(v_key_695_);
v_val_696_ = lean_ctor_get(v___x_694_, 1);
lean_inc(v_val_696_);
lean_dec_ref(v___x_694_);
v_fst_703_ = lean_ctor_get(v_x_684_, 0);
v_snd_704_ = lean_ctor_get(v_x_684_, 1);
v_fst_705_ = lean_ctor_get(v_key_695_, 0);
lean_inc(v_fst_705_);
v_snd_706_ = lean_ctor_get(v_key_695_, 1);
lean_inc(v_snd_706_);
lean_dec(v_key_695_);
v___x_707_ = lean_expr_eqv(v_fst_703_, v_fst_705_);
lean_dec(v_fst_705_);
if (v___x_707_ == 0)
{
lean_dec(v_snd_706_);
v___y_698_ = v___x_707_;
goto v___jp_697_;
}
else
{
uint8_t v___x_708_; 
v___x_708_ = lean_nat_dec_eq(v_snd_704_, v_snd_706_);
lean_dec(v_snd_706_);
v___y_698_ = v___x_708_;
goto v___jp_697_;
}
v___jp_697_:
{
if (v___y_698_ == 0)
{
lean_object* v___x_699_; 
lean_dec(v_val_696_);
lean_del_object(v___x_687_);
v___x_699_ = lean_box(0);
return v___x_699_;
}
else
{
lean_object* v___x_701_; 
if (v_isShared_688_ == 0)
{
lean_ctor_set_tag(v___x_687_, 1);
lean_ctor_set(v___x_687_, 0, v_val_696_);
v___x_701_ = v___x_687_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_val_696_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
}
case 1:
{
lean_object* v_node_709_; size_t v___x_710_; 
lean_del_object(v___x_687_);
v_node_709_ = lean_ctor_get(v___x_694_, 0);
lean_inc(v_node_709_);
lean_dec_ref(v___x_694_);
v___x_710_ = lean_usize_shift_right(v_x_683_, v___x_690_);
v_x_682_ = v_node_709_;
v_x_683_ = v___x_710_;
goto _start;
}
default: 
{
lean_object* v___x_712_; 
lean_del_object(v___x_687_);
v___x_712_ = lean_box(0);
return v___x_712_;
}
}
}
}
else
{
lean_object* v_ks_714_; lean_object* v_vs_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
v_ks_714_ = lean_ctor_get(v_x_682_, 0);
lean_inc_ref(v_ks_714_);
v_vs_715_ = lean_ctor_get(v_x_682_, 1);
lean_inc_ref(v_vs_715_);
lean_dec_ref(v_x_682_);
v___x_716_ = lean_unsigned_to_nat(0u);
v___x_717_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3_spec__6___redArg(v_ks_714_, v_vs_715_, v___x_716_, v_x_684_);
lean_dec_ref(v_vs_715_);
lean_dec_ref(v_ks_714_);
return v___x_717_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3___redArg___boxed(lean_object* v_x_718_, lean_object* v_x_719_, lean_object* v_x_720_){
_start:
{
size_t v_x_28341__boxed_721_; lean_object* v_res_722_; 
v_x_28341__boxed_721_ = lean_unbox_usize(v_x_719_);
lean_dec(v_x_719_);
v_res_722_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3___redArg(v_x_718_, v_x_28341__boxed_721_, v_x_720_);
lean_dec_ref(v_x_720_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2___redArg(lean_object* v_x_723_, lean_object* v_x_724_){
_start:
{
lean_object* v_fst_725_; lean_object* v_snd_726_; uint64_t v___x_727_; uint64_t v___x_728_; uint64_t v___x_729_; size_t v___x_730_; lean_object* v___x_731_; 
v_fst_725_ = lean_ctor_get(v_x_724_, 0);
v_snd_726_ = lean_ctor_get(v_x_724_, 1);
v___x_727_ = l_Lean_Expr_hash(v_fst_725_);
v___x_728_ = lean_uint64_of_nat(v_snd_726_);
v___x_729_ = lean_uint64_mix_hash(v___x_727_, v___x_728_);
v___x_730_ = lean_uint64_to_usize(v___x_729_);
v___x_731_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3___redArg(v_x_723_, v___x_730_, v_x_724_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2___redArg___boxed(lean_object* v_x_732_, lean_object* v_x_733_){
_start:
{
lean_object* v_res_734_; 
v_res_734_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2___redArg(v_x_732_, v_x_733_);
lean_dec_ref(v_x_733_);
return v_res_734_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__1(void){
_start:
{
lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_736_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__0));
v___x_737_ = l_Lean_stringToMessageData(v___x_736_);
return v___x_737_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__3(void){
_start:
{
lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_739_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__2));
v___x_740_ = l_Lean_stringToMessageData(v___x_739_);
return v___x_740_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__5(void){
_start:
{
lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_742_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__4));
v___x_743_ = l_Lean_stringToMessageData(v___x_742_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go(lean_object* v_f_744_, lean_object* v_i_745_, lean_object* v_e_746_, uint8_t v_isInst_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_, lean_object* v_a_756_, lean_object* v_a_757_){
_start:
{
lean_object* v___x_759_; 
lean_inc(v_a_757_);
lean_inc_ref(v_a_756_);
lean_inc(v_a_755_);
lean_inc_ref(v_a_754_);
lean_inc_ref(v_e_746_);
v___x_759_ = lean_infer_type(v_e_746_, v_a_754_, v_a_755_, v_a_756_, v_a_757_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_object* v_a_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_949_; 
v_a_760_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_949_ == 0)
{
v___x_762_ = v___x_759_;
v_isShared_763_ = v_isSharedCheck_949_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_a_760_);
lean_dec(v___x_759_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_949_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v___y_765_; lean_object* v___y_766_; lean_object* v___y_767_; lean_object* v___y_823_; lean_object* v___y_824_; lean_object* v___y_825_; lean_object* v___y_826_; lean_object* v___y_827_; lean_object* v___y_828_; lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_831_; lean_object* v___y_832_; lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v___y_904_; lean_object* v___y_905_; lean_object* v___y_906_; lean_object* v___y_907_; lean_object* v___y_908_; lean_object* v___y_909_; lean_object* v___y_910_; lean_object* v___y_911_; lean_object* v___y_912_; lean_object* v___y_913_; 
if (v_isInst_747_ == 0)
{
v___y_904_ = v_a_748_;
v___y_905_ = v_a_749_;
v___y_906_ = v_a_750_;
v___y_907_ = v_a_751_;
v___y_908_ = v_a_752_;
v___y_909_ = v_a_753_;
v___y_910_ = v_a_754_;
v___y_911_ = v_a_755_;
v___y_912_ = v_a_756_;
v___y_913_ = v_a_757_;
goto v___jp_903_;
}
else
{
lean_object* v___x_929_; 
v___x_929_ = l_Lean_Meta_Grind_getBuiltinInstance_x3f(v_a_760_);
if (lean_obj_tag(v___x_929_) == 1)
{
lean_object* v_val_930_; lean_object* v___x_931_; 
v_val_930_ = lean_ctor_get(v___x_929_, 0);
lean_inc(v_val_930_);
lean_dec_ref(v___x_929_);
lean_inc(v_val_930_);
lean_inc_ref(v_e_746_);
v___x_931_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq(v_e_746_, v_val_930_, v_a_748_, v_a_749_, v_a_750_, v_a_751_, v_a_752_, v_a_753_, v_a_754_, v_a_755_, v_a_756_, v_a_757_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v_a_932_; lean_object* v___x_934_; uint8_t v_isShared_935_; uint8_t v_isSharedCheck_940_; 
v_a_932_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_940_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_940_ == 0)
{
v___x_934_ = v___x_931_;
v_isShared_935_ = v_isSharedCheck_940_;
goto v_resetjp_933_;
}
else
{
lean_inc(v_a_932_);
lean_dec(v___x_931_);
v___x_934_ = lean_box(0);
v_isShared_935_ = v_isSharedCheck_940_;
goto v_resetjp_933_;
}
v_resetjp_933_:
{
uint8_t v___x_936_; 
v___x_936_ = lean_unbox(v_a_932_);
lean_dec(v_a_932_);
if (v___x_936_ == 0)
{
lean_del_object(v___x_934_);
lean_dec(v_val_930_);
v___y_904_ = v_a_748_;
v___y_905_ = v_a_749_;
v___y_906_ = v_a_750_;
v___y_907_ = v_a_751_;
v___y_908_ = v_a_752_;
v___y_909_ = v_a_753_;
v___y_910_ = v_a_754_;
v___y_911_ = v_a_755_;
v___y_912_ = v_a_756_;
v___y_913_ = v_a_757_;
goto v___jp_903_;
}
else
{
lean_object* v___x_938_; 
lean_del_object(v___x_762_);
lean_dec(v_a_760_);
lean_dec_ref(v_e_746_);
lean_dec(v_i_745_);
lean_dec_ref(v_f_744_);
if (v_isShared_935_ == 0)
{
lean_ctor_set(v___x_934_, 0, v_val_930_);
v___x_938_ = v___x_934_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v_val_930_);
v___x_938_ = v_reuseFailAlloc_939_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
return v___x_938_;
}
}
}
}
else
{
lean_object* v_a_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_948_; 
lean_dec(v_val_930_);
lean_del_object(v___x_762_);
lean_dec(v_a_760_);
lean_dec_ref(v_e_746_);
lean_dec(v_i_745_);
lean_dec_ref(v_f_744_);
v_a_941_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_948_ == 0)
{
v___x_943_ = v___x_931_;
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_a_941_);
lean_dec(v___x_931_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_946_; 
if (v_isShared_944_ == 0)
{
v___x_946_ = v___x_943_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_a_941_);
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
else
{
lean_dec(v___x_929_);
v___y_904_ = v_a_748_;
v___y_905_ = v_a_749_;
v___y_906_ = v_a_750_;
v___y_907_ = v_a_751_;
v___y_908_ = v_a_752_;
v___y_909_ = v_a_753_;
v___y_910_ = v_a_754_;
v___y_911_ = v_a_755_;
v___y_912_ = v_a_756_;
v___y_913_ = v_a_757_;
goto v___jp_903_;
}
}
v___jp_764_:
{
lean_object* v___x_768_; lean_object* v_toGoalState_769_; lean_object* v_canon_770_; lean_object* v_mvarId_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_820_; 
v___x_768_ = lean_st_ref_take(v___y_767_);
v_toGoalState_769_ = lean_ctor_get(v___x_768_, 0);
lean_inc_ref(v_toGoalState_769_);
v_canon_770_ = lean_ctor_get(v_toGoalState_769_, 1);
lean_inc_ref(v_canon_770_);
v_mvarId_771_ = lean_ctor_get(v___x_768_, 1);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_820_ == 0)
{
lean_object* v_unused_821_; 
v_unused_821_ = lean_ctor_get(v___x_768_, 0);
lean_dec(v_unused_821_);
v___x_773_ = v___x_768_;
v_isShared_774_ = v_isSharedCheck_820_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_mvarId_771_);
lean_dec(v___x_768_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_820_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v_nextDeclIdx_775_; lean_object* v_enodeMap_776_; lean_object* v_exprs_777_; lean_object* v_parents_778_; lean_object* v_congrTable_779_; lean_object* v_appMap_780_; lean_object* v_indicesFound_781_; lean_object* v_newFacts_782_; uint8_t v_inconsistent_783_; lean_object* v_nextIdx_784_; lean_object* v_newRawFacts_785_; lean_object* v_facts_786_; lean_object* v_extThms_787_; lean_object* v_ematch_788_; lean_object* v_inj_789_; lean_object* v_split_790_; lean_object* v_clean_791_; lean_object* v_sstates_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_818_; 
v_nextDeclIdx_775_ = lean_ctor_get(v_toGoalState_769_, 0);
v_enodeMap_776_ = lean_ctor_get(v_toGoalState_769_, 2);
v_exprs_777_ = lean_ctor_get(v_toGoalState_769_, 3);
v_parents_778_ = lean_ctor_get(v_toGoalState_769_, 4);
v_congrTable_779_ = lean_ctor_get(v_toGoalState_769_, 5);
v_appMap_780_ = lean_ctor_get(v_toGoalState_769_, 6);
v_indicesFound_781_ = lean_ctor_get(v_toGoalState_769_, 7);
v_newFacts_782_ = lean_ctor_get(v_toGoalState_769_, 8);
v_inconsistent_783_ = lean_ctor_get_uint8(v_toGoalState_769_, sizeof(void*)*18);
v_nextIdx_784_ = lean_ctor_get(v_toGoalState_769_, 9);
v_newRawFacts_785_ = lean_ctor_get(v_toGoalState_769_, 10);
v_facts_786_ = lean_ctor_get(v_toGoalState_769_, 11);
v_extThms_787_ = lean_ctor_get(v_toGoalState_769_, 12);
v_ematch_788_ = lean_ctor_get(v_toGoalState_769_, 13);
v_inj_789_ = lean_ctor_get(v_toGoalState_769_, 14);
v_split_790_ = lean_ctor_get(v_toGoalState_769_, 15);
v_clean_791_ = lean_ctor_get(v_toGoalState_769_, 16);
v_sstates_792_ = lean_ctor_get(v_toGoalState_769_, 17);
v_isSharedCheck_818_ = !lean_is_exclusive(v_toGoalState_769_);
if (v_isSharedCheck_818_ == 0)
{
lean_object* v_unused_819_; 
v_unused_819_ = lean_ctor_get(v_toGoalState_769_, 1);
lean_dec(v_unused_819_);
v___x_794_ = v_toGoalState_769_;
v_isShared_795_ = v_isSharedCheck_818_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_sstates_792_);
lean_inc(v_clean_791_);
lean_inc(v_split_790_);
lean_inc(v_inj_789_);
lean_inc(v_ematch_788_);
lean_inc(v_extThms_787_);
lean_inc(v_facts_786_);
lean_inc(v_newRawFacts_785_);
lean_inc(v_nextIdx_784_);
lean_inc(v_newFacts_782_);
lean_inc(v_indicesFound_781_);
lean_inc(v_appMap_780_);
lean_inc(v_congrTable_779_);
lean_inc(v_parents_778_);
lean_inc(v_exprs_777_);
lean_inc(v_enodeMap_776_);
lean_inc(v_nextDeclIdx_775_);
lean_dec(v_toGoalState_769_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_818_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v_argMap_796_; lean_object* v_canonArg_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_817_; 
v_argMap_796_ = lean_ctor_get(v_canon_770_, 0);
v_canonArg_797_ = lean_ctor_get(v_canon_770_, 1);
v_isSharedCheck_817_ = !lean_is_exclusive(v_canon_770_);
if (v_isSharedCheck_817_ == 0)
{
v___x_799_ = v_canon_770_;
v_isShared_800_ = v_isSharedCheck_817_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_canonArg_797_);
lean_inc(v_argMap_796_);
lean_dec(v_canon_770_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_817_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_805_; 
lean_inc_ref(v_e_746_);
v___x_801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_801_, 0, v_e_746_);
lean_ctor_set(v___x_801_, 1, v_a_760_);
v___x_802_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_802_, 0, v___x_801_);
lean_ctor_set(v___x_802_, 1, v___y_766_);
v___x_803_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0___redArg(v_argMap_796_, v___y_765_, v___x_802_);
if (v_isShared_800_ == 0)
{
lean_ctor_set(v___x_799_, 0, v___x_803_);
v___x_805_ = v___x_799_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v___x_803_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v_canonArg_797_);
v___x_805_ = v_reuseFailAlloc_816_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
lean_object* v___x_807_; 
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 1, v___x_805_);
v___x_807_ = v___x_794_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(0, 18, 1);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_nextDeclIdx_775_);
lean_ctor_set(v_reuseFailAlloc_815_, 1, v___x_805_);
lean_ctor_set(v_reuseFailAlloc_815_, 2, v_enodeMap_776_);
lean_ctor_set(v_reuseFailAlloc_815_, 3, v_exprs_777_);
lean_ctor_set(v_reuseFailAlloc_815_, 4, v_parents_778_);
lean_ctor_set(v_reuseFailAlloc_815_, 5, v_congrTable_779_);
lean_ctor_set(v_reuseFailAlloc_815_, 6, v_appMap_780_);
lean_ctor_set(v_reuseFailAlloc_815_, 7, v_indicesFound_781_);
lean_ctor_set(v_reuseFailAlloc_815_, 8, v_newFacts_782_);
lean_ctor_set(v_reuseFailAlloc_815_, 9, v_nextIdx_784_);
lean_ctor_set(v_reuseFailAlloc_815_, 10, v_newRawFacts_785_);
lean_ctor_set(v_reuseFailAlloc_815_, 11, v_facts_786_);
lean_ctor_set(v_reuseFailAlloc_815_, 12, v_extThms_787_);
lean_ctor_set(v_reuseFailAlloc_815_, 13, v_ematch_788_);
lean_ctor_set(v_reuseFailAlloc_815_, 14, v_inj_789_);
lean_ctor_set(v_reuseFailAlloc_815_, 15, v_split_790_);
lean_ctor_set(v_reuseFailAlloc_815_, 16, v_clean_791_);
lean_ctor_set(v_reuseFailAlloc_815_, 17, v_sstates_792_);
lean_ctor_set_uint8(v_reuseFailAlloc_815_, sizeof(void*)*18, v_inconsistent_783_);
v___x_807_ = v_reuseFailAlloc_815_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
lean_object* v___x_809_; 
if (v_isShared_774_ == 0)
{
lean_ctor_set(v___x_773_, 0, v___x_807_);
v___x_809_ = v___x_773_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v___x_807_);
lean_ctor_set(v_reuseFailAlloc_814_, 1, v_mvarId_771_);
v___x_809_ = v_reuseFailAlloc_814_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
lean_object* v___x_810_; lean_object* v___x_812_; 
v___x_810_ = lean_st_ref_set(v___y_767_, v___x_809_);
if (v_isShared_763_ == 0)
{
lean_ctor_set(v___x_762_, 0, v_e_746_);
v___x_812_ = v___x_762_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_e_746_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
}
}
}
}
v___jp_822_:
{
lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_835_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__1___redArg___closed__0));
lean_inc(v___y_834_);
lean_inc_ref(v_e_746_);
lean_inc(v_a_760_);
v___x_836_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__1___redArg(v_a_760_, v_e_746_, v___y_834_, v___x_835_, v___y_826_, v___y_824_, v___y_823_, v___y_829_, v___y_828_, v___y_827_, v___y_825_, v___y_831_, v___y_832_, v___y_833_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v_a_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_894_; 
v_a_837_ = lean_ctor_get(v___x_836_, 0);
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_894_ == 0)
{
v___x_839_ = v___x_836_;
v_isShared_840_ = v_isSharedCheck_894_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_a_837_);
lean_dec(v___x_836_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_894_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v_fst_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_892_; 
v_fst_841_ = lean_ctor_get(v_a_837_, 0);
v_isSharedCheck_892_ = !lean_is_exclusive(v_a_837_);
if (v_isSharedCheck_892_ == 0)
{
lean_object* v_unused_893_; 
v_unused_893_ = lean_ctor_get(v_a_837_, 1);
lean_dec(v_unused_893_);
v___x_843_ = v_a_837_;
v_isShared_844_ = v_isSharedCheck_892_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_fst_841_);
lean_dec(v_a_837_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_892_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
if (lean_obj_tag(v_fst_841_) == 0)
{
lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v_a_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_887_; 
lean_del_object(v___x_839_);
v___x_845_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__3));
v___x_846_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___redArg(v___x_845_, v___y_832_);
v_a_847_ = lean_ctor_get(v___x_846_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_846_);
if (v_isSharedCheck_887_ == 0)
{
v___x_849_ = v___x_846_;
v_isShared_850_ = v_isSharedCheck_887_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_a_847_);
lean_dec(v___x_846_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_887_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
uint8_t v___x_851_; 
v___x_851_ = lean_unbox(v_a_847_);
lean_dec(v_a_847_);
if (v___x_851_ == 0)
{
lean_del_object(v___x_849_);
lean_del_object(v___x_843_);
lean_dec(v_i_745_);
lean_dec_ref(v_f_744_);
v___y_765_ = v___y_830_;
v___y_766_ = v___y_834_;
v___y_767_ = v___y_826_;
goto v___jp_764_;
}
else
{
lean_object* v___x_852_; 
v___x_852_ = l_Lean_Meta_Grind_updateLastTag(v___y_826_, v___y_824_, v___y_823_, v___y_829_, v___y_828_, v___y_827_, v___y_825_, v___y_831_, v___y_832_, v___y_833_);
if (lean_obj_tag(v___x_852_) == 0)
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_856_; 
lean_dec_ref(v___x_852_);
v___x_853_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__1);
v___x_854_ = l_Lean_MessageData_ofExpr(v_f_744_);
if (v_isShared_844_ == 0)
{
lean_ctor_set_tag(v___x_843_, 7);
lean_ctor_set(v___x_843_, 1, v___x_854_);
lean_ctor_set(v___x_843_, 0, v___x_853_);
v___x_856_ = v___x_843_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v___x_853_);
lean_ctor_set(v_reuseFailAlloc_878_, 1, v___x_854_);
v___x_856_ = v_reuseFailAlloc_878_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_861_; 
v___x_857_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__3, &l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__3);
v___x_858_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_858_, 0, v___x_856_);
lean_ctor_set(v___x_858_, 1, v___x_857_);
v___x_859_ = l_Nat_reprFast(v_i_745_);
if (v_isShared_850_ == 0)
{
lean_ctor_set_tag(v___x_849_, 3);
lean_ctor_set(v___x_849_, 0, v___x_859_);
v___x_861_ = v___x_849_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v___x_859_);
v___x_861_ = v_reuseFailAlloc_877_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_862_ = l_Lean_MessageData_ofFormat(v___x_861_);
v___x_863_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_863_, 0, v___x_858_);
lean_ctor_set(v___x_863_, 1, v___x_862_);
v___x_864_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__5, &l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___closed__5);
v___x_865_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_865_, 0, v___x_863_);
lean_ctor_set(v___x_865_, 1, v___x_864_);
lean_inc_ref(v_e_746_);
v___x_866_ = l_Lean_MessageData_ofExpr(v_e_746_);
v___x_867_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_867_, 0, v___x_865_);
lean_ctor_set(v___x_867_, 1, v___x_866_);
v___x_868_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg(v___x_845_, v___x_867_, v___y_825_, v___y_831_, v___y_832_, v___y_833_);
if (lean_obj_tag(v___x_868_) == 0)
{
lean_dec_ref(v___x_868_);
v___y_765_ = v___y_830_;
v___y_766_ = v___y_834_;
v___y_767_ = v___y_826_;
goto v___jp_764_;
}
else
{
lean_object* v_a_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_876_; 
lean_dec(v___y_834_);
lean_dec_ref(v___y_830_);
lean_del_object(v___x_762_);
lean_dec(v_a_760_);
lean_dec_ref(v_e_746_);
v_a_869_ = lean_ctor_get(v___x_868_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_876_ == 0)
{
v___x_871_ = v___x_868_;
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_a_869_);
lean_dec(v___x_868_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_874_; 
if (v_isShared_872_ == 0)
{
v___x_874_ = v___x_871_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_a_869_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
}
}
}
else
{
lean_object* v_a_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_886_; 
lean_del_object(v___x_849_);
lean_del_object(v___x_843_);
lean_dec(v___y_834_);
lean_dec_ref(v___y_830_);
lean_del_object(v___x_762_);
lean_dec(v_a_760_);
lean_dec_ref(v_e_746_);
lean_dec(v_i_745_);
lean_dec_ref(v_f_744_);
v_a_879_ = lean_ctor_get(v___x_852_, 0);
v_isSharedCheck_886_ = !lean_is_exclusive(v___x_852_);
if (v_isSharedCheck_886_ == 0)
{
v___x_881_ = v___x_852_;
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_a_879_);
lean_dec(v___x_852_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_886_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v___x_884_; 
if (v_isShared_882_ == 0)
{
v___x_884_ = v___x_881_;
goto v_reusejp_883_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v_a_879_);
v___x_884_ = v_reuseFailAlloc_885_;
goto v_reusejp_883_;
}
v_reusejp_883_:
{
return v___x_884_;
}
}
}
}
}
}
else
{
lean_object* v_val_888_; lean_object* v___x_890_; 
lean_del_object(v___x_843_);
lean_dec(v___y_834_);
lean_dec_ref(v___y_830_);
lean_del_object(v___x_762_);
lean_dec(v_a_760_);
lean_dec_ref(v_e_746_);
lean_dec(v_i_745_);
lean_dec_ref(v_f_744_);
v_val_888_ = lean_ctor_get(v_fst_841_, 0);
lean_inc(v_val_888_);
lean_dec_ref(v_fst_841_);
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 0, v_val_888_);
v___x_890_ = v___x_839_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v_val_888_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
}
}
}
else
{
lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_902_; 
lean_dec(v___y_834_);
lean_dec_ref(v___y_830_);
lean_del_object(v___x_762_);
lean_dec(v_a_760_);
lean_dec_ref(v_e_746_);
lean_dec(v_i_745_);
lean_dec_ref(v_f_744_);
v_a_895_ = lean_ctor_get(v___x_836_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_902_ == 0)
{
v___x_897_ = v___x_836_;
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_836_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_900_; 
if (v_isShared_898_ == 0)
{
v___x_900_ = v___x_897_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_a_895_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
}
}
v___jp_903_:
{
lean_object* v___x_914_; lean_object* v_toGoalState_915_; lean_object* v_canon_916_; lean_object* v_argMap_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_927_; 
v___x_914_ = lean_st_ref_get(v___y_904_);
v_toGoalState_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc_ref(v_toGoalState_915_);
lean_dec(v___x_914_);
v_canon_916_ = lean_ctor_get(v_toGoalState_915_, 1);
lean_inc_ref(v_canon_916_);
lean_dec_ref(v_toGoalState_915_);
v_argMap_917_ = lean_ctor_get(v_canon_916_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v_canon_916_);
if (v_isSharedCheck_927_ == 0)
{
lean_object* v_unused_928_; 
v_unused_928_ = lean_ctor_get(v_canon_916_, 1);
lean_dec(v_unused_928_);
v___x_919_ = v_canon_916_;
v_isShared_920_ = v_isSharedCheck_927_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_argMap_917_);
lean_dec(v_canon_916_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_927_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_922_; 
lean_inc(v_i_745_);
lean_inc_ref(v_f_744_);
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 1, v_i_745_);
lean_ctor_set(v___x_919_, 0, v_f_744_);
v___x_922_ = v___x_919_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_f_744_);
lean_ctor_set(v_reuseFailAlloc_926_, 1, v_i_745_);
v___x_922_ = v_reuseFailAlloc_926_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
lean_object* v___x_923_; 
v___x_923_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2___redArg(v_argMap_917_, v___x_922_);
if (lean_obj_tag(v___x_923_) == 0)
{
lean_object* v___x_924_; 
v___x_924_ = lean_box(0);
v___y_823_ = v___y_906_;
v___y_824_ = v___y_905_;
v___y_825_ = v___y_910_;
v___y_826_ = v___y_904_;
v___y_827_ = v___y_909_;
v___y_828_ = v___y_908_;
v___y_829_ = v___y_907_;
v___y_830_ = v___x_922_;
v___y_831_ = v___y_911_;
v___y_832_ = v___y_912_;
v___y_833_ = v___y_913_;
v___y_834_ = v___x_924_;
goto v___jp_822_;
}
else
{
lean_object* v_val_925_; 
v_val_925_ = lean_ctor_get(v___x_923_, 0);
lean_inc(v_val_925_);
lean_dec_ref(v___x_923_);
v___y_823_ = v___y_906_;
v___y_824_ = v___y_905_;
v___y_825_ = v___y_910_;
v___y_826_ = v___y_904_;
v___y_827_ = v___y_909_;
v___y_828_ = v___y_908_;
v___y_829_ = v___y_907_;
v___y_830_ = v___x_922_;
v___y_831_ = v___y_911_;
v___y_832_ = v___y_912_;
v___y_833_ = v___y_913_;
v___y_834_ = v_val_925_;
goto v___jp_822_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_e_746_);
lean_dec(v_i_745_);
lean_dec_ref(v_f_744_);
return v___x_759_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go___boxed(lean_object* v_f_950_, lean_object* v_i_951_, lean_object* v_e_952_, lean_object* v_isInst_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_){
_start:
{
uint8_t v_isInst_boxed_965_; lean_object* v_res_966_; 
v_isInst_boxed_965_ = lean_unbox(v_isInst_953_);
v_res_966_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go(v_f_950_, v_i_951_, v_e_952_, v_isInst_boxed_965_, v_a_954_, v_a_955_, v_a_956_, v_a_957_, v_a_958_, v_a_959_, v_a_960_, v_a_961_, v_a_962_, v_a_963_);
lean_dec(v_a_963_);
lean_dec_ref(v_a_962_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec_ref(v_a_956_);
lean_dec(v_a_955_);
lean_dec(v_a_954_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0(lean_object* v_00_u03b2_967_, lean_object* v_x_968_, lean_object* v_x_969_, lean_object* v_x_970_){
_start:
{
lean_object* v___x_971_; 
v___x_971_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0___redArg(v_x_968_, v_x_969_, v_x_970_);
return v___x_971_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__1(lean_object* v_a_972_, lean_object* v_e_973_, lean_object* v_as_974_, lean_object* v_as_x27_975_, lean_object* v_b_976_, lean_object* v_a_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_){
_start:
{
lean_object* v___x_989_; 
v___x_989_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__1___redArg(v_a_972_, v_e_973_, v_as_x27_975_, v_b_976_, v___y_978_, v___y_979_, v___y_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__1___boxed(lean_object** _args){
lean_object* v_a_990_ = _args[0];
lean_object* v_e_991_ = _args[1];
lean_object* v_as_992_ = _args[2];
lean_object* v_as_x27_993_ = _args[3];
lean_object* v_b_994_ = _args[4];
lean_object* v_a_995_ = _args[5];
lean_object* v___y_996_ = _args[6];
lean_object* v___y_997_ = _args[7];
lean_object* v___y_998_ = _args[8];
lean_object* v___y_999_ = _args[9];
lean_object* v___y_1000_ = _args[10];
lean_object* v___y_1001_ = _args[11];
lean_object* v___y_1002_ = _args[12];
lean_object* v___y_1003_ = _args[13];
lean_object* v___y_1004_ = _args[14];
lean_object* v___y_1005_ = _args[15];
lean_object* v___y_1006_ = _args[16];
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__1(v_a_990_, v_e_991_, v_as_992_, v_as_x27_993_, v_b_994_, v_a_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_);
lean_dec(v___y_1005_);
lean_dec_ref(v___y_1004_);
lean_dec(v___y_1003_);
lean_dec_ref(v___y_1002_);
lean_dec(v___y_1001_);
lean_dec_ref(v___y_1000_);
lean_dec(v___y_999_);
lean_dec_ref(v___y_998_);
lean_dec(v___y_997_);
lean_dec(v___y_996_);
lean_dec(v_as_992_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2(lean_object* v_00_u03b2_1008_, lean_object* v_x_1009_, lean_object* v_x_1010_){
_start:
{
lean_object* v___x_1011_; 
v___x_1011_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2___redArg(v_x_1009_, v_x_1010_);
return v___x_1011_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2___boxed(lean_object* v_00_u03b2_1012_, lean_object* v_x_1013_, lean_object* v_x_1014_){
_start:
{
lean_object* v_res_1015_; 
v_res_1015_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2(v_00_u03b2_1012_, v_x_1013_, v_x_1014_);
lean_dec_ref(v_x_1014_);
return v_res_1015_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0(lean_object* v_00_u03b2_1016_, lean_object* v_x_1017_, size_t v_x_1018_, size_t v_x_1019_, lean_object* v_x_1020_, lean_object* v_x_1021_){
_start:
{
lean_object* v___x_1022_; 
v___x_1022_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg(v_x_1017_, v_x_1018_, v_x_1019_, v_x_1020_, v_x_1021_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1023_, lean_object* v_x_1024_, lean_object* v_x_1025_, lean_object* v_x_1026_, lean_object* v_x_1027_, lean_object* v_x_1028_){
_start:
{
size_t v_x_28865__boxed_1029_; size_t v_x_28866__boxed_1030_; lean_object* v_res_1031_; 
v_x_28865__boxed_1029_ = lean_unbox_usize(v_x_1025_);
lean_dec(v_x_1025_);
v_x_28866__boxed_1030_ = lean_unbox_usize(v_x_1026_);
lean_dec(v_x_1026_);
v_res_1031_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0(v_00_u03b2_1023_, v_x_1024_, v_x_28865__boxed_1029_, v_x_28866__boxed_1030_, v_x_1027_, v_x_1028_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3(lean_object* v_00_u03b2_1032_, lean_object* v_x_1033_, size_t v_x_1034_, lean_object* v_x_1035_){
_start:
{
lean_object* v___x_1036_; 
v___x_1036_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3___redArg(v_x_1033_, v_x_1034_, v_x_1035_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3___boxed(lean_object* v_00_u03b2_1037_, lean_object* v_x_1038_, lean_object* v_x_1039_, lean_object* v_x_1040_){
_start:
{
size_t v_x_28882__boxed_1041_; lean_object* v_res_1042_; 
v_x_28882__boxed_1041_ = lean_unbox_usize(v_x_1039_);
lean_dec(v_x_1039_);
v_res_1042_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3(v_00_u03b2_1037_, v_x_1038_, v_x_28882__boxed_1041_, v_x_1040_);
lean_dec_ref(v_x_1040_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1043_, lean_object* v_n_1044_, lean_object* v_k_1045_, lean_object* v_v_1046_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__1___redArg(v_n_1044_, v_k_1045_, v_v_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1048_, size_t v_depth_1049_, lean_object* v_keys_1050_, lean_object* v_vals_1051_, lean_object* v_heq_1052_, lean_object* v_i_1053_, lean_object* v_entries_1054_){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__2___redArg(v_depth_1049_, v_keys_1050_, v_vals_1051_, v_i_1053_, v_entries_1054_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1056_, lean_object* v_depth_1057_, lean_object* v_keys_1058_, lean_object* v_vals_1059_, lean_object* v_heq_1060_, lean_object* v_i_1061_, lean_object* v_entries_1062_){
_start:
{
size_t v_depth_boxed_1063_; lean_object* v_res_1064_; 
v_depth_boxed_1063_ = lean_unbox_usize(v_depth_1057_);
lean_dec(v_depth_1057_);
v_res_1064_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__2(v_00_u03b2_1056_, v_depth_boxed_1063_, v_keys_1058_, v_vals_1059_, v_heq_1060_, v_i_1061_, v_entries_1062_);
lean_dec_ref(v_vals_1059_);
lean_dec_ref(v_keys_1058_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3_spec__6(lean_object* v_00_u03b2_1065_, lean_object* v_keys_1066_, lean_object* v_vals_1067_, lean_object* v_heq_1068_, lean_object* v_i_1069_, lean_object* v_k_1070_){
_start:
{
lean_object* v___x_1071_; 
v___x_1071_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3_spec__6___redArg(v_keys_1066_, v_vals_1067_, v_i_1069_, v_k_1070_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03b2_1072_, lean_object* v_keys_1073_, lean_object* v_vals_1074_, lean_object* v_heq_1075_, lean_object* v_i_1076_, lean_object* v_k_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__2_spec__3_spec__6(v_00_u03b2_1072_, v_keys_1073_, v_vals_1074_, v_heq_1075_, v_i_1076_, v_k_1077_);
lean_dec_ref(v_k_1077_);
lean_dec_ref(v_vals_1074_);
lean_dec_ref(v_keys_1073_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_1079_, lean_object* v_x_1080_, lean_object* v_x_1081_, lean_object* v_x_1082_, lean_object* v_x_1083_){
_start:
{
lean_object* v___x_1084_; 
v___x_1084_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0_spec__1_spec__4___redArg(v_x_1080_, v_x_1081_, v_x_1082_, v_x_1083_);
return v___x_1084_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_1085_, lean_object* v_x_1086_, lean_object* v_x_1087_, lean_object* v_x_1088_){
_start:
{
lean_object* v_ks_1089_; lean_object* v_vs_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1114_; 
v_ks_1089_ = lean_ctor_get(v_x_1085_, 0);
v_vs_1090_ = lean_ctor_get(v_x_1085_, 1);
v_isSharedCheck_1114_ = !lean_is_exclusive(v_x_1085_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1092_ = v_x_1085_;
v_isShared_1093_ = v_isSharedCheck_1114_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_vs_1090_);
lean_inc(v_ks_1089_);
lean_dec(v_x_1085_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1114_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1094_; uint8_t v___x_1095_; 
v___x_1094_ = lean_array_get_size(v_ks_1089_);
v___x_1095_ = lean_nat_dec_lt(v_x_1086_, v___x_1094_);
if (v___x_1095_ == 0)
{
lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1099_; 
lean_dec(v_x_1086_);
v___x_1096_ = lean_array_push(v_ks_1089_, v_x_1087_);
v___x_1097_ = lean_array_push(v_vs_1090_, v_x_1088_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 1, v___x_1097_);
lean_ctor_set(v___x_1092_, 0, v___x_1096_);
v___x_1099_ = v___x_1092_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v___x_1096_);
lean_ctor_set(v_reuseFailAlloc_1100_, 1, v___x_1097_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
else
{
lean_object* v_k_x27_1101_; uint8_t v___x_1102_; 
v_k_x27_1101_ = lean_array_fget_borrowed(v_ks_1089_, v_x_1086_);
v___x_1102_ = l_Lean_Meta_Grind_instBEqCanonArgKey_beq(v_x_1087_, v_k_x27_1101_);
if (v___x_1102_ == 0)
{
lean_object* v___x_1104_; 
if (v_isShared_1093_ == 0)
{
v___x_1104_ = v___x_1092_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_ks_1089_);
lean_ctor_set(v_reuseFailAlloc_1108_, 1, v_vs_1090_);
v___x_1104_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1105_ = lean_unsigned_to_nat(1u);
v___x_1106_ = lean_nat_add(v_x_1086_, v___x_1105_);
lean_dec(v_x_1086_);
v_x_1085_ = v___x_1104_;
v_x_1086_ = v___x_1106_;
goto _start;
}
}
else
{
lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1112_; 
v___x_1109_ = lean_array_fset(v_ks_1089_, v_x_1086_, v_x_1087_);
v___x_1110_ = lean_array_fset(v_vs_1090_, v_x_1086_, v_x_1088_);
lean_dec(v_x_1086_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 1, v___x_1110_);
lean_ctor_set(v___x_1092_, 0, v___x_1109_);
v___x_1112_ = v___x_1092_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v___x_1109_);
lean_ctor_set(v_reuseFailAlloc_1113_, 1, v___x_1110_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__4___redArg(lean_object* v_n_1115_, lean_object* v_k_1116_, lean_object* v_v_1117_){
_start:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1118_ = lean_unsigned_to_nat(0u);
v___x_1119_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__4_spec__5___redArg(v_n_1115_, v___x_1118_, v_k_1116_, v_v_1117_);
return v___x_1119_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1120_; 
v___x_1120_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2___redArg(lean_object* v_x_1121_, size_t v_x_1122_, size_t v_x_1123_, lean_object* v_x_1124_, lean_object* v_x_1125_){
_start:
{
if (lean_obj_tag(v_x_1121_) == 0)
{
lean_object* v_es_1126_; size_t v___x_1127_; size_t v___x_1128_; size_t v___x_1129_; size_t v___x_1130_; lean_object* v_j_1131_; lean_object* v___x_1132_; uint8_t v___x_1133_; 
v_es_1126_ = lean_ctor_get(v_x_1121_, 0);
v___x_1127_ = ((size_t)5ULL);
v___x_1128_ = ((size_t)1ULL);
v___x_1129_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__1);
v___x_1130_ = lean_usize_land(v_x_1122_, v___x_1129_);
v_j_1131_ = lean_usize_to_nat(v___x_1130_);
v___x_1132_ = lean_array_get_size(v_es_1126_);
v___x_1133_ = lean_nat_dec_lt(v_j_1131_, v___x_1132_);
if (v___x_1133_ == 0)
{
lean_dec(v_j_1131_);
lean_dec(v_x_1125_);
lean_dec_ref(v_x_1124_);
return v_x_1121_;
}
else
{
lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1170_; 
lean_inc_ref(v_es_1126_);
v_isSharedCheck_1170_ = !lean_is_exclusive(v_x_1121_);
if (v_isSharedCheck_1170_ == 0)
{
lean_object* v_unused_1171_; 
v_unused_1171_ = lean_ctor_get(v_x_1121_, 0);
lean_dec(v_unused_1171_);
v___x_1135_ = v_x_1121_;
v_isShared_1136_ = v_isSharedCheck_1170_;
goto v_resetjp_1134_;
}
else
{
lean_dec(v_x_1121_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1170_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v_v_1137_; lean_object* v___x_1138_; lean_object* v_xs_x27_1139_; lean_object* v___y_1141_; 
v_v_1137_ = lean_array_fget(v_es_1126_, v_j_1131_);
v___x_1138_ = lean_box(0);
v_xs_x27_1139_ = lean_array_fset(v_es_1126_, v_j_1131_, v___x_1138_);
switch(lean_obj_tag(v_v_1137_))
{
case 0:
{
lean_object* v_key_1146_; lean_object* v_val_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1157_; 
v_key_1146_ = lean_ctor_get(v_v_1137_, 0);
v_val_1147_ = lean_ctor_get(v_v_1137_, 1);
v_isSharedCheck_1157_ = !lean_is_exclusive(v_v_1137_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1149_ = v_v_1137_;
v_isShared_1150_ = v_isSharedCheck_1157_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_val_1147_);
lean_inc(v_key_1146_);
lean_dec(v_v_1137_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1157_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
uint8_t v___x_1151_; 
v___x_1151_ = l_Lean_Meta_Grind_instBEqCanonArgKey_beq(v_x_1124_, v_key_1146_);
if (v___x_1151_ == 0)
{
lean_object* v___x_1152_; lean_object* v___x_1153_; 
lean_del_object(v___x_1149_);
v___x_1152_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1146_, v_val_1147_, v_x_1124_, v_x_1125_);
v___x_1153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1152_);
v___y_1141_ = v___x_1153_;
goto v___jp_1140_;
}
else
{
lean_object* v___x_1155_; 
lean_dec(v_val_1147_);
lean_dec(v_key_1146_);
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 1, v_x_1125_);
lean_ctor_set(v___x_1149_, 0, v_x_1124_);
v___x_1155_ = v___x_1149_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_x_1124_);
lean_ctor_set(v_reuseFailAlloc_1156_, 1, v_x_1125_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
v___y_1141_ = v___x_1155_;
goto v___jp_1140_;
}
}
}
}
case 1:
{
lean_object* v_node_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1168_; 
v_node_1158_ = lean_ctor_get(v_v_1137_, 0);
v_isSharedCheck_1168_ = !lean_is_exclusive(v_v_1137_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1160_ = v_v_1137_;
v_isShared_1161_ = v_isSharedCheck_1168_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_node_1158_);
lean_dec(v_v_1137_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1168_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
size_t v___x_1162_; size_t v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1166_; 
v___x_1162_ = lean_usize_shift_right(v_x_1122_, v___x_1127_);
v___x_1163_ = lean_usize_add(v_x_1123_, v___x_1128_);
v___x_1164_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2___redArg(v_node_1158_, v___x_1162_, v___x_1163_, v_x_1124_, v_x_1125_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 0, v___x_1164_);
v___x_1166_ = v___x_1160_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v___x_1164_);
v___x_1166_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
v___y_1141_ = v___x_1166_;
goto v___jp_1140_;
}
}
}
default: 
{
lean_object* v___x_1169_; 
v___x_1169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1169_, 0, v_x_1124_);
lean_ctor_set(v___x_1169_, 1, v_x_1125_);
v___y_1141_ = v___x_1169_;
goto v___jp_1140_;
}
}
v___jp_1140_:
{
lean_object* v___x_1142_; lean_object* v___x_1144_; 
v___x_1142_ = lean_array_fset(v_xs_x27_1139_, v_j_1131_, v___y_1141_);
lean_dec(v_j_1131_);
if (v_isShared_1136_ == 0)
{
lean_ctor_set(v___x_1135_, 0, v___x_1142_);
v___x_1144_ = v___x_1135_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v___x_1142_);
v___x_1144_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
return v___x_1144_;
}
}
}
}
}
else
{
lean_object* v_ks_1172_; lean_object* v_vs_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1193_; 
v_ks_1172_ = lean_ctor_get(v_x_1121_, 0);
v_vs_1173_ = lean_ctor_get(v_x_1121_, 1);
v_isSharedCheck_1193_ = !lean_is_exclusive(v_x_1121_);
if (v_isSharedCheck_1193_ == 0)
{
v___x_1175_ = v_x_1121_;
v_isShared_1176_ = v_isSharedCheck_1193_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_vs_1173_);
lean_inc(v_ks_1172_);
lean_dec(v_x_1121_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1193_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v___x_1178_; 
if (v_isShared_1176_ == 0)
{
v___x_1178_ = v___x_1175_;
goto v_reusejp_1177_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_ks_1172_);
lean_ctor_set(v_reuseFailAlloc_1192_, 1, v_vs_1173_);
v___x_1178_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1177_;
}
v_reusejp_1177_:
{
lean_object* v_newNode_1179_; uint8_t v___y_1181_; size_t v___x_1187_; uint8_t v___x_1188_; 
v_newNode_1179_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__4___redArg(v___x_1178_, v_x_1124_, v_x_1125_);
v___x_1187_ = ((size_t)7ULL);
v___x_1188_ = lean_usize_dec_le(v___x_1187_, v_x_1123_);
if (v___x_1188_ == 0)
{
lean_object* v___x_1189_; lean_object* v___x_1190_; uint8_t v___x_1191_; 
v___x_1189_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1179_);
v___x_1190_ = lean_unsigned_to_nat(4u);
v___x_1191_ = lean_nat_dec_lt(v___x_1189_, v___x_1190_);
lean_dec(v___x_1189_);
v___y_1181_ = v___x_1191_;
goto v___jp_1180_;
}
else
{
v___y_1181_ = v___x_1188_;
goto v___jp_1180_;
}
v___jp_1180_:
{
if (v___y_1181_ == 0)
{
lean_object* v_ks_1182_; lean_object* v_vs_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
v_ks_1182_ = lean_ctor_get(v_newNode_1179_, 0);
lean_inc_ref(v_ks_1182_);
v_vs_1183_ = lean_ctor_get(v_newNode_1179_, 1);
lean_inc_ref(v_vs_1183_);
lean_dec_ref(v_newNode_1179_);
v___x_1184_ = lean_unsigned_to_nat(0u);
v___x_1185_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2___redArg___closed__0);
v___x_1186_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__5___redArg(v_x_1123_, v_ks_1182_, v_vs_1183_, v___x_1184_, v___x_1185_);
lean_dec_ref(v_vs_1183_);
lean_dec_ref(v_ks_1182_);
return v___x_1186_;
}
else
{
return v_newNode_1179_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__5___redArg(size_t v_depth_1194_, lean_object* v_keys_1195_, lean_object* v_vals_1196_, lean_object* v_i_1197_, lean_object* v_entries_1198_){
_start:
{
lean_object* v___x_1199_; uint8_t v___x_1200_; 
v___x_1199_ = lean_array_get_size(v_keys_1195_);
v___x_1200_ = lean_nat_dec_lt(v_i_1197_, v___x_1199_);
if (v___x_1200_ == 0)
{
lean_dec(v_i_1197_);
return v_entries_1198_;
}
else
{
lean_object* v_k_1201_; lean_object* v_v_1202_; uint64_t v___x_1203_; size_t v_h_1204_; size_t v___x_1205_; lean_object* v___x_1206_; size_t v___x_1207_; size_t v___x_1208_; size_t v___x_1209_; size_t v_h_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; 
v_k_1201_ = lean_array_fget_borrowed(v_keys_1195_, v_i_1197_);
v_v_1202_ = lean_array_fget_borrowed(v_vals_1196_, v_i_1197_);
v___x_1203_ = l_Lean_Meta_Grind_instHashableCanonArgKey_hash(v_k_1201_);
v_h_1204_ = lean_uint64_to_usize(v___x_1203_);
v___x_1205_ = ((size_t)5ULL);
v___x_1206_ = lean_unsigned_to_nat(1u);
v___x_1207_ = ((size_t)1ULL);
v___x_1208_ = lean_usize_sub(v_depth_1194_, v___x_1207_);
v___x_1209_ = lean_usize_mul(v___x_1205_, v___x_1208_);
v_h_1210_ = lean_usize_shift_right(v_h_1204_, v___x_1209_);
v___x_1211_ = lean_nat_add(v_i_1197_, v___x_1206_);
lean_dec(v_i_1197_);
lean_inc(v_v_1202_);
lean_inc(v_k_1201_);
v___x_1212_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2___redArg(v_entries_1198_, v_h_1210_, v_depth_1194_, v_k_1201_, v_v_1202_);
v_i_1197_ = v___x_1211_;
v_entries_1198_ = v___x_1212_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_1214_, lean_object* v_keys_1215_, lean_object* v_vals_1216_, lean_object* v_i_1217_, lean_object* v_entries_1218_){
_start:
{
size_t v_depth_boxed_1219_; lean_object* v_res_1220_; 
v_depth_boxed_1219_ = lean_unbox_usize(v_depth_1214_);
lean_dec(v_depth_1214_);
v_res_1220_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__5___redArg(v_depth_boxed_1219_, v_keys_1215_, v_vals_1216_, v_i_1217_, v_entries_1218_);
lean_dec_ref(v_vals_1216_);
lean_dec_ref(v_keys_1215_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2___redArg___boxed(lean_object* v_x_1221_, lean_object* v_x_1222_, lean_object* v_x_1223_, lean_object* v_x_1224_, lean_object* v_x_1225_){
_start:
{
size_t v_x_4429__boxed_1226_; size_t v_x_4430__boxed_1227_; lean_object* v_res_1228_; 
v_x_4429__boxed_1226_ = lean_unbox_usize(v_x_1222_);
lean_dec(v_x_1222_);
v_x_4430__boxed_1227_ = lean_unbox_usize(v_x_1223_);
lean_dec(v_x_1223_);
v_res_1228_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2___redArg(v_x_1221_, v_x_4429__boxed_1226_, v_x_4430__boxed_1227_, v_x_1224_, v_x_1225_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1___redArg(lean_object* v_x_1229_, lean_object* v_x_1230_, lean_object* v_x_1231_){
_start:
{
uint64_t v___x_1232_; size_t v___x_1233_; size_t v___x_1234_; lean_object* v___x_1235_; 
v___x_1232_ = l_Lean_Meta_Grind_instHashableCanonArgKey_hash(v_x_1230_);
v___x_1233_ = lean_uint64_to_usize(v___x_1232_);
v___x_1234_ = ((size_t)1ULL);
v___x_1235_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2___redArg(v_x_1229_, v___x_1233_, v___x_1234_, v_x_1230_, v_x_1231_);
return v___x_1235_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1236_, lean_object* v_vals_1237_, lean_object* v_i_1238_, lean_object* v_k_1239_){
_start:
{
lean_object* v___x_1240_; uint8_t v___x_1241_; 
v___x_1240_ = lean_array_get_size(v_keys_1236_);
v___x_1241_ = lean_nat_dec_lt(v_i_1238_, v___x_1240_);
if (v___x_1241_ == 0)
{
lean_object* v___x_1242_; 
lean_dec(v_i_1238_);
v___x_1242_ = lean_box(0);
return v___x_1242_;
}
else
{
lean_object* v_k_x27_1243_; uint8_t v___x_1244_; 
v_k_x27_1243_ = lean_array_fget_borrowed(v_keys_1236_, v_i_1238_);
v___x_1244_ = l_Lean_Meta_Grind_instBEqCanonArgKey_beq(v_k_1239_, v_k_x27_1243_);
if (v___x_1244_ == 0)
{
lean_object* v___x_1245_; lean_object* v___x_1246_; 
v___x_1245_ = lean_unsigned_to_nat(1u);
v___x_1246_ = lean_nat_add(v_i_1238_, v___x_1245_);
lean_dec(v_i_1238_);
v_i_1238_ = v___x_1246_;
goto _start;
}
else
{
lean_object* v___x_1248_; lean_object* v___x_1249_; 
v___x_1248_ = lean_array_fget_borrowed(v_vals_1237_, v_i_1238_);
lean_dec(v_i_1238_);
lean_inc(v___x_1248_);
v___x_1249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1248_);
return v___x_1249_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1250_, lean_object* v_vals_1251_, lean_object* v_i_1252_, lean_object* v_k_1253_){
_start:
{
lean_object* v_res_1254_; 
v_res_1254_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0_spec__1___redArg(v_keys_1250_, v_vals_1251_, v_i_1252_, v_k_1253_);
lean_dec_ref(v_k_1253_);
lean_dec_ref(v_vals_1251_);
lean_dec_ref(v_keys_1250_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0___redArg(lean_object* v_x_1255_, size_t v_x_1256_, lean_object* v_x_1257_){
_start:
{
if (lean_obj_tag(v_x_1255_) == 0)
{
lean_object* v_es_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1279_; 
v_es_1258_ = lean_ctor_get(v_x_1255_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v_x_1255_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1260_ = v_x_1255_;
v_isShared_1261_ = v_isSharedCheck_1279_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_es_1258_);
lean_dec(v_x_1255_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1279_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v___x_1262_; size_t v___x_1263_; size_t v___x_1264_; size_t v___x_1265_; lean_object* v_j_1266_; lean_object* v___x_1267_; 
v___x_1262_ = lean_box(2);
v___x_1263_ = ((size_t)5ULL);
v___x_1264_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go_spec__0_spec__0___redArg___closed__1);
v___x_1265_ = lean_usize_land(v_x_1256_, v___x_1264_);
v_j_1266_ = lean_usize_to_nat(v___x_1265_);
v___x_1267_ = lean_array_get(v___x_1262_, v_es_1258_, v_j_1266_);
lean_dec(v_j_1266_);
lean_dec_ref(v_es_1258_);
switch(lean_obj_tag(v___x_1267_))
{
case 0:
{
lean_object* v_key_1268_; lean_object* v_val_1269_; uint8_t v___x_1270_; 
v_key_1268_ = lean_ctor_get(v___x_1267_, 0);
lean_inc(v_key_1268_);
v_val_1269_ = lean_ctor_get(v___x_1267_, 1);
lean_inc(v_val_1269_);
lean_dec_ref(v___x_1267_);
v___x_1270_ = l_Lean_Meta_Grind_instBEqCanonArgKey_beq(v_x_1257_, v_key_1268_);
lean_dec(v_key_1268_);
if (v___x_1270_ == 0)
{
lean_object* v___x_1271_; 
lean_dec(v_val_1269_);
lean_del_object(v___x_1260_);
v___x_1271_ = lean_box(0);
return v___x_1271_;
}
else
{
lean_object* v___x_1273_; 
if (v_isShared_1261_ == 0)
{
lean_ctor_set_tag(v___x_1260_, 1);
lean_ctor_set(v___x_1260_, 0, v_val_1269_);
v___x_1273_ = v___x_1260_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_val_1269_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
case 1:
{
lean_object* v_node_1275_; size_t v___x_1276_; 
lean_del_object(v___x_1260_);
v_node_1275_ = lean_ctor_get(v___x_1267_, 0);
lean_inc(v_node_1275_);
lean_dec_ref(v___x_1267_);
v___x_1276_ = lean_usize_shift_right(v_x_1256_, v___x_1263_);
v_x_1255_ = v_node_1275_;
v_x_1256_ = v___x_1276_;
goto _start;
}
default: 
{
lean_object* v___x_1278_; 
lean_del_object(v___x_1260_);
v___x_1278_ = lean_box(0);
return v___x_1278_;
}
}
}
}
else
{
lean_object* v_ks_1280_; lean_object* v_vs_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v_ks_1280_ = lean_ctor_get(v_x_1255_, 0);
lean_inc_ref(v_ks_1280_);
v_vs_1281_ = lean_ctor_get(v_x_1255_, 1);
lean_inc_ref(v_vs_1281_);
lean_dec_ref(v_x_1255_);
v___x_1282_ = lean_unsigned_to_nat(0u);
v___x_1283_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0_spec__1___redArg(v_ks_1280_, v_vs_1281_, v___x_1282_, v_x_1257_);
lean_dec_ref(v_vs_1281_);
lean_dec_ref(v_ks_1280_);
return v___x_1283_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0___redArg___boxed(lean_object* v_x_1284_, lean_object* v_x_1285_, lean_object* v_x_1286_){
_start:
{
size_t v_x_4623__boxed_1287_; lean_object* v_res_1288_; 
v_x_4623__boxed_1287_ = lean_unbox_usize(v_x_1285_);
lean_dec(v_x_1285_);
v_res_1288_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0___redArg(v_x_1284_, v_x_4623__boxed_1287_, v_x_1286_);
lean_dec_ref(v_x_1286_);
return v_res_1288_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0___redArg(lean_object* v_x_1289_, lean_object* v_x_1290_){
_start:
{
uint64_t v___x_1291_; size_t v___x_1292_; lean_object* v___x_1293_; 
v___x_1291_ = l_Lean_Meta_Grind_instHashableCanonArgKey_hash(v_x_1290_);
v___x_1292_ = lean_uint64_to_usize(v___x_1291_);
v___x_1293_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0___redArg(v_x_1289_, v___x_1292_, v_x_1290_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0___redArg___boxed(lean_object* v_x_1294_, lean_object* v_x_1295_){
_start:
{
lean_object* v_res_1296_; 
v_res_1296_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0___redArg(v_x_1294_, v_x_1295_);
lean_dec_ref(v_x_1295_);
return v_res_1296_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore(lean_object* v_f_1297_, lean_object* v_i_1298_, lean_object* v_e_1299_, uint8_t v_isInst_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_, lean_object* v_a_1310_){
_start:
{
lean_object* v___x_1312_; lean_object* v_toGoalState_1313_; lean_object* v_canon_1314_; lean_object* v_canonArg_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1312_ = lean_st_ref_get(v_a_1301_);
v_toGoalState_1313_ = lean_ctor_get(v___x_1312_, 0);
lean_inc_ref(v_toGoalState_1313_);
lean_dec(v___x_1312_);
v_canon_1314_ = lean_ctor_get(v_toGoalState_1313_, 1);
lean_inc_ref(v_canon_1314_);
lean_dec_ref(v_toGoalState_1313_);
v_canonArg_1315_ = lean_ctor_get(v_canon_1314_, 1);
lean_inc_ref(v_canonArg_1315_);
lean_dec_ref(v_canon_1314_);
lean_inc_ref(v_e_1299_);
lean_inc(v_i_1298_);
lean_inc_ref(v_f_1297_);
v___x_1316_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1316_, 0, v_f_1297_);
lean_ctor_set(v___x_1316_, 1, v_i_1298_);
lean_ctor_set(v___x_1316_, 2, v_e_1299_);
v___x_1317_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0___redArg(v_canonArg_1315_, v___x_1316_);
if (lean_obj_tag(v___x_1317_) == 1)
{
lean_object* v_val_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
lean_dec_ref(v___x_1316_);
lean_dec_ref(v_e_1299_);
lean_dec(v_i_1298_);
lean_dec_ref(v_f_1297_);
v_val_1318_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1320_ = v___x_1317_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_val_1318_);
lean_dec(v___x_1317_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
lean_ctor_set_tag(v___x_1320_, 0);
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_val_1318_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
else
{
lean_object* v___x_1326_; 
lean_dec(v___x_1317_);
v___x_1326_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_go(v_f_1297_, v_i_1298_, v_e_1299_, v_isInst_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_, v_a_1305_, v_a_1306_, v_a_1307_, v_a_1308_, v_a_1309_, v_a_1310_);
if (lean_obj_tag(v___x_1326_) == 0)
{
lean_object* v_a_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1383_; 
v_a_1327_ = lean_ctor_get(v___x_1326_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1326_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1329_ = v___x_1326_;
v_isShared_1330_ = v_isSharedCheck_1383_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_a_1327_);
lean_dec(v___x_1326_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1383_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1331_; lean_object* v_toGoalState_1332_; lean_object* v_canon_1333_; lean_object* v_mvarId_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1381_; 
v___x_1331_ = lean_st_ref_take(v_a_1301_);
v_toGoalState_1332_ = lean_ctor_get(v___x_1331_, 0);
lean_inc_ref(v_toGoalState_1332_);
v_canon_1333_ = lean_ctor_get(v_toGoalState_1332_, 1);
lean_inc_ref(v_canon_1333_);
v_mvarId_1334_ = lean_ctor_get(v___x_1331_, 1);
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1381_ == 0)
{
lean_object* v_unused_1382_; 
v_unused_1382_ = lean_ctor_get(v___x_1331_, 0);
lean_dec(v_unused_1382_);
v___x_1336_ = v___x_1331_;
v_isShared_1337_ = v_isSharedCheck_1381_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_mvarId_1334_);
lean_dec(v___x_1331_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1381_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v_nextDeclIdx_1338_; lean_object* v_enodeMap_1339_; lean_object* v_exprs_1340_; lean_object* v_parents_1341_; lean_object* v_congrTable_1342_; lean_object* v_appMap_1343_; lean_object* v_indicesFound_1344_; lean_object* v_newFacts_1345_; uint8_t v_inconsistent_1346_; lean_object* v_nextIdx_1347_; lean_object* v_newRawFacts_1348_; lean_object* v_facts_1349_; lean_object* v_extThms_1350_; lean_object* v_ematch_1351_; lean_object* v_inj_1352_; lean_object* v_split_1353_; lean_object* v_clean_1354_; lean_object* v_sstates_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1379_; 
v_nextDeclIdx_1338_ = lean_ctor_get(v_toGoalState_1332_, 0);
v_enodeMap_1339_ = lean_ctor_get(v_toGoalState_1332_, 2);
v_exprs_1340_ = lean_ctor_get(v_toGoalState_1332_, 3);
v_parents_1341_ = lean_ctor_get(v_toGoalState_1332_, 4);
v_congrTable_1342_ = lean_ctor_get(v_toGoalState_1332_, 5);
v_appMap_1343_ = lean_ctor_get(v_toGoalState_1332_, 6);
v_indicesFound_1344_ = lean_ctor_get(v_toGoalState_1332_, 7);
v_newFacts_1345_ = lean_ctor_get(v_toGoalState_1332_, 8);
v_inconsistent_1346_ = lean_ctor_get_uint8(v_toGoalState_1332_, sizeof(void*)*18);
v_nextIdx_1347_ = lean_ctor_get(v_toGoalState_1332_, 9);
v_newRawFacts_1348_ = lean_ctor_get(v_toGoalState_1332_, 10);
v_facts_1349_ = lean_ctor_get(v_toGoalState_1332_, 11);
v_extThms_1350_ = lean_ctor_get(v_toGoalState_1332_, 12);
v_ematch_1351_ = lean_ctor_get(v_toGoalState_1332_, 13);
v_inj_1352_ = lean_ctor_get(v_toGoalState_1332_, 14);
v_split_1353_ = lean_ctor_get(v_toGoalState_1332_, 15);
v_clean_1354_ = lean_ctor_get(v_toGoalState_1332_, 16);
v_sstates_1355_ = lean_ctor_get(v_toGoalState_1332_, 17);
v_isSharedCheck_1379_ = !lean_is_exclusive(v_toGoalState_1332_);
if (v_isSharedCheck_1379_ == 0)
{
lean_object* v_unused_1380_; 
v_unused_1380_ = lean_ctor_get(v_toGoalState_1332_, 1);
lean_dec(v_unused_1380_);
v___x_1357_ = v_toGoalState_1332_;
v_isShared_1358_ = v_isSharedCheck_1379_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_sstates_1355_);
lean_inc(v_clean_1354_);
lean_inc(v_split_1353_);
lean_inc(v_inj_1352_);
lean_inc(v_ematch_1351_);
lean_inc(v_extThms_1350_);
lean_inc(v_facts_1349_);
lean_inc(v_newRawFacts_1348_);
lean_inc(v_nextIdx_1347_);
lean_inc(v_newFacts_1345_);
lean_inc(v_indicesFound_1344_);
lean_inc(v_appMap_1343_);
lean_inc(v_congrTable_1342_);
lean_inc(v_parents_1341_);
lean_inc(v_exprs_1340_);
lean_inc(v_enodeMap_1339_);
lean_inc(v_nextDeclIdx_1338_);
lean_dec(v_toGoalState_1332_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1379_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v_argMap_1359_; lean_object* v_canonArg_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1378_; 
v_argMap_1359_ = lean_ctor_get(v_canon_1333_, 0);
v_canonArg_1360_ = lean_ctor_get(v_canon_1333_, 1);
v_isSharedCheck_1378_ = !lean_is_exclusive(v_canon_1333_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1362_ = v_canon_1333_;
v_isShared_1363_ = v_isSharedCheck_1378_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_canonArg_1360_);
lean_inc(v_argMap_1359_);
lean_dec(v_canon_1333_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1378_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
lean_object* v___x_1364_; lean_object* v___x_1366_; 
lean_inc(v_a_1327_);
v___x_1364_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1___redArg(v_canonArg_1360_, v___x_1316_, v_a_1327_);
if (v_isShared_1363_ == 0)
{
lean_ctor_set(v___x_1362_, 1, v___x_1364_);
v___x_1366_ = v___x_1362_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v_argMap_1359_);
lean_ctor_set(v_reuseFailAlloc_1377_, 1, v___x_1364_);
v___x_1366_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
lean_object* v___x_1368_; 
if (v_isShared_1358_ == 0)
{
lean_ctor_set(v___x_1357_, 1, v___x_1366_);
v___x_1368_ = v___x_1357_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(0, 18, 1);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v_nextDeclIdx_1338_);
lean_ctor_set(v_reuseFailAlloc_1376_, 1, v___x_1366_);
lean_ctor_set(v_reuseFailAlloc_1376_, 2, v_enodeMap_1339_);
lean_ctor_set(v_reuseFailAlloc_1376_, 3, v_exprs_1340_);
lean_ctor_set(v_reuseFailAlloc_1376_, 4, v_parents_1341_);
lean_ctor_set(v_reuseFailAlloc_1376_, 5, v_congrTable_1342_);
lean_ctor_set(v_reuseFailAlloc_1376_, 6, v_appMap_1343_);
lean_ctor_set(v_reuseFailAlloc_1376_, 7, v_indicesFound_1344_);
lean_ctor_set(v_reuseFailAlloc_1376_, 8, v_newFacts_1345_);
lean_ctor_set(v_reuseFailAlloc_1376_, 9, v_nextIdx_1347_);
lean_ctor_set(v_reuseFailAlloc_1376_, 10, v_newRawFacts_1348_);
lean_ctor_set(v_reuseFailAlloc_1376_, 11, v_facts_1349_);
lean_ctor_set(v_reuseFailAlloc_1376_, 12, v_extThms_1350_);
lean_ctor_set(v_reuseFailAlloc_1376_, 13, v_ematch_1351_);
lean_ctor_set(v_reuseFailAlloc_1376_, 14, v_inj_1352_);
lean_ctor_set(v_reuseFailAlloc_1376_, 15, v_split_1353_);
lean_ctor_set(v_reuseFailAlloc_1376_, 16, v_clean_1354_);
lean_ctor_set(v_reuseFailAlloc_1376_, 17, v_sstates_1355_);
lean_ctor_set_uint8(v_reuseFailAlloc_1376_, sizeof(void*)*18, v_inconsistent_1346_);
v___x_1368_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
lean_object* v___x_1370_; 
if (v_isShared_1337_ == 0)
{
lean_ctor_set(v___x_1336_, 0, v___x_1368_);
v___x_1370_ = v___x_1336_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v___x_1368_);
lean_ctor_set(v_reuseFailAlloc_1375_, 1, v_mvarId_1334_);
v___x_1370_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
lean_object* v___x_1371_; lean_object* v___x_1373_; 
v___x_1371_ = lean_st_ref_set(v_a_1301_, v___x_1370_);
if (v_isShared_1330_ == 0)
{
v___x_1373_ = v___x_1329_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v_a_1327_);
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
}
}
}
}
}
else
{
lean_dec_ref(v___x_1316_);
return v___x_1326_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore___boxed(lean_object* v_f_1384_, lean_object* v_i_1385_, lean_object* v_e_1386_, lean_object* v_isInst_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_, lean_object* v_a_1397_, lean_object* v_a_1398_){
_start:
{
uint8_t v_isInst_boxed_1399_; lean_object* v_res_1400_; 
v_isInst_boxed_1399_ = lean_unbox(v_isInst_1387_);
v_res_1400_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore(v_f_1384_, v_i_1385_, v_e_1386_, v_isInst_boxed_1399_, v_a_1388_, v_a_1389_, v_a_1390_, v_a_1391_, v_a_1392_, v_a_1393_, v_a_1394_, v_a_1395_, v_a_1396_, v_a_1397_);
lean_dec(v_a_1397_);
lean_dec_ref(v_a_1396_);
lean_dec(v_a_1395_);
lean_dec_ref(v_a_1394_);
lean_dec(v_a_1393_);
lean_dec_ref(v_a_1392_);
lean_dec(v_a_1391_);
lean_dec_ref(v_a_1390_);
lean_dec(v_a_1389_);
lean_dec(v_a_1388_);
return v_res_1400_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0(lean_object* v_00_u03b2_1401_, lean_object* v_x_1402_, lean_object* v_x_1403_){
_start:
{
lean_object* v___x_1404_; 
v___x_1404_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0___redArg(v_x_1402_, v_x_1403_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0___boxed(lean_object* v_00_u03b2_1405_, lean_object* v_x_1406_, lean_object* v_x_1407_){
_start:
{
lean_object* v_res_1408_; 
v_res_1408_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0(v_00_u03b2_1405_, v_x_1406_, v_x_1407_);
lean_dec_ref(v_x_1407_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1(lean_object* v_00_u03b2_1409_, lean_object* v_x_1410_, lean_object* v_x_1411_, lean_object* v_x_1412_){
_start:
{
lean_object* v___x_1413_; 
v___x_1413_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1___redArg(v_x_1410_, v_x_1411_, v_x_1412_);
return v___x_1413_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0(lean_object* v_00_u03b2_1414_, lean_object* v_x_1415_, size_t v_x_1416_, lean_object* v_x_1417_){
_start:
{
lean_object* v___x_1418_; 
v___x_1418_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0___redArg(v_x_1415_, v_x_1416_, v_x_1417_);
return v___x_1418_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1419_, lean_object* v_x_1420_, lean_object* v_x_1421_, lean_object* v_x_1422_){
_start:
{
size_t v_x_4808__boxed_1423_; lean_object* v_res_1424_; 
v_x_4808__boxed_1423_ = lean_unbox_usize(v_x_1421_);
lean_dec(v_x_1421_);
v_res_1424_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0(v_00_u03b2_1419_, v_x_1420_, v_x_4808__boxed_1423_, v_x_1422_);
lean_dec_ref(v_x_1422_);
return v_res_1424_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2(lean_object* v_00_u03b2_1425_, lean_object* v_x_1426_, size_t v_x_1427_, size_t v_x_1428_, lean_object* v_x_1429_, lean_object* v_x_1430_){
_start:
{
lean_object* v___x_1431_; 
v___x_1431_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2___redArg(v_x_1426_, v_x_1427_, v_x_1428_, v_x_1429_, v_x_1430_);
return v___x_1431_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1432_, lean_object* v_x_1433_, lean_object* v_x_1434_, lean_object* v_x_1435_, lean_object* v_x_1436_, lean_object* v_x_1437_){
_start:
{
size_t v_x_4819__boxed_1438_; size_t v_x_4820__boxed_1439_; lean_object* v_res_1440_; 
v_x_4819__boxed_1438_ = lean_unbox_usize(v_x_1434_);
lean_dec(v_x_1434_);
v_x_4820__boxed_1439_ = lean_unbox_usize(v_x_1435_);
lean_dec(v_x_1435_);
v_res_1440_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2(v_00_u03b2_1432_, v_x_1433_, v_x_4819__boxed_1438_, v_x_4820__boxed_1439_, v_x_1436_, v_x_1437_);
return v_res_1440_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1441_, lean_object* v_keys_1442_, lean_object* v_vals_1443_, lean_object* v_heq_1444_, lean_object* v_i_1445_, lean_object* v_k_1446_){
_start:
{
lean_object* v___x_1447_; 
v___x_1447_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0_spec__1___redArg(v_keys_1442_, v_vals_1443_, v_i_1445_, v_k_1446_);
return v___x_1447_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1448_, lean_object* v_keys_1449_, lean_object* v_vals_1450_, lean_object* v_heq_1451_, lean_object* v_i_1452_, lean_object* v_k_1453_){
_start:
{
lean_object* v_res_1454_; 
v_res_1454_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__0_spec__0_spec__1(v_00_u03b2_1448_, v_keys_1449_, v_vals_1450_, v_heq_1451_, v_i_1452_, v_k_1453_);
lean_dec_ref(v_k_1453_);
lean_dec_ref(v_vals_1450_);
lean_dec_ref(v_keys_1449_);
return v_res_1454_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1455_, lean_object* v_n_1456_, lean_object* v_k_1457_, lean_object* v_v_1458_){
_start:
{
lean_object* v___x_1459_; 
v___x_1459_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__4___redArg(v_n_1456_, v_k_1457_, v_v_1458_);
return v___x_1459_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_1460_, size_t v_depth_1461_, lean_object* v_keys_1462_, lean_object* v_vals_1463_, lean_object* v_heq_1464_, lean_object* v_i_1465_, lean_object* v_entries_1466_){
_start:
{
lean_object* v___x_1467_; 
v___x_1467_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__5___redArg(v_depth_1461_, v_keys_1462_, v_vals_1463_, v_i_1465_, v_entries_1466_);
return v___x_1467_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_1468_, lean_object* v_depth_1469_, lean_object* v_keys_1470_, lean_object* v_vals_1471_, lean_object* v_heq_1472_, lean_object* v_i_1473_, lean_object* v_entries_1474_){
_start:
{
size_t v_depth_boxed_1475_; lean_object* v_res_1476_; 
v_depth_boxed_1475_ = lean_unbox_usize(v_depth_1469_);
lean_dec(v_depth_1469_);
v_res_1476_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__5(v_00_u03b2_1468_, v_depth_boxed_1475_, v_keys_1470_, v_vals_1471_, v_heq_1472_, v_i_1473_, v_entries_1474_);
lean_dec_ref(v_vals_1471_);
lean_dec_ref(v_keys_1470_);
return v_res_1476_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_1477_, lean_object* v_x_1478_, lean_object* v_x_1479_, lean_object* v_x_1480_, lean_object* v_x_1481_){
_start:
{
lean_object* v___x_1482_; 
v___x_1482_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_spec__1_spec__2_spec__4_spec__5___redArg(v_x_1478_, v_x_1479_, v_x_1480_, v_x_1481_);
return v___x_1482_;
}
}
static uint64_t _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonType___closed__0(void){
_start:
{
uint8_t v___x_1483_; uint64_t v___x_1484_; 
v___x_1483_ = 1;
v___x_1484_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_1483_);
return v___x_1484_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonType(lean_object* v_f_1485_, lean_object* v_i_1486_, lean_object* v_e_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_, lean_object* v_a_1496_, lean_object* v_a_1497_){
_start:
{
lean_object* v___x_1499_; uint8_t v_foApprox_1500_; uint8_t v_ctxApprox_1501_; uint8_t v_quasiPatternApprox_1502_; uint8_t v_constApprox_1503_; uint8_t v_isDefEqStuckEx_1504_; uint8_t v_unificationHints_1505_; uint8_t v_proofIrrelevance_1506_; uint8_t v_assignSyntheticOpaque_1507_; uint8_t v_offsetCnstrs_1508_; uint8_t v_etaStruct_1509_; uint8_t v_univApprox_1510_; uint8_t v_iota_1511_; uint8_t v_beta_1512_; uint8_t v_proj_1513_; uint8_t v_zeta_1514_; uint8_t v_zetaDelta_1515_; uint8_t v_zetaUnused_1516_; uint8_t v_zetaHave_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1553_; 
v___x_1499_ = l_Lean_Meta_Context_config(v_a_1494_);
v_foApprox_1500_ = lean_ctor_get_uint8(v___x_1499_, 0);
v_ctxApprox_1501_ = lean_ctor_get_uint8(v___x_1499_, 1);
v_quasiPatternApprox_1502_ = lean_ctor_get_uint8(v___x_1499_, 2);
v_constApprox_1503_ = lean_ctor_get_uint8(v___x_1499_, 3);
v_isDefEqStuckEx_1504_ = lean_ctor_get_uint8(v___x_1499_, 4);
v_unificationHints_1505_ = lean_ctor_get_uint8(v___x_1499_, 5);
v_proofIrrelevance_1506_ = lean_ctor_get_uint8(v___x_1499_, 6);
v_assignSyntheticOpaque_1507_ = lean_ctor_get_uint8(v___x_1499_, 7);
v_offsetCnstrs_1508_ = lean_ctor_get_uint8(v___x_1499_, 8);
v_etaStruct_1509_ = lean_ctor_get_uint8(v___x_1499_, 10);
v_univApprox_1510_ = lean_ctor_get_uint8(v___x_1499_, 11);
v_iota_1511_ = lean_ctor_get_uint8(v___x_1499_, 12);
v_beta_1512_ = lean_ctor_get_uint8(v___x_1499_, 13);
v_proj_1513_ = lean_ctor_get_uint8(v___x_1499_, 14);
v_zeta_1514_ = lean_ctor_get_uint8(v___x_1499_, 15);
v_zetaDelta_1515_ = lean_ctor_get_uint8(v___x_1499_, 16);
v_zetaUnused_1516_ = lean_ctor_get_uint8(v___x_1499_, 17);
v_zetaHave_1517_ = lean_ctor_get_uint8(v___x_1499_, 18);
v_isSharedCheck_1553_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1553_ == 0)
{
v___x_1519_ = v___x_1499_;
v_isShared_1520_ = v_isSharedCheck_1553_;
goto v_resetjp_1518_;
}
else
{
lean_dec(v___x_1499_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1553_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
uint8_t v_trackZetaDelta_1521_; lean_object* v_zetaDeltaSet_1522_; lean_object* v_lctx_1523_; lean_object* v_localInstances_1524_; lean_object* v_defEqCtx_x3f_1525_; lean_object* v_synthPendingDepth_1526_; lean_object* v_canUnfold_x3f_1527_; uint8_t v_univApprox_1528_; uint8_t v_inTypeClassResolution_1529_; uint8_t v_cacheInferType_1530_; uint8_t v___x_1531_; lean_object* v_config_1533_; 
v_trackZetaDelta_1521_ = lean_ctor_get_uint8(v_a_1494_, sizeof(void*)*7);
v_zetaDeltaSet_1522_ = lean_ctor_get(v_a_1494_, 1);
v_lctx_1523_ = lean_ctor_get(v_a_1494_, 2);
v_localInstances_1524_ = lean_ctor_get(v_a_1494_, 3);
v_defEqCtx_x3f_1525_ = lean_ctor_get(v_a_1494_, 4);
v_synthPendingDepth_1526_ = lean_ctor_get(v_a_1494_, 5);
v_canUnfold_x3f_1527_ = lean_ctor_get(v_a_1494_, 6);
v_univApprox_1528_ = lean_ctor_get_uint8(v_a_1494_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1529_ = lean_ctor_get_uint8(v_a_1494_, sizeof(void*)*7 + 2);
v_cacheInferType_1530_ = lean_ctor_get_uint8(v_a_1494_, sizeof(void*)*7 + 3);
v___x_1531_ = 1;
if (v_isShared_1520_ == 0)
{
v_config_1533_ = v___x_1519_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, 0, v_foApprox_1500_);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, 1, v_ctxApprox_1501_);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, 2, v_quasiPatternApprox_1502_);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, 3, v_constApprox_1503_);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, 4, v_isDefEqStuckEx_1504_);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, 5, v_unificationHints_1505_);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, 6, v_proofIrrelevance_1506_);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, 7, v_assignSyntheticOpaque_1507_);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, 8, v_offsetCnstrs_1508_);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, 10, v_etaStruct_1509_);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, 11, v_univApprox_1510_);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, 12, v_iota_1511_);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, 13, v_beta_1512_);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, 14, v_proj_1513_);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, 15, v_zeta_1514_);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, 16, v_zetaDelta_1515_);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, 17, v_zetaUnused_1516_);
lean_ctor_set_uint8(v_reuseFailAlloc_1552_, 18, v_zetaHave_1517_);
v_config_1533_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
uint64_t v___x_1534_; uint64_t v___x_1535_; uint64_t v___x_1536_; uint8_t v___x_1537_; uint64_t v___x_1538_; uint64_t v___x_1539_; uint64_t v_key_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; 
lean_ctor_set_uint8(v_config_1533_, 9, v___x_1531_);
v___x_1534_ = l_Lean_Meta_Context_configKey(v_a_1494_);
v___x_1535_ = 2ULL;
v___x_1536_ = lean_uint64_shift_right(v___x_1534_, v___x_1535_);
v___x_1537_ = 0;
v___x_1538_ = lean_uint64_shift_left(v___x_1536_, v___x_1535_);
v___x_1539_ = lean_uint64_once(&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonType___closed__0, &l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonType___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonType___closed__0);
v_key_1540_ = lean_uint64_lor(v___x_1538_, v___x_1539_);
v___x_1541_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1541_, 0, v_config_1533_);
lean_ctor_set_uint64(v___x_1541_, sizeof(void*)*1, v_key_1540_);
lean_inc(v_canUnfold_x3f_1527_);
lean_inc(v_synthPendingDepth_1526_);
lean_inc(v_defEqCtx_x3f_1525_);
lean_inc_ref(v_localInstances_1524_);
lean_inc_ref(v_lctx_1523_);
lean_inc(v_zetaDeltaSet_1522_);
v___x_1542_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1542_, 0, v___x_1541_);
lean_ctor_set(v___x_1542_, 1, v_zetaDeltaSet_1522_);
lean_ctor_set(v___x_1542_, 2, v_lctx_1523_);
lean_ctor_set(v___x_1542_, 3, v_localInstances_1524_);
lean_ctor_set(v___x_1542_, 4, v_defEqCtx_x3f_1525_);
lean_ctor_set(v___x_1542_, 5, v_synthPendingDepth_1526_);
lean_ctor_set(v___x_1542_, 6, v_canUnfold_x3f_1527_);
lean_ctor_set_uint8(v___x_1542_, sizeof(void*)*7, v_trackZetaDelta_1521_);
lean_ctor_set_uint8(v___x_1542_, sizeof(void*)*7 + 1, v_univApprox_1528_);
lean_ctor_set_uint8(v___x_1542_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1529_);
lean_ctor_set_uint8(v___x_1542_, sizeof(void*)*7 + 3, v_cacheInferType_1530_);
v___x_1543_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore(v_f_1485_, v_i_1486_, v_e_1487_, v___x_1537_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v___x_1542_, v_a_1495_, v_a_1496_, v_a_1497_);
lean_dec_ref(v___x_1542_);
if (lean_obj_tag(v___x_1543_) == 0)
{
lean_object* v_a_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1551_; 
v_a_1544_ = lean_ctor_get(v___x_1543_, 0);
v_isSharedCheck_1551_ = !lean_is_exclusive(v___x_1543_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1546_ = v___x_1543_;
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_a_1544_);
lean_dec(v___x_1543_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___x_1549_; 
if (v_isShared_1547_ == 0)
{
v___x_1549_ = v___x_1546_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v_a_1544_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
return v___x_1549_;
}
}
}
else
{
return v___x_1543_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonType___boxed(lean_object* v_f_1554_, lean_object* v_i_1555_, lean_object* v_e_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_, lean_object* v_a_1562_, lean_object* v_a_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_){
_start:
{
lean_object* v_res_1568_; 
v_res_1568_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonType(v_f_1554_, v_i_1555_, v_e_1556_, v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_, v_a_1561_, v_a_1562_, v_a_1563_, v_a_1564_, v_a_1565_, v_a_1566_);
lean_dec(v_a_1566_);
lean_dec_ref(v_a_1565_);
lean_dec(v_a_1564_);
lean_dec_ref(v_a_1563_);
lean_dec(v_a_1562_);
lean_dec_ref(v_a_1561_);
lean_dec(v_a_1560_);
lean_dec_ref(v_a_1559_);
lean_dec(v_a_1558_);
lean_dec(v_a_1557_);
return v_res_1568_;
}
}
static uint64_t _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonInst___closed__0(void){
_start:
{
uint8_t v___x_1569_; uint64_t v___x_1570_; 
v___x_1569_ = 3;
v___x_1570_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_1569_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonInst(lean_object* v_f_1571_, lean_object* v_i_1572_, lean_object* v_e_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_){
_start:
{
lean_object* v___x_1585_; uint8_t v_foApprox_1586_; uint8_t v_ctxApprox_1587_; uint8_t v_quasiPatternApprox_1588_; uint8_t v_constApprox_1589_; uint8_t v_isDefEqStuckEx_1590_; uint8_t v_unificationHints_1591_; uint8_t v_proofIrrelevance_1592_; uint8_t v_assignSyntheticOpaque_1593_; uint8_t v_offsetCnstrs_1594_; uint8_t v_etaStruct_1595_; uint8_t v_univApprox_1596_; uint8_t v_iota_1597_; uint8_t v_beta_1598_; uint8_t v_proj_1599_; uint8_t v_zeta_1600_; uint8_t v_zetaDelta_1601_; uint8_t v_zetaUnused_1602_; uint8_t v_zetaHave_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1639_; 
v___x_1585_ = l_Lean_Meta_Context_config(v_a_1580_);
v_foApprox_1586_ = lean_ctor_get_uint8(v___x_1585_, 0);
v_ctxApprox_1587_ = lean_ctor_get_uint8(v___x_1585_, 1);
v_quasiPatternApprox_1588_ = lean_ctor_get_uint8(v___x_1585_, 2);
v_constApprox_1589_ = lean_ctor_get_uint8(v___x_1585_, 3);
v_isDefEqStuckEx_1590_ = lean_ctor_get_uint8(v___x_1585_, 4);
v_unificationHints_1591_ = lean_ctor_get_uint8(v___x_1585_, 5);
v_proofIrrelevance_1592_ = lean_ctor_get_uint8(v___x_1585_, 6);
v_assignSyntheticOpaque_1593_ = lean_ctor_get_uint8(v___x_1585_, 7);
v_offsetCnstrs_1594_ = lean_ctor_get_uint8(v___x_1585_, 8);
v_etaStruct_1595_ = lean_ctor_get_uint8(v___x_1585_, 10);
v_univApprox_1596_ = lean_ctor_get_uint8(v___x_1585_, 11);
v_iota_1597_ = lean_ctor_get_uint8(v___x_1585_, 12);
v_beta_1598_ = lean_ctor_get_uint8(v___x_1585_, 13);
v_proj_1599_ = lean_ctor_get_uint8(v___x_1585_, 14);
v_zeta_1600_ = lean_ctor_get_uint8(v___x_1585_, 15);
v_zetaDelta_1601_ = lean_ctor_get_uint8(v___x_1585_, 16);
v_zetaUnused_1602_ = lean_ctor_get_uint8(v___x_1585_, 17);
v_zetaHave_1603_ = lean_ctor_get_uint8(v___x_1585_, 18);
v_isSharedCheck_1639_ = !lean_is_exclusive(v___x_1585_);
if (v_isSharedCheck_1639_ == 0)
{
v___x_1605_ = v___x_1585_;
v_isShared_1606_ = v_isSharedCheck_1639_;
goto v_resetjp_1604_;
}
else
{
lean_dec(v___x_1585_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1639_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
uint8_t v_trackZetaDelta_1607_; lean_object* v_zetaDeltaSet_1608_; lean_object* v_lctx_1609_; lean_object* v_localInstances_1610_; lean_object* v_defEqCtx_x3f_1611_; lean_object* v_synthPendingDepth_1612_; lean_object* v_canUnfold_x3f_1613_; uint8_t v_univApprox_1614_; uint8_t v_inTypeClassResolution_1615_; uint8_t v_cacheInferType_1616_; uint8_t v___x_1617_; lean_object* v_config_1619_; 
v_trackZetaDelta_1607_ = lean_ctor_get_uint8(v_a_1580_, sizeof(void*)*7);
v_zetaDeltaSet_1608_ = lean_ctor_get(v_a_1580_, 1);
v_lctx_1609_ = lean_ctor_get(v_a_1580_, 2);
v_localInstances_1610_ = lean_ctor_get(v_a_1580_, 3);
v_defEqCtx_x3f_1611_ = lean_ctor_get(v_a_1580_, 4);
v_synthPendingDepth_1612_ = lean_ctor_get(v_a_1580_, 5);
v_canUnfold_x3f_1613_ = lean_ctor_get(v_a_1580_, 6);
v_univApprox_1614_ = lean_ctor_get_uint8(v_a_1580_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1615_ = lean_ctor_get_uint8(v_a_1580_, sizeof(void*)*7 + 2);
v_cacheInferType_1616_ = lean_ctor_get_uint8(v_a_1580_, sizeof(void*)*7 + 3);
v___x_1617_ = 3;
if (v_isShared_1606_ == 0)
{
v_config_1619_ = v___x_1605_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1638_; 
v_reuseFailAlloc_1638_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1638_, 0, v_foApprox_1586_);
lean_ctor_set_uint8(v_reuseFailAlloc_1638_, 1, v_ctxApprox_1587_);
lean_ctor_set_uint8(v_reuseFailAlloc_1638_, 2, v_quasiPatternApprox_1588_);
lean_ctor_set_uint8(v_reuseFailAlloc_1638_, 3, v_constApprox_1589_);
lean_ctor_set_uint8(v_reuseFailAlloc_1638_, 4, v_isDefEqStuckEx_1590_);
lean_ctor_set_uint8(v_reuseFailAlloc_1638_, 5, v_unificationHints_1591_);
lean_ctor_set_uint8(v_reuseFailAlloc_1638_, 6, v_proofIrrelevance_1592_);
lean_ctor_set_uint8(v_reuseFailAlloc_1638_, 7, v_assignSyntheticOpaque_1593_);
lean_ctor_set_uint8(v_reuseFailAlloc_1638_, 8, v_offsetCnstrs_1594_);
lean_ctor_set_uint8(v_reuseFailAlloc_1638_, 10, v_etaStruct_1595_);
lean_ctor_set_uint8(v_reuseFailAlloc_1638_, 11, v_univApprox_1596_);
lean_ctor_set_uint8(v_reuseFailAlloc_1638_, 12, v_iota_1597_);
lean_ctor_set_uint8(v_reuseFailAlloc_1638_, 13, v_beta_1598_);
lean_ctor_set_uint8(v_reuseFailAlloc_1638_, 14, v_proj_1599_);
lean_ctor_set_uint8(v_reuseFailAlloc_1638_, 15, v_zeta_1600_);
lean_ctor_set_uint8(v_reuseFailAlloc_1638_, 16, v_zetaDelta_1601_);
lean_ctor_set_uint8(v_reuseFailAlloc_1638_, 17, v_zetaUnused_1602_);
lean_ctor_set_uint8(v_reuseFailAlloc_1638_, 18, v_zetaHave_1603_);
v_config_1619_ = v_reuseFailAlloc_1638_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
uint64_t v___x_1620_; uint64_t v___x_1621_; uint64_t v___x_1622_; uint8_t v___x_1623_; uint64_t v___x_1624_; uint64_t v___x_1625_; uint64_t v_key_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; 
lean_ctor_set_uint8(v_config_1619_, 9, v___x_1617_);
v___x_1620_ = l_Lean_Meta_Context_configKey(v_a_1580_);
v___x_1621_ = 2ULL;
v___x_1622_ = lean_uint64_shift_right(v___x_1620_, v___x_1621_);
v___x_1623_ = 1;
v___x_1624_ = lean_uint64_shift_left(v___x_1622_, v___x_1621_);
v___x_1625_ = lean_uint64_once(&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonInst___closed__0, &l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonInst___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonInst___closed__0);
v_key_1626_ = lean_uint64_lor(v___x_1624_, v___x_1625_);
v___x_1627_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1627_, 0, v_config_1619_);
lean_ctor_set_uint64(v___x_1627_, sizeof(void*)*1, v_key_1626_);
lean_inc(v_canUnfold_x3f_1613_);
lean_inc(v_synthPendingDepth_1612_);
lean_inc(v_defEqCtx_x3f_1611_);
lean_inc_ref(v_localInstances_1610_);
lean_inc_ref(v_lctx_1609_);
lean_inc(v_zetaDeltaSet_1608_);
v___x_1628_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1628_, 0, v___x_1627_);
lean_ctor_set(v___x_1628_, 1, v_zetaDeltaSet_1608_);
lean_ctor_set(v___x_1628_, 2, v_lctx_1609_);
lean_ctor_set(v___x_1628_, 3, v_localInstances_1610_);
lean_ctor_set(v___x_1628_, 4, v_defEqCtx_x3f_1611_);
lean_ctor_set(v___x_1628_, 5, v_synthPendingDepth_1612_);
lean_ctor_set(v___x_1628_, 6, v_canUnfold_x3f_1613_);
lean_ctor_set_uint8(v___x_1628_, sizeof(void*)*7, v_trackZetaDelta_1607_);
lean_ctor_set_uint8(v___x_1628_, sizeof(void*)*7 + 1, v_univApprox_1614_);
lean_ctor_set_uint8(v___x_1628_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1615_);
lean_ctor_set_uint8(v___x_1628_, sizeof(void*)*7 + 3, v_cacheInferType_1616_);
v___x_1629_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore(v_f_1571_, v_i_1572_, v_e_1573_, v___x_1623_, v_a_1574_, v_a_1575_, v_a_1576_, v_a_1577_, v_a_1578_, v_a_1579_, v___x_1628_, v_a_1581_, v_a_1582_, v_a_1583_);
lean_dec_ref(v___x_1628_);
if (lean_obj_tag(v___x_1629_) == 0)
{
lean_object* v_a_1630_; lean_object* v___x_1632_; uint8_t v_isShared_1633_; uint8_t v_isSharedCheck_1637_; 
v_a_1630_ = lean_ctor_get(v___x_1629_, 0);
v_isSharedCheck_1637_ = !lean_is_exclusive(v___x_1629_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1632_ = v___x_1629_;
v_isShared_1633_ = v_isSharedCheck_1637_;
goto v_resetjp_1631_;
}
else
{
lean_inc(v_a_1630_);
lean_dec(v___x_1629_);
v___x_1632_ = lean_box(0);
v_isShared_1633_ = v_isSharedCheck_1637_;
goto v_resetjp_1631_;
}
v_resetjp_1631_:
{
lean_object* v___x_1635_; 
if (v_isShared_1633_ == 0)
{
v___x_1635_ = v___x_1632_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v_a_1630_);
v___x_1635_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
return v___x_1635_;
}
}
}
else
{
return v___x_1629_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonInst___boxed(lean_object* v_f_1640_, lean_object* v_i_1641_, lean_object* v_e_1642_, lean_object* v_a_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_){
_start:
{
lean_object* v_res_1654_; 
v_res_1654_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonInst(v_f_1640_, v_i_1641_, v_e_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_);
lean_dec(v_a_1652_);
lean_dec_ref(v_a_1651_);
lean_dec(v_a_1650_);
lean_dec_ref(v_a_1649_);
lean_dec(v_a_1648_);
lean_dec_ref(v_a_1647_);
lean_dec(v_a_1646_);
lean_dec_ref(v_a_1645_);
lean_dec(v_a_1644_);
lean_dec(v_a_1643_);
return v_res_1654_;
}
}
static uint64_t _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImplicit___closed__0(void){
_start:
{
uint8_t v___x_1655_; uint64_t v___x_1656_; 
v___x_1655_ = 2;
v___x_1656_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_1655_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImplicit(lean_object* v_f_1657_, lean_object* v_i_1658_, lean_object* v_e_1659_, lean_object* v_a_1660_, lean_object* v_a_1661_, lean_object* v_a_1662_, lean_object* v_a_1663_, lean_object* v_a_1664_, lean_object* v_a_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_){
_start:
{
lean_object* v___x_1671_; uint8_t v_foApprox_1672_; uint8_t v_ctxApprox_1673_; uint8_t v_quasiPatternApprox_1674_; uint8_t v_constApprox_1675_; uint8_t v_isDefEqStuckEx_1676_; uint8_t v_unificationHints_1677_; uint8_t v_proofIrrelevance_1678_; uint8_t v_assignSyntheticOpaque_1679_; uint8_t v_offsetCnstrs_1680_; uint8_t v_etaStruct_1681_; uint8_t v_univApprox_1682_; uint8_t v_iota_1683_; uint8_t v_beta_1684_; uint8_t v_proj_1685_; uint8_t v_zeta_1686_; uint8_t v_zetaDelta_1687_; uint8_t v_zetaUnused_1688_; uint8_t v_zetaHave_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1725_; 
v___x_1671_ = l_Lean_Meta_Context_config(v_a_1666_);
v_foApprox_1672_ = lean_ctor_get_uint8(v___x_1671_, 0);
v_ctxApprox_1673_ = lean_ctor_get_uint8(v___x_1671_, 1);
v_quasiPatternApprox_1674_ = lean_ctor_get_uint8(v___x_1671_, 2);
v_constApprox_1675_ = lean_ctor_get_uint8(v___x_1671_, 3);
v_isDefEqStuckEx_1676_ = lean_ctor_get_uint8(v___x_1671_, 4);
v_unificationHints_1677_ = lean_ctor_get_uint8(v___x_1671_, 5);
v_proofIrrelevance_1678_ = lean_ctor_get_uint8(v___x_1671_, 6);
v_assignSyntheticOpaque_1679_ = lean_ctor_get_uint8(v___x_1671_, 7);
v_offsetCnstrs_1680_ = lean_ctor_get_uint8(v___x_1671_, 8);
v_etaStruct_1681_ = lean_ctor_get_uint8(v___x_1671_, 10);
v_univApprox_1682_ = lean_ctor_get_uint8(v___x_1671_, 11);
v_iota_1683_ = lean_ctor_get_uint8(v___x_1671_, 12);
v_beta_1684_ = lean_ctor_get_uint8(v___x_1671_, 13);
v_proj_1685_ = lean_ctor_get_uint8(v___x_1671_, 14);
v_zeta_1686_ = lean_ctor_get_uint8(v___x_1671_, 15);
v_zetaDelta_1687_ = lean_ctor_get_uint8(v___x_1671_, 16);
v_zetaUnused_1688_ = lean_ctor_get_uint8(v___x_1671_, 17);
v_zetaHave_1689_ = lean_ctor_get_uint8(v___x_1671_, 18);
v_isSharedCheck_1725_ = !lean_is_exclusive(v___x_1671_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1691_ = v___x_1671_;
v_isShared_1692_ = v_isSharedCheck_1725_;
goto v_resetjp_1690_;
}
else
{
lean_dec(v___x_1671_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1725_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
uint8_t v_trackZetaDelta_1693_; lean_object* v_zetaDeltaSet_1694_; lean_object* v_lctx_1695_; lean_object* v_localInstances_1696_; lean_object* v_defEqCtx_x3f_1697_; lean_object* v_synthPendingDepth_1698_; lean_object* v_canUnfold_x3f_1699_; uint8_t v_univApprox_1700_; uint8_t v_inTypeClassResolution_1701_; uint8_t v_cacheInferType_1702_; uint8_t v___x_1703_; lean_object* v_config_1705_; 
v_trackZetaDelta_1693_ = lean_ctor_get_uint8(v_a_1666_, sizeof(void*)*7);
v_zetaDeltaSet_1694_ = lean_ctor_get(v_a_1666_, 1);
v_lctx_1695_ = lean_ctor_get(v_a_1666_, 2);
v_localInstances_1696_ = lean_ctor_get(v_a_1666_, 3);
v_defEqCtx_x3f_1697_ = lean_ctor_get(v_a_1666_, 4);
v_synthPendingDepth_1698_ = lean_ctor_get(v_a_1666_, 5);
v_canUnfold_x3f_1699_ = lean_ctor_get(v_a_1666_, 6);
v_univApprox_1700_ = lean_ctor_get_uint8(v_a_1666_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1701_ = lean_ctor_get_uint8(v_a_1666_, sizeof(void*)*7 + 2);
v_cacheInferType_1702_ = lean_ctor_get_uint8(v_a_1666_, sizeof(void*)*7 + 3);
v___x_1703_ = 2;
if (v_isShared_1692_ == 0)
{
v_config_1705_ = v___x_1691_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1724_, 0, v_foApprox_1672_);
lean_ctor_set_uint8(v_reuseFailAlloc_1724_, 1, v_ctxApprox_1673_);
lean_ctor_set_uint8(v_reuseFailAlloc_1724_, 2, v_quasiPatternApprox_1674_);
lean_ctor_set_uint8(v_reuseFailAlloc_1724_, 3, v_constApprox_1675_);
lean_ctor_set_uint8(v_reuseFailAlloc_1724_, 4, v_isDefEqStuckEx_1676_);
lean_ctor_set_uint8(v_reuseFailAlloc_1724_, 5, v_unificationHints_1677_);
lean_ctor_set_uint8(v_reuseFailAlloc_1724_, 6, v_proofIrrelevance_1678_);
lean_ctor_set_uint8(v_reuseFailAlloc_1724_, 7, v_assignSyntheticOpaque_1679_);
lean_ctor_set_uint8(v_reuseFailAlloc_1724_, 8, v_offsetCnstrs_1680_);
lean_ctor_set_uint8(v_reuseFailAlloc_1724_, 10, v_etaStruct_1681_);
lean_ctor_set_uint8(v_reuseFailAlloc_1724_, 11, v_univApprox_1682_);
lean_ctor_set_uint8(v_reuseFailAlloc_1724_, 12, v_iota_1683_);
lean_ctor_set_uint8(v_reuseFailAlloc_1724_, 13, v_beta_1684_);
lean_ctor_set_uint8(v_reuseFailAlloc_1724_, 14, v_proj_1685_);
lean_ctor_set_uint8(v_reuseFailAlloc_1724_, 15, v_zeta_1686_);
lean_ctor_set_uint8(v_reuseFailAlloc_1724_, 16, v_zetaDelta_1687_);
lean_ctor_set_uint8(v_reuseFailAlloc_1724_, 17, v_zetaUnused_1688_);
lean_ctor_set_uint8(v_reuseFailAlloc_1724_, 18, v_zetaHave_1689_);
v_config_1705_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
uint64_t v___x_1706_; uint64_t v___x_1707_; uint64_t v___x_1708_; uint8_t v___x_1709_; uint64_t v___x_1710_; uint64_t v___x_1711_; uint64_t v_key_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; 
lean_ctor_set_uint8(v_config_1705_, 9, v___x_1703_);
v___x_1706_ = l_Lean_Meta_Context_configKey(v_a_1666_);
v___x_1707_ = 2ULL;
v___x_1708_ = lean_uint64_shift_right(v___x_1706_, v___x_1707_);
v___x_1709_ = 0;
v___x_1710_ = lean_uint64_shift_left(v___x_1708_, v___x_1707_);
v___x_1711_ = lean_uint64_once(&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImplicit___closed__0, &l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImplicit___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImplicit___closed__0);
v_key_1712_ = lean_uint64_lor(v___x_1710_, v___x_1711_);
v___x_1713_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1713_, 0, v_config_1705_);
lean_ctor_set_uint64(v___x_1713_, sizeof(void*)*1, v_key_1712_);
lean_inc(v_canUnfold_x3f_1699_);
lean_inc(v_synthPendingDepth_1698_);
lean_inc(v_defEqCtx_x3f_1697_);
lean_inc_ref(v_localInstances_1696_);
lean_inc_ref(v_lctx_1695_);
lean_inc(v_zetaDeltaSet_1694_);
v___x_1714_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1714_, 0, v___x_1713_);
lean_ctor_set(v___x_1714_, 1, v_zetaDeltaSet_1694_);
lean_ctor_set(v___x_1714_, 2, v_lctx_1695_);
lean_ctor_set(v___x_1714_, 3, v_localInstances_1696_);
lean_ctor_set(v___x_1714_, 4, v_defEqCtx_x3f_1697_);
lean_ctor_set(v___x_1714_, 5, v_synthPendingDepth_1698_);
lean_ctor_set(v___x_1714_, 6, v_canUnfold_x3f_1699_);
lean_ctor_set_uint8(v___x_1714_, sizeof(void*)*7, v_trackZetaDelta_1693_);
lean_ctor_set_uint8(v___x_1714_, sizeof(void*)*7 + 1, v_univApprox_1700_);
lean_ctor_set_uint8(v___x_1714_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1701_);
lean_ctor_set_uint8(v___x_1714_, sizeof(void*)*7 + 3, v_cacheInferType_1702_);
v___x_1715_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore(v_f_1657_, v_i_1658_, v_e_1659_, v___x_1709_, v_a_1660_, v_a_1661_, v_a_1662_, v_a_1663_, v_a_1664_, v_a_1665_, v___x_1714_, v_a_1667_, v_a_1668_, v_a_1669_);
lean_dec_ref(v___x_1714_);
if (lean_obj_tag(v___x_1715_) == 0)
{
lean_object* v_a_1716_; lean_object* v___x_1718_; uint8_t v_isShared_1719_; uint8_t v_isSharedCheck_1723_; 
v_a_1716_ = lean_ctor_get(v___x_1715_, 0);
v_isSharedCheck_1723_ = !lean_is_exclusive(v___x_1715_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1718_ = v___x_1715_;
v_isShared_1719_ = v_isSharedCheck_1723_;
goto v_resetjp_1717_;
}
else
{
lean_inc(v_a_1716_);
lean_dec(v___x_1715_);
v___x_1718_ = lean_box(0);
v_isShared_1719_ = v_isSharedCheck_1723_;
goto v_resetjp_1717_;
}
v_resetjp_1717_:
{
lean_object* v___x_1721_; 
if (v_isShared_1719_ == 0)
{
v___x_1721_ = v___x_1718_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v_a_1716_);
v___x_1721_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
return v___x_1721_;
}
}
}
else
{
return v___x_1715_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImplicit___boxed(lean_object* v_f_1726_, lean_object* v_i_1727_, lean_object* v_e_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImplicit(v_f_1726_, v_i_1727_, v_e_1728_, v_a_1729_, v_a_1730_, v_a_1731_, v_a_1732_, v_a_1733_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_, v_a_1738_);
lean_dec(v_a_1738_);
lean_dec_ref(v_a_1737_);
lean_dec(v_a_1736_);
lean_dec_ref(v_a_1735_);
lean_dec(v_a_1734_);
lean_dec_ref(v_a_1733_);
lean_dec(v_a_1732_);
lean_dec_ref(v_a_1731_);
lean_dec(v_a_1730_);
lean_dec(v_a_1729_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_ctorIdx(uint8_t v_x_1741_){
_start:
{
switch(v_x_1741_)
{
case 0:
{
lean_object* v___x_1742_; 
v___x_1742_ = lean_unsigned_to_nat(0u);
return v___x_1742_;
}
case 1:
{
lean_object* v___x_1743_; 
v___x_1743_ = lean_unsigned_to_nat(1u);
return v___x_1743_;
}
case 2:
{
lean_object* v___x_1744_; 
v___x_1744_ = lean_unsigned_to_nat(2u);
return v___x_1744_;
}
default: 
{
lean_object* v___x_1745_; 
v___x_1745_ = lean_unsigned_to_nat(3u);
return v___x_1745_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_ctorIdx___boxed(lean_object* v_x_1746_){
_start:
{
uint8_t v_x_boxed_1747_; lean_object* v_res_1748_; 
v_x_boxed_1747_ = lean_unbox(v_x_1746_);
v_res_1748_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_ctorIdx(v_x_boxed_1747_);
return v_res_1748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_toCtorIdx(uint8_t v_x_1749_){
_start:
{
lean_object* v___x_1750_; 
v___x_1750_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_ctorIdx(v_x_1749_);
return v___x_1750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_toCtorIdx___boxed(lean_object* v_x_1751_){
_start:
{
uint8_t v_x_4__boxed_1752_; lean_object* v_res_1753_; 
v_x_4__boxed_1752_ = lean_unbox(v_x_1751_);
v_res_1753_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_toCtorIdx(v_x_4__boxed_1752_);
return v_res_1753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_ctorElim___redArg(lean_object* v_k_1754_){
_start:
{
lean_inc(v_k_1754_);
return v_k_1754_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_ctorElim___redArg___boxed(lean_object* v_k_1755_){
_start:
{
lean_object* v_res_1756_; 
v_res_1756_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_ctorElim___redArg(v_k_1755_);
lean_dec(v_k_1755_);
return v_res_1756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_ctorElim(lean_object* v_motive_1757_, lean_object* v_ctorIdx_1758_, uint8_t v_t_1759_, lean_object* v_h_1760_, lean_object* v_k_1761_){
_start:
{
lean_inc(v_k_1761_);
return v_k_1761_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_ctorElim___boxed(lean_object* v_motive_1762_, lean_object* v_ctorIdx_1763_, lean_object* v_t_1764_, lean_object* v_h_1765_, lean_object* v_k_1766_){
_start:
{
uint8_t v_t_boxed_1767_; lean_object* v_res_1768_; 
v_t_boxed_1767_ = lean_unbox(v_t_1764_);
v_res_1768_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_ctorElim(v_motive_1762_, v_ctorIdx_1763_, v_t_boxed_1767_, v_h_1765_, v_k_1766_);
lean_dec(v_k_1766_);
lean_dec(v_ctorIdx_1763_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonType_elim___redArg(lean_object* v_canonType_1769_){
_start:
{
lean_inc(v_canonType_1769_);
return v_canonType_1769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonType_elim___redArg___boxed(lean_object* v_canonType_1770_){
_start:
{
lean_object* v_res_1771_; 
v_res_1771_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonType_elim___redArg(v_canonType_1770_);
lean_dec(v_canonType_1770_);
return v_res_1771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonType_elim(lean_object* v_motive_1772_, uint8_t v_t_1773_, lean_object* v_h_1774_, lean_object* v_canonType_1775_){
_start:
{
lean_inc(v_canonType_1775_);
return v_canonType_1775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonType_elim___boxed(lean_object* v_motive_1776_, lean_object* v_t_1777_, lean_object* v_h_1778_, lean_object* v_canonType_1779_){
_start:
{
uint8_t v_t_boxed_1780_; lean_object* v_res_1781_; 
v_t_boxed_1780_ = lean_unbox(v_t_1777_);
v_res_1781_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonType_elim(v_motive_1776_, v_t_boxed_1780_, v_h_1778_, v_canonType_1779_);
lean_dec(v_canonType_1779_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonInst_elim___redArg(lean_object* v_canonInst_1782_){
_start:
{
lean_inc(v_canonInst_1782_);
return v_canonInst_1782_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonInst_elim___redArg___boxed(lean_object* v_canonInst_1783_){
_start:
{
lean_object* v_res_1784_; 
v_res_1784_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonInst_elim___redArg(v_canonInst_1783_);
lean_dec(v_canonInst_1783_);
return v_res_1784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonInst_elim(lean_object* v_motive_1785_, uint8_t v_t_1786_, lean_object* v_h_1787_, lean_object* v_canonInst_1788_){
_start:
{
lean_inc(v_canonInst_1788_);
return v_canonInst_1788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonInst_elim___boxed(lean_object* v_motive_1789_, lean_object* v_t_1790_, lean_object* v_h_1791_, lean_object* v_canonInst_1792_){
_start:
{
uint8_t v_t_boxed_1793_; lean_object* v_res_1794_; 
v_t_boxed_1793_ = lean_unbox(v_t_1790_);
v_res_1794_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonInst_elim(v_motive_1789_, v_t_boxed_1793_, v_h_1791_, v_canonInst_1792_);
lean_dec(v_canonInst_1792_);
return v_res_1794_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonImplicit_elim___redArg(lean_object* v_canonImplicit_1795_){
_start:
{
lean_inc(v_canonImplicit_1795_);
return v_canonImplicit_1795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonImplicit_elim___redArg___boxed(lean_object* v_canonImplicit_1796_){
_start:
{
lean_object* v_res_1797_; 
v_res_1797_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonImplicit_elim___redArg(v_canonImplicit_1796_);
lean_dec(v_canonImplicit_1796_);
return v_res_1797_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonImplicit_elim(lean_object* v_motive_1798_, uint8_t v_t_1799_, lean_object* v_h_1800_, lean_object* v_canonImplicit_1801_){
_start:
{
lean_inc(v_canonImplicit_1801_);
return v_canonImplicit_1801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonImplicit_elim___boxed(lean_object* v_motive_1802_, lean_object* v_t_1803_, lean_object* v_h_1804_, lean_object* v_canonImplicit_1805_){
_start:
{
uint8_t v_t_boxed_1806_; lean_object* v_res_1807_; 
v_t_boxed_1806_ = lean_unbox(v_t_1803_);
v_res_1807_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_canonImplicit_elim(v_motive_1802_, v_t_boxed_1806_, v_h_1804_, v_canonImplicit_1805_);
lean_dec(v_canonImplicit_1805_);
return v_res_1807_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_visit_elim___redArg(lean_object* v_visit_1808_){
_start:
{
lean_inc(v_visit_1808_);
return v_visit_1808_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_visit_elim___redArg___boxed(lean_object* v_visit_1809_){
_start:
{
lean_object* v_res_1810_; 
v_res_1810_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_visit_elim___redArg(v_visit_1809_);
lean_dec(v_visit_1809_);
return v_res_1810_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_visit_elim(lean_object* v_motive_1811_, uint8_t v_t_1812_, lean_object* v_h_1813_, lean_object* v_visit_1814_){
_start:
{
lean_inc(v_visit_1814_);
return v_visit_1814_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_visit_elim___boxed(lean_object* v_motive_1815_, lean_object* v_t_1816_, lean_object* v_h_1817_, lean_object* v_visit_1818_){
_start:
{
uint8_t v_t_boxed_1819_; lean_object* v_res_1820_; 
v_t_boxed_1819_ = lean_unbox(v_t_1816_);
v_res_1820_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_ShouldCanonResult_visit_elim(v_motive_1815_, v_t_boxed_1819_, v_h_1817_, v_visit_1818_);
lean_dec(v_visit_1818_);
return v_res_1820_;
}
}
static uint8_t _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instInhabitedShouldCanonResult_default(void){
_start:
{
uint8_t v___x_1821_; 
v___x_1821_ = 0;
return v___x_1821_;
}
}
static uint8_t _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instInhabitedShouldCanonResult(void){
_start:
{
uint8_t v___x_1822_; 
v___x_1822_ = 0;
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0(uint8_t v_r_1835_, lean_object* v_x_1836_){
_start:
{
switch(v_r_1835_)
{
case 0:
{
lean_object* v___x_1837_; 
v___x_1837_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__1));
return v___x_1837_;
}
case 1:
{
lean_object* v___x_1838_; 
v___x_1838_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__3));
return v___x_1838_;
}
case 2:
{
lean_object* v___x_1839_; 
v___x_1839_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__5));
return v___x_1839_;
}
default: 
{
lean_object* v___x_1840_; 
v___x_1840_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__7));
return v___x_1840_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___boxed(lean_object* v_r_1841_, lean_object* v_x_1842_){
_start:
{
uint8_t v_r_boxed_1843_; lean_object* v_res_1844_; 
v_r_boxed_1843_ = lean_unbox(v_r_1841_);
v_res_1844_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0(v_r_boxed_1843_, v_x_1842_);
lean_dec(v_x_1842_);
return v_res_1844_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_shouldCanon(lean_object* v_pinfos_1847_, lean_object* v_i_1848_, lean_object* v_arg_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_){
_start:
{
lean_object* v___y_1856_; lean_object* v___y_1857_; lean_object* v___y_1858_; lean_object* v___y_1859_; lean_object* v___x_1905_; uint8_t v___x_1906_; 
v___x_1905_ = lean_array_get_size(v_pinfos_1847_);
v___x_1906_ = lean_nat_dec_lt(v_i_1848_, v___x_1905_);
if (v___x_1906_ == 0)
{
v___y_1856_ = v_a_1850_;
v___y_1857_ = v_a_1851_;
v___y_1858_ = v_a_1852_;
v___y_1859_ = v_a_1853_;
goto v___jp_1855_;
}
else
{
lean_object* v_pinfo_1907_; uint8_t v_isInstance_1908_; 
v_pinfo_1907_ = lean_array_fget_borrowed(v_pinfos_1847_, v_i_1848_);
v_isInstance_1908_ = lean_ctor_get_uint8(v_pinfo_1907_, sizeof(void*)*1 + 4);
if (v_isInstance_1908_ == 0)
{
uint8_t v_isProp_1909_; 
v_isProp_1909_ = lean_ctor_get_uint8(v_pinfo_1907_, sizeof(void*)*1 + 2);
if (v_isProp_1909_ == 0)
{
uint8_t v___x_1910_; 
v___x_1910_ = l_Lean_Meta_ParamInfo_isImplicit(v_pinfo_1907_);
if (v___x_1910_ == 0)
{
v___y_1856_ = v_a_1850_;
v___y_1857_ = v_a_1851_;
v___y_1858_ = v_a_1852_;
v___y_1859_ = v_a_1853_;
goto v___jp_1855_;
}
else
{
lean_object* v___x_1911_; 
v___x_1911_ = l_Lean_Meta_isTypeFormer(v_arg_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1927_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1914_ = v___x_1911_;
v_isShared_1915_ = v_isSharedCheck_1927_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_a_1912_);
lean_dec(v___x_1911_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1927_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
uint8_t v___x_1916_; 
v___x_1916_ = lean_unbox(v_a_1912_);
lean_dec(v_a_1912_);
if (v___x_1916_ == 0)
{
uint8_t v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1920_; 
v___x_1917_ = 2;
v___x_1918_ = lean_box(v___x_1917_);
if (v_isShared_1915_ == 0)
{
lean_ctor_set(v___x_1914_, 0, v___x_1918_);
v___x_1920_ = v___x_1914_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v___x_1918_);
v___x_1920_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
return v___x_1920_;
}
}
else
{
uint8_t v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1925_; 
v___x_1922_ = 0;
v___x_1923_ = lean_box(v___x_1922_);
if (v_isShared_1915_ == 0)
{
lean_ctor_set(v___x_1914_, 0, v___x_1923_);
v___x_1925_ = v___x_1914_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v___x_1923_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
}
else
{
lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1935_; 
v_a_1928_ = lean_ctor_get(v___x_1911_, 0);
v_isSharedCheck_1935_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1935_ == 0)
{
v___x_1930_ = v___x_1911_;
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_dec(v___x_1911_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1935_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___x_1933_; 
if (v_isShared_1931_ == 0)
{
v___x_1933_ = v___x_1930_;
goto v_reusejp_1932_;
}
else
{
lean_object* v_reuseFailAlloc_1934_; 
v_reuseFailAlloc_1934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1934_, 0, v_a_1928_);
v___x_1933_ = v_reuseFailAlloc_1934_;
goto v_reusejp_1932_;
}
v_reusejp_1932_:
{
return v___x_1933_;
}
}
}
}
}
else
{
uint8_t v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; 
lean_dec_ref(v_arg_1849_);
v___x_1936_ = 3;
v___x_1937_ = lean_box(v___x_1936_);
v___x_1938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1937_);
return v___x_1938_;
}
}
else
{
uint8_t v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; 
lean_dec_ref(v_arg_1849_);
v___x_1939_ = 1;
v___x_1940_ = lean_box(v___x_1939_);
v___x_1941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1941_, 0, v___x_1940_);
return v___x_1941_;
}
}
v___jp_1855_:
{
lean_object* v___x_1860_; 
lean_inc_ref(v_arg_1849_);
v___x_1860_ = l_Lean_Meta_isProp(v_arg_1849_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_);
if (lean_obj_tag(v___x_1860_) == 0)
{
lean_object* v_a_1861_; lean_object* v___x_1863_; uint8_t v_isShared_1864_; uint8_t v_isSharedCheck_1896_; 
v_a_1861_ = lean_ctor_get(v___x_1860_, 0);
v_isSharedCheck_1896_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1896_ == 0)
{
v___x_1863_ = v___x_1860_;
v_isShared_1864_ = v_isSharedCheck_1896_;
goto v_resetjp_1862_;
}
else
{
lean_inc(v_a_1861_);
lean_dec(v___x_1860_);
v___x_1863_ = lean_box(0);
v_isShared_1864_ = v_isSharedCheck_1896_;
goto v_resetjp_1862_;
}
v_resetjp_1862_:
{
uint8_t v___x_1865_; 
v___x_1865_ = lean_unbox(v_a_1861_);
lean_dec(v_a_1861_);
if (v___x_1865_ == 0)
{
lean_object* v___x_1866_; 
lean_del_object(v___x_1863_);
v___x_1866_ = l_Lean_Meta_isTypeFormer(v_arg_1849_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_);
if (lean_obj_tag(v___x_1866_) == 0)
{
lean_object* v_a_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1882_; 
v_a_1867_ = lean_ctor_get(v___x_1866_, 0);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1866_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1869_ = v___x_1866_;
v_isShared_1870_ = v_isSharedCheck_1882_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_a_1867_);
lean_dec(v___x_1866_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1882_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
uint8_t v___x_1871_; 
v___x_1871_ = lean_unbox(v_a_1867_);
lean_dec(v_a_1867_);
if (v___x_1871_ == 0)
{
uint8_t v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1875_; 
v___x_1872_ = 3;
v___x_1873_ = lean_box(v___x_1872_);
if (v_isShared_1870_ == 0)
{
lean_ctor_set(v___x_1869_, 0, v___x_1873_);
v___x_1875_ = v___x_1869_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v___x_1873_);
v___x_1875_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
return v___x_1875_;
}
}
else
{
uint8_t v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1880_; 
v___x_1877_ = 0;
v___x_1878_ = lean_box(v___x_1877_);
if (v_isShared_1870_ == 0)
{
lean_ctor_set(v___x_1869_, 0, v___x_1878_);
v___x_1880_ = v___x_1869_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v___x_1878_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
else
{
lean_object* v_a_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1890_; 
v_a_1883_ = lean_ctor_get(v___x_1866_, 0);
v_isSharedCheck_1890_ = !lean_is_exclusive(v___x_1866_);
if (v_isSharedCheck_1890_ == 0)
{
v___x_1885_ = v___x_1866_;
v_isShared_1886_ = v_isSharedCheck_1890_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_a_1883_);
lean_dec(v___x_1866_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1890_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v___x_1888_; 
if (v_isShared_1886_ == 0)
{
v___x_1888_ = v___x_1885_;
goto v_reusejp_1887_;
}
else
{
lean_object* v_reuseFailAlloc_1889_; 
v_reuseFailAlloc_1889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1889_, 0, v_a_1883_);
v___x_1888_ = v_reuseFailAlloc_1889_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
return v___x_1888_;
}
}
}
}
else
{
uint8_t v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1894_; 
lean_dec_ref(v_arg_1849_);
v___x_1891_ = 3;
v___x_1892_ = lean_box(v___x_1891_);
if (v_isShared_1864_ == 0)
{
lean_ctor_set(v___x_1863_, 0, v___x_1892_);
v___x_1894_ = v___x_1863_;
goto v_reusejp_1893_;
}
else
{
lean_object* v_reuseFailAlloc_1895_; 
v_reuseFailAlloc_1895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1895_, 0, v___x_1892_);
v___x_1894_ = v_reuseFailAlloc_1895_;
goto v_reusejp_1893_;
}
v_reusejp_1893_:
{
return v___x_1894_;
}
}
}
}
else
{
lean_object* v_a_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1904_; 
lean_dec_ref(v_arg_1849_);
v_a_1897_ = lean_ctor_get(v___x_1860_, 0);
v_isSharedCheck_1904_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1899_ = v___x_1860_;
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_a_1897_);
lean_dec(v___x_1860_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1902_; 
if (v_isShared_1900_ == 0)
{
v___x_1902_ = v___x_1899_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v_a_1897_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_shouldCanon___boxed(lean_object* v_pinfos_1942_, lean_object* v_i_1943_, lean_object* v_arg_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_, lean_object* v_a_1949_){
_start:
{
lean_object* v_res_1950_; 
v_res_1950_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_shouldCanon(v_pinfos_1942_, v_i_1943_, v_arg_1944_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_);
lean_dec(v_a_1948_);
lean_dec_ref(v_a_1947_);
lean_dec(v_a_1946_);
lean_dec_ref(v_a_1945_);
lean_dec(v_i_1943_);
lean_dec_ref(v_pinfos_1942_);
return v_res_1950_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Canon_isSupport(lean_object* v_pinfos_1951_, lean_object* v_i_1952_, lean_object* v_arg_1953_, lean_object* v_a_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_){
_start:
{
lean_object* v___x_1959_; 
v___x_1959_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_shouldCanon(v_pinfos_1951_, v_i_1952_, v_arg_1953_, v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_);
if (lean_obj_tag(v___x_1959_) == 0)
{
lean_object* v_a_1960_; lean_object* v___x_1962_; uint8_t v_isShared_1963_; uint8_t v_isSharedCheck_1975_; 
v_a_1960_ = lean_ctor_get(v___x_1959_, 0);
v_isSharedCheck_1975_ = !lean_is_exclusive(v___x_1959_);
if (v_isSharedCheck_1975_ == 0)
{
v___x_1962_ = v___x_1959_;
v_isShared_1963_ = v_isSharedCheck_1975_;
goto v_resetjp_1961_;
}
else
{
lean_inc(v_a_1960_);
lean_dec(v___x_1959_);
v___x_1962_ = lean_box(0);
v_isShared_1963_ = v_isSharedCheck_1975_;
goto v_resetjp_1961_;
}
v_resetjp_1961_:
{
uint8_t v___x_1964_; 
v___x_1964_ = lean_unbox(v_a_1960_);
lean_dec(v_a_1960_);
if (v___x_1964_ == 3)
{
uint8_t v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1968_; 
v___x_1965_ = 0;
v___x_1966_ = lean_box(v___x_1965_);
if (v_isShared_1963_ == 0)
{
lean_ctor_set(v___x_1962_, 0, v___x_1966_);
v___x_1968_ = v___x_1962_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v___x_1966_);
v___x_1968_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
return v___x_1968_;
}
}
else
{
uint8_t v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1973_; 
v___x_1970_ = 1;
v___x_1971_ = lean_box(v___x_1970_);
if (v_isShared_1963_ == 0)
{
lean_ctor_set(v___x_1962_, 0, v___x_1971_);
v___x_1973_ = v___x_1962_;
goto v_reusejp_1972_;
}
else
{
lean_object* v_reuseFailAlloc_1974_; 
v_reuseFailAlloc_1974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1974_, 0, v___x_1971_);
v___x_1973_ = v_reuseFailAlloc_1974_;
goto v_reusejp_1972_;
}
v_reusejp_1972_:
{
return v___x_1973_;
}
}
}
}
else
{
lean_object* v_a_1976_; lean_object* v___x_1978_; uint8_t v_isShared_1979_; uint8_t v_isSharedCheck_1983_; 
v_a_1976_ = lean_ctor_get(v___x_1959_, 0);
v_isSharedCheck_1983_ = !lean_is_exclusive(v___x_1959_);
if (v_isSharedCheck_1983_ == 0)
{
v___x_1978_ = v___x_1959_;
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
else
{
lean_inc(v_a_1976_);
lean_dec(v___x_1959_);
v___x_1978_ = lean_box(0);
v_isShared_1979_ = v_isSharedCheck_1983_;
goto v_resetjp_1977_;
}
v_resetjp_1977_:
{
lean_object* v___x_1981_; 
if (v_isShared_1979_ == 0)
{
v___x_1981_ = v___x_1978_;
goto v_reusejp_1980_;
}
else
{
lean_object* v_reuseFailAlloc_1982_; 
v_reuseFailAlloc_1982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1982_, 0, v_a_1976_);
v___x_1981_ = v_reuseFailAlloc_1982_;
goto v_reusejp_1980_;
}
v_reusejp_1980_:
{
return v___x_1981_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Canon_isSupport___boxed(lean_object* v_pinfos_1984_, lean_object* v_i_1985_, lean_object* v_arg_1986_, lean_object* v_a_1987_, lean_object* v_a_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_){
_start:
{
lean_object* v_res_1992_; 
v_res_1992_ = l_Lean_Meta_Grind_Canon_isSupport(v_pinfos_1984_, v_i_1985_, v_arg_1986_, v_a_1987_, v_a_1988_, v_a_1989_, v_a_1990_);
lean_dec(v_a_1990_);
lean_dec_ref(v_a_1989_);
lean_dec(v_a_1988_);
lean_dec_ref(v_a_1987_);
lean_dec(v_i_1985_);
lean_dec_ref(v_pinfos_1984_);
return v_res_1992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f(lean_object* v_args_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_){
_start:
{
uint8_t v___y_2014_; lean_object* v___y_2015_; uint8_t v___y_2019_; lean_object* v___y_2020_; lean_object* v___y_2021_; lean_object* v___y_2022_; lean_object* v_args_2049_; uint8_t v_modified_2050_; lean_object* v___y_2051_; lean_object* v___x_2079_; lean_object* v___x_2080_; uint8_t v___x_2081_; 
v___x_2079_ = lean_array_get_size(v_args_2004_);
v___x_2080_ = lean_unsigned_to_nat(3u);
v___x_2081_ = lean_nat_dec_eq(v___x_2079_, v___x_2080_);
if (v___x_2081_ == 0)
{
lean_dec_ref(v_args_2004_);
goto v___jp_2010_;
}
else
{
uint8_t v_modified_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; uint8_t v_modified_2086_; 
v_modified_2082_ = 0;
v___x_2083_ = lean_unsigned_to_nat(1u);
v___x_2084_ = lean_array_fget_borrowed(v_args_2004_, v___x_2083_);
v___x_2085_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__6));
v_modified_2086_ = l_Lean_Expr_isAppOf(v___x_2084_, v___x_2085_);
if (v_modified_2086_ == 0)
{
v_args_2049_ = v_args_2004_;
v_modified_2050_ = v_modified_2082_;
v___y_2051_ = v_a_2006_;
goto v___jp_2048_;
}
else
{
lean_object* v___x_2087_; 
v___x_2087_ = l_Lean_Meta_getNatValue_x3f(v___x_2084_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_);
if (lean_obj_tag(v___x_2087_) == 0)
{
lean_object* v_a_2088_; 
v_a_2088_ = lean_ctor_get(v___x_2087_, 0);
lean_inc(v_a_2088_);
lean_dec_ref(v___x_2087_);
if (lean_obj_tag(v_a_2088_) == 1)
{
lean_object* v_val_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; 
v_val_2089_ = lean_ctor_get(v_a_2088_, 0);
lean_inc(v_val_2089_);
lean_dec_ref(v_a_2088_);
v___x_2090_ = l_Lean_mkRawNatLit(v_val_2089_);
v___x_2091_ = lean_array_fset(v_args_2004_, v___x_2083_, v___x_2090_);
v_args_2049_ = v___x_2091_;
v_modified_2050_ = v_modified_2086_;
v___y_2051_ = v_a_2006_;
goto v___jp_2048_;
}
else
{
lean_dec(v_a_2088_);
v_args_2049_ = v_args_2004_;
v_modified_2050_ = v_modified_2082_;
v___y_2051_ = v_a_2006_;
goto v___jp_2048_;
}
}
else
{
lean_object* v_a_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2099_; 
lean_dec_ref(v_args_2004_);
v_a_2092_ = lean_ctor_get(v___x_2087_, 0);
v_isSharedCheck_2099_ = !lean_is_exclusive(v___x_2087_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2094_ = v___x_2087_;
v_isShared_2095_ = v_isSharedCheck_2099_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_a_2092_);
lean_dec(v___x_2087_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2099_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
lean_object* v___x_2097_; 
if (v_isShared_2095_ == 0)
{
v___x_2097_ = v___x_2094_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v_a_2092_);
v___x_2097_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
return v___x_2097_;
}
}
}
}
}
v___jp_2010_:
{
lean_object* v___x_2011_; lean_object* v___x_2012_; 
v___x_2011_ = lean_box(0);
v___x_2012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2012_, 0, v___x_2011_);
return v___x_2012_;
}
v___jp_2013_:
{
if (v___y_2014_ == 0)
{
lean_dec_ref(v___y_2015_);
goto v___jp_2010_;
}
else
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2016_, 0, v___y_2015_);
v___x_2017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2017_, 0, v___x_2016_);
return v___x_2017_;
}
}
v___jp_2018_:
{
lean_object* v___x_2023_; 
v___x_2023_ = l_Lean_Meta_Structural_isInstOfNatInt___redArg(v___y_2022_, v___y_2021_);
if (lean_obj_tag(v___x_2023_) == 0)
{
lean_object* v_a_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2039_; 
v_a_2024_ = lean_ctor_get(v___x_2023_, 0);
v_isSharedCheck_2039_ = !lean_is_exclusive(v___x_2023_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2026_ = v___x_2023_;
v_isShared_2027_ = v_isSharedCheck_2039_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_a_2024_);
lean_dec(v___x_2023_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2039_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
uint8_t v___x_2028_; 
v___x_2028_ = lean_unbox(v_a_2024_);
lean_dec(v_a_2024_);
if (v___x_2028_ == 0)
{
lean_del_object(v___x_2026_);
v___y_2014_ = v___y_2019_;
v___y_2015_ = v___y_2020_;
goto v___jp_2013_;
}
else
{
lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; uint8_t v___x_2032_; 
v___x_2029_ = lean_unsigned_to_nat(0u);
v___x_2030_ = lean_array_fget_borrowed(v___y_2020_, v___x_2029_);
v___x_2031_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__1));
v___x_2032_ = l_Lean_Expr_isConstOf(v___x_2030_, v___x_2031_);
if (v___x_2032_ == 0)
{
lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2037_; 
v___x_2033_ = l_Lean_Int_mkType;
v___x_2034_ = lean_array_fset(v___y_2020_, v___x_2029_, v___x_2033_);
v___x_2035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2035_, 0, v___x_2034_);
if (v_isShared_2027_ == 0)
{
lean_ctor_set(v___x_2026_, 0, v___x_2035_);
v___x_2037_ = v___x_2026_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v___x_2035_);
v___x_2037_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
return v___x_2037_;
}
}
else
{
lean_del_object(v___x_2026_);
v___y_2014_ = v___y_2019_;
v___y_2015_ = v___y_2020_;
goto v___jp_2013_;
}
}
}
}
else
{
lean_object* v_a_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2047_; 
lean_dec_ref(v___y_2020_);
v_a_2040_ = lean_ctor_get(v___x_2023_, 0);
v_isSharedCheck_2047_ = !lean_is_exclusive(v___x_2023_);
if (v_isSharedCheck_2047_ == 0)
{
v___x_2042_ = v___x_2023_;
v_isShared_2043_ = v_isSharedCheck_2047_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_a_2040_);
lean_dec(v___x_2023_);
v___x_2042_ = lean_box(0);
v_isShared_2043_ = v_isSharedCheck_2047_;
goto v_resetjp_2041_;
}
v_resetjp_2041_:
{
lean_object* v___x_2045_; 
if (v_isShared_2043_ == 0)
{
v___x_2045_ = v___x_2042_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v_a_2040_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
return v___x_2045_;
}
}
}
}
v___jp_2048_:
{
lean_object* v___x_2052_; lean_object* v_inst_2053_; lean_object* v___x_2054_; 
v___x_2052_ = lean_unsigned_to_nat(2u);
v_inst_2053_ = lean_array_fget_borrowed(v_args_2049_, v___x_2052_);
lean_inc(v_inst_2053_);
v___x_2054_ = l_Lean_Meta_Structural_isInstOfNatNat___redArg(v_inst_2053_, v___y_2051_);
if (lean_obj_tag(v___x_2054_) == 0)
{
lean_object* v_a_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2070_; 
v_a_2055_ = lean_ctor_get(v___x_2054_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2054_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2057_ = v___x_2054_;
v_isShared_2058_ = v_isSharedCheck_2070_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_a_2055_);
lean_dec(v___x_2054_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2070_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
uint8_t v___x_2059_; 
v___x_2059_ = lean_unbox(v_a_2055_);
lean_dec(v_a_2055_);
if (v___x_2059_ == 0)
{
lean_inc(v_inst_2053_);
lean_del_object(v___x_2057_);
v___y_2019_ = v_modified_2050_;
v___y_2020_ = v_args_2049_;
v___y_2021_ = v___y_2051_;
v___y_2022_ = v_inst_2053_;
goto v___jp_2018_;
}
else
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; uint8_t v___x_2063_; 
v___x_2060_ = lean_unsigned_to_nat(0u);
v___x_2061_ = lean_array_fget_borrowed(v_args_2049_, v___x_2060_);
v___x_2062_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__3));
v___x_2063_ = l_Lean_Expr_isConstOf(v___x_2061_, v___x_2062_);
if (v___x_2063_ == 0)
{
lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2068_; 
v___x_2064_ = l_Lean_Nat_mkType;
v___x_2065_ = lean_array_fset(v_args_2049_, v___x_2060_, v___x_2064_);
v___x_2066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2065_);
if (v_isShared_2058_ == 0)
{
lean_ctor_set(v___x_2057_, 0, v___x_2066_);
v___x_2068_ = v___x_2057_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v___x_2066_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
else
{
lean_inc(v_inst_2053_);
lean_del_object(v___x_2057_);
v___y_2019_ = v_modified_2050_;
v___y_2020_ = v_args_2049_;
v___y_2021_ = v___y_2051_;
v___y_2022_ = v_inst_2053_;
goto v___jp_2018_;
}
}
}
}
else
{
lean_object* v_a_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2078_; 
lean_dec_ref(v_args_2049_);
v_a_2071_ = lean_ctor_get(v___x_2054_, 0);
v_isSharedCheck_2078_ = !lean_is_exclusive(v___x_2054_);
if (v_isSharedCheck_2078_ == 0)
{
v___x_2073_ = v___x_2054_;
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_a_2071_);
lean_dec(v___x_2054_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v___x_2076_; 
if (v_isShared_2074_ == 0)
{
v___x_2076_ = v___x_2073_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v_a_2071_);
v___x_2076_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
return v___x_2076_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___boxed(lean_object* v_args_2100_, lean_object* v_a_2101_, lean_object* v_a_2102_, lean_object* v_a_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_){
_start:
{
lean_object* v_res_2106_; 
v_res_2106_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f(v_args_2100_, v_a_2101_, v_a_2102_, v_a_2103_, v_a_2104_);
lean_dec(v_a_2104_);
lean_dec_ref(v_a_2103_);
lean_dec(v_a_2102_);
lean_dec_ref(v_a_2101_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__2___redArg(lean_object* v_cls_2107_, lean_object* v___y_2108_){
_start:
{
lean_object* v_options_2110_; uint8_t v_hasTrace_2111_; 
v_options_2110_ = lean_ctor_get(v___y_2108_, 2);
v_hasTrace_2111_ = lean_ctor_get_uint8(v_options_2110_, sizeof(void*)*1);
if (v_hasTrace_2111_ == 0)
{
lean_object* v___x_2112_; lean_object* v___x_2113_; 
lean_dec(v_cls_2107_);
v___x_2112_ = lean_box(v_hasTrace_2111_);
v___x_2113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2112_);
return v___x_2113_;
}
else
{
lean_object* v_inheritedTraceOptions_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; uint8_t v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; 
v_inheritedTraceOptions_2114_ = lean_ctor_get(v___y_2108_, 13);
v___x_2115_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___redArg___closed__1));
v___x_2116_ = l_Lean_Name_append(v___x_2115_, v_cls_2107_);
v___x_2117_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2114_, v_options_2110_, v___x_2116_);
lean_dec(v___x_2116_);
v___x_2118_ = lean_box(v___x_2117_);
v___x_2119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2118_);
return v___x_2119_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__2___redArg___boxed(lean_object* v_cls_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_){
_start:
{
lean_object* v_res_2123_; 
v_res_2123_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__2___redArg(v_cls_2120_, v___y_2121_);
lean_dec_ref(v___y_2121_);
return v_res_2123_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__2(lean_object* v_cls_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
lean_object* v___x_2137_; 
v___x_2137_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__2___redArg(v_cls_2124_, v___y_2134_);
return v___x_2137_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__2___boxed(lean_object* v_cls_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_){
_start:
{
lean_object* v_res_2151_; 
v_res_2151_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__2(v_cls_2138_, v___y_2139_, v___y_2140_, v___y_2141_, v___y_2142_, v___y_2143_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_);
lean_dec(v___y_2149_);
lean_dec_ref(v___y_2148_);
lean_dec(v___y_2147_);
lean_dec_ref(v___y_2146_);
lean_dec(v___y_2145_);
lean_dec_ref(v___y_2144_);
lean_dec(v___y_2143_);
lean_dec_ref(v___y_2142_);
lean_dec(v___y_2141_);
lean_dec(v___y_2140_);
lean_dec(v___y_2139_);
return v_res_2151_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__0(void){
_start:
{
lean_object* v___x_2152_; 
v___x_2152_ = l_instMonadEIO(lean_box(0));
return v___x_2152_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6(lean_object* v_msg_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_){
_start:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v_toApplicative_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2240_; 
v___x_2170_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__0, &l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__0);
v___x_2171_ = l_StateRefT_x27_instMonad___redArg(v___x_2170_);
v_toApplicative_2172_ = lean_ctor_get(v___x_2171_, 0);
v_isSharedCheck_2240_ = !lean_is_exclusive(v___x_2171_);
if (v_isSharedCheck_2240_ == 0)
{
lean_object* v_unused_2241_; 
v_unused_2241_ = lean_ctor_get(v___x_2171_, 1);
lean_dec(v_unused_2241_);
v___x_2174_ = v___x_2171_;
v_isShared_2175_ = v_isSharedCheck_2240_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_toApplicative_2172_);
lean_dec(v___x_2171_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2240_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v_toFunctor_2176_; lean_object* v_toSeq_2177_; lean_object* v_toSeqLeft_2178_; lean_object* v_toSeqRight_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2238_; 
v_toFunctor_2176_ = lean_ctor_get(v_toApplicative_2172_, 0);
v_toSeq_2177_ = lean_ctor_get(v_toApplicative_2172_, 2);
v_toSeqLeft_2178_ = lean_ctor_get(v_toApplicative_2172_, 3);
v_toSeqRight_2179_ = lean_ctor_get(v_toApplicative_2172_, 4);
v_isSharedCheck_2238_ = !lean_is_exclusive(v_toApplicative_2172_);
if (v_isSharedCheck_2238_ == 0)
{
lean_object* v_unused_2239_; 
v_unused_2239_ = lean_ctor_get(v_toApplicative_2172_, 1);
lean_dec(v_unused_2239_);
v___x_2181_ = v_toApplicative_2172_;
v_isShared_2182_ = v_isSharedCheck_2238_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_toSeqRight_2179_);
lean_inc(v_toSeqLeft_2178_);
lean_inc(v_toSeq_2177_);
lean_inc(v_toFunctor_2176_);
lean_dec(v_toApplicative_2172_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2238_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
lean_object* v___f_2183_; lean_object* v___f_2184_; lean_object* v___f_2185_; lean_object* v___f_2186_; lean_object* v___x_2187_; lean_object* v___f_2188_; lean_object* v___f_2189_; lean_object* v___f_2190_; lean_object* v___x_2192_; 
v___f_2183_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__1));
v___f_2184_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__2));
lean_inc_ref(v_toFunctor_2176_);
v___f_2185_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2185_, 0, v_toFunctor_2176_);
v___f_2186_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2186_, 0, v_toFunctor_2176_);
v___x_2187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2187_, 0, v___f_2185_);
lean_ctor_set(v___x_2187_, 1, v___f_2186_);
v___f_2188_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2188_, 0, v_toSeqRight_2179_);
v___f_2189_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2189_, 0, v_toSeqLeft_2178_);
v___f_2190_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2190_, 0, v_toSeq_2177_);
if (v_isShared_2182_ == 0)
{
lean_ctor_set(v___x_2181_, 4, v___f_2188_);
lean_ctor_set(v___x_2181_, 3, v___f_2189_);
lean_ctor_set(v___x_2181_, 2, v___f_2190_);
lean_ctor_set(v___x_2181_, 1, v___f_2183_);
lean_ctor_set(v___x_2181_, 0, v___x_2187_);
v___x_2192_ = v___x_2181_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v___x_2187_);
lean_ctor_set(v_reuseFailAlloc_2237_, 1, v___f_2183_);
lean_ctor_set(v_reuseFailAlloc_2237_, 2, v___f_2190_);
lean_ctor_set(v_reuseFailAlloc_2237_, 3, v___f_2189_);
lean_ctor_set(v_reuseFailAlloc_2237_, 4, v___f_2188_);
v___x_2192_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
lean_object* v___x_2194_; 
if (v_isShared_2175_ == 0)
{
lean_ctor_set(v___x_2174_, 1, v___f_2184_);
lean_ctor_set(v___x_2174_, 0, v___x_2192_);
v___x_2194_ = v___x_2174_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v___x_2192_);
lean_ctor_set(v_reuseFailAlloc_2236_, 1, v___f_2184_);
v___x_2194_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
lean_object* v___x_2195_; lean_object* v_toApplicative_2196_; lean_object* v___x_2198_; uint8_t v_isShared_2199_; uint8_t v_isSharedCheck_2234_; 
v___x_2195_ = l_StateRefT_x27_instMonad___redArg(v___x_2194_);
v_toApplicative_2196_ = lean_ctor_get(v___x_2195_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2195_);
if (v_isSharedCheck_2234_ == 0)
{
lean_object* v_unused_2235_; 
v_unused_2235_ = lean_ctor_get(v___x_2195_, 1);
lean_dec(v_unused_2235_);
v___x_2198_ = v___x_2195_;
v_isShared_2199_ = v_isSharedCheck_2234_;
goto v_resetjp_2197_;
}
else
{
lean_inc(v_toApplicative_2196_);
lean_dec(v___x_2195_);
v___x_2198_ = lean_box(0);
v_isShared_2199_ = v_isSharedCheck_2234_;
goto v_resetjp_2197_;
}
v_resetjp_2197_:
{
lean_object* v_toFunctor_2200_; lean_object* v_toSeq_2201_; lean_object* v_toSeqLeft_2202_; lean_object* v_toSeqRight_2203_; lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2232_; 
v_toFunctor_2200_ = lean_ctor_get(v_toApplicative_2196_, 0);
v_toSeq_2201_ = lean_ctor_get(v_toApplicative_2196_, 2);
v_toSeqLeft_2202_ = lean_ctor_get(v_toApplicative_2196_, 3);
v_toSeqRight_2203_ = lean_ctor_get(v_toApplicative_2196_, 4);
v_isSharedCheck_2232_ = !lean_is_exclusive(v_toApplicative_2196_);
if (v_isSharedCheck_2232_ == 0)
{
lean_object* v_unused_2233_; 
v_unused_2233_ = lean_ctor_get(v_toApplicative_2196_, 1);
lean_dec(v_unused_2233_);
v___x_2205_ = v_toApplicative_2196_;
v_isShared_2206_ = v_isSharedCheck_2232_;
goto v_resetjp_2204_;
}
else
{
lean_inc(v_toSeqRight_2203_);
lean_inc(v_toSeqLeft_2202_);
lean_inc(v_toSeq_2201_);
lean_inc(v_toFunctor_2200_);
lean_dec(v_toApplicative_2196_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2232_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___f_2207_; lean_object* v___f_2208_; lean_object* v___f_2209_; lean_object* v___f_2210_; lean_object* v___x_2211_; lean_object* v___f_2212_; lean_object* v___f_2213_; lean_object* v___f_2214_; lean_object* v___x_2216_; 
v___f_2207_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__3));
v___f_2208_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___closed__4));
lean_inc_ref(v_toFunctor_2200_);
v___f_2209_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2209_, 0, v_toFunctor_2200_);
v___f_2210_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2210_, 0, v_toFunctor_2200_);
v___x_2211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2211_, 0, v___f_2209_);
lean_ctor_set(v___x_2211_, 1, v___f_2210_);
v___f_2212_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2212_, 0, v_toSeqRight_2203_);
v___f_2213_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2213_, 0, v_toSeqLeft_2202_);
v___f_2214_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2214_, 0, v_toSeq_2201_);
if (v_isShared_2206_ == 0)
{
lean_ctor_set(v___x_2205_, 4, v___f_2212_);
lean_ctor_set(v___x_2205_, 3, v___f_2213_);
lean_ctor_set(v___x_2205_, 2, v___f_2214_);
lean_ctor_set(v___x_2205_, 1, v___f_2207_);
lean_ctor_set(v___x_2205_, 0, v___x_2211_);
v___x_2216_ = v___x_2205_;
goto v_reusejp_2215_;
}
else
{
lean_object* v_reuseFailAlloc_2231_; 
v_reuseFailAlloc_2231_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2231_, 0, v___x_2211_);
lean_ctor_set(v_reuseFailAlloc_2231_, 1, v___f_2207_);
lean_ctor_set(v_reuseFailAlloc_2231_, 2, v___f_2214_);
lean_ctor_set(v_reuseFailAlloc_2231_, 3, v___f_2213_);
lean_ctor_set(v_reuseFailAlloc_2231_, 4, v___f_2212_);
v___x_2216_ = v_reuseFailAlloc_2231_;
goto v_reusejp_2215_;
}
v_reusejp_2215_:
{
lean_object* v___x_2218_; 
if (v_isShared_2199_ == 0)
{
lean_ctor_set(v___x_2198_, 1, v___f_2208_);
lean_ctor_set(v___x_2198_, 0, v___x_2216_);
v___x_2218_ = v___x_2198_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v___x_2216_);
lean_ctor_set(v_reuseFailAlloc_2230_, 1, v___f_2208_);
v___x_2218_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_135157__overap_2228_; lean_object* v___x_2229_; 
v___x_2219_ = l_StateRefT_x27_instMonad___redArg(v___x_2218_);
v___x_2220_ = l_ReaderT_instMonad___redArg(v___x_2219_);
v___x_2221_ = l_StateRefT_x27_instMonad___redArg(v___x_2220_);
v___x_2222_ = l_ReaderT_instMonad___redArg(v___x_2221_);
v___x_2223_ = l_ReaderT_instMonad___redArg(v___x_2222_);
v___x_2224_ = l_StateRefT_x27_instMonad___redArg(v___x_2223_);
v___x_2225_ = l_StateRefT_x27_instMonad___redArg(v___x_2224_);
v___x_2226_ = l_Lean_instInhabitedExpr;
v___x_2227_ = l_instInhabitedOfMonad___redArg(v___x_2225_, v___x_2226_);
v___x_135157__overap_2228_ = lean_panic_fn_borrowed(v___x_2227_, v_msg_2157_);
lean_dec(v___x_2227_);
lean_inc(v___y_2168_);
lean_inc_ref(v___y_2167_);
lean_inc(v___y_2166_);
lean_inc_ref(v___y_2165_);
lean_inc(v___y_2164_);
lean_inc_ref(v___y_2163_);
lean_inc(v___y_2162_);
lean_inc_ref(v___y_2161_);
lean_inc(v___y_2160_);
lean_inc(v___y_2159_);
lean_inc(v___y_2158_);
v___x_2229_ = lean_apply_12(v___x_135157__overap_2228_, v___y_2158_, v___y_2159_, v___y_2160_, v___y_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, lean_box(0));
return v___x_2229_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6___boxed(lean_object* v_msg_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_){
_start:
{
lean_object* v_res_2255_; 
v_res_2255_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6(v_msg_2242_, v___y_2243_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_);
lean_dec(v___y_2253_);
lean_dec_ref(v___y_2252_);
lean_dec(v___y_2251_);
lean_dec_ref(v___y_2250_);
lean_dec(v___y_2249_);
lean_dec_ref(v___y_2248_);
lean_dec(v___y_2247_);
lean_dec_ref(v___y_2246_);
lean_dec(v___y_2245_);
lean_dec(v___y_2244_);
lean_dec(v___y_2243_);
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1_spec__4___redArg(lean_object* v_a_2256_, lean_object* v_x_2257_){
_start:
{
if (lean_obj_tag(v_x_2257_) == 0)
{
lean_object* v___x_2258_; 
v___x_2258_ = lean_box(0);
return v___x_2258_;
}
else
{
lean_object* v_key_2259_; lean_object* v_value_2260_; lean_object* v_tail_2261_; uint8_t v___x_2262_; 
v_key_2259_ = lean_ctor_get(v_x_2257_, 0);
v_value_2260_ = lean_ctor_get(v_x_2257_, 1);
v_tail_2261_ = lean_ctor_get(v_x_2257_, 2);
v___x_2262_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_key_2259_, v_a_2256_);
if (v___x_2262_ == 0)
{
v_x_2257_ = v_tail_2261_;
goto _start;
}
else
{
lean_object* v___x_2264_; 
lean_inc(v_value_2260_);
v___x_2264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2264_, 0, v_value_2260_);
return v___x_2264_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1_spec__4___redArg___boxed(lean_object* v_a_2265_, lean_object* v_x_2266_){
_start:
{
lean_object* v_res_2267_; 
v_res_2267_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1_spec__4___redArg(v_a_2265_, v_x_2266_);
lean_dec(v_x_2266_);
lean_dec_ref(v_a_2265_);
return v_res_2267_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1___redArg(lean_object* v_m_2268_, lean_object* v_a_2269_){
_start:
{
lean_object* v_buckets_2270_; lean_object* v___x_2271_; uint64_t v___x_2272_; uint64_t v___x_2273_; uint64_t v___x_2274_; uint64_t v_fold_2275_; uint64_t v___x_2276_; uint64_t v___x_2277_; uint64_t v___x_2278_; size_t v___x_2279_; size_t v___x_2280_; size_t v___x_2281_; size_t v___x_2282_; size_t v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v_buckets_2270_ = lean_ctor_get(v_m_2268_, 1);
v___x_2271_ = lean_array_get_size(v_buckets_2270_);
v___x_2272_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_a_2269_);
v___x_2273_ = 32ULL;
v___x_2274_ = lean_uint64_shift_right(v___x_2272_, v___x_2273_);
v_fold_2275_ = lean_uint64_xor(v___x_2272_, v___x_2274_);
v___x_2276_ = 16ULL;
v___x_2277_ = lean_uint64_shift_right(v_fold_2275_, v___x_2276_);
v___x_2278_ = lean_uint64_xor(v_fold_2275_, v___x_2277_);
v___x_2279_ = lean_uint64_to_usize(v___x_2278_);
v___x_2280_ = lean_usize_of_nat(v___x_2271_);
v___x_2281_ = ((size_t)1ULL);
v___x_2282_ = lean_usize_sub(v___x_2280_, v___x_2281_);
v___x_2283_ = lean_usize_land(v___x_2279_, v___x_2282_);
v___x_2284_ = lean_array_uget_borrowed(v_buckets_2270_, v___x_2283_);
v___x_2285_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1_spec__4___redArg(v_a_2269_, v___x_2284_);
return v___x_2285_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1___redArg___boxed(lean_object* v_m_2286_, lean_object* v_a_2287_){
_start:
{
lean_object* v_res_2288_; 
v_res_2288_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1___redArg(v_m_2286_, v_a_2287_);
lean_dec_ref(v_a_2287_);
lean_dec_ref(v_m_2286_);
return v_res_2288_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__0___redArg(lean_object* v_a_2289_, lean_object* v_x_2290_){
_start:
{
if (lean_obj_tag(v_x_2290_) == 0)
{
uint8_t v___x_2291_; 
v___x_2291_ = 0;
return v___x_2291_;
}
else
{
lean_object* v_key_2292_; lean_object* v_tail_2293_; uint8_t v___x_2294_; 
v_key_2292_ = lean_ctor_get(v_x_2290_, 0);
v_tail_2293_ = lean_ctor_get(v_x_2290_, 2);
v___x_2294_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_key_2292_, v_a_2289_);
if (v___x_2294_ == 0)
{
v_x_2290_ = v_tail_2293_;
goto _start;
}
else
{
return v___x_2294_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__0___redArg___boxed(lean_object* v_a_2296_, lean_object* v_x_2297_){
_start:
{
uint8_t v_res_2298_; lean_object* v_r_2299_; 
v_res_2298_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__0___redArg(v_a_2296_, v_x_2297_);
lean_dec(v_x_2297_);
lean_dec_ref(v_a_2296_);
v_r_2299_ = lean_box(v_res_2298_);
return v_r_2299_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__1_spec__4_spec__9___redArg(lean_object* v_x_2300_, lean_object* v_x_2301_){
_start:
{
if (lean_obj_tag(v_x_2301_) == 0)
{
return v_x_2300_;
}
else
{
lean_object* v_key_2302_; lean_object* v_value_2303_; lean_object* v_tail_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2327_; 
v_key_2302_ = lean_ctor_get(v_x_2301_, 0);
v_value_2303_ = lean_ctor_get(v_x_2301_, 1);
v_tail_2304_ = lean_ctor_get(v_x_2301_, 2);
v_isSharedCheck_2327_ = !lean_is_exclusive(v_x_2301_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2306_ = v_x_2301_;
v_isShared_2307_ = v_isSharedCheck_2327_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_tail_2304_);
lean_inc(v_value_2303_);
lean_inc(v_key_2302_);
lean_dec(v_x_2301_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2327_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2308_; uint64_t v___x_2309_; uint64_t v___x_2310_; uint64_t v___x_2311_; uint64_t v_fold_2312_; uint64_t v___x_2313_; uint64_t v___x_2314_; uint64_t v___x_2315_; size_t v___x_2316_; size_t v___x_2317_; size_t v___x_2318_; size_t v___x_2319_; size_t v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2323_; 
v___x_2308_ = lean_array_get_size(v_x_2300_);
v___x_2309_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_key_2302_);
v___x_2310_ = 32ULL;
v___x_2311_ = lean_uint64_shift_right(v___x_2309_, v___x_2310_);
v_fold_2312_ = lean_uint64_xor(v___x_2309_, v___x_2311_);
v___x_2313_ = 16ULL;
v___x_2314_ = lean_uint64_shift_right(v_fold_2312_, v___x_2313_);
v___x_2315_ = lean_uint64_xor(v_fold_2312_, v___x_2314_);
v___x_2316_ = lean_uint64_to_usize(v___x_2315_);
v___x_2317_ = lean_usize_of_nat(v___x_2308_);
v___x_2318_ = ((size_t)1ULL);
v___x_2319_ = lean_usize_sub(v___x_2317_, v___x_2318_);
v___x_2320_ = lean_usize_land(v___x_2316_, v___x_2319_);
v___x_2321_ = lean_array_uget_borrowed(v_x_2300_, v___x_2320_);
lean_inc(v___x_2321_);
if (v_isShared_2307_ == 0)
{
lean_ctor_set(v___x_2306_, 2, v___x_2321_);
v___x_2323_ = v___x_2306_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_key_2302_);
lean_ctor_set(v_reuseFailAlloc_2326_, 1, v_value_2303_);
lean_ctor_set(v_reuseFailAlloc_2326_, 2, v___x_2321_);
v___x_2323_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
lean_object* v___x_2324_; 
v___x_2324_ = lean_array_uset(v_x_2300_, v___x_2320_, v___x_2323_);
v_x_2300_ = v___x_2324_;
v_x_2301_ = v_tail_2304_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__1_spec__4___redArg(lean_object* v_i_2328_, lean_object* v_source_2329_, lean_object* v_target_2330_){
_start:
{
lean_object* v___x_2331_; uint8_t v___x_2332_; 
v___x_2331_ = lean_array_get_size(v_source_2329_);
v___x_2332_ = lean_nat_dec_lt(v_i_2328_, v___x_2331_);
if (v___x_2332_ == 0)
{
lean_dec_ref(v_source_2329_);
lean_dec(v_i_2328_);
return v_target_2330_;
}
else
{
lean_object* v_es_2333_; lean_object* v___x_2334_; lean_object* v_source_2335_; lean_object* v_target_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; 
v_es_2333_ = lean_array_fget(v_source_2329_, v_i_2328_);
v___x_2334_ = lean_box(0);
v_source_2335_ = lean_array_fset(v_source_2329_, v_i_2328_, v___x_2334_);
v_target_2336_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__1_spec__4_spec__9___redArg(v_target_2330_, v_es_2333_);
v___x_2337_ = lean_unsigned_to_nat(1u);
v___x_2338_ = lean_nat_add(v_i_2328_, v___x_2337_);
lean_dec(v_i_2328_);
v_i_2328_ = v___x_2338_;
v_source_2329_ = v_source_2335_;
v_target_2330_ = v_target_2336_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__1___redArg(lean_object* v_data_2340_){
_start:
{
lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v_nbuckets_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; 
v___x_2341_ = lean_array_get_size(v_data_2340_);
v___x_2342_ = lean_unsigned_to_nat(2u);
v_nbuckets_2343_ = lean_nat_mul(v___x_2341_, v___x_2342_);
v___x_2344_ = lean_unsigned_to_nat(0u);
v___x_2345_ = lean_box(0);
v___x_2346_ = lean_mk_array(v_nbuckets_2343_, v___x_2345_);
v___x_2347_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__1_spec__4___redArg(v___x_2344_, v_data_2340_, v___x_2346_);
return v___x_2347_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__2___redArg(lean_object* v_a_2348_, lean_object* v_b_2349_, lean_object* v_x_2350_){
_start:
{
if (lean_obj_tag(v_x_2350_) == 0)
{
lean_dec(v_b_2349_);
lean_dec_ref(v_a_2348_);
return v_x_2350_;
}
else
{
lean_object* v_key_2351_; lean_object* v_value_2352_; lean_object* v_tail_2353_; lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2365_; 
v_key_2351_ = lean_ctor_get(v_x_2350_, 0);
v_value_2352_ = lean_ctor_get(v_x_2350_, 1);
v_tail_2353_ = lean_ctor_get(v_x_2350_, 2);
v_isSharedCheck_2365_ = !lean_is_exclusive(v_x_2350_);
if (v_isSharedCheck_2365_ == 0)
{
v___x_2355_ = v_x_2350_;
v_isShared_2356_ = v_isSharedCheck_2365_;
goto v_resetjp_2354_;
}
else
{
lean_inc(v_tail_2353_);
lean_inc(v_value_2352_);
lean_inc(v_key_2351_);
lean_dec(v_x_2350_);
v___x_2355_ = lean_box(0);
v_isShared_2356_ = v_isSharedCheck_2365_;
goto v_resetjp_2354_;
}
v_resetjp_2354_:
{
uint8_t v___x_2357_; 
v___x_2357_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_key_2351_, v_a_2348_);
if (v___x_2357_ == 0)
{
lean_object* v___x_2358_; lean_object* v___x_2360_; 
v___x_2358_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__2___redArg(v_a_2348_, v_b_2349_, v_tail_2353_);
if (v_isShared_2356_ == 0)
{
lean_ctor_set(v___x_2355_, 2, v___x_2358_);
v___x_2360_ = v___x_2355_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v_key_2351_);
lean_ctor_set(v_reuseFailAlloc_2361_, 1, v_value_2352_);
lean_ctor_set(v_reuseFailAlloc_2361_, 2, v___x_2358_);
v___x_2360_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
return v___x_2360_;
}
}
else
{
lean_object* v___x_2363_; 
lean_dec(v_value_2352_);
lean_dec(v_key_2351_);
if (v_isShared_2356_ == 0)
{
lean_ctor_set(v___x_2355_, 1, v_b_2349_);
lean_ctor_set(v___x_2355_, 0, v_a_2348_);
v___x_2363_ = v___x_2355_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v_a_2348_);
lean_ctor_set(v_reuseFailAlloc_2364_, 1, v_b_2349_);
lean_ctor_set(v_reuseFailAlloc_2364_, 2, v_tail_2353_);
v___x_2363_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
return v___x_2363_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0___redArg(lean_object* v_m_2366_, lean_object* v_a_2367_, lean_object* v_b_2368_){
_start:
{
lean_object* v_size_2369_; lean_object* v_buckets_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2413_; 
v_size_2369_ = lean_ctor_get(v_m_2366_, 0);
v_buckets_2370_ = lean_ctor_get(v_m_2366_, 1);
v_isSharedCheck_2413_ = !lean_is_exclusive(v_m_2366_);
if (v_isSharedCheck_2413_ == 0)
{
v___x_2372_ = v_m_2366_;
v_isShared_2373_ = v_isSharedCheck_2413_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_buckets_2370_);
lean_inc(v_size_2369_);
lean_dec(v_m_2366_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2413_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2374_; uint64_t v___x_2375_; uint64_t v___x_2376_; uint64_t v___x_2377_; uint64_t v_fold_2378_; uint64_t v___x_2379_; uint64_t v___x_2380_; uint64_t v___x_2381_; size_t v___x_2382_; size_t v___x_2383_; size_t v___x_2384_; size_t v___x_2385_; size_t v___x_2386_; lean_object* v_bkt_2387_; uint8_t v___x_2388_; 
v___x_2374_ = lean_array_get_size(v_buckets_2370_);
v___x_2375_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_a_2367_);
v___x_2376_ = 32ULL;
v___x_2377_ = lean_uint64_shift_right(v___x_2375_, v___x_2376_);
v_fold_2378_ = lean_uint64_xor(v___x_2375_, v___x_2377_);
v___x_2379_ = 16ULL;
v___x_2380_ = lean_uint64_shift_right(v_fold_2378_, v___x_2379_);
v___x_2381_ = lean_uint64_xor(v_fold_2378_, v___x_2380_);
v___x_2382_ = lean_uint64_to_usize(v___x_2381_);
v___x_2383_ = lean_usize_of_nat(v___x_2374_);
v___x_2384_ = ((size_t)1ULL);
v___x_2385_ = lean_usize_sub(v___x_2383_, v___x_2384_);
v___x_2386_ = lean_usize_land(v___x_2382_, v___x_2385_);
v_bkt_2387_ = lean_array_uget_borrowed(v_buckets_2370_, v___x_2386_);
v___x_2388_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__0___redArg(v_a_2367_, v_bkt_2387_);
if (v___x_2388_ == 0)
{
lean_object* v___x_2389_; lean_object* v_size_x27_2390_; lean_object* v___x_2391_; lean_object* v_buckets_x27_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; uint8_t v___x_2398_; 
v___x_2389_ = lean_unsigned_to_nat(1u);
v_size_x27_2390_ = lean_nat_add(v_size_2369_, v___x_2389_);
lean_dec(v_size_2369_);
lean_inc(v_bkt_2387_);
v___x_2391_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2391_, 0, v_a_2367_);
lean_ctor_set(v___x_2391_, 1, v_b_2368_);
lean_ctor_set(v___x_2391_, 2, v_bkt_2387_);
v_buckets_x27_2392_ = lean_array_uset(v_buckets_2370_, v___x_2386_, v___x_2391_);
v___x_2393_ = lean_unsigned_to_nat(4u);
v___x_2394_ = lean_nat_mul(v_size_x27_2390_, v___x_2393_);
v___x_2395_ = lean_unsigned_to_nat(3u);
v___x_2396_ = lean_nat_div(v___x_2394_, v___x_2395_);
lean_dec(v___x_2394_);
v___x_2397_ = lean_array_get_size(v_buckets_x27_2392_);
v___x_2398_ = lean_nat_dec_le(v___x_2396_, v___x_2397_);
lean_dec(v___x_2396_);
if (v___x_2398_ == 0)
{
lean_object* v_val_2399_; lean_object* v___x_2401_; 
v_val_2399_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__1___redArg(v_buckets_x27_2392_);
if (v_isShared_2373_ == 0)
{
lean_ctor_set(v___x_2372_, 1, v_val_2399_);
lean_ctor_set(v___x_2372_, 0, v_size_x27_2390_);
v___x_2401_ = v___x_2372_;
goto v_reusejp_2400_;
}
else
{
lean_object* v_reuseFailAlloc_2402_; 
v_reuseFailAlloc_2402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2402_, 0, v_size_x27_2390_);
lean_ctor_set(v_reuseFailAlloc_2402_, 1, v_val_2399_);
v___x_2401_ = v_reuseFailAlloc_2402_;
goto v_reusejp_2400_;
}
v_reusejp_2400_:
{
return v___x_2401_;
}
}
else
{
lean_object* v___x_2404_; 
if (v_isShared_2373_ == 0)
{
lean_ctor_set(v___x_2372_, 1, v_buckets_x27_2392_);
lean_ctor_set(v___x_2372_, 0, v_size_x27_2390_);
v___x_2404_ = v___x_2372_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2405_; 
v_reuseFailAlloc_2405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2405_, 0, v_size_x27_2390_);
lean_ctor_set(v_reuseFailAlloc_2405_, 1, v_buckets_x27_2392_);
v___x_2404_ = v_reuseFailAlloc_2405_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
return v___x_2404_;
}
}
}
else
{
lean_object* v___x_2406_; lean_object* v_buckets_x27_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2411_; 
lean_inc(v_bkt_2387_);
v___x_2406_ = lean_box(0);
v_buckets_x27_2407_ = lean_array_uset(v_buckets_2370_, v___x_2386_, v___x_2406_);
v___x_2408_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__2___redArg(v_a_2367_, v_b_2368_, v_bkt_2387_);
v___x_2409_ = lean_array_uset(v_buckets_x27_2407_, v___x_2386_, v___x_2408_);
if (v_isShared_2373_ == 0)
{
lean_ctor_set(v___x_2372_, 1, v___x_2409_);
v___x_2411_ = v___x_2372_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2412_; 
v_reuseFailAlloc_2412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2412_, 0, v_size_2369_);
lean_ctor_set(v_reuseFailAlloc_2412_, 1, v___x_2409_);
v___x_2411_ = v_reuseFailAlloc_2412_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
return v___x_2411_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__3___redArg(lean_object* v_cls_2414_, lean_object* v_msg_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_){
_start:
{
lean_object* v_ref_2421_; lean_object* v___x_2422_; lean_object* v_a_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2467_; 
v_ref_2421_ = lean_ctor_get(v___y_2418_, 5);
v___x_2422_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1_spec__1(v_msg_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_);
v_a_2423_ = lean_ctor_get(v___x_2422_, 0);
v_isSharedCheck_2467_ = !lean_is_exclusive(v___x_2422_);
if (v_isSharedCheck_2467_ == 0)
{
v___x_2425_ = v___x_2422_;
v_isShared_2426_ = v_isSharedCheck_2467_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_a_2423_);
lean_dec(v___x_2422_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2467_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v___x_2427_; lean_object* v_traceState_2428_; lean_object* v_env_2429_; lean_object* v_nextMacroScope_2430_; lean_object* v_ngen_2431_; lean_object* v_auxDeclNGen_2432_; lean_object* v_cache_2433_; lean_object* v_messages_2434_; lean_object* v_infoState_2435_; lean_object* v_snapshotTasks_2436_; lean_object* v___x_2438_; uint8_t v_isShared_2439_; uint8_t v_isSharedCheck_2466_; 
v___x_2427_ = lean_st_ref_take(v___y_2419_);
v_traceState_2428_ = lean_ctor_get(v___x_2427_, 4);
v_env_2429_ = lean_ctor_get(v___x_2427_, 0);
v_nextMacroScope_2430_ = lean_ctor_get(v___x_2427_, 1);
v_ngen_2431_ = lean_ctor_get(v___x_2427_, 2);
v_auxDeclNGen_2432_ = lean_ctor_get(v___x_2427_, 3);
v_cache_2433_ = lean_ctor_get(v___x_2427_, 5);
v_messages_2434_ = lean_ctor_get(v___x_2427_, 6);
v_infoState_2435_ = lean_ctor_get(v___x_2427_, 7);
v_snapshotTasks_2436_ = lean_ctor_get(v___x_2427_, 8);
v_isSharedCheck_2466_ = !lean_is_exclusive(v___x_2427_);
if (v_isSharedCheck_2466_ == 0)
{
v___x_2438_ = v___x_2427_;
v_isShared_2439_ = v_isSharedCheck_2466_;
goto v_resetjp_2437_;
}
else
{
lean_inc(v_snapshotTasks_2436_);
lean_inc(v_infoState_2435_);
lean_inc(v_messages_2434_);
lean_inc(v_cache_2433_);
lean_inc(v_traceState_2428_);
lean_inc(v_auxDeclNGen_2432_);
lean_inc(v_ngen_2431_);
lean_inc(v_nextMacroScope_2430_);
lean_inc(v_env_2429_);
lean_dec(v___x_2427_);
v___x_2438_ = lean_box(0);
v_isShared_2439_ = v_isSharedCheck_2466_;
goto v_resetjp_2437_;
}
v_resetjp_2437_:
{
uint64_t v_tid_2440_; lean_object* v_traces_2441_; lean_object* v___x_2443_; uint8_t v_isShared_2444_; uint8_t v_isSharedCheck_2465_; 
v_tid_2440_ = lean_ctor_get_uint64(v_traceState_2428_, sizeof(void*)*1);
v_traces_2441_ = lean_ctor_get(v_traceState_2428_, 0);
v_isSharedCheck_2465_ = !lean_is_exclusive(v_traceState_2428_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2443_ = v_traceState_2428_;
v_isShared_2444_ = v_isSharedCheck_2465_;
goto v_resetjp_2442_;
}
else
{
lean_inc(v_traces_2441_);
lean_dec(v_traceState_2428_);
v___x_2443_ = lean_box(0);
v_isShared_2444_ = v_isSharedCheck_2465_;
goto v_resetjp_2442_;
}
v_resetjp_2442_:
{
lean_object* v___x_2445_; double v___x_2446_; uint8_t v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2455_; 
v___x_2445_ = lean_box(0);
v___x_2446_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__0);
v___x_2447_ = 0;
v___x_2448_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__1));
v___x_2449_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2449_, 0, v_cls_2414_);
lean_ctor_set(v___x_2449_, 1, v___x_2445_);
lean_ctor_set(v___x_2449_, 2, v___x_2448_);
lean_ctor_set_float(v___x_2449_, sizeof(void*)*3, v___x_2446_);
lean_ctor_set_float(v___x_2449_, sizeof(void*)*3 + 8, v___x_2446_);
lean_ctor_set_uint8(v___x_2449_, sizeof(void*)*3 + 16, v___x_2447_);
v___x_2450_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg___closed__2));
v___x_2451_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2451_, 0, v___x_2449_);
lean_ctor_set(v___x_2451_, 1, v_a_2423_);
lean_ctor_set(v___x_2451_, 2, v___x_2450_);
lean_inc(v_ref_2421_);
v___x_2452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2452_, 0, v_ref_2421_);
lean_ctor_set(v___x_2452_, 1, v___x_2451_);
v___x_2453_ = l_Lean_PersistentArray_push___redArg(v_traces_2441_, v___x_2452_);
if (v_isShared_2444_ == 0)
{
lean_ctor_set(v___x_2443_, 0, v___x_2453_);
v___x_2455_ = v___x_2443_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v___x_2453_);
lean_ctor_set_uint64(v_reuseFailAlloc_2464_, sizeof(void*)*1, v_tid_2440_);
v___x_2455_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
lean_object* v___x_2457_; 
if (v_isShared_2439_ == 0)
{
lean_ctor_set(v___x_2438_, 4, v___x_2455_);
v___x_2457_ = v___x_2438_;
goto v_reusejp_2456_;
}
else
{
lean_object* v_reuseFailAlloc_2463_; 
v_reuseFailAlloc_2463_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2463_, 0, v_env_2429_);
lean_ctor_set(v_reuseFailAlloc_2463_, 1, v_nextMacroScope_2430_);
lean_ctor_set(v_reuseFailAlloc_2463_, 2, v_ngen_2431_);
lean_ctor_set(v_reuseFailAlloc_2463_, 3, v_auxDeclNGen_2432_);
lean_ctor_set(v_reuseFailAlloc_2463_, 4, v___x_2455_);
lean_ctor_set(v_reuseFailAlloc_2463_, 5, v_cache_2433_);
lean_ctor_set(v_reuseFailAlloc_2463_, 6, v_messages_2434_);
lean_ctor_set(v_reuseFailAlloc_2463_, 7, v_infoState_2435_);
lean_ctor_set(v_reuseFailAlloc_2463_, 8, v_snapshotTasks_2436_);
v___x_2457_ = v_reuseFailAlloc_2463_;
goto v_reusejp_2456_;
}
v_reusejp_2456_:
{
lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2461_; 
v___x_2458_ = lean_st_ref_set(v___y_2419_, v___x_2457_);
v___x_2459_ = lean_box(0);
if (v_isShared_2426_ == 0)
{
lean_ctor_set(v___x_2425_, 0, v___x_2459_);
v___x_2461_ = v___x_2425_;
goto v_reusejp_2460_;
}
else
{
lean_object* v_reuseFailAlloc_2462_; 
v_reuseFailAlloc_2462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2462_, 0, v___x_2459_);
v___x_2461_ = v_reuseFailAlloc_2462_;
goto v_reusejp_2460_;
}
v_reusejp_2460_:
{
return v___x_2461_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__3___redArg___boxed(lean_object* v_cls_2468_, lean_object* v_msg_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_){
_start:
{
lean_object* v_res_2475_; 
v_res_2475_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__3___redArg(v_cls_2468_, v_msg_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_);
lean_dec(v___y_2473_);
lean_dec_ref(v___y_2472_);
lean_dec(v___y_2471_);
lean_dec_ref(v___y_2470_);
return v_res_2475_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___lam__0(lean_object* v_x_2476_, lean_object* v_00___2477_){
_start:
{
lean_object* v___x_2478_; lean_object* v___x_2479_; uint8_t v___x_2480_; 
v___x_2478_ = lean_array_get_size(v_x_2476_);
v___x_2479_ = lean_unsigned_to_nat(2u);
v___x_2480_ = lean_nat_dec_eq(v___x_2478_, v___x_2479_);
return v___x_2480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___lam__0___boxed(lean_object* v_x_2481_, lean_object* v_00___2482_){
_start:
{
uint8_t v_res_2483_; lean_object* v_r_2484_; 
v_res_2483_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___lam__0(v_x_2481_, v_00___2482_);
lean_dec_ref(v_x_2481_);
v_r_2484_ = lean_box(v_res_2483_);
return v_r_2484_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__0(void){
_start:
{
lean_object* v___x_2485_; lean_object* v_dummy_2486_; 
v___x_2485_ = lean_box(0);
v_dummy_2486_ = l_Lean_Expr_sort___override(v___x_2485_);
return v_dummy_2486_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__4(void){
_start:
{
lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; 
v___x_2490_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__3));
v___x_2491_ = lean_unsigned_to_nat(13u);
v___x_2492_ = lean_unsigned_to_nat(266u);
v___x_2493_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__2));
v___x_2494_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__1));
v___x_2495_ = l_mkPanicMessageWithDecl(v___x_2494_, v___x_2493_, v___x_2492_, v___x_2491_, v___x_2490_);
return v___x_2495_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___lam__0(lean_object* v___x_2503_, lean_object* v_a_2504_, lean_object* v___x_2505_, lean_object* v_snd_2506_, uint8_t v___y_2507_, lean_object* v_fst_2508_, lean_object* v_f_2509_, uint8_t v___y_2510_, lean_object* v___x_2511_, lean_object* v_____r_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_){
_start:
{
lean_object* v_arg_x27_2526_; lean_object* v___x_2536_; 
lean_inc_ref(v___x_2505_);
v___x_2536_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_shouldCanon(v___x_2503_, v_a_2504_, v___x_2505_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_);
if (lean_obj_tag(v___x_2536_) == 0)
{
lean_object* v_a_2537_; uint8_t v___x_2538_; 
v_a_2537_ = lean_ctor_get(v___x_2536_, 0);
lean_inc(v_a_2537_);
lean_dec_ref(v___x_2536_);
v___x_2538_ = lean_unbox(v_a_2537_);
lean_dec(v_a_2537_);
switch(v___x_2538_)
{
case 0:
{
lean_object* v___x_2539_; 
lean_inc_ref(v___x_2505_);
v___x_2539_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit(v___x_2505_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_);
if (lean_obj_tag(v___x_2539_) == 0)
{
lean_object* v_a_2540_; lean_object* v___x_2541_; uint8_t v_foApprox_2542_; uint8_t v_ctxApprox_2543_; uint8_t v_quasiPatternApprox_2544_; uint8_t v_constApprox_2545_; uint8_t v_isDefEqStuckEx_2546_; uint8_t v_unificationHints_2547_; uint8_t v_proofIrrelevance_2548_; uint8_t v_assignSyntheticOpaque_2549_; uint8_t v_offsetCnstrs_2550_; uint8_t v_etaStruct_2551_; uint8_t v_univApprox_2552_; uint8_t v_iota_2553_; uint8_t v_beta_2554_; uint8_t v_proj_2555_; uint8_t v_zeta_2556_; uint8_t v_zetaDelta_2557_; uint8_t v_zetaUnused_2558_; uint8_t v_zetaHave_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2596_; 
v_a_2540_ = lean_ctor_get(v___x_2539_, 0);
lean_inc(v_a_2540_);
lean_dec_ref(v___x_2539_);
v___x_2541_ = l_Lean_Meta_Context_config(v___y_2520_);
v_foApprox_2542_ = lean_ctor_get_uint8(v___x_2541_, 0);
v_ctxApprox_2543_ = lean_ctor_get_uint8(v___x_2541_, 1);
v_quasiPatternApprox_2544_ = lean_ctor_get_uint8(v___x_2541_, 2);
v_constApprox_2545_ = lean_ctor_get_uint8(v___x_2541_, 3);
v_isDefEqStuckEx_2546_ = lean_ctor_get_uint8(v___x_2541_, 4);
v_unificationHints_2547_ = lean_ctor_get_uint8(v___x_2541_, 5);
v_proofIrrelevance_2548_ = lean_ctor_get_uint8(v___x_2541_, 6);
v_assignSyntheticOpaque_2549_ = lean_ctor_get_uint8(v___x_2541_, 7);
v_offsetCnstrs_2550_ = lean_ctor_get_uint8(v___x_2541_, 8);
v_etaStruct_2551_ = lean_ctor_get_uint8(v___x_2541_, 10);
v_univApprox_2552_ = lean_ctor_get_uint8(v___x_2541_, 11);
v_iota_2553_ = lean_ctor_get_uint8(v___x_2541_, 12);
v_beta_2554_ = lean_ctor_get_uint8(v___x_2541_, 13);
v_proj_2555_ = lean_ctor_get_uint8(v___x_2541_, 14);
v_zeta_2556_ = lean_ctor_get_uint8(v___x_2541_, 15);
v_zetaDelta_2557_ = lean_ctor_get_uint8(v___x_2541_, 16);
v_zetaUnused_2558_ = lean_ctor_get_uint8(v___x_2541_, 17);
v_zetaHave_2559_ = lean_ctor_get_uint8(v___x_2541_, 18);
v_isSharedCheck_2596_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2596_ == 0)
{
v___x_2561_ = v___x_2541_;
v_isShared_2562_ = v_isSharedCheck_2596_;
goto v_resetjp_2560_;
}
else
{
lean_dec(v___x_2541_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2596_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
uint8_t v_trackZetaDelta_2563_; lean_object* v_zetaDeltaSet_2564_; lean_object* v_lctx_2565_; lean_object* v_localInstances_2566_; lean_object* v_defEqCtx_x3f_2567_; lean_object* v_synthPendingDepth_2568_; lean_object* v_canUnfold_x3f_2569_; uint8_t v_univApprox_2570_; uint8_t v_inTypeClassResolution_2571_; uint8_t v_cacheInferType_2572_; uint8_t v___x_2573_; lean_object* v_config_2575_; 
v_trackZetaDelta_2563_ = lean_ctor_get_uint8(v___y_2520_, sizeof(void*)*7);
v_zetaDeltaSet_2564_ = lean_ctor_get(v___y_2520_, 1);
v_lctx_2565_ = lean_ctor_get(v___y_2520_, 2);
v_localInstances_2566_ = lean_ctor_get(v___y_2520_, 3);
v_defEqCtx_x3f_2567_ = lean_ctor_get(v___y_2520_, 4);
v_synthPendingDepth_2568_ = lean_ctor_get(v___y_2520_, 5);
v_canUnfold_x3f_2569_ = lean_ctor_get(v___y_2520_, 6);
v_univApprox_2570_ = lean_ctor_get_uint8(v___y_2520_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2571_ = lean_ctor_get_uint8(v___y_2520_, sizeof(void*)*7 + 2);
v_cacheInferType_2572_ = lean_ctor_get_uint8(v___y_2520_, sizeof(void*)*7 + 3);
v___x_2573_ = 1;
if (v_isShared_2562_ == 0)
{
v_config_2575_ = v___x_2561_;
goto v_reusejp_2574_;
}
else
{
lean_object* v_reuseFailAlloc_2595_; 
v_reuseFailAlloc_2595_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_2595_, 0, v_foApprox_2542_);
lean_ctor_set_uint8(v_reuseFailAlloc_2595_, 1, v_ctxApprox_2543_);
lean_ctor_set_uint8(v_reuseFailAlloc_2595_, 2, v_quasiPatternApprox_2544_);
lean_ctor_set_uint8(v_reuseFailAlloc_2595_, 3, v_constApprox_2545_);
lean_ctor_set_uint8(v_reuseFailAlloc_2595_, 4, v_isDefEqStuckEx_2546_);
lean_ctor_set_uint8(v_reuseFailAlloc_2595_, 5, v_unificationHints_2547_);
lean_ctor_set_uint8(v_reuseFailAlloc_2595_, 6, v_proofIrrelevance_2548_);
lean_ctor_set_uint8(v_reuseFailAlloc_2595_, 7, v_assignSyntheticOpaque_2549_);
lean_ctor_set_uint8(v_reuseFailAlloc_2595_, 8, v_offsetCnstrs_2550_);
lean_ctor_set_uint8(v_reuseFailAlloc_2595_, 10, v_etaStruct_2551_);
lean_ctor_set_uint8(v_reuseFailAlloc_2595_, 11, v_univApprox_2552_);
lean_ctor_set_uint8(v_reuseFailAlloc_2595_, 12, v_iota_2553_);
lean_ctor_set_uint8(v_reuseFailAlloc_2595_, 13, v_beta_2554_);
lean_ctor_set_uint8(v_reuseFailAlloc_2595_, 14, v_proj_2555_);
lean_ctor_set_uint8(v_reuseFailAlloc_2595_, 15, v_zeta_2556_);
lean_ctor_set_uint8(v_reuseFailAlloc_2595_, 16, v_zetaDelta_2557_);
lean_ctor_set_uint8(v_reuseFailAlloc_2595_, 17, v_zetaUnused_2558_);
lean_ctor_set_uint8(v_reuseFailAlloc_2595_, 18, v_zetaHave_2559_);
v_config_2575_ = v_reuseFailAlloc_2595_;
goto v_reusejp_2574_;
}
v_reusejp_2574_:
{
uint64_t v___x_2576_; uint64_t v___x_2577_; uint64_t v___x_2578_; uint64_t v___x_2579_; uint64_t v___x_2580_; uint64_t v_key_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; 
lean_ctor_set_uint8(v_config_2575_, 9, v___x_2573_);
v___x_2576_ = l_Lean_Meta_Context_configKey(v___y_2520_);
v___x_2577_ = 2ULL;
v___x_2578_ = lean_uint64_shift_right(v___x_2576_, v___x_2577_);
v___x_2579_ = lean_uint64_shift_left(v___x_2578_, v___x_2577_);
v___x_2580_ = lean_uint64_once(&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonType___closed__0, &l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonType___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonType___closed__0);
v_key_2581_ = lean_uint64_lor(v___x_2579_, v___x_2580_);
v___x_2582_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2582_, 0, v_config_2575_);
lean_ctor_set_uint64(v___x_2582_, sizeof(void*)*1, v_key_2581_);
lean_inc(v_canUnfold_x3f_2569_);
lean_inc(v_synthPendingDepth_2568_);
lean_inc(v_defEqCtx_x3f_2567_);
lean_inc_ref(v_localInstances_2566_);
lean_inc_ref(v_lctx_2565_);
lean_inc(v_zetaDeltaSet_2564_);
v___x_2583_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2583_, 0, v___x_2582_);
lean_ctor_set(v___x_2583_, 1, v_zetaDeltaSet_2564_);
lean_ctor_set(v___x_2583_, 2, v_lctx_2565_);
lean_ctor_set(v___x_2583_, 3, v_localInstances_2566_);
lean_ctor_set(v___x_2583_, 4, v_defEqCtx_x3f_2567_);
lean_ctor_set(v___x_2583_, 5, v_synthPendingDepth_2568_);
lean_ctor_set(v___x_2583_, 6, v_canUnfold_x3f_2569_);
lean_ctor_set_uint8(v___x_2583_, sizeof(void*)*7, v_trackZetaDelta_2563_);
lean_ctor_set_uint8(v___x_2583_, sizeof(void*)*7 + 1, v_univApprox_2570_);
lean_ctor_set_uint8(v___x_2583_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2571_);
lean_ctor_set_uint8(v___x_2583_, sizeof(void*)*7 + 3, v_cacheInferType_2572_);
lean_inc(v_a_2504_);
v___x_2584_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore(v_f_2509_, v_a_2504_, v_a_2540_, v___y_2510_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___x_2583_, v___y_2521_, v___y_2522_, v___y_2523_);
lean_dec_ref(v___x_2583_);
if (lean_obj_tag(v___x_2584_) == 0)
{
lean_object* v_a_2585_; 
v_a_2585_ = lean_ctor_get(v___x_2584_, 0);
lean_inc(v_a_2585_);
lean_dec_ref(v___x_2584_);
v_arg_x27_2526_ = v_a_2585_;
goto v___jp_2525_;
}
else
{
if (lean_obj_tag(v___x_2584_) == 0)
{
lean_object* v_a_2586_; 
v_a_2586_ = lean_ctor_get(v___x_2584_, 0);
lean_inc(v_a_2586_);
lean_dec_ref(v___x_2584_);
v_arg_x27_2526_ = v_a_2586_;
goto v___jp_2525_;
}
else
{
lean_object* v_a_2587_; lean_object* v___x_2589_; uint8_t v_isShared_2590_; uint8_t v_isSharedCheck_2594_; 
lean_dec(v_fst_2508_);
lean_dec(v_snd_2506_);
lean_dec_ref(v___x_2505_);
lean_dec(v_a_2504_);
v_a_2587_ = lean_ctor_get(v___x_2584_, 0);
v_isSharedCheck_2594_ = !lean_is_exclusive(v___x_2584_);
if (v_isSharedCheck_2594_ == 0)
{
v___x_2589_ = v___x_2584_;
v_isShared_2590_ = v_isSharedCheck_2594_;
goto v_resetjp_2588_;
}
else
{
lean_inc(v_a_2587_);
lean_dec(v___x_2584_);
v___x_2589_ = lean_box(0);
v_isShared_2590_ = v_isSharedCheck_2594_;
goto v_resetjp_2588_;
}
v_resetjp_2588_:
{
lean_object* v___x_2592_; 
if (v_isShared_2590_ == 0)
{
v___x_2592_ = v___x_2589_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v_a_2587_);
v___x_2592_ = v_reuseFailAlloc_2593_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
return v___x_2592_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2597_; lean_object* v___x_2599_; uint8_t v_isShared_2600_; uint8_t v_isSharedCheck_2604_; 
lean_dec_ref(v_f_2509_);
lean_dec(v_fst_2508_);
lean_dec(v_snd_2506_);
lean_dec_ref(v___x_2505_);
lean_dec(v_a_2504_);
v_a_2597_ = lean_ctor_get(v___x_2539_, 0);
v_isSharedCheck_2604_ = !lean_is_exclusive(v___x_2539_);
if (v_isSharedCheck_2604_ == 0)
{
v___x_2599_ = v___x_2539_;
v_isShared_2600_ = v_isSharedCheck_2604_;
goto v_resetjp_2598_;
}
else
{
lean_inc(v_a_2597_);
lean_dec(v___x_2539_);
v___x_2599_ = lean_box(0);
v_isShared_2600_ = v_isSharedCheck_2604_;
goto v_resetjp_2598_;
}
v_resetjp_2598_:
{
lean_object* v___x_2602_; 
if (v_isShared_2600_ == 0)
{
v___x_2602_ = v___x_2599_;
goto v_reusejp_2601_;
}
else
{
lean_object* v_reuseFailAlloc_2603_; 
v_reuseFailAlloc_2603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2603_, 0, v_a_2597_);
v___x_2602_ = v_reuseFailAlloc_2603_;
goto v_reusejp_2601_;
}
v_reusejp_2601_:
{
return v___x_2602_;
}
}
}
}
case 1:
{
lean_object* v___x_2605_; uint8_t v___x_2606_; 
v___x_2605_ = lean_unsigned_to_nat(2u);
v___x_2606_ = l_Lean_Expr_isAppOfArity(v___x_2505_, v___x_2511_, v___x_2605_);
if (v___x_2606_ == 0)
{
lean_object* v___x_2607_; uint8_t v_foApprox_2608_; uint8_t v_ctxApprox_2609_; uint8_t v_quasiPatternApprox_2610_; uint8_t v_constApprox_2611_; uint8_t v_isDefEqStuckEx_2612_; uint8_t v_unificationHints_2613_; uint8_t v_proofIrrelevance_2614_; uint8_t v_assignSyntheticOpaque_2615_; uint8_t v_offsetCnstrs_2616_; uint8_t v_etaStruct_2617_; uint8_t v_univApprox_2618_; uint8_t v_iota_2619_; uint8_t v_beta_2620_; uint8_t v_proj_2621_; uint8_t v_zeta_2622_; uint8_t v_zetaDelta_2623_; uint8_t v_zetaUnused_2624_; uint8_t v_zetaHave_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2662_; 
v___x_2607_ = l_Lean_Meta_Context_config(v___y_2520_);
v_foApprox_2608_ = lean_ctor_get_uint8(v___x_2607_, 0);
v_ctxApprox_2609_ = lean_ctor_get_uint8(v___x_2607_, 1);
v_quasiPatternApprox_2610_ = lean_ctor_get_uint8(v___x_2607_, 2);
v_constApprox_2611_ = lean_ctor_get_uint8(v___x_2607_, 3);
v_isDefEqStuckEx_2612_ = lean_ctor_get_uint8(v___x_2607_, 4);
v_unificationHints_2613_ = lean_ctor_get_uint8(v___x_2607_, 5);
v_proofIrrelevance_2614_ = lean_ctor_get_uint8(v___x_2607_, 6);
v_assignSyntheticOpaque_2615_ = lean_ctor_get_uint8(v___x_2607_, 7);
v_offsetCnstrs_2616_ = lean_ctor_get_uint8(v___x_2607_, 8);
v_etaStruct_2617_ = lean_ctor_get_uint8(v___x_2607_, 10);
v_univApprox_2618_ = lean_ctor_get_uint8(v___x_2607_, 11);
v_iota_2619_ = lean_ctor_get_uint8(v___x_2607_, 12);
v_beta_2620_ = lean_ctor_get_uint8(v___x_2607_, 13);
v_proj_2621_ = lean_ctor_get_uint8(v___x_2607_, 14);
v_zeta_2622_ = lean_ctor_get_uint8(v___x_2607_, 15);
v_zetaDelta_2623_ = lean_ctor_get_uint8(v___x_2607_, 16);
v_zetaUnused_2624_ = lean_ctor_get_uint8(v___x_2607_, 17);
v_zetaHave_2625_ = lean_ctor_get_uint8(v___x_2607_, 18);
v_isSharedCheck_2662_ = !lean_is_exclusive(v___x_2607_);
if (v_isSharedCheck_2662_ == 0)
{
v___x_2627_ = v___x_2607_;
v_isShared_2628_ = v_isSharedCheck_2662_;
goto v_resetjp_2626_;
}
else
{
lean_dec(v___x_2607_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2662_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
uint8_t v_trackZetaDelta_2629_; lean_object* v_zetaDeltaSet_2630_; lean_object* v_lctx_2631_; lean_object* v_localInstances_2632_; lean_object* v_defEqCtx_x3f_2633_; lean_object* v_synthPendingDepth_2634_; lean_object* v_canUnfold_x3f_2635_; uint8_t v_univApprox_2636_; uint8_t v_inTypeClassResolution_2637_; uint8_t v_cacheInferType_2638_; uint8_t v___x_2639_; lean_object* v_config_2641_; 
v_trackZetaDelta_2629_ = lean_ctor_get_uint8(v___y_2520_, sizeof(void*)*7);
v_zetaDeltaSet_2630_ = lean_ctor_get(v___y_2520_, 1);
v_lctx_2631_ = lean_ctor_get(v___y_2520_, 2);
v_localInstances_2632_ = lean_ctor_get(v___y_2520_, 3);
v_defEqCtx_x3f_2633_ = lean_ctor_get(v___y_2520_, 4);
v_synthPendingDepth_2634_ = lean_ctor_get(v___y_2520_, 5);
v_canUnfold_x3f_2635_ = lean_ctor_get(v___y_2520_, 6);
v_univApprox_2636_ = lean_ctor_get_uint8(v___y_2520_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2637_ = lean_ctor_get_uint8(v___y_2520_, sizeof(void*)*7 + 2);
v_cacheInferType_2638_ = lean_ctor_get_uint8(v___y_2520_, sizeof(void*)*7 + 3);
v___x_2639_ = 3;
if (v_isShared_2628_ == 0)
{
v_config_2641_ = v___x_2627_;
goto v_reusejp_2640_;
}
else
{
lean_object* v_reuseFailAlloc_2661_; 
v_reuseFailAlloc_2661_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 0, v_foApprox_2608_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 1, v_ctxApprox_2609_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 2, v_quasiPatternApprox_2610_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 3, v_constApprox_2611_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 4, v_isDefEqStuckEx_2612_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 5, v_unificationHints_2613_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 6, v_proofIrrelevance_2614_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 7, v_assignSyntheticOpaque_2615_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 8, v_offsetCnstrs_2616_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 10, v_etaStruct_2617_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 11, v_univApprox_2618_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 12, v_iota_2619_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 13, v_beta_2620_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 14, v_proj_2621_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 15, v_zeta_2622_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 16, v_zetaDelta_2623_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 17, v_zetaUnused_2624_);
lean_ctor_set_uint8(v_reuseFailAlloc_2661_, 18, v_zetaHave_2625_);
v_config_2641_ = v_reuseFailAlloc_2661_;
goto v_reusejp_2640_;
}
v_reusejp_2640_:
{
uint64_t v___x_2642_; uint64_t v___x_2643_; uint64_t v___x_2644_; uint64_t v___x_2645_; uint64_t v___x_2646_; uint64_t v_key_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; 
lean_ctor_set_uint8(v_config_2641_, 9, v___x_2639_);
v___x_2642_ = l_Lean_Meta_Context_configKey(v___y_2520_);
v___x_2643_ = 2ULL;
v___x_2644_ = lean_uint64_shift_right(v___x_2642_, v___x_2643_);
v___x_2645_ = lean_uint64_shift_left(v___x_2644_, v___x_2643_);
v___x_2646_ = lean_uint64_once(&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonInst___closed__0, &l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonInst___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonInst___closed__0);
v_key_2647_ = lean_uint64_lor(v___x_2645_, v___x_2646_);
v___x_2648_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2648_, 0, v_config_2641_);
lean_ctor_set_uint64(v___x_2648_, sizeof(void*)*1, v_key_2647_);
lean_inc(v_canUnfold_x3f_2635_);
lean_inc(v_synthPendingDepth_2634_);
lean_inc(v_defEqCtx_x3f_2633_);
lean_inc_ref(v_localInstances_2632_);
lean_inc_ref(v_lctx_2631_);
lean_inc(v_zetaDeltaSet_2630_);
v___x_2649_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2649_, 0, v___x_2648_);
lean_ctor_set(v___x_2649_, 1, v_zetaDeltaSet_2630_);
lean_ctor_set(v___x_2649_, 2, v_lctx_2631_);
lean_ctor_set(v___x_2649_, 3, v_localInstances_2632_);
lean_ctor_set(v___x_2649_, 4, v_defEqCtx_x3f_2633_);
lean_ctor_set(v___x_2649_, 5, v_synthPendingDepth_2634_);
lean_ctor_set(v___x_2649_, 6, v_canUnfold_x3f_2635_);
lean_ctor_set_uint8(v___x_2649_, sizeof(void*)*7, v_trackZetaDelta_2629_);
lean_ctor_set_uint8(v___x_2649_, sizeof(void*)*7 + 1, v_univApprox_2636_);
lean_ctor_set_uint8(v___x_2649_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2637_);
lean_ctor_set_uint8(v___x_2649_, sizeof(void*)*7 + 3, v_cacheInferType_2638_);
lean_inc_ref(v___x_2505_);
lean_inc(v_a_2504_);
v___x_2650_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore(v_f_2509_, v_a_2504_, v___x_2505_, v___y_2507_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___x_2649_, v___y_2521_, v___y_2522_, v___y_2523_);
lean_dec_ref(v___x_2649_);
if (lean_obj_tag(v___x_2650_) == 0)
{
lean_object* v_a_2651_; 
v_a_2651_ = lean_ctor_get(v___x_2650_, 0);
lean_inc(v_a_2651_);
lean_dec_ref(v___x_2650_);
v_arg_x27_2526_ = v_a_2651_;
goto v___jp_2525_;
}
else
{
if (lean_obj_tag(v___x_2650_) == 0)
{
lean_object* v_a_2652_; 
v_a_2652_ = lean_ctor_get(v___x_2650_, 0);
lean_inc(v_a_2652_);
lean_dec_ref(v___x_2650_);
v_arg_x27_2526_ = v_a_2652_;
goto v___jp_2525_;
}
else
{
lean_object* v_a_2653_; lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2660_; 
lean_dec(v_fst_2508_);
lean_dec(v_snd_2506_);
lean_dec_ref(v___x_2505_);
lean_dec(v_a_2504_);
v_a_2653_ = lean_ctor_get(v___x_2650_, 0);
v_isSharedCheck_2660_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2660_ == 0)
{
v___x_2655_ = v___x_2650_;
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
else
{
lean_inc(v_a_2653_);
lean_dec(v___x_2650_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
lean_object* v___x_2658_; 
if (v_isShared_2656_ == 0)
{
v___x_2658_ = v___x_2655_;
goto v_reusejp_2657_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v_a_2653_);
v___x_2658_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2657_;
}
v_reusejp_2657_:
{
return v___x_2658_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; 
lean_dec_ref(v_f_2509_);
v___x_2663_ = l_Lean_Expr_appFn_x21(v___x_2505_);
v___x_2664_ = l_Lean_Expr_appArg_x21(v___x_2663_);
lean_inc_ref(v___x_2664_);
v___x_2665_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit(v___x_2664_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_);
if (lean_obj_tag(v___x_2665_) == 0)
{
lean_object* v_a_2666_; uint8_t v___x_2667_; 
v_a_2666_ = lean_ctor_get(v___x_2665_, 0);
lean_inc(v_a_2666_);
lean_dec_ref(v___x_2665_);
v___x_2667_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_2664_, v_a_2666_);
lean_dec_ref(v___x_2664_);
if (v___x_2667_ == 0)
{
lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
v___x_2668_ = l_Lean_Expr_appFn_x21(v___x_2663_);
lean_dec_ref(v___x_2663_);
v___x_2669_ = l_Lean_Expr_appArg_x21(v___x_2505_);
v___x_2670_ = l_Lean_mkAppB(v___x_2668_, v_a_2666_, v___x_2669_);
v_arg_x27_2526_ = v___x_2670_;
goto v___jp_2525_;
}
else
{
lean_dec(v_a_2666_);
lean_dec_ref(v___x_2663_);
lean_inc_ref(v___x_2505_);
v_arg_x27_2526_ = v___x_2505_;
goto v___jp_2525_;
}
}
else
{
lean_object* v_a_2671_; lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2678_; 
lean_dec_ref(v___x_2664_);
lean_dec_ref(v___x_2663_);
lean_dec(v_fst_2508_);
lean_dec(v_snd_2506_);
lean_dec_ref(v___x_2505_);
lean_dec(v_a_2504_);
v_a_2671_ = lean_ctor_get(v___x_2665_, 0);
v_isSharedCheck_2678_ = !lean_is_exclusive(v___x_2665_);
if (v_isSharedCheck_2678_ == 0)
{
v___x_2673_ = v___x_2665_;
v_isShared_2674_ = v_isSharedCheck_2678_;
goto v_resetjp_2672_;
}
else
{
lean_inc(v_a_2671_);
lean_dec(v___x_2665_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2678_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
lean_object* v___x_2676_; 
if (v_isShared_2674_ == 0)
{
v___x_2676_ = v___x_2673_;
goto v_reusejp_2675_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v_a_2671_);
v___x_2676_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2675_;
}
v_reusejp_2675_:
{
return v___x_2676_;
}
}
}
}
}
case 2:
{
lean_object* v___x_2679_; 
lean_inc_ref(v___x_2505_);
v___x_2679_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit(v___x_2505_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_);
if (lean_obj_tag(v___x_2679_) == 0)
{
lean_object* v_a_2680_; lean_object* v___x_2681_; uint8_t v_foApprox_2682_; uint8_t v_ctxApprox_2683_; uint8_t v_quasiPatternApprox_2684_; uint8_t v_constApprox_2685_; uint8_t v_isDefEqStuckEx_2686_; uint8_t v_unificationHints_2687_; uint8_t v_proofIrrelevance_2688_; uint8_t v_assignSyntheticOpaque_2689_; uint8_t v_offsetCnstrs_2690_; uint8_t v_etaStruct_2691_; uint8_t v_univApprox_2692_; uint8_t v_iota_2693_; uint8_t v_beta_2694_; uint8_t v_proj_2695_; uint8_t v_zeta_2696_; uint8_t v_zetaDelta_2697_; uint8_t v_zetaUnused_2698_; uint8_t v_zetaHave_2699_; lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2736_; 
v_a_2680_ = lean_ctor_get(v___x_2679_, 0);
lean_inc(v_a_2680_);
lean_dec_ref(v___x_2679_);
v___x_2681_ = l_Lean_Meta_Context_config(v___y_2520_);
v_foApprox_2682_ = lean_ctor_get_uint8(v___x_2681_, 0);
v_ctxApprox_2683_ = lean_ctor_get_uint8(v___x_2681_, 1);
v_quasiPatternApprox_2684_ = lean_ctor_get_uint8(v___x_2681_, 2);
v_constApprox_2685_ = lean_ctor_get_uint8(v___x_2681_, 3);
v_isDefEqStuckEx_2686_ = lean_ctor_get_uint8(v___x_2681_, 4);
v_unificationHints_2687_ = lean_ctor_get_uint8(v___x_2681_, 5);
v_proofIrrelevance_2688_ = lean_ctor_get_uint8(v___x_2681_, 6);
v_assignSyntheticOpaque_2689_ = lean_ctor_get_uint8(v___x_2681_, 7);
v_offsetCnstrs_2690_ = lean_ctor_get_uint8(v___x_2681_, 8);
v_etaStruct_2691_ = lean_ctor_get_uint8(v___x_2681_, 10);
v_univApprox_2692_ = lean_ctor_get_uint8(v___x_2681_, 11);
v_iota_2693_ = lean_ctor_get_uint8(v___x_2681_, 12);
v_beta_2694_ = lean_ctor_get_uint8(v___x_2681_, 13);
v_proj_2695_ = lean_ctor_get_uint8(v___x_2681_, 14);
v_zeta_2696_ = lean_ctor_get_uint8(v___x_2681_, 15);
v_zetaDelta_2697_ = lean_ctor_get_uint8(v___x_2681_, 16);
v_zetaUnused_2698_ = lean_ctor_get_uint8(v___x_2681_, 17);
v_zetaHave_2699_ = lean_ctor_get_uint8(v___x_2681_, 18);
v_isSharedCheck_2736_ = !lean_is_exclusive(v___x_2681_);
if (v_isSharedCheck_2736_ == 0)
{
v___x_2701_ = v___x_2681_;
v_isShared_2702_ = v_isSharedCheck_2736_;
goto v_resetjp_2700_;
}
else
{
lean_dec(v___x_2681_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2736_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
uint8_t v_trackZetaDelta_2703_; lean_object* v_zetaDeltaSet_2704_; lean_object* v_lctx_2705_; lean_object* v_localInstances_2706_; lean_object* v_defEqCtx_x3f_2707_; lean_object* v_synthPendingDepth_2708_; lean_object* v_canUnfold_x3f_2709_; uint8_t v_univApprox_2710_; uint8_t v_inTypeClassResolution_2711_; uint8_t v_cacheInferType_2712_; uint8_t v___x_2713_; lean_object* v_config_2715_; 
v_trackZetaDelta_2703_ = lean_ctor_get_uint8(v___y_2520_, sizeof(void*)*7);
v_zetaDeltaSet_2704_ = lean_ctor_get(v___y_2520_, 1);
v_lctx_2705_ = lean_ctor_get(v___y_2520_, 2);
v_localInstances_2706_ = lean_ctor_get(v___y_2520_, 3);
v_defEqCtx_x3f_2707_ = lean_ctor_get(v___y_2520_, 4);
v_synthPendingDepth_2708_ = lean_ctor_get(v___y_2520_, 5);
v_canUnfold_x3f_2709_ = lean_ctor_get(v___y_2520_, 6);
v_univApprox_2710_ = lean_ctor_get_uint8(v___y_2520_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2711_ = lean_ctor_get_uint8(v___y_2520_, sizeof(void*)*7 + 2);
v_cacheInferType_2712_ = lean_ctor_get_uint8(v___y_2520_, sizeof(void*)*7 + 3);
v___x_2713_ = 2;
if (v_isShared_2702_ == 0)
{
v_config_2715_ = v___x_2701_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_2735_, 0, v_foApprox_2682_);
lean_ctor_set_uint8(v_reuseFailAlloc_2735_, 1, v_ctxApprox_2683_);
lean_ctor_set_uint8(v_reuseFailAlloc_2735_, 2, v_quasiPatternApprox_2684_);
lean_ctor_set_uint8(v_reuseFailAlloc_2735_, 3, v_constApprox_2685_);
lean_ctor_set_uint8(v_reuseFailAlloc_2735_, 4, v_isDefEqStuckEx_2686_);
lean_ctor_set_uint8(v_reuseFailAlloc_2735_, 5, v_unificationHints_2687_);
lean_ctor_set_uint8(v_reuseFailAlloc_2735_, 6, v_proofIrrelevance_2688_);
lean_ctor_set_uint8(v_reuseFailAlloc_2735_, 7, v_assignSyntheticOpaque_2689_);
lean_ctor_set_uint8(v_reuseFailAlloc_2735_, 8, v_offsetCnstrs_2690_);
lean_ctor_set_uint8(v_reuseFailAlloc_2735_, 10, v_etaStruct_2691_);
lean_ctor_set_uint8(v_reuseFailAlloc_2735_, 11, v_univApprox_2692_);
lean_ctor_set_uint8(v_reuseFailAlloc_2735_, 12, v_iota_2693_);
lean_ctor_set_uint8(v_reuseFailAlloc_2735_, 13, v_beta_2694_);
lean_ctor_set_uint8(v_reuseFailAlloc_2735_, 14, v_proj_2695_);
lean_ctor_set_uint8(v_reuseFailAlloc_2735_, 15, v_zeta_2696_);
lean_ctor_set_uint8(v_reuseFailAlloc_2735_, 16, v_zetaDelta_2697_);
lean_ctor_set_uint8(v_reuseFailAlloc_2735_, 17, v_zetaUnused_2698_);
lean_ctor_set_uint8(v_reuseFailAlloc_2735_, 18, v_zetaHave_2699_);
v_config_2715_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
uint64_t v___x_2716_; uint64_t v___x_2717_; uint64_t v___x_2718_; uint64_t v___x_2719_; uint64_t v___x_2720_; uint64_t v_key_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; 
lean_ctor_set_uint8(v_config_2715_, 9, v___x_2713_);
v___x_2716_ = l_Lean_Meta_Context_configKey(v___y_2520_);
v___x_2717_ = 2ULL;
v___x_2718_ = lean_uint64_shift_right(v___x_2716_, v___x_2717_);
v___x_2719_ = lean_uint64_shift_left(v___x_2718_, v___x_2717_);
v___x_2720_ = lean_uint64_once(&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImplicit___closed__0, &l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImplicit___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImplicit___closed__0);
v_key_2721_ = lean_uint64_lor(v___x_2719_, v___x_2720_);
v___x_2722_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2722_, 0, v_config_2715_);
lean_ctor_set_uint64(v___x_2722_, sizeof(void*)*1, v_key_2721_);
lean_inc(v_canUnfold_x3f_2709_);
lean_inc(v_synthPendingDepth_2708_);
lean_inc(v_defEqCtx_x3f_2707_);
lean_inc_ref(v_localInstances_2706_);
lean_inc_ref(v_lctx_2705_);
lean_inc(v_zetaDeltaSet_2704_);
v___x_2723_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2723_, 0, v___x_2722_);
lean_ctor_set(v___x_2723_, 1, v_zetaDeltaSet_2704_);
lean_ctor_set(v___x_2723_, 2, v_lctx_2705_);
lean_ctor_set(v___x_2723_, 3, v_localInstances_2706_);
lean_ctor_set(v___x_2723_, 4, v_defEqCtx_x3f_2707_);
lean_ctor_set(v___x_2723_, 5, v_synthPendingDepth_2708_);
lean_ctor_set(v___x_2723_, 6, v_canUnfold_x3f_2709_);
lean_ctor_set_uint8(v___x_2723_, sizeof(void*)*7, v_trackZetaDelta_2703_);
lean_ctor_set_uint8(v___x_2723_, sizeof(void*)*7 + 1, v_univApprox_2710_);
lean_ctor_set_uint8(v___x_2723_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2711_);
lean_ctor_set_uint8(v___x_2723_, sizeof(void*)*7 + 3, v_cacheInferType_2712_);
lean_inc(v_a_2504_);
v___x_2724_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore(v_f_2509_, v_a_2504_, v_a_2680_, v___y_2510_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___x_2723_, v___y_2521_, v___y_2522_, v___y_2523_);
lean_dec_ref(v___x_2723_);
if (lean_obj_tag(v___x_2724_) == 0)
{
lean_object* v_a_2725_; 
v_a_2725_ = lean_ctor_get(v___x_2724_, 0);
lean_inc(v_a_2725_);
lean_dec_ref(v___x_2724_);
v_arg_x27_2526_ = v_a_2725_;
goto v___jp_2525_;
}
else
{
if (lean_obj_tag(v___x_2724_) == 0)
{
lean_object* v_a_2726_; 
v_a_2726_ = lean_ctor_get(v___x_2724_, 0);
lean_inc(v_a_2726_);
lean_dec_ref(v___x_2724_);
v_arg_x27_2526_ = v_a_2726_;
goto v___jp_2525_;
}
else
{
lean_object* v_a_2727_; lean_object* v___x_2729_; uint8_t v_isShared_2730_; uint8_t v_isSharedCheck_2734_; 
lean_dec(v_fst_2508_);
lean_dec(v_snd_2506_);
lean_dec_ref(v___x_2505_);
lean_dec(v_a_2504_);
v_a_2727_ = lean_ctor_get(v___x_2724_, 0);
v_isSharedCheck_2734_ = !lean_is_exclusive(v___x_2724_);
if (v_isSharedCheck_2734_ == 0)
{
v___x_2729_ = v___x_2724_;
v_isShared_2730_ = v_isSharedCheck_2734_;
goto v_resetjp_2728_;
}
else
{
lean_inc(v_a_2727_);
lean_dec(v___x_2724_);
v___x_2729_ = lean_box(0);
v_isShared_2730_ = v_isSharedCheck_2734_;
goto v_resetjp_2728_;
}
v_resetjp_2728_:
{
lean_object* v___x_2732_; 
if (v_isShared_2730_ == 0)
{
v___x_2732_ = v___x_2729_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v_a_2727_);
v___x_2732_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
return v___x_2732_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2737_; lean_object* v___x_2739_; uint8_t v_isShared_2740_; uint8_t v_isSharedCheck_2744_; 
lean_dec_ref(v_f_2509_);
lean_dec(v_fst_2508_);
lean_dec(v_snd_2506_);
lean_dec_ref(v___x_2505_);
lean_dec(v_a_2504_);
v_a_2737_ = lean_ctor_get(v___x_2679_, 0);
v_isSharedCheck_2744_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2739_ = v___x_2679_;
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
else
{
lean_inc(v_a_2737_);
lean_dec(v___x_2679_);
v___x_2739_ = lean_box(0);
v_isShared_2740_ = v_isSharedCheck_2744_;
goto v_resetjp_2738_;
}
v_resetjp_2738_:
{
lean_object* v___x_2742_; 
if (v_isShared_2740_ == 0)
{
v___x_2742_ = v___x_2739_;
goto v_reusejp_2741_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v_a_2737_);
v___x_2742_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2741_;
}
v_reusejp_2741_:
{
return v___x_2742_;
}
}
}
}
default: 
{
lean_object* v___x_2745_; 
lean_dec_ref(v_f_2509_);
lean_inc_ref(v___x_2505_);
v___x_2745_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit(v___x_2505_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_, v___y_2523_);
if (lean_obj_tag(v___x_2745_) == 0)
{
lean_object* v_a_2746_; 
v_a_2746_ = lean_ctor_get(v___x_2745_, 0);
lean_inc(v_a_2746_);
lean_dec_ref(v___x_2745_);
v_arg_x27_2526_ = v_a_2746_;
goto v___jp_2525_;
}
else
{
lean_object* v_a_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2754_; 
lean_dec(v_fst_2508_);
lean_dec(v_snd_2506_);
lean_dec_ref(v___x_2505_);
lean_dec(v_a_2504_);
v_a_2747_ = lean_ctor_get(v___x_2745_, 0);
v_isSharedCheck_2754_ = !lean_is_exclusive(v___x_2745_);
if (v_isSharedCheck_2754_ == 0)
{
v___x_2749_ = v___x_2745_;
v_isShared_2750_ = v_isSharedCheck_2754_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_a_2747_);
lean_dec(v___x_2745_);
v___x_2749_ = lean_box(0);
v_isShared_2750_ = v_isSharedCheck_2754_;
goto v_resetjp_2748_;
}
v_resetjp_2748_:
{
lean_object* v___x_2752_; 
if (v_isShared_2750_ == 0)
{
v___x_2752_ = v___x_2749_;
goto v_reusejp_2751_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v_a_2747_);
v___x_2752_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2751_;
}
v_reusejp_2751_:
{
return v___x_2752_;
}
}
}
}
}
}
else
{
lean_object* v_a_2755_; lean_object* v___x_2757_; uint8_t v_isShared_2758_; uint8_t v_isSharedCheck_2762_; 
lean_dec_ref(v_f_2509_);
lean_dec(v_fst_2508_);
lean_dec(v_snd_2506_);
lean_dec_ref(v___x_2505_);
lean_dec(v_a_2504_);
v_a_2755_ = lean_ctor_get(v___x_2536_, 0);
v_isSharedCheck_2762_ = !lean_is_exclusive(v___x_2536_);
if (v_isSharedCheck_2762_ == 0)
{
v___x_2757_ = v___x_2536_;
v_isShared_2758_ = v_isSharedCheck_2762_;
goto v_resetjp_2756_;
}
else
{
lean_inc(v_a_2755_);
lean_dec(v___x_2536_);
v___x_2757_ = lean_box(0);
v_isShared_2758_ = v_isSharedCheck_2762_;
goto v_resetjp_2756_;
}
v_resetjp_2756_:
{
lean_object* v___x_2760_; 
if (v_isShared_2758_ == 0)
{
v___x_2760_ = v___x_2757_;
goto v_reusejp_2759_;
}
else
{
lean_object* v_reuseFailAlloc_2761_; 
v_reuseFailAlloc_2761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2761_, 0, v_a_2755_);
v___x_2760_ = v_reuseFailAlloc_2761_;
goto v_reusejp_2759_;
}
v_reusejp_2759_:
{
return v___x_2760_;
}
}
}
v___jp_2525_:
{
uint8_t v___x_2527_; 
v___x_2527_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_2505_, v_arg_x27_2526_);
lean_dec_ref(v___x_2505_);
if (v___x_2527_ == 0)
{
lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; 
lean_dec(v_fst_2508_);
v___x_2528_ = lean_array_fset(v_snd_2506_, v_a_2504_, v_arg_x27_2526_);
lean_dec(v_a_2504_);
v___x_2529_ = lean_box(v___y_2507_);
v___x_2530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2530_, 0, v___x_2529_);
lean_ctor_set(v___x_2530_, 1, v___x_2528_);
v___x_2531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2531_, 0, v___x_2530_);
v___x_2532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2532_, 0, v___x_2531_);
return v___x_2532_;
}
else
{
lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; 
lean_dec_ref(v_arg_x27_2526_);
lean_dec(v_a_2504_);
v___x_2533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2533_, 0, v_fst_2508_);
lean_ctor_set(v___x_2533_, 1, v_snd_2506_);
v___x_2534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2534_, 0, v___x_2533_);
v___x_2535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2535_, 0, v___x_2534_);
return v___x_2535_;
}
}
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_2764_; lean_object* v___x_2765_; 
v___x_2764_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__4));
v___x_2765_ = l_Lean_stringToMessageData(v___x_2764_);
return v___x_2765_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__7(void){
_start:
{
lean_object* v___x_2767_; lean_object* v___x_2768_; 
v___x_2767_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__6));
v___x_2768_ = l_Lean_stringToMessageData(v___x_2767_);
return v___x_2768_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__9(void){
_start:
{
lean_object* v___x_2770_; lean_object* v___x_2771_; 
v___x_2770_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__8));
v___x_2771_ = l_Lean_stringToMessageData(v___x_2770_);
return v___x_2771_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg(lean_object* v_upperBound_2772_, uint8_t v___y_2773_, lean_object* v___x_2774_, lean_object* v_f_2775_, uint8_t v___y_2776_, lean_object* v_a_2777_, lean_object* v_b_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_){
_start:
{
lean_object* v___y_2792_; uint8_t v___x_2814_; 
v___x_2814_ = lean_nat_dec_lt(v_a_2777_, v_upperBound_2772_);
if (v___x_2814_ == 0)
{
lean_object* v___x_2815_; 
lean_dec(v_a_2777_);
lean_dec_ref(v_f_2775_);
v___x_2815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2815_, 0, v_b_2778_);
return v___x_2815_;
}
else
{
lean_object* v___x_2816_; lean_object* v___x_2817_; 
v___x_2816_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__3));
v___x_2817_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__2___redArg(v___x_2816_, v___y_2788_);
if (lean_obj_tag(v___x_2817_) == 0)
{
lean_object* v_a_2818_; lean_object* v_fst_2819_; lean_object* v_snd_2820_; lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2889_; 
v_a_2818_ = lean_ctor_get(v___x_2817_, 0);
lean_inc(v_a_2818_);
lean_dec_ref(v___x_2817_);
v_fst_2819_ = lean_ctor_get(v_b_2778_, 0);
v_snd_2820_ = lean_ctor_get(v_b_2778_, 1);
v_isSharedCheck_2889_ = !lean_is_exclusive(v_b_2778_);
if (v_isSharedCheck_2889_ == 0)
{
v___x_2822_ = v_b_2778_;
v_isShared_2823_ = v_isSharedCheck_2889_;
goto v_resetjp_2821_;
}
else
{
lean_inc(v_snd_2820_);
lean_inc(v_fst_2819_);
lean_dec(v_b_2778_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2889_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v___x_2824_; lean_object* v___x_2825_; uint8_t v___x_2826_; 
v___x_2824_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__3));
v___x_2825_ = lean_array_fget(v_snd_2820_, v_a_2777_);
v___x_2826_ = lean_unbox(v_a_2818_);
lean_dec(v_a_2818_);
if (v___x_2826_ == 0)
{
lean_object* v___x_2827_; lean_object* v___x_2828_; 
lean_del_object(v___x_2822_);
v___x_2827_ = lean_box(0);
lean_inc_ref(v_f_2775_);
lean_inc(v_a_2777_);
v___x_2828_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___lam__0(v___x_2774_, v_a_2777_, v___x_2825_, v_snd_2820_, v___y_2773_, v_fst_2819_, v_f_2775_, v___y_2776_, v___x_2824_, v___x_2827_, v___y_2779_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_);
v___y_2792_ = v___x_2828_;
goto v___jp_2791_;
}
else
{
lean_object* v___x_2829_; 
v___x_2829_ = l_Lean_Meta_Grind_updateLastTag(v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_);
if (lean_obj_tag(v___x_2829_) == 0)
{
lean_object* v___x_2830_; 
lean_dec_ref(v___x_2829_);
lean_inc(v___x_2825_);
v___x_2830_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_shouldCanon(v___x_2774_, v_a_2777_, v___x_2825_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_);
if (lean_obj_tag(v___x_2830_) == 0)
{
lean_object* v_a_2831_; lean_object* v___x_2832_; 
v_a_2831_ = lean_ctor_get(v___x_2830_, 0);
lean_inc(v_a_2831_);
lean_dec_ref(v___x_2830_);
lean_inc(v___y_2789_);
lean_inc_ref(v___y_2788_);
lean_inc(v___y_2787_);
lean_inc_ref(v___y_2786_);
lean_inc(v___x_2825_);
v___x_2832_ = lean_infer_type(v___x_2825_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_);
if (lean_obj_tag(v___x_2832_) == 0)
{
lean_object* v_a_2833_; lean_object* v___x_2834_; lean_object* v___y_2836_; uint8_t v___x_2860_; 
v_a_2833_ = lean_ctor_get(v___x_2832_, 0);
lean_inc(v_a_2833_);
lean_dec_ref(v___x_2832_);
v___x_2834_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__5);
v___x_2860_ = lean_unbox(v_a_2831_);
lean_dec(v_a_2831_);
switch(v___x_2860_)
{
case 0:
{
lean_object* v___x_2861_; 
v___x_2861_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__1));
v___y_2836_ = v___x_2861_;
goto v___jp_2835_;
}
case 1:
{
lean_object* v___x_2862_; 
v___x_2862_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__3));
v___y_2836_ = v___x_2862_;
goto v___jp_2835_;
}
case 2:
{
lean_object* v___x_2863_; 
v___x_2863_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__5));
v___y_2836_ = v___x_2863_;
goto v___jp_2835_;
}
default: 
{
lean_object* v___x_2864_; 
v___x_2864_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instReprShouldCanonResult___lam__0___closed__7));
v___y_2836_ = v___x_2864_;
goto v___jp_2835_;
}
}
v___jp_2835_:
{
lean_object* v___x_2837_; lean_object* v___x_2839_; 
lean_inc(v___y_2836_);
v___x_2837_ = l_Lean_MessageData_ofFormat(v___y_2836_);
if (v_isShared_2823_ == 0)
{
lean_ctor_set_tag(v___x_2822_, 7);
lean_ctor_set(v___x_2822_, 1, v___x_2837_);
lean_ctor_set(v___x_2822_, 0, v___x_2834_);
v___x_2839_ = v___x_2822_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2859_; 
v_reuseFailAlloc_2859_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2859_, 0, v___x_2834_);
lean_ctor_set(v_reuseFailAlloc_2859_, 1, v___x_2837_);
v___x_2839_ = v_reuseFailAlloc_2859_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; 
v___x_2840_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__7, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__7);
v___x_2841_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2841_, 0, v___x_2839_);
lean_ctor_set(v___x_2841_, 1, v___x_2840_);
lean_inc(v___x_2825_);
v___x_2842_ = l_Lean_MessageData_ofExpr(v___x_2825_);
v___x_2843_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2843_, 0, v___x_2841_);
lean_ctor_set(v___x_2843_, 1, v___x_2842_);
v___x_2844_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__9);
v___x_2845_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2845_, 0, v___x_2843_);
lean_ctor_set(v___x_2845_, 1, v___x_2844_);
v___x_2846_ = l_Lean_MessageData_ofExpr(v_a_2833_);
v___x_2847_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2847_, 0, v___x_2845_);
lean_ctor_set(v___x_2847_, 1, v___x_2846_);
v___x_2848_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__3___redArg(v___x_2816_, v___x_2847_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_);
if (lean_obj_tag(v___x_2848_) == 0)
{
lean_object* v_a_2849_; lean_object* v___x_2850_; 
v_a_2849_ = lean_ctor_get(v___x_2848_, 0);
lean_inc(v_a_2849_);
lean_dec_ref(v___x_2848_);
lean_inc_ref(v_f_2775_);
lean_inc(v_a_2777_);
v___x_2850_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___lam__0(v___x_2774_, v_a_2777_, v___x_2825_, v_snd_2820_, v___y_2773_, v_fst_2819_, v_f_2775_, v___y_2776_, v___x_2824_, v_a_2849_, v___y_2779_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_);
v___y_2792_ = v___x_2850_;
goto v___jp_2791_;
}
else
{
lean_object* v_a_2851_; lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2858_; 
lean_dec(v___x_2825_);
lean_dec(v_snd_2820_);
lean_dec(v_fst_2819_);
lean_dec(v_a_2777_);
lean_dec_ref(v_f_2775_);
v_a_2851_ = lean_ctor_get(v___x_2848_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2853_ = v___x_2848_;
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_a_2851_);
lean_dec(v___x_2848_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v___x_2856_; 
if (v_isShared_2854_ == 0)
{
v___x_2856_ = v___x_2853_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v_a_2851_);
v___x_2856_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
return v___x_2856_;
}
}
}
}
}
}
else
{
lean_object* v_a_2865_; lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2872_; 
lean_dec(v_a_2831_);
lean_dec(v___x_2825_);
lean_del_object(v___x_2822_);
lean_dec(v_snd_2820_);
lean_dec(v_fst_2819_);
lean_dec(v_a_2777_);
lean_dec_ref(v_f_2775_);
v_a_2865_ = lean_ctor_get(v___x_2832_, 0);
v_isSharedCheck_2872_ = !lean_is_exclusive(v___x_2832_);
if (v_isSharedCheck_2872_ == 0)
{
v___x_2867_ = v___x_2832_;
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
else
{
lean_inc(v_a_2865_);
lean_dec(v___x_2832_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v___x_2870_; 
if (v_isShared_2868_ == 0)
{
v___x_2870_ = v___x_2867_;
goto v_reusejp_2869_;
}
else
{
lean_object* v_reuseFailAlloc_2871_; 
v_reuseFailAlloc_2871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2871_, 0, v_a_2865_);
v___x_2870_ = v_reuseFailAlloc_2871_;
goto v_reusejp_2869_;
}
v_reusejp_2869_:
{
return v___x_2870_;
}
}
}
}
else
{
lean_object* v_a_2873_; lean_object* v___x_2875_; uint8_t v_isShared_2876_; uint8_t v_isSharedCheck_2880_; 
lean_dec(v___x_2825_);
lean_del_object(v___x_2822_);
lean_dec(v_snd_2820_);
lean_dec(v_fst_2819_);
lean_dec(v_a_2777_);
lean_dec_ref(v_f_2775_);
v_a_2873_ = lean_ctor_get(v___x_2830_, 0);
v_isSharedCheck_2880_ = !lean_is_exclusive(v___x_2830_);
if (v_isSharedCheck_2880_ == 0)
{
v___x_2875_ = v___x_2830_;
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
else
{
lean_inc(v_a_2873_);
lean_dec(v___x_2830_);
v___x_2875_ = lean_box(0);
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
v_resetjp_2874_:
{
lean_object* v___x_2878_; 
if (v_isShared_2876_ == 0)
{
v___x_2878_ = v___x_2875_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v_a_2873_);
v___x_2878_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
return v___x_2878_;
}
}
}
}
else
{
lean_object* v_a_2881_; lean_object* v___x_2883_; uint8_t v_isShared_2884_; uint8_t v_isSharedCheck_2888_; 
lean_dec(v___x_2825_);
lean_del_object(v___x_2822_);
lean_dec(v_snd_2820_);
lean_dec(v_fst_2819_);
lean_dec(v_a_2777_);
lean_dec_ref(v_f_2775_);
v_a_2881_ = lean_ctor_get(v___x_2829_, 0);
v_isSharedCheck_2888_ = !lean_is_exclusive(v___x_2829_);
if (v_isSharedCheck_2888_ == 0)
{
v___x_2883_ = v___x_2829_;
v_isShared_2884_ = v_isSharedCheck_2888_;
goto v_resetjp_2882_;
}
else
{
lean_inc(v_a_2881_);
lean_dec(v___x_2829_);
v___x_2883_ = lean_box(0);
v_isShared_2884_ = v_isSharedCheck_2888_;
goto v_resetjp_2882_;
}
v_resetjp_2882_:
{
lean_object* v___x_2886_; 
if (v_isShared_2884_ == 0)
{
v___x_2886_ = v___x_2883_;
goto v_reusejp_2885_;
}
else
{
lean_object* v_reuseFailAlloc_2887_; 
v_reuseFailAlloc_2887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2887_, 0, v_a_2881_);
v___x_2886_ = v_reuseFailAlloc_2887_;
goto v_reusejp_2885_;
}
v_reusejp_2885_:
{
return v___x_2886_;
}
}
}
}
}
}
else
{
lean_object* v_a_2890_; lean_object* v___x_2892_; uint8_t v_isShared_2893_; uint8_t v_isSharedCheck_2897_; 
lean_dec_ref(v_b_2778_);
lean_dec(v_a_2777_);
lean_dec_ref(v_f_2775_);
v_a_2890_ = lean_ctor_get(v___x_2817_, 0);
v_isSharedCheck_2897_ = !lean_is_exclusive(v___x_2817_);
if (v_isSharedCheck_2897_ == 0)
{
v___x_2892_ = v___x_2817_;
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
else
{
lean_inc(v_a_2890_);
lean_dec(v___x_2817_);
v___x_2892_ = lean_box(0);
v_isShared_2893_ = v_isSharedCheck_2897_;
goto v_resetjp_2891_;
}
v_resetjp_2891_:
{
lean_object* v___x_2895_; 
if (v_isShared_2893_ == 0)
{
v___x_2895_ = v___x_2892_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2896_; 
v_reuseFailAlloc_2896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2896_, 0, v_a_2890_);
v___x_2895_ = v_reuseFailAlloc_2896_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
return v___x_2895_;
}
}
}
}
v___jp_2791_:
{
if (lean_obj_tag(v___y_2792_) == 0)
{
lean_object* v_a_2793_; lean_object* v___x_2795_; uint8_t v_isShared_2796_; uint8_t v_isSharedCheck_2805_; 
v_a_2793_ = lean_ctor_get(v___y_2792_, 0);
v_isSharedCheck_2805_ = !lean_is_exclusive(v___y_2792_);
if (v_isSharedCheck_2805_ == 0)
{
v___x_2795_ = v___y_2792_;
v_isShared_2796_ = v_isSharedCheck_2805_;
goto v_resetjp_2794_;
}
else
{
lean_inc(v_a_2793_);
lean_dec(v___y_2792_);
v___x_2795_ = lean_box(0);
v_isShared_2796_ = v_isSharedCheck_2805_;
goto v_resetjp_2794_;
}
v_resetjp_2794_:
{
if (lean_obj_tag(v_a_2793_) == 0)
{
lean_object* v_a_2797_; lean_object* v___x_2799_; 
lean_dec(v_a_2777_);
lean_dec_ref(v_f_2775_);
v_a_2797_ = lean_ctor_get(v_a_2793_, 0);
lean_inc(v_a_2797_);
lean_dec_ref(v_a_2793_);
if (v_isShared_2796_ == 0)
{
lean_ctor_set(v___x_2795_, 0, v_a_2797_);
v___x_2799_ = v___x_2795_;
goto v_reusejp_2798_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v_a_2797_);
v___x_2799_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2798_;
}
v_reusejp_2798_:
{
return v___x_2799_;
}
}
else
{
lean_object* v_a_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; 
lean_del_object(v___x_2795_);
v_a_2801_ = lean_ctor_get(v_a_2793_, 0);
lean_inc(v_a_2801_);
lean_dec_ref(v_a_2793_);
v___x_2802_ = lean_unsigned_to_nat(1u);
v___x_2803_ = lean_nat_add(v_a_2777_, v___x_2802_);
lean_dec(v_a_2777_);
v_a_2777_ = v___x_2803_;
v_b_2778_ = v_a_2801_;
goto _start;
}
}
}
else
{
lean_object* v_a_2806_; lean_object* v___x_2808_; uint8_t v_isShared_2809_; uint8_t v_isSharedCheck_2813_; 
lean_dec(v_a_2777_);
lean_dec_ref(v_f_2775_);
v_a_2806_ = lean_ctor_get(v___y_2792_, 0);
v_isSharedCheck_2813_ = !lean_is_exclusive(v___y_2792_);
if (v_isSharedCheck_2813_ == 0)
{
v___x_2808_ = v___y_2792_;
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
else
{
lean_inc(v_a_2806_);
lean_dec(v___y_2792_);
v___x_2808_ = lean_box(0);
v_isShared_2809_ = v_isSharedCheck_2813_;
goto v_resetjp_2807_;
}
v_resetjp_2807_:
{
lean_object* v___x_2811_; 
if (v_isShared_2809_ == 0)
{
v___x_2811_ = v___x_2808_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2812_; 
v_reuseFailAlloc_2812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2812_, 0, v_a_2806_);
v___x_2811_ = v_reuseFailAlloc_2812_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
return v___x_2811_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5(lean_object* v_e_2903_, uint8_t v___y_2904_, lean_object* v_x_2905_, lean_object* v_x_2906_, lean_object* v_x_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_){
_start:
{
uint8_t v___y_2921_; lean_object* v_args_2922_; uint8_t v_modified_2923_; lean_object* v___y_2924_; lean_object* v___y_2925_; lean_object* v___y_2926_; lean_object* v___y_2927_; lean_object* v___y_2928_; lean_object* v___y_2929_; lean_object* v___y_2930_; lean_object* v___y_2931_; lean_object* v___y_2932_; lean_object* v___y_2933_; lean_object* v___y_2934_; uint8_t v___y_2983_; 
if (lean_obj_tag(v_x_2905_) == 5)
{
lean_object* v_fn_3015_; lean_object* v_arg_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; 
v_fn_3015_ = lean_ctor_get(v_x_2905_, 0);
lean_inc_ref(v_fn_3015_);
v_arg_3016_ = lean_ctor_get(v_x_2905_, 1);
lean_inc_ref(v_arg_3016_);
lean_dec_ref(v_x_2905_);
v___x_3017_ = lean_array_set(v_x_2906_, v_x_2907_, v_arg_3016_);
v___x_3018_ = lean_unsigned_to_nat(1u);
v___x_3019_ = lean_nat_sub(v_x_2907_, v___x_3018_);
lean_dec(v_x_2907_);
v_x_2905_ = v_fn_3015_;
v_x_2906_ = v___x_3017_;
v_x_2907_ = v___x_3019_;
goto _start;
}
else
{
uint8_t v___y_3022_; lean_object* v___x_3045_; uint8_t v___x_3046_; 
lean_dec(v_x_2907_);
v___x_3045_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___closed__1));
v___x_3046_ = l_Lean_Expr_isConstOf(v_x_2905_, v___x_3045_);
if (v___x_3046_ == 0)
{
v___y_3022_ = v___x_3046_;
goto v___jp_3021_;
}
else
{
lean_object* v___x_3047_; uint8_t v___x_3048_; 
v___x_3047_ = lean_box(0);
v___x_3048_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___lam__0(v_x_2906_, v___x_3047_);
v___y_3022_ = v___x_3048_;
goto v___jp_3021_;
}
v___jp_3021_:
{
if (v___y_3022_ == 0)
{
lean_object* v___x_3023_; uint8_t v___x_3024_; 
v___x_3023_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___closed__3));
v___x_3024_ = l_Lean_Expr_isConstOf(v_x_2905_, v___x_3023_);
if (v___x_3024_ == 0)
{
v___y_2983_ = v___x_3024_;
goto v___jp_2982_;
}
else
{
lean_object* v___x_3025_; uint8_t v___x_3026_; 
v___x_3025_ = lean_box(0);
v___x_3026_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___lam__0(v_x_2906_, v___x_3025_);
v___y_2983_ = v___x_3026_;
goto v___jp_2982_;
}
}
else
{
lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; 
v___x_3027_ = l_Lean_instInhabitedExpr;
v___x_3028_ = lean_unsigned_to_nat(0u);
v___x_3029_ = lean_array_get_borrowed(v___x_3027_, v_x_2906_, v___x_3028_);
lean_inc(v___x_3029_);
v___x_3030_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit(v___x_3029_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_);
if (lean_obj_tag(v___x_3030_) == 0)
{
lean_object* v_a_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3044_; 
v_a_3031_ = lean_ctor_get(v___x_3030_, 0);
v_isSharedCheck_3044_ = !lean_is_exclusive(v___x_3030_);
if (v_isSharedCheck_3044_ == 0)
{
v___x_3033_ = v___x_3030_;
v_isShared_3034_ = v_isSharedCheck_3044_;
goto v_resetjp_3032_;
}
else
{
lean_inc(v_a_3031_);
lean_dec(v___x_3030_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3044_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
uint8_t v___x_3035_; 
v___x_3035_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_3029_, v_a_3031_);
if (v___x_3035_ == 0)
{
lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3039_; 
lean_dec_ref(v_e_2903_);
v___x_3036_ = lean_array_set(v_x_2906_, v___x_3028_, v_a_3031_);
v___x_3037_ = l_Lean_mkAppN(v_x_2905_, v___x_3036_);
lean_dec_ref(v___x_3036_);
if (v_isShared_3034_ == 0)
{
lean_ctor_set(v___x_3033_, 0, v___x_3037_);
v___x_3039_ = v___x_3033_;
goto v_reusejp_3038_;
}
else
{
lean_object* v_reuseFailAlloc_3040_; 
v_reuseFailAlloc_3040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3040_, 0, v___x_3037_);
v___x_3039_ = v_reuseFailAlloc_3040_;
goto v_reusejp_3038_;
}
v_reusejp_3038_:
{
return v___x_3039_;
}
}
else
{
lean_object* v___x_3042_; 
lean_dec(v_a_3031_);
lean_dec_ref(v_x_2906_);
lean_dec_ref(v_x_2905_);
if (v_isShared_3034_ == 0)
{
lean_ctor_set(v___x_3033_, 0, v_e_2903_);
v___x_3042_ = v___x_3033_;
goto v_reusejp_3041_;
}
else
{
lean_object* v_reuseFailAlloc_3043_; 
v_reuseFailAlloc_3043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3043_, 0, v_e_2903_);
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
else
{
lean_dec_ref(v_x_2906_);
lean_dec_ref(v_x_2905_);
lean_dec_ref(v_e_2903_);
return v___x_3030_;
}
}
}
}
v___jp_2920_:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; 
v___x_2935_ = lean_box(0);
lean_inc_ref(v_x_2905_);
v___x_2936_ = l_Lean_Meta_getFunInfo(v_x_2905_, v___x_2935_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_);
if (lean_obj_tag(v___x_2936_) == 0)
{
lean_object* v_a_2937_; lean_object* v_paramInfo_2938_; lean_object* v___x_2940_; uint8_t v_isShared_2941_; uint8_t v_isSharedCheck_2972_; 
v_a_2937_ = lean_ctor_get(v___x_2936_, 0);
lean_inc(v_a_2937_);
lean_dec_ref(v___x_2936_);
v_paramInfo_2938_ = lean_ctor_get(v_a_2937_, 0);
v_isSharedCheck_2972_ = !lean_is_exclusive(v_a_2937_);
if (v_isSharedCheck_2972_ == 0)
{
lean_object* v_unused_2973_; 
v_unused_2973_ = lean_ctor_get(v_a_2937_, 1);
lean_dec(v_unused_2973_);
v___x_2940_ = v_a_2937_;
v_isShared_2941_ = v_isSharedCheck_2972_;
goto v_resetjp_2939_;
}
else
{
lean_inc(v_paramInfo_2938_);
lean_dec(v_a_2937_);
v___x_2940_ = lean_box(0);
v_isShared_2941_ = v_isSharedCheck_2972_;
goto v_resetjp_2939_;
}
v_resetjp_2939_:
{
lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2946_; 
v___x_2942_ = lean_array_get_size(v_args_2922_);
v___x_2943_ = lean_unsigned_to_nat(0u);
v___x_2944_ = lean_box(v_modified_2923_);
if (v_isShared_2941_ == 0)
{
lean_ctor_set(v___x_2940_, 1, v_args_2922_);
lean_ctor_set(v___x_2940_, 0, v___x_2944_);
v___x_2946_ = v___x_2940_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v___x_2944_);
lean_ctor_set(v_reuseFailAlloc_2971_, 1, v_args_2922_);
v___x_2946_ = v_reuseFailAlloc_2971_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
lean_object* v___x_2947_; 
lean_inc_ref(v_x_2905_);
v___x_2947_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg(v___x_2942_, v___y_2904_, v_paramInfo_2938_, v_x_2905_, v___y_2921_, v___x_2943_, v___x_2946_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_);
lean_dec_ref(v_paramInfo_2938_);
if (lean_obj_tag(v___x_2947_) == 0)
{
lean_object* v_a_2948_; lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_2962_; 
v_a_2948_ = lean_ctor_get(v___x_2947_, 0);
v_isSharedCheck_2962_ = !lean_is_exclusive(v___x_2947_);
if (v_isSharedCheck_2962_ == 0)
{
v___x_2950_ = v___x_2947_;
v_isShared_2951_ = v_isSharedCheck_2962_;
goto v_resetjp_2949_;
}
else
{
lean_inc(v_a_2948_);
lean_dec(v___x_2947_);
v___x_2950_ = lean_box(0);
v_isShared_2951_ = v_isSharedCheck_2962_;
goto v_resetjp_2949_;
}
v_resetjp_2949_:
{
lean_object* v_fst_2952_; uint8_t v___x_2953_; 
v_fst_2952_ = lean_ctor_get(v_a_2948_, 0);
v___x_2953_ = lean_unbox(v_fst_2952_);
if (v___x_2953_ == 0)
{
lean_object* v___x_2955_; 
lean_dec(v_a_2948_);
lean_dec_ref(v_x_2905_);
if (v_isShared_2951_ == 0)
{
lean_ctor_set(v___x_2950_, 0, v_e_2903_);
v___x_2955_ = v___x_2950_;
goto v_reusejp_2954_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v_e_2903_);
v___x_2955_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2954_;
}
v_reusejp_2954_:
{
return v___x_2955_;
}
}
else
{
lean_object* v_snd_2957_; lean_object* v___x_2958_; lean_object* v___x_2960_; 
lean_dec_ref(v_e_2903_);
v_snd_2957_ = lean_ctor_get(v_a_2948_, 1);
lean_inc(v_snd_2957_);
lean_dec(v_a_2948_);
v___x_2958_ = l_Lean_mkAppN(v_x_2905_, v_snd_2957_);
lean_dec(v_snd_2957_);
if (v_isShared_2951_ == 0)
{
lean_ctor_set(v___x_2950_, 0, v___x_2958_);
v___x_2960_ = v___x_2950_;
goto v_reusejp_2959_;
}
else
{
lean_object* v_reuseFailAlloc_2961_; 
v_reuseFailAlloc_2961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2961_, 0, v___x_2958_);
v___x_2960_ = v_reuseFailAlloc_2961_;
goto v_reusejp_2959_;
}
v_reusejp_2959_:
{
return v___x_2960_;
}
}
}
}
else
{
lean_object* v_a_2963_; lean_object* v___x_2965_; uint8_t v_isShared_2966_; uint8_t v_isSharedCheck_2970_; 
lean_dec_ref(v_x_2905_);
lean_dec_ref(v_e_2903_);
v_a_2963_ = lean_ctor_get(v___x_2947_, 0);
v_isSharedCheck_2970_ = !lean_is_exclusive(v___x_2947_);
if (v_isSharedCheck_2970_ == 0)
{
v___x_2965_ = v___x_2947_;
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
else
{
lean_inc(v_a_2963_);
lean_dec(v___x_2947_);
v___x_2965_ = lean_box(0);
v_isShared_2966_ = v_isSharedCheck_2970_;
goto v_resetjp_2964_;
}
v_resetjp_2964_:
{
lean_object* v___x_2968_; 
if (v_isShared_2966_ == 0)
{
v___x_2968_ = v___x_2965_;
goto v_reusejp_2967_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v_a_2963_);
v___x_2968_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2967_;
}
v_reusejp_2967_:
{
return v___x_2968_;
}
}
}
}
}
}
else
{
lean_object* v_a_2974_; lean_object* v___x_2976_; uint8_t v_isShared_2977_; uint8_t v_isSharedCheck_2981_; 
lean_dec_ref(v_args_2922_);
lean_dec_ref(v_x_2905_);
lean_dec_ref(v_e_2903_);
v_a_2974_ = lean_ctor_get(v___x_2936_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v___x_2936_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2976_ = v___x_2936_;
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
else
{
lean_inc(v_a_2974_);
lean_dec(v___x_2936_);
v___x_2976_ = lean_box(0);
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
v_resetjp_2975_:
{
lean_object* v___x_2979_; 
if (v_isShared_2977_ == 0)
{
v___x_2979_ = v___x_2976_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_a_2974_);
v___x_2979_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
return v___x_2979_;
}
}
}
}
v___jp_2982_:
{
if (v___y_2983_ == 0)
{
lean_object* v___x_2984_; uint8_t v___x_2985_; 
v___x_2984_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f___closed__6));
v___x_2985_ = l_Lean_Expr_isConstOf(v_x_2905_, v___x_2984_);
if (v___x_2985_ == 0)
{
v___y_2921_ = v___y_2983_;
v_args_2922_ = v_x_2906_;
v_modified_2923_ = v___y_2983_;
v___y_2924_ = v___y_2908_;
v___y_2925_ = v___y_2909_;
v___y_2926_ = v___y_2910_;
v___y_2927_ = v___y_2911_;
v___y_2928_ = v___y_2912_;
v___y_2929_ = v___y_2913_;
v___y_2930_ = v___y_2914_;
v___y_2931_ = v___y_2915_;
v___y_2932_ = v___y_2916_;
v___y_2933_ = v___y_2917_;
v___y_2934_ = v___y_2918_;
goto v___jp_2920_;
}
else
{
lean_object* v___x_2986_; 
lean_inc_ref(v_x_2906_);
v___x_2986_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_normOfNatArgs_x3f(v_x_2906_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_);
if (lean_obj_tag(v___x_2986_) == 0)
{
lean_object* v_a_2987_; 
v_a_2987_ = lean_ctor_get(v___x_2986_, 0);
lean_inc(v_a_2987_);
lean_dec_ref(v___x_2986_);
if (lean_obj_tag(v_a_2987_) == 1)
{
lean_object* v_val_2988_; 
lean_dec_ref(v_x_2906_);
v_val_2988_ = lean_ctor_get(v_a_2987_, 0);
lean_inc(v_val_2988_);
lean_dec_ref(v_a_2987_);
v___y_2921_ = v___y_2983_;
v_args_2922_ = v_val_2988_;
v_modified_2923_ = v___y_2904_;
v___y_2924_ = v___y_2908_;
v___y_2925_ = v___y_2909_;
v___y_2926_ = v___y_2910_;
v___y_2927_ = v___y_2911_;
v___y_2928_ = v___y_2912_;
v___y_2929_ = v___y_2913_;
v___y_2930_ = v___y_2914_;
v___y_2931_ = v___y_2915_;
v___y_2932_ = v___y_2916_;
v___y_2933_ = v___y_2917_;
v___y_2934_ = v___y_2918_;
goto v___jp_2920_;
}
else
{
lean_dec(v_a_2987_);
v___y_2921_ = v___y_2983_;
v_args_2922_ = v_x_2906_;
v_modified_2923_ = v___y_2983_;
v___y_2924_ = v___y_2908_;
v___y_2925_ = v___y_2909_;
v___y_2926_ = v___y_2910_;
v___y_2927_ = v___y_2911_;
v___y_2928_ = v___y_2912_;
v___y_2929_ = v___y_2913_;
v___y_2930_ = v___y_2914_;
v___y_2931_ = v___y_2915_;
v___y_2932_ = v___y_2916_;
v___y_2933_ = v___y_2917_;
v___y_2934_ = v___y_2918_;
goto v___jp_2920_;
}
}
else
{
lean_object* v_a_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_2996_; 
lean_dec_ref(v_x_2906_);
lean_dec_ref(v_x_2905_);
lean_dec_ref(v_e_2903_);
v_a_2989_ = lean_ctor_get(v___x_2986_, 0);
v_isSharedCheck_2996_ = !lean_is_exclusive(v___x_2986_);
if (v_isSharedCheck_2996_ == 0)
{
v___x_2991_ = v___x_2986_;
v_isShared_2992_ = v_isSharedCheck_2996_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_a_2989_);
lean_dec(v___x_2986_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_2996_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
lean_object* v___x_2994_; 
if (v_isShared_2992_ == 0)
{
v___x_2994_ = v___x_2991_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v_a_2989_);
v___x_2994_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
return v___x_2994_;
}
}
}
}
}
else
{
lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; 
v___x_2997_ = l_Lean_instInhabitedExpr;
v___x_2998_ = lean_unsigned_to_nat(0u);
v___x_2999_ = lean_array_get_borrowed(v___x_2997_, v_x_2906_, v___x_2998_);
lean_inc(v___x_2999_);
v___x_3000_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit(v___x_2999_, v___y_2908_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_);
if (lean_obj_tag(v___x_3000_) == 0)
{
lean_object* v_a_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3014_; 
v_a_3001_ = lean_ctor_get(v___x_3000_, 0);
v_isSharedCheck_3014_ = !lean_is_exclusive(v___x_3000_);
if (v_isSharedCheck_3014_ == 0)
{
v___x_3003_ = v___x_3000_;
v_isShared_3004_ = v_isSharedCheck_3014_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_a_3001_);
lean_dec(v___x_3000_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3014_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
uint8_t v___x_3005_; 
v___x_3005_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v___x_2999_, v_a_3001_);
if (v___x_3005_ == 0)
{
lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3009_; 
lean_dec_ref(v_e_2903_);
v___x_3006_ = lean_array_set(v_x_2906_, v___x_2998_, v_a_3001_);
v___x_3007_ = l_Lean_mkAppN(v_x_2905_, v___x_3006_);
lean_dec_ref(v___x_3006_);
if (v_isShared_3004_ == 0)
{
lean_ctor_set(v___x_3003_, 0, v___x_3007_);
v___x_3009_ = v___x_3003_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v___x_3007_);
v___x_3009_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
return v___x_3009_;
}
}
else
{
lean_object* v___x_3012_; 
lean_dec(v_a_3001_);
lean_dec_ref(v_x_2906_);
lean_dec_ref(v_x_2905_);
if (v_isShared_3004_ == 0)
{
lean_ctor_set(v___x_3003_, 0, v_e_2903_);
v___x_3012_ = v___x_3003_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v_e_2903_);
v___x_3012_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
return v___x_3012_;
}
}
}
}
else
{
lean_dec_ref(v_x_2906_);
lean_dec_ref(v_x_2905_);
lean_dec_ref(v_e_2903_);
return v___x_3000_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit(lean_object* v_e_3049_, lean_object* v_a_3050_, lean_object* v_a_3051_, lean_object* v_a_3052_, lean_object* v_a_3053_, lean_object* v_a_3054_, lean_object* v_a_3055_, lean_object* v_a_3056_, lean_object* v_a_3057_, lean_object* v_a_3058_, lean_object* v_a_3059_, lean_object* v_a_3060_){
_start:
{
lean_object* v_e_x27_3063_; lean_object* v___y_3064_; lean_object* v___y_3070_; lean_object* v___y_3071_; lean_object* v___y_3072_; uint8_t v___y_3073_; lean_object* v___y_3074_; uint8_t v___y_3075_; lean_object* v___y_3080_; lean_object* v___y_3081_; lean_object* v___y_3082_; uint8_t v___y_3083_; lean_object* v___y_3084_; lean_object* v_b_x27_3085_; lean_object* v___y_3086_; uint8_t v___y_3094_; uint8_t v___x_3125_; 
v___x_3125_ = l_Lean_Expr_isApp(v_e_3049_);
if (v___x_3125_ == 0)
{
uint8_t v___x_3126_; 
v___x_3126_ = l_Lean_Expr_isForall(v_e_3049_);
v___y_3094_ = v___x_3126_;
goto v___jp_3093_;
}
else
{
v___y_3094_ = v___x_3125_;
goto v___jp_3093_;
}
v___jp_3062_:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; 
v___x_3065_ = lean_st_ref_take(v___y_3064_);
lean_inc_ref(v_e_x27_3063_);
v___x_3066_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0___redArg(v___x_3065_, v_e_3049_, v_e_x27_3063_);
v___x_3067_ = lean_st_ref_set(v___y_3064_, v___x_3066_);
v___x_3068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3068_, 0, v_e_x27_3063_);
return v___x_3068_;
}
v___jp_3069_:
{
if (v___y_3075_ == 0)
{
lean_object* v___x_3076_; 
v___x_3076_ = l_Lean_Expr_forallE___override(v___y_3072_, v___y_3074_, v___y_3071_, v___y_3073_);
v_e_x27_3063_ = v___x_3076_;
v___y_3064_ = v___y_3070_;
goto v___jp_3062_;
}
else
{
uint8_t v___x_3077_; 
v___x_3077_ = l_Lean_instBEqBinderInfo_beq(v___y_3073_, v___y_3073_);
if (v___x_3077_ == 0)
{
lean_object* v___x_3078_; 
v___x_3078_ = l_Lean_Expr_forallE___override(v___y_3072_, v___y_3074_, v___y_3071_, v___y_3073_);
v_e_x27_3063_ = v___x_3078_;
v___y_3064_ = v___y_3070_;
goto v___jp_3062_;
}
else
{
lean_dec_ref(v___y_3074_);
lean_dec(v___y_3072_);
lean_dec_ref(v___y_3071_);
lean_inc_ref(v_e_3049_);
v_e_x27_3063_ = v_e_3049_;
v___y_3064_ = v___y_3070_;
goto v___jp_3062_;
}
}
}
v___jp_3079_:
{
size_t v___x_3087_; size_t v___x_3088_; uint8_t v___x_3089_; 
v___x_3087_ = lean_ptr_addr(v___y_3082_);
lean_dec_ref(v___y_3082_);
v___x_3088_ = lean_ptr_addr(v___y_3084_);
v___x_3089_ = lean_usize_dec_eq(v___x_3087_, v___x_3088_);
if (v___x_3089_ == 0)
{
lean_dec_ref(v___y_3080_);
v___y_3070_ = v___y_3086_;
v___y_3071_ = v_b_x27_3085_;
v___y_3072_ = v___y_3081_;
v___y_3073_ = v___y_3083_;
v___y_3074_ = v___y_3084_;
v___y_3075_ = v___x_3089_;
goto v___jp_3069_;
}
else
{
size_t v___x_3090_; size_t v___x_3091_; uint8_t v___x_3092_; 
v___x_3090_ = lean_ptr_addr(v___y_3080_);
lean_dec_ref(v___y_3080_);
v___x_3091_ = lean_ptr_addr(v_b_x27_3085_);
v___x_3092_ = lean_usize_dec_eq(v___x_3090_, v___x_3091_);
v___y_3070_ = v___y_3086_;
v___y_3071_ = v_b_x27_3085_;
v___y_3072_ = v___y_3081_;
v___y_3073_ = v___y_3083_;
v___y_3074_ = v___y_3084_;
v___y_3075_ = v___x_3092_;
goto v___jp_3069_;
}
}
v___jp_3093_:
{
if (v___y_3094_ == 0)
{
lean_object* v___x_3095_; 
v___x_3095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3095_, 0, v_e_3049_);
return v___x_3095_;
}
else
{
lean_object* v___x_3096_; lean_object* v___x_3097_; 
v___x_3096_ = lean_st_ref_get(v_a_3050_);
v___x_3097_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1___redArg(v___x_3096_, v_e_3049_);
lean_dec(v___x_3096_);
if (lean_obj_tag(v___x_3097_) == 1)
{
lean_object* v_val_3098_; lean_object* v___x_3100_; uint8_t v_isShared_3101_; uint8_t v_isSharedCheck_3105_; 
lean_dec_ref(v_e_3049_);
v_val_3098_ = lean_ctor_get(v___x_3097_, 0);
v_isSharedCheck_3105_ = !lean_is_exclusive(v___x_3097_);
if (v_isSharedCheck_3105_ == 0)
{
v___x_3100_ = v___x_3097_;
v_isShared_3101_ = v_isSharedCheck_3105_;
goto v_resetjp_3099_;
}
else
{
lean_inc(v_val_3098_);
lean_dec(v___x_3097_);
v___x_3100_ = lean_box(0);
v_isShared_3101_ = v_isSharedCheck_3105_;
goto v_resetjp_3099_;
}
v_resetjp_3099_:
{
lean_object* v___x_3103_; 
if (v_isShared_3101_ == 0)
{
lean_ctor_set_tag(v___x_3100_, 0);
v___x_3103_ = v___x_3100_;
goto v_reusejp_3102_;
}
else
{
lean_object* v_reuseFailAlloc_3104_; 
v_reuseFailAlloc_3104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3104_, 0, v_val_3098_);
v___x_3103_ = v_reuseFailAlloc_3104_;
goto v_reusejp_3102_;
}
v_reusejp_3102_:
{
return v___x_3103_;
}
}
}
else
{
lean_dec(v___x_3097_);
switch(lean_obj_tag(v_e_3049_))
{
case 5:
{
lean_object* v_dummy_3106_; lean_object* v_nargs_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; 
v_dummy_3106_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__0, &l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__0);
v_nargs_3107_ = l_Lean_Expr_getAppNumArgs(v_e_3049_);
lean_inc(v_nargs_3107_);
v___x_3108_ = lean_mk_array(v_nargs_3107_, v_dummy_3106_);
v___x_3109_ = lean_unsigned_to_nat(1u);
v___x_3110_ = lean_nat_sub(v_nargs_3107_, v___x_3109_);
lean_dec(v_nargs_3107_);
lean_inc_ref_n(v_e_3049_, 2);
v___x_3111_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5(v_e_3049_, v___y_3094_, v_e_3049_, v___x_3108_, v___x_3110_, v_a_3050_, v_a_3051_, v_a_3052_, v_a_3053_, v_a_3054_, v_a_3055_, v_a_3056_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_);
if (lean_obj_tag(v___x_3111_) == 0)
{
lean_object* v_a_3112_; 
v_a_3112_ = lean_ctor_get(v___x_3111_, 0);
lean_inc(v_a_3112_);
lean_dec_ref(v___x_3111_);
v_e_x27_3063_ = v_a_3112_;
v___y_3064_ = v_a_3050_;
goto v___jp_3062_;
}
else
{
lean_dec_ref(v_e_3049_);
return v___x_3111_;
}
}
case 7:
{
lean_object* v_binderName_3113_; lean_object* v_binderType_3114_; lean_object* v_body_3115_; uint8_t v_binderInfo_3116_; lean_object* v___x_3117_; 
v_binderName_3113_ = lean_ctor_get(v_e_3049_, 0);
v_binderType_3114_ = lean_ctor_get(v_e_3049_, 1);
v_body_3115_ = lean_ctor_get(v_e_3049_, 2);
v_binderInfo_3116_ = lean_ctor_get_uint8(v_e_3049_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_3114_);
v___x_3117_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit(v_binderType_3114_, v_a_3050_, v_a_3051_, v_a_3052_, v_a_3053_, v_a_3054_, v_a_3055_, v_a_3056_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_);
if (lean_obj_tag(v___x_3117_) == 0)
{
lean_object* v_a_3118_; uint8_t v___x_3119_; 
v_a_3118_ = lean_ctor_get(v___x_3117_, 0);
lean_inc(v_a_3118_);
lean_dec_ref(v___x_3117_);
v___x_3119_ = l_Lean_Expr_hasLooseBVars(v_body_3115_);
if (v___x_3119_ == 0)
{
lean_object* v___x_3120_; 
lean_inc_ref(v_body_3115_);
v___x_3120_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit(v_body_3115_, v_a_3050_, v_a_3051_, v_a_3052_, v_a_3053_, v_a_3054_, v_a_3055_, v_a_3056_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_);
if (lean_obj_tag(v___x_3120_) == 0)
{
lean_object* v_a_3121_; 
v_a_3121_ = lean_ctor_get(v___x_3120_, 0);
lean_inc(v_a_3121_);
lean_dec_ref(v___x_3120_);
lean_inc_ref(v_binderType_3114_);
lean_inc(v_binderName_3113_);
lean_inc_ref(v_body_3115_);
v___y_3080_ = v_body_3115_;
v___y_3081_ = v_binderName_3113_;
v___y_3082_ = v_binderType_3114_;
v___y_3083_ = v_binderInfo_3116_;
v___y_3084_ = v_a_3118_;
v_b_x27_3085_ = v_a_3121_;
v___y_3086_ = v_a_3050_;
goto v___jp_3079_;
}
else
{
lean_dec(v_a_3118_);
lean_dec_ref(v_e_3049_);
return v___x_3120_;
}
}
else
{
lean_inc_ref(v_binderType_3114_);
lean_inc(v_binderName_3113_);
lean_inc_ref_n(v_body_3115_, 2);
v___y_3080_ = v_body_3115_;
v___y_3081_ = v_binderName_3113_;
v___y_3082_ = v_binderType_3114_;
v___y_3083_ = v_binderInfo_3116_;
v___y_3084_ = v_a_3118_;
v_b_x27_3085_ = v_body_3115_;
v___y_3086_ = v_a_3050_;
goto v___jp_3079_;
}
}
else
{
lean_dec_ref(v_e_3049_);
return v___x_3117_;
}
}
default: 
{
lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3122_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__4, &l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___closed__4);
v___x_3123_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__6(v___x_3122_, v_a_3050_, v_a_3051_, v_a_3052_, v_a_3053_, v_a_3054_, v_a_3055_, v_a_3056_, v_a_3057_, v_a_3058_, v_a_3059_, v_a_3060_);
if (lean_obj_tag(v___x_3123_) == 0)
{
lean_object* v_a_3124_; 
v_a_3124_ = lean_ctor_get(v___x_3123_, 0);
lean_inc(v_a_3124_);
lean_dec_ref(v___x_3123_);
v_e_x27_3063_ = v_a_3124_;
v___y_3064_ = v_a_3050_;
goto v___jp_3062_;
}
else
{
lean_dec_ref(v_e_3049_);
return v___x_3123_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit___boxed(lean_object* v_e_3127_, lean_object* v_a_3128_, lean_object* v_a_3129_, lean_object* v_a_3130_, lean_object* v_a_3131_, lean_object* v_a_3132_, lean_object* v_a_3133_, lean_object* v_a_3134_, lean_object* v_a_3135_, lean_object* v_a_3136_, lean_object* v_a_3137_, lean_object* v_a_3138_, lean_object* v_a_3139_){
_start:
{
lean_object* v_res_3140_; 
v_res_3140_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit(v_e_3127_, v_a_3128_, v_a_3129_, v_a_3130_, v_a_3131_, v_a_3132_, v_a_3133_, v_a_3134_, v_a_3135_, v_a_3136_, v_a_3137_, v_a_3138_);
lean_dec(v_a_3138_);
lean_dec_ref(v_a_3137_);
lean_dec(v_a_3136_);
lean_dec_ref(v_a_3135_);
lean_dec(v_a_3134_);
lean_dec_ref(v_a_3133_);
lean_dec(v_a_3132_);
lean_dec_ref(v_a_3131_);
lean_dec(v_a_3130_);
lean_dec(v_a_3129_);
lean_dec(v_a_3128_);
return v_res_3140_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_3141_ = _args[0];
lean_object* v___y_3142_ = _args[1];
lean_object* v___x_3143_ = _args[2];
lean_object* v_f_3144_ = _args[3];
lean_object* v___y_3145_ = _args[4];
lean_object* v_a_3146_ = _args[5];
lean_object* v_b_3147_ = _args[6];
lean_object* v___y_3148_ = _args[7];
lean_object* v___y_3149_ = _args[8];
lean_object* v___y_3150_ = _args[9];
lean_object* v___y_3151_ = _args[10];
lean_object* v___y_3152_ = _args[11];
lean_object* v___y_3153_ = _args[12];
lean_object* v___y_3154_ = _args[13];
lean_object* v___y_3155_ = _args[14];
lean_object* v___y_3156_ = _args[15];
lean_object* v___y_3157_ = _args[16];
lean_object* v___y_3158_ = _args[17];
lean_object* v___y_3159_ = _args[18];
_start:
{
uint8_t v___y_136858__boxed_3160_; uint8_t v___y_136860__boxed_3161_; lean_object* v_res_3162_; 
v___y_136858__boxed_3160_ = lean_unbox(v___y_3142_);
v___y_136860__boxed_3161_ = lean_unbox(v___y_3145_);
v_res_3162_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg(v_upperBound_3141_, v___y_136858__boxed_3160_, v___x_3143_, v_f_3144_, v___y_136860__boxed_3161_, v_a_3146_, v_b_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_, v___y_3156_, v___y_3157_, v___y_3158_);
lean_dec(v___y_3158_);
lean_dec_ref(v___y_3157_);
lean_dec(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec(v___y_3154_);
lean_dec_ref(v___y_3153_);
lean_dec(v___y_3152_);
lean_dec_ref(v___y_3151_);
lean_dec(v___y_3150_);
lean_dec(v___y_3149_);
lean_dec(v___y_3148_);
lean_dec_ref(v___x_3143_);
lean_dec(v_upperBound_3141_);
return v_res_3162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5___boxed(lean_object** _args){
lean_object* v_e_3163_ = _args[0];
lean_object* v___y_3164_ = _args[1];
lean_object* v_x_3165_ = _args[2];
lean_object* v_x_3166_ = _args[3];
lean_object* v_x_3167_ = _args[4];
lean_object* v___y_3168_ = _args[5];
lean_object* v___y_3169_ = _args[6];
lean_object* v___y_3170_ = _args[7];
lean_object* v___y_3171_ = _args[8];
lean_object* v___y_3172_ = _args[9];
lean_object* v___y_3173_ = _args[10];
lean_object* v___y_3174_ = _args[11];
lean_object* v___y_3175_ = _args[12];
lean_object* v___y_3176_ = _args[13];
lean_object* v___y_3177_ = _args[14];
lean_object* v___y_3178_ = _args[15];
lean_object* v___y_3179_ = _args[16];
_start:
{
uint8_t v___y_136934__boxed_3180_; lean_object* v_res_3181_; 
v___y_136934__boxed_3180_ = lean_unbox(v___y_3164_);
v_res_3181_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__5(v_e_3163_, v___y_136934__boxed_3180_, v_x_3165_, v_x_3166_, v_x_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_, v___y_3176_, v___y_3177_, v___y_3178_);
lean_dec(v___y_3178_);
lean_dec_ref(v___y_3177_);
lean_dec(v___y_3176_);
lean_dec_ref(v___y_3175_);
lean_dec(v___y_3174_);
lean_dec_ref(v___y_3173_);
lean_dec(v___y_3172_);
lean_dec_ref(v___y_3171_);
lean_dec(v___y_3170_);
lean_dec(v___y_3169_);
lean_dec(v___y_3168_);
return v_res_3181_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_3182_ = _args[0];
lean_object* v_a_3183_ = _args[1];
lean_object* v___x_3184_ = _args[2];
lean_object* v_snd_3185_ = _args[3];
lean_object* v___y_3186_ = _args[4];
lean_object* v_fst_3187_ = _args[5];
lean_object* v_f_3188_ = _args[6];
lean_object* v___y_3189_ = _args[7];
lean_object* v___x_3190_ = _args[8];
lean_object* v_____r_3191_ = _args[9];
lean_object* v___y_3192_ = _args[10];
lean_object* v___y_3193_ = _args[11];
lean_object* v___y_3194_ = _args[12];
lean_object* v___y_3195_ = _args[13];
lean_object* v___y_3196_ = _args[14];
lean_object* v___y_3197_ = _args[15];
lean_object* v___y_3198_ = _args[16];
lean_object* v___y_3199_ = _args[17];
lean_object* v___y_3200_ = _args[18];
lean_object* v___y_3201_ = _args[19];
lean_object* v___y_3202_ = _args[20];
lean_object* v___y_3203_ = _args[21];
_start:
{
uint8_t v___y_137027__boxed_3204_; uint8_t v___y_137028__boxed_3205_; lean_object* v_res_3206_; 
v___y_137027__boxed_3204_ = lean_unbox(v___y_3186_);
v___y_137028__boxed_3205_ = lean_unbox(v___y_3189_);
v_res_3206_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg___lam__0(v___x_3182_, v_a_3183_, v___x_3184_, v_snd_3185_, v___y_137027__boxed_3204_, v_fst_3187_, v_f_3188_, v___y_137028__boxed_3205_, v___x_3190_, v_____r_3191_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_);
lean_dec(v___y_3202_);
lean_dec_ref(v___y_3201_);
lean_dec(v___y_3200_);
lean_dec_ref(v___y_3199_);
lean_dec(v___y_3198_);
lean_dec_ref(v___y_3197_);
lean_dec(v___y_3196_);
lean_dec_ref(v___y_3195_);
lean_dec(v___y_3194_);
lean_dec(v___y_3193_);
lean_dec(v___y_3192_);
lean_dec(v___x_3190_);
lean_dec_ref(v___x_3182_);
return v_res_3206_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0(lean_object* v_00_u03b2_3207_, lean_object* v_m_3208_, lean_object* v_a_3209_, lean_object* v_b_3210_){
_start:
{
lean_object* v___x_3211_; 
v___x_3211_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0___redArg(v_m_3208_, v_a_3209_, v_b_3210_);
return v___x_3211_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1(lean_object* v_00_u03b2_3212_, lean_object* v_m_3213_, lean_object* v_a_3214_){
_start:
{
lean_object* v___x_3215_; 
v___x_3215_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1___redArg(v_m_3213_, v_a_3214_);
return v___x_3215_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1___boxed(lean_object* v_00_u03b2_3216_, lean_object* v_m_3217_, lean_object* v_a_3218_){
_start:
{
lean_object* v_res_3219_; 
v_res_3219_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1(v_00_u03b2_3216_, v_m_3217_, v_a_3218_);
lean_dec_ref(v_a_3218_);
lean_dec_ref(v_m_3217_);
return v_res_3219_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__3(lean_object* v_cls_3220_, lean_object* v_msg_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_){
_start:
{
lean_object* v___x_3234_; 
v___x_3234_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__3___redArg(v_cls_3220_, v_msg_3221_, v___y_3229_, v___y_3230_, v___y_3231_, v___y_3232_);
return v___x_3234_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__3___boxed(lean_object* v_cls_3235_, lean_object* v_msg_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_, lean_object* v___y_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_){
_start:
{
lean_object* v_res_3249_; 
v_res_3249_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__3(v_cls_3235_, v_msg_3236_, v___y_3237_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_, v___y_3244_, v___y_3245_, v___y_3246_, v___y_3247_);
lean_dec(v___y_3247_);
lean_dec_ref(v___y_3246_);
lean_dec(v___y_3245_);
lean_dec_ref(v___y_3244_);
lean_dec(v___y_3243_);
lean_dec_ref(v___y_3242_);
lean_dec(v___y_3241_);
lean_dec_ref(v___y_3240_);
lean_dec(v___y_3239_);
lean_dec(v___y_3238_);
lean_dec(v___y_3237_);
return v_res_3249_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4(lean_object* v_upperBound_3250_, lean_object* v___x_3251_, uint8_t v___y_3252_, lean_object* v___x_3253_, lean_object* v_f_3254_, uint8_t v___y_3255_, lean_object* v_inst_3256_, lean_object* v_R_3257_, lean_object* v_a_3258_, lean_object* v_b_3259_, lean_object* v_c_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_, lean_object* v___y_3271_){
_start:
{
lean_object* v___x_3273_; 
v___x_3273_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___redArg(v_upperBound_3250_, v___y_3252_, v___x_3253_, v_f_3254_, v___y_3255_, v_a_3258_, v_b_3259_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_, v___y_3271_);
return v___x_3273_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4___boxed(lean_object** _args){
lean_object* v_upperBound_3274_ = _args[0];
lean_object* v___x_3275_ = _args[1];
lean_object* v___y_3276_ = _args[2];
lean_object* v___x_3277_ = _args[3];
lean_object* v_f_3278_ = _args[4];
lean_object* v___y_3279_ = _args[5];
lean_object* v_inst_3280_ = _args[6];
lean_object* v_R_3281_ = _args[7];
lean_object* v_a_3282_ = _args[8];
lean_object* v_b_3283_ = _args[9];
lean_object* v_c_3284_ = _args[10];
lean_object* v___y_3285_ = _args[11];
lean_object* v___y_3286_ = _args[12];
lean_object* v___y_3287_ = _args[13];
lean_object* v___y_3288_ = _args[14];
lean_object* v___y_3289_ = _args[15];
lean_object* v___y_3290_ = _args[16];
lean_object* v___y_3291_ = _args[17];
lean_object* v___y_3292_ = _args[18];
lean_object* v___y_3293_ = _args[19];
lean_object* v___y_3294_ = _args[20];
lean_object* v___y_3295_ = _args[21];
lean_object* v___y_3296_ = _args[22];
_start:
{
uint8_t v___y_137911__boxed_3297_; uint8_t v___y_137913__boxed_3298_; lean_object* v_res_3299_; 
v___y_137911__boxed_3297_ = lean_unbox(v___y_3276_);
v___y_137913__boxed_3298_ = lean_unbox(v___y_3279_);
v_res_3299_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__4(v_upperBound_3274_, v___x_3275_, v___y_137911__boxed_3297_, v___x_3277_, v_f_3278_, v___y_137913__boxed_3298_, v_inst_3280_, v_R_3281_, v_a_3282_, v_b_3283_, v_c_3284_, v___y_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_, v___y_3290_, v___y_3291_, v___y_3292_, v___y_3293_, v___y_3294_, v___y_3295_);
lean_dec(v___y_3295_);
lean_dec_ref(v___y_3294_);
lean_dec(v___y_3293_);
lean_dec_ref(v___y_3292_);
lean_dec(v___y_3291_);
lean_dec_ref(v___y_3290_);
lean_dec(v___y_3289_);
lean_dec_ref(v___y_3288_);
lean_dec(v___y_3287_);
lean_dec(v___y_3286_);
lean_dec(v___y_3285_);
lean_dec_ref(v___x_3277_);
lean_dec(v___x_3275_);
lean_dec(v_upperBound_3274_);
return v_res_3299_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__0(lean_object* v_00_u03b2_3300_, lean_object* v_a_3301_, lean_object* v_x_3302_){
_start:
{
uint8_t v___x_3303_; 
v___x_3303_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__0___redArg(v_a_3301_, v_x_3302_);
return v___x_3303_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3304_, lean_object* v_a_3305_, lean_object* v_x_3306_){
_start:
{
uint8_t v_res_3307_; lean_object* v_r_3308_; 
v_res_3307_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__0(v_00_u03b2_3304_, v_a_3305_, v_x_3306_);
lean_dec(v_x_3306_);
lean_dec_ref(v_a_3305_);
v_r_3308_ = lean_box(v_res_3307_);
return v_r_3308_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__1(lean_object* v_00_u03b2_3309_, lean_object* v_data_3310_){
_start:
{
lean_object* v___x_3311_; 
v___x_3311_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__1___redArg(v_data_3310_);
return v___x_3311_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__2(lean_object* v_00_u03b2_3312_, lean_object* v_a_3313_, lean_object* v_b_3314_, lean_object* v_x_3315_){
_start:
{
lean_object* v___x_3316_; 
v___x_3316_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__2___redArg(v_a_3313_, v_b_3314_, v_x_3315_);
return v___x_3316_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1_spec__4(lean_object* v_00_u03b2_3317_, lean_object* v_a_3318_, lean_object* v_x_3319_){
_start:
{
lean_object* v___x_3320_; 
v___x_3320_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1_spec__4___redArg(v_a_3318_, v_x_3319_);
return v___x_3320_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1_spec__4___boxed(lean_object* v_00_u03b2_3321_, lean_object* v_a_3322_, lean_object* v_x_3323_){
_start:
{
lean_object* v_res_3324_; 
v_res_3324_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__1_spec__4(v_00_u03b2_3321_, v_a_3322_, v_x_3323_);
lean_dec(v_x_3323_);
lean_dec_ref(v_a_3322_);
return v_res_3324_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_3325_, lean_object* v_i_3326_, lean_object* v_source_3327_, lean_object* v_target_3328_){
_start:
{
lean_object* v___x_3329_; 
v___x_3329_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__1_spec__4___redArg(v_i_3326_, v_source_3327_, v_target_3328_);
return v___x_3329_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__1_spec__4_spec__9(lean_object* v_00_u03b2_3330_, lean_object* v_x_3331_, lean_object* v_x_3332_){
_start:
{
lean_object* v___x_3333_; 
v___x_3333_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit_spec__0_spec__1_spec__4_spec__9___redArg(v_x_3331_, v_x_3332_);
return v___x_3333_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Grind_Canon_canonImpl_spec__0___redArg(lean_object* v_category_3334_, lean_object* v_opts_3335_, lean_object* v_act_3336_, lean_object* v_decl_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_){
_start:
{
lean_object* v___x_3349_; lean_object* v___x_3350_; 
lean_inc(v___y_3347_);
lean_inc_ref(v___y_3346_);
lean_inc(v___y_3345_);
lean_inc_ref(v___y_3344_);
lean_inc(v___y_3343_);
lean_inc_ref(v___y_3342_);
lean_inc(v___y_3341_);
lean_inc_ref(v___y_3340_);
lean_inc(v___y_3339_);
lean_inc(v___y_3338_);
v___x_3349_ = lean_apply_10(v_act_3336_, v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_, v___y_3347_);
v___x_3350_ = l_Lean_profileitIOUnsafe___redArg(v_category_3334_, v_opts_3335_, v___x_3349_, v_decl_3337_);
return v___x_3350_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Grind_Canon_canonImpl_spec__0___redArg___boxed(lean_object* v_category_3351_, lean_object* v_opts_3352_, lean_object* v_act_3353_, lean_object* v_decl_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_){
_start:
{
lean_object* v_res_3366_; 
v_res_3366_ = l_Lean_profileitM___at___00Lean_Meta_Grind_Canon_canonImpl_spec__0___redArg(v_category_3351_, v_opts_3352_, v_act_3353_, v_decl_3354_, v___y_3355_, v___y_3356_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_, v___y_3361_, v___y_3362_, v___y_3363_, v___y_3364_);
lean_dec(v___y_3364_);
lean_dec_ref(v___y_3363_);
lean_dec(v___y_3362_);
lean_dec_ref(v___y_3361_);
lean_dec(v___y_3360_);
lean_dec_ref(v___y_3359_);
lean_dec(v___y_3358_);
lean_dec_ref(v___y_3357_);
lean_dec(v___y_3356_);
lean_dec(v___y_3355_);
lean_dec_ref(v_opts_3352_);
lean_dec_ref(v_category_3351_);
return v_res_3366_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Grind_Canon_canonImpl_spec__0(lean_object* v_00_u03b1_3367_, lean_object* v_category_3368_, lean_object* v_opts_3369_, lean_object* v_act_3370_, lean_object* v_decl_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_){
_start:
{
lean_object* v___x_3383_; 
v___x_3383_ = l_Lean_profileitM___at___00Lean_Meta_Grind_Canon_canonImpl_spec__0___redArg(v_category_3368_, v_opts_3369_, v_act_3370_, v_decl_3371_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_, v___y_3381_);
return v___x_3383_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_Grind_Canon_canonImpl_spec__0___boxed(lean_object* v_00_u03b1_3384_, lean_object* v_category_3385_, lean_object* v_opts_3386_, lean_object* v_act_3387_, lean_object* v_decl_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_){
_start:
{
lean_object* v_res_3400_; 
v_res_3400_ = l_Lean_profileitM___at___00Lean_Meta_Grind_Canon_canonImpl_spec__0(v_00_u03b1_3384_, v_category_3385_, v_opts_3386_, v_act_3387_, v_decl_3388_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_, v___y_3397_, v___y_3398_);
lean_dec(v___y_3398_);
lean_dec_ref(v___y_3397_);
lean_dec(v___y_3396_);
lean_dec_ref(v___y_3395_);
lean_dec(v___y_3394_);
lean_dec_ref(v___y_3393_);
lean_dec(v___y_3392_);
lean_dec_ref(v___y_3391_);
lean_dec(v___y_3390_);
lean_dec(v___y_3389_);
lean_dec_ref(v_opts_3386_);
lean_dec_ref(v_category_3385_);
return v_res_3400_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Canon_canonImpl___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; 
v___x_3401_ = lean_box(0);
v___x_3402_ = lean_unsigned_to_nat(16u);
v___x_3403_ = lean_mk_array(v___x_3402_, v___x_3401_);
return v___x_3403_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Canon_canonImpl___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; 
v___x_3404_ = lean_obj_once(&l_Lean_Meta_Grind_Canon_canonImpl___lam__0___closed__0, &l_Lean_Meta_Grind_Canon_canonImpl___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Canon_canonImpl___lam__0___closed__0);
v___x_3405_ = lean_unsigned_to_nat(0u);
v___x_3406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3406_, 0, v___x_3405_);
lean_ctor_set(v___x_3406_, 1, v___x_3404_);
return v___x_3406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Canon_canonImpl___lam__0(lean_object* v___x_3407_, lean_object* v_e_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_){
_start:
{
lean_object* v___y_3421_; lean_object* v___y_3422_; lean_object* v___y_3423_; lean_object* v___y_3424_; lean_object* v___y_3425_; lean_object* v___y_3426_; lean_object* v___y_3427_; lean_object* v___y_3428_; lean_object* v___y_3429_; lean_object* v___y_3430_; lean_object* v___x_3443_; lean_object* v_a_3444_; uint8_t v___x_3445_; 
lean_inc(v___x_3407_);
v___x_3443_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__0___redArg(v___x_3407_, v___y_3417_);
v_a_3444_ = lean_ctor_get(v___x_3443_, 0);
lean_inc(v_a_3444_);
lean_dec_ref(v___x_3443_);
v___x_3445_ = lean_unbox(v_a_3444_);
lean_dec(v_a_3444_);
if (v___x_3445_ == 0)
{
lean_dec(v___x_3407_);
v___y_3421_ = v___y_3409_;
v___y_3422_ = v___y_3410_;
v___y_3423_ = v___y_3411_;
v___y_3424_ = v___y_3412_;
v___y_3425_ = v___y_3413_;
v___y_3426_ = v___y_3414_;
v___y_3427_ = v___y_3415_;
v___y_3428_ = v___y_3416_;
v___y_3429_ = v___y_3417_;
v___y_3430_ = v___y_3418_;
goto v___jp_3420_;
}
else
{
lean_object* v___x_3446_; 
v___x_3446_ = l_Lean_Meta_Grind_updateLastTag(v___y_3409_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_, v___y_3417_, v___y_3418_);
if (lean_obj_tag(v___x_3446_) == 0)
{
lean_object* v___x_3447_; lean_object* v___x_3448_; 
lean_dec_ref(v___x_3446_);
lean_inc_ref(v_e_3408_);
v___x_3447_ = l_Lean_MessageData_ofExpr(v_e_3408_);
v___x_3448_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq_spec__1___redArg(v___x_3407_, v___x_3447_, v___y_3415_, v___y_3416_, v___y_3417_, v___y_3418_);
if (lean_obj_tag(v___x_3448_) == 0)
{
lean_dec_ref(v___x_3448_);
v___y_3421_ = v___y_3409_;
v___y_3422_ = v___y_3410_;
v___y_3423_ = v___y_3411_;
v___y_3424_ = v___y_3412_;
v___y_3425_ = v___y_3413_;
v___y_3426_ = v___y_3414_;
v___y_3427_ = v___y_3415_;
v___y_3428_ = v___y_3416_;
v___y_3429_ = v___y_3417_;
v___y_3430_ = v___y_3418_;
goto v___jp_3420_;
}
else
{
lean_object* v_a_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3456_; 
lean_dec_ref(v_e_3408_);
v_a_3449_ = lean_ctor_get(v___x_3448_, 0);
v_isSharedCheck_3456_ = !lean_is_exclusive(v___x_3448_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3451_ = v___x_3448_;
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_a_3449_);
lean_dec(v___x_3448_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v___x_3454_; 
if (v_isShared_3452_ == 0)
{
v___x_3454_ = v___x_3451_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_a_3449_);
v___x_3454_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3453_;
}
v_reusejp_3453_:
{
return v___x_3454_;
}
}
}
}
else
{
lean_object* v_a_3457_; lean_object* v___x_3459_; uint8_t v_isShared_3460_; uint8_t v_isSharedCheck_3464_; 
lean_dec_ref(v_e_3408_);
lean_dec(v___x_3407_);
v_a_3457_ = lean_ctor_get(v___x_3446_, 0);
v_isSharedCheck_3464_ = !lean_is_exclusive(v___x_3446_);
if (v_isSharedCheck_3464_ == 0)
{
v___x_3459_ = v___x_3446_;
v_isShared_3460_ = v_isSharedCheck_3464_;
goto v_resetjp_3458_;
}
else
{
lean_inc(v_a_3457_);
lean_dec(v___x_3446_);
v___x_3459_ = lean_box(0);
v_isShared_3460_ = v_isSharedCheck_3464_;
goto v_resetjp_3458_;
}
v_resetjp_3458_:
{
lean_object* v___x_3462_; 
if (v_isShared_3460_ == 0)
{
v___x_3462_ = v___x_3459_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3463_; 
v_reuseFailAlloc_3463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3463_, 0, v_a_3457_);
v___x_3462_ = v_reuseFailAlloc_3463_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
return v___x_3462_;
}
}
}
}
v___jp_3420_:
{
lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; 
v___x_3431_ = lean_obj_once(&l_Lean_Meta_Grind_Canon_canonImpl___lam__0___closed__1, &l_Lean_Meta_Grind_Canon_canonImpl___lam__0___closed__1_once, _init_l_Lean_Meta_Grind_Canon_canonImpl___lam__0___closed__1);
v___x_3432_ = lean_st_mk_ref(v___x_3431_);
v___x_3433_ = l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonImpl_visit(v_e_3408_, v___x_3432_, v___y_3421_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_, v___y_3427_, v___y_3428_, v___y_3429_, v___y_3430_);
if (lean_obj_tag(v___x_3433_) == 0)
{
lean_object* v_a_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3442_; 
v_a_3434_ = lean_ctor_get(v___x_3433_, 0);
v_isSharedCheck_3442_ = !lean_is_exclusive(v___x_3433_);
if (v_isSharedCheck_3442_ == 0)
{
v___x_3436_ = v___x_3433_;
v_isShared_3437_ = v_isSharedCheck_3442_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_a_3434_);
lean_dec(v___x_3433_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3442_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
lean_object* v___x_3438_; lean_object* v___x_3440_; 
v___x_3438_ = lean_st_ref_get(v___x_3432_);
lean_dec(v___x_3432_);
lean_dec(v___x_3438_);
if (v_isShared_3437_ == 0)
{
v___x_3440_ = v___x_3436_;
goto v_reusejp_3439_;
}
else
{
lean_object* v_reuseFailAlloc_3441_; 
v_reuseFailAlloc_3441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3441_, 0, v_a_3434_);
v___x_3440_ = v_reuseFailAlloc_3441_;
goto v_reusejp_3439_;
}
v_reusejp_3439_:
{
return v___x_3440_;
}
}
}
else
{
lean_dec(v___x_3432_);
return v___x_3433_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Canon_canonImpl___lam__0___boxed(lean_object* v___x_3465_, lean_object* v_e_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_){
_start:
{
lean_object* v_res_3478_; 
v_res_3478_ = l_Lean_Meta_Grind_Canon_canonImpl___lam__0(v___x_3465_, v_e_3466_, v___y_3467_, v___y_3468_, v___y_3469_, v___y_3470_, v___y_3471_, v___y_3472_, v___y_3473_, v___y_3474_, v___y_3475_, v___y_3476_);
lean_dec(v___y_3476_);
lean_dec_ref(v___y_3475_);
lean_dec(v___y_3474_);
lean_dec_ref(v___y_3473_);
lean_dec(v___y_3472_);
lean_dec_ref(v___y_3471_);
lean_dec(v___y_3470_);
lean_dec_ref(v___y_3469_);
lean_dec(v___y_3468_);
lean_dec(v___y_3467_);
return v_res_3478_;
}
}
LEAN_EXPORT lean_object* lean_grind_canon(lean_object* v_e_3480_, lean_object* v_a_3481_, lean_object* v_a_3482_, lean_object* v_a_3483_, lean_object* v_a_3484_, lean_object* v_a_3485_, lean_object* v_a_3486_, lean_object* v_a_3487_, lean_object* v_a_3488_, lean_object* v_a_3489_, lean_object* v_a_3490_){
_start:
{
lean_object* v_options_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___f_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; 
v_options_3492_ = lean_ctor_get(v_a_3489_, 2);
lean_inc_ref(v_options_3492_);
v___x_3493_ = ((lean_object*)(l_Lean_Meta_Grind_Canon_canonImpl___closed__0));
v___x_3494_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_canonElemCore_checkDefEq___closed__3));
v___f_3495_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Canon_canonImpl___lam__0___boxed), 13, 2);
lean_closure_set(v___f_3495_, 0, v___x_3494_);
lean_closure_set(v___f_3495_, 1, v_e_3480_);
v___x_3496_ = lean_box(0);
v___x_3497_ = l_Lean_profileitM___at___00Lean_Meta_Grind_Canon_canonImpl_spec__0___redArg(v___x_3493_, v_options_3492_, v___f_3495_, v___x_3496_, v_a_3481_, v_a_3482_, v_a_3483_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_, v_a_3488_, v_a_3489_, v_a_3490_);
lean_dec(v_a_3490_);
lean_dec_ref(v_a_3489_);
lean_dec(v_a_3488_);
lean_dec_ref(v_a_3487_);
lean_dec(v_a_3486_);
lean_dec_ref(v_a_3485_);
lean_dec(v_a_3484_);
lean_dec_ref(v_a_3483_);
lean_dec(v_a_3482_);
lean_dec(v_a_3481_);
lean_dec_ref(v_options_3492_);
return v___x_3497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Canon_canonImpl___boxed(lean_object* v_e_3498_, lean_object* v_a_3499_, lean_object* v_a_3500_, lean_object* v_a_3501_, lean_object* v_a_3502_, lean_object* v_a_3503_, lean_object* v_a_3504_, lean_object* v_a_3505_, lean_object* v_a_3506_, lean_object* v_a_3507_, lean_object* v_a_3508_, lean_object* v_a_3509_){
_start:
{
lean_object* v_res_3510_; 
v_res_3510_ = lean_grind_canon(v_e_3498_, v_a_3499_, v_a_3500_, v_a_3501_, v_a_3502_, v_a_3503_, v_a_3504_, v_a_3505_, v_a_3506_, v_a_3507_, v_a_3508_);
return v_res_3510_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_IntInstTesters(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_NatInstTesters(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Canon(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_IntInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_NatInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instInhabitedShouldCanonResult_default = _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instInhabitedShouldCanonResult_default();
l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instInhabitedShouldCanonResult = _init_l___private_Lean_Meta_Tactic_Grind_Canon_0__Lean_Meta_Grind_Canon_instInhabitedShouldCanonResult();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Canon(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Init_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_IntInstTesters(uint8_t builtin);
lean_object* initialize_Lean_Meta_NatInstTesters(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Canon(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_IntInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_NatInstTesters(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Canon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Canon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Canon(builtin);
}
#ifdef __cplusplus
}
#endif
