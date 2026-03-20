// Lean compiler output
// Module: Lean.Meta.ReduceEval
// Imports: public import Lean.Meta.Offset
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
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Meta_evalNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Expr_constName_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "reduceEval: failed to evaluate argument"};
static const lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalNat___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalNat___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalNat___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalNat___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReduceEvalNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReduceEvalNat___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReduceEvalNat___closed__0 = (const lean_object*)&l_Lean_Meta_instReduceEvalNat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReduceEvalNat = (const lean_object*)&l_Lean_Meta_instReduceEvalNat___closed__0_value;
static const lean_string_object l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2_value;
static const lean_string_object l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__3 = (const lean_object*)&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4 = (const lean_object*)&l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___private__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___private__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalString___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalString___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalString___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalString___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReduceEvalString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReduceEvalString___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReduceEvalString___closed__0 = (const lean_object*)&l_Lean_Meta_instReduceEvalString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReduceEvalString = (const lean_object*)&l_Lean_Meta_instReduceEvalString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0 = (const lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_value;
static const lean_string_object l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Name"};
static const lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__1 = (const lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__1_value;
static const lean_string_object l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__2 = (const lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 222, 196, 1, 17, 104, 171, 184)}};
static const lean_ctor_object l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__2_value),LEAN_SCALAR_PTR_LITERAL(35, 98, 18, 79, 25, 208, 83, 100)}};
static const lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__3 = (const lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__3_value;
static const lean_string_object l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__4 = (const lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 222, 196, 1, 17, 104, 171, 184)}};
static const lean_ctor_object l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__5_value_aux_1),((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__4_value),LEAN_SCALAR_PTR_LITERAL(191, 63, 218, 129, 21, 133, 119, 116)}};
static const lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__5 = (const lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__5_value;
static const lean_string_object l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "anonymous"};
static const lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__6 = (const lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 222, 196, 1, 17, 104, 171, 184)}};
static const lean_ctor_object l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__7_value_aux_1),((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__6_value),LEAN_SCALAR_PTR_LITERAL(155, 163, 3, 148, 15, 163, 84, 121)}};
static const lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__7 = (const lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalName___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalName___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReduceEvalName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReduceEvalName___private__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReduceEvalName___closed__0 = (const lean_object*)&l_Lean_Meta_instReduceEvalName___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReduceEvalName = (const lean_object*)&l_Lean_Meta_instReduceEvalName___closed__0_value;
static const lean_string_object l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___private__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___private__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Fin"};
static const lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__0_value;
static const lean_string_object l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1 = (const lean_object*)&l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 162, 2, 110, 238, 123, 219)}};
static const lean_ctor_object l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(30, 240, 210, 97, 67, 170, 216, 80)}};
static const lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__2 = (const lean_object*)&l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_instReduceEvalBitVec___private__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l_Lean_Meta_instReduceEvalBitVec___private__1___closed__0 = (const lean_object*)&l_Lean_Meta_instReduceEvalBitVec___private__1___closed__0_value;
static const lean_string_object l_Lean_Meta_instReduceEvalBitVec___private__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofFin"};
static const lean_object* l_Lean_Meta_instReduceEvalBitVec___private__1___closed__1 = (const lean_object*)&l_Lean_Meta_instReduceEvalBitVec___private__1___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instReduceEvalBitVec___private__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instReduceEvalBitVec___private__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l_Lean_Meta_instReduceEvalBitVec___private__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_instReduceEvalBitVec___private__1___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_instReduceEvalBitVec___private__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(69, 167, 55, 152, 45, 146, 42, 51)}};
static const lean_object* l_Lean_Meta_instReduceEvalBitVec___private__1___closed__2 = (const lean_object*)&l_Lean_Meta_instReduceEvalBitVec___private__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBitVec___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBitVec___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBitVec(lean_object*);
static const lean_string_object l_Lean_Meta_instReduceEvalBool___private__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_instReduceEvalBool___private__1___closed__0 = (const lean_object*)&l_Lean_Meta_instReduceEvalBool___private__1___closed__0_value;
static const lean_string_object l_Lean_Meta_instReduceEvalBool___private__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Meta_instReduceEvalBool___private__1___closed__1 = (const lean_object*)&l_Lean_Meta_instReduceEvalBool___private__1___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instReduceEvalBool___private__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instReduceEvalBool___private__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_instReduceEvalBool___private__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_instReduceEvalBool___private__1___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_instReduceEvalBool___private__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Meta_instReduceEvalBool___private__1___closed__2 = (const lean_object*)&l_Lean_Meta_instReduceEvalBool___private__1___closed__2_value;
static const lean_string_object l_Lean_Meta_instReduceEvalBool___private__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Meta_instReduceEvalBool___private__1___closed__3 = (const lean_object*)&l_Lean_Meta_instReduceEvalBool___private__1___closed__3_value;
static const lean_ctor_object l_Lean_Meta_instReduceEvalBool___private__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_instReduceEvalBool___private__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_instReduceEvalBool___private__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_instReduceEvalBool___private__1___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_instReduceEvalBool___private__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l_Lean_Meta_instReduceEvalBool___private__1___closed__4 = (const lean_object*)&l_Lean_Meta_instReduceEvalBool___private__1___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBool___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBool___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReduceEvalBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReduceEvalBool___private__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReduceEvalBool___closed__0 = (const lean_object*)&l_Lean_Meta_instReduceEvalBool___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReduceEvalBool = (const lean_object*)&l_Lean_Meta_instReduceEvalBool___closed__0_value;
static const lean_string_object l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "BinderInfo"};
static const lean_object* l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__0 = (const lean_object*)&l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__0_value;
static const lean_string_object l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__1 = (const lean_object*)&l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__1_value;
static const lean_string_object l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "implicit"};
static const lean_object* l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__2 = (const lean_object*)&l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__2_value;
static const lean_string_object l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "strictImplicit"};
static const lean_object* l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__3 = (const lean_object*)&l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__3_value;
static const lean_string_object l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "instImplicit"};
static const lean_object* l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__4 = (const lean_object*)&l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBinderInfo___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBinderInfo___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReduceEvalBinderInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReduceEvalBinderInfo___private__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReduceEvalBinderInfo___closed__0 = (const lean_object*)&l_Lean_Meta_instReduceEvalBinderInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReduceEvalBinderInfo = (const lean_object*)&l_Lean_Meta_instReduceEvalBinderInfo___closed__0_value;
static const lean_string_object l_Lean_Meta_instReduceEvalLiteral___private__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Literal"};
static const lean_object* l_Lean_Meta_instReduceEvalLiteral___private__1___closed__0 = (const lean_object*)&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__0_value;
static const lean_string_object l_Lean_Meta_instReduceEvalLiteral___private__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "natVal"};
static const lean_object* l_Lean_Meta_instReduceEvalLiteral___private__1___closed__1 = (const lean_object*)&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__1_value;
static const lean_ctor_object l_Lean_Meta_instReduceEvalLiteral___private__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_instReduceEvalLiteral___private__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(39, 22, 220, 12, 129, 114, 43, 97)}};
static const lean_ctor_object l_Lean_Meta_instReduceEvalLiteral___private__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(64, 199, 201, 37, 137, 51, 1, 129)}};
static const lean_object* l_Lean_Meta_instReduceEvalLiteral___private__1___closed__2 = (const lean_object*)&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__2_value;
static const lean_string_object l_Lean_Meta_instReduceEvalLiteral___private__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "strVal"};
static const lean_object* l_Lean_Meta_instReduceEvalLiteral___private__1___closed__3 = (const lean_object*)&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__3_value;
static const lean_ctor_object l_Lean_Meta_instReduceEvalLiteral___private__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_instReduceEvalLiteral___private__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(39, 22, 220, 12, 129, 114, 43, 97)}};
static const lean_ctor_object l_Lean_Meta_instReduceEvalLiteral___private__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(68, 214, 249, 146, 84, 160, 212, 27)}};
static const lean_object* l_Lean_Meta_instReduceEvalLiteral___private__1___closed__4 = (const lean_object*)&l_Lean_Meta_instReduceEvalLiteral___private__1___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLiteral___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLiteral___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReduceEvalLiteral___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReduceEvalLiteral___private__1___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReduceEvalLiteral___closed__0 = (const lean_object*)&l_Lean_Meta_instReduceEvalLiteral___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReduceEvalLiteral = (const lean_object*)&l_Lean_Meta_instReduceEvalLiteral___closed__0_value;
static const lean_string_object l_Lean_Meta_instReduceEvalMVarId___private__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "MVarId"};
static const lean_object* l_Lean_Meta_instReduceEvalMVarId___private__1___closed__0 = (const lean_object*)&l_Lean_Meta_instReduceEvalMVarId___private__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instReduceEvalMVarId___private__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_instReduceEvalMVarId___private__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_instReduceEvalMVarId___private__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_instReduceEvalMVarId___private__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(177, 186, 234, 138, 172, 166, 87, 74)}};
static const lean_ctor_object l_Lean_Meta_instReduceEvalMVarId___private__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_instReduceEvalMVarId___private__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(93, 44, 60, 136, 72, 250, 230, 141)}};
static const lean_object* l_Lean_Meta_instReduceEvalMVarId___private__1___closed__1 = (const lean_object*)&l_Lean_Meta_instReduceEvalMVarId___private__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalMVarId___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalMVarId___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalMVarId___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalMVarId___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReduceEvalMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReduceEvalMVarId___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReduceEvalMVarId___closed__0 = (const lean_object*)&l_Lean_Meta_instReduceEvalMVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReduceEvalMVarId = (const lean_object*)&l_Lean_Meta_instReduceEvalMVarId___closed__0_value;
static const lean_string_object l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "LevelMVarId"};
static const lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__0 = (const lean_object*)&l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 60, 85, 89, 175, 240, 129, 147)}};
static const lean_ctor_object l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(213, 157, 226, 48, 182, 72, 20, 234)}};
static const lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__1 = (const lean_object*)&l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReduceEvalLevelMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReduceEvalLevelMVarId___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___closed__0 = (const lean_object*)&l_Lean_Meta_instReduceEvalLevelMVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReduceEvalLevelMVarId = (const lean_object*)&l_Lean_Meta_instReduceEvalLevelMVarId___closed__0_value;
static const lean_string_object l_Lean_Meta_instReduceEvalFVarId___private__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "FVarId"};
static const lean_object* l_Lean_Meta_instReduceEvalFVarId___private__1___closed__0 = (const lean_object*)&l_Lean_Meta_instReduceEvalFVarId___private__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_instReduceEvalFVarId___private__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_instReduceEvalFVarId___private__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_instReduceEvalFVarId___private__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_instReduceEvalFVarId___private__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(134, 80, 170, 214, 218, 146, 55, 86)}};
static const lean_ctor_object l_Lean_Meta_instReduceEvalFVarId___private__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_instReduceEvalFVarId___private__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(246, 212, 153, 136, 172, 214, 179, 96)}};
static const lean_object* l_Lean_Meta_instReduceEvalFVarId___private__1___closed__1 = (const lean_object*)&l_Lean_Meta_instReduceEvalFVarId___private__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFVarId___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFVarId___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFVarId___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFVarId___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_instReduceEvalFVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instReduceEvalFVarId___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_instReduceEvalFVarId___closed__0 = (const lean_object*)&l_Lean_Meta_instReduceEvalFVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_instReduceEvalFVarId = (const lean_object*)&l_Lean_Meta_instReduceEvalFVarId___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___redArg(lean_object* v_inst_1_, lean_object* v_e_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_){
_start:
{
uint8_t v___y_9_; lean_object* v___x_68_; uint8_t v_transparency_69_; uint8_t v___x_70_; uint8_t v___x_71_; 
v___x_68_ = l_Lean_Meta_Context_config(v_a_3_);
v_transparency_69_ = lean_ctor_get_uint8(v___x_68_, 9);
lean_dec_ref(v___x_68_);
v___x_70_ = 1;
v___x_71_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_69_, v___x_70_);
if (v___x_71_ == 0)
{
v___y_9_ = v_transparency_69_;
goto v___jp_8_;
}
else
{
v___y_9_ = v___x_70_;
goto v___jp_8_;
}
v___jp_8_:
{
lean_object* v___x_10_; uint8_t v_foApprox_11_; uint8_t v_ctxApprox_12_; uint8_t v_quasiPatternApprox_13_; uint8_t v_constApprox_14_; uint8_t v_isDefEqStuckEx_15_; uint8_t v_unificationHints_16_; uint8_t v_proofIrrelevance_17_; uint8_t v_assignSyntheticOpaque_18_; uint8_t v_offsetCnstrs_19_; uint8_t v_etaStruct_20_; uint8_t v_univApprox_21_; uint8_t v_iota_22_; uint8_t v_beta_23_; uint8_t v_proj_24_; uint8_t v_zeta_25_; uint8_t v_zetaDelta_26_; uint8_t v_zetaUnused_27_; uint8_t v_zetaHave_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_67_; 
v___x_10_ = l_Lean_Meta_Context_config(v_a_3_);
v_foApprox_11_ = lean_ctor_get_uint8(v___x_10_, 0);
v_ctxApprox_12_ = lean_ctor_get_uint8(v___x_10_, 1);
v_quasiPatternApprox_13_ = lean_ctor_get_uint8(v___x_10_, 2);
v_constApprox_14_ = lean_ctor_get_uint8(v___x_10_, 3);
v_isDefEqStuckEx_15_ = lean_ctor_get_uint8(v___x_10_, 4);
v_unificationHints_16_ = lean_ctor_get_uint8(v___x_10_, 5);
v_proofIrrelevance_17_ = lean_ctor_get_uint8(v___x_10_, 6);
v_assignSyntheticOpaque_18_ = lean_ctor_get_uint8(v___x_10_, 7);
v_offsetCnstrs_19_ = lean_ctor_get_uint8(v___x_10_, 8);
v_etaStruct_20_ = lean_ctor_get_uint8(v___x_10_, 10);
v_univApprox_21_ = lean_ctor_get_uint8(v___x_10_, 11);
v_iota_22_ = lean_ctor_get_uint8(v___x_10_, 12);
v_beta_23_ = lean_ctor_get_uint8(v___x_10_, 13);
v_proj_24_ = lean_ctor_get_uint8(v___x_10_, 14);
v_zeta_25_ = lean_ctor_get_uint8(v___x_10_, 15);
v_zetaDelta_26_ = lean_ctor_get_uint8(v___x_10_, 16);
v_zetaUnused_27_ = lean_ctor_get_uint8(v___x_10_, 17);
v_zetaHave_28_ = lean_ctor_get_uint8(v___x_10_, 18);
v_isSharedCheck_67_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_67_ == 0)
{
v___x_30_ = v___x_10_;
v_isShared_31_ = v_isSharedCheck_67_;
goto v_resetjp_29_;
}
else
{
lean_dec(v___x_10_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_67_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
uint8_t v_trackZetaDelta_32_; lean_object* v_zetaDeltaSet_33_; lean_object* v_lctx_34_; lean_object* v_localInstances_35_; lean_object* v_defEqCtx_x3f_36_; lean_object* v_synthPendingDepth_37_; lean_object* v_canUnfold_x3f_38_; uint8_t v_univApprox_39_; uint8_t v_inTypeClassResolution_40_; uint8_t v_cacheInferType_41_; lean_object* v_config_43_; 
v_trackZetaDelta_32_ = lean_ctor_get_uint8(v_a_3_, sizeof(void*)*7);
v_zetaDeltaSet_33_ = lean_ctor_get(v_a_3_, 1);
lean_inc(v_zetaDeltaSet_33_);
v_lctx_34_ = lean_ctor_get(v_a_3_, 2);
lean_inc_ref(v_lctx_34_);
v_localInstances_35_ = lean_ctor_get(v_a_3_, 3);
lean_inc_ref(v_localInstances_35_);
v_defEqCtx_x3f_36_ = lean_ctor_get(v_a_3_, 4);
lean_inc(v_defEqCtx_x3f_36_);
v_synthPendingDepth_37_ = lean_ctor_get(v_a_3_, 5);
lean_inc(v_synthPendingDepth_37_);
v_canUnfold_x3f_38_ = lean_ctor_get(v_a_3_, 6);
lean_inc(v_canUnfold_x3f_38_);
v_univApprox_39_ = lean_ctor_get_uint8(v_a_3_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_40_ = lean_ctor_get_uint8(v_a_3_, sizeof(void*)*7 + 2);
v_cacheInferType_41_ = lean_ctor_get_uint8(v_a_3_, sizeof(void*)*7 + 3);
if (v_isShared_31_ == 0)
{
v_config_43_ = v___x_30_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_66_; 
v_reuseFailAlloc_66_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_66_, 0, v_foApprox_11_);
lean_ctor_set_uint8(v_reuseFailAlloc_66_, 1, v_ctxApprox_12_);
lean_ctor_set_uint8(v_reuseFailAlloc_66_, 2, v_quasiPatternApprox_13_);
lean_ctor_set_uint8(v_reuseFailAlloc_66_, 3, v_constApprox_14_);
lean_ctor_set_uint8(v_reuseFailAlloc_66_, 4, v_isDefEqStuckEx_15_);
lean_ctor_set_uint8(v_reuseFailAlloc_66_, 5, v_unificationHints_16_);
lean_ctor_set_uint8(v_reuseFailAlloc_66_, 6, v_proofIrrelevance_17_);
lean_ctor_set_uint8(v_reuseFailAlloc_66_, 7, v_assignSyntheticOpaque_18_);
lean_ctor_set_uint8(v_reuseFailAlloc_66_, 8, v_offsetCnstrs_19_);
lean_ctor_set_uint8(v_reuseFailAlloc_66_, 10, v_etaStruct_20_);
lean_ctor_set_uint8(v_reuseFailAlloc_66_, 11, v_univApprox_21_);
lean_ctor_set_uint8(v_reuseFailAlloc_66_, 12, v_iota_22_);
lean_ctor_set_uint8(v_reuseFailAlloc_66_, 13, v_beta_23_);
lean_ctor_set_uint8(v_reuseFailAlloc_66_, 14, v_proj_24_);
lean_ctor_set_uint8(v_reuseFailAlloc_66_, 15, v_zeta_25_);
lean_ctor_set_uint8(v_reuseFailAlloc_66_, 16, v_zetaDelta_26_);
lean_ctor_set_uint8(v_reuseFailAlloc_66_, 17, v_zetaUnused_27_);
lean_ctor_set_uint8(v_reuseFailAlloc_66_, 18, v_zetaHave_28_);
v_config_43_ = v_reuseFailAlloc_66_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
uint64_t v___x_44_; lean_object* v___x_46_; uint8_t v_isShared_47_; uint8_t v_isSharedCheck_58_; 
lean_ctor_set_uint8(v_config_43_, 9, v___y_9_);
v___x_44_ = l_Lean_Meta_Context_configKey(v_a_3_);
v_isSharedCheck_58_ = !lean_is_exclusive(v_a_3_);
if (v_isSharedCheck_58_ == 0)
{
lean_object* v_unused_59_; lean_object* v_unused_60_; lean_object* v_unused_61_; lean_object* v_unused_62_; lean_object* v_unused_63_; lean_object* v_unused_64_; lean_object* v_unused_65_; 
v_unused_59_ = lean_ctor_get(v_a_3_, 6);
lean_dec(v_unused_59_);
v_unused_60_ = lean_ctor_get(v_a_3_, 5);
lean_dec(v_unused_60_);
v_unused_61_ = lean_ctor_get(v_a_3_, 4);
lean_dec(v_unused_61_);
v_unused_62_ = lean_ctor_get(v_a_3_, 3);
lean_dec(v_unused_62_);
v_unused_63_ = lean_ctor_get(v_a_3_, 2);
lean_dec(v_unused_63_);
v_unused_64_ = lean_ctor_get(v_a_3_, 1);
lean_dec(v_unused_64_);
v_unused_65_ = lean_ctor_get(v_a_3_, 0);
lean_dec(v_unused_65_);
v___x_46_ = v_a_3_;
v_isShared_47_ = v_isSharedCheck_58_;
goto v_resetjp_45_;
}
else
{
lean_dec(v_a_3_);
v___x_46_ = lean_box(0);
v_isShared_47_ = v_isSharedCheck_58_;
goto v_resetjp_45_;
}
v_resetjp_45_:
{
uint64_t v___x_48_; uint64_t v___x_49_; uint64_t v___x_50_; uint64_t v___x_51_; uint64_t v_key_52_; lean_object* v___x_53_; lean_object* v___x_55_; 
v___x_48_ = 2ULL;
v___x_49_ = lean_uint64_shift_right(v___x_44_, v___x_48_);
v___x_50_ = lean_uint64_shift_left(v___x_49_, v___x_48_);
v___x_51_ = l_Lean_Meta_TransparencyMode_toUInt64(v___y_9_);
v_key_52_ = lean_uint64_lor(v___x_50_, v___x_51_);
v___x_53_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_53_, 0, v_config_43_);
lean_ctor_set_uint64(v___x_53_, sizeof(void*)*1, v_key_52_);
if (v_isShared_47_ == 0)
{
lean_ctor_set(v___x_46_, 0, v___x_53_);
v___x_55_ = v___x_46_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_57_; 
v_reuseFailAlloc_57_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_57_, 0, v___x_53_);
lean_ctor_set(v_reuseFailAlloc_57_, 1, v_zetaDeltaSet_33_);
lean_ctor_set(v_reuseFailAlloc_57_, 2, v_lctx_34_);
lean_ctor_set(v_reuseFailAlloc_57_, 3, v_localInstances_35_);
lean_ctor_set(v_reuseFailAlloc_57_, 4, v_defEqCtx_x3f_36_);
lean_ctor_set(v_reuseFailAlloc_57_, 5, v_synthPendingDepth_37_);
lean_ctor_set(v_reuseFailAlloc_57_, 6, v_canUnfold_x3f_38_);
lean_ctor_set_uint8(v_reuseFailAlloc_57_, sizeof(void*)*7, v_trackZetaDelta_32_);
lean_ctor_set_uint8(v_reuseFailAlloc_57_, sizeof(void*)*7 + 1, v_univApprox_39_);
lean_ctor_set_uint8(v_reuseFailAlloc_57_, sizeof(void*)*7 + 2, v_inTypeClassResolution_40_);
lean_ctor_set_uint8(v_reuseFailAlloc_57_, sizeof(void*)*7 + 3, v_cacheInferType_41_);
v___x_55_ = v_reuseFailAlloc_57_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
lean_object* v___x_56_; 
v___x_56_ = lean_apply_6(v_inst_1_, v_e_2_, v___x_55_, v_a_4_, v_a_5_, v_a_6_, lean_box(0));
return v___x_56_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___redArg___boxed(lean_object* v_inst_72_, lean_object* v_e_73_, lean_object* v_a_74_, lean_object* v_a_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l_Lean_Meta_reduceEval___redArg(v_inst_72_, v_e_73_, v_a_74_, v_a_75_, v_a_76_, v_a_77_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval(lean_object* v_00_u03b1_80_, lean_object* v_inst_81_, lean_object* v_e_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = l_Lean_Meta_reduceEval___redArg(v_inst_81_, v_e_82_, v_a_83_, v_a_84_, v_a_85_, v_a_86_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___boxed(lean_object* v_00_u03b1_89_, lean_object* v_inst_90_, lean_object* v_e_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l_Lean_Meta_reduceEval(v_00_u03b1_89_, v_inst_90_, v_e_91_, v_a_92_, v_a_93_, v_a_94_, v_a_95_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0_spec__0(lean_object* v_msgData_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
lean_object* v___x_104_; lean_object* v_env_105_; lean_object* v___x_106_; lean_object* v_mctx_107_; lean_object* v_lctx_108_; lean_object* v_options_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_104_ = lean_st_ref_get(v___y_102_);
v_env_105_ = lean_ctor_get(v___x_104_, 0);
lean_inc_ref(v_env_105_);
lean_dec(v___x_104_);
v___x_106_ = lean_st_ref_get(v___y_100_);
v_mctx_107_ = lean_ctor_get(v___x_106_, 0);
lean_inc_ref(v_mctx_107_);
lean_dec(v___x_106_);
v_lctx_108_ = lean_ctor_get(v___y_99_, 2);
v_options_109_ = lean_ctor_get(v___y_101_, 2);
lean_inc_ref(v_options_109_);
lean_inc_ref(v_lctx_108_);
v___x_110_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_110_, 0, v_env_105_);
lean_ctor_set(v___x_110_, 1, v_mctx_107_);
lean_ctor_set(v___x_110_, 2, v_lctx_108_);
lean_ctor_set(v___x_110_, 3, v_options_109_);
v___x_111_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_110_);
lean_ctor_set(v___x_111_, 1, v_msgData_98_);
v___x_112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_112_, 0, v___x_111_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0_spec__0___boxed(lean_object* v_msgData_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0_spec__0(v_msgData_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_);
lean_dec(v___y_117_);
lean_dec_ref(v___y_116_);
lean_dec(v___y_115_);
lean_dec_ref(v___y_114_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0___redArg(lean_object* v_msg_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_){
_start:
{
lean_object* v_ref_126_; lean_object* v___x_127_; lean_object* v_a_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_136_; 
v_ref_126_ = lean_ctor_get(v___y_123_, 5);
v___x_127_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0_spec__0(v_msg_120_, v___y_121_, v___y_122_, v___y_123_, v___y_124_);
v_a_128_ = lean_ctor_get(v___x_127_, 0);
v_isSharedCheck_136_ = !lean_is_exclusive(v___x_127_);
if (v_isSharedCheck_136_ == 0)
{
v___x_130_ = v___x_127_;
v_isShared_131_ = v_isSharedCheck_136_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_a_128_);
lean_dec(v___x_127_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_136_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_132_; lean_object* v___x_134_; 
lean_inc(v_ref_126_);
v___x_132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_132_, 0, v_ref_126_);
lean_ctor_set(v___x_132_, 1, v_a_128_);
if (v_isShared_131_ == 0)
{
lean_ctor_set_tag(v___x_130_, 1);
lean_ctor_set(v___x_130_, 0, v___x_132_);
v___x_134_ = v___x_130_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v___x_132_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0___redArg___boxed(lean_object* v_msg_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_){
_start:
{
lean_object* v_res_143_; 
v_res_143_ = l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0___redArg(v_msg_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_);
lean_dec(v___y_141_);
lean_dec_ref(v___y_140_);
lean_dec(v___y_139_);
lean_dec_ref(v___y_138_);
return v_res_143_;
}
}
static lean_object* _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__1(void){
_start:
{
lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_145_ = ((lean_object*)(l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__0));
v___x_146_ = l_Lean_stringToMessageData(v___x_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(lean_object* v_e_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; 
v___x_153_ = lean_obj_once(&l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__1, &l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__1_once, _init_l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___closed__1);
v___x_154_ = l_Lean_indentExpr(v_e_147_);
v___x_155_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_155_, 0, v___x_153_);
lean_ctor_set(v___x_155_, 1, v___x_154_);
v___x_156_ = l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0___redArg(v___x_155_, v_a_148_, v_a_149_, v_a_150_, v_a_151_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg___boxed(lean_object* v_e_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_, lean_object* v_a_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_157_, v_a_158_, v_a_159_, v_a_160_, v_a_161_);
lean_dec(v_a_161_);
lean_dec_ref(v_a_160_);
lean_dec(v_a_159_);
lean_dec_ref(v_a_158_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval(lean_object* v_00_u03b1_164_, lean_object* v_e_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_165_, v_a_166_, v_a_167_, v_a_168_, v_a_169_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___boxed(lean_object* v_00_u03b1_172_, lean_object* v_e_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval(v_00_u03b1_172_, v_e_173_, v_a_174_, v_a_175_, v_a_176_, v_a_177_);
lean_dec(v_a_177_);
lean_dec_ref(v_a_176_);
lean_dec(v_a_175_);
lean_dec_ref(v_a_174_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0(lean_object* v_00_u03b1_180_, lean_object* v_msg_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0___redArg(v_msg_181_, v___y_182_, v___y_183_, v___y_184_, v___y_185_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0___boxed(lean_object* v_00_u03b1_188_, lean_object* v_msg_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l_Lean_throwError___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval_spec__0(v_00_u03b1_188_, v_msg_189_, v___y_190_, v___y_191_, v___y_192_, v___y_193_);
lean_dec(v___y_193_);
lean_dec_ref(v___y_192_);
lean_dec(v___y_191_);
lean_dec_ref(v___y_190_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalNat___private__1(lean_object* v_e_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_){
_start:
{
lean_object* v___x_202_; 
lean_inc(v_a_200_);
lean_inc_ref(v_a_199_);
lean_inc(v_a_198_);
lean_inc_ref(v_a_197_);
v___x_202_ = lean_whnf(v_e_196_, v_a_197_, v_a_198_, v_a_199_, v_a_200_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v_a_203_; lean_object* v___x_204_; 
v_a_203_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_a_203_);
lean_dec_ref(v___x_202_);
lean_inc_ref(v_a_199_);
lean_inc(v_a_203_);
v___x_204_ = l_Lean_Meta_evalNat(v_a_203_, v_a_197_, v_a_198_, v_a_199_, v_a_200_);
if (lean_obj_tag(v___x_204_) == 0)
{
lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_214_; 
v_a_205_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_214_ == 0)
{
v___x_207_ = v___x_204_;
v_isShared_208_ = v_isSharedCheck_214_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v___x_204_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_214_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
if (lean_obj_tag(v_a_205_) == 1)
{
lean_object* v_val_209_; lean_object* v___x_211_; 
lean_dec(v_a_203_);
lean_dec(v_a_200_);
lean_dec_ref(v_a_199_);
lean_dec(v_a_198_);
lean_dec_ref(v_a_197_);
v_val_209_ = lean_ctor_get(v_a_205_, 0);
lean_inc(v_val_209_);
lean_dec_ref(v_a_205_);
if (v_isShared_208_ == 0)
{
lean_ctor_set(v___x_207_, 0, v_val_209_);
v___x_211_ = v___x_207_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_212_; 
v_reuseFailAlloc_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_212_, 0, v_val_209_);
v___x_211_ = v_reuseFailAlloc_212_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
return v___x_211_;
}
}
else
{
lean_object* v___x_213_; 
lean_del_object(v___x_207_);
lean_dec(v_a_205_);
v___x_213_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_203_, v_a_197_, v_a_198_, v_a_199_, v_a_200_);
lean_dec(v_a_200_);
lean_dec_ref(v_a_199_);
lean_dec(v_a_198_);
lean_dec_ref(v_a_197_);
return v___x_213_;
}
}
}
else
{
lean_object* v_a_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_222_; 
lean_dec(v_a_203_);
lean_dec(v_a_200_);
lean_dec_ref(v_a_199_);
lean_dec(v_a_198_);
lean_dec_ref(v_a_197_);
v_a_215_ = lean_ctor_get(v___x_204_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_204_);
if (v_isSharedCheck_222_ == 0)
{
v___x_217_ = v___x_204_;
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_a_215_);
lean_dec(v___x_204_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_220_; 
if (v_isShared_218_ == 0)
{
v___x_220_ = v___x_217_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_a_215_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
}
else
{
lean_object* v_a_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_230_; 
lean_dec(v_a_200_);
lean_dec_ref(v_a_199_);
lean_dec(v_a_198_);
lean_dec_ref(v_a_197_);
v_a_223_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_230_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_230_ == 0)
{
v___x_225_ = v___x_202_;
v_isShared_226_ = v_isSharedCheck_230_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_a_223_);
lean_dec(v___x_202_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_230_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
lean_object* v___x_228_; 
if (v_isShared_226_ == 0)
{
v___x_228_ = v___x_225_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v_a_223_);
v___x_228_ = v_reuseFailAlloc_229_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
return v___x_228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalNat___private__1___boxed(lean_object* v_e_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Lean_Meta_instReduceEvalNat___private__1(v_e_231_, v_a_232_, v_a_233_, v_a_234_, v_a_235_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalNat___lam__0(lean_object* v_e_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_){
_start:
{
lean_object* v___x_244_; 
lean_inc(v___y_242_);
lean_inc_ref(v___y_241_);
lean_inc(v___y_240_);
lean_inc_ref(v___y_239_);
v___x_244_ = lean_whnf(v_e_238_, v___y_239_, v___y_240_, v___y_241_, v___y_242_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v_a_245_; lean_object* v___x_246_; 
v_a_245_ = lean_ctor_get(v___x_244_, 0);
lean_inc(v_a_245_);
lean_dec_ref(v___x_244_);
lean_inc_ref(v___y_241_);
lean_inc(v_a_245_);
v___x_246_ = l_Lean_Meta_evalNat(v_a_245_, v___y_239_, v___y_240_, v___y_241_, v___y_242_);
if (lean_obj_tag(v___x_246_) == 0)
{
lean_object* v_a_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_256_; 
v_a_247_ = lean_ctor_get(v___x_246_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v___x_246_);
if (v_isSharedCheck_256_ == 0)
{
v___x_249_ = v___x_246_;
v_isShared_250_ = v_isSharedCheck_256_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_dec(v___x_246_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_256_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
if (lean_obj_tag(v_a_247_) == 1)
{
lean_object* v_val_251_; lean_object* v___x_253_; 
lean_dec(v_a_245_);
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
lean_dec(v___y_240_);
lean_dec_ref(v___y_239_);
v_val_251_ = lean_ctor_get(v_a_247_, 0);
lean_inc(v_val_251_);
lean_dec_ref(v_a_247_);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 0, v_val_251_);
v___x_253_ = v___x_249_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_val_251_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
else
{
lean_object* v___x_255_; 
lean_del_object(v___x_249_);
lean_dec(v_a_247_);
v___x_255_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_245_, v___y_239_, v___y_240_, v___y_241_, v___y_242_);
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
lean_dec(v___y_240_);
lean_dec_ref(v___y_239_);
return v___x_255_;
}
}
}
else
{
lean_object* v_a_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_264_; 
lean_dec(v_a_245_);
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
lean_dec(v___y_240_);
lean_dec_ref(v___y_239_);
v_a_257_ = lean_ctor_get(v___x_246_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v___x_246_);
if (v_isSharedCheck_264_ == 0)
{
v___x_259_ = v___x_246_;
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_a_257_);
lean_dec(v___x_246_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_264_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_262_; 
if (v_isShared_260_ == 0)
{
v___x_262_ = v___x_259_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v_a_257_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
}
else
{
lean_object* v_a_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_272_; 
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
lean_dec(v___y_240_);
lean_dec_ref(v___y_239_);
v_a_265_ = lean_ctor_get(v___x_244_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_244_);
if (v_isSharedCheck_272_ == 0)
{
v___x_267_ = v___x_244_;
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_a_265_);
lean_dec(v___x_244_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_272_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___x_270_; 
if (v_isShared_268_ == 0)
{
v___x_270_ = v___x_267_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_a_265_);
v___x_270_ = v_reuseFailAlloc_271_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
return v___x_270_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalNat___lam__0___boxed(lean_object* v_e_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l_Lean_Meta_instReduceEvalNat___lam__0(v_e_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___private__1___redArg(lean_object* v_inst_291_, lean_object* v_e_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_){
_start:
{
lean_object* v___x_298_; 
lean_inc(v_a_296_);
lean_inc_ref(v_a_295_);
lean_inc(v_a_294_);
lean_inc_ref(v_a_293_);
v___x_298_ = lean_whnf(v_e_292_, v_a_293_, v_a_294_, v_a_295_, v_a_296_);
if (lean_obj_tag(v___x_298_) == 0)
{
lean_object* v_a_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_343_; 
v_a_299_ = lean_ctor_get(v___x_298_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_298_);
if (v_isSharedCheck_343_ == 0)
{
v___x_301_ = v___x_298_;
v_isShared_302_ = v_isSharedCheck_343_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_a_299_);
lean_dec(v___x_298_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_343_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
uint8_t v___y_304_; lean_object* v___x_325_; 
v___x_325_ = l_Lean_Expr_getAppFn(v_a_299_);
if (lean_obj_tag(v___x_325_) == 4)
{
lean_object* v_declName_326_; lean_object* v___x_327_; uint8_t v___y_329_; lean_object* v___x_338_; uint8_t v___x_339_; 
v_declName_326_ = lean_ctor_get(v___x_325_, 0);
lean_inc(v_declName_326_);
lean_dec_ref(v___x_325_);
v___x_327_ = l_Lean_Expr_getAppNumArgs(v_a_299_);
v___x_338_ = ((lean_object*)(l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4));
v___x_339_ = lean_name_eq(v_declName_326_, v___x_338_);
if (v___x_339_ == 0)
{
v___y_329_ = v___x_339_;
goto v___jp_328_;
}
else
{
lean_object* v___x_340_; uint8_t v___x_341_; 
v___x_340_ = lean_unsigned_to_nat(0u);
v___x_341_ = lean_nat_dec_eq(v___x_327_, v___x_340_);
v___y_329_ = v___x_341_;
goto v___jp_328_;
}
v___jp_328_:
{
if (v___y_329_ == 0)
{
lean_object* v___x_330_; uint8_t v___x_331_; 
lean_del_object(v___x_301_);
v___x_330_ = ((lean_object*)(l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2));
v___x_331_ = lean_name_eq(v_declName_326_, v___x_330_);
lean_dec(v_declName_326_);
if (v___x_331_ == 0)
{
lean_dec(v___x_327_);
v___y_304_ = v___x_331_;
goto v___jp_303_;
}
else
{
lean_object* v___x_332_; uint8_t v___x_333_; 
v___x_332_ = lean_unsigned_to_nat(1u);
v___x_333_ = lean_nat_dec_eq(v___x_327_, v___x_332_);
lean_dec(v___x_327_);
v___y_304_ = v___x_333_;
goto v___jp_303_;
}
}
else
{
lean_object* v___x_334_; lean_object* v___x_336_; 
lean_dec(v___x_327_);
lean_dec(v_declName_326_);
lean_dec(v_a_299_);
lean_dec(v_a_296_);
lean_dec_ref(v_a_295_);
lean_dec(v_a_294_);
lean_dec_ref(v_a_293_);
lean_dec_ref(v_inst_291_);
v___x_334_ = lean_box(0);
if (v_isShared_302_ == 0)
{
lean_ctor_set(v___x_301_, 0, v___x_334_);
v___x_336_ = v___x_301_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v___x_334_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
}
else
{
lean_object* v___x_342_; 
lean_dec_ref(v___x_325_);
lean_del_object(v___x_301_);
lean_dec_ref(v_inst_291_);
v___x_342_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_299_, v_a_293_, v_a_294_, v_a_295_, v_a_296_);
lean_dec(v_a_296_);
lean_dec_ref(v_a_295_);
lean_dec(v_a_294_);
lean_dec_ref(v_a_293_);
return v___x_342_;
}
v___jp_303_:
{
if (v___y_304_ == 0)
{
lean_object* v___x_305_; 
lean_dec_ref(v_inst_291_);
v___x_305_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_299_, v_a_293_, v_a_294_, v_a_295_, v_a_296_);
lean_dec(v_a_296_);
lean_dec_ref(v_a_295_);
lean_dec(v_a_294_);
lean_dec_ref(v_a_293_);
return v___x_305_;
}
else
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = l_Lean_Expr_appArg_x21(v_a_299_);
lean_dec(v_a_299_);
v___x_307_ = l_Lean_Meta_reduceEval___redArg(v_inst_291_, v___x_306_, v_a_293_, v_a_294_, v_a_295_, v_a_296_);
if (lean_obj_tag(v___x_307_) == 0)
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_316_; 
v_a_308_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_316_ == 0)
{
v___x_310_ = v___x_307_;
v_isShared_311_ = v_isSharedCheck_316_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_307_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_316_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_312_; lean_object* v___x_314_; 
v___x_312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_312_, 0, v_a_308_);
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 0, v___x_312_);
v___x_314_ = v___x_310_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v___x_312_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
else
{
lean_object* v_a_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_324_; 
v_a_317_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_324_ == 0)
{
v___x_319_ = v___x_307_;
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_a_317_);
lean_dec(v___x_307_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_322_; 
if (v_isShared_320_ == 0)
{
v___x_322_ = v___x_319_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_a_317_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
lean_dec(v_a_296_);
lean_dec_ref(v_a_295_);
lean_dec(v_a_294_);
lean_dec_ref(v_a_293_);
lean_dec_ref(v_inst_291_);
v_a_344_ = lean_ctor_get(v___x_298_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_298_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_298_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_298_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___private__1___redArg___boxed(lean_object* v_inst_352_, lean_object* v_e_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Lean_Meta_instReduceEvalOption___private__1___redArg(v_inst_352_, v_e_353_, v_a_354_, v_a_355_, v_a_356_, v_a_357_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___private__1(lean_object* v_00_u03b1_360_, lean_object* v_inst_361_, lean_object* v_e_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_){
_start:
{
lean_object* v___x_368_; 
lean_inc(v_a_366_);
lean_inc_ref(v_a_365_);
lean_inc(v_a_364_);
lean_inc_ref(v_a_363_);
v___x_368_ = lean_whnf(v_e_362_, v_a_363_, v_a_364_, v_a_365_, v_a_366_);
if (lean_obj_tag(v___x_368_) == 0)
{
lean_object* v_a_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_413_; 
v_a_369_ = lean_ctor_get(v___x_368_, 0);
v_isSharedCheck_413_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_413_ == 0)
{
v___x_371_ = v___x_368_;
v_isShared_372_ = v_isSharedCheck_413_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_a_369_);
lean_dec(v___x_368_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_413_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
uint8_t v___y_374_; lean_object* v___x_395_; 
v___x_395_ = l_Lean_Expr_getAppFn(v_a_369_);
if (lean_obj_tag(v___x_395_) == 4)
{
lean_object* v_declName_396_; lean_object* v___x_397_; uint8_t v___y_399_; lean_object* v___x_408_; uint8_t v___x_409_; 
v_declName_396_ = lean_ctor_get(v___x_395_, 0);
lean_inc(v_declName_396_);
lean_dec_ref(v___x_395_);
v___x_397_ = l_Lean_Expr_getAppNumArgs(v_a_369_);
v___x_408_ = ((lean_object*)(l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4));
v___x_409_ = lean_name_eq(v_declName_396_, v___x_408_);
if (v___x_409_ == 0)
{
v___y_399_ = v___x_409_;
goto v___jp_398_;
}
else
{
lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = lean_unsigned_to_nat(0u);
v___x_411_ = lean_nat_dec_eq(v___x_397_, v___x_410_);
v___y_399_ = v___x_411_;
goto v___jp_398_;
}
v___jp_398_:
{
if (v___y_399_ == 0)
{
lean_object* v___x_400_; uint8_t v___x_401_; 
lean_del_object(v___x_371_);
v___x_400_ = ((lean_object*)(l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2));
v___x_401_ = lean_name_eq(v_declName_396_, v___x_400_);
lean_dec(v_declName_396_);
if (v___x_401_ == 0)
{
lean_dec(v___x_397_);
v___y_374_ = v___x_401_;
goto v___jp_373_;
}
else
{
lean_object* v___x_402_; uint8_t v___x_403_; 
v___x_402_ = lean_unsigned_to_nat(1u);
v___x_403_ = lean_nat_dec_eq(v___x_397_, v___x_402_);
lean_dec(v___x_397_);
v___y_374_ = v___x_403_;
goto v___jp_373_;
}
}
else
{
lean_object* v___x_404_; lean_object* v___x_406_; 
lean_dec(v___x_397_);
lean_dec(v_declName_396_);
lean_dec(v_a_369_);
lean_dec(v_a_366_);
lean_dec_ref(v_a_365_);
lean_dec(v_a_364_);
lean_dec_ref(v_a_363_);
lean_dec_ref(v_inst_361_);
v___x_404_ = lean_box(0);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 0, v___x_404_);
v___x_406_ = v___x_371_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___x_404_);
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
else
{
lean_object* v___x_412_; 
lean_dec_ref(v___x_395_);
lean_del_object(v___x_371_);
lean_dec_ref(v_inst_361_);
v___x_412_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_369_, v_a_363_, v_a_364_, v_a_365_, v_a_366_);
lean_dec(v_a_366_);
lean_dec_ref(v_a_365_);
lean_dec(v_a_364_);
lean_dec_ref(v_a_363_);
return v___x_412_;
}
v___jp_373_:
{
if (v___y_374_ == 0)
{
lean_object* v___x_375_; 
lean_dec_ref(v_inst_361_);
v___x_375_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_369_, v_a_363_, v_a_364_, v_a_365_, v_a_366_);
lean_dec(v_a_366_);
lean_dec_ref(v_a_365_);
lean_dec(v_a_364_);
lean_dec_ref(v_a_363_);
return v___x_375_;
}
else
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = l_Lean_Expr_appArg_x21(v_a_369_);
lean_dec(v_a_369_);
v___x_377_ = l_Lean_Meta_reduceEval___redArg(v_inst_361_, v___x_376_, v_a_363_, v_a_364_, v_a_365_, v_a_366_);
if (lean_obj_tag(v___x_377_) == 0)
{
lean_object* v_a_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_386_; 
v_a_378_ = lean_ctor_get(v___x_377_, 0);
v_isSharedCheck_386_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_386_ == 0)
{
v___x_380_ = v___x_377_;
v_isShared_381_ = v_isSharedCheck_386_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_a_378_);
lean_dec(v___x_377_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_386_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_382_; lean_object* v___x_384_; 
v___x_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_382_, 0, v_a_378_);
if (v_isShared_381_ == 0)
{
lean_ctor_set(v___x_380_, 0, v___x_382_);
v___x_384_ = v___x_380_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v___x_382_);
v___x_384_ = v_reuseFailAlloc_385_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
return v___x_384_;
}
}
}
else
{
lean_object* v_a_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_394_; 
v_a_387_ = lean_ctor_get(v___x_377_, 0);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_377_);
if (v_isSharedCheck_394_ == 0)
{
v___x_389_ = v___x_377_;
v_isShared_390_ = v_isSharedCheck_394_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_a_387_);
lean_dec(v___x_377_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_394_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v___x_392_; 
if (v_isShared_390_ == 0)
{
v___x_392_ = v___x_389_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v_a_387_);
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
}
}
}
else
{
lean_object* v_a_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_421_; 
lean_dec(v_a_366_);
lean_dec_ref(v_a_365_);
lean_dec(v_a_364_);
lean_dec_ref(v_a_363_);
lean_dec_ref(v_inst_361_);
v_a_414_ = lean_ctor_get(v___x_368_, 0);
v_isSharedCheck_421_ = !lean_is_exclusive(v___x_368_);
if (v_isSharedCheck_421_ == 0)
{
v___x_416_ = v___x_368_;
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_a_414_);
lean_dec(v___x_368_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_421_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
lean_object* v___x_419_; 
if (v_isShared_417_ == 0)
{
v___x_419_ = v___x_416_;
goto v_reusejp_418_;
}
else
{
lean_object* v_reuseFailAlloc_420_; 
v_reuseFailAlloc_420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_420_, 0, v_a_414_);
v___x_419_ = v_reuseFailAlloc_420_;
goto v_reusejp_418_;
}
v_reusejp_418_:
{
return v___x_419_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___private__1___boxed(lean_object* v_00_u03b1_422_, lean_object* v_inst_423_, lean_object* v_e_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l_Lean_Meta_instReduceEvalOption___private__1(v_00_u03b1_422_, v_inst_423_, v_e_424_, v_a_425_, v_a_426_, v_a_427_, v_a_428_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___redArg___lam__0(lean_object* v_inst_431_, lean_object* v_e_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
lean_object* v___x_438_; 
lean_inc(v___y_436_);
lean_inc_ref(v___y_435_);
lean_inc(v___y_434_);
lean_inc_ref(v___y_433_);
v___x_438_ = lean_whnf(v_e_432_, v___y_433_, v___y_434_, v___y_435_, v___y_436_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_483_; 
v_a_439_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_483_ == 0)
{
v___x_441_ = v___x_438_;
v_isShared_442_ = v_isSharedCheck_483_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_438_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_483_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
uint8_t v___y_444_; lean_object* v___x_465_; 
v___x_465_ = l_Lean_Expr_getAppFn(v_a_439_);
if (lean_obj_tag(v___x_465_) == 4)
{
lean_object* v_declName_466_; lean_object* v___x_467_; uint8_t v___y_469_; lean_object* v___x_478_; uint8_t v___x_479_; 
v_declName_466_ = lean_ctor_get(v___x_465_, 0);
lean_inc(v_declName_466_);
lean_dec_ref(v___x_465_);
v___x_467_ = l_Lean_Expr_getAppNumArgs(v_a_439_);
v___x_478_ = ((lean_object*)(l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__4));
v___x_479_ = lean_name_eq(v_declName_466_, v___x_478_);
if (v___x_479_ == 0)
{
v___y_469_ = v___x_479_;
goto v___jp_468_;
}
else
{
lean_object* v___x_480_; uint8_t v___x_481_; 
v___x_480_ = lean_unsigned_to_nat(0u);
v___x_481_ = lean_nat_dec_eq(v___x_467_, v___x_480_);
v___y_469_ = v___x_481_;
goto v___jp_468_;
}
v___jp_468_:
{
if (v___y_469_ == 0)
{
lean_object* v___x_470_; uint8_t v___x_471_; 
lean_del_object(v___x_441_);
v___x_470_ = ((lean_object*)(l_Lean_Meta_instReduceEvalOption___private__1___redArg___closed__2));
v___x_471_ = lean_name_eq(v_declName_466_, v___x_470_);
lean_dec(v_declName_466_);
if (v___x_471_ == 0)
{
lean_dec(v___x_467_);
v___y_444_ = v___x_471_;
goto v___jp_443_;
}
else
{
lean_object* v___x_472_; uint8_t v___x_473_; 
v___x_472_ = lean_unsigned_to_nat(1u);
v___x_473_ = lean_nat_dec_eq(v___x_467_, v___x_472_);
lean_dec(v___x_467_);
v___y_444_ = v___x_473_;
goto v___jp_443_;
}
}
else
{
lean_object* v___x_474_; lean_object* v___x_476_; 
lean_dec(v___x_467_);
lean_dec(v_declName_466_);
lean_dec(v_a_439_);
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
lean_dec(v___y_434_);
lean_dec_ref(v___y_433_);
lean_dec_ref(v_inst_431_);
v___x_474_ = lean_box(0);
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 0, v___x_474_);
v___x_476_ = v___x_441_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v___x_474_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
else
{
lean_object* v___x_482_; 
lean_dec_ref(v___x_465_);
lean_del_object(v___x_441_);
lean_dec_ref(v_inst_431_);
v___x_482_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_439_, v___y_433_, v___y_434_, v___y_435_, v___y_436_);
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
lean_dec(v___y_434_);
lean_dec_ref(v___y_433_);
return v___x_482_;
}
v___jp_443_:
{
if (v___y_444_ == 0)
{
lean_object* v___x_445_; 
lean_dec_ref(v_inst_431_);
v___x_445_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_439_, v___y_433_, v___y_434_, v___y_435_, v___y_436_);
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
lean_dec(v___y_434_);
lean_dec_ref(v___y_433_);
return v___x_445_;
}
else
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = l_Lean_Expr_appArg_x21(v_a_439_);
lean_dec(v_a_439_);
v___x_447_ = l_Lean_Meta_reduceEval___redArg(v_inst_431_, v___x_446_, v___y_433_, v___y_434_, v___y_435_, v___y_436_);
if (lean_obj_tag(v___x_447_) == 0)
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_456_; 
v_a_448_ = lean_ctor_get(v___x_447_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_456_ == 0)
{
v___x_450_ = v___x_447_;
v_isShared_451_ = v_isSharedCheck_456_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_447_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_456_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_452_; lean_object* v___x_454_; 
v___x_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_452_, 0, v_a_448_);
if (v_isShared_451_ == 0)
{
lean_ctor_set(v___x_450_, 0, v___x_452_);
v___x_454_ = v___x_450_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v___x_452_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
v_a_457_ = lean_ctor_get(v___x_447_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_447_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_447_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_a_457_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_491_; 
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
lean_dec(v___y_434_);
lean_dec_ref(v___y_433_);
lean_dec_ref(v_inst_431_);
v_a_484_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_491_ == 0)
{
v___x_486_ = v___x_438_;
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_438_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_489_; 
if (v_isShared_487_ == 0)
{
v___x_489_ = v___x_486_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_a_484_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___redArg___lam__0___boxed(lean_object* v_inst_492_, lean_object* v_e_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l_Lean_Meta_instReduceEvalOption___redArg___lam__0(v_inst_492_, v_e_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption___redArg(lean_object* v_inst_500_){
_start:
{
lean_object* v___f_501_; 
v___f_501_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalOption___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_501_, 0, v_inst_500_);
return v___f_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalOption(lean_object* v_00_u03b1_502_, lean_object* v_inst_503_){
_start:
{
lean_object* v___f_504_; 
v___f_504_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalOption___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_504_, 0, v_inst_503_);
return v___f_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalString___private__1(lean_object* v_e_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_){
_start:
{
lean_object* v___x_511_; 
lean_inc(v_a_509_);
lean_inc_ref(v_a_508_);
lean_inc(v_a_507_);
lean_inc_ref(v_a_506_);
lean_inc_ref(v_e_505_);
v___x_511_ = lean_whnf(v_e_505_, v_a_506_, v_a_507_, v_a_508_, v_a_509_);
if (lean_obj_tag(v___x_511_) == 0)
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_523_; 
v_a_512_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_523_ == 0)
{
v___x_514_ = v___x_511_;
v_isShared_515_ = v_isSharedCheck_523_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v___x_511_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_523_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
if (lean_obj_tag(v_a_512_) == 9)
{
lean_object* v_a_516_; 
v_a_516_ = lean_ctor_get(v_a_512_, 0);
lean_inc_ref(v_a_516_);
lean_dec_ref(v_a_512_);
if (lean_obj_tag(v_a_516_) == 1)
{
lean_object* v_val_517_; lean_object* v___x_519_; 
lean_dec(v_a_509_);
lean_dec_ref(v_a_508_);
lean_dec(v_a_507_);
lean_dec_ref(v_a_506_);
lean_dec_ref(v_e_505_);
v_val_517_ = lean_ctor_get(v_a_516_, 0);
lean_inc_ref(v_val_517_);
lean_dec_ref(v_a_516_);
if (v_isShared_515_ == 0)
{
lean_ctor_set(v___x_514_, 0, v_val_517_);
v___x_519_ = v___x_514_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_val_517_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
else
{
lean_object* v___x_521_; 
lean_dec_ref(v_a_516_);
lean_del_object(v___x_514_);
v___x_521_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_505_, v_a_506_, v_a_507_, v_a_508_, v_a_509_);
lean_dec(v_a_509_);
lean_dec_ref(v_a_508_);
lean_dec(v_a_507_);
lean_dec_ref(v_a_506_);
return v___x_521_;
}
}
else
{
lean_object* v___x_522_; 
lean_del_object(v___x_514_);
lean_dec(v_a_512_);
v___x_522_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_505_, v_a_506_, v_a_507_, v_a_508_, v_a_509_);
lean_dec(v_a_509_);
lean_dec_ref(v_a_508_);
lean_dec(v_a_507_);
lean_dec_ref(v_a_506_);
return v___x_522_;
}
}
}
else
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_531_; 
lean_dec(v_a_509_);
lean_dec_ref(v_a_508_);
lean_dec(v_a_507_);
lean_dec_ref(v_a_506_);
lean_dec_ref(v_e_505_);
v_a_524_ = lean_ctor_get(v___x_511_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_511_);
if (v_isSharedCheck_531_ == 0)
{
v___x_526_ = v___x_511_;
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v___x_511_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_529_; 
if (v_isShared_527_ == 0)
{
v___x_529_ = v___x_526_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_a_524_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalString___private__1___boxed(lean_object* v_e_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_){
_start:
{
lean_object* v_res_538_; 
v_res_538_ = l_Lean_Meta_instReduceEvalString___private__1(v_e_532_, v_a_533_, v_a_534_, v_a_535_, v_a_536_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalString___lam__0(lean_object* v_e_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_){
_start:
{
lean_object* v___x_545_; 
lean_inc(v___y_543_);
lean_inc_ref(v___y_542_);
lean_inc(v___y_541_);
lean_inc_ref(v___y_540_);
lean_inc_ref(v_e_539_);
v___x_545_ = lean_whnf(v_e_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_);
if (lean_obj_tag(v___x_545_) == 0)
{
lean_object* v_a_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_557_; 
v_a_546_ = lean_ctor_get(v___x_545_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_545_);
if (v_isSharedCheck_557_ == 0)
{
v___x_548_ = v___x_545_;
v_isShared_549_ = v_isSharedCheck_557_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_a_546_);
lean_dec(v___x_545_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_557_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
if (lean_obj_tag(v_a_546_) == 9)
{
lean_object* v_a_550_; 
v_a_550_ = lean_ctor_get(v_a_546_, 0);
lean_inc_ref(v_a_550_);
lean_dec_ref(v_a_546_);
if (lean_obj_tag(v_a_550_) == 1)
{
lean_object* v_val_551_; lean_object* v___x_553_; 
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
lean_dec_ref(v_e_539_);
v_val_551_ = lean_ctor_get(v_a_550_, 0);
lean_inc_ref(v_val_551_);
lean_dec_ref(v_a_550_);
if (v_isShared_549_ == 0)
{
lean_ctor_set(v___x_548_, 0, v_val_551_);
v___x_553_ = v___x_548_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_val_551_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
else
{
lean_object* v___x_555_; 
lean_dec_ref(v_a_550_);
lean_del_object(v___x_548_);
v___x_555_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
return v___x_555_;
}
}
else
{
lean_object* v___x_556_; 
lean_del_object(v___x_548_);
lean_dec(v_a_546_);
v___x_556_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
return v___x_556_;
}
}
}
else
{
lean_object* v_a_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_565_; 
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
lean_dec_ref(v_e_539_);
v_a_558_ = lean_ctor_get(v___x_545_, 0);
v_isSharedCheck_565_ = !lean_is_exclusive(v___x_545_);
if (v_isSharedCheck_565_ == 0)
{
v___x_560_ = v___x_545_;
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v___x_545_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_563_; 
if (v_isShared_561_ == 0)
{
v___x_563_ = v___x_560_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_a_558_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
return v___x_563_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalString___lam__0___boxed(lean_object* v_e_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l_Lean_Meta_instReduceEvalString___lam__0(v_e_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__0(lean_object* v_e_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_){
_start:
{
uint8_t v___y_582_; lean_object* v___x_669_; uint8_t v_transparency_670_; uint8_t v___x_671_; uint8_t v___x_672_; 
v___x_669_ = l_Lean_Meta_Context_config(v_a_576_);
v_transparency_670_ = lean_ctor_get_uint8(v___x_669_, 9);
lean_dec_ref(v___x_669_);
v___x_671_ = 1;
v___x_672_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_670_, v___x_671_);
if (v___x_672_ == 0)
{
v___y_582_ = v_transparency_670_;
goto v___jp_581_;
}
else
{
v___y_582_ = v___x_671_;
goto v___jp_581_;
}
v___jp_581_:
{
lean_object* v___x_583_; uint8_t v_foApprox_584_; uint8_t v_ctxApprox_585_; uint8_t v_quasiPatternApprox_586_; uint8_t v_constApprox_587_; uint8_t v_isDefEqStuckEx_588_; uint8_t v_unificationHints_589_; uint8_t v_proofIrrelevance_590_; uint8_t v_assignSyntheticOpaque_591_; uint8_t v_offsetCnstrs_592_; uint8_t v_etaStruct_593_; uint8_t v_univApprox_594_; uint8_t v_iota_595_; uint8_t v_beta_596_; uint8_t v_proj_597_; uint8_t v_zeta_598_; uint8_t v_zetaDelta_599_; uint8_t v_zetaUnused_600_; uint8_t v_zetaHave_601_; lean_object* v___x_603_; uint8_t v_isShared_604_; uint8_t v_isSharedCheck_668_; 
v___x_583_ = l_Lean_Meta_Context_config(v_a_576_);
v_foApprox_584_ = lean_ctor_get_uint8(v___x_583_, 0);
v_ctxApprox_585_ = lean_ctor_get_uint8(v___x_583_, 1);
v_quasiPatternApprox_586_ = lean_ctor_get_uint8(v___x_583_, 2);
v_constApprox_587_ = lean_ctor_get_uint8(v___x_583_, 3);
v_isDefEqStuckEx_588_ = lean_ctor_get_uint8(v___x_583_, 4);
v_unificationHints_589_ = lean_ctor_get_uint8(v___x_583_, 5);
v_proofIrrelevance_590_ = lean_ctor_get_uint8(v___x_583_, 6);
v_assignSyntheticOpaque_591_ = lean_ctor_get_uint8(v___x_583_, 7);
v_offsetCnstrs_592_ = lean_ctor_get_uint8(v___x_583_, 8);
v_etaStruct_593_ = lean_ctor_get_uint8(v___x_583_, 10);
v_univApprox_594_ = lean_ctor_get_uint8(v___x_583_, 11);
v_iota_595_ = lean_ctor_get_uint8(v___x_583_, 12);
v_beta_596_ = lean_ctor_get_uint8(v___x_583_, 13);
v_proj_597_ = lean_ctor_get_uint8(v___x_583_, 14);
v_zeta_598_ = lean_ctor_get_uint8(v___x_583_, 15);
v_zetaDelta_599_ = lean_ctor_get_uint8(v___x_583_, 16);
v_zetaUnused_600_ = lean_ctor_get_uint8(v___x_583_, 17);
v_zetaHave_601_ = lean_ctor_get_uint8(v___x_583_, 18);
v_isSharedCheck_668_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_668_ == 0)
{
v___x_603_ = v___x_583_;
v_isShared_604_ = v_isSharedCheck_668_;
goto v_resetjp_602_;
}
else
{
lean_dec(v___x_583_);
v___x_603_ = lean_box(0);
v_isShared_604_ = v_isSharedCheck_668_;
goto v_resetjp_602_;
}
v_resetjp_602_:
{
uint8_t v_trackZetaDelta_605_; lean_object* v_zetaDeltaSet_606_; lean_object* v_lctx_607_; lean_object* v_localInstances_608_; lean_object* v_defEqCtx_x3f_609_; lean_object* v_synthPendingDepth_610_; lean_object* v_canUnfold_x3f_611_; uint8_t v_univApprox_612_; uint8_t v_inTypeClassResolution_613_; uint8_t v_cacheInferType_614_; lean_object* v_config_616_; 
v_trackZetaDelta_605_ = lean_ctor_get_uint8(v_a_576_, sizeof(void*)*7);
v_zetaDeltaSet_606_ = lean_ctor_get(v_a_576_, 1);
lean_inc(v_zetaDeltaSet_606_);
v_lctx_607_ = lean_ctor_get(v_a_576_, 2);
lean_inc_ref(v_lctx_607_);
v_localInstances_608_ = lean_ctor_get(v_a_576_, 3);
lean_inc_ref(v_localInstances_608_);
v_defEqCtx_x3f_609_ = lean_ctor_get(v_a_576_, 4);
lean_inc(v_defEqCtx_x3f_609_);
v_synthPendingDepth_610_ = lean_ctor_get(v_a_576_, 5);
lean_inc(v_synthPendingDepth_610_);
v_canUnfold_x3f_611_ = lean_ctor_get(v_a_576_, 6);
lean_inc(v_canUnfold_x3f_611_);
v_univApprox_612_ = lean_ctor_get_uint8(v_a_576_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_613_ = lean_ctor_get_uint8(v_a_576_, sizeof(void*)*7 + 2);
v_cacheInferType_614_ = lean_ctor_get_uint8(v_a_576_, sizeof(void*)*7 + 3);
if (v_isShared_604_ == 0)
{
v_config_616_ = v___x_603_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, 0, v_foApprox_584_);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, 1, v_ctxApprox_585_);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, 2, v_quasiPatternApprox_586_);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, 3, v_constApprox_587_);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, 4, v_isDefEqStuckEx_588_);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, 5, v_unificationHints_589_);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, 6, v_proofIrrelevance_590_);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, 7, v_assignSyntheticOpaque_591_);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, 8, v_offsetCnstrs_592_);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, 10, v_etaStruct_593_);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, 11, v_univApprox_594_);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, 12, v_iota_595_);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, 13, v_beta_596_);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, 14, v_proj_597_);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, 15, v_zeta_598_);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, 16, v_zetaDelta_599_);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, 17, v_zetaUnused_600_);
lean_ctor_set_uint8(v_reuseFailAlloc_667_, 18, v_zetaHave_601_);
v_config_616_ = v_reuseFailAlloc_667_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
uint64_t v___x_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_659_; 
lean_ctor_set_uint8(v_config_616_, 9, v___y_582_);
v___x_617_ = l_Lean_Meta_Context_configKey(v_a_576_);
v_isSharedCheck_659_ = !lean_is_exclusive(v_a_576_);
if (v_isSharedCheck_659_ == 0)
{
lean_object* v_unused_660_; lean_object* v_unused_661_; lean_object* v_unused_662_; lean_object* v_unused_663_; lean_object* v_unused_664_; lean_object* v_unused_665_; lean_object* v_unused_666_; 
v_unused_660_ = lean_ctor_get(v_a_576_, 6);
lean_dec(v_unused_660_);
v_unused_661_ = lean_ctor_get(v_a_576_, 5);
lean_dec(v_unused_661_);
v_unused_662_ = lean_ctor_get(v_a_576_, 4);
lean_dec(v_unused_662_);
v_unused_663_ = lean_ctor_get(v_a_576_, 3);
lean_dec(v_unused_663_);
v_unused_664_ = lean_ctor_get(v_a_576_, 2);
lean_dec(v_unused_664_);
v_unused_665_ = lean_ctor_get(v_a_576_, 1);
lean_dec(v_unused_665_);
v_unused_666_ = lean_ctor_get(v_a_576_, 0);
lean_dec(v_unused_666_);
v___x_619_ = v_a_576_;
v_isShared_620_ = v_isSharedCheck_659_;
goto v_resetjp_618_;
}
else
{
lean_dec(v_a_576_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_659_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
uint64_t v___x_621_; uint64_t v___x_622_; uint64_t v___x_623_; uint64_t v___x_624_; uint64_t v_key_625_; lean_object* v___x_626_; lean_object* v___x_628_; 
v___x_621_ = 2ULL;
v___x_622_ = lean_uint64_shift_right(v___x_617_, v___x_621_);
v___x_623_ = lean_uint64_shift_left(v___x_622_, v___x_621_);
v___x_624_ = l_Lean_Meta_TransparencyMode_toUInt64(v___y_582_);
v_key_625_ = lean_uint64_lor(v___x_623_, v___x_624_);
v___x_626_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_626_, 0, v_config_616_);
lean_ctor_set_uint64(v___x_626_, sizeof(void*)*1, v_key_625_);
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 0, v___x_626_);
v___x_628_ = v___x_619_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v___x_626_);
lean_ctor_set(v_reuseFailAlloc_658_, 1, v_zetaDeltaSet_606_);
lean_ctor_set(v_reuseFailAlloc_658_, 2, v_lctx_607_);
lean_ctor_set(v_reuseFailAlloc_658_, 3, v_localInstances_608_);
lean_ctor_set(v_reuseFailAlloc_658_, 4, v_defEqCtx_x3f_609_);
lean_ctor_set(v_reuseFailAlloc_658_, 5, v_synthPendingDepth_610_);
lean_ctor_set(v_reuseFailAlloc_658_, 6, v_canUnfold_x3f_611_);
lean_ctor_set_uint8(v_reuseFailAlloc_658_, sizeof(void*)*7, v_trackZetaDelta_605_);
lean_ctor_set_uint8(v_reuseFailAlloc_658_, sizeof(void*)*7 + 1, v_univApprox_612_);
lean_ctor_set_uint8(v_reuseFailAlloc_658_, sizeof(void*)*7 + 2, v_inTypeClassResolution_613_);
lean_ctor_set_uint8(v_reuseFailAlloc_658_, sizeof(void*)*7 + 3, v_cacheInferType_614_);
v___x_628_ = v_reuseFailAlloc_658_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
lean_object* v___x_629_; 
lean_inc(v_a_579_);
lean_inc_ref(v_a_578_);
lean_inc(v_a_577_);
lean_inc_ref(v___x_628_);
v___x_629_ = lean_whnf(v_e_575_, v___x_628_, v_a_577_, v_a_578_, v_a_579_);
if (lean_obj_tag(v___x_629_) == 0)
{
lean_object* v_a_630_; lean_object* v___x_631_; 
v_a_630_ = lean_ctor_get(v___x_629_, 0);
lean_inc(v_a_630_);
lean_dec_ref(v___x_629_);
lean_inc_ref(v_a_578_);
lean_inc(v_a_630_);
v___x_631_ = l_Lean_Meta_evalNat(v_a_630_, v___x_628_, v_a_577_, v_a_578_, v_a_579_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_641_; 
v_a_632_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_641_ == 0)
{
v___x_634_ = v___x_631_;
v_isShared_635_ = v_isSharedCheck_641_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v___x_631_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_641_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
if (lean_obj_tag(v_a_632_) == 1)
{
lean_object* v_val_636_; lean_object* v___x_638_; 
lean_dec(v_a_630_);
lean_dec_ref(v___x_628_);
lean_dec(v_a_579_);
lean_dec_ref(v_a_578_);
lean_dec(v_a_577_);
v_val_636_ = lean_ctor_get(v_a_632_, 0);
lean_inc(v_val_636_);
lean_dec_ref(v_a_632_);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 0, v_val_636_);
v___x_638_ = v___x_634_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_val_636_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
else
{
lean_object* v___x_640_; 
lean_del_object(v___x_634_);
lean_dec(v_a_632_);
v___x_640_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_630_, v___x_628_, v_a_577_, v_a_578_, v_a_579_);
lean_dec(v_a_579_);
lean_dec_ref(v_a_578_);
lean_dec(v_a_577_);
lean_dec_ref(v___x_628_);
return v___x_640_;
}
}
}
else
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_649_; 
lean_dec(v_a_630_);
lean_dec_ref(v___x_628_);
lean_dec(v_a_579_);
lean_dec_ref(v_a_578_);
lean_dec(v_a_577_);
v_a_642_ = lean_ctor_get(v___x_631_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_631_);
if (v_isSharedCheck_649_ == 0)
{
v___x_644_ = v___x_631_;
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_631_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_647_; 
if (v_isShared_645_ == 0)
{
v___x_647_ = v___x_644_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_a_642_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
}
else
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_657_; 
lean_dec_ref(v___x_628_);
lean_dec(v_a_579_);
lean_dec_ref(v_a_578_);
lean_dec(v_a_577_);
v_a_650_ = lean_ctor_get(v___x_629_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_629_);
if (v_isSharedCheck_657_ == 0)
{
v___x_652_ = v___x_629_;
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_629_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_a_650_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__0___boxed(lean_object* v_e_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_){
_start:
{
lean_object* v_res_679_; 
v_res_679_ = l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__0(v_e_673_, v_a_674_, v_a_675_, v_a_676_, v_a_677_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__1(lean_object* v_e_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_){
_start:
{
uint8_t v___y_687_; lean_object* v___x_766_; uint8_t v_transparency_767_; uint8_t v___x_768_; uint8_t v___x_769_; 
v___x_766_ = l_Lean_Meta_Context_config(v_a_681_);
v_transparency_767_ = lean_ctor_get_uint8(v___x_766_, 9);
lean_dec_ref(v___x_766_);
v___x_768_ = 1;
v___x_769_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_767_, v___x_768_);
if (v___x_769_ == 0)
{
v___y_687_ = v_transparency_767_;
goto v___jp_686_;
}
else
{
v___y_687_ = v___x_768_;
goto v___jp_686_;
}
v___jp_686_:
{
lean_object* v___x_688_; uint8_t v_foApprox_689_; uint8_t v_ctxApprox_690_; uint8_t v_quasiPatternApprox_691_; uint8_t v_constApprox_692_; uint8_t v_isDefEqStuckEx_693_; uint8_t v_unificationHints_694_; uint8_t v_proofIrrelevance_695_; uint8_t v_assignSyntheticOpaque_696_; uint8_t v_offsetCnstrs_697_; uint8_t v_etaStruct_698_; uint8_t v_univApprox_699_; uint8_t v_iota_700_; uint8_t v_beta_701_; uint8_t v_proj_702_; uint8_t v_zeta_703_; uint8_t v_zetaDelta_704_; uint8_t v_zetaUnused_705_; uint8_t v_zetaHave_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_765_; 
v___x_688_ = l_Lean_Meta_Context_config(v_a_681_);
v_foApprox_689_ = lean_ctor_get_uint8(v___x_688_, 0);
v_ctxApprox_690_ = lean_ctor_get_uint8(v___x_688_, 1);
v_quasiPatternApprox_691_ = lean_ctor_get_uint8(v___x_688_, 2);
v_constApprox_692_ = lean_ctor_get_uint8(v___x_688_, 3);
v_isDefEqStuckEx_693_ = lean_ctor_get_uint8(v___x_688_, 4);
v_unificationHints_694_ = lean_ctor_get_uint8(v___x_688_, 5);
v_proofIrrelevance_695_ = lean_ctor_get_uint8(v___x_688_, 6);
v_assignSyntheticOpaque_696_ = lean_ctor_get_uint8(v___x_688_, 7);
v_offsetCnstrs_697_ = lean_ctor_get_uint8(v___x_688_, 8);
v_etaStruct_698_ = lean_ctor_get_uint8(v___x_688_, 10);
v_univApprox_699_ = lean_ctor_get_uint8(v___x_688_, 11);
v_iota_700_ = lean_ctor_get_uint8(v___x_688_, 12);
v_beta_701_ = lean_ctor_get_uint8(v___x_688_, 13);
v_proj_702_ = lean_ctor_get_uint8(v___x_688_, 14);
v_zeta_703_ = lean_ctor_get_uint8(v___x_688_, 15);
v_zetaDelta_704_ = lean_ctor_get_uint8(v___x_688_, 16);
v_zetaUnused_705_ = lean_ctor_get_uint8(v___x_688_, 17);
v_zetaHave_706_ = lean_ctor_get_uint8(v___x_688_, 18);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_688_);
if (v_isSharedCheck_765_ == 0)
{
v___x_708_ = v___x_688_;
v_isShared_709_ = v_isSharedCheck_765_;
goto v_resetjp_707_;
}
else
{
lean_dec(v___x_688_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_765_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
uint8_t v_trackZetaDelta_710_; lean_object* v_zetaDeltaSet_711_; lean_object* v_lctx_712_; lean_object* v_localInstances_713_; lean_object* v_defEqCtx_x3f_714_; lean_object* v_synthPendingDepth_715_; lean_object* v_canUnfold_x3f_716_; uint8_t v_univApprox_717_; uint8_t v_inTypeClassResolution_718_; uint8_t v_cacheInferType_719_; lean_object* v_config_721_; 
v_trackZetaDelta_710_ = lean_ctor_get_uint8(v_a_681_, sizeof(void*)*7);
v_zetaDeltaSet_711_ = lean_ctor_get(v_a_681_, 1);
lean_inc(v_zetaDeltaSet_711_);
v_lctx_712_ = lean_ctor_get(v_a_681_, 2);
lean_inc_ref(v_lctx_712_);
v_localInstances_713_ = lean_ctor_get(v_a_681_, 3);
lean_inc_ref(v_localInstances_713_);
v_defEqCtx_x3f_714_ = lean_ctor_get(v_a_681_, 4);
lean_inc(v_defEqCtx_x3f_714_);
v_synthPendingDepth_715_ = lean_ctor_get(v_a_681_, 5);
lean_inc(v_synthPendingDepth_715_);
v_canUnfold_x3f_716_ = lean_ctor_get(v_a_681_, 6);
lean_inc(v_canUnfold_x3f_716_);
v_univApprox_717_ = lean_ctor_get_uint8(v_a_681_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_718_ = lean_ctor_get_uint8(v_a_681_, sizeof(void*)*7 + 2);
v_cacheInferType_719_ = lean_ctor_get_uint8(v_a_681_, sizeof(void*)*7 + 3);
if (v_isShared_709_ == 0)
{
v_config_721_ = v___x_708_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, 0, v_foApprox_689_);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, 1, v_ctxApprox_690_);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, 2, v_quasiPatternApprox_691_);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, 3, v_constApprox_692_);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, 4, v_isDefEqStuckEx_693_);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, 5, v_unificationHints_694_);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, 6, v_proofIrrelevance_695_);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, 7, v_assignSyntheticOpaque_696_);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, 8, v_offsetCnstrs_697_);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, 10, v_etaStruct_698_);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, 11, v_univApprox_699_);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, 12, v_iota_700_);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, 13, v_beta_701_);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, 14, v_proj_702_);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, 15, v_zeta_703_);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, 16, v_zetaDelta_704_);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, 17, v_zetaUnused_705_);
lean_ctor_set_uint8(v_reuseFailAlloc_764_, 18, v_zetaHave_706_);
v_config_721_ = v_reuseFailAlloc_764_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
uint64_t v___x_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_756_; 
lean_ctor_set_uint8(v_config_721_, 9, v___y_687_);
v___x_722_ = l_Lean_Meta_Context_configKey(v_a_681_);
v_isSharedCheck_756_ = !lean_is_exclusive(v_a_681_);
if (v_isSharedCheck_756_ == 0)
{
lean_object* v_unused_757_; lean_object* v_unused_758_; lean_object* v_unused_759_; lean_object* v_unused_760_; lean_object* v_unused_761_; lean_object* v_unused_762_; lean_object* v_unused_763_; 
v_unused_757_ = lean_ctor_get(v_a_681_, 6);
lean_dec(v_unused_757_);
v_unused_758_ = lean_ctor_get(v_a_681_, 5);
lean_dec(v_unused_758_);
v_unused_759_ = lean_ctor_get(v_a_681_, 4);
lean_dec(v_unused_759_);
v_unused_760_ = lean_ctor_get(v_a_681_, 3);
lean_dec(v_unused_760_);
v_unused_761_ = lean_ctor_get(v_a_681_, 2);
lean_dec(v_unused_761_);
v_unused_762_ = lean_ctor_get(v_a_681_, 1);
lean_dec(v_unused_762_);
v_unused_763_ = lean_ctor_get(v_a_681_, 0);
lean_dec(v_unused_763_);
v___x_724_ = v_a_681_;
v_isShared_725_ = v_isSharedCheck_756_;
goto v_resetjp_723_;
}
else
{
lean_dec(v_a_681_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_756_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
uint64_t v___x_726_; uint64_t v___x_727_; uint64_t v___x_728_; uint64_t v___x_729_; uint64_t v_key_730_; lean_object* v___x_731_; lean_object* v___x_733_; 
v___x_726_ = 2ULL;
v___x_727_ = lean_uint64_shift_right(v___x_722_, v___x_726_);
v___x_728_ = lean_uint64_shift_left(v___x_727_, v___x_726_);
v___x_729_ = l_Lean_Meta_TransparencyMode_toUInt64(v___y_687_);
v_key_730_ = lean_uint64_lor(v___x_728_, v___x_729_);
v___x_731_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_731_, 0, v_config_721_);
lean_ctor_set_uint64(v___x_731_, sizeof(void*)*1, v_key_730_);
if (v_isShared_725_ == 0)
{
lean_ctor_set(v___x_724_, 0, v___x_731_);
v___x_733_ = v___x_724_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v___x_731_);
lean_ctor_set(v_reuseFailAlloc_755_, 1, v_zetaDeltaSet_711_);
lean_ctor_set(v_reuseFailAlloc_755_, 2, v_lctx_712_);
lean_ctor_set(v_reuseFailAlloc_755_, 3, v_localInstances_713_);
lean_ctor_set(v_reuseFailAlloc_755_, 4, v_defEqCtx_x3f_714_);
lean_ctor_set(v_reuseFailAlloc_755_, 5, v_synthPendingDepth_715_);
lean_ctor_set(v_reuseFailAlloc_755_, 6, v_canUnfold_x3f_716_);
lean_ctor_set_uint8(v_reuseFailAlloc_755_, sizeof(void*)*7, v_trackZetaDelta_710_);
lean_ctor_set_uint8(v_reuseFailAlloc_755_, sizeof(void*)*7 + 1, v_univApprox_717_);
lean_ctor_set_uint8(v_reuseFailAlloc_755_, sizeof(void*)*7 + 2, v_inTypeClassResolution_718_);
lean_ctor_set_uint8(v_reuseFailAlloc_755_, sizeof(void*)*7 + 3, v_cacheInferType_719_);
v___x_733_ = v_reuseFailAlloc_755_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v___x_734_; 
lean_inc(v_a_684_);
lean_inc_ref(v_a_683_);
lean_inc(v_a_682_);
lean_inc_ref(v___x_733_);
lean_inc_ref(v_e_680_);
v___x_734_ = lean_whnf(v_e_680_, v___x_733_, v_a_682_, v_a_683_, v_a_684_);
if (lean_obj_tag(v___x_734_) == 0)
{
lean_object* v_a_735_; lean_object* v___x_737_; uint8_t v_isShared_738_; uint8_t v_isSharedCheck_746_; 
v_a_735_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_746_ == 0)
{
v___x_737_ = v___x_734_;
v_isShared_738_ = v_isSharedCheck_746_;
goto v_resetjp_736_;
}
else
{
lean_inc(v_a_735_);
lean_dec(v___x_734_);
v___x_737_ = lean_box(0);
v_isShared_738_ = v_isSharedCheck_746_;
goto v_resetjp_736_;
}
v_resetjp_736_:
{
if (lean_obj_tag(v_a_735_) == 9)
{
lean_object* v_a_739_; 
v_a_739_ = lean_ctor_get(v_a_735_, 0);
lean_inc_ref(v_a_739_);
lean_dec_ref(v_a_735_);
if (lean_obj_tag(v_a_739_) == 1)
{
lean_object* v_val_740_; lean_object* v___x_742_; 
lean_dec_ref(v___x_733_);
lean_dec(v_a_684_);
lean_dec_ref(v_a_683_);
lean_dec(v_a_682_);
lean_dec_ref(v_e_680_);
v_val_740_ = lean_ctor_get(v_a_739_, 0);
lean_inc_ref(v_val_740_);
lean_dec_ref(v_a_739_);
if (v_isShared_738_ == 0)
{
lean_ctor_set(v___x_737_, 0, v_val_740_);
v___x_742_ = v___x_737_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_val_740_);
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
lean_object* v___x_744_; 
lean_dec_ref(v_a_739_);
lean_del_object(v___x_737_);
v___x_744_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_680_, v___x_733_, v_a_682_, v_a_683_, v_a_684_);
lean_dec(v_a_684_);
lean_dec_ref(v_a_683_);
lean_dec(v_a_682_);
lean_dec_ref(v___x_733_);
return v___x_744_;
}
}
else
{
lean_object* v___x_745_; 
lean_del_object(v___x_737_);
lean_dec(v_a_735_);
v___x_745_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_680_, v___x_733_, v_a_682_, v_a_683_, v_a_684_);
lean_dec(v_a_684_);
lean_dec_ref(v_a_683_);
lean_dec(v_a_682_);
lean_dec_ref(v___x_733_);
return v___x_745_;
}
}
}
else
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
lean_dec_ref(v___x_733_);
lean_dec(v_a_684_);
lean_dec_ref(v_a_683_);
lean_dec(v_a_682_);
lean_dec_ref(v_e_680_);
v_a_747_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v___x_734_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___x_734_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_747_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__1___boxed(lean_object* v_e_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_){
_start:
{
lean_object* v_res_776_; 
v_res_776_ = l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__1(v_e_770_, v_a_771_, v_a_772_, v_a_773_, v_a_774_);
return v_res_776_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___lam__0(lean_object* v___x_777_, lean_object* v_00___778_){
_start:
{
lean_object* v___x_779_; uint8_t v___x_780_; 
v___x_779_ = lean_unsigned_to_nat(2u);
v___x_780_ = lean_nat_dec_eq(v___x_777_, v___x_779_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___lam__0___boxed(lean_object* v___x_781_, lean_object* v_00___782_){
_start:
{
uint8_t v_res_783_; lean_object* v_r_784_; 
v_res_783_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___lam__0(v___x_781_, v_00___782_);
lean_dec(v___x_781_);
v_r_784_ = lean_box(v_res_783_);
return v_r_784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName(lean_object* v_e_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_, lean_object* v_a_806_){
_start:
{
lean_object* v___x_808_; 
lean_inc(v_a_806_);
lean_inc_ref(v_a_805_);
lean_inc(v_a_804_);
lean_inc_ref(v_a_803_);
v___x_808_ = lean_whnf(v_e_802_, v_a_803_, v_a_804_, v_a_805_, v_a_806_);
if (lean_obj_tag(v___x_808_) == 0)
{
lean_object* v_a_809_; lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_890_; 
v_a_809_ = lean_ctor_get(v___x_808_, 0);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_808_);
if (v_isSharedCheck_890_ == 0)
{
v___x_811_ = v___x_808_;
v_isShared_812_ = v_isSharedCheck_890_;
goto v_resetjp_810_;
}
else
{
lean_inc(v_a_809_);
lean_dec(v___x_808_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_890_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v___x_813_; 
v___x_813_ = l_Lean_Expr_getAppFn(v_a_809_);
if (lean_obj_tag(v___x_813_) == 4)
{
lean_object* v_declName_814_; lean_object* v___x_815_; uint8_t v___y_817_; uint8_t v___y_845_; uint8_t v___y_876_; lean_object* v___x_885_; uint8_t v___x_886_; 
v_declName_814_ = lean_ctor_get(v___x_813_, 0);
lean_inc(v_declName_814_);
lean_dec_ref(v___x_813_);
v___x_815_ = l_Lean_Expr_getAppNumArgs(v_a_809_);
v___x_885_ = ((lean_object*)(l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__7));
v___x_886_ = lean_name_eq(v_declName_814_, v___x_885_);
if (v___x_886_ == 0)
{
v___y_876_ = v___x_886_;
goto v___jp_875_;
}
else
{
lean_object* v___x_887_; uint8_t v___x_888_; 
v___x_887_ = lean_unsigned_to_nat(0u);
v___x_888_ = lean_nat_dec_eq(v___x_815_, v___x_887_);
v___y_876_ = v___x_888_;
goto v___jp_875_;
}
v___jp_816_:
{
if (v___y_817_ == 0)
{
lean_object* v___x_818_; 
lean_dec(v___x_815_);
v___x_818_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_809_, v_a_803_, v_a_804_, v_a_805_, v_a_806_);
lean_dec(v_a_806_);
lean_dec_ref(v_a_805_);
lean_dec(v_a_804_);
lean_dec_ref(v_a_803_);
return v___x_818_;
}
else
{
lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_819_ = lean_unsigned_to_nat(1u);
v___x_820_ = lean_nat_sub(v___x_815_, v___x_819_);
lean_dec(v___x_815_);
lean_inc(v___x_820_);
v___x_821_ = l_Lean_Expr_getRevArg_x21(v_a_809_, v___x_820_);
lean_inc(v_a_806_);
lean_inc_ref(v_a_805_);
lean_inc(v_a_804_);
lean_inc_ref(v_a_803_);
v___x_822_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName(v___x_821_, v_a_803_, v_a_804_, v_a_805_, v_a_806_);
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v_a_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v_a_823_ = lean_ctor_get(v___x_822_, 0);
lean_inc(v_a_823_);
lean_dec_ref(v___x_822_);
v___x_824_ = lean_nat_sub(v___x_820_, v___x_819_);
lean_dec(v___x_820_);
v___x_825_ = l_Lean_Expr_getRevArg_x21(v_a_809_, v___x_824_);
lean_dec(v_a_809_);
v___x_826_ = l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__0(v___x_825_, v_a_803_, v_a_804_, v_a_805_, v_a_806_);
if (lean_obj_tag(v___x_826_) == 0)
{
lean_object* v_a_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_835_; 
v_a_827_ = lean_ctor_get(v___x_826_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_826_);
if (v_isSharedCheck_835_ == 0)
{
v___x_829_ = v___x_826_;
v_isShared_830_ = v_isSharedCheck_835_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_a_827_);
lean_dec(v___x_826_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_835_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_831_; lean_object* v___x_833_; 
v___x_831_ = l_Lean_Name_num___override(v_a_823_, v_a_827_);
if (v_isShared_830_ == 0)
{
lean_ctor_set(v___x_829_, 0, v___x_831_);
v___x_833_ = v___x_829_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v___x_831_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
return v___x_833_;
}
}
}
else
{
lean_object* v_a_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_843_; 
lean_dec(v_a_823_);
v_a_836_ = lean_ctor_get(v___x_826_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v___x_826_);
if (v_isSharedCheck_843_ == 0)
{
v___x_838_ = v___x_826_;
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_a_836_);
lean_dec(v___x_826_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_841_; 
if (v_isShared_839_ == 0)
{
v___x_841_ = v___x_838_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_a_836_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
}
else
{
lean_dec(v___x_820_);
lean_dec(v_a_809_);
lean_dec(v_a_806_);
lean_dec_ref(v_a_805_);
lean_dec(v_a_804_);
lean_dec_ref(v_a_803_);
return v___x_822_;
}
}
}
v___jp_844_:
{
if (v___y_845_ == 0)
{
lean_object* v___x_846_; uint8_t v___x_847_; 
v___x_846_ = ((lean_object*)(l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__3));
v___x_847_ = lean_name_eq(v_declName_814_, v___x_846_);
lean_dec(v_declName_814_);
if (v___x_847_ == 0)
{
v___y_817_ = v___x_847_;
goto v___jp_816_;
}
else
{
lean_object* v___x_848_; uint8_t v___x_849_; 
v___x_848_ = lean_box(0);
v___x_849_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___lam__0(v___x_815_, v___x_848_);
v___y_817_ = v___x_849_;
goto v___jp_816_;
}
}
else
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
lean_dec(v_declName_814_);
v___x_850_ = lean_unsigned_to_nat(1u);
v___x_851_ = lean_nat_sub(v___x_815_, v___x_850_);
lean_dec(v___x_815_);
lean_inc(v___x_851_);
v___x_852_ = l_Lean_Expr_getRevArg_x21(v_a_809_, v___x_851_);
lean_inc(v_a_806_);
lean_inc_ref(v_a_805_);
lean_inc(v_a_804_);
lean_inc_ref(v_a_803_);
v___x_853_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName(v___x_852_, v_a_803_, v_a_804_, v_a_805_, v_a_806_);
if (lean_obj_tag(v___x_853_) == 0)
{
lean_object* v_a_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v_a_854_ = lean_ctor_get(v___x_853_, 0);
lean_inc(v_a_854_);
lean_dec_ref(v___x_853_);
v___x_855_ = lean_nat_sub(v___x_851_, v___x_850_);
lean_dec(v___x_851_);
v___x_856_ = l_Lean_Expr_getRevArg_x21(v_a_809_, v___x_855_);
lean_dec(v_a_809_);
v___x_857_ = l_Lean_Meta_reduceEval___at___00__private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName_spec__1(v___x_856_, v_a_803_, v_a_804_, v_a_805_, v_a_806_);
if (lean_obj_tag(v___x_857_) == 0)
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_866_; 
v_a_858_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_866_ == 0)
{
v___x_860_ = v___x_857_;
v_isShared_861_ = v_isSharedCheck_866_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v___x_857_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_866_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_862_; lean_object* v___x_864_; 
v___x_862_ = l_Lean_Name_str___override(v_a_854_, v_a_858_);
if (v_isShared_861_ == 0)
{
lean_ctor_set(v___x_860_, 0, v___x_862_);
v___x_864_ = v___x_860_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v___x_862_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
else
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
lean_dec(v_a_854_);
v_a_867_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_874_ == 0)
{
v___x_869_ = v___x_857_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_857_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_867_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
}
else
{
lean_dec(v___x_851_);
lean_dec(v_a_809_);
lean_dec(v_a_806_);
lean_dec_ref(v_a_805_);
lean_dec(v_a_804_);
lean_dec_ref(v_a_803_);
return v___x_853_;
}
}
}
v___jp_875_:
{
if (v___y_876_ == 0)
{
lean_object* v___x_877_; uint8_t v___x_878_; 
lean_del_object(v___x_811_);
v___x_877_ = ((lean_object*)(l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__5));
v___x_878_ = lean_name_eq(v_declName_814_, v___x_877_);
if (v___x_878_ == 0)
{
v___y_845_ = v___x_878_;
goto v___jp_844_;
}
else
{
lean_object* v___x_879_; uint8_t v___x_880_; 
v___x_879_ = lean_box(0);
v___x_880_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___lam__0(v___x_815_, v___x_879_);
v___y_845_ = v___x_880_;
goto v___jp_844_;
}
}
else
{
lean_object* v___x_881_; lean_object* v___x_883_; 
lean_dec(v___x_815_);
lean_dec(v_declName_814_);
lean_dec(v_a_809_);
lean_dec(v_a_806_);
lean_dec_ref(v_a_805_);
lean_dec(v_a_804_);
lean_dec_ref(v_a_803_);
v___x_881_ = lean_box(0);
if (v_isShared_812_ == 0)
{
lean_ctor_set(v___x_811_, 0, v___x_881_);
v___x_883_ = v___x_811_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v___x_881_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
}
}
else
{
lean_object* v___x_889_; 
lean_dec_ref(v___x_813_);
lean_del_object(v___x_811_);
v___x_889_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_809_, v_a_803_, v_a_804_, v_a_805_, v_a_806_);
lean_dec(v_a_806_);
lean_dec_ref(v_a_805_);
lean_dec(v_a_804_);
lean_dec_ref(v_a_803_);
return v___x_889_;
}
}
}
else
{
lean_object* v_a_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_898_; 
lean_dec(v_a_806_);
lean_dec_ref(v_a_805_);
lean_dec(v_a_804_);
lean_dec_ref(v_a_803_);
v_a_891_ = lean_ctor_get(v___x_808_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_808_);
if (v_isSharedCheck_898_ == 0)
{
v___x_893_ = v___x_808_;
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_a_891_);
lean_dec(v___x_808_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_896_; 
if (v_isShared_894_ == 0)
{
v___x_896_ = v___x_893_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_a_891_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___boxed(lean_object* v_e_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_){
_start:
{
lean_object* v_res_905_; 
v_res_905_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName(v_e_899_, v_a_900_, v_a_901_, v_a_902_, v_a_903_);
return v_res_905_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalName___private__1(lean_object* v_e_906_, lean_object* v_a_907_, lean_object* v_a_908_, lean_object* v_a_909_, lean_object* v_a_910_){
_start:
{
lean_object* v___x_912_; 
v___x_912_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName(v_e_906_, v_a_907_, v_a_908_, v_a_909_, v_a_910_);
return v___x_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalName___private__1___boxed(lean_object* v_e_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_){
_start:
{
lean_object* v_res_919_; 
v_res_919_ = l_Lean_Meta_instReduceEvalName___private__1(v_e_913_, v_a_914_, v_a_915_, v_a_916_, v_a_917_);
return v_res_919_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg(lean_object* v_inst_925_, lean_object* v_e_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_){
_start:
{
lean_object* v___x_932_; 
lean_inc(v_a_930_);
lean_inc_ref(v_a_929_);
lean_inc(v_a_928_);
lean_inc_ref(v_a_927_);
v___x_932_ = lean_whnf(v_e_926_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
if (lean_obj_tag(v___x_932_) == 0)
{
lean_object* v_a_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_994_; 
v_a_933_ = lean_ctor_get(v___x_932_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_932_);
if (v_isSharedCheck_994_ == 0)
{
v___x_935_ = v___x_932_;
v_isShared_936_ = v_isSharedCheck_994_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_a_933_);
lean_dec(v___x_932_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_994_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_937_; 
v___x_937_ = l_Lean_Expr_getAppFn(v_a_933_);
if (lean_obj_tag(v___x_937_) == 4)
{
lean_object* v_declName_938_; 
v_declName_938_ = lean_ctor_get(v___x_937_, 0);
lean_inc(v_declName_938_);
lean_dec_ref(v___x_937_);
if (lean_obj_tag(v_declName_938_) == 1)
{
lean_object* v_pre_939_; 
v_pre_939_ = lean_ctor_get(v_declName_938_, 0);
lean_inc(v_pre_939_);
if (lean_obj_tag(v_pre_939_) == 1)
{
lean_object* v_pre_940_; 
v_pre_940_ = lean_ctor_get(v_pre_939_, 0);
if (lean_obj_tag(v_pre_940_) == 0)
{
lean_object* v_str_941_; lean_object* v_str_942_; lean_object* v___x_943_; uint8_t v___x_944_; 
v_str_941_ = lean_ctor_get(v_declName_938_, 1);
lean_inc_ref(v_str_941_);
lean_dec_ref(v_declName_938_);
v_str_942_ = lean_ctor_get(v_pre_939_, 1);
lean_inc_ref(v_str_942_);
lean_dec_ref(v_pre_939_);
v___x_943_ = ((lean_object*)(l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__0));
v___x_944_ = lean_string_dec_eq(v_str_942_, v___x_943_);
lean_dec_ref(v_str_942_);
if (v___x_944_ == 0)
{
lean_object* v___x_945_; 
lean_dec_ref(v_str_941_);
lean_del_object(v___x_935_);
lean_dec_ref(v_inst_925_);
v___x_945_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_933_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
return v___x_945_;
}
else
{
lean_object* v___x_946_; lean_object* v___x_947_; uint8_t v___x_948_; 
v___x_946_ = l_Lean_Expr_getAppNumArgs(v_a_933_);
v___x_947_ = ((lean_object*)(l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__1));
v___x_948_ = lean_string_dec_eq(v_str_941_, v___x_947_);
if (v___x_948_ == 0)
{
lean_object* v___x_949_; uint8_t v___x_950_; 
lean_del_object(v___x_935_);
v___x_949_ = ((lean_object*)(l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___closed__2));
v___x_950_ = lean_string_dec_eq(v_str_941_, v___x_949_);
lean_dec_ref(v_str_941_);
if (v___x_950_ == 0)
{
lean_object* v___x_951_; 
lean_dec(v___x_946_);
lean_dec_ref(v_inst_925_);
v___x_951_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_933_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
return v___x_951_;
}
else
{
lean_object* v___x_952_; uint8_t v___x_953_; 
v___x_952_ = lean_unsigned_to_nat(3u);
v___x_953_ = lean_nat_dec_eq(v___x_946_, v___x_952_);
if (v___x_953_ == 0)
{
lean_object* v___x_954_; 
lean_dec(v___x_946_);
lean_dec_ref(v_inst_925_);
v___x_954_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_933_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
return v___x_954_;
}
else
{
lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_955_ = lean_unsigned_to_nat(1u);
v___x_956_ = lean_nat_sub(v___x_946_, v___x_955_);
v___x_957_ = lean_nat_sub(v___x_956_, v___x_955_);
lean_dec(v___x_956_);
v___x_958_ = l_Lean_Expr_getRevArg_x21(v_a_933_, v___x_957_);
lean_inc(v_a_930_);
lean_inc_ref(v_a_929_);
lean_inc(v_a_928_);
lean_inc_ref(v_a_927_);
lean_inc_ref(v_inst_925_);
v___x_959_ = l_Lean_Meta_reduceEval___redArg(v_inst_925_, v___x_958_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
if (lean_obj_tag(v___x_959_) == 0)
{
lean_object* v_a_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v_a_960_ = lean_ctor_get(v___x_959_, 0);
lean_inc(v_a_960_);
lean_dec_ref(v___x_959_);
v___x_961_ = lean_unsigned_to_nat(2u);
v___x_962_ = lean_nat_sub(v___x_946_, v___x_961_);
lean_dec(v___x_946_);
v___x_963_ = lean_nat_sub(v___x_962_, v___x_955_);
lean_dec(v___x_962_);
v___x_964_ = l_Lean_Expr_getRevArg_x21(v_a_933_, v___x_963_);
lean_dec(v_a_933_);
v___x_965_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg(v_inst_925_, v___x_964_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
if (lean_obj_tag(v___x_965_) == 0)
{
lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_974_; 
v_a_966_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_974_ == 0)
{
v___x_968_ = v___x_965_;
v_isShared_969_ = v_isSharedCheck_974_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_965_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_974_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_970_; lean_object* v___x_972_; 
v___x_970_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_970_, 0, v_a_960_);
lean_ctor_set(v___x_970_, 1, v_a_966_);
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 0, v___x_970_);
v___x_972_ = v___x_968_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v___x_970_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
else
{
lean_dec(v_a_960_);
return v___x_965_;
}
}
else
{
lean_object* v_a_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_982_; 
lean_dec(v___x_946_);
lean_dec(v_a_933_);
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
lean_dec_ref(v_inst_925_);
v_a_975_ = lean_ctor_get(v___x_959_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_982_ == 0)
{
v___x_977_ = v___x_959_;
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_959_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_980_; 
if (v_isShared_978_ == 0)
{
v___x_980_ = v___x_977_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_a_975_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
}
}
}
}
else
{
lean_object* v___x_983_; uint8_t v___x_984_; 
lean_dec_ref(v_str_941_);
lean_dec_ref(v_inst_925_);
v___x_983_ = lean_unsigned_to_nat(1u);
v___x_984_ = lean_nat_dec_eq(v___x_946_, v___x_983_);
lean_dec(v___x_946_);
if (v___x_984_ == 0)
{
lean_object* v___x_985_; 
lean_del_object(v___x_935_);
v___x_985_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_933_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
return v___x_985_;
}
else
{
lean_object* v___x_986_; lean_object* v___x_988_; 
lean_dec(v_a_933_);
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
v___x_986_ = lean_box(0);
if (v_isShared_936_ == 0)
{
lean_ctor_set(v___x_935_, 0, v___x_986_);
v___x_988_ = v___x_935_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v___x_986_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
}
else
{
lean_object* v___x_990_; 
lean_dec_ref(v_pre_939_);
lean_dec_ref(v_declName_938_);
lean_del_object(v___x_935_);
lean_dec_ref(v_inst_925_);
v___x_990_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_933_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
return v___x_990_;
}
}
else
{
lean_object* v___x_991_; 
lean_dec_ref(v_declName_938_);
lean_dec(v_pre_939_);
lean_del_object(v___x_935_);
lean_dec_ref(v_inst_925_);
v___x_991_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_933_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
return v___x_991_;
}
}
else
{
lean_object* v___x_992_; 
lean_dec(v_declName_938_);
lean_del_object(v___x_935_);
lean_dec_ref(v_inst_925_);
v___x_992_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_933_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
return v___x_992_;
}
}
else
{
lean_object* v___x_993_; 
lean_dec_ref(v___x_937_);
lean_del_object(v___x_935_);
lean_dec_ref(v_inst_925_);
v___x_993_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_933_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
return v___x_993_;
}
}
}
else
{
lean_object* v_a_995_; lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1002_; 
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
lean_dec_ref(v_inst_925_);
v_a_995_ = lean_ctor_get(v___x_932_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_932_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_997_ = v___x_932_;
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
else
{
lean_inc(v_a_995_);
lean_dec(v___x_932_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_1000_; 
if (v_isShared_998_ == 0)
{
v___x_1000_ = v___x_997_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_a_995_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg___boxed(lean_object* v_inst_1003_, lean_object* v_e_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_){
_start:
{
lean_object* v_res_1010_; 
v_res_1010_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg(v_inst_1003_, v_e_1004_, v_a_1005_, v_a_1006_, v_a_1007_, v_a_1008_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList(lean_object* v_00_u03b1_1011_, lean_object* v_inst_1012_, lean_object* v_e_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_){
_start:
{
lean_object* v___x_1019_; 
v___x_1019_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg(v_inst_1012_, v_e_1013_, v_a_1014_, v_a_1015_, v_a_1016_, v_a_1017_);
return v___x_1019_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___boxed(lean_object* v_00_u03b1_1020_, lean_object* v_inst_1021_, lean_object* v_e_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList(v_00_u03b1_1020_, v_inst_1021_, v_e_1022_, v_a_1023_, v_a_1024_, v_a_1025_, v_a_1026_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___private__1___redArg(lean_object* v_inst_1029_, lean_object* v_e_1030_, lean_object* v_a_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_){
_start:
{
lean_object* v___x_1036_; 
v___x_1036_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg(v_inst_1029_, v_e_1030_, v_a_1031_, v_a_1032_, v_a_1033_, v_a_1034_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___private__1___redArg___boxed(lean_object* v_inst_1037_, lean_object* v_e_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l_Lean_Meta_instReduceEvalList___private__1___redArg(v_inst_1037_, v_e_1038_, v_a_1039_, v_a_1040_, v_a_1041_, v_a_1042_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___private__1(lean_object* v_00_u03b1_1045_, lean_object* v_inst_1046_, lean_object* v_e_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_){
_start:
{
lean_object* v___x_1053_; 
v___x_1053_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalList___redArg(v_inst_1046_, v_e_1047_, v_a_1048_, v_a_1049_, v_a_1050_, v_a_1051_);
return v___x_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___private__1___boxed(lean_object* v_00_u03b1_1054_, lean_object* v_inst_1055_, lean_object* v_e_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_Lean_Meta_instReduceEvalList___private__1(v_00_u03b1_1054_, v_inst_1055_, v_e_1056_, v_a_1057_, v_a_1058_, v_a_1059_, v_a_1060_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList___redArg(lean_object* v_inst_1063_){
_start:
{
lean_object* v___x_1064_; 
v___x_1064_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalList___private__1___boxed), 8, 2);
lean_closure_set(v___x_1064_, 0, lean_box(0));
lean_closure_set(v___x_1064_, 1, v_inst_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalList(lean_object* v_00_u03b1_1065_, lean_object* v_inst_1066_){
_start:
{
lean_object* v___x_1067_; 
v___x_1067_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalList___private__1___boxed), 8, 2);
lean_closure_set(v___x_1067_, 0, lean_box(0));
lean_closure_set(v___x_1067_, 1, v_inst_1066_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg(lean_object* v_n_1073_, lean_object* v_e_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_){
_start:
{
lean_object* v___x_1080_; 
lean_inc(v_a_1078_);
lean_inc_ref(v_a_1077_);
lean_inc(v_a_1076_);
lean_inc_ref(v_a_1075_);
v___x_1080_ = lean_whnf(v_e_1074_, v_a_1075_, v_a_1076_, v_a_1077_, v_a_1078_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v_a_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; uint8_t v___x_1084_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
lean_inc(v_a_1081_);
lean_dec_ref(v___x_1080_);
v___x_1082_ = ((lean_object*)(l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__2));
v___x_1083_ = lean_unsigned_to_nat(3u);
v___x_1084_ = l_Lean_Expr_isAppOfArity(v_a_1081_, v___x_1082_, v___x_1083_);
if (v___x_1084_ == 0)
{
lean_object* v___x_1085_; 
v___x_1085_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1081_, v_a_1075_, v_a_1076_, v_a_1077_, v_a_1078_);
lean_dec(v_a_1078_);
lean_dec_ref(v_a_1077_);
lean_dec(v_a_1076_);
lean_dec_ref(v_a_1075_);
return v___x_1085_;
}
else
{
lean_object* v___f_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___f_1086_ = ((lean_object*)(l_Lean_Meta_instReduceEvalNat___closed__0));
v___x_1087_ = lean_unsigned_to_nat(1u);
v___x_1088_ = l_Lean_Expr_getAppNumArgs(v_a_1081_);
v___x_1089_ = lean_nat_sub(v___x_1088_, v___x_1087_);
lean_dec(v___x_1088_);
v___x_1090_ = lean_nat_sub(v___x_1089_, v___x_1087_);
lean_dec(v___x_1089_);
v___x_1091_ = l_Lean_Expr_getRevArg_x21(v_a_1081_, v___x_1090_);
lean_dec(v_a_1081_);
v___x_1092_ = l_Lean_Meta_reduceEval___redArg(v___f_1086_, v___x_1091_, v_a_1075_, v_a_1076_, v_a_1077_, v_a_1078_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1101_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1095_ = v___x_1092_;
v_isShared_1096_ = v_isSharedCheck_1101_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_a_1093_);
lean_dec(v___x_1092_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1101_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
lean_object* v___x_1097_; lean_object* v___x_1099_; 
v___x_1097_ = lean_nat_mod(v_a_1093_, v_n_1073_);
lean_dec(v_a_1093_);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 0, v___x_1097_);
v___x_1099_ = v___x_1095_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v___x_1097_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
}
else
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1109_; 
v_a_1102_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1104_ = v___x_1092_;
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v___x_1092_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1107_; 
if (v_isShared_1105_ == 0)
{
v___x_1107_ = v___x_1104_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_a_1102_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
}
}
else
{
lean_object* v_a_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1117_; 
lean_dec(v_a_1078_);
lean_dec_ref(v_a_1077_);
lean_dec(v_a_1076_);
lean_dec_ref(v_a_1075_);
v_a_1110_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1112_ = v___x_1080_;
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_a_1110_);
lean_dec(v___x_1080_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1115_; 
if (v_isShared_1113_ == 0)
{
v___x_1115_ = v___x_1112_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_a_1110_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___boxed(lean_object* v_n_1118_, lean_object* v_e_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_){
_start:
{
lean_object* v_res_1125_; 
v_res_1125_ = l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg(v_n_1118_, v_e_1119_, v_a_1120_, v_a_1121_, v_a_1122_, v_a_1123_);
lean_dec(v_n_1118_);
return v_res_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1(lean_object* v_n_1126_, lean_object* v_inst_1127_, lean_object* v_e_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_){
_start:
{
lean_object* v___x_1134_; 
lean_inc(v_a_1132_);
lean_inc_ref(v_a_1131_);
lean_inc(v_a_1130_);
lean_inc_ref(v_a_1129_);
v___x_1134_ = lean_whnf(v_e_1128_, v_a_1129_, v_a_1130_, v_a_1131_, v_a_1132_);
if (lean_obj_tag(v___x_1134_) == 0)
{
lean_object* v_a_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; uint8_t v___x_1138_; 
v_a_1135_ = lean_ctor_get(v___x_1134_, 0);
lean_inc(v_a_1135_);
lean_dec_ref(v___x_1134_);
v___x_1136_ = ((lean_object*)(l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___redArg___closed__2));
v___x_1137_ = lean_unsigned_to_nat(3u);
v___x_1138_ = l_Lean_Expr_isAppOfArity(v_a_1135_, v___x_1136_, v___x_1137_);
if (v___x_1138_ == 0)
{
lean_object* v___x_1139_; 
v___x_1139_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1135_, v_a_1129_, v_a_1130_, v_a_1131_, v_a_1132_);
lean_dec(v_a_1132_);
lean_dec_ref(v_a_1131_);
lean_dec(v_a_1130_);
lean_dec_ref(v_a_1129_);
return v___x_1139_;
}
else
{
lean_object* v___f_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___f_1140_ = ((lean_object*)(l_Lean_Meta_instReduceEvalNat___closed__0));
v___x_1141_ = lean_unsigned_to_nat(1u);
v___x_1142_ = l_Lean_Expr_getAppNumArgs(v_a_1135_);
v___x_1143_ = lean_nat_sub(v___x_1142_, v___x_1141_);
lean_dec(v___x_1142_);
v___x_1144_ = lean_nat_sub(v___x_1143_, v___x_1141_);
lean_dec(v___x_1143_);
v___x_1145_ = l_Lean_Expr_getRevArg_x21(v_a_1135_, v___x_1144_);
lean_dec(v_a_1135_);
v___x_1146_ = l_Lean_Meta_reduceEval___redArg(v___f_1140_, v___x_1145_, v_a_1129_, v_a_1130_, v_a_1131_, v_a_1132_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1155_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1149_ = v___x_1146_;
v_isShared_1150_ = v_isSharedCheck_1155_;
goto v_resetjp_1148_;
}
else
{
lean_inc(v_a_1147_);
lean_dec(v___x_1146_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1155_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v___x_1151_; lean_object* v___x_1153_; 
v___x_1151_ = lean_nat_mod(v_a_1147_, v_n_1126_);
lean_dec(v_a_1147_);
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 0, v___x_1151_);
v___x_1153_ = v___x_1149_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1151_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
else
{
lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1163_; 
v_a_1156_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1158_ = v___x_1146_;
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_dec(v___x_1146_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1161_; 
if (v_isShared_1159_ == 0)
{
v___x_1161_ = v___x_1158_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v_a_1156_);
v___x_1161_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
return v___x_1161_;
}
}
}
}
}
else
{
lean_object* v_a_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1171_; 
lean_dec(v_a_1132_);
lean_dec_ref(v_a_1131_);
lean_dec(v_a_1130_);
lean_dec_ref(v_a_1129_);
v_a_1164_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1166_ = v___x_1134_;
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_a_1164_);
lean_dec(v___x_1134_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1169_; 
if (v_isShared_1167_ == 0)
{
v___x_1169_ = v___x_1166_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v_a_1164_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___boxed(lean_object* v_n_1172_, lean_object* v_inst_1173_, lean_object* v_e_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_){
_start:
{
lean_object* v_res_1180_; 
v_res_1180_ = l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1(v_n_1172_, v_inst_1173_, v_e_1174_, v_a_1175_, v_a_1176_, v_a_1177_, v_a_1178_);
lean_dec(v_n_1172_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat___redArg(lean_object* v_n_1181_){
_start:
{
lean_object* v___x_1182_; 
v___x_1182_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___boxed), 8, 2);
lean_closure_set(v___x_1182_, 0, v_n_1181_);
lean_closure_set(v___x_1182_, 1, lean_box(0));
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFinOfNeZeroNat(lean_object* v_n_1183_, lean_object* v_inst_1184_){
_start:
{
lean_object* v___x_1185_; 
v___x_1185_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___boxed), 8, 2);
lean_closure_set(v___x_1185_, 0, v_n_1183_);
lean_closure_set(v___x_1185_, 1, lean_box(0));
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBitVec___private__1(lean_object* v_n_1191_, lean_object* v_e_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_){
_start:
{
lean_object* v___x_1198_; 
lean_inc(v_a_1196_);
lean_inc_ref(v_a_1195_);
lean_inc(v_a_1194_);
lean_inc_ref(v_a_1193_);
v___x_1198_ = lean_whnf(v_e_1192_, v_a_1193_, v_a_1194_, v_a_1195_, v_a_1196_);
if (lean_obj_tag(v___x_1198_) == 0)
{
lean_object* v_a_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; uint8_t v___x_1202_; 
v_a_1199_ = lean_ctor_get(v___x_1198_, 0);
lean_inc(v_a_1199_);
lean_dec_ref(v___x_1198_);
v___x_1200_ = ((lean_object*)(l_Lean_Meta_instReduceEvalBitVec___private__1___closed__2));
v___x_1201_ = lean_unsigned_to_nat(2u);
v___x_1202_ = l_Lean_Expr_isAppOfArity(v_a_1199_, v___x_1200_, v___x_1201_);
if (v___x_1202_ == 0)
{
lean_object* v___x_1203_; 
v___x_1203_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1199_, v_a_1193_, v_a_1194_, v_a_1195_, v_a_1196_);
lean_dec(v_a_1196_);
lean_dec_ref(v_a_1195_);
lean_dec(v_a_1194_);
lean_dec_ref(v_a_1193_);
return v___x_1203_;
}
else
{
lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1204_ = lean_nat_pow(v___x_1201_, v_n_1191_);
v___x_1205_ = lean_unsigned_to_nat(1u);
v___x_1206_ = lean_nat_sub(v___x_1204_, v___x_1205_);
lean_dec(v___x_1204_);
v___x_1207_ = lean_nat_add(v___x_1206_, v___x_1205_);
lean_dec(v___x_1206_);
v___x_1208_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalFinOfNeZeroNat___private__1___boxed), 8, 2);
lean_closure_set(v___x_1208_, 0, v___x_1207_);
lean_closure_set(v___x_1208_, 1, lean_box(0));
v___x_1209_ = l_Lean_Expr_getAppNumArgs(v_a_1199_);
v___x_1210_ = lean_nat_sub(v___x_1209_, v___x_1205_);
lean_dec(v___x_1209_);
v___x_1211_ = lean_nat_sub(v___x_1210_, v___x_1205_);
lean_dec(v___x_1210_);
v___x_1212_ = l_Lean_Expr_getRevArg_x21(v_a_1199_, v___x_1211_);
lean_dec(v_a_1199_);
v___x_1213_ = l_Lean_Meta_reduceEval___redArg(v___x_1208_, v___x_1212_, v_a_1193_, v_a_1194_, v_a_1195_, v_a_1196_);
if (lean_obj_tag(v___x_1213_) == 0)
{
lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1221_; 
v_a_1214_ = lean_ctor_get(v___x_1213_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1216_ = v___x_1213_;
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v___x_1213_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1219_; 
if (v_isShared_1217_ == 0)
{
v___x_1219_ = v___x_1216_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_a_1214_);
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
lean_object* v_a_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1229_; 
v_a_1222_ = lean_ctor_get(v___x_1213_, 0);
v_isSharedCheck_1229_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1224_ = v___x_1213_;
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_a_1222_);
lean_dec(v___x_1213_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v___x_1227_; 
if (v_isShared_1225_ == 0)
{
v___x_1227_ = v___x_1224_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v_a_1222_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
}
}
}
else
{
lean_object* v_a_1230_; lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1237_; 
lean_dec(v_a_1196_);
lean_dec_ref(v_a_1195_);
lean_dec(v_a_1194_);
lean_dec_ref(v_a_1193_);
v_a_1230_ = lean_ctor_get(v___x_1198_, 0);
v_isSharedCheck_1237_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1232_ = v___x_1198_;
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
else
{
lean_inc(v_a_1230_);
lean_dec(v___x_1198_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
lean_object* v___x_1235_; 
if (v_isShared_1233_ == 0)
{
v___x_1235_ = v___x_1232_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_a_1230_);
v___x_1235_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
return v___x_1235_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBitVec___private__1___boxed(lean_object* v_n_1238_, lean_object* v_e_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_){
_start:
{
lean_object* v_res_1245_; 
v_res_1245_ = l_Lean_Meta_instReduceEvalBitVec___private__1(v_n_1238_, v_e_1239_, v_a_1240_, v_a_1241_, v_a_1242_, v_a_1243_);
lean_dec(v_n_1238_);
return v_res_1245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBitVec(lean_object* v_n_1246_){
_start:
{
lean_object* v___x_1247_; 
v___x_1247_ = lean_alloc_closure((void*)(l_Lean_Meta_instReduceEvalBitVec___private__1___boxed), 7, 1);
lean_closure_set(v___x_1247_, 0, v_n_1246_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBool___private__1(lean_object* v_e_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_){
_start:
{
lean_object* v___x_1263_; 
lean_inc(v_a_1261_);
lean_inc_ref(v_a_1260_);
lean_inc(v_a_1259_);
lean_inc_ref(v_a_1258_);
v___x_1263_ = lean_whnf(v_e_1257_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
if (lean_obj_tag(v___x_1263_) == 0)
{
lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1281_; 
v_a_1264_ = lean_ctor_get(v___x_1263_, 0);
v_isSharedCheck_1281_ = !lean_is_exclusive(v___x_1263_);
if (v_isSharedCheck_1281_ == 0)
{
v___x_1266_ = v___x_1263_;
v_isShared_1267_ = v_isSharedCheck_1281_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v___x_1263_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1281_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1268_; uint8_t v___x_1269_; 
v___x_1268_ = ((lean_object*)(l_Lean_Meta_instReduceEvalBool___private__1___closed__2));
v___x_1269_ = l_Lean_Expr_isAppOf(v_a_1264_, v___x_1268_);
if (v___x_1269_ == 0)
{
lean_object* v___x_1270_; uint8_t v___x_1271_; 
v___x_1270_ = ((lean_object*)(l_Lean_Meta_instReduceEvalBool___private__1___closed__4));
v___x_1271_ = l_Lean_Expr_isAppOf(v_a_1264_, v___x_1270_);
if (v___x_1271_ == 0)
{
lean_object* v___x_1272_; 
lean_del_object(v___x_1266_);
v___x_1272_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1264_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
lean_dec(v_a_1261_);
lean_dec_ref(v_a_1260_);
lean_dec(v_a_1259_);
lean_dec_ref(v_a_1258_);
return v___x_1272_;
}
else
{
lean_object* v___x_1273_; lean_object* v___x_1275_; 
lean_dec(v_a_1264_);
lean_dec(v_a_1261_);
lean_dec_ref(v_a_1260_);
lean_dec(v_a_1259_);
lean_dec_ref(v_a_1258_);
v___x_1273_ = lean_box(v___x_1269_);
if (v_isShared_1267_ == 0)
{
lean_ctor_set(v___x_1266_, 0, v___x_1273_);
v___x_1275_ = v___x_1266_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v___x_1273_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
}
else
{
lean_object* v___x_1277_; lean_object* v___x_1279_; 
lean_dec(v_a_1264_);
lean_dec(v_a_1261_);
lean_dec_ref(v_a_1260_);
lean_dec(v_a_1259_);
lean_dec_ref(v_a_1258_);
v___x_1277_ = lean_box(v___x_1269_);
if (v_isShared_1267_ == 0)
{
lean_ctor_set(v___x_1266_, 0, v___x_1277_);
v___x_1279_ = v___x_1266_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v___x_1277_);
v___x_1279_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
return v___x_1279_;
}
}
}
}
else
{
lean_object* v_a_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1289_; 
lean_dec(v_a_1261_);
lean_dec_ref(v_a_1260_);
lean_dec(v_a_1259_);
lean_dec_ref(v_a_1258_);
v_a_1282_ = lean_ctor_get(v___x_1263_, 0);
v_isSharedCheck_1289_ = !lean_is_exclusive(v___x_1263_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1284_ = v___x_1263_;
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_a_1282_);
lean_dec(v___x_1263_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___x_1287_; 
if (v_isShared_1285_ == 0)
{
v___x_1287_ = v___x_1284_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v_a_1282_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBool___private__1___boxed(lean_object* v_e_1290_, lean_object* v_a_1291_, lean_object* v_a_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_){
_start:
{
lean_object* v_res_1296_; 
v_res_1296_ = l_Lean_Meta_instReduceEvalBool___private__1(v_e_1290_, v_a_1291_, v_a_1292_, v_a_1293_, v_a_1294_);
return v_res_1296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBinderInfo___private__1(lean_object* v_e_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_){
_start:
{
lean_object* v___x_1310_; 
lean_inc(v_a_1308_);
lean_inc_ref(v_a_1307_);
lean_inc(v_a_1306_);
lean_inc_ref(v_a_1305_);
lean_inc_ref(v_e_1304_);
v___x_1310_ = lean_whnf(v_e_1304_, v_a_1305_, v_a_1306_, v_a_1307_, v_a_1308_);
if (lean_obj_tag(v___x_1310_) == 0)
{
lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1363_; 
v_a_1311_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1313_ = v___x_1310_;
v_isShared_1314_ = v_isSharedCheck_1363_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v___x_1310_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1363_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1315_; 
v___x_1315_ = l_Lean_Expr_constName_x3f(v_a_1311_);
lean_dec(v_a_1311_);
if (lean_obj_tag(v___x_1315_) == 1)
{
lean_object* v_val_1316_; 
v_val_1316_ = lean_ctor_get(v___x_1315_, 0);
lean_inc(v_val_1316_);
lean_dec_ref(v___x_1315_);
if (lean_obj_tag(v_val_1316_) == 1)
{
lean_object* v_pre_1317_; 
v_pre_1317_ = lean_ctor_get(v_val_1316_, 0);
lean_inc(v_pre_1317_);
if (lean_obj_tag(v_pre_1317_) == 1)
{
lean_object* v_pre_1318_; 
v_pre_1318_ = lean_ctor_get(v_pre_1317_, 0);
lean_inc(v_pre_1318_);
if (lean_obj_tag(v_pre_1318_) == 1)
{
lean_object* v_pre_1319_; 
v_pre_1319_ = lean_ctor_get(v_pre_1318_, 0);
if (lean_obj_tag(v_pre_1319_) == 0)
{
lean_object* v_str_1320_; lean_object* v_str_1321_; lean_object* v_str_1322_; lean_object* v___x_1323_; uint8_t v___x_1324_; 
v_str_1320_ = lean_ctor_get(v_val_1316_, 1);
lean_inc_ref(v_str_1320_);
lean_dec_ref(v_val_1316_);
v_str_1321_ = lean_ctor_get(v_pre_1317_, 1);
lean_inc_ref(v_str_1321_);
lean_dec_ref(v_pre_1317_);
v_str_1322_ = lean_ctor_get(v_pre_1318_, 1);
lean_inc_ref(v_str_1322_);
lean_dec_ref(v_pre_1318_);
v___x_1323_ = ((lean_object*)(l___private_Lean_Meta_ReduceEval_0__Lean_Meta_evalName___closed__0));
v___x_1324_ = lean_string_dec_eq(v_str_1322_, v___x_1323_);
lean_dec_ref(v_str_1322_);
if (v___x_1324_ == 0)
{
lean_object* v___x_1325_; 
lean_dec_ref(v_str_1321_);
lean_dec_ref(v_str_1320_);
lean_del_object(v___x_1313_);
v___x_1325_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_1304_, v_a_1305_, v_a_1306_, v_a_1307_, v_a_1308_);
lean_dec(v_a_1308_);
lean_dec_ref(v_a_1307_);
lean_dec(v_a_1306_);
lean_dec_ref(v_a_1305_);
return v___x_1325_;
}
else
{
lean_object* v___x_1326_; uint8_t v___x_1327_; 
v___x_1326_ = ((lean_object*)(l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__0));
v___x_1327_ = lean_string_dec_eq(v_str_1321_, v___x_1326_);
lean_dec_ref(v_str_1321_);
if (v___x_1327_ == 0)
{
lean_object* v___x_1328_; 
lean_dec_ref(v_str_1320_);
lean_del_object(v___x_1313_);
v___x_1328_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_1304_, v_a_1305_, v_a_1306_, v_a_1307_, v_a_1308_);
lean_dec(v_a_1308_);
lean_dec_ref(v_a_1307_);
lean_dec(v_a_1306_);
lean_dec_ref(v_a_1305_);
return v___x_1328_;
}
else
{
lean_object* v___x_1329_; uint8_t v___x_1330_; 
v___x_1329_ = ((lean_object*)(l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__1));
v___x_1330_ = lean_string_dec_eq(v_str_1320_, v___x_1329_);
if (v___x_1330_ == 0)
{
lean_object* v___x_1331_; uint8_t v___x_1332_; 
v___x_1331_ = ((lean_object*)(l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__2));
v___x_1332_ = lean_string_dec_eq(v_str_1320_, v___x_1331_);
if (v___x_1332_ == 0)
{
lean_object* v___x_1333_; uint8_t v___x_1334_; 
v___x_1333_ = ((lean_object*)(l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__3));
v___x_1334_ = lean_string_dec_eq(v_str_1320_, v___x_1333_);
if (v___x_1334_ == 0)
{
lean_object* v___x_1335_; uint8_t v___x_1336_; 
v___x_1335_ = ((lean_object*)(l_Lean_Meta_instReduceEvalBinderInfo___private__1___closed__4));
v___x_1336_ = lean_string_dec_eq(v_str_1320_, v___x_1335_);
lean_dec_ref(v_str_1320_);
if (v___x_1336_ == 0)
{
lean_object* v___x_1337_; 
lean_del_object(v___x_1313_);
v___x_1337_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_1304_, v_a_1305_, v_a_1306_, v_a_1307_, v_a_1308_);
lean_dec(v_a_1308_);
lean_dec_ref(v_a_1307_);
lean_dec(v_a_1306_);
lean_dec_ref(v_a_1305_);
return v___x_1337_;
}
else
{
uint8_t v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1341_; 
lean_dec(v_a_1308_);
lean_dec_ref(v_a_1307_);
lean_dec(v_a_1306_);
lean_dec_ref(v_a_1305_);
lean_dec_ref(v_e_1304_);
v___x_1338_ = 3;
v___x_1339_ = lean_box(v___x_1338_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 0, v___x_1339_);
v___x_1341_ = v___x_1313_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1342_; 
v_reuseFailAlloc_1342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1342_, 0, v___x_1339_);
v___x_1341_ = v_reuseFailAlloc_1342_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
return v___x_1341_;
}
}
}
else
{
uint8_t v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1346_; 
lean_dec_ref(v_str_1320_);
lean_dec(v_a_1308_);
lean_dec_ref(v_a_1307_);
lean_dec(v_a_1306_);
lean_dec_ref(v_a_1305_);
lean_dec_ref(v_e_1304_);
v___x_1343_ = 2;
v___x_1344_ = lean_box(v___x_1343_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 0, v___x_1344_);
v___x_1346_ = v___x_1313_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v___x_1344_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
return v___x_1346_;
}
}
}
else
{
uint8_t v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1351_; 
lean_dec_ref(v_str_1320_);
lean_dec(v_a_1308_);
lean_dec_ref(v_a_1307_);
lean_dec(v_a_1306_);
lean_dec_ref(v_a_1305_);
lean_dec_ref(v_e_1304_);
v___x_1348_ = 1;
v___x_1349_ = lean_box(v___x_1348_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 0, v___x_1349_);
v___x_1351_ = v___x_1313_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v___x_1349_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
return v___x_1351_;
}
}
}
else
{
uint8_t v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1356_; 
lean_dec_ref(v_str_1320_);
lean_dec(v_a_1308_);
lean_dec_ref(v_a_1307_);
lean_dec(v_a_1306_);
lean_dec_ref(v_a_1305_);
lean_dec_ref(v_e_1304_);
v___x_1353_ = 0;
v___x_1354_ = lean_box(v___x_1353_);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 0, v___x_1354_);
v___x_1356_ = v___x_1313_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v___x_1354_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
}
}
}
else
{
lean_object* v___x_1358_; 
lean_dec_ref(v_pre_1318_);
lean_dec_ref(v_pre_1317_);
lean_dec_ref(v_val_1316_);
lean_del_object(v___x_1313_);
v___x_1358_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_1304_, v_a_1305_, v_a_1306_, v_a_1307_, v_a_1308_);
lean_dec(v_a_1308_);
lean_dec_ref(v_a_1307_);
lean_dec(v_a_1306_);
lean_dec_ref(v_a_1305_);
return v___x_1358_;
}
}
else
{
lean_object* v___x_1359_; 
lean_dec_ref(v_pre_1317_);
lean_dec(v_pre_1318_);
lean_dec_ref(v_val_1316_);
lean_del_object(v___x_1313_);
v___x_1359_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_1304_, v_a_1305_, v_a_1306_, v_a_1307_, v_a_1308_);
lean_dec(v_a_1308_);
lean_dec_ref(v_a_1307_);
lean_dec(v_a_1306_);
lean_dec_ref(v_a_1305_);
return v___x_1359_;
}
}
else
{
lean_object* v___x_1360_; 
lean_dec(v_pre_1317_);
lean_dec_ref(v_val_1316_);
lean_del_object(v___x_1313_);
v___x_1360_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_1304_, v_a_1305_, v_a_1306_, v_a_1307_, v_a_1308_);
lean_dec(v_a_1308_);
lean_dec_ref(v_a_1307_);
lean_dec(v_a_1306_);
lean_dec_ref(v_a_1305_);
return v___x_1360_;
}
}
else
{
lean_object* v___x_1361_; 
lean_dec(v_val_1316_);
lean_del_object(v___x_1313_);
v___x_1361_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_1304_, v_a_1305_, v_a_1306_, v_a_1307_, v_a_1308_);
lean_dec(v_a_1308_);
lean_dec_ref(v_a_1307_);
lean_dec(v_a_1306_);
lean_dec_ref(v_a_1305_);
return v___x_1361_;
}
}
else
{
lean_object* v___x_1362_; 
lean_dec(v___x_1315_);
lean_del_object(v___x_1313_);
v___x_1362_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_e_1304_, v_a_1305_, v_a_1306_, v_a_1307_, v_a_1308_);
lean_dec(v_a_1308_);
lean_dec_ref(v_a_1307_);
lean_dec(v_a_1306_);
lean_dec_ref(v_a_1305_);
return v___x_1362_;
}
}
}
else
{
lean_object* v_a_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1371_; 
lean_dec(v_a_1308_);
lean_dec_ref(v_a_1307_);
lean_dec(v_a_1306_);
lean_dec_ref(v_a_1305_);
lean_dec_ref(v_e_1304_);
v_a_1364_ = lean_ctor_get(v___x_1310_, 0);
v_isSharedCheck_1371_ = !lean_is_exclusive(v___x_1310_);
if (v_isSharedCheck_1371_ == 0)
{
v___x_1366_ = v___x_1310_;
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_a_1364_);
lean_dec(v___x_1310_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1371_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
lean_object* v___x_1369_; 
if (v_isShared_1367_ == 0)
{
v___x_1369_ = v___x_1366_;
goto v_reusejp_1368_;
}
else
{
lean_object* v_reuseFailAlloc_1370_; 
v_reuseFailAlloc_1370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1370_, 0, v_a_1364_);
v___x_1369_ = v_reuseFailAlloc_1370_;
goto v_reusejp_1368_;
}
v_reusejp_1368_:
{
return v___x_1369_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalBinderInfo___private__1___boxed(lean_object* v_e_1372_, lean_object* v_a_1373_, lean_object* v_a_1374_, lean_object* v_a_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_){
_start:
{
lean_object* v_res_1378_; 
v_res_1378_ = l_Lean_Meta_instReduceEvalBinderInfo___private__1(v_e_1372_, v_a_1373_, v_a_1374_, v_a_1375_, v_a_1376_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLiteral___private__1(lean_object* v_e_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_){
_start:
{
lean_object* v___x_1398_; 
lean_inc(v_a_1396_);
lean_inc_ref(v_a_1395_);
lean_inc(v_a_1394_);
lean_inc_ref(v_a_1393_);
v___x_1398_ = lean_whnf(v_e_1392_, v_a_1393_, v_a_1394_, v_a_1395_, v_a_1396_);
if (lean_obj_tag(v___x_1398_) == 0)
{
lean_object* v_a_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; uint8_t v___x_1402_; 
v_a_1399_ = lean_ctor_get(v___x_1398_, 0);
lean_inc(v_a_1399_);
lean_dec_ref(v___x_1398_);
v___x_1400_ = ((lean_object*)(l_Lean_Meta_instReduceEvalLiteral___private__1___closed__2));
v___x_1401_ = lean_unsigned_to_nat(1u);
v___x_1402_ = l_Lean_Expr_isAppOfArity(v_a_1399_, v___x_1400_, v___x_1401_);
if (v___x_1402_ == 0)
{
lean_object* v___x_1403_; uint8_t v___x_1404_; 
v___x_1403_ = ((lean_object*)(l_Lean_Meta_instReduceEvalLiteral___private__1___closed__4));
v___x_1404_ = l_Lean_Expr_isAppOfArity(v_a_1399_, v___x_1403_, v___x_1401_);
if (v___x_1404_ == 0)
{
lean_object* v___x_1405_; 
v___x_1405_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1399_, v_a_1393_, v_a_1394_, v_a_1395_, v_a_1396_);
lean_dec(v_a_1396_);
lean_dec_ref(v_a_1395_);
lean_dec(v_a_1394_);
lean_dec_ref(v_a_1393_);
return v___x_1405_;
}
else
{
lean_object* v___f_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___f_1406_ = ((lean_object*)(l_Lean_Meta_instReduceEvalString___closed__0));
v___x_1407_ = l_Lean_Expr_getAppNumArgs(v_a_1399_);
v___x_1408_ = lean_nat_sub(v___x_1407_, v___x_1401_);
lean_dec(v___x_1407_);
v___x_1409_ = l_Lean_Expr_getRevArg_x21(v_a_1399_, v___x_1408_);
lean_dec(v_a_1399_);
v___x_1410_ = l_Lean_Meta_reduceEval___redArg(v___f_1406_, v___x_1409_, v_a_1393_, v_a_1394_, v_a_1395_, v_a_1396_);
if (lean_obj_tag(v___x_1410_) == 0)
{
lean_object* v_a_1411_; lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1419_; 
v_a_1411_ = lean_ctor_get(v___x_1410_, 0);
v_isSharedCheck_1419_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1419_ == 0)
{
v___x_1413_ = v___x_1410_;
v_isShared_1414_ = v_isSharedCheck_1419_;
goto v_resetjp_1412_;
}
else
{
lean_inc(v_a_1411_);
lean_dec(v___x_1410_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1419_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
lean_object* v___x_1415_; lean_object* v___x_1417_; 
v___x_1415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1415_, 0, v_a_1411_);
if (v_isShared_1414_ == 0)
{
lean_ctor_set(v___x_1413_, 0, v___x_1415_);
v___x_1417_ = v___x_1413_;
goto v_reusejp_1416_;
}
else
{
lean_object* v_reuseFailAlloc_1418_; 
v_reuseFailAlloc_1418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1418_, 0, v___x_1415_);
v___x_1417_ = v_reuseFailAlloc_1418_;
goto v_reusejp_1416_;
}
v_reusejp_1416_:
{
return v___x_1417_;
}
}
}
else
{
lean_object* v_a_1420_; lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1427_; 
v_a_1420_ = lean_ctor_get(v___x_1410_, 0);
v_isSharedCheck_1427_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1422_ = v___x_1410_;
v_isShared_1423_ = v_isSharedCheck_1427_;
goto v_resetjp_1421_;
}
else
{
lean_inc(v_a_1420_);
lean_dec(v___x_1410_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1427_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1425_; 
if (v_isShared_1423_ == 0)
{
v___x_1425_ = v___x_1422_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v_a_1420_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
return v___x_1425_;
}
}
}
}
}
else
{
lean_object* v___f_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
v___f_1428_ = ((lean_object*)(l_Lean_Meta_instReduceEvalNat___closed__0));
v___x_1429_ = l_Lean_Expr_getAppNumArgs(v_a_1399_);
v___x_1430_ = lean_nat_sub(v___x_1429_, v___x_1401_);
lean_dec(v___x_1429_);
v___x_1431_ = l_Lean_Expr_getRevArg_x21(v_a_1399_, v___x_1430_);
lean_dec(v_a_1399_);
v___x_1432_ = l_Lean_Meta_reduceEval___redArg(v___f_1428_, v___x_1431_, v_a_1393_, v_a_1394_, v_a_1395_, v_a_1396_);
if (lean_obj_tag(v___x_1432_) == 0)
{
lean_object* v_a_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1441_; 
v_a_1433_ = lean_ctor_get(v___x_1432_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1432_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1435_ = v___x_1432_;
v_isShared_1436_ = v_isSharedCheck_1441_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_a_1433_);
lean_dec(v___x_1432_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1441_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v___x_1437_; lean_object* v___x_1439_; 
v___x_1437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1437_, 0, v_a_1433_);
if (v_isShared_1436_ == 0)
{
lean_ctor_set(v___x_1435_, 0, v___x_1437_);
v___x_1439_ = v___x_1435_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v___x_1437_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
}
else
{
lean_object* v_a_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1449_; 
v_a_1442_ = lean_ctor_get(v___x_1432_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1432_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1444_ = v___x_1432_;
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_a_1442_);
lean_dec(v___x_1432_);
v___x_1444_ = lean_box(0);
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
v_resetjp_1443_:
{
lean_object* v___x_1447_; 
if (v_isShared_1445_ == 0)
{
v___x_1447_ = v___x_1444_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_a_1442_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
}
}
}
else
{
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
lean_dec(v_a_1396_);
lean_dec_ref(v_a_1395_);
lean_dec(v_a_1394_);
lean_dec_ref(v_a_1393_);
v_a_1450_ = lean_ctor_get(v___x_1398_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1398_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1452_ = v___x_1398_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1398_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1455_; 
if (v_isShared_1453_ == 0)
{
v___x_1455_ = v___x_1452_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_a_1450_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLiteral___private__1___boxed(lean_object* v_e_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = l_Lean_Meta_instReduceEvalLiteral___private__1(v_e_1458_, v_a_1459_, v_a_1460_, v_a_1461_, v_a_1462_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalMVarId___private__1(lean_object* v_e_1472_, lean_object* v_a_1473_, lean_object* v_a_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_){
_start:
{
lean_object* v___x_1478_; 
lean_inc(v_a_1476_);
lean_inc_ref(v_a_1475_);
lean_inc(v_a_1474_);
lean_inc_ref(v_a_1473_);
v___x_1478_ = lean_whnf(v_e_1472_, v_a_1473_, v_a_1474_, v_a_1475_, v_a_1476_);
if (lean_obj_tag(v___x_1478_) == 0)
{
lean_object* v_a_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; uint8_t v___x_1482_; 
v_a_1479_ = lean_ctor_get(v___x_1478_, 0);
lean_inc(v_a_1479_);
lean_dec_ref(v___x_1478_);
v___x_1480_ = ((lean_object*)(l_Lean_Meta_instReduceEvalMVarId___private__1___closed__1));
v___x_1481_ = lean_unsigned_to_nat(1u);
v___x_1482_ = l_Lean_Expr_isAppOfArity(v_a_1479_, v___x_1480_, v___x_1481_);
if (v___x_1482_ == 0)
{
lean_object* v___x_1483_; 
v___x_1483_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1479_, v_a_1473_, v_a_1474_, v_a_1475_, v_a_1476_);
lean_dec(v_a_1476_);
lean_dec_ref(v_a_1475_);
lean_dec(v_a_1474_);
lean_dec_ref(v_a_1473_);
return v___x_1483_;
}
else
{
lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1484_ = ((lean_object*)(l_Lean_Meta_instReduceEvalName___closed__0));
v___x_1485_ = l_Lean_Expr_getAppNumArgs(v_a_1479_);
v___x_1486_ = lean_nat_sub(v___x_1485_, v___x_1481_);
lean_dec(v___x_1485_);
v___x_1487_ = l_Lean_Expr_getRevArg_x21(v_a_1479_, v___x_1486_);
lean_dec(v_a_1479_);
v___x_1488_ = l_Lean_Meta_reduceEval___redArg(v___x_1484_, v___x_1487_, v_a_1473_, v_a_1474_, v_a_1475_, v_a_1476_);
if (lean_obj_tag(v___x_1488_) == 0)
{
lean_object* v_a_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1496_; 
v_a_1489_ = lean_ctor_get(v___x_1488_, 0);
v_isSharedCheck_1496_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1491_ = v___x_1488_;
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_a_1489_);
lean_dec(v___x_1488_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1494_; 
if (v_isShared_1492_ == 0)
{
v___x_1494_ = v___x_1491_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_a_1489_);
v___x_1494_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
return v___x_1494_;
}
}
}
else
{
lean_object* v_a_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1504_; 
v_a_1497_ = lean_ctor_get(v___x_1488_, 0);
v_isSharedCheck_1504_ = !lean_is_exclusive(v___x_1488_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1499_ = v___x_1488_;
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_a_1497_);
lean_dec(v___x_1488_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1502_; 
if (v_isShared_1500_ == 0)
{
v___x_1502_ = v___x_1499_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_a_1497_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
}
}
else
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1512_; 
lean_dec(v_a_1476_);
lean_dec_ref(v_a_1475_);
lean_dec(v_a_1474_);
lean_dec_ref(v_a_1473_);
v_a_1505_ = lean_ctor_get(v___x_1478_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1478_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1507_ = v___x_1478_;
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v___x_1478_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1510_; 
if (v_isShared_1508_ == 0)
{
v___x_1510_ = v___x_1507_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v_a_1505_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalMVarId___private__1___boxed(lean_object* v_e_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_){
_start:
{
lean_object* v_res_1519_; 
v_res_1519_ = l_Lean_Meta_instReduceEvalMVarId___private__1(v_e_1513_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_);
return v_res_1519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalMVarId___lam__0(lean_object* v_e_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_){
_start:
{
lean_object* v___x_1526_; 
lean_inc(v___y_1524_);
lean_inc_ref(v___y_1523_);
lean_inc(v___y_1522_);
lean_inc_ref(v___y_1521_);
v___x_1526_ = lean_whnf(v_e_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; uint8_t v___x_1530_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
lean_inc(v_a_1527_);
lean_dec_ref(v___x_1526_);
v___x_1528_ = ((lean_object*)(l_Lean_Meta_instReduceEvalMVarId___private__1___closed__1));
v___x_1529_ = lean_unsigned_to_nat(1u);
v___x_1530_ = l_Lean_Expr_isAppOfArity(v_a_1527_, v___x_1528_, v___x_1529_);
if (v___x_1530_ == 0)
{
lean_object* v___x_1531_; 
v___x_1531_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1527_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_);
lean_dec(v___y_1524_);
lean_dec_ref(v___y_1523_);
lean_dec(v___y_1522_);
lean_dec_ref(v___y_1521_);
return v___x_1531_;
}
else
{
lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1532_ = ((lean_object*)(l_Lean_Meta_instReduceEvalName___closed__0));
v___x_1533_ = l_Lean_Expr_getAppNumArgs(v_a_1527_);
v___x_1534_ = lean_nat_sub(v___x_1533_, v___x_1529_);
lean_dec(v___x_1533_);
v___x_1535_ = l_Lean_Expr_getRevArg_x21(v_a_1527_, v___x_1534_);
lean_dec(v_a_1527_);
v___x_1536_ = l_Lean_Meta_reduceEval___redArg(v___x_1532_, v___x_1535_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_);
if (lean_obj_tag(v___x_1536_) == 0)
{
lean_object* v_a_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1544_; 
v_a_1537_ = lean_ctor_get(v___x_1536_, 0);
v_isSharedCheck_1544_ = !lean_is_exclusive(v___x_1536_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1539_ = v___x_1536_;
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
else
{
lean_inc(v_a_1537_);
lean_dec(v___x_1536_);
v___x_1539_ = lean_box(0);
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
v_resetjp_1538_:
{
lean_object* v___x_1542_; 
if (v_isShared_1540_ == 0)
{
v___x_1542_ = v___x_1539_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v_a_1537_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
}
else
{
lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1552_; 
v_a_1545_ = lean_ctor_get(v___x_1536_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1536_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1547_ = v___x_1536_;
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v___x_1536_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1550_; 
if (v_isShared_1548_ == 0)
{
v___x_1550_ = v___x_1547_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v_a_1545_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
}
}
}
else
{
lean_object* v_a_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1560_; 
lean_dec(v___y_1524_);
lean_dec_ref(v___y_1523_);
lean_dec(v___y_1522_);
lean_dec_ref(v___y_1521_);
v_a_1553_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1555_ = v___x_1526_;
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_a_1553_);
lean_dec(v___x_1526_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1558_; 
if (v_isShared_1556_ == 0)
{
v___x_1558_ = v___x_1555_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v_a_1553_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalMVarId___lam__0___boxed(lean_object* v_e_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l_Lean_Meta_instReduceEvalMVarId___lam__0(v_e_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___private__1(lean_object* v_e_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_){
_start:
{
lean_object* v___x_1581_; 
lean_inc(v_a_1579_);
lean_inc_ref(v_a_1578_);
lean_inc(v_a_1577_);
lean_inc_ref(v_a_1576_);
v___x_1581_ = lean_whnf(v_e_1575_, v_a_1576_, v_a_1577_, v_a_1578_, v_a_1579_);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v_a_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; uint8_t v___x_1585_; 
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
lean_inc(v_a_1582_);
lean_dec_ref(v___x_1581_);
v___x_1583_ = ((lean_object*)(l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__1));
v___x_1584_ = lean_unsigned_to_nat(1u);
v___x_1585_ = l_Lean_Expr_isAppOfArity(v_a_1582_, v___x_1583_, v___x_1584_);
if (v___x_1585_ == 0)
{
lean_object* v___x_1586_; 
v___x_1586_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1582_, v_a_1576_, v_a_1577_, v_a_1578_, v_a_1579_);
lean_dec(v_a_1579_);
lean_dec_ref(v_a_1578_);
lean_dec(v_a_1577_);
lean_dec_ref(v_a_1576_);
return v___x_1586_;
}
else
{
lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___x_1587_ = ((lean_object*)(l_Lean_Meta_instReduceEvalName___closed__0));
v___x_1588_ = l_Lean_Expr_getAppNumArgs(v_a_1582_);
v___x_1589_ = lean_nat_sub(v___x_1588_, v___x_1584_);
lean_dec(v___x_1588_);
v___x_1590_ = l_Lean_Expr_getRevArg_x21(v_a_1582_, v___x_1589_);
lean_dec(v_a_1582_);
v___x_1591_ = l_Lean_Meta_reduceEval___redArg(v___x_1587_, v___x_1590_, v_a_1576_, v_a_1577_, v_a_1578_, v_a_1579_);
if (lean_obj_tag(v___x_1591_) == 0)
{
lean_object* v_a_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1599_; 
v_a_1592_ = lean_ctor_get(v___x_1591_, 0);
v_isSharedCheck_1599_ = !lean_is_exclusive(v___x_1591_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1594_ = v___x_1591_;
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_a_1592_);
lean_dec(v___x_1591_);
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
v_reuseFailAlloc_1598_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1600_; lean_object* v___x_1602_; uint8_t v_isShared_1603_; uint8_t v_isSharedCheck_1607_; 
v_a_1600_ = lean_ctor_get(v___x_1591_, 0);
v_isSharedCheck_1607_ = !lean_is_exclusive(v___x_1591_);
if (v_isSharedCheck_1607_ == 0)
{
v___x_1602_ = v___x_1591_;
v_isShared_1603_ = v_isSharedCheck_1607_;
goto v_resetjp_1601_;
}
else
{
lean_inc(v_a_1600_);
lean_dec(v___x_1591_);
v___x_1602_ = lean_box(0);
v_isShared_1603_ = v_isSharedCheck_1607_;
goto v_resetjp_1601_;
}
v_resetjp_1601_:
{
lean_object* v___x_1605_; 
if (v_isShared_1603_ == 0)
{
v___x_1605_ = v___x_1602_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v_a_1600_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
return v___x_1605_;
}
}
}
}
}
else
{
lean_object* v_a_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1615_; 
lean_dec(v_a_1579_);
lean_dec_ref(v_a_1578_);
lean_dec(v_a_1577_);
lean_dec_ref(v_a_1576_);
v_a_1608_ = lean_ctor_get(v___x_1581_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1581_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1610_ = v___x_1581_;
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_a_1608_);
lean_dec(v___x_1581_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___x_1613_; 
if (v_isShared_1611_ == 0)
{
v___x_1613_ = v___x_1610_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_a_1608_);
v___x_1613_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
return v___x_1613_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___private__1___boxed(lean_object* v_e_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l_Lean_Meta_instReduceEvalLevelMVarId___private__1(v_e_1616_, v_a_1617_, v_a_1618_, v_a_1619_, v_a_1620_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___lam__0(lean_object* v_e_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_){
_start:
{
lean_object* v___x_1629_; 
lean_inc(v___y_1627_);
lean_inc_ref(v___y_1626_);
lean_inc(v___y_1625_);
lean_inc_ref(v___y_1624_);
v___x_1629_ = lean_whnf(v_e_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_);
if (lean_obj_tag(v___x_1629_) == 0)
{
lean_object* v_a_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; uint8_t v___x_1633_; 
v_a_1630_ = lean_ctor_get(v___x_1629_, 0);
lean_inc(v_a_1630_);
lean_dec_ref(v___x_1629_);
v___x_1631_ = ((lean_object*)(l_Lean_Meta_instReduceEvalLevelMVarId___private__1___closed__1));
v___x_1632_ = lean_unsigned_to_nat(1u);
v___x_1633_ = l_Lean_Expr_isAppOfArity(v_a_1630_, v___x_1631_, v___x_1632_);
if (v___x_1633_ == 0)
{
lean_object* v___x_1634_; 
v___x_1634_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1630_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_);
lean_dec(v___y_1627_);
lean_dec_ref(v___y_1626_);
lean_dec(v___y_1625_);
lean_dec_ref(v___y_1624_);
return v___x_1634_;
}
else
{
lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
v___x_1635_ = ((lean_object*)(l_Lean_Meta_instReduceEvalName___closed__0));
v___x_1636_ = l_Lean_Expr_getAppNumArgs(v_a_1630_);
v___x_1637_ = lean_nat_sub(v___x_1636_, v___x_1632_);
lean_dec(v___x_1636_);
v___x_1638_ = l_Lean_Expr_getRevArg_x21(v_a_1630_, v___x_1637_);
lean_dec(v_a_1630_);
v___x_1639_ = l_Lean_Meta_reduceEval___redArg(v___x_1635_, v___x_1638_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_);
if (lean_obj_tag(v___x_1639_) == 0)
{
lean_object* v_a_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1647_; 
v_a_1640_ = lean_ctor_get(v___x_1639_, 0);
v_isSharedCheck_1647_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1647_ == 0)
{
v___x_1642_ = v___x_1639_;
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_a_1640_);
lean_dec(v___x_1639_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1647_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v___x_1645_; 
if (v_isShared_1643_ == 0)
{
v___x_1645_ = v___x_1642_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_a_1640_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
return v___x_1645_;
}
}
}
else
{
lean_object* v_a_1648_; lean_object* v___x_1650_; uint8_t v_isShared_1651_; uint8_t v_isSharedCheck_1655_; 
v_a_1648_ = lean_ctor_get(v___x_1639_, 0);
v_isSharedCheck_1655_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1655_ == 0)
{
v___x_1650_ = v___x_1639_;
v_isShared_1651_ = v_isSharedCheck_1655_;
goto v_resetjp_1649_;
}
else
{
lean_inc(v_a_1648_);
lean_dec(v___x_1639_);
v___x_1650_ = lean_box(0);
v_isShared_1651_ = v_isSharedCheck_1655_;
goto v_resetjp_1649_;
}
v_resetjp_1649_:
{
lean_object* v___x_1653_; 
if (v_isShared_1651_ == 0)
{
v___x_1653_ = v___x_1650_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1654_; 
v_reuseFailAlloc_1654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1654_, 0, v_a_1648_);
v___x_1653_ = v_reuseFailAlloc_1654_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
return v___x_1653_;
}
}
}
}
}
else
{
lean_object* v_a_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1663_; 
lean_dec(v___y_1627_);
lean_dec_ref(v___y_1626_);
lean_dec(v___y_1625_);
lean_dec_ref(v___y_1624_);
v_a_1656_ = lean_ctor_get(v___x_1629_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1629_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1658_ = v___x_1629_;
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_a_1656_);
lean_dec(v___x_1629_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1661_; 
if (v_isShared_1659_ == 0)
{
v___x_1661_ = v___x_1658_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_a_1656_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalLevelMVarId___lam__0___boxed(lean_object* v_e_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_){
_start:
{
lean_object* v_res_1670_; 
v_res_1670_ = l_Lean_Meta_instReduceEvalLevelMVarId___lam__0(v_e_1664_, v___y_1665_, v___y_1666_, v___y_1667_, v___y_1668_);
return v_res_1670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFVarId___private__1(lean_object* v_e_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_){
_start:
{
lean_object* v___x_1684_; 
lean_inc(v_a_1682_);
lean_inc_ref(v_a_1681_);
lean_inc(v_a_1680_);
lean_inc_ref(v_a_1679_);
v___x_1684_ = lean_whnf(v_e_1678_, v_a_1679_, v_a_1680_, v_a_1681_, v_a_1682_);
if (lean_obj_tag(v___x_1684_) == 0)
{
lean_object* v_a_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; uint8_t v___x_1688_; 
v_a_1685_ = lean_ctor_get(v___x_1684_, 0);
lean_inc(v_a_1685_);
lean_dec_ref(v___x_1684_);
v___x_1686_ = ((lean_object*)(l_Lean_Meta_instReduceEvalFVarId___private__1___closed__1));
v___x_1687_ = lean_unsigned_to_nat(1u);
v___x_1688_ = l_Lean_Expr_isAppOfArity(v_a_1685_, v___x_1686_, v___x_1687_);
if (v___x_1688_ == 0)
{
lean_object* v___x_1689_; 
v___x_1689_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1685_, v_a_1679_, v_a_1680_, v_a_1681_, v_a_1682_);
lean_dec(v_a_1682_);
lean_dec_ref(v_a_1681_);
lean_dec(v_a_1680_);
lean_dec_ref(v_a_1679_);
return v___x_1689_;
}
else
{
lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; 
v___x_1690_ = ((lean_object*)(l_Lean_Meta_instReduceEvalName___closed__0));
v___x_1691_ = l_Lean_Expr_getAppNumArgs(v_a_1685_);
v___x_1692_ = lean_nat_sub(v___x_1691_, v___x_1687_);
lean_dec(v___x_1691_);
v___x_1693_ = l_Lean_Expr_getRevArg_x21(v_a_1685_, v___x_1692_);
lean_dec(v_a_1685_);
v___x_1694_ = l_Lean_Meta_reduceEval___redArg(v___x_1690_, v___x_1693_, v_a_1679_, v_a_1680_, v_a_1681_, v_a_1682_);
if (lean_obj_tag(v___x_1694_) == 0)
{
lean_object* v_a_1695_; lean_object* v___x_1697_; uint8_t v_isShared_1698_; uint8_t v_isSharedCheck_1702_; 
v_a_1695_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1702_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1702_ == 0)
{
v___x_1697_ = v___x_1694_;
v_isShared_1698_ = v_isSharedCheck_1702_;
goto v_resetjp_1696_;
}
else
{
lean_inc(v_a_1695_);
lean_dec(v___x_1694_);
v___x_1697_ = lean_box(0);
v_isShared_1698_ = v_isSharedCheck_1702_;
goto v_resetjp_1696_;
}
v_resetjp_1696_:
{
lean_object* v___x_1700_; 
if (v_isShared_1698_ == 0)
{
v___x_1700_ = v___x_1697_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v_a_1695_);
v___x_1700_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
return v___x_1700_;
}
}
}
else
{
lean_object* v_a_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1710_; 
v_a_1703_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1705_ = v___x_1694_;
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_a_1703_);
lean_dec(v___x_1694_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1708_; 
if (v_isShared_1706_ == 0)
{
v___x_1708_ = v___x_1705_;
goto v_reusejp_1707_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v_a_1703_);
v___x_1708_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1707_;
}
v_reusejp_1707_:
{
return v___x_1708_;
}
}
}
}
}
else
{
lean_object* v_a_1711_; lean_object* v___x_1713_; uint8_t v_isShared_1714_; uint8_t v_isSharedCheck_1718_; 
lean_dec(v_a_1682_);
lean_dec_ref(v_a_1681_);
lean_dec(v_a_1680_);
lean_dec_ref(v_a_1679_);
v_a_1711_ = lean_ctor_get(v___x_1684_, 0);
v_isSharedCheck_1718_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1718_ == 0)
{
v___x_1713_ = v___x_1684_;
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
else
{
lean_inc(v_a_1711_);
lean_dec(v___x_1684_);
v___x_1713_ = lean_box(0);
v_isShared_1714_ = v_isSharedCheck_1718_;
goto v_resetjp_1712_;
}
v_resetjp_1712_:
{
lean_object* v___x_1716_; 
if (v_isShared_1714_ == 0)
{
v___x_1716_ = v___x_1713_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v_a_1711_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
return v___x_1716_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFVarId___private__1___boxed(lean_object* v_e_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_){
_start:
{
lean_object* v_res_1725_; 
v_res_1725_ = l_Lean_Meta_instReduceEvalFVarId___private__1(v_e_1719_, v_a_1720_, v_a_1721_, v_a_1722_, v_a_1723_);
return v_res_1725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFVarId___lam__0(lean_object* v_e_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_){
_start:
{
lean_object* v___x_1732_; 
lean_inc(v___y_1730_);
lean_inc_ref(v___y_1729_);
lean_inc(v___y_1728_);
lean_inc_ref(v___y_1727_);
v___x_1732_ = lean_whnf(v_e_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_);
if (lean_obj_tag(v___x_1732_) == 0)
{
lean_object* v_a_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; uint8_t v___x_1736_; 
v_a_1733_ = lean_ctor_get(v___x_1732_, 0);
lean_inc(v_a_1733_);
lean_dec_ref(v___x_1732_);
v___x_1734_ = ((lean_object*)(l_Lean_Meta_instReduceEvalFVarId___private__1___closed__1));
v___x_1735_ = lean_unsigned_to_nat(1u);
v___x_1736_ = l_Lean_Expr_isAppOfArity(v_a_1733_, v___x_1734_, v___x_1735_);
if (v___x_1736_ == 0)
{
lean_object* v___x_1737_; 
v___x_1737_ = l___private_Lean_Meta_ReduceEval_0__Lean_Meta_throwFailedToEval___redArg(v_a_1733_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_);
lean_dec(v___y_1730_);
lean_dec_ref(v___y_1729_);
lean_dec(v___y_1728_);
lean_dec_ref(v___y_1727_);
return v___x_1737_;
}
else
{
lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; 
v___x_1738_ = ((lean_object*)(l_Lean_Meta_instReduceEvalName___closed__0));
v___x_1739_ = l_Lean_Expr_getAppNumArgs(v_a_1733_);
v___x_1740_ = lean_nat_sub(v___x_1739_, v___x_1735_);
lean_dec(v___x_1739_);
v___x_1741_ = l_Lean_Expr_getRevArg_x21(v_a_1733_, v___x_1740_);
lean_dec(v_a_1733_);
v___x_1742_ = l_Lean_Meta_reduceEval___redArg(v___x_1738_, v___x_1741_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_);
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1750_; 
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1745_ = v___x_1742_;
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_dec(v___x_1742_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1748_; 
if (v_isShared_1746_ == 0)
{
v___x_1748_ = v___x_1745_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_a_1743_);
v___x_1748_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
return v___x_1748_;
}
}
}
else
{
lean_object* v_a_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1758_; 
v_a_1751_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1758_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1758_ == 0)
{
v___x_1753_ = v___x_1742_;
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_a_1751_);
lean_dec(v___x_1742_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1758_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1756_; 
if (v_isShared_1754_ == 0)
{
v___x_1756_ = v___x_1753_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1757_; 
v_reuseFailAlloc_1757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1757_, 0, v_a_1751_);
v___x_1756_ = v_reuseFailAlloc_1757_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
return v___x_1756_;
}
}
}
}
}
else
{
lean_object* v_a_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1766_; 
lean_dec(v___y_1730_);
lean_dec_ref(v___y_1729_);
lean_dec(v___y_1728_);
lean_dec_ref(v___y_1727_);
v_a_1759_ = lean_ctor_get(v___x_1732_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1761_ = v___x_1732_;
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_a_1759_);
lean_dec(v___x_1732_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1766_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v___x_1764_; 
if (v_isShared_1762_ == 0)
{
v___x_1764_ = v___x_1761_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v_a_1759_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instReduceEvalFVarId___lam__0___boxed(lean_object* v_e_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_){
_start:
{
lean_object* v_res_1773_; 
v_res_1773_ = l_Lean_Meta_instReduceEvalFVarId___lam__0(v_e_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_);
return v_res_1773_;
}
}
lean_object* runtime_initialize_Lean_Meta_Offset(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_ReduceEval(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Offset(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_ReduceEval(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Offset(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_ReduceEval(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Offset(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ReduceEval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_ReduceEval(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_ReduceEval(builtin);
}
#ifdef __cplusplus
}
#endif
