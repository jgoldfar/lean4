// Lean compiler output
// Module: Lean.Server.CodeActions.Attr
// Imports: public import Lean.Server.CodeActions.Basic import Lean.Compiler.IR.CompilerM
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
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
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
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConstCheck___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* l_Lean_instHashableExtraModUse_hash___boxed(lean_object*);
lean_object* l_Lean_instBEqExtraModUse_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
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
lean_object* lean_st_mk_ref(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_mk_io_user_error(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_ensureAttrDeclIsMeta(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_decl_get_sorry_dep(lean_object*, lean_object*);
uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l___private_Lean_ToExpr_0__Lean_Name_toExprAux(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_declareBuiltin(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Attribute_Builtin_ensureNoArgs(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__0 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__0_value;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "CodeAction"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__1 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__1_value;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "HoleCodeAction"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__2 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(173, 156, 186, 144, 130, 73, 162, 22)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(144, 107, 254, 180, 191, 87, 213, 212)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__3 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_CodeAction_mkHoleCodeAction_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_CodeAction_mkHoleCodeAction_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_CodeAction_mkHoleCodeAction_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_CodeAction_mkHoleCodeAction_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_mkHoleCodeAction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_mkHoleCodeAction___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__2_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__2_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__3_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__3_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__4_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__4_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__5_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__5_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_CodeAction_initFn___lam__2_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_CodeAction_initFn___lam__3_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "holeCodeActionExt"};
static const lean_object* l_Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(173, 156, 186, 144, 130, 73, 162, 22)}};
static const lean_ctor_object l_Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(66, 203, 29, 204, 182, 198, 37, 252)}};
static const lean_object* l_Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value;
static const lean_array_object l_Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_CodeAction_initFn___lam__4_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2____boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value)} };
static const lean_object* l_Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value),((lean_object*)&l_Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_CodeAction_initFn___lam__5_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value)} };
static const lean_object* l_Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_CodeAction_initFn___closed__10_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value),((lean_object*)&l_Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value),((lean_object*)&l_Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value),((lean_object*)&l_Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value),((lean_object*)&l_Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value),((lean_object*)&l_Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_CodeAction_initFn___closed__10_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___closed__10_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_CodeAction_initFn___closed__11_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_CodeAction_initFn___closed__10_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value),((lean_object*)&l_Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value)}};
static const lean_object* l_Lean_CodeAction_initFn___closed__11_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___closed__11_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_holeCodeActionExt;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Invalid attribute scope: Attribute `["};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "]` must be global, not `"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__5;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "global"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__6 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__6_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__7 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__7_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scoped"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__8 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__3_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__3_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Server"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(79, 45, 83, 138, 97, 177, 55, 171)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "CodeActions"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(41, 109, 98, 186, 215, 54, 31, 240)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(201, 81, 122, 157, 110, 139, 150, 137)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(140, 9, 218, 35, 21, 71, 196, 16)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__10_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 87, 198, 176, 47, 232, 96, 167)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__10_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__10_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__11_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__10_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(218, 76, 124, 25, 44, 216, 189, 65)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__11_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__11_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__12_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__12_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__12_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__13_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__11_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__12_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(63, 13, 58, 95, 91, 219, 83, 153)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__13_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__13_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__14_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__14_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__14_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__15_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__13_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__14_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(202, 153, 2, 234, 247, 5, 40, 80)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__15_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__15_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__16_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__15_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 5, 227, 15, 159, 154, 41, 231)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__16_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__16_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__17_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__16_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(234, 131, 190, 193, 233, 215, 124, 132)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__17_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__17_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__18_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__17_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(96, 208, 24, 91, 104, 151, 84, 140)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__18_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__18_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__19_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__18_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(156, 80, 46, 201, 173, 200, 208, 35)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__19_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__19_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__20_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__19_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1824323934) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(48, 77, 44, 66, 102, 234, 136, 182)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__20_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__20_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__21_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__21_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__21_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__22_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__20_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__21_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(231, 50, 169, 217, 79, 205, 182, 252)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__22_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__22_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__23_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__23_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__23_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__24_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__22_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__23_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(47, 130, 193, 32, 212, 119, 235, 154)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__24_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__24_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__25_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__24_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(42, 29, 14, 179, 205, 185, 16, 250)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__25_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__25_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__26_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "hole_code_action"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__26_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__26_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__27_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__26_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(251, 9, 80, 177, 58, 188, 207, 158)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__27_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__27_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__28_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2____boxed, .m_arity = 8, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__27_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__28_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__28_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__29_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__27_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__29_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__29_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__30_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "Declare a new hole code action, to appear in the code actions on \?_ and _"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__30_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__30_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__31_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__25_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__27_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__30_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__31_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__31_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__32_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__31_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__28_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__29_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__32_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__32_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkCommandCodeAction_unsafe__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "CommandCodeAction"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkCommandCodeAction_unsafe__1___closed__0 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkCommandCodeAction_unsafe__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkCommandCodeAction_unsafe__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkCommandCodeAction_unsafe__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkCommandCodeAction_unsafe__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(173, 156, 186, 144, 130, 73, 162, 22)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkCommandCodeAction_unsafe__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkCommandCodeAction_unsafe__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkCommandCodeAction_unsafe__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(128, 81, 85, 177, 113, 119, 11, 211)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkCommandCodeAction_unsafe__1___closed__1 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkCommandCodeAction_unsafe__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkCommandCodeAction_unsafe__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkCommandCodeAction_unsafe__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_mkCommandCodeAction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_mkCommandCodeAction___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_CodeAction_instInhabitedCommandCodeActionEntry_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_CodeAction_instInhabitedCommandCodeActionEntry_default___closed__0 = (const lean_object*)&l_Lean_CodeAction_instInhabitedCommandCodeActionEntry_default___closed__0_value;
static const lean_ctor_object l_Lean_CodeAction_instInhabitedCommandCodeActionEntry_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_CodeAction_instInhabitedCommandCodeActionEntry_default___closed__0_value)}};
static const lean_object* l_Lean_CodeAction_instInhabitedCommandCodeActionEntry_default___closed__1 = (const lean_object*)&l_Lean_CodeAction_instInhabitedCommandCodeActionEntry_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_CodeAction_instInhabitedCommandCodeActionEntry_default = (const lean_object*)&l_Lean_CodeAction_instInhabitedCommandCodeActionEntry_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_CodeAction_instInhabitedCommandCodeActionEntry = (const lean_object*)&l_Lean_CodeAction_instInhabitedCommandCodeActionEntry_default___closed__1_value;
static const lean_array_object l_Lean_CodeAction_instInhabitedCommandCodeActions_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_CodeAction_instInhabitedCommandCodeActions_default___closed__0 = (const lean_object*)&l_Lean_CodeAction_instInhabitedCommandCodeActions_default___closed__0_value;
static const lean_ctor_object l_Lean_CodeAction_instInhabitedCommandCodeActions_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_CodeAction_instInhabitedCommandCodeActions_default___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_CodeAction_instInhabitedCommandCodeActions_default___closed__1 = (const lean_object*)&l_Lean_CodeAction_instInhabitedCommandCodeActions_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_CodeAction_instInhabitedCommandCodeActions_default = (const lean_object*)&l_Lean_CodeAction_instInhabitedCommandCodeActions_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_CodeAction_instInhabitedCommandCodeActions = (const lean_object*)&l_Lean_CodeAction_instInhabitedCommandCodeActions_default___closed__1_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_CodeAction_CommandCodeActions_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_CodeAction_CommandCodeActions_insert_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_CommandCodeActions_insert_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_CommandCodeActions_insert_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_CommandCodeActions_insert_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_CommandCodeActions_insert_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_CommandCodeActions_insert_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_CommandCodeActions_insert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_CommandCodeActions_insert___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_CodeAction_CommandCodeActions_insert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_CodeAction_CommandCodeActions_insert_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_262607364____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_262607364____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_builtinCmdCodeActions;
LEAN_EXPORT lean_object* l_Lean_CodeAction_insertBuiltin(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_insertBuiltin___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__2_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__2_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__3_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(lean_object*, lean_object*);
static const lean_array_object l_Lean_CodeAction_initFn___lam__4___closed__0_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_CodeAction_initFn___lam__4___closed__0_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___lam__4___closed__0_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__4_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__4_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__5_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__5_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_CodeAction_initFn___lam__2_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_CodeAction_initFn___lam__3_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "cmdCodeActionExt"};
static const lean_object* l_Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(173, 156, 186, 144, 130, 73, 162, 22)}};
static const lean_ctor_object l_Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(18, 243, 44, 165, 100, 218, 83, 102)}};
static const lean_object* l_Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__value;
static lean_once_cell_t l_Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_CodeAction_cmdCodeActionExt;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqExtraModUse_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__0 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__0_value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableExtraModUse_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__1_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__2;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__3 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__3_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__4 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__4_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__5 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__5_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__7_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__8;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__9;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__10 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__10_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__11;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__12 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__12_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__13;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__14_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__15 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__15_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__16_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__17 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__17_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___closed__0 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___closed__0_value;
static const lean_closure_object l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___closed__1_value;
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___closed__2;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___closed__3 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__2(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__19_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)(((size_t)(249496773) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(39, 98, 82, 63, 230, 235, 167, 142)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__21_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(204, 82, 115, 204, 119, 26, 186, 246)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__23_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(120, 127, 98, 151, 84, 102, 70, 46)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(121, 217, 69, 124, 32, 57, 88, 239)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "command_code_action"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 247, 221, 42, 68, 92, 136, 34)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2____boxed, .m_arity = 11, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__0_value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 77, .m_capacity = 77, .m_length = 76, .m_data = "Declare a new command code action, to appear in the code actions on commands"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__10_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__10_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__10_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "insertBuiltin"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__0 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__0_value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(173, 156, 186, 144, 130, 73, 162, 22)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 249, 157, 209, 61, 35, 44, 199)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__1 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__1_value;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__2;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Name"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__3 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__3_value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__3_value),LEAN_SCALAR_PTR_LITERAL(251, 222, 196, 1, 17, 104, 171, 184)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__4 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__4_value;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__5;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "List"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__6 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__6_value;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toArray"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__7 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__7_value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__6_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__7_value),LEAN_SCALAR_PTR_LITERAL(225, 54, 189, 64, 249, 49, 198, 116)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__8 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__8_value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__9 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__9_value;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__10;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__11;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__12;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__13;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__14;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__15;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declare"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__16 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__16_value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__16_value),LEAN_SCALAR_PTR_LITERAL(12, 217, 76, 92, 115, 157, 174, 191)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__17 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__17_value;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "nil"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__18 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__18_value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__6_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__19_value_aux_0),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__18_value),LEAN_SCALAR_PTR_LITERAL(90, 150, 134, 113, 145, 38, 173, 251)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__19 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__19_value;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__20;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__21;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cons"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__22 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__22_value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__6_value),LEAN_SCALAR_PTR_LITERAL(245, 188, 225, 225, 165, 5, 251, 132)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__23_value_aux_0),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__22_value),LEAN_SCALAR_PTR_LITERAL(98, 170, 59, 223, 79, 132, 139, 119)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__23 = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__23_value;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__24;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__25;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__0_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Unexpected `command_code_action` attribute syntax"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__0_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__0_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__1_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__1_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__19_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1324802641) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(206, 142, 76, 87, 6, 108, 26, 136)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__21_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(25, 33, 114, 77, 47, 114, 18, 64)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__23_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(209, 97, 239, 179, 227, 241, 71, 55)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(172, 195, 188, 80, 5, 62, 198, 198)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "builtin_command_code_action"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2____boxed, .m_arity = 8, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__0_value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__4_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(191, 66, 71, 193, 29, 122, 186, 70)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "Declare a new builtin command code action, to appear in the code actions on commands"};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__10_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__10_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__10_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1(lean_object* v_n_8_, lean_object* v_env_9_, lean_object* v_opts_10_){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___closed__3));
v___x_12_ = l_Lean_Environment_evalConstCheck___redArg(v_env_9_, v_opts_10_, v___x_11_, v_n_8_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1___boxed(lean_object* v_n_13_, lean_object* v_env_14_, lean_object* v_opts_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1(v_n_13_, v_env_14_, v_opts_15_);
lean_dec_ref(v_opts_15_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_CodeAction_mkHoleCodeAction_spec__0___redArg(lean_object* v_e_17_){
_start:
{
if (lean_obj_tag(v_e_17_) == 0)
{
lean_object* v_a_19_; lean_object* v___x_21_; uint8_t v_isShared_22_; uint8_t v_isSharedCheck_27_; 
v_a_19_ = lean_ctor_get(v_e_17_, 0);
v_isSharedCheck_27_ = !lean_is_exclusive(v_e_17_);
if (v_isSharedCheck_27_ == 0)
{
v___x_21_ = v_e_17_;
v_isShared_22_ = v_isSharedCheck_27_;
goto v_resetjp_20_;
}
else
{
lean_inc(v_a_19_);
lean_dec(v_e_17_);
v___x_21_ = lean_box(0);
v_isShared_22_ = v_isSharedCheck_27_;
goto v_resetjp_20_;
}
v_resetjp_20_:
{
lean_object* v___x_23_; lean_object* v___x_25_; 
v___x_23_ = lean_mk_io_user_error(v_a_19_);
if (v_isShared_22_ == 0)
{
lean_ctor_set_tag(v___x_21_, 1);
lean_ctor_set(v___x_21_, 0, v___x_23_);
v___x_25_ = v___x_21_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v___x_23_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
else
{
lean_object* v_a_28_; lean_object* v___x_30_; uint8_t v_isShared_31_; uint8_t v_isSharedCheck_35_; 
v_a_28_ = lean_ctor_get(v_e_17_, 0);
v_isSharedCheck_35_ = !lean_is_exclusive(v_e_17_);
if (v_isSharedCheck_35_ == 0)
{
v___x_30_ = v_e_17_;
v_isShared_31_ = v_isSharedCheck_35_;
goto v_resetjp_29_;
}
else
{
lean_inc(v_a_28_);
lean_dec(v_e_17_);
v___x_30_ = lean_box(0);
v_isShared_31_ = v_isSharedCheck_35_;
goto v_resetjp_29_;
}
v_resetjp_29_:
{
lean_object* v___x_33_; 
if (v_isShared_31_ == 0)
{
lean_ctor_set_tag(v___x_30_, 0);
v___x_33_ = v___x_30_;
goto v_reusejp_32_;
}
else
{
lean_object* v_reuseFailAlloc_34_; 
v_reuseFailAlloc_34_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_34_, 0, v_a_28_);
v___x_33_ = v_reuseFailAlloc_34_;
goto v_reusejp_32_;
}
v_reusejp_32_:
{
return v___x_33_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_CodeAction_mkHoleCodeAction_spec__0___redArg___boxed(lean_object* v_e_36_, lean_object* v_a_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_IO_ofExcept___at___00Lean_CodeAction_mkHoleCodeAction_spec__0___redArg(v_e_36_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_CodeAction_mkHoleCodeAction_spec__0(lean_object* v_00_u03b1_39_, lean_object* v_e_40_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_IO_ofExcept___at___00Lean_CodeAction_mkHoleCodeAction_spec__0___redArg(v_e_40_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_CodeAction_mkHoleCodeAction_spec__0___boxed(lean_object* v_00_u03b1_43_, lean_object* v_e_44_, lean_object* v_a_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = l_IO_ofExcept___at___00Lean_CodeAction_mkHoleCodeAction_spec__0(v_00_u03b1_43_, v_e_44_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_mkHoleCodeAction(lean_object* v_n_47_, lean_object* v_a_48_){
_start:
{
lean_object* v_env_50_; lean_object* v_opts_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v_env_50_ = lean_ctor_get(v_a_48_, 0);
v_opts_51_ = lean_ctor_get(v_a_48_, 1);
lean_inc_ref(v_env_50_);
v___x_52_ = l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkHoleCodeAction_unsafe__1(v_n_47_, v_env_50_, v_opts_51_);
v___x_53_ = l_IO_ofExcept___at___00Lean_CodeAction_mkHoleCodeAction_spec__0___redArg(v___x_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_mkHoleCodeAction___boxed(lean_object* v_n_54_, lean_object* v_a_55_, lean_object* v_a_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_Lean_CodeAction_mkHoleCodeAction(v_n_54_, v_a_55_);
lean_dec_ref(v_a_55_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_(lean_object* v_x_58_, lean_object* v_x_59_){
_start:
{
lean_object* v_fst_60_; lean_object* v_snd_61_; lean_object* v_fst_62_; lean_object* v_snd_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_72_; 
v_fst_60_ = lean_ctor_get(v_x_58_, 0);
lean_inc(v_fst_60_);
v_snd_61_ = lean_ctor_get(v_x_58_, 1);
lean_inc(v_snd_61_);
lean_dec_ref(v_x_58_);
v_fst_62_ = lean_ctor_get(v_x_59_, 0);
v_snd_63_ = lean_ctor_get(v_x_59_, 1);
v_isSharedCheck_72_ = !lean_is_exclusive(v_x_59_);
if (v_isSharedCheck_72_ == 0)
{
v___x_65_ = v_x_59_;
v_isShared_66_ = v_isSharedCheck_72_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_snd_63_);
lean_inc(v_fst_62_);
lean_dec(v_x_59_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_72_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_70_; 
v___x_67_ = lean_array_push(v_fst_60_, v_fst_62_);
v___x_68_ = lean_array_push(v_snd_61_, v_snd_63_);
if (v_isShared_66_ == 0)
{
lean_ctor_set(v___x_65_, 1, v___x_68_);
lean_ctor_set(v___x_65_, 0, v___x_67_);
v___x_70_ = v___x_65_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v___x_67_);
lean_ctor_set(v_reuseFailAlloc_71_, 1, v___x_68_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_(lean_object* v_x_73_, lean_object* v_s_74_){
_start:
{
lean_object* v_fst_75_; lean_object* v___x_76_; 
v_fst_75_ = lean_ctor_get(v_s_74_, 0);
lean_inc_n(v_fst_75_, 3);
v___x_76_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_76_, 0, v_fst_75_);
lean_ctor_set(v___x_76_, 1, v_fst_75_);
lean_ctor_set(v___x_76_, 2, v_fst_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2____boxed(lean_object* v_x_77_, lean_object* v_s_78_){
_start:
{
lean_object* v_res_79_; 
v_res_79_ = l_Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_(v_x_77_, v_s_78_);
lean_dec_ref(v_s_78_);
lean_dec_ref(v_x_77_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__2_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_(lean_object* v_x_80_){
_start:
{
lean_object* v___x_81_; 
v___x_81_ = lean_box(0);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__2_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2____boxed(lean_object* v_x_82_){
_start:
{
lean_object* v_res_83_; 
v_res_83_ = l_Lean_CodeAction_initFn___lam__2_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_(v_x_82_);
lean_dec_ref(v_x_82_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__3_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_(lean_object* v_x_84_){
_start:
{
lean_object* v_fst_85_; 
v_fst_85_ = lean_ctor_get(v_x_84_, 0);
lean_inc(v_fst_85_);
return v_fst_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__3_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2____boxed(lean_object* v_x_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lean_CodeAction_initFn___lam__3_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_(v_x_86_);
lean_dec_ref(v_x_86_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__spec__0(lean_object* v_as_88_, size_t v_i_89_, size_t v_stop_90_, lean_object* v_b_91_, lean_object* v___y_92_){
_start:
{
uint8_t v___x_94_; 
v___x_94_ = lean_usize_dec_eq(v_i_89_, v_stop_90_);
if (v___x_94_ == 0)
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = lean_array_uget_borrowed(v_as_88_, v_i_89_);
lean_inc(v___x_95_);
v___x_96_ = l_Lean_CodeAction_mkHoleCodeAction(v___x_95_, v___y_92_);
if (lean_obj_tag(v___x_96_) == 0)
{
lean_object* v_a_97_; lean_object* v___x_98_; size_t v___x_99_; size_t v___x_100_; 
v_a_97_ = lean_ctor_get(v___x_96_, 0);
lean_inc(v_a_97_);
lean_dec_ref(v___x_96_);
v___x_98_ = lean_array_push(v_b_91_, v_a_97_);
v___x_99_ = ((size_t)1ULL);
v___x_100_ = lean_usize_add(v_i_89_, v___x_99_);
v_i_89_ = v___x_100_;
v_b_91_ = v___x_98_;
goto _start;
}
else
{
lean_object* v_a_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_109_; 
lean_dec_ref(v_b_91_);
v_a_102_ = lean_ctor_get(v___x_96_, 0);
v_isSharedCheck_109_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_109_ == 0)
{
v___x_104_ = v___x_96_;
v_isShared_105_ = v_isSharedCheck_109_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_a_102_);
lean_dec(v___x_96_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_109_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v___x_107_; 
if (v_isShared_105_ == 0)
{
v___x_107_ = v___x_104_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_a_102_);
v___x_107_ = v_reuseFailAlloc_108_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
return v___x_107_;
}
}
}
}
else
{
lean_object* v___x_110_; 
v___x_110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_110_, 0, v_b_91_);
return v___x_110_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__spec__0___boxed(lean_object* v_as_111_, lean_object* v_i_112_, lean_object* v_stop_113_, lean_object* v_b_114_, lean_object* v___y_115_, lean_object* v___y_116_){
_start:
{
size_t v_i_boxed_117_; size_t v_stop_boxed_118_; lean_object* v_res_119_; 
v_i_boxed_117_ = lean_unbox_usize(v_i_112_);
lean_dec(v_i_112_);
v_stop_boxed_118_ = lean_unbox_usize(v_stop_113_);
lean_dec(v_stop_113_);
v_res_119_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__spec__0(v_as_111_, v_i_boxed_117_, v_stop_boxed_118_, v_b_114_, v___y_115_);
lean_dec_ref(v___y_115_);
lean_dec_ref(v_as_111_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__spec__1(lean_object* v_as_120_, size_t v_i_121_, size_t v_stop_122_, lean_object* v_b_123_, lean_object* v___y_124_){
_start:
{
lean_object* v_a_127_; lean_object* v___y_132_; uint8_t v___x_134_; 
v___x_134_ = lean_usize_dec_eq(v_i_121_, v_stop_122_);
if (v___x_134_ == 0)
{
lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; uint8_t v___x_138_; 
v___x_135_ = lean_array_uget_borrowed(v_as_120_, v_i_121_);
v___x_136_ = lean_unsigned_to_nat(0u);
v___x_137_ = lean_array_get_size(v___x_135_);
v___x_138_ = lean_nat_dec_lt(v___x_136_, v___x_137_);
if (v___x_138_ == 0)
{
v_a_127_ = v_b_123_;
goto v___jp_126_;
}
else
{
uint8_t v___x_139_; 
v___x_139_ = lean_nat_dec_le(v___x_137_, v___x_137_);
if (v___x_139_ == 0)
{
if (v___x_138_ == 0)
{
v_a_127_ = v_b_123_;
goto v___jp_126_;
}
else
{
size_t v___x_140_; size_t v___x_141_; lean_object* v___x_142_; 
v___x_140_ = ((size_t)0ULL);
v___x_141_ = lean_usize_of_nat(v___x_137_);
v___x_142_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__spec__0(v___x_135_, v___x_140_, v___x_141_, v_b_123_, v___y_124_);
v___y_132_ = v___x_142_;
goto v___jp_131_;
}
}
else
{
size_t v___x_143_; size_t v___x_144_; lean_object* v___x_145_; 
v___x_143_ = ((size_t)0ULL);
v___x_144_ = lean_usize_of_nat(v___x_137_);
v___x_145_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__spec__0(v___x_135_, v___x_143_, v___x_144_, v_b_123_, v___y_124_);
v___y_132_ = v___x_145_;
goto v___jp_131_;
}
}
}
else
{
lean_object* v___x_146_; 
v___x_146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_146_, 0, v_b_123_);
return v___x_146_;
}
v___jp_126_:
{
size_t v___x_128_; size_t v___x_129_; 
v___x_128_ = ((size_t)1ULL);
v___x_129_ = lean_usize_add(v_i_121_, v___x_128_);
v_i_121_ = v___x_129_;
v_b_123_ = v_a_127_;
goto _start;
}
v___jp_131_:
{
if (lean_obj_tag(v___y_132_) == 0)
{
lean_object* v_a_133_; 
v_a_133_ = lean_ctor_get(v___y_132_, 0);
lean_inc(v_a_133_);
lean_dec_ref(v___y_132_);
v_a_127_ = v_a_133_;
goto v___jp_126_;
}
else
{
return v___y_132_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__spec__1___boxed(lean_object* v_as_147_, lean_object* v_i_148_, lean_object* v_stop_149_, lean_object* v_b_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
size_t v_i_boxed_153_; size_t v_stop_boxed_154_; lean_object* v_res_155_; 
v_i_boxed_153_ = lean_unbox_usize(v_i_148_);
lean_dec(v_i_148_);
v_stop_boxed_154_ = lean_unbox_usize(v_stop_149_);
lean_dec(v_stop_149_);
v_res_155_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__spec__1(v_as_147_, v_i_boxed_153_, v_stop_boxed_154_, v_b_150_, v___y_151_);
lean_dec_ref(v___y_151_);
lean_dec_ref(v_as_147_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__4_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_(lean_object* v___x_156_, lean_object* v___x_157_, lean_object* v___x_158_, lean_object* v_as_159_, lean_object* v___y_160_){
_start:
{
lean_object* v_a_163_; lean_object* v___y_167_; lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_177_ = lean_array_get_size(v_as_159_);
v___x_178_ = lean_nat_dec_lt(v___x_157_, v___x_177_);
if (v___x_178_ == 0)
{
v_a_163_ = v___x_158_;
goto v___jp_162_;
}
else
{
uint8_t v___x_179_; 
v___x_179_ = lean_nat_dec_le(v___x_177_, v___x_177_);
if (v___x_179_ == 0)
{
if (v___x_178_ == 0)
{
v_a_163_ = v___x_158_;
goto v___jp_162_;
}
else
{
size_t v___x_180_; size_t v___x_181_; lean_object* v___x_182_; 
v___x_180_ = ((size_t)0ULL);
v___x_181_ = lean_usize_of_nat(v___x_177_);
v___x_182_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__spec__1(v_as_159_, v___x_180_, v___x_181_, v___x_158_, v___y_160_);
v___y_167_ = v___x_182_;
goto v___jp_166_;
}
}
else
{
size_t v___x_183_; size_t v___x_184_; lean_object* v___x_185_; 
v___x_183_ = ((size_t)0ULL);
v___x_184_ = lean_usize_of_nat(v___x_177_);
v___x_185_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2__spec__1(v_as_159_, v___x_183_, v___x_184_, v___x_158_, v___y_160_);
v___y_167_ = v___x_185_;
goto v___jp_166_;
}
}
v___jp_162_:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_156_);
lean_ctor_set(v___x_164_, 1, v_a_163_);
v___x_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_165_, 0, v___x_164_);
return v___x_165_;
}
v___jp_166_:
{
if (lean_obj_tag(v___y_167_) == 0)
{
lean_object* v_a_168_; 
v_a_168_ = lean_ctor_get(v___y_167_, 0);
lean_inc(v_a_168_);
lean_dec_ref(v___y_167_);
v_a_163_ = v_a_168_;
goto v___jp_162_;
}
else
{
lean_object* v_a_169_; lean_object* v___x_171_; uint8_t v_isShared_172_; uint8_t v_isSharedCheck_176_; 
lean_dec_ref(v___x_156_);
v_a_169_ = lean_ctor_get(v___y_167_, 0);
v_isSharedCheck_176_ = !lean_is_exclusive(v___y_167_);
if (v_isSharedCheck_176_ == 0)
{
v___x_171_ = v___y_167_;
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
else
{
lean_inc(v_a_169_);
lean_dec(v___y_167_);
v___x_171_ = lean_box(0);
v_isShared_172_ = v_isSharedCheck_176_;
goto v_resetjp_170_;
}
v_resetjp_170_:
{
lean_object* v___x_174_; 
if (v_isShared_172_ == 0)
{
v___x_174_ = v___x_171_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v_a_169_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__4_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2____boxed(lean_object* v___x_186_, lean_object* v___x_187_, lean_object* v___x_188_, lean_object* v_as_189_, lean_object* v___y_190_, lean_object* v___y_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Lean_CodeAction_initFn___lam__4_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_(v___x_186_, v___x_187_, v___x_188_, v_as_189_, v___y_190_);
lean_dec_ref(v___y_190_);
lean_dec_ref(v_as_189_);
lean_dec(v___x_187_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__5_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_(lean_object* v___x_193_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_195_, 0, v___x_193_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__5_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2____boxed(lean_object* v___x_196_, lean_object* v___y_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l_Lean_CodeAction_initFn___lam__5_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_(v___x_196_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = ((lean_object*)(l_Lean_CodeAction_initFn___closed__11_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_));
v___x_231_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_230_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2____boxed(lean_object* v_a_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_();
return v_res_233_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_234_; 
v___x_234_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_234_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
return v___x_236_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_237_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_238_ = lean_unsigned_to_nat(0u);
v___x_239_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_239_, 0, v___x_238_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
lean_ctor_set(v___x_239_, 2, v___x_238_);
lean_ctor_set(v___x_239_, 3, v___x_237_);
lean_ctor_set(v___x_239_, 4, v___x_237_);
lean_ctor_set(v___x_239_, 5, v___x_237_);
lean_ctor_set(v___x_239_, 6, v___x_237_);
lean_ctor_set(v___x_239_, 7, v___x_237_);
lean_ctor_set(v___x_239_, 8, v___x_237_);
return v___x_239_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_240_ = lean_unsigned_to_nat(32u);
v___x_241_ = lean_mk_empty_array_with_capacity(v___x_240_);
v___x_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
return v___x_242_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_243_ = ((size_t)5ULL);
v___x_244_ = lean_unsigned_to_nat(0u);
v___x_245_ = lean_unsigned_to_nat(32u);
v___x_246_ = lean_mk_empty_array_with_capacity(v___x_245_);
v___x_247_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__3);
v___x_248_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_248_, 0, v___x_247_);
lean_ctor_set(v___x_248_, 1, v___x_246_);
lean_ctor_set(v___x_248_, 2, v___x_244_);
lean_ctor_set(v___x_248_, 3, v___x_244_);
lean_ctor_set_usize(v___x_248_, 4, v___x_243_);
return v___x_248_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_249_ = lean_box(1);
v___x_250_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_251_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_252_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
lean_ctor_set(v___x_252_, 1, v___x_250_);
lean_ctor_set(v___x_252_, 2, v___x_249_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_253_, lean_object* v___y_254_, lean_object* v___y_255_){
_start:
{
lean_object* v___x_257_; lean_object* v_env_258_; lean_object* v_options_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___x_257_ = lean_st_ref_get(v___y_255_);
v_env_258_ = lean_ctor_get(v___x_257_, 0);
lean_inc_ref(v_env_258_);
lean_dec(v___x_257_);
v_options_259_ = lean_ctor_get(v___y_254_, 2);
v___x_260_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__2);
v___x_261_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__5);
lean_inc_ref(v_options_259_);
v___x_262_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_262_, 0, v_env_258_);
lean_ctor_set(v___x_262_, 1, v___x_260_);
lean_ctor_set(v___x_262_, 2, v___x_261_);
lean_ctor_set(v___x_262_, 3, v_options_259_);
v___x_263_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
lean_ctor_set(v___x_263_, 1, v_msgData_253_);
v___x_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0(v_msgData_265_, v___y_266_, v___y_267_);
lean_dec(v___y_267_);
lean_dec_ref(v___y_266_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_270_, lean_object* v___y_271_, lean_object* v___y_272_){
_start:
{
lean_object* v_ref_274_; lean_object* v___x_275_; lean_object* v_a_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_284_; 
v_ref_274_ = lean_ctor_get(v___y_271_, 5);
v___x_275_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0(v_msg_270_, v___y_271_, v___y_272_);
v_a_276_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_284_ == 0)
{
v___x_278_ = v___x_275_;
v_isShared_279_ = v_isSharedCheck_284_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_a_276_);
lean_dec(v___x_275_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_284_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_280_; lean_object* v___x_282_; 
lean_inc(v_ref_274_);
v___x_280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_280_, 0, v_ref_274_);
lean_ctor_set(v___x_280_, 1, v_a_276_);
if (v_isShared_279_ == 0)
{
lean_ctor_set_tag(v___x_278_, 1);
lean_ctor_set(v___x_278_, 0, v___x_280_);
v___x_282_ = v___x_278_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_280_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0___redArg(v_msg_285_, v___y_286_, v___y_287_);
lean_dec(v___y_287_);
lean_dec_ref(v___y_286_);
return v_res_289_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__0));
v___x_292_ = l_Lean_stringToMessageData(v___x_291_);
return v___x_292_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__2));
v___x_295_ = l_Lean_stringToMessageData(v___x_294_);
return v___x_295_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__5(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_297_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__4));
v___x_298_ = l_Lean_stringToMessageData(v___x_297_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg(lean_object* v_name_302_, uint8_t v_kind_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___y_313_; 
v___x_307_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__1, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__1_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__1);
v___x_308_ = l_Lean_MessageData_ofName(v_name_302_);
v___x_309_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_309_, 0, v___x_307_);
lean_ctor_set(v___x_309_, 1, v___x_308_);
v___x_310_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__3, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__3_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__3);
v___x_311_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_311_, 0, v___x_309_);
lean_ctor_set(v___x_311_, 1, v___x_310_);
switch(v_kind_303_)
{
case 0:
{
lean_object* v___x_320_; 
v___x_320_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__6));
v___y_313_ = v___x_320_;
goto v___jp_312_;
}
case 1:
{
lean_object* v___x_321_; 
v___x_321_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__7));
v___y_313_ = v___x_321_;
goto v___jp_312_;
}
default: 
{
lean_object* v___x_322_; 
v___x_322_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__8));
v___y_313_ = v___x_322_;
goto v___jp_312_;
}
}
v___jp_312_:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
lean_inc_ref(v___y_313_);
v___x_314_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_314_, 0, v___y_313_);
v___x_315_ = l_Lean_MessageData_ofFormat(v___x_314_);
v___x_316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_316_, 0, v___x_311_);
lean_ctor_set(v___x_316_, 1, v___x_315_);
v___x_317_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___closed__5);
v___x_318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_316_);
lean_ctor_set(v___x_318_, 1, v___x_317_);
v___x_319_ = l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0___redArg(v___x_318_, v___y_304_, v___y_305_);
return v___x_319_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_name_323_, lean_object* v_kind_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_){
_start:
{
uint8_t v_kind_boxed_328_; lean_object* v_res_329_; 
v_kind_boxed_328_ = lean_unbox(v_kind_324_);
v_res_329_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg(v_name_323_, v_kind_boxed_328_, v___y_325_, v___y_326_);
lean_dec(v___y_326_);
lean_dec_ref(v___y_325_);
return v_res_329_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_330_; 
v___x_330_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_330_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_331_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_);
v___x_332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_332_, 0, v___x_331_);
return v___x_332_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_);
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_(lean_object* v___x_335_, lean_object* v___x_336_, lean_object* v_decl_337_, lean_object* v_stx_338_, uint8_t v_kind_339_, lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v___y_344_; lean_object* v___y_345_; lean_object* v___x_410_; 
v___x_410_ = l_Lean_Attribute_Builtin_ensureNoArgs(v_stx_338_, v___y_340_, v___y_341_);
if (lean_obj_tag(v___x_410_) == 0)
{
uint8_t v___x_411_; uint8_t v___x_412_; 
lean_dec_ref(v___x_410_);
v___x_411_ = 0;
v___x_412_ = l_Lean_instBEqAttributeKind_beq(v_kind_339_, v___x_411_);
if (v___x_412_ == 0)
{
lean_object* v___x_413_; 
lean_dec(v_decl_337_);
lean_dec(v___x_336_);
v___x_413_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg(v___x_335_, v_kind_339_, v___y_340_, v___y_341_);
return v___x_413_;
}
else
{
v___y_344_ = v___y_340_;
v___y_345_ = v___y_341_;
goto v___jp_343_;
}
}
else
{
lean_dec(v_decl_337_);
lean_dec(v___x_336_);
lean_dec(v___x_335_);
return v___x_410_;
}
v___jp_343_:
{
lean_object* v___x_346_; 
lean_inc(v_decl_337_);
v___x_346_ = l_Lean_ensureAttrDeclIsMeta(v___x_335_, v_decl_337_, v_kind_339_, v___y_344_, v___y_345_);
if (lean_obj_tag(v___x_346_) == 0)
{
lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_408_; 
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_346_);
if (v_isSharedCheck_408_ == 0)
{
lean_object* v_unused_409_; 
v_unused_409_ = lean_ctor_get(v___x_346_, 0);
lean_dec(v_unused_409_);
v___x_348_ = v___x_346_;
v_isShared_349_ = v_isSharedCheck_408_;
goto v_resetjp_347_;
}
else
{
lean_dec(v___x_346_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_408_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_350_; lean_object* v_env_351_; lean_object* v___x_352_; 
v___x_350_ = lean_st_ref_get(v___y_345_);
v_env_351_ = lean_ctor_get(v___x_350_, 0);
lean_inc_ref(v_env_351_);
lean_dec(v___x_350_);
lean_inc(v_decl_337_);
v___x_352_ = lean_decl_get_sorry_dep(v_env_351_, v_decl_337_);
if (lean_obj_tag(v___x_352_) == 0)
{
lean_object* v___x_353_; lean_object* v_env_354_; lean_object* v_options_355_; lean_object* v_ref_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
lean_del_object(v___x_348_);
v___x_353_ = lean_st_ref_get(v___y_345_);
v_env_354_ = lean_ctor_get(v___x_353_, 0);
lean_inc_ref(v_env_354_);
lean_dec(v___x_353_);
v_options_355_ = lean_ctor_get(v___y_344_, 2);
v_ref_356_ = lean_ctor_get(v___y_344_, 5);
lean_inc_ref(v_options_355_);
v___x_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_357_, 0, v_env_354_);
lean_ctor_set(v___x_357_, 1, v_options_355_);
lean_inc(v_decl_337_);
v___x_358_ = l_Lean_CodeAction_mkHoleCodeAction(v_decl_337_, v___x_357_);
lean_dec_ref(v___x_357_);
if (lean_obj_tag(v___x_358_) == 0)
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_391_; 
v_a_359_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_391_ == 0)
{
v___x_361_ = v___x_358_;
v_isShared_362_ = v_isSharedCheck_391_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_358_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_391_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_363_; lean_object* v_env_364_; lean_object* v_nextMacroScope_365_; lean_object* v_ngen_366_; lean_object* v_auxDeclNGen_367_; lean_object* v_traceState_368_; lean_object* v_messages_369_; lean_object* v_infoState_370_; lean_object* v_snapshotTasks_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_389_; 
v___x_363_ = lean_st_ref_take(v___y_345_);
v_env_364_ = lean_ctor_get(v___x_363_, 0);
v_nextMacroScope_365_ = lean_ctor_get(v___x_363_, 1);
v_ngen_366_ = lean_ctor_get(v___x_363_, 2);
v_auxDeclNGen_367_ = lean_ctor_get(v___x_363_, 3);
v_traceState_368_ = lean_ctor_get(v___x_363_, 4);
v_messages_369_ = lean_ctor_get(v___x_363_, 6);
v_infoState_370_ = lean_ctor_get(v___x_363_, 7);
v_snapshotTasks_371_ = lean_ctor_get(v___x_363_, 8);
v_isSharedCheck_389_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_389_ == 0)
{
lean_object* v_unused_390_; 
v_unused_390_ = lean_ctor_get(v___x_363_, 5);
lean_dec(v_unused_390_);
v___x_373_ = v___x_363_;
v_isShared_374_ = v_isSharedCheck_389_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_snapshotTasks_371_);
lean_inc(v_infoState_370_);
lean_inc(v_messages_369_);
lean_inc(v_traceState_368_);
lean_inc(v_auxDeclNGen_367_);
lean_inc(v_ngen_366_);
lean_inc(v_nextMacroScope_365_);
lean_inc(v_env_364_);
lean_dec(v___x_363_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_389_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_375_; lean_object* v_toEnvExtension_376_; lean_object* v_asyncMode_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_382_; 
v___x_375_ = l_Lean_CodeAction_holeCodeActionExt;
v_toEnvExtension_376_ = lean_ctor_get(v___x_375_, 0);
v_asyncMode_377_ = lean_ctor_get(v_toEnvExtension_376_, 2);
v___x_378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_378_, 0, v_decl_337_);
lean_ctor_set(v___x_378_, 1, v_a_359_);
v___x_379_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_375_, v_env_364_, v___x_378_, v_asyncMode_377_, v___x_336_);
v___x_380_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_);
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 5, v___x_380_);
lean_ctor_set(v___x_373_, 0, v___x_379_);
v___x_382_ = v___x_373_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v___x_379_);
lean_ctor_set(v_reuseFailAlloc_388_, 1, v_nextMacroScope_365_);
lean_ctor_set(v_reuseFailAlloc_388_, 2, v_ngen_366_);
lean_ctor_set(v_reuseFailAlloc_388_, 3, v_auxDeclNGen_367_);
lean_ctor_set(v_reuseFailAlloc_388_, 4, v_traceState_368_);
lean_ctor_set(v_reuseFailAlloc_388_, 5, v___x_380_);
lean_ctor_set(v_reuseFailAlloc_388_, 6, v_messages_369_);
lean_ctor_set(v_reuseFailAlloc_388_, 7, v_infoState_370_);
lean_ctor_set(v_reuseFailAlloc_388_, 8, v_snapshotTasks_371_);
v___x_382_ = v_reuseFailAlloc_388_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_386_; 
v___x_383_ = lean_st_ref_set(v___y_345_, v___x_382_);
v___x_384_ = lean_box(0);
if (v_isShared_362_ == 0)
{
lean_ctor_set(v___x_361_, 0, v___x_384_);
v___x_386_ = v___x_361_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v___x_384_);
v___x_386_ = v_reuseFailAlloc_387_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
return v___x_386_;
}
}
}
}
}
else
{
lean_object* v_a_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_403_; 
lean_dec(v_decl_337_);
lean_dec(v___x_336_);
v_a_392_ = lean_ctor_get(v___x_358_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v___x_358_);
if (v_isSharedCheck_403_ == 0)
{
v___x_394_ = v___x_358_;
v_isShared_395_ = v_isSharedCheck_403_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_a_392_);
lean_dec(v___x_358_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_403_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_401_; 
v___x_396_ = lean_io_error_to_string(v_a_392_);
v___x_397_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_397_, 0, v___x_396_);
v___x_398_ = l_Lean_MessageData_ofFormat(v___x_397_);
lean_inc(v_ref_356_);
v___x_399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_399_, 0, v_ref_356_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 0, v___x_399_);
v___x_401_ = v___x_394_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v___x_399_);
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
else
{
lean_object* v___x_404_; lean_object* v___x_406_; 
lean_dec_ref(v___x_352_);
lean_dec(v_decl_337_);
lean_dec(v___x_336_);
v___x_404_ = lean_box(0);
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 0, v___x_404_);
v___x_406_ = v___x_348_;
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
lean_dec(v_decl_337_);
lean_dec(v___x_336_);
return v___x_346_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2____boxed(lean_object* v___x_414_, lean_object* v___x_415_, lean_object* v_decl_416_, lean_object* v_stx_417_, lean_object* v_kind_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
uint8_t v_kind_boxed_422_; lean_object* v_res_423_; 
v_kind_boxed_422_ = lean_unbox(v_kind_418_);
v_res_423_ = l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_(v___x_414_, v___x_415_, v_decl_416_, v_stx_417_, v_kind_boxed_422_, v___y_419_, v___y_420_);
lean_dec(v___y_420_);
lean_dec_ref(v___y_419_);
return v_res_423_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__0_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_));
v___x_426_ = l_Lean_stringToMessageData(v___x_425_);
return v___x_426_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__3_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_428_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_));
v___x_429_ = l_Lean_stringToMessageData(v___x_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_(lean_object* v___x_430_, lean_object* v_decl_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_435_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_);
v___x_436_ = l_Lean_MessageData_ofName(v___x_430_);
v___x_437_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_437_, 0, v___x_435_);
lean_ctor_set(v___x_437_, 1, v___x_436_);
v___x_438_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__3_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__3_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__3_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_);
v___x_439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_437_);
lean_ctor_set(v___x_439_, 1, v___x_438_);
v___x_440_ = l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0___redArg(v___x_439_, v___y_432_, v___y_433_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2____boxed(lean_object* v___x_441_, lean_object* v_decl_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_(v___x_441_, v_decl_442_, v___y_443_, v___y_444_);
lean_dec(v___y_444_);
lean_dec_ref(v___y_443_);
lean_dec(v_decl_442_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_528_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__32_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_));
v___x_529_ = l_Lean_registerBuiltinAttribute(v___x_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2____boxed(lean_object* v_a_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_();
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_532_, lean_object* v_msg_533_, lean_object* v___y_534_, lean_object* v___y_535_){
_start:
{
lean_object* v___x_537_; 
v___x_537_ = l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0___redArg(v_msg_533_, v___y_534_, v___y_535_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_538_, lean_object* v_msg_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0(v_00_u03b1_538_, v_msg_539_, v___y_540_, v___y_541_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b1_544_, lean_object* v_name_545_, uint8_t v_kind_546_, lean_object* v___y_547_, lean_object* v___y_548_){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg(v_name_545_, v_kind_546_, v___y_547_, v___y_548_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___boxed(lean_object* v_00_u03b1_551_, lean_object* v_name_552_, lean_object* v_kind_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_){
_start:
{
uint8_t v_kind_boxed_557_; lean_object* v_res_558_; 
v_kind_boxed_557_ = lean_unbox(v_kind_553_);
v_res_558_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1(v_00_u03b1_551_, v_name_552_, v_kind_boxed_557_, v___y_554_, v___y_555_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
return v_res_558_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkCommandCodeAction_unsafe__1(lean_object* v_n_564_, lean_object* v_env_565_, lean_object* v_opts_566_){
_start:
{
lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_567_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkCommandCodeAction_unsafe__1___closed__1));
v___x_568_ = l_Lean_Environment_evalConstCheck___redArg(v_env_565_, v_opts_566_, v___x_567_, v_n_564_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkCommandCodeAction_unsafe__1___boxed(lean_object* v_n_569_, lean_object* v_env_570_, lean_object* v_opts_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkCommandCodeAction_unsafe__1(v_n_569_, v_env_570_, v_opts_571_);
lean_dec_ref(v_opts_571_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_mkCommandCodeAction(lean_object* v_n_573_, lean_object* v_a_574_){
_start:
{
lean_object* v_env_576_; lean_object* v_opts_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
v_env_576_ = lean_ctor_get(v_a_574_, 0);
v_opts_577_ = lean_ctor_get(v_a_574_, 1);
lean_inc_ref(v_env_576_);
v___x_578_ = l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_mkCommandCodeAction_unsafe__1(v_n_573_, v_env_576_, v_opts_577_);
v___x_579_ = l_IO_ofExcept___at___00Lean_CodeAction_mkHoleCodeAction_spec__0___redArg(v___x_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_mkCommandCodeAction___boxed(lean_object* v_n_580_, lean_object* v_a_581_, lean_object* v_a_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Lean_CodeAction_mkCommandCodeAction(v_n_580_, v_a_581_);
lean_dec_ref(v_a_581_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_CodeAction_CommandCodeActions_insert_spec__0___redArg(lean_object* v_t_598_, lean_object* v_k_599_, lean_object* v_fallback_600_){
_start:
{
if (lean_obj_tag(v_t_598_) == 0)
{
lean_object* v_k_601_; lean_object* v_v_602_; lean_object* v_l_603_; lean_object* v_r_604_; uint8_t v___x_605_; 
v_k_601_ = lean_ctor_get(v_t_598_, 1);
v_v_602_ = lean_ctor_get(v_t_598_, 2);
v_l_603_ = lean_ctor_get(v_t_598_, 3);
v_r_604_ = lean_ctor_get(v_t_598_, 4);
v___x_605_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_599_, v_k_601_);
switch(v___x_605_)
{
case 0:
{
v_t_598_ = v_l_603_;
goto _start;
}
case 1:
{
lean_inc(v_v_602_);
return v_v_602_;
}
default: 
{
v_t_598_ = v_r_604_;
goto _start;
}
}
}
else
{
lean_inc(v_fallback_600_);
return v_fallback_600_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_CodeAction_CommandCodeActions_insert_spec__0___redArg___boxed(lean_object* v_t_608_, lean_object* v_k_609_, lean_object* v_fallback_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_CodeAction_CommandCodeActions_insert_spec__0___redArg(v_t_608_, v_k_609_, v_fallback_610_);
lean_dec(v_fallback_610_);
lean_dec(v_k_609_);
lean_dec(v_t_608_);
return v_res_611_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_CommandCodeActions_insert_spec__1(lean_object* v_action_614_, lean_object* v_as_615_, size_t v_i_616_, size_t v_stop_617_, lean_object* v_b_618_){
_start:
{
uint8_t v___x_619_; 
v___x_619_ = lean_usize_dec_eq(v_i_616_, v_stop_617_);
if (v___x_619_ == 0)
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; size_t v___x_625_; size_t v___x_626_; 
v___x_620_ = lean_array_uget_borrowed(v_as_615_, v_i_616_);
v___x_621_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_CommandCodeActions_insert_spec__1___closed__0));
v___x_622_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_CodeAction_CommandCodeActions_insert_spec__0___redArg(v_b_618_, v___x_620_, v___x_621_);
lean_inc_ref(v_action_614_);
v___x_623_ = lean_array_push(v___x_622_, v_action_614_);
lean_inc(v___x_620_);
v___x_624_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v___x_620_, v___x_623_, v_b_618_);
v___x_625_ = ((size_t)1ULL);
v___x_626_ = lean_usize_add(v_i_616_, v___x_625_);
v_i_616_ = v___x_626_;
v_b_618_ = v___x_624_;
goto _start;
}
else
{
lean_dec_ref(v_action_614_);
return v_b_618_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_CommandCodeActions_insert_spec__1___boxed(lean_object* v_action_628_, lean_object* v_as_629_, lean_object* v_i_630_, lean_object* v_stop_631_, lean_object* v_b_632_){
_start:
{
size_t v_i_boxed_633_; size_t v_stop_boxed_634_; lean_object* v_res_635_; 
v_i_boxed_633_ = lean_unbox_usize(v_i_630_);
lean_dec(v_i_630_);
v_stop_boxed_634_ = lean_unbox_usize(v_stop_631_);
lean_dec(v_stop_631_);
v_res_635_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_CommandCodeActions_insert_spec__1(v_action_628_, v_as_629_, v_i_boxed_633_, v_stop_boxed_634_, v_b_632_);
lean_dec_ref(v_as_629_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_CommandCodeActions_insert(lean_object* v_self_636_, lean_object* v_tacticKinds_637_, lean_object* v_action_638_){
_start:
{
lean_object* v___x_639_; lean_object* v___x_640_; uint8_t v___x_641_; 
v___x_639_ = lean_array_get_size(v_tacticKinds_637_);
v___x_640_ = lean_unsigned_to_nat(0u);
v___x_641_ = lean_nat_dec_eq(v___x_639_, v___x_640_);
if (v___x_641_ == 0)
{
lean_object* v_onAnyCmd_642_; lean_object* v_onCmd_643_; uint8_t v___x_644_; 
v_onAnyCmd_642_ = lean_ctor_get(v_self_636_, 0);
v_onCmd_643_ = lean_ctor_get(v_self_636_, 1);
v___x_644_ = lean_nat_dec_lt(v___x_640_, v___x_639_);
if (v___x_644_ == 0)
{
lean_dec_ref(v_action_638_);
return v_self_636_;
}
else
{
uint8_t v___x_645_; 
v___x_645_ = lean_nat_dec_le(v___x_639_, v___x_639_);
if (v___x_645_ == 0)
{
if (v___x_644_ == 0)
{
lean_dec_ref(v_action_638_);
return v_self_636_;
}
else
{
lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_655_; 
lean_inc(v_onCmd_643_);
lean_inc_ref(v_onAnyCmd_642_);
v_isSharedCheck_655_ = !lean_is_exclusive(v_self_636_);
if (v_isSharedCheck_655_ == 0)
{
lean_object* v_unused_656_; lean_object* v_unused_657_; 
v_unused_656_ = lean_ctor_get(v_self_636_, 1);
lean_dec(v_unused_656_);
v_unused_657_ = lean_ctor_get(v_self_636_, 0);
lean_dec(v_unused_657_);
v___x_647_ = v_self_636_;
v_isShared_648_ = v_isSharedCheck_655_;
goto v_resetjp_646_;
}
else
{
lean_dec(v_self_636_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_655_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
size_t v___x_649_; size_t v___x_650_; lean_object* v___x_651_; lean_object* v___x_653_; 
v___x_649_ = ((size_t)0ULL);
v___x_650_ = lean_usize_of_nat(v___x_639_);
v___x_651_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_CommandCodeActions_insert_spec__1(v_action_638_, v_tacticKinds_637_, v___x_649_, v___x_650_, v_onCmd_643_);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 1, v___x_651_);
v___x_653_ = v___x_647_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_onAnyCmd_642_);
lean_ctor_set(v_reuseFailAlloc_654_, 1, v___x_651_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
}
}
else
{
lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_667_; 
lean_inc(v_onCmd_643_);
lean_inc_ref(v_onAnyCmd_642_);
v_isSharedCheck_667_ = !lean_is_exclusive(v_self_636_);
if (v_isSharedCheck_667_ == 0)
{
lean_object* v_unused_668_; lean_object* v_unused_669_; 
v_unused_668_ = lean_ctor_get(v_self_636_, 1);
lean_dec(v_unused_668_);
v_unused_669_ = lean_ctor_get(v_self_636_, 0);
lean_dec(v_unused_669_);
v___x_659_ = v_self_636_;
v_isShared_660_ = v_isSharedCheck_667_;
goto v_resetjp_658_;
}
else
{
lean_dec(v_self_636_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_667_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
size_t v___x_661_; size_t v___x_662_; lean_object* v___x_663_; lean_object* v___x_665_; 
v___x_661_ = ((size_t)0ULL);
v___x_662_ = lean_usize_of_nat(v___x_639_);
v___x_663_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_CommandCodeActions_insert_spec__1(v_action_638_, v_tacticKinds_637_, v___x_661_, v___x_662_, v_onCmd_643_);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 1, v___x_663_);
v___x_665_ = v___x_659_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_onAnyCmd_642_);
lean_ctor_set(v_reuseFailAlloc_666_, 1, v___x_663_);
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
else
{
lean_object* v_onAnyCmd_670_; lean_object* v_onCmd_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_679_; 
v_onAnyCmd_670_ = lean_ctor_get(v_self_636_, 0);
v_onCmd_671_ = lean_ctor_get(v_self_636_, 1);
v_isSharedCheck_679_ = !lean_is_exclusive(v_self_636_);
if (v_isSharedCheck_679_ == 0)
{
v___x_673_ = v_self_636_;
v_isShared_674_ = v_isSharedCheck_679_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_onCmd_671_);
lean_inc(v_onAnyCmd_670_);
lean_dec(v_self_636_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_679_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_675_; lean_object* v___x_677_; 
v___x_675_ = lean_array_push(v_onAnyCmd_670_, v_action_638_);
if (v_isShared_674_ == 0)
{
lean_ctor_set(v___x_673_, 0, v___x_675_);
v___x_677_ = v___x_673_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_675_);
lean_ctor_set(v_reuseFailAlloc_678_, 1, v_onCmd_671_);
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
LEAN_EXPORT lean_object* l_Lean_CodeAction_CommandCodeActions_insert___boxed(lean_object* v_self_680_, lean_object* v_tacticKinds_681_, lean_object* v_action_682_){
_start:
{
lean_object* v_res_683_; 
v_res_683_ = l_Lean_CodeAction_CommandCodeActions_insert(v_self_680_, v_tacticKinds_681_, v_action_682_);
lean_dec_ref(v_tacticKinds_681_);
return v_res_683_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_CodeAction_CommandCodeActions_insert_spec__0(lean_object* v_00_u03b4_684_, lean_object* v_t_685_, lean_object* v_k_686_, lean_object* v_fallback_687_){
_start:
{
lean_object* v___x_688_; 
v___x_688_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_CodeAction_CommandCodeActions_insert_spec__0___redArg(v_t_685_, v_k_686_, v_fallback_687_);
return v___x_688_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_CodeAction_CommandCodeActions_insert_spec__0___boxed(lean_object* v_00_u03b4_689_, lean_object* v_t_690_, lean_object* v_k_691_, lean_object* v_fallback_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_CodeAction_CommandCodeActions_insert_spec__0(v_00_u03b4_689_, v_t_690_, v_k_691_, v_fallback_692_);
lean_dec(v_fallback_692_);
lean_dec(v_k_691_);
lean_dec(v_t_690_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_262607364____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_695_ = ((lean_object*)(l_Lean_CodeAction_instInhabitedCommandCodeActions_default___closed__1));
v___x_696_ = lean_st_mk_ref(v___x_695_);
v___x_697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_697_, 0, v___x_696_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_262607364____hygCtx___hyg_2____boxed(lean_object* v_a_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_262607364____hygCtx___hyg_2_();
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_insertBuiltin(lean_object* v_args_700_, lean_object* v_proc_701_){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_703_ = l_Lean_CodeAction_builtinCmdCodeActions;
v___x_704_ = lean_st_ref_take(v___x_703_);
v___x_705_ = l_Lean_CodeAction_CommandCodeActions_insert(v___x_704_, v_args_700_, v_proc_701_);
v___x_706_ = lean_st_ref_set(v___x_703_, v___x_705_);
v___x_707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_707_, 0, v___x_706_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_insertBuiltin___boxed(lean_object* v_args_708_, lean_object* v_proc_709_, lean_object* v_a_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Lean_CodeAction_insertBuiltin(v_args_708_, v_proc_709_);
lean_dec_ref(v_args_708_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(lean_object* v_x_712_){
_start:
{
lean_object* v_fst_713_; 
v_fst_713_ = lean_ctor_get(v_x_712_, 0);
lean_inc(v_fst_713_);
return v_fst_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2____boxed(lean_object* v_x_714_){
_start:
{
lean_object* v_res_715_; 
v_res_715_ = l_Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(v_x_714_);
lean_dec_ref(v_x_714_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(lean_object* v_x_716_){
_start:
{
lean_object* v___x_717_; 
v___x_717_ = lean_box(0);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2____boxed(lean_object* v_x_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(v_x_718_);
lean_dec_ref(v_x_718_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__2_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(lean_object* v_x_720_, lean_object* v_s_721_){
_start:
{
lean_object* v_fst_722_; lean_object* v___x_723_; 
v_fst_722_ = lean_ctor_get(v_s_721_, 0);
lean_inc_n(v_fst_722_, 3);
v___x_723_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_723_, 0, v_fst_722_);
lean_ctor_set(v___x_723_, 1, v_fst_722_);
lean_ctor_set(v___x_723_, 2, v_fst_722_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__2_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2____boxed(lean_object* v_x_724_, lean_object* v_s_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_Lean_CodeAction_initFn___lam__2_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(v_x_724_, v_s_725_);
lean_dec_ref(v_s_725_);
lean_dec_ref(v_x_724_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__3_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(lean_object* v_x_727_, lean_object* v_x_728_){
_start:
{
lean_object* v_fst_729_; lean_object* v_fst_730_; lean_object* v_snd_731_; lean_object* v_snd_732_; lean_object* v___x_734_; uint8_t v_isShared_735_; uint8_t v_isSharedCheck_742_; 
v_fst_729_ = lean_ctor_get(v_x_728_, 0);
lean_inc(v_fst_729_);
v_fst_730_ = lean_ctor_get(v_x_727_, 0);
lean_inc(v_fst_730_);
v_snd_731_ = lean_ctor_get(v_x_727_, 1);
lean_inc(v_snd_731_);
lean_dec_ref(v_x_727_);
v_snd_732_ = lean_ctor_get(v_x_728_, 1);
v_isSharedCheck_742_ = !lean_is_exclusive(v_x_728_);
if (v_isSharedCheck_742_ == 0)
{
lean_object* v_unused_743_; 
v_unused_743_ = lean_ctor_get(v_x_728_, 0);
lean_dec(v_unused_743_);
v___x_734_ = v_x_728_;
v_isShared_735_ = v_isSharedCheck_742_;
goto v_resetjp_733_;
}
else
{
lean_inc(v_snd_732_);
lean_dec(v_x_728_);
v___x_734_ = lean_box(0);
v_isShared_735_ = v_isSharedCheck_742_;
goto v_resetjp_733_;
}
v_resetjp_733_:
{
lean_object* v_cmdKinds_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_740_; 
v_cmdKinds_736_ = lean_ctor_get(v_fst_729_, 1);
lean_inc_ref(v_cmdKinds_736_);
v___x_737_ = lean_array_push(v_fst_730_, v_fst_729_);
v___x_738_ = l_Lean_CodeAction_CommandCodeActions_insert(v_snd_731_, v_cmdKinds_736_, v_snd_732_);
lean_dec_ref(v_cmdKinds_736_);
if (v_isShared_735_ == 0)
{
lean_ctor_set(v___x_734_, 1, v___x_738_);
lean_ctor_set(v___x_734_, 0, v___x_737_);
v___x_740_ = v___x_734_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v___x_737_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v___x_738_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__4_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(lean_object* v___x_746_){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_748_ = lean_st_ref_get(v___x_746_);
v___x_749_ = ((lean_object*)(l_Lean_CodeAction_initFn___lam__4___closed__0_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_));
v___x_750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
lean_ctor_set(v___x_750_, 1, v___x_748_);
v___x_751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__4_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2____boxed(lean_object* v___x_752_, lean_object* v___y_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l_Lean_CodeAction_initFn___lam__4_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(v___x_752_);
lean_dec(v___x_752_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__spec__0(lean_object* v_as_755_, size_t v_i_756_, size_t v_stop_757_, lean_object* v_b_758_, lean_object* v___y_759_){
_start:
{
uint8_t v___x_761_; 
v___x_761_ = lean_usize_dec_eq(v_i_756_, v_stop_757_);
if (v___x_761_ == 0)
{
lean_object* v___x_762_; lean_object* v_declName_763_; lean_object* v_cmdKinds_764_; lean_object* v___x_765_; 
v___x_762_ = lean_array_uget_borrowed(v_as_755_, v_i_756_);
v_declName_763_ = lean_ctor_get(v___x_762_, 0);
v_cmdKinds_764_ = lean_ctor_get(v___x_762_, 1);
lean_inc(v_declName_763_);
v___x_765_ = l_Lean_CodeAction_mkCommandCodeAction(v_declName_763_, v___y_759_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v_a_766_; lean_object* v___x_767_; size_t v___x_768_; size_t v___x_769_; 
v_a_766_ = lean_ctor_get(v___x_765_, 0);
lean_inc(v_a_766_);
lean_dec_ref(v___x_765_);
v___x_767_ = l_Lean_CodeAction_CommandCodeActions_insert(v_b_758_, v_cmdKinds_764_, v_a_766_);
v___x_768_ = ((size_t)1ULL);
v___x_769_ = lean_usize_add(v_i_756_, v___x_768_);
v_i_756_ = v___x_769_;
v_b_758_ = v___x_767_;
goto _start;
}
else
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_778_; 
lean_dec_ref(v_b_758_);
v_a_771_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_778_ == 0)
{
v___x_773_ = v___x_765_;
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_765_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_776_; 
if (v_isShared_774_ == 0)
{
v___x_776_ = v___x_773_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_a_771_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
}
else
{
lean_object* v___x_779_; 
v___x_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_779_, 0, v_b_758_);
return v___x_779_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__spec__0___boxed(lean_object* v_as_780_, lean_object* v_i_781_, lean_object* v_stop_782_, lean_object* v_b_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
size_t v_i_boxed_786_; size_t v_stop_boxed_787_; lean_object* v_res_788_; 
v_i_boxed_786_ = lean_unbox_usize(v_i_781_);
lean_dec(v_i_781_);
v_stop_boxed_787_ = lean_unbox_usize(v_stop_782_);
lean_dec(v_stop_782_);
v_res_788_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__spec__0(v_as_780_, v_i_boxed_786_, v_stop_boxed_787_, v_b_783_, v___y_784_);
lean_dec_ref(v___y_784_);
lean_dec_ref(v_as_780_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__spec__1(lean_object* v_as_789_, size_t v_i_790_, size_t v_stop_791_, lean_object* v_b_792_, lean_object* v___y_793_){
_start:
{
lean_object* v_a_796_; lean_object* v___y_801_; uint8_t v___x_803_; 
v___x_803_ = lean_usize_dec_eq(v_i_790_, v_stop_791_);
if (v___x_803_ == 0)
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; uint8_t v___x_807_; 
v___x_804_ = lean_array_uget_borrowed(v_as_789_, v_i_790_);
v___x_805_ = lean_unsigned_to_nat(0u);
v___x_806_ = lean_array_get_size(v___x_804_);
v___x_807_ = lean_nat_dec_lt(v___x_805_, v___x_806_);
if (v___x_807_ == 0)
{
v_a_796_ = v_b_792_;
goto v___jp_795_;
}
else
{
uint8_t v___x_808_; 
v___x_808_ = lean_nat_dec_le(v___x_806_, v___x_806_);
if (v___x_808_ == 0)
{
if (v___x_807_ == 0)
{
v_a_796_ = v_b_792_;
goto v___jp_795_;
}
else
{
size_t v___x_809_; size_t v___x_810_; lean_object* v___x_811_; 
v___x_809_ = ((size_t)0ULL);
v___x_810_ = lean_usize_of_nat(v___x_806_);
v___x_811_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__spec__0(v___x_804_, v___x_809_, v___x_810_, v_b_792_, v___y_793_);
v___y_801_ = v___x_811_;
goto v___jp_800_;
}
}
else
{
size_t v___x_812_; size_t v___x_813_; lean_object* v___x_814_; 
v___x_812_ = ((size_t)0ULL);
v___x_813_ = lean_usize_of_nat(v___x_806_);
v___x_814_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__spec__0(v___x_804_, v___x_812_, v___x_813_, v_b_792_, v___y_793_);
v___y_801_ = v___x_814_;
goto v___jp_800_;
}
}
}
else
{
lean_object* v___x_815_; 
v___x_815_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_815_, 0, v_b_792_);
return v___x_815_;
}
v___jp_795_:
{
size_t v___x_797_; size_t v___x_798_; 
v___x_797_ = ((size_t)1ULL);
v___x_798_ = lean_usize_add(v_i_790_, v___x_797_);
v_i_790_ = v___x_798_;
v_b_792_ = v_a_796_;
goto _start;
}
v___jp_800_:
{
if (lean_obj_tag(v___y_801_) == 0)
{
lean_object* v_a_802_; 
v_a_802_ = lean_ctor_get(v___y_801_, 0);
lean_inc(v_a_802_);
lean_dec_ref(v___y_801_);
v_a_796_ = v_a_802_;
goto v___jp_795_;
}
else
{
return v___y_801_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__spec__1___boxed(lean_object* v_as_816_, lean_object* v_i_817_, lean_object* v_stop_818_, lean_object* v_b_819_, lean_object* v___y_820_, lean_object* v___y_821_){
_start:
{
size_t v_i_boxed_822_; size_t v_stop_boxed_823_; lean_object* v_res_824_; 
v_i_boxed_822_ = lean_unbox_usize(v_i_817_);
lean_dec(v_i_817_);
v_stop_boxed_823_ = lean_unbox_usize(v_stop_818_);
lean_dec(v_stop_818_);
v_res_824_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__spec__1(v_as_816_, v_i_boxed_822_, v_stop_boxed_823_, v_b_819_, v___y_820_);
lean_dec_ref(v___y_820_);
lean_dec_ref(v_as_816_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__5_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(lean_object* v___x_825_, lean_object* v_as_826_, lean_object* v___y_827_){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v_a_832_; lean_object* v___y_837_; lean_object* v___x_847_; uint8_t v___x_848_; 
v___x_829_ = lean_st_ref_get(v___x_825_);
v___x_830_ = lean_unsigned_to_nat(0u);
v___x_847_ = lean_array_get_size(v_as_826_);
v___x_848_ = lean_nat_dec_lt(v___x_830_, v___x_847_);
if (v___x_848_ == 0)
{
v_a_832_ = v___x_829_;
goto v___jp_831_;
}
else
{
uint8_t v___x_849_; 
v___x_849_ = lean_nat_dec_le(v___x_847_, v___x_847_);
if (v___x_849_ == 0)
{
if (v___x_848_ == 0)
{
v_a_832_ = v___x_829_;
goto v___jp_831_;
}
else
{
size_t v___x_850_; size_t v___x_851_; lean_object* v___x_852_; 
v___x_850_ = ((size_t)0ULL);
v___x_851_ = lean_usize_of_nat(v___x_847_);
v___x_852_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__spec__1(v_as_826_, v___x_850_, v___x_851_, v___x_829_, v___y_827_);
v___y_837_ = v___x_852_;
goto v___jp_836_;
}
}
else
{
size_t v___x_853_; size_t v___x_854_; lean_object* v___x_855_; 
v___x_853_ = ((size_t)0ULL);
v___x_854_ = lean_usize_of_nat(v___x_847_);
v___x_855_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__spec__1(v_as_826_, v___x_853_, v___x_854_, v___x_829_, v___y_827_);
v___y_837_ = v___x_855_;
goto v___jp_836_;
}
}
v___jp_831_:
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_833_ = ((lean_object*)(l_Lean_CodeAction_initFn___lam__4___closed__0_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_));
v___x_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_834_, 0, v___x_833_);
lean_ctor_set(v___x_834_, 1, v_a_832_);
v___x_835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
return v___x_835_;
}
v___jp_836_:
{
if (lean_obj_tag(v___y_837_) == 0)
{
lean_object* v_a_838_; 
v_a_838_ = lean_ctor_get(v___y_837_, 0);
lean_inc(v_a_838_);
lean_dec_ref(v___y_837_);
v_a_832_ = v_a_838_;
goto v___jp_831_;
}
else
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
v_a_839_ = lean_ctor_get(v___y_837_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___y_837_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___y_837_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___y_837_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_a_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn___lam__5_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2____boxed(lean_object* v___x_856_, lean_object* v_as_857_, lean_object* v___y_858_, lean_object* v___y_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l_Lean_CodeAction_initFn___lam__5_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(v___x_856_, v_as_857_, v___y_858_);
lean_dec_ref(v___y_858_);
lean_dec_ref(v_as_857_);
lean_dec(v___x_856_);
return v_res_860_;
}
}
static lean_object* _init_l_Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_870_; lean_object* v___f_871_; 
v___x_870_ = l_Lean_CodeAction_builtinCmdCodeActions;
v___f_871_ = lean_alloc_closure((void*)(l_Lean_CodeAction_initFn___lam__4_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_871_, 0, v___x_870_);
return v___f_871_;
}
}
static lean_object* _init_l_Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_872_; lean_object* v___f_873_; 
v___x_872_ = l_Lean_CodeAction_builtinCmdCodeActions;
v___f_873_ = lean_alloc_closure((void*)(l_Lean_CodeAction_initFn___lam__5_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2____boxed), 4, 1);
lean_closure_set(v___f_873_, 0, v___x_872_);
return v___f_873_;
}
}
static lean_object* _init_l_Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___f_876_; lean_object* v___f_877_; lean_object* v___f_878_; lean_object* v___f_879_; lean_object* v___f_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_874_ = lean_box(0);
v___x_875_ = lean_box(2);
v___f_876_ = ((lean_object*)(l_Lean_CodeAction_initFn___closed__1_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_));
v___f_877_ = ((lean_object*)(l_Lean_CodeAction_initFn___closed__2_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_));
v___f_878_ = ((lean_object*)(l_Lean_CodeAction_initFn___closed__3_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_));
v___f_879_ = lean_obj_once(&l_Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_, &l_Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__once, _init_l_Lean_CodeAction_initFn___closed__7_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_);
v___f_880_ = lean_obj_once(&l_Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_, &l_Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__once, _init_l_Lean_CodeAction_initFn___closed__6_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_);
v___x_881_ = ((lean_object*)(l_Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_));
v___x_882_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_882_, 0, v___x_881_);
lean_ctor_set(v___x_882_, 1, v___f_880_);
lean_ctor_set(v___x_882_, 2, v___f_879_);
lean_ctor_set(v___x_882_, 3, v___f_878_);
lean_ctor_set(v___x_882_, 4, v___f_877_);
lean_ctor_set(v___x_882_, 5, v___f_876_);
lean_ctor_set(v___x_882_, 6, v___x_875_);
lean_ctor_set(v___x_882_, 7, v___x_874_);
return v___x_882_;
}
}
static lean_object* _init_l_Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___f_883_ = ((lean_object*)(l_Lean_CodeAction_initFn___closed__0_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_));
v___x_884_ = lean_obj_once(&l_Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_, &l_Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__once, _init_l_Lean_CodeAction_initFn___closed__8_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_);
v___x_885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_885_, 0, v___x_884_);
lean_ctor_set(v___x_885_, 1, v___f_883_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = lean_obj_once(&l_Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_, &l_Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2__once, _init_l_Lean_CodeAction_initFn___closed__9_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_);
v___x_888_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_887_);
return v___x_888_;
}
}
LEAN_EXPORT lean_object* l_Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2____boxed(lean_object* v_a_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l_Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_();
return v_res_890_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4_spec__8___redArg(lean_object* v_keys_891_, lean_object* v_i_892_, lean_object* v_k_893_){
_start:
{
lean_object* v___x_894_; uint8_t v___x_895_; 
v___x_894_ = lean_array_get_size(v_keys_891_);
v___x_895_ = lean_nat_dec_lt(v_i_892_, v___x_894_);
if (v___x_895_ == 0)
{
lean_dec(v_i_892_);
return v___x_895_;
}
else
{
lean_object* v_k_x27_896_; uint8_t v___x_897_; 
v_k_x27_896_ = lean_array_fget_borrowed(v_keys_891_, v_i_892_);
v___x_897_ = l_Lean_instBEqExtraModUse_beq(v_k_893_, v_k_x27_896_);
if (v___x_897_ == 0)
{
lean_object* v___x_898_; lean_object* v___x_899_; 
v___x_898_ = lean_unsigned_to_nat(1u);
v___x_899_ = lean_nat_add(v_i_892_, v___x_898_);
lean_dec(v_i_892_);
v_i_892_ = v___x_899_;
goto _start;
}
else
{
lean_dec(v_i_892_);
return v___x_897_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4_spec__8___redArg___boxed(lean_object* v_keys_901_, lean_object* v_i_902_, lean_object* v_k_903_){
_start:
{
uint8_t v_res_904_; lean_object* v_r_905_; 
v_res_904_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4_spec__8___redArg(v_keys_901_, v_i_902_, v_k_903_);
lean_dec_ref(v_k_903_);
lean_dec_ref(v_keys_901_);
v_r_905_ = lean_box(v_res_904_);
return v_r_905_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg___closed__0(void){
_start:
{
size_t v___x_906_; size_t v___x_907_; size_t v___x_908_; 
v___x_906_ = ((size_t)5ULL);
v___x_907_ = ((size_t)1ULL);
v___x_908_ = lean_usize_shift_left(v___x_907_, v___x_906_);
return v___x_908_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_909_; size_t v___x_910_; size_t v___x_911_; 
v___x_909_ = ((size_t)1ULL);
v___x_910_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg___closed__0);
v___x_911_ = lean_usize_sub(v___x_910_, v___x_909_);
return v___x_911_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg(lean_object* v_x_912_, size_t v_x_913_, lean_object* v_x_914_){
_start:
{
if (lean_obj_tag(v_x_912_) == 0)
{
lean_object* v_es_915_; lean_object* v___x_916_; size_t v___x_917_; size_t v___x_918_; size_t v___x_919_; lean_object* v_j_920_; lean_object* v___x_921_; 
v_es_915_ = lean_ctor_get(v_x_912_, 0);
lean_inc_ref(v_es_915_);
lean_dec_ref(v_x_912_);
v___x_916_ = lean_box(2);
v___x_917_ = ((size_t)5ULL);
v___x_918_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg___closed__1);
v___x_919_ = lean_usize_land(v_x_913_, v___x_918_);
v_j_920_ = lean_usize_to_nat(v___x_919_);
v___x_921_ = lean_array_get(v___x_916_, v_es_915_, v_j_920_);
lean_dec(v_j_920_);
lean_dec_ref(v_es_915_);
switch(lean_obj_tag(v___x_921_))
{
case 0:
{
lean_object* v_key_922_; uint8_t v___x_923_; 
v_key_922_ = lean_ctor_get(v___x_921_, 0);
lean_inc(v_key_922_);
lean_dec_ref(v___x_921_);
v___x_923_ = l_Lean_instBEqExtraModUse_beq(v_x_914_, v_key_922_);
lean_dec(v_key_922_);
return v___x_923_;
}
case 1:
{
lean_object* v_node_924_; size_t v___x_925_; 
v_node_924_ = lean_ctor_get(v___x_921_, 0);
lean_inc(v_node_924_);
lean_dec_ref(v___x_921_);
v___x_925_ = lean_usize_shift_right(v_x_913_, v___x_917_);
v_x_912_ = v_node_924_;
v_x_913_ = v___x_925_;
goto _start;
}
default: 
{
uint8_t v___x_927_; 
v___x_927_ = 0;
return v___x_927_;
}
}
}
else
{
lean_object* v_ks_928_; lean_object* v___x_929_; uint8_t v___x_930_; 
v_ks_928_ = lean_ctor_get(v_x_912_, 0);
lean_inc_ref(v_ks_928_);
lean_dec_ref(v_x_912_);
v___x_929_ = lean_unsigned_to_nat(0u);
v___x_930_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4_spec__8___redArg(v_ks_928_, v___x_929_, v_x_914_);
lean_dec_ref(v_ks_928_);
return v___x_930_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_x_931_, lean_object* v_x_932_, lean_object* v_x_933_){
_start:
{
size_t v_x_6074__boxed_934_; uint8_t v_res_935_; lean_object* v_r_936_; 
v_x_6074__boxed_934_ = lean_unbox_usize(v_x_932_);
lean_dec(v_x_932_);
v_res_935_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg(v_x_931_, v_x_6074__boxed_934_, v_x_933_);
lean_dec_ref(v_x_933_);
v_r_936_ = lean_box(v_res_935_);
return v_r_936_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(lean_object* v_x_937_, lean_object* v_x_938_){
_start:
{
uint64_t v___x_939_; size_t v___x_940_; uint8_t v___x_941_; 
v___x_939_ = l_Lean_instHashableExtraModUse_hash(v_x_938_);
v___x_940_ = lean_uint64_to_usize(v___x_939_);
v___x_941_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg(v_x_937_, v___x_940_, v_x_938_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_x_942_, lean_object* v_x_943_){
_start:
{
uint8_t v_res_944_; lean_object* v_r_945_; 
v_res_944_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(v_x_942_, v_x_943_);
lean_dec_ref(v_x_943_);
v_r_945_ = lean_box(v_res_944_);
return v_r_945_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4___closed__0(void){
_start:
{
lean_object* v___x_946_; double v___x_947_; 
v___x_946_ = lean_unsigned_to_nat(0u);
v___x_947_ = lean_float_of_nat(v___x_946_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4(lean_object* v_cls_951_, lean_object* v_msg_952_, lean_object* v___y_953_, lean_object* v___y_954_){
_start:
{
lean_object* v_ref_956_; lean_object* v___x_957_; lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_1002_; 
v_ref_956_ = lean_ctor_get(v___y_953_, 5);
v___x_957_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0(v_msg_952_, v___y_953_, v___y_954_);
v_a_958_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_960_ = v___x_957_;
v_isShared_961_ = v_isSharedCheck_1002_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_957_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_1002_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_962_; lean_object* v_traceState_963_; lean_object* v_env_964_; lean_object* v_nextMacroScope_965_; lean_object* v_ngen_966_; lean_object* v_auxDeclNGen_967_; lean_object* v_cache_968_; lean_object* v_messages_969_; lean_object* v_infoState_970_; lean_object* v_snapshotTasks_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_1001_; 
v___x_962_ = lean_st_ref_take(v___y_954_);
v_traceState_963_ = lean_ctor_get(v___x_962_, 4);
v_env_964_ = lean_ctor_get(v___x_962_, 0);
v_nextMacroScope_965_ = lean_ctor_get(v___x_962_, 1);
v_ngen_966_ = lean_ctor_get(v___x_962_, 2);
v_auxDeclNGen_967_ = lean_ctor_get(v___x_962_, 3);
v_cache_968_ = lean_ctor_get(v___x_962_, 5);
v_messages_969_ = lean_ctor_get(v___x_962_, 6);
v_infoState_970_ = lean_ctor_get(v___x_962_, 7);
v_snapshotTasks_971_ = lean_ctor_get(v___x_962_, 8);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_973_ = v___x_962_;
v_isShared_974_ = v_isSharedCheck_1001_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_snapshotTasks_971_);
lean_inc(v_infoState_970_);
lean_inc(v_messages_969_);
lean_inc(v_cache_968_);
lean_inc(v_traceState_963_);
lean_inc(v_auxDeclNGen_967_);
lean_inc(v_ngen_966_);
lean_inc(v_nextMacroScope_965_);
lean_inc(v_env_964_);
lean_dec(v___x_962_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_1001_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
uint64_t v_tid_975_; lean_object* v_traces_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_1000_; 
v_tid_975_ = lean_ctor_get_uint64(v_traceState_963_, sizeof(void*)*1);
v_traces_976_ = lean_ctor_get(v_traceState_963_, 0);
v_isSharedCheck_1000_ = !lean_is_exclusive(v_traceState_963_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_978_ = v_traceState_963_;
v_isShared_979_ = v_isSharedCheck_1000_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_traces_976_);
lean_dec(v_traceState_963_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_1000_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v___x_980_; double v___x_981_; uint8_t v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_990_; 
v___x_980_ = lean_box(0);
v___x_981_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4___closed__0);
v___x_982_ = 0;
v___x_983_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4___closed__1));
v___x_984_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_984_, 0, v_cls_951_);
lean_ctor_set(v___x_984_, 1, v___x_980_);
lean_ctor_set(v___x_984_, 2, v___x_983_);
lean_ctor_set_float(v___x_984_, sizeof(void*)*3, v___x_981_);
lean_ctor_set_float(v___x_984_, sizeof(void*)*3 + 8, v___x_981_);
lean_ctor_set_uint8(v___x_984_, sizeof(void*)*3 + 16, v___x_982_);
v___x_985_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4___closed__2));
v___x_986_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_986_, 0, v___x_984_);
lean_ctor_set(v___x_986_, 1, v_a_958_);
lean_ctor_set(v___x_986_, 2, v___x_985_);
lean_inc(v_ref_956_);
v___x_987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_987_, 0, v_ref_956_);
lean_ctor_set(v___x_987_, 1, v___x_986_);
v___x_988_ = l_Lean_PersistentArray_push___redArg(v_traces_976_, v___x_987_);
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 0, v___x_988_);
v___x_990_ = v___x_978_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v___x_988_);
lean_ctor_set_uint64(v_reuseFailAlloc_999_, sizeof(void*)*1, v_tid_975_);
v___x_990_ = v_reuseFailAlloc_999_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
lean_object* v___x_992_; 
if (v_isShared_974_ == 0)
{
lean_ctor_set(v___x_973_, 4, v___x_990_);
v___x_992_ = v___x_973_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_env_964_);
lean_ctor_set(v_reuseFailAlloc_998_, 1, v_nextMacroScope_965_);
lean_ctor_set(v_reuseFailAlloc_998_, 2, v_ngen_966_);
lean_ctor_set(v_reuseFailAlloc_998_, 3, v_auxDeclNGen_967_);
lean_ctor_set(v_reuseFailAlloc_998_, 4, v___x_990_);
lean_ctor_set(v_reuseFailAlloc_998_, 5, v_cache_968_);
lean_ctor_set(v_reuseFailAlloc_998_, 6, v_messages_969_);
lean_ctor_set(v_reuseFailAlloc_998_, 7, v_infoState_970_);
lean_ctor_set(v_reuseFailAlloc_998_, 8, v_snapshotTasks_971_);
v___x_992_ = v_reuseFailAlloc_998_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_996_; 
v___x_993_ = lean_st_ref_set(v___y_954_, v___x_992_);
v___x_994_ = lean_box(0);
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 0, v___x_994_);
v___x_996_ = v___x_960_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v___x_994_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4___boxed(lean_object* v_cls_1003_, lean_object* v_msg_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4(v_cls_1003_, v_msg_1004_, v___y_1005_, v___y_1006_);
lean_dec(v___y_1006_);
lean_dec_ref(v___y_1005_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg(lean_object* v_cls_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v_options_1015_; uint8_t v_hasTrace_1016_; 
v_options_1015_ = lean_ctor_get(v___y_1013_, 2);
v_hasTrace_1016_ = lean_ctor_get_uint8(v_options_1015_, sizeof(void*)*1);
if (v_hasTrace_1016_ == 0)
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
lean_dec(v_cls_1012_);
v___x_1017_ = lean_box(v_hasTrace_1016_);
v___x_1018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1017_);
return v___x_1018_;
}
else
{
lean_object* v_inheritedTraceOptions_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; uint8_t v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
v_inheritedTraceOptions_1019_ = lean_ctor_get(v___y_1013_, 13);
v___x_1020_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg___closed__1));
v___x_1021_ = l_Lean_Name_append(v___x_1020_, v_cls_1012_);
v___x_1022_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1019_, v_options_1015_, v___x_1021_);
lean_dec(v___x_1021_);
v___x_1023_ = lean_box(v___x_1022_);
v___x_1024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1023_);
return v___x_1024_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_cls_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg(v_cls_1025_, v___y_1026_);
lean_dec_ref(v___y_1026_);
return v_res_1028_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__2(void){
_start:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; 
v___x_1031_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__1));
v___x_1032_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__0));
v___x_1033_ = l_Lean_PersistentHashMap_empty(lean_box(0), lean_box(0), v___x_1032_, v___x_1031_);
return v___x_1033_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__6(void){
_start:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1038_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__5));
v___x_1039_ = l_Lean_stringToMessageData(v___x_1038_);
return v___x_1039_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__8(void){
_start:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1041_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__7));
v___x_1042_ = l_Lean_stringToMessageData(v___x_1041_);
return v___x_1042_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__9(void){
_start:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4___closed__1));
v___x_1044_ = l_Lean_stringToMessageData(v___x_1043_);
return v___x_1044_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__11(void){
_start:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1046_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__10));
v___x_1047_ = l_Lean_stringToMessageData(v___x_1046_);
return v___x_1047_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__13(void){
_start:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1049_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__12));
v___x_1050_ = l_Lean_stringToMessageData(v___x_1049_);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1(lean_object* v_mod_1055_, uint8_t v_isMeta_1056_, lean_object* v_hint_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_){
_start:
{
lean_object* v___x_1061_; lean_object* v_env_1062_; uint8_t v_isExporting_1063_; lean_object* v___x_1064_; lean_object* v_env_1065_; lean_object* v___x_1066_; lean_object* v_entry_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___y_1072_; lean_object* v___x_1097_; uint8_t v___x_1098_; 
v___x_1061_ = lean_st_ref_get(v___y_1059_);
v_env_1062_ = lean_ctor_get(v___x_1061_, 0);
lean_inc_ref(v_env_1062_);
lean_dec(v___x_1061_);
v_isExporting_1063_ = lean_ctor_get_uint8(v_env_1062_, sizeof(void*)*8);
lean_dec_ref(v_env_1062_);
v___x_1064_ = lean_st_ref_get(v___y_1059_);
v_env_1065_ = lean_ctor_get(v___x_1064_, 0);
lean_inc_ref(v_env_1065_);
lean_dec(v___x_1064_);
v___x_1066_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__2);
lean_inc(v_mod_1055_);
v_entry_1067_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_1067_, 0, v_mod_1055_);
lean_ctor_set_uint8(v_entry_1067_, sizeof(void*)*1, v_isExporting_1063_);
lean_ctor_set_uint8(v_entry_1067_, sizeof(void*)*1 + 1, v_isMeta_1056_);
v___x_1068_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1069_ = lean_box(1);
v___x_1070_ = lean_box(0);
v___x_1097_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1066_, v___x_1068_, v_env_1065_, v___x_1069_, v___x_1070_);
v___x_1098_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(v___x_1097_, v_entry_1067_);
if (v___x_1098_ == 0)
{
lean_object* v_cls_1099_; lean_object* v___x_1100_; lean_object* v_a_1101_; lean_object* v___y_1103_; lean_object* v___y_1104_; lean_object* v___y_1108_; lean_object* v___y_1109_; uint8_t v___x_1121_; 
v_cls_1099_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__4));
v___x_1100_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg(v_cls_1099_, v___y_1058_);
v_a_1101_ = lean_ctor_get(v___x_1100_, 0);
lean_inc(v_a_1101_);
lean_dec_ref(v___x_1100_);
v___x_1121_ = lean_unbox(v_a_1101_);
lean_dec(v_a_1101_);
if (v___x_1121_ == 0)
{
lean_dec(v_hint_1057_);
lean_dec(v_mod_1055_);
v___y_1072_ = v___y_1059_;
goto v___jp_1071_;
}
else
{
lean_object* v___x_1122_; lean_object* v___y_1124_; 
v___x_1122_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__11);
if (v_isExporting_1063_ == 0)
{
lean_object* v___x_1131_; 
v___x_1131_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__16));
v___y_1124_ = v___x_1131_;
goto v___jp_1123_;
}
else
{
lean_object* v___x_1132_; 
v___x_1132_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__17));
v___y_1124_ = v___x_1132_;
goto v___jp_1123_;
}
v___jp_1123_:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; 
lean_inc_ref(v___y_1124_);
v___x_1125_ = l_Lean_stringToMessageData(v___y_1124_);
v___x_1126_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1122_);
lean_ctor_set(v___x_1126_, 1, v___x_1125_);
v___x_1127_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__13);
v___x_1128_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1128_, 0, v___x_1126_);
lean_ctor_set(v___x_1128_, 1, v___x_1127_);
if (v_isMeta_1056_ == 0)
{
lean_object* v___x_1129_; 
v___x_1129_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__14));
v___y_1108_ = v___x_1128_;
v___y_1109_ = v___x_1129_;
goto v___jp_1107_;
}
else
{
lean_object* v___x_1130_; 
v___x_1130_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__15));
v___y_1108_ = v___x_1128_;
v___y_1109_ = v___x_1130_;
goto v___jp_1107_;
}
}
}
v___jp_1102_:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1105_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1105_, 0, v___y_1103_);
lean_ctor_set(v___x_1105_, 1, v___y_1104_);
v___x_1106_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__4(v_cls_1099_, v___x_1105_, v___y_1058_, v___y_1059_);
if (lean_obj_tag(v___x_1106_) == 0)
{
lean_dec_ref(v___x_1106_);
v___y_1072_ = v___y_1059_;
goto v___jp_1071_;
}
else
{
lean_dec_ref(v_entry_1067_);
return v___x_1106_;
}
}
v___jp_1107_:
{
lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; uint8_t v___x_1116_; 
lean_inc_ref(v___y_1109_);
v___x_1110_ = l_Lean_stringToMessageData(v___y_1109_);
v___x_1111_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___y_1108_);
lean_ctor_set(v___x_1111_, 1, v___x_1110_);
v___x_1112_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__6);
v___x_1113_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1111_);
lean_ctor_set(v___x_1113_, 1, v___x_1112_);
v___x_1114_ = l_Lean_MessageData_ofName(v_mod_1055_);
v___x_1115_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1113_);
lean_ctor_set(v___x_1115_, 1, v___x_1114_);
v___x_1116_ = l_Lean_Name_isAnonymous(v_hint_1057_);
if (v___x_1116_ == 0)
{
lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1117_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__8);
v___x_1118_ = l_Lean_MessageData_ofName(v_hint_1057_);
v___x_1119_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1117_);
lean_ctor_set(v___x_1119_, 1, v___x_1118_);
v___y_1103_ = v___x_1115_;
v___y_1104_ = v___x_1119_;
goto v___jp_1102_;
}
else
{
lean_object* v___x_1120_; 
lean_dec(v_hint_1057_);
v___x_1120_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___closed__9);
v___y_1103_ = v___x_1115_;
v___y_1104_ = v___x_1120_;
goto v___jp_1102_;
}
}
}
else
{
lean_object* v___x_1133_; lean_object* v___x_1134_; 
lean_dec_ref(v_entry_1067_);
lean_dec(v_hint_1057_);
lean_dec(v_mod_1055_);
v___x_1133_ = lean_box(0);
v___x_1134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1133_);
return v___x_1134_;
}
v___jp_1071_:
{
lean_object* v___x_1073_; lean_object* v_toEnvExtension_1074_; lean_object* v_env_1075_; lean_object* v_nextMacroScope_1076_; lean_object* v_ngen_1077_; lean_object* v_auxDeclNGen_1078_; lean_object* v_traceState_1079_; lean_object* v_messages_1080_; lean_object* v_infoState_1081_; lean_object* v_snapshotTasks_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1095_; 
v___x_1073_ = lean_st_ref_take(v___y_1072_);
v_toEnvExtension_1074_ = lean_ctor_get(v___x_1068_, 0);
v_env_1075_ = lean_ctor_get(v___x_1073_, 0);
v_nextMacroScope_1076_ = lean_ctor_get(v___x_1073_, 1);
v_ngen_1077_ = lean_ctor_get(v___x_1073_, 2);
v_auxDeclNGen_1078_ = lean_ctor_get(v___x_1073_, 3);
v_traceState_1079_ = lean_ctor_get(v___x_1073_, 4);
v_messages_1080_ = lean_ctor_get(v___x_1073_, 6);
v_infoState_1081_ = lean_ctor_get(v___x_1073_, 7);
v_snapshotTasks_1082_ = lean_ctor_get(v___x_1073_, 8);
v_isSharedCheck_1095_ = !lean_is_exclusive(v___x_1073_);
if (v_isSharedCheck_1095_ == 0)
{
lean_object* v_unused_1096_; 
v_unused_1096_ = lean_ctor_get(v___x_1073_, 5);
lean_dec(v_unused_1096_);
v___x_1084_ = v___x_1073_;
v_isShared_1085_ = v_isSharedCheck_1095_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_snapshotTasks_1082_);
lean_inc(v_infoState_1081_);
lean_inc(v_messages_1080_);
lean_inc(v_traceState_1079_);
lean_inc(v_auxDeclNGen_1078_);
lean_inc(v_ngen_1077_);
lean_inc(v_nextMacroScope_1076_);
lean_inc(v_env_1075_);
lean_dec(v___x_1073_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1095_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v_asyncMode_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1090_; 
v_asyncMode_1086_ = lean_ctor_get(v_toEnvExtension_1074_, 2);
v___x_1087_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1068_, v_env_1075_, v_entry_1067_, v_asyncMode_1086_, v___x_1070_);
v___x_1088_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_);
if (v_isShared_1085_ == 0)
{
lean_ctor_set(v___x_1084_, 5, v___x_1088_);
lean_ctor_set(v___x_1084_, 0, v___x_1087_);
v___x_1090_ = v___x_1084_;
goto v_reusejp_1089_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v___x_1087_);
lean_ctor_set(v_reuseFailAlloc_1094_, 1, v_nextMacroScope_1076_);
lean_ctor_set(v_reuseFailAlloc_1094_, 2, v_ngen_1077_);
lean_ctor_set(v_reuseFailAlloc_1094_, 3, v_auxDeclNGen_1078_);
lean_ctor_set(v_reuseFailAlloc_1094_, 4, v_traceState_1079_);
lean_ctor_set(v_reuseFailAlloc_1094_, 5, v___x_1088_);
lean_ctor_set(v_reuseFailAlloc_1094_, 6, v_messages_1080_);
lean_ctor_set(v_reuseFailAlloc_1094_, 7, v_infoState_1081_);
lean_ctor_set(v_reuseFailAlloc_1094_, 8, v_snapshotTasks_1082_);
v___x_1090_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1089_;
}
v_reusejp_1089_:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1091_ = lean_st_ref_set(v___y_1072_, v___x_1090_);
v___x_1092_ = lean_box(0);
v___x_1093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1092_);
return v___x_1093_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1___boxed(lean_object* v_mod_1135_, lean_object* v_isMeta_1136_, lean_object* v_hint_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_){
_start:
{
uint8_t v_isMeta_boxed_1141_; lean_object* v_res_1142_; 
v_isMeta_boxed_1141_ = lean_unbox(v_isMeta_1136_);
v_res_1142_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1(v_mod_1135_, v_isMeta_boxed_1141_, v_hint_1137_, v___y_1138_, v___y_1139_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3_spec__7___redArg(lean_object* v_a_1143_, lean_object* v_x_1144_){
_start:
{
if (lean_obj_tag(v_x_1144_) == 0)
{
lean_object* v___x_1145_; 
v___x_1145_ = lean_box(0);
return v___x_1145_;
}
else
{
lean_object* v_key_1146_; lean_object* v_value_1147_; lean_object* v_tail_1148_; uint8_t v___x_1149_; 
v_key_1146_ = lean_ctor_get(v_x_1144_, 0);
v_value_1147_ = lean_ctor_get(v_x_1144_, 1);
v_tail_1148_ = lean_ctor_get(v_x_1144_, 2);
v___x_1149_ = lean_name_eq(v_key_1146_, v_a_1143_);
if (v___x_1149_ == 0)
{
v_x_1144_ = v_tail_1148_;
goto _start;
}
else
{
lean_object* v___x_1151_; 
lean_inc(v_value_1147_);
v___x_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1151_, 0, v_value_1147_);
return v___x_1151_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3_spec__7___redArg___boxed(lean_object* v_a_1152_, lean_object* v_x_1153_){
_start:
{
lean_object* v_res_1154_; 
v_res_1154_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3_spec__7___redArg(v_a_1152_, v_x_1153_);
lean_dec(v_x_1153_);
lean_dec(v_a_1152_);
return v_res_1154_;
}
}
static uint64_t _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1155_; uint64_t v___x_1156_; 
v___x_1155_ = lean_unsigned_to_nat(1723u);
v___x_1156_ = lean_uint64_of_nat(v___x_1155_);
return v___x_1156_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3___redArg(lean_object* v_m_1157_, lean_object* v_a_1158_){
_start:
{
lean_object* v_buckets_1159_; lean_object* v___x_1160_; uint64_t v___y_1162_; 
v_buckets_1159_ = lean_ctor_get(v_m_1157_, 1);
v___x_1160_ = lean_array_get_size(v_buckets_1159_);
if (lean_obj_tag(v_a_1158_) == 0)
{
uint64_t v___x_1176_; 
v___x_1176_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3___redArg___closed__0);
v___y_1162_ = v___x_1176_;
goto v___jp_1161_;
}
else
{
uint64_t v_hash_1177_; 
v_hash_1177_ = lean_ctor_get_uint64(v_a_1158_, sizeof(void*)*2);
v___y_1162_ = v_hash_1177_;
goto v___jp_1161_;
}
v___jp_1161_:
{
uint64_t v___x_1163_; uint64_t v___x_1164_; uint64_t v_fold_1165_; uint64_t v___x_1166_; uint64_t v___x_1167_; uint64_t v___x_1168_; size_t v___x_1169_; size_t v___x_1170_; size_t v___x_1171_; size_t v___x_1172_; size_t v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v___x_1163_ = 32ULL;
v___x_1164_ = lean_uint64_shift_right(v___y_1162_, v___x_1163_);
v_fold_1165_ = lean_uint64_xor(v___y_1162_, v___x_1164_);
v___x_1166_ = 16ULL;
v___x_1167_ = lean_uint64_shift_right(v_fold_1165_, v___x_1166_);
v___x_1168_ = lean_uint64_xor(v_fold_1165_, v___x_1167_);
v___x_1169_ = lean_uint64_to_usize(v___x_1168_);
v___x_1170_ = lean_usize_of_nat(v___x_1160_);
v___x_1171_ = ((size_t)1ULL);
v___x_1172_ = lean_usize_sub(v___x_1170_, v___x_1171_);
v___x_1173_ = lean_usize_land(v___x_1169_, v___x_1172_);
v___x_1174_ = lean_array_uget_borrowed(v_buckets_1159_, v___x_1173_);
v___x_1175_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3_spec__7___redArg(v_a_1158_, v___x_1174_);
return v___x_1175_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3___redArg___boxed(lean_object* v_m_1178_, lean_object* v_a_1179_){
_start:
{
lean_object* v_res_1180_; 
v_res_1180_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3___redArg(v_m_1178_, v_a_1179_);
lean_dec(v_a_1179_);
lean_dec_ref(v_m_1178_);
return v_res_1180_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__2(lean_object* v___x_1181_, lean_object* v_declName_1182_, lean_object* v_as_1183_, size_t v_sz_1184_, size_t v_i_1185_, lean_object* v_b_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_){
_start:
{
uint8_t v___x_1190_; 
v___x_1190_ = lean_usize_dec_lt(v_i_1185_, v_sz_1184_);
if (v___x_1190_ == 0)
{
lean_object* v___x_1191_; 
lean_dec(v_declName_1182_);
v___x_1191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1191_, 0, v_b_1186_);
return v___x_1191_;
}
else
{
lean_object* v___x_1192_; lean_object* v_modules_1193_; lean_object* v___x_1194_; lean_object* v_a_1195_; lean_object* v___x_1196_; lean_object* v_toImport_1197_; lean_object* v_module_1198_; uint8_t v___x_1199_; lean_object* v___x_1200_; 
v___x_1192_ = l_Lean_Environment_header(v___x_1181_);
v_modules_1193_ = lean_ctor_get(v___x_1192_, 3);
lean_inc_ref(v_modules_1193_);
lean_dec_ref(v___x_1192_);
v___x_1194_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_1195_ = lean_array_uget_borrowed(v_as_1183_, v_i_1185_);
v___x_1196_ = lean_array_get(v___x_1194_, v_modules_1193_, v_a_1195_);
lean_dec_ref(v_modules_1193_);
v_toImport_1197_ = lean_ctor_get(v___x_1196_, 0);
lean_inc_ref(v_toImport_1197_);
lean_dec(v___x_1196_);
v_module_1198_ = lean_ctor_get(v_toImport_1197_, 0);
lean_inc(v_module_1198_);
lean_dec_ref(v_toImport_1197_);
v___x_1199_ = 0;
lean_inc(v_declName_1182_);
v___x_1200_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1(v_module_1198_, v___x_1199_, v_declName_1182_, v___y_1187_, v___y_1188_);
if (lean_obj_tag(v___x_1200_) == 0)
{
lean_object* v___x_1201_; size_t v___x_1202_; size_t v___x_1203_; 
lean_dec_ref(v___x_1200_);
v___x_1201_ = lean_box(0);
v___x_1202_ = ((size_t)1ULL);
v___x_1203_ = lean_usize_add(v_i_1185_, v___x_1202_);
v_i_1185_ = v___x_1203_;
v_b_1186_ = v___x_1201_;
goto _start;
}
else
{
lean_dec(v_declName_1182_);
return v___x_1200_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v___x_1205_, lean_object* v_declName_1206_, lean_object* v_as_1207_, lean_object* v_sz_1208_, lean_object* v_i_1209_, lean_object* v_b_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_){
_start:
{
size_t v_sz_boxed_1214_; size_t v_i_boxed_1215_; lean_object* v_res_1216_; 
v_sz_boxed_1214_ = lean_unbox_usize(v_sz_1208_);
lean_dec(v_sz_1208_);
v_i_boxed_1215_ = lean_unbox_usize(v_i_1209_);
lean_dec(v_i_1209_);
v_res_1216_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__2(v___x_1205_, v_declName_1206_, v_as_1207_, v_sz_boxed_1214_, v_i_boxed_1215_, v_b_1210_, v___y_1211_, v___y_1212_);
lean_dec(v___y_1212_);
lean_dec_ref(v___y_1211_);
lean_dec_ref(v_as_1207_);
lean_dec_ref(v___x_1205_);
return v_res_1216_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___closed__2(void){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1219_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___closed__1));
v___x_1220_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___closed__0));
v___x_1221_ = l_Std_HashMap_instInhabited(lean_box(0), lean_box(0), v___x_1220_, v___x_1219_);
return v___x_1221_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1(lean_object* v_declName_1224_, uint8_t v_isMeta_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_){
_start:
{
lean_object* v___x_1229_; lean_object* v_env_1233_; lean_object* v___y_1235_; lean_object* v___x_1248_; 
v___x_1229_ = lean_st_ref_get(v___y_1227_);
v_env_1233_ = lean_ctor_get(v___x_1229_, 0);
lean_inc_ref(v_env_1233_);
lean_dec(v___x_1229_);
v___x_1248_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1233_, v_declName_1224_);
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_dec_ref(v_env_1233_);
lean_dec(v_declName_1224_);
goto v___jp_1230_;
}
else
{
lean_object* v_val_1249_; lean_object* v___x_1250_; lean_object* v_modules_1251_; lean_object* v___x_1252_; uint8_t v___x_1253_; 
v_val_1249_ = lean_ctor_get(v___x_1248_, 0);
lean_inc(v_val_1249_);
lean_dec_ref(v___x_1248_);
v___x_1250_ = l_Lean_Environment_header(v_env_1233_);
v_modules_1251_ = lean_ctor_get(v___x_1250_, 3);
lean_inc_ref(v_modules_1251_);
lean_dec_ref(v___x_1250_);
v___x_1252_ = lean_array_get_size(v_modules_1251_);
v___x_1253_ = lean_nat_dec_lt(v_val_1249_, v___x_1252_);
if (v___x_1253_ == 0)
{
lean_dec_ref(v_modules_1251_);
lean_dec(v_val_1249_);
lean_dec_ref(v_env_1233_);
lean_dec(v_declName_1224_);
goto v___jp_1230_;
}
else
{
lean_object* v___x_1254_; lean_object* v_env_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; uint8_t v___y_1259_; 
v___x_1254_ = lean_st_ref_get(v___y_1227_);
v_env_1255_ = lean_ctor_get(v___x_1254_, 0);
lean_inc_ref(v_env_1255_);
lean_dec(v___x_1254_);
v___x_1256_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___closed__2, &l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___closed__2_once, _init_l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___closed__2);
v___x_1257_ = lean_array_fget(v_modules_1251_, v_val_1249_);
lean_dec(v_val_1249_);
lean_dec_ref(v_modules_1251_);
if (v_isMeta_1225_ == 0)
{
lean_dec_ref(v_env_1255_);
v___y_1259_ = v_isMeta_1225_;
goto v___jp_1258_;
}
else
{
uint8_t v___x_1270_; 
lean_inc(v_declName_1224_);
v___x_1270_ = l_Lean_isMarkedMeta(v_env_1255_, v_declName_1224_);
if (v___x_1270_ == 0)
{
v___y_1259_ = v_isMeta_1225_;
goto v___jp_1258_;
}
else
{
uint8_t v___x_1271_; 
v___x_1271_ = 0;
v___y_1259_ = v___x_1271_;
goto v___jp_1258_;
}
}
v___jp_1258_:
{
lean_object* v_toImport_1260_; lean_object* v_module_1261_; lean_object* v___x_1262_; 
v_toImport_1260_ = lean_ctor_get(v___x_1257_, 0);
lean_inc_ref(v_toImport_1260_);
lean_dec(v___x_1257_);
v_module_1261_ = lean_ctor_get(v_toImport_1260_, 0);
lean_inc(v_module_1261_);
lean_dec_ref(v_toImport_1260_);
lean_inc(v_declName_1224_);
v___x_1262_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1(v_module_1261_, v___y_1259_, v_declName_1224_, v___y_1226_, v___y_1227_);
if (lean_obj_tag(v___x_1262_) == 0)
{
lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; 
lean_dec_ref(v___x_1262_);
v___x_1263_ = l_Lean_indirectModUseExt;
v___x_1264_ = lean_box(1);
v___x_1265_ = lean_box(0);
lean_inc_ref(v_env_1233_);
v___x_1266_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1256_, v___x_1263_, v_env_1233_, v___x_1264_, v___x_1265_);
v___x_1267_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3___redArg(v___x_1266_, v_declName_1224_);
lean_dec(v___x_1266_);
if (lean_obj_tag(v___x_1267_) == 0)
{
lean_object* v___x_1268_; 
v___x_1268_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___closed__3));
v___y_1235_ = v___x_1268_;
goto v___jp_1234_;
}
else
{
lean_object* v_val_1269_; 
v_val_1269_ = lean_ctor_get(v___x_1267_, 0);
lean_inc(v_val_1269_);
lean_dec_ref(v___x_1267_);
v___y_1235_ = v_val_1269_;
goto v___jp_1234_;
}
}
else
{
lean_dec_ref(v_env_1233_);
lean_dec(v_declName_1224_);
return v___x_1262_;
}
}
}
}
v___jp_1230_:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1231_ = lean_box(0);
v___x_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
return v___x_1232_;
}
v___jp_1234_:
{
lean_object* v___x_1236_; size_t v_sz_1237_; size_t v___x_1238_; lean_object* v___x_1239_; 
v___x_1236_ = lean_box(0);
v_sz_1237_ = lean_array_size(v___y_1235_);
v___x_1238_ = ((size_t)0ULL);
v___x_1239_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__2(v_env_1233_, v_declName_1224_, v___y_1235_, v_sz_1237_, v___x_1238_, v___x_1236_, v___y_1226_, v___y_1227_);
lean_dec_ref(v___y_1235_);
lean_dec_ref(v_env_1233_);
if (lean_obj_tag(v___x_1239_) == 0)
{
lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1246_; 
v_isSharedCheck_1246_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1246_ == 0)
{
lean_object* v_unused_1247_; 
v_unused_1247_ = lean_ctor_get(v___x_1239_, 0);
lean_dec(v_unused_1247_);
v___x_1241_ = v___x_1239_;
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
else
{
lean_dec(v___x_1239_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1246_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___x_1244_; 
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 0, v___x_1236_);
v___x_1244_ = v___x_1241_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v___x_1236_);
v___x_1244_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
return v___x_1244_;
}
}
}
else
{
return v___x_1239_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1___boxed(lean_object* v_declName_1272_, lean_object* v_isMeta_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_){
_start:
{
uint8_t v_isMeta_boxed_1277_; lean_object* v_res_1278_; 
v_isMeta_boxed_1277_ = lean_unbox(v_isMeta_1273_);
v_res_1278_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1(v_declName_1272_, v_isMeta_boxed_1277_, v___y_1274_, v___y_1275_);
lean_dec(v___y_1275_);
lean_dec_ref(v___y_1274_);
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__2(uint8_t v___y_1279_, lean_object* v_as_1280_, size_t v_i_1281_, size_t v_stop_1282_, lean_object* v_b_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_){
_start:
{
uint8_t v___x_1287_; 
v___x_1287_ = lean_usize_dec_eq(v_i_1281_, v_stop_1282_);
if (v___x_1287_ == 0)
{
lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1288_ = lean_array_uget_borrowed(v_as_1280_, v_i_1281_);
lean_inc(v___x_1288_);
v___x_1289_ = l_Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1(v___x_1288_, v___y_1279_, v___y_1284_, v___y_1285_);
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_object* v_a_1290_; size_t v___x_1291_; size_t v___x_1292_; 
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
lean_inc(v_a_1290_);
lean_dec_ref(v___x_1289_);
v___x_1291_ = ((size_t)1ULL);
v___x_1292_ = lean_usize_add(v_i_1281_, v___x_1291_);
v_i_1281_ = v___x_1292_;
v_b_1283_ = v_a_1290_;
goto _start;
}
else
{
return v___x_1289_;
}
}
else
{
lean_object* v___x_1294_; 
v___x_1294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1294_, 0, v_b_1283_);
return v___x_1294_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__2___boxed(lean_object* v___y_1295_, lean_object* v_as_1296_, lean_object* v_i_1297_, lean_object* v_stop_1298_, lean_object* v_b_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_){
_start:
{
uint8_t v___y_6675__boxed_1303_; size_t v_i_boxed_1304_; size_t v_stop_boxed_1305_; lean_object* v_res_1306_; 
v___y_6675__boxed_1303_ = lean_unbox(v___y_1295_);
v_i_boxed_1304_ = lean_unbox_usize(v_i_1297_);
lean_dec(v_i_1297_);
v_stop_boxed_1305_ = lean_unbox_usize(v_stop_1298_);
lean_dec(v_stop_1298_);
v_res_1306_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__2(v___y_6675__boxed_1303_, v_as_1296_, v_i_boxed_1304_, v_stop_boxed_1305_, v_b_1299_, v___y_1300_, v___y_1301_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
lean_dec_ref(v_as_1296_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__0(size_t v_sz_1307_, size_t v_i_1308_, lean_object* v_bs_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_){
_start:
{
uint8_t v___x_1313_; 
v___x_1313_ = lean_usize_dec_lt(v_i_1308_, v_sz_1307_);
if (v___x_1313_ == 0)
{
lean_object* v___x_1314_; 
v___x_1314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1314_, 0, v_bs_1309_);
return v___x_1314_;
}
else
{
lean_object* v_v_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v_v_1315_ = lean_array_uget_borrowed(v_bs_1309_, v_i_1308_);
v___x_1316_ = lean_box(0);
lean_inc(v_v_1315_);
v___x_1317_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v_v_1315_, v___x_1316_, v___y_1310_, v___y_1311_);
if (lean_obj_tag(v___x_1317_) == 0)
{
lean_object* v_a_1318_; lean_object* v___x_1319_; lean_object* v_bs_x27_1320_; size_t v___x_1321_; size_t v___x_1322_; lean_object* v___x_1323_; 
v_a_1318_ = lean_ctor_get(v___x_1317_, 0);
lean_inc(v_a_1318_);
lean_dec_ref(v___x_1317_);
v___x_1319_ = lean_unsigned_to_nat(0u);
v_bs_x27_1320_ = lean_array_uset(v_bs_1309_, v_i_1308_, v___x_1319_);
v___x_1321_ = ((size_t)1ULL);
v___x_1322_ = lean_usize_add(v_i_1308_, v___x_1321_);
v___x_1323_ = lean_array_uset(v_bs_x27_1320_, v_i_1308_, v_a_1318_);
v_i_1308_ = v___x_1322_;
v_bs_1309_ = v___x_1323_;
goto _start;
}
else
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1332_; 
lean_dec_ref(v_bs_1309_);
v_a_1325_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1327_ = v___x_1317_;
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1317_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1325_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__0___boxed(lean_object* v_sz_1333_, lean_object* v_i_1334_, lean_object* v_bs_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
size_t v_sz_boxed_1339_; size_t v_i_boxed_1340_; lean_object* v_res_1341_; 
v_sz_boxed_1339_ = lean_unbox_usize(v_sz_1333_);
lean_dec(v_sz_1333_);
v_i_boxed_1340_ = lean_unbox_usize(v_i_1334_);
lean_dec(v_i_1334_);
v_res_1341_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__0(v_sz_boxed_1339_, v_i_boxed_1340_, v_bs_1335_, v___y_1336_, v___y_1337_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_(lean_object* v___x_1342_, lean_object* v___x_1343_, lean_object* v___x_1344_, lean_object* v___x_1345_, lean_object* v___x_1346_, lean_object* v_decl_1347_, lean_object* v_stx_1348_, uint8_t v_kind_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_){
_start:
{
lean_object* v___y_1354_; lean_object* v___y_1355_; lean_object* v___y_1356_; lean_object* v___y_1410_; lean_object* v___y_1411_; lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___y_1415_; lean_object* v___y_1416_; size_t v___y_1417_; lean_object* v___y_1418_; uint8_t v___y_1419_; uint8_t v___x_1468_; uint8_t v___x_1469_; 
v___x_1468_ = 0;
v___x_1469_ = l_Lean_instBEqAttributeKind_beq(v_kind_1349_, v___x_1468_);
if (v___x_1469_ == 0)
{
lean_object* v___x_1470_; 
lean_dec(v_stx_1348_);
lean_dec(v_decl_1347_);
lean_dec_ref(v___x_1346_);
lean_dec_ref(v___x_1345_);
lean_dec(v___x_1342_);
v___x_1470_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg(v___x_1344_, v_kind_1349_, v___y_1350_, v___y_1351_);
return v___x_1470_;
}
else
{
goto v___jp_1428_;
}
v___jp_1353_:
{
lean_object* v___x_1357_; lean_object* v_env_1358_; lean_object* v_options_1359_; lean_object* v_ref_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1357_ = lean_st_ref_get(v___y_1355_);
v_env_1358_ = lean_ctor_get(v___x_1357_, 0);
lean_inc_ref(v_env_1358_);
lean_dec(v___x_1357_);
v_options_1359_ = lean_ctor_get(v___y_1356_, 2);
v_ref_1360_ = lean_ctor_get(v___y_1356_, 5);
lean_inc_ref(v_options_1359_);
v___x_1361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1361_, 0, v_env_1358_);
lean_ctor_set(v___x_1361_, 1, v_options_1359_);
lean_inc(v_decl_1347_);
v___x_1362_ = l_Lean_CodeAction_mkCommandCodeAction(v_decl_1347_, v___x_1361_);
lean_dec_ref(v___x_1361_);
if (lean_obj_tag(v___x_1362_) == 0)
{
lean_object* v_a_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1396_; 
v_a_1363_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1365_ = v___x_1362_;
v_isShared_1366_ = v_isSharedCheck_1396_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_a_1363_);
lean_dec(v___x_1362_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1396_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1367_; lean_object* v_env_1368_; lean_object* v_nextMacroScope_1369_; lean_object* v_ngen_1370_; lean_object* v_auxDeclNGen_1371_; lean_object* v_traceState_1372_; lean_object* v_messages_1373_; lean_object* v_infoState_1374_; lean_object* v_snapshotTasks_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1394_; 
v___x_1367_ = lean_st_ref_take(v___y_1355_);
v_env_1368_ = lean_ctor_get(v___x_1367_, 0);
v_nextMacroScope_1369_ = lean_ctor_get(v___x_1367_, 1);
v_ngen_1370_ = lean_ctor_get(v___x_1367_, 2);
v_auxDeclNGen_1371_ = lean_ctor_get(v___x_1367_, 3);
v_traceState_1372_ = lean_ctor_get(v___x_1367_, 4);
v_messages_1373_ = lean_ctor_get(v___x_1367_, 6);
v_infoState_1374_ = lean_ctor_get(v___x_1367_, 7);
v_snapshotTasks_1375_ = lean_ctor_get(v___x_1367_, 8);
v_isSharedCheck_1394_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1394_ == 0)
{
lean_object* v_unused_1395_; 
v_unused_1395_ = lean_ctor_get(v___x_1367_, 5);
lean_dec(v_unused_1395_);
v___x_1377_ = v___x_1367_;
v_isShared_1378_ = v_isSharedCheck_1394_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_snapshotTasks_1375_);
lean_inc(v_infoState_1374_);
lean_inc(v_messages_1373_);
lean_inc(v_traceState_1372_);
lean_inc(v_auxDeclNGen_1371_);
lean_inc(v_ngen_1370_);
lean_inc(v_nextMacroScope_1369_);
lean_inc(v_env_1368_);
lean_dec(v___x_1367_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1394_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1379_; lean_object* v_toEnvExtension_1380_; lean_object* v_asyncMode_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1387_; 
v___x_1379_ = l_Lean_CodeAction_cmdCodeActionExt;
v_toEnvExtension_1380_ = lean_ctor_get(v___x_1379_, 0);
v_asyncMode_1381_ = lean_ctor_get(v_toEnvExtension_1380_, 2);
v___x_1382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1382_, 0, v_decl_1347_);
lean_ctor_set(v___x_1382_, 1, v___y_1354_);
v___x_1383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1383_, 0, v___x_1382_);
lean_ctor_set(v___x_1383_, 1, v_a_1363_);
v___x_1384_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1379_, v_env_1368_, v___x_1383_, v_asyncMode_1381_, v___x_1342_);
v___x_1385_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__2_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_);
if (v_isShared_1378_ == 0)
{
lean_ctor_set(v___x_1377_, 5, v___x_1385_);
lean_ctor_set(v___x_1377_, 0, v___x_1384_);
v___x_1387_ = v___x_1377_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v___x_1384_);
lean_ctor_set(v_reuseFailAlloc_1393_, 1, v_nextMacroScope_1369_);
lean_ctor_set(v_reuseFailAlloc_1393_, 2, v_ngen_1370_);
lean_ctor_set(v_reuseFailAlloc_1393_, 3, v_auxDeclNGen_1371_);
lean_ctor_set(v_reuseFailAlloc_1393_, 4, v_traceState_1372_);
lean_ctor_set(v_reuseFailAlloc_1393_, 5, v___x_1385_);
lean_ctor_set(v_reuseFailAlloc_1393_, 6, v_messages_1373_);
lean_ctor_set(v_reuseFailAlloc_1393_, 7, v_infoState_1374_);
lean_ctor_set(v_reuseFailAlloc_1393_, 8, v_snapshotTasks_1375_);
v___x_1387_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1391_; 
v___x_1388_ = lean_st_ref_set(v___y_1355_, v___x_1387_);
v___x_1389_ = lean_box(0);
if (v_isShared_1366_ == 0)
{
lean_ctor_set(v___x_1365_, 0, v___x_1389_);
v___x_1391_ = v___x_1365_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v___x_1389_);
v___x_1391_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
return v___x_1391_;
}
}
}
}
}
else
{
lean_object* v_a_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1408_; 
lean_dec_ref(v___y_1354_);
lean_dec(v_decl_1347_);
lean_dec(v___x_1342_);
v_a_1397_ = lean_ctor_get(v___x_1362_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1362_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1399_ = v___x_1362_;
v_isShared_1400_ = v_isSharedCheck_1408_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_a_1397_);
lean_dec(v___x_1362_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1408_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1406_; 
v___x_1401_ = lean_io_error_to_string(v_a_1397_);
v___x_1402_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1401_);
v___x_1403_ = l_Lean_MessageData_ofFormat(v___x_1402_);
lean_inc(v_ref_1360_);
v___x_1404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1404_, 0, v_ref_1360_);
lean_ctor_set(v___x_1404_, 1, v___x_1403_);
if (v_isShared_1400_ == 0)
{
lean_ctor_set(v___x_1399_, 0, v___x_1404_);
v___x_1406_ = v___x_1399_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v___x_1404_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
return v___x_1406_;
}
}
}
}
v___jp_1409_:
{
if (lean_obj_tag(v___y_1413_) == 0)
{
lean_dec_ref(v___y_1413_);
v___y_1354_ = v___y_1410_;
v___y_1355_ = v___y_1411_;
v___y_1356_ = v___y_1412_;
goto v___jp_1353_;
}
else
{
lean_dec_ref(v___y_1410_);
lean_dec(v_decl_1347_);
lean_dec(v___x_1342_);
return v___y_1413_;
}
}
v___jp_1414_:
{
lean_object* v___x_1420_; uint8_t v___x_1421_; 
v___x_1420_ = lean_array_get_size(v___y_1415_);
v___x_1421_ = lean_nat_dec_lt(v___x_1343_, v___x_1420_);
if (v___x_1421_ == 0)
{
v___y_1354_ = v___y_1415_;
v___y_1355_ = v___y_1416_;
v___y_1356_ = v___y_1418_;
goto v___jp_1353_;
}
else
{
lean_object* v___x_1422_; uint8_t v___x_1423_; 
v___x_1422_ = lean_box(0);
v___x_1423_ = lean_nat_dec_le(v___x_1420_, v___x_1420_);
if (v___x_1423_ == 0)
{
if (v___x_1421_ == 0)
{
v___y_1354_ = v___y_1415_;
v___y_1355_ = v___y_1416_;
v___y_1356_ = v___y_1418_;
goto v___jp_1353_;
}
else
{
size_t v___x_1424_; lean_object* v___x_1425_; 
v___x_1424_ = lean_usize_of_nat(v___x_1420_);
v___x_1425_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__2(v___y_1419_, v___y_1415_, v___y_1417_, v___x_1424_, v___x_1422_, v___y_1418_, v___y_1416_);
v___y_1410_ = v___y_1415_;
v___y_1411_ = v___y_1416_;
v___y_1412_ = v___y_1418_;
v___y_1413_ = v___x_1425_;
goto v___jp_1409_;
}
}
else
{
size_t v___x_1426_; lean_object* v___x_1427_; 
v___x_1426_ = lean_usize_of_nat(v___x_1420_);
v___x_1427_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__2(v___y_1419_, v___y_1415_, v___y_1417_, v___x_1426_, v___x_1422_, v___y_1418_, v___y_1416_);
v___y_1410_ = v___y_1415_;
v___y_1411_ = v___y_1416_;
v___y_1412_ = v___y_1418_;
v___y_1413_ = v___x_1427_;
goto v___jp_1409_;
}
}
}
v___jp_1428_:
{
lean_object* v___x_1429_; 
lean_inc(v_decl_1347_);
v___x_1429_ = l_Lean_ensureAttrDeclIsMeta(v___x_1344_, v_decl_1347_, v_kind_1349_, v___y_1350_, v___y_1351_);
if (lean_obj_tag(v___x_1429_) == 0)
{
lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1466_; 
v_isSharedCheck_1466_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1466_ == 0)
{
lean_object* v_unused_1467_; 
v_unused_1467_ = lean_ctor_get(v___x_1429_, 0);
lean_dec(v_unused_1467_);
v___x_1431_ = v___x_1429_;
v_isShared_1432_ = v_isSharedCheck_1466_;
goto v_resetjp_1430_;
}
else
{
lean_dec(v___x_1429_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1466_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v___x_1433_; uint8_t v___x_1434_; 
v___x_1433_ = l_Lean_Name_mkStr2(v___x_1345_, v___x_1346_);
lean_inc(v_stx_1348_);
v___x_1434_ = l_Lean_Syntax_isOfKind(v_stx_1348_, v___x_1433_);
lean_dec(v___x_1433_);
if (v___x_1434_ == 0)
{
lean_object* v___x_1435_; lean_object* v___x_1437_; 
lean_dec(v_stx_1348_);
lean_dec(v_decl_1347_);
lean_dec(v___x_1342_);
v___x_1435_ = lean_box(0);
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 0, v___x_1435_);
v___x_1437_ = v___x_1431_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v___x_1435_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
else
{
lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; size_t v_sz_1442_; size_t v___x_1443_; lean_object* v___x_1444_; 
lean_del_object(v___x_1431_);
v___x_1439_ = lean_unsigned_to_nat(1u);
v___x_1440_ = l_Lean_Syntax_getArg(v_stx_1348_, v___x_1439_);
lean_dec(v_stx_1348_);
v___x_1441_ = l_Lean_Syntax_getArgs(v___x_1440_);
lean_dec(v___x_1440_);
v_sz_1442_ = lean_array_size(v___x_1441_);
v___x_1443_ = ((size_t)0ULL);
v___x_1444_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__0(v_sz_1442_, v___x_1443_, v___x_1441_, v___y_1350_, v___y_1351_);
if (lean_obj_tag(v___x_1444_) == 0)
{
lean_object* v_a_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1457_; 
v_a_1445_ = lean_ctor_get(v___x_1444_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1447_ = v___x_1444_;
v_isShared_1448_ = v_isSharedCheck_1457_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_a_1445_);
lean_dec(v___x_1444_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1457_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1449_; lean_object* v_env_1450_; lean_object* v___x_1451_; 
v___x_1449_ = lean_st_ref_get(v___y_1351_);
v_env_1450_ = lean_ctor_get(v___x_1449_, 0);
lean_inc_ref(v_env_1450_);
lean_dec(v___x_1449_);
lean_inc(v_decl_1347_);
v___x_1451_ = lean_decl_get_sorry_dep(v_env_1450_, v_decl_1347_);
if (lean_obj_tag(v___x_1451_) == 0)
{
uint8_t v___x_1452_; 
lean_del_object(v___x_1447_);
v___x_1452_ = 0;
v___y_1415_ = v_a_1445_;
v___y_1416_ = v___y_1351_;
v___y_1417_ = v___x_1443_;
v___y_1418_ = v___y_1350_;
v___y_1419_ = v___x_1452_;
goto v___jp_1414_;
}
else
{
lean_dec_ref(v___x_1451_);
if (v___x_1434_ == 0)
{
lean_del_object(v___x_1447_);
v___y_1415_ = v_a_1445_;
v___y_1416_ = v___y_1351_;
v___y_1417_ = v___x_1443_;
v___y_1418_ = v___y_1350_;
v___y_1419_ = v___x_1434_;
goto v___jp_1414_;
}
else
{
lean_object* v___x_1453_; lean_object* v___x_1455_; 
lean_dec(v_a_1445_);
lean_dec(v_decl_1347_);
lean_dec(v___x_1342_);
v___x_1453_ = lean_box(0);
if (v_isShared_1448_ == 0)
{
lean_ctor_set(v___x_1447_, 0, v___x_1453_);
v___x_1455_ = v___x_1447_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v___x_1453_);
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
else
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1465_; 
lean_dec(v_decl_1347_);
lean_dec(v___x_1342_);
v_a_1458_ = lean_ctor_get(v___x_1444_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1460_ = v___x_1444_;
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1444_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1463_; 
if (v_isShared_1461_ == 0)
{
v___x_1463_ = v___x_1460_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v_a_1458_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
}
}
}
else
{
lean_dec(v_stx_1348_);
lean_dec(v_decl_1347_);
lean_dec_ref(v___x_1346_);
lean_dec_ref(v___x_1345_);
lean_dec(v___x_1342_);
return v___x_1429_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2____boxed(lean_object* v___x_1471_, lean_object* v___x_1472_, lean_object* v___x_1473_, lean_object* v___x_1474_, lean_object* v___x_1475_, lean_object* v_decl_1476_, lean_object* v_stx_1477_, lean_object* v_kind_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_){
_start:
{
uint8_t v_kind_boxed_1482_; lean_object* v_res_1483_; 
v_kind_boxed_1482_ = lean_unbox(v_kind_1478_);
v_res_1483_ = l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_(v___x_1471_, v___x_1472_, v___x_1473_, v___x_1474_, v___x_1475_, v_decl_1476_, v_stx_1477_, v_kind_boxed_1482_, v___y_1479_, v___y_1480_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
lean_dec(v___x_1472_);
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_(lean_object* v___x_1484_, lean_object* v_decl_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_){
_start:
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1489_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__1_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_);
v___x_1490_ = l_Lean_MessageData_ofName(v___x_1484_);
v___x_1491_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1491_, 0, v___x_1489_);
lean_ctor_set(v___x_1491_, 1, v___x_1490_);
v___x_1492_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__3_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__3_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1___closed__3_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_);
v___x_1493_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1493_, 0, v___x_1491_);
lean_ctor_set(v___x_1493_, 1, v___x_1492_);
v___x_1494_ = l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0___redArg(v___x_1493_, v___y_1486_, v___y_1487_);
return v___x_1494_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2____boxed(lean_object* v___x_1495_, lean_object* v_decl_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_){
_start:
{
lean_object* v_res_1500_; 
v_res_1500_ = l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__1_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_(v___x_1495_, v_decl_1496_, v___y_1497_, v___y_1498_);
lean_dec(v___y_1498_);
lean_dec_ref(v___y_1497_);
lean_dec(v_decl_1496_);
return v_res_1500_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; 
v___x_1535_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__10_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_));
v___x_1536_ = l_Lean_registerBuiltinAttribute(v___x_1535_);
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2____boxed(lean_object* v_a_1537_){
_start:
{
lean_object* v_res_1538_; 
v_res_1538_ = l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_();
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3(lean_object* v_cls_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_){
_start:
{
lean_object* v___x_1543_; 
v___x_1543_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3___redArg(v_cls_1539_, v___y_1540_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3___boxed(lean_object* v_cls_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_){
_start:
{
lean_object* v_res_1548_; 
v_res_1548_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__3(v_cls_1544_, v___y_1545_, v___y_1546_);
lean_dec(v___y_1546_);
lean_dec_ref(v___y_1545_);
return v_res_1548_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3(lean_object* v_00_u03b2_1549_, lean_object* v_m_1550_, lean_object* v_a_1551_){
_start:
{
lean_object* v___x_1552_; 
v___x_1552_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3___redArg(v_m_1550_, v_a_1551_);
return v___x_1552_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3___boxed(lean_object* v_00_u03b2_1553_, lean_object* v_m_1554_, lean_object* v_a_1555_){
_start:
{
lean_object* v_res_1556_; 
v_res_1556_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3(v_00_u03b2_1553_, v_m_1554_, v_a_1555_);
lean_dec(v_a_1555_);
lean_dec_ref(v_m_1554_);
return v_res_1556_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2(lean_object* v_00_u03b2_1557_, lean_object* v_x_1558_, lean_object* v_x_1559_){
_start:
{
uint8_t v___x_1560_; 
v___x_1560_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2___redArg(v_x_1558_, v_x_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1561_, lean_object* v_x_1562_, lean_object* v_x_1563_){
_start:
{
uint8_t v_res_1564_; lean_object* v_r_1565_; 
v_res_1564_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2(v_00_u03b2_1561_, v_x_1562_, v_x_1563_);
lean_dec_ref(v_x_1563_);
v_r_1565_ = lean_box(v_res_1564_);
return v_r_1565_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3_spec__7(lean_object* v_00_u03b2_1566_, lean_object* v_a_1567_, lean_object* v_x_1568_){
_start:
{
lean_object* v___x_1569_; 
v___x_1569_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3_spec__7___redArg(v_a_1567_, v_x_1568_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3_spec__7___boxed(lean_object* v_00_u03b2_1570_, lean_object* v_a_1571_, lean_object* v_x_1572_){
_start:
{
lean_object* v_res_1573_; 
v_res_1573_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__3_spec__7(v_00_u03b2_1570_, v_a_1571_, v_x_1572_);
lean_dec(v_x_1572_);
lean_dec(v_a_1571_);
return v_res_1573_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1574_, lean_object* v_x_1575_, size_t v_x_1576_, lean_object* v_x_1577_){
_start:
{
uint8_t v___x_1578_; 
v___x_1578_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___redArg(v_x_1575_, v_x_1576_, v_x_1577_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_1579_, lean_object* v_x_1580_, lean_object* v_x_1581_, lean_object* v_x_1582_){
_start:
{
size_t v_x_7210__boxed_1583_; uint8_t v_res_1584_; lean_object* v_r_1585_; 
v_x_7210__boxed_1583_ = lean_unbox_usize(v_x_1581_);
lean_dec(v_x_1581_);
v_res_1584_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4(v_00_u03b2_1579_, v_x_1580_, v_x_7210__boxed_1583_, v_x_1582_);
lean_dec_ref(v_x_1582_);
v_r_1585_ = lean_box(v_res_1584_);
return v_r_1585_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_1586_, lean_object* v_keys_1587_, lean_object* v_vals_1588_, lean_object* v_heq_1589_, lean_object* v_i_1590_, lean_object* v_k_1591_){
_start:
{
uint8_t v___x_1592_; 
v___x_1592_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4_spec__8___redArg(v_keys_1587_, v_i_1590_, v_k_1591_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4_spec__8___boxed(lean_object* v_00_u03b2_1593_, lean_object* v_keys_1594_, lean_object* v_vals_1595_, lean_object* v_heq_1596_, lean_object* v_i_1597_, lean_object* v_k_1598_){
_start:
{
uint8_t v_res_1599_; lean_object* v_r_1600_; 
v_res_1599_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__1_spec__1_spec__2_spec__4_spec__8(v_00_u03b2_1593_, v_keys_1594_, v_vals_1595_, v_heq_1596_, v_i_1597_, v_k_1598_);
lean_dec_ref(v_k_1598_);
lean_dec_ref(v_vals_1595_);
lean_dec_ref(v_keys_1594_);
v_r_1600_ = lean_box(v_res_1599_);
return v_r_1600_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin_spec__0(lean_object* v_nilFn_1601_, lean_object* v_consFn_1602_, lean_object* v_x_1603_){
_start:
{
if (lean_obj_tag(v_x_1603_) == 0)
{
lean_dec_ref(v_consFn_1602_);
lean_inc_ref(v_nilFn_1601_);
return v_nilFn_1601_;
}
else
{
lean_object* v_head_1604_; lean_object* v_tail_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; 
v_head_1604_ = lean_ctor_get(v_x_1603_, 0);
lean_inc(v_head_1604_);
v_tail_1605_ = lean_ctor_get(v_x_1603_, 1);
lean_inc(v_tail_1605_);
lean_dec_ref(v_x_1603_);
v___x_1606_ = l___private_Lean_ToExpr_0__Lean_Name_toExprAux(v_head_1604_);
lean_inc_ref(v_consFn_1602_);
v___x_1607_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin_spec__0(v_nilFn_1601_, v_consFn_1602_, v_tail_1605_);
v___x_1608_ = l_Lean_mkAppB(v_consFn_1602_, v___x_1606_, v___x_1607_);
return v___x_1608_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin_spec__0___boxed(lean_object* v_nilFn_1609_, lean_object* v_consFn_1610_, lean_object* v_x_1611_){
_start:
{
lean_object* v_res_1612_; 
v_res_1612_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin_spec__0(v_nilFn_1609_, v_consFn_1610_, v_x_1611_);
lean_dec_ref(v_nilFn_1609_);
return v_res_1612_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__2(void){
_start:
{
lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; 
v___x_1618_ = lean_box(0);
v___x_1619_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__1));
v___x_1620_ = l_Lean_mkConst(v___x_1619_, v___x_1618_);
return v___x_1620_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__5(void){
_start:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v_type_1627_; 
v___x_1625_ = lean_box(0);
v___x_1626_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__4));
v_type_1627_ = l_Lean_mkConst(v___x_1626_, v___x_1625_);
return v_type_1627_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__10(void){
_start:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1636_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__9));
v___x_1637_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__8));
v___x_1638_ = l_Lean_mkConst(v___x_1637_, v___x_1636_);
return v___x_1638_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__11(void){
_start:
{
lean_object* v___x_1639_; lean_object* v___x_1640_; 
v___x_1639_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_1640_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1640_, 0, v___x_1639_);
lean_ctor_set(v___x_1640_, 1, v___x_1639_);
lean_ctor_set(v___x_1640_, 2, v___x_1639_);
lean_ctor_set(v___x_1640_, 3, v___x_1639_);
lean_ctor_set(v___x_1640_, 4, v___x_1639_);
lean_ctor_set(v___x_1640_, 5, v___x_1639_);
return v___x_1640_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__12(void){
_start:
{
lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; 
v___x_1641_ = lean_unsigned_to_nat(32u);
v___x_1642_ = lean_mk_empty_array_with_capacity(v___x_1641_);
v___x_1643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1643_, 0, v___x_1642_);
return v___x_1643_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__13(void){
_start:
{
size_t v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; 
v___x_1644_ = ((size_t)5ULL);
v___x_1645_ = lean_unsigned_to_nat(0u);
v___x_1646_ = lean_unsigned_to_nat(32u);
v___x_1647_ = lean_mk_empty_array_with_capacity(v___x_1646_);
v___x_1648_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__12, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__12_once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__12);
v___x_1649_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1649_, 0, v___x_1648_);
lean_ctor_set(v___x_1649_, 1, v___x_1647_);
lean_ctor_set(v___x_1649_, 2, v___x_1645_);
lean_ctor_set(v___x_1649_, 3, v___x_1645_);
lean_ctor_set_usize(v___x_1649_, 4, v___x_1644_);
return v___x_1649_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__14(void){
_start:
{
lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1650_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_1651_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1650_);
lean_ctor_set(v___x_1651_, 1, v___x_1650_);
lean_ctor_set(v___x_1651_, 2, v___x_1650_);
lean_ctor_set(v___x_1651_, 3, v___x_1650_);
lean_ctor_set(v___x_1651_, 4, v___x_1650_);
return v___x_1651_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__15(void){
_start:
{
lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1652_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__14, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__14_once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__14);
v___x_1653_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__13, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__13_once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__13);
v___x_1654_ = lean_box(1);
v___x_1655_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__11, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__11_once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__11);
v___x_1656_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0_spec__0___closed__2);
v___x_1657_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1656_);
lean_ctor_set(v___x_1657_, 1, v___x_1655_);
lean_ctor_set(v___x_1657_, 2, v___x_1654_);
lean_ctor_set(v___x_1657_, 3, v___x_1653_);
lean_ctor_set(v___x_1657_, 4, v___x_1652_);
return v___x_1657_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__20(void){
_start:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
v___x_1665_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__9));
v___x_1666_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__19));
v___x_1667_ = l_Lean_mkConst(v___x_1666_, v___x_1665_);
return v___x_1667_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__21(void){
_start:
{
lean_object* v_type_1668_; lean_object* v___x_1669_; lean_object* v_nil_1670_; 
v_type_1668_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__5, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__5_once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__5);
v___x_1669_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__20, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__20_once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__20);
v_nil_1670_ = l_Lean_Expr_app___override(v___x_1669_, v_type_1668_);
return v_nil_1670_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__24(void){
_start:
{
lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1675_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__9));
v___x_1676_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__23));
v___x_1677_ = l_Lean_mkConst(v___x_1676_, v___x_1675_);
return v___x_1677_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__25(void){
_start:
{
lean_object* v_type_1678_; lean_object* v___x_1679_; lean_object* v_cons_1680_; 
v_type_1678_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__5, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__5_once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__5);
v___x_1679_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__24, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__24_once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__24);
v_cons_1680_ = l_Lean_Expr_app___override(v___x_1679_, v_type_1678_);
return v_cons_1680_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin(lean_object* v_declName_1681_, lean_object* v_args_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_){
_start:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v_type_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1686_ = lean_box(0);
v___x_1687_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__2, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__2_once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__2);
v_type_1688_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__5, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__5_once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__5);
v___x_1689_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__10, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__10_once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__10);
v___x_1690_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__15, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__15_once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__15);
v___x_1691_ = lean_st_mk_ref(v___x_1690_);
lean_inc(v_declName_1681_);
v___x_1692_ = l_Lean_mkConst(v_declName_1681_, v___x_1686_);
v___x_1693_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__17));
v___x_1694_ = l_Lean_Name_append(v_declName_1681_, v___x_1693_);
v___x_1695_ = l_Lean_Core_mkFreshUserName(v___x_1694_, v_a_1683_, v_a_1684_);
if (lean_obj_tag(v___x_1695_) == 0)
{
lean_object* v_a_1696_; lean_object* v_nil_1697_; lean_object* v_cons_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v_val_1706_; lean_object* v___x_1707_; 
v_a_1696_ = lean_ctor_get(v___x_1695_, 0);
lean_inc(v_a_1696_);
lean_dec_ref(v___x_1695_);
v_nil_1697_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__21, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__21_once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__21);
v_cons_1698_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__25, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__25_once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___closed__25);
v___x_1699_ = lean_array_to_list(v_args_1682_);
v___x_1700_ = l___private_Lean_ToExpr_0__Lean_List_toExprAux___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin_spec__0(v_nil_1697_, v_cons_1698_, v___x_1699_);
v___x_1701_ = l_Lean_mkAppB(v___x_1689_, v_type_1688_, v___x_1700_);
v___x_1702_ = lean_unsigned_to_nat(2u);
v___x_1703_ = lean_mk_empty_array_with_capacity(v___x_1702_);
v___x_1704_ = lean_array_push(v___x_1703_, v___x_1701_);
v___x_1705_ = lean_array_push(v___x_1704_, v___x_1692_);
v_val_1706_ = l_Lean_mkAppN(v___x_1687_, v___x_1705_);
lean_dec_ref(v___x_1705_);
v___x_1707_ = l_Lean_declareBuiltin(v_a_1696_, v_val_1706_, v_a_1683_, v_a_1684_);
if (lean_obj_tag(v___x_1707_) == 0)
{
lean_object* v_a_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1716_; 
v_a_1708_ = lean_ctor_get(v___x_1707_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v___x_1707_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1710_ = v___x_1707_;
v_isShared_1711_ = v_isSharedCheck_1716_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_a_1708_);
lean_dec(v___x_1707_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1716_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v___x_1712_; lean_object* v___x_1714_; 
v___x_1712_ = lean_st_ref_get(v___x_1691_);
lean_dec(v___x_1691_);
lean_dec(v___x_1712_);
if (v_isShared_1711_ == 0)
{
v___x_1714_ = v___x_1710_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v_a_1708_);
v___x_1714_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
return v___x_1714_;
}
}
}
else
{
lean_dec(v___x_1691_);
return v___x_1707_;
}
}
else
{
lean_object* v_a_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1724_; 
lean_dec_ref(v___x_1692_);
lean_dec(v___x_1691_);
lean_dec_ref(v_args_1682_);
v_a_1717_ = lean_ctor_get(v___x_1695_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1695_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1719_ = v___x_1695_;
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_a_1717_);
lean_dec(v___x_1695_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
lean_object* v___x_1722_; 
if (v_isShared_1720_ == 0)
{
v___x_1722_ = v___x_1719_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_a_1717_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin___boxed(lean_object* v_declName_1725_, lean_object* v_args_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_){
_start:
{
lean_object* v_res_1730_; 
v_res_1730_ = l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin(v_declName_1725_, v_args_1726_, v_a_1727_, v_a_1728_);
lean_dec(v_a_1728_);
lean_dec_ref(v_a_1727_);
return v_res_1730_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__1_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; 
v___x_1732_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__0_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_));
v___x_1733_ = l_Lean_stringToMessageData(v___x_1732_);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_(lean_object* v___x_1734_, lean_object* v___x_1735_, lean_object* v_decl_1736_, lean_object* v_stx_1737_, uint8_t v_kind_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_){
_start:
{
uint8_t v___x_1775_; uint8_t v___x_1776_; 
v___x_1775_ = 0;
v___x_1776_ = l_Lean_instBEqAttributeKind_beq(v_kind_1738_, v___x_1775_);
if (v___x_1776_ == 0)
{
lean_object* v___x_1777_; lean_object* v___x_1778_; 
lean_dec(v_stx_1737_);
lean_dec(v_decl_1736_);
lean_dec_ref(v___x_1735_);
lean_dec_ref(v___x_1734_);
v___x_1777_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__5_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_));
v___x_1778_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__1___redArg(v___x_1777_, v_kind_1738_, v___y_1739_, v___y_1740_);
return v___x_1778_;
}
else
{
goto v___jp_1742_;
}
v___jp_1742_:
{
lean_object* v___x_1743_; uint8_t v___x_1744_; 
v___x_1743_ = l_Lean_Name_mkStr2(v___x_1734_, v___x_1735_);
lean_inc(v_stx_1737_);
v___x_1744_ = l_Lean_Syntax_isOfKind(v_stx_1737_, v___x_1743_);
lean_dec(v___x_1743_);
if (v___x_1744_ == 0)
{
lean_object* v___x_1745_; lean_object* v___x_1746_; 
lean_dec(v_stx_1737_);
lean_dec(v_decl_1736_);
v___x_1745_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__1_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_, &l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__1_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2__once, _init_l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0___closed__1_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_);
v___x_1746_ = l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2__spec__0___redArg(v___x_1745_, v___y_1739_, v___y_1740_);
return v___x_1746_;
}
else
{
lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v_args_1749_; size_t v_sz_1750_; size_t v___x_1751_; lean_object* v___x_1752_; 
v___x_1747_ = lean_unsigned_to_nat(1u);
v___x_1748_ = l_Lean_Syntax_getArg(v_stx_1737_, v___x_1747_);
lean_dec(v_stx_1737_);
v_args_1749_ = l_Lean_Syntax_getArgs(v___x_1748_);
lean_dec(v___x_1748_);
v_sz_1750_ = lean_array_size(v_args_1749_);
v___x_1751_ = ((size_t)0ULL);
v___x_1752_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2__spec__0(v_sz_1750_, v___x_1751_, v_args_1749_, v___y_1739_, v___y_1740_);
if (lean_obj_tag(v___x_1752_) == 0)
{
lean_object* v_a_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1766_; 
v_a_1753_ = lean_ctor_get(v___x_1752_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1752_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1755_ = v___x_1752_;
v_isShared_1756_ = v_isSharedCheck_1766_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_a_1753_);
lean_dec(v___x_1752_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1766_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v___x_1757_; lean_object* v_env_1758_; lean_object* v___x_1759_; 
v___x_1757_ = lean_st_ref_get(v___y_1740_);
v_env_1758_ = lean_ctor_get(v___x_1757_, 0);
lean_inc_ref(v_env_1758_);
lean_dec(v___x_1757_);
lean_inc(v_decl_1736_);
v___x_1759_ = lean_decl_get_sorry_dep(v_env_1758_, v_decl_1736_);
if (lean_obj_tag(v___x_1759_) == 0)
{
lean_object* v___x_1760_; 
lean_del_object(v___x_1755_);
v___x_1760_ = l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin(v_decl_1736_, v_a_1753_, v___y_1739_, v___y_1740_);
return v___x_1760_;
}
else
{
lean_dec_ref(v___x_1759_);
if (v___x_1744_ == 0)
{
lean_object* v___x_1761_; 
lean_del_object(v___x_1755_);
v___x_1761_ = l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_addBuiltin(v_decl_1736_, v_a_1753_, v___y_1739_, v___y_1740_);
return v___x_1761_;
}
else
{
lean_object* v___x_1762_; lean_object* v___x_1764_; 
lean_dec(v_a_1753_);
lean_dec(v_decl_1736_);
v___x_1762_ = lean_box(0);
if (v_isShared_1756_ == 0)
{
lean_ctor_set(v___x_1755_, 0, v___x_1762_);
v___x_1764_ = v___x_1755_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v___x_1762_);
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
else
{
lean_object* v_a_1767_; lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1774_; 
lean_dec(v_decl_1736_);
v_a_1767_ = lean_ctor_get(v___x_1752_, 0);
v_isSharedCheck_1774_ = !lean_is_exclusive(v___x_1752_);
if (v_isSharedCheck_1774_ == 0)
{
v___x_1769_ = v___x_1752_;
v_isShared_1770_ = v_isSharedCheck_1774_;
goto v_resetjp_1768_;
}
else
{
lean_inc(v_a_1767_);
lean_dec(v___x_1752_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1774_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v___x_1772_; 
if (v_isShared_1770_ == 0)
{
v___x_1772_ = v___x_1769_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v_a_1767_);
v___x_1772_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
return v___x_1772_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2____boxed(lean_object* v___x_1779_, lean_object* v___x_1780_, lean_object* v_decl_1781_, lean_object* v_stx_1782_, lean_object* v_kind_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_){
_start:
{
uint8_t v_kind_boxed_1787_; lean_object* v_res_1788_; 
v_kind_boxed_1787_ = lean_unbox(v_kind_1783_);
v_res_1788_ = l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___lam__0_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_(v___x_1779_, v___x_1780_, v_decl_1781_, v_stx_1782_, v_kind_boxed_1787_, v___y_1784_, v___y_1785_);
lean_dec(v___y_1785_);
lean_dec_ref(v___y_1784_);
return v_res_1788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1820_; lean_object* v___x_1821_; 
v___x_1820_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn___closed__10_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_));
v___x_1821_ = l_Lean_registerBuiltinAttribute(v___x_1820_);
return v___x_1821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2____boxed(lean_object* v_a_1822_){
_start:
{
lean_object* v_res_1823_; 
v_res_1823_ = l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_();
return v_res_1823_;
}
}
lean_object* runtime_initialize_Lean_Server_CodeActions_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_CodeActions_Attr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Server_CodeActions_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_73882864____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_CodeAction_holeCodeActionExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_CodeAction_holeCodeActionExt);
lean_dec_ref(res);
res = l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1824323934____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_262607364____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_CodeAction_builtinCmdCodeActions = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_CodeAction_builtinCmdCodeActions);
lean_dec_ref(res);
res = l_Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_145477870____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_CodeAction_cmdCodeActionExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_CodeAction_cmdCodeActionExt);
lean_dec_ref(res);
res = l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_249496773____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Server_CodeActions_Attr_0__Lean_CodeAction_initFn_00___x40_Lean_Server_CodeActions_Attr_1324802641____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_CodeActions_Attr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Server_CodeActions_Basic(uint8_t builtin);
lean_object* initialize_Lean_Compiler_IR_CompilerM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_CodeActions_Attr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Server_CodeActions_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_IR_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_CodeActions_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_CodeActions_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_CodeActions_Attr(builtin);
}
#ifdef __cplusplus
}
#endif
