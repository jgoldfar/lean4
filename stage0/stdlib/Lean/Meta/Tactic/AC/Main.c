// Lean compiler output
// Module: Lean.Meta.Tactic.AC.Main
// Imports: public import Lean.Meta.Tactic.Refl public import Lean.Meta.Tactic.Simp.Main public import Lean.Elab.Tactic.Rewrite import Init.Omega
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
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpCongrTheorems___redArg(lean_object*);
extern lean_object* l_Lean_Meta_Simp_neutralConfig;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_Simp_mkContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_expr_lt(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkListLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Data_AC_mergeIdem(lean_object*);
lean_object* l_Lean_Data_AC_Expr_toList(lean_object*);
lean_object* l_Lean_Data_AC_sort(lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_Simp_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_applySimpResultToLocalDecl(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_applySimpResultToTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getNondepPropHyps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getFVarIds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_expandLocation(lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static const lean_string_object l_Lean_Meta_AC_instInhabitedPreContext_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_AC_instInhabitedPreContext_default___closed__0 = (const lean_object*)&l_Lean_Meta_AC_instInhabitedPreContext_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_AC_instInhabitedPreContext_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_instInhabitedPreContext_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_AC_instInhabitedPreContext_default___closed__1 = (const lean_object*)&l_Lean_Meta_AC_instInhabitedPreContext_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_AC_instInhabitedPreContext_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_instInhabitedPreContext_default___closed__2;
static lean_once_cell_t l_Lean_Meta_AC_instInhabitedPreContext_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_instInhabitedPreContext_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instInhabitedPreContext_default;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instInhabitedPreContext;
LEAN_EXPORT uint8_t l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__2(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__0 = (const lean_object*)&l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__0_value;
static const lean_closure_object l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__1 = (const lean_object*)&l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__1_value;
static const lean_closure_object l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__2 = (const lean_object*)&l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__2_value;
static const lean_ctor_object l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__2_value),((lean_object*)&l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__0_value),((lean_object*)&l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__1_value)}};
static const lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__3 = (const lean_object*)&l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool = (const lean_object*)&l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___closed__3_value;
static const lean_ctor_object l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__0 = (const lean_object*)&l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__0_value;
static const lean_closure_object l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__1 = (const lean_object*)&l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__1_value;
static const lean_closure_object l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__2 = (const lean_object*)&l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__2_value;
static const lean_ctor_object l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__0_value),((lean_object*)&l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__1_value),((lean_object*)&l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__2_value)}};
static const lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__3 = (const lean_object*)&l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr = (const lean_object*)&l_Lean_Meta_AC_instEvalInformationPreContextACExpr___closed__3_value;
static const lean_string_object l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_AC_getInstance___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "got instance"};
static const lean_object* l_Lean_Meta_AC_getInstance___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_AC_getInstance___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_AC_getInstance___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_getInstance___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_getInstance___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_getInstance___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_AC_getInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_AC_getInstance___closed__0 = (const lean_object*)&l_Lean_Meta_AC_getInstance___closed__0_value;
static const lean_string_object l_Lean_Meta_AC_getInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "AC"};
static const lean_object* l_Lean_Meta_AC_getInstance___closed__1 = (const lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value;
static const lean_ctor_object l_Lean_Meta_AC_getInstance___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_AC_getInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_getInstance___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(108, 102, 180, 37, 89, 238, 212, 46)}};
static const lean_object* l_Lean_Meta_AC_getInstance___closed__2 = (const lean_object*)&l_Lean_Meta_AC_getInstance___closed__2_value;
static const lean_string_object l_Lean_Meta_AC_getInstance___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "trying: "};
static const lean_object* l_Lean_Meta_AC_getInstance___closed__3 = (const lean_object*)&l_Lean_Meta_AC_getInstance___closed__3_value;
static lean_once_cell_t l_Lean_Meta_AC_getInstance___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_getInstance___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_getInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_getInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_AC_preContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Meta_AC_preContext___closed__0 = (const lean_object*)&l_Lean_Meta_AC_preContext___closed__0_value;
static const lean_string_object l_Lean_Meta_AC_preContext___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Associative"};
static const lean_object* l_Lean_Meta_AC_preContext___closed__1 = (const lean_object*)&l_Lean_Meta_AC_preContext___closed__1_value;
static const lean_ctor_object l_Lean_Meta_AC_preContext___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_preContext___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_AC_preContext___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_preContext___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_AC_preContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(2, 251, 219, 24, 41, 141, 182, 243)}};
static const lean_object* l_Lean_Meta_AC_preContext___closed__2 = (const lean_object*)&l_Lean_Meta_AC_preContext___closed__2_value;
static const lean_string_object l_Lean_Meta_AC_preContext___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Commutative"};
static const lean_object* l_Lean_Meta_AC_preContext___closed__3 = (const lean_object*)&l_Lean_Meta_AC_preContext___closed__3_value;
static const lean_ctor_object l_Lean_Meta_AC_preContext___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_preContext___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_AC_preContext___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_preContext___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_AC_preContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(106, 96, 18, 51, 62, 235, 64, 3)}};
static const lean_object* l_Lean_Meta_AC_preContext___closed__4 = (const lean_object*)&l_Lean_Meta_AC_preContext___closed__4_value;
static const lean_string_object l_Lean_Meta_AC_preContext___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "IdempotentOp"};
static const lean_object* l_Lean_Meta_AC_preContext___closed__5 = (const lean_object*)&l_Lean_Meta_AC_preContext___closed__5_value;
static const lean_ctor_object l_Lean_Meta_AC_preContext___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_preContext___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Meta_AC_preContext___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_preContext___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_AC_preContext___closed__5_value),LEAN_SCALAR_PTR_LITERAL(245, 219, 239, 145, 216, 232, 46, 228)}};
static const lean_object* l_Lean_Meta_AC_preContext___closed__6 = (const lean_object*)&l_Lean_Meta_AC_preContext___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_preContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_preContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_op_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_op_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_var_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_var_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_bin(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toACExpr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4_spec__5(lean_object*);
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Std.Data.DHashMap.Internal.AssocList.Basic"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__0_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DHashMap.Internal.AssocList.get!"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__1 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__1_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "key is not present in hash table"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__2 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__2_value;
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_toACExpr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_toACExpr___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_AC_toACExpr_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__5(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_AC_toACExpr_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_AC_toACExpr_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_AC_toACExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_toACExpr___closed__0;
static lean_once_cell_t l_Lean_Meta_AC_toACExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_toACExpr___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_toACExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_toACExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_AC_toACExpr_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "LawfulIdentity"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_preContext___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(50, 22, 200, 99, 71, 159, 239, 251)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__0___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "inst"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(170, 188, 240, 205, 110, 63, 170, 91)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_AC_abstractAtoms___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_AC_abstractAtoms___closed__0 = (const lean_object*)&l_Lean_Meta_AC_abstractAtoms___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_abstractAtoms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_abstractAtoms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Option"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(149, 114, 34, 228, 75, 195, 143, 131)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "some"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(95, 234, 177, 188, 3, 226, 91, 252)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 148, 40, 55, 221, 242, 231, 67)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PLift"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(199, 82, 227, 164, 10, 97, 128, 84)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Data"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Variable"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(177, 67, 69, 230, 180, 62, 221, 131)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 163, 62, 223, 32, 165, 80, 222)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__8_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__8_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(146, 85, 23, 54, 227, 224, 149, 53)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__8_value_aux_3),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(82, 172, 4, 99, 128, 254, 208, 227)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "up"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(199, 82, 227, 164, 10, 97, 128, 84)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__11_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(211, 38, 67, 163, 37, 91, 68, 134)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__11_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__12;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__0;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(177, 67, 69, 230, 180, 62, 221, 131)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 163, 62, 223, 32, 165, 80, 222)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(146, 85, 23, 54, 227, 224, 149, 53)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Context"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(177, 67, 69, 230, 180, 62, 221, 131)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 163, 62, 223, 32, 165, 80, 222)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 35, 224, 244, 170, 201, 45, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value_aux_3),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(188, 94, 192, 225, 248, 86, 206, 61)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Expr"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "var"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(177, 67, 69, 230, 180, 62, 221, 131)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 163, 62, 223, 32, 165, 80, 222)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(132, 183, 150, 226, 41, 85, 126, 57)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__1_value),LEAN_SCALAR_PTR_LITERAL(61, 113, 133, 93, 37, 32, 75, 36)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "op"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(177, 67, 69, 230, 180, 62, 221, 131)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 163, 62, 223, 32, 165, 80, 222)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(132, 183, 150, 226, 41, 85, 126, 57)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__4_value),LEAN_SCALAR_PTR_LITERAL(65, 217, 52, 98, 170, 249, 224, 141)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convertTarget(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convertTarget___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instInhabitedMetaM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4___closed__0 = (const lean_object*)&l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_AC_removeNeutrals_loop___at___00Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_AC_removeNeutrals_loop___at___00Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_AC_buildNormProof___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__0_value;
static const lean_string_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Meta_AC_buildNormProof___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Meta_AC_buildNormProof___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_AC_buildNormProof___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_buildNormProof___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "eq_of_norm"};
static const lean_object* l_Lean_Meta_AC_buildNormProof___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(177, 67, 69, 230, 180, 62, 221, 131)}};
static const lean_ctor_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(54, 163, 62, 223, 32, 165, 80, 222)}};
static const lean_ctor_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 35, 224, 244, 170, 201, 45, 1)}};
static const lean_ctor_object l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value_aux_3),((lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(150, 46, 99, 133, 28, 84, 99, 127)}};
static const lean_object* l_Lean_Meta_AC_buildNormProof___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_buildNormProof___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_buildNormProof___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_AC_buildNormProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_AC_buildNormProof___closed__0 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___closed__0_value;
static const lean_ctor_object l_Lean_Meta_AC_buildNormProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_buildNormProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_AC_buildNormProof___closed__1 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___closed__1_value;
static const lean_string_object l_Lean_Meta_AC_buildNormProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Meta.Tactic.AC.Main"};
static const lean_object* l_Lean_Meta_AC_buildNormProof___closed__2 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___closed__2_value;
static const lean_string_object l_Lean_Meta_AC_buildNormProof___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Meta.AC.buildNormProof"};
static const lean_object* l_Lean_Meta_AC_buildNormProof___closed__3 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___closed__3_value;
static const lean_string_object l_Lean_Meta_AC_buildNormProof___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected proof type"};
static const lean_object* l_Lean_Meta_AC_buildNormProof___closed__4 = (const lean_object*)&l_Lean_Meta_AC_buildNormProof___closed__4_value;
static lean_once_cell_t l_Lean_Meta_AC_buildNormProof___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_buildNormProof___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_buildNormProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_buildNormProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_post___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_post___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_post(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_post___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_AC_rewriteUnnormalized___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_AC_rewriteUnnormalized___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_AC_rewriteUnnormalized___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__0 = (const lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__0_value;
static const lean_closure_object l_Lean_Meta_AC_rewriteUnnormalized___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_rewriteUnnormalized___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__1 = (const lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__1_value;
static const lean_closure_object l_Lean_Meta_AC_rewriteUnnormalized___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_rewriteUnnormalized___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__2 = (const lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__2_value;
static const lean_closure_object l_Lean_Meta_AC_rewriteUnnormalized___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_rewriteUnnormalized___lam__2___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__3 = (const lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__3_value;
static const lean_closure_object l_Lean_Meta_AC_rewriteUnnormalized___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_rewriteUnnormalized___lam__3___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__4 = (const lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__4_value;
static lean_once_cell_t l_Lean_Meta_AC_rewriteUnnormalized___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__5;
static lean_once_cell_t l_Lean_Meta_AC_rewriteUnnormalized___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__6;
static lean_once_cell_t l_Lean_Meta_AC_rewriteUnnormalized___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__7;
static lean_once_cell_t l_Lean_Meta_AC_rewriteUnnormalized___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__8;
static lean_once_cell_t l_Lean_Meta_AC_rewriteUnnormalized___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__9;
static lean_once_cell_t l_Lean_Meta_AC_rewriteUnnormalized___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__10;
static lean_once_cell_t l_Lean_Meta_AC_rewriteUnnormalized___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__11;
static const lean_closure_object l_Lean_Meta_AC_rewriteUnnormalized___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_post___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__12 = (const lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__12_value;
static const lean_ctor_object l_Lean_Meta_AC_rewriteUnnormalized___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 8, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__1_value),((lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__12_value),((lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__2_value),((lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__3_value),((lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__4_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Meta_AC_rewriteUnnormalized___closed__13 = (const lean_object*)&l_Lean_Meta_AC_rewriteUnnormalized___closed__13_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalizedRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalizedRefl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__0 = (const lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__0_value;
static const lean_string_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__1 = (const lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__1_value;
static const lean_string_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "acRfl"};
static const lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__2 = (const lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__2_value;
static const lean_ctor_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3_value_aux_2),((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(251, 10, 210, 32, 196, 152, 20, 107)}};
static const lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3 = (const lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3_value;
static const lean_string_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "acRflTactic"};
static const lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__4 = (const lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__4_value;
static const lean_ctor_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(177, 50, 124, 4, 240, 103, 254, 60)}};
static const lean_ctor_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(247, 10, 211, 220, 137, 99, 157, 23)}};
static const lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5 = (const lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1();
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___boxed(lean_object*);
static const lean_ctor_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(174) << 1) | 1)),((lean_object*)(((size_t)(24) << 1) | 1))}};
static const lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__0 = (const lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__0_value;
static const lean_ctor_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(176) << 1) | 1)),((lean_object*)(((size_t)(46) << 1) | 1))}};
static const lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__1 = (const lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__1_value;
static const lean_ctor_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__0_value),((lean_object*)(((size_t)(24) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__1_value),((lean_object*)(((size_t)(46) << 1) | 1))}};
static const lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__2 = (const lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__2_value;
static const lean_ctor_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(174) << 1) | 1)),((lean_object*)(((size_t)(28) << 1) | 1))}};
static const lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__3 = (const lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__3_value;
static const lean_ctor_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(174) << 1) | 1)),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__4 = (const lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__4_value;
static const lean_ctor_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__3_value),((lean_object*)(((size_t)(28) << 1) | 1)),((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__4_value),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__5 = (const lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__5_value;
static const lean_ctor_object l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__2_value),((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__5_value)}};
static const lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__6 = (const lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3();
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypMeta___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypMeta___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypMeta(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypMeta___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfTargetTactic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfTargetTactic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_AC_acNfTargetTactic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_AC_acNfTargetTactic___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_AC_acNfTargetTactic___closed__0 = (const lean_object*)&l_Lean_Meta_AC_acNfTargetTactic___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfTargetTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfTargetTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypTactic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypTactic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_evalNf0_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_evalNf0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_AC_evalNf0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "acNf0"};
static const lean_object* l_Lean_Meta_AC_evalNf0___closed__0 = (const lean_object*)&l_Lean_Meta_AC_evalNf0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_AC_evalNf0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_AC_evalNf0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_evalNf0___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_AC_evalNf0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_evalNf0___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_AC_evalNf0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_evalNf0___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_AC_evalNf0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(83, 212, 39, 12, 162, 76, 172, 19)}};
static const lean_object* l_Lean_Meta_AC_evalNf0___closed__1 = (const lean_object*)&l_Lean_Meta_AC_evalNf0___closed__1_value;
static const lean_array_object l_Lean_Meta_AC_evalNf0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_AC_evalNf0___closed__2 = (const lean_object*)&l_Lean_Meta_AC_evalNf0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "evalNf0"};
static const lean_object* l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__0 = (const lean_object*)&l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(177, 50, 124, 4, 240, 103, 254, 60)}};
static const lean_ctor_object l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(222, 59, 59, 44, 240, 219, 207, 54)}};
static const lean_object* l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1 = (const lean_object*)&l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1();
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__0_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__0_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__0_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__1_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__0_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__1_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__1_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__2_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__1_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__2_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__2_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__3_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__2_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__3_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__3_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__4_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__3_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__4_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__4_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__5_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__4_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(28, 111, 207, 116, 89, 15, 82, 211)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__5_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__5_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__6_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Main"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__6_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__6_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__7_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__5_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__6_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(49, 49, 252, 61, 32, 200, 184, 234)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__7_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__7_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__8_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__7_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(116, 91, 192, 92, 6, 101, 182, 186)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__8_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__8_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__9_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__8_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(117, 248, 126, 6, 203, 150, 165, 226)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__9_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__9_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__10_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__9_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 240, 157, 130, 31, 26, 156, 90)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__10_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__10_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__11_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__10_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(186, 20, 105, 199, 19, 240, 24, 79)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__11_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__11_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__12_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__12_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__12_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__13_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__11_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__12_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(31, 13, 232, 254, 123, 0, 230, 165)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__13_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__13_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__14_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__14_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__14_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__15_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__13_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__14_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(42, 103, 11, 232, 42, 82, 90, 146)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__15_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__15_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__16_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__15_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(171, 238, 185, 207, 121, 5, 34, 219)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__16_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__16_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__17_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__16_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(35, 192, 238, 212, 45, 149, 167, 174)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__17_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__17_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__18_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__17_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(146, 225, 162, 38, 239, 104, 56, 82)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__18_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__18_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__19_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__18_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_AC_getInstance___closed__1_value),LEAN_SCALAR_PTR_LITERAL(65, 54, 152, 170, 137, 28, 225, 176)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__19_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__19_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__20_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__19_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__6_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(48, 48, 206, 168, 183, 177, 173, 146)}};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__20_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__20_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__21_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__21_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__22_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__22_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__22_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__23_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__23_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__24_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__24_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__24_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__25_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__25_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__26_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__26_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Meta_AC_instInhabitedPreContext_default___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_box(0);
v___x_5_ = ((lean_object*)(l_Lean_Meta_AC_instInhabitedPreContext_default___closed__1));
v___x_6_ = l_Lean_Expr_const___override(v___x_5_, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_AC_instInhabitedPreContext_default___closed__3(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_7_ = lean_box(0);
v___x_8_ = lean_obj_once(&l_Lean_Meta_AC_instInhabitedPreContext_default___closed__2, &l_Lean_Meta_AC_instInhabitedPreContext_default___closed__2_once, _init_l_Lean_Meta_AC_instInhabitedPreContext_default___closed__2);
v___x_9_ = lean_unsigned_to_nat(0u);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v___x_9_);
lean_ctor_set(v___x_10_, 1, v___x_8_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v___x_7_);
lean_ctor_set(v___x_10_, 4, v___x_7_);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Meta_AC_instInhabitedPreContext_default(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = lean_obj_once(&l_Lean_Meta_AC_instInhabitedPreContext_default___closed__3, &l_Lean_Meta_AC_instInhabitedPreContext_default___closed__3_once, _init_l_Lean_Meta_AC_instInhabitedPreContext_default___closed__3);
return v___x_11_;
}
}
static lean_object* _init_l_Lean_Meta_AC_instInhabitedPreContext(void){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = l_Lean_Meta_AC_instInhabitedPreContext_default;
return v___x_12_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__0(lean_object* v_ctx_13_){
_start:
{
lean_object* v_fst_14_; lean_object* v_comm_15_; 
v_fst_14_ = lean_ctor_get(v_ctx_13_, 0);
v_comm_15_ = lean_ctor_get(v_fst_14_, 3);
if (lean_obj_tag(v_comm_15_) == 0)
{
uint8_t v___x_16_; 
v___x_16_ = 0;
return v___x_16_;
}
else
{
uint8_t v___x_17_; 
v___x_17_ = 1;
return v___x_17_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__0___boxed(lean_object* v_ctx_18_){
_start:
{
uint8_t v_res_19_; lean_object* v_r_20_; 
v_res_19_ = l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__0(v_ctx_18_);
lean_dec_ref(v_ctx_18_);
v_r_20_ = lean_box(v_res_19_);
return v_r_20_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__1(lean_object* v_ctx_21_){
_start:
{
lean_object* v_fst_22_; lean_object* v_idem_23_; 
v_fst_22_ = lean_ctor_get(v_ctx_21_, 0);
v_idem_23_ = lean_ctor_get(v_fst_22_, 4);
if (lean_obj_tag(v_idem_23_) == 0)
{
uint8_t v___x_24_; 
v___x_24_ = 0;
return v___x_24_;
}
else
{
uint8_t v___x_25_; 
v___x_25_ = 1;
return v___x_25_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__1___boxed(lean_object* v_ctx_26_){
_start:
{
uint8_t v_res_27_; lean_object* v_r_28_; 
v_res_27_ = l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__1(v_ctx_26_);
lean_dec_ref(v_ctx_26_);
v_r_28_ = lean_box(v_res_27_);
return v_r_28_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__2(uint8_t v___x_29_, lean_object* v_ctx_30_, lean_object* v_x_31_){
_start:
{
lean_object* v_snd_32_; lean_object* v___x_33_; lean_object* v___x_34_; uint8_t v___x_35_; 
v_snd_32_ = lean_ctor_get(v_ctx_30_, 1);
v___x_33_ = lean_box(v___x_29_);
v___x_34_ = lean_array_get(v___x_33_, v_snd_32_, v_x_31_);
lean_dec(v___x_33_);
v___x_35_ = lean_unbox(v___x_34_);
lean_dec(v___x_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__2___boxed(lean_object* v___x_36_, lean_object* v_ctx_37_, lean_object* v_x_38_){
_start:
{
uint8_t v___x_53__boxed_39_; uint8_t v_res_40_; lean_object* v_r_41_; 
v___x_53__boxed_39_ = lean_unbox(v___x_36_);
v_res_40_ = l_Lean_Meta_AC_instContextInformationProdPreContextArrayBool___lam__2(v___x_53__boxed_39_, v_ctx_37_, v_x_38_);
lean_dec(v_x_38_);
lean_dec_ref(v_ctx_37_);
v_r_41_ = lean_box(v_res_40_);
return v_r_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0(lean_object* v_x_54_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = ((lean_object*)(l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0___closed__0));
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0___boxed(lean_object* v_x_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0(v_x_56_);
lean_dec_ref(v_x_56_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__1(lean_object* v_x_58_, lean_object* v___y_59_, lean_object* v___y_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_61_, 0, v___y_59_);
lean_ctor_set(v___x_61_, 1, v___y_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__1___boxed(lean_object* v_x_62_, lean_object* v___y_63_, lean_object* v___y_64_){
_start:
{
lean_object* v_res_65_; 
v_res_65_ = l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__1(v_x_62_, v___y_63_, v___y_64_);
lean_dec_ref(v_x_62_);
return v_res_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__2(lean_object* v_x_66_, lean_object* v_x_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_68_, 0, v_x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__2___boxed(lean_object* v_x_69_, lean_object* v_x_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__2(v_x_69_, v_x_70_);
lean_dec_ref(v_x_69_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0___redArg(lean_object* v_cls_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_options_86_; uint8_t v_hasTrace_87_; 
v_options_86_ = lean_ctor_get(v___y_84_, 2);
v_hasTrace_87_ = lean_ctor_get_uint8(v_options_86_, sizeof(void*)*1);
if (v_hasTrace_87_ == 0)
{
lean_object* v___x_88_; lean_object* v___x_89_; 
lean_dec(v_cls_83_);
v___x_88_ = lean_box(v_hasTrace_87_);
v___x_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
return v___x_89_;
}
else
{
lean_object* v_inheritedTraceOptions_90_; lean_object* v___x_91_; lean_object* v___x_92_; uint8_t v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v_inheritedTraceOptions_90_ = lean_ctor_get(v___y_84_, 13);
v___x_91_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0___redArg___closed__1));
v___x_92_ = l_Lean_Name_append(v___x_91_, v_cls_83_);
v___x_93_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_90_, v_options_86_, v___x_92_);
lean_dec(v___x_92_);
v___x_94_ = lean_box(v___x_93_);
v___x_95_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
return v___x_95_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0___redArg___boxed(lean_object* v_cls_96_, lean_object* v___y_97_, lean_object* v___y_98_){
_start:
{
lean_object* v_res_99_; 
v_res_99_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0___redArg(v_cls_96_, v___y_97_);
lean_dec_ref(v___y_97_);
return v_res_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0(lean_object* v_cls_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0___redArg(v_cls_100_, v___y_103_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0___boxed(lean_object* v_cls_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0(v_cls_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_);
lean_dec(v___y_111_);
lean_dec_ref(v___y_110_);
lean_dec(v___y_109_);
lean_dec_ref(v___y_108_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1_spec__1(lean_object* v_msgData_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_){
_start:
{
lean_object* v___x_120_; lean_object* v_env_121_; lean_object* v___x_122_; lean_object* v_mctx_123_; lean_object* v_lctx_124_; lean_object* v_options_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_120_ = lean_st_ref_get(v___y_118_);
v_env_121_ = lean_ctor_get(v___x_120_, 0);
lean_inc_ref(v_env_121_);
lean_dec(v___x_120_);
v___x_122_ = lean_st_ref_get(v___y_116_);
v_mctx_123_ = lean_ctor_get(v___x_122_, 0);
lean_inc_ref(v_mctx_123_);
lean_dec(v___x_122_);
v_lctx_124_ = lean_ctor_get(v___y_115_, 2);
v_options_125_ = lean_ctor_get(v___y_117_, 2);
lean_inc_ref(v_options_125_);
lean_inc_ref(v_lctx_124_);
v___x_126_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_126_, 0, v_env_121_);
lean_ctor_set(v___x_126_, 1, v_mctx_123_);
lean_ctor_set(v___x_126_, 2, v_lctx_124_);
lean_ctor_set(v___x_126_, 3, v_options_125_);
v___x_127_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
lean_ctor_set(v___x_127_, 1, v_msgData_114_);
v___x_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1_spec__1___boxed(lean_object* v_msgData_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1_spec__1(v_msgData_129_, v___y_130_, v___y_131_, v___y_132_, v___y_133_);
lean_dec(v___y_133_);
lean_dec_ref(v___y_132_);
lean_dec(v___y_131_);
lean_dec_ref(v___y_130_);
return v_res_135_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1___closed__0(void){
_start:
{
lean_object* v___x_136_; double v___x_137_; 
v___x_136_ = lean_unsigned_to_nat(0u);
v___x_137_ = lean_float_of_nat(v___x_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1(lean_object* v_cls_141_, lean_object* v_msg_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
lean_object* v_ref_148_; lean_object* v___x_149_; lean_object* v_a_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_194_; 
v_ref_148_ = lean_ctor_get(v___y_145_, 5);
v___x_149_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1_spec__1(v_msg_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_);
v_a_150_ = lean_ctor_get(v___x_149_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_149_);
if (v_isSharedCheck_194_ == 0)
{
v___x_152_ = v___x_149_;
v_isShared_153_ = v_isSharedCheck_194_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_a_150_);
lean_dec(v___x_149_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_194_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_154_; lean_object* v_traceState_155_; lean_object* v_env_156_; lean_object* v_nextMacroScope_157_; lean_object* v_ngen_158_; lean_object* v_auxDeclNGen_159_; lean_object* v_cache_160_; lean_object* v_messages_161_; lean_object* v_infoState_162_; lean_object* v_snapshotTasks_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_193_; 
v___x_154_ = lean_st_ref_take(v___y_146_);
v_traceState_155_ = lean_ctor_get(v___x_154_, 4);
v_env_156_ = lean_ctor_get(v___x_154_, 0);
v_nextMacroScope_157_ = lean_ctor_get(v___x_154_, 1);
v_ngen_158_ = lean_ctor_get(v___x_154_, 2);
v_auxDeclNGen_159_ = lean_ctor_get(v___x_154_, 3);
v_cache_160_ = lean_ctor_get(v___x_154_, 5);
v_messages_161_ = lean_ctor_get(v___x_154_, 6);
v_infoState_162_ = lean_ctor_get(v___x_154_, 7);
v_snapshotTasks_163_ = lean_ctor_get(v___x_154_, 8);
v_isSharedCheck_193_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_193_ == 0)
{
v___x_165_ = v___x_154_;
v_isShared_166_ = v_isSharedCheck_193_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_snapshotTasks_163_);
lean_inc(v_infoState_162_);
lean_inc(v_messages_161_);
lean_inc(v_cache_160_);
lean_inc(v_traceState_155_);
lean_inc(v_auxDeclNGen_159_);
lean_inc(v_ngen_158_);
lean_inc(v_nextMacroScope_157_);
lean_inc(v_env_156_);
lean_dec(v___x_154_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_193_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
uint64_t v_tid_167_; lean_object* v_traces_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_192_; 
v_tid_167_ = lean_ctor_get_uint64(v_traceState_155_, sizeof(void*)*1);
v_traces_168_ = lean_ctor_get(v_traceState_155_, 0);
v_isSharedCheck_192_ = !lean_is_exclusive(v_traceState_155_);
if (v_isSharedCheck_192_ == 0)
{
v___x_170_ = v_traceState_155_;
v_isShared_171_ = v_isSharedCheck_192_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_traces_168_);
lean_dec(v_traceState_155_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_192_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_172_; double v___x_173_; uint8_t v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_182_; 
v___x_172_ = lean_box(0);
v___x_173_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1___closed__0, &l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1___closed__0);
v___x_174_ = 0;
v___x_175_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1___closed__1));
v___x_176_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_176_, 0, v_cls_141_);
lean_ctor_set(v___x_176_, 1, v___x_172_);
lean_ctor_set(v___x_176_, 2, v___x_175_);
lean_ctor_set_float(v___x_176_, sizeof(void*)*3, v___x_173_);
lean_ctor_set_float(v___x_176_, sizeof(void*)*3 + 8, v___x_173_);
lean_ctor_set_uint8(v___x_176_, sizeof(void*)*3 + 16, v___x_174_);
v___x_177_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1___closed__2));
v___x_178_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_178_, 0, v___x_176_);
lean_ctor_set(v___x_178_, 1, v_a_150_);
lean_ctor_set(v___x_178_, 2, v___x_177_);
lean_inc(v_ref_148_);
v___x_179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_179_, 0, v_ref_148_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
v___x_180_ = l_Lean_PersistentArray_push___redArg(v_traces_168_, v___x_179_);
if (v_isShared_171_ == 0)
{
lean_ctor_set(v___x_170_, 0, v___x_180_);
v___x_182_ = v___x_170_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_191_; 
v_reuseFailAlloc_191_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_191_, 0, v___x_180_);
lean_ctor_set_uint64(v_reuseFailAlloc_191_, sizeof(void*)*1, v_tid_167_);
v___x_182_ = v_reuseFailAlloc_191_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
lean_object* v___x_184_; 
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 4, v___x_182_);
v___x_184_ = v___x_165_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_env_156_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v_nextMacroScope_157_);
lean_ctor_set(v_reuseFailAlloc_190_, 2, v_ngen_158_);
lean_ctor_set(v_reuseFailAlloc_190_, 3, v_auxDeclNGen_159_);
lean_ctor_set(v_reuseFailAlloc_190_, 4, v___x_182_);
lean_ctor_set(v_reuseFailAlloc_190_, 5, v_cache_160_);
lean_ctor_set(v_reuseFailAlloc_190_, 6, v_messages_161_);
lean_ctor_set(v_reuseFailAlloc_190_, 7, v_infoState_162_);
lean_ctor_set(v_reuseFailAlloc_190_, 8, v_snapshotTasks_163_);
v___x_184_ = v_reuseFailAlloc_190_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_188_; 
v___x_185_ = lean_st_ref_set(v___y_146_, v___x_184_);
v___x_186_ = lean_box(0);
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 0, v___x_186_);
v___x_188_ = v___x_152_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v___x_186_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1___boxed(lean_object* v_cls_195_, lean_object* v_msg_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1(v_cls_195_, v_msg_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_);
lean_dec(v___y_200_);
lean_dec_ref(v___y_199_);
lean_dec(v___y_198_);
lean_dec_ref(v___y_197_);
return v_res_202_;
}
}
static lean_object* _init_l_Lean_Meta_AC_getInstance___lam__0___closed__1(void){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_204_ = ((lean_object*)(l_Lean_Meta_AC_getInstance___lam__0___closed__0));
v___x_205_ = l_Lean_stringToMessageData(v___x_204_);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_getInstance___lam__0(lean_object* v_a_206_, lean_object* v___x_207_, lean_object* v_____r_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = lean_box(0);
v___x_215_ = l_Lean_Meta_synthInstance(v_a_206_, v___x_214_, v___y_209_, v___y_210_, v___y_211_, v___y_212_);
if (lean_obj_tag(v___x_215_) == 0)
{
lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_239_; 
v_a_216_ = lean_ctor_get(v___x_215_, 0);
v_isSharedCheck_239_ = !lean_is_exclusive(v___x_215_);
if (v_isSharedCheck_239_ == 0)
{
v___x_218_ = v___x_215_;
v_isShared_219_ = v_isSharedCheck_239_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_215_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_239_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_226_; lean_object* v_a_227_; uint8_t v___x_228_; 
lean_inc(v___x_207_);
v___x_226_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0___redArg(v___x_207_, v___y_211_);
v_a_227_ = lean_ctor_get(v___x_226_, 0);
lean_inc(v_a_227_);
lean_dec_ref(v___x_226_);
v___x_228_ = lean_unbox(v_a_227_);
lean_dec(v_a_227_);
if (v___x_228_ == 0)
{
lean_dec(v___x_207_);
goto v___jp_220_;
}
else
{
lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_229_ = lean_obj_once(&l_Lean_Meta_AC_getInstance___lam__0___closed__1, &l_Lean_Meta_AC_getInstance___lam__0___closed__1_once, _init_l_Lean_Meta_AC_getInstance___lam__0___closed__1);
v___x_230_ = l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1(v___x_207_, v___x_229_, v___y_209_, v___y_210_, v___y_211_, v___y_212_);
if (lean_obj_tag(v___x_230_) == 0)
{
lean_dec_ref(v___x_230_);
goto v___jp_220_;
}
else
{
lean_object* v_a_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_238_; 
lean_del_object(v___x_218_);
lean_dec(v_a_216_);
v_a_231_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_238_ == 0)
{
v___x_233_ = v___x_230_;
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_a_231_);
lean_dec(v___x_230_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_236_; 
if (v_isShared_234_ == 0)
{
v___x_236_ = v___x_233_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_a_231_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
}
v___jp_220_:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_224_; 
v___x_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_221_, 0, v_a_216_);
v___x_222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_222_, 0, v___x_221_);
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 0, v___x_222_);
v___x_224_ = v___x_218_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_222_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
else
{
lean_object* v_a_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_247_; 
lean_dec(v___x_207_);
v_a_240_ = lean_ctor_get(v___x_215_, 0);
v_isSharedCheck_247_ = !lean_is_exclusive(v___x_215_);
if (v_isSharedCheck_247_ == 0)
{
v___x_242_ = v___x_215_;
v_isShared_243_ = v_isSharedCheck_247_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_a_240_);
lean_dec(v___x_215_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_247_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v___x_245_; 
if (v_isShared_243_ == 0)
{
v___x_245_ = v___x_242_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v_a_240_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
return v___x_245_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_getInstance___lam__0___boxed(lean_object* v_a_248_, lean_object* v___x_249_, lean_object* v_____r_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Lean_Meta_AC_getInstance___lam__0(v_a_248_, v___x_249_, v_____r_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_);
lean_dec(v___y_254_);
lean_dec_ref(v___y_253_);
lean_dec(v___y_252_);
lean_dec_ref(v___y_251_);
return v_res_256_;
}
}
static lean_object* _init_l_Lean_Meta_AC_getInstance___closed__4(void){
_start:
{
lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_263_ = ((lean_object*)(l_Lean_Meta_AC_getInstance___closed__3));
v___x_264_ = l_Lean_stringToMessageData(v___x_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_getInstance(lean_object* v_cls_265_, lean_object* v_exprs_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_){
_start:
{
lean_object* v___y_273_; uint8_t v___y_274_; lean_object* v_a_279_; lean_object* v___y_283_; lean_object* v___x_294_; 
v___x_294_ = l_Lean_Meta_mkAppM(v_cls_265_, v_exprs_266_, v_a_267_, v_a_268_, v_a_269_, v_a_270_);
if (lean_obj_tag(v___x_294_) == 0)
{
lean_object* v_a_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v_a_298_; uint8_t v___x_299_; 
v_a_295_ = lean_ctor_get(v___x_294_, 0);
lean_inc(v_a_295_);
lean_dec_ref(v___x_294_);
v___x_296_ = ((lean_object*)(l_Lean_Meta_AC_getInstance___closed__2));
v___x_297_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_AC_getInstance_spec__0___redArg(v___x_296_, v_a_269_);
v_a_298_ = lean_ctor_get(v___x_297_, 0);
lean_inc(v_a_298_);
lean_dec_ref(v___x_297_);
v___x_299_ = lean_unbox(v_a_298_);
lean_dec(v_a_298_);
if (v___x_299_ == 0)
{
lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_300_ = lean_box(0);
v___x_301_ = l_Lean_Meta_AC_getInstance___lam__0(v_a_295_, v___x_296_, v___x_300_, v_a_267_, v_a_268_, v_a_269_, v_a_270_);
v___y_283_ = v___x_301_;
goto v___jp_282_;
}
else
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_302_ = lean_obj_once(&l_Lean_Meta_AC_getInstance___closed__4, &l_Lean_Meta_AC_getInstance___closed__4_once, _init_l_Lean_Meta_AC_getInstance___closed__4);
lean_inc(v_a_295_);
v___x_303_ = l_Lean_indentExpr(v_a_295_);
v___x_304_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_302_);
lean_ctor_set(v___x_304_, 1, v___x_303_);
v___x_305_ = l_Lean_addTrace___at___00Lean_Meta_AC_getInstance_spec__1(v___x_296_, v___x_304_, v_a_267_, v_a_268_, v_a_269_, v_a_270_);
if (lean_obj_tag(v___x_305_) == 0)
{
lean_object* v_a_306_; lean_object* v___x_307_; 
v_a_306_ = lean_ctor_get(v___x_305_, 0);
lean_inc(v_a_306_);
lean_dec_ref(v___x_305_);
v___x_307_ = l_Lean_Meta_AC_getInstance___lam__0(v_a_295_, v___x_296_, v_a_306_, v_a_267_, v_a_268_, v_a_269_, v_a_270_);
v___y_283_ = v___x_307_;
goto v___jp_282_;
}
else
{
lean_object* v_a_308_; 
lean_dec(v_a_295_);
v_a_308_ = lean_ctor_get(v___x_305_, 0);
lean_inc(v_a_308_);
lean_dec_ref(v___x_305_);
v_a_279_ = v_a_308_;
goto v___jp_278_;
}
}
}
else
{
lean_object* v_a_309_; 
v_a_309_ = lean_ctor_get(v___x_294_, 0);
lean_inc(v_a_309_);
lean_dec_ref(v___x_294_);
v_a_279_ = v_a_309_;
goto v___jp_278_;
}
v___jp_272_:
{
if (v___y_274_ == 0)
{
lean_object* v___x_275_; lean_object* v___x_276_; 
lean_dec_ref(v___y_273_);
v___x_275_ = lean_box(0);
v___x_276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
return v___x_276_;
}
else
{
lean_object* v___x_277_; 
v___x_277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_277_, 0, v___y_273_);
return v___x_277_;
}
}
v___jp_278_:
{
uint8_t v___x_280_; 
v___x_280_ = l_Lean_Exception_isInterrupt(v_a_279_);
if (v___x_280_ == 0)
{
uint8_t v___x_281_; 
lean_inc_ref(v_a_279_);
v___x_281_ = l_Lean_Exception_isRuntime(v_a_279_);
v___y_273_ = v_a_279_;
v___y_274_ = v___x_281_;
goto v___jp_272_;
}
else
{
v___y_273_ = v_a_279_;
v___y_274_ = v___x_280_;
goto v___jp_272_;
}
}
v___jp_282_:
{
if (lean_obj_tag(v___y_283_) == 0)
{
lean_object* v_a_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_292_; 
v_a_284_ = lean_ctor_get(v___y_283_, 0);
v_isSharedCheck_292_ = !lean_is_exclusive(v___y_283_);
if (v_isSharedCheck_292_ == 0)
{
v___x_286_ = v___y_283_;
v_isShared_287_ = v_isSharedCheck_292_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_a_284_);
lean_dec(v___y_283_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_292_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
lean_object* v_a_288_; lean_object* v___x_290_; 
v_a_288_ = lean_ctor_get(v_a_284_, 0);
lean_inc(v_a_288_);
lean_dec(v_a_284_);
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 0, v_a_288_);
v___x_290_ = v___x_286_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v_a_288_);
v___x_290_ = v_reuseFailAlloc_291_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
return v___x_290_;
}
}
}
else
{
lean_object* v_a_293_; 
v_a_293_ = lean_ctor_get(v___y_283_, 0);
lean_inc(v_a_293_);
lean_dec_ref(v___y_283_);
v_a_279_ = v_a_293_;
goto v___jp_278_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_getInstance___boxed(lean_object* v_cls_310_, lean_object* v_exprs_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_, lean_object* v_a_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = l_Lean_Meta_AC_getInstance(v_cls_310_, v_exprs_311_, v_a_312_, v_a_313_, v_a_314_, v_a_315_);
lean_dec(v_a_315_);
lean_dec_ref(v_a_314_);
lean_dec(v_a_313_);
lean_dec_ref(v_a_312_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_preContext(lean_object* v_expr_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_337_ = ((lean_object*)(l_Lean_Meta_AC_preContext___closed__2));
v___x_338_ = lean_unsigned_to_nat(1u);
v___x_339_ = lean_mk_empty_array_with_capacity(v___x_338_);
lean_inc_ref(v_expr_331_);
v___x_340_ = lean_array_push(v___x_339_, v_expr_331_);
lean_inc_ref(v___x_340_);
v___x_341_ = l_Lean_Meta_AC_getInstance(v___x_337_, v___x_340_, v_a_332_, v_a_333_, v_a_334_, v_a_335_);
if (lean_obj_tag(v___x_341_) == 0)
{
lean_object* v_a_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_389_; 
v_a_342_ = lean_ctor_get(v___x_341_, 0);
v_isSharedCheck_389_ = !lean_is_exclusive(v___x_341_);
if (v_isSharedCheck_389_ == 0)
{
v___x_344_ = v___x_341_;
v_isShared_345_ = v_isSharedCheck_389_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_a_342_);
lean_dec(v___x_341_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_389_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
if (lean_obj_tag(v_a_342_) == 1)
{
lean_object* v_val_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_384_; 
lean_del_object(v___x_344_);
v_val_346_ = lean_ctor_get(v_a_342_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v_a_342_);
if (v_isSharedCheck_384_ == 0)
{
v___x_348_ = v_a_342_;
v_isShared_349_ = v_isSharedCheck_384_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_val_346_);
lean_dec(v_a_342_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_384_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = ((lean_object*)(l_Lean_Meta_AC_preContext___closed__4));
lean_inc_ref(v___x_340_);
v___x_351_ = l_Lean_Meta_AC_getInstance(v___x_350_, v___x_340_, v_a_332_, v_a_333_, v_a_334_, v_a_335_);
if (lean_obj_tag(v___x_351_) == 0)
{
lean_object* v_a_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v_a_352_ = lean_ctor_get(v___x_351_, 0);
lean_inc(v_a_352_);
lean_dec_ref(v___x_351_);
v___x_353_ = ((lean_object*)(l_Lean_Meta_AC_preContext___closed__6));
v___x_354_ = l_Lean_Meta_AC_getInstance(v___x_353_, v___x_340_, v_a_332_, v_a_333_, v_a_334_, v_a_335_);
if (lean_obj_tag(v___x_354_) == 0)
{
lean_object* v_a_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_367_; 
v_a_355_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_367_ == 0)
{
v___x_357_ = v___x_354_;
v_isShared_358_ = v_isSharedCheck_367_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_a_355_);
lean_dec(v___x_354_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_367_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_362_; 
v___x_359_ = lean_unsigned_to_nat(0u);
v___x_360_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
lean_ctor_set(v___x_360_, 1, v_expr_331_);
lean_ctor_set(v___x_360_, 2, v_val_346_);
lean_ctor_set(v___x_360_, 3, v_a_352_);
lean_ctor_set(v___x_360_, 4, v_a_355_);
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 0, v___x_360_);
v___x_362_ = v___x_348_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v___x_360_);
v___x_362_ = v_reuseFailAlloc_366_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
lean_object* v___x_364_; 
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 0, v___x_362_);
v___x_364_ = v___x_357_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v___x_362_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
}
else
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_375_; 
lean_dec(v_a_352_);
lean_del_object(v___x_348_);
lean_dec(v_val_346_);
lean_dec_ref(v_expr_331_);
v_a_368_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_375_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_375_ == 0)
{
v___x_370_ = v___x_354_;
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_354_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_375_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_373_; 
if (v_isShared_371_ == 0)
{
v___x_373_ = v___x_370_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_a_368_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
}
else
{
lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_383_; 
lean_del_object(v___x_348_);
lean_dec(v_val_346_);
lean_dec_ref(v___x_340_);
lean_dec_ref(v_expr_331_);
v_a_376_ = lean_ctor_get(v___x_351_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_383_ == 0)
{
v___x_378_ = v___x_351_;
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_dec(v___x_351_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_383_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_381_; 
if (v_isShared_379_ == 0)
{
v___x_381_ = v___x_378_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_a_376_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
}
}
else
{
lean_object* v___x_385_; lean_object* v___x_387_; 
lean_dec(v_a_342_);
lean_dec_ref(v___x_340_);
lean_dec_ref(v_expr_331_);
v___x_385_ = lean_box(0);
if (v_isShared_345_ == 0)
{
lean_ctor_set(v___x_344_, 0, v___x_385_);
v___x_387_ = v___x_344_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v___x_385_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
}
else
{
lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_397_; 
lean_dec_ref(v___x_340_);
lean_dec_ref(v_expr_331_);
v_a_390_ = lean_ctor_get(v___x_341_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_341_);
if (v_isSharedCheck_397_ == 0)
{
v___x_392_ = v___x_341_;
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_dec(v___x_341_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_395_; 
if (v_isShared_393_ == 0)
{
v___x_395_ = v___x_392_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_a_390_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_preContext___boxed(lean_object* v_expr_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lean_Meta_AC_preContext(v_expr_398_, v_a_399_, v_a_400_, v_a_401_, v_a_402_);
lean_dec(v_a_402_);
lean_dec_ref(v_a_401_);
lean_dec(v_a_400_);
lean_dec_ref(v_a_399_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorIdx(lean_object* v_x_405_){
_start:
{
if (lean_obj_tag(v_x_405_) == 0)
{
lean_object* v___x_406_; 
v___x_406_ = lean_unsigned_to_nat(0u);
return v___x_406_;
}
else
{
lean_object* v___x_407_; 
v___x_407_ = lean_unsigned_to_nat(1u);
return v___x_407_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorIdx___boxed(lean_object* v_x_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lean_Meta_AC_PreExpr_ctorIdx(v_x_408_);
lean_dec_ref(v_x_408_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorElim___redArg(lean_object* v_t_410_, lean_object* v_k_411_){
_start:
{
if (lean_obj_tag(v_t_410_) == 0)
{
lean_object* v_lhs_412_; lean_object* v_rhs_413_; lean_object* v___x_414_; 
v_lhs_412_ = lean_ctor_get(v_t_410_, 0);
lean_inc_ref(v_lhs_412_);
v_rhs_413_ = lean_ctor_get(v_t_410_, 1);
lean_inc_ref(v_rhs_413_);
lean_dec_ref(v_t_410_);
v___x_414_ = lean_apply_2(v_k_411_, v_lhs_412_, v_rhs_413_);
return v___x_414_;
}
else
{
lean_object* v_e_415_; lean_object* v___x_416_; 
v_e_415_ = lean_ctor_get(v_t_410_, 0);
lean_inc_ref(v_e_415_);
lean_dec_ref(v_t_410_);
v___x_416_ = lean_apply_1(v_k_411_, v_e_415_);
return v___x_416_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorElim(lean_object* v_motive_417_, lean_object* v_ctorIdx_418_, lean_object* v_t_419_, lean_object* v_h_420_, lean_object* v_k_421_){
_start:
{
lean_object* v___x_422_; 
v___x_422_ = l_Lean_Meta_AC_PreExpr_ctorElim___redArg(v_t_419_, v_k_421_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_ctorElim___boxed(lean_object* v_motive_423_, lean_object* v_ctorIdx_424_, lean_object* v_t_425_, lean_object* v_h_426_, lean_object* v_k_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Lean_Meta_AC_PreExpr_ctorElim(v_motive_423_, v_ctorIdx_424_, v_t_425_, v_h_426_, v_k_427_);
lean_dec(v_ctorIdx_424_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_op_elim___redArg(lean_object* v_t_429_, lean_object* v_op_430_){
_start:
{
lean_object* v___x_431_; 
v___x_431_ = l_Lean_Meta_AC_PreExpr_ctorElim___redArg(v_t_429_, v_op_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_op_elim(lean_object* v_motive_432_, lean_object* v_t_433_, lean_object* v_h_434_, lean_object* v_op_435_){
_start:
{
lean_object* v___x_436_; 
v___x_436_ = l_Lean_Meta_AC_PreExpr_ctorElim___redArg(v_t_433_, v_op_435_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_var_elim___redArg(lean_object* v_t_437_, lean_object* v_var_438_){
_start:
{
lean_object* v___x_439_; 
v___x_439_ = l_Lean_Meta_AC_PreExpr_ctorElim___redArg(v_t_437_, v_var_438_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_PreExpr_var_elim(lean_object* v_motive_440_, lean_object* v_t_441_, lean_object* v_h_442_, lean_object* v_var_443_){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = l_Lean_Meta_AC_PreExpr_ctorElim___redArg(v_t_441_, v_var_443_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_bin(lean_object* v_op_445_, lean_object* v_l_446_, lean_object* v_r_447_){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_448_ = l_Lean_Expr_app___override(v_op_445_, v_l_446_);
v___x_449_ = l_Lean_Expr_app___override(v___x_448_, v_r_447_);
return v___x_449_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___redArg(lean_object* v_a_450_, lean_object* v_x_451_){
_start:
{
if (lean_obj_tag(v_x_451_) == 0)
{
uint8_t v___x_452_; 
v___x_452_ = 0;
return v___x_452_;
}
else
{
lean_object* v_key_453_; lean_object* v_tail_454_; uint8_t v___x_455_; 
v_key_453_ = lean_ctor_get(v_x_451_, 0);
v_tail_454_ = lean_ctor_get(v_x_451_, 2);
v___x_455_ = lean_expr_eqv(v_key_453_, v_a_450_);
if (v___x_455_ == 0)
{
v_x_451_ = v_tail_454_;
goto _start;
}
else
{
return v___x_455_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___redArg___boxed(lean_object* v_a_457_, lean_object* v_x_458_){
_start:
{
uint8_t v_res_459_; lean_object* v_r_460_; 
v_res_459_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___redArg(v_a_457_, v_x_458_);
lean_dec(v_x_458_);
lean_dec_ref(v_a_457_);
v_r_460_ = lean_box(v_res_459_);
return v_r_460_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_461_, lean_object* v_x_462_){
_start:
{
if (lean_obj_tag(v_x_462_) == 0)
{
return v_x_461_;
}
else
{
lean_object* v_key_463_; lean_object* v_value_464_; lean_object* v_tail_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_488_; 
v_key_463_ = lean_ctor_get(v_x_462_, 0);
v_value_464_ = lean_ctor_get(v_x_462_, 1);
v_tail_465_ = lean_ctor_get(v_x_462_, 2);
v_isSharedCheck_488_ = !lean_is_exclusive(v_x_462_);
if (v_isSharedCheck_488_ == 0)
{
v___x_467_ = v_x_462_;
v_isShared_468_ = v_isSharedCheck_488_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_tail_465_);
lean_inc(v_value_464_);
lean_inc(v_key_463_);
lean_dec(v_x_462_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_488_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v___x_469_; uint64_t v___x_470_; uint64_t v___x_471_; uint64_t v___x_472_; uint64_t v_fold_473_; uint64_t v___x_474_; uint64_t v___x_475_; uint64_t v___x_476_; size_t v___x_477_; size_t v___x_478_; size_t v___x_479_; size_t v___x_480_; size_t v___x_481_; lean_object* v___x_482_; lean_object* v___x_484_; 
v___x_469_ = lean_array_get_size(v_x_461_);
v___x_470_ = l_Lean_Expr_hash(v_key_463_);
v___x_471_ = 32ULL;
v___x_472_ = lean_uint64_shift_right(v___x_470_, v___x_471_);
v_fold_473_ = lean_uint64_xor(v___x_470_, v___x_472_);
v___x_474_ = 16ULL;
v___x_475_ = lean_uint64_shift_right(v_fold_473_, v___x_474_);
v___x_476_ = lean_uint64_xor(v_fold_473_, v___x_475_);
v___x_477_ = lean_uint64_to_usize(v___x_476_);
v___x_478_ = lean_usize_of_nat(v___x_469_);
v___x_479_ = ((size_t)1ULL);
v___x_480_ = lean_usize_sub(v___x_478_, v___x_479_);
v___x_481_ = lean_usize_land(v___x_477_, v___x_480_);
v___x_482_ = lean_array_uget_borrowed(v_x_461_, v___x_481_);
lean_inc(v___x_482_);
if (v_isShared_468_ == 0)
{
lean_ctor_set(v___x_467_, 2, v___x_482_);
v___x_484_ = v___x_467_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_key_463_);
lean_ctor_set(v_reuseFailAlloc_487_, 1, v_value_464_);
lean_ctor_set(v_reuseFailAlloc_487_, 2, v___x_482_);
v___x_484_ = v_reuseFailAlloc_487_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
lean_object* v___x_485_; 
v___x_485_ = lean_array_uset(v_x_461_, v___x_481_, v___x_484_);
v_x_461_ = v___x_485_;
v_x_462_ = v_tail_465_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2___redArg(lean_object* v_i_489_, lean_object* v_source_490_, lean_object* v_target_491_){
_start:
{
lean_object* v___x_492_; uint8_t v___x_493_; 
v___x_492_ = lean_array_get_size(v_source_490_);
v___x_493_ = lean_nat_dec_lt(v_i_489_, v___x_492_);
if (v___x_493_ == 0)
{
lean_dec_ref(v_source_490_);
lean_dec(v_i_489_);
return v_target_491_;
}
else
{
lean_object* v_es_494_; lean_object* v___x_495_; lean_object* v_source_496_; lean_object* v_target_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v_es_494_ = lean_array_fget(v_source_490_, v_i_489_);
v___x_495_ = lean_box(0);
v_source_496_ = lean_array_fset(v_source_490_, v_i_489_, v___x_495_);
v_target_497_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2_spec__3___redArg(v_target_491_, v_es_494_);
v___x_498_ = lean_unsigned_to_nat(1u);
v___x_499_ = lean_nat_add(v_i_489_, v___x_498_);
lean_dec(v_i_489_);
v_i_489_ = v___x_499_;
v_source_490_ = v_source_496_;
v_target_491_ = v_target_497_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1___redArg(lean_object* v_data_501_){
_start:
{
lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v_nbuckets_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v___x_502_ = lean_array_get_size(v_data_501_);
v___x_503_ = lean_unsigned_to_nat(2u);
v_nbuckets_504_ = lean_nat_mul(v___x_502_, v___x_503_);
v___x_505_ = lean_unsigned_to_nat(0u);
v___x_506_ = lean_box(0);
v___x_507_ = lean_mk_array(v_nbuckets_504_, v___x_506_);
v___x_508_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2___redArg(v___x_505_, v_data_501_, v___x_507_);
return v___x_508_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0___redArg(lean_object* v_m_509_, lean_object* v_a_510_, lean_object* v_b_511_){
_start:
{
lean_object* v_size_512_; lean_object* v_buckets_513_; lean_object* v___x_514_; uint64_t v___x_515_; uint64_t v___x_516_; uint64_t v___x_517_; uint64_t v_fold_518_; uint64_t v___x_519_; uint64_t v___x_520_; uint64_t v___x_521_; size_t v___x_522_; size_t v___x_523_; size_t v___x_524_; size_t v___x_525_; size_t v___x_526_; lean_object* v_bkt_527_; uint8_t v___x_528_; 
v_size_512_ = lean_ctor_get(v_m_509_, 0);
v_buckets_513_ = lean_ctor_get(v_m_509_, 1);
v___x_514_ = lean_array_get_size(v_buckets_513_);
v___x_515_ = l_Lean_Expr_hash(v_a_510_);
v___x_516_ = 32ULL;
v___x_517_ = lean_uint64_shift_right(v___x_515_, v___x_516_);
v_fold_518_ = lean_uint64_xor(v___x_515_, v___x_517_);
v___x_519_ = 16ULL;
v___x_520_ = lean_uint64_shift_right(v_fold_518_, v___x_519_);
v___x_521_ = lean_uint64_xor(v_fold_518_, v___x_520_);
v___x_522_ = lean_uint64_to_usize(v___x_521_);
v___x_523_ = lean_usize_of_nat(v___x_514_);
v___x_524_ = ((size_t)1ULL);
v___x_525_ = lean_usize_sub(v___x_523_, v___x_524_);
v___x_526_ = lean_usize_land(v___x_522_, v___x_525_);
v_bkt_527_ = lean_array_uget_borrowed(v_buckets_513_, v___x_526_);
v___x_528_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___redArg(v_a_510_, v_bkt_527_);
if (v___x_528_ == 0)
{
lean_object* v___x_530_; uint8_t v_isShared_531_; uint8_t v_isSharedCheck_549_; 
lean_inc_ref(v_buckets_513_);
lean_inc(v_size_512_);
v_isSharedCheck_549_ = !lean_is_exclusive(v_m_509_);
if (v_isSharedCheck_549_ == 0)
{
lean_object* v_unused_550_; lean_object* v_unused_551_; 
v_unused_550_ = lean_ctor_get(v_m_509_, 1);
lean_dec(v_unused_550_);
v_unused_551_ = lean_ctor_get(v_m_509_, 0);
lean_dec(v_unused_551_);
v___x_530_ = v_m_509_;
v_isShared_531_ = v_isSharedCheck_549_;
goto v_resetjp_529_;
}
else
{
lean_dec(v_m_509_);
v___x_530_ = lean_box(0);
v_isShared_531_ = v_isSharedCheck_549_;
goto v_resetjp_529_;
}
v_resetjp_529_:
{
lean_object* v___x_532_; lean_object* v_size_x27_533_; lean_object* v___x_534_; lean_object* v_buckets_x27_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; uint8_t v___x_541_; 
v___x_532_ = lean_unsigned_to_nat(1u);
v_size_x27_533_ = lean_nat_add(v_size_512_, v___x_532_);
lean_dec(v_size_512_);
lean_inc(v_bkt_527_);
v___x_534_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_534_, 0, v_a_510_);
lean_ctor_set(v___x_534_, 1, v_b_511_);
lean_ctor_set(v___x_534_, 2, v_bkt_527_);
v_buckets_x27_535_ = lean_array_uset(v_buckets_513_, v___x_526_, v___x_534_);
v___x_536_ = lean_unsigned_to_nat(4u);
v___x_537_ = lean_nat_mul(v_size_x27_533_, v___x_536_);
v___x_538_ = lean_unsigned_to_nat(3u);
v___x_539_ = lean_nat_div(v___x_537_, v___x_538_);
lean_dec(v___x_537_);
v___x_540_ = lean_array_get_size(v_buckets_x27_535_);
v___x_541_ = lean_nat_dec_le(v___x_539_, v___x_540_);
lean_dec(v___x_539_);
if (v___x_541_ == 0)
{
lean_object* v_val_542_; lean_object* v___x_544_; 
v_val_542_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1___redArg(v_buckets_x27_535_);
if (v_isShared_531_ == 0)
{
lean_ctor_set(v___x_530_, 1, v_val_542_);
lean_ctor_set(v___x_530_, 0, v_size_x27_533_);
v___x_544_ = v___x_530_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_size_x27_533_);
lean_ctor_set(v_reuseFailAlloc_545_, 1, v_val_542_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
else
{
lean_object* v___x_547_; 
if (v_isShared_531_ == 0)
{
lean_ctor_set(v___x_530_, 1, v_buckets_x27_535_);
lean_ctor_set(v___x_530_, 0, v_size_x27_533_);
v___x_547_ = v___x_530_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_size_x27_533_);
lean_ctor_set(v_reuseFailAlloc_548_, 1, v_buckets_x27_535_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
}
else
{
lean_dec(v_b_511_);
lean_dec_ref(v_a_510_);
return v_m_509_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr(lean_object* v_op_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_){
_start:
{
lean_object* v_e_561_; lean_object* v___y_562_; 
if (lean_obj_tag(v_a_553_) == 5)
{
lean_object* v_fn_568_; 
v_fn_568_ = lean_ctor_get(v_a_553_, 0);
if (lean_obj_tag(v_fn_568_) == 5)
{
lean_object* v_arg_569_; lean_object* v_fn_570_; lean_object* v_arg_571_; lean_object* v___x_572_; 
v_arg_569_ = lean_ctor_get(v_a_553_, 1);
v_fn_570_ = lean_ctor_get(v_fn_568_, 0);
v_arg_571_ = lean_ctor_get(v_fn_568_, 1);
lean_inc_ref(v_fn_570_);
lean_inc_ref(v_op_552_);
v___x_572_ = l_Lean_Meta_isExprDefEq(v_op_552_, v_fn_570_, v_a_555_, v_a_556_, v_a_557_, v_a_558_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_614_; 
v_a_573_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_614_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_614_ == 0)
{
v___x_575_ = v___x_572_;
v_isShared_576_ = v_isSharedCheck_614_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_572_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_614_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
uint8_t v___x_577_; 
v___x_577_ = lean_unbox(v_a_573_);
lean_dec(v_a_573_);
if (v___x_577_ == 0)
{
lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_583_; 
lean_dec_ref(v_op_552_);
v___x_578_ = lean_box(0);
lean_inc_ref(v_a_553_);
v___x_579_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0___redArg(v_a_554_, v_a_553_, v___x_578_);
v___x_580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_580_, 0, v_a_553_);
v___x_581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
lean_ctor_set(v___x_581_, 1, v___x_579_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 0, v___x_581_);
v___x_583_ = v___x_575_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v___x_581_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
else
{
lean_object* v___x_585_; 
lean_inc_ref(v_arg_571_);
lean_inc_ref(v_arg_569_);
lean_del_object(v___x_575_);
lean_dec_ref(v_a_553_);
lean_inc_ref(v_op_552_);
v___x_585_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr(v_op_552_, v_arg_571_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_);
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v_a_586_; lean_object* v_fst_587_; lean_object* v_snd_588_; lean_object* v___x_590_; uint8_t v_isShared_591_; uint8_t v_isSharedCheck_613_; 
v_a_586_ = lean_ctor_get(v___x_585_, 0);
lean_inc(v_a_586_);
lean_dec_ref(v___x_585_);
v_fst_587_ = lean_ctor_get(v_a_586_, 0);
v_snd_588_ = lean_ctor_get(v_a_586_, 1);
v_isSharedCheck_613_ = !lean_is_exclusive(v_a_586_);
if (v_isSharedCheck_613_ == 0)
{
v___x_590_ = v_a_586_;
v_isShared_591_ = v_isSharedCheck_613_;
goto v_resetjp_589_;
}
else
{
lean_inc(v_snd_588_);
lean_inc(v_fst_587_);
lean_dec(v_a_586_);
v___x_590_ = lean_box(0);
v_isShared_591_ = v_isSharedCheck_613_;
goto v_resetjp_589_;
}
v_resetjp_589_:
{
lean_object* v___x_592_; 
v___x_592_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr(v_op_552_, v_arg_569_, v_snd_588_, v_a_555_, v_a_556_, v_a_557_, v_a_558_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_612_; 
v_a_593_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_612_ == 0)
{
v___x_595_ = v___x_592_;
v_isShared_596_ = v_isSharedCheck_612_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v___x_592_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_612_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v_fst_597_; lean_object* v_snd_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_611_; 
v_fst_597_ = lean_ctor_get(v_a_593_, 0);
v_snd_598_ = lean_ctor_get(v_a_593_, 1);
v_isSharedCheck_611_ = !lean_is_exclusive(v_a_593_);
if (v_isSharedCheck_611_ == 0)
{
v___x_600_ = v_a_593_;
v_isShared_601_ = v_isSharedCheck_611_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_snd_598_);
lean_inc(v_fst_597_);
lean_dec(v_a_593_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_611_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_603_; 
if (v_isShared_591_ == 0)
{
lean_ctor_set(v___x_590_, 1, v_fst_597_);
v___x_603_ = v___x_590_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_fst_587_);
lean_ctor_set(v_reuseFailAlloc_610_, 1, v_fst_597_);
v___x_603_ = v_reuseFailAlloc_610_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
lean_object* v___x_605_; 
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 0, v___x_603_);
v___x_605_ = v___x_600_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v___x_603_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v_snd_598_);
v___x_605_ = v_reuseFailAlloc_609_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
lean_object* v___x_607_; 
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 0, v___x_605_);
v___x_607_ = v___x_595_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___x_605_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_590_);
lean_dec(v_fst_587_);
return v___x_592_;
}
}
}
else
{
lean_dec_ref(v_arg_569_);
lean_dec_ref(v_op_552_);
return v___x_585_;
}
}
}
}
else
{
lean_object* v_a_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_622_; 
lean_dec_ref(v_a_553_);
lean_dec_ref(v_a_554_);
lean_dec_ref(v_op_552_);
v_a_615_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_622_ == 0)
{
v___x_617_ = v___x_572_;
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_a_615_);
lean_dec(v___x_572_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_622_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_620_; 
if (v_isShared_618_ == 0)
{
v___x_620_ = v___x_617_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_a_615_);
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
else
{
lean_dec_ref(v_op_552_);
v_e_561_ = v_a_553_;
v___y_562_ = v_a_554_;
goto v___jp_560_;
}
}
else
{
lean_dec_ref(v_op_552_);
v_e_561_ = v_a_553_;
v___y_562_ = v_a_554_;
goto v___jp_560_;
}
v___jp_560_:
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_563_ = lean_box(0);
lean_inc_ref(v_e_561_);
v___x_564_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0___redArg(v___y_562_, v_e_561_, v___x_563_);
v___x_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_565_, 0, v_e_561_);
v___x_566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_566_, 0, v___x_565_);
lean_ctor_set(v___x_566_, 1, v___x_564_);
v___x_567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
return v___x_567_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr___boxed(lean_object* v_op_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr(v_op_623_, v_a_624_, v_a_625_, v_a_626_, v_a_627_, v_a_628_, v_a_629_);
lean_dec(v_a_629_);
lean_dec_ref(v_a_628_);
lean_dec(v_a_627_);
lean_dec_ref(v_a_626_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0(lean_object* v_00_u03b2_632_, lean_object* v_m_633_, lean_object* v_a_634_, lean_object* v_b_635_){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0___redArg(v_m_633_, v_a_634_, v_b_635_);
return v___x_636_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0(lean_object* v_00_u03b2_637_, lean_object* v_a_638_, lean_object* v_x_639_){
_start:
{
uint8_t v___x_640_; 
v___x_640_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___redArg(v_a_638_, v_x_639_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___boxed(lean_object* v_00_u03b2_641_, lean_object* v_a_642_, lean_object* v_x_643_){
_start:
{
uint8_t v_res_644_; lean_object* v_r_645_; 
v_res_644_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0(v_00_u03b2_641_, v_a_642_, v_x_643_);
lean_dec(v_x_643_);
lean_dec_ref(v_a_642_);
v_r_645_ = lean_box(v_res_644_);
return v_r_645_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1(lean_object* v_00_u03b2_646_, lean_object* v_data_647_){
_start:
{
lean_object* v___x_648_; 
v___x_648_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1___redArg(v_data_647_);
return v___x_648_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_649_, lean_object* v_i_650_, lean_object* v_source_651_, lean_object* v_target_652_){
_start:
{
lean_object* v___x_653_; 
v___x_653_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2___redArg(v_i_650_, v_source_651_, v_target_652_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_654_, lean_object* v_x_655_, lean_object* v_x_656_){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1_spec__2_spec__3___redArg(v_x_655_, v_x_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toACExpr(lean_object* v_varMap_658_, lean_object* v_a_659_){
_start:
{
if (lean_obj_tag(v_a_659_) == 0)
{
lean_object* v_lhs_660_; lean_object* v_rhs_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_670_; 
v_lhs_660_ = lean_ctor_get(v_a_659_, 0);
v_rhs_661_ = lean_ctor_get(v_a_659_, 1);
v_isSharedCheck_670_ = !lean_is_exclusive(v_a_659_);
if (v_isSharedCheck_670_ == 0)
{
v___x_663_ = v_a_659_;
v_isShared_664_ = v_isSharedCheck_670_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_rhs_661_);
lean_inc(v_lhs_660_);
lean_dec(v_a_659_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_670_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_668_; 
lean_inc_ref(v_varMap_658_);
v___x_665_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toACExpr(v_varMap_658_, v_lhs_660_);
v___x_666_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toACExpr(v_varMap_658_, v_rhs_661_);
if (v_isShared_664_ == 0)
{
lean_ctor_set_tag(v___x_663_, 1);
lean_ctor_set(v___x_663_, 1, v___x_666_);
lean_ctor_set(v___x_663_, 0, v___x_665_);
v___x_668_ = v___x_663_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v___x_665_);
lean_ctor_set(v_reuseFailAlloc_669_, 1, v___x_666_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
else
{
lean_object* v_e_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_679_; 
v_e_671_ = lean_ctor_get(v_a_659_, 0);
v_isSharedCheck_679_ = !lean_is_exclusive(v_a_659_);
if (v_isSharedCheck_679_ == 0)
{
v___x_673_ = v_a_659_;
v_isShared_674_ = v_isSharedCheck_679_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_e_671_);
lean_dec(v_a_659_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_679_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_675_; lean_object* v___x_677_; 
v___x_675_ = lean_apply_1(v_varMap_658_, v_e_671_);
if (v_isShared_674_ == 0)
{
lean_ctor_set_tag(v___x_673_, 0);
lean_ctor_set(v___x_673_, 0, v___x_675_);
v___x_677_ = v___x_673_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_675_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4_spec__5(lean_object* v_msg_680_){
_start:
{
lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_681_ = lean_unsigned_to_nat(0u);
v___x_682_ = lean_panic_fn_borrowed(v___x_681_, v_msg_680_);
return v___x_682_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__3(void){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_686_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__2));
v___x_687_ = lean_unsigned_to_nat(11u);
v___x_688_ = lean_unsigned_to_nat(163u);
v___x_689_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__1));
v___x_690_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__0));
v___x_691_ = l_mkPanicMessageWithDecl(v___x_690_, v___x_689_, v___x_688_, v___x_687_, v___x_686_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4(lean_object* v_a_692_, lean_object* v_x_693_){
_start:
{
if (lean_obj_tag(v_x_693_) == 0)
{
lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_694_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___closed__3);
v___x_695_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4_spec__5(v___x_694_);
return v___x_695_;
}
else
{
lean_object* v_key_696_; lean_object* v_value_697_; lean_object* v_tail_698_; uint8_t v___x_699_; 
v_key_696_ = lean_ctor_get(v_x_693_, 0);
v_value_697_ = lean_ctor_get(v_x_693_, 1);
v_tail_698_ = lean_ctor_get(v_x_693_, 2);
v___x_699_ = lean_expr_eqv(v_key_696_, v_a_692_);
if (v___x_699_ == 0)
{
v_x_693_ = v_tail_698_;
goto _start;
}
else
{
lean_inc(v_value_697_);
return v_value_697_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4___boxed(lean_object* v_a_701_, lean_object* v_x_702_){
_start:
{
lean_object* v_res_703_; 
v_res_703_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4(v_a_701_, v_x_702_);
lean_dec(v_x_702_);
lean_dec_ref(v_a_701_);
return v_res_703_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2(lean_object* v_m_704_, lean_object* v_a_705_){
_start:
{
lean_object* v_buckets_706_; lean_object* v___x_707_; uint64_t v___x_708_; uint64_t v___x_709_; uint64_t v___x_710_; uint64_t v_fold_711_; uint64_t v___x_712_; uint64_t v___x_713_; uint64_t v___x_714_; size_t v___x_715_; size_t v___x_716_; size_t v___x_717_; size_t v___x_718_; size_t v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v_buckets_706_ = lean_ctor_get(v_m_704_, 1);
v___x_707_ = lean_array_get_size(v_buckets_706_);
v___x_708_ = l_Lean_Expr_hash(v_a_705_);
v___x_709_ = 32ULL;
v___x_710_ = lean_uint64_shift_right(v___x_708_, v___x_709_);
v_fold_711_ = lean_uint64_xor(v___x_708_, v___x_710_);
v___x_712_ = 16ULL;
v___x_713_ = lean_uint64_shift_right(v_fold_711_, v___x_712_);
v___x_714_ = lean_uint64_xor(v_fold_711_, v___x_713_);
v___x_715_ = lean_uint64_to_usize(v___x_714_);
v___x_716_ = lean_usize_of_nat(v___x_707_);
v___x_717_ = ((size_t)1ULL);
v___x_718_ = lean_usize_sub(v___x_716_, v___x_717_);
v___x_719_ = lean_usize_land(v___x_715_, v___x_718_);
v___x_720_ = lean_array_uget_borrowed(v_buckets_706_, v___x_719_);
v___x_721_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2_spec__4(v_a_705_, v___x_720_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2___boxed(lean_object* v_m_722_, lean_object* v_a_723_){
_start:
{
lean_object* v_res_724_; 
v_res_724_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2(v_m_722_, v_a_723_);
lean_dec_ref(v_a_723_);
lean_dec_ref(v_m_722_);
return v_res_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_toACExpr___lam__0(lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
lean_object* v___x_727_; 
v___x_727_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Meta_AC_toACExpr_spec__2(v___y_725_, v___y_726_);
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_toACExpr___lam__0___boxed(lean_object* v___y_728_, lean_object* v___y_729_){
_start:
{
lean_object* v_res_730_; 
v_res_730_ = l_Lean_Meta_AC_toACExpr___lam__0(v___y_728_, v___y_729_);
lean_dec_ref(v___y_729_);
lean_dec_ref(v___y_728_);
return v_res_730_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_AC_toACExpr_spec__4(lean_object* v_x_731_, lean_object* v_x_732_){
_start:
{
if (lean_obj_tag(v_x_732_) == 0)
{
return v_x_731_;
}
else
{
lean_object* v_key_733_; lean_object* v_tail_734_; lean_object* v___x_735_; 
v_key_733_ = lean_ctor_get(v_x_732_, 0);
lean_inc(v_key_733_);
v_tail_734_ = lean_ctor_get(v_x_732_, 2);
lean_inc(v_tail_734_);
lean_dec_ref(v_x_732_);
v___x_735_ = lean_array_push(v_x_731_, v_key_733_);
v_x_731_ = v___x_735_;
v_x_732_ = v_tail_734_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__5(lean_object* v_as_737_, size_t v_i_738_, size_t v_stop_739_, lean_object* v_b_740_){
_start:
{
uint8_t v___x_741_; 
v___x_741_ = lean_usize_dec_eq(v_i_738_, v_stop_739_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; lean_object* v___x_743_; size_t v___x_744_; size_t v___x_745_; 
v___x_742_ = lean_array_uget_borrowed(v_as_737_, v_i_738_);
lean_inc(v___x_742_);
v___x_743_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Meta_AC_toACExpr_spec__4(v_b_740_, v___x_742_);
v___x_744_ = ((size_t)1ULL);
v___x_745_ = lean_usize_add(v_i_738_, v___x_744_);
v_i_738_ = v___x_745_;
v_b_740_ = v___x_743_;
goto _start;
}
else
{
return v_b_740_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__5___boxed(lean_object* v_as_747_, lean_object* v_i_748_, lean_object* v_stop_749_, lean_object* v_b_750_){
_start:
{
size_t v_i_boxed_751_; size_t v_stop_boxed_752_; lean_object* v_res_753_; 
v_i_boxed_751_ = lean_unbox_usize(v_i_748_);
lean_dec(v_i_748_);
v_stop_boxed_752_ = lean_unbox_usize(v_stop_749_);
lean_dec(v_stop_749_);
v_res_753_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__5(v_as_747_, v_i_boxed_751_, v_stop_boxed_752_, v_b_750_);
lean_dec_ref(v_as_747_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_AC_toACExpr_spec__1_spec__2___redArg(lean_object* v_xs_754_, lean_object* v_j_755_){
_start:
{
lean_object* v_zero_756_; uint8_t v_isZero_757_; 
v_zero_756_ = lean_unsigned_to_nat(0u);
v_isZero_757_ = lean_nat_dec_eq(v_j_755_, v_zero_756_);
if (v_isZero_757_ == 1)
{
lean_dec(v_j_755_);
return v_xs_754_;
}
else
{
lean_object* v_one_758_; lean_object* v_n_759_; lean_object* v___x_760_; lean_object* v___x_761_; uint8_t v___x_762_; 
v_one_758_ = lean_unsigned_to_nat(1u);
v_n_759_ = lean_nat_sub(v_j_755_, v_one_758_);
v___x_760_ = lean_array_fget_borrowed(v_xs_754_, v_j_755_);
v___x_761_ = lean_array_fget_borrowed(v_xs_754_, v_n_759_);
v___x_762_ = lean_expr_lt(v___x_760_, v___x_761_);
if (v___x_762_ == 0)
{
lean_dec(v_n_759_);
lean_dec(v_j_755_);
return v_xs_754_;
}
else
{
lean_object* v___x_763_; 
v___x_763_ = lean_array_fswap(v_xs_754_, v_j_755_, v_n_759_);
lean_dec(v_j_755_);
v_xs_754_ = v___x_763_;
v_j_755_ = v_n_759_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_AC_toACExpr_spec__1(lean_object* v_xs_765_, lean_object* v_i_766_, lean_object* v_fuel_767_){
_start:
{
lean_object* v_zero_768_; uint8_t v_isZero_769_; 
v_zero_768_ = lean_unsigned_to_nat(0u);
v_isZero_769_ = lean_nat_dec_eq(v_fuel_767_, v_zero_768_);
if (v_isZero_769_ == 1)
{
lean_dec(v_fuel_767_);
lean_dec(v_i_766_);
return v_xs_765_;
}
else
{
lean_object* v___x_770_; uint8_t v___x_771_; 
v___x_770_ = lean_array_get_size(v_xs_765_);
v___x_771_ = lean_nat_dec_lt(v_i_766_, v___x_770_);
if (v___x_771_ == 0)
{
lean_dec(v_fuel_767_);
lean_dec(v_i_766_);
return v_xs_765_;
}
else
{
lean_object* v_one_772_; lean_object* v_n_773_; lean_object* v___x_774_; lean_object* v___x_775_; 
v_one_772_ = lean_unsigned_to_nat(1u);
v_n_773_ = lean_nat_sub(v_fuel_767_, v_one_772_);
lean_dec(v_fuel_767_);
lean_inc(v_i_766_);
v___x_774_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_AC_toACExpr_spec__1_spec__2___redArg(v_xs_765_, v_i_766_);
v___x_775_ = lean_nat_add(v_i_766_, v_one_772_);
lean_dec(v_i_766_);
v_xs_765_ = v___x_774_;
v_i_766_ = v___x_775_;
v_fuel_767_ = v_n_773_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0_spec__0___redArg(lean_object* v_a_777_, lean_object* v_b_778_, lean_object* v_x_779_){
_start:
{
if (lean_obj_tag(v_x_779_) == 0)
{
lean_dec(v_b_778_);
lean_dec_ref(v_a_777_);
return v_x_779_;
}
else
{
lean_object* v_key_780_; lean_object* v_value_781_; lean_object* v_tail_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_794_; 
v_key_780_ = lean_ctor_get(v_x_779_, 0);
v_value_781_ = lean_ctor_get(v_x_779_, 1);
v_tail_782_ = lean_ctor_get(v_x_779_, 2);
v_isSharedCheck_794_ = !lean_is_exclusive(v_x_779_);
if (v_isSharedCheck_794_ == 0)
{
v___x_784_ = v_x_779_;
v_isShared_785_ = v_isSharedCheck_794_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_tail_782_);
lean_inc(v_value_781_);
lean_inc(v_key_780_);
lean_dec(v_x_779_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_794_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
uint8_t v___x_786_; 
v___x_786_ = lean_expr_eqv(v_key_780_, v_a_777_);
if (v___x_786_ == 0)
{
lean_object* v___x_787_; lean_object* v___x_789_; 
v___x_787_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0_spec__0___redArg(v_a_777_, v_b_778_, v_tail_782_);
if (v_isShared_785_ == 0)
{
lean_ctor_set(v___x_784_, 2, v___x_787_);
v___x_789_ = v___x_784_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_key_780_);
lean_ctor_set(v_reuseFailAlloc_790_, 1, v_value_781_);
lean_ctor_set(v_reuseFailAlloc_790_, 2, v___x_787_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
else
{
lean_object* v___x_792_; 
lean_dec(v_value_781_);
lean_dec(v_key_780_);
if (v_isShared_785_ == 0)
{
lean_ctor_set(v___x_784_, 1, v_b_778_);
lean_ctor_set(v___x_784_, 0, v_a_777_);
v___x_792_ = v___x_784_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_a_777_);
lean_ctor_set(v_reuseFailAlloc_793_, 1, v_b_778_);
lean_ctor_set(v_reuseFailAlloc_793_, 2, v_tail_782_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0___redArg(lean_object* v_m_795_, lean_object* v_a_796_, lean_object* v_b_797_){
_start:
{
lean_object* v_size_798_; lean_object* v_buckets_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_842_; 
v_size_798_ = lean_ctor_get(v_m_795_, 0);
v_buckets_799_ = lean_ctor_get(v_m_795_, 1);
v_isSharedCheck_842_ = !lean_is_exclusive(v_m_795_);
if (v_isSharedCheck_842_ == 0)
{
v___x_801_ = v_m_795_;
v_isShared_802_ = v_isSharedCheck_842_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_buckets_799_);
lean_inc(v_size_798_);
lean_dec(v_m_795_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_842_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_803_; uint64_t v___x_804_; uint64_t v___x_805_; uint64_t v___x_806_; uint64_t v_fold_807_; uint64_t v___x_808_; uint64_t v___x_809_; uint64_t v___x_810_; size_t v___x_811_; size_t v___x_812_; size_t v___x_813_; size_t v___x_814_; size_t v___x_815_; lean_object* v_bkt_816_; uint8_t v___x_817_; 
v___x_803_ = lean_array_get_size(v_buckets_799_);
v___x_804_ = l_Lean_Expr_hash(v_a_796_);
v___x_805_ = 32ULL;
v___x_806_ = lean_uint64_shift_right(v___x_804_, v___x_805_);
v_fold_807_ = lean_uint64_xor(v___x_804_, v___x_806_);
v___x_808_ = 16ULL;
v___x_809_ = lean_uint64_shift_right(v_fold_807_, v___x_808_);
v___x_810_ = lean_uint64_xor(v_fold_807_, v___x_809_);
v___x_811_ = lean_uint64_to_usize(v___x_810_);
v___x_812_ = lean_usize_of_nat(v___x_803_);
v___x_813_ = ((size_t)1ULL);
v___x_814_ = lean_usize_sub(v___x_812_, v___x_813_);
v___x_815_ = lean_usize_land(v___x_811_, v___x_814_);
v_bkt_816_ = lean_array_uget_borrowed(v_buckets_799_, v___x_815_);
v___x_817_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__0___redArg(v_a_796_, v_bkt_816_);
if (v___x_817_ == 0)
{
lean_object* v___x_818_; lean_object* v_size_x27_819_; lean_object* v___x_820_; lean_object* v_buckets_x27_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; uint8_t v___x_827_; 
v___x_818_ = lean_unsigned_to_nat(1u);
v_size_x27_819_ = lean_nat_add(v_size_798_, v___x_818_);
lean_dec(v_size_798_);
lean_inc(v_bkt_816_);
v___x_820_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_820_, 0, v_a_796_);
lean_ctor_set(v___x_820_, 1, v_b_797_);
lean_ctor_set(v___x_820_, 2, v_bkt_816_);
v_buckets_x27_821_ = lean_array_uset(v_buckets_799_, v___x_815_, v___x_820_);
v___x_822_ = lean_unsigned_to_nat(4u);
v___x_823_ = lean_nat_mul(v_size_x27_819_, v___x_822_);
v___x_824_ = lean_unsigned_to_nat(3u);
v___x_825_ = lean_nat_div(v___x_823_, v___x_824_);
lean_dec(v___x_823_);
v___x_826_ = lean_array_get_size(v_buckets_x27_821_);
v___x_827_ = lean_nat_dec_le(v___x_825_, v___x_826_);
lean_dec(v___x_825_);
if (v___x_827_ == 0)
{
lean_object* v_val_828_; lean_object* v___x_830_; 
v_val_828_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr_spec__0_spec__1___redArg(v_buckets_x27_821_);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 1, v_val_828_);
lean_ctor_set(v___x_801_, 0, v_size_x27_819_);
v___x_830_ = v___x_801_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_size_x27_819_);
lean_ctor_set(v_reuseFailAlloc_831_, 1, v_val_828_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
return v___x_830_;
}
}
else
{
lean_object* v___x_833_; 
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 1, v_buckets_x27_821_);
lean_ctor_set(v___x_801_, 0, v_size_x27_819_);
v___x_833_ = v___x_801_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_size_x27_819_);
lean_ctor_set(v_reuseFailAlloc_834_, 1, v_buckets_x27_821_);
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
lean_object* v___x_835_; lean_object* v_buckets_x27_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_840_; 
lean_inc(v_bkt_816_);
v___x_835_ = lean_box(0);
v_buckets_x27_836_ = lean_array_uset(v_buckets_799_, v___x_815_, v___x_835_);
v___x_837_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0_spec__0___redArg(v_a_796_, v_b_797_, v_bkt_816_);
v___x_838_ = lean_array_uset(v_buckets_x27_836_, v___x_815_, v___x_837_);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 1, v___x_838_);
v___x_840_ = v___x_801_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_size_798_);
lean_ctor_set(v_reuseFailAlloc_841_, 1, v___x_838_);
v___x_840_ = v_reuseFailAlloc_841_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
return v___x_840_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__3(lean_object* v_as_843_, size_t v_i_844_, size_t v_stop_845_, lean_object* v_b_846_){
_start:
{
uint8_t v___x_847_; 
v___x_847_ = lean_usize_dec_eq(v_i_844_, v_stop_845_);
if (v___x_847_ == 0)
{
lean_object* v_size_848_; lean_object* v___x_849_; lean_object* v___x_850_; size_t v___x_851_; size_t v___x_852_; 
v_size_848_ = lean_ctor_get(v_b_846_, 0);
lean_inc(v_size_848_);
v___x_849_ = lean_array_uget_borrowed(v_as_843_, v_i_844_);
lean_inc(v___x_849_);
v___x_850_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0___redArg(v_b_846_, v___x_849_, v_size_848_);
v___x_851_ = ((size_t)1ULL);
v___x_852_ = lean_usize_add(v_i_844_, v___x_851_);
v_i_844_ = v___x_852_;
v_b_846_ = v___x_850_;
goto _start;
}
else
{
return v_b_846_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__3___boxed(lean_object* v_as_854_, lean_object* v_i_855_, lean_object* v_stop_856_, lean_object* v_b_857_){
_start:
{
size_t v_i_boxed_858_; size_t v_stop_boxed_859_; lean_object* v_res_860_; 
v_i_boxed_858_ = lean_unbox_usize(v_i_855_);
lean_dec(v_i_855_);
v_stop_boxed_859_ = lean_unbox_usize(v_stop_856_);
lean_dec(v_stop_856_);
v_res_860_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__3(v_as_854_, v_i_boxed_858_, v_stop_boxed_859_, v_b_857_);
lean_dec_ref(v_as_854_);
return v_res_860_;
}
}
static lean_object* _init_l_Lean_Meta_AC_toACExpr___closed__0(void){
_start:
{
lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_861_ = lean_box(0);
v___x_862_ = lean_unsigned_to_nat(16u);
v___x_863_ = lean_mk_array(v___x_862_, v___x_861_);
return v___x_863_;
}
}
static lean_object* _init_l_Lean_Meta_AC_toACExpr___closed__1(void){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_864_ = lean_obj_once(&l_Lean_Meta_AC_toACExpr___closed__0, &l_Lean_Meta_AC_toACExpr___closed__0_once, _init_l_Lean_Meta_AC_toACExpr___closed__0);
v___x_865_ = lean_unsigned_to_nat(0u);
v___x_866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_866_, 0, v___x_865_);
lean_ctor_set(v___x_866_, 1, v___x_864_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_toACExpr(lean_object* v_op_867_, lean_object* v_l_868_, lean_object* v_r_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_){
_start:
{
lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
lean_inc_ref(v_op_867_);
v___x_875_ = l_Lean_mkAppB(v_op_867_, v_l_868_, v_r_869_);
v___x_876_ = lean_unsigned_to_nat(0u);
v___x_877_ = lean_obj_once(&l_Lean_Meta_AC_toACExpr___closed__1, &l_Lean_Meta_AC_toACExpr___closed__1_once, _init_l_Lean_Meta_AC_toACExpr___closed__1);
v___x_878_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toPreExpr(v_op_867_, v___x_875_, v___x_877_, v_a_870_, v_a_871_, v_a_872_, v_a_873_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v_a_879_; lean_object* v___x_881_; uint8_t v_isShared_882_; uint8_t v_isSharedCheck_925_; 
v_a_879_ = lean_ctor_get(v___x_878_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_925_ == 0)
{
v___x_881_ = v___x_878_;
v_isShared_882_ = v_isSharedCheck_925_;
goto v_resetjp_880_;
}
else
{
lean_inc(v_a_879_);
lean_dec(v___x_878_);
v___x_881_ = lean_box(0);
v_isShared_882_ = v_isSharedCheck_925_;
goto v_resetjp_880_;
}
v_resetjp_880_:
{
lean_object* v_fst_883_; lean_object* v_snd_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_924_; 
v_fst_883_ = lean_ctor_get(v_a_879_, 0);
v_snd_884_ = lean_ctor_get(v_a_879_, 1);
v_isSharedCheck_924_ = !lean_is_exclusive(v_a_879_);
if (v_isSharedCheck_924_ == 0)
{
v___x_886_ = v_a_879_;
v_isShared_887_ = v_isSharedCheck_924_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_snd_884_);
lean_inc(v_fst_883_);
lean_dec(v_a_879_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_924_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
lean_object* v___y_889_; lean_object* v___y_890_; lean_object* v___y_900_; lean_object* v_size_912_; lean_object* v_buckets_913_; lean_object* v___x_914_; lean_object* v___x_915_; uint8_t v___x_916_; 
v_size_912_ = lean_ctor_get(v_snd_884_, 0);
lean_inc(v_size_912_);
v_buckets_913_ = lean_ctor_get(v_snd_884_, 1);
lean_inc_ref(v_buckets_913_);
lean_dec(v_snd_884_);
v___x_914_ = lean_mk_empty_array_with_capacity(v_size_912_);
lean_dec(v_size_912_);
v___x_915_ = lean_array_get_size(v_buckets_913_);
v___x_916_ = lean_nat_dec_lt(v___x_876_, v___x_915_);
if (v___x_916_ == 0)
{
lean_dec_ref(v_buckets_913_);
v___y_900_ = v___x_914_;
goto v___jp_899_;
}
else
{
uint8_t v___x_917_; 
v___x_917_ = lean_nat_dec_le(v___x_915_, v___x_915_);
if (v___x_917_ == 0)
{
if (v___x_916_ == 0)
{
lean_dec_ref(v_buckets_913_);
v___y_900_ = v___x_914_;
goto v___jp_899_;
}
else
{
size_t v___x_918_; size_t v___x_919_; lean_object* v___x_920_; 
v___x_918_ = ((size_t)0ULL);
v___x_919_ = lean_usize_of_nat(v___x_915_);
v___x_920_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__5(v_buckets_913_, v___x_918_, v___x_919_, v___x_914_);
lean_dec_ref(v_buckets_913_);
v___y_900_ = v___x_920_;
goto v___jp_899_;
}
}
else
{
size_t v___x_921_; size_t v___x_922_; lean_object* v___x_923_; 
v___x_921_ = ((size_t)0ULL);
v___x_922_ = lean_usize_of_nat(v___x_915_);
v___x_923_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__5(v_buckets_913_, v___x_921_, v___x_922_, v___x_914_);
lean_dec_ref(v_buckets_913_);
v___y_900_ = v___x_923_;
goto v___jp_899_;
}
}
v___jp_888_:
{
lean_object* v___f_891_; lean_object* v___x_892_; lean_object* v___x_894_; 
v___f_891_ = lean_alloc_closure((void*)(l_Lean_Meta_AC_toACExpr___lam__0___boxed), 2, 1);
lean_closure_set(v___f_891_, 0, v___y_890_);
v___x_892_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_toACExpr_toACExpr(v___f_891_, v_fst_883_);
if (v_isShared_887_ == 0)
{
lean_ctor_set(v___x_886_, 1, v___x_892_);
lean_ctor_set(v___x_886_, 0, v___y_889_);
v___x_894_ = v___x_886_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v___y_889_);
lean_ctor_set(v_reuseFailAlloc_898_, 1, v___x_892_);
v___x_894_ = v_reuseFailAlloc_898_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
lean_object* v___x_896_; 
if (v_isShared_882_ == 0)
{
lean_ctor_set(v___x_881_, 0, v___x_894_);
v___x_896_ = v___x_881_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v___x_894_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
v___jp_899_:
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; uint8_t v___x_904_; 
v___x_901_ = lean_array_get_size(v___y_900_);
v___x_902_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_AC_toACExpr_spec__1(v___y_900_, v___x_876_, v___x_901_);
v___x_903_ = lean_array_get_size(v___x_902_);
v___x_904_ = lean_nat_dec_lt(v___x_876_, v___x_903_);
if (v___x_904_ == 0)
{
v___y_889_ = v___x_902_;
v___y_890_ = v___x_877_;
goto v___jp_888_;
}
else
{
uint8_t v___x_905_; 
v___x_905_ = lean_nat_dec_le(v___x_903_, v___x_903_);
if (v___x_905_ == 0)
{
if (v___x_904_ == 0)
{
v___y_889_ = v___x_902_;
v___y_890_ = v___x_877_;
goto v___jp_888_;
}
else
{
size_t v___x_906_; size_t v___x_907_; lean_object* v___x_908_; 
v___x_906_ = ((size_t)0ULL);
v___x_907_ = lean_usize_of_nat(v___x_903_);
v___x_908_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__3(v___x_902_, v___x_906_, v___x_907_, v___x_877_);
v___y_889_ = v___x_902_;
v___y_890_ = v___x_908_;
goto v___jp_888_;
}
}
else
{
size_t v___x_909_; size_t v___x_910_; lean_object* v___x_911_; 
v___x_909_ = ((size_t)0ULL);
v___x_910_ = lean_usize_of_nat(v___x_903_);
v___x_911_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_toACExpr_spec__3(v___x_902_, v___x_909_, v___x_910_, v___x_877_);
v___y_889_ = v___x_902_;
v___y_890_ = v___x_911_;
goto v___jp_888_;
}
}
}
}
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
v_a_926_ = lean_ctor_get(v___x_878_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_878_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_878_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_toACExpr___boxed(lean_object* v_op_934_, lean_object* v_l_935_, lean_object* v_r_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Lean_Meta_AC_toACExpr(v_op_934_, v_l_935_, v_r_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_);
lean_dec(v_a_940_);
lean_dec_ref(v_a_939_);
lean_dec(v_a_938_);
lean_dec_ref(v_a_937_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0(lean_object* v_00_u03b2_943_, lean_object* v_m_944_, lean_object* v_a_945_, lean_object* v_b_946_){
_start:
{
lean_object* v___x_947_; 
v___x_947_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0___redArg(v_m_944_, v_a_945_, v_b_946_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0_spec__0(lean_object* v_00_u03b2_948_, lean_object* v_a_949_, lean_object* v_b_950_, lean_object* v_x_951_){
_start:
{
lean_object* v___x_952_; 
v___x_952_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AC_toACExpr_spec__0_spec__0___redArg(v_a_949_, v_b_950_, v_x_951_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_AC_toACExpr_spec__1_spec__2(lean_object* v_xs_953_, lean_object* v_j_954_, lean_object* v_h_955_){
_start:
{
lean_object* v___x_956_; 
v___x_956_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Meta_AC_toACExpr_spec__1_spec__2___redArg(v_xs_953_, v_j_954_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg___lam__0(lean_object* v_k_957_, lean_object* v_b_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
lean_object* v___x_964_; 
lean_inc(v___y_962_);
lean_inc_ref(v___y_961_);
lean_inc(v___y_960_);
lean_inc_ref(v___y_959_);
v___x_964_ = lean_apply_6(v_k_957_, v_b_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_, lean_box(0));
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_965_, lean_object* v_b_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_){
_start:
{
lean_object* v_res_972_; 
v_res_972_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg___lam__0(v_k_965_, v_b_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
lean_dec(v___y_970_);
lean_dec_ref(v___y_969_);
lean_dec(v___y_968_);
lean_dec_ref(v___y_967_);
return v_res_972_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg(lean_object* v_name_973_, uint8_t v_bi_974_, lean_object* v_type_975_, lean_object* v_k_976_, uint8_t v_kind_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_){
_start:
{
lean_object* v___f_983_; lean_object* v___x_984_; 
v___f_983_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_983_, 0, v_k_976_);
v___x_984_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_973_, v_bi_974_, v_type_975_, v___f_983_, v_kind_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_992_; 
v_a_985_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_992_ == 0)
{
v___x_987_ = v___x_984_;
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_a_985_);
lean_dec(v___x_984_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_988_ == 0)
{
v___x_990_ = v___x_987_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_a_985_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
else
{
lean_object* v_a_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1000_; 
v_a_993_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_995_ = v___x_984_;
v_isShared_996_ = v_isSharedCheck_1000_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_a_993_);
lean_dec(v___x_984_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1000_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___x_998_; 
if (v_isShared_996_ == 0)
{
v___x_998_ = v___x_995_;
goto v_reusejp_997_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v_a_993_);
v___x_998_ = v_reuseFailAlloc_999_;
goto v_reusejp_997_;
}
v_reusejp_997_:
{
return v___x_998_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg___boxed(lean_object* v_name_1001_, lean_object* v_bi_1002_, lean_object* v_type_1003_, lean_object* v_k_1004_, lean_object* v_kind_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_){
_start:
{
uint8_t v_bi_boxed_1011_; uint8_t v_kind_boxed_1012_; lean_object* v_res_1013_; 
v_bi_boxed_1011_ = lean_unbox(v_bi_1002_);
v_kind_boxed_1012_ = lean_unbox(v_kind_1005_);
v_res_1013_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg(v_name_1001_, v_bi_boxed_1011_, v_type_1003_, v_k_1004_, v_kind_boxed_1012_, v___y_1006_, v___y_1007_, v___y_1008_, v___y_1009_);
lean_dec(v___y_1009_);
lean_dec_ref(v___y_1008_);
lean_dec(v___y_1007_);
lean_dec_ref(v___y_1006_);
return v_res_1013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___redArg(lean_object* v_name_1014_, lean_object* v_type_1015_, lean_object* v_k_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_){
_start:
{
uint8_t v___x_1022_; uint8_t v___x_1023_; lean_object* v___x_1024_; 
v___x_1022_ = 0;
v___x_1023_ = 0;
v___x_1024_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg(v_name_1014_, v___x_1022_, v_type_1015_, v_k_1016_, v___x_1023_, v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___redArg___boxed(lean_object* v_name_1025_, lean_object* v_type_1026_, lean_object* v_k_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_){
_start:
{
lean_object* v_res_1033_; 
v_res_1033_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___redArg(v_name_1025_, v_type_1026_, v_k_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__0___boxed(lean_object** _args){
lean_object* v_i_1038_ = _args[0];
lean_object* v_v_1039_ = _args[1];
lean_object* v_acc_1040_ = _args[2];
lean_object* v___x_1041_ = _args[3];
lean_object* v_vars_1042_ = _args[4];
lean_object* v___x_1043_ = _args[5];
lean_object* v_val_1044_ = _args[6];
lean_object* v_args_1045_ = _args[7];
lean_object* v_preContext_1046_ = _args[8];
lean_object* v_atoms_1047_ = _args[9];
lean_object* v_k_1048_ = _args[10];
lean_object* v_00_u03b1_1049_ = _args[11];
lean_object* v_u_1050_ = _args[12];
lean_object* v_iv_1051_ = _args[13];
lean_object* v___y_1052_ = _args[14];
lean_object* v___y_1053_ = _args[15];
lean_object* v___y_1054_ = _args[16];
lean_object* v___y_1055_ = _args[17];
lean_object* v___y_1056_ = _args[18];
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__0(v_i_1038_, v_v_1039_, v_acc_1040_, v___x_1041_, v_vars_1042_, v___x_1043_, v_val_1044_, v_args_1045_, v_preContext_1046_, v_atoms_1047_, v_k_1048_, v_00_u03b1_1049_, v_u_1050_, v_iv_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1052_);
lean_dec(v_i_1038_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1(lean_object* v_preContext_1061_, lean_object* v_atoms_1062_, lean_object* v_i_1063_, lean_object* v_acc_1064_, lean_object* v_vars_1065_, lean_object* v_args_1066_, lean_object* v_k_1067_, lean_object* v_00_u03b1_1068_, lean_object* v_u_1069_, lean_object* v_v_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_){
_start:
{
lean_object* v_op_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v_op_1076_ = lean_ctor_get(v_preContext_1061_, 1);
v___x_1077_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__1));
v___x_1078_ = lean_array_fget_borrowed(v_atoms_1062_, v_i_1063_);
v___x_1079_ = lean_unsigned_to_nat(2u);
v___x_1080_ = lean_mk_empty_array_with_capacity(v___x_1079_);
lean_inc_ref(v_op_1076_);
lean_inc_ref(v___x_1080_);
v___x_1081_ = lean_array_push(v___x_1080_, v_op_1076_);
lean_inc(v___x_1078_);
v___x_1082_ = lean_array_push(v___x_1081_, v___x_1078_);
v___x_1083_ = l_Lean_Meta_AC_getInstance(v___x_1077_, v___x_1082_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_a_1084_);
lean_dec_ref(v___x_1083_);
if (lean_obj_tag(v_a_1084_) == 0)
{
lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; 
lean_dec_ref(v___x_1080_);
v___x_1085_ = lean_unsigned_to_nat(1u);
v___x_1086_ = lean_nat_add(v_i_1063_, v___x_1085_);
lean_dec(v_i_1063_);
lean_inc_ref(v_v_1070_);
v___x_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1087_, 0, v_v_1070_);
lean_ctor_set(v___x_1087_, 1, v_a_1084_);
v___x_1088_ = lean_array_push(v_acc_1064_, v___x_1087_);
v___x_1089_ = lean_array_push(v_vars_1065_, v_v_1070_);
lean_inc(v___x_1078_);
v___x_1090_ = lean_array_push(v_args_1066_, v___x_1078_);
v___x_1091_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go(v_preContext_1061_, v_atoms_1062_, v_k_1067_, v_00_u03b1_1068_, v_u_1069_, v___x_1086_, v___x_1088_, v___x_1089_, v___x_1090_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
return v___x_1091_;
}
else
{
lean_object* v_val_1092_; lean_object* v___f_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
lean_inc(v___x_1078_);
lean_inc_ref(v_op_1076_);
v_val_1092_ = lean_ctor_get(v_a_1084_, 0);
lean_inc(v_val_1092_);
lean_dec_ref(v_a_1084_);
lean_inc(v_u_1069_);
lean_inc_ref(v_00_u03b1_1068_);
lean_inc_ref(v_v_1070_);
v___f_1093_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__0___boxed), 19, 13);
lean_closure_set(v___f_1093_, 0, v_i_1063_);
lean_closure_set(v___f_1093_, 1, v_v_1070_);
lean_closure_set(v___f_1093_, 2, v_acc_1064_);
lean_closure_set(v___f_1093_, 3, v___x_1080_);
lean_closure_set(v___f_1093_, 4, v_vars_1065_);
lean_closure_set(v___f_1093_, 5, v___x_1078_);
lean_closure_set(v___f_1093_, 6, v_val_1092_);
lean_closure_set(v___f_1093_, 7, v_args_1066_);
lean_closure_set(v___f_1093_, 8, v_preContext_1061_);
lean_closure_set(v___f_1093_, 9, v_atoms_1062_);
lean_closure_set(v___f_1093_, 10, v_k_1067_);
lean_closure_set(v___f_1093_, 11, v_00_u03b1_1068_);
lean_closure_set(v___f_1093_, 12, v_u_1069_);
v___x_1094_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__3));
v___x_1095_ = lean_box(0);
v___x_1096_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1096_, 0, v_u_1069_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = l_Lean_mkConst(v___x_1077_, v___x_1096_);
v___x_1098_ = l_Lean_mkApp3(v___x_1097_, v_00_u03b1_1068_, v_op_1076_, v_v_1070_);
v___x_1099_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___redArg(v___x_1094_, v___x_1098_, v___f_1093_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
return v___x_1099_;
}
}
else
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1107_; 
lean_dec_ref(v___x_1080_);
lean_dec_ref(v_v_1070_);
lean_dec(v_u_1069_);
lean_dec_ref(v_00_u03b1_1068_);
lean_dec_ref(v_k_1067_);
lean_dec_ref(v_args_1066_);
lean_dec_ref(v_vars_1065_);
lean_dec_ref(v_acc_1064_);
lean_dec(v_i_1063_);
lean_dec_ref(v_atoms_1062_);
lean_dec_ref(v_preContext_1061_);
v_a_1100_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1102_ = v___x_1083_;
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1083_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1105_; 
if (v_isShared_1103_ == 0)
{
v___x_1105_ = v___x_1102_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_a_1100_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___boxed(lean_object* v_preContext_1108_, lean_object* v_atoms_1109_, lean_object* v_i_1110_, lean_object* v_acc_1111_, lean_object* v_vars_1112_, lean_object* v_args_1113_, lean_object* v_k_1114_, lean_object* v_00_u03b1_1115_, lean_object* v_u_1116_, lean_object* v_v_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_){
_start:
{
lean_object* v_res_1123_; 
v_res_1123_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1(v_preContext_1108_, v_atoms_1109_, v_i_1110_, v_acc_1111_, v_vars_1112_, v_args_1113_, v_k_1114_, v_00_u03b1_1115_, v_u_1116_, v_v_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_);
lean_dec(v___y_1121_);
lean_dec_ref(v___y_1120_);
lean_dec(v___y_1119_);
lean_dec_ref(v___y_1118_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go(lean_object* v_preContext_1127_, lean_object* v_atoms_1128_, lean_object* v_k_1129_, lean_object* v_00_u03b1_1130_, lean_object* v_u_1131_, lean_object* v_i_1132_, lean_object* v_acc_1133_, lean_object* v_vars_1134_, lean_object* v_args_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_){
_start:
{
lean_object* v___x_1141_; uint8_t v___x_1142_; 
v___x_1141_ = lean_array_get_size(v_atoms_1128_);
v___x_1142_ = lean_nat_dec_lt(v_i_1132_, v___x_1141_);
if (v___x_1142_ == 0)
{
lean_object* v___x_1143_; 
lean_dec(v_i_1132_);
lean_dec(v_u_1131_);
lean_dec_ref(v_00_u03b1_1130_);
lean_dec_ref(v_atoms_1128_);
lean_dec_ref(v_preContext_1127_);
lean_inc(v_a_1139_);
lean_inc_ref(v_a_1138_);
lean_inc(v_a_1137_);
lean_inc_ref(v_a_1136_);
v___x_1143_ = lean_apply_6(v_k_1129_, v_acc_1133_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_, lean_box(0));
if (lean_obj_tag(v___x_1143_) == 0)
{
lean_object* v_a_1144_; uint8_t v___x_1145_; uint8_t v___x_1146_; lean_object* v___x_1147_; 
v_a_1144_ = lean_ctor_get(v___x_1143_, 0);
lean_inc(v_a_1144_);
lean_dec_ref(v___x_1143_);
v___x_1145_ = 1;
v___x_1146_ = 1;
v___x_1147_ = l_Lean_Meta_mkLambdaFVars(v_vars_1134_, v_a_1144_, v___x_1142_, v___x_1145_, v___x_1142_, v___x_1145_, v___x_1146_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_);
lean_dec_ref(v_vars_1134_);
if (lean_obj_tag(v___x_1147_) == 0)
{
lean_object* v_a_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1156_; 
v_a_1148_ = lean_ctor_get(v___x_1147_, 0);
v_isSharedCheck_1156_ = !lean_is_exclusive(v___x_1147_);
if (v_isSharedCheck_1156_ == 0)
{
v___x_1150_ = v___x_1147_;
v_isShared_1151_ = v_isSharedCheck_1156_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_a_1148_);
lean_dec(v___x_1147_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1156_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v___x_1152_; lean_object* v___x_1154_; 
v___x_1152_ = l_Lean_mkAppN(v_a_1148_, v_args_1135_);
lean_dec_ref(v_args_1135_);
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 0, v___x_1152_);
v___x_1154_ = v___x_1150_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v___x_1152_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
}
else
{
lean_dec_ref(v_args_1135_);
return v___x_1147_;
}
}
else
{
lean_dec_ref(v_args_1135_);
lean_dec_ref(v_vars_1134_);
return v___x_1143_;
}
}
else
{
lean_object* v___f_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; 
lean_inc_ref(v_00_u03b1_1130_);
v___f_1157_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___boxed), 15, 9);
lean_closure_set(v___f_1157_, 0, v_preContext_1127_);
lean_closure_set(v___f_1157_, 1, v_atoms_1128_);
lean_closure_set(v___f_1157_, 2, v_i_1132_);
lean_closure_set(v___f_1157_, 3, v_acc_1133_);
lean_closure_set(v___f_1157_, 4, v_vars_1134_);
lean_closure_set(v___f_1157_, 5, v_args_1135_);
lean_closure_set(v___f_1157_, 6, v_k_1129_);
lean_closure_set(v___f_1157_, 7, v_00_u03b1_1130_);
lean_closure_set(v___f_1157_, 8, v_u_1131_);
v___x_1158_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___closed__1));
v___x_1159_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___redArg(v___x_1158_, v_00_u03b1_1130_, v___f_1157_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_);
return v___x_1159_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__0(lean_object* v_i_1160_, lean_object* v_v_1161_, lean_object* v_acc_1162_, lean_object* v___x_1163_, lean_object* v_vars_1164_, lean_object* v___x_1165_, lean_object* v_val_1166_, lean_object* v_args_1167_, lean_object* v_preContext_1168_, lean_object* v_atoms_1169_, lean_object* v_k_1170_, lean_object* v_00_u03b1_1171_, lean_object* v_u_1172_, lean_object* v_iv_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1179_ = lean_unsigned_to_nat(1u);
v___x_1180_ = lean_nat_add(v_i_1160_, v___x_1179_);
lean_inc_ref(v_iv_1173_);
v___x_1181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1181_, 0, v_iv_1173_);
lean_inc_ref(v_v_1161_);
v___x_1182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1182_, 0, v_v_1161_);
lean_ctor_set(v___x_1182_, 1, v___x_1181_);
v___x_1183_ = lean_array_push(v_acc_1162_, v___x_1182_);
lean_inc_ref(v___x_1163_);
v___x_1184_ = lean_array_push(v___x_1163_, v_v_1161_);
v___x_1185_ = lean_array_push(v___x_1184_, v_iv_1173_);
v___x_1186_ = l_Array_append___redArg(v_vars_1164_, v___x_1185_);
lean_dec_ref(v___x_1185_);
v___x_1187_ = lean_array_push(v___x_1163_, v___x_1165_);
v___x_1188_ = lean_array_push(v___x_1187_, v_val_1166_);
v___x_1189_ = l_Array_append___redArg(v_args_1167_, v___x_1188_);
lean_dec_ref(v___x_1188_);
v___x_1190_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go(v_preContext_1168_, v_atoms_1169_, v_k_1170_, v_00_u03b1_1171_, v_u_1172_, v___x_1180_, v___x_1183_, v___x_1186_, v___x_1189_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_);
return v___x_1190_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___boxed(lean_object* v_preContext_1191_, lean_object* v_atoms_1192_, lean_object* v_k_1193_, lean_object* v_00_u03b1_1194_, lean_object* v_u_1195_, lean_object* v_i_1196_, lean_object* v_acc_1197_, lean_object* v_vars_1198_, lean_object* v_args_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go(v_preContext_1191_, v_atoms_1192_, v_k_1193_, v_00_u03b1_1194_, v_u_1195_, v_i_1196_, v_acc_1197_, v_vars_1198_, v_args_1199_, v_a_1200_, v_a_1201_, v_a_1202_, v_a_1203_);
lean_dec(v_a_1203_);
lean_dec_ref(v_a_1202_);
lean_dec(v_a_1201_);
lean_dec_ref(v_a_1200_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0(lean_object* v_00_u03b1_1206_, lean_object* v_name_1207_, uint8_t v_bi_1208_, lean_object* v_type_1209_, lean_object* v_k_1210_, uint8_t v_kind_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_){
_start:
{
lean_object* v___x_1217_; 
v___x_1217_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___redArg(v_name_1207_, v_bi_1208_, v_type_1209_, v_k_1210_, v_kind_1211_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1218_, lean_object* v_name_1219_, lean_object* v_bi_1220_, lean_object* v_type_1221_, lean_object* v_k_1222_, lean_object* v_kind_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_){
_start:
{
uint8_t v_bi_boxed_1229_; uint8_t v_kind_boxed_1230_; lean_object* v_res_1231_; 
v_bi_boxed_1229_ = lean_unbox(v_bi_1220_);
v_kind_boxed_1230_ = lean_unbox(v_kind_1223_);
v_res_1231_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0_spec__0(v_00_u03b1_1218_, v_name_1219_, v_bi_boxed_1229_, v_type_1221_, v_k_1222_, v_kind_boxed_1230_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec(v___y_1225_);
lean_dec_ref(v___y_1224_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0(lean_object* v_00_u03b1_1232_, lean_object* v_name_1233_, lean_object* v_type_1234_, lean_object* v_k_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_){
_start:
{
lean_object* v___x_1241_; 
v___x_1241_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___redArg(v_name_1233_, v_type_1234_, v_k_1235_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_);
return v___x_1241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0___boxed(lean_object* v_00_u03b1_1242_, lean_object* v_name_1243_, lean_object* v_type_1244_, lean_object* v_k_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go_spec__0(v_00_u03b1_1242_, v_name_1243_, v_type_1244_, v_k_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_);
lean_dec(v___y_1249_);
lean_dec_ref(v___y_1248_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1246_);
return v_res_1251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_match__1_splitter___redArg(lean_object* v_____do__lift_1252_, lean_object* v_h__1_1253_, lean_object* v_h__2_1254_){
_start:
{
if (lean_obj_tag(v_____do__lift_1252_) == 0)
{
lean_object* v___x_1255_; lean_object* v___x_1256_; 
lean_dec(v_h__2_1254_);
v___x_1255_ = lean_box(0);
v___x_1256_ = lean_apply_1(v_h__1_1253_, v___x_1255_);
return v___x_1256_;
}
else
{
lean_object* v_val_1257_; lean_object* v___x_1258_; 
lean_dec(v_h__1_1253_);
v_val_1257_ = lean_ctor_get(v_____do__lift_1252_, 0);
lean_inc(v_val_1257_);
lean_dec_ref(v_____do__lift_1252_);
v___x_1258_ = lean_apply_1(v_h__2_1254_, v_val_1257_);
return v___x_1258_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_match__1_splitter(lean_object* v_motive_1259_, lean_object* v_____do__lift_1260_, lean_object* v_h__1_1261_, lean_object* v_h__2_1262_){
_start:
{
if (lean_obj_tag(v_____do__lift_1260_) == 0)
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
lean_dec(v_h__2_1262_);
v___x_1263_ = lean_box(0);
v___x_1264_ = lean_apply_1(v_h__1_1261_, v___x_1263_);
return v___x_1264_;
}
else
{
lean_object* v_val_1265_; lean_object* v___x_1266_; 
lean_dec(v_h__1_1261_);
v_val_1265_ = lean_ctor_get(v_____do__lift_1260_, 0);
lean_inc(v_val_1265_);
lean_dec_ref(v_____do__lift_1260_);
v___x_1266_ = lean_apply_1(v_h__2_1262_, v_val_1265_);
return v___x_1266_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_abstractAtoms(lean_object* v_preContext_1269_, lean_object* v_atoms_1270_, lean_object* v_k_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_){
_start:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v___x_1277_ = l_Lean_instInhabitedExpr;
v___x_1278_ = lean_unsigned_to_nat(0u);
v___x_1279_ = lean_array_get_borrowed(v___x_1277_, v_atoms_1270_, v___x_1278_);
lean_inc(v_a_1275_);
lean_inc_ref(v_a_1274_);
lean_inc(v_a_1273_);
lean_inc_ref(v_a_1272_);
lean_inc(v___x_1279_);
v___x_1280_ = lean_infer_type(v___x_1279_, v_a_1272_, v_a_1273_, v_a_1274_, v_a_1275_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v_a_1281_; lean_object* v___x_1282_; 
v_a_1281_ = lean_ctor_get(v___x_1280_, 0);
lean_inc_n(v_a_1281_, 2);
lean_dec_ref(v___x_1280_);
v___x_1282_ = l_Lean_Meta_getLevel(v_a_1281_, v_a_1272_, v_a_1273_, v_a_1274_, v_a_1275_);
if (lean_obj_tag(v___x_1282_) == 0)
{
lean_object* v_a_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
v_a_1283_ = lean_ctor_get(v___x_1282_, 0);
lean_inc(v_a_1283_);
lean_dec_ref(v___x_1282_);
v___x_1284_ = ((lean_object*)(l_Lean_Meta_AC_abstractAtoms___closed__0));
v___x_1285_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go(v_preContext_1269_, v_atoms_1270_, v_k_1271_, v_a_1281_, v_a_1283_, v___x_1278_, v___x_1284_, v___x_1284_, v___x_1284_, v_a_1272_, v_a_1273_, v_a_1274_, v_a_1275_);
return v___x_1285_;
}
else
{
lean_object* v_a_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1293_; 
lean_dec(v_a_1281_);
lean_dec_ref(v_k_1271_);
lean_dec_ref(v_atoms_1270_);
lean_dec_ref(v_preContext_1269_);
v_a_1286_ = lean_ctor_get(v___x_1282_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1282_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1288_ = v___x_1282_;
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_a_1286_);
lean_dec(v___x_1282_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1293_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1291_; 
if (v_isShared_1289_ == 0)
{
v___x_1291_ = v___x_1288_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v_a_1286_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
}
}
else
{
lean_dec_ref(v_k_1271_);
lean_dec_ref(v_atoms_1270_);
lean_dec_ref(v_preContext_1269_);
return v___x_1280_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_abstractAtoms___boxed(lean_object* v_preContext_1294_, lean_object* v_atoms_1295_, lean_object* v_k_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_){
_start:
{
lean_object* v_res_1302_; 
v_res_1302_ = l_Lean_Meta_AC_abstractAtoms(v_preContext_1294_, v_atoms_1295_, v_k_1296_, v_a_1297_, v_a_1298_, v_a_1299_, v_a_1300_);
lean_dec(v_a_1300_);
lean_dec_ref(v_a_1299_);
lean_dec(v_a_1298_);
lean_dec_ref(v_a_1297_);
return v_res_1302_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0(lean_object* v___x_1308_, lean_object* v___x_1309_, lean_object* v_tp_1310_){
_start:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1311_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__2));
v___x_1312_ = l_Lean_mkConst(v___x_1311_, v___x_1308_);
v___x_1313_ = l_Lean_Expr_app___override(v___x_1309_, v_tp_1310_);
v___x_1314_ = l_Lean_Expr_app___override(v___x_1312_, v___x_1313_);
return v___x_1314_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1(lean_object* v___x_1319_, lean_object* v___x_1320_, lean_object* v___x_1321_, lean_object* v_tp_1322_, lean_object* v_v_1323_){
_start:
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1324_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__1));
v___x_1325_ = l_Lean_mkConst(v___x_1324_, v___x_1319_);
lean_inc_ref(v_tp_1322_);
v___x_1326_ = l_Lean_Expr_app___override(v___x_1320_, v_tp_1322_);
v___x_1327_ = l_Lean_mkAppB(v___x_1321_, v_tp_1322_, v_v_1323_);
v___x_1328_ = l_Lean_mkAppB(v___x_1325_, v___x_1326_, v___x_1327_);
return v___x_1328_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1335_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__0));
v___x_1336_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__2));
v___x_1337_ = l_Lean_mkConst(v___x_1336_, v___x_1335_);
return v___x_1337_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9(void){
_start:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1348_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__0));
v___x_1349_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0___closed__2));
v___x_1350_ = l_Lean_mkConst(v___x_1349_, v___x_1348_);
return v___x_1350_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__12(void){
_start:
{
lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1355_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__0));
v___x_1356_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__11));
v___x_1357_ = l_Lean_mkConst(v___x_1356_, v___x_1355_);
return v___x_1357_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13(void){
_start:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1358_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__0));
v___x_1359_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1___closed__1));
v___x_1360_ = l_Lean_mkConst(v___x_1359_, v___x_1358_);
return v___x_1360_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg(lean_object* v_u_1361_, lean_object* v_preContext_1362_, lean_object* v_00_u03b1_1363_, size_t v_sz_1364_, size_t v_i_1365_, lean_object* v_bs_1366_){
_start:
{
uint8_t v___x_1368_; 
v___x_1368_ = lean_usize_dec_lt(v_i_1365_, v_sz_1364_);
if (v___x_1368_ == 0)
{
lean_object* v___x_1369_; 
lean_dec_ref(v_00_u03b1_1363_);
lean_dec_ref(v_preContext_1362_);
lean_dec(v_u_1361_);
v___x_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1369_, 0, v_bs_1366_);
return v___x_1369_;
}
else
{
lean_object* v_v_1370_; lean_object* v_fst_1371_; lean_object* v_snd_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1405_; 
v_v_1370_ = lean_array_uget(v_bs_1366_, v_i_1365_);
v_fst_1371_ = lean_ctor_get(v_v_1370_, 0);
v_snd_1372_ = lean_ctor_get(v_v_1370_, 1);
v_isSharedCheck_1405_ = !lean_is_exclusive(v_v_1370_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1374_ = v_v_1370_;
v_isShared_1375_ = v_isSharedCheck_1405_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_snd_1372_);
lean_inc(v_fst_1371_);
lean_dec(v_v_1370_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1405_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v_op_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v_bs_x27_1380_; lean_object* v___x_1381_; lean_object* v___x_1383_; 
v_op_1376_ = lean_ctor_get(v_preContext_1362_, 1);
v___x_1377_ = lean_box(0);
v___x_1378_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__3);
v___x_1379_ = lean_unsigned_to_nat(0u);
v_bs_x27_1380_ = lean_array_uset(v_bs_1366_, v_i_1365_, v___x_1379_);
v___x_1381_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__1));
lean_inc(v_u_1361_);
if (v_isShared_1375_ == 0)
{
lean_ctor_set_tag(v___x_1374_, 1);
lean_ctor_set(v___x_1374_, 1, v___x_1377_);
lean_ctor_set(v___x_1374_, 0, v_u_1361_);
v___x_1383_ = v___x_1374_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v_u_1361_);
lean_ctor_set(v_reuseFailAlloc_1404_, 1, v___x_1377_);
v___x_1383_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
lean_object* v___y_1385_; lean_object* v___x_1393_; lean_object* v_isNeutralClass_1394_; 
lean_inc_ref(v___x_1383_);
v___x_1393_ = l_Lean_mkConst(v___x_1381_, v___x_1383_);
lean_inc(v_fst_1371_);
lean_inc_ref(v_op_1376_);
lean_inc_ref(v_00_u03b1_1363_);
v_isNeutralClass_1394_ = l_Lean_mkApp3(v___x_1393_, v_00_u03b1_1363_, v_op_1376_, v_fst_1371_);
if (lean_obj_tag(v_snd_1372_) == 0)
{
lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1395_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9);
v___x_1396_ = l_Lean_Expr_app___override(v___x_1378_, v_isNeutralClass_1394_);
v___x_1397_ = l_Lean_Expr_app___override(v___x_1395_, v___x_1396_);
v___y_1385_ = v___x_1397_;
goto v___jp_1384_;
}
else
{
lean_object* v_val_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; 
v_val_1398_ = lean_ctor_get(v_snd_1372_, 0);
lean_inc(v_val_1398_);
lean_dec_ref(v_snd_1372_);
v___x_1399_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__12, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__12);
v___x_1400_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13);
lean_inc_ref(v_isNeutralClass_1394_);
v___x_1401_ = l_Lean_Expr_app___override(v___x_1378_, v_isNeutralClass_1394_);
v___x_1402_ = l_Lean_mkAppB(v___x_1399_, v_isNeutralClass_1394_, v_val_1398_);
v___x_1403_ = l_Lean_mkAppB(v___x_1400_, v___x_1401_, v___x_1402_);
v___y_1385_ = v___x_1403_;
goto v___jp_1384_;
}
v___jp_1384_:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; size_t v___x_1389_; size_t v___x_1390_; lean_object* v___x_1391_; 
v___x_1386_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__8));
v___x_1387_ = l_Lean_mkConst(v___x_1386_, v___x_1383_);
lean_inc_ref(v_op_1376_);
lean_inc_ref(v_00_u03b1_1363_);
v___x_1388_ = l_Lean_mkApp4(v___x_1387_, v_00_u03b1_1363_, v_op_1376_, v_fst_1371_, v___y_1385_);
v___x_1389_ = ((size_t)1ULL);
v___x_1390_ = lean_usize_add(v_i_1365_, v___x_1389_);
v___x_1391_ = lean_array_uset(v_bs_x27_1380_, v_i_1365_, v___x_1388_);
v_i_1365_ = v___x_1390_;
v_bs_1366_ = v___x_1391_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___boxed(lean_object* v_u_1406_, lean_object* v_preContext_1407_, lean_object* v_00_u03b1_1408_, lean_object* v_sz_1409_, lean_object* v_i_1410_, lean_object* v_bs_1411_, lean_object* v___y_1412_){
_start:
{
size_t v_sz_boxed_1413_; size_t v_i_boxed_1414_; lean_object* v_res_1415_; 
v_sz_boxed_1413_ = lean_unbox_usize(v_sz_1409_);
lean_dec(v_sz_1409_);
v_i_boxed_1414_ = lean_unbox_usize(v_i_1410_);
lean_dec(v_i_1410_);
v_res_1415_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg(v_u_1406_, v_preContext_1407_, v_00_u03b1_1408_, v_sz_boxed_1413_, v_i_boxed_1414_, v_bs_1411_);
return v_res_1415_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0(lean_object* v_u_1416_, lean_object* v_preContext_1417_, lean_object* v_00_u03b1_1418_, size_t v_sz_1419_, size_t v_i_1420_, lean_object* v_bs_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_){
_start:
{
uint8_t v___x_1427_; 
v___x_1427_ = lean_usize_dec_lt(v_i_1420_, v_sz_1419_);
if (v___x_1427_ == 0)
{
lean_object* v___x_1428_; 
lean_dec_ref(v_00_u03b1_1418_);
lean_dec_ref(v_preContext_1417_);
lean_dec(v_u_1416_);
v___x_1428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1428_, 0, v_bs_1421_);
return v___x_1428_;
}
else
{
lean_object* v_v_1429_; lean_object* v_fst_1430_; lean_object* v_snd_1431_; lean_object* v___x_1433_; uint8_t v_isShared_1434_; uint8_t v_isSharedCheck_1464_; 
v_v_1429_ = lean_array_uget(v_bs_1421_, v_i_1420_);
v_fst_1430_ = lean_ctor_get(v_v_1429_, 0);
v_snd_1431_ = lean_ctor_get(v_v_1429_, 1);
v_isSharedCheck_1464_ = !lean_is_exclusive(v_v_1429_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1433_ = v_v_1429_;
v_isShared_1434_ = v_isSharedCheck_1464_;
goto v_resetjp_1432_;
}
else
{
lean_inc(v_snd_1431_);
lean_inc(v_fst_1430_);
lean_dec(v_v_1429_);
v___x_1433_ = lean_box(0);
v_isShared_1434_ = v_isSharedCheck_1464_;
goto v_resetjp_1432_;
}
v_resetjp_1432_:
{
lean_object* v_op_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v_bs_x27_1439_; lean_object* v___x_1440_; lean_object* v___x_1442_; 
v_op_1435_ = lean_ctor_get(v_preContext_1417_, 1);
v___x_1436_ = lean_box(0);
v___x_1437_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__3);
v___x_1438_ = lean_unsigned_to_nat(0u);
v_bs_x27_1439_ = lean_array_uset(v_bs_1421_, v_i_1420_, v___x_1438_);
v___x_1440_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_abstractAtoms_go___lam__1___closed__1));
lean_inc(v_u_1416_);
if (v_isShared_1434_ == 0)
{
lean_ctor_set_tag(v___x_1433_, 1);
lean_ctor_set(v___x_1433_, 1, v___x_1436_);
lean_ctor_set(v___x_1433_, 0, v_u_1416_);
v___x_1442_ = v___x_1433_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_u_1416_);
lean_ctor_set(v_reuseFailAlloc_1463_, 1, v___x_1436_);
v___x_1442_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
lean_object* v___y_1444_; lean_object* v___x_1452_; lean_object* v_isNeutralClass_1453_; 
lean_inc_ref(v___x_1442_);
v___x_1452_ = l_Lean_mkConst(v___x_1440_, v___x_1442_);
lean_inc(v_fst_1430_);
lean_inc_ref(v_op_1435_);
lean_inc_ref(v_00_u03b1_1418_);
v_isNeutralClass_1453_ = l_Lean_mkApp3(v___x_1452_, v_00_u03b1_1418_, v_op_1435_, v_fst_1430_);
if (lean_obj_tag(v_snd_1431_) == 0)
{
lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1454_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__9);
v___x_1455_ = l_Lean_Expr_app___override(v___x_1437_, v_isNeutralClass_1453_);
v___x_1456_ = l_Lean_Expr_app___override(v___x_1454_, v___x_1455_);
v___y_1444_ = v___x_1456_;
goto v___jp_1443_;
}
else
{
lean_object* v_val_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; 
v_val_1457_ = lean_ctor_get(v_snd_1431_, 0);
lean_inc(v_val_1457_);
lean_dec_ref(v_snd_1431_);
v___x_1458_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__12, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__12);
v___x_1459_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__13);
lean_inc_ref(v_isNeutralClass_1453_);
v___x_1460_ = l_Lean_Expr_app___override(v___x_1437_, v_isNeutralClass_1453_);
v___x_1461_ = l_Lean_mkAppB(v___x_1458_, v_isNeutralClass_1453_, v_val_1457_);
v___x_1462_ = l_Lean_mkAppB(v___x_1459_, v___x_1460_, v___x_1461_);
v___y_1444_ = v___x_1462_;
goto v___jp_1443_;
}
v___jp_1443_:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; size_t v___x_1448_; size_t v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1445_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__8));
v___x_1446_ = l_Lean_mkConst(v___x_1445_, v___x_1442_);
lean_inc_ref(v_op_1435_);
lean_inc_ref(v_00_u03b1_1418_);
v___x_1447_ = l_Lean_mkApp4(v___x_1446_, v_00_u03b1_1418_, v_op_1435_, v_fst_1430_, v___y_1444_);
v___x_1448_ = ((size_t)1ULL);
v___x_1449_ = lean_usize_add(v_i_1420_, v___x_1448_);
v___x_1450_ = lean_array_uset(v_bs_x27_1439_, v_i_1420_, v___x_1447_);
v___x_1451_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg(v_u_1416_, v_preContext_1417_, v_00_u03b1_1418_, v_sz_1419_, v___x_1449_, v___x_1450_);
return v___x_1451_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0___boxed(lean_object* v_u_1465_, lean_object* v_preContext_1466_, lean_object* v_00_u03b1_1467_, lean_object* v_sz_1468_, lean_object* v_i_1469_, lean_object* v_bs_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_){
_start:
{
size_t v_sz_boxed_1476_; size_t v_i_boxed_1477_; lean_object* v_res_1478_; 
v_sz_boxed_1476_ = lean_unbox_usize(v_sz_1468_);
lean_dec(v_sz_1468_);
v_i_boxed_1477_ = lean_unbox_usize(v_i_1469_);
lean_dec(v_i_1469_);
v_res_1478_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0(v_u_1465_, v_preContext_1466_, v_00_u03b1_1467_, v_sz_boxed_1476_, v_i_boxed_1477_, v_bs_1470_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_);
lean_dec(v___y_1474_);
lean_dec_ref(v___y_1473_);
lean_dec(v___y_1472_);
lean_dec_ref(v___y_1471_);
return v_res_1478_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__0(void){
_start:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1479_ = lean_box(0);
v___x_1480_ = l_Lean_instInhabitedExpr;
v___x_1481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1481_, 0, v___x_1480_);
lean_ctor_set(v___x_1481_, 1, v___x_1479_);
return v___x_1481_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext(lean_object* v_preContext_1494_, lean_object* v_00_u03b1_1495_, lean_object* v_u_1496_, lean_object* v_vars_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_){
_start:
{
lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; size_t v_sz_1506_; size_t v___x_1507_; lean_object* v___x_1508_; 
v___x_1503_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__0, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__0_once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__0);
v___x_1504_ = lean_unsigned_to_nat(0u);
v___x_1505_ = lean_array_get(v___x_1503_, v_vars_1497_, v___x_1504_);
v_sz_1506_ = lean_array_size(v_vars_1497_);
v___x_1507_ = ((size_t)0ULL);
lean_inc_ref(v_00_u03b1_1495_);
lean_inc_ref(v_preContext_1494_);
lean_inc(v_u_1496_);
v___x_1508_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0(v_u_1496_, v_preContext_1494_, v_00_u03b1_1495_, v_sz_1506_, v___x_1507_, v_vars_1497_, v_a_1498_, v_a_1499_, v_a_1500_, v_a_1501_);
if (lean_obj_tag(v___x_1508_) == 0)
{
lean_object* v_a_1509_; lean_object* v_op_1510_; lean_object* v_assoc_1511_; lean_object* v_comm_1512_; lean_object* v_idem_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; 
v_a_1509_ = lean_ctor_get(v___x_1508_, 0);
lean_inc(v_a_1509_);
lean_dec_ref(v___x_1508_);
v_op_1510_ = lean_ctor_get(v_preContext_1494_, 1);
lean_inc_ref_n(v_op_1510_, 2);
v_assoc_1511_ = lean_ctor_get(v_preContext_1494_, 2);
lean_inc_ref(v_assoc_1511_);
v_comm_1512_ = lean_ctor_get(v_preContext_1494_, 3);
lean_inc(v_comm_1512_);
v_idem_1513_ = lean_ctor_get(v_preContext_1494_, 4);
lean_inc(v_idem_1513_);
lean_dec_ref(v_preContext_1494_);
v___x_1514_ = lean_box(0);
v___x_1515_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__0));
v___x_1516_ = lean_array_to_list(v_a_1509_);
v___x_1517_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__1));
v___x_1518_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1518_, 0, v_u_1496_);
lean_ctor_set(v___x_1518_, 1, v___x_1514_);
lean_inc_ref(v___x_1518_);
v___x_1519_ = l_Lean_mkConst(v___x_1517_, v___x_1518_);
lean_inc_ref(v_00_u03b1_1495_);
v___x_1520_ = l_Lean_mkAppB(v___x_1519_, v_00_u03b1_1495_, v_op_1510_);
v___x_1521_ = l_Lean_Meta_mkListLit(v___x_1520_, v___x_1516_, v_a_1498_, v_a_1499_, v_a_1500_, v_a_1501_);
if (lean_obj_tag(v___x_1521_) == 0)
{
lean_object* v_a_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1552_; 
v_a_1522_ = lean_ctor_get(v___x_1521_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1521_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1524_ = v___x_1521_;
v_isShared_1525_ = v_isSharedCheck_1552_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_a_1522_);
lean_dec(v___x_1521_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1552_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v_fst_1526_; lean_object* v___y_1528_; lean_object* v___y_1529_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___y_1539_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; 
v_fst_1526_ = lean_ctor_get(v___x_1505_, 0);
lean_inc(v_fst_1526_);
lean_dec(v___x_1505_);
v___x_1536_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__3);
v___x_1537_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__12, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__12_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg___closed__12);
v___x_1546_ = ((lean_object*)(l_Lean_Meta_AC_preContext___closed__4));
lean_inc_ref(v___x_1518_);
v___x_1547_ = l_Lean_mkConst(v___x_1546_, v___x_1518_);
lean_inc_ref(v_op_1510_);
lean_inc_ref(v_00_u03b1_1495_);
v___x_1548_ = l_Lean_mkAppB(v___x_1547_, v_00_u03b1_1495_, v_op_1510_);
if (lean_obj_tag(v_comm_1512_) == 0)
{
lean_object* v___x_1549_; 
v___x_1549_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0(v___x_1515_, v___x_1536_, v___x_1548_);
v___y_1539_ = v___x_1549_;
goto v___jp_1538_;
}
else
{
lean_object* v_val_1550_; lean_object* v___x_1551_; 
v_val_1550_ = lean_ctor_get(v_comm_1512_, 0);
lean_inc(v_val_1550_);
lean_dec_ref(v_comm_1512_);
v___x_1551_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1(v___x_1515_, v___x_1536_, v___x_1537_, v___x_1548_, v_val_1550_);
v___y_1539_ = v___x_1551_;
goto v___jp_1538_;
}
v___jp_1527_:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1534_; 
v___x_1530_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___closed__3));
v___x_1531_ = l_Lean_mkConst(v___x_1530_, v___x_1518_);
v___x_1532_ = l_Lean_mkApp7(v___x_1531_, v_00_u03b1_1495_, v_op_1510_, v_assoc_1511_, v___y_1528_, v___y_1529_, v_a_1522_, v_fst_1526_);
if (v_isShared_1525_ == 0)
{
lean_ctor_set(v___x_1524_, 0, v___x_1532_);
v___x_1534_ = v___x_1524_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v___x_1532_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
v___jp_1538_:
{
lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
v___x_1540_ = ((lean_object*)(l_Lean_Meta_AC_preContext___closed__6));
lean_inc_ref(v___x_1518_);
v___x_1541_ = l_Lean_mkConst(v___x_1540_, v___x_1518_);
lean_inc_ref(v_op_1510_);
lean_inc_ref(v_00_u03b1_1495_);
v___x_1542_ = l_Lean_mkAppB(v___x_1541_, v_00_u03b1_1495_, v_op_1510_);
if (lean_obj_tag(v_idem_1513_) == 0)
{
lean_object* v___x_1543_; 
v___x_1543_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__0(v___x_1515_, v___x_1536_, v___x_1542_);
v___y_1528_ = v___y_1539_;
v___y_1529_ = v___x_1543_;
goto v___jp_1527_;
}
else
{
lean_object* v_val_1544_; lean_object* v___x_1545_; 
v_val_1544_ = lean_ctor_get(v_idem_1513_, 0);
lean_inc(v_val_1544_);
lean_dec_ref(v_idem_1513_);
v___x_1545_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___lam__1(v___x_1515_, v___x_1536_, v___x_1537_, v___x_1542_, v_val_1544_);
v___y_1528_ = v___y_1539_;
v___y_1529_ = v___x_1545_;
goto v___jp_1527_;
}
}
}
}
else
{
lean_dec_ref(v___x_1518_);
lean_dec(v_idem_1513_);
lean_dec(v_comm_1512_);
lean_dec_ref(v_assoc_1511_);
lean_dec_ref(v_op_1510_);
lean_dec(v___x_1505_);
lean_dec_ref(v_00_u03b1_1495_);
return v___x_1521_;
}
}
else
{
lean_object* v_a_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1560_; 
lean_dec(v___x_1505_);
lean_dec(v_u_1496_);
lean_dec_ref(v_00_u03b1_1495_);
lean_dec_ref(v_preContext_1494_);
v_a_1553_ = lean_ctor_get(v___x_1508_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1508_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1555_ = v___x_1508_;
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_a_1553_);
lean_dec(v___x_1508_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext___boxed(lean_object* v_preContext_1561_, lean_object* v_00_u03b1_1562_, lean_object* v_u_1563_, lean_object* v_vars_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_){
_start:
{
lean_object* v_res_1570_; 
v_res_1570_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext(v_preContext_1561_, v_00_u03b1_1562_, v_u_1563_, v_vars_1564_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_);
lean_dec(v_a_1568_);
lean_dec_ref(v_a_1567_);
lean_dec(v_a_1566_);
lean_dec_ref(v_a_1565_);
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0(lean_object* v_u_1571_, lean_object* v_preContext_1572_, lean_object* v_00_u03b1_1573_, size_t v_sz_1574_, size_t v_i_1575_, lean_object* v_bs_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_){
_start:
{
lean_object* v___x_1582_; 
v___x_1582_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___redArg(v_u_1571_, v_preContext_1572_, v_00_u03b1_1573_, v_sz_1574_, v_i_1575_, v_bs_1576_);
return v___x_1582_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0___boxed(lean_object* v_u_1583_, lean_object* v_preContext_1584_, lean_object* v_00_u03b1_1585_, lean_object* v_sz_1586_, lean_object* v_i_1587_, lean_object* v_bs_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_){
_start:
{
size_t v_sz_boxed_1594_; size_t v_i_boxed_1595_; lean_object* v_res_1596_; 
v_sz_boxed_1594_ = lean_unbox_usize(v_sz_1586_);
lean_dec(v_sz_1586_);
v_i_boxed_1595_ = lean_unbox_usize(v_i_1587_);
lean_dec(v_i_1587_);
v_res_1596_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext_spec__0_spec__0(v_u_1583_, v_preContext_1584_, v_00_u03b1_1585_, v_sz_boxed_1594_, v_i_boxed_1595_, v_bs_1588_, v___y_1589_, v___y_1590_, v___y_1591_, v___y_1592_);
lean_dec(v___y_1592_);
lean_dec_ref(v___y_1591_);
lean_dec(v___y_1590_);
lean_dec_ref(v___y_1589_);
return v_res_1596_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__3(void){
_start:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1605_ = lean_box(0);
v___x_1606_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__2));
v___x_1607_ = l_Lean_mkConst(v___x_1606_, v___x_1605_);
return v___x_1607_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__6(void){
_start:
{
lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; 
v___x_1615_ = lean_box(0);
v___x_1616_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__5));
v___x_1617_ = l_Lean_mkConst(v___x_1616_, v___x_1615_);
return v___x_1617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert(lean_object* v_a_1618_){
_start:
{
if (lean_obj_tag(v_a_1618_) == 0)
{
lean_object* v_x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; 
v_x_1619_ = lean_ctor_get(v_a_1618_, 0);
lean_inc(v_x_1619_);
lean_dec_ref(v_a_1618_);
v___x_1620_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__3, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__3_once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__3);
v___x_1621_ = l_Lean_mkNatLit(v_x_1619_);
v___x_1622_ = l_Lean_Expr_app___override(v___x_1620_, v___x_1621_);
return v___x_1622_;
}
else
{
lean_object* v_lhs_1623_; lean_object* v_rhs_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; 
v_lhs_1623_ = lean_ctor_get(v_a_1618_, 0);
lean_inc_ref(v_lhs_1623_);
v_rhs_1624_ = lean_ctor_get(v_a_1618_, 1);
lean_inc_ref(v_rhs_1624_);
lean_dec_ref(v_a_1618_);
v___x_1625_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__6, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__6_once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert___closed__6);
v___x_1626_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert(v_lhs_1623_);
v___x_1627_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert(v_rhs_1624_);
v___x_1628_ = l_Lean_mkAppB(v___x_1625_, v___x_1626_, v___x_1627_);
return v___x_1628_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convertTarget(lean_object* v_preContext_1629_, lean_object* v_vars_1630_, lean_object* v_a_1631_){
_start:
{
if (lean_obj_tag(v_a_1631_) == 0)
{
lean_object* v_x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; 
lean_dec_ref(v_preContext_1629_);
v_x_1632_ = lean_ctor_get(v_a_1631_, 0);
v___x_1633_ = l_Lean_instInhabitedExpr;
v___x_1634_ = lean_array_get_borrowed(v___x_1633_, v_vars_1630_, v_x_1632_);
lean_inc(v___x_1634_);
return v___x_1634_;
}
else
{
lean_object* v_lhs_1635_; lean_object* v_rhs_1636_; lean_object* v_op_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; 
v_lhs_1635_ = lean_ctor_get(v_a_1631_, 0);
v_rhs_1636_ = lean_ctor_get(v_a_1631_, 1);
v_op_1637_ = lean_ctor_get(v_preContext_1629_, 1);
lean_inc_ref(v_op_1637_);
lean_inc_ref(v_preContext_1629_);
v___x_1638_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convertTarget(v_preContext_1629_, v_vars_1630_, v_lhs_1635_);
v___x_1639_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convertTarget(v_preContext_1629_, v_vars_1630_, v_rhs_1636_);
v___x_1640_ = l_Lean_mkAppB(v_op_1637_, v___x_1638_, v___x_1639_);
return v___x_1640_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convertTarget___boxed(lean_object* v_preContext_1641_, lean_object* v_vars_1642_, lean_object* v_a_1643_){
_start:
{
lean_object* v_res_1644_; 
v_res_1644_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convertTarget(v_preContext_1641_, v_vars_1642_, v_a_1643_);
lean_dec_ref(v_a_1643_);
lean_dec_ref(v_vars_1642_);
return v_res_1644_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4(lean_object* v_msg_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_){
_start:
{
lean_object* v___f_1652_; lean_object* v___x_2014__overap_1653_; lean_object* v___x_1654_; 
v___f_1652_ = ((lean_object*)(l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4___closed__0));
v___x_2014__overap_1653_ = lean_panic_fn_borrowed(v___f_1652_, v_msg_1646_);
lean_inc(v___y_1650_);
lean_inc_ref(v___y_1649_);
lean_inc(v___y_1648_);
lean_inc_ref(v___y_1647_);
v___x_1654_ = lean_apply_5(v___x_2014__overap_1653_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, lean_box(0));
return v___x_1654_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4___boxed(lean_object* v_msg_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_){
_start:
{
lean_object* v_res_1661_; 
v_res_1661_ = l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4(v_msg_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_);
lean_dec(v___y_1659_);
lean_dec_ref(v___y_1658_);
lean_dec(v___y_1657_);
lean_dec_ref(v___y_1656_);
return v_res_1661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3___redArg(lean_object* v_x_1662_){
_start:
{
if (lean_obj_tag(v_x_1662_) == 0)
{
lean_object* v___x_1663_; 
v___x_1663_ = ((lean_object*)(l_Lean_Meta_AC_instEvalInformationPreContextACExpr___lam__0___closed__0));
return v___x_1663_;
}
else
{
lean_object* v_tail_1664_; 
v_tail_1664_ = lean_ctor_get(v_x_1662_, 1);
if (lean_obj_tag(v_tail_1664_) == 0)
{
lean_object* v_head_1665_; lean_object* v___x_1666_; 
v_head_1665_ = lean_ctor_get(v_x_1662_, 0);
lean_inc(v_head_1665_);
lean_dec_ref(v_x_1662_);
v___x_1666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1666_, 0, v_head_1665_);
return v___x_1666_;
}
else
{
lean_object* v_head_1667_; lean_object* v___x_1669_; uint8_t v_isShared_1670_; uint8_t v_isSharedCheck_1676_; 
lean_inc(v_tail_1664_);
v_head_1667_ = lean_ctor_get(v_x_1662_, 0);
v_isSharedCheck_1676_ = !lean_is_exclusive(v_x_1662_);
if (v_isSharedCheck_1676_ == 0)
{
lean_object* v_unused_1677_; 
v_unused_1677_ = lean_ctor_get(v_x_1662_, 1);
lean_dec(v_unused_1677_);
v___x_1669_ = v_x_1662_;
v_isShared_1670_ = v_isSharedCheck_1676_;
goto v_resetjp_1668_;
}
else
{
lean_inc(v_head_1667_);
lean_dec(v_x_1662_);
v___x_1669_ = lean_box(0);
v_isShared_1670_ = v_isSharedCheck_1676_;
goto v_resetjp_1668_;
}
v_resetjp_1668_:
{
lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1674_; 
v___x_1671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1671_, 0, v_head_1667_);
v___x_1672_ = l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3___redArg(v_tail_1664_);
if (v_isShared_1670_ == 0)
{
lean_ctor_set(v___x_1669_, 1, v___x_1672_);
lean_ctor_set(v___x_1669_, 0, v___x_1671_);
v___x_1674_ = v___x_1669_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v___x_1671_);
lean_ctor_set(v_reuseFailAlloc_1675_, 1, v___x_1672_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
return v___x_1674_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__2(size_t v_sz_1678_, size_t v_i_1679_, lean_object* v_bs_1680_){
_start:
{
uint8_t v___x_1681_; 
v___x_1681_ = lean_usize_dec_lt(v_i_1679_, v_sz_1678_);
if (v___x_1681_ == 0)
{
return v_bs_1680_;
}
else
{
lean_object* v_v_1682_; lean_object* v_fst_1683_; lean_object* v___x_1684_; lean_object* v_bs_x27_1685_; size_t v___x_1686_; size_t v___x_1687_; lean_object* v___x_1688_; 
v_v_1682_ = lean_array_uget_borrowed(v_bs_1680_, v_i_1679_);
v_fst_1683_ = lean_ctor_get(v_v_1682_, 0);
lean_inc(v_fst_1683_);
v___x_1684_ = lean_unsigned_to_nat(0u);
v_bs_x27_1685_ = lean_array_uset(v_bs_1680_, v_i_1679_, v___x_1684_);
v___x_1686_ = ((size_t)1ULL);
v___x_1687_ = lean_usize_add(v_i_1679_, v___x_1686_);
v___x_1688_ = lean_array_uset(v_bs_x27_1685_, v_i_1679_, v_fst_1683_);
v_i_1679_ = v___x_1687_;
v_bs_1680_ = v___x_1688_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__2___boxed(lean_object* v_sz_1690_, lean_object* v_i_1691_, lean_object* v_bs_1692_){
_start:
{
size_t v_sz_boxed_1693_; size_t v_i_boxed_1694_; lean_object* v_res_1695_; 
v_sz_boxed_1693_ = lean_unbox_usize(v_sz_1690_);
lean_dec(v_sz_1690_);
v_i_boxed_1694_ = lean_unbox_usize(v_i_1691_);
lean_dec(v_i_1691_);
v_res_1695_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__2(v_sz_boxed_1693_, v_i_boxed_1694_, v_bs_1692_);
return v_res_1695_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__0(size_t v_sz_1696_, size_t v_i_1697_, lean_object* v_bs_1698_){
_start:
{
uint8_t v___x_1699_; 
v___x_1699_ = lean_usize_dec_lt(v_i_1697_, v_sz_1696_);
if (v___x_1699_ == 0)
{
return v_bs_1698_;
}
else
{
lean_object* v_v_1700_; lean_object* v_snd_1701_; lean_object* v___x_1702_; lean_object* v_bs_x27_1703_; uint8_t v___y_1705_; 
v_v_1700_ = lean_array_uget_borrowed(v_bs_1698_, v_i_1697_);
v_snd_1701_ = lean_ctor_get(v_v_1700_, 1);
lean_inc(v_snd_1701_);
v___x_1702_ = lean_unsigned_to_nat(0u);
v_bs_x27_1703_ = lean_array_uset(v_bs_1698_, v_i_1697_, v___x_1702_);
if (lean_obj_tag(v_snd_1701_) == 0)
{
uint8_t v___x_1711_; 
v___x_1711_ = 0;
v___y_1705_ = v___x_1711_;
goto v___jp_1704_;
}
else
{
lean_dec_ref(v_snd_1701_);
v___y_1705_ = v___x_1699_;
goto v___jp_1704_;
}
v___jp_1704_:
{
size_t v___x_1706_; size_t v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v___x_1706_ = ((size_t)1ULL);
v___x_1707_ = lean_usize_add(v_i_1697_, v___x_1706_);
v___x_1708_ = lean_box(v___y_1705_);
v___x_1709_ = lean_array_uset(v_bs_x27_1703_, v_i_1697_, v___x_1708_);
v_i_1697_ = v___x_1707_;
v_bs_1698_ = v___x_1709_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__0___boxed(lean_object* v_sz_1712_, lean_object* v_i_1713_, lean_object* v_bs_1714_){
_start:
{
size_t v_sz_boxed_1715_; size_t v_i_boxed_1716_; lean_object* v_res_1717_; 
v_sz_boxed_1715_ = lean_unbox_usize(v_sz_1712_);
lean_dec(v_sz_1712_);
v_i_boxed_1716_ = lean_unbox_usize(v_i_1713_);
lean_dec(v_i_1713_);
v_res_1717_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__0(v_sz_boxed_1715_, v_i_boxed_1716_, v_bs_1714_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_AC_removeNeutrals_loop___at___00Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1_spec__1_spec__3(lean_object* v_ctx_1718_, lean_object* v_a_1719_){
_start:
{
if (lean_obj_tag(v_a_1719_) == 0)
{
return v_a_1719_;
}
else
{
lean_object* v_head_1720_; lean_object* v_tail_1721_; lean_object* v___x_1723_; uint8_t v_isShared_1724_; uint8_t v_isSharedCheck_1735_; 
v_head_1720_ = lean_ctor_get(v_a_1719_, 0);
v_tail_1721_ = lean_ctor_get(v_a_1719_, 1);
v_isSharedCheck_1735_ = !lean_is_exclusive(v_a_1719_);
if (v_isSharedCheck_1735_ == 0)
{
v___x_1723_ = v_a_1719_;
v_isShared_1724_ = v_isSharedCheck_1735_;
goto v_resetjp_1722_;
}
else
{
lean_inc(v_tail_1721_);
lean_inc(v_head_1720_);
lean_dec(v_a_1719_);
v___x_1723_ = lean_box(0);
v_isShared_1724_ = v_isSharedCheck_1735_;
goto v_resetjp_1722_;
}
v_resetjp_1722_:
{
lean_object* v_snd_1725_; uint8_t v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; uint8_t v___x_1729_; 
v_snd_1725_ = lean_ctor_get(v_ctx_1718_, 1);
v___x_1726_ = 0;
v___x_1727_ = lean_box(v___x_1726_);
v___x_1728_ = lean_array_get(v___x_1727_, v_snd_1725_, v_head_1720_);
lean_dec(v___x_1727_);
v___x_1729_ = lean_unbox(v___x_1728_);
lean_dec(v___x_1728_);
if (v___x_1729_ == 0)
{
lean_object* v___x_1730_; lean_object* v___x_1732_; 
v___x_1730_ = l_Lean_Data_AC_removeNeutrals_loop___at___00Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1_spec__1_spec__3(v_ctx_1718_, v_tail_1721_);
if (v_isShared_1724_ == 0)
{
lean_ctor_set(v___x_1723_, 1, v___x_1730_);
v___x_1732_ = v___x_1723_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1733_; 
v_reuseFailAlloc_1733_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1733_, 0, v_head_1720_);
lean_ctor_set(v_reuseFailAlloc_1733_, 1, v___x_1730_);
v___x_1732_ = v_reuseFailAlloc_1733_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
return v___x_1732_;
}
}
else
{
lean_del_object(v___x_1723_);
lean_dec(v_head_1720_);
v_a_1719_ = v_tail_1721_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Data_AC_removeNeutrals_loop___at___00Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1_spec__1_spec__3___boxed(lean_object* v_ctx_1736_, lean_object* v_a_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = l_Lean_Data_AC_removeNeutrals_loop___at___00Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1_spec__1_spec__3(v_ctx_1736_, v_a_1737_);
lean_dec_ref(v_ctx_1736_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1_spec__1(lean_object* v_ctx_1739_, lean_object* v_x_1740_){
_start:
{
if (lean_obj_tag(v_x_1740_) == 0)
{
return v_x_1740_;
}
else
{
lean_object* v_head_1741_; lean_object* v___x_1742_; 
v_head_1741_ = lean_ctor_get(v_x_1740_, 0);
lean_inc(v_head_1741_);
v___x_1742_ = l_Lean_Data_AC_removeNeutrals_loop___at___00Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1_spec__1_spec__3(v_ctx_1739_, v_x_1740_);
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v___x_1743_; 
v___x_1743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1743_, 0, v_head_1741_);
lean_ctor_set(v___x_1743_, 1, v___x_1742_);
return v___x_1743_;
}
else
{
lean_dec(v_head_1741_);
return v___x_1742_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1_spec__1___boxed(lean_object* v_ctx_1744_, lean_object* v_x_1745_){
_start:
{
lean_object* v_res_1746_; 
v_res_1746_ = l_Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1_spec__1(v_ctx_1744_, v_x_1745_);
lean_dec_ref(v_ctx_1744_);
return v_res_1746_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1(lean_object* v_ctx_1747_, lean_object* v_e_1748_){
_start:
{
lean_object* v_fst_1749_; lean_object* v_comm_1750_; lean_object* v_idem_1751_; lean_object* v___y_1753_; lean_object* v_xs_1755_; lean_object* v_xs_1756_; 
v_fst_1749_ = lean_ctor_get(v_ctx_1747_, 0);
v_comm_1750_ = lean_ctor_get(v_fst_1749_, 3);
v_idem_1751_ = lean_ctor_get(v_fst_1749_, 4);
v_xs_1755_ = l_Lean_Data_AC_Expr_toList(v_e_1748_);
v_xs_1756_ = l_Lean_Data_AC_removeNeutrals___at___00Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1_spec__1(v_ctx_1747_, v_xs_1755_);
if (lean_obj_tag(v_comm_1750_) == 0)
{
v___y_1753_ = v_xs_1756_;
goto v___jp_1752_;
}
else
{
lean_object* v___x_1757_; 
v___x_1757_ = l_Lean_Data_AC_sort(v_xs_1756_);
v___y_1753_ = v___x_1757_;
goto v___jp_1752_;
}
v___jp_1752_:
{
if (lean_obj_tag(v_idem_1751_) == 0)
{
return v___y_1753_;
}
else
{
lean_object* v___x_1754_; 
v___x_1754_ = l_Lean_Data_AC_mergeIdem(v___y_1753_);
return v___x_1754_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1___boxed(lean_object* v_ctx_1758_, lean_object* v_e_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l_Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1(v_ctx_1758_, v_e_1759_);
lean_dec_ref(v_e_1759_);
lean_dec_ref(v_ctx_1758_);
return v_res_1760_;
}
}
static lean_object* _init_l_Lean_Meta_AC_buildNormProof___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; 
v___x_1766_ = lean_box(0);
v___x_1767_ = ((lean_object*)(l_Lean_Meta_AC_buildNormProof___lam__0___closed__2));
v___x_1768_ = l_Lean_mkConst(v___x_1767_, v___x_1766_);
return v___x_1768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_buildNormProof___lam__0(lean_object* v___x_1776_, lean_object* v_fst_1777_, lean_object* v_preContext_1778_, lean_object* v_snd_1779_, lean_object* v_varsData_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_){
_start:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
v___x_1786_ = lean_unsigned_to_nat(0u);
v___x_1787_ = lean_array_get_borrowed(v___x_1776_, v_fst_1777_, v___x_1786_);
lean_inc(v___y_1784_);
lean_inc_ref(v___y_1783_);
lean_inc(v___y_1782_);
lean_inc_ref(v___y_1781_);
lean_inc(v___x_1787_);
v___x_1788_ = lean_infer_type(v___x_1787_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
if (lean_obj_tag(v___x_1788_) == 0)
{
lean_object* v_a_1789_; lean_object* v___x_1790_; 
v_a_1789_ = lean_ctor_get(v___x_1788_, 0);
lean_inc_n(v_a_1789_, 2);
lean_dec_ref(v___x_1788_);
v___x_1790_ = l_Lean_Meta_getLevel(v_a_1789_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
if (lean_obj_tag(v___x_1790_) == 0)
{
lean_object* v_a_1791_; lean_object* v___x_1792_; 
v_a_1791_ = lean_ctor_get(v___x_1790_, 0);
lean_inc_n(v_a_1791_, 2);
lean_dec_ref(v___x_1790_);
lean_inc_ref(v_varsData_1780_);
lean_inc(v_a_1789_);
lean_inc_ref(v_preContext_1778_);
v___x_1792_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_mkContext(v_preContext_1778_, v_a_1789_, v_a_1791_, v_varsData_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
if (lean_obj_tag(v___x_1792_) == 0)
{
lean_object* v_a_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; 
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
lean_inc(v_a_1793_);
lean_dec_ref(v___x_1792_);
v___x_1794_ = lean_box(0);
v___x_1795_ = lean_obj_once(&l_Lean_Meta_AC_buildNormProof___lam__0___closed__3, &l_Lean_Meta_AC_buildNormProof___lam__0___closed__3_once, _init_l_Lean_Meta_AC_buildNormProof___lam__0___closed__3);
v___x_1796_ = l_Lean_Meta_mkEqRefl(v___x_1795_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
if (lean_obj_tag(v___x_1796_) == 0)
{
lean_object* v_a_1797_; size_t v_sz_1798_; size_t v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; 
v_a_1797_ = lean_ctor_get(v___x_1796_, 0);
lean_inc(v_a_1797_);
lean_dec_ref(v___x_1796_);
v_sz_1798_ = lean_array_size(v_varsData_1780_);
v___x_1799_ = ((size_t)0ULL);
lean_inc_ref(v_varsData_1780_);
v___x_1800_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__0(v_sz_1798_, v___x_1799_, v_varsData_1780_);
lean_inc_ref_n(v_preContext_1778_, 2);
v___x_1801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1801_, 0, v_preContext_1778_);
lean_ctor_set(v___x_1801_, 1, v___x_1800_);
v___x_1802_ = l_Lean_Data_AC_norm___at___00Lean_Meta_AC_buildNormProof_spec__1(v___x_1801_, v_snd_1779_);
lean_dec_ref(v___x_1801_);
v___x_1803_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AC_buildNormProof_spec__2(v_sz_1798_, v___x_1799_, v_varsData_1780_);
v___x_1804_ = l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3___redArg(v___x_1802_);
v___x_1805_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convertTarget(v_preContext_1778_, v___x_1803_, v_snd_1779_);
v___x_1806_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convertTarget(v_preContext_1778_, v___x_1803_, v___x_1804_);
lean_dec_ref(v___x_1803_);
v___x_1807_ = l_Lean_Meta_mkEq(v___x_1805_, v___x_1806_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
if (lean_obj_tag(v___x_1807_) == 0)
{
lean_object* v_a_1808_; lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1829_; 
v_a_1808_ = lean_ctor_get(v___x_1807_, 0);
v_isSharedCheck_1829_ = !lean_is_exclusive(v___x_1807_);
if (v_isSharedCheck_1829_ == 0)
{
v___x_1810_ = v___x_1807_;
v_isShared_1811_ = v_isSharedCheck_1829_;
goto v_resetjp_1809_;
}
else
{
lean_inc(v_a_1808_);
lean_dec(v___x_1807_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1829_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1827_; 
v___x_1812_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert(v_snd_1779_);
v___x_1813_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_buildNormProof_convert(v___x_1804_);
v___x_1814_ = ((lean_object*)(l_Lean_Meta_AC_buildNormProof___lam__0___closed__5));
v___x_1815_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1815_, 0, v_a_1791_);
lean_ctor_set(v___x_1815_, 1, v___x_1794_);
v___x_1816_ = l_Lean_mkConst(v___x_1814_, v___x_1815_);
v___x_1817_ = lean_unsigned_to_nat(5u);
v___x_1818_ = lean_mk_empty_array_with_capacity(v___x_1817_);
v___x_1819_ = lean_array_push(v___x_1818_, v_a_1789_);
v___x_1820_ = lean_array_push(v___x_1819_, v_a_1793_);
v___x_1821_ = lean_array_push(v___x_1820_, v___x_1812_);
v___x_1822_ = lean_array_push(v___x_1821_, v___x_1813_);
v___x_1823_ = lean_array_push(v___x_1822_, v_a_1797_);
v___x_1824_ = l_Lean_mkAppN(v___x_1816_, v___x_1823_);
lean_dec_ref(v___x_1823_);
v___x_1825_ = l_Lean_Meta_mkExpectedPropHint(v___x_1824_, v_a_1808_);
if (v_isShared_1811_ == 0)
{
lean_ctor_set(v___x_1810_, 0, v___x_1825_);
v___x_1827_ = v___x_1810_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v___x_1825_);
v___x_1827_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
return v___x_1827_;
}
}
}
else
{
lean_dec_ref(v___x_1804_);
lean_dec(v_a_1797_);
lean_dec(v_a_1793_);
lean_dec(v_a_1791_);
lean_dec(v_a_1789_);
lean_dec_ref(v_snd_1779_);
return v___x_1807_;
}
}
else
{
lean_dec(v_a_1793_);
lean_dec(v_a_1791_);
lean_dec(v_a_1789_);
lean_dec_ref(v_varsData_1780_);
lean_dec_ref(v_snd_1779_);
lean_dec_ref(v_preContext_1778_);
return v___x_1796_;
}
}
else
{
lean_dec(v_a_1791_);
lean_dec(v_a_1789_);
lean_dec_ref(v_varsData_1780_);
lean_dec_ref(v_snd_1779_);
lean_dec_ref(v_preContext_1778_);
return v___x_1792_;
}
}
else
{
lean_object* v_a_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1837_; 
lean_dec(v_a_1789_);
lean_dec_ref(v_varsData_1780_);
lean_dec_ref(v_snd_1779_);
lean_dec_ref(v_preContext_1778_);
v_a_1830_ = lean_ctor_get(v___x_1790_, 0);
v_isSharedCheck_1837_ = !lean_is_exclusive(v___x_1790_);
if (v_isSharedCheck_1837_ == 0)
{
v___x_1832_ = v___x_1790_;
v_isShared_1833_ = v_isSharedCheck_1837_;
goto v_resetjp_1831_;
}
else
{
lean_inc(v_a_1830_);
lean_dec(v___x_1790_);
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
lean_dec_ref(v_varsData_1780_);
lean_dec_ref(v_snd_1779_);
lean_dec_ref(v_preContext_1778_);
return v___x_1788_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_buildNormProof___lam__0___boxed(lean_object* v___x_1838_, lean_object* v_fst_1839_, lean_object* v_preContext_1840_, lean_object* v_snd_1841_, lean_object* v_varsData_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_){
_start:
{
lean_object* v_res_1848_; 
v_res_1848_ = l_Lean_Meta_AC_buildNormProof___lam__0(v___x_1838_, v_fst_1839_, v_preContext_1840_, v_snd_1841_, v_varsData_1842_, v___y_1843_, v___y_1844_, v___y_1845_, v___y_1846_);
lean_dec(v___y_1846_);
lean_dec_ref(v___y_1845_);
lean_dec(v___y_1844_);
lean_dec_ref(v___y_1843_);
lean_dec_ref(v_fst_1839_);
lean_dec_ref(v___x_1838_);
return v_res_1848_;
}
}
static lean_object* _init_l_Lean_Meta_AC_buildNormProof___closed__5(void){
_start:
{
lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; 
v___x_1855_ = ((lean_object*)(l_Lean_Meta_AC_buildNormProof___closed__4));
v___x_1856_ = lean_unsigned_to_nat(52u);
v___x_1857_ = lean_unsigned_to_nat(132u);
v___x_1858_ = ((lean_object*)(l_Lean_Meta_AC_buildNormProof___closed__3));
v___x_1859_ = ((lean_object*)(l_Lean_Meta_AC_buildNormProof___closed__2));
v___x_1860_ = l_mkPanicMessageWithDecl(v___x_1859_, v___x_1858_, v___x_1857_, v___x_1856_, v___x_1855_);
return v___x_1860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_buildNormProof(lean_object* v_preContext_1861_, lean_object* v_l_1862_, lean_object* v_r_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_){
_start:
{
lean_object* v_op_1869_; lean_object* v___x_1870_; 
v_op_1869_ = lean_ctor_get(v_preContext_1861_, 1);
lean_inc_ref(v_op_1869_);
v___x_1870_ = l_Lean_Meta_AC_toACExpr(v_op_1869_, v_l_1862_, v_r_1863_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_);
if (lean_obj_tag(v___x_1870_) == 0)
{
lean_object* v_a_1871_; lean_object* v_fst_1872_; lean_object* v_snd_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1915_; 
v_a_1871_ = lean_ctor_get(v___x_1870_, 0);
lean_inc(v_a_1871_);
lean_dec_ref(v___x_1870_);
v_fst_1872_ = lean_ctor_get(v_a_1871_, 0);
v_snd_1873_ = lean_ctor_get(v_a_1871_, 1);
v_isSharedCheck_1915_ = !lean_is_exclusive(v_a_1871_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1875_ = v_a_1871_;
v_isShared_1876_ = v_isSharedCheck_1915_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_snd_1873_);
lean_inc(v_fst_1872_);
lean_dec(v_a_1871_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1915_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1877_; lean_object* v___f_1878_; lean_object* v___x_1879_; 
v___x_1877_ = l_Lean_instInhabitedExpr;
lean_inc_ref(v_preContext_1861_);
lean_inc(v_fst_1872_);
v___f_1878_ = lean_alloc_closure((void*)(l_Lean_Meta_AC_buildNormProof___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1878_, 0, v___x_1877_);
lean_closure_set(v___f_1878_, 1, v_fst_1872_);
lean_closure_set(v___f_1878_, 2, v_preContext_1861_);
lean_closure_set(v___f_1878_, 3, v_snd_1873_);
v___x_1879_ = l_Lean_Meta_AC_abstractAtoms(v_preContext_1861_, v_fst_1872_, v___f_1878_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_);
if (lean_obj_tag(v___x_1879_) == 0)
{
lean_object* v_a_1880_; lean_object* v___x_1881_; 
v_a_1880_ = lean_ctor_get(v___x_1879_, 0);
lean_inc_n(v_a_1880_, 2);
lean_dec_ref(v___x_1879_);
lean_inc(v_a_1867_);
lean_inc_ref(v_a_1866_);
lean_inc(v_a_1865_);
lean_inc_ref(v_a_1864_);
v___x_1881_ = lean_infer_type(v_a_1880_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1898_; 
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1898_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1898_ == 0)
{
v___x_1884_ = v___x_1881_;
v_isShared_1885_ = v_isSharedCheck_1898_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_a_1882_);
lean_dec(v___x_1881_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1898_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; uint8_t v___x_1888_; 
v___x_1886_ = ((lean_object*)(l_Lean_Meta_AC_buildNormProof___closed__1));
v___x_1887_ = lean_unsigned_to_nat(3u);
v___x_1888_ = l_Lean_Expr_isAppOfArity(v_a_1882_, v___x_1886_, v___x_1887_);
if (v___x_1888_ == 0)
{
lean_object* v___x_1889_; lean_object* v___x_1890_; 
lean_del_object(v___x_1884_);
lean_dec(v_a_1882_);
lean_dec(v_a_1880_);
lean_del_object(v___x_1875_);
v___x_1889_ = lean_obj_once(&l_Lean_Meta_AC_buildNormProof___closed__5, &l_Lean_Meta_AC_buildNormProof___closed__5_once, _init_l_Lean_Meta_AC_buildNormProof___closed__5);
v___x_1890_ = l_panic___at___00Lean_Meta_AC_buildNormProof_spec__4(v___x_1889_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_);
return v___x_1890_;
}
else
{
lean_object* v___x_1891_; lean_object* v___x_1893_; 
v___x_1891_ = l_Lean_Expr_appArg_x21(v_a_1882_);
lean_dec(v_a_1882_);
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 1, v___x_1891_);
lean_ctor_set(v___x_1875_, 0, v_a_1880_);
v___x_1893_ = v___x_1875_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v_a_1880_);
lean_ctor_set(v_reuseFailAlloc_1897_, 1, v___x_1891_);
v___x_1893_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
lean_object* v___x_1895_; 
if (v_isShared_1885_ == 0)
{
lean_ctor_set(v___x_1884_, 0, v___x_1893_);
v___x_1895_ = v___x_1884_;
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
}
}
}
else
{
lean_object* v_a_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1906_; 
lean_dec(v_a_1880_);
lean_del_object(v___x_1875_);
v_a_1899_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1906_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1906_ == 0)
{
v___x_1901_ = v___x_1881_;
v_isShared_1902_ = v_isSharedCheck_1906_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_a_1899_);
lean_dec(v___x_1881_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1906_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v___x_1904_; 
if (v_isShared_1902_ == 0)
{
v___x_1904_ = v___x_1901_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v_a_1899_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
return v___x_1904_;
}
}
}
}
else
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1914_; 
lean_del_object(v___x_1875_);
v_a_1907_ = lean_ctor_get(v___x_1879_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1879_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1909_ = v___x_1879_;
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1879_);
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
else
{
lean_object* v_a_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1923_; 
lean_dec_ref(v_preContext_1861_);
v_a_1916_ = lean_ctor_get(v___x_1870_, 0);
v_isSharedCheck_1923_ = !lean_is_exclusive(v___x_1870_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1918_ = v___x_1870_;
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_a_1916_);
lean_dec(v___x_1870_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_AC_buildNormProof___boxed(lean_object* v_preContext_1924_, lean_object* v_l_1925_, lean_object* v_r_1926_, lean_object* v_a_1927_, lean_object* v_a_1928_, lean_object* v_a_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_){
_start:
{
lean_object* v_res_1932_; 
v_res_1932_ = l_Lean_Meta_AC_buildNormProof(v_preContext_1924_, v_l_1925_, v_r_1926_, v_a_1927_, v_a_1928_, v_a_1929_, v_a_1930_);
lean_dec(v_a_1930_);
lean_dec_ref(v_a_1929_);
lean_dec(v_a_1928_);
lean_dec_ref(v_a_1927_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3(lean_object* v_ctx_1933_, lean_object* v_x_1934_){
_start:
{
lean_object* v___x_1935_; 
v___x_1935_ = l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3___redArg(v_x_1934_);
return v___x_1935_;
}
}
LEAN_EXPORT lean_object* l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3___boxed(lean_object* v_ctx_1936_, lean_object* v_x_1937_){
_start:
{
lean_object* v_res_1938_; 
v_res_1938_ = l_Lean_Data_AC_evalList___at___00Lean_Meta_AC_buildNormProof_spec__3(v_ctx_1936_, v_x_1937_);
lean_dec_ref(v_ctx_1936_);
return v_res_1938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_post___redArg(lean_object* v_e_1939_, lean_object* v_a_1940_, lean_object* v_a_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_){
_start:
{
lean_object* v_e_1947_; lean_object* v_op_1954_; lean_object* v_l_1955_; lean_object* v_r_1956_; lean_object* v___y_1957_; lean_object* v___y_1958_; lean_object* v___y_1959_; lean_object* v___y_1960_; 
if (lean_obj_tag(v_e_1939_) == 5)
{
lean_object* v_fn_2012_; 
v_fn_2012_ = lean_ctor_get(v_e_1939_, 0);
if (lean_obj_tag(v_fn_2012_) == 5)
{
lean_object* v_parent_x3f_2013_; 
v_parent_x3f_2013_ = lean_ctor_get(v_a_1940_, 7);
if (lean_obj_tag(v_parent_x3f_2013_) == 1)
{
lean_object* v_val_2014_; 
v_val_2014_ = lean_ctor_get(v_parent_x3f_2013_, 0);
if (lean_obj_tag(v_val_2014_) == 5)
{
lean_object* v_fn_2015_; 
v_fn_2015_ = lean_ctor_get(v_val_2014_, 0);
if (lean_obj_tag(v_fn_2015_) == 5)
{
lean_object* v_arg_2016_; lean_object* v_fn_2017_; lean_object* v_arg_2018_; lean_object* v_fn_2019_; lean_object* v___x_2020_; 
v_arg_2016_ = lean_ctor_get(v_e_1939_, 1);
v_fn_2017_ = lean_ctor_get(v_fn_2012_, 0);
v_arg_2018_ = lean_ctor_get(v_fn_2012_, 1);
v_fn_2019_ = lean_ctor_get(v_fn_2015_, 0);
lean_inc_ref(v_fn_2019_);
lean_inc_ref(v_fn_2017_);
v___x_2020_ = l_Lean_Meta_isExprDefEq(v_fn_2017_, v_fn_2019_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_);
if (lean_obj_tag(v___x_2020_) == 0)
{
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2082_; 
v_a_2021_ = lean_ctor_get(v___x_2020_, 0);
v_isSharedCheck_2082_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2023_ = v___x_2020_;
v_isShared_2024_ = v_isSharedCheck_2082_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_2020_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2082_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
uint8_t v___x_2025_; uint8_t v___x_2026_; 
v___x_2025_ = 1;
v___x_2026_ = lean_unbox(v_a_2021_);
lean_dec(v_a_2021_);
if (v___x_2026_ == 0)
{
lean_object* v___x_2027_; 
lean_del_object(v___x_2023_);
lean_inc_ref(v_fn_2017_);
v___x_2027_ = l_Lean_Meta_AC_preContext(v_fn_2017_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_);
if (lean_obj_tag(v___x_2027_) == 0)
{
lean_object* v_a_2028_; lean_object* v___x_2030_; uint8_t v_isShared_2031_; uint8_t v_isSharedCheck_2067_; 
v_a_2028_ = lean_ctor_get(v___x_2027_, 0);
v_isSharedCheck_2067_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2067_ == 0)
{
v___x_2030_ = v___x_2027_;
v_isShared_2031_ = v_isSharedCheck_2067_;
goto v_resetjp_2029_;
}
else
{
lean_inc(v_a_2028_);
lean_dec(v___x_2027_);
v___x_2030_ = lean_box(0);
v_isShared_2031_ = v_isSharedCheck_2067_;
goto v_resetjp_2029_;
}
v_resetjp_2029_:
{
if (lean_obj_tag(v_a_2028_) == 0)
{
lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2036_; 
v___x_2032_ = lean_box(0);
v___x_2033_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2033_, 0, v_e_1939_);
lean_ctor_set(v___x_2033_, 1, v___x_2032_);
lean_ctor_set_uint8(v___x_2033_, sizeof(void*)*2, v___x_2025_);
v___x_2034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2034_, 0, v___x_2033_);
if (v_isShared_2031_ == 0)
{
lean_ctor_set(v___x_2030_, 0, v___x_2034_);
v___x_2036_ = v___x_2030_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v___x_2034_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
return v___x_2036_;
}
}
else
{
lean_object* v_val_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2066_; 
lean_inc_ref(v_arg_2018_);
lean_inc_ref(v_arg_2016_);
lean_del_object(v___x_2030_);
lean_dec_ref(v_e_1939_);
v_val_2038_ = lean_ctor_get(v_a_2028_, 0);
v_isSharedCheck_2066_ = !lean_is_exclusive(v_a_2028_);
if (v_isSharedCheck_2066_ == 0)
{
v___x_2040_ = v_a_2028_;
v_isShared_2041_ = v_isSharedCheck_2066_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_val_2038_);
lean_dec(v_a_2028_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2066_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2042_; 
v___x_2042_ = l_Lean_Meta_AC_buildNormProof(v_val_2038_, v_arg_2018_, v_arg_2016_, v_a_1941_, v_a_1942_, v_a_1943_, v_a_1944_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2057_; 
v_a_2043_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2057_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_2045_ = v___x_2042_;
v_isShared_2046_ = v_isSharedCheck_2057_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2042_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2057_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v_fst_2047_; lean_object* v_snd_2048_; lean_object* v___x_2050_; 
v_fst_2047_ = lean_ctor_get(v_a_2043_, 0);
lean_inc(v_fst_2047_);
v_snd_2048_ = lean_ctor_get(v_a_2043_, 1);
lean_inc(v_snd_2048_);
lean_dec(v_a_2043_);
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 0, v_fst_2047_);
v___x_2050_ = v___x_2040_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2056_; 
v_reuseFailAlloc_2056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2056_, 0, v_fst_2047_);
v___x_2050_ = v_reuseFailAlloc_2056_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2054_; 
v___x_2051_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2051_, 0, v_snd_2048_);
lean_ctor_set(v___x_2051_, 1, v___x_2050_);
lean_ctor_set_uint8(v___x_2051_, sizeof(void*)*2, v___x_2025_);
v___x_2052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2051_);
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 0, v___x_2052_);
v___x_2054_ = v___x_2045_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v___x_2052_);
v___x_2054_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
return v___x_2054_;
}
}
}
}
else
{
lean_object* v_a_2058_; lean_object* v___x_2060_; uint8_t v_isShared_2061_; uint8_t v_isSharedCheck_2065_; 
lean_del_object(v___x_2040_);
v_a_2058_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2060_ = v___x_2042_;
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
else
{
lean_inc(v_a_2058_);
lean_dec(v___x_2042_);
v___x_2060_ = lean_box(0);
v_isShared_2061_ = v_isSharedCheck_2065_;
goto v_resetjp_2059_;
}
v_resetjp_2059_:
{
lean_object* v___x_2063_; 
if (v_isShared_2061_ == 0)
{
v___x_2063_ = v___x_2060_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v_a_2058_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
return v___x_2063_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2068_; lean_object* v___x_2070_; uint8_t v_isShared_2071_; uint8_t v_isSharedCheck_2075_; 
lean_dec_ref(v_e_1939_);
v_a_2068_ = lean_ctor_get(v___x_2027_, 0);
v_isSharedCheck_2075_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_2070_ = v___x_2027_;
v_isShared_2071_ = v_isSharedCheck_2075_;
goto v_resetjp_2069_;
}
else
{
lean_inc(v_a_2068_);
lean_dec(v___x_2027_);
v___x_2070_ = lean_box(0);
v_isShared_2071_ = v_isSharedCheck_2075_;
goto v_resetjp_2069_;
}
v_resetjp_2069_:
{
lean_object* v___x_2073_; 
if (v_isShared_2071_ == 0)
{
v___x_2073_ = v___x_2070_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v_a_2068_);
v___x_2073_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
return v___x_2073_;
}
}
}
}
else
{
lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2080_; 
v___x_2076_ = lean_box(0);
v___x_2077_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2077_, 0, v_e_1939_);
lean_ctor_set(v___x_2077_, 1, v___x_2076_);
lean_ctor_set_uint8(v___x_2077_, sizeof(void*)*2, v___x_2025_);
v___x_2078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2078_, 0, v___x_2077_);
if (v_isShared_2024_ == 0)
{
lean_ctor_set(v___x_2023_, 0, v___x_2078_);
v___x_2080_ = v___x_2023_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v___x_2078_);
v___x_2080_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
return v___x_2080_;
}
}
}
}
else
{
lean_object* v_a_2083_; lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2090_; 
lean_dec_ref(v_e_1939_);
v_a_2083_ = lean_ctor_get(v___x_2020_, 0);
v_isSharedCheck_2090_ = !lean_is_exclusive(v___x_2020_);
if (v_isSharedCheck_2090_ == 0)
{
v___x_2085_ = v___x_2020_;
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
else
{
lean_inc(v_a_2083_);
lean_dec(v___x_2020_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2090_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
lean_object* v___x_2088_; 
if (v_isShared_2086_ == 0)
{
v___x_2088_ = v___x_2085_;
goto v_reusejp_2087_;
}
else
{
lean_object* v_reuseFailAlloc_2089_; 
v_reuseFailAlloc_2089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2089_, 0, v_a_2083_);
v___x_2088_ = v_reuseFailAlloc_2089_;
goto v_reusejp_2087_;
}
v_reusejp_2087_:
{
return v___x_2088_;
}
}
}
}
else
{
lean_object* v_arg_2091_; lean_object* v_fn_2092_; lean_object* v_arg_2093_; 
v_arg_2091_ = lean_ctor_get(v_e_1939_, 1);
v_fn_2092_ = lean_ctor_get(v_fn_2012_, 0);
v_arg_2093_ = lean_ctor_get(v_fn_2012_, 1);
lean_inc_ref(v_arg_2091_);
lean_inc_ref(v_arg_2093_);
lean_inc_ref(v_fn_2092_);
v_op_1954_ = v_fn_2092_;
v_l_1955_ = v_arg_2093_;
v_r_1956_ = v_arg_2091_;
v___y_1957_ = v_a_1941_;
v___y_1958_ = v_a_1942_;
v___y_1959_ = v_a_1943_;
v___y_1960_ = v_a_1944_;
goto v___jp_1953_;
}
}
else
{
lean_object* v_arg_2094_; lean_object* v_fn_2095_; lean_object* v_arg_2096_; 
v_arg_2094_ = lean_ctor_get(v_e_1939_, 1);
v_fn_2095_ = lean_ctor_get(v_fn_2012_, 0);
v_arg_2096_ = lean_ctor_get(v_fn_2012_, 1);
lean_inc_ref(v_arg_2094_);
lean_inc_ref(v_arg_2096_);
lean_inc_ref(v_fn_2095_);
v_op_1954_ = v_fn_2095_;
v_l_1955_ = v_arg_2096_;
v_r_1956_ = v_arg_2094_;
v___y_1957_ = v_a_1941_;
v___y_1958_ = v_a_1942_;
v___y_1959_ = v_a_1943_;
v___y_1960_ = v_a_1944_;
goto v___jp_1953_;
}
}
else
{
lean_object* v_arg_2097_; lean_object* v_fn_2098_; lean_object* v_arg_2099_; 
v_arg_2097_ = lean_ctor_get(v_e_1939_, 1);
v_fn_2098_ = lean_ctor_get(v_fn_2012_, 0);
v_arg_2099_ = lean_ctor_get(v_fn_2012_, 1);
lean_inc_ref(v_arg_2097_);
lean_inc_ref(v_arg_2099_);
lean_inc_ref(v_fn_2098_);
v_op_1954_ = v_fn_2098_;
v_l_1955_ = v_arg_2099_;
v_r_1956_ = v_arg_2097_;
v___y_1957_ = v_a_1941_;
v___y_1958_ = v_a_1942_;
v___y_1959_ = v_a_1943_;
v___y_1960_ = v_a_1944_;
goto v___jp_1953_;
}
}
else
{
v_e_1947_ = v_e_1939_;
goto v___jp_1946_;
}
}
else
{
v_e_1947_ = v_e_1939_;
goto v___jp_1946_;
}
v___jp_1946_:
{
lean_object* v___x_1948_; uint8_t v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; 
v___x_1948_ = lean_box(0);
v___x_1949_ = 1;
v___x_1950_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1950_, 0, v_e_1947_);
lean_ctor_set(v___x_1950_, 1, v___x_1948_);
lean_ctor_set_uint8(v___x_1950_, sizeof(void*)*2, v___x_1949_);
v___x_1951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1951_, 0, v___x_1950_);
v___x_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1951_);
return v___x_1952_;
}
v___jp_1953_:
{
lean_object* v___x_1961_; 
v___x_1961_ = l_Lean_Meta_AC_preContext(v_op_1954_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_);
if (lean_obj_tag(v___x_1961_) == 0)
{
lean_object* v_a_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_2003_; 
v_a_1962_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_2003_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1964_ = v___x_1961_;
v_isShared_1965_ = v_isSharedCheck_2003_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_a_1962_);
lean_dec(v___x_1961_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_2003_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
if (lean_obj_tag(v_a_1962_) == 0)
{
lean_object* v___x_1966_; uint8_t v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1971_; 
lean_dec_ref(v_r_1956_);
lean_dec_ref(v_l_1955_);
v___x_1966_ = lean_box(0);
v___x_1967_ = 1;
v___x_1968_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1968_, 0, v_e_1939_);
lean_ctor_set(v___x_1968_, 1, v___x_1966_);
lean_ctor_set_uint8(v___x_1968_, sizeof(void*)*2, v___x_1967_);
v___x_1969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1969_, 0, v___x_1968_);
if (v_isShared_1965_ == 0)
{
lean_ctor_set(v___x_1964_, 0, v___x_1969_);
v___x_1971_ = v___x_1964_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v___x_1969_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
return v___x_1971_;
}
}
else
{
lean_object* v_val_1973_; lean_object* v___x_1975_; uint8_t v_isShared_1976_; uint8_t v_isSharedCheck_2002_; 
lean_del_object(v___x_1964_);
lean_dec_ref(v_e_1939_);
v_val_1973_ = lean_ctor_get(v_a_1962_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v_a_1962_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1975_ = v_a_1962_;
v_isShared_1976_ = v_isSharedCheck_2002_;
goto v_resetjp_1974_;
}
else
{
lean_inc(v_val_1973_);
lean_dec(v_a_1962_);
v___x_1975_ = lean_box(0);
v_isShared_1976_ = v_isSharedCheck_2002_;
goto v_resetjp_1974_;
}
v_resetjp_1974_:
{
lean_object* v___x_1977_; 
v___x_1977_ = l_Lean_Meta_AC_buildNormProof(v_val_1973_, v_l_1955_, v_r_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_);
if (lean_obj_tag(v___x_1977_) == 0)
{
lean_object* v_a_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_1993_; 
v_a_1978_ = lean_ctor_get(v___x_1977_, 0);
v_isSharedCheck_1993_ = !lean_is_exclusive(v___x_1977_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1980_ = v___x_1977_;
v_isShared_1981_ = v_isSharedCheck_1993_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_a_1978_);
lean_dec(v___x_1977_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_1993_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
lean_object* v_fst_1982_; lean_object* v_snd_1983_; lean_object* v___x_1985_; 
v_fst_1982_ = lean_ctor_get(v_a_1978_, 0);
lean_inc(v_fst_1982_);
v_snd_1983_ = lean_ctor_get(v_a_1978_, 1);
lean_inc(v_snd_1983_);
lean_dec(v_a_1978_);
if (v_isShared_1976_ == 0)
{
lean_ctor_set(v___x_1975_, 0, v_fst_1982_);
v___x_1985_ = v___x_1975_;
goto v_reusejp_1984_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_fst_1982_);
v___x_1985_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1984_;
}
v_reusejp_1984_:
{
uint8_t v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1990_; 
v___x_1986_ = 1;
v___x_1987_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1987_, 0, v_snd_1983_);
lean_ctor_set(v___x_1987_, 1, v___x_1985_);
lean_ctor_set_uint8(v___x_1987_, sizeof(void*)*2, v___x_1986_);
v___x_1988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1988_, 0, v___x_1987_);
if (v_isShared_1981_ == 0)
{
lean_ctor_set(v___x_1980_, 0, v___x_1988_);
v___x_1990_ = v___x_1980_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v___x_1988_);
v___x_1990_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
return v___x_1990_;
}
}
}
}
else
{
lean_object* v_a_1994_; lean_object* v___x_1996_; uint8_t v_isShared_1997_; uint8_t v_isSharedCheck_2001_; 
lean_del_object(v___x_1975_);
v_a_1994_ = lean_ctor_get(v___x_1977_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v___x_1977_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1996_ = v___x_1977_;
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
else
{
lean_inc(v_a_1994_);
lean_dec(v___x_1977_);
v___x_1996_ = lean_box(0);
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
v_resetjp_1995_:
{
lean_object* v___x_1999_; 
if (v_isShared_1997_ == 0)
{
v___x_1999_ = v___x_1996_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v_a_1994_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2011_; 
lean_dec_ref(v_r_1956_);
lean_dec_ref(v_l_1955_);
lean_dec_ref(v_e_1939_);
v_a_2004_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_2011_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_2011_ == 0)
{
v___x_2006_ = v___x_1961_;
v_isShared_2007_ = v_isSharedCheck_2011_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_a_2004_);
lean_dec(v___x_1961_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2011_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v___x_2009_; 
if (v_isShared_2007_ == 0)
{
v___x_2009_ = v___x_2006_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v_a_2004_);
v___x_2009_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
return v___x_2009_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_post___redArg___boxed(lean_object* v_e_2100_, lean_object* v_a_2101_, lean_object* v_a_2102_, lean_object* v_a_2103_, lean_object* v_a_2104_, lean_object* v_a_2105_, lean_object* v_a_2106_){
_start:
{
lean_object* v_res_2107_; 
v_res_2107_ = l_Lean_Meta_AC_post___redArg(v_e_2100_, v_a_2101_, v_a_2102_, v_a_2103_, v_a_2104_, v_a_2105_);
lean_dec(v_a_2105_);
lean_dec_ref(v_a_2104_);
lean_dec(v_a_2103_);
lean_dec_ref(v_a_2102_);
lean_dec_ref(v_a_2101_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_post(lean_object* v_e_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_){
_start:
{
lean_object* v___x_2117_; 
v___x_2117_ = l_Lean_Meta_AC_post___redArg(v_e_2108_, v_a_2110_, v_a_2112_, v_a_2113_, v_a_2114_, v_a_2115_);
return v___x_2117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_post___boxed(lean_object* v_e_2118_, lean_object* v_a_2119_, lean_object* v_a_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_, lean_object* v_a_2126_){
_start:
{
lean_object* v_res_2127_; 
v_res_2127_ = l_Lean_Meta_AC_post(v_e_2118_, v_a_2119_, v_a_2120_, v_a_2121_, v_a_2122_, v_a_2123_, v_a_2124_, v_a_2125_);
lean_dec(v_a_2125_);
lean_dec_ref(v_a_2124_);
lean_dec(v_a_2123_);
lean_dec_ref(v_a_2122_);
lean_dec(v_a_2121_);
lean_dec_ref(v_a_2120_);
lean_dec(v_a_2119_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___redArg(lean_object* v_e_2128_, lean_object* v___y_2129_){
_start:
{
uint8_t v___x_2131_; 
v___x_2131_ = l_Lean_Expr_hasMVar(v_e_2128_);
if (v___x_2131_ == 0)
{
lean_object* v___x_2132_; 
v___x_2132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2132_, 0, v_e_2128_);
return v___x_2132_;
}
else
{
lean_object* v___x_2133_; lean_object* v_mctx_2134_; lean_object* v___x_2135_; lean_object* v_fst_2136_; lean_object* v_snd_2137_; lean_object* v___x_2138_; lean_object* v_cache_2139_; lean_object* v_zetaDeltaFVarIds_2140_; lean_object* v_postponed_2141_; lean_object* v_diag_2142_; lean_object* v___x_2144_; uint8_t v_isShared_2145_; uint8_t v_isSharedCheck_2151_; 
v___x_2133_ = lean_st_ref_get(v___y_2129_);
v_mctx_2134_ = lean_ctor_get(v___x_2133_, 0);
lean_inc_ref(v_mctx_2134_);
lean_dec(v___x_2133_);
v___x_2135_ = l_Lean_instantiateMVarsCore(v_mctx_2134_, v_e_2128_);
v_fst_2136_ = lean_ctor_get(v___x_2135_, 0);
lean_inc(v_fst_2136_);
v_snd_2137_ = lean_ctor_get(v___x_2135_, 1);
lean_inc(v_snd_2137_);
lean_dec_ref(v___x_2135_);
v___x_2138_ = lean_st_ref_take(v___y_2129_);
v_cache_2139_ = lean_ctor_get(v___x_2138_, 1);
v_zetaDeltaFVarIds_2140_ = lean_ctor_get(v___x_2138_, 2);
v_postponed_2141_ = lean_ctor_get(v___x_2138_, 3);
v_diag_2142_ = lean_ctor_get(v___x_2138_, 4);
v_isSharedCheck_2151_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2151_ == 0)
{
lean_object* v_unused_2152_; 
v_unused_2152_ = lean_ctor_get(v___x_2138_, 0);
lean_dec(v_unused_2152_);
v___x_2144_ = v___x_2138_;
v_isShared_2145_ = v_isSharedCheck_2151_;
goto v_resetjp_2143_;
}
else
{
lean_inc(v_diag_2142_);
lean_inc(v_postponed_2141_);
lean_inc(v_zetaDeltaFVarIds_2140_);
lean_inc(v_cache_2139_);
lean_dec(v___x_2138_);
v___x_2144_ = lean_box(0);
v_isShared_2145_ = v_isSharedCheck_2151_;
goto v_resetjp_2143_;
}
v_resetjp_2143_:
{
lean_object* v___x_2147_; 
if (v_isShared_2145_ == 0)
{
lean_ctor_set(v___x_2144_, 0, v_snd_2137_);
v___x_2147_ = v___x_2144_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v_snd_2137_);
lean_ctor_set(v_reuseFailAlloc_2150_, 1, v_cache_2139_);
lean_ctor_set(v_reuseFailAlloc_2150_, 2, v_zetaDeltaFVarIds_2140_);
lean_ctor_set(v_reuseFailAlloc_2150_, 3, v_postponed_2141_);
lean_ctor_set(v_reuseFailAlloc_2150_, 4, v_diag_2142_);
v___x_2147_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
lean_object* v___x_2148_; lean_object* v___x_2149_; 
v___x_2148_ = lean_st_ref_set(v___y_2129_, v___x_2147_);
v___x_2149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2149_, 0, v_fst_2136_);
return v___x_2149_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___redArg___boxed(lean_object* v_e_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_){
_start:
{
lean_object* v_res_2156_; 
v_res_2156_ = l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___redArg(v_e_2153_, v___y_2154_);
lean_dec(v___y_2154_);
return v_res_2156_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0(lean_object* v_e_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_){
_start:
{
lean_object* v___x_2163_; 
v___x_2163_ = l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___redArg(v_e_2157_, v___y_2159_);
return v___x_2163_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___boxed(lean_object* v_e_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_){
_start:
{
lean_object* v_res_2170_; 
v_res_2170_ = l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0(v_e_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_);
lean_dec(v___y_2168_);
lean_dec_ref(v___y_2167_);
lean_dec(v___y_2166_);
lean_dec_ref(v___y_2165_);
return v_res_2170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__0(lean_object* v_x_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_){
_start:
{
lean_object* v___x_2182_; lean_object* v___x_2183_; 
v___x_2182_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___lam__0___closed__0));
v___x_2183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2183_, 0, v___x_2182_);
return v___x_2183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__0___boxed(lean_object* v_x_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_){
_start:
{
lean_object* v_res_2193_; 
v_res_2193_ = l_Lean_Meta_AC_rewriteUnnormalized___lam__0(v_x_2184_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_);
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2190_);
lean_dec(v___y_2189_);
lean_dec_ref(v___y_2188_);
lean_dec(v___y_2187_);
lean_dec_ref(v___y_2186_);
lean_dec(v___y_2185_);
lean_dec_ref(v_x_2184_);
return v_res_2193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__1(lean_object* v_x_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_){
_start:
{
lean_object* v___x_2205_; lean_object* v___x_2206_; 
v___x_2205_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___lam__1___closed__0));
v___x_2206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2206_, 0, v___x_2205_);
return v___x_2206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__1___boxed(lean_object* v_x_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_){
_start:
{
lean_object* v_res_2216_; 
v_res_2216_ = l_Lean_Meta_AC_rewriteUnnormalized___lam__1(v_x_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_);
lean_dec(v___y_2214_);
lean_dec_ref(v___y_2213_);
lean_dec(v___y_2212_);
lean_dec_ref(v___y_2211_);
lean_dec(v___y_2210_);
lean_dec_ref(v___y_2209_);
lean_dec(v___y_2208_);
lean_dec_ref(v_x_2207_);
return v_res_2216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__2(lean_object* v_e_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_){
_start:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; 
v___x_2226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2226_, 0, v_e_2217_);
v___x_2227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2227_, 0, v___x_2226_);
return v___x_2227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__2___boxed(lean_object* v_e_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_){
_start:
{
lean_object* v_res_2237_; 
v_res_2237_ = l_Lean_Meta_AC_rewriteUnnormalized___lam__2(v_e_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_);
lean_dec(v___y_2235_);
lean_dec_ref(v___y_2234_);
lean_dec(v___y_2233_);
lean_dec_ref(v___y_2232_);
lean_dec(v___y_2231_);
lean_dec_ref(v___y_2230_);
lean_dec(v___y_2229_);
return v_res_2237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__3(lean_object* v_x_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_){
_start:
{
lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2247_ = lean_box(0);
v___x_2248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2248_, 0, v___x_2247_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___lam__3___boxed(lean_object* v_x_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_){
_start:
{
lean_object* v_res_2258_; 
v_res_2258_ = l_Lean_Meta_AC_rewriteUnnormalized___lam__3(v_x_2249_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_);
lean_dec(v___y_2256_);
lean_dec_ref(v___y_2255_);
lean_dec(v___y_2254_);
lean_dec_ref(v___y_2253_);
lean_dec(v___y_2252_);
lean_dec_ref(v___y_2251_);
lean_dec(v___y_2250_);
lean_dec_ref(v_x_2249_);
return v_res_2258_;
}
}
static lean_object* _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__5(void){
_start:
{
lean_object* v___x_2265_; 
v___x_2265_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2265_;
}
}
static lean_object* _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__6(void){
_start:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2266_ = lean_obj_once(&l_Lean_Meta_AC_rewriteUnnormalized___closed__5, &l_Lean_Meta_AC_rewriteUnnormalized___closed__5_once, _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__5);
v___x_2267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2267_, 0, v___x_2266_);
return v___x_2267_;
}
}
static lean_object* _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__7(void){
_start:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2268_ = lean_unsigned_to_nat(0u);
v___x_2269_ = lean_obj_once(&l_Lean_Meta_AC_rewriteUnnormalized___closed__6, &l_Lean_Meta_AC_rewriteUnnormalized___closed__6_once, _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__6);
v___x_2270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2269_);
lean_ctor_set(v___x_2270_, 1, v___x_2268_);
return v___x_2270_;
}
}
static lean_object* _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__8(void){
_start:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2271_ = lean_unsigned_to_nat(32u);
v___x_2272_ = lean_mk_empty_array_with_capacity(v___x_2271_);
v___x_2273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2273_, 0, v___x_2272_);
return v___x_2273_;
}
}
static lean_object* _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__9(void){
_start:
{
size_t v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; 
v___x_2274_ = ((size_t)5ULL);
v___x_2275_ = lean_unsigned_to_nat(0u);
v___x_2276_ = lean_unsigned_to_nat(32u);
v___x_2277_ = lean_mk_empty_array_with_capacity(v___x_2276_);
v___x_2278_ = lean_obj_once(&l_Lean_Meta_AC_rewriteUnnormalized___closed__8, &l_Lean_Meta_AC_rewriteUnnormalized___closed__8_once, _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__8);
v___x_2279_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2279_, 0, v___x_2278_);
lean_ctor_set(v___x_2279_, 1, v___x_2277_);
lean_ctor_set(v___x_2279_, 2, v___x_2275_);
lean_ctor_set(v___x_2279_, 3, v___x_2275_);
lean_ctor_set_usize(v___x_2279_, 4, v___x_2274_);
return v___x_2279_;
}
}
static lean_object* _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__10(void){
_start:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2280_ = lean_obj_once(&l_Lean_Meta_AC_rewriteUnnormalized___closed__9, &l_Lean_Meta_AC_rewriteUnnormalized___closed__9_once, _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__9);
v___x_2281_ = lean_obj_once(&l_Lean_Meta_AC_rewriteUnnormalized___closed__6, &l_Lean_Meta_AC_rewriteUnnormalized___closed__6_once, _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__6);
v___x_2282_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2282_, 0, v___x_2281_);
lean_ctor_set(v___x_2282_, 1, v___x_2281_);
lean_ctor_set(v___x_2282_, 2, v___x_2281_);
lean_ctor_set(v___x_2282_, 3, v___x_2280_);
return v___x_2282_;
}
}
static lean_object* _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__11(void){
_start:
{
lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2283_ = lean_obj_once(&l_Lean_Meta_AC_rewriteUnnormalized___closed__10, &l_Lean_Meta_AC_rewriteUnnormalized___closed__10_once, _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__10);
v___x_2284_ = lean_obj_once(&l_Lean_Meta_AC_rewriteUnnormalized___closed__7, &l_Lean_Meta_AC_rewriteUnnormalized___closed__7_once, _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__7);
v___x_2285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2284_);
lean_ctor_set(v___x_2285_, 1, v___x_2283_);
return v___x_2285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized(lean_object* v_mvarId_2294_, lean_object* v_a_2295_, lean_object* v_a_2296_, lean_object* v_a_2297_, lean_object* v_a_2298_){
_start:
{
lean_object* v___x_2300_; 
v___x_2300_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v_a_2298_);
if (lean_obj_tag(v___x_2300_) == 0)
{
lean_object* v_a_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; 
v_a_2301_ = lean_ctor_get(v___x_2300_, 0);
lean_inc(v_a_2301_);
lean_dec_ref(v___x_2300_);
v___x_2302_ = l_Lean_Meta_Simp_neutralConfig;
v___x_2303_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___closed__0));
v___x_2304_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_2302_, v___x_2303_, v_a_2301_, v_a_2295_, v_a_2297_, v_a_2298_);
if (lean_obj_tag(v___x_2304_) == 0)
{
lean_object* v_a_2305_; lean_object* v___x_2306_; 
v_a_2305_ = lean_ctor_get(v___x_2304_, 0);
lean_inc(v_a_2305_);
lean_dec_ref(v___x_2304_);
lean_inc(v_mvarId_2294_);
v___x_2306_ = l_Lean_MVarId_getType(v_mvarId_2294_, v_a_2295_, v_a_2296_, v_a_2297_, v_a_2298_);
if (lean_obj_tag(v___x_2306_) == 0)
{
lean_object* v_a_2307_; lean_object* v___x_2308_; lean_object* v_a_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v_a_2307_ = lean_ctor_get(v___x_2306_, 0);
lean_inc(v_a_2307_);
lean_dec_ref(v___x_2306_);
v___x_2308_ = l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___redArg(v_a_2307_, v_a_2296_);
v_a_2309_ = lean_ctor_get(v___x_2308_, 0);
lean_inc_n(v_a_2309_, 2);
lean_dec_ref(v___x_2308_);
v___x_2310_ = lean_obj_once(&l_Lean_Meta_AC_rewriteUnnormalized___closed__11, &l_Lean_Meta_AC_rewriteUnnormalized___closed__11_once, _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__11);
v___x_2311_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___closed__13));
v___x_2312_ = l_Lean_Meta_Simp_main(v_a_2309_, v_a_2305_, v___x_2310_, v___x_2311_, v_a_2295_, v_a_2296_, v_a_2297_, v_a_2298_);
if (lean_obj_tag(v___x_2312_) == 0)
{
lean_object* v_a_2313_; lean_object* v_fst_2314_; lean_object* v___x_2315_; 
v_a_2313_ = lean_ctor_get(v___x_2312_, 0);
lean_inc(v_a_2313_);
lean_dec_ref(v___x_2312_);
v_fst_2314_ = lean_ctor_get(v_a_2313_, 0);
lean_inc(v_fst_2314_);
lean_dec(v_a_2313_);
v___x_2315_ = l_Lean_Meta_applySimpResultToTarget(v_mvarId_2294_, v_a_2309_, v_fst_2314_, v_a_2295_, v_a_2296_, v_a_2297_, v_a_2298_);
lean_dec(v_a_2309_);
return v___x_2315_;
}
else
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
lean_dec(v_a_2309_);
lean_dec(v_mvarId_2294_);
v_a_2316_ = lean_ctor_get(v___x_2312_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2312_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2318_ = v___x_2312_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___x_2312_);
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
lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2331_; 
lean_dec(v_a_2305_);
lean_dec(v_mvarId_2294_);
v_a_2324_ = lean_ctor_get(v___x_2306_, 0);
v_isSharedCheck_2331_ = !lean_is_exclusive(v___x_2306_);
if (v_isSharedCheck_2331_ == 0)
{
v___x_2326_ = v___x_2306_;
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_dec(v___x_2306_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v___x_2329_; 
if (v_isShared_2327_ == 0)
{
v___x_2329_ = v___x_2326_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v_a_2324_);
v___x_2329_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
return v___x_2329_;
}
}
}
}
else
{
lean_object* v_a_2332_; lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2339_; 
lean_dec(v_mvarId_2294_);
v_a_2332_ = lean_ctor_get(v___x_2304_, 0);
v_isSharedCheck_2339_ = !lean_is_exclusive(v___x_2304_);
if (v_isSharedCheck_2339_ == 0)
{
v___x_2334_ = v___x_2304_;
v_isShared_2335_ = v_isSharedCheck_2339_;
goto v_resetjp_2333_;
}
else
{
lean_inc(v_a_2332_);
lean_dec(v___x_2304_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2339_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
lean_object* v___x_2337_; 
if (v_isShared_2335_ == 0)
{
v___x_2337_ = v___x_2334_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v_a_2332_);
v___x_2337_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
return v___x_2337_;
}
}
}
}
else
{
lean_object* v_a_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2347_; 
lean_dec(v_mvarId_2294_);
v_a_2340_ = lean_ctor_get(v___x_2300_, 0);
v_isSharedCheck_2347_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2347_ == 0)
{
v___x_2342_ = v___x_2300_;
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
else
{
lean_inc(v_a_2340_);
lean_dec(v___x_2300_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2347_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v___x_2345_; 
if (v_isShared_2343_ == 0)
{
v___x_2345_ = v___x_2342_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v_a_2340_);
v___x_2345_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
return v___x_2345_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalized___boxed(lean_object* v_mvarId_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_){
_start:
{
lean_object* v_res_2354_; 
v_res_2354_ = l_Lean_Meta_AC_rewriteUnnormalized(v_mvarId_2348_, v_a_2349_, v_a_2350_, v_a_2351_, v_a_2352_);
lean_dec(v_a_2352_);
lean_dec_ref(v_a_2351_);
lean_dec(v_a_2350_);
lean_dec_ref(v_a_2349_);
return v_res_2354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalizedRefl(lean_object* v_goal_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_, lean_object* v_a_2358_, lean_object* v_a_2359_){
_start:
{
lean_object* v___x_2361_; 
v___x_2361_ = l_Lean_Meta_AC_rewriteUnnormalized(v_goal_2355_, v_a_2356_, v_a_2357_, v_a_2358_, v_a_2359_);
if (lean_obj_tag(v___x_2361_) == 0)
{
lean_object* v_a_2362_; uint8_t v___x_2363_; lean_object* v___x_2364_; 
v_a_2362_ = lean_ctor_get(v___x_2361_, 0);
lean_inc(v_a_2362_);
lean_dec_ref(v___x_2361_);
v___x_2363_ = 1;
v___x_2364_ = l_Lean_MVarId_refl(v_a_2362_, v___x_2363_, v_a_2356_, v_a_2357_, v_a_2358_, v_a_2359_);
return v___x_2364_;
}
else
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2372_; 
v_a_2365_ = lean_ctor_get(v___x_2361_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2361_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2367_ = v___x_2361_;
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v___x_2361_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2370_; 
if (v_isShared_2368_ == 0)
{
v___x_2370_ = v___x_2367_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_a_2365_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
return v___x_2370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_rewriteUnnormalizedRefl___boxed(lean_object* v_goal_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_, lean_object* v_a_2377_, lean_object* v_a_2378_){
_start:
{
lean_object* v_res_2379_; 
v_res_2379_ = l_Lean_Meta_AC_rewriteUnnormalizedRefl(v_goal_2373_, v_a_2374_, v_a_2375_, v_a_2376_, v_a_2377_);
lean_dec(v_a_2377_);
lean_dec_ref(v_a_2376_);
lean_dec(v_a_2375_);
lean_dec_ref(v_a_2374_);
return v_res_2379_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg___lam__0(lean_object* v_x_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_){
_start:
{
lean_object* v___x_2390_; 
lean_inc(v___y_2384_);
lean_inc_ref(v___y_2383_);
lean_inc(v___y_2382_);
lean_inc_ref(v___y_2381_);
v___x_2390_ = lean_apply_9(v_x_2380_, v___y_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, lean_box(0));
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg___lam__0___boxed(lean_object* v_x_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_){
_start:
{
lean_object* v_res_2401_; 
v_res_2401_ = l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg___lam__0(v_x_2391_, v___y_2392_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
lean_dec(v___y_2395_);
lean_dec_ref(v___y_2394_);
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
return v_res_2401_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg(lean_object* v_mvarId_2402_, lean_object* v_x_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_){
_start:
{
lean_object* v___f_2413_; lean_object* v___x_2414_; 
lean_inc(v___y_2407_);
lean_inc_ref(v___y_2406_);
lean_inc(v___y_2405_);
lean_inc_ref(v___y_2404_);
v___f_2413_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_2413_, 0, v_x_2403_);
lean_closure_set(v___f_2413_, 1, v___y_2404_);
lean_closure_set(v___f_2413_, 2, v___y_2405_);
lean_closure_set(v___f_2413_, 3, v___y_2406_);
lean_closure_set(v___f_2413_, 4, v___y_2407_);
v___x_2414_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2402_, v___f_2413_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_);
if (lean_obj_tag(v___x_2414_) == 0)
{
return v___x_2414_;
}
else
{
lean_object* v_a_2415_; lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2422_; 
v_a_2415_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2417_ = v___x_2414_;
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
else
{
lean_inc(v_a_2415_);
lean_dec(v___x_2414_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
v_resetjp_2416_:
{
lean_object* v___x_2420_; 
if (v_isShared_2418_ == 0)
{
v___x_2420_ = v___x_2417_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v_a_2415_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg___boxed(lean_object* v_mvarId_2423_, lean_object* v_x_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_){
_start:
{
lean_object* v_res_2434_; 
v_res_2434_ = l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg(v_mvarId_2423_, v_x_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_);
lean_dec(v___y_2432_);
lean_dec_ref(v___y_2431_);
lean_dec(v___y_2430_);
lean_dec_ref(v___y_2429_);
lean_dec(v___y_2428_);
lean_dec_ref(v___y_2427_);
lean_dec(v___y_2426_);
lean_dec_ref(v___y_2425_);
return v_res_2434_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0(lean_object* v_00_u03b1_2435_, lean_object* v_mvarId_2436_, lean_object* v_x_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_){
_start:
{
lean_object* v___x_2447_; 
v___x_2447_ = l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg(v_mvarId_2436_, v_x_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_);
return v___x_2447_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___boxed(lean_object* v_00_u03b1_2448_, lean_object* v_mvarId_2449_, lean_object* v_x_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_){
_start:
{
lean_object* v_res_2460_; 
v_res_2460_ = l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0(v_00_u03b1_2448_, v_mvarId_2449_, v_x_2450_, v___y_2451_, v___y_2452_, v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_);
lean_dec(v___y_2458_);
lean_dec_ref(v___y_2457_);
lean_dec(v___y_2456_);
lean_dec_ref(v___y_2455_);
lean_dec(v___y_2454_);
lean_dec_ref(v___y_2453_);
lean_dec(v___y_2452_);
lean_dec_ref(v___y_2451_);
return v_res_2460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___redArg___lam__0(lean_object* v_a_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_){
_start:
{
lean_object* v___x_2471_; 
v___x_2471_ = l_Lean_Meta_AC_rewriteUnnormalizedRefl(v_a_2461_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_);
return v___x_2471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___redArg___lam__0___boxed(lean_object* v_a_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_){
_start:
{
lean_object* v_res_2482_; 
v_res_2482_ = l_Lean_Meta_AC_acRflTactic___redArg___lam__0(v_a_2472_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_, v___y_2480_);
lean_dec(v___y_2480_);
lean_dec_ref(v___y_2479_);
lean_dec(v___y_2478_);
lean_dec_ref(v___y_2477_);
lean_dec(v___y_2476_);
lean_dec_ref(v___y_2475_);
lean_dec(v___y_2474_);
lean_dec_ref(v___y_2473_);
return v_res_2482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___redArg(lean_object* v_a_2483_, lean_object* v_a_2484_, lean_object* v_a_2485_, lean_object* v_a_2486_, lean_object* v_a_2487_, lean_object* v_a_2488_, lean_object* v_a_2489_, lean_object* v_a_2490_){
_start:
{
lean_object* v___x_2492_; 
v___x_2492_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_2484_, v_a_2487_, v_a_2488_, v_a_2489_, v_a_2490_);
if (lean_obj_tag(v___x_2492_) == 0)
{
lean_object* v_a_2493_; lean_object* v___f_2494_; lean_object* v___x_2495_; 
v_a_2493_ = lean_ctor_get(v___x_2492_, 0);
lean_inc_n(v_a_2493_, 2);
lean_dec_ref(v___x_2492_);
v___f_2494_ = lean_alloc_closure((void*)(l_Lean_Meta_AC_acRflTactic___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_2494_, 0, v_a_2493_);
v___x_2495_ = l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acRflTactic_spec__0___redArg(v_a_2493_, v___f_2494_, v_a_2483_, v_a_2484_, v_a_2485_, v_a_2486_, v_a_2487_, v_a_2488_, v_a_2489_, v_a_2490_);
return v___x_2495_;
}
else
{
lean_object* v_a_2496_; lean_object* v___x_2498_; uint8_t v_isShared_2499_; uint8_t v_isSharedCheck_2503_; 
v_a_2496_ = lean_ctor_get(v___x_2492_, 0);
v_isSharedCheck_2503_ = !lean_is_exclusive(v___x_2492_);
if (v_isSharedCheck_2503_ == 0)
{
v___x_2498_ = v___x_2492_;
v_isShared_2499_ = v_isSharedCheck_2503_;
goto v_resetjp_2497_;
}
else
{
lean_inc(v_a_2496_);
lean_dec(v___x_2492_);
v___x_2498_ = lean_box(0);
v_isShared_2499_ = v_isSharedCheck_2503_;
goto v_resetjp_2497_;
}
v_resetjp_2497_:
{
lean_object* v___x_2501_; 
if (v_isShared_2499_ == 0)
{
v___x_2501_ = v___x_2498_;
goto v_reusejp_2500_;
}
else
{
lean_object* v_reuseFailAlloc_2502_; 
v_reuseFailAlloc_2502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2502_, 0, v_a_2496_);
v___x_2501_ = v_reuseFailAlloc_2502_;
goto v_reusejp_2500_;
}
v_reusejp_2500_:
{
return v___x_2501_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___redArg___boxed(lean_object* v_a_2504_, lean_object* v_a_2505_, lean_object* v_a_2506_, lean_object* v_a_2507_, lean_object* v_a_2508_, lean_object* v_a_2509_, lean_object* v_a_2510_, lean_object* v_a_2511_, lean_object* v_a_2512_){
_start:
{
lean_object* v_res_2513_; 
v_res_2513_ = l_Lean_Meta_AC_acRflTactic___redArg(v_a_2504_, v_a_2505_, v_a_2506_, v_a_2507_, v_a_2508_, v_a_2509_, v_a_2510_, v_a_2511_);
lean_dec(v_a_2511_);
lean_dec_ref(v_a_2510_);
lean_dec(v_a_2509_);
lean_dec_ref(v_a_2508_);
lean_dec(v_a_2507_);
lean_dec_ref(v_a_2506_);
lean_dec(v_a_2505_);
lean_dec_ref(v_a_2504_);
return v_res_2513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic(lean_object* v_x_2514_, lean_object* v_a_2515_, lean_object* v_a_2516_, lean_object* v_a_2517_, lean_object* v_a_2518_, lean_object* v_a_2519_, lean_object* v_a_2520_, lean_object* v_a_2521_, lean_object* v_a_2522_){
_start:
{
lean_object* v___x_2524_; 
v___x_2524_ = l_Lean_Meta_AC_acRflTactic___redArg(v_a_2515_, v_a_2516_, v_a_2517_, v_a_2518_, v_a_2519_, v_a_2520_, v_a_2521_, v_a_2522_);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___boxed(lean_object* v_x_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_, lean_object* v_a_2531_, lean_object* v_a_2532_, lean_object* v_a_2533_, lean_object* v_a_2534_){
_start:
{
lean_object* v_res_2535_; 
v_res_2535_ = l_Lean_Meta_AC_acRflTactic(v_x_2525_, v_a_2526_, v_a_2527_, v_a_2528_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_, v_a_2533_);
lean_dec(v_a_2533_);
lean_dec_ref(v_a_2532_);
lean_dec(v_a_2531_);
lean_dec_ref(v_a_2530_);
lean_dec(v_a_2529_);
lean_dec_ref(v_a_2528_);
lean_dec(v_a_2527_);
lean_dec_ref(v_a_2526_);
lean_dec(v_x_2525_);
return v_res_2535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1(){
_start:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; 
v___x_2551_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2552_ = ((lean_object*)(l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__3));
v___x_2553_ = ((lean_object*)(l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5));
v___x_2554_ = lean_alloc_closure((void*)(l_Lean_Meta_AC_acRflTactic___boxed), 10, 0);
v___x_2555_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2551_, v___x_2552_, v___x_2553_, v___x_2554_);
return v___x_2555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___boxed(lean_object* v_a_2556_){
_start:
{
lean_object* v_res_2557_; 
v_res_2557_ = l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1();
return v_res_2557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3(){
_start:
{
lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; 
v___x_2584_ = ((lean_object*)(l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1___closed__5));
v___x_2585_ = ((lean_object*)(l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___closed__6));
v___x_2586_ = l_Lean_addBuiltinDeclarationRanges(v___x_2584_, v___x_2585_);
return v___x_2586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3___boxed(lean_object* v_a_2587_){
_start:
{
lean_object* v_res_2588_; 
v_res_2588_ = l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3();
return v_res_2588_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0___redArg(lean_object* v_mvarId_2589_, lean_object* v_x_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_){
_start:
{
lean_object* v___x_2596_; 
v___x_2596_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2589_, v_x_2590_, v___y_2591_, v___y_2592_, v___y_2593_, v___y_2594_);
if (lean_obj_tag(v___x_2596_) == 0)
{
lean_object* v_a_2597_; lean_object* v___x_2599_; uint8_t v_isShared_2600_; uint8_t v_isSharedCheck_2604_; 
v_a_2597_ = lean_ctor_get(v___x_2596_, 0);
v_isSharedCheck_2604_ = !lean_is_exclusive(v___x_2596_);
if (v_isSharedCheck_2604_ == 0)
{
v___x_2599_ = v___x_2596_;
v_isShared_2600_ = v_isSharedCheck_2604_;
goto v_resetjp_2598_;
}
else
{
lean_inc(v_a_2597_);
lean_dec(v___x_2596_);
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
v_reuseFailAlloc_2603_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2612_; 
v_a_2605_ = lean_ctor_get(v___x_2596_, 0);
v_isSharedCheck_2612_ = !lean_is_exclusive(v___x_2596_);
if (v_isSharedCheck_2612_ == 0)
{
v___x_2607_ = v___x_2596_;
v_isShared_2608_ = v_isSharedCheck_2612_;
goto v_resetjp_2606_;
}
else
{
lean_inc(v_a_2605_);
lean_dec(v___x_2596_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2612_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
lean_object* v___x_2610_; 
if (v_isShared_2608_ == 0)
{
v___x_2610_ = v___x_2607_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v_a_2605_);
v___x_2610_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
return v___x_2610_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0___redArg___boxed(lean_object* v_mvarId_2613_, lean_object* v_x_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_){
_start:
{
lean_object* v_res_2620_; 
v_res_2620_ = l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0___redArg(v_mvarId_2613_, v_x_2614_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_);
lean_dec(v___y_2618_);
lean_dec_ref(v___y_2617_);
lean_dec(v___y_2616_);
lean_dec_ref(v___y_2615_);
return v_res_2620_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0(lean_object* v_00_u03b1_2621_, lean_object* v_mvarId_2622_, lean_object* v_x_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_){
_start:
{
lean_object* v___x_2629_; 
v___x_2629_ = l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0___redArg(v_mvarId_2622_, v_x_2623_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_);
return v___x_2629_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0___boxed(lean_object* v_00_u03b1_2630_, lean_object* v_mvarId_2631_, lean_object* v_x_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_){
_start:
{
lean_object* v_res_2638_; 
v_res_2638_ = l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0(v_00_u03b1_2630_, v_mvarId_2631_, v_x_2632_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_);
lean_dec(v___y_2636_);
lean_dec_ref(v___y_2635_);
lean_dec(v___y_2634_);
lean_dec_ref(v___y_2633_);
return v_res_2638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypMeta___lam__4(lean_object* v_fvarId_2639_, lean_object* v___f_2640_, lean_object* v___f_2641_, lean_object* v___f_2642_, lean_object* v___f_2643_, lean_object* v_goal_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_){
_start:
{
lean_object* v___x_2650_; 
v___x_2650_ = l_Lean_Meta_getSimpCongrTheorems___redArg(v___y_2648_);
if (lean_obj_tag(v___x_2650_) == 0)
{
lean_object* v_a_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; 
v_a_2651_ = lean_ctor_get(v___x_2650_, 0);
lean_inc(v_a_2651_);
lean_dec_ref(v___x_2650_);
v___x_2652_ = l_Lean_Meta_Simp_neutralConfig;
v___x_2653_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___closed__0));
v___x_2654_ = l_Lean_Meta_Simp_mkContext___redArg(v___x_2652_, v___x_2653_, v_a_2651_, v___y_2645_, v___y_2647_, v___y_2648_);
if (lean_obj_tag(v___x_2654_) == 0)
{
lean_object* v_a_2655_; lean_object* v___x_2656_; 
v_a_2655_ = lean_ctor_get(v___x_2654_, 0);
lean_inc(v_a_2655_);
lean_dec_ref(v___x_2654_);
lean_inc(v_fvarId_2639_);
v___x_2656_ = l_Lean_FVarId_getType___redArg(v_fvarId_2639_, v___y_2645_, v___y_2647_, v___y_2648_);
if (lean_obj_tag(v___x_2656_) == 0)
{
lean_object* v_a_2657_; lean_object* v___x_2658_; lean_object* v_a_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; uint8_t v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; 
v_a_2657_ = lean_ctor_get(v___x_2656_, 0);
lean_inc(v_a_2657_);
lean_dec_ref(v___x_2656_);
v___x_2658_ = l_Lean_instantiateMVars___at___00Lean_Meta_AC_rewriteUnnormalized_spec__0___redArg(v_a_2657_, v___y_2646_);
v_a_2659_ = lean_ctor_get(v___x_2658_, 0);
lean_inc(v_a_2659_);
lean_dec_ref(v___x_2658_);
v___x_2660_ = lean_unsigned_to_nat(32u);
v___x_2661_ = lean_mk_empty_array_with_capacity(v___x_2660_);
lean_dec_ref(v___x_2661_);
v___x_2662_ = lean_obj_once(&l_Lean_Meta_AC_rewriteUnnormalized___closed__11, &l_Lean_Meta_AC_rewriteUnnormalized___closed__11_once, _init_l_Lean_Meta_AC_rewriteUnnormalized___closed__11);
v___x_2663_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___closed__12));
v___x_2664_ = 1;
v___x_2665_ = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(v___x_2665_, 0, v___f_2640_);
lean_ctor_set(v___x_2665_, 1, v___x_2663_);
lean_ctor_set(v___x_2665_, 2, v___f_2641_);
lean_ctor_set(v___x_2665_, 3, v___f_2642_);
lean_ctor_set(v___x_2665_, 4, v___f_2643_);
lean_ctor_set_uint8(v___x_2665_, sizeof(void*)*5, v___x_2664_);
v___x_2666_ = l_Lean_Meta_Simp_main(v_a_2659_, v_a_2655_, v___x_2662_, v___x_2665_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_);
if (lean_obj_tag(v___x_2666_) == 0)
{
lean_object* v_a_2667_; lean_object* v_fst_2668_; uint8_t v___x_2669_; lean_object* v___x_2670_; 
v_a_2667_ = lean_ctor_get(v___x_2666_, 0);
lean_inc(v_a_2667_);
lean_dec_ref(v___x_2666_);
v_fst_2668_ = lean_ctor_get(v_a_2667_, 0);
lean_inc(v_fst_2668_);
lean_dec(v_a_2667_);
v___x_2669_ = 0;
v___x_2670_ = l_Lean_Meta_applySimpResultToLocalDecl(v_goal_2644_, v_fvarId_2639_, v_fst_2668_, v___x_2669_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_);
if (lean_obj_tag(v___x_2670_) == 0)
{
lean_object* v_a_2671_; lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2691_; 
v_a_2671_ = lean_ctor_get(v___x_2670_, 0);
v_isSharedCheck_2691_ = !lean_is_exclusive(v___x_2670_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2673_ = v___x_2670_;
v_isShared_2674_ = v_isSharedCheck_2691_;
goto v_resetjp_2672_;
}
else
{
lean_inc(v_a_2671_);
lean_dec(v___x_2670_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2691_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
if (lean_obj_tag(v_a_2671_) == 0)
{
lean_object* v___x_2675_; lean_object* v___x_2677_; 
v___x_2675_ = lean_box(0);
if (v_isShared_2674_ == 0)
{
lean_ctor_set(v___x_2673_, 0, v___x_2675_);
v___x_2677_ = v___x_2673_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v___x_2675_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
else
{
lean_object* v_val_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2690_; 
v_val_2679_ = lean_ctor_get(v_a_2671_, 0);
v_isSharedCheck_2690_ = !lean_is_exclusive(v_a_2671_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2681_ = v_a_2671_;
v_isShared_2682_ = v_isSharedCheck_2690_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_val_2679_);
lean_dec(v_a_2671_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2690_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
lean_object* v_snd_2683_; lean_object* v___x_2685_; 
v_snd_2683_ = lean_ctor_get(v_val_2679_, 1);
lean_inc(v_snd_2683_);
lean_dec(v_val_2679_);
if (v_isShared_2682_ == 0)
{
lean_ctor_set(v___x_2681_, 0, v_snd_2683_);
v___x_2685_ = v___x_2681_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v_snd_2683_);
v___x_2685_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
lean_object* v___x_2687_; 
if (v_isShared_2674_ == 0)
{
lean_ctor_set(v___x_2673_, 0, v___x_2685_);
v___x_2687_ = v___x_2673_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2688_; 
v_reuseFailAlloc_2688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2688_, 0, v___x_2685_);
v___x_2687_ = v_reuseFailAlloc_2688_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
return v___x_2687_;
}
}
}
}
}
}
else
{
lean_object* v_a_2692_; lean_object* v___x_2694_; uint8_t v_isShared_2695_; uint8_t v_isSharedCheck_2699_; 
v_a_2692_ = lean_ctor_get(v___x_2670_, 0);
v_isSharedCheck_2699_ = !lean_is_exclusive(v___x_2670_);
if (v_isSharedCheck_2699_ == 0)
{
v___x_2694_ = v___x_2670_;
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
else
{
lean_inc(v_a_2692_);
lean_dec(v___x_2670_);
v___x_2694_ = lean_box(0);
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
v_resetjp_2693_:
{
lean_object* v___x_2697_; 
if (v_isShared_2695_ == 0)
{
v___x_2697_ = v___x_2694_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v_a_2692_);
v___x_2697_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
return v___x_2697_;
}
}
}
}
else
{
lean_object* v_a_2700_; lean_object* v___x_2702_; uint8_t v_isShared_2703_; uint8_t v_isSharedCheck_2707_; 
lean_dec(v_goal_2644_);
lean_dec(v_fvarId_2639_);
v_a_2700_ = lean_ctor_get(v___x_2666_, 0);
v_isSharedCheck_2707_ = !lean_is_exclusive(v___x_2666_);
if (v_isSharedCheck_2707_ == 0)
{
v___x_2702_ = v___x_2666_;
v_isShared_2703_ = v_isSharedCheck_2707_;
goto v_resetjp_2701_;
}
else
{
lean_inc(v_a_2700_);
lean_dec(v___x_2666_);
v___x_2702_ = lean_box(0);
v_isShared_2703_ = v_isSharedCheck_2707_;
goto v_resetjp_2701_;
}
v_resetjp_2701_:
{
lean_object* v___x_2705_; 
if (v_isShared_2703_ == 0)
{
v___x_2705_ = v___x_2702_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v_a_2700_);
v___x_2705_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
return v___x_2705_;
}
}
}
}
else
{
lean_object* v_a_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2715_; 
lean_dec(v_a_2655_);
lean_dec(v_goal_2644_);
lean_dec_ref(v___f_2643_);
lean_dec_ref(v___f_2642_);
lean_dec_ref(v___f_2641_);
lean_dec_ref(v___f_2640_);
lean_dec(v_fvarId_2639_);
v_a_2708_ = lean_ctor_get(v___x_2656_, 0);
v_isSharedCheck_2715_ = !lean_is_exclusive(v___x_2656_);
if (v_isSharedCheck_2715_ == 0)
{
v___x_2710_ = v___x_2656_;
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_a_2708_);
lean_dec(v___x_2656_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2713_; 
if (v_isShared_2711_ == 0)
{
v___x_2713_ = v___x_2710_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v_a_2708_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
return v___x_2713_;
}
}
}
}
else
{
lean_object* v_a_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2723_; 
lean_dec(v_goal_2644_);
lean_dec_ref(v___f_2643_);
lean_dec_ref(v___f_2642_);
lean_dec_ref(v___f_2641_);
lean_dec_ref(v___f_2640_);
lean_dec(v_fvarId_2639_);
v_a_2716_ = lean_ctor_get(v___x_2654_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2654_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2718_ = v___x_2654_;
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_a_2716_);
lean_dec(v___x_2654_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2721_; 
if (v_isShared_2719_ == 0)
{
v___x_2721_ = v___x_2718_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_a_2716_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
}
}
else
{
lean_object* v_a_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2731_; 
lean_dec(v_goal_2644_);
lean_dec_ref(v___f_2643_);
lean_dec_ref(v___f_2642_);
lean_dec_ref(v___f_2641_);
lean_dec_ref(v___f_2640_);
lean_dec(v_fvarId_2639_);
v_a_2724_ = lean_ctor_get(v___x_2650_, 0);
v_isSharedCheck_2731_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2731_ == 0)
{
v___x_2726_ = v___x_2650_;
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_a_2724_);
lean_dec(v___x_2650_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2729_; 
if (v_isShared_2727_ == 0)
{
v___x_2729_ = v___x_2726_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v_a_2724_);
v___x_2729_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
return v___x_2729_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypMeta___lam__4___boxed(lean_object* v_fvarId_2732_, lean_object* v___f_2733_, lean_object* v___f_2734_, lean_object* v___f_2735_, lean_object* v___f_2736_, lean_object* v_goal_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_){
_start:
{
lean_object* v_res_2743_; 
v_res_2743_ = l_Lean_Meta_AC_acNfHypMeta___lam__4(v_fvarId_2732_, v___f_2733_, v___f_2734_, v___f_2735_, v___f_2736_, v_goal_2737_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_);
lean_dec(v___y_2741_);
lean_dec_ref(v___y_2740_);
lean_dec(v___y_2739_);
lean_dec_ref(v___y_2738_);
return v_res_2743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypMeta(lean_object* v_goal_2744_, lean_object* v_fvarId_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_, lean_object* v_a_2748_, lean_object* v_a_2749_){
_start:
{
lean_object* v___f_2751_; lean_object* v___f_2752_; lean_object* v___f_2753_; lean_object* v___f_2754_; lean_object* v___f_2755_; lean_object* v___x_2756_; 
v___f_2751_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___closed__4));
v___f_2752_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___closed__3));
v___f_2753_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___closed__2));
v___f_2754_ = ((lean_object*)(l_Lean_Meta_AC_rewriteUnnormalized___closed__1));
lean_inc(v_goal_2744_);
v___f_2755_ = lean_alloc_closure((void*)(l_Lean_Meta_AC_acNfHypMeta___lam__4___boxed), 11, 6);
lean_closure_set(v___f_2755_, 0, v_fvarId_2745_);
lean_closure_set(v___f_2755_, 1, v___f_2754_);
lean_closure_set(v___f_2755_, 2, v___f_2753_);
lean_closure_set(v___f_2755_, 3, v___f_2752_);
lean_closure_set(v___f_2755_, 4, v___f_2751_);
lean_closure_set(v___f_2755_, 5, v_goal_2744_);
v___x_2756_ = l_Lean_MVarId_withContext___at___00Lean_Meta_AC_acNfHypMeta_spec__0___redArg(v_goal_2744_, v___f_2755_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_);
return v___x_2756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypMeta___boxed(lean_object* v_goal_2757_, lean_object* v_fvarId_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_, lean_object* v_a_2762_, lean_object* v_a_2763_){
_start:
{
lean_object* v_res_2764_; 
v_res_2764_ = l_Lean_Meta_AC_acNfHypMeta(v_goal_2757_, v_fvarId_2758_, v_a_2759_, v_a_2760_, v_a_2761_, v_a_2762_);
lean_dec(v_a_2762_);
lean_dec_ref(v_a_2761_);
lean_dec(v_a_2760_);
lean_dec_ref(v_a_2759_);
return v_res_2764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfTargetTactic___lam__0(lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_){
_start:
{
lean_object* v___x_2774_; 
v___x_2774_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2766_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_);
if (lean_obj_tag(v___x_2774_) == 0)
{
lean_object* v_a_2775_; lean_object* v___x_2776_; 
v_a_2775_ = lean_ctor_get(v___x_2774_, 0);
lean_inc(v_a_2775_);
lean_dec_ref(v___x_2774_);
v___x_2776_ = l_Lean_Meta_AC_rewriteUnnormalized(v_a_2775_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_);
if (lean_obj_tag(v___x_2776_) == 0)
{
lean_object* v_a_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; 
v_a_2777_ = lean_ctor_get(v___x_2776_, 0);
lean_inc(v_a_2777_);
lean_dec_ref(v___x_2776_);
v___x_2778_ = lean_box(0);
v___x_2779_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2779_, 0, v_a_2777_);
lean_ctor_set(v___x_2779_, 1, v___x_2778_);
v___x_2780_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2779_, v___y_2766_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_);
return v___x_2780_;
}
else
{
lean_object* v_a_2781_; lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2788_; 
v_a_2781_ = lean_ctor_get(v___x_2776_, 0);
v_isSharedCheck_2788_ = !lean_is_exclusive(v___x_2776_);
if (v_isSharedCheck_2788_ == 0)
{
v___x_2783_ = v___x_2776_;
v_isShared_2784_ = v_isSharedCheck_2788_;
goto v_resetjp_2782_;
}
else
{
lean_inc(v_a_2781_);
lean_dec(v___x_2776_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2788_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
lean_object* v___x_2786_; 
if (v_isShared_2784_ == 0)
{
v___x_2786_ = v___x_2783_;
goto v_reusejp_2785_;
}
else
{
lean_object* v_reuseFailAlloc_2787_; 
v_reuseFailAlloc_2787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2787_, 0, v_a_2781_);
v___x_2786_ = v_reuseFailAlloc_2787_;
goto v_reusejp_2785_;
}
v_reusejp_2785_:
{
return v___x_2786_;
}
}
}
}
else
{
lean_object* v_a_2789_; lean_object* v___x_2791_; uint8_t v_isShared_2792_; uint8_t v_isSharedCheck_2796_; 
v_a_2789_ = lean_ctor_get(v___x_2774_, 0);
v_isSharedCheck_2796_ = !lean_is_exclusive(v___x_2774_);
if (v_isSharedCheck_2796_ == 0)
{
v___x_2791_ = v___x_2774_;
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
else
{
lean_inc(v_a_2789_);
lean_dec(v___x_2774_);
v___x_2791_ = lean_box(0);
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
v_resetjp_2790_:
{
lean_object* v___x_2794_; 
if (v_isShared_2792_ == 0)
{
v___x_2794_ = v___x_2791_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v_a_2789_);
v___x_2794_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
return v___x_2794_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfTargetTactic___lam__0___boxed(lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_){
_start:
{
lean_object* v_res_2806_; 
v_res_2806_ = l_Lean_Meta_AC_acNfTargetTactic___lam__0(v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, v___y_2803_, v___y_2804_);
lean_dec(v___y_2804_);
lean_dec_ref(v___y_2803_);
lean_dec(v___y_2802_);
lean_dec_ref(v___y_2801_);
lean_dec(v___y_2800_);
lean_dec_ref(v___y_2799_);
lean_dec(v___y_2798_);
lean_dec_ref(v___y_2797_);
return v_res_2806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfTargetTactic(lean_object* v_a_2808_, lean_object* v_a_2809_, lean_object* v_a_2810_, lean_object* v_a_2811_, lean_object* v_a_2812_, lean_object* v_a_2813_, lean_object* v_a_2814_, lean_object* v_a_2815_){
_start:
{
lean_object* v___f_2817_; lean_object* v___x_2818_; 
v___f_2817_ = ((lean_object*)(l_Lean_Meta_AC_acNfTargetTactic___closed__0));
v___x_2818_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_2817_, v_a_2808_, v_a_2809_, v_a_2810_, v_a_2811_, v_a_2812_, v_a_2813_, v_a_2814_, v_a_2815_);
return v___x_2818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfTargetTactic___boxed(lean_object* v_a_2819_, lean_object* v_a_2820_, lean_object* v_a_2821_, lean_object* v_a_2822_, lean_object* v_a_2823_, lean_object* v_a_2824_, lean_object* v_a_2825_, lean_object* v_a_2826_, lean_object* v_a_2827_){
_start:
{
lean_object* v_res_2828_; 
v_res_2828_ = l_Lean_Meta_AC_acNfTargetTactic(v_a_2819_, v_a_2820_, v_a_2821_, v_a_2822_, v_a_2823_, v_a_2824_, v_a_2825_, v_a_2826_);
lean_dec(v_a_2826_);
lean_dec_ref(v_a_2825_);
lean_dec(v_a_2824_);
lean_dec_ref(v_a_2823_);
lean_dec(v_a_2822_);
lean_dec_ref(v_a_2821_);
lean_dec(v_a_2820_);
lean_dec_ref(v_a_2819_);
return v_res_2828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypTactic___lam__0(lean_object* v_fvarId_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_){
_start:
{
lean_object* v___x_2839_; 
v___x_2839_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2831_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_2839_) == 0)
{
lean_object* v_a_2840_; lean_object* v___x_2841_; 
v_a_2840_ = lean_ctor_get(v___x_2839_, 0);
lean_inc(v_a_2840_);
lean_dec_ref(v___x_2839_);
v___x_2841_ = l_Lean_Meta_AC_acNfHypMeta(v_a_2840_, v_fvarId_2829_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
if (lean_obj_tag(v___x_2841_) == 0)
{
lean_object* v_a_2842_; 
v_a_2842_ = lean_ctor_get(v___x_2841_, 0);
lean_inc(v_a_2842_);
lean_dec_ref(v___x_2841_);
if (lean_obj_tag(v_a_2842_) == 1)
{
lean_object* v_val_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; 
v_val_2843_ = lean_ctor_get(v_a_2842_, 0);
lean_inc(v_val_2843_);
lean_dec_ref(v_a_2842_);
v___x_2844_ = lean_box(0);
v___x_2845_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2845_, 0, v_val_2843_);
lean_ctor_set(v___x_2845_, 1, v___x_2844_);
v___x_2846_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2845_, v___y_2831_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
return v___x_2846_;
}
else
{
lean_object* v___x_2847_; lean_object* v___x_2848_; 
lean_dec(v_a_2842_);
v___x_2847_ = lean_box(0);
v___x_2848_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2847_, v___y_2831_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
return v___x_2848_;
}
}
else
{
lean_object* v_a_2849_; lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2856_; 
v_a_2849_ = lean_ctor_get(v___x_2841_, 0);
v_isSharedCheck_2856_ = !lean_is_exclusive(v___x_2841_);
if (v_isSharedCheck_2856_ == 0)
{
v___x_2851_ = v___x_2841_;
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
else
{
lean_inc(v_a_2849_);
lean_dec(v___x_2841_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v___x_2854_; 
if (v_isShared_2852_ == 0)
{
v___x_2854_ = v___x_2851_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v_a_2849_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
}
}
else
{
lean_object* v_a_2857_; lean_object* v___x_2859_; uint8_t v_isShared_2860_; uint8_t v_isSharedCheck_2864_; 
lean_dec(v_fvarId_2829_);
v_a_2857_ = lean_ctor_get(v___x_2839_, 0);
v_isSharedCheck_2864_ = !lean_is_exclusive(v___x_2839_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2859_ = v___x_2839_;
v_isShared_2860_ = v_isSharedCheck_2864_;
goto v_resetjp_2858_;
}
else
{
lean_inc(v_a_2857_);
lean_dec(v___x_2839_);
v___x_2859_ = lean_box(0);
v_isShared_2860_ = v_isSharedCheck_2864_;
goto v_resetjp_2858_;
}
v_resetjp_2858_:
{
lean_object* v___x_2862_; 
if (v_isShared_2860_ == 0)
{
v___x_2862_ = v___x_2859_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v_a_2857_);
v___x_2862_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
return v___x_2862_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypTactic___lam__0___boxed(lean_object* v_fvarId_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_){
_start:
{
lean_object* v_res_2875_; 
v_res_2875_ = l_Lean_Meta_AC_acNfHypTactic___lam__0(v_fvarId_2865_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec_ref(v___y_2870_);
lean_dec(v___y_2869_);
lean_dec_ref(v___y_2868_);
lean_dec(v___y_2867_);
lean_dec_ref(v___y_2866_);
return v_res_2875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypTactic(lean_object* v_fvarId_2876_, lean_object* v_a_2877_, lean_object* v_a_2878_, lean_object* v_a_2879_, lean_object* v_a_2880_, lean_object* v_a_2881_, lean_object* v_a_2882_, lean_object* v_a_2883_, lean_object* v_a_2884_){
_start:
{
lean_object* v___f_2886_; lean_object* v___x_2887_; 
v___f_2886_ = lean_alloc_closure((void*)(l_Lean_Meta_AC_acNfHypTactic___lam__0___boxed), 10, 1);
lean_closure_set(v___f_2886_, 0, v_fvarId_2876_);
v___x_2887_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_2886_, v_a_2877_, v_a_2878_, v_a_2879_, v_a_2880_, v_a_2881_, v_a_2882_, v_a_2883_, v_a_2884_);
return v___x_2887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_acNfHypTactic___boxed(lean_object* v_fvarId_2888_, lean_object* v_a_2889_, lean_object* v_a_2890_, lean_object* v_a_2891_, lean_object* v_a_2892_, lean_object* v_a_2893_, lean_object* v_a_2894_, lean_object* v_a_2895_, lean_object* v_a_2896_, lean_object* v_a_2897_){
_start:
{
lean_object* v_res_2898_; 
v_res_2898_ = l_Lean_Meta_AC_acNfHypTactic(v_fvarId_2888_, v_a_2889_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_, v_a_2895_, v_a_2896_);
lean_dec(v_a_2896_);
lean_dec_ref(v_a_2895_);
lean_dec(v_a_2894_);
lean_dec_ref(v_a_2893_);
lean_dec(v_a_2892_);
lean_dec_ref(v_a_2891_);
lean_dec(v_a_2890_);
lean_dec_ref(v_a_2889_);
return v_res_2898_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; 
v___x_2899_ = lean_box(0);
v___x_2900_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_2901_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2901_, 0, v___x_2900_);
lean_ctor_set(v___x_2901_, 1, v___x_2899_);
return v___x_2901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg(){
_start:
{
lean_object* v___x_2903_; lean_object* v___x_2904_; 
v___x_2903_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg___closed__0);
v___x_2904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2904_, 0, v___x_2903_);
return v___x_2904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg___boxed(lean_object* v___y_2905_){
_start:
{
lean_object* v_res_2906_; 
v_res_2906_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg();
return v_res_2906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0(lean_object* v_00_u03b1_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_){
_start:
{
lean_object* v___x_2917_; 
v___x_2917_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg();
return v___x_2917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___boxed(lean_object* v_00_u03b1_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_){
_start:
{
lean_object* v_res_2928_; 
v_res_2928_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0(v_00_u03b1_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_);
lean_dec(v___y_2926_);
lean_dec_ref(v___y_2925_);
lean_dec(v___y_2924_);
lean_dec_ref(v___y_2923_);
lean_dec(v___y_2922_);
lean_dec_ref(v___y_2921_);
lean_dec(v___y_2920_);
lean_dec_ref(v___y_2919_);
return v_res_2928_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_evalNf0_spec__1(lean_object* v_as_2929_, size_t v_i_2930_, size_t v_stop_2931_, lean_object* v_b_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_){
_start:
{
uint8_t v___x_2942_; 
v___x_2942_ = lean_usize_dec_eq(v_i_2930_, v_stop_2931_);
if (v___x_2942_ == 0)
{
lean_object* v___x_2943_; lean_object* v___x_2944_; 
v___x_2943_ = lean_array_uget_borrowed(v_as_2929_, v_i_2930_);
lean_inc(v___x_2943_);
v___x_2944_ = l_Lean_Meta_AC_acNfHypTactic(v___x_2943_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_);
if (lean_obj_tag(v___x_2944_) == 0)
{
lean_object* v_a_2945_; size_t v___x_2946_; size_t v___x_2947_; 
v_a_2945_ = lean_ctor_get(v___x_2944_, 0);
lean_inc(v_a_2945_);
lean_dec_ref(v___x_2944_);
v___x_2946_ = ((size_t)1ULL);
v___x_2947_ = lean_usize_add(v_i_2930_, v___x_2946_);
v_i_2930_ = v___x_2947_;
v_b_2932_ = v_a_2945_;
goto _start;
}
else
{
return v___x_2944_;
}
}
else
{
lean_object* v___x_2949_; 
v___x_2949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2949_, 0, v_b_2932_);
return v___x_2949_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_evalNf0_spec__1___boxed(lean_object* v_as_2950_, lean_object* v_i_2951_, lean_object* v_stop_2952_, lean_object* v_b_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_){
_start:
{
size_t v_i_boxed_2963_; size_t v_stop_boxed_2964_; lean_object* v_res_2965_; 
v_i_boxed_2963_ = lean_unbox_usize(v_i_2951_);
lean_dec(v_i_2951_);
v_stop_boxed_2964_ = lean_unbox_usize(v_stop_2952_);
lean_dec(v_stop_2952_);
v_res_2965_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_evalNf0_spec__1(v_as_2950_, v_i_boxed_2963_, v_stop_boxed_2964_, v_b_2953_, v___y_2954_, v___y_2955_, v___y_2956_, v___y_2957_, v___y_2958_, v___y_2959_, v___y_2960_, v___y_2961_);
lean_dec(v___y_2961_);
lean_dec_ref(v___y_2960_);
lean_dec(v___y_2959_);
lean_dec_ref(v___y_2958_);
lean_dec(v___y_2957_);
lean_dec_ref(v___y_2956_);
lean_dec(v___y_2955_);
lean_dec_ref(v___y_2954_);
lean_dec_ref(v_as_2950_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0___lam__0(lean_object* v___y_2966_, lean_object* v___x_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_){
_start:
{
if (lean_obj_tag(v___y_2966_) == 0)
{
lean_object* v___x_2977_; 
v___x_2977_ = l_Lean_Meta_AC_acNfTargetTactic(v___y_2968_, v___y_2969_, v___y_2970_, v___y_2971_, v___y_2972_, v___y_2973_, v___y_2974_, v___y_2975_);
if (lean_obj_tag(v___x_2977_) == 0)
{
lean_object* v___x_2978_; 
lean_dec_ref(v___x_2977_);
v___x_2978_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2969_, v___y_2972_, v___y_2973_, v___y_2974_, v___y_2975_);
if (lean_obj_tag(v___x_2978_) == 0)
{
lean_object* v_a_2979_; lean_object* v___x_2980_; 
v_a_2979_ = lean_ctor_get(v___x_2978_, 0);
lean_inc(v_a_2979_);
lean_dec_ref(v___x_2978_);
v___x_2980_ = l_Lean_MVarId_getNondepPropHyps(v_a_2979_, v___y_2972_, v___y_2973_, v___y_2974_, v___y_2975_);
if (lean_obj_tag(v___x_2980_) == 0)
{
lean_object* v_a_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_3001_; 
v_a_2981_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_3001_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_3001_ == 0)
{
v___x_2983_ = v___x_2980_;
v_isShared_2984_ = v_isSharedCheck_3001_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_a_2981_);
lean_dec(v___x_2980_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_3001_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
lean_object* v___x_2985_; lean_object* v___x_2986_; uint8_t v___x_2987_; 
v___x_2985_ = lean_array_get_size(v_a_2981_);
v___x_2986_ = lean_box(0);
v___x_2987_ = lean_nat_dec_lt(v___x_2967_, v___x_2985_);
if (v___x_2987_ == 0)
{
lean_object* v___x_2989_; 
lean_dec(v_a_2981_);
if (v_isShared_2984_ == 0)
{
lean_ctor_set(v___x_2983_, 0, v___x_2986_);
v___x_2989_ = v___x_2983_;
goto v_reusejp_2988_;
}
else
{
lean_object* v_reuseFailAlloc_2990_; 
v_reuseFailAlloc_2990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2990_, 0, v___x_2986_);
v___x_2989_ = v_reuseFailAlloc_2990_;
goto v_reusejp_2988_;
}
v_reusejp_2988_:
{
return v___x_2989_;
}
}
else
{
uint8_t v___x_2991_; 
v___x_2991_ = lean_nat_dec_le(v___x_2985_, v___x_2985_);
if (v___x_2991_ == 0)
{
if (v___x_2987_ == 0)
{
lean_object* v___x_2993_; 
lean_dec(v_a_2981_);
if (v_isShared_2984_ == 0)
{
lean_ctor_set(v___x_2983_, 0, v___x_2986_);
v___x_2993_ = v___x_2983_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v___x_2986_);
v___x_2993_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
return v___x_2993_;
}
}
else
{
size_t v___x_2995_; size_t v___x_2996_; lean_object* v___x_2997_; 
lean_del_object(v___x_2983_);
v___x_2995_ = ((size_t)0ULL);
v___x_2996_ = lean_usize_of_nat(v___x_2985_);
v___x_2997_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_evalNf0_spec__1(v_a_2981_, v___x_2995_, v___x_2996_, v___x_2986_, v___y_2968_, v___y_2969_, v___y_2970_, v___y_2971_, v___y_2972_, v___y_2973_, v___y_2974_, v___y_2975_);
lean_dec(v_a_2981_);
return v___x_2997_;
}
}
else
{
size_t v___x_2998_; size_t v___x_2999_; lean_object* v___x_3000_; 
lean_del_object(v___x_2983_);
v___x_2998_ = ((size_t)0ULL);
v___x_2999_ = lean_usize_of_nat(v___x_2985_);
v___x_3000_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_evalNf0_spec__1(v_a_2981_, v___x_2998_, v___x_2999_, v___x_2986_, v___y_2968_, v___y_2969_, v___y_2970_, v___y_2971_, v___y_2972_, v___y_2973_, v___y_2974_, v___y_2975_);
lean_dec(v_a_2981_);
return v___x_3000_;
}
}
}
}
else
{
lean_object* v_a_3002_; lean_object* v___x_3004_; uint8_t v_isShared_3005_; uint8_t v_isSharedCheck_3009_; 
v_a_3002_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_3009_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_3009_ == 0)
{
v___x_3004_ = v___x_2980_;
v_isShared_3005_ = v_isSharedCheck_3009_;
goto v_resetjp_3003_;
}
else
{
lean_inc(v_a_3002_);
lean_dec(v___x_2980_);
v___x_3004_ = lean_box(0);
v_isShared_3005_ = v_isSharedCheck_3009_;
goto v_resetjp_3003_;
}
v_resetjp_3003_:
{
lean_object* v___x_3007_; 
if (v_isShared_3005_ == 0)
{
v___x_3007_ = v___x_3004_;
goto v_reusejp_3006_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v_a_3002_);
v___x_3007_ = v_reuseFailAlloc_3008_;
goto v_reusejp_3006_;
}
v_reusejp_3006_:
{
return v___x_3007_;
}
}
}
}
else
{
lean_object* v_a_3010_; lean_object* v___x_3012_; uint8_t v_isShared_3013_; uint8_t v_isSharedCheck_3017_; 
v_a_3010_ = lean_ctor_get(v___x_2978_, 0);
v_isSharedCheck_3017_ = !lean_is_exclusive(v___x_2978_);
if (v_isSharedCheck_3017_ == 0)
{
v___x_3012_ = v___x_2978_;
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
else
{
lean_inc(v_a_3010_);
lean_dec(v___x_2978_);
v___x_3012_ = lean_box(0);
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
v_resetjp_3011_:
{
lean_object* v___x_3015_; 
if (v_isShared_3013_ == 0)
{
v___x_3015_ = v___x_3012_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v_a_3010_);
v___x_3015_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
return v___x_3015_;
}
}
}
}
else
{
return v___x_2977_;
}
}
else
{
lean_object* v_hypotheses_3018_; uint8_t v_type_3019_; lean_object* v___y_3021_; lean_object* v___y_3022_; lean_object* v___y_3023_; lean_object* v___y_3024_; lean_object* v___y_3025_; lean_object* v___y_3026_; lean_object* v___y_3027_; lean_object* v___y_3028_; 
v_hypotheses_3018_ = lean_ctor_get(v___y_2966_, 0);
lean_inc_ref(v_hypotheses_3018_);
v_type_3019_ = lean_ctor_get_uint8(v___y_2966_, sizeof(void*)*1);
lean_dec_ref(v___y_2966_);
if (v_type_3019_ == 0)
{
v___y_3021_ = v___y_2968_;
v___y_3022_ = v___y_2969_;
v___y_3023_ = v___y_2970_;
v___y_3024_ = v___y_2971_;
v___y_3025_ = v___y_2972_;
v___y_3026_ = v___y_2973_;
v___y_3027_ = v___y_2974_;
v___y_3028_ = v___y_2975_;
goto v___jp_3020_;
}
else
{
lean_object* v___x_3059_; 
v___x_3059_ = l_Lean_Meta_AC_acNfTargetTactic(v___y_2968_, v___y_2969_, v___y_2970_, v___y_2971_, v___y_2972_, v___y_2973_, v___y_2974_, v___y_2975_);
if (lean_obj_tag(v___x_3059_) == 0)
{
lean_dec_ref(v___x_3059_);
v___y_3021_ = v___y_2968_;
v___y_3022_ = v___y_2969_;
v___y_3023_ = v___y_2970_;
v___y_3024_ = v___y_2971_;
v___y_3025_ = v___y_2972_;
v___y_3026_ = v___y_2973_;
v___y_3027_ = v___y_2974_;
v___y_3028_ = v___y_2975_;
goto v___jp_3020_;
}
else
{
lean_dec_ref(v_hypotheses_3018_);
return v___x_3059_;
}
}
v___jp_3020_:
{
lean_object* v___x_3029_; 
v___x_3029_ = l_Lean_Elab_Tactic_getFVarIds(v_hypotheses_3018_, v___y_3021_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_, v___y_3026_, v___y_3027_, v___y_3028_);
if (lean_obj_tag(v___x_3029_) == 0)
{
lean_object* v_a_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3050_; 
v_a_3030_ = lean_ctor_get(v___x_3029_, 0);
v_isSharedCheck_3050_ = !lean_is_exclusive(v___x_3029_);
if (v_isSharedCheck_3050_ == 0)
{
v___x_3032_ = v___x_3029_;
v_isShared_3033_ = v_isSharedCheck_3050_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_a_3030_);
lean_dec(v___x_3029_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3050_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
lean_object* v___x_3034_; lean_object* v___x_3035_; uint8_t v___x_3036_; 
v___x_3034_ = lean_array_get_size(v_a_3030_);
v___x_3035_ = lean_box(0);
v___x_3036_ = lean_nat_dec_lt(v___x_2967_, v___x_3034_);
if (v___x_3036_ == 0)
{
lean_object* v___x_3038_; 
lean_dec(v_a_3030_);
if (v_isShared_3033_ == 0)
{
lean_ctor_set(v___x_3032_, 0, v___x_3035_);
v___x_3038_ = v___x_3032_;
goto v_reusejp_3037_;
}
else
{
lean_object* v_reuseFailAlloc_3039_; 
v_reuseFailAlloc_3039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3039_, 0, v___x_3035_);
v___x_3038_ = v_reuseFailAlloc_3039_;
goto v_reusejp_3037_;
}
v_reusejp_3037_:
{
return v___x_3038_;
}
}
else
{
uint8_t v___x_3040_; 
v___x_3040_ = lean_nat_dec_le(v___x_3034_, v___x_3034_);
if (v___x_3040_ == 0)
{
if (v___x_3036_ == 0)
{
lean_object* v___x_3042_; 
lean_dec(v_a_3030_);
if (v_isShared_3033_ == 0)
{
lean_ctor_set(v___x_3032_, 0, v___x_3035_);
v___x_3042_ = v___x_3032_;
goto v_reusejp_3041_;
}
else
{
lean_object* v_reuseFailAlloc_3043_; 
v_reuseFailAlloc_3043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3043_, 0, v___x_3035_);
v___x_3042_ = v_reuseFailAlloc_3043_;
goto v_reusejp_3041_;
}
v_reusejp_3041_:
{
return v___x_3042_;
}
}
else
{
size_t v___x_3044_; size_t v___x_3045_; lean_object* v___x_3046_; 
lean_del_object(v___x_3032_);
v___x_3044_ = ((size_t)0ULL);
v___x_3045_ = lean_usize_of_nat(v___x_3034_);
v___x_3046_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_evalNf0_spec__1(v_a_3030_, v___x_3044_, v___x_3045_, v___x_3035_, v___y_3021_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_, v___y_3026_, v___y_3027_, v___y_3028_);
lean_dec(v_a_3030_);
return v___x_3046_;
}
}
else
{
size_t v___x_3047_; size_t v___x_3048_; lean_object* v___x_3049_; 
lean_del_object(v___x_3032_);
v___x_3047_ = ((size_t)0ULL);
v___x_3048_ = lean_usize_of_nat(v___x_3034_);
v___x_3049_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_AC_evalNf0_spec__1(v_a_3030_, v___x_3047_, v___x_3048_, v___x_3035_, v___y_3021_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_, v___y_3026_, v___y_3027_, v___y_3028_);
lean_dec(v_a_3030_);
return v___x_3049_;
}
}
}
}
else
{
lean_object* v_a_3051_; lean_object* v___x_3053_; uint8_t v_isShared_3054_; uint8_t v_isSharedCheck_3058_; 
v_a_3051_ = lean_ctor_get(v___x_3029_, 0);
v_isSharedCheck_3058_ = !lean_is_exclusive(v___x_3029_);
if (v_isSharedCheck_3058_ == 0)
{
v___x_3053_ = v___x_3029_;
v_isShared_3054_ = v_isSharedCheck_3058_;
goto v_resetjp_3052_;
}
else
{
lean_inc(v_a_3051_);
lean_dec(v___x_3029_);
v___x_3053_ = lean_box(0);
v_isShared_3054_ = v_isSharedCheck_3058_;
goto v_resetjp_3052_;
}
v_resetjp_3052_:
{
lean_object* v___x_3056_; 
if (v_isShared_3054_ == 0)
{
v___x_3056_ = v___x_3053_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3057_; 
v_reuseFailAlloc_3057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3057_, 0, v_a_3051_);
v___x_3056_ = v_reuseFailAlloc_3057_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
return v___x_3056_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0___lam__0___boxed(lean_object* v___y_3060_, lean_object* v___x_3061_, lean_object* v___y_3062_, lean_object* v___y_3063_, lean_object* v___y_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_){
_start:
{
lean_object* v_res_3071_; 
v_res_3071_ = l_Lean_Meta_AC_evalNf0___lam__0(v___y_3060_, v___x_3061_, v___y_3062_, v___y_3063_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_);
lean_dec(v___y_3069_);
lean_dec_ref(v___y_3068_);
lean_dec(v___y_3067_);
lean_dec_ref(v___y_3066_);
lean_dec(v___y_3065_);
lean_dec_ref(v___y_3064_);
lean_dec(v___y_3063_);
lean_dec_ref(v___y_3062_);
lean_dec(v___x_3061_);
return v_res_3071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0(lean_object* v_stx_3080_, lean_object* v_a_3081_, lean_object* v_a_3082_, lean_object* v_a_3083_, lean_object* v_a_3084_, lean_object* v_a_3085_, lean_object* v_a_3086_, lean_object* v_a_3087_, lean_object* v_a_3088_){
_start:
{
lean_object* v___x_3090_; uint8_t v___x_3091_; 
v___x_3090_ = ((lean_object*)(l_Lean_Meta_AC_evalNf0___closed__1));
lean_inc(v_stx_3080_);
v___x_3091_ = l_Lean_Syntax_isOfKind(v_stx_3080_, v___x_3090_);
if (v___x_3091_ == 0)
{
lean_object* v___x_3092_; 
lean_dec(v_stx_3080_);
v___x_3092_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg();
return v___x_3092_;
}
else
{
lean_object* v___x_3093_; lean_object* v___y_3095_; lean_object* v___y_3096_; lean_object* v___y_3097_; lean_object* v___y_3098_; lean_object* v___y_3099_; lean_object* v___y_3100_; lean_object* v___y_3101_; lean_object* v___y_3102_; lean_object* v___y_3103_; lean_object* v___x_3106_; lean_object* v___x_3107_; uint8_t v___x_3108_; 
v___x_3093_ = lean_unsigned_to_nat(0u);
v___x_3106_ = lean_unsigned_to_nat(1u);
v___x_3107_ = l_Lean_Syntax_getArg(v_stx_3080_, v___x_3106_);
lean_dec(v_stx_3080_);
v___x_3108_ = l_Lean_Syntax_isNone(v___x_3107_);
if (v___x_3108_ == 0)
{
uint8_t v___x_3109_; 
lean_inc(v___x_3107_);
v___x_3109_ = l_Lean_Syntax_matchesNull(v___x_3107_, v___x_3106_);
if (v___x_3109_ == 0)
{
lean_object* v___x_3110_; 
lean_dec(v___x_3107_);
v___x_3110_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Meta_AC_evalNf0_spec__0___redArg();
return v___x_3110_;
}
else
{
lean_object* v_loc_x3f_3111_; lean_object* v___x_3112_; 
v_loc_x3f_3111_ = l_Lean_Syntax_getArg(v___x_3107_, v___x_3093_);
lean_dec(v___x_3107_);
v___x_3112_ = l_Lean_Elab_Tactic_expandLocation(v_loc_x3f_3111_);
lean_dec(v_loc_x3f_3111_);
v___y_3095_ = v_a_3087_;
v___y_3096_ = v_a_3083_;
v___y_3097_ = v_a_3085_;
v___y_3098_ = v_a_3081_;
v___y_3099_ = v_a_3088_;
v___y_3100_ = v_a_3084_;
v___y_3101_ = v_a_3086_;
v___y_3102_ = v_a_3082_;
v___y_3103_ = v___x_3112_;
goto v___jp_3094_;
}
}
else
{
lean_object* v___x_3113_; lean_object* v___x_3114_; 
lean_dec(v___x_3107_);
v___x_3113_ = ((lean_object*)(l_Lean_Meta_AC_evalNf0___closed__2));
v___x_3114_ = lean_alloc_ctor(1, 1, 1);
lean_ctor_set(v___x_3114_, 0, v___x_3113_);
lean_ctor_set_uint8(v___x_3114_, sizeof(void*)*1, v___x_3091_);
v___y_3095_ = v_a_3087_;
v___y_3096_ = v_a_3083_;
v___y_3097_ = v_a_3085_;
v___y_3098_ = v_a_3081_;
v___y_3099_ = v_a_3088_;
v___y_3100_ = v_a_3084_;
v___y_3101_ = v_a_3086_;
v___y_3102_ = v_a_3082_;
v___y_3103_ = v___x_3114_;
goto v___jp_3094_;
}
v___jp_3094_:
{
lean_object* v___y_3104_; lean_object* v___x_3105_; 
v___y_3104_ = lean_alloc_closure((void*)(l_Lean_Meta_AC_evalNf0___lam__0___boxed), 11, 2);
lean_closure_set(v___y_3104_, 0, v___y_3103_);
lean_closure_set(v___y_3104_, 1, v___x_3093_);
v___x_3105_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___y_3104_, v___y_3098_, v___y_3102_, v___y_3096_, v___y_3100_, v___y_3097_, v___y_3101_, v___y_3095_, v___y_3099_);
return v___x_3105_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0___boxed(lean_object* v_stx_3115_, lean_object* v_a_3116_, lean_object* v_a_3117_, lean_object* v_a_3118_, lean_object* v_a_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_, lean_object* v_a_3123_, lean_object* v_a_3124_){
_start:
{
lean_object* v_res_3125_; 
v_res_3125_ = l_Lean_Meta_AC_evalNf0(v_stx_3115_, v_a_3116_, v_a_3117_, v_a_3118_, v_a_3119_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_);
lean_dec(v_a_3123_);
lean_dec_ref(v_a_3122_);
lean_dec(v_a_3121_);
lean_dec_ref(v_a_3120_);
lean_dec(v_a_3119_);
lean_dec_ref(v_a_3118_);
lean_dec(v_a_3117_);
lean_dec_ref(v_a_3116_);
return v_res_3125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1(){
_start:
{
lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3133_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3134_ = ((lean_object*)(l_Lean_Meta_AC_evalNf0___closed__1));
v___x_3135_ = ((lean_object*)(l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___closed__1));
v___x_3136_ = lean_alloc_closure((void*)(l_Lean_Meta_AC_evalNf0___boxed), 10, 0);
v___x_3137_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3133_, v___x_3134_, v___x_3135_, v___x_3136_);
return v___x_3137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1___boxed(lean_object* v_a_3138_){
_start:
{
lean_object* v_res_3139_; 
v_res_3139_ = l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1();
return v_res_3139_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__21_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; 
v___x_3195_ = lean_unsigned_to_nat(4236260923u);
v___x_3196_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__20_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_));
v___x_3197_ = l_Lean_Name_num___override(v___x_3196_, v___x_3195_);
return v___x_3197_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__23_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; 
v___x_3199_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__22_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_));
v___x_3200_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__21_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__21_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__21_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3201_ = l_Lean_Name_str___override(v___x_3200_, v___x_3199_);
return v___x_3201_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__25_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; 
v___x_3203_ = ((lean_object*)(l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__24_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_));
v___x_3204_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__23_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__23_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__23_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3205_ = l_Lean_Name_str___override(v___x_3204_, v___x_3203_);
return v___x_3205_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__26_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; 
v___x_3206_ = lean_unsigned_to_nat(2u);
v___x_3207_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__25_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__25_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__25_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3208_ = l_Lean_Name_num___override(v___x_3207_, v___x_3206_);
return v___x_3208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3210_; uint8_t v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; 
v___x_3210_ = ((lean_object*)(l_Lean_Meta_AC_getInstance___closed__2));
v___x_3211_ = 0;
v___x_3212_ = lean_obj_once(&l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__26_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__26_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn___closed__26_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_);
v___x_3213_ = l_Lean_registerTraceClass(v___x_3210_, v___x_3211_, v___x_3212_);
return v___x_3213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2____boxed(lean_object* v_a_3214_){
_start:
{
lean_object* v_res_3215_; 
v_res_3215_ = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_();
return v_res_3215_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_AC_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_AC_instInhabitedPreContext_default = _init_l_Lean_Meta_AC_instInhabitedPreContext_default();
lean_mark_persistent(l_Lean_Meta_AC_instInhabitedPreContext_default);
l_Lean_Meta_AC_instInhabitedPreContext = _init_l_Lean_Meta_AC_instInhabitedPreContext();
lean_mark_persistent(l_Lean_Meta_AC_instInhabitedPreContext);
res = l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Meta_AC_acRflTactic___regBuiltin_Lean_Meta_AC_acRflTactic_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Meta_AC_evalNf0___regBuiltin_Lean_Meta_AC_evalNf0__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_AC_Main_0__Lean_Meta_AC_initFn_00___x40_Lean_Meta_Tactic_AC_Main_4236260923____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_AC_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Main(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Rewrite(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_AC_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_AC_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_AC_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_AC_Main(builtin);
}
#ifdef __cplusplus
}
#endif
