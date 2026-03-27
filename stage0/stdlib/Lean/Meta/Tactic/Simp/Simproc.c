// Lean compiler output
// Module: Lean.Meta.Tactic.Simp.Simproc
// Imports: public import Lean.Compiler.InitAttr public import Lean.Meta.Tactic.Simp.Types
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* l_Array_qpartition___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_ScopedEnvExtension_addCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_empty(lean_object*);
uint8_t l_Lean_Meta_DiscrTree_instBEqKey_beq(lean_object*, lean_object*);
uint64_t l_Lean_Meta_DiscrTree_Key_hash(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instInhabited(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_Simp_Step_addExtraArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TransformStep_toStep(lean_object*);
lean_object* l_Lean_Meta_Simp_recordSimpTheorem___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_mkEqTransOptProofResult(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqTrans_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_DiscrTree_getMatchWithExtra___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Meta_Simp_instInhabitedSimprocs_default;
lean_object* l_Lean_ScopedEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ScopedEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l___private_Lean_ToExpr_0__Lean_Name_toExprAux(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_declareBuiltin(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* lean_name_append_after(lean_object*, lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_registerScopedEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_ensureAttrDeclIsMeta(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_DStep_addExtraArgs(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_initializing();
lean_object* l_Lean_PersistentEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__1;
static lean_once_cell_t l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1481072680____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1481072680____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_builtinSimprocDeclsRef;
static const lean_array_object l_Lean_Meta_Simp_instInhabitedSimprocDecl_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Simp_instInhabitedSimprocDecl_default___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_instInhabitedSimprocDecl_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Simp_instInhabitedSimprocDecl_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Simp_instInhabitedSimprocDecl_default___closed__0_value)}};
static const lean_object* l_Lean_Meta_Simp_instInhabitedSimprocDecl_default___closed__1 = (const lean_object*)&l_Lean_Meta_Simp_instInhabitedSimprocDecl_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Simp_instInhabitedSimprocDecl_default = (const lean_object*)&l_Lean_Meta_Simp_instInhabitedSimprocDecl_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Simp_instInhabitedSimprocDecl = (const lean_object*)&l_Lean_Meta_Simp_instInhabitedSimprocDecl_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__0;
static lean_once_cell_t l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__1;
static lean_once_cell_t l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState;
LEAN_EXPORT uint8_t l_Lean_Meta_Simp_SimprocDecl_lt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocDecl_lt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Simp_SimprocDecl_lt___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Simp_initFn___lam__2___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Simp_initFn___lam__2___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___lam__2___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Simp_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Simp_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Simp_initFn___lam__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value)} };
static const lean_object* l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Simp_initFn___lam__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Simp_initFn___lam__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value)} };
static const lean_object* l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Simp"};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Meta_Simp_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "simprocDeclExt"};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(54, 38, 229, 237, 143, 62, 212, 6)}};
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(49, 22, 242, 0, 82, 247, 8, 246)}};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value;
static lean_once_cell_t l_Lean_Meta_Simp_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Meta_Simp_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Meta_Simp_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Meta_Simp_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_simprocDeclExt;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Simp_getSimprocDeclKeys_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Simp_getSimprocDeclKeys_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_getSimprocDeclKeys_x3f___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocDeclKeys_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocDeclKeys_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocDeclKeys_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocDeclKeys_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_isBuiltinSimproc___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_isBuiltinSimproc___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_isBuiltinSimproc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_isBuiltinSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_isSimproc___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_isSimproc___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_isSimproc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_isSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Simp_registerBuiltinSimprocCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "Invalid builtin simproc declaration: It can only be registered during initialization"};
static const lean_object* l_Lean_Meta_Simp_registerBuiltinSimprocCore___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_registerBuiltinSimprocCore___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Simp_registerBuiltinSimprocCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_registerBuiltinSimprocCore___closed__1;
static const lean_string_object l_Lean_Meta_Simp_registerBuiltinSimprocCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Invalid builtin simproc declaration `"};
static const lean_object* l_Lean_Meta_Simp_registerBuiltinSimprocCore___closed__2 = (const lean_object*)&l_Lean_Meta_Simp_registerBuiltinSimprocCore___closed__2_value;
static const lean_string_object l_Lean_Meta_Simp_registerBuiltinSimprocCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "`: This builtin simproc has already been declared"};
static const lean_object* l_Lean_Meta_Simp_registerBuiltinSimprocCore___closed__3 = (const lean_object*)&l_Lean_Meta_Simp_registerBuiltinSimprocCore___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerBuiltinSimprocCore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerBuiltinSimprocCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerBuiltinSimproc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerBuiltinSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerBuiltinDSimproc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerBuiltinDSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerSimproc___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Simp_registerSimproc___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_registerSimproc___closed__0;
static lean_once_cell_t l_Lean_Meta_Simp_registerSimproc___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_registerSimproc___closed__1;
static lean_once_cell_t l_Lean_Meta_Simp_registerSimproc___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_registerSimproc___closed__2;
static const lean_string_object l_Lean_Meta_Simp_registerSimproc___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Invalid simproc declaration `"};
static const lean_object* l_Lean_Meta_Simp_registerSimproc___closed__3 = (const lean_object*)&l_Lean_Meta_Simp_registerSimproc___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Simp_registerSimproc___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_registerSimproc___closed__4;
static const lean_string_object l_Lean_Meta_Simp_registerSimproc___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "`: This simproc has already been declared"};
static const lean_object* l_Lean_Meta_Simp_registerSimproc___closed__5 = (const lean_object*)&l_Lean_Meta_Simp_registerSimproc___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Simp_registerSimproc___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_registerSimproc___closed__6;
static const lean_string_object l_Lean_Meta_Simp_registerSimproc___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "`: This function is declared in an imported module"};
static const lean_object* l_Lean_Meta_Simp_registerSimproc___closed__7 = (const lean_object*)&l_Lean_Meta_Simp_registerSimproc___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Simp_registerSimproc___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_registerSimproc___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerSimproc(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Simp_instBEqSimprocEntry___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_instBEqSimprocEntry___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Simp_instBEqSimprocEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Simp_instBEqSimprocEntry___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Simp_instBEqSimprocEntry___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_instBEqSimprocEntry___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Simp_instBEqSimprocEntry = (const lean_object*)&l_Lean_Meta_Simp_instBEqSimprocEntry___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_instToFormatSimprocEntry___lam__0(lean_object*);
static const lean_closure_object l_Lean_Meta_Simp_instToFormatSimprocEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Simp_instToFormatSimprocEntry___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Simp_instToFormatSimprocEntry___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_instToFormatSimprocEntry___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Simp_instToFormatSimprocEntry = (const lean_object*)&l_Lean_Meta_Simp_instToFormatSimprocEntry___closed__0_value;
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Simprocs_erase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__spec__0___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__spec__0(lean_object*);
static lean_once_cell_t l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_;
static lean_once_cell_t l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_builtinSimprocsRef;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1207380286____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1207380286____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_builtinSEvalprocsRef;
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Simp_getSimprocFromDeclImpl_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Simp_getSimprocFromDeclImpl_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Simp_getSimprocFromDeclImpl_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Simp_getSimprocFromDeclImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__0_value;
static const lean_string_object l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__1 = (const lean_object*)&l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__1_value;
static const lean_string_object l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Simproc `"};
static const lean_object* l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__2 = (const lean_object*)&l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__2_value;
static const lean_string_object l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "` has an unexpected type: Expected `Simproc` or `DSimproc`, but found `"};
static const lean_object* l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__3 = (const lean_object*)&l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__3_value;
static const lean_string_object l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Simproc"};
static const lean_object* l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__4 = (const lean_object*)&l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__4_value;
static const lean_string_object l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "DSimproc"};
static const lean_object* l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__5 = (const lean_object*)&l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocFromDeclImpl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocFromDeclImpl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_toSimprocEntry(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_toSimprocEntry___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_eraseSimprocAttr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Simp_eraseSimprocAttr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_eraseSimprocAttr___closed__0;
static const lean_string_object l_Lean_Meta_Simp_eraseSimprocAttr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "` does not have a [simproc] attribute"};
static const lean_object* l_Lean_Meta_Simp_eraseSimprocAttr___closed__1 = (const lean_object*)&l_Lean_Meta_Simp_eraseSimprocAttr___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Simp_eraseSimprocAttr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_eraseSimprocAttr___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_eraseSimprocAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_eraseSimprocAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Simp_addSimprocAttrCore_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Simp_addSimprocAttrCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Simp_addSimprocAttrCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Simp_addSimprocAttrCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Simp_addSimprocAttrCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Invalid `[simproc]` attribute: `"};
static const lean_object* l_Lean_Meta_Simp_addSimprocAttrCore___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_addSimprocAttrCore___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Simp_addSimprocAttrCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_addSimprocAttrCore___closed__1;
static const lean_string_object l_Lean_Meta_Simp_addSimprocAttrCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "` is not a simproc"};
static const lean_object* l_Lean_Meta_Simp_addSimprocAttrCore___closed__2 = (const lean_object*)&l_Lean_Meta_Simp_addSimprocAttrCore___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Simp_addSimprocAttrCore___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_addSimprocAttrCore___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSimprocAttrCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSimprocAttrCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__7___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__5_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__5(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2___closed__0_value),((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Meta.DiscrTree.Basic"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___closed__0 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___closed__0_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.DiscrTree.insertKeyValue"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___closed__1 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___closed__1_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid key sequence"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___closed__2 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Simprocs_addCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Simprocs_addCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__7(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Simp_addSimprocBuiltinAttrCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Invalid `[builtin_simproc]` attribute: `"};
static const lean_object* l_Lean_Meta_Simp_addSimprocBuiltinAttrCore___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_addSimprocBuiltinAttrCore___closed__0_value;
static const lean_string_object l_Lean_Meta_Simp_addSimprocBuiltinAttrCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is not a builtin simproc"};
static const lean_object* l_Lean_Meta_Simp_addSimprocBuiltinAttrCore___closed__1 = (const lean_object*)&l_Lean_Meta_Simp_addSimprocBuiltinAttrCore___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSimprocBuiltinAttrCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSimprocBuiltinAttr(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSimprocBuiltinAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSEvalprocBuiltinAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Simprocs_add(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Simprocs_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Simp_SimprocEntry_try_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Simp_SimprocEntry_try_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Simp_SimprocEntry_try___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Simp_SimprocEntry_try___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_SimprocEntry_try___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocEntry_try(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocEntry_try___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Simp_SimprocEntry_try_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Simp_SimprocEntry_try_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Simp_SimprocEntry_tryD___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Simp_SimprocEntry_tryD___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_SimprocEntry_tryD___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocEntry_tryD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocEntry_tryD___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Debug"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 248, 27, 31, 3, 126, 142, 13)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(119, 140, 6, 58, 231, 192, 8, 160)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(246, 39, 251, 153, 6, 255, 160, 132)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(66, 96, 215, 110, 82, 218, 253, 207)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "simproc result "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " => "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Simp_simprocCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Simp_simprocCore___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_simprocCore___closed__0_value;
static const lean_string_object l_Lean_Meta_Simp_simprocCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "no "};
static const lean_object* l_Lean_Meta_Simp_simprocCore___closed__1 = (const lean_object*)&l_Lean_Meta_Simp_simprocCore___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Simp_simprocCore___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_simprocCore___closed__2;
static const lean_string_object l_Lean_Meta_Simp_simprocCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "-simprocs found for "};
static const lean_object* l_Lean_Meta_Simp_simprocCore___closed__3 = (const lean_object*)&l_Lean_Meta_Simp_simprocCore___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Simp_simprocCore___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_simprocCore___closed__4;
static const lean_ctor_object l_Lean_Meta_Simp_simprocCore___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Simp_simprocCore___closed__5 = (const lean_object*)&l_Lean_Meta_Simp_simprocCore___closed__5_value;
static const lean_string_object l_Lean_Meta_Simp_simprocCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pre"};
static const lean_object* l_Lean_Meta_Simp_simprocCore___closed__6 = (const lean_object*)&l_Lean_Meta_Simp_simprocCore___closed__6_value;
static const lean_string_object l_Lean_Meta_Simp_simprocCore___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "post"};
static const lean_object* l_Lean_Meta_Simp_simprocCore___closed__7 = (const lean_object*)&l_Lean_Meta_Simp_simprocCore___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_simprocCore(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_simprocCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_dsimprocCore_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_dsimprocCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Simp_dsimprocCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Simp_dsimprocCore___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_dsimprocCore___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_dsimprocCore(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_dsimprocCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocsArray_add(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocsArray_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Simp_SimprocsArray_erase_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Simp_SimprocsArray_erase_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocsArray_erase(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_Simp_SimprocsArray_isErased_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_Simp_SimprocsArray_isErased_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Simp_SimprocsArray_isErased(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocsArray_isErased___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocArrayCore_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocArrayCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Simp_simprocArrayCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Meta_Simp_simprocArrayCore___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_simprocArrayCore___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_simprocArrayCore(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_simprocArrayCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_dsimprocArrayCore_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_dsimprocArrayCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_dsimprocArrayCore(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_dsimprocArrayCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simprocs"};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(126, 212, 8, 196, 39, 220, 153, 228)}};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value;
static const lean_string_object l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Enable/disable `simproc`s (simplification procedures)."};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value)}};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value_aux_1),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(54, 38, 229, 237, 143, 62, 212, 6)}};
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value_aux_2),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(231, 142, 91, 215, 4, 141, 43, 74)}};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_simprocs;
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Simp_userPreSimprocs_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Simp_userPreSimprocs_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_userPreSimprocs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_userPreSimprocs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_userPostSimprocs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_userPostSimprocs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_userPreDSimprocs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_userPreDSimprocs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_userPostDSimprocs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_userPostDSimprocs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__0_value;
static const lean_string_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__1 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__2_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__2 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__2_value;
static const lean_array_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__3 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__3_value;
static const lean_string_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__4 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__5_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__5_value_aux_2),((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__5 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__5_value;
static const lean_string_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__6 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__7 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__7_value;
static const lean_string_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__8 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__8_value;
static const lean_ctor_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__9_value_aux_2),((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__9 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__10;
static lean_once_cell_t l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__11;
static const lean_string_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__12 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__12_value;
static const lean_string_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__13 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__13_value;
static const lean_ctor_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__14_value_aux_0),((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__14_value_aux_1),((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__14_value_aux_2),((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__14 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__14_value;
static const lean_string_object l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__15 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__15_value;
static lean_once_cell_t l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__16;
static lean_once_cell_t l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__17;
static lean_once_cell_t l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__18;
static lean_once_cell_t l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__19;
static lean_once_cell_t l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__20;
static lean_once_cell_t l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__21;
static lean_once_cell_t l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__22;
static lean_once_cell_t l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__23;
static lean_once_cell_t l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__24;
static lean_once_cell_t l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__25;
static lean_once_cell_t l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__26;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___auto__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__5(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__5___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Simp_mkSimprocExt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Simp_mkSimprocExt___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___closed__0_value;
static const lean_closure_object l_Lean_Meta_Simp_mkSimprocExt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Simp_mkSimprocExt___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___closed__1 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___closed__1_value;
static const lean_closure_object l_Lean_Meta_Simp_mkSimprocExt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Simp_mkSimprocExt___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___closed__2 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___closed__2_value;
static const lean_closure_object l_Lean_Meta_Simp_mkSimprocExt___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Simp_mkSimprocExt___lam__3___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___closed__3 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___closed__3_value;
static const lean_closure_object l_Lean_Meta_Simp_mkSimprocExt___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Simp_mkSimprocExt___lam__5___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Simp_mkSimprocExt___closed__4 = (const lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Simp_addSimprocAttr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_addSimprocAttr___closed__0;
static lean_once_cell_t l_Lean_Meta_Simp_addSimprocAttr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_addSimprocAttr___closed__1;
static lean_once_cell_t l_Lean_Meta_Simp_addSimprocAttr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_addSimprocAttr___closed__2;
static lean_once_cell_t l_Lean_Meta_Simp_addSimprocAttr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_addSimprocAttr___closed__3;
static lean_once_cell_t l_Lean_Meta_Simp_addSimprocAttr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_addSimprocAttr___closed__4;
static const lean_string_object l_Lean_Meta_Simp_addSimprocAttr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simpPost"};
static const lean_object* l_Lean_Meta_Simp_addSimprocAttr___closed__5 = (const lean_object*)&l_Lean_Meta_Simp_addSimprocAttr___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Simp_addSimprocAttr___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Simp_addSimprocAttr___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_addSimprocAttr___closed__6_value_aux_0),((lean_object*)&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Simp_addSimprocAttr___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_addSimprocAttr___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Simp_addSimprocAttr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_addSimprocAttr___closed__6_value_aux_2),((lean_object*)&l_Lean_Meta_Simp_addSimprocAttr___closed__5_value),LEAN_SCALAR_PTR_LITERAL(38, 218, 35, 149, 208, 200, 230, 161)}};
static const lean_object* l_Lean_Meta_Simp_addSimprocAttr___closed__6 = (const lean_object*)&l_Lean_Meta_Simp_addSimprocAttr___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSimprocAttr(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSimprocAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_2499117766____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_2499117766____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_simprocExtensionMapRef;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerSimprocAttr___auto__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerSimprocAttr(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerSimprocAttr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "simprocAttr"};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(31, 224, 78, 200, 71, 50, 151, 250)}};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Simplification procedure"};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__value;
static lean_once_cell_t l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2_;
static const lean_string_object l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "simprocExtension"};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(54, 38, 229, 237, 143, 62, 212, 6)}};
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(57, 72, 162, 209, 248, 181, 187, 248)}};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_simprocExtension;
static const lean_string_object l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "sevalprocAttr"};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(104, 205, 179, 175, 177, 80, 141, 171)}};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Symbolic evaluator procedure"};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__value;
static lean_once_cell_t l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2_;
static const lean_string_object l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "simprocSEvalExtension"};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(54, 38, 229, 237, 143, 62, 212, 6)}};
static const lean_ctor_object l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__value_aux_2),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(49, 203, 14, 198, 243, 211, 154, 228)}};
static const lean_object* l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_simprocSEvalExtension;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declare"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(12, 217, 76, 92, 115, 157, 174, 191)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Unexpected simproc type: Expected "};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__1;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(54, 38, 229, 237, 143, 62, 212, 6)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__2_value_aux_2),((lean_object*)&l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__4_value),LEAN_SCALAR_PTR_LITERAL(18, 160, 179, 254, 130, 82, 156, 255)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__4;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " or "};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__7;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__8_value_aux_0),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(194, 50, 106, 158, 41, 60, 103, 214)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__8_value_aux_1),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(54, 38, 229, 237, 143, 62, 212, 6)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__8_value_aux_2),((lean_object*)&l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__5_value),LEAN_SCALAR_PTR_LITERAL(119, 227, 62, 233, 71, 149, 243, 160)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__10;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ", but `"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__12;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__13;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` has type"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__5;
static const lean_array_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__10;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__11;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Sum"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__12_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inr"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__12_value),LEAN_SCALAR_PTR_LITERAL(249, 106, 118, 161, 227, 189, 67, 81)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__14_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__13_value),LEAN_SCALAR_PTR_LITERAL(187, 118, 236, 113, 107, 136, 194, 149)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__15;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__16;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__17;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__18;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__19;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__20;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inl"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__21_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__12_value),LEAN_SCALAR_PTR_LITERAL(249, 106, 118, 161, 227, 189, 67, 81)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__22_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__21_value),LEAN_SCALAR_PTR_LITERAL(236, 33, 85, 75, 207, 191, 2, 96)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__22_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__23;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Not implemented yet, [-builtin_simproc]"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "addSimprocBuiltinAttr"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2____boxed, .m_arity = 9, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(203, 9, 234, 253, 232, 127, 99, 179)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__4_value),LEAN_SCALAR_PTR_LITERAL(131, 185, 68, 160, 42, 232, 242, 232)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(206, 162, 193, 135, 58, 124, 36, 234)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(119, 156, 38, 170, 47, 144, 113, 210)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 119, 125, 213, 148, 207, 89, 229)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(151, 80, 126, 51, 77, 164, 99, 134)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__14_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(230, 207, 53, 220, 0, 110, 233, 102)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__14_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__14_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__15_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__15_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__15_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__16_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__14_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__15_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(23, 3, 153, 63, 253, 49, 95, 171)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__16_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__16_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__17_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__16_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(42, 18, 209, 36, 122, 47, 172, 216)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__17_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__17_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__18_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__17_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(14, 144, 247, 160, 142, 132, 41, 150)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__18_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__18_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__19_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__18_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(115, 103, 177, 120, 64, 206, 153, 138)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__19_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__19_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__20_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__19_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(155, 13, 210, 143, 245, 58, 61, 91)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__20_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__20_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__21_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__20_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__4_value),LEAN_SCALAR_PTR_LITERAL(115, 217, 78, 63, 204, 44, 77, 207)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__21_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__21_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__21_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1616411946) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(209, 17, 207, 102, 181, 6, 180, 69)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__23_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__23_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__23_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__22_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__23_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(178, 162, 42, 63, 10, 6, 120, 124)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__25_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__25_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__25_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__24_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__25_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(222, 58, 110, 169, 187, 150, 63, 248)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__27_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__26_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(111, 218, 218, 24, 22, 31, 109, 28)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__27_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__27_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "simprocBuiltinAttr"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__29_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__28_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(71, 156, 85, 144, 105, 22, 7, 118)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__29_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__29_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__30_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Builtin simplification procedure"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__30_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__30_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__31_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__27_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__29_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__30_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__31_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__31_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__32_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__31_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__32_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__32_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Not implemented yet, [-builtin_sevalproc]"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "addSEvalprocBuiltinAttr"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2____boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2____boxed, .m_arity = 9, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__21_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1544969214) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(149, 170, 72, 228, 230, 78, 20, 118)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__23_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(198, 12, 2, 172, 64, 98, 147, 13)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__25_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(250, 71, 61, 72, 148, 76, 126, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(35, 31, 172, 49, 129, 10, 175, 181)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "sevalprocBuiltinAttr"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(68, 143, 67, 175, 129, 184, 58, 79)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Builtin symbolic evaluation procedure"};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__8_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocs___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocs___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocs___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSEvalSimprocs___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSEvalSimprocs___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSEvalSimprocs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSEvalSimprocs___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocExtensionCore_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocExtensionCore_x3f___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__2_value),LEAN_SCALAR_PTR_LITERAL(195, 61, 75, 186, 44, 210, 52, 194)}};
static const lean_object* l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName___closed__0 = (const lean_object*)&l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName___closed__0_value;
static const lean_string_object l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "seval"};
static const lean_object* l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName___closed__1 = (const lean_object*)&l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName___closed__1_value),LEAN_SCALAR_PTR_LITERAL(203, 151, 253, 192, 151, 99, 156, 151)}};
static const lean_object* l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName___closed__2 = (const lean_object*)&l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName___closed__2_value;
static const lean_string_object l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_proc"};
static const lean_object* l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName___closed__3 = (const lean_object*)&l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocExtension_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocExtension_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocExtension_getSimprocs___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocExtension_getSimprocs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocExtension_getSimprocs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocExtension_getSimprocs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = lean_unsigned_to_nat(16u);
v___x_3_ = lean_mk_array(v___x_2_, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__0, &l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__0_once, _init_l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__0);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__2(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_obj_once(&l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__1, &l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__1_once, _init_l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__1);
v___x_8_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
lean_ctor_set(v___x_8_, 1, v___x_7_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_obj_once(&l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__2, &l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__2_once, _init_l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__2);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default;
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1481072680____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_12_ = lean_obj_once(&l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__2, &l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__2_once, _init_l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__2);
v___x_13_ = lean_st_mk_ref(v___x_12_);
v___x_14_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_14_, 0, v___x_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1481072680____hygCtx___hyg_2____boxed(lean_object* v_a_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1481072680____hygCtx___hyg_2_();
return v_res_16_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__0(void){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_24_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__1(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = lean_obj_once(&l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__0, &l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__0_once, _init_l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__0);
v___x_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__2(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_27_ = lean_obj_once(&l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__1, &l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__1_once, _init_l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__1);
v___x_28_ = lean_obj_once(&l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__1, &l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__1_once, _init_l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__1);
v___x_29_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
lean_ctor_set(v___x_29_, 1, v___x_27_);
return v___x_29_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default(void){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = lean_obj_once(&l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__2, &l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__2_once, _init_l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__2);
return v___x_30_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState(void){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default;
return v___x_31_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Simp_SimprocDecl_lt(lean_object* v_decl_u2081_32_, lean_object* v_decl_u2082_33_){
_start:
{
lean_object* v_declName_34_; lean_object* v_declName_35_; uint8_t v___x_36_; 
v_declName_34_ = lean_ctor_get(v_decl_u2081_32_, 0);
v_declName_35_ = lean_ctor_get(v_decl_u2082_33_, 0);
v___x_36_ = l_Lean_Name_quickLt(v_declName_34_, v_declName_35_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocDecl_lt___boxed(lean_object* v_decl_u2081_37_, lean_object* v_decl_u2082_38_){
_start:
{
uint8_t v_res_39_; lean_object* v_r_40_; 
v_res_39_ = l_Lean_Meta_Simp_SimprocDecl_lt(v_decl_u2081_37_, v_decl_u2082_38_);
lean_dec_ref(v_decl_u2082_38_);
lean_dec_ref(v_decl_u2081_37_);
v_r_40_ = lean_box(v_res_39_);
return v_r_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_x_41_, lean_object* v_x_42_, lean_object* v_x_43_, lean_object* v_x_44_){
_start:
{
lean_object* v_ks_45_; lean_object* v_vs_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_70_; 
v_ks_45_ = lean_ctor_get(v_x_41_, 0);
v_vs_46_ = lean_ctor_get(v_x_41_, 1);
v_isSharedCheck_70_ = !lean_is_exclusive(v_x_41_);
if (v_isSharedCheck_70_ == 0)
{
v___x_48_ = v_x_41_;
v_isShared_49_ = v_isSharedCheck_70_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_vs_46_);
lean_inc(v_ks_45_);
lean_dec(v_x_41_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_70_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___x_50_; uint8_t v___x_51_; 
v___x_50_ = lean_array_get_size(v_ks_45_);
v___x_51_ = lean_nat_dec_lt(v_x_42_, v___x_50_);
if (v___x_51_ == 0)
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_55_; 
lean_dec(v_x_42_);
v___x_52_ = lean_array_push(v_ks_45_, v_x_43_);
v___x_53_ = lean_array_push(v_vs_46_, v_x_44_);
if (v_isShared_49_ == 0)
{
lean_ctor_set(v___x_48_, 1, v___x_53_);
lean_ctor_set(v___x_48_, 0, v___x_52_);
v___x_55_ = v___x_48_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v___x_52_);
lean_ctor_set(v_reuseFailAlloc_56_, 1, v___x_53_);
v___x_55_ = v_reuseFailAlloc_56_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
return v___x_55_;
}
}
else
{
lean_object* v_k_x27_57_; uint8_t v___x_58_; 
v_k_x27_57_ = lean_array_fget_borrowed(v_ks_45_, v_x_42_);
v___x_58_ = lean_name_eq(v_x_43_, v_k_x27_57_);
if (v___x_58_ == 0)
{
lean_object* v___x_60_; 
if (v_isShared_49_ == 0)
{
v___x_60_ = v___x_48_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v_ks_45_);
lean_ctor_set(v_reuseFailAlloc_64_, 1, v_vs_46_);
v___x_60_ = v_reuseFailAlloc_64_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_unsigned_to_nat(1u);
v___x_62_ = lean_nat_add(v_x_42_, v___x_61_);
lean_dec(v_x_42_);
v_x_41_ = v___x_60_;
v_x_42_ = v___x_62_;
goto _start;
}
}
else
{
lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_68_; 
v___x_65_ = lean_array_fset(v_ks_45_, v_x_42_, v_x_43_);
v___x_66_ = lean_array_fset(v_vs_46_, v_x_42_, v_x_44_);
lean_dec(v_x_42_);
if (v_isShared_49_ == 0)
{
lean_ctor_set(v___x_48_, 1, v___x_66_);
lean_ctor_set(v___x_48_, 0, v___x_65_);
v___x_68_ = v___x_48_;
goto v_reusejp_67_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_69_, 0, v___x_65_);
lean_ctor_set(v_reuseFailAlloc_69_, 1, v___x_66_);
v___x_68_ = v_reuseFailAlloc_69_;
goto v_reusejp_67_;
}
v_reusejp_67_:
{
return v___x_68_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object* v_n_71_, lean_object* v_k_72_, lean_object* v_v_73_){
_start:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = lean_unsigned_to_nat(0u);
v___x_75_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(v_n_71_, v___x_74_, v_k_72_, v_v_73_);
return v___x_75_;
}
}
static uint64_t _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_76_; uint64_t v___x_77_; 
v___x_76_ = lean_unsigned_to_nat(1723u);
v___x_77_ = lean_uint64_of_nat(v___x_76_);
return v___x_77_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_78_; size_t v___x_79_; size_t v___x_80_; 
v___x_78_ = ((size_t)5ULL);
v___x_79_ = ((size_t)1ULL);
v___x_80_ = lean_usize_shift_left(v___x_79_, v___x_78_);
return v___x_80_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_81_; size_t v___x_82_; size_t v___x_83_; 
v___x_81_ = ((size_t)1ULL);
v___x_82_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__0);
v___x_83_ = lean_usize_sub(v___x_82_, v___x_81_);
return v___x_83_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_x_85_, size_t v_x_86_, size_t v_x_87_, lean_object* v_x_88_, lean_object* v_x_89_){
_start:
{
if (lean_obj_tag(v_x_85_) == 0)
{
lean_object* v_es_90_; size_t v___x_91_; size_t v___x_92_; size_t v___x_93_; size_t v___x_94_; lean_object* v_j_95_; lean_object* v___x_96_; uint8_t v___x_97_; 
v_es_90_ = lean_ctor_get(v_x_85_, 0);
v___x_91_ = ((size_t)5ULL);
v___x_92_ = ((size_t)1ULL);
v___x_93_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1);
v___x_94_ = lean_usize_land(v_x_86_, v___x_93_);
v_j_95_ = lean_usize_to_nat(v___x_94_);
v___x_96_ = lean_array_get_size(v_es_90_);
v___x_97_ = lean_nat_dec_lt(v_j_95_, v___x_96_);
if (v___x_97_ == 0)
{
lean_dec(v_j_95_);
lean_dec(v_x_89_);
lean_dec(v_x_88_);
return v_x_85_;
}
else
{
lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_134_; 
lean_inc_ref(v_es_90_);
v_isSharedCheck_134_ = !lean_is_exclusive(v_x_85_);
if (v_isSharedCheck_134_ == 0)
{
lean_object* v_unused_135_; 
v_unused_135_ = lean_ctor_get(v_x_85_, 0);
lean_dec(v_unused_135_);
v___x_99_ = v_x_85_;
v_isShared_100_ = v_isSharedCheck_134_;
goto v_resetjp_98_;
}
else
{
lean_dec(v_x_85_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_134_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v_v_101_; lean_object* v___x_102_; lean_object* v_xs_x27_103_; lean_object* v___y_105_; 
v_v_101_ = lean_array_fget(v_es_90_, v_j_95_);
v___x_102_ = lean_box(0);
v_xs_x27_103_ = lean_array_fset(v_es_90_, v_j_95_, v___x_102_);
switch(lean_obj_tag(v_v_101_))
{
case 0:
{
lean_object* v_key_110_; lean_object* v_val_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_121_; 
v_key_110_ = lean_ctor_get(v_v_101_, 0);
v_val_111_ = lean_ctor_get(v_v_101_, 1);
v_isSharedCheck_121_ = !lean_is_exclusive(v_v_101_);
if (v_isSharedCheck_121_ == 0)
{
v___x_113_ = v_v_101_;
v_isShared_114_ = v_isSharedCheck_121_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_val_111_);
lean_inc(v_key_110_);
lean_dec(v_v_101_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_121_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
uint8_t v___x_115_; 
v___x_115_ = lean_name_eq(v_x_88_, v_key_110_);
if (v___x_115_ == 0)
{
lean_object* v___x_116_; lean_object* v___x_117_; 
lean_del_object(v___x_113_);
v___x_116_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_110_, v_val_111_, v_x_88_, v_x_89_);
v___x_117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_117_, 0, v___x_116_);
v___y_105_ = v___x_117_;
goto v___jp_104_;
}
else
{
lean_object* v___x_119_; 
lean_dec(v_val_111_);
lean_dec(v_key_110_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 1, v_x_89_);
lean_ctor_set(v___x_113_, 0, v_x_88_);
v___x_119_ = v___x_113_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_x_88_);
lean_ctor_set(v_reuseFailAlloc_120_, 1, v_x_89_);
v___x_119_ = v_reuseFailAlloc_120_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
v___y_105_ = v___x_119_;
goto v___jp_104_;
}
}
}
}
case 1:
{
lean_object* v_node_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_132_; 
v_node_122_ = lean_ctor_get(v_v_101_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v_v_101_);
if (v_isSharedCheck_132_ == 0)
{
v___x_124_ = v_v_101_;
v_isShared_125_ = v_isSharedCheck_132_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_node_122_);
lean_dec(v_v_101_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_132_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
size_t v___x_126_; size_t v___x_127_; lean_object* v___x_128_; lean_object* v___x_130_; 
v___x_126_ = lean_usize_shift_right(v_x_86_, v___x_91_);
v___x_127_ = lean_usize_add(v_x_87_, v___x_92_);
v___x_128_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg(v_node_122_, v___x_126_, v___x_127_, v_x_88_, v_x_89_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 0, v___x_128_);
v___x_130_ = v___x_124_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v___x_128_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
v___y_105_ = v___x_130_;
goto v___jp_104_;
}
}
}
default: 
{
lean_object* v___x_133_; 
v___x_133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_133_, 0, v_x_88_);
lean_ctor_set(v___x_133_, 1, v_x_89_);
v___y_105_ = v___x_133_;
goto v___jp_104_;
}
}
v___jp_104_:
{
lean_object* v___x_106_; lean_object* v___x_108_; 
v___x_106_ = lean_array_fset(v_xs_x27_103_, v_j_95_, v___y_105_);
lean_dec(v_j_95_);
if (v_isShared_100_ == 0)
{
lean_ctor_set(v___x_99_, 0, v___x_106_);
v___x_108_ = v___x_99_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v___x_106_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
return v___x_108_;
}
}
}
}
}
else
{
lean_object* v_ks_136_; lean_object* v_vs_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_157_; 
v_ks_136_ = lean_ctor_get(v_x_85_, 0);
v_vs_137_ = lean_ctor_get(v_x_85_, 1);
v_isSharedCheck_157_ = !lean_is_exclusive(v_x_85_);
if (v_isSharedCheck_157_ == 0)
{
v___x_139_ = v_x_85_;
v_isShared_140_ = v_isSharedCheck_157_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_vs_137_);
lean_inc(v_ks_136_);
lean_dec(v_x_85_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_157_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_142_; 
if (v_isShared_140_ == 0)
{
v___x_142_ = v___x_139_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v_ks_136_);
lean_ctor_set(v_reuseFailAlloc_156_, 1, v_vs_137_);
v___x_142_ = v_reuseFailAlloc_156_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
lean_object* v_newNode_143_; uint8_t v___y_145_; size_t v___x_151_; uint8_t v___x_152_; 
v_newNode_143_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v___x_142_, v_x_88_, v_x_89_);
v___x_151_ = ((size_t)7ULL);
v___x_152_ = lean_usize_dec_le(v___x_151_, v_x_87_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; 
v___x_153_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_143_);
v___x_154_ = lean_unsigned_to_nat(4u);
v___x_155_ = lean_nat_dec_lt(v___x_153_, v___x_154_);
lean_dec(v___x_153_);
v___y_145_ = v___x_155_;
goto v___jp_144_;
}
else
{
v___y_145_ = v___x_152_;
goto v___jp_144_;
}
v___jp_144_:
{
if (v___y_145_ == 0)
{
lean_object* v_ks_146_; lean_object* v_vs_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v_ks_146_ = lean_ctor_get(v_newNode_143_, 0);
lean_inc_ref(v_ks_146_);
v_vs_147_ = lean_ctor_get(v_newNode_143_, 1);
lean_inc_ref(v_vs_147_);
lean_dec_ref(v_newNode_143_);
v___x_148_ = lean_unsigned_to_nat(0u);
v___x_149_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__2);
v___x_150_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_x_87_, v_ks_146_, v_vs_147_, v___x_148_, v___x_149_);
lean_dec_ref(v_vs_147_);
lean_dec_ref(v_ks_146_);
return v___x_150_;
}
else
{
return v_newNode_143_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(size_t v_depth_158_, lean_object* v_keys_159_, lean_object* v_vals_160_, lean_object* v_i_161_, lean_object* v_entries_162_){
_start:
{
lean_object* v___x_163_; uint8_t v___x_164_; 
v___x_163_ = lean_array_get_size(v_keys_159_);
v___x_164_ = lean_nat_dec_lt(v_i_161_, v___x_163_);
if (v___x_164_ == 0)
{
lean_dec(v_i_161_);
return v_entries_162_;
}
else
{
lean_object* v_k_165_; lean_object* v_v_166_; uint64_t v___y_168_; 
v_k_165_ = lean_array_fget_borrowed(v_keys_159_, v_i_161_);
v_v_166_ = lean_array_fget_borrowed(v_vals_160_, v_i_161_);
if (lean_obj_tag(v_k_165_) == 0)
{
uint64_t v___x_179_; 
v___x_179_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0);
v___y_168_ = v___x_179_;
goto v___jp_167_;
}
else
{
uint64_t v_hash_180_; 
v_hash_180_ = lean_ctor_get_uint64(v_k_165_, sizeof(void*)*2);
v___y_168_ = v_hash_180_;
goto v___jp_167_;
}
v___jp_167_:
{
size_t v_h_169_; size_t v___x_170_; lean_object* v___x_171_; size_t v___x_172_; size_t v___x_173_; size_t v___x_174_; size_t v_h_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v_h_169_ = lean_uint64_to_usize(v___y_168_);
v___x_170_ = ((size_t)5ULL);
v___x_171_ = lean_unsigned_to_nat(1u);
v___x_172_ = ((size_t)1ULL);
v___x_173_ = lean_usize_sub(v_depth_158_, v___x_172_);
v___x_174_ = lean_usize_mul(v___x_170_, v___x_173_);
v_h_175_ = lean_usize_shift_right(v_h_169_, v___x_174_);
v___x_176_ = lean_nat_add(v_i_161_, v___x_171_);
lean_dec(v_i_161_);
lean_inc(v_v_166_);
lean_inc(v_k_165_);
v___x_177_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg(v_entries_162_, v_h_175_, v_depth_158_, v_k_165_, v_v_166_);
v_i_161_ = v___x_176_;
v_entries_162_ = v___x_177_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_181_, lean_object* v_keys_182_, lean_object* v_vals_183_, lean_object* v_i_184_, lean_object* v_entries_185_){
_start:
{
size_t v_depth_boxed_186_; lean_object* v_res_187_; 
v_depth_boxed_186_ = lean_unbox_usize(v_depth_181_);
lean_dec(v_depth_181_);
v_res_187_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_depth_boxed_186_, v_keys_182_, v_vals_183_, v_i_184_, v_entries_185_);
lean_dec_ref(v_vals_183_);
lean_dec_ref(v_keys_182_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_x_188_, lean_object* v_x_189_, lean_object* v_x_190_, lean_object* v_x_191_, lean_object* v_x_192_){
_start:
{
size_t v_x_1475__boxed_193_; size_t v_x_1476__boxed_194_; lean_object* v_res_195_; 
v_x_1475__boxed_193_ = lean_unbox_usize(v_x_189_);
lean_dec(v_x_189_);
v_x_1476__boxed_194_ = lean_unbox_usize(v_x_190_);
lean_dec(v_x_190_);
v_res_195_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_188_, v_x_1475__boxed_193_, v_x_1476__boxed_194_, v_x_191_, v_x_192_);
return v_res_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0___redArg(lean_object* v_x_196_, lean_object* v_x_197_, lean_object* v_x_198_){
_start:
{
uint64_t v___y_200_; 
if (lean_obj_tag(v_x_197_) == 0)
{
uint64_t v___x_204_; 
v___x_204_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0);
v___y_200_ = v___x_204_;
goto v___jp_199_;
}
else
{
uint64_t v_hash_205_; 
v_hash_205_ = lean_ctor_get_uint64(v_x_197_, sizeof(void*)*2);
v___y_200_ = v_hash_205_;
goto v___jp_199_;
}
v___jp_199_:
{
size_t v___x_201_; size_t v___x_202_; lean_object* v___x_203_; 
v___x_201_ = lean_uint64_to_usize(v___y_200_);
v___x_202_ = ((size_t)1ULL);
v___x_203_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_196_, v___x_201_, v___x_202_, v_x_197_, v_x_198_);
return v___x_203_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(lean_object* v_s_206_, lean_object* v_d_207_){
_start:
{
lean_object* v_builtin_208_; lean_object* v_newEntries_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_219_; 
v_builtin_208_ = lean_ctor_get(v_s_206_, 0);
v_newEntries_209_ = lean_ctor_get(v_s_206_, 1);
v_isSharedCheck_219_ = !lean_is_exclusive(v_s_206_);
if (v_isSharedCheck_219_ == 0)
{
v___x_211_ = v_s_206_;
v_isShared_212_ = v_isSharedCheck_219_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_newEntries_209_);
lean_inc(v_builtin_208_);
lean_dec(v_s_206_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_219_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v_declName_213_; lean_object* v_keys_214_; lean_object* v___x_215_; lean_object* v___x_217_; 
v_declName_213_ = lean_ctor_get(v_d_207_, 0);
lean_inc(v_declName_213_);
v_keys_214_ = lean_ctor_get(v_d_207_, 1);
lean_inc_ref(v_keys_214_);
lean_dec_ref(v_d_207_);
v___x_215_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0___redArg(v_newEntries_209_, v_declName_213_, v_keys_214_);
if (v_isShared_212_ == 0)
{
lean_ctor_set(v___x_211_, 1, v___x_215_);
v___x_217_ = v___x_211_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v_builtin_208_);
lean_ctor_set(v_reuseFailAlloc_218_, 1, v___x_215_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
return v___x_217_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(lean_object* v_result_220_, lean_object* v_declName_221_, lean_object* v_keys_222_){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_223_, 0, v_declName_221_);
lean_ctor_set(v___x_223_, 1, v_keys_222_);
v___x_224_ = lean_array_push(v_result_220_, v___x_223_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2___redArg(lean_object* v_as_226_, lean_object* v_lo_227_, lean_object* v_hi_228_){
_start:
{
uint8_t v___x_229_; 
v___x_229_ = lean_nat_dec_lt(v_lo_227_, v_hi_228_);
if (v___x_229_ == 0)
{
lean_dec(v_lo_227_);
return v_as_226_;
}
else
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v_fst_232_; lean_object* v_snd_233_; uint8_t v___x_234_; 
v___x_230_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2___redArg___closed__0));
lean_inc(v_lo_227_);
v___x_231_ = l_Array_qpartition___redArg(v_as_226_, v___x_230_, v_lo_227_, v_hi_228_);
v_fst_232_ = lean_ctor_get(v___x_231_, 0);
lean_inc(v_fst_232_);
v_snd_233_ = lean_ctor_get(v___x_231_, 1);
lean_inc(v_snd_233_);
lean_dec_ref(v___x_231_);
v___x_234_ = lean_nat_dec_le(v_hi_228_, v_fst_232_);
if (v___x_234_ == 0)
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_235_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2___redArg(v_snd_233_, v_lo_227_, v_fst_232_);
v___x_236_ = lean_unsigned_to_nat(1u);
v___x_237_ = lean_nat_add(v_fst_232_, v___x_236_);
lean_dec(v_fst_232_);
v_as_226_ = v___x_235_;
v_lo_227_ = v___x_237_;
goto _start;
}
else
{
lean_dec(v_fst_232_);
lean_dec(v_lo_227_);
return v_snd_233_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object* v_as_239_, lean_object* v_lo_240_, lean_object* v_hi_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2___redArg(v_as_239_, v_lo_240_, v_hi_241_);
lean_dec(v_hi_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1___redArg___lam__0(lean_object* v_f_243_, lean_object* v_x1_244_, lean_object* v_x2_245_, lean_object* v_x3_246_){
_start:
{
lean_object* v___x_247_; 
v___x_247_ = lean_apply_3(v_f_243_, v_x1_244_, v_x2_245_, v_x3_246_);
return v___x_247_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__9___redArg(lean_object* v_f_248_, lean_object* v_keys_249_, lean_object* v_vals_250_, lean_object* v_i_251_, lean_object* v_acc_252_){
_start:
{
lean_object* v___x_253_; uint8_t v___x_254_; 
v___x_253_ = lean_array_get_size(v_keys_249_);
v___x_254_ = lean_nat_dec_lt(v_i_251_, v___x_253_);
if (v___x_254_ == 0)
{
lean_dec(v_i_251_);
lean_dec(v_f_248_);
return v_acc_252_;
}
else
{
lean_object* v_k_255_; lean_object* v_v_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v_k_255_ = lean_array_fget_borrowed(v_keys_249_, v_i_251_);
v_v_256_ = lean_array_fget_borrowed(v_vals_250_, v_i_251_);
lean_inc(v_f_248_);
lean_inc(v_v_256_);
lean_inc(v_k_255_);
v___x_257_ = lean_apply_3(v_f_248_, v_acc_252_, v_k_255_, v_v_256_);
v___x_258_ = lean_unsigned_to_nat(1u);
v___x_259_ = lean_nat_add(v_i_251_, v___x_258_);
lean_dec(v_i_251_);
v_i_251_ = v___x_259_;
v_acc_252_ = v___x_257_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__9___redArg___boxed(lean_object* v_f_261_, lean_object* v_keys_262_, lean_object* v_vals_263_, lean_object* v_i_264_, lean_object* v_acc_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__9___redArg(v_f_261_, v_keys_262_, v_vals_263_, v_i_264_, v_acc_265_);
lean_dec_ref(v_vals_263_);
lean_dec_ref(v_keys_262_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5___redArg(lean_object* v_f_267_, lean_object* v_x_268_, lean_object* v_x_269_){
_start:
{
if (lean_obj_tag(v_x_268_) == 0)
{
lean_object* v_es_270_; lean_object* v___x_271_; lean_object* v___x_272_; uint8_t v___x_273_; 
v_es_270_ = lean_ctor_get(v_x_268_, 0);
v___x_271_ = lean_unsigned_to_nat(0u);
v___x_272_ = lean_array_get_size(v_es_270_);
v___x_273_ = lean_nat_dec_lt(v___x_271_, v___x_272_);
if (v___x_273_ == 0)
{
lean_dec(v_f_267_);
return v_x_269_;
}
else
{
uint8_t v___x_274_; 
v___x_274_ = lean_nat_dec_le(v___x_272_, v___x_272_);
if (v___x_274_ == 0)
{
if (v___x_273_ == 0)
{
lean_dec(v_f_267_);
return v_x_269_;
}
else
{
size_t v___x_275_; size_t v___x_276_; lean_object* v___x_277_; 
v___x_275_ = ((size_t)0ULL);
v___x_276_ = lean_usize_of_nat(v___x_272_);
v___x_277_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8___redArg(v_f_267_, v_es_270_, v___x_275_, v___x_276_, v_x_269_);
return v___x_277_;
}
}
else
{
size_t v___x_278_; size_t v___x_279_; lean_object* v___x_280_; 
v___x_278_ = ((size_t)0ULL);
v___x_279_ = lean_usize_of_nat(v___x_272_);
v___x_280_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8___redArg(v_f_267_, v_es_270_, v___x_278_, v___x_279_, v_x_269_);
return v___x_280_;
}
}
}
else
{
lean_object* v_ks_281_; lean_object* v_vs_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v_ks_281_ = lean_ctor_get(v_x_268_, 0);
v_vs_282_ = lean_ctor_get(v_x_268_, 1);
v___x_283_ = lean_unsigned_to_nat(0u);
v___x_284_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__9___redArg(v_f_267_, v_ks_281_, v_vs_282_, v___x_283_, v_x_269_);
return v___x_284_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8___redArg(lean_object* v_f_285_, lean_object* v_as_286_, size_t v_i_287_, size_t v_stop_288_, lean_object* v_b_289_){
_start:
{
lean_object* v___y_291_; uint8_t v___x_295_; 
v___x_295_ = lean_usize_dec_eq(v_i_287_, v_stop_288_);
if (v___x_295_ == 0)
{
lean_object* v___x_296_; 
v___x_296_ = lean_array_uget_borrowed(v_as_286_, v_i_287_);
switch(lean_obj_tag(v___x_296_))
{
case 0:
{
lean_object* v_key_297_; lean_object* v_val_298_; lean_object* v___x_299_; 
v_key_297_ = lean_ctor_get(v___x_296_, 0);
v_val_298_ = lean_ctor_get(v___x_296_, 1);
lean_inc(v_f_285_);
lean_inc(v_val_298_);
lean_inc(v_key_297_);
v___x_299_ = lean_apply_3(v_f_285_, v_b_289_, v_key_297_, v_val_298_);
v___y_291_ = v___x_299_;
goto v___jp_290_;
}
case 1:
{
lean_object* v_node_300_; lean_object* v___x_301_; 
v_node_300_ = lean_ctor_get(v___x_296_, 0);
lean_inc(v_f_285_);
v___x_301_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5___redArg(v_f_285_, v_node_300_, v_b_289_);
v___y_291_ = v___x_301_;
goto v___jp_290_;
}
default: 
{
v___y_291_ = v_b_289_;
goto v___jp_290_;
}
}
}
else
{
lean_dec(v_f_285_);
return v_b_289_;
}
v___jp_290_:
{
size_t v___x_292_; size_t v___x_293_; 
v___x_292_ = ((size_t)1ULL);
v___x_293_ = lean_usize_add(v_i_287_, v___x_292_);
v_i_287_ = v___x_293_;
v_b_289_ = v___y_291_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8___redArg___boxed(lean_object* v_f_302_, lean_object* v_as_303_, lean_object* v_i_304_, lean_object* v_stop_305_, lean_object* v_b_306_){
_start:
{
size_t v_i_boxed_307_; size_t v_stop_boxed_308_; lean_object* v_res_309_; 
v_i_boxed_307_ = lean_unbox_usize(v_i_304_);
lean_dec(v_i_304_);
v_stop_boxed_308_ = lean_unbox_usize(v_stop_305_);
lean_dec(v_stop_305_);
v_res_309_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8___redArg(v_f_302_, v_as_303_, v_i_boxed_307_, v_stop_boxed_308_, v_b_306_);
lean_dec_ref(v_as_303_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_f_310_, lean_object* v_x_311_, lean_object* v_x_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5___redArg(v_f_310_, v_x_311_, v_x_312_);
lean_dec_ref(v_x_311_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1___redArg(lean_object* v_map_314_, lean_object* v_f_315_, lean_object* v_init_316_){
_start:
{
lean_object* v___f_317_; lean_object* v___x_318_; 
v___f_317_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_317_, 0, v_f_315_);
v___x_318_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5___redArg(v___f_317_, v_map_314_, v_init_316_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_map_319_, lean_object* v_f_320_, lean_object* v_init_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l_Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1___redArg(v_map_319_, v_f_320_, v_init_321_);
lean_dec_ref(v_map_319_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(lean_object* v___f_325_, lean_object* v_s_326_){
_start:
{
lean_object* v_newEntries_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v_result_330_; lean_object* v___x_331_; uint8_t v___x_332_; 
v_newEntries_327_ = lean_ctor_get(v_s_326_, 1);
v___x_328_ = lean_unsigned_to_nat(0u);
v___x_329_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___lam__2___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_));
v_result_330_ = l_Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1___redArg(v_newEntries_327_, v___f_325_, v___x_329_);
v___x_331_ = lean_array_get_size(v_result_330_);
v___x_332_ = lean_nat_dec_eq(v___x_331_, v___x_328_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___y_336_; uint8_t v___x_340_; 
v___x_333_ = lean_unsigned_to_nat(1u);
v___x_334_ = lean_nat_sub(v___x_331_, v___x_333_);
v___x_340_ = lean_nat_dec_le(v___x_328_, v___x_334_);
if (v___x_340_ == 0)
{
lean_inc(v___x_334_);
v___y_336_ = v___x_334_;
goto v___jp_335_;
}
else
{
v___y_336_ = v___x_328_;
goto v___jp_335_;
}
v___jp_335_:
{
uint8_t v___x_337_; 
v___x_337_ = lean_nat_dec_le(v___y_336_, v___x_334_);
if (v___x_337_ == 0)
{
lean_object* v___x_338_; 
lean_dec(v___x_334_);
lean_inc(v___y_336_);
v___x_338_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2___redArg(v_result_330_, v___y_336_, v___y_336_);
lean_dec(v___y_336_);
return v___x_338_;
}
else
{
lean_object* v___x_339_; 
v___x_339_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2___redArg(v_result_330_, v___y_336_, v___x_334_);
lean_dec(v___x_334_);
return v___x_339_;
}
}
}
else
{
return v_result_330_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2____boxed(lean_object* v___f_341_, lean_object* v_s_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l_Lean_Meta_Simp_initFn___lam__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(v___f_341_, v_s_342_);
lean_dec_ref(v_s_342_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(lean_object* v_x_344_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = lean_box(0);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2____boxed(lean_object* v_x_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_Lean_Meta_Simp_initFn___lam__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(v_x_346_);
lean_dec_ref(v_x_346_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(lean_object* v___f_348_, lean_object* v_x_349_, lean_object* v_s_350_){
_start:
{
lean_object* v_newEntries_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v_result_354_; lean_object* v___y_356_; lean_object* v___y_357_; lean_object* v___x_360_; uint8_t v___x_361_; 
v_newEntries_351_ = lean_ctor_get(v_s_350_, 1);
v___x_352_ = lean_unsigned_to_nat(0u);
v___x_353_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___lam__2___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_));
v_result_354_ = l_Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1___redArg(v_newEntries_351_, v___f_348_, v___x_353_);
v___x_360_ = lean_array_get_size(v_result_354_);
v___x_361_ = lean_nat_dec_eq(v___x_360_, v___x_352_);
if (v___x_361_ == 0)
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___y_365_; uint8_t v___x_367_; 
v___x_362_ = lean_unsigned_to_nat(1u);
v___x_363_ = lean_nat_sub(v___x_360_, v___x_362_);
v___x_367_ = lean_nat_dec_le(v___x_352_, v___x_363_);
if (v___x_367_ == 0)
{
lean_inc(v___x_363_);
v___y_365_ = v___x_363_;
goto v___jp_364_;
}
else
{
v___y_365_ = v___x_352_;
goto v___jp_364_;
}
v___jp_364_:
{
uint8_t v___x_366_; 
v___x_366_ = lean_nat_dec_le(v___y_365_, v___x_363_);
if (v___x_366_ == 0)
{
lean_dec(v___x_363_);
lean_inc(v___y_365_);
v___y_356_ = v___y_365_;
v___y_357_ = v___y_365_;
goto v___jp_355_;
}
else
{
v___y_356_ = v___y_365_;
v___y_357_ = v___x_363_;
goto v___jp_355_;
}
}
}
else
{
lean_object* v___x_368_; 
lean_inc_n(v_result_354_, 2);
v___x_368_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_368_, 0, v_result_354_);
lean_ctor_set(v___x_368_, 1, v_result_354_);
lean_ctor_set(v___x_368_, 2, v_result_354_);
return v___x_368_;
}
v___jp_355_:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2___redArg(v_result_354_, v___y_356_, v___y_357_);
lean_dec(v___y_357_);
lean_inc_ref_n(v___x_358_, 2);
v___x_359_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
lean_ctor_set(v___x_359_, 1, v___x_358_);
lean_ctor_set(v___x_359_, 2, v___x_358_);
return v___x_359_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2____boxed(lean_object* v___f_369_, lean_object* v_x_370_, lean_object* v_s_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lean_Meta_Simp_initFn___lam__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(v___f_369_, v_x_370_, v_s_371_);
lean_dec_ref(v_s_371_);
lean_dec_ref(v_x_370_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(lean_object* v___x_373_){
_start:
{
lean_object* v___x_375_; lean_object* v_keys_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_385_; 
v___x_375_ = lean_st_ref_get(v___x_373_);
v_keys_376_ = lean_ctor_get(v___x_375_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_375_);
if (v_isSharedCheck_385_ == 0)
{
lean_object* v_unused_386_; 
v_unused_386_ = lean_ctor_get(v___x_375_, 1);
lean_dec(v_unused_386_);
v___x_378_ = v___x_375_;
v_isShared_379_ = v_isSharedCheck_385_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_keys_376_);
lean_dec(v___x_375_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_385_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v___x_380_; lean_object* v___x_382_; 
v___x_380_ = lean_obj_once(&l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__1, &l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__1_once, _init_l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__1);
if (v_isShared_379_ == 0)
{
lean_ctor_set(v___x_378_, 1, v___x_380_);
v___x_382_ = v___x_378_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_keys_376_);
lean_ctor_set(v_reuseFailAlloc_384_, 1, v___x_380_);
v___x_382_ = v_reuseFailAlloc_384_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
lean_object* v___x_383_; 
v___x_383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_383_, 0, v___x_382_);
return v___x_383_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2____boxed(lean_object* v___x_387_, lean_object* v___y_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lean_Meta_Simp_initFn___lam__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(v___x_387_);
lean_dec(v___x_387_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(lean_object* v___x_390_, lean_object* v_x_391_, lean_object* v___y_392_){
_start:
{
lean_object* v___x_394_; lean_object* v_keys_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_404_; 
v___x_394_ = lean_st_ref_get(v___x_390_);
v_keys_395_ = lean_ctor_get(v___x_394_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_394_);
if (v_isSharedCheck_404_ == 0)
{
lean_object* v_unused_405_; 
v_unused_405_ = lean_ctor_get(v___x_394_, 1);
lean_dec(v_unused_405_);
v___x_397_ = v___x_394_;
v_isShared_398_ = v_isSharedCheck_404_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_keys_395_);
lean_dec(v___x_394_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_404_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_399_; lean_object* v___x_401_; 
v___x_399_ = lean_obj_once(&l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__1, &l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__1_once, _init_l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default___closed__1);
if (v_isShared_398_ == 0)
{
lean_ctor_set(v___x_397_, 1, v___x_399_);
v___x_401_ = v___x_397_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_keys_395_);
lean_ctor_set(v_reuseFailAlloc_403_, 1, v___x_399_);
v___x_401_ = v_reuseFailAlloc_403_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
lean_object* v___x_402_; 
v___x_402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
return v___x_402_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn___lam__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2____boxed(lean_object* v___x_406_, lean_object* v_x_407_, lean_object* v___y_408_, lean_object* v___y_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l_Lean_Meta_Simp_initFn___lam__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(v___x_406_, v_x_407_, v___y_408_);
lean_dec_ref(v___y_408_);
lean_dec_ref(v_x_407_);
lean_dec(v___x_406_);
return v_res_410_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_427_; lean_object* v___f_428_; 
v___x_427_ = l_Lean_Meta_Simp_builtinSimprocDeclsRef;
v___f_428_ = lean_alloc_closure((void*)(l_Lean_Meta_Simp_initFn___lam__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_428_, 0, v___x_427_);
return v___f_428_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_429_; lean_object* v___f_430_; 
v___x_429_ = l_Lean_Meta_Simp_builtinSimprocDeclsRef;
v___f_430_ = lean_alloc_closure((void*)(l_Lean_Meta_Simp_initFn___lam__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2____boxed), 4, 1);
lean_closure_set(v___f_430_, 0, v___x_429_);
return v___f_430_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___f_433_; lean_object* v___f_434_; lean_object* v___f_435_; lean_object* v___f_436_; lean_object* v___f_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_431_ = lean_box(0);
v___x_432_ = lean_box(2);
v___f_433_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_));
v___f_434_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_));
v___f_435_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_));
v___f_436_ = lean_obj_once(&l_Lean_Meta_Simp_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_, &l_Lean_Meta_Simp_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__once, _init_l_Lean_Meta_Simp_initFn___closed__11_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_);
v___f_437_ = lean_obj_once(&l_Lean_Meta_Simp_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_, &l_Lean_Meta_Simp_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__once, _init_l_Lean_Meta_Simp_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_);
v___x_438_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__9_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_));
v___x_439_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_439_, 0, v___x_438_);
lean_ctor_set(v___x_439_, 1, v___f_437_);
lean_ctor_set(v___x_439_, 2, v___f_436_);
lean_ctor_set(v___x_439_, 3, v___f_435_);
lean_ctor_set(v___x_439_, 4, v___f_434_);
lean_ctor_set(v___x_439_, 5, v___f_433_);
lean_ctor_set(v___x_439_, 6, v___x_432_);
lean_ctor_set(v___x_439_, 7, v___x_431_);
return v___x_439_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_440_; lean_object* v___x_441_; lean_object* v___x_442_; 
v___f_440_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_));
v___x_441_ = lean_obj_once(&l_Lean_Meta_Simp_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_, &l_Lean_Meta_Simp_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__once, _init_l_Lean_Meta_Simp_initFn___closed__12_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_);
v___x_442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_442_, 0, v___x_441_);
lean_ctor_set(v___x_442_, 1, v___f_440_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_444_ = lean_obj_once(&l_Lean_Meta_Simp_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_, &l_Lean_Meta_Simp_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__once, _init_l_Lean_Meta_Simp_initFn___closed__13_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_);
v___x_445_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2____boxed(lean_object* v_a_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_();
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b2_448_, lean_object* v_x_449_, lean_object* v_x_450_, lean_object* v_x_451_){
_start:
{
lean_object* v___x_452_; 
v___x_452_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0___redArg(v_x_449_, v_x_450_, v_x_451_);
return v___x_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1(lean_object* v_00_u03c3_453_, lean_object* v_00_u03b2_454_, lean_object* v_map_455_, lean_object* v_f_456_, lean_object* v_init_457_){
_start:
{
lean_object* v___x_458_; 
v___x_458_ = l_Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1___redArg(v_map_455_, v_f_456_, v_init_457_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1___boxed(lean_object* v_00_u03c3_459_, lean_object* v_00_u03b2_460_, lean_object* v_map_461_, lean_object* v_f_462_, lean_object* v_init_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l_Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1(v_00_u03c3_459_, v_00_u03b2_460_, v_map_461_, v_f_462_, v_init_463_);
lean_dec_ref(v_map_461_);
return v_res_464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2(lean_object* v_n_465_, lean_object* v_as_466_, lean_object* v_lo_467_, lean_object* v_hi_468_, lean_object* v_w_469_, lean_object* v_hlo_470_, lean_object* v_hhi_471_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2___redArg(v_as_466_, v_lo_467_, v_hi_468_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2___boxed(lean_object* v_n_473_, lean_object* v_as_474_, lean_object* v_lo_475_, lean_object* v_hi_476_, lean_object* v_w_477_, lean_object* v_hlo_478_, lean_object* v_hhi_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__2(v_n_473_, v_as_474_, v_lo_475_, v_hi_476_, v_w_477_, v_hlo_478_, v_hhi_479_);
lean_dec(v_hi_476_);
lean_dec(v_n_473_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b2_481_, lean_object* v_x_482_, size_t v_x_483_, size_t v_x_484_, lean_object* v_x_485_, lean_object* v_x_486_){
_start:
{
lean_object* v___x_487_; 
v___x_487_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg(v_x_482_, v_x_483_, v_x_484_, v_x_485_, v_x_486_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b2_488_, lean_object* v_x_489_, lean_object* v_x_490_, lean_object* v_x_491_, lean_object* v_x_492_, lean_object* v_x_493_){
_start:
{
size_t v_x_2052__boxed_494_; size_t v_x_2053__boxed_495_; lean_object* v_res_496_; 
v_x_2052__boxed_494_ = lean_unbox_usize(v_x_490_);
lean_dec(v_x_490_);
v_x_2053__boxed_495_ = lean_unbox_usize(v_x_491_);
lean_dec(v_x_491_);
v_res_496_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b2_488_, v_x_489_, v_x_2052__boxed_494_, v_x_2053__boxed_495_, v_x_492_, v_x_493_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2___redArg(lean_object* v_map_497_, lean_object* v_f_498_, lean_object* v_init_499_){
_start:
{
lean_object* v___x_500_; 
v___x_500_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5___redArg(v_f_498_, v_map_497_, v_init_499_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2___redArg___boxed(lean_object* v_map_501_, lean_object* v_f_502_, lean_object* v_init_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2___redArg(v_map_501_, v_f_502_, v_init_503_);
lean_dec_ref(v_map_501_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2(lean_object* v_00_u03c3_505_, lean_object* v_00_u03b2_506_, lean_object* v_map_507_, lean_object* v_f_508_, lean_object* v_init_509_){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5___redArg(v_f_508_, v_map_507_, v_init_509_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2___boxed(lean_object* v_00_u03c3_511_, lean_object* v_00_u03b2_512_, lean_object* v_map_513_, lean_object* v_f_514_, lean_object* v_init_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2(v_00_u03c3_511_, v_00_u03b2_512_, v_map_513_, v_f_514_, v_init_515_);
lean_dec_ref(v_map_513_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_00_u03b2_517_, lean_object* v_n_518_, lean_object* v_k_519_, lean_object* v_v_520_){
_start:
{
lean_object* v___x_521_; 
v___x_521_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_n_518_, v_k_519_, v_v_520_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2(lean_object* v_00_u03b2_522_, size_t v_depth_523_, lean_object* v_keys_524_, lean_object* v_vals_525_, lean_object* v_heq_526_, lean_object* v_i_527_, lean_object* v_entries_528_){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg(v_depth_523_, v_keys_524_, v_vals_525_, v_i_527_, v_entries_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_530_, lean_object* v_depth_531_, lean_object* v_keys_532_, lean_object* v_vals_533_, lean_object* v_heq_534_, lean_object* v_i_535_, lean_object* v_entries_536_){
_start:
{
size_t v_depth_boxed_537_; lean_object* v_res_538_; 
v_depth_boxed_537_ = lean_unbox_usize(v_depth_531_);
lean_dec(v_depth_531_);
v_res_538_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2(v_00_u03b2_530_, v_depth_boxed_537_, v_keys_532_, v_vals_533_, v_heq_534_, v_i_535_, v_entries_536_);
lean_dec_ref(v_vals_533_);
lean_dec_ref(v_keys_532_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5(lean_object* v_00_u03c3_539_, lean_object* v_00_u03b1_540_, lean_object* v_00_u03b2_541_, lean_object* v_f_542_, lean_object* v_x_543_, lean_object* v_x_544_){
_start:
{
lean_object* v___x_545_; 
v___x_545_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5___redArg(v_f_542_, v_x_543_, v_x_544_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03c3_546_, lean_object* v_00_u03b1_547_, lean_object* v_00_u03b2_548_, lean_object* v_f_549_, lean_object* v_x_550_, lean_object* v_x_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5(v_00_u03c3_546_, v_00_u03b1_547_, v_00_u03b2_548_, v_f_549_, v_x_550_, v_x_551_);
lean_dec_ref(v_x_550_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_553_, lean_object* v_x_554_, lean_object* v_x_555_, lean_object* v_x_556_, lean_object* v_x_557_){
_start:
{
lean_object* v___x_558_; 
v___x_558_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(v_x_554_, v_x_555_, v_x_556_, v_x_557_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8(lean_object* v_00_u03b1_559_, lean_object* v_00_u03b2_560_, lean_object* v_00_u03c3_561_, lean_object* v_f_562_, lean_object* v_as_563_, size_t v_i_564_, size_t v_stop_565_, lean_object* v_b_566_){
_start:
{
lean_object* v___x_567_; 
v___x_567_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8___redArg(v_f_562_, v_as_563_, v_i_564_, v_stop_565_, v_b_566_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8___boxed(lean_object* v_00_u03b1_568_, lean_object* v_00_u03b2_569_, lean_object* v_00_u03c3_570_, lean_object* v_f_571_, lean_object* v_as_572_, lean_object* v_i_573_, lean_object* v_stop_574_, lean_object* v_b_575_){
_start:
{
size_t v_i_boxed_576_; size_t v_stop_boxed_577_; lean_object* v_res_578_; 
v_i_boxed_576_ = lean_unbox_usize(v_i_573_);
lean_dec(v_i_573_);
v_stop_boxed_577_ = lean_unbox_usize(v_stop_574_);
lean_dec(v_stop_574_);
v_res_578_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__8(v_00_u03b1_568_, v_00_u03b2_569_, v_00_u03c3_570_, v_f_571_, v_as_572_, v_i_boxed_576_, v_stop_boxed_577_, v_b_575_);
lean_dec_ref(v_as_572_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__9(lean_object* v_00_u03c3_579_, lean_object* v_00_u03b1_580_, lean_object* v_00_u03b2_581_, lean_object* v_f_582_, lean_object* v_keys_583_, lean_object* v_vals_584_, lean_object* v_heq_585_, lean_object* v_i_586_, lean_object* v_acc_587_){
_start:
{
lean_object* v___x_588_; 
v___x_588_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__9___redArg(v_f_582_, v_keys_583_, v_vals_584_, v_i_586_, v_acc_587_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__9___boxed(lean_object* v_00_u03c3_589_, lean_object* v_00_u03b1_590_, lean_object* v_00_u03b2_591_, lean_object* v_f_592_, lean_object* v_keys_593_, lean_object* v_vals_594_, lean_object* v_heq_595_, lean_object* v_i_596_, lean_object* v_acc_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__1_spec__2_spec__5_spec__9(v_00_u03c3_589_, v_00_u03b1_590_, v_00_u03b2_591_, v_f_592_, v_keys_593_, v_vals_594_, v_heq_595_, v_i_596_, v_acc_597_);
lean_dec_ref(v_vals_594_);
lean_dec_ref(v_keys_593_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0_spec__0___redArg(lean_object* v_a_599_, lean_object* v_x_600_){
_start:
{
if (lean_obj_tag(v_x_600_) == 0)
{
lean_object* v___x_601_; 
v___x_601_ = lean_box(0);
return v___x_601_;
}
else
{
lean_object* v_key_602_; lean_object* v_value_603_; lean_object* v_tail_604_; uint8_t v___x_605_; 
v_key_602_ = lean_ctor_get(v_x_600_, 0);
v_value_603_ = lean_ctor_get(v_x_600_, 1);
v_tail_604_ = lean_ctor_get(v_x_600_, 2);
v___x_605_ = lean_name_eq(v_key_602_, v_a_599_);
if (v___x_605_ == 0)
{
v_x_600_ = v_tail_604_;
goto _start;
}
else
{
lean_object* v___x_607_; 
lean_inc(v_value_603_);
v___x_607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_607_, 0, v_value_603_);
return v___x_607_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_a_608_, lean_object* v_x_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0_spec__0___redArg(v_a_608_, v_x_609_);
lean_dec(v_x_609_);
lean_dec(v_a_608_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0___redArg(lean_object* v_m_611_, lean_object* v_a_612_){
_start:
{
lean_object* v_buckets_613_; lean_object* v___x_614_; uint64_t v___y_616_; 
v_buckets_613_ = lean_ctor_get(v_m_611_, 1);
v___x_614_ = lean_array_get_size(v_buckets_613_);
if (lean_obj_tag(v_a_612_) == 0)
{
uint64_t v___x_630_; 
v___x_630_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0);
v___y_616_ = v___x_630_;
goto v___jp_615_;
}
else
{
uint64_t v_hash_631_; 
v_hash_631_ = lean_ctor_get_uint64(v_a_612_, sizeof(void*)*2);
v___y_616_ = v_hash_631_;
goto v___jp_615_;
}
v___jp_615_:
{
uint64_t v___x_617_; uint64_t v___x_618_; uint64_t v_fold_619_; uint64_t v___x_620_; uint64_t v___x_621_; uint64_t v___x_622_; size_t v___x_623_; size_t v___x_624_; size_t v___x_625_; size_t v___x_626_; size_t v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_617_ = 32ULL;
v___x_618_ = lean_uint64_shift_right(v___y_616_, v___x_617_);
v_fold_619_ = lean_uint64_xor(v___y_616_, v___x_618_);
v___x_620_ = 16ULL;
v___x_621_ = lean_uint64_shift_right(v_fold_619_, v___x_620_);
v___x_622_ = lean_uint64_xor(v_fold_619_, v___x_621_);
v___x_623_ = lean_uint64_to_usize(v___x_622_);
v___x_624_ = lean_usize_of_nat(v___x_614_);
v___x_625_ = ((size_t)1ULL);
v___x_626_ = lean_usize_sub(v___x_624_, v___x_625_);
v___x_627_ = lean_usize_land(v___x_623_, v___x_626_);
v___x_628_ = lean_array_uget_borrowed(v_buckets_613_, v___x_627_);
v___x_629_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0_spec__0___redArg(v_a_612_, v___x_628_);
return v___x_629_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0___redArg___boxed(lean_object* v_m_632_, lean_object* v_a_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0___redArg(v_m_632_, v_a_633_);
lean_dec(v_a_633_);
lean_dec_ref(v_m_632_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__2___redArg(lean_object* v_as_635_, lean_object* v_k_636_, lean_object* v_x_637_, lean_object* v_x_638_){
_start:
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v_m_641_; lean_object* v_a_642_; uint8_t v___x_643_; 
v___x_639_ = lean_nat_add(v_x_637_, v_x_638_);
v___x_640_ = lean_unsigned_to_nat(1u);
v_m_641_ = lean_nat_shiftr(v___x_639_, v___x_640_);
lean_dec(v___x_639_);
v_a_642_ = lean_array_fget_borrowed(v_as_635_, v_m_641_);
v___x_643_ = l_Lean_Meta_Simp_SimprocDecl_lt(v_a_642_, v_k_636_);
if (v___x_643_ == 0)
{
uint8_t v___x_644_; 
lean_dec(v_x_638_);
v___x_644_ = l_Lean_Meta_Simp_SimprocDecl_lt(v_k_636_, v_a_642_);
if (v___x_644_ == 0)
{
lean_object* v___x_645_; 
lean_dec(v_m_641_);
lean_dec(v_x_637_);
lean_inc(v_a_642_);
v___x_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_645_, 0, v_a_642_);
return v___x_645_;
}
else
{
lean_object* v___x_646_; uint8_t v___x_647_; 
v___x_646_ = lean_unsigned_to_nat(0u);
v___x_647_ = lean_nat_dec_eq(v_m_641_, v___x_646_);
if (v___x_647_ == 0)
{
lean_object* v___x_648_; uint8_t v___x_649_; 
v___x_648_ = lean_nat_sub(v_m_641_, v___x_640_);
lean_dec(v_m_641_);
v___x_649_ = lean_nat_dec_lt(v___x_648_, v_x_637_);
if (v___x_649_ == 0)
{
v_x_638_ = v___x_648_;
goto _start;
}
else
{
lean_object* v___x_651_; 
lean_dec(v___x_648_);
lean_dec(v_x_637_);
v___x_651_ = lean_box(0);
return v___x_651_;
}
}
else
{
lean_object* v___x_652_; 
lean_dec(v_m_641_);
lean_dec(v_x_637_);
v___x_652_ = lean_box(0);
return v___x_652_;
}
}
}
else
{
lean_object* v___x_653_; uint8_t v___x_654_; 
lean_dec(v_x_637_);
v___x_653_ = lean_nat_add(v_m_641_, v___x_640_);
lean_dec(v_m_641_);
v___x_654_ = lean_nat_dec_le(v___x_653_, v_x_638_);
if (v___x_654_ == 0)
{
lean_object* v___x_655_; 
lean_dec(v___x_653_);
lean_dec(v_x_638_);
v___x_655_ = lean_box(0);
return v___x_655_;
}
else
{
v_x_637_ = v___x_653_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__2___redArg___boxed(lean_object* v_as_657_, lean_object* v_k_658_, lean_object* v_x_659_, lean_object* v_x_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l_Array_binSearchAux___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__2___redArg(v_as_657_, v_k_658_, v_x_659_, v_x_660_);
lean_dec_ref(v_k_658_);
lean_dec_ref(v_as_657_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2_spec__3___redArg(lean_object* v_keys_662_, lean_object* v_vals_663_, lean_object* v_i_664_, lean_object* v_k_665_){
_start:
{
lean_object* v___x_666_; uint8_t v___x_667_; 
v___x_666_ = lean_array_get_size(v_keys_662_);
v___x_667_ = lean_nat_dec_lt(v_i_664_, v___x_666_);
if (v___x_667_ == 0)
{
lean_object* v___x_668_; 
lean_dec(v_i_664_);
v___x_668_ = lean_box(0);
return v___x_668_;
}
else
{
lean_object* v_k_x27_669_; uint8_t v___x_670_; 
v_k_x27_669_ = lean_array_fget_borrowed(v_keys_662_, v_i_664_);
v___x_670_ = lean_name_eq(v_k_665_, v_k_x27_669_);
if (v___x_670_ == 0)
{
lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_671_ = lean_unsigned_to_nat(1u);
v___x_672_ = lean_nat_add(v_i_664_, v___x_671_);
lean_dec(v_i_664_);
v_i_664_ = v___x_672_;
goto _start;
}
else
{
lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_674_ = lean_array_fget_borrowed(v_vals_663_, v_i_664_);
lean_dec(v_i_664_);
lean_inc(v___x_674_);
v___x_675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
return v___x_675_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_keys_676_, lean_object* v_vals_677_, lean_object* v_i_678_, lean_object* v_k_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2_spec__3___redArg(v_keys_676_, v_vals_677_, v_i_678_, v_k_679_);
lean_dec(v_k_679_);
lean_dec_ref(v_vals_677_);
lean_dec_ref(v_keys_676_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2___redArg(lean_object* v_x_681_, size_t v_x_682_, lean_object* v_x_683_){
_start:
{
if (lean_obj_tag(v_x_681_) == 0)
{
lean_object* v_es_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_705_; 
v_es_684_ = lean_ctor_get(v_x_681_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v_x_681_);
if (v_isSharedCheck_705_ == 0)
{
v___x_686_ = v_x_681_;
v_isShared_687_ = v_isSharedCheck_705_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_es_684_);
lean_dec(v_x_681_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_705_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_688_; size_t v___x_689_; size_t v___x_690_; size_t v___x_691_; lean_object* v_j_692_; lean_object* v___x_693_; 
v___x_688_ = lean_box(2);
v___x_689_ = ((size_t)5ULL);
v___x_690_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1);
v___x_691_ = lean_usize_land(v_x_682_, v___x_690_);
v_j_692_ = lean_usize_to_nat(v___x_691_);
v___x_693_ = lean_array_get(v___x_688_, v_es_684_, v_j_692_);
lean_dec(v_j_692_);
lean_dec_ref(v_es_684_);
switch(lean_obj_tag(v___x_693_))
{
case 0:
{
lean_object* v_key_694_; lean_object* v_val_695_; uint8_t v___x_696_; 
v_key_694_ = lean_ctor_get(v___x_693_, 0);
lean_inc(v_key_694_);
v_val_695_ = lean_ctor_get(v___x_693_, 1);
lean_inc(v_val_695_);
lean_dec_ref(v___x_693_);
v___x_696_ = lean_name_eq(v_x_683_, v_key_694_);
lean_dec(v_key_694_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; 
lean_dec(v_val_695_);
lean_del_object(v___x_686_);
v___x_697_ = lean_box(0);
return v___x_697_;
}
else
{
lean_object* v___x_699_; 
if (v_isShared_687_ == 0)
{
lean_ctor_set_tag(v___x_686_, 1);
lean_ctor_set(v___x_686_, 0, v_val_695_);
v___x_699_ = v___x_686_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_val_695_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
}
case 1:
{
lean_object* v_node_701_; size_t v___x_702_; 
lean_del_object(v___x_686_);
v_node_701_ = lean_ctor_get(v___x_693_, 0);
lean_inc(v_node_701_);
lean_dec_ref(v___x_693_);
v___x_702_ = lean_usize_shift_right(v_x_682_, v___x_689_);
v_x_681_ = v_node_701_;
v_x_682_ = v___x_702_;
goto _start;
}
default: 
{
lean_object* v___x_704_; 
lean_del_object(v___x_686_);
v___x_704_ = lean_box(0);
return v___x_704_;
}
}
}
}
else
{
lean_object* v_ks_706_; lean_object* v_vs_707_; lean_object* v___x_708_; lean_object* v___x_709_; 
v_ks_706_ = lean_ctor_get(v_x_681_, 0);
lean_inc_ref(v_ks_706_);
v_vs_707_ = lean_ctor_get(v_x_681_, 1);
lean_inc_ref(v_vs_707_);
lean_dec_ref(v_x_681_);
v___x_708_ = lean_unsigned_to_nat(0u);
v___x_709_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2_spec__3___redArg(v_ks_706_, v_vs_707_, v___x_708_, v_x_683_);
lean_dec_ref(v_vs_707_);
lean_dec_ref(v_ks_706_);
return v___x_709_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2___redArg___boxed(lean_object* v_x_710_, lean_object* v_x_711_, lean_object* v_x_712_){
_start:
{
size_t v_x_1442__boxed_713_; lean_object* v_res_714_; 
v_x_1442__boxed_713_ = lean_unbox_usize(v_x_711_);
lean_dec(v_x_711_);
v_res_714_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2___redArg(v_x_710_, v_x_1442__boxed_713_, v_x_712_);
lean_dec(v_x_712_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1___redArg(lean_object* v_x_715_, lean_object* v_x_716_){
_start:
{
uint64_t v___y_718_; 
if (lean_obj_tag(v_x_716_) == 0)
{
uint64_t v___x_721_; 
v___x_721_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0);
v___y_718_ = v___x_721_;
goto v___jp_717_;
}
else
{
uint64_t v_hash_722_; 
v_hash_722_ = lean_ctor_get_uint64(v_x_716_, sizeof(void*)*2);
v___y_718_ = v_hash_722_;
goto v___jp_717_;
}
v___jp_717_:
{
size_t v___x_719_; lean_object* v___x_720_; 
v___x_719_ = lean_uint64_to_usize(v___y_718_);
v___x_720_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2___redArg(v_x_715_, v___x_719_, v_x_716_);
return v___x_720_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1___redArg___boxed(lean_object* v_x_723_, lean_object* v_x_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1___redArg(v_x_723_, v_x_724_);
lean_dec(v_x_724_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocDeclKeys_x3f___redArg(lean_object* v_declName_728_, lean_object* v_a_729_){
_start:
{
lean_object* v___x_731_; lean_object* v_env_732_; lean_object* v___x_733_; lean_object* v___x_743_; 
v___x_731_ = lean_st_ref_get(v_a_729_);
v_env_732_ = lean_ctor_get(v___x_731_, 0);
lean_inc_ref(v_env_732_);
lean_dec(v___x_731_);
v___x_733_ = l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default;
v___x_743_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_732_, v_declName_728_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v___x_744_; lean_object* v_toEnvExtension_745_; lean_object* v_asyncMode_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v_newEntries_749_; lean_object* v___x_750_; 
v___x_744_ = l_Lean_Meta_Simp_simprocDeclExt;
v_toEnvExtension_745_ = lean_ctor_get(v___x_744_, 0);
v_asyncMode_746_ = lean_ctor_get(v_toEnvExtension_745_, 2);
v___x_747_ = lean_box(0);
lean_inc_ref(v_env_732_);
v___x_748_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_733_, v___x_744_, v_env_732_, v_asyncMode_746_, v___x_747_);
v_newEntries_749_ = lean_ctor_get(v___x_748_, 1);
lean_inc_ref(v_newEntries_749_);
lean_dec(v___x_748_);
v___x_750_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1___redArg(v_newEntries_749_, v_declName_728_);
if (lean_obj_tag(v___x_750_) == 1)
{
lean_object* v___x_751_; 
lean_dec_ref(v_env_732_);
lean_dec(v_declName_728_);
v___x_751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
return v___x_751_;
}
else
{
lean_dec(v___x_750_);
goto v___jp_734_;
}
}
else
{
lean_object* v_val_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_780_; 
v_val_752_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_780_ == 0)
{
v___x_754_ = v___x_743_;
v_isShared_755_ = v_isSharedCheck_780_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_val_752_);
lean_dec(v___x_743_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_780_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_756_; uint8_t v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; uint8_t v___x_761_; 
v___x_756_ = l_Lean_Meta_Simp_simprocDeclExt;
v___x_757_ = 0;
v___x_758_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_733_, v___x_756_, v_env_732_, v_val_752_, v___x_757_);
lean_dec(v_val_752_);
v___x_759_ = lean_unsigned_to_nat(0u);
v___x_760_ = lean_array_get_size(v___x_758_);
v___x_761_ = lean_nat_dec_lt(v___x_759_, v___x_760_);
if (v___x_761_ == 0)
{
lean_dec_ref(v___x_758_);
lean_del_object(v___x_754_);
goto v___jp_734_;
}
else
{
lean_object* v___x_762_; lean_object* v___x_763_; uint8_t v___x_764_; 
v___x_762_ = lean_unsigned_to_nat(1u);
v___x_763_ = lean_nat_sub(v___x_760_, v___x_762_);
v___x_764_ = lean_nat_dec_le(v___x_759_, v___x_763_);
if (v___x_764_ == 0)
{
lean_dec(v___x_763_);
lean_dec_ref(v___x_758_);
lean_del_object(v___x_754_);
goto v___jp_734_;
}
else
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_765_ = ((lean_object*)(l_Lean_Meta_Simp_getSimprocDeclKeys_x3f___redArg___closed__0));
lean_inc(v_declName_728_);
v___x_766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_766_, 0, v_declName_728_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = l_Array_binSearchAux___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__2___redArg(v___x_758_, v___x_766_, v___x_759_, v___x_763_);
lean_dec_ref(v___x_766_);
lean_dec_ref(v___x_758_);
if (lean_obj_tag(v___x_767_) == 1)
{
lean_object* v_val_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_779_; 
lean_dec_ref(v_env_732_);
lean_dec(v_declName_728_);
v_val_768_ = lean_ctor_get(v___x_767_, 0);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_779_ == 0)
{
v___x_770_ = v___x_767_;
v_isShared_771_ = v_isSharedCheck_779_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_val_768_);
lean_dec(v___x_767_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_779_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v_keys_772_; lean_object* v___x_774_; 
v_keys_772_ = lean_ctor_get(v_val_768_, 1);
lean_inc_ref(v_keys_772_);
lean_dec(v_val_768_);
if (v_isShared_771_ == 0)
{
lean_ctor_set(v___x_770_, 0, v_keys_772_);
v___x_774_ = v___x_770_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_keys_772_);
v___x_774_ = v_reuseFailAlloc_778_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
lean_object* v___x_776_; 
if (v_isShared_755_ == 0)
{
lean_ctor_set_tag(v___x_754_, 0);
lean_ctor_set(v___x_754_, 0, v___x_774_);
v___x_776_ = v___x_754_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v___x_774_);
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
lean_dec(v___x_767_);
lean_del_object(v___x_754_);
goto v___jp_734_;
}
}
}
}
}
v___jp_734_:
{
lean_object* v___x_735_; lean_object* v_toEnvExtension_736_; lean_object* v_asyncMode_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v_builtin_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_735_ = l_Lean_Meta_Simp_simprocDeclExt;
v_toEnvExtension_736_ = lean_ctor_get(v___x_735_, 0);
v_asyncMode_737_ = lean_ctor_get(v_toEnvExtension_736_, 2);
v___x_738_ = lean_box(0);
v___x_739_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_733_, v___x_735_, v_env_732_, v_asyncMode_737_, v___x_738_);
v_builtin_740_ = lean_ctor_get(v___x_739_, 0);
lean_inc_ref(v_builtin_740_);
lean_dec(v___x_739_);
v___x_741_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0___redArg(v_builtin_740_, v_declName_728_);
lean_dec(v_declName_728_);
lean_dec_ref(v_builtin_740_);
v___x_742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_742_, 0, v___x_741_);
return v___x_742_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocDeclKeys_x3f___redArg___boxed(lean_object* v_declName_781_, lean_object* v_a_782_, lean_object* v_a_783_){
_start:
{
lean_object* v_res_784_; 
v_res_784_ = l_Lean_Meta_Simp_getSimprocDeclKeys_x3f___redArg(v_declName_781_, v_a_782_);
lean_dec(v_a_782_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocDeclKeys_x3f(lean_object* v_declName_785_, lean_object* v_a_786_, lean_object* v_a_787_){
_start:
{
lean_object* v___x_789_; 
v___x_789_ = l_Lean_Meta_Simp_getSimprocDeclKeys_x3f___redArg(v_declName_785_, v_a_787_);
return v___x_789_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocDeclKeys_x3f___boxed(lean_object* v_declName_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_){
_start:
{
lean_object* v_res_794_; 
v_res_794_ = l_Lean_Meta_Simp_getSimprocDeclKeys_x3f(v_declName_790_, v_a_791_, v_a_792_);
lean_dec(v_a_792_);
lean_dec_ref(v_a_791_);
return v_res_794_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0(lean_object* v_00_u03b2_795_, lean_object* v_m_796_, lean_object* v_a_797_){
_start:
{
lean_object* v___x_798_; 
v___x_798_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0___redArg(v_m_796_, v_a_797_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0___boxed(lean_object* v_00_u03b2_799_, lean_object* v_m_800_, lean_object* v_a_801_){
_start:
{
lean_object* v_res_802_; 
v_res_802_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0(v_00_u03b2_799_, v_m_800_, v_a_801_);
lean_dec(v_a_801_);
lean_dec_ref(v_m_800_);
return v_res_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1(lean_object* v_00_u03b2_803_, lean_object* v_x_804_, lean_object* v_x_805_){
_start:
{
lean_object* v___x_806_; 
v___x_806_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1___redArg(v_x_804_, v_x_805_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1___boxed(lean_object* v_00_u03b2_807_, lean_object* v_x_808_, lean_object* v_x_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1(v_00_u03b2_807_, v_x_808_, v_x_809_);
lean_dec(v_x_809_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__2(lean_object* v_as_811_, lean_object* v_k_812_, lean_object* v_x_813_, lean_object* v_x_814_, lean_object* v_x_815_){
_start:
{
lean_object* v___x_816_; 
v___x_816_ = l_Array_binSearchAux___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__2___redArg(v_as_811_, v_k_812_, v_x_813_, v_x_814_);
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__2___boxed(lean_object* v_as_817_, lean_object* v_k_818_, lean_object* v_x_819_, lean_object* v_x_820_, lean_object* v_x_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_Array_binSearchAux___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__2(v_as_817_, v_k_818_, v_x_819_, v_x_820_, v_x_821_);
lean_dec_ref(v_k_818_);
lean_dec_ref(v_as_817_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0_spec__0(lean_object* v_00_u03b2_823_, lean_object* v_a_824_, lean_object* v_x_825_){
_start:
{
lean_object* v___x_826_; 
v___x_826_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0_spec__0___redArg(v_a_824_, v_x_825_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_827_, lean_object* v_a_828_, lean_object* v_x_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0_spec__0(v_00_u03b2_827_, v_a_828_, v_x_829_);
lean_dec(v_x_829_);
lean_dec(v_a_828_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2(lean_object* v_00_u03b2_831_, lean_object* v_x_832_, size_t v_x_833_, lean_object* v_x_834_){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2___redArg(v_x_832_, v_x_833_, v_x_834_);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2___boxed(lean_object* v_00_u03b2_836_, lean_object* v_x_837_, lean_object* v_x_838_, lean_object* v_x_839_){
_start:
{
size_t v_x_1647__boxed_840_; lean_object* v_res_841_; 
v_x_1647__boxed_840_ = lean_unbox_usize(v_x_838_);
lean_dec(v_x_838_);
v_res_841_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2(v_00_u03b2_836_, v_x_837_, v_x_1647__boxed_840_, v_x_839_);
lean_dec(v_x_839_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_842_, lean_object* v_keys_843_, lean_object* v_vals_844_, lean_object* v_heq_845_, lean_object* v_i_846_, lean_object* v_k_847_){
_start:
{
lean_object* v___x_848_; 
v___x_848_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2_spec__3___redArg(v_keys_843_, v_vals_844_, v_i_846_, v_k_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03b2_849_, lean_object* v_keys_850_, lean_object* v_vals_851_, lean_object* v_heq_852_, lean_object* v_i_853_, lean_object* v_k_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__1_spec__2_spec__3(v_00_u03b2_849_, v_keys_850_, v_vals_851_, v_heq_852_, v_i_853_, v_k_854_);
lean_dec(v_k_854_);
lean_dec_ref(v_vals_851_);
lean_dec_ref(v_keys_850_);
return v_res_855_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0_spec__0___redArg(lean_object* v_a_856_, lean_object* v_x_857_){
_start:
{
if (lean_obj_tag(v_x_857_) == 0)
{
uint8_t v___x_858_; 
v___x_858_ = 0;
return v___x_858_;
}
else
{
lean_object* v_key_859_; lean_object* v_tail_860_; uint8_t v___x_861_; 
v_key_859_ = lean_ctor_get(v_x_857_, 0);
v_tail_860_ = lean_ctor_get(v_x_857_, 2);
v___x_861_ = lean_name_eq(v_key_859_, v_a_856_);
if (v___x_861_ == 0)
{
v_x_857_ = v_tail_860_;
goto _start;
}
else
{
return v___x_861_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0_spec__0___redArg___boxed(lean_object* v_a_863_, lean_object* v_x_864_){
_start:
{
uint8_t v_res_865_; lean_object* v_r_866_; 
v_res_865_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0_spec__0___redArg(v_a_863_, v_x_864_);
lean_dec(v_x_864_);
lean_dec(v_a_863_);
v_r_866_ = lean_box(v_res_865_);
return v_r_866_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0___redArg(lean_object* v_m_867_, lean_object* v_a_868_){
_start:
{
lean_object* v_buckets_869_; lean_object* v___x_870_; uint64_t v___y_872_; 
v_buckets_869_ = lean_ctor_get(v_m_867_, 1);
v___x_870_ = lean_array_get_size(v_buckets_869_);
if (lean_obj_tag(v_a_868_) == 0)
{
uint64_t v___x_886_; 
v___x_886_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0);
v___y_872_ = v___x_886_;
goto v___jp_871_;
}
else
{
uint64_t v_hash_887_; 
v_hash_887_ = lean_ctor_get_uint64(v_a_868_, sizeof(void*)*2);
v___y_872_ = v_hash_887_;
goto v___jp_871_;
}
v___jp_871_:
{
uint64_t v___x_873_; uint64_t v___x_874_; uint64_t v_fold_875_; uint64_t v___x_876_; uint64_t v___x_877_; uint64_t v___x_878_; size_t v___x_879_; size_t v___x_880_; size_t v___x_881_; size_t v___x_882_; size_t v___x_883_; lean_object* v___x_884_; uint8_t v___x_885_; 
v___x_873_ = 32ULL;
v___x_874_ = lean_uint64_shift_right(v___y_872_, v___x_873_);
v_fold_875_ = lean_uint64_xor(v___y_872_, v___x_874_);
v___x_876_ = 16ULL;
v___x_877_ = lean_uint64_shift_right(v_fold_875_, v___x_876_);
v___x_878_ = lean_uint64_xor(v_fold_875_, v___x_877_);
v___x_879_ = lean_uint64_to_usize(v___x_878_);
v___x_880_ = lean_usize_of_nat(v___x_870_);
v___x_881_ = ((size_t)1ULL);
v___x_882_ = lean_usize_sub(v___x_880_, v___x_881_);
v___x_883_ = lean_usize_land(v___x_879_, v___x_882_);
v___x_884_ = lean_array_uget_borrowed(v_buckets_869_, v___x_883_);
v___x_885_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0_spec__0___redArg(v_a_868_, v___x_884_);
return v___x_885_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0___redArg___boxed(lean_object* v_m_888_, lean_object* v_a_889_){
_start:
{
uint8_t v_res_890_; lean_object* v_r_891_; 
v_res_890_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0___redArg(v_m_888_, v_a_889_);
lean_dec(v_a_889_);
lean_dec_ref(v_m_888_);
v_r_891_ = lean_box(v_res_890_);
return v_r_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_isBuiltinSimproc___redArg(lean_object* v_declName_892_, lean_object* v_a_893_){
_start:
{
lean_object* v___x_895_; lean_object* v_env_896_; lean_object* v___x_897_; lean_object* v_toEnvExtension_898_; lean_object* v_asyncMode_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v_builtin_903_; uint8_t v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_895_ = lean_st_ref_get(v_a_893_);
v_env_896_ = lean_ctor_get(v___x_895_, 0);
lean_inc_ref(v_env_896_);
lean_dec(v___x_895_);
v___x_897_ = l_Lean_Meta_Simp_simprocDeclExt;
v_toEnvExtension_898_ = lean_ctor_get(v___x_897_, 0);
v_asyncMode_899_ = lean_ctor_get(v_toEnvExtension_898_, 2);
v___x_900_ = l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default;
v___x_901_ = lean_box(0);
v___x_902_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_900_, v___x_897_, v_env_896_, v_asyncMode_899_, v___x_901_);
v_builtin_903_ = lean_ctor_get(v___x_902_, 0);
lean_inc_ref(v_builtin_903_);
lean_dec(v___x_902_);
v___x_904_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0___redArg(v_builtin_903_, v_declName_892_);
lean_dec_ref(v_builtin_903_);
v___x_905_ = lean_box(v___x_904_);
v___x_906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_906_, 0, v___x_905_);
return v___x_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_isBuiltinSimproc___redArg___boxed(lean_object* v_declName_907_, lean_object* v_a_908_, lean_object* v_a_909_){
_start:
{
lean_object* v_res_910_; 
v_res_910_ = l_Lean_Meta_Simp_isBuiltinSimproc___redArg(v_declName_907_, v_a_908_);
lean_dec(v_a_908_);
lean_dec(v_declName_907_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_isBuiltinSimproc(lean_object* v_declName_911_, lean_object* v_a_912_, lean_object* v_a_913_){
_start:
{
lean_object* v___x_915_; 
v___x_915_ = l_Lean_Meta_Simp_isBuiltinSimproc___redArg(v_declName_911_, v_a_913_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_isBuiltinSimproc___boxed(lean_object* v_declName_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_Lean_Meta_Simp_isBuiltinSimproc(v_declName_916_, v_a_917_, v_a_918_);
lean_dec(v_a_918_);
lean_dec_ref(v_a_917_);
lean_dec(v_declName_916_);
return v_res_920_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0(lean_object* v_00_u03b2_921_, lean_object* v_m_922_, lean_object* v_a_923_){
_start:
{
uint8_t v___x_924_; 
v___x_924_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0___redArg(v_m_922_, v_a_923_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0___boxed(lean_object* v_00_u03b2_925_, lean_object* v_m_926_, lean_object* v_a_927_){
_start:
{
uint8_t v_res_928_; lean_object* v_r_929_; 
v_res_928_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0(v_00_u03b2_925_, v_m_926_, v_a_927_);
lean_dec(v_a_927_);
lean_dec_ref(v_m_926_);
v_r_929_ = lean_box(v_res_928_);
return v_r_929_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0_spec__0(lean_object* v_00_u03b2_930_, lean_object* v_a_931_, lean_object* v_x_932_){
_start:
{
uint8_t v___x_933_; 
v___x_933_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0_spec__0___redArg(v_a_931_, v_x_932_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0_spec__0___boxed(lean_object* v_00_u03b2_934_, lean_object* v_a_935_, lean_object* v_x_936_){
_start:
{
uint8_t v_res_937_; lean_object* v_r_938_; 
v_res_937_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0_spec__0(v_00_u03b2_934_, v_a_935_, v_x_936_);
lean_dec(v_x_936_);
lean_dec(v_a_935_);
v_r_938_ = lean_box(v_res_937_);
return v_r_938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_isSimproc___redArg(lean_object* v_declName_939_, lean_object* v_a_940_){
_start:
{
lean_object* v___x_942_; lean_object* v_a_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_957_; 
v___x_942_ = l_Lean_Meta_Simp_getSimprocDeclKeys_x3f___redArg(v_declName_939_, v_a_940_);
v_a_943_ = lean_ctor_get(v___x_942_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_942_);
if (v_isSharedCheck_957_ == 0)
{
v___x_945_ = v___x_942_;
v_isShared_946_ = v_isSharedCheck_957_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_a_943_);
lean_dec(v___x_942_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_957_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
if (lean_obj_tag(v_a_943_) == 0)
{
uint8_t v___x_947_; lean_object* v___x_948_; lean_object* v___x_950_; 
v___x_947_ = 0;
v___x_948_ = lean_box(v___x_947_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 0, v___x_948_);
v___x_950_ = v___x_945_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v___x_948_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
else
{
uint8_t v___x_952_; lean_object* v___x_953_; lean_object* v___x_955_; 
lean_dec_ref(v_a_943_);
v___x_952_ = 1;
v___x_953_ = lean_box(v___x_952_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 0, v___x_953_);
v___x_955_ = v___x_945_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v___x_953_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_isSimproc___redArg___boxed(lean_object* v_declName_958_, lean_object* v_a_959_, lean_object* v_a_960_){
_start:
{
lean_object* v_res_961_; 
v_res_961_ = l_Lean_Meta_Simp_isSimproc___redArg(v_declName_958_, v_a_959_);
lean_dec(v_a_959_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_isSimproc(lean_object* v_declName_962_, lean_object* v_a_963_, lean_object* v_a_964_){
_start:
{
lean_object* v___x_966_; 
v___x_966_ = l_Lean_Meta_Simp_isSimproc___redArg(v_declName_962_, v_a_964_);
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_isSimproc___boxed(lean_object* v_declName_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_){
_start:
{
lean_object* v_res_971_; 
v_res_971_ = l_Lean_Meta_Simp_isSimproc(v_declName_967_, v_a_968_, v_a_969_);
lean_dec(v_a_969_);
lean_dec_ref(v_a_968_);
return v_res_971_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__1___redArg(lean_object* v_a_972_, lean_object* v_b_973_, lean_object* v_x_974_){
_start:
{
if (lean_obj_tag(v_x_974_) == 0)
{
lean_dec(v_b_973_);
lean_dec(v_a_972_);
return v_x_974_;
}
else
{
lean_object* v_key_975_; lean_object* v_value_976_; lean_object* v_tail_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_989_; 
v_key_975_ = lean_ctor_get(v_x_974_, 0);
v_value_976_ = lean_ctor_get(v_x_974_, 1);
v_tail_977_ = lean_ctor_get(v_x_974_, 2);
v_isSharedCheck_989_ = !lean_is_exclusive(v_x_974_);
if (v_isSharedCheck_989_ == 0)
{
v___x_979_ = v_x_974_;
v_isShared_980_ = v_isSharedCheck_989_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_tail_977_);
lean_inc(v_value_976_);
lean_inc(v_key_975_);
lean_dec(v_x_974_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_989_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
uint8_t v___x_981_; 
v___x_981_ = lean_name_eq(v_key_975_, v_a_972_);
if (v___x_981_ == 0)
{
lean_object* v___x_982_; lean_object* v___x_984_; 
v___x_982_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__1___redArg(v_a_972_, v_b_973_, v_tail_977_);
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 2, v___x_982_);
v___x_984_ = v___x_979_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_key_975_);
lean_ctor_set(v_reuseFailAlloc_985_, 1, v_value_976_);
lean_ctor_set(v_reuseFailAlloc_985_, 2, v___x_982_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
else
{
lean_object* v___x_987_; 
lean_dec(v_value_976_);
lean_dec(v_key_975_);
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 1, v_b_973_);
lean_ctor_set(v___x_979_, 0, v_a_972_);
v___x_987_ = v___x_979_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_a_972_);
lean_ctor_set(v_reuseFailAlloc_988_, 1, v_b_973_);
lean_ctor_set(v_reuseFailAlloc_988_, 2, v_tail_977_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_990_, lean_object* v_x_991_){
_start:
{
if (lean_obj_tag(v_x_991_) == 0)
{
return v_x_990_;
}
else
{
lean_object* v_key_992_; lean_object* v_value_993_; lean_object* v_tail_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1020_; 
v_key_992_ = lean_ctor_get(v_x_991_, 0);
v_value_993_ = lean_ctor_get(v_x_991_, 1);
v_tail_994_ = lean_ctor_get(v_x_991_, 2);
v_isSharedCheck_1020_ = !lean_is_exclusive(v_x_991_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_996_ = v_x_991_;
v_isShared_997_ = v_isSharedCheck_1020_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_tail_994_);
lean_inc(v_value_993_);
lean_inc(v_key_992_);
lean_dec(v_x_991_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1020_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_998_; uint64_t v___y_1000_; 
v___x_998_ = lean_array_get_size(v_x_990_);
if (lean_obj_tag(v_key_992_) == 0)
{
uint64_t v___x_1018_; 
v___x_1018_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0);
v___y_1000_ = v___x_1018_;
goto v___jp_999_;
}
else
{
uint64_t v_hash_1019_; 
v_hash_1019_ = lean_ctor_get_uint64(v_key_992_, sizeof(void*)*2);
v___y_1000_ = v_hash_1019_;
goto v___jp_999_;
}
v___jp_999_:
{
uint64_t v___x_1001_; uint64_t v___x_1002_; uint64_t v_fold_1003_; uint64_t v___x_1004_; uint64_t v___x_1005_; uint64_t v___x_1006_; size_t v___x_1007_; size_t v___x_1008_; size_t v___x_1009_; size_t v___x_1010_; size_t v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1014_; 
v___x_1001_ = 32ULL;
v___x_1002_ = lean_uint64_shift_right(v___y_1000_, v___x_1001_);
v_fold_1003_ = lean_uint64_xor(v___y_1000_, v___x_1002_);
v___x_1004_ = 16ULL;
v___x_1005_ = lean_uint64_shift_right(v_fold_1003_, v___x_1004_);
v___x_1006_ = lean_uint64_xor(v_fold_1003_, v___x_1005_);
v___x_1007_ = lean_uint64_to_usize(v___x_1006_);
v___x_1008_ = lean_usize_of_nat(v___x_998_);
v___x_1009_ = ((size_t)1ULL);
v___x_1010_ = lean_usize_sub(v___x_1008_, v___x_1009_);
v___x_1011_ = lean_usize_land(v___x_1007_, v___x_1010_);
v___x_1012_ = lean_array_uget_borrowed(v_x_990_, v___x_1011_);
lean_inc(v___x_1012_);
if (v_isShared_997_ == 0)
{
lean_ctor_set(v___x_996_, 2, v___x_1012_);
v___x_1014_ = v___x_996_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1017_; 
v_reuseFailAlloc_1017_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1017_, 0, v_key_992_);
lean_ctor_set(v_reuseFailAlloc_1017_, 1, v_value_993_);
lean_ctor_set(v_reuseFailAlloc_1017_, 2, v___x_1012_);
v___x_1014_ = v_reuseFailAlloc_1017_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
lean_object* v___x_1015_; 
v___x_1015_ = lean_array_uset(v_x_990_, v___x_1011_, v___x_1014_);
v_x_990_ = v___x_1015_;
v_x_991_ = v_tail_994_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__0_spec__1___redArg(lean_object* v_i_1021_, lean_object* v_source_1022_, lean_object* v_target_1023_){
_start:
{
lean_object* v___x_1024_; uint8_t v___x_1025_; 
v___x_1024_ = lean_array_get_size(v_source_1022_);
v___x_1025_ = lean_nat_dec_lt(v_i_1021_, v___x_1024_);
if (v___x_1025_ == 0)
{
lean_dec_ref(v_source_1022_);
lean_dec(v_i_1021_);
return v_target_1023_;
}
else
{
lean_object* v_es_1026_; lean_object* v___x_1027_; lean_object* v_source_1028_; lean_object* v_target_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v_es_1026_ = lean_array_fget(v_source_1022_, v_i_1021_);
v___x_1027_ = lean_box(0);
v_source_1028_ = lean_array_fset(v_source_1022_, v_i_1021_, v___x_1027_);
v_target_1029_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__0_spec__1_spec__2___redArg(v_target_1023_, v_es_1026_);
v___x_1030_ = lean_unsigned_to_nat(1u);
v___x_1031_ = lean_nat_add(v_i_1021_, v___x_1030_);
lean_dec(v_i_1021_);
v_i_1021_ = v___x_1031_;
v_source_1022_ = v_source_1028_;
v_target_1023_ = v_target_1029_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__0___redArg(lean_object* v_data_1033_){
_start:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v_nbuckets_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1034_ = lean_array_get_size(v_data_1033_);
v___x_1035_ = lean_unsigned_to_nat(2u);
v_nbuckets_1036_ = lean_nat_mul(v___x_1034_, v___x_1035_);
v___x_1037_ = lean_unsigned_to_nat(0u);
v___x_1038_ = lean_box(0);
v___x_1039_ = lean_mk_array(v_nbuckets_1036_, v___x_1038_);
v___x_1040_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__0_spec__1___redArg(v___x_1037_, v_data_1033_, v___x_1039_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0___redArg(lean_object* v_m_1041_, lean_object* v_a_1042_, lean_object* v_b_1043_){
_start:
{
lean_object* v_size_1044_; lean_object* v_buckets_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1091_; 
v_size_1044_ = lean_ctor_get(v_m_1041_, 0);
v_buckets_1045_ = lean_ctor_get(v_m_1041_, 1);
v_isSharedCheck_1091_ = !lean_is_exclusive(v_m_1041_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1047_ = v_m_1041_;
v_isShared_1048_ = v_isSharedCheck_1091_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_buckets_1045_);
lean_inc(v_size_1044_);
lean_dec(v_m_1041_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1091_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1049_; uint64_t v___y_1051_; 
v___x_1049_ = lean_array_get_size(v_buckets_1045_);
if (lean_obj_tag(v_a_1042_) == 0)
{
uint64_t v___x_1089_; 
v___x_1089_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0);
v___y_1051_ = v___x_1089_;
goto v___jp_1050_;
}
else
{
uint64_t v_hash_1090_; 
v_hash_1090_ = lean_ctor_get_uint64(v_a_1042_, sizeof(void*)*2);
v___y_1051_ = v_hash_1090_;
goto v___jp_1050_;
}
v___jp_1050_:
{
uint64_t v___x_1052_; uint64_t v___x_1053_; uint64_t v_fold_1054_; uint64_t v___x_1055_; uint64_t v___x_1056_; uint64_t v___x_1057_; size_t v___x_1058_; size_t v___x_1059_; size_t v___x_1060_; size_t v___x_1061_; size_t v___x_1062_; lean_object* v_bkt_1063_; uint8_t v___x_1064_; 
v___x_1052_ = 32ULL;
v___x_1053_ = lean_uint64_shift_right(v___y_1051_, v___x_1052_);
v_fold_1054_ = lean_uint64_xor(v___y_1051_, v___x_1053_);
v___x_1055_ = 16ULL;
v___x_1056_ = lean_uint64_shift_right(v_fold_1054_, v___x_1055_);
v___x_1057_ = lean_uint64_xor(v_fold_1054_, v___x_1056_);
v___x_1058_ = lean_uint64_to_usize(v___x_1057_);
v___x_1059_ = lean_usize_of_nat(v___x_1049_);
v___x_1060_ = ((size_t)1ULL);
v___x_1061_ = lean_usize_sub(v___x_1059_, v___x_1060_);
v___x_1062_ = lean_usize_land(v___x_1058_, v___x_1061_);
v_bkt_1063_ = lean_array_uget_borrowed(v_buckets_1045_, v___x_1062_);
v___x_1064_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0_spec__0___redArg(v_a_1042_, v_bkt_1063_);
if (v___x_1064_ == 0)
{
lean_object* v___x_1065_; lean_object* v_size_x27_1066_; lean_object* v___x_1067_; lean_object* v_buckets_x27_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; uint8_t v___x_1074_; 
v___x_1065_ = lean_unsigned_to_nat(1u);
v_size_x27_1066_ = lean_nat_add(v_size_1044_, v___x_1065_);
lean_dec(v_size_1044_);
lean_inc(v_bkt_1063_);
v___x_1067_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1067_, 0, v_a_1042_);
lean_ctor_set(v___x_1067_, 1, v_b_1043_);
lean_ctor_set(v___x_1067_, 2, v_bkt_1063_);
v_buckets_x27_1068_ = lean_array_uset(v_buckets_1045_, v___x_1062_, v___x_1067_);
v___x_1069_ = lean_unsigned_to_nat(4u);
v___x_1070_ = lean_nat_mul(v_size_x27_1066_, v___x_1069_);
v___x_1071_ = lean_unsigned_to_nat(3u);
v___x_1072_ = lean_nat_div(v___x_1070_, v___x_1071_);
lean_dec(v___x_1070_);
v___x_1073_ = lean_array_get_size(v_buckets_x27_1068_);
v___x_1074_ = lean_nat_dec_le(v___x_1072_, v___x_1073_);
lean_dec(v___x_1072_);
if (v___x_1074_ == 0)
{
lean_object* v_val_1075_; lean_object* v___x_1077_; 
v_val_1075_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__0___redArg(v_buckets_x27_1068_);
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 1, v_val_1075_);
lean_ctor_set(v___x_1047_, 0, v_size_x27_1066_);
v___x_1077_ = v___x_1047_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_size_x27_1066_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v_val_1075_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
else
{
lean_object* v___x_1080_; 
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 1, v_buckets_x27_1068_);
lean_ctor_set(v___x_1047_, 0, v_size_x27_1066_);
v___x_1080_ = v___x_1047_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v_size_x27_1066_);
lean_ctor_set(v_reuseFailAlloc_1081_, 1, v_buckets_x27_1068_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
return v___x_1080_;
}
}
}
else
{
lean_object* v___x_1082_; lean_object* v_buckets_x27_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1087_; 
lean_inc(v_bkt_1063_);
v___x_1082_ = lean_box(0);
v_buckets_x27_1083_ = lean_array_uset(v_buckets_1045_, v___x_1062_, v___x_1082_);
v___x_1084_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__1___redArg(v_a_1042_, v_b_1043_, v_bkt_1063_);
v___x_1085_ = lean_array_uset(v_buckets_x27_1083_, v___x_1062_, v___x_1084_);
if (v_isShared_1048_ == 0)
{
lean_ctor_set(v___x_1047_, 1, v___x_1085_);
v___x_1087_ = v___x_1047_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_size_1044_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v___x_1085_);
v___x_1087_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
return v___x_1087_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_Simp_registerBuiltinSimprocCore___closed__1(void){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1093_ = ((lean_object*)(l_Lean_Meta_Simp_registerBuiltinSimprocCore___closed__0));
v___x_1094_ = lean_mk_io_user_error(v___x_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerBuiltinSimprocCore(lean_object* v_declName_1097_, lean_object* v_key_1098_, lean_object* v_proc_1099_){
_start:
{
lean_object* v___x_1101_; 
v___x_1101_ = l_Lean_initializing();
if (lean_obj_tag(v___x_1101_) == 0)
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1141_; 
v_a_1102_ = lean_ctor_get(v___x_1101_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1104_ = v___x_1101_;
v_isShared_1105_ = v_isSharedCheck_1141_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v___x_1101_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1141_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
uint8_t v___x_1106_; 
v___x_1106_ = lean_unbox(v_a_1102_);
lean_dec(v_a_1102_);
if (v___x_1106_ == 0)
{
lean_object* v___x_1107_; lean_object* v___x_1109_; 
lean_dec_ref(v_proc_1099_);
lean_dec_ref(v_key_1098_);
lean_dec(v_declName_1097_);
v___x_1107_ = lean_obj_once(&l_Lean_Meta_Simp_registerBuiltinSimprocCore___closed__1, &l_Lean_Meta_Simp_registerBuiltinSimprocCore___closed__1_once, _init_l_Lean_Meta_Simp_registerBuiltinSimprocCore___closed__1);
if (v_isShared_1105_ == 0)
{
lean_ctor_set_tag(v___x_1104_, 1);
lean_ctor_set(v___x_1104_, 0, v___x_1107_);
v___x_1109_ = v___x_1104_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1107_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
else
{
lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v_keys_1113_; uint8_t v___x_1114_; 
v___x_1111_ = l_Lean_Meta_Simp_builtinSimprocDeclsRef;
v___x_1112_ = lean_st_ref_get(v___x_1111_);
v_keys_1113_ = lean_ctor_get(v___x_1112_, 0);
lean_inc_ref(v_keys_1113_);
lean_dec(v___x_1112_);
v___x_1114_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Meta_Simp_isBuiltinSimproc_spec__0___redArg(v_keys_1113_, v_declName_1097_);
lean_dec_ref(v_keys_1113_);
if (v___x_1114_ == 0)
{
lean_object* v___x_1115_; lean_object* v_keys_1116_; lean_object* v_procs_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1130_; 
v___x_1115_ = lean_st_ref_take(v___x_1111_);
v_keys_1116_ = lean_ctor_get(v___x_1115_, 0);
v_procs_1117_ = lean_ctor_get(v___x_1115_, 1);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1119_ = v___x_1115_;
v_isShared_1120_ = v_isSharedCheck_1130_;
goto v_resetjp_1118_;
}
else
{
lean_inc(v_procs_1117_);
lean_inc(v_keys_1116_);
lean_dec(v___x_1115_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1130_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1124_; 
lean_inc(v_declName_1097_);
v___x_1121_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0___redArg(v_keys_1116_, v_declName_1097_, v_key_1098_);
v___x_1122_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0___redArg(v_procs_1117_, v_declName_1097_, v_proc_1099_);
if (v_isShared_1120_ == 0)
{
lean_ctor_set(v___x_1119_, 1, v___x_1122_);
lean_ctor_set(v___x_1119_, 0, v___x_1121_);
v___x_1124_ = v___x_1119_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v___x_1121_);
lean_ctor_set(v_reuseFailAlloc_1129_, 1, v___x_1122_);
v___x_1124_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
lean_object* v___x_1125_; lean_object* v___x_1127_; 
v___x_1125_ = lean_st_ref_set(v___x_1111_, v___x_1124_);
if (v_isShared_1105_ == 0)
{
lean_ctor_set(v___x_1104_, 0, v___x_1125_);
v___x_1127_ = v___x_1104_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v___x_1125_);
v___x_1127_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
return v___x_1127_;
}
}
}
}
else
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1139_; 
lean_dec_ref(v_proc_1099_);
lean_dec_ref(v_key_1098_);
v___x_1131_ = ((lean_object*)(l_Lean_Meta_Simp_registerBuiltinSimprocCore___closed__2));
v___x_1132_ = l_Lean_privateToUserName(v_declName_1097_);
v___x_1133_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1132_, v___x_1114_);
v___x_1134_ = lean_string_append(v___x_1131_, v___x_1133_);
lean_dec_ref(v___x_1133_);
v___x_1135_ = ((lean_object*)(l_Lean_Meta_Simp_registerBuiltinSimprocCore___closed__3));
v___x_1136_ = lean_string_append(v___x_1134_, v___x_1135_);
v___x_1137_ = lean_mk_io_user_error(v___x_1136_);
if (v_isShared_1105_ == 0)
{
lean_ctor_set_tag(v___x_1104_, 1);
lean_ctor_set(v___x_1104_, 0, v___x_1137_);
v___x_1139_ = v___x_1104_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v___x_1137_);
v___x_1139_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
return v___x_1139_;
}
}
}
}
}
else
{
lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1149_; 
lean_dec_ref(v_proc_1099_);
lean_dec_ref(v_key_1098_);
lean_dec(v_declName_1097_);
v_a_1142_ = lean_ctor_get(v___x_1101_, 0);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1144_ = v___x_1101_;
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_dec(v___x_1101_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1147_; 
if (v_isShared_1145_ == 0)
{
v___x_1147_ = v___x_1144_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_a_1142_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerBuiltinSimprocCore___boxed(lean_object* v_declName_1150_, lean_object* v_key_1151_, lean_object* v_proc_1152_, lean_object* v_a_1153_){
_start:
{
lean_object* v_res_1154_; 
v_res_1154_ = l_Lean_Meta_Simp_registerBuiltinSimprocCore(v_declName_1150_, v_key_1151_, v_proc_1152_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0(lean_object* v_00_u03b2_1155_, lean_object* v_m_1156_, lean_object* v_a_1157_, lean_object* v_b_1158_){
_start:
{
lean_object* v___x_1159_; 
v___x_1159_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0___redArg(v_m_1156_, v_a_1157_, v_b_1158_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__0(lean_object* v_00_u03b2_1160_, lean_object* v_data_1161_){
_start:
{
lean_object* v___x_1162_; 
v___x_1162_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__0___redArg(v_data_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__1(lean_object* v_00_u03b2_1163_, lean_object* v_a_1164_, lean_object* v_b_1165_, lean_object* v_x_1166_){
_start:
{
lean_object* v___x_1167_; 
v___x_1167_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__1___redArg(v_a_1164_, v_b_1165_, v_x_1166_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1168_, lean_object* v_i_1169_, lean_object* v_source_1170_, lean_object* v_target_1171_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__0_spec__1___redArg(v_i_1169_, v_source_1170_, v_target_1171_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1173_, lean_object* v_x_1174_, lean_object* v_x_1175_){
_start:
{
lean_object* v___x_1176_; 
v___x_1176_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0_spec__0_spec__1_spec__2___redArg(v_x_1174_, v_x_1175_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerBuiltinSimproc(lean_object* v_declName_1177_, lean_object* v_key_1178_, lean_object* v_proc_1179_){
_start:
{
lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1181_, 0, v_proc_1179_);
v___x_1182_ = l_Lean_Meta_Simp_registerBuiltinSimprocCore(v_declName_1177_, v_key_1178_, v___x_1181_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerBuiltinSimproc___boxed(lean_object* v_declName_1183_, lean_object* v_key_1184_, lean_object* v_proc_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lean_Meta_Simp_registerBuiltinSimproc(v_declName_1183_, v_key_1184_, v_proc_1185_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerBuiltinDSimproc(lean_object* v_declName_1188_, lean_object* v_key_1189_, lean_object* v_proc_1190_){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1192_, 0, v_proc_1190_);
v___x_1193_ = l_Lean_Meta_Simp_registerBuiltinSimprocCore(v_declName_1188_, v_key_1189_, v___x_1192_);
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerBuiltinDSimproc___boxed(lean_object* v_declName_1194_, lean_object* v_key_1195_, lean_object* v_proc_1196_, lean_object* v_a_1197_){
_start:
{
lean_object* v_res_1198_; 
v_res_1198_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v_declName_1194_, v_key_1195_, v_proc_1196_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerSimproc___lam__0(lean_object* v_declName_1199_, lean_object* v_keys_1200_, lean_object* v_s_1201_){
_start:
{
lean_object* v_builtin_1202_; lean_object* v_newEntries_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1211_; 
v_builtin_1202_ = lean_ctor_get(v_s_1201_, 0);
v_newEntries_1203_ = lean_ctor_get(v_s_1201_, 1);
v_isSharedCheck_1211_ = !lean_is_exclusive(v_s_1201_);
if (v_isSharedCheck_1211_ == 0)
{
v___x_1205_ = v_s_1201_;
v_isShared_1206_ = v_isSharedCheck_1211_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_newEntries_1203_);
lean_inc(v_builtin_1202_);
lean_dec(v_s_1201_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1211_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1207_; lean_object* v___x_1209_; 
v___x_1207_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0___redArg(v_newEntries_1203_, v_declName_1199_, v_keys_1200_);
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 1, v___x_1207_);
v___x_1209_ = v___x_1205_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v_builtin_1202_);
lean_ctor_set(v_reuseFailAlloc_1210_, 1, v___x_1207_);
v___x_1209_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
return v___x_1209_;
}
}
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1212_; 
v___x_1212_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1212_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; 
v___x_1213_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__0);
v___x_1214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1213_);
return v___x_1214_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
v___x_1215_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__1);
v___x_1216_ = lean_unsigned_to_nat(0u);
v___x_1217_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1216_);
lean_ctor_set(v___x_1217_, 1, v___x_1216_);
lean_ctor_set(v___x_1217_, 2, v___x_1216_);
lean_ctor_set(v___x_1217_, 3, v___x_1215_);
lean_ctor_set(v___x_1217_, 4, v___x_1215_);
lean_ctor_set(v___x_1217_, 5, v___x_1215_);
lean_ctor_set(v___x_1217_, 6, v___x_1215_);
lean_ctor_set(v___x_1217_, 7, v___x_1215_);
lean_ctor_set(v___x_1217_, 8, v___x_1215_);
return v___x_1217_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; 
v___x_1218_ = lean_unsigned_to_nat(32u);
v___x_1219_ = lean_mk_empty_array_with_capacity(v___x_1218_);
v___x_1220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1219_);
return v___x_1220_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1221_ = ((size_t)5ULL);
v___x_1222_ = lean_unsigned_to_nat(0u);
v___x_1223_ = lean_unsigned_to_nat(32u);
v___x_1224_ = lean_mk_empty_array_with_capacity(v___x_1223_);
v___x_1225_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__3);
v___x_1226_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1226_, 0, v___x_1225_);
lean_ctor_set(v___x_1226_, 1, v___x_1224_);
lean_ctor_set(v___x_1226_, 2, v___x_1222_);
lean_ctor_set(v___x_1226_, 3, v___x_1222_);
lean_ctor_set_usize(v___x_1226_, 4, v___x_1221_);
return v___x_1226_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1227_ = lean_box(1);
v___x_1228_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__4);
v___x_1229_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__1);
v___x_1230_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1229_);
lean_ctor_set(v___x_1230_, 1, v___x_1228_);
lean_ctor_set(v___x_1230_, 2, v___x_1227_);
return v___x_1230_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0(lean_object* v_msgData_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_){
_start:
{
lean_object* v___x_1235_; lean_object* v_env_1236_; lean_object* v_options_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1235_ = lean_st_ref_get(v___y_1233_);
v_env_1236_ = lean_ctor_get(v___x_1235_, 0);
lean_inc_ref(v_env_1236_);
lean_dec(v___x_1235_);
v_options_1237_ = lean_ctor_get(v___y_1232_, 2);
v___x_1238_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__2);
v___x_1239_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__5);
lean_inc_ref(v_options_1237_);
v___x_1240_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1240_, 0, v_env_1236_);
lean_ctor_set(v___x_1240_, 1, v___x_1238_);
lean_ctor_set(v___x_1240_, 2, v___x_1239_);
lean_ctor_set(v___x_1240_, 3, v_options_1237_);
v___x_1241_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1240_);
lean_ctor_set(v___x_1241_, 1, v_msgData_1231_);
v___x_1242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1241_);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___boxed(lean_object* v_msgData_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_){
_start:
{
lean_object* v_res_1247_; 
v_res_1247_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0(v_msgData_1243_, v___y_1244_, v___y_1245_);
lean_dec(v___y_1245_);
lean_dec_ref(v___y_1244_);
return v_res_1247_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0___redArg(lean_object* v_msg_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_){
_start:
{
lean_object* v_ref_1252_; lean_object* v___x_1253_; lean_object* v_a_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1262_; 
v_ref_1252_ = lean_ctor_get(v___y_1249_, 5);
v___x_1253_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0(v_msg_1248_, v___y_1249_, v___y_1250_);
v_a_1254_ = lean_ctor_get(v___x_1253_, 0);
v_isSharedCheck_1262_ = !lean_is_exclusive(v___x_1253_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1256_ = v___x_1253_;
v_isShared_1257_ = v_isSharedCheck_1262_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_a_1254_);
lean_dec(v___x_1253_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1262_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v___x_1258_; lean_object* v___x_1260_; 
lean_inc(v_ref_1252_);
v___x_1258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1258_, 0, v_ref_1252_);
lean_ctor_set(v___x_1258_, 1, v_a_1254_);
if (v_isShared_1257_ == 0)
{
lean_ctor_set_tag(v___x_1256_, 1);
lean_ctor_set(v___x_1256_, 0, v___x_1258_);
v___x_1260_ = v___x_1256_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v___x_1258_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
return v___x_1260_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0___redArg___boxed(lean_object* v_msg_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_){
_start:
{
lean_object* v_res_1267_; 
v_res_1267_ = l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0___redArg(v_msg_1263_, v___y_1264_, v___y_1265_);
lean_dec(v___y_1265_);
lean_dec_ref(v___y_1264_);
return v_res_1267_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_registerSimproc___closed__0(void){
_start:
{
lean_object* v___x_1268_; 
v___x_1268_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1268_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_registerSimproc___closed__1(void){
_start:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1269_ = lean_obj_once(&l_Lean_Meta_Simp_registerSimproc___closed__0, &l_Lean_Meta_Simp_registerSimproc___closed__0_once, _init_l_Lean_Meta_Simp_registerSimproc___closed__0);
v___x_1270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1269_);
return v___x_1270_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_registerSimproc___closed__2(void){
_start:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1271_ = lean_obj_once(&l_Lean_Meta_Simp_registerSimproc___closed__1, &l_Lean_Meta_Simp_registerSimproc___closed__1_once, _init_l_Lean_Meta_Simp_registerSimproc___closed__1);
v___x_1272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1272_, 0, v___x_1271_);
lean_ctor_set(v___x_1272_, 1, v___x_1271_);
return v___x_1272_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_registerSimproc___closed__4(void){
_start:
{
lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1274_ = ((lean_object*)(l_Lean_Meta_Simp_registerSimproc___closed__3));
v___x_1275_ = l_Lean_stringToMessageData(v___x_1274_);
return v___x_1275_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_registerSimproc___closed__6(void){
_start:
{
lean_object* v___x_1277_; lean_object* v___x_1278_; 
v___x_1277_ = ((lean_object*)(l_Lean_Meta_Simp_registerSimproc___closed__5));
v___x_1278_ = l_Lean_stringToMessageData(v___x_1277_);
return v___x_1278_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_registerSimproc___closed__8(void){
_start:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1280_ = ((lean_object*)(l_Lean_Meta_Simp_registerSimproc___closed__7));
v___x_1281_ = l_Lean_stringToMessageData(v___x_1280_);
return v___x_1281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerSimproc(lean_object* v_declName_1282_, lean_object* v_keys_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_){
_start:
{
lean_object* v___x_1287_; lean_object* v_env_1288_; lean_object* v___f_1289_; lean_object* v___y_1291_; lean_object* v___y_1319_; lean_object* v___y_1320_; lean_object* v___x_1339_; 
v___x_1287_ = lean_st_ref_get(v_a_1285_);
v_env_1288_ = lean_ctor_get(v___x_1287_, 0);
lean_inc_ref(v_env_1288_);
lean_dec(v___x_1287_);
lean_inc(v_declName_1282_);
v___f_1289_ = lean_alloc_closure((void*)(l_Lean_Meta_Simp_registerSimproc___lam__0), 3, 2);
lean_closure_set(v___f_1289_, 0, v_declName_1282_);
lean_closure_set(v___f_1289_, 1, v_keys_1283_);
v___x_1339_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1288_, v_declName_1282_);
lean_dec_ref(v_env_1288_);
if (lean_obj_tag(v___x_1339_) == 0)
{
v___y_1319_ = v_a_1284_;
v___y_1320_ = v_a_1285_;
goto v___jp_1318_;
}
else
{
uint8_t v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; 
lean_dec_ref(v___x_1339_);
lean_dec_ref(v___f_1289_);
v___x_1340_ = 0;
v___x_1341_ = lean_obj_once(&l_Lean_Meta_Simp_registerSimproc___closed__4, &l_Lean_Meta_Simp_registerSimproc___closed__4_once, _init_l_Lean_Meta_Simp_registerSimproc___closed__4);
v___x_1342_ = l_Lean_MessageData_ofConstName(v_declName_1282_, v___x_1340_);
v___x_1343_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1341_);
lean_ctor_set(v___x_1343_, 1, v___x_1342_);
v___x_1344_ = lean_obj_once(&l_Lean_Meta_Simp_registerSimproc___closed__8, &l_Lean_Meta_Simp_registerSimproc___closed__8_once, _init_l_Lean_Meta_Simp_registerSimproc___closed__8);
v___x_1345_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1345_, 0, v___x_1343_);
lean_ctor_set(v___x_1345_, 1, v___x_1344_);
v___x_1346_ = l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0___redArg(v___x_1345_, v_a_1284_, v_a_1285_);
return v___x_1346_;
}
v___jp_1290_:
{
lean_object* v___x_1292_; lean_object* v_env_1293_; lean_object* v_nextMacroScope_1294_; lean_object* v_ngen_1295_; lean_object* v_auxDeclNGen_1296_; lean_object* v_traceState_1297_; lean_object* v_messages_1298_; lean_object* v_infoState_1299_; lean_object* v_snapshotTasks_1300_; lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1316_; 
v___x_1292_ = lean_st_ref_take(v___y_1291_);
v_env_1293_ = lean_ctor_get(v___x_1292_, 0);
v_nextMacroScope_1294_ = lean_ctor_get(v___x_1292_, 1);
v_ngen_1295_ = lean_ctor_get(v___x_1292_, 2);
v_auxDeclNGen_1296_ = lean_ctor_get(v___x_1292_, 3);
v_traceState_1297_ = lean_ctor_get(v___x_1292_, 4);
v_messages_1298_ = lean_ctor_get(v___x_1292_, 6);
v_infoState_1299_ = lean_ctor_get(v___x_1292_, 7);
v_snapshotTasks_1300_ = lean_ctor_get(v___x_1292_, 8);
v_isSharedCheck_1316_ = !lean_is_exclusive(v___x_1292_);
if (v_isSharedCheck_1316_ == 0)
{
lean_object* v_unused_1317_; 
v_unused_1317_ = lean_ctor_get(v___x_1292_, 5);
lean_dec(v_unused_1317_);
v___x_1302_ = v___x_1292_;
v_isShared_1303_ = v_isSharedCheck_1316_;
goto v_resetjp_1301_;
}
else
{
lean_inc(v_snapshotTasks_1300_);
lean_inc(v_infoState_1299_);
lean_inc(v_messages_1298_);
lean_inc(v_traceState_1297_);
lean_inc(v_auxDeclNGen_1296_);
lean_inc(v_ngen_1295_);
lean_inc(v_nextMacroScope_1294_);
lean_inc(v_env_1293_);
lean_dec(v___x_1292_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1316_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
lean_object* v___x_1304_; lean_object* v_toEnvExtension_1305_; lean_object* v_asyncMode_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1311_; 
v___x_1304_ = l_Lean_Meta_Simp_simprocDeclExt;
v_toEnvExtension_1305_ = lean_ctor_get(v___x_1304_, 0);
v_asyncMode_1306_ = lean_ctor_get(v_toEnvExtension_1305_, 2);
v___x_1307_ = lean_box(0);
v___x_1308_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v___x_1304_, v_env_1293_, v___f_1289_, v_asyncMode_1306_, v___x_1307_);
v___x_1309_ = lean_obj_once(&l_Lean_Meta_Simp_registerSimproc___closed__2, &l_Lean_Meta_Simp_registerSimproc___closed__2_once, _init_l_Lean_Meta_Simp_registerSimproc___closed__2);
if (v_isShared_1303_ == 0)
{
lean_ctor_set(v___x_1302_, 5, v___x_1309_);
lean_ctor_set(v___x_1302_, 0, v___x_1308_);
v___x_1311_ = v___x_1302_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v___x_1308_);
lean_ctor_set(v_reuseFailAlloc_1315_, 1, v_nextMacroScope_1294_);
lean_ctor_set(v_reuseFailAlloc_1315_, 2, v_ngen_1295_);
lean_ctor_set(v_reuseFailAlloc_1315_, 3, v_auxDeclNGen_1296_);
lean_ctor_set(v_reuseFailAlloc_1315_, 4, v_traceState_1297_);
lean_ctor_set(v_reuseFailAlloc_1315_, 5, v___x_1309_);
lean_ctor_set(v_reuseFailAlloc_1315_, 6, v_messages_1298_);
lean_ctor_set(v_reuseFailAlloc_1315_, 7, v_infoState_1299_);
lean_ctor_set(v_reuseFailAlloc_1315_, 8, v_snapshotTasks_1300_);
v___x_1311_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1312_ = lean_st_ref_set(v___y_1291_, v___x_1311_);
v___x_1313_ = lean_box(0);
v___x_1314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1313_);
return v___x_1314_;
}
}
}
v___jp_1318_:
{
lean_object* v___x_1321_; 
lean_inc(v_declName_1282_);
v___x_1321_ = l_Lean_Meta_Simp_isSimproc___redArg(v_declName_1282_, v___y_1320_);
if (lean_obj_tag(v___x_1321_) == 0)
{
lean_object* v_a_1322_; uint8_t v___x_1323_; 
v_a_1322_ = lean_ctor_get(v___x_1321_, 0);
lean_inc(v_a_1322_);
lean_dec_ref(v___x_1321_);
v___x_1323_ = lean_unbox(v_a_1322_);
lean_dec(v_a_1322_);
if (v___x_1323_ == 0)
{
lean_dec(v_declName_1282_);
v___y_1291_ = v___y_1320_;
goto v___jp_1290_;
}
else
{
lean_object* v___x_1324_; uint8_t v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; 
lean_dec_ref(v___f_1289_);
v___x_1324_ = lean_obj_once(&l_Lean_Meta_Simp_registerSimproc___closed__4, &l_Lean_Meta_Simp_registerSimproc___closed__4_once, _init_l_Lean_Meta_Simp_registerSimproc___closed__4);
v___x_1325_ = 0;
v___x_1326_ = l_Lean_MessageData_ofConstName(v_declName_1282_, v___x_1325_);
v___x_1327_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1324_);
lean_ctor_set(v___x_1327_, 1, v___x_1326_);
v___x_1328_ = lean_obj_once(&l_Lean_Meta_Simp_registerSimproc___closed__6, &l_Lean_Meta_Simp_registerSimproc___closed__6_once, _init_l_Lean_Meta_Simp_registerSimproc___closed__6);
v___x_1329_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1329_, 0, v___x_1327_);
lean_ctor_set(v___x_1329_, 1, v___x_1328_);
v___x_1330_ = l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0___redArg(v___x_1329_, v___y_1319_, v___y_1320_);
return v___x_1330_;
}
}
else
{
lean_object* v_a_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1338_; 
lean_dec_ref(v___f_1289_);
lean_dec(v_declName_1282_);
v_a_1331_ = lean_ctor_get(v___x_1321_, 0);
v_isSharedCheck_1338_ = !lean_is_exclusive(v___x_1321_);
if (v_isSharedCheck_1338_ == 0)
{
v___x_1333_ = v___x_1321_;
v_isShared_1334_ = v_isSharedCheck_1338_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_a_1331_);
lean_dec(v___x_1321_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1338_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v___x_1336_; 
if (v_isShared_1334_ == 0)
{
v___x_1336_ = v___x_1333_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v_a_1331_);
v___x_1336_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
return v___x_1336_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerSimproc___boxed(lean_object* v_declName_1347_, lean_object* v_keys_1348_, lean_object* v_a_1349_, lean_object* v_a_1350_, lean_object* v_a_1351_){
_start:
{
lean_object* v_res_1352_; 
v_res_1352_ = l_Lean_Meta_Simp_registerSimproc(v_declName_1347_, v_keys_1348_, v_a_1349_, v_a_1350_);
lean_dec(v_a_1350_);
lean_dec_ref(v_a_1349_);
return v_res_1352_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0(lean_object* v_00_u03b1_1353_, lean_object* v_msg_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_){
_start:
{
lean_object* v___x_1358_; 
v___x_1358_ = l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0___redArg(v_msg_1354_, v___y_1355_, v___y_1356_);
return v___x_1358_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0___boxed(lean_object* v_00_u03b1_1359_, lean_object* v_msg_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_){
_start:
{
lean_object* v_res_1364_; 
v_res_1364_ = l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0(v_00_u03b1_1359_, v_msg_1360_, v___y_1361_, v___y_1362_);
lean_dec(v___y_1362_);
lean_dec_ref(v___y_1361_);
return v_res_1364_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Simp_instBEqSimprocEntry___lam__0(lean_object* v_e_u2081_1365_, lean_object* v_e_u2082_1366_){
_start:
{
lean_object* v_toSimprocOLeanEntry_1367_; lean_object* v_toSimprocOLeanEntry_1368_; lean_object* v_declName_1369_; lean_object* v_declName_1370_; uint8_t v___x_1371_; 
v_toSimprocOLeanEntry_1367_ = lean_ctor_get(v_e_u2081_1365_, 0);
v_toSimprocOLeanEntry_1368_ = lean_ctor_get(v_e_u2082_1366_, 0);
v_declName_1369_ = lean_ctor_get(v_toSimprocOLeanEntry_1367_, 0);
v_declName_1370_ = lean_ctor_get(v_toSimprocOLeanEntry_1368_, 0);
v___x_1371_ = lean_name_eq(v_declName_1369_, v_declName_1370_);
return v___x_1371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_instBEqSimprocEntry___lam__0___boxed(lean_object* v_e_u2081_1372_, lean_object* v_e_u2082_1373_){
_start:
{
uint8_t v_res_1374_; lean_object* v_r_1375_; 
v_res_1374_ = l_Lean_Meta_Simp_instBEqSimprocEntry___lam__0(v_e_u2081_1372_, v_e_u2082_1373_);
lean_dec_ref(v_e_u2082_1373_);
lean_dec_ref(v_e_u2081_1372_);
v_r_1375_ = lean_box(v_res_1374_);
return v_r_1375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_instToFormatSimprocEntry___lam__0(lean_object* v_e_1378_){
_start:
{
lean_object* v_toSimprocOLeanEntry_1379_; lean_object* v_declName_1380_; uint8_t v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; 
v_toSimprocOLeanEntry_1379_ = lean_ctor_get(v_e_1378_, 0);
lean_inc_ref(v_toSimprocOLeanEntry_1379_);
lean_dec_ref(v_e_1378_);
v_declName_1380_ = lean_ctor_get(v_toSimprocOLeanEntry_1379_, 0);
lean_inc(v_declName_1380_);
lean_dec_ref(v_toSimprocOLeanEntry_1379_);
v___x_1381_ = 1;
v___x_1382_ = l_Lean_Name_toString(v_declName_1380_, v___x_1381_);
v___x_1383_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1383_, 0, v___x_1382_);
return v___x_1383_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0_spec__1_spec__2(lean_object* v_xs_1386_, lean_object* v_v_1387_, lean_object* v_i_1388_){
_start:
{
lean_object* v___x_1389_; uint8_t v___x_1390_; 
v___x_1389_ = lean_array_get_size(v_xs_1386_);
v___x_1390_ = lean_nat_dec_lt(v_i_1388_, v___x_1389_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1391_; 
lean_dec(v_i_1388_);
v___x_1391_ = lean_box(0);
return v___x_1391_;
}
else
{
lean_object* v___x_1392_; uint8_t v___x_1393_; 
v___x_1392_ = lean_array_fget_borrowed(v_xs_1386_, v_i_1388_);
v___x_1393_ = lean_name_eq(v___x_1392_, v_v_1387_);
if (v___x_1393_ == 0)
{
lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1394_ = lean_unsigned_to_nat(1u);
v___x_1395_ = lean_nat_add(v_i_1388_, v___x_1394_);
lean_dec(v_i_1388_);
v_i_1388_ = v___x_1395_;
goto _start;
}
else
{
lean_object* v___x_1397_; 
v___x_1397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1397_, 0, v_i_1388_);
return v___x_1397_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_xs_1398_, lean_object* v_v_1399_, lean_object* v_i_1400_){
_start:
{
lean_object* v_res_1401_; 
v_res_1401_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0_spec__1_spec__2(v_xs_1398_, v_v_1399_, v_i_1400_);
lean_dec(v_v_1399_);
lean_dec_ref(v_xs_1398_);
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0_spec__1(lean_object* v_xs_1402_, lean_object* v_v_1403_){
_start:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1404_ = lean_unsigned_to_nat(0u);
v___x_1405_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0_spec__1_spec__2(v_xs_1402_, v_v_1403_, v___x_1404_);
return v___x_1405_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0_spec__1___boxed(lean_object* v_xs_1406_, lean_object* v_v_1407_){
_start:
{
lean_object* v_res_1408_; 
v_res_1408_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0_spec__1(v_xs_1406_, v_v_1407_);
lean_dec(v_v_1407_);
lean_dec_ref(v_xs_1406_);
return v_res_1408_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0___redArg(lean_object* v_x_1409_, size_t v_x_1410_, lean_object* v_x_1411_){
_start:
{
if (lean_obj_tag(v_x_1409_) == 0)
{
lean_object* v_es_1412_; lean_object* v___x_1413_; size_t v___x_1414_; size_t v___x_1415_; size_t v___x_1416_; lean_object* v_j_1417_; lean_object* v_entry_1418_; 
v_es_1412_ = lean_ctor_get(v_x_1409_, 0);
v___x_1413_ = lean_box(2);
v___x_1414_ = ((size_t)5ULL);
v___x_1415_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1);
v___x_1416_ = lean_usize_land(v_x_1410_, v___x_1415_);
v_j_1417_ = lean_usize_to_nat(v___x_1416_);
v_entry_1418_ = lean_array_get(v___x_1413_, v_es_1412_, v_j_1417_);
switch(lean_obj_tag(v_entry_1418_))
{
case 0:
{
lean_object* v_key_1419_; uint8_t v___x_1420_; 
v_key_1419_ = lean_ctor_get(v_entry_1418_, 0);
lean_inc(v_key_1419_);
lean_dec_ref(v_entry_1418_);
v___x_1420_ = lean_name_eq(v_x_1411_, v_key_1419_);
lean_dec(v_key_1419_);
if (v___x_1420_ == 0)
{
lean_dec(v_j_1417_);
return v_x_1409_;
}
else
{
lean_object* v___x_1422_; uint8_t v_isShared_1423_; uint8_t v_isSharedCheck_1428_; 
lean_inc_ref(v_es_1412_);
v_isSharedCheck_1428_ = !lean_is_exclusive(v_x_1409_);
if (v_isSharedCheck_1428_ == 0)
{
lean_object* v_unused_1429_; 
v_unused_1429_ = lean_ctor_get(v_x_1409_, 0);
lean_dec(v_unused_1429_);
v___x_1422_ = v_x_1409_;
v_isShared_1423_ = v_isSharedCheck_1428_;
goto v_resetjp_1421_;
}
else
{
lean_dec(v_x_1409_);
v___x_1422_ = lean_box(0);
v_isShared_1423_ = v_isSharedCheck_1428_;
goto v_resetjp_1421_;
}
v_resetjp_1421_:
{
lean_object* v___x_1424_; lean_object* v___x_1426_; 
v___x_1424_ = lean_array_set(v_es_1412_, v_j_1417_, v___x_1413_);
lean_dec(v_j_1417_);
if (v_isShared_1423_ == 0)
{
lean_ctor_set(v___x_1422_, 0, v___x_1424_);
v___x_1426_ = v___x_1422_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v___x_1424_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
}
case 1:
{
lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1463_; 
lean_inc_ref(v_es_1412_);
v_isSharedCheck_1463_ = !lean_is_exclusive(v_x_1409_);
if (v_isSharedCheck_1463_ == 0)
{
lean_object* v_unused_1464_; 
v_unused_1464_ = lean_ctor_get(v_x_1409_, 0);
lean_dec(v_unused_1464_);
v___x_1431_ = v_x_1409_;
v_isShared_1432_ = v_isSharedCheck_1463_;
goto v_resetjp_1430_;
}
else
{
lean_dec(v_x_1409_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1463_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
lean_object* v_node_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1462_; 
v_node_1433_ = lean_ctor_get(v_entry_1418_, 0);
v_isSharedCheck_1462_ = !lean_is_exclusive(v_entry_1418_);
if (v_isSharedCheck_1462_ == 0)
{
v___x_1435_ = v_entry_1418_;
v_isShared_1436_ = v_isSharedCheck_1462_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_node_1433_);
lean_dec(v_entry_1418_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1462_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v_entries_1437_; size_t v___x_1438_; lean_object* v_newNode_1439_; lean_object* v___x_1440_; 
v_entries_1437_ = lean_array_set(v_es_1412_, v_j_1417_, v___x_1413_);
v___x_1438_ = lean_usize_shift_right(v_x_1410_, v___x_1414_);
v_newNode_1439_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0___redArg(v_node_1433_, v___x_1438_, v_x_1411_);
lean_inc_ref(v_newNode_1439_);
v___x_1440_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_1439_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v___x_1442_; 
if (v_isShared_1436_ == 0)
{
lean_ctor_set(v___x_1435_, 0, v_newNode_1439_);
v___x_1442_ = v___x_1435_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_newNode_1439_);
v___x_1442_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
lean_object* v___x_1443_; lean_object* v___x_1445_; 
v___x_1443_ = lean_array_set(v_entries_1437_, v_j_1417_, v___x_1442_);
lean_dec(v_j_1417_);
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 0, v___x_1443_);
v___x_1445_ = v___x_1431_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v___x_1443_);
v___x_1445_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
return v___x_1445_;
}
}
}
else
{
lean_object* v_val_1448_; lean_object* v_fst_1449_; lean_object* v_snd_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1461_; 
lean_dec_ref(v_newNode_1439_);
lean_del_object(v___x_1435_);
v_val_1448_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_val_1448_);
lean_dec_ref(v___x_1440_);
v_fst_1449_ = lean_ctor_get(v_val_1448_, 0);
v_snd_1450_ = lean_ctor_get(v_val_1448_, 1);
v_isSharedCheck_1461_ = !lean_is_exclusive(v_val_1448_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1452_ = v_val_1448_;
v_isShared_1453_ = v_isSharedCheck_1461_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_snd_1450_);
lean_inc(v_fst_1449_);
lean_dec(v_val_1448_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1461_;
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
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v_fst_1449_);
lean_ctor_set(v_reuseFailAlloc_1460_, 1, v_snd_1450_);
v___x_1455_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
lean_object* v___x_1456_; lean_object* v___x_1458_; 
v___x_1456_ = lean_array_set(v_entries_1437_, v_j_1417_, v___x_1455_);
lean_dec(v_j_1417_);
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 0, v___x_1456_);
v___x_1458_ = v___x_1431_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v___x_1456_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_1417_);
return v_x_1409_;
}
}
}
else
{
lean_object* v_ks_1465_; lean_object* v_vs_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1480_; 
v_ks_1465_ = lean_ctor_get(v_x_1409_, 0);
v_vs_1466_ = lean_ctor_get(v_x_1409_, 1);
v_isSharedCheck_1480_ = !lean_is_exclusive(v_x_1409_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1468_ = v_x_1409_;
v_isShared_1469_ = v_isSharedCheck_1480_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_vs_1466_);
lean_inc(v_ks_1465_);
lean_dec(v_x_1409_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1480_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1470_; 
v___x_1470_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0_spec__1(v_ks_1465_, v_x_1411_);
if (lean_obj_tag(v___x_1470_) == 0)
{
lean_object* v___x_1472_; 
if (v_isShared_1469_ == 0)
{
v___x_1472_ = v___x_1468_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v_ks_1465_);
lean_ctor_set(v_reuseFailAlloc_1473_, 1, v_vs_1466_);
v___x_1472_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
return v___x_1472_;
}
}
else
{
lean_object* v_val_1474_; lean_object* v_keys_x27_1475_; lean_object* v_vals_x27_1476_; lean_object* v___x_1478_; 
v_val_1474_ = lean_ctor_get(v___x_1470_, 0);
lean_inc(v_val_1474_);
lean_dec_ref(v___x_1470_);
lean_inc(v_val_1474_);
v_keys_x27_1475_ = l_Array_eraseIdx___redArg(v_ks_1465_, v_val_1474_);
v_vals_x27_1476_ = l_Array_eraseIdx___redArg(v_vs_1466_, v_val_1474_);
if (v_isShared_1469_ == 0)
{
lean_ctor_set(v___x_1468_, 1, v_vals_x27_1476_);
lean_ctor_set(v___x_1468_, 0, v_keys_x27_1475_);
v___x_1478_ = v___x_1468_;
goto v_reusejp_1477_;
}
else
{
lean_object* v_reuseFailAlloc_1479_; 
v_reuseFailAlloc_1479_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1479_, 0, v_keys_x27_1475_);
lean_ctor_set(v_reuseFailAlloc_1479_, 1, v_vals_x27_1476_);
v___x_1478_ = v_reuseFailAlloc_1479_;
goto v_reusejp_1477_;
}
v_reusejp_1477_:
{
return v___x_1478_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0___redArg___boxed(lean_object* v_x_1481_, lean_object* v_x_1482_, lean_object* v_x_1483_){
_start:
{
size_t v_x_197__boxed_1484_; lean_object* v_res_1485_; 
v_x_197__boxed_1484_ = lean_unbox_usize(v_x_1482_);
lean_dec(v_x_1482_);
v_res_1485_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0___redArg(v_x_1481_, v_x_197__boxed_1484_, v_x_1483_);
lean_dec(v_x_1483_);
return v_res_1485_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0___redArg(lean_object* v_x_1486_, lean_object* v_x_1487_){
_start:
{
uint64_t v___y_1489_; 
if (lean_obj_tag(v_x_1487_) == 0)
{
uint64_t v___x_1492_; 
v___x_1492_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0);
v___y_1489_ = v___x_1492_;
goto v___jp_1488_;
}
else
{
uint64_t v_hash_1493_; 
v_hash_1493_ = lean_ctor_get_uint64(v_x_1487_, sizeof(void*)*2);
v___y_1489_ = v_hash_1493_;
goto v___jp_1488_;
}
v___jp_1488_:
{
size_t v_h_1490_; lean_object* v___x_1491_; 
v_h_1490_ = lean_uint64_to_usize(v___y_1489_);
v___x_1491_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0___redArg(v_x_1486_, v_h_1490_, v_x_1487_);
return v___x_1491_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0___redArg___boxed(lean_object* v_x_1494_, lean_object* v_x_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0___redArg(v_x_1494_, v_x_1495_);
lean_dec(v_x_1495_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Simprocs_erase(lean_object* v_s_1497_, lean_object* v_declName_1498_){
_start:
{
lean_object* v_pre_1499_; lean_object* v_post_1500_; lean_object* v_simprocNames_1501_; lean_object* v_erased_1502_; lean_object* v___x_1504_; uint8_t v_isShared_1505_; uint8_t v_isSharedCheck_1512_; 
v_pre_1499_ = lean_ctor_get(v_s_1497_, 0);
v_post_1500_ = lean_ctor_get(v_s_1497_, 1);
v_simprocNames_1501_ = lean_ctor_get(v_s_1497_, 2);
v_erased_1502_ = lean_ctor_get(v_s_1497_, 3);
v_isSharedCheck_1512_ = !lean_is_exclusive(v_s_1497_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1504_ = v_s_1497_;
v_isShared_1505_ = v_isSharedCheck_1512_;
goto v_resetjp_1503_;
}
else
{
lean_inc(v_erased_1502_);
lean_inc(v_simprocNames_1501_);
lean_inc(v_post_1500_);
lean_inc(v_pre_1499_);
lean_dec(v_s_1497_);
v___x_1504_ = lean_box(0);
v_isShared_1505_ = v_isSharedCheck_1512_;
goto v_resetjp_1503_;
}
v_resetjp_1503_:
{
lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1510_; 
v___x_1506_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0___redArg(v_simprocNames_1501_, v_declName_1498_);
v___x_1507_ = lean_box(0);
v___x_1508_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0___redArg(v_erased_1502_, v_declName_1498_, v___x_1507_);
if (v_isShared_1505_ == 0)
{
lean_ctor_set(v___x_1504_, 3, v___x_1508_);
lean_ctor_set(v___x_1504_, 2, v___x_1506_);
v___x_1510_ = v___x_1504_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v_pre_1499_);
lean_ctor_set(v_reuseFailAlloc_1511_, 1, v_post_1500_);
lean_ctor_set(v_reuseFailAlloc_1511_, 2, v___x_1506_);
lean_ctor_set(v_reuseFailAlloc_1511_, 3, v___x_1508_);
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
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0(lean_object* v_00_u03b2_1513_, lean_object* v_x_1514_, lean_object* v_x_1515_){
_start:
{
lean_object* v___x_1516_; 
v___x_1516_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0___redArg(v_x_1514_, v_x_1515_);
return v___x_1516_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0___boxed(lean_object* v_00_u03b2_1517_, lean_object* v_x_1518_, lean_object* v_x_1519_){
_start:
{
lean_object* v_res_1520_; 
v_res_1520_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0(v_00_u03b2_1517_, v_x_1518_, v_x_1519_);
lean_dec(v_x_1519_);
return v_res_1520_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0(lean_object* v_00_u03b2_1521_, lean_object* v_x_1522_, size_t v_x_1523_, lean_object* v_x_1524_){
_start:
{
lean_object* v___x_1525_; 
v___x_1525_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0___redArg(v_x_1522_, v_x_1523_, v_x_1524_);
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1526_, lean_object* v_x_1527_, lean_object* v_x_1528_, lean_object* v_x_1529_){
_start:
{
size_t v_x_380__boxed_1530_; lean_object* v_res_1531_; 
v_x_380__boxed_1530_ = lean_unbox_usize(v_x_1528_);
lean_dec(v_x_1528_);
v_res_1531_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0_spec__0(v_00_u03b2_1526_, v_x_1527_, v_x_380__boxed_1530_, v_x_1529_);
lean_dec(v_x_1529_);
return v_res_1531_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__spec__0___closed__0(void){
_start:
{
lean_object* v___x_1532_; 
v___x_1532_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1532_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__spec__0___closed__1(void){
_start:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; 
v___x_1533_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__spec__0___closed__0);
v___x_1534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1533_);
return v___x_1534_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b2_1535_){
_start:
{
lean_object* v___x_1536_; 
v___x_1536_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__spec__0___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__spec__0___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__spec__0___closed__1);
return v___x_1536_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1537_; 
v___x_1537_ = l_Lean_Meta_DiscrTree_empty(lean_box(0));
return v___x_1537_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1538_; 
v___x_1538_ = l_Lean_PersistentHashMap_empty___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__spec__0(lean_box(0));
return v___x_1538_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; 
v___x_1539_ = lean_obj_once(&l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_, &l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__once, _init_l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_);
v___x_1540_ = lean_obj_once(&l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_, &l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__once, _init_l_Lean_Meta_Simp_initFn___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_);
v___x_1541_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1541_, 0, v___x_1540_);
lean_ctor_set(v___x_1541_, 1, v___x_1540_);
lean_ctor_set(v___x_1541_, 2, v___x_1539_);
lean_ctor_set(v___x_1541_, 3, v___x_1539_);
return v___x_1541_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1543_ = lean_obj_once(&l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_, &l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__once, _init_l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_);
v___x_1544_ = lean_st_mk_ref(v___x_1543_);
v___x_1545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1545_, 0, v___x_1544_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2____boxed(lean_object* v_a_1546_){
_start:
{
lean_object* v_res_1547_; 
v_res_1547_ = l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_();
return v_res_1547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1207380286____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1549_ = lean_obj_once(&l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_, &l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__once, _init_l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_);
v___x_1550_ = lean_st_mk_ref(v___x_1549_);
v___x_1551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1550_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1207380286____hygCtx___hyg_2____boxed(lean_object* v_a_1552_){
_start:
{
lean_object* v_res_1553_; 
v_res_1553_ = l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1207380286____hygCtx___hyg_2_();
return v_res_1553_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Simp_getSimprocFromDeclImpl_spec__0___redArg(lean_object* v_e_1554_){
_start:
{
if (lean_obj_tag(v_e_1554_) == 0)
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1564_; 
v_a_1556_ = lean_ctor_get(v_e_1554_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v_e_1554_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1558_ = v_e_1554_;
v_isShared_1559_ = v_isSharedCheck_1564_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v_e_1554_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1564_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1560_; lean_object* v___x_1562_; 
v___x_1560_ = lean_mk_io_user_error(v_a_1556_);
if (v_isShared_1559_ == 0)
{
lean_ctor_set_tag(v___x_1558_, 1);
lean_ctor_set(v___x_1558_, 0, v___x_1560_);
v___x_1562_ = v___x_1558_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(1, 1, 0);
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
else
{
lean_object* v_a_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1572_; 
v_a_1565_ = lean_ctor_get(v_e_1554_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v_e_1554_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1567_ = v_e_1554_;
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_a_1565_);
lean_dec(v_e_1554_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1570_; 
if (v_isShared_1568_ == 0)
{
lean_ctor_set_tag(v___x_1567_, 0);
v___x_1570_ = v___x_1567_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_a_1565_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
return v___x_1570_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Simp_getSimprocFromDeclImpl_spec__0___redArg___boxed(lean_object* v_e_1573_, lean_object* v_a_1574_){
_start:
{
lean_object* v_res_1575_; 
v_res_1575_ = l_IO_ofExcept___at___00Lean_Meta_Simp_getSimprocFromDeclImpl_spec__0___redArg(v_e_1573_);
return v_res_1575_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Simp_getSimprocFromDeclImpl_spec__0(lean_object* v_00_u03b1_1576_, lean_object* v_e_1577_){
_start:
{
lean_object* v___x_1579_; 
v___x_1579_ = l_IO_ofExcept___at___00Lean_Meta_Simp_getSimprocFromDeclImpl_spec__0___redArg(v_e_1577_);
return v___x_1579_;
}
}
LEAN_EXPORT lean_object* l_IO_ofExcept___at___00Lean_Meta_Simp_getSimprocFromDeclImpl_spec__0___boxed(lean_object* v_00_u03b1_1580_, lean_object* v_e_1581_, lean_object* v_a_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l_IO_ofExcept___at___00Lean_Meta_Simp_getSimprocFromDeclImpl_spec__0(v_00_u03b1_1580_, v_e_1581_);
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocFromDeclImpl(lean_object* v_declName_1590_, lean_object* v_a_1591_){
_start:
{
lean_object* v_env_1593_; lean_object* v_opts_1594_; uint8_t v___x_1595_; lean_object* v___x_1596_; 
v_env_1593_ = lean_ctor_get(v_a_1591_, 0);
v_opts_1594_ = lean_ctor_get(v_a_1591_, 1);
v___x_1595_ = 0;
lean_inc(v_declName_1590_);
lean_inc_ref(v_env_1593_);
v___x_1596_ = l_Lean_Environment_find_x3f(v_env_1593_, v_declName_1590_, v___x_1595_);
if (lean_obj_tag(v___x_1596_) == 0)
{
lean_object* v___x_1597_; uint8_t v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1597_ = ((lean_object*)(l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__0));
v___x_1598_ = 1;
v___x_1599_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_1590_, v___x_1598_);
v___x_1600_ = lean_string_append(v___x_1597_, v___x_1599_);
lean_dec_ref(v___x_1599_);
v___x_1601_ = ((lean_object*)(l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__1));
v___x_1602_ = lean_string_append(v___x_1600_, v___x_1601_);
v___x_1603_ = lean_mk_io_user_error(v___x_1602_);
v___x_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1603_);
return v___x_1604_;
}
else
{
lean_object* v_val_1605_; lean_object* v___x_1607_; uint8_t v_isShared_1608_; uint8_t v_isSharedCheck_1684_; 
v_val_1605_ = lean_ctor_get(v___x_1596_, 0);
v_isSharedCheck_1684_ = !lean_is_exclusive(v___x_1596_);
if (v_isSharedCheck_1684_ == 0)
{
v___x_1607_ = v___x_1596_;
v_isShared_1608_ = v_isSharedCheck_1684_;
goto v_resetjp_1606_;
}
else
{
lean_inc(v_val_1605_);
lean_dec(v___x_1596_);
v___x_1607_ = lean_box(0);
v_isShared_1608_ = v_isSharedCheck_1684_;
goto v_resetjp_1606_;
}
v_resetjp_1606_:
{
lean_object* v___x_1626_; 
v___x_1626_ = l_Lean_ConstantInfo_type(v_val_1605_);
if (lean_obj_tag(v___x_1626_) == 4)
{
lean_object* v_declName_1627_; 
v_declName_1627_ = lean_ctor_get(v___x_1626_, 0);
lean_inc(v_declName_1627_);
lean_dec_ref(v___x_1626_);
if (lean_obj_tag(v_declName_1627_) == 1)
{
lean_object* v_pre_1628_; 
v_pre_1628_ = lean_ctor_get(v_declName_1627_, 0);
lean_inc(v_pre_1628_);
if (lean_obj_tag(v_pre_1628_) == 1)
{
lean_object* v_pre_1629_; 
v_pre_1629_ = lean_ctor_get(v_pre_1628_, 0);
lean_inc(v_pre_1629_);
if (lean_obj_tag(v_pre_1629_) == 1)
{
lean_object* v_pre_1630_; 
v_pre_1630_ = lean_ctor_get(v_pre_1629_, 0);
lean_inc(v_pre_1630_);
if (lean_obj_tag(v_pre_1630_) == 1)
{
lean_object* v_pre_1631_; 
v_pre_1631_ = lean_ctor_get(v_pre_1630_, 0);
if (lean_obj_tag(v_pre_1631_) == 0)
{
lean_object* v_str_1632_; lean_object* v_str_1633_; lean_object* v_str_1634_; lean_object* v_str_1635_; lean_object* v___x_1636_; uint8_t v___x_1637_; 
v_str_1632_ = lean_ctor_get(v_declName_1627_, 1);
lean_inc_ref(v_str_1632_);
lean_dec_ref(v_declName_1627_);
v_str_1633_ = lean_ctor_get(v_pre_1628_, 1);
lean_inc_ref(v_str_1633_);
lean_dec_ref(v_pre_1628_);
v_str_1634_ = lean_ctor_get(v_pre_1629_, 1);
lean_inc_ref(v_str_1634_);
lean_dec_ref(v_pre_1629_);
v_str_1635_ = lean_ctor_get(v_pre_1630_, 1);
lean_inc_ref(v_str_1635_);
lean_dec_ref(v_pre_1630_);
v___x_1636_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_));
v___x_1637_ = lean_string_dec_eq(v_str_1635_, v___x_1636_);
lean_dec_ref(v_str_1635_);
if (v___x_1637_ == 0)
{
lean_dec_ref(v_str_1634_);
lean_dec_ref(v_str_1633_);
lean_dec_ref(v_str_1632_);
goto v___jp_1609_;
}
else
{
lean_object* v___x_1638_; uint8_t v___x_1639_; 
v___x_1638_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_));
v___x_1639_ = lean_string_dec_eq(v_str_1634_, v___x_1638_);
lean_dec_ref(v_str_1634_);
if (v___x_1639_ == 0)
{
lean_dec_ref(v_str_1633_);
lean_dec_ref(v_str_1632_);
goto v___jp_1609_;
}
else
{
lean_object* v___x_1640_; uint8_t v___x_1641_; 
v___x_1640_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_));
v___x_1641_ = lean_string_dec_eq(v_str_1633_, v___x_1640_);
lean_dec_ref(v_str_1633_);
if (v___x_1641_ == 0)
{
lean_dec_ref(v_str_1632_);
goto v___jp_1609_;
}
else
{
lean_object* v___x_1642_; uint8_t v___x_1643_; 
v___x_1642_ = ((lean_object*)(l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__4));
v___x_1643_ = lean_string_dec_eq(v_str_1632_, v___x_1642_);
if (v___x_1643_ == 0)
{
lean_object* v___x_1644_; uint8_t v___x_1645_; 
v___x_1644_ = ((lean_object*)(l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__5));
v___x_1645_ = lean_string_dec_eq(v_str_1632_, v___x_1644_);
lean_dec_ref(v_str_1632_);
if (v___x_1645_ == 0)
{
goto v___jp_1609_;
}
else
{
lean_object* v___x_1646_; lean_object* v___x_1647_; 
lean_del_object(v___x_1607_);
lean_dec(v_val_1605_);
v___x_1646_ = l_Lean_Environment_evalConst___redArg(v_env_1593_, v_opts_1594_, v_declName_1590_, v___x_1645_);
lean_dec(v_declName_1590_);
v___x_1647_ = l_IO_ofExcept___at___00Lean_Meta_Simp_getSimprocFromDeclImpl_spec__0___redArg(v___x_1646_);
if (lean_obj_tag(v___x_1647_) == 0)
{
lean_object* v_a_1648_; lean_object* v___x_1650_; uint8_t v_isShared_1651_; uint8_t v_isSharedCheck_1656_; 
v_a_1648_ = lean_ctor_get(v___x_1647_, 0);
v_isSharedCheck_1656_ = !lean_is_exclusive(v___x_1647_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1650_ = v___x_1647_;
v_isShared_1651_ = v_isSharedCheck_1656_;
goto v_resetjp_1649_;
}
else
{
lean_inc(v_a_1648_);
lean_dec(v___x_1647_);
v___x_1650_ = lean_box(0);
v_isShared_1651_ = v_isSharedCheck_1656_;
goto v_resetjp_1649_;
}
v_resetjp_1649_:
{
lean_object* v___x_1652_; lean_object* v___x_1654_; 
v___x_1652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1652_, 0, v_a_1648_);
if (v_isShared_1651_ == 0)
{
lean_ctor_set(v___x_1650_, 0, v___x_1652_);
v___x_1654_ = v___x_1650_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v___x_1652_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
return v___x_1654_;
}
}
}
else
{
lean_object* v_a_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1664_; 
v_a_1657_ = lean_ctor_get(v___x_1647_, 0);
v_isSharedCheck_1664_ = !lean_is_exclusive(v___x_1647_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1659_ = v___x_1647_;
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_a_1657_);
lean_dec(v___x_1647_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1664_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1662_; 
if (v_isShared_1660_ == 0)
{
v___x_1662_ = v___x_1659_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v_a_1657_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
}
}
}
else
{
lean_object* v___x_1665_; lean_object* v___x_1666_; 
lean_dec_ref(v_str_1632_);
lean_del_object(v___x_1607_);
lean_dec(v_val_1605_);
v___x_1665_ = l_Lean_Environment_evalConst___redArg(v_env_1593_, v_opts_1594_, v_declName_1590_, v___x_1643_);
lean_dec(v_declName_1590_);
v___x_1666_ = l_IO_ofExcept___at___00Lean_Meta_Simp_getSimprocFromDeclImpl_spec__0___redArg(v___x_1665_);
if (lean_obj_tag(v___x_1666_) == 0)
{
lean_object* v_a_1667_; lean_object* v___x_1669_; uint8_t v_isShared_1670_; uint8_t v_isSharedCheck_1675_; 
v_a_1667_ = lean_ctor_get(v___x_1666_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1666_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1669_ = v___x_1666_;
v_isShared_1670_ = v_isSharedCheck_1675_;
goto v_resetjp_1668_;
}
else
{
lean_inc(v_a_1667_);
lean_dec(v___x_1666_);
v___x_1669_ = lean_box(0);
v_isShared_1670_ = v_isSharedCheck_1675_;
goto v_resetjp_1668_;
}
v_resetjp_1668_:
{
lean_object* v___x_1671_; lean_object* v___x_1673_; 
v___x_1671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1671_, 0, v_a_1667_);
if (v_isShared_1670_ == 0)
{
lean_ctor_set(v___x_1669_, 0, v___x_1671_);
v___x_1673_ = v___x_1669_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v___x_1671_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
else
{
lean_object* v_a_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1683_; 
v_a_1676_ = lean_ctor_get(v___x_1666_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v___x_1666_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1678_ = v___x_1666_;
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_a_1676_);
lean_dec(v___x_1666_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1683_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
lean_object* v___x_1681_; 
if (v_isShared_1679_ == 0)
{
v___x_1681_ = v___x_1678_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v_a_1676_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
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
lean_dec_ref(v_pre_1630_);
lean_dec_ref(v_pre_1629_);
lean_dec_ref(v_pre_1628_);
lean_dec_ref(v_declName_1627_);
goto v___jp_1609_;
}
}
else
{
lean_dec_ref(v_pre_1629_);
lean_dec(v_pre_1630_);
lean_dec_ref(v_pre_1628_);
lean_dec_ref(v_declName_1627_);
goto v___jp_1609_;
}
}
else
{
lean_dec(v_pre_1629_);
lean_dec_ref(v_pre_1628_);
lean_dec_ref(v_declName_1627_);
goto v___jp_1609_;
}
}
else
{
lean_dec_ref(v_declName_1627_);
lean_dec(v_pre_1628_);
goto v___jp_1609_;
}
}
else
{
lean_dec(v_declName_1627_);
goto v___jp_1609_;
}
}
else
{
lean_dec_ref(v___x_1626_);
goto v___jp_1609_;
}
v___jp_1609_:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; uint8_t v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1624_; 
v___x_1610_ = ((lean_object*)(l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__2));
v___x_1611_ = l_Lean_privateToUserName(v_declName_1590_);
v___x_1612_ = 1;
v___x_1613_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1611_, v___x_1612_);
v___x_1614_ = lean_string_append(v___x_1610_, v___x_1613_);
lean_dec_ref(v___x_1613_);
v___x_1615_ = ((lean_object*)(l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__3));
v___x_1616_ = lean_string_append(v___x_1614_, v___x_1615_);
v___x_1617_ = l_Lean_ConstantInfo_type(v_val_1605_);
lean_dec(v_val_1605_);
v___x_1618_ = lean_expr_dbg_to_string(v___x_1617_);
lean_dec_ref(v___x_1617_);
v___x_1619_ = lean_string_append(v___x_1616_, v___x_1618_);
lean_dec_ref(v___x_1618_);
v___x_1620_ = ((lean_object*)(l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__1));
v___x_1621_ = lean_string_append(v___x_1619_, v___x_1620_);
v___x_1622_ = lean_mk_io_user_error(v___x_1621_);
if (v_isShared_1608_ == 0)
{
lean_ctor_set(v___x_1607_, 0, v___x_1622_);
v___x_1624_ = v___x_1607_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v___x_1622_);
v___x_1624_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
return v___x_1624_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocFromDeclImpl___boxed(lean_object* v_declName_1685_, lean_object* v_a_1686_, lean_object* v_a_1687_){
_start:
{
lean_object* v_res_1688_; 
v_res_1688_ = l_Lean_Meta_Simp_getSimprocFromDeclImpl(v_declName_1685_, v_a_1686_);
lean_dec_ref(v_a_1686_);
return v_res_1688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_toSimprocEntry(lean_object* v_e_1689_, lean_object* v_a_1690_){
_start:
{
lean_object* v_declName_1692_; lean_object* v___x_1693_; 
v_declName_1692_ = lean_ctor_get(v_e_1689_, 0);
lean_inc(v_declName_1692_);
v___x_1693_ = l_Lean_Meta_Simp_getSimprocFromDeclImpl(v_declName_1692_, v_a_1690_);
if (lean_obj_tag(v___x_1693_) == 0)
{
lean_object* v_a_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1702_; 
v_a_1694_ = lean_ctor_get(v___x_1693_, 0);
v_isSharedCheck_1702_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1702_ == 0)
{
v___x_1696_ = v___x_1693_;
v_isShared_1697_ = v_isSharedCheck_1702_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_a_1694_);
lean_dec(v___x_1693_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1702_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1698_; lean_object* v___x_1700_; 
v___x_1698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1698_, 0, v_e_1689_);
lean_ctor_set(v___x_1698_, 1, v_a_1694_);
if (v_isShared_1697_ == 0)
{
lean_ctor_set(v___x_1696_, 0, v___x_1698_);
v___x_1700_ = v___x_1696_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v___x_1698_);
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
lean_dec_ref(v_e_1689_);
v_a_1703_ = lean_ctor_get(v___x_1693_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1705_ = v___x_1693_;
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_a_1703_);
lean_dec(v___x_1693_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_toSimprocEntry___boxed(lean_object* v_e_1711_, lean_object* v_a_1712_, lean_object* v_a_1713_){
_start:
{
lean_object* v_res_1714_; 
v_res_1714_ = l_Lean_Meta_Simp_toSimprocEntry(v_e_1711_, v_a_1712_);
lean_dec_ref(v_a_1712_);
return v_res_1714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_eraseSimprocAttr___lam__0(lean_object* v_declName_1715_, lean_object* v_s_1716_){
_start:
{
lean_object* v___x_1717_; 
v___x_1717_ = l_Lean_Meta_Simp_Simprocs_erase(v_s_1716_, v_declName_1715_);
return v___x_1717_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1718_, lean_object* v_i_1719_, lean_object* v_k_1720_){
_start:
{
lean_object* v___x_1721_; uint8_t v___x_1722_; 
v___x_1721_ = lean_array_get_size(v_keys_1718_);
v___x_1722_ = lean_nat_dec_lt(v_i_1719_, v___x_1721_);
if (v___x_1722_ == 0)
{
lean_dec(v_i_1719_);
return v___x_1722_;
}
else
{
lean_object* v_k_x27_1723_; uint8_t v___x_1724_; 
v_k_x27_1723_ = lean_array_fget_borrowed(v_keys_1718_, v_i_1719_);
v___x_1724_ = lean_name_eq(v_k_1720_, v_k_x27_1723_);
if (v___x_1724_ == 0)
{
lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1725_ = lean_unsigned_to_nat(1u);
v___x_1726_ = lean_nat_add(v_i_1719_, v___x_1725_);
lean_dec(v_i_1719_);
v_i_1719_ = v___x_1726_;
goto _start;
}
else
{
lean_dec(v_i_1719_);
return v___x_1724_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1728_, lean_object* v_i_1729_, lean_object* v_k_1730_){
_start:
{
uint8_t v_res_1731_; lean_object* v_r_1732_; 
v_res_1731_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0_spec__1___redArg(v_keys_1728_, v_i_1729_, v_k_1730_);
lean_dec(v_k_1730_);
lean_dec_ref(v_keys_1728_);
v_r_1732_ = lean_box(v_res_1731_);
return v_r_1732_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0___redArg(lean_object* v_x_1733_, size_t v_x_1734_, lean_object* v_x_1735_){
_start:
{
if (lean_obj_tag(v_x_1733_) == 0)
{
lean_object* v_es_1736_; lean_object* v___x_1737_; size_t v___x_1738_; size_t v___x_1739_; size_t v___x_1740_; lean_object* v_j_1741_; lean_object* v___x_1742_; 
v_es_1736_ = lean_ctor_get(v_x_1733_, 0);
lean_inc_ref(v_es_1736_);
lean_dec_ref(v_x_1733_);
v___x_1737_ = lean_box(2);
v___x_1738_ = ((size_t)5ULL);
v___x_1739_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1);
v___x_1740_ = lean_usize_land(v_x_1734_, v___x_1739_);
v_j_1741_ = lean_usize_to_nat(v___x_1740_);
v___x_1742_ = lean_array_get(v___x_1737_, v_es_1736_, v_j_1741_);
lean_dec(v_j_1741_);
lean_dec_ref(v_es_1736_);
switch(lean_obj_tag(v___x_1742_))
{
case 0:
{
lean_object* v_key_1743_; uint8_t v___x_1744_; 
v_key_1743_ = lean_ctor_get(v___x_1742_, 0);
lean_inc(v_key_1743_);
lean_dec_ref(v___x_1742_);
v___x_1744_ = lean_name_eq(v_x_1735_, v_key_1743_);
lean_dec(v_key_1743_);
return v___x_1744_;
}
case 1:
{
lean_object* v_node_1745_; size_t v___x_1746_; 
v_node_1745_ = lean_ctor_get(v___x_1742_, 0);
lean_inc(v_node_1745_);
lean_dec_ref(v___x_1742_);
v___x_1746_ = lean_usize_shift_right(v_x_1734_, v___x_1738_);
v_x_1733_ = v_node_1745_;
v_x_1734_ = v___x_1746_;
goto _start;
}
default: 
{
uint8_t v___x_1748_; 
v___x_1748_ = 0;
return v___x_1748_;
}
}
}
else
{
lean_object* v_ks_1749_; lean_object* v___x_1750_; uint8_t v___x_1751_; 
v_ks_1749_ = lean_ctor_get(v_x_1733_, 0);
lean_inc_ref(v_ks_1749_);
lean_dec_ref(v_x_1733_);
v___x_1750_ = lean_unsigned_to_nat(0u);
v___x_1751_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0_spec__1___redArg(v_ks_1749_, v___x_1750_, v_x_1735_);
lean_dec_ref(v_ks_1749_);
return v___x_1751_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0___redArg___boxed(lean_object* v_x_1752_, lean_object* v_x_1753_, lean_object* v_x_1754_){
_start:
{
size_t v_x_554__boxed_1755_; uint8_t v_res_1756_; lean_object* v_r_1757_; 
v_x_554__boxed_1755_ = lean_unbox_usize(v_x_1753_);
lean_dec(v_x_1753_);
v_res_1756_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0___redArg(v_x_1752_, v_x_554__boxed_1755_, v_x_1754_);
lean_dec(v_x_1754_);
v_r_1757_ = lean_box(v_res_1756_);
return v_r_1757_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0___redArg(lean_object* v_x_1758_, lean_object* v_x_1759_){
_start:
{
uint64_t v___y_1761_; 
if (lean_obj_tag(v_x_1759_) == 0)
{
uint64_t v___x_1764_; 
v___x_1764_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0_spec__2___redArg___closed__0);
v___y_1761_ = v___x_1764_;
goto v___jp_1760_;
}
else
{
uint64_t v_hash_1765_; 
v_hash_1765_ = lean_ctor_get_uint64(v_x_1759_, sizeof(void*)*2);
v___y_1761_ = v_hash_1765_;
goto v___jp_1760_;
}
v___jp_1760_:
{
size_t v___x_1762_; uint8_t v___x_1763_; 
v___x_1762_ = lean_uint64_to_usize(v___y_1761_);
v___x_1763_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0___redArg(v_x_1758_, v___x_1762_, v_x_1759_);
return v___x_1763_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0___redArg___boxed(lean_object* v_x_1766_, lean_object* v_x_1767_){
_start:
{
uint8_t v_res_1768_; lean_object* v_r_1769_; 
v_res_1768_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0___redArg(v_x_1766_, v_x_1767_);
lean_dec(v_x_1767_);
v_r_1769_ = lean_box(v_res_1768_);
return v_r_1769_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_eraseSimprocAttr___closed__0(void){
_start:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; 
v___x_1770_ = ((lean_object*)(l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__1));
v___x_1771_ = l_Lean_stringToMessageData(v___x_1770_);
return v___x_1771_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_eraseSimprocAttr___closed__2(void){
_start:
{
lean_object* v___x_1773_; lean_object* v___x_1774_; 
v___x_1773_ = ((lean_object*)(l_Lean_Meta_Simp_eraseSimprocAttr___closed__1));
v___x_1774_ = l_Lean_stringToMessageData(v___x_1773_);
return v___x_1774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_eraseSimprocAttr(lean_object* v_ext_1775_, lean_object* v_declName_1776_, lean_object* v_a_1777_, lean_object* v_a_1778_){
_start:
{
lean_object* v___x_1780_; lean_object* v_ext_1781_; lean_object* v_toEnvExtension_1782_; lean_object* v_env_1783_; lean_object* v_asyncMode_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v_simprocNames_1787_; lean_object* v___f_1788_; lean_object* v___y_1790_; uint8_t v___x_1813_; 
v___x_1780_ = lean_st_ref_get(v_a_1778_);
v_ext_1781_ = lean_ctor_get(v_ext_1775_, 1);
v_toEnvExtension_1782_ = lean_ctor_get(v_ext_1781_, 0);
v_env_1783_ = lean_ctor_get(v___x_1780_, 0);
lean_inc_ref(v_env_1783_);
lean_dec(v___x_1780_);
v_asyncMode_1784_ = lean_ctor_get(v_toEnvExtension_1782_, 2);
v___x_1785_ = l_Lean_Meta_Simp_instInhabitedSimprocs_default;
v___x_1786_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_1785_, v_ext_1775_, v_env_1783_, v_asyncMode_1784_);
v_simprocNames_1787_ = lean_ctor_get(v___x_1786_, 2);
lean_inc_ref(v_simprocNames_1787_);
lean_dec(v___x_1786_);
lean_inc(v_declName_1776_);
v___f_1788_ = lean_alloc_closure((void*)(l_Lean_Meta_Simp_eraseSimprocAttr___lam__0), 2, 1);
lean_closure_set(v___f_1788_, 0, v_declName_1776_);
v___x_1813_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0___redArg(v_simprocNames_1787_, v_declName_1776_);
if (v___x_1813_ == 0)
{
lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1825_; 
lean_dec_ref(v___f_1788_);
v_isSharedCheck_1825_ = !lean_is_exclusive(v_ext_1775_);
if (v_isSharedCheck_1825_ == 0)
{
lean_object* v_unused_1826_; lean_object* v_unused_1827_; 
v_unused_1826_ = lean_ctor_get(v_ext_1775_, 1);
lean_dec(v_unused_1826_);
v_unused_1827_ = lean_ctor_get(v_ext_1775_, 0);
lean_dec(v_unused_1827_);
v___x_1815_ = v_ext_1775_;
v_isShared_1816_ = v_isSharedCheck_1825_;
goto v_resetjp_1814_;
}
else
{
lean_dec(v_ext_1775_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1825_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1820_; 
v___x_1817_ = lean_obj_once(&l_Lean_Meta_Simp_eraseSimprocAttr___closed__0, &l_Lean_Meta_Simp_eraseSimprocAttr___closed__0_once, _init_l_Lean_Meta_Simp_eraseSimprocAttr___closed__0);
v___x_1818_ = l_Lean_MessageData_ofConstName(v_declName_1776_, v___x_1813_);
if (v_isShared_1816_ == 0)
{
lean_ctor_set_tag(v___x_1815_, 7);
lean_ctor_set(v___x_1815_, 1, v___x_1818_);
lean_ctor_set(v___x_1815_, 0, v___x_1817_);
v___x_1820_ = v___x_1815_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v___x_1817_);
lean_ctor_set(v_reuseFailAlloc_1824_, 1, v___x_1818_);
v___x_1820_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1821_ = lean_obj_once(&l_Lean_Meta_Simp_eraseSimprocAttr___closed__2, &l_Lean_Meta_Simp_eraseSimprocAttr___closed__2_once, _init_l_Lean_Meta_Simp_eraseSimprocAttr___closed__2);
v___x_1822_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1822_, 0, v___x_1820_);
lean_ctor_set(v___x_1822_, 1, v___x_1821_);
v___x_1823_ = l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0___redArg(v___x_1822_, v_a_1777_, v_a_1778_);
return v___x_1823_;
}
}
}
else
{
lean_dec(v_declName_1776_);
v___y_1790_ = v_a_1778_;
goto v___jp_1789_;
}
v___jp_1789_:
{
lean_object* v___x_1791_; lean_object* v_env_1792_; lean_object* v_nextMacroScope_1793_; lean_object* v_ngen_1794_; lean_object* v_auxDeclNGen_1795_; lean_object* v_traceState_1796_; lean_object* v_messages_1797_; lean_object* v_infoState_1798_; lean_object* v_snapshotTasks_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1811_; 
v___x_1791_ = lean_st_ref_take(v___y_1790_);
v_env_1792_ = lean_ctor_get(v___x_1791_, 0);
v_nextMacroScope_1793_ = lean_ctor_get(v___x_1791_, 1);
v_ngen_1794_ = lean_ctor_get(v___x_1791_, 2);
v_auxDeclNGen_1795_ = lean_ctor_get(v___x_1791_, 3);
v_traceState_1796_ = lean_ctor_get(v___x_1791_, 4);
v_messages_1797_ = lean_ctor_get(v___x_1791_, 6);
v_infoState_1798_ = lean_ctor_get(v___x_1791_, 7);
v_snapshotTasks_1799_ = lean_ctor_get(v___x_1791_, 8);
v_isSharedCheck_1811_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1811_ == 0)
{
lean_object* v_unused_1812_; 
v_unused_1812_ = lean_ctor_get(v___x_1791_, 5);
lean_dec(v_unused_1812_);
v___x_1801_ = v___x_1791_;
v_isShared_1802_ = v_isSharedCheck_1811_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_snapshotTasks_1799_);
lean_inc(v_infoState_1798_);
lean_inc(v_messages_1797_);
lean_inc(v_traceState_1796_);
lean_inc(v_auxDeclNGen_1795_);
lean_inc(v_ngen_1794_);
lean_inc(v_nextMacroScope_1793_);
lean_inc(v_env_1792_);
lean_dec(v___x_1791_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1811_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1806_; 
v___x_1803_ = l_Lean_ScopedEnvExtension_modifyState___redArg(v_ext_1775_, v_env_1792_, v___f_1788_);
v___x_1804_ = lean_obj_once(&l_Lean_Meta_Simp_registerSimproc___closed__2, &l_Lean_Meta_Simp_registerSimproc___closed__2_once, _init_l_Lean_Meta_Simp_registerSimproc___closed__2);
if (v_isShared_1802_ == 0)
{
lean_ctor_set(v___x_1801_, 5, v___x_1804_);
lean_ctor_set(v___x_1801_, 0, v___x_1803_);
v___x_1806_ = v___x_1801_;
goto v_reusejp_1805_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v___x_1803_);
lean_ctor_set(v_reuseFailAlloc_1810_, 1, v_nextMacroScope_1793_);
lean_ctor_set(v_reuseFailAlloc_1810_, 2, v_ngen_1794_);
lean_ctor_set(v_reuseFailAlloc_1810_, 3, v_auxDeclNGen_1795_);
lean_ctor_set(v_reuseFailAlloc_1810_, 4, v_traceState_1796_);
lean_ctor_set(v_reuseFailAlloc_1810_, 5, v___x_1804_);
lean_ctor_set(v_reuseFailAlloc_1810_, 6, v_messages_1797_);
lean_ctor_set(v_reuseFailAlloc_1810_, 7, v_infoState_1798_);
lean_ctor_set(v_reuseFailAlloc_1810_, 8, v_snapshotTasks_1799_);
v___x_1806_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1805_;
}
v_reusejp_1805_:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1807_ = lean_st_ref_set(v___y_1790_, v___x_1806_);
v___x_1808_ = lean_box(0);
v___x_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1808_);
return v___x_1809_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_eraseSimprocAttr___boxed(lean_object* v_ext_1828_, lean_object* v_declName_1829_, lean_object* v_a_1830_, lean_object* v_a_1831_, lean_object* v_a_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l_Lean_Meta_Simp_eraseSimprocAttr(v_ext_1828_, v_declName_1829_, v_a_1830_, v_a_1831_);
lean_dec(v_a_1831_);
lean_dec_ref(v_a_1830_);
return v_res_1833_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0(lean_object* v_00_u03b2_1834_, lean_object* v_x_1835_, lean_object* v_x_1836_){
_start:
{
uint8_t v___x_1837_; 
v___x_1837_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0___redArg(v_x_1835_, v_x_1836_);
return v___x_1837_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0___boxed(lean_object* v_00_u03b2_1838_, lean_object* v_x_1839_, lean_object* v_x_1840_){
_start:
{
uint8_t v_res_1841_; lean_object* v_r_1842_; 
v_res_1841_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0(v_00_u03b2_1838_, v_x_1839_, v_x_1840_);
lean_dec(v_x_1840_);
v_r_1842_ = lean_box(v_res_1841_);
return v_r_1842_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0(lean_object* v_00_u03b2_1843_, lean_object* v_x_1844_, size_t v_x_1845_, lean_object* v_x_1846_){
_start:
{
uint8_t v___x_1847_; 
v___x_1847_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0___redArg(v_x_1844_, v_x_1845_, v_x_1846_);
return v___x_1847_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1848_, lean_object* v_x_1849_, lean_object* v_x_1850_, lean_object* v_x_1851_){
_start:
{
size_t v_x_721__boxed_1852_; uint8_t v_res_1853_; lean_object* v_r_1854_; 
v_x_721__boxed_1852_ = lean_unbox_usize(v_x_1850_);
lean_dec(v_x_1850_);
v_res_1853_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0(v_00_u03b2_1848_, v_x_1849_, v_x_721__boxed_1852_, v_x_1851_);
lean_dec(v_x_1851_);
v_r_1854_ = lean_box(v_res_1853_);
return v_r_1854_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1855_, lean_object* v_keys_1856_, lean_object* v_vals_1857_, lean_object* v_heq_1858_, lean_object* v_i_1859_, lean_object* v_k_1860_){
_start:
{
uint8_t v___x_1861_; 
v___x_1861_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0_spec__1___redArg(v_keys_1856_, v_i_1859_, v_k_1860_);
return v___x_1861_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1862_, lean_object* v_keys_1863_, lean_object* v_vals_1864_, lean_object* v_heq_1865_, lean_object* v_i_1866_, lean_object* v_k_1867_){
_start:
{
uint8_t v_res_1868_; lean_object* v_r_1869_; 
v_res_1868_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0_spec__0_spec__1(v_00_u03b2_1862_, v_keys_1863_, v_vals_1864_, v_heq_1865_, v_i_1866_, v_k_1867_);
lean_dec(v_k_1867_);
lean_dec_ref(v_vals_1864_);
lean_dec_ref(v_keys_1863_);
v_r_1869_ = lean_box(v_res_1868_);
return v_r_1869_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Simp_addSimprocAttrCore_spec__0___redArg(lean_object* v_ext_1870_, lean_object* v_b_1871_, uint8_t v_kind_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_){
_start:
{
lean_object* v_currNamespace_1876_; lean_object* v___x_1877_; lean_object* v_env_1878_; lean_object* v_nextMacroScope_1879_; lean_object* v_ngen_1880_; lean_object* v_auxDeclNGen_1881_; lean_object* v_traceState_1882_; lean_object* v_messages_1883_; lean_object* v_infoState_1884_; lean_object* v_snapshotTasks_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1897_; 
v_currNamespace_1876_ = lean_ctor_get(v___y_1873_, 6);
v___x_1877_ = lean_st_ref_take(v___y_1874_);
v_env_1878_ = lean_ctor_get(v___x_1877_, 0);
v_nextMacroScope_1879_ = lean_ctor_get(v___x_1877_, 1);
v_ngen_1880_ = lean_ctor_get(v___x_1877_, 2);
v_auxDeclNGen_1881_ = lean_ctor_get(v___x_1877_, 3);
v_traceState_1882_ = lean_ctor_get(v___x_1877_, 4);
v_messages_1883_ = lean_ctor_get(v___x_1877_, 6);
v_infoState_1884_ = lean_ctor_get(v___x_1877_, 7);
v_snapshotTasks_1885_ = lean_ctor_get(v___x_1877_, 8);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___x_1877_);
if (v_isSharedCheck_1897_ == 0)
{
lean_object* v_unused_1898_; 
v_unused_1898_ = lean_ctor_get(v___x_1877_, 5);
lean_dec(v_unused_1898_);
v___x_1887_ = v___x_1877_;
v_isShared_1888_ = v_isSharedCheck_1897_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_snapshotTasks_1885_);
lean_inc(v_infoState_1884_);
lean_inc(v_messages_1883_);
lean_inc(v_traceState_1882_);
lean_inc(v_auxDeclNGen_1881_);
lean_inc(v_ngen_1880_);
lean_inc(v_nextMacroScope_1879_);
lean_inc(v_env_1878_);
lean_dec(v___x_1877_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1897_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1892_; 
lean_inc(v_currNamespace_1876_);
v___x_1889_ = l_Lean_ScopedEnvExtension_addCore___redArg(v_env_1878_, v_ext_1870_, v_b_1871_, v_kind_1872_, v_currNamespace_1876_);
v___x_1890_ = lean_obj_once(&l_Lean_Meta_Simp_registerSimproc___closed__2, &l_Lean_Meta_Simp_registerSimproc___closed__2_once, _init_l_Lean_Meta_Simp_registerSimproc___closed__2);
if (v_isShared_1888_ == 0)
{
lean_ctor_set(v___x_1887_, 5, v___x_1890_);
lean_ctor_set(v___x_1887_, 0, v___x_1889_);
v___x_1892_ = v___x_1887_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v___x_1889_);
lean_ctor_set(v_reuseFailAlloc_1896_, 1, v_nextMacroScope_1879_);
lean_ctor_set(v_reuseFailAlloc_1896_, 2, v_ngen_1880_);
lean_ctor_set(v_reuseFailAlloc_1896_, 3, v_auxDeclNGen_1881_);
lean_ctor_set(v_reuseFailAlloc_1896_, 4, v_traceState_1882_);
lean_ctor_set(v_reuseFailAlloc_1896_, 5, v___x_1890_);
lean_ctor_set(v_reuseFailAlloc_1896_, 6, v_messages_1883_);
lean_ctor_set(v_reuseFailAlloc_1896_, 7, v_infoState_1884_);
lean_ctor_set(v_reuseFailAlloc_1896_, 8, v_snapshotTasks_1885_);
v___x_1892_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; 
v___x_1893_ = lean_st_ref_set(v___y_1874_, v___x_1892_);
v___x_1894_ = lean_box(0);
v___x_1895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1895_, 0, v___x_1894_);
return v___x_1895_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Simp_addSimprocAttrCore_spec__0___redArg___boxed(lean_object* v_ext_1899_, lean_object* v_b_1900_, lean_object* v_kind_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_){
_start:
{
uint8_t v_kind_boxed_1905_; lean_object* v_res_1906_; 
v_kind_boxed_1905_ = lean_unbox(v_kind_1901_);
v_res_1906_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Simp_addSimprocAttrCore_spec__0___redArg(v_ext_1899_, v_b_1900_, v_kind_boxed_1905_, v___y_1902_, v___y_1903_);
lean_dec(v___y_1903_);
lean_dec_ref(v___y_1902_);
return v_res_1906_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Simp_addSimprocAttrCore_spec__0(lean_object* v_00_u03b1_1907_, lean_object* v_00_u03b2_1908_, lean_object* v_00_u03c3_1909_, lean_object* v_ext_1910_, lean_object* v_b_1911_, uint8_t v_kind_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_){
_start:
{
lean_object* v___x_1916_; 
v___x_1916_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Simp_addSimprocAttrCore_spec__0___redArg(v_ext_1910_, v_b_1911_, v_kind_1912_, v___y_1913_, v___y_1914_);
return v___x_1916_;
}
}
LEAN_EXPORT lean_object* l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Simp_addSimprocAttrCore_spec__0___boxed(lean_object* v_00_u03b1_1917_, lean_object* v_00_u03b2_1918_, lean_object* v_00_u03c3_1919_, lean_object* v_ext_1920_, lean_object* v_b_1921_, lean_object* v_kind_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_){
_start:
{
uint8_t v_kind_boxed_1926_; lean_object* v_res_1927_; 
v_kind_boxed_1926_ = lean_unbox(v_kind_1922_);
v_res_1927_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Simp_addSimprocAttrCore_spec__0(v_00_u03b1_1917_, v_00_u03b2_1918_, v_00_u03c3_1919_, v_ext_1920_, v_b_1921_, v_kind_boxed_1926_, v___y_1923_, v___y_1924_);
lean_dec(v___y_1924_);
lean_dec_ref(v___y_1923_);
return v_res_1927_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_addSimprocAttrCore___closed__1(void){
_start:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; 
v___x_1929_ = ((lean_object*)(l_Lean_Meta_Simp_addSimprocAttrCore___closed__0));
v___x_1930_ = l_Lean_stringToMessageData(v___x_1929_);
return v___x_1930_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_addSimprocAttrCore___closed__3(void){
_start:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; 
v___x_1932_ = ((lean_object*)(l_Lean_Meta_Simp_addSimprocAttrCore___closed__2));
v___x_1933_ = l_Lean_stringToMessageData(v___x_1932_);
return v___x_1933_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSimprocAttrCore(lean_object* v_ext_1934_, lean_object* v_declName_1935_, uint8_t v_kind_1936_, uint8_t v_post_1937_, lean_object* v_a_1938_, lean_object* v_a_1939_){
_start:
{
lean_object* v___x_1941_; lean_object* v_env_1942_; lean_object* v_options_1943_; lean_object* v_ref_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; 
v___x_1941_ = lean_st_ref_get(v_a_1939_);
v_env_1942_ = lean_ctor_get(v___x_1941_, 0);
lean_inc_ref(v_env_1942_);
lean_dec(v___x_1941_);
v_options_1943_ = lean_ctor_get(v_a_1938_, 2);
v_ref_1944_ = lean_ctor_get(v_a_1938_, 5);
lean_inc_ref(v_options_1943_);
v___x_1945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1945_, 0, v_env_1942_);
lean_ctor_set(v___x_1945_, 1, v_options_1943_);
lean_inc(v_declName_1935_);
v___x_1946_ = l_Lean_Meta_Simp_getSimprocFromDeclImpl(v_declName_1935_, v___x_1945_);
lean_dec_ref(v___x_1945_);
if (lean_obj_tag(v___x_1946_) == 0)
{
lean_object* v_a_1947_; lean_object* v___x_1948_; lean_object* v_a_1949_; 
v_a_1947_ = lean_ctor_get(v___x_1946_, 0);
lean_inc(v_a_1947_);
lean_dec_ref(v___x_1946_);
lean_inc(v_declName_1935_);
v___x_1948_ = l_Lean_Meta_Simp_getSimprocDeclKeys_x3f___redArg(v_declName_1935_, v_a_1939_);
v_a_1949_ = lean_ctor_get(v___x_1948_, 0);
lean_inc(v_a_1949_);
lean_dec_ref(v___x_1948_);
if (lean_obj_tag(v_a_1949_) == 1)
{
lean_object* v_val_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v_val_1950_ = lean_ctor_get(v_a_1949_, 0);
lean_inc(v_val_1950_);
lean_dec_ref(v_a_1949_);
v___x_1951_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1951_, 0, v_declName_1935_);
lean_ctor_set(v___x_1951_, 1, v_val_1950_);
lean_ctor_set_uint8(v___x_1951_, sizeof(void*)*2, v_post_1937_);
v___x_1952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1951_);
lean_ctor_set(v___x_1952_, 1, v_a_1947_);
v___x_1953_ = l_Lean_ScopedEnvExtension_add___at___00Lean_Meta_Simp_addSimprocAttrCore_spec__0___redArg(v_ext_1934_, v___x_1952_, v_kind_1936_, v_a_1938_, v_a_1939_);
return v___x_1953_;
}
else
{
lean_object* v___x_1954_; uint8_t v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; 
lean_dec(v_a_1949_);
lean_dec(v_a_1947_);
lean_dec_ref(v_ext_1934_);
v___x_1954_ = lean_obj_once(&l_Lean_Meta_Simp_addSimprocAttrCore___closed__1, &l_Lean_Meta_Simp_addSimprocAttrCore___closed__1_once, _init_l_Lean_Meta_Simp_addSimprocAttrCore___closed__1);
v___x_1955_ = 0;
v___x_1956_ = l_Lean_MessageData_ofConstName(v_declName_1935_, v___x_1955_);
v___x_1957_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1954_);
lean_ctor_set(v___x_1957_, 1, v___x_1956_);
v___x_1958_ = lean_obj_once(&l_Lean_Meta_Simp_addSimprocAttrCore___closed__3, &l_Lean_Meta_Simp_addSimprocAttrCore___closed__3_once, _init_l_Lean_Meta_Simp_addSimprocAttrCore___closed__3);
v___x_1959_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1959_, 0, v___x_1957_);
lean_ctor_set(v___x_1959_, 1, v___x_1958_);
v___x_1960_ = l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0___redArg(v___x_1959_, v_a_1938_, v_a_1939_);
return v___x_1960_;
}
}
else
{
lean_object* v_a_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1972_; 
lean_dec(v_declName_1935_);
lean_dec_ref(v_ext_1934_);
v_a_1961_ = lean_ctor_get(v___x_1946_, 0);
v_isSharedCheck_1972_ = !lean_is_exclusive(v___x_1946_);
if (v_isSharedCheck_1972_ == 0)
{
v___x_1963_ = v___x_1946_;
v_isShared_1964_ = v_isSharedCheck_1972_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_a_1961_);
lean_dec(v___x_1946_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1972_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1970_; 
v___x_1965_ = lean_io_error_to_string(v_a_1961_);
v___x_1966_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1966_, 0, v___x_1965_);
v___x_1967_ = l_Lean_MessageData_ofFormat(v___x_1966_);
lean_inc(v_ref_1944_);
v___x_1968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1968_, 0, v_ref_1944_);
lean_ctor_set(v___x_1968_, 1, v___x_1967_);
if (v_isShared_1964_ == 0)
{
lean_ctor_set(v___x_1963_, 0, v___x_1968_);
v___x_1970_ = v___x_1963_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v___x_1968_);
v___x_1970_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
return v___x_1970_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSimprocAttrCore___boxed(lean_object* v_ext_1973_, lean_object* v_declName_1974_, lean_object* v_kind_1975_, lean_object* v_post_1976_, lean_object* v_a_1977_, lean_object* v_a_1978_, lean_object* v_a_1979_){
_start:
{
uint8_t v_kind_boxed_1980_; uint8_t v_post_boxed_1981_; lean_object* v_res_1982_; 
v_kind_boxed_1980_ = lean_unbox(v_kind_1975_);
v_post_boxed_1981_ = lean_unbox(v_post_1976_);
v_res_1982_ = l_Lean_Meta_Simp_addSimprocAttrCore(v_ext_1973_, v_declName_1974_, v_kind_boxed_1980_, v_post_boxed_1981_, v_a_1977_, v_a_1978_);
lean_dec(v_a_1978_);
lean_dec_ref(v_a_1977_);
return v_res_1982_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1983_; 
v___x_1983_ = l_Lean_Meta_DiscrTree_instInhabited(lean_box(0));
return v___x_1983_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__3(lean_object* v_msg_1984_){
_start:
{
lean_object* v___x_1985_; lean_object* v___x_1986_; 
v___x_1985_ = lean_obj_once(&l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__3___closed__0, &l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__3___closed__0_once, _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__3___closed__0);
v___x_1986_ = lean_panic_fn_borrowed(v___x_1985_, v_msg_1984_);
return v___x_1986_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__6_spec__8___redArg(lean_object* v_x_1987_, lean_object* v_x_1988_, lean_object* v_x_1989_, lean_object* v_x_1990_){
_start:
{
lean_object* v_ks_1991_; lean_object* v_vs_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2016_; 
v_ks_1991_ = lean_ctor_get(v_x_1987_, 0);
v_vs_1992_ = lean_ctor_get(v_x_1987_, 1);
v_isSharedCheck_2016_ = !lean_is_exclusive(v_x_1987_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_1994_ = v_x_1987_;
v_isShared_1995_ = v_isSharedCheck_2016_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_vs_1992_);
lean_inc(v_ks_1991_);
lean_dec(v_x_1987_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2016_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1996_; uint8_t v___x_1997_; 
v___x_1996_ = lean_array_get_size(v_ks_1991_);
v___x_1997_ = lean_nat_dec_lt(v_x_1988_, v___x_1996_);
if (v___x_1997_ == 0)
{
lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2001_; 
lean_dec(v_x_1988_);
v___x_1998_ = lean_array_push(v_ks_1991_, v_x_1989_);
v___x_1999_ = lean_array_push(v_vs_1992_, v_x_1990_);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 1, v___x_1999_);
lean_ctor_set(v___x_1994_, 0, v___x_1998_);
v___x_2001_ = v___x_1994_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v___x_1998_);
lean_ctor_set(v_reuseFailAlloc_2002_, 1, v___x_1999_);
v___x_2001_ = v_reuseFailAlloc_2002_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
return v___x_2001_;
}
}
else
{
lean_object* v_k_x27_2003_; uint8_t v___x_2004_; 
v_k_x27_2003_ = lean_array_fget_borrowed(v_ks_1991_, v_x_1988_);
v___x_2004_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_1989_, v_k_x27_2003_);
if (v___x_2004_ == 0)
{
lean_object* v___x_2006_; 
if (v_isShared_1995_ == 0)
{
v___x_2006_ = v___x_1994_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v_ks_1991_);
lean_ctor_set(v_reuseFailAlloc_2010_, 1, v_vs_1992_);
v___x_2006_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
lean_object* v___x_2007_; lean_object* v___x_2008_; 
v___x_2007_ = lean_unsigned_to_nat(1u);
v___x_2008_ = lean_nat_add(v_x_1988_, v___x_2007_);
lean_dec(v_x_1988_);
v_x_1987_ = v___x_2006_;
v_x_1988_ = v___x_2008_;
goto _start;
}
}
else
{
lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2014_; 
v___x_2011_ = lean_array_fset(v_ks_1991_, v_x_1988_, v_x_1989_);
v___x_2012_ = lean_array_fset(v_vs_1992_, v_x_1988_, v_x_1990_);
lean_dec(v_x_1988_);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 1, v___x_2012_);
lean_ctor_set(v___x_1994_, 0, v___x_2011_);
v___x_2014_ = v___x_1994_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2015_; 
v_reuseFailAlloc_2015_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2015_, 0, v___x_2011_);
lean_ctor_set(v_reuseFailAlloc_2015_, 1, v___x_2012_);
v___x_2014_ = v_reuseFailAlloc_2015_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
return v___x_2014_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__6___redArg(lean_object* v_n_2017_, lean_object* v_k_2018_, lean_object* v_v_2019_){
_start:
{
lean_object* v___x_2020_; lean_object* v___x_2021_; 
v___x_2020_ = lean_unsigned_to_nat(0u);
v___x_2021_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__6_spec__8___redArg(v_n_2017_, v___x_2020_, v_k_2018_, v_v_2019_);
return v___x_2021_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_2022_; 
v___x_2022_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_2022_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3___redArg(lean_object* v_x_2023_, size_t v_x_2024_, size_t v_x_2025_, lean_object* v_x_2026_, lean_object* v_x_2027_){
_start:
{
if (lean_obj_tag(v_x_2023_) == 0)
{
lean_object* v_es_2028_; size_t v___x_2029_; size_t v___x_2030_; size_t v___x_2031_; size_t v___x_2032_; lean_object* v_j_2033_; lean_object* v___x_2034_; uint8_t v___x_2035_; 
v_es_2028_ = lean_ctor_get(v_x_2023_, 0);
v___x_2029_ = ((size_t)5ULL);
v___x_2030_ = ((size_t)1ULL);
v___x_2031_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1);
v___x_2032_ = lean_usize_land(v_x_2024_, v___x_2031_);
v_j_2033_ = lean_usize_to_nat(v___x_2032_);
v___x_2034_ = lean_array_get_size(v_es_2028_);
v___x_2035_ = lean_nat_dec_lt(v_j_2033_, v___x_2034_);
if (v___x_2035_ == 0)
{
lean_dec(v_j_2033_);
lean_dec(v_x_2027_);
lean_dec(v_x_2026_);
return v_x_2023_;
}
else
{
lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2072_; 
lean_inc_ref(v_es_2028_);
v_isSharedCheck_2072_ = !lean_is_exclusive(v_x_2023_);
if (v_isSharedCheck_2072_ == 0)
{
lean_object* v_unused_2073_; 
v_unused_2073_ = lean_ctor_get(v_x_2023_, 0);
lean_dec(v_unused_2073_);
v___x_2037_ = v_x_2023_;
v_isShared_2038_ = v_isSharedCheck_2072_;
goto v_resetjp_2036_;
}
else
{
lean_dec(v_x_2023_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2072_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
lean_object* v_v_2039_; lean_object* v___x_2040_; lean_object* v_xs_x27_2041_; lean_object* v___y_2043_; 
v_v_2039_ = lean_array_fget(v_es_2028_, v_j_2033_);
v___x_2040_ = lean_box(0);
v_xs_x27_2041_ = lean_array_fset(v_es_2028_, v_j_2033_, v___x_2040_);
switch(lean_obj_tag(v_v_2039_))
{
case 0:
{
lean_object* v_key_2048_; lean_object* v_val_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2059_; 
v_key_2048_ = lean_ctor_get(v_v_2039_, 0);
v_val_2049_ = lean_ctor_get(v_v_2039_, 1);
v_isSharedCheck_2059_ = !lean_is_exclusive(v_v_2039_);
if (v_isSharedCheck_2059_ == 0)
{
v___x_2051_ = v_v_2039_;
v_isShared_2052_ = v_isSharedCheck_2059_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_val_2049_);
lean_inc(v_key_2048_);
lean_dec(v_v_2039_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2059_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
uint8_t v___x_2053_; 
v___x_2053_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_2026_, v_key_2048_);
if (v___x_2053_ == 0)
{
lean_object* v___x_2054_; lean_object* v___x_2055_; 
lean_del_object(v___x_2051_);
v___x_2054_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2048_, v_val_2049_, v_x_2026_, v_x_2027_);
v___x_2055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2054_);
v___y_2043_ = v___x_2055_;
goto v___jp_2042_;
}
else
{
lean_object* v___x_2057_; 
lean_dec(v_val_2049_);
lean_dec(v_key_2048_);
if (v_isShared_2052_ == 0)
{
lean_ctor_set(v___x_2051_, 1, v_x_2027_);
lean_ctor_set(v___x_2051_, 0, v_x_2026_);
v___x_2057_ = v___x_2051_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2058_; 
v_reuseFailAlloc_2058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2058_, 0, v_x_2026_);
lean_ctor_set(v_reuseFailAlloc_2058_, 1, v_x_2027_);
v___x_2057_ = v_reuseFailAlloc_2058_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
v___y_2043_ = v___x_2057_;
goto v___jp_2042_;
}
}
}
}
case 1:
{
lean_object* v_node_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2070_; 
v_node_2060_ = lean_ctor_get(v_v_2039_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v_v_2039_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2062_ = v_v_2039_;
v_isShared_2063_ = v_isSharedCheck_2070_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_node_2060_);
lean_dec(v_v_2039_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2070_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
size_t v___x_2064_; size_t v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2068_; 
v___x_2064_ = lean_usize_shift_right(v_x_2024_, v___x_2029_);
v___x_2065_ = lean_usize_add(v_x_2025_, v___x_2030_);
v___x_2066_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3___redArg(v_node_2060_, v___x_2064_, v___x_2065_, v_x_2026_, v_x_2027_);
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 0, v___x_2066_);
v___x_2068_ = v___x_2062_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v___x_2066_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
v___y_2043_ = v___x_2068_;
goto v___jp_2042_;
}
}
}
default: 
{
lean_object* v___x_2071_; 
v___x_2071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2071_, 0, v_x_2026_);
lean_ctor_set(v___x_2071_, 1, v_x_2027_);
v___y_2043_ = v___x_2071_;
goto v___jp_2042_;
}
}
v___jp_2042_:
{
lean_object* v___x_2044_; lean_object* v___x_2046_; 
v___x_2044_ = lean_array_fset(v_xs_x27_2041_, v_j_2033_, v___y_2043_);
lean_dec(v_j_2033_);
if (v_isShared_2038_ == 0)
{
lean_ctor_set(v___x_2037_, 0, v___x_2044_);
v___x_2046_ = v___x_2037_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v___x_2044_);
v___x_2046_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
return v___x_2046_;
}
}
}
}
}
else
{
lean_object* v_ks_2074_; lean_object* v_vs_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2095_; 
v_ks_2074_ = lean_ctor_get(v_x_2023_, 0);
v_vs_2075_ = lean_ctor_get(v_x_2023_, 1);
v_isSharedCheck_2095_ = !lean_is_exclusive(v_x_2023_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2077_ = v_x_2023_;
v_isShared_2078_ = v_isSharedCheck_2095_;
goto v_resetjp_2076_;
}
else
{
lean_inc(v_vs_2075_);
lean_inc(v_ks_2074_);
lean_dec(v_x_2023_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2095_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v___x_2080_; 
if (v_isShared_2078_ == 0)
{
v___x_2080_ = v___x_2077_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2094_; 
v_reuseFailAlloc_2094_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2094_, 0, v_ks_2074_);
lean_ctor_set(v_reuseFailAlloc_2094_, 1, v_vs_2075_);
v___x_2080_ = v_reuseFailAlloc_2094_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
lean_object* v_newNode_2081_; uint8_t v___y_2083_; size_t v___x_2089_; uint8_t v___x_2090_; 
v_newNode_2081_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__6___redArg(v___x_2080_, v_x_2026_, v_x_2027_);
v___x_2089_ = ((size_t)7ULL);
v___x_2090_ = lean_usize_dec_le(v___x_2089_, v_x_2025_);
if (v___x_2090_ == 0)
{
lean_object* v___x_2091_; lean_object* v___x_2092_; uint8_t v___x_2093_; 
v___x_2091_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2081_);
v___x_2092_ = lean_unsigned_to_nat(4u);
v___x_2093_ = lean_nat_dec_lt(v___x_2091_, v___x_2092_);
lean_dec(v___x_2091_);
v___y_2083_ = v___x_2093_;
goto v___jp_2082_;
}
else
{
v___y_2083_ = v___x_2090_;
goto v___jp_2082_;
}
v___jp_2082_:
{
if (v___y_2083_ == 0)
{
lean_object* v_ks_2084_; lean_object* v_vs_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; 
v_ks_2084_ = lean_ctor_get(v_newNode_2081_, 0);
lean_inc_ref(v_ks_2084_);
v_vs_2085_ = lean_ctor_get(v_newNode_2081_, 1);
lean_inc_ref(v_vs_2085_);
lean_dec_ref(v_newNode_2081_);
v___x_2086_ = lean_unsigned_to_nat(0u);
v___x_2087_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3___redArg___closed__0);
v___x_2088_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__7___redArg(v_x_2025_, v_ks_2084_, v_vs_2085_, v___x_2086_, v___x_2087_);
lean_dec_ref(v_vs_2085_);
lean_dec_ref(v_ks_2084_);
return v___x_2088_;
}
else
{
return v_newNode_2081_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__7___redArg(size_t v_depth_2096_, lean_object* v_keys_2097_, lean_object* v_vals_2098_, lean_object* v_i_2099_, lean_object* v_entries_2100_){
_start:
{
lean_object* v___x_2101_; uint8_t v___x_2102_; 
v___x_2101_ = lean_array_get_size(v_keys_2097_);
v___x_2102_ = lean_nat_dec_lt(v_i_2099_, v___x_2101_);
if (v___x_2102_ == 0)
{
lean_dec(v_i_2099_);
return v_entries_2100_;
}
else
{
lean_object* v_k_2103_; lean_object* v_v_2104_; uint64_t v___x_2105_; size_t v_h_2106_; size_t v___x_2107_; lean_object* v___x_2108_; size_t v___x_2109_; size_t v___x_2110_; size_t v___x_2111_; size_t v_h_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; 
v_k_2103_ = lean_array_fget_borrowed(v_keys_2097_, v_i_2099_);
v_v_2104_ = lean_array_fget_borrowed(v_vals_2098_, v_i_2099_);
v___x_2105_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_2103_);
v_h_2106_ = lean_uint64_to_usize(v___x_2105_);
v___x_2107_ = ((size_t)5ULL);
v___x_2108_ = lean_unsigned_to_nat(1u);
v___x_2109_ = ((size_t)1ULL);
v___x_2110_ = lean_usize_sub(v_depth_2096_, v___x_2109_);
v___x_2111_ = lean_usize_mul(v___x_2107_, v___x_2110_);
v_h_2112_ = lean_usize_shift_right(v_h_2106_, v___x_2111_);
v___x_2113_ = lean_nat_add(v_i_2099_, v___x_2108_);
lean_dec(v_i_2099_);
lean_inc(v_v_2104_);
lean_inc(v_k_2103_);
v___x_2114_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3___redArg(v_entries_2100_, v_h_2112_, v_depth_2096_, v_k_2103_, v_v_2104_);
v_i_2099_ = v___x_2113_;
v_entries_2100_ = v___x_2114_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__7___redArg___boxed(lean_object* v_depth_2116_, lean_object* v_keys_2117_, lean_object* v_vals_2118_, lean_object* v_i_2119_, lean_object* v_entries_2120_){
_start:
{
size_t v_depth_boxed_2121_; lean_object* v_res_2122_; 
v_depth_boxed_2121_ = lean_unbox_usize(v_depth_2116_);
lean_dec(v_depth_2116_);
v_res_2122_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__7___redArg(v_depth_boxed_2121_, v_keys_2117_, v_vals_2118_, v_i_2119_, v_entries_2120_);
lean_dec_ref(v_vals_2118_);
lean_dec_ref(v_keys_2117_);
return v_res_2122_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_x_2123_, lean_object* v_x_2124_, lean_object* v_x_2125_, lean_object* v_x_2126_, lean_object* v_x_2127_){
_start:
{
size_t v_x_1681__boxed_2128_; size_t v_x_1682__boxed_2129_; lean_object* v_res_2130_; 
v_x_1681__boxed_2128_ = lean_unbox_usize(v_x_2124_);
lean_dec(v_x_2124_);
v_x_1682__boxed_2129_ = lean_unbox_usize(v_x_2125_);
lean_dec(v_x_2125_);
v_res_2130_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3___redArg(v_x_2123_, v_x_1681__boxed_2128_, v_x_1682__boxed_2129_, v_x_2126_, v_x_2127_);
return v_res_2130_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1___redArg(lean_object* v_x_2131_, lean_object* v_x_2132_, lean_object* v_x_2133_){
_start:
{
uint64_t v___x_2134_; size_t v___x_2135_; size_t v___x_2136_; lean_object* v___x_2137_; 
v___x_2134_ = l_Lean_Meta_DiscrTree_Key_hash(v_x_2132_);
v___x_2135_ = lean_uint64_to_usize(v___x_2134_);
v___x_2136_ = ((size_t)1ULL);
v___x_2137_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3___redArg(v_x_2131_, v___x_2135_, v___x_2136_, v_x_2132_, v_x_2133_);
return v___x_2137_;
}
}
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__1(lean_object* v_a_2138_, lean_object* v_b_2139_){
_start:
{
lean_object* v_fst_2140_; lean_object* v_fst_2141_; uint8_t v___x_2142_; 
v_fst_2140_ = lean_ctor_get(v_a_2138_, 0);
v_fst_2141_ = lean_ctor_get(v_b_2139_, 0);
v___x_2142_ = l_Lean_Meta_DiscrTree_Key_lt(v_fst_2140_, v_fst_2141_);
return v___x_2142_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__1___boxed(lean_object* v_a_2143_, lean_object* v_b_2144_){
_start:
{
uint8_t v_res_2145_; lean_object* v_r_2146_; 
v_res_2145_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__1(v_a_2143_, v_b_2144_);
lean_dec_ref(v_b_2144_);
lean_dec_ref(v_a_2143_);
v_r_2146_ = lean_box(v_res_2145_);
return v_r_2146_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__0(lean_object* v_x_2147_, lean_object* v_keys_2148_, lean_object* v_v_2149_, lean_object* v_k_2150_, lean_object* v_x_2151_){
_start:
{
lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v_c_2154_; lean_object* v___x_2155_; 
v___x_2152_ = lean_unsigned_to_nat(1u);
v___x_2153_ = lean_nat_add(v_x_2147_, v___x_2152_);
v_c_2154_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_2148_, v_v_2149_, v___x_2153_);
lean_dec(v___x_2153_);
v___x_2155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2155_, 0, v_k_2150_);
lean_ctor_set(v___x_2155_, 1, v_c_2154_);
return v___x_2155_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__0___boxed(lean_object* v_x_2156_, lean_object* v_keys_2157_, lean_object* v_v_2158_, lean_object* v_k_2159_, lean_object* v_x_2160_){
_start:
{
lean_object* v_res_2161_; 
v_res_2161_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__0(v_x_2156_, v_keys_2157_, v_v_2158_, v_k_2159_, v_x_2160_);
lean_dec_ref(v_keys_2157_);
lean_dec(v_x_2156_);
return v_res_2161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__5_spec__10(lean_object* v_vs_2162_, lean_object* v_v_2163_, lean_object* v_i_2164_){
_start:
{
lean_object* v___x_2165_; uint8_t v___x_2166_; 
v___x_2165_ = lean_array_get_size(v_vs_2162_);
v___x_2166_ = lean_nat_dec_lt(v_i_2164_, v___x_2165_);
if (v___x_2166_ == 0)
{
lean_object* v___x_2167_; 
lean_dec(v_i_2164_);
v___x_2167_ = lean_array_push(v_vs_2162_, v_v_2163_);
return v___x_2167_;
}
else
{
lean_object* v_toSimprocOLeanEntry_2168_; lean_object* v_declName_2169_; lean_object* v___x_2170_; lean_object* v_toSimprocOLeanEntry_2171_; lean_object* v_declName_2172_; uint8_t v___x_2173_; 
v_toSimprocOLeanEntry_2168_ = lean_ctor_get(v_v_2163_, 0);
v_declName_2169_ = lean_ctor_get(v_toSimprocOLeanEntry_2168_, 0);
v___x_2170_ = lean_array_fget_borrowed(v_vs_2162_, v_i_2164_);
v_toSimprocOLeanEntry_2171_ = lean_ctor_get(v___x_2170_, 0);
v_declName_2172_ = lean_ctor_get(v_toSimprocOLeanEntry_2171_, 0);
v___x_2173_ = lean_name_eq(v_declName_2169_, v_declName_2172_);
if (v___x_2173_ == 0)
{
lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2174_ = lean_unsigned_to_nat(1u);
v___x_2175_ = lean_nat_add(v_i_2164_, v___x_2174_);
lean_dec(v_i_2164_);
v_i_2164_ = v___x_2175_;
goto _start;
}
else
{
lean_object* v___x_2177_; 
v___x_2177_ = lean_array_fset(v_vs_2162_, v_i_2164_, v_v_2163_);
lean_dec(v_i_2164_);
return v___x_2177_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__5(lean_object* v_vs_2178_, lean_object* v_v_2179_){
_start:
{
lean_object* v___x_2180_; lean_object* v___x_2181_; 
v___x_2180_ = lean_unsigned_to_nat(0u);
v___x_2181_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__5_spec__10(v_vs_2178_, v_v_2179_, v___x_2180_);
return v___x_2181_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6_spec__12___redArg(lean_object* v_x_2186_, lean_object* v_keys_2187_, lean_object* v_v_2188_, lean_object* v_k_2189_, lean_object* v_as_2190_, lean_object* v_k_2191_, lean_object* v_x_2192_, lean_object* v_x_2193_){
_start:
{
lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v_mid_2196_; lean_object* v_midVal_2197_; uint8_t v___x_2198_; 
v___x_2194_ = lean_nat_add(v_x_2192_, v_x_2193_);
v___x_2195_ = lean_unsigned_to_nat(1u);
v_mid_2196_ = lean_nat_shiftr(v___x_2194_, v___x_2195_);
lean_dec(v___x_2194_);
v_midVal_2197_ = lean_array_fget(v_as_2190_, v_mid_2196_);
v___x_2198_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__1(v_midVal_2197_, v_k_2191_);
if (v___x_2198_ == 0)
{
uint8_t v___x_2199_; 
lean_dec(v_x_2193_);
v___x_2199_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__1(v_k_2191_, v_midVal_2197_);
if (v___x_2199_ == 0)
{
lean_object* v___x_2200_; uint8_t v___x_2201_; 
lean_dec(v_x_2192_);
v___x_2200_ = lean_array_get_size(v_as_2190_);
v___x_2201_ = lean_nat_dec_lt(v_mid_2196_, v___x_2200_);
if (v___x_2201_ == 0)
{
lean_dec(v_midVal_2197_);
lean_dec(v_mid_2196_);
lean_dec(v_k_2189_);
lean_dec_ref(v_v_2188_);
return v_as_2190_;
}
else
{
lean_object* v_snd_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2214_; 
v_snd_2202_ = lean_ctor_get(v_midVal_2197_, 1);
v_isSharedCheck_2214_ = !lean_is_exclusive(v_midVal_2197_);
if (v_isSharedCheck_2214_ == 0)
{
lean_object* v_unused_2215_; 
v_unused_2215_ = lean_ctor_get(v_midVal_2197_, 0);
lean_dec(v_unused_2215_);
v___x_2204_ = v_midVal_2197_;
v_isShared_2205_ = v_isSharedCheck_2214_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_snd_2202_);
lean_dec(v_midVal_2197_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2214_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v___x_2206_; lean_object* v_xs_x27_2207_; lean_object* v___x_2208_; lean_object* v_c_2209_; lean_object* v___x_2211_; 
v___x_2206_ = lean_box(0);
v_xs_x27_2207_ = lean_array_fset(v_as_2190_, v_mid_2196_, v___x_2206_);
v___x_2208_ = lean_nat_add(v_x_2186_, v___x_2195_);
v_c_2209_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2(v_keys_2187_, v_v_2188_, v___x_2208_, v_snd_2202_);
lean_dec(v___x_2208_);
if (v_isShared_2205_ == 0)
{
lean_ctor_set(v___x_2204_, 1, v_c_2209_);
lean_ctor_set(v___x_2204_, 0, v_k_2189_);
v___x_2211_ = v___x_2204_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2213_; 
v_reuseFailAlloc_2213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2213_, 0, v_k_2189_);
lean_ctor_set(v_reuseFailAlloc_2213_, 1, v_c_2209_);
v___x_2211_ = v_reuseFailAlloc_2213_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
lean_object* v___x_2212_; 
v___x_2212_ = lean_array_fset(v_xs_x27_2207_, v_mid_2196_, v___x_2211_);
lean_dec(v_mid_2196_);
return v___x_2212_;
}
}
}
}
else
{
lean_dec(v_midVal_2197_);
v_x_2193_ = v_mid_2196_;
goto _start;
}
}
else
{
uint8_t v___x_2217_; 
lean_dec(v_midVal_2197_);
v___x_2217_ = lean_nat_dec_eq(v_mid_2196_, v_x_2192_);
if (v___x_2217_ == 0)
{
lean_dec(v_x_2192_);
v_x_2192_ = v_mid_2196_;
goto _start;
}
else
{
lean_object* v___x_2219_; lean_object* v_c_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v_j_2223_; lean_object* v_as_2224_; lean_object* v___x_2225_; 
lean_dec(v_mid_2196_);
lean_dec(v_x_2193_);
v___x_2219_ = lean_nat_add(v_x_2186_, v___x_2195_);
v_c_2220_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_2187_, v_v_2188_, v___x_2219_);
lean_dec(v___x_2219_);
v___x_2221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2221_, 0, v_k_2189_);
lean_ctor_set(v___x_2221_, 1, v_c_2220_);
v___x_2222_ = lean_nat_add(v_x_2192_, v___x_2195_);
lean_dec(v_x_2192_);
v_j_2223_ = lean_array_get_size(v_as_2190_);
v_as_2224_ = lean_array_push(v_as_2190_, v___x_2221_);
v___x_2225_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_2222_, v_as_2224_, v_j_2223_);
lean_dec(v___x_2222_);
return v___x_2225_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6(lean_object* v_x_2226_, lean_object* v_keys_2227_, lean_object* v_v_2228_, lean_object* v_k_2229_, lean_object* v_as_2230_, lean_object* v_k_2231_){
_start:
{
lean_object* v___x_2232_; lean_object* v___x_2233_; uint8_t v___x_2234_; 
v___x_2232_ = lean_array_get_size(v_as_2230_);
v___x_2233_ = lean_unsigned_to_nat(0u);
v___x_2234_ = lean_nat_dec_eq(v___x_2232_, v___x_2233_);
if (v___x_2234_ == 0)
{
lean_object* v___x_2235_; uint8_t v___x_2236_; 
v___x_2235_ = lean_array_fget_borrowed(v_as_2230_, v___x_2233_);
v___x_2236_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__1(v_k_2231_, v___x_2235_);
if (v___x_2236_ == 0)
{
uint8_t v___x_2237_; 
v___x_2237_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__1(v___x_2235_, v_k_2231_);
if (v___x_2237_ == 0)
{
uint8_t v___x_2238_; 
v___x_2238_ = lean_nat_dec_lt(v___x_2233_, v___x_2232_);
if (v___x_2238_ == 0)
{
lean_dec(v_k_2229_);
lean_dec_ref(v_v_2228_);
return v_as_2230_;
}
else
{
lean_object* v___x_2239_; lean_object* v_xs_x27_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; 
lean_inc(v___x_2235_);
v___x_2239_ = lean_box(0);
v_xs_x27_2240_ = lean_array_fset(v_as_2230_, v___x_2233_, v___x_2239_);
v___x_2241_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__2(v_x_2226_, v_keys_2227_, v_v_2228_, v_k_2229_, v___x_2235_);
v___x_2242_ = lean_array_fset(v_xs_x27_2240_, v___x_2233_, v___x_2241_);
return v___x_2242_;
}
}
else
{
lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; uint8_t v___x_2246_; 
v___x_2243_ = lean_unsigned_to_nat(1u);
v___x_2244_ = lean_nat_sub(v___x_2232_, v___x_2243_);
v___x_2245_ = lean_array_fget_borrowed(v_as_2230_, v___x_2244_);
v___x_2246_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__1(v___x_2245_, v_k_2231_);
if (v___x_2246_ == 0)
{
uint8_t v___x_2247_; 
v___x_2247_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__1(v_k_2231_, v___x_2245_);
if (v___x_2247_ == 0)
{
uint8_t v___x_2248_; 
v___x_2248_ = lean_nat_dec_lt(v___x_2244_, v___x_2232_);
if (v___x_2248_ == 0)
{
lean_dec(v___x_2244_);
lean_dec(v_k_2229_);
lean_dec_ref(v_v_2228_);
return v_as_2230_;
}
else
{
lean_object* v___x_2249_; lean_object* v_xs_x27_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; 
lean_inc(v___x_2245_);
v___x_2249_ = lean_box(0);
v_xs_x27_2250_ = lean_array_fset(v_as_2230_, v___x_2244_, v___x_2249_);
v___x_2251_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__2(v_x_2226_, v_keys_2227_, v_v_2228_, v_k_2229_, v___x_2245_);
v___x_2252_ = lean_array_fset(v_xs_x27_2250_, v___x_2244_, v___x_2251_);
lean_dec(v___x_2244_);
return v___x_2252_;
}
}
else
{
lean_object* v___x_2253_; 
v___x_2253_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6_spec__12___redArg(v_x_2226_, v_keys_2227_, v_v_2228_, v_k_2229_, v_as_2230_, v_k_2231_, v___x_2233_, v___x_2244_);
return v___x_2253_;
}
}
else
{
lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; 
lean_dec(v___x_2244_);
v___x_2254_ = lean_box(0);
v___x_2255_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__0(v_x_2226_, v_keys_2227_, v_v_2228_, v_k_2229_, v___x_2254_);
v___x_2256_ = lean_array_push(v_as_2230_, v___x_2255_);
return v___x_2256_;
}
}
}
else
{
lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v_as_2259_; lean_object* v___x_2260_; 
v___x_2257_ = lean_box(0);
v___x_2258_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__0(v_x_2226_, v_keys_2227_, v_v_2228_, v_k_2229_, v___x_2257_);
v_as_2259_ = lean_array_push(v_as_2230_, v___x_2258_);
v___x_2260_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_2233_, v_as_2259_, v___x_2232_);
return v___x_2260_;
}
}
else
{
lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; 
v___x_2261_ = lean_box(0);
v___x_2262_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__0(v_x_2226_, v_keys_2227_, v_v_2228_, v_k_2229_, v___x_2261_);
v___x_2263_ = lean_array_push(v_as_2230_, v___x_2262_);
return v___x_2263_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2(lean_object* v_keys_2264_, lean_object* v_v_2265_, lean_object* v_x_2266_, lean_object* v_x_2267_){
_start:
{
lean_object* v_vs_2268_; lean_object* v_children_2269_; lean_object* v___x_2271_; uint8_t v_isShared_2272_; uint8_t v_isSharedCheck_2286_; 
v_vs_2268_ = lean_ctor_get(v_x_2267_, 0);
v_children_2269_ = lean_ctor_get(v_x_2267_, 1);
v_isSharedCheck_2286_ = !lean_is_exclusive(v_x_2267_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2271_ = v_x_2267_;
v_isShared_2272_ = v_isSharedCheck_2286_;
goto v_resetjp_2270_;
}
else
{
lean_inc(v_children_2269_);
lean_inc(v_vs_2268_);
lean_dec(v_x_2267_);
v___x_2271_ = lean_box(0);
v_isShared_2272_ = v_isSharedCheck_2286_;
goto v_resetjp_2270_;
}
v_resetjp_2270_:
{
lean_object* v___x_2273_; uint8_t v___x_2274_; 
v___x_2273_ = lean_array_get_size(v_keys_2264_);
v___x_2274_ = lean_nat_dec_lt(v_x_2266_, v___x_2273_);
if (v___x_2274_ == 0)
{
lean_object* v___x_2275_; lean_object* v___x_2277_; 
v___x_2275_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__5(v_vs_2268_, v_v_2265_);
if (v_isShared_2272_ == 0)
{
lean_ctor_set(v___x_2271_, 0, v___x_2275_);
v___x_2277_ = v___x_2271_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v___x_2275_);
lean_ctor_set(v_reuseFailAlloc_2278_, 1, v_children_2269_);
v___x_2277_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
return v___x_2277_;
}
}
else
{
lean_object* v_k_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v_c_2282_; lean_object* v___x_2284_; 
v_k_2279_ = lean_array_fget_borrowed(v_keys_2264_, v_x_2266_);
v___x_2280_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2___closed__1));
lean_inc(v_k_2279_);
v___x_2281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2281_, 0, v_k_2279_);
lean_ctor_set(v___x_2281_, 1, v___x_2280_);
lean_inc(v_k_2279_);
v_c_2282_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6(v_x_2266_, v_keys_2264_, v_v_2265_, v_k_2279_, v_children_2269_, v___x_2281_);
lean_dec_ref(v___x_2281_);
if (v_isShared_2272_ == 0)
{
lean_ctor_set(v___x_2271_, 1, v_c_2282_);
v___x_2284_ = v___x_2271_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v_vs_2268_);
lean_ctor_set(v_reuseFailAlloc_2285_, 1, v_c_2282_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
return v___x_2284_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__2(lean_object* v_x_2287_, lean_object* v_keys_2288_, lean_object* v_v_2289_, lean_object* v_k_2290_, lean_object* v_x_2291_){
_start:
{
lean_object* v_snd_2292_; lean_object* v___x_2294_; uint8_t v_isShared_2295_; uint8_t v_isSharedCheck_2302_; 
v_snd_2292_ = lean_ctor_get(v_x_2291_, 1);
v_isSharedCheck_2302_ = !lean_is_exclusive(v_x_2291_);
if (v_isSharedCheck_2302_ == 0)
{
lean_object* v_unused_2303_; 
v_unused_2303_ = lean_ctor_get(v_x_2291_, 0);
lean_dec(v_unused_2303_);
v___x_2294_ = v_x_2291_;
v_isShared_2295_ = v_isSharedCheck_2302_;
goto v_resetjp_2293_;
}
else
{
lean_inc(v_snd_2292_);
lean_dec(v_x_2291_);
v___x_2294_ = lean_box(0);
v_isShared_2295_ = v_isSharedCheck_2302_;
goto v_resetjp_2293_;
}
v_resetjp_2293_:
{
lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v_c_2298_; lean_object* v___x_2300_; 
v___x_2296_ = lean_unsigned_to_nat(1u);
v___x_2297_ = lean_nat_add(v_x_2287_, v___x_2296_);
v_c_2298_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2(v_keys_2288_, v_v_2289_, v___x_2297_, v_snd_2292_);
lean_dec(v___x_2297_);
if (v_isShared_2295_ == 0)
{
lean_ctor_set(v___x_2294_, 1, v_c_2298_);
lean_ctor_set(v___x_2294_, 0, v_k_2290_);
v___x_2300_ = v___x_2294_;
goto v_reusejp_2299_;
}
else
{
lean_object* v_reuseFailAlloc_2301_; 
v_reuseFailAlloc_2301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2301_, 0, v_k_2290_);
lean_ctor_set(v_reuseFailAlloc_2301_, 1, v_c_2298_);
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
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__2___boxed(lean_object* v_x_2304_, lean_object* v_keys_2305_, lean_object* v_v_2306_, lean_object* v_k_2307_, lean_object* v_x_2308_){
_start:
{
lean_object* v_res_2309_; 
v_res_2309_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___lam__2(v_x_2304_, v_keys_2305_, v_v_2306_, v_k_2307_, v_x_2308_);
lean_dec_ref(v_keys_2305_);
lean_dec(v_x_2304_);
return v_res_2309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2___boxed(lean_object* v_keys_2310_, lean_object* v_v_2311_, lean_object* v_x_2312_, lean_object* v_x_2313_){
_start:
{
lean_object* v_res_2314_; 
v_res_2314_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2(v_keys_2310_, v_v_2311_, v_x_2312_, v_x_2313_);
lean_dec(v_x_2312_);
lean_dec_ref(v_keys_2310_);
return v_res_2314_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6_spec__12___redArg___boxed(lean_object* v_x_2315_, lean_object* v_keys_2316_, lean_object* v_v_2317_, lean_object* v_k_2318_, lean_object* v_as_2319_, lean_object* v_k_2320_, lean_object* v_x_2321_, lean_object* v_x_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6_spec__12___redArg(v_x_2315_, v_keys_2316_, v_v_2317_, v_k_2318_, v_as_2319_, v_k_2320_, v_x_2321_, v_x_2322_);
lean_dec_ref(v_k_2320_);
lean_dec_ref(v_keys_2316_);
lean_dec(v_x_2315_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6___boxed(lean_object* v_x_2324_, lean_object* v_keys_2325_, lean_object* v_v_2326_, lean_object* v_k_2327_, lean_object* v_as_2328_, lean_object* v_k_2329_){
_start:
{
lean_object* v_res_2330_; 
v_res_2330_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6(v_x_2324_, v_keys_2325_, v_v_2326_, v_k_2327_, v_as_2328_, v_k_2329_);
lean_dec_ref(v_k_2329_);
lean_dec_ref(v_keys_2325_);
lean_dec(v_x_2324_);
return v_res_2330_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_keys_2331_, lean_object* v_vals_2332_, lean_object* v_i_2333_, lean_object* v_k_2334_){
_start:
{
lean_object* v___x_2335_; uint8_t v___x_2336_; 
v___x_2335_ = lean_array_get_size(v_keys_2331_);
v___x_2336_ = lean_nat_dec_lt(v_i_2333_, v___x_2335_);
if (v___x_2336_ == 0)
{
lean_object* v___x_2337_; 
lean_dec(v_i_2333_);
v___x_2337_ = lean_box(0);
return v___x_2337_;
}
else
{
lean_object* v_k_x27_2338_; uint8_t v___x_2339_; 
v_k_x27_2338_ = lean_array_fget_borrowed(v_keys_2331_, v_i_2333_);
v___x_2339_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_k_2334_, v_k_x27_2338_);
if (v___x_2339_ == 0)
{
lean_object* v___x_2340_; lean_object* v___x_2341_; 
v___x_2340_ = lean_unsigned_to_nat(1u);
v___x_2341_ = lean_nat_add(v_i_2333_, v___x_2340_);
lean_dec(v_i_2333_);
v_i_2333_ = v___x_2341_;
goto _start;
}
else
{
lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2343_ = lean_array_fget_borrowed(v_vals_2332_, v_i_2333_);
lean_dec(v_i_2333_);
lean_inc(v___x_2343_);
v___x_2344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2343_);
return v___x_2344_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_keys_2345_, lean_object* v_vals_2346_, lean_object* v_i_2347_, lean_object* v_k_2348_){
_start:
{
lean_object* v_res_2349_; 
v_res_2349_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1_spec__3___redArg(v_keys_2345_, v_vals_2346_, v_i_2347_, v_k_2348_);
lean_dec(v_k_2348_);
lean_dec_ref(v_vals_2346_);
lean_dec_ref(v_keys_2345_);
return v_res_2349_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1___redArg(lean_object* v_x_2350_, size_t v_x_2351_, lean_object* v_x_2352_){
_start:
{
if (lean_obj_tag(v_x_2350_) == 0)
{
lean_object* v_es_2353_; lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2374_; 
v_es_2353_ = lean_ctor_get(v_x_2350_, 0);
v_isSharedCheck_2374_ = !lean_is_exclusive(v_x_2350_);
if (v_isSharedCheck_2374_ == 0)
{
v___x_2355_ = v_x_2350_;
v_isShared_2356_ = v_isSharedCheck_2374_;
goto v_resetjp_2354_;
}
else
{
lean_inc(v_es_2353_);
lean_dec(v_x_2350_);
v___x_2355_ = lean_box(0);
v_isShared_2356_ = v_isSharedCheck_2374_;
goto v_resetjp_2354_;
}
v_resetjp_2354_:
{
lean_object* v___x_2357_; size_t v___x_2358_; size_t v___x_2359_; size_t v___x_2360_; lean_object* v_j_2361_; lean_object* v___x_2362_; 
v___x_2357_ = lean_box(2);
v___x_2358_ = ((size_t)5ULL);
v___x_2359_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0_spec__0___redArg___closed__1);
v___x_2360_ = lean_usize_land(v_x_2351_, v___x_2359_);
v_j_2361_ = lean_usize_to_nat(v___x_2360_);
v___x_2362_ = lean_array_get(v___x_2357_, v_es_2353_, v_j_2361_);
lean_dec(v_j_2361_);
lean_dec_ref(v_es_2353_);
switch(lean_obj_tag(v___x_2362_))
{
case 0:
{
lean_object* v_key_2363_; lean_object* v_val_2364_; uint8_t v___x_2365_; 
v_key_2363_ = lean_ctor_get(v___x_2362_, 0);
lean_inc(v_key_2363_);
v_val_2364_ = lean_ctor_get(v___x_2362_, 1);
lean_inc(v_val_2364_);
lean_dec_ref(v___x_2362_);
v___x_2365_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_2352_, v_key_2363_);
lean_dec(v_key_2363_);
if (v___x_2365_ == 0)
{
lean_object* v___x_2366_; 
lean_dec(v_val_2364_);
lean_del_object(v___x_2355_);
v___x_2366_ = lean_box(0);
return v___x_2366_;
}
else
{
lean_object* v___x_2368_; 
if (v_isShared_2356_ == 0)
{
lean_ctor_set_tag(v___x_2355_, 1);
lean_ctor_set(v___x_2355_, 0, v_val_2364_);
v___x_2368_ = v___x_2355_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v_val_2364_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
return v___x_2368_;
}
}
}
case 1:
{
lean_object* v_node_2370_; size_t v___x_2371_; 
lean_del_object(v___x_2355_);
v_node_2370_ = lean_ctor_get(v___x_2362_, 0);
lean_inc(v_node_2370_);
lean_dec_ref(v___x_2362_);
v___x_2371_ = lean_usize_shift_right(v_x_2351_, v___x_2358_);
v_x_2350_ = v_node_2370_;
v_x_2351_ = v___x_2371_;
goto _start;
}
default: 
{
lean_object* v___x_2373_; 
lean_del_object(v___x_2355_);
v___x_2373_ = lean_box(0);
return v___x_2373_;
}
}
}
}
else
{
lean_object* v_ks_2375_; lean_object* v_vs_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; 
v_ks_2375_ = lean_ctor_get(v_x_2350_, 0);
lean_inc_ref(v_ks_2375_);
v_vs_2376_ = lean_ctor_get(v_x_2350_, 1);
lean_inc_ref(v_vs_2376_);
lean_dec_ref(v_x_2350_);
v___x_2377_ = lean_unsigned_to_nat(0u);
v___x_2378_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1_spec__3___redArg(v_ks_2375_, v_vs_2376_, v___x_2377_, v_x_2352_);
lean_dec_ref(v_vs_2376_);
lean_dec_ref(v_ks_2375_);
return v___x_2378_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_2379_, lean_object* v_x_2380_, lean_object* v_x_2381_){
_start:
{
size_t v_x_2115__boxed_2382_; lean_object* v_res_2383_; 
v_x_2115__boxed_2382_ = lean_unbox_usize(v_x_2380_);
lean_dec(v_x_2380_);
v_res_2383_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1___redArg(v_x_2379_, v_x_2115__boxed_2382_, v_x_2381_);
lean_dec(v_x_2381_);
return v_res_2383_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0___redArg(lean_object* v_x_2384_, lean_object* v_x_2385_){
_start:
{
uint64_t v___x_2386_; size_t v___x_2387_; lean_object* v___x_2388_; 
v___x_2386_ = l_Lean_Meta_DiscrTree_Key_hash(v_x_2385_);
v___x_2387_ = lean_uint64_to_usize(v___x_2386_);
v___x_2388_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1___redArg(v_x_2384_, v___x_2387_, v_x_2385_);
return v___x_2388_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0___redArg___boxed(lean_object* v_x_2389_, lean_object* v_x_2390_){
_start:
{
lean_object* v_res_2391_; 
v_res_2391_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0___redArg(v_x_2389_, v_x_2390_);
lean_dec(v_x_2390_);
return v_res_2391_;
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; 
v___x_2395_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___closed__2));
v___x_2396_ = lean_unsigned_to_nat(23u);
v___x_2397_ = lean_unsigned_to_nat(166u);
v___x_2398_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___closed__1));
v___x_2399_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___closed__0));
v___x_2400_ = l_mkPanicMessageWithDecl(v___x_2399_, v___x_2398_, v___x_2397_, v___x_2396_, v___x_2395_);
return v___x_2400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0(lean_object* v_d_2401_, lean_object* v_keys_2402_, lean_object* v_v_2403_){
_start:
{
lean_object* v___x_2404_; lean_object* v___x_2405_; uint8_t v___x_2406_; 
v___x_2404_ = lean_array_get_size(v_keys_2402_);
v___x_2405_ = lean_unsigned_to_nat(0u);
v___x_2406_ = lean_nat_dec_eq(v___x_2404_, v___x_2405_);
if (v___x_2406_ == 0)
{
lean_object* v___x_2407_; lean_object* v_k_2408_; lean_object* v___x_2409_; 
v___x_2407_ = lean_box(0);
v_k_2408_ = lean_array_get(v___x_2407_, v_keys_2402_, v___x_2405_);
lean_inc_ref(v_d_2401_);
v___x_2409_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0___redArg(v_d_2401_, v_k_2408_);
if (lean_obj_tag(v___x_2409_) == 0)
{
lean_object* v___x_2410_; lean_object* v_c_2411_; lean_object* v___x_2412_; 
v___x_2410_ = lean_unsigned_to_nat(1u);
v_c_2411_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_2402_, v_v_2403_, v___x_2410_);
v___x_2412_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1___redArg(v_d_2401_, v_k_2408_, v_c_2411_);
return v___x_2412_;
}
else
{
lean_object* v_val_2413_; lean_object* v___x_2414_; lean_object* v_c_2415_; lean_object* v___x_2416_; 
v_val_2413_ = lean_ctor_get(v___x_2409_, 0);
lean_inc(v_val_2413_);
lean_dec_ref(v___x_2409_);
v___x_2414_ = lean_unsigned_to_nat(1u);
v_c_2415_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2(v_keys_2402_, v_v_2403_, v___x_2414_, v_val_2413_);
v___x_2416_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1___redArg(v_d_2401_, v_k_2408_, v_c_2415_);
return v___x_2416_;
}
}
else
{
lean_object* v___x_2417_; lean_object* v___x_2418_; 
lean_dec_ref(v_v_2403_);
lean_dec_ref(v_d_2401_);
v___x_2417_ = lean_obj_once(&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___closed__3, &l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___closed__3_once, _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___closed__3);
v___x_2418_ = l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__3(v___x_2417_);
return v___x_2418_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0___boxed(lean_object* v_d_2419_, lean_object* v_keys_2420_, lean_object* v_v_2421_){
_start:
{
lean_object* v_res_2422_; 
v_res_2422_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0(v_d_2419_, v_keys_2420_, v_v_2421_);
lean_dec_ref(v_keys_2420_);
return v_res_2422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Simprocs_addCore(lean_object* v_s_2423_, lean_object* v_keys_2424_, lean_object* v_declName_2425_, uint8_t v_post_2426_, lean_object* v_proc_2427_){
_start:
{
lean_object* v_pre_2428_; lean_object* v_post_2429_; lean_object* v_simprocNames_2430_; lean_object* v_erased_2431_; lean_object* v___x_2433_; uint8_t v_isShared_2434_; uint8_t v_isSharedCheck_2450_; 
v_pre_2428_ = lean_ctor_get(v_s_2423_, 0);
v_post_2429_ = lean_ctor_get(v_s_2423_, 1);
v_simprocNames_2430_ = lean_ctor_get(v_s_2423_, 2);
v_erased_2431_ = lean_ctor_get(v_s_2423_, 3);
v_isSharedCheck_2450_ = !lean_is_exclusive(v_s_2423_);
if (v_isSharedCheck_2450_ == 0)
{
v___x_2433_ = v_s_2423_;
v_isShared_2434_ = v_isSharedCheck_2450_;
goto v_resetjp_2432_;
}
else
{
lean_inc(v_erased_2431_);
lean_inc(v_simprocNames_2430_);
lean_inc(v_post_2429_);
lean_inc(v_pre_2428_);
lean_dec(v_s_2423_);
v___x_2433_ = lean_box(0);
v_isShared_2434_ = v_isSharedCheck_2450_;
goto v_resetjp_2432_;
}
v_resetjp_2432_:
{
lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; 
v___x_2435_ = lean_box(0);
lean_inc(v_declName_2425_);
v___x_2436_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2__spec__0___redArg(v_simprocNames_2430_, v_declName_2425_, v___x_2435_);
v___x_2437_ = l_Lean_PersistentHashMap_erase___at___00Lean_Meta_Simp_Simprocs_erase_spec__0___redArg(v_erased_2431_, v_declName_2425_);
if (v_post_2426_ == 0)
{
lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2442_; 
lean_inc_ref(v_keys_2424_);
v___x_2438_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2438_, 0, v_declName_2425_);
lean_ctor_set(v___x_2438_, 1, v_keys_2424_);
lean_ctor_set_uint8(v___x_2438_, sizeof(void*)*2, v_post_2426_);
v___x_2439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2439_, 0, v___x_2438_);
lean_ctor_set(v___x_2439_, 1, v_proc_2427_);
v___x_2440_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0(v_pre_2428_, v_keys_2424_, v___x_2439_);
lean_dec_ref(v_keys_2424_);
if (v_isShared_2434_ == 0)
{
lean_ctor_set(v___x_2433_, 3, v___x_2437_);
lean_ctor_set(v___x_2433_, 2, v___x_2436_);
lean_ctor_set(v___x_2433_, 0, v___x_2440_);
v___x_2442_ = v___x_2433_;
goto v_reusejp_2441_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v___x_2440_);
lean_ctor_set(v_reuseFailAlloc_2443_, 1, v_post_2429_);
lean_ctor_set(v_reuseFailAlloc_2443_, 2, v___x_2436_);
lean_ctor_set(v_reuseFailAlloc_2443_, 3, v___x_2437_);
v___x_2442_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2441_;
}
v_reusejp_2441_:
{
return v___x_2442_;
}
}
else
{
lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2448_; 
lean_inc_ref(v_keys_2424_);
v___x_2444_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2444_, 0, v_declName_2425_);
lean_ctor_set(v___x_2444_, 1, v_keys_2424_);
lean_ctor_set_uint8(v___x_2444_, sizeof(void*)*2, v_post_2426_);
v___x_2445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2445_, 0, v___x_2444_);
lean_ctor_set(v___x_2445_, 1, v_proc_2427_);
v___x_2446_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0(v_post_2429_, v_keys_2424_, v___x_2445_);
lean_dec_ref(v_keys_2424_);
if (v_isShared_2434_ == 0)
{
lean_ctor_set(v___x_2433_, 3, v___x_2437_);
lean_ctor_set(v___x_2433_, 2, v___x_2436_);
lean_ctor_set(v___x_2433_, 1, v___x_2446_);
v___x_2448_ = v___x_2433_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2449_; 
v_reuseFailAlloc_2449_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2449_, 0, v_pre_2428_);
lean_ctor_set(v_reuseFailAlloc_2449_, 1, v___x_2446_);
lean_ctor_set(v_reuseFailAlloc_2449_, 2, v___x_2436_);
lean_ctor_set(v_reuseFailAlloc_2449_, 3, v___x_2437_);
v___x_2448_ = v_reuseFailAlloc_2449_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
return v___x_2448_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Simprocs_addCore___boxed(lean_object* v_s_2451_, lean_object* v_keys_2452_, lean_object* v_declName_2453_, lean_object* v_post_2454_, lean_object* v_proc_2455_){
_start:
{
uint8_t v_post_boxed_2456_; lean_object* v_res_2457_; 
v_post_boxed_2456_ = lean_unbox(v_post_2454_);
v_res_2457_ = l_Lean_Meta_Simp_Simprocs_addCore(v_s_2451_, v_keys_2452_, v_declName_2453_, v_post_boxed_2456_, v_proc_2455_);
return v_res_2457_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0(lean_object* v_00_u03b2_2458_, lean_object* v_x_2459_, lean_object* v_x_2460_){
_start:
{
lean_object* v___x_2461_; 
v___x_2461_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0___redArg(v_x_2459_, v_x_2460_);
return v___x_2461_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2462_, lean_object* v_x_2463_, lean_object* v_x_2464_){
_start:
{
lean_object* v_res_2465_; 
v_res_2465_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0(v_00_u03b2_2462_, v_x_2463_, v_x_2464_);
lean_dec(v_x_2464_);
return v_res_2465_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1(lean_object* v_00_u03b2_2466_, lean_object* v_x_2467_, lean_object* v_x_2468_, lean_object* v_x_2469_){
_start:
{
lean_object* v___x_2470_; 
v___x_2470_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1___redArg(v_x_2467_, v_x_2468_, v_x_2469_);
return v___x_2470_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2471_, lean_object* v_x_2472_, size_t v_x_2473_, lean_object* v_x_2474_){
_start:
{
lean_object* v___x_2475_; 
v___x_2475_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1___redArg(v_x_2472_, v_x_2473_, v_x_2474_);
return v___x_2475_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2476_, lean_object* v_x_2477_, lean_object* v_x_2478_, lean_object* v_x_2479_){
_start:
{
size_t v_x_2293__boxed_2480_; lean_object* v_res_2481_; 
v_x_2293__boxed_2480_ = lean_unbox_usize(v_x_2478_);
lean_dec(v_x_2478_);
v_res_2481_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1(v_00_u03b2_2476_, v_x_2477_, v_x_2293__boxed_2480_, v_x_2479_);
lean_dec(v_x_2479_);
return v_res_2481_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_2482_, lean_object* v_x_2483_, size_t v_x_2484_, size_t v_x_2485_, lean_object* v_x_2486_, lean_object* v_x_2487_){
_start:
{
lean_object* v___x_2488_; 
v___x_2488_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3___redArg(v_x_2483_, v_x_2484_, v_x_2485_, v_x_2486_, v_x_2487_);
return v___x_2488_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2489_, lean_object* v_x_2490_, lean_object* v_x_2491_, lean_object* v_x_2492_, lean_object* v_x_2493_, lean_object* v_x_2494_){
_start:
{
size_t v_x_2304__boxed_2495_; size_t v_x_2305__boxed_2496_; lean_object* v_res_2497_; 
v_x_2304__boxed_2495_ = lean_unbox_usize(v_x_2491_);
lean_dec(v_x_2491_);
v_x_2305__boxed_2496_ = lean_unbox_usize(v_x_2492_);
lean_dec(v_x_2492_);
v_res_2497_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3(v_00_u03b2_2489_, v_x_2490_, v_x_2304__boxed_2495_, v_x_2305__boxed_2496_, v_x_2493_, v_x_2494_);
return v_res_2497_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_2498_, lean_object* v_keys_2499_, lean_object* v_vals_2500_, lean_object* v_heq_2501_, lean_object* v_i_2502_, lean_object* v_k_2503_){
_start:
{
lean_object* v___x_2504_; 
v___x_2504_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1_spec__3___redArg(v_keys_2499_, v_vals_2500_, v_i_2502_, v_k_2503_);
return v___x_2504_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2505_, lean_object* v_keys_2506_, lean_object* v_vals_2507_, lean_object* v_heq_2508_, lean_object* v_i_2509_, lean_object* v_k_2510_){
_start:
{
lean_object* v_res_2511_; 
v_res_2511_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_2505_, v_keys_2506_, v_vals_2507_, v_heq_2508_, v_i_2509_, v_k_2510_);
lean_dec(v_k_2510_);
lean_dec_ref(v_vals_2507_);
lean_dec_ref(v_keys_2506_);
return v_res_2511_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_2512_, lean_object* v_n_2513_, lean_object* v_k_2514_, lean_object* v_v_2515_){
_start:
{
lean_object* v___x_2516_; 
v___x_2516_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__6___redArg(v_n_2513_, v_k_2514_, v_v_2515_);
return v___x_2516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_2517_, size_t v_depth_2518_, lean_object* v_keys_2519_, lean_object* v_vals_2520_, lean_object* v_heq_2521_, lean_object* v_i_2522_, lean_object* v_entries_2523_){
_start:
{
lean_object* v___x_2524_; 
v___x_2524_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__7___redArg(v_depth_2518_, v_keys_2519_, v_vals_2520_, v_i_2522_, v_entries_2523_);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__7___boxed(lean_object* v_00_u03b2_2525_, lean_object* v_depth_2526_, lean_object* v_keys_2527_, lean_object* v_vals_2528_, lean_object* v_heq_2529_, lean_object* v_i_2530_, lean_object* v_entries_2531_){
_start:
{
size_t v_depth_boxed_2532_; lean_object* v_res_2533_; 
v_depth_boxed_2532_ = lean_unbox_usize(v_depth_2526_);
lean_dec(v_depth_2526_);
v_res_2533_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__7(v_00_u03b2_2525_, v_depth_boxed_2532_, v_keys_2527_, v_vals_2528_, v_heq_2529_, v_i_2530_, v_entries_2531_);
lean_dec_ref(v_vals_2528_);
lean_dec_ref(v_keys_2527_);
return v_res_2533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6_spec__12(lean_object* v_x_2534_, lean_object* v_keys_2535_, lean_object* v_v_2536_, lean_object* v_k_2537_, lean_object* v_as_2538_, lean_object* v_k_2539_, lean_object* v_x_2540_, lean_object* v_x_2541_, lean_object* v_x_2542_, lean_object* v_x_2543_){
_start:
{
lean_object* v___x_2544_; 
v___x_2544_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6_spec__12___redArg(v_x_2534_, v_keys_2535_, v_v_2536_, v_k_2537_, v_as_2538_, v_k_2539_, v_x_2540_, v_x_2541_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6_spec__12___boxed(lean_object* v_x_2545_, lean_object* v_keys_2546_, lean_object* v_v_2547_, lean_object* v_k_2548_, lean_object* v_as_2549_, lean_object* v_k_2550_, lean_object* v_x_2551_, lean_object* v_x_2552_, lean_object* v_x_2553_, lean_object* v_x_2554_){
_start:
{
lean_object* v_res_2555_; 
v_res_2555_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__2_spec__6_spec__12(v_x_2545_, v_keys_2546_, v_v_2547_, v_k_2548_, v_as_2549_, v_k_2550_, v_x_2551_, v_x_2552_, v_x_2553_, v_x_2554_);
lean_dec_ref(v_k_2550_);
lean_dec_ref(v_keys_2546_);
lean_dec(v_x_2545_);
return v_res_2555_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__6_spec__8(lean_object* v_00_u03b2_2556_, lean_object* v_x_2557_, lean_object* v_x_2558_, lean_object* v_x_2559_, lean_object* v_x_2560_){
_start:
{
lean_object* v___x_2561_; 
v___x_2561_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Simp_Simprocs_addCore_spec__0_spec__1_spec__3_spec__6_spec__8___redArg(v_x_2557_, v_x_2558_, v_x_2559_, v_x_2560_);
return v___x_2561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(lean_object* v_ref_2564_, lean_object* v_declName_2565_, uint8_t v_post_2566_, lean_object* v_proc_2567_){
_start:
{
lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v_keys_2571_; lean_object* v___x_2572_; 
v___x_2569_ = l_Lean_Meta_Simp_builtinSimprocDeclsRef;
v___x_2570_ = lean_st_ref_get(v___x_2569_);
v_keys_2571_ = lean_ctor_get(v___x_2570_, 0);
lean_inc_ref(v_keys_2571_);
lean_dec(v___x_2570_);
v___x_2572_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0___redArg(v_keys_2571_, v_declName_2565_);
lean_dec_ref(v_keys_2571_);
if (lean_obj_tag(v___x_2572_) == 1)
{
lean_object* v_val_2573_; lean_object* v___x_2575_; uint8_t v_isShared_2576_; uint8_t v_isSharedCheck_2583_; 
v_val_2573_ = lean_ctor_get(v___x_2572_, 0);
v_isSharedCheck_2583_ = !lean_is_exclusive(v___x_2572_);
if (v_isSharedCheck_2583_ == 0)
{
v___x_2575_ = v___x_2572_;
v_isShared_2576_ = v_isSharedCheck_2583_;
goto v_resetjp_2574_;
}
else
{
lean_inc(v_val_2573_);
lean_dec(v___x_2572_);
v___x_2575_ = lean_box(0);
v_isShared_2576_ = v_isSharedCheck_2583_;
goto v_resetjp_2574_;
}
v_resetjp_2574_:
{
lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2581_; 
v___x_2577_ = lean_st_ref_take(v_ref_2564_);
v___x_2578_ = l_Lean_Meta_Simp_Simprocs_addCore(v___x_2577_, v_val_2573_, v_declName_2565_, v_post_2566_, v_proc_2567_);
v___x_2579_ = lean_st_ref_set(v_ref_2564_, v___x_2578_);
if (v_isShared_2576_ == 0)
{
lean_ctor_set_tag(v___x_2575_, 0);
lean_ctor_set(v___x_2575_, 0, v___x_2579_);
v___x_2581_ = v___x_2575_;
goto v_reusejp_2580_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v___x_2579_);
v___x_2581_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2580_;
}
v_reusejp_2580_:
{
return v___x_2581_;
}
}
}
else
{
lean_object* v___x_2584_; lean_object* v___x_2585_; uint8_t v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; 
lean_dec(v___x_2572_);
lean_dec_ref(v_proc_2567_);
v___x_2584_ = ((lean_object*)(l_Lean_Meta_Simp_addSimprocBuiltinAttrCore___closed__0));
v___x_2585_ = l_Lean_privateToUserName(v_declName_2565_);
v___x_2586_ = 1;
v___x_2587_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2585_, v___x_2586_);
v___x_2588_ = lean_string_append(v___x_2584_, v___x_2587_);
lean_dec_ref(v___x_2587_);
v___x_2589_ = ((lean_object*)(l_Lean_Meta_Simp_addSimprocBuiltinAttrCore___closed__1));
v___x_2590_ = lean_string_append(v___x_2588_, v___x_2589_);
v___x_2591_ = lean_mk_io_user_error(v___x_2590_);
v___x_2592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2591_);
return v___x_2592_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSimprocBuiltinAttrCore___boxed(lean_object* v_ref_2593_, lean_object* v_declName_2594_, lean_object* v_post_2595_, lean_object* v_proc_2596_, lean_object* v_a_2597_){
_start:
{
uint8_t v_post_boxed_2598_; lean_object* v_res_2599_; 
v_post_boxed_2598_ = lean_unbox(v_post_2595_);
v_res_2599_ = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(v_ref_2593_, v_declName_2594_, v_post_boxed_2598_, v_proc_2596_);
lean_dec(v_ref_2593_);
return v_res_2599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSimprocBuiltinAttr(lean_object* v_declName_2600_, uint8_t v_post_2601_, lean_object* v_proc_2602_){
_start:
{
lean_object* v___x_2604_; lean_object* v___x_2605_; 
v___x_2604_ = l_Lean_Meta_Simp_builtinSimprocsRef;
v___x_2605_ = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(v___x_2604_, v_declName_2600_, v_post_2601_, v_proc_2602_);
return v___x_2605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSimprocBuiltinAttr___boxed(lean_object* v_declName_2606_, lean_object* v_post_2607_, lean_object* v_proc_2608_, lean_object* v_a_2609_){
_start:
{
uint8_t v_post_boxed_2610_; lean_object* v_res_2611_; 
v_post_boxed_2610_ = lean_unbox(v_post_2607_);
v_res_2611_ = l_Lean_Meta_Simp_addSimprocBuiltinAttr(v_declName_2606_, v_post_boxed_2610_, v_proc_2608_);
return v_res_2611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(lean_object* v_declName_2612_, uint8_t v_post_2613_, lean_object* v_proc_2614_){
_start:
{
lean_object* v___x_2616_; lean_object* v___x_2617_; 
v___x_2616_ = l_Lean_Meta_Simp_builtinSEvalprocsRef;
v___x_2617_ = l_Lean_Meta_Simp_addSimprocBuiltinAttrCore(v___x_2616_, v_declName_2612_, v_post_2613_, v_proc_2614_);
return v___x_2617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSEvalprocBuiltinAttr___boxed(lean_object* v_declName_2618_, lean_object* v_post_2619_, lean_object* v_proc_2620_, lean_object* v_a_2621_){
_start:
{
uint8_t v_post_boxed_2622_; lean_object* v_res_2623_; 
v_post_boxed_2622_ = lean_unbox(v_post_2619_);
v_res_2623_ = l_Lean_Meta_Simp_addSEvalprocBuiltinAttr(v_declName_2618_, v_post_boxed_2622_, v_proc_2620_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Simprocs_add(lean_object* v_s_2624_, lean_object* v_declName_2625_, uint8_t v_post_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_){
_start:
{
lean_object* v_a_2631_; lean_object* v___x_2650_; lean_object* v_env_2651_; lean_object* v_options_2652_; lean_object* v_ref_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; 
v___x_2650_ = lean_st_ref_get(v_a_2628_);
v_env_2651_ = lean_ctor_get(v___x_2650_, 0);
lean_inc_ref(v_env_2651_);
lean_dec(v___x_2650_);
v_options_2652_ = lean_ctor_get(v_a_2627_, 2);
v_ref_2653_ = lean_ctor_get(v_a_2627_, 5);
lean_inc_ref(v_options_2652_);
v___x_2654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2654_, 0, v_env_2651_);
lean_ctor_set(v___x_2654_, 1, v_options_2652_);
lean_inc(v_declName_2625_);
v___x_2655_ = l_Lean_Meta_Simp_getSimprocFromDeclImpl(v_declName_2625_, v___x_2654_);
lean_dec_ref(v___x_2654_);
if (lean_obj_tag(v___x_2655_) == 0)
{
lean_object* v_a_2656_; 
v_a_2656_ = lean_ctor_get(v___x_2655_, 0);
lean_inc(v_a_2656_);
lean_dec_ref(v___x_2655_);
v_a_2631_ = v_a_2656_;
goto v___jp_2630_;
}
else
{
lean_object* v_a_2657_; lean_object* v___x_2659_; uint8_t v_isShared_2660_; uint8_t v_isSharedCheck_2708_; 
v_a_2657_ = lean_ctor_get(v___x_2655_, 0);
v_isSharedCheck_2708_ = !lean_is_exclusive(v___x_2655_);
if (v_isSharedCheck_2708_ == 0)
{
v___x_2659_ = v___x_2655_;
v_isShared_2660_ = v_isSharedCheck_2708_;
goto v_resetjp_2658_;
}
else
{
lean_inc(v_a_2657_);
lean_dec(v___x_2655_);
v___x_2659_ = lean_box(0);
v_isShared_2660_ = v_isSharedCheck_2708_;
goto v_resetjp_2658_;
}
v_resetjp_2658_:
{
lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; uint8_t v___y_2666_; uint8_t v___x_2706_; 
v___x_2661_ = lean_io_error_to_string(v_a_2657_);
v___x_2662_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2662_, 0, v___x_2661_);
v___x_2663_ = l_Lean_MessageData_ofFormat(v___x_2662_);
lean_inc(v_ref_2653_);
v___x_2664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2664_, 0, v_ref_2653_);
lean_ctor_set(v___x_2664_, 1, v___x_2663_);
v___x_2706_ = l_Lean_Exception_isInterrupt(v___x_2664_);
if (v___x_2706_ == 0)
{
uint8_t v___x_2707_; 
lean_inc_ref(v___x_2664_);
v___x_2707_ = l_Lean_Exception_isRuntime(v___x_2664_);
v___y_2666_ = v___x_2707_;
goto v___jp_2665_;
}
else
{
v___y_2666_ = v___x_2706_;
goto v___jp_2665_;
}
v___jp_2665_:
{
if (v___y_2666_ == 0)
{
lean_object* v___x_2667_; lean_object* v_a_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2702_; 
lean_del_object(v___x_2659_);
v___x_2667_ = l_Lean_Meta_Simp_isBuiltinSimproc___redArg(v_declName_2625_, v_a_2628_);
v_a_2668_ = lean_ctor_get(v___x_2667_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2667_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2670_ = v___x_2667_;
v_isShared_2671_ = v_isSharedCheck_2702_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_a_2668_);
lean_dec(v___x_2667_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2702_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
uint8_t v___x_2672_; 
v___x_2672_ = lean_unbox(v_a_2668_);
lean_dec(v_a_2668_);
if (v___x_2672_ == 0)
{
lean_object* v___x_2674_; 
lean_dec(v_declName_2625_);
lean_dec_ref(v_s_2624_);
if (v_isShared_2671_ == 0)
{
lean_ctor_set_tag(v___x_2670_, 1);
lean_ctor_set(v___x_2670_, 0, v___x_2664_);
v___x_2674_ = v___x_2670_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v___x_2664_);
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
lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v_procs_2678_; lean_object* v___x_2680_; uint8_t v_isShared_2681_; uint8_t v_isSharedCheck_2700_; 
lean_del_object(v___x_2670_);
lean_dec_ref(v___x_2664_);
v___x_2676_ = l_Lean_Meta_Simp_builtinSimprocDeclsRef;
v___x_2677_ = lean_st_ref_get(v___x_2676_);
v_procs_2678_ = lean_ctor_get(v___x_2677_, 1);
v_isSharedCheck_2700_ = !lean_is_exclusive(v___x_2677_);
if (v_isSharedCheck_2700_ == 0)
{
lean_object* v_unused_2701_; 
v_unused_2701_ = lean_ctor_get(v___x_2677_, 0);
lean_dec(v_unused_2701_);
v___x_2680_ = v___x_2677_;
v_isShared_2681_ = v_isSharedCheck_2700_;
goto v_resetjp_2679_;
}
else
{
lean_inc(v_procs_2678_);
lean_dec(v___x_2677_);
v___x_2680_ = lean_box(0);
v_isShared_2681_ = v_isSharedCheck_2700_;
goto v_resetjp_2679_;
}
v_resetjp_2679_:
{
lean_object* v___x_2682_; 
v___x_2682_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0___redArg(v_procs_2678_, v_declName_2625_);
lean_dec_ref(v_procs_2678_);
if (lean_obj_tag(v___x_2682_) == 1)
{
lean_object* v_val_2683_; 
lean_del_object(v___x_2680_);
v_val_2683_ = lean_ctor_get(v___x_2682_, 0);
lean_inc(v_val_2683_);
lean_dec_ref(v___x_2682_);
v_a_2631_ = v_val_2683_;
goto v___jp_2630_;
}
else
{
lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2687_; 
lean_dec(v___x_2682_);
lean_dec_ref(v_s_2624_);
v___x_2684_ = lean_obj_once(&l_Lean_Meta_Simp_addSimprocAttrCore___closed__1, &l_Lean_Meta_Simp_addSimprocAttrCore___closed__1_once, _init_l_Lean_Meta_Simp_addSimprocAttrCore___closed__1);
v___x_2685_ = l_Lean_MessageData_ofConstName(v_declName_2625_, v___y_2666_);
if (v_isShared_2681_ == 0)
{
lean_ctor_set_tag(v___x_2680_, 7);
lean_ctor_set(v___x_2680_, 1, v___x_2685_);
lean_ctor_set(v___x_2680_, 0, v___x_2684_);
v___x_2687_ = v___x_2680_;
goto v_reusejp_2686_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v___x_2684_);
lean_ctor_set(v_reuseFailAlloc_2699_, 1, v___x_2685_);
v___x_2687_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2686_;
}
v_reusejp_2686_:
{
lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2698_; 
v___x_2688_ = lean_obj_once(&l_Lean_Meta_Simp_addSimprocAttrCore___closed__3, &l_Lean_Meta_Simp_addSimprocAttrCore___closed__3_once, _init_l_Lean_Meta_Simp_addSimprocAttrCore___closed__3);
v___x_2689_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2689_, 0, v___x_2687_);
lean_ctor_set(v___x_2689_, 1, v___x_2688_);
v___x_2690_ = l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0___redArg(v___x_2689_, v_a_2627_, v_a_2628_);
v_a_2691_ = lean_ctor_get(v___x_2690_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2690_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2693_ = v___x_2690_;
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2690_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_a_2691_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
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
lean_object* v___x_2704_; 
lean_dec(v_declName_2625_);
lean_dec_ref(v_s_2624_);
if (v_isShared_2660_ == 0)
{
lean_ctor_set(v___x_2659_, 0, v___x_2664_);
v___x_2704_ = v___x_2659_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v___x_2664_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
return v___x_2704_;
}
}
}
}
}
v___jp_2630_:
{
lean_object* v___x_2632_; lean_object* v_a_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2649_; 
lean_inc(v_declName_2625_);
v___x_2632_ = l_Lean_Meta_Simp_getSimprocDeclKeys_x3f___redArg(v_declName_2625_, v_a_2628_);
v_a_2633_ = lean_ctor_get(v___x_2632_, 0);
v_isSharedCheck_2649_ = !lean_is_exclusive(v___x_2632_);
if (v_isSharedCheck_2649_ == 0)
{
v___x_2635_ = v___x_2632_;
v_isShared_2636_ = v_isSharedCheck_2649_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_a_2633_);
lean_dec(v___x_2632_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2649_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
if (lean_obj_tag(v_a_2633_) == 1)
{
lean_object* v_val_2637_; lean_object* v___x_2638_; lean_object* v___x_2640_; 
v_val_2637_ = lean_ctor_get(v_a_2633_, 0);
lean_inc(v_val_2637_);
lean_dec_ref(v_a_2633_);
v___x_2638_ = l_Lean_Meta_Simp_Simprocs_addCore(v_s_2624_, v_val_2637_, v_declName_2625_, v_post_2626_, v_a_2631_);
if (v_isShared_2636_ == 0)
{
lean_ctor_set(v___x_2635_, 0, v___x_2638_);
v___x_2640_ = v___x_2635_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2641_; 
v_reuseFailAlloc_2641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2641_, 0, v___x_2638_);
v___x_2640_ = v_reuseFailAlloc_2641_;
goto v_reusejp_2639_;
}
v_reusejp_2639_:
{
return v___x_2640_;
}
}
else
{
lean_object* v___x_2642_; uint8_t v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; 
lean_del_object(v___x_2635_);
lean_dec(v_a_2633_);
lean_dec_ref(v_a_2631_);
lean_dec_ref(v_s_2624_);
v___x_2642_ = lean_obj_once(&l_Lean_Meta_Simp_addSimprocAttrCore___closed__1, &l_Lean_Meta_Simp_addSimprocAttrCore___closed__1_once, _init_l_Lean_Meta_Simp_addSimprocAttrCore___closed__1);
v___x_2643_ = 0;
v___x_2644_ = l_Lean_MessageData_ofConstName(v_declName_2625_, v___x_2643_);
v___x_2645_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2645_, 0, v___x_2642_);
lean_ctor_set(v___x_2645_, 1, v___x_2644_);
v___x_2646_ = lean_obj_once(&l_Lean_Meta_Simp_addSimprocAttrCore___closed__3, &l_Lean_Meta_Simp_addSimprocAttrCore___closed__3_once, _init_l_Lean_Meta_Simp_addSimprocAttrCore___closed__3);
v___x_2647_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2647_, 0, v___x_2645_);
lean_ctor_set(v___x_2647_, 1, v___x_2646_);
v___x_2648_ = l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0___redArg(v___x_2647_, v_a_2627_, v_a_2628_);
return v___x_2648_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_Simprocs_add___boxed(lean_object* v_s_2709_, lean_object* v_declName_2710_, lean_object* v_post_2711_, lean_object* v_a_2712_, lean_object* v_a_2713_, lean_object* v_a_2714_){
_start:
{
uint8_t v_post_boxed_2715_; lean_object* v_res_2716_; 
v_post_boxed_2715_ = lean_unbox(v_post_2711_);
v_res_2716_ = l_Lean_Meta_Simp_Simprocs_add(v_s_2709_, v_declName_2710_, v_post_boxed_2715_, v_a_2712_, v_a_2713_);
lean_dec(v_a_2713_);
lean_dec_ref(v_a_2712_);
return v_res_2716_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Simp_SimprocEntry_try_spec__0___redArg(lean_object* v_upperBound_2717_, lean_object* v_a_2718_, lean_object* v_b_2719_){
_start:
{
uint8_t v___x_2721_; 
v___x_2721_ = lean_nat_dec_lt(v_a_2718_, v_upperBound_2717_);
if (v___x_2721_ == 0)
{
lean_object* v___x_2722_; 
lean_dec(v_a_2718_);
v___x_2722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2722_, 0, v_b_2719_);
return v___x_2722_;
}
else
{
lean_object* v_fst_2723_; lean_object* v_snd_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2737_; 
v_fst_2723_ = lean_ctor_get(v_b_2719_, 0);
v_snd_2724_ = lean_ctor_get(v_b_2719_, 1);
v_isSharedCheck_2737_ = !lean_is_exclusive(v_b_2719_);
if (v_isSharedCheck_2737_ == 0)
{
v___x_2726_ = v_b_2719_;
v_isShared_2727_ = v_isSharedCheck_2737_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_snd_2724_);
lean_inc(v_fst_2723_);
lean_dec(v_b_2719_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2737_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2732_; 
v___x_2728_ = l_Lean_Expr_appArg_x21(v_snd_2724_);
v___x_2729_ = lean_array_push(v_fst_2723_, v___x_2728_);
v___x_2730_ = l_Lean_Expr_appFn_x21(v_snd_2724_);
lean_dec(v_snd_2724_);
if (v_isShared_2727_ == 0)
{
lean_ctor_set(v___x_2726_, 1, v___x_2730_);
lean_ctor_set(v___x_2726_, 0, v___x_2729_);
v___x_2732_ = v___x_2726_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2736_; 
v_reuseFailAlloc_2736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2736_, 0, v___x_2729_);
lean_ctor_set(v_reuseFailAlloc_2736_, 1, v___x_2730_);
v___x_2732_ = v_reuseFailAlloc_2736_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
lean_object* v___x_2733_; lean_object* v___x_2734_; 
v___x_2733_ = lean_unsigned_to_nat(1u);
v___x_2734_ = lean_nat_add(v_a_2718_, v___x_2733_);
lean_dec(v_a_2718_);
v_a_2718_ = v___x_2734_;
v_b_2719_ = v___x_2732_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Simp_SimprocEntry_try_spec__0___redArg___boxed(lean_object* v_upperBound_2738_, lean_object* v_a_2739_, lean_object* v_b_2740_, lean_object* v___y_2741_){
_start:
{
lean_object* v_res_2742_; 
v_res_2742_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Simp_SimprocEntry_try_spec__0___redArg(v_upperBound_2738_, v_a_2739_, v_b_2740_);
lean_dec(v_upperBound_2738_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocEntry_try(lean_object* v_s_2745_, lean_object* v_numExtraArgs_2746_, lean_object* v_e_2747_, lean_object* v_a_2748_, lean_object* v_a_2749_, lean_object* v_a_2750_, lean_object* v_a_2751_, lean_object* v_a_2752_, lean_object* v_a_2753_, lean_object* v_a_2754_){
_start:
{
lean_object* v___x_2756_; lean_object* v_extraArgs_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; 
v___x_2756_ = lean_unsigned_to_nat(0u);
v_extraArgs_2757_ = ((lean_object*)(l_Lean_Meta_Simp_SimprocEntry_try___closed__0));
v___x_2758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2758_, 0, v_extraArgs_2757_);
lean_ctor_set(v___x_2758_, 1, v_e_2747_);
v___x_2759_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Simp_SimprocEntry_try_spec__0___redArg(v_numExtraArgs_2746_, v___x_2756_, v___x_2758_);
if (lean_obj_tag(v___x_2759_) == 0)
{
lean_object* v_a_2760_; lean_object* v_fst_2761_; lean_object* v_snd_2762_; lean_object* v_proc_2763_; lean_object* v___x_2764_; 
v_a_2760_ = lean_ctor_get(v___x_2759_, 0);
lean_inc(v_a_2760_);
lean_dec_ref(v___x_2759_);
v_fst_2761_ = lean_ctor_get(v_a_2760_, 0);
lean_inc(v_fst_2761_);
v_snd_2762_ = lean_ctor_get(v_a_2760_, 1);
lean_inc(v_snd_2762_);
lean_dec(v_a_2760_);
v_proc_2763_ = lean_ctor_get(v_s_2745_, 1);
lean_inc_ref(v_proc_2763_);
lean_dec_ref(v_s_2745_);
v___x_2764_ = l_Array_reverse___redArg(v_fst_2761_);
if (lean_obj_tag(v_proc_2763_) == 0)
{
lean_object* v_val_2765_; lean_object* v___x_2766_; 
v_val_2765_ = lean_ctor_get(v_proc_2763_, 0);
lean_inc(v_val_2765_);
lean_dec_ref(v_proc_2763_);
lean_inc(v_a_2754_);
lean_inc_ref(v_a_2753_);
lean_inc(v_a_2752_);
lean_inc_ref(v_a_2751_);
lean_inc(v_a_2750_);
lean_inc_ref(v_a_2749_);
lean_inc(v_a_2748_);
v___x_2766_ = lean_apply_9(v_val_2765_, v_snd_2762_, v_a_2748_, v_a_2749_, v_a_2750_, v_a_2751_, v_a_2752_, v_a_2753_, v_a_2754_, lean_box(0));
if (lean_obj_tag(v___x_2766_) == 0)
{
lean_object* v_a_2767_; lean_object* v___x_2768_; 
v_a_2767_ = lean_ctor_get(v___x_2766_, 0);
lean_inc(v_a_2767_);
lean_dec_ref(v___x_2766_);
v___x_2768_ = l_Lean_Meta_Simp_Step_addExtraArgs(v_a_2767_, v___x_2764_, v_a_2751_, v_a_2752_, v_a_2753_, v_a_2754_);
lean_dec_ref(v___x_2764_);
return v___x_2768_;
}
else
{
lean_dec_ref(v___x_2764_);
return v___x_2766_;
}
}
else
{
lean_object* v_val_2769_; lean_object* v___x_2770_; 
v_val_2769_ = lean_ctor_get(v_proc_2763_, 0);
lean_inc(v_val_2769_);
lean_dec_ref(v_proc_2763_);
lean_inc(v_a_2754_);
lean_inc_ref(v_a_2753_);
lean_inc(v_a_2752_);
lean_inc_ref(v_a_2751_);
lean_inc(v_a_2750_);
lean_inc_ref(v_a_2749_);
lean_inc(v_a_2748_);
v___x_2770_ = lean_apply_9(v_val_2769_, v_snd_2762_, v_a_2748_, v_a_2749_, v_a_2750_, v_a_2751_, v_a_2752_, v_a_2753_, v_a_2754_, lean_box(0));
if (lean_obj_tag(v___x_2770_) == 0)
{
lean_object* v_a_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; 
v_a_2771_ = lean_ctor_get(v___x_2770_, 0);
lean_inc(v_a_2771_);
lean_dec_ref(v___x_2770_);
v___x_2772_ = l_Lean_TransformStep_toStep(v_a_2771_);
v___x_2773_ = l_Lean_Meta_Simp_Step_addExtraArgs(v___x_2772_, v___x_2764_, v_a_2751_, v_a_2752_, v_a_2753_, v_a_2754_);
lean_dec_ref(v___x_2764_);
return v___x_2773_;
}
else
{
lean_object* v_a_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2781_; 
lean_dec_ref(v___x_2764_);
v_a_2774_ = lean_ctor_get(v___x_2770_, 0);
v_isSharedCheck_2781_ = !lean_is_exclusive(v___x_2770_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2776_ = v___x_2770_;
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_a_2774_);
lean_dec(v___x_2770_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
lean_object* v___x_2779_; 
if (v_isShared_2777_ == 0)
{
v___x_2779_ = v___x_2776_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v_a_2774_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
}
}
}
else
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2789_; 
lean_dec_ref(v_s_2745_);
v_a_2782_ = lean_ctor_get(v___x_2759_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2759_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2784_ = v___x_2759_;
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2759_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2789_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2787_; 
if (v_isShared_2785_ == 0)
{
v___x_2787_ = v___x_2784_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v_a_2782_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
return v___x_2787_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocEntry_try___boxed(lean_object* v_s_2790_, lean_object* v_numExtraArgs_2791_, lean_object* v_e_2792_, lean_object* v_a_2793_, lean_object* v_a_2794_, lean_object* v_a_2795_, lean_object* v_a_2796_, lean_object* v_a_2797_, lean_object* v_a_2798_, lean_object* v_a_2799_, lean_object* v_a_2800_){
_start:
{
lean_object* v_res_2801_; 
v_res_2801_ = l_Lean_Meta_Simp_SimprocEntry_try(v_s_2790_, v_numExtraArgs_2791_, v_e_2792_, v_a_2793_, v_a_2794_, v_a_2795_, v_a_2796_, v_a_2797_, v_a_2798_, v_a_2799_);
lean_dec(v_a_2799_);
lean_dec_ref(v_a_2798_);
lean_dec(v_a_2797_);
lean_dec_ref(v_a_2796_);
lean_dec(v_a_2795_);
lean_dec_ref(v_a_2794_);
lean_dec(v_a_2793_);
lean_dec(v_numExtraArgs_2791_);
return v_res_2801_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Simp_SimprocEntry_try_spec__0(lean_object* v_upperBound_2802_, lean_object* v_inst_2803_, lean_object* v_R_2804_, lean_object* v_a_2805_, lean_object* v_b_2806_, lean_object* v_c_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_){
_start:
{
lean_object* v___x_2816_; 
v___x_2816_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Simp_SimprocEntry_try_spec__0___redArg(v_upperBound_2802_, v_a_2805_, v_b_2806_);
return v___x_2816_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Simp_SimprocEntry_try_spec__0___boxed(lean_object* v_upperBound_2817_, lean_object* v_inst_2818_, lean_object* v_R_2819_, lean_object* v_a_2820_, lean_object* v_b_2821_, lean_object* v_c_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_){
_start:
{
lean_object* v_res_2831_; 
v_res_2831_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Simp_SimprocEntry_try_spec__0(v_upperBound_2817_, v_inst_2818_, v_R_2819_, v_a_2820_, v_b_2821_, v_c_2822_, v___y_2823_, v___y_2824_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_);
lean_dec(v___y_2829_);
lean_dec_ref(v___y_2828_);
lean_dec(v___y_2827_);
lean_dec_ref(v___y_2826_);
lean_dec(v___y_2825_);
lean_dec_ref(v___y_2824_);
lean_dec(v___y_2823_);
lean_dec(v_upperBound_2817_);
return v_res_2831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocEntry_tryD(lean_object* v_s_2834_, lean_object* v_numExtraArgs_2835_, lean_object* v_e_2836_, lean_object* v_a_2837_, lean_object* v_a_2838_, lean_object* v_a_2839_, lean_object* v_a_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_, lean_object* v_a_2843_){
_start:
{
lean_object* v___x_2845_; lean_object* v_extraArgs_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; 
v___x_2845_ = lean_unsigned_to_nat(0u);
v_extraArgs_2846_ = ((lean_object*)(l_Lean_Meta_Simp_SimprocEntry_try___closed__0));
v___x_2847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2847_, 0, v_extraArgs_2846_);
lean_ctor_set(v___x_2847_, 1, v_e_2836_);
v___x_2848_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Simp_SimprocEntry_try_spec__0___redArg(v_numExtraArgs_2835_, v___x_2845_, v___x_2847_);
if (lean_obj_tag(v___x_2848_) == 0)
{
lean_object* v_proc_2849_; 
v_proc_2849_ = lean_ctor_get(v_s_2834_, 1);
lean_inc_ref(v_proc_2849_);
lean_dec_ref(v_s_2834_);
if (lean_obj_tag(v_proc_2849_) == 0)
{
lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2857_; 
lean_dec_ref(v_proc_2849_);
v_isSharedCheck_2857_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2857_ == 0)
{
lean_object* v_unused_2858_; 
v_unused_2858_ = lean_ctor_get(v___x_2848_, 0);
lean_dec(v_unused_2858_);
v___x_2851_ = v___x_2848_;
v_isShared_2852_ = v_isSharedCheck_2857_;
goto v_resetjp_2850_;
}
else
{
lean_dec(v___x_2848_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2857_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v___x_2853_; lean_object* v___x_2855_; 
v___x_2853_ = ((lean_object*)(l_Lean_Meta_Simp_SimprocEntry_tryD___closed__0));
if (v_isShared_2852_ == 0)
{
lean_ctor_set(v___x_2851_, 0, v___x_2853_);
v___x_2855_ = v___x_2851_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v___x_2853_);
v___x_2855_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
return v___x_2855_;
}
}
}
else
{
lean_object* v_a_2859_; lean_object* v_val_2860_; lean_object* v_fst_2861_; lean_object* v_snd_2862_; lean_object* v___x_2863_; 
v_a_2859_ = lean_ctor_get(v___x_2848_, 0);
lean_inc(v_a_2859_);
lean_dec_ref(v___x_2848_);
v_val_2860_ = lean_ctor_get(v_proc_2849_, 0);
lean_inc(v_val_2860_);
lean_dec_ref(v_proc_2849_);
v_fst_2861_ = lean_ctor_get(v_a_2859_, 0);
lean_inc(v_fst_2861_);
v_snd_2862_ = lean_ctor_get(v_a_2859_, 1);
lean_inc(v_snd_2862_);
lean_dec(v_a_2859_);
lean_inc(v_a_2843_);
lean_inc_ref(v_a_2842_);
lean_inc(v_a_2841_);
lean_inc_ref(v_a_2840_);
lean_inc(v_a_2839_);
lean_inc_ref(v_a_2838_);
lean_inc(v_a_2837_);
v___x_2863_ = lean_apply_9(v_val_2860_, v_snd_2862_, v_a_2837_, v_a_2838_, v_a_2839_, v_a_2840_, v_a_2841_, v_a_2842_, v_a_2843_, lean_box(0));
if (lean_obj_tag(v___x_2863_) == 0)
{
lean_object* v_a_2864_; lean_object* v___x_2866_; uint8_t v_isShared_2867_; uint8_t v_isSharedCheck_2873_; 
v_a_2864_ = lean_ctor_get(v___x_2863_, 0);
v_isSharedCheck_2873_ = !lean_is_exclusive(v___x_2863_);
if (v_isSharedCheck_2873_ == 0)
{
v___x_2866_ = v___x_2863_;
v_isShared_2867_ = v_isSharedCheck_2873_;
goto v_resetjp_2865_;
}
else
{
lean_inc(v_a_2864_);
lean_dec(v___x_2863_);
v___x_2866_ = lean_box(0);
v_isShared_2867_ = v_isSharedCheck_2873_;
goto v_resetjp_2865_;
}
v_resetjp_2865_:
{
lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2871_; 
v___x_2868_ = l_Array_reverse___redArg(v_fst_2861_);
v___x_2869_ = l_Lean_Meta_Simp_DStep_addExtraArgs(v_a_2864_, v___x_2868_);
lean_dec_ref(v___x_2868_);
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
else
{
lean_dec(v_fst_2861_);
return v___x_2863_;
}
}
}
else
{
lean_object* v_a_2874_; lean_object* v___x_2876_; uint8_t v_isShared_2877_; uint8_t v_isSharedCheck_2881_; 
lean_dec_ref(v_s_2834_);
v_a_2874_ = lean_ctor_get(v___x_2848_, 0);
v_isSharedCheck_2881_ = !lean_is_exclusive(v___x_2848_);
if (v_isSharedCheck_2881_ == 0)
{
v___x_2876_ = v___x_2848_;
v_isShared_2877_ = v_isSharedCheck_2881_;
goto v_resetjp_2875_;
}
else
{
lean_inc(v_a_2874_);
lean_dec(v___x_2848_);
v___x_2876_ = lean_box(0);
v_isShared_2877_ = v_isSharedCheck_2881_;
goto v_resetjp_2875_;
}
v_resetjp_2875_:
{
lean_object* v___x_2879_; 
if (v_isShared_2877_ == 0)
{
v___x_2879_ = v___x_2876_;
goto v_reusejp_2878_;
}
else
{
lean_object* v_reuseFailAlloc_2880_; 
v_reuseFailAlloc_2880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2880_, 0, v_a_2874_);
v___x_2879_ = v_reuseFailAlloc_2880_;
goto v_reusejp_2878_;
}
v_reusejp_2878_:
{
return v___x_2879_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocEntry_tryD___boxed(lean_object* v_s_2882_, lean_object* v_numExtraArgs_2883_, lean_object* v_e_2884_, lean_object* v_a_2885_, lean_object* v_a_2886_, lean_object* v_a_2887_, lean_object* v_a_2888_, lean_object* v_a_2889_, lean_object* v_a_2890_, lean_object* v_a_2891_, lean_object* v_a_2892_){
_start:
{
lean_object* v_res_2893_; 
v_res_2893_ = l_Lean_Meta_Simp_SimprocEntry_tryD(v_s_2882_, v_numExtraArgs_2883_, v_e_2884_, v_a_2885_, v_a_2886_, v_a_2887_, v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_);
lean_dec(v_a_2891_);
lean_dec_ref(v_a_2890_);
lean_dec(v_a_2889_);
lean_dec_ref(v_a_2888_);
lean_dec(v_a_2887_);
lean_dec_ref(v_a_2886_);
lean_dec(v_a_2885_);
lean_dec(v_numExtraArgs_2883_);
return v_res_2893_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg(lean_object* v_cls_2897_, lean_object* v___y_2898_){
_start:
{
lean_object* v_options_2900_; uint8_t v_hasTrace_2901_; 
v_options_2900_ = lean_ctor_get(v___y_2898_, 2);
v_hasTrace_2901_ = lean_ctor_get_uint8(v_options_2900_, sizeof(void*)*1);
if (v_hasTrace_2901_ == 0)
{
lean_object* v___x_2902_; lean_object* v___x_2903_; 
lean_dec(v_cls_2897_);
v___x_2902_ = lean_box(v_hasTrace_2901_);
v___x_2903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2903_, 0, v___x_2902_);
return v___x_2903_;
}
else
{
lean_object* v_inheritedTraceOptions_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; uint8_t v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; 
v_inheritedTraceOptions_2904_ = lean_ctor_get(v___y_2898_, 13);
v___x_2905_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg___closed__1));
v___x_2906_ = l_Lean_Name_append(v___x_2905_, v_cls_2897_);
v___x_2907_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2904_, v_options_2900_, v___x_2906_);
lean_dec(v___x_2906_);
v___x_2908_ = lean_box(v___x_2907_);
v___x_2909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2908_);
return v___x_2909_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg___boxed(lean_object* v_cls_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_){
_start:
{
lean_object* v_res_2913_; 
v_res_2913_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg(v_cls_2910_, v___y_2911_);
lean_dec_ref(v___y_2911_);
return v_res_2913_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0(lean_object* v_cls_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_){
_start:
{
lean_object* v___x_2923_; 
v___x_2923_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg(v_cls_2914_, v___y_2920_);
return v___x_2923_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___boxed(lean_object* v_cls_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_){
_start:
{
lean_object* v_res_2933_; 
v_res_2933_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0(v_cls_2924_, v___y_2925_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_, v___y_2931_);
lean_dec(v___y_2931_);
lean_dec_ref(v___y_2930_);
lean_dec(v___y_2929_);
lean_dec_ref(v___y_2928_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
return v_res_2933_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1_spec__1(lean_object* v_msgData_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_){
_start:
{
lean_object* v___x_2940_; lean_object* v_env_2941_; lean_object* v___x_2942_; lean_object* v_mctx_2943_; lean_object* v_lctx_2944_; lean_object* v_options_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; 
v___x_2940_ = lean_st_ref_get(v___y_2938_);
v_env_2941_ = lean_ctor_get(v___x_2940_, 0);
lean_inc_ref(v_env_2941_);
lean_dec(v___x_2940_);
v___x_2942_ = lean_st_ref_get(v___y_2936_);
v_mctx_2943_ = lean_ctor_get(v___x_2942_, 0);
lean_inc_ref(v_mctx_2943_);
lean_dec(v___x_2942_);
v_lctx_2944_ = lean_ctor_get(v___y_2935_, 2);
v_options_2945_ = lean_ctor_get(v___y_2937_, 2);
lean_inc_ref(v_options_2945_);
lean_inc_ref(v_lctx_2944_);
v___x_2946_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2946_, 0, v_env_2941_);
lean_ctor_set(v___x_2946_, 1, v_mctx_2943_);
lean_ctor_set(v___x_2946_, 2, v_lctx_2944_);
lean_ctor_set(v___x_2946_, 3, v_options_2945_);
v___x_2947_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2946_);
lean_ctor_set(v___x_2947_, 1, v_msgData_2934_);
v___x_2948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2948_, 0, v___x_2947_);
return v___x_2948_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1_spec__1___boxed(lean_object* v_msgData_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_){
_start:
{
lean_object* v_res_2955_; 
v_res_2955_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1_spec__1(v_msgData_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_);
lean_dec(v___y_2953_);
lean_dec_ref(v___y_2952_);
lean_dec(v___y_2951_);
lean_dec_ref(v___y_2950_);
return v_res_2955_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_2956_; double v___x_2957_; 
v___x_2956_ = lean_unsigned_to_nat(0u);
v___x_2957_ = lean_float_of_nat(v___x_2956_);
return v___x_2957_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg(lean_object* v_cls_2961_, lean_object* v_msg_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_){
_start:
{
lean_object* v_ref_2968_; lean_object* v___x_2969_; lean_object* v_a_2970_; lean_object* v___x_2972_; uint8_t v_isShared_2973_; uint8_t v_isSharedCheck_3014_; 
v_ref_2968_ = lean_ctor_get(v___y_2965_, 5);
v___x_2969_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1_spec__1(v_msg_2962_, v___y_2963_, v___y_2964_, v___y_2965_, v___y_2966_);
v_a_2970_ = lean_ctor_get(v___x_2969_, 0);
v_isSharedCheck_3014_ = !lean_is_exclusive(v___x_2969_);
if (v_isSharedCheck_3014_ == 0)
{
v___x_2972_ = v___x_2969_;
v_isShared_2973_ = v_isSharedCheck_3014_;
goto v_resetjp_2971_;
}
else
{
lean_inc(v_a_2970_);
lean_dec(v___x_2969_);
v___x_2972_ = lean_box(0);
v_isShared_2973_ = v_isSharedCheck_3014_;
goto v_resetjp_2971_;
}
v_resetjp_2971_:
{
lean_object* v___x_2974_; lean_object* v_traceState_2975_; lean_object* v_env_2976_; lean_object* v_nextMacroScope_2977_; lean_object* v_ngen_2978_; lean_object* v_auxDeclNGen_2979_; lean_object* v_cache_2980_; lean_object* v_messages_2981_; lean_object* v_infoState_2982_; lean_object* v_snapshotTasks_2983_; lean_object* v___x_2985_; uint8_t v_isShared_2986_; uint8_t v_isSharedCheck_3013_; 
v___x_2974_ = lean_st_ref_take(v___y_2966_);
v_traceState_2975_ = lean_ctor_get(v___x_2974_, 4);
v_env_2976_ = lean_ctor_get(v___x_2974_, 0);
v_nextMacroScope_2977_ = lean_ctor_get(v___x_2974_, 1);
v_ngen_2978_ = lean_ctor_get(v___x_2974_, 2);
v_auxDeclNGen_2979_ = lean_ctor_get(v___x_2974_, 3);
v_cache_2980_ = lean_ctor_get(v___x_2974_, 5);
v_messages_2981_ = lean_ctor_get(v___x_2974_, 6);
v_infoState_2982_ = lean_ctor_get(v___x_2974_, 7);
v_snapshotTasks_2983_ = lean_ctor_get(v___x_2974_, 8);
v_isSharedCheck_3013_ = !lean_is_exclusive(v___x_2974_);
if (v_isSharedCheck_3013_ == 0)
{
v___x_2985_ = v___x_2974_;
v_isShared_2986_ = v_isSharedCheck_3013_;
goto v_resetjp_2984_;
}
else
{
lean_inc(v_snapshotTasks_2983_);
lean_inc(v_infoState_2982_);
lean_inc(v_messages_2981_);
lean_inc(v_cache_2980_);
lean_inc(v_traceState_2975_);
lean_inc(v_auxDeclNGen_2979_);
lean_inc(v_ngen_2978_);
lean_inc(v_nextMacroScope_2977_);
lean_inc(v_env_2976_);
lean_dec(v___x_2974_);
v___x_2985_ = lean_box(0);
v_isShared_2986_ = v_isSharedCheck_3013_;
goto v_resetjp_2984_;
}
v_resetjp_2984_:
{
uint64_t v_tid_2987_; lean_object* v_traces_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_3012_; 
v_tid_2987_ = lean_ctor_get_uint64(v_traceState_2975_, sizeof(void*)*1);
v_traces_2988_ = lean_ctor_get(v_traceState_2975_, 0);
v_isSharedCheck_3012_ = !lean_is_exclusive(v_traceState_2975_);
if (v_isSharedCheck_3012_ == 0)
{
v___x_2990_ = v_traceState_2975_;
v_isShared_2991_ = v_isSharedCheck_3012_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_traces_2988_);
lean_dec(v_traceState_2975_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_3012_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v___x_2992_; double v___x_2993_; uint8_t v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3002_; 
v___x_2992_ = lean_box(0);
v___x_2993_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg___closed__0);
v___x_2994_ = 0;
v___x_2995_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg___closed__1));
v___x_2996_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2996_, 0, v_cls_2961_);
lean_ctor_set(v___x_2996_, 1, v___x_2992_);
lean_ctor_set(v___x_2996_, 2, v___x_2995_);
lean_ctor_set_float(v___x_2996_, sizeof(void*)*3, v___x_2993_);
lean_ctor_set_float(v___x_2996_, sizeof(void*)*3 + 8, v___x_2993_);
lean_ctor_set_uint8(v___x_2996_, sizeof(void*)*3 + 16, v___x_2994_);
v___x_2997_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg___closed__2));
v___x_2998_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2998_, 0, v___x_2996_);
lean_ctor_set(v___x_2998_, 1, v_a_2970_);
lean_ctor_set(v___x_2998_, 2, v___x_2997_);
lean_inc(v_ref_2968_);
v___x_2999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2999_, 0, v_ref_2968_);
lean_ctor_set(v___x_2999_, 1, v___x_2998_);
v___x_3000_ = l_Lean_PersistentArray_push___redArg(v_traces_2988_, v___x_2999_);
if (v_isShared_2991_ == 0)
{
lean_ctor_set(v___x_2990_, 0, v___x_3000_);
v___x_3002_ = v___x_2990_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v___x_3000_);
lean_ctor_set_uint64(v_reuseFailAlloc_3011_, sizeof(void*)*1, v_tid_2987_);
v___x_3002_ = v_reuseFailAlloc_3011_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
lean_object* v___x_3004_; 
if (v_isShared_2986_ == 0)
{
lean_ctor_set(v___x_2985_, 4, v___x_3002_);
v___x_3004_ = v___x_2985_;
goto v_reusejp_3003_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v_env_2976_);
lean_ctor_set(v_reuseFailAlloc_3010_, 1, v_nextMacroScope_2977_);
lean_ctor_set(v_reuseFailAlloc_3010_, 2, v_ngen_2978_);
lean_ctor_set(v_reuseFailAlloc_3010_, 3, v_auxDeclNGen_2979_);
lean_ctor_set(v_reuseFailAlloc_3010_, 4, v___x_3002_);
lean_ctor_set(v_reuseFailAlloc_3010_, 5, v_cache_2980_);
lean_ctor_set(v_reuseFailAlloc_3010_, 6, v_messages_2981_);
lean_ctor_set(v_reuseFailAlloc_3010_, 7, v_infoState_2982_);
lean_ctor_set(v_reuseFailAlloc_3010_, 8, v_snapshotTasks_2983_);
v___x_3004_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3003_;
}
v_reusejp_3003_:
{
lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3008_; 
v___x_3005_ = lean_st_ref_set(v___y_2966_, v___x_3004_);
v___x_3006_ = lean_box(0);
if (v_isShared_2973_ == 0)
{
lean_ctor_set(v___x_2972_, 0, v___x_3006_);
v___x_3008_ = v___x_2972_;
goto v_reusejp_3007_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v___x_3006_);
v___x_3008_ = v_reuseFailAlloc_3009_;
goto v_reusejp_3007_;
}
v_reusejp_3007_:
{
return v___x_3008_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg___boxed(lean_object* v_cls_3015_, lean_object* v_msg_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_){
_start:
{
lean_object* v_res_3022_; 
v_res_3022_ = l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg(v_cls_3015_, v_msg_3016_, v___y_3017_, v___y_3018_, v___y_3019_, v___y_3020_);
lean_dec(v___y_3020_);
lean_dec_ref(v___y_3019_);
lean_dec(v___y_3018_);
lean_dec_ref(v___y_3017_);
return v_res_3022_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5(void){
_start:
{
lean_object* v___x_3032_; lean_object* v___x_3033_; 
v___x_3032_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__4));
v___x_3033_ = l_Lean_stringToMessageData(v___x_3032_);
return v___x_3033_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7(void){
_start:
{
lean_object* v___x_3035_; lean_object* v___x_3036_; 
v___x_3035_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__6));
v___x_3036_ = l_Lean_stringToMessageData(v___x_3035_);
return v___x_3036_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2(lean_object* v_erased_3037_, uint8_t v_post_3038_, lean_object* v___x_3039_, lean_object* v_as_3040_, size_t v_sz_3041_, size_t v_i_3042_, lean_object* v_b_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_){
_start:
{
lean_object* v_a_3053_; uint8_t v___x_3057_; 
v___x_3057_ = lean_usize_dec_lt(v_i_3042_, v_sz_3041_);
if (v___x_3057_ == 0)
{
lean_object* v___x_3058_; 
lean_dec_ref(v_erased_3037_);
v___x_3058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3058_, 0, v_b_3043_);
return v___x_3058_;
}
else
{
lean_object* v_a_3059_; lean_object* v_snd_3060_; lean_object* v___x_3062_; uint8_t v_isShared_3063_; uint8_t v_isSharedCheck_3363_; 
v_a_3059_ = lean_array_uget(v_as_3040_, v_i_3042_);
v_snd_3060_ = lean_ctor_get(v_b_3043_, 1);
v_isSharedCheck_3363_ = !lean_is_exclusive(v_b_3043_);
if (v_isSharedCheck_3363_ == 0)
{
lean_object* v_unused_3364_; 
v_unused_3364_ = lean_ctor_get(v_b_3043_, 0);
lean_dec(v_unused_3364_);
v___x_3062_ = v_b_3043_;
v_isShared_3063_ = v_isSharedCheck_3363_;
goto v_resetjp_3061_;
}
else
{
lean_inc(v_snd_3060_);
lean_dec(v_b_3043_);
v___x_3062_ = lean_box(0);
v_isShared_3063_ = v_isSharedCheck_3363_;
goto v_resetjp_3061_;
}
v_resetjp_3061_:
{
lean_object* v_snd_3064_; lean_object* v_snd_3065_; lean_object* v_fst_3066_; lean_object* v_toSimprocOLeanEntry_3067_; lean_object* v_snd_3068_; lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3361_; 
v_snd_3064_ = lean_ctor_get(v_snd_3060_, 1);
lean_inc(v_snd_3064_);
v_snd_3065_ = lean_ctor_get(v_snd_3064_, 1);
lean_inc(v_snd_3065_);
v_fst_3066_ = lean_ctor_get(v_a_3059_, 0);
lean_inc(v_fst_3066_);
v_toSimprocOLeanEntry_3067_ = lean_ctor_get(v_fst_3066_, 0);
v_snd_3068_ = lean_ctor_get(v_a_3059_, 1);
v_isSharedCheck_3361_ = !lean_is_exclusive(v_a_3059_);
if (v_isSharedCheck_3361_ == 0)
{
lean_object* v_unused_3362_; 
v_unused_3362_ = lean_ctor_get(v_a_3059_, 0);
lean_dec(v_unused_3362_);
v___x_3070_ = v_a_3059_;
v_isShared_3071_ = v_isSharedCheck_3361_;
goto v_resetjp_3069_;
}
else
{
lean_inc(v_snd_3068_);
lean_dec(v_a_3059_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3361_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
lean_object* v_fst_3072_; lean_object* v___x_3074_; uint8_t v_isShared_3075_; uint8_t v_isSharedCheck_3359_; 
v_fst_3072_ = lean_ctor_get(v_snd_3060_, 0);
v_isSharedCheck_3359_ = !lean_is_exclusive(v_snd_3060_);
if (v_isSharedCheck_3359_ == 0)
{
lean_object* v_unused_3360_; 
v_unused_3360_ = lean_ctor_get(v_snd_3060_, 1);
lean_dec(v_unused_3360_);
v___x_3074_ = v_snd_3060_;
v_isShared_3075_ = v_isSharedCheck_3359_;
goto v_resetjp_3073_;
}
else
{
lean_inc(v_fst_3072_);
lean_dec(v_snd_3060_);
v___x_3074_ = lean_box(0);
v_isShared_3075_ = v_isSharedCheck_3359_;
goto v_resetjp_3073_;
}
v_resetjp_3073_:
{
lean_object* v_fst_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3357_; 
v_fst_3076_ = lean_ctor_get(v_snd_3064_, 0);
v_isSharedCheck_3357_ = !lean_is_exclusive(v_snd_3064_);
if (v_isSharedCheck_3357_ == 0)
{
lean_object* v_unused_3358_; 
v_unused_3358_ = lean_ctor_get(v_snd_3064_, 1);
lean_dec(v_unused_3358_);
v___x_3078_ = v_snd_3064_;
v_isShared_3079_ = v_isSharedCheck_3357_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_fst_3076_);
lean_dec(v_snd_3064_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3357_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v_fst_3080_; lean_object* v_snd_3081_; lean_object* v___x_3083_; uint8_t v_isShared_3084_; uint8_t v_isSharedCheck_3356_; 
v_fst_3080_ = lean_ctor_get(v_snd_3065_, 0);
v_snd_3081_ = lean_ctor_get(v_snd_3065_, 1);
v_isSharedCheck_3356_ = !lean_is_exclusive(v_snd_3065_);
if (v_isSharedCheck_3356_ == 0)
{
v___x_3083_ = v_snd_3065_;
v_isShared_3084_ = v_isSharedCheck_3356_;
goto v_resetjp_3082_;
}
else
{
lean_inc(v_snd_3081_);
lean_inc(v_fst_3080_);
lean_dec(v_snd_3065_);
v___x_3083_ = lean_box(0);
v_isShared_3084_ = v_isSharedCheck_3356_;
goto v_resetjp_3082_;
}
v_resetjp_3082_:
{
lean_object* v_declName_3085_; lean_object* v___x_3086_; lean_object* v___y_3088_; lean_object* v___y_3089_; uint8_t v___y_3090_; uint8_t v___x_3105_; 
v_declName_3085_ = lean_ctor_get(v_toSimprocOLeanEntry_3067_, 0);
v___x_3086_ = lean_box(0);
lean_inc_ref(v_erased_3037_);
v___x_3105_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0___redArg(v_erased_3037_, v_declName_3085_);
if (v___x_3105_ == 0)
{
lean_object* v___x_3106_; 
lean_inc(v_declName_3085_);
lean_inc(v_fst_3072_);
v___x_3106_ = l_Lean_Meta_Simp_SimprocEntry_try(v_fst_3066_, v_snd_3068_, v_fst_3072_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_);
lean_dec(v_snd_3068_);
if (lean_obj_tag(v___x_3106_) == 0)
{
lean_object* v_a_3107_; lean_object* v___x_3108_; uint8_t v___x_3109_; 
v_a_3107_ = lean_ctor_get(v___x_3106_, 0);
lean_inc(v_a_3107_);
lean_dec_ref(v___x_3106_);
v___x_3108_ = lean_unsigned_to_nat(0u);
v___x_3109_ = lean_nat_dec_eq(v___x_3039_, v___x_3108_);
switch(lean_obj_tag(v_a_3107_))
{
case 0:
{
lean_object* v_r_3110_; lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3187_; 
lean_del_object(v___x_3083_);
lean_del_object(v___x_3078_);
lean_del_object(v___x_3074_);
lean_del_object(v___x_3062_);
lean_dec_ref(v_erased_3037_);
v_r_3110_ = lean_ctor_get(v_a_3107_, 0);
v_isSharedCheck_3187_ = !lean_is_exclusive(v_a_3107_);
if (v_isSharedCheck_3187_ == 0)
{
v___x_3112_ = v_a_3107_;
v_isShared_3113_ = v_isSharedCheck_3187_;
goto v_resetjp_3111_;
}
else
{
lean_inc(v_r_3110_);
lean_dec(v_a_3107_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3187_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
lean_object* v___y_3115_; lean_object* v___y_3116_; lean_object* v___y_3117_; lean_object* v___y_3118_; lean_object* v___y_3119_; lean_object* v___x_3158_; lean_object* v___x_3159_; 
v___x_3158_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__3));
v___x_3159_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg(v___x_3158_, v___y_3049_);
if (lean_obj_tag(v___x_3159_) == 0)
{
lean_object* v_a_3160_; uint8_t v___x_3161_; 
v_a_3160_ = lean_ctor_get(v___x_3159_, 0);
lean_inc(v_a_3160_);
lean_dec_ref(v___x_3159_);
v___x_3161_ = lean_unbox(v_a_3160_);
lean_dec(v_a_3160_);
if (v___x_3161_ == 0)
{
v___y_3115_ = v___y_3046_;
v___y_3116_ = v___y_3047_;
v___y_3117_ = v___y_3048_;
v___y_3118_ = v___y_3049_;
v___y_3119_ = v___y_3050_;
goto v___jp_3114_;
}
else
{
lean_object* v_expr_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; 
v_expr_3162_ = lean_ctor_get(v_r_3110_, 0);
v___x_3163_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5);
lean_inc(v_fst_3072_);
v___x_3164_ = l_Lean_MessageData_ofExpr(v_fst_3072_);
v___x_3165_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3165_, 0, v___x_3163_);
lean_ctor_set(v___x_3165_, 1, v___x_3164_);
v___x_3166_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7);
v___x_3167_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3165_);
lean_ctor_set(v___x_3167_, 1, v___x_3166_);
lean_inc_ref(v_expr_3162_);
v___x_3168_ = l_Lean_MessageData_ofExpr(v_expr_3162_);
v___x_3169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3169_, 0, v___x_3167_);
lean_ctor_set(v___x_3169_, 1, v___x_3168_);
v___x_3170_ = l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg(v___x_3158_, v___x_3169_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_);
if (lean_obj_tag(v___x_3170_) == 0)
{
lean_dec_ref(v___x_3170_);
v___y_3115_ = v___y_3046_;
v___y_3116_ = v___y_3047_;
v___y_3117_ = v___y_3048_;
v___y_3118_ = v___y_3049_;
v___y_3119_ = v___y_3050_;
goto v___jp_3114_;
}
else
{
lean_object* v_a_3171_; lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3178_; 
lean_del_object(v___x_3112_);
lean_dec_ref(v_r_3110_);
lean_dec(v_declName_3085_);
lean_dec(v_snd_3081_);
lean_dec(v_fst_3080_);
lean_dec(v_fst_3076_);
lean_dec(v_fst_3072_);
lean_del_object(v___x_3070_);
v_a_3171_ = lean_ctor_get(v___x_3170_, 0);
v_isSharedCheck_3178_ = !lean_is_exclusive(v___x_3170_);
if (v_isSharedCheck_3178_ == 0)
{
v___x_3173_ = v___x_3170_;
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
else
{
lean_inc(v_a_3171_);
lean_dec(v___x_3170_);
v___x_3173_ = lean_box(0);
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
v_resetjp_3172_:
{
lean_object* v___x_3176_; 
if (v_isShared_3174_ == 0)
{
v___x_3176_ = v___x_3173_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v_a_3171_);
v___x_3176_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
return v___x_3176_;
}
}
}
}
}
else
{
lean_object* v_a_3179_; lean_object* v___x_3181_; uint8_t v_isShared_3182_; uint8_t v_isSharedCheck_3186_; 
lean_del_object(v___x_3112_);
lean_dec_ref(v_r_3110_);
lean_dec(v_declName_3085_);
lean_dec(v_snd_3081_);
lean_dec(v_fst_3080_);
lean_dec(v_fst_3076_);
lean_dec(v_fst_3072_);
lean_del_object(v___x_3070_);
v_a_3179_ = lean_ctor_get(v___x_3159_, 0);
v_isSharedCheck_3186_ = !lean_is_exclusive(v___x_3159_);
if (v_isSharedCheck_3186_ == 0)
{
v___x_3181_ = v___x_3159_;
v_isShared_3182_ = v_isSharedCheck_3186_;
goto v_resetjp_3180_;
}
else
{
lean_inc(v_a_3179_);
lean_dec(v___x_3159_);
v___x_3181_ = lean_box(0);
v_isShared_3182_ = v_isSharedCheck_3186_;
goto v_resetjp_3180_;
}
v_resetjp_3180_:
{
lean_object* v___x_3184_; 
if (v_isShared_3182_ == 0)
{
v___x_3184_ = v___x_3181_;
goto v_reusejp_3183_;
}
else
{
lean_object* v_reuseFailAlloc_3185_; 
v_reuseFailAlloc_3185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3185_, 0, v_a_3179_);
v___x_3184_ = v_reuseFailAlloc_3185_;
goto v_reusejp_3183_;
}
v_reusejp_3183_:
{
return v___x_3184_;
}
}
}
v___jp_3114_:
{
lean_object* v___x_3120_; lean_object* v___x_3121_; 
v___x_3120_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_3120_, 0, v_declName_3085_);
lean_ctor_set_uint8(v___x_3120_, sizeof(void*)*1, v_post_3038_);
lean_ctor_set_uint8(v___x_3120_, sizeof(void*)*1 + 1, v___x_3109_);
v___x_3121_ = l_Lean_Meta_Simp_recordSimpTheorem___redArg(v___x_3120_, v___y_3115_, v___y_3118_, v___y_3119_);
if (lean_obj_tag(v___x_3121_) == 0)
{
uint8_t v___x_3122_; lean_object* v___x_3123_; 
lean_dec_ref(v___x_3121_);
v___x_3122_ = lean_unbox(v_snd_3081_);
lean_inc(v_fst_3076_);
v___x_3123_ = l_Lean_Meta_Simp_mkEqTransOptProofResult(v_fst_3076_, v___x_3122_, v_r_3110_, v___y_3116_, v___y_3117_, v___y_3118_, v___y_3119_);
if (lean_obj_tag(v___x_3123_) == 0)
{
lean_object* v_a_3124_; lean_object* v___x_3126_; uint8_t v_isShared_3127_; uint8_t v_isSharedCheck_3141_; 
v_a_3124_ = lean_ctor_get(v___x_3123_, 0);
v_isSharedCheck_3141_ = !lean_is_exclusive(v___x_3123_);
if (v_isSharedCheck_3141_ == 0)
{
v___x_3126_ = v___x_3123_;
v_isShared_3127_ = v_isSharedCheck_3141_;
goto v_resetjp_3125_;
}
else
{
lean_inc(v_a_3124_);
lean_dec(v___x_3123_);
v___x_3126_ = lean_box(0);
v_isShared_3127_ = v_isSharedCheck_3141_;
goto v_resetjp_3125_;
}
v_resetjp_3125_:
{
lean_object* v___x_3129_; 
if (v_isShared_3113_ == 0)
{
lean_ctor_set(v___x_3112_, 0, v_a_3124_);
v___x_3129_ = v___x_3112_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v_a_3124_);
v___x_3129_ = v_reuseFailAlloc_3140_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
lean_object* v___x_3130_; lean_object* v___x_3132_; 
v___x_3130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3130_, 0, v___x_3129_);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 1, v_snd_3081_);
lean_ctor_set(v___x_3070_, 0, v_fst_3080_);
v___x_3132_ = v___x_3070_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_fst_3080_);
lean_ctor_set(v_reuseFailAlloc_3139_, 1, v_snd_3081_);
v___x_3132_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3131_;
}
v_reusejp_3131_:
{
lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3137_; 
v___x_3133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3133_, 0, v_fst_3076_);
lean_ctor_set(v___x_3133_, 1, v___x_3132_);
v___x_3134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3134_, 0, v_fst_3072_);
lean_ctor_set(v___x_3134_, 1, v___x_3133_);
v___x_3135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3135_, 0, v___x_3130_);
lean_ctor_set(v___x_3135_, 1, v___x_3134_);
if (v_isShared_3127_ == 0)
{
lean_ctor_set(v___x_3126_, 0, v___x_3135_);
v___x_3137_ = v___x_3126_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v___x_3135_);
v___x_3137_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
return v___x_3137_;
}
}
}
}
}
else
{
lean_object* v_a_3142_; lean_object* v___x_3144_; uint8_t v_isShared_3145_; uint8_t v_isSharedCheck_3149_; 
lean_del_object(v___x_3112_);
lean_dec(v_snd_3081_);
lean_dec(v_fst_3080_);
lean_dec(v_fst_3076_);
lean_dec(v_fst_3072_);
lean_del_object(v___x_3070_);
v_a_3142_ = lean_ctor_get(v___x_3123_, 0);
v_isSharedCheck_3149_ = !lean_is_exclusive(v___x_3123_);
if (v_isSharedCheck_3149_ == 0)
{
v___x_3144_ = v___x_3123_;
v_isShared_3145_ = v_isSharedCheck_3149_;
goto v_resetjp_3143_;
}
else
{
lean_inc(v_a_3142_);
lean_dec(v___x_3123_);
v___x_3144_ = lean_box(0);
v_isShared_3145_ = v_isSharedCheck_3149_;
goto v_resetjp_3143_;
}
v_resetjp_3143_:
{
lean_object* v___x_3147_; 
if (v_isShared_3145_ == 0)
{
v___x_3147_ = v___x_3144_;
goto v_reusejp_3146_;
}
else
{
lean_object* v_reuseFailAlloc_3148_; 
v_reuseFailAlloc_3148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3148_, 0, v_a_3142_);
v___x_3147_ = v_reuseFailAlloc_3148_;
goto v_reusejp_3146_;
}
v_reusejp_3146_:
{
return v___x_3147_;
}
}
}
}
else
{
lean_object* v_a_3150_; lean_object* v___x_3152_; uint8_t v_isShared_3153_; uint8_t v_isSharedCheck_3157_; 
lean_del_object(v___x_3112_);
lean_dec_ref(v_r_3110_);
lean_dec(v_snd_3081_);
lean_dec(v_fst_3080_);
lean_dec(v_fst_3076_);
lean_dec(v_fst_3072_);
lean_del_object(v___x_3070_);
v_a_3150_ = lean_ctor_get(v___x_3121_, 0);
v_isSharedCheck_3157_ = !lean_is_exclusive(v___x_3121_);
if (v_isSharedCheck_3157_ == 0)
{
v___x_3152_ = v___x_3121_;
v_isShared_3153_ = v_isSharedCheck_3157_;
goto v_resetjp_3151_;
}
else
{
lean_inc(v_a_3150_);
lean_dec(v___x_3121_);
v___x_3152_ = lean_box(0);
v_isShared_3153_ = v_isSharedCheck_3157_;
goto v_resetjp_3151_;
}
v_resetjp_3151_:
{
lean_object* v___x_3155_; 
if (v_isShared_3153_ == 0)
{
v___x_3155_ = v___x_3152_;
goto v_reusejp_3154_;
}
else
{
lean_object* v_reuseFailAlloc_3156_; 
v_reuseFailAlloc_3156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3156_, 0, v_a_3150_);
v___x_3155_ = v_reuseFailAlloc_3156_;
goto v_reusejp_3154_;
}
v_reusejp_3154_:
{
return v___x_3155_;
}
}
}
}
}
}
case 1:
{
lean_object* v_e_3188_; lean_object* v___x_3190_; uint8_t v_isShared_3191_; uint8_t v_isSharedCheck_3265_; 
lean_del_object(v___x_3083_);
lean_del_object(v___x_3078_);
lean_del_object(v___x_3074_);
lean_del_object(v___x_3062_);
lean_dec_ref(v_erased_3037_);
v_e_3188_ = lean_ctor_get(v_a_3107_, 0);
v_isSharedCheck_3265_ = !lean_is_exclusive(v_a_3107_);
if (v_isSharedCheck_3265_ == 0)
{
v___x_3190_ = v_a_3107_;
v_isShared_3191_ = v_isSharedCheck_3265_;
goto v_resetjp_3189_;
}
else
{
lean_inc(v_e_3188_);
lean_dec(v_a_3107_);
v___x_3190_ = lean_box(0);
v_isShared_3191_ = v_isSharedCheck_3265_;
goto v_resetjp_3189_;
}
v_resetjp_3189_:
{
lean_object* v___y_3193_; lean_object* v___y_3194_; lean_object* v___y_3195_; lean_object* v___y_3196_; lean_object* v___y_3197_; lean_object* v___x_3236_; lean_object* v___x_3237_; 
v___x_3236_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__3));
v___x_3237_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg(v___x_3236_, v___y_3049_);
if (lean_obj_tag(v___x_3237_) == 0)
{
lean_object* v_a_3238_; uint8_t v___x_3239_; 
v_a_3238_ = lean_ctor_get(v___x_3237_, 0);
lean_inc(v_a_3238_);
lean_dec_ref(v___x_3237_);
v___x_3239_ = lean_unbox(v_a_3238_);
lean_dec(v_a_3238_);
if (v___x_3239_ == 0)
{
v___y_3193_ = v___y_3046_;
v___y_3194_ = v___y_3047_;
v___y_3195_ = v___y_3048_;
v___y_3196_ = v___y_3049_;
v___y_3197_ = v___y_3050_;
goto v___jp_3192_;
}
else
{
lean_object* v_expr_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; 
v_expr_3240_ = lean_ctor_get(v_e_3188_, 0);
v___x_3241_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5);
lean_inc(v_fst_3072_);
v___x_3242_ = l_Lean_MessageData_ofExpr(v_fst_3072_);
v___x_3243_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3243_, 0, v___x_3241_);
lean_ctor_set(v___x_3243_, 1, v___x_3242_);
v___x_3244_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7);
v___x_3245_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3245_, 0, v___x_3243_);
lean_ctor_set(v___x_3245_, 1, v___x_3244_);
lean_inc_ref(v_expr_3240_);
v___x_3246_ = l_Lean_MessageData_ofExpr(v_expr_3240_);
v___x_3247_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3247_, 0, v___x_3245_);
lean_ctor_set(v___x_3247_, 1, v___x_3246_);
v___x_3248_ = l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg(v___x_3236_, v___x_3247_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_);
if (lean_obj_tag(v___x_3248_) == 0)
{
lean_dec_ref(v___x_3248_);
v___y_3193_ = v___y_3046_;
v___y_3194_ = v___y_3047_;
v___y_3195_ = v___y_3048_;
v___y_3196_ = v___y_3049_;
v___y_3197_ = v___y_3050_;
goto v___jp_3192_;
}
else
{
lean_object* v_a_3249_; lean_object* v___x_3251_; uint8_t v_isShared_3252_; uint8_t v_isSharedCheck_3256_; 
lean_del_object(v___x_3190_);
lean_dec_ref(v_e_3188_);
lean_dec(v_declName_3085_);
lean_dec(v_snd_3081_);
lean_dec(v_fst_3080_);
lean_dec(v_fst_3076_);
lean_dec(v_fst_3072_);
lean_del_object(v___x_3070_);
v_a_3249_ = lean_ctor_get(v___x_3248_, 0);
v_isSharedCheck_3256_ = !lean_is_exclusive(v___x_3248_);
if (v_isSharedCheck_3256_ == 0)
{
v___x_3251_ = v___x_3248_;
v_isShared_3252_ = v_isSharedCheck_3256_;
goto v_resetjp_3250_;
}
else
{
lean_inc(v_a_3249_);
lean_dec(v___x_3248_);
v___x_3251_ = lean_box(0);
v_isShared_3252_ = v_isSharedCheck_3256_;
goto v_resetjp_3250_;
}
v_resetjp_3250_:
{
lean_object* v___x_3254_; 
if (v_isShared_3252_ == 0)
{
v___x_3254_ = v___x_3251_;
goto v_reusejp_3253_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v_a_3249_);
v___x_3254_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3253_;
}
v_reusejp_3253_:
{
return v___x_3254_;
}
}
}
}
}
else
{
lean_object* v_a_3257_; lean_object* v___x_3259_; uint8_t v_isShared_3260_; uint8_t v_isSharedCheck_3264_; 
lean_del_object(v___x_3190_);
lean_dec_ref(v_e_3188_);
lean_dec(v_declName_3085_);
lean_dec(v_snd_3081_);
lean_dec(v_fst_3080_);
lean_dec(v_fst_3076_);
lean_dec(v_fst_3072_);
lean_del_object(v___x_3070_);
v_a_3257_ = lean_ctor_get(v___x_3237_, 0);
v_isSharedCheck_3264_ = !lean_is_exclusive(v___x_3237_);
if (v_isSharedCheck_3264_ == 0)
{
v___x_3259_ = v___x_3237_;
v_isShared_3260_ = v_isSharedCheck_3264_;
goto v_resetjp_3258_;
}
else
{
lean_inc(v_a_3257_);
lean_dec(v___x_3237_);
v___x_3259_ = lean_box(0);
v_isShared_3260_ = v_isSharedCheck_3264_;
goto v_resetjp_3258_;
}
v_resetjp_3258_:
{
lean_object* v___x_3262_; 
if (v_isShared_3260_ == 0)
{
v___x_3262_ = v___x_3259_;
goto v_reusejp_3261_;
}
else
{
lean_object* v_reuseFailAlloc_3263_; 
v_reuseFailAlloc_3263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3263_, 0, v_a_3257_);
v___x_3262_ = v_reuseFailAlloc_3263_;
goto v_reusejp_3261_;
}
v_reusejp_3261_:
{
return v___x_3262_;
}
}
}
v___jp_3192_:
{
lean_object* v___x_3198_; lean_object* v___x_3199_; 
v___x_3198_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_3198_, 0, v_declName_3085_);
lean_ctor_set_uint8(v___x_3198_, sizeof(void*)*1, v_post_3038_);
lean_ctor_set_uint8(v___x_3198_, sizeof(void*)*1 + 1, v___x_3109_);
v___x_3199_ = l_Lean_Meta_Simp_recordSimpTheorem___redArg(v___x_3198_, v___y_3193_, v___y_3196_, v___y_3197_);
if (lean_obj_tag(v___x_3199_) == 0)
{
uint8_t v___x_3200_; lean_object* v___x_3201_; 
lean_dec_ref(v___x_3199_);
v___x_3200_ = lean_unbox(v_snd_3081_);
lean_inc(v_fst_3076_);
v___x_3201_ = l_Lean_Meta_Simp_mkEqTransOptProofResult(v_fst_3076_, v___x_3200_, v_e_3188_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_);
if (lean_obj_tag(v___x_3201_) == 0)
{
lean_object* v_a_3202_; lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3219_; 
v_a_3202_ = lean_ctor_get(v___x_3201_, 0);
v_isSharedCheck_3219_ = !lean_is_exclusive(v___x_3201_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3204_ = v___x_3201_;
v_isShared_3205_ = v_isSharedCheck_3219_;
goto v_resetjp_3203_;
}
else
{
lean_inc(v_a_3202_);
lean_dec(v___x_3201_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3219_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
lean_object* v___x_3207_; 
if (v_isShared_3191_ == 0)
{
lean_ctor_set(v___x_3190_, 0, v_a_3202_);
v___x_3207_ = v___x_3190_;
goto v_reusejp_3206_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v_a_3202_);
v___x_3207_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3206_;
}
v_reusejp_3206_:
{
lean_object* v___x_3208_; lean_object* v___x_3210_; 
v___x_3208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3208_, 0, v___x_3207_);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 1, v_snd_3081_);
lean_ctor_set(v___x_3070_, 0, v_fst_3080_);
v___x_3210_ = v___x_3070_;
goto v_reusejp_3209_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v_fst_3080_);
lean_ctor_set(v_reuseFailAlloc_3217_, 1, v_snd_3081_);
v___x_3210_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3209_;
}
v_reusejp_3209_:
{
lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3215_; 
v___x_3211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3211_, 0, v_fst_3076_);
lean_ctor_set(v___x_3211_, 1, v___x_3210_);
v___x_3212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3212_, 0, v_fst_3072_);
lean_ctor_set(v___x_3212_, 1, v___x_3211_);
v___x_3213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3213_, 0, v___x_3208_);
lean_ctor_set(v___x_3213_, 1, v___x_3212_);
if (v_isShared_3205_ == 0)
{
lean_ctor_set(v___x_3204_, 0, v___x_3213_);
v___x_3215_ = v___x_3204_;
goto v_reusejp_3214_;
}
else
{
lean_object* v_reuseFailAlloc_3216_; 
v_reuseFailAlloc_3216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3216_, 0, v___x_3213_);
v___x_3215_ = v_reuseFailAlloc_3216_;
goto v_reusejp_3214_;
}
v_reusejp_3214_:
{
return v___x_3215_;
}
}
}
}
}
else
{
lean_object* v_a_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3227_; 
lean_del_object(v___x_3190_);
lean_dec(v_snd_3081_);
lean_dec(v_fst_3080_);
lean_dec(v_fst_3076_);
lean_dec(v_fst_3072_);
lean_del_object(v___x_3070_);
v_a_3220_ = lean_ctor_get(v___x_3201_, 0);
v_isSharedCheck_3227_ = !lean_is_exclusive(v___x_3201_);
if (v_isSharedCheck_3227_ == 0)
{
v___x_3222_ = v___x_3201_;
v_isShared_3223_ = v_isSharedCheck_3227_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_a_3220_);
lean_dec(v___x_3201_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3227_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
lean_object* v___x_3225_; 
if (v_isShared_3223_ == 0)
{
v___x_3225_ = v___x_3222_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v_a_3220_);
v___x_3225_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
return v___x_3225_;
}
}
}
}
else
{
lean_object* v_a_3228_; lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3235_; 
lean_del_object(v___x_3190_);
lean_dec_ref(v_e_3188_);
lean_dec(v_snd_3081_);
lean_dec(v_fst_3080_);
lean_dec(v_fst_3076_);
lean_dec(v_fst_3072_);
lean_del_object(v___x_3070_);
v_a_3228_ = lean_ctor_get(v___x_3199_, 0);
v_isSharedCheck_3235_ = !lean_is_exclusive(v___x_3199_);
if (v_isSharedCheck_3235_ == 0)
{
v___x_3230_ = v___x_3199_;
v_isShared_3231_ = v_isSharedCheck_3235_;
goto v_resetjp_3229_;
}
else
{
lean_inc(v_a_3228_);
lean_dec(v___x_3199_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3235_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
lean_object* v___x_3233_; 
if (v_isShared_3231_ == 0)
{
v___x_3233_ = v___x_3230_;
goto v_reusejp_3232_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v_a_3228_);
v___x_3233_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3232_;
}
v_reusejp_3232_:
{
return v___x_3233_;
}
}
}
}
}
}
default: 
{
lean_object* v_e_x3f_3266_; 
v_e_x3f_3266_ = lean_ctor_get(v_a_3107_, 0);
lean_inc(v_e_x3f_3266_);
lean_dec_ref(v_a_3107_);
if (lean_obj_tag(v_e_x3f_3266_) == 0)
{
lean_object* v___x_3268_; 
lean_dec(v_declName_3085_);
lean_del_object(v___x_3083_);
lean_del_object(v___x_3078_);
lean_del_object(v___x_3074_);
lean_del_object(v___x_3062_);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 1, v_snd_3081_);
lean_ctor_set(v___x_3070_, 0, v_fst_3080_);
v___x_3268_ = v___x_3070_;
goto v_reusejp_3267_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v_fst_3080_);
lean_ctor_set(v_reuseFailAlloc_3272_, 1, v_snd_3081_);
v___x_3268_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3267_;
}
v_reusejp_3267_:
{
lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; 
v___x_3269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3269_, 0, v_fst_3076_);
lean_ctor_set(v___x_3269_, 1, v___x_3268_);
v___x_3270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3270_, 0, v_fst_3072_);
lean_ctor_set(v___x_3270_, 1, v___x_3269_);
v___x_3271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3271_, 0, v___x_3086_);
lean_ctor_set(v___x_3271_, 1, v___x_3270_);
v_a_3053_ = v___x_3271_;
goto v___jp_3052_;
}
}
else
{
lean_object* v_val_3273_; lean_object* v___y_3275_; lean_object* v___y_3276_; lean_object* v___y_3277_; lean_object* v___y_3278_; lean_object* v___y_3279_; lean_object* v___x_3305_; lean_object* v___x_3306_; 
lean_dec(v_fst_3080_);
lean_del_object(v___x_3070_);
v_val_3273_ = lean_ctor_get(v_e_x3f_3266_, 0);
lean_inc(v_val_3273_);
lean_dec_ref(v_e_x3f_3266_);
v___x_3305_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__3));
v___x_3306_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg(v___x_3305_, v___y_3049_);
if (lean_obj_tag(v___x_3306_) == 0)
{
lean_object* v_a_3307_; uint8_t v___x_3308_; 
v_a_3307_ = lean_ctor_get(v___x_3306_, 0);
lean_inc(v_a_3307_);
lean_dec_ref(v___x_3306_);
v___x_3308_ = lean_unbox(v_a_3307_);
lean_dec(v_a_3307_);
if (v___x_3308_ == 0)
{
lean_dec(v_fst_3072_);
v___y_3275_ = v___y_3046_;
v___y_3276_ = v___y_3047_;
v___y_3277_ = v___y_3048_;
v___y_3278_ = v___y_3049_;
v___y_3279_ = v___y_3050_;
goto v___jp_3274_;
}
else
{
lean_object* v_expr_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; 
v_expr_3309_ = lean_ctor_get(v_val_3273_, 0);
v___x_3310_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5);
v___x_3311_ = l_Lean_MessageData_ofExpr(v_fst_3072_);
v___x_3312_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3312_, 0, v___x_3310_);
lean_ctor_set(v___x_3312_, 1, v___x_3311_);
v___x_3313_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7);
v___x_3314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3314_, 0, v___x_3312_);
lean_ctor_set(v___x_3314_, 1, v___x_3313_);
lean_inc_ref(v_expr_3309_);
v___x_3315_ = l_Lean_MessageData_ofExpr(v_expr_3309_);
v___x_3316_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3316_, 0, v___x_3314_);
lean_ctor_set(v___x_3316_, 1, v___x_3315_);
v___x_3317_ = l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg(v___x_3305_, v___x_3316_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_);
if (lean_obj_tag(v___x_3317_) == 0)
{
lean_dec_ref(v___x_3317_);
v___y_3275_ = v___y_3046_;
v___y_3276_ = v___y_3047_;
v___y_3277_ = v___y_3048_;
v___y_3278_ = v___y_3049_;
v___y_3279_ = v___y_3050_;
goto v___jp_3274_;
}
else
{
lean_object* v_a_3318_; lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3325_; 
lean_dec(v_val_3273_);
lean_dec(v_declName_3085_);
lean_del_object(v___x_3083_);
lean_dec(v_snd_3081_);
lean_del_object(v___x_3078_);
lean_dec(v_fst_3076_);
lean_del_object(v___x_3074_);
lean_del_object(v___x_3062_);
lean_dec_ref(v_erased_3037_);
v_a_3318_ = lean_ctor_get(v___x_3317_, 0);
v_isSharedCheck_3325_ = !lean_is_exclusive(v___x_3317_);
if (v_isSharedCheck_3325_ == 0)
{
v___x_3320_ = v___x_3317_;
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
else
{
lean_inc(v_a_3318_);
lean_dec(v___x_3317_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3325_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v___x_3323_; 
if (v_isShared_3321_ == 0)
{
v___x_3323_ = v___x_3320_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v_a_3318_);
v___x_3323_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
return v___x_3323_;
}
}
}
}
}
else
{
lean_object* v_a_3326_; lean_object* v___x_3328_; uint8_t v_isShared_3329_; uint8_t v_isSharedCheck_3333_; 
lean_dec(v_val_3273_);
lean_dec(v_declName_3085_);
lean_del_object(v___x_3083_);
lean_dec(v_snd_3081_);
lean_del_object(v___x_3078_);
lean_dec(v_fst_3076_);
lean_del_object(v___x_3074_);
lean_dec(v_fst_3072_);
lean_del_object(v___x_3062_);
lean_dec_ref(v_erased_3037_);
v_a_3326_ = lean_ctor_get(v___x_3306_, 0);
v_isSharedCheck_3333_ = !lean_is_exclusive(v___x_3306_);
if (v_isSharedCheck_3333_ == 0)
{
v___x_3328_ = v___x_3306_;
v_isShared_3329_ = v_isSharedCheck_3333_;
goto v_resetjp_3327_;
}
else
{
lean_inc(v_a_3326_);
lean_dec(v___x_3306_);
v___x_3328_ = lean_box(0);
v_isShared_3329_ = v_isSharedCheck_3333_;
goto v_resetjp_3327_;
}
v_resetjp_3327_:
{
lean_object* v___x_3331_; 
if (v_isShared_3329_ == 0)
{
v___x_3331_ = v___x_3328_;
goto v_reusejp_3330_;
}
else
{
lean_object* v_reuseFailAlloc_3332_; 
v_reuseFailAlloc_3332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3332_, 0, v_a_3326_);
v___x_3331_ = v_reuseFailAlloc_3332_;
goto v_reusejp_3330_;
}
v_reusejp_3330_:
{
return v___x_3331_;
}
}
}
v___jp_3274_:
{
lean_object* v___x_3280_; lean_object* v___x_3281_; 
v___x_3280_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_3280_, 0, v_declName_3085_);
lean_ctor_set_uint8(v___x_3280_, sizeof(void*)*1, v_post_3038_);
lean_ctor_set_uint8(v___x_3280_, sizeof(void*)*1 + 1, v___x_3109_);
v___x_3281_ = l_Lean_Meta_Simp_recordSimpTheorem___redArg(v___x_3280_, v___y_3275_, v___y_3278_, v___y_3279_);
if (lean_obj_tag(v___x_3281_) == 0)
{
lean_object* v_expr_3282_; lean_object* v_proof_x3f_3283_; uint8_t v_cache_3284_; lean_object* v___x_3285_; 
lean_dec_ref(v___x_3281_);
v_expr_3282_ = lean_ctor_get(v_val_3273_, 0);
lean_inc_ref(v_expr_3282_);
v_proof_x3f_3283_ = lean_ctor_get(v_val_3273_, 1);
lean_inc(v_proof_x3f_3283_);
v_cache_3284_ = lean_ctor_get_uint8(v_val_3273_, sizeof(void*)*2);
lean_dec(v_val_3273_);
v___x_3285_ = l_Lean_Meta_mkEqTrans_x3f(v_fst_3076_, v_proof_x3f_3283_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_);
if (lean_obj_tag(v___x_3285_) == 0)
{
uint8_t v___x_3286_; 
v___x_3286_ = lean_unbox(v_snd_3081_);
lean_dec(v_snd_3081_);
if (v___x_3286_ == 0)
{
lean_object* v_a_3287_; 
v_a_3287_ = lean_ctor_get(v___x_3285_, 0);
lean_inc(v_a_3287_);
lean_dec_ref(v___x_3285_);
v___y_3088_ = v_expr_3282_;
v___y_3089_ = v_a_3287_;
v___y_3090_ = v___x_3109_;
goto v___jp_3087_;
}
else
{
lean_object* v_a_3288_; 
v_a_3288_ = lean_ctor_get(v___x_3285_, 0);
lean_inc(v_a_3288_);
lean_dec_ref(v___x_3285_);
v___y_3088_ = v_expr_3282_;
v___y_3089_ = v_a_3288_;
v___y_3090_ = v_cache_3284_;
goto v___jp_3087_;
}
}
else
{
lean_object* v_a_3289_; lean_object* v___x_3291_; uint8_t v_isShared_3292_; uint8_t v_isSharedCheck_3296_; 
lean_dec_ref(v_expr_3282_);
lean_del_object(v___x_3083_);
lean_dec(v_snd_3081_);
lean_del_object(v___x_3078_);
lean_del_object(v___x_3074_);
lean_del_object(v___x_3062_);
lean_dec_ref(v_erased_3037_);
v_a_3289_ = lean_ctor_get(v___x_3285_, 0);
v_isSharedCheck_3296_ = !lean_is_exclusive(v___x_3285_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_3291_ = v___x_3285_;
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
else
{
lean_inc(v_a_3289_);
lean_dec(v___x_3285_);
v___x_3291_ = lean_box(0);
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
v_resetjp_3290_:
{
lean_object* v___x_3294_; 
if (v_isShared_3292_ == 0)
{
v___x_3294_ = v___x_3291_;
goto v_reusejp_3293_;
}
else
{
lean_object* v_reuseFailAlloc_3295_; 
v_reuseFailAlloc_3295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3295_, 0, v_a_3289_);
v___x_3294_ = v_reuseFailAlloc_3295_;
goto v_reusejp_3293_;
}
v_reusejp_3293_:
{
return v___x_3294_;
}
}
}
}
else
{
lean_object* v_a_3297_; lean_object* v___x_3299_; uint8_t v_isShared_3300_; uint8_t v_isSharedCheck_3304_; 
lean_dec(v_val_3273_);
lean_del_object(v___x_3083_);
lean_dec(v_snd_3081_);
lean_del_object(v___x_3078_);
lean_dec(v_fst_3076_);
lean_del_object(v___x_3074_);
lean_del_object(v___x_3062_);
lean_dec_ref(v_erased_3037_);
v_a_3297_ = lean_ctor_get(v___x_3281_, 0);
v_isSharedCheck_3304_ = !lean_is_exclusive(v___x_3281_);
if (v_isSharedCheck_3304_ == 0)
{
v___x_3299_ = v___x_3281_;
v_isShared_3300_ = v_isSharedCheck_3304_;
goto v_resetjp_3298_;
}
else
{
lean_inc(v_a_3297_);
lean_dec(v___x_3281_);
v___x_3299_ = lean_box(0);
v_isShared_3300_ = v_isSharedCheck_3304_;
goto v_resetjp_3298_;
}
v_resetjp_3298_:
{
lean_object* v___x_3302_; 
if (v_isShared_3300_ == 0)
{
v___x_3302_ = v___x_3299_;
goto v_reusejp_3301_;
}
else
{
lean_object* v_reuseFailAlloc_3303_; 
v_reuseFailAlloc_3303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3303_, 0, v_a_3297_);
v___x_3302_ = v_reuseFailAlloc_3303_;
goto v_reusejp_3301_;
}
v_reusejp_3301_:
{
return v___x_3302_;
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
lean_object* v_a_3334_; lean_object* v___x_3336_; uint8_t v_isShared_3337_; uint8_t v_isSharedCheck_3341_; 
lean_dec(v_declName_3085_);
lean_del_object(v___x_3083_);
lean_dec(v_snd_3081_);
lean_dec(v_fst_3080_);
lean_del_object(v___x_3078_);
lean_dec(v_fst_3076_);
lean_del_object(v___x_3074_);
lean_dec(v_fst_3072_);
lean_del_object(v___x_3070_);
lean_del_object(v___x_3062_);
lean_dec_ref(v_erased_3037_);
v_a_3334_ = lean_ctor_get(v___x_3106_, 0);
v_isSharedCheck_3341_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3341_ == 0)
{
v___x_3336_ = v___x_3106_;
v_isShared_3337_ = v_isSharedCheck_3341_;
goto v_resetjp_3335_;
}
else
{
lean_inc(v_a_3334_);
lean_dec(v___x_3106_);
v___x_3336_ = lean_box(0);
v_isShared_3337_ = v_isSharedCheck_3341_;
goto v_resetjp_3335_;
}
v_resetjp_3335_:
{
lean_object* v___x_3339_; 
if (v_isShared_3337_ == 0)
{
v___x_3339_ = v___x_3336_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3340_; 
v_reuseFailAlloc_3340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3340_, 0, v_a_3334_);
v___x_3339_ = v_reuseFailAlloc_3340_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
return v___x_3339_;
}
}
}
}
else
{
lean_object* v___x_3343_; uint8_t v_isShared_3344_; uint8_t v_isSharedCheck_3353_; 
lean_del_object(v___x_3083_);
lean_del_object(v___x_3078_);
lean_del_object(v___x_3074_);
lean_dec(v_snd_3068_);
lean_del_object(v___x_3062_);
v_isSharedCheck_3353_ = !lean_is_exclusive(v_fst_3066_);
if (v_isSharedCheck_3353_ == 0)
{
lean_object* v_unused_3354_; lean_object* v_unused_3355_; 
v_unused_3354_ = lean_ctor_get(v_fst_3066_, 1);
lean_dec(v_unused_3354_);
v_unused_3355_ = lean_ctor_get(v_fst_3066_, 0);
lean_dec(v_unused_3355_);
v___x_3343_ = v_fst_3066_;
v_isShared_3344_ = v_isSharedCheck_3353_;
goto v_resetjp_3342_;
}
else
{
lean_dec(v_fst_3066_);
v___x_3343_ = lean_box(0);
v_isShared_3344_ = v_isSharedCheck_3353_;
goto v_resetjp_3342_;
}
v_resetjp_3342_:
{
lean_object* v___x_3346_; 
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 1, v_snd_3081_);
lean_ctor_set(v___x_3070_, 0, v_fst_3080_);
v___x_3346_ = v___x_3070_;
goto v_reusejp_3345_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v_fst_3080_);
lean_ctor_set(v_reuseFailAlloc_3352_, 1, v_snd_3081_);
v___x_3346_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3345_;
}
v_reusejp_3345_:
{
lean_object* v___x_3348_; 
if (v_isShared_3344_ == 0)
{
lean_ctor_set(v___x_3343_, 1, v___x_3346_);
lean_ctor_set(v___x_3343_, 0, v_fst_3076_);
v___x_3348_ = v___x_3343_;
goto v_reusejp_3347_;
}
else
{
lean_object* v_reuseFailAlloc_3351_; 
v_reuseFailAlloc_3351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3351_, 0, v_fst_3076_);
lean_ctor_set(v_reuseFailAlloc_3351_, 1, v___x_3346_);
v___x_3348_ = v_reuseFailAlloc_3351_;
goto v_reusejp_3347_;
}
v_reusejp_3347_:
{
lean_object* v___x_3349_; lean_object* v___x_3350_; 
v___x_3349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3349_, 0, v_fst_3072_);
lean_ctor_set(v___x_3349_, 1, v___x_3348_);
v___x_3350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3350_, 0, v___x_3086_);
lean_ctor_set(v___x_3350_, 1, v___x_3349_);
v_a_3053_ = v___x_3350_;
goto v___jp_3052_;
}
}
}
}
v___jp_3087_:
{
lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3094_; 
v___x_3091_ = lean_box(v___x_3057_);
v___x_3092_ = lean_box(v___y_3090_);
if (v_isShared_3084_ == 0)
{
lean_ctor_set(v___x_3083_, 1, v___x_3092_);
lean_ctor_set(v___x_3083_, 0, v___x_3091_);
v___x_3094_ = v___x_3083_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3104_; 
v_reuseFailAlloc_3104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3104_, 0, v___x_3091_);
lean_ctor_set(v_reuseFailAlloc_3104_, 1, v___x_3092_);
v___x_3094_ = v_reuseFailAlloc_3104_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
lean_object* v___x_3096_; 
if (v_isShared_3079_ == 0)
{
lean_ctor_set(v___x_3078_, 1, v___x_3094_);
lean_ctor_set(v___x_3078_, 0, v___y_3089_);
v___x_3096_ = v___x_3078_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v___y_3089_);
lean_ctor_set(v_reuseFailAlloc_3103_, 1, v___x_3094_);
v___x_3096_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
lean_object* v___x_3098_; 
if (v_isShared_3075_ == 0)
{
lean_ctor_set(v___x_3074_, 1, v___x_3096_);
lean_ctor_set(v___x_3074_, 0, v___y_3088_);
v___x_3098_ = v___x_3074_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3102_; 
v_reuseFailAlloc_3102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3102_, 0, v___y_3088_);
lean_ctor_set(v_reuseFailAlloc_3102_, 1, v___x_3096_);
v___x_3098_ = v_reuseFailAlloc_3102_;
goto v_reusejp_3097_;
}
v_reusejp_3097_:
{
lean_object* v___x_3100_; 
if (v_isShared_3063_ == 0)
{
lean_ctor_set(v___x_3062_, 1, v___x_3098_);
lean_ctor_set(v___x_3062_, 0, v___x_3086_);
v___x_3100_ = v___x_3062_;
goto v_reusejp_3099_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v___x_3086_);
lean_ctor_set(v_reuseFailAlloc_3101_, 1, v___x_3098_);
v___x_3100_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3099_;
}
v_reusejp_3099_:
{
v_a_3053_ = v___x_3100_;
goto v___jp_3052_;
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
}
v___jp_3052_:
{
size_t v___x_3054_; size_t v___x_3055_; 
v___x_3054_ = ((size_t)1ULL);
v___x_3055_ = lean_usize_add(v_i_3042_, v___x_3054_);
v_i_3042_ = v___x_3055_;
v_b_3043_ = v_a_3053_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___boxed(lean_object* v_erased_3365_, lean_object* v_post_3366_, lean_object* v___x_3367_, lean_object* v_as_3368_, lean_object* v_sz_3369_, lean_object* v_i_3370_, lean_object* v_b_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_){
_start:
{
uint8_t v_post_boxed_3380_; size_t v_sz_boxed_3381_; size_t v_i_boxed_3382_; lean_object* v_res_3383_; 
v_post_boxed_3380_ = lean_unbox(v_post_3366_);
v_sz_boxed_3381_ = lean_unbox_usize(v_sz_3369_);
lean_dec(v_sz_3369_);
v_i_boxed_3382_ = lean_unbox_usize(v_i_3370_);
lean_dec(v_i_3370_);
v_res_3383_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2(v_erased_3365_, v_post_boxed_3380_, v___x_3367_, v_as_3368_, v_sz_boxed_3381_, v_i_boxed_3382_, v_b_3371_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_, v___y_3376_, v___y_3377_, v___y_3378_);
lean_dec(v___y_3378_);
lean_dec_ref(v___y_3377_);
lean_dec(v___y_3376_);
lean_dec_ref(v___y_3375_);
lean_dec(v___y_3374_);
lean_dec_ref(v___y_3373_);
lean_dec(v___y_3372_);
lean_dec_ref(v_as_3368_);
lean_dec(v___x_3367_);
return v_res_3383_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simprocCore___closed__2(void){
_start:
{
lean_object* v___x_3387_; lean_object* v___x_3388_; 
v___x_3387_ = ((lean_object*)(l_Lean_Meta_Simp_simprocCore___closed__1));
v___x_3388_ = l_Lean_stringToMessageData(v___x_3387_);
return v___x_3388_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_simprocCore___closed__4(void){
_start:
{
lean_object* v___x_3390_; lean_object* v___x_3391_; 
v___x_3390_ = ((lean_object*)(l_Lean_Meta_Simp_simprocCore___closed__3));
v___x_3391_ = l_Lean_stringToMessageData(v___x_3390_);
return v___x_3391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_simprocCore(uint8_t v_post_3396_, lean_object* v_s_3397_, lean_object* v_erased_3398_, lean_object* v_e_3399_, lean_object* v_a_3400_, lean_object* v_a_3401_, lean_object* v_a_3402_, lean_object* v_a_3403_, lean_object* v_a_3404_, lean_object* v_a_3405_, lean_object* v_a_3406_){
_start:
{
lean_object* v___y_3412_; lean_object* v_a_3434_; lean_object* v_indexConfig_3488_; lean_object* v_config_3489_; uint8_t v_trackZetaDelta_3490_; lean_object* v_zetaDeltaSet_3491_; lean_object* v_lctx_3492_; lean_object* v_localInstances_3493_; lean_object* v_defEqCtx_x3f_3494_; lean_object* v_synthPendingDepth_3495_; lean_object* v_canUnfold_x3f_3496_; uint8_t v_univApprox_3497_; uint8_t v_inTypeClassResolution_3498_; uint8_t v_cacheInferType_3499_; uint64_t v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; 
v_indexConfig_3488_ = lean_ctor_get(v_a_3401_, 4);
v_config_3489_ = lean_ctor_get(v_indexConfig_3488_, 0);
v_trackZetaDelta_3490_ = lean_ctor_get_uint8(v_a_3403_, sizeof(void*)*7);
v_zetaDeltaSet_3491_ = lean_ctor_get(v_a_3403_, 1);
v_lctx_3492_ = lean_ctor_get(v_a_3403_, 2);
v_localInstances_3493_ = lean_ctor_get(v_a_3403_, 3);
v_defEqCtx_x3f_3494_ = lean_ctor_get(v_a_3403_, 4);
v_synthPendingDepth_3495_ = lean_ctor_get(v_a_3403_, 5);
v_canUnfold_x3f_3496_ = lean_ctor_get(v_a_3403_, 6);
v_univApprox_3497_ = lean_ctor_get_uint8(v_a_3403_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3498_ = lean_ctor_get_uint8(v_a_3403_, sizeof(void*)*7 + 2);
v_cacheInferType_3499_ = lean_ctor_get_uint8(v_a_3403_, sizeof(void*)*7 + 3);
v___x_3500_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v_config_3489_);
lean_inc_ref(v_config_3489_);
v___x_3501_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3501_, 0, v_config_3489_);
lean_ctor_set_uint64(v___x_3501_, sizeof(void*)*1, v___x_3500_);
lean_inc(v_canUnfold_x3f_3496_);
lean_inc(v_synthPendingDepth_3495_);
lean_inc(v_defEqCtx_x3f_3494_);
lean_inc_ref(v_localInstances_3493_);
lean_inc_ref(v_lctx_3492_);
lean_inc(v_zetaDeltaSet_3491_);
v___x_3502_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3502_, 0, v___x_3501_);
lean_ctor_set(v___x_3502_, 1, v_zetaDeltaSet_3491_);
lean_ctor_set(v___x_3502_, 2, v_lctx_3492_);
lean_ctor_set(v___x_3502_, 3, v_localInstances_3493_);
lean_ctor_set(v___x_3502_, 4, v_defEqCtx_x3f_3494_);
lean_ctor_set(v___x_3502_, 5, v_synthPendingDepth_3495_);
lean_ctor_set(v___x_3502_, 6, v_canUnfold_x3f_3496_);
lean_ctor_set_uint8(v___x_3502_, sizeof(void*)*7, v_trackZetaDelta_3490_);
lean_ctor_set_uint8(v___x_3502_, sizeof(void*)*7 + 1, v_univApprox_3497_);
lean_ctor_set_uint8(v___x_3502_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3498_);
lean_ctor_set_uint8(v___x_3502_, sizeof(void*)*7 + 3, v_cacheInferType_3499_);
lean_inc_ref(v_e_3399_);
v___x_3503_ = l_Lean_Meta_DiscrTree_getMatchWithExtra___redArg(v_s_3397_, v_e_3399_, v___x_3502_, v_a_3404_, v_a_3405_, v_a_3406_);
lean_dec_ref(v___x_3502_);
if (lean_obj_tag(v___x_3503_) == 0)
{
lean_object* v_a_3504_; 
v_a_3504_ = lean_ctor_get(v___x_3503_, 0);
lean_inc(v_a_3504_);
lean_dec_ref(v___x_3503_);
v_a_3434_ = v_a_3504_;
goto v___jp_3433_;
}
else
{
if (lean_obj_tag(v___x_3503_) == 0)
{
lean_object* v_a_3505_; 
v_a_3505_ = lean_ctor_get(v___x_3503_, 0);
lean_inc(v_a_3505_);
lean_dec_ref(v___x_3503_);
v_a_3434_ = v_a_3505_;
goto v___jp_3433_;
}
else
{
lean_object* v_a_3506_; lean_object* v___x_3508_; uint8_t v_isShared_3509_; uint8_t v_isSharedCheck_3513_; 
lean_dec_ref(v_e_3399_);
lean_dec_ref(v_erased_3398_);
v_a_3506_ = lean_ctor_get(v___x_3503_, 0);
v_isSharedCheck_3513_ = !lean_is_exclusive(v___x_3503_);
if (v_isSharedCheck_3513_ == 0)
{
v___x_3508_ = v___x_3503_;
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
else
{
lean_inc(v_a_3506_);
lean_dec(v___x_3503_);
v___x_3508_ = lean_box(0);
v_isShared_3509_ = v_isSharedCheck_3513_;
goto v_resetjp_3507_;
}
v_resetjp_3507_:
{
lean_object* v___x_3511_; 
if (v_isShared_3509_ == 0)
{
v___x_3511_ = v___x_3508_;
goto v_reusejp_3510_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v_a_3506_);
v___x_3511_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3510_;
}
v_reusejp_3510_:
{
return v___x_3511_;
}
}
}
}
v___jp_3408_:
{
lean_object* v___x_3409_; lean_object* v___x_3410_; 
v___x_3409_ = ((lean_object*)(l_Lean_Meta_Simp_simprocCore___closed__0));
v___x_3410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3410_, 0, v___x_3409_);
return v___x_3410_;
}
v___jp_3411_:
{
lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v_a_3415_; uint8_t v___x_3416_; 
v___x_3413_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__3));
v___x_3414_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg(v___x_3413_, v_a_3405_);
v_a_3415_ = lean_ctor_get(v___x_3414_, 0);
lean_inc(v_a_3415_);
lean_dec_ref(v___x_3414_);
v___x_3416_ = lean_unbox(v_a_3415_);
lean_dec(v_a_3415_);
if (v___x_3416_ == 0)
{
lean_dec_ref(v_e_3399_);
goto v___jp_3408_;
}
else
{
lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; 
v___x_3417_ = lean_obj_once(&l_Lean_Meta_Simp_simprocCore___closed__2, &l_Lean_Meta_Simp_simprocCore___closed__2_once, _init_l_Lean_Meta_Simp_simprocCore___closed__2);
lean_inc_ref(v___y_3412_);
v___x_3418_ = l_Lean_stringToMessageData(v___y_3412_);
v___x_3419_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3419_, 0, v___x_3417_);
lean_ctor_set(v___x_3419_, 1, v___x_3418_);
v___x_3420_ = lean_obj_once(&l_Lean_Meta_Simp_simprocCore___closed__4, &l_Lean_Meta_Simp_simprocCore___closed__4_once, _init_l_Lean_Meta_Simp_simprocCore___closed__4);
v___x_3421_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3421_, 0, v___x_3419_);
lean_ctor_set(v___x_3421_, 1, v___x_3420_);
v___x_3422_ = l_Lean_MessageData_ofExpr(v_e_3399_);
v___x_3423_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3423_, 0, v___x_3421_);
lean_ctor_set(v___x_3423_, 1, v___x_3422_);
v___x_3424_ = l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg(v___x_3413_, v___x_3423_, v_a_3403_, v_a_3404_, v_a_3405_, v_a_3406_);
if (lean_obj_tag(v___x_3424_) == 0)
{
lean_dec_ref(v___x_3424_);
goto v___jp_3408_;
}
else
{
lean_object* v_a_3425_; lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3432_; 
v_a_3425_ = lean_ctor_get(v___x_3424_, 0);
v_isSharedCheck_3432_ = !lean_is_exclusive(v___x_3424_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3427_ = v___x_3424_;
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
else
{
lean_inc(v_a_3425_);
lean_dec(v___x_3424_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3432_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
lean_object* v___x_3430_; 
if (v_isShared_3428_ == 0)
{
v___x_3430_ = v___x_3427_;
goto v_reusejp_3429_;
}
else
{
lean_object* v_reuseFailAlloc_3431_; 
v_reuseFailAlloc_3431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3431_, 0, v_a_3425_);
v___x_3430_ = v_reuseFailAlloc_3431_;
goto v_reusejp_3429_;
}
v_reusejp_3429_:
{
return v___x_3430_;
}
}
}
}
}
v___jp_3433_:
{
lean_object* v___x_3435_; lean_object* v___x_3436_; uint8_t v___x_3437_; 
v___x_3435_ = lean_array_get_size(v_a_3434_);
v___x_3436_ = lean_unsigned_to_nat(0u);
v___x_3437_ = lean_nat_dec_eq(v___x_3435_, v___x_3436_);
if (v___x_3437_ == 0)
{
uint8_t v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; size_t v_sz_3446_; size_t v___x_3447_; lean_object* v___x_3448_; 
v___x_3438_ = 1;
v___x_3439_ = lean_box(0);
v___x_3440_ = lean_box(v___x_3437_);
v___x_3441_ = lean_box(v___x_3438_);
v___x_3442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3442_, 0, v___x_3440_);
lean_ctor_set(v___x_3442_, 1, v___x_3441_);
v___x_3443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3443_, 0, v___x_3439_);
lean_ctor_set(v___x_3443_, 1, v___x_3442_);
v___x_3444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3444_, 0, v_e_3399_);
lean_ctor_set(v___x_3444_, 1, v___x_3443_);
v___x_3445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3445_, 0, v___x_3439_);
lean_ctor_set(v___x_3445_, 1, v___x_3444_);
v_sz_3446_ = lean_array_size(v_a_3434_);
v___x_3447_ = ((size_t)0ULL);
v___x_3448_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2(v_erased_3398_, v_post_3396_, v___x_3435_, v_a_3434_, v_sz_3446_, v___x_3447_, v___x_3445_, v_a_3400_, v_a_3401_, v_a_3402_, v_a_3403_, v_a_3404_, v_a_3405_, v_a_3406_);
lean_dec_ref(v_a_3434_);
if (lean_obj_tag(v___x_3448_) == 0)
{
lean_object* v_a_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3477_; 
v_a_3449_ = lean_ctor_get(v___x_3448_, 0);
v_isSharedCheck_3477_ = !lean_is_exclusive(v___x_3448_);
if (v_isSharedCheck_3477_ == 0)
{
v___x_3451_ = v___x_3448_;
v_isShared_3452_ = v_isSharedCheck_3477_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_a_3449_);
lean_dec(v___x_3448_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3477_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v_fst_3453_; 
v_fst_3453_ = lean_ctor_get(v_a_3449_, 0);
if (lean_obj_tag(v_fst_3453_) == 0)
{
lean_object* v_snd_3454_; lean_object* v_snd_3455_; lean_object* v_snd_3456_; lean_object* v_fst_3457_; uint8_t v___x_3458_; 
v_snd_3454_ = lean_ctor_get(v_a_3449_, 1);
lean_inc(v_snd_3454_);
lean_dec(v_a_3449_);
v_snd_3455_ = lean_ctor_get(v_snd_3454_, 1);
lean_inc(v_snd_3455_);
v_snd_3456_ = lean_ctor_get(v_snd_3455_, 1);
lean_inc(v_snd_3456_);
v_fst_3457_ = lean_ctor_get(v_snd_3456_, 0);
v___x_3458_ = lean_unbox(v_fst_3457_);
if (v___x_3458_ == 0)
{
lean_object* v___x_3459_; lean_object* v___x_3461_; 
lean_dec(v_snd_3456_);
lean_dec(v_snd_3455_);
lean_dec(v_snd_3454_);
v___x_3459_ = ((lean_object*)(l_Lean_Meta_Simp_simprocCore___closed__5));
if (v_isShared_3452_ == 0)
{
lean_ctor_set(v___x_3451_, 0, v___x_3459_);
v___x_3461_ = v___x_3451_;
goto v_reusejp_3460_;
}
else
{
lean_object* v_reuseFailAlloc_3462_; 
v_reuseFailAlloc_3462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3462_, 0, v___x_3459_);
v___x_3461_ = v_reuseFailAlloc_3462_;
goto v_reusejp_3460_;
}
v_reusejp_3460_:
{
return v___x_3461_;
}
}
else
{
lean_object* v_fst_3463_; lean_object* v_fst_3464_; lean_object* v_snd_3465_; lean_object* v___x_3466_; uint8_t v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3471_; 
v_fst_3463_ = lean_ctor_get(v_snd_3454_, 0);
lean_inc(v_fst_3463_);
lean_dec(v_snd_3454_);
v_fst_3464_ = lean_ctor_get(v_snd_3455_, 0);
lean_inc(v_fst_3464_);
lean_dec(v_snd_3455_);
v_snd_3465_ = lean_ctor_get(v_snd_3456_, 1);
lean_inc(v_snd_3465_);
lean_dec(v_snd_3456_);
v___x_3466_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3466_, 0, v_fst_3463_);
lean_ctor_set(v___x_3466_, 1, v_fst_3464_);
v___x_3467_ = lean_unbox(v_snd_3465_);
lean_dec(v_snd_3465_);
lean_ctor_set_uint8(v___x_3466_, sizeof(void*)*2, v___x_3467_);
v___x_3468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3468_, 0, v___x_3466_);
v___x_3469_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3469_, 0, v___x_3468_);
if (v_isShared_3452_ == 0)
{
lean_ctor_set(v___x_3451_, 0, v___x_3469_);
v___x_3471_ = v___x_3451_;
goto v_reusejp_3470_;
}
else
{
lean_object* v_reuseFailAlloc_3472_; 
v_reuseFailAlloc_3472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3472_, 0, v___x_3469_);
v___x_3471_ = v_reuseFailAlloc_3472_;
goto v_reusejp_3470_;
}
v_reusejp_3470_:
{
return v___x_3471_;
}
}
}
else
{
lean_object* v_val_3473_; lean_object* v___x_3475_; 
lean_inc_ref(v_fst_3453_);
lean_dec(v_a_3449_);
v_val_3473_ = lean_ctor_get(v_fst_3453_, 0);
lean_inc(v_val_3473_);
lean_dec_ref(v_fst_3453_);
if (v_isShared_3452_ == 0)
{
lean_ctor_set(v___x_3451_, 0, v_val_3473_);
v___x_3475_ = v___x_3451_;
goto v_reusejp_3474_;
}
else
{
lean_object* v_reuseFailAlloc_3476_; 
v_reuseFailAlloc_3476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3476_, 0, v_val_3473_);
v___x_3475_ = v_reuseFailAlloc_3476_;
goto v_reusejp_3474_;
}
v_reusejp_3474_:
{
return v___x_3475_;
}
}
}
}
else
{
lean_object* v_a_3478_; lean_object* v___x_3480_; uint8_t v_isShared_3481_; uint8_t v_isSharedCheck_3485_; 
v_a_3478_ = lean_ctor_get(v___x_3448_, 0);
v_isSharedCheck_3485_ = !lean_is_exclusive(v___x_3448_);
if (v_isSharedCheck_3485_ == 0)
{
v___x_3480_ = v___x_3448_;
v_isShared_3481_ = v_isSharedCheck_3485_;
goto v_resetjp_3479_;
}
else
{
lean_inc(v_a_3478_);
lean_dec(v___x_3448_);
v___x_3480_ = lean_box(0);
v_isShared_3481_ = v_isSharedCheck_3485_;
goto v_resetjp_3479_;
}
v_resetjp_3479_:
{
lean_object* v___x_3483_; 
if (v_isShared_3481_ == 0)
{
v___x_3483_ = v___x_3480_;
goto v_reusejp_3482_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v_a_3478_);
v___x_3483_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3482_;
}
v_reusejp_3482_:
{
return v___x_3483_;
}
}
}
}
else
{
lean_dec_ref(v_a_3434_);
lean_dec_ref(v_erased_3398_);
if (v_post_3396_ == 0)
{
lean_object* v___x_3486_; 
v___x_3486_ = ((lean_object*)(l_Lean_Meta_Simp_simprocCore___closed__6));
v___y_3412_ = v___x_3486_;
goto v___jp_3411_;
}
else
{
lean_object* v___x_3487_; 
v___x_3487_ = ((lean_object*)(l_Lean_Meta_Simp_simprocCore___closed__7));
v___y_3412_ = v___x_3487_;
goto v___jp_3411_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_simprocCore___boxed(lean_object* v_post_3514_, lean_object* v_s_3515_, lean_object* v_erased_3516_, lean_object* v_e_3517_, lean_object* v_a_3518_, lean_object* v_a_3519_, lean_object* v_a_3520_, lean_object* v_a_3521_, lean_object* v_a_3522_, lean_object* v_a_3523_, lean_object* v_a_3524_, lean_object* v_a_3525_){
_start:
{
uint8_t v_post_boxed_3526_; lean_object* v_res_3527_; 
v_post_boxed_3526_ = lean_unbox(v_post_3514_);
v_res_3527_ = l_Lean_Meta_Simp_simprocCore(v_post_boxed_3526_, v_s_3515_, v_erased_3516_, v_e_3517_, v_a_3518_, v_a_3519_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
lean_dec(v_a_3524_);
lean_dec_ref(v_a_3523_);
lean_dec(v_a_3522_);
lean_dec_ref(v_a_3521_);
lean_dec(v_a_3520_);
lean_dec_ref(v_a_3519_);
lean_dec(v_a_3518_);
return v_res_3527_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1(lean_object* v_cls_3528_, lean_object* v_msg_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_){
_start:
{
lean_object* v___x_3538_; 
v___x_3538_ = l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg(v_cls_3528_, v_msg_3529_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_);
return v___x_3538_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___boxed(lean_object* v_cls_3539_, lean_object* v_msg_3540_, lean_object* v___y_3541_, lean_object* v___y_3542_, lean_object* v___y_3543_, lean_object* v___y_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_){
_start:
{
lean_object* v_res_3549_; 
v_res_3549_ = l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1(v_cls_3539_, v_msg_3540_, v___y_3541_, v___y_3542_, v___y_3543_, v___y_3544_, v___y_3545_, v___y_3546_, v___y_3547_);
lean_dec(v___y_3547_);
lean_dec_ref(v___y_3546_);
lean_dec(v___y_3545_);
lean_dec_ref(v___y_3544_);
lean_dec(v___y_3543_);
lean_dec_ref(v___y_3542_);
lean_dec(v___y_3541_);
return v_res_3549_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_dsimprocCore_spec__0(lean_object* v_erased_3550_, uint8_t v_post_3551_, lean_object* v___x_3552_, lean_object* v_as_3553_, size_t v_sz_3554_, size_t v_i_3555_, lean_object* v_b_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_){
_start:
{
lean_object* v_a_3566_; uint8_t v___x_3570_; 
v___x_3570_ = lean_usize_dec_lt(v_i_3555_, v_sz_3554_);
if (v___x_3570_ == 0)
{
lean_object* v___x_3571_; 
lean_dec_ref(v_erased_3550_);
v___x_3571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3571_, 0, v_b_3556_);
return v___x_3571_;
}
else
{
lean_object* v_a_3572_; lean_object* v_snd_3573_; lean_object* v___x_3575_; uint8_t v_isShared_3576_; uint8_t v_isSharedCheck_3775_; 
v_a_3572_ = lean_array_uget(v_as_3553_, v_i_3555_);
v_snd_3573_ = lean_ctor_get(v_b_3556_, 1);
v_isSharedCheck_3775_ = !lean_is_exclusive(v_b_3556_);
if (v_isSharedCheck_3775_ == 0)
{
lean_object* v_unused_3776_; 
v_unused_3776_ = lean_ctor_get(v_b_3556_, 0);
lean_dec(v_unused_3776_);
v___x_3575_ = v_b_3556_;
v_isShared_3576_ = v_isSharedCheck_3775_;
goto v_resetjp_3574_;
}
else
{
lean_inc(v_snd_3573_);
lean_dec(v_b_3556_);
v___x_3575_ = lean_box(0);
v_isShared_3576_ = v_isSharedCheck_3775_;
goto v_resetjp_3574_;
}
v_resetjp_3574_:
{
lean_object* v_fst_3577_; lean_object* v_toSimprocOLeanEntry_3578_; lean_object* v_snd_3579_; lean_object* v___x_3581_; uint8_t v_isShared_3582_; uint8_t v_isSharedCheck_3773_; 
v_fst_3577_ = lean_ctor_get(v_a_3572_, 0);
lean_inc(v_fst_3577_);
v_toSimprocOLeanEntry_3578_ = lean_ctor_get(v_fst_3577_, 0);
v_snd_3579_ = lean_ctor_get(v_a_3572_, 1);
v_isSharedCheck_3773_ = !lean_is_exclusive(v_a_3572_);
if (v_isSharedCheck_3773_ == 0)
{
lean_object* v_unused_3774_; 
v_unused_3774_ = lean_ctor_get(v_a_3572_, 0);
lean_dec(v_unused_3774_);
v___x_3581_ = v_a_3572_;
v_isShared_3582_ = v_isSharedCheck_3773_;
goto v_resetjp_3580_;
}
else
{
lean_inc(v_snd_3579_);
lean_dec(v_a_3572_);
v___x_3581_ = lean_box(0);
v_isShared_3582_ = v_isSharedCheck_3773_;
goto v_resetjp_3580_;
}
v_resetjp_3580_:
{
lean_object* v_fst_3583_; lean_object* v_snd_3584_; lean_object* v___x_3586_; uint8_t v_isShared_3587_; uint8_t v_isSharedCheck_3772_; 
v_fst_3583_ = lean_ctor_get(v_snd_3573_, 0);
v_snd_3584_ = lean_ctor_get(v_snd_3573_, 1);
v_isSharedCheck_3772_ = !lean_is_exclusive(v_snd_3573_);
if (v_isSharedCheck_3772_ == 0)
{
v___x_3586_ = v_snd_3573_;
v_isShared_3587_ = v_isSharedCheck_3772_;
goto v_resetjp_3585_;
}
else
{
lean_inc(v_snd_3584_);
lean_inc(v_fst_3583_);
lean_dec(v_snd_3573_);
v___x_3586_ = lean_box(0);
v_isShared_3587_ = v_isSharedCheck_3772_;
goto v_resetjp_3585_;
}
v_resetjp_3585_:
{
lean_object* v_declName_3588_; lean_object* v___x_3589_; uint8_t v___x_3590_; 
v_declName_3588_ = lean_ctor_get(v_toSimprocOLeanEntry_3578_, 0);
lean_inc(v_declName_3588_);
v___x_3589_ = lean_box(0);
lean_inc_ref(v_erased_3550_);
v___x_3590_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0___redArg(v_erased_3550_, v_declName_3588_);
if (v___x_3590_ == 0)
{
lean_object* v___x_3591_; 
lean_inc(v_fst_3583_);
v___x_3591_ = l_Lean_Meta_Simp_SimprocEntry_tryD(v_fst_3577_, v_snd_3579_, v_fst_3583_, v___y_3557_, v___y_3558_, v___y_3559_, v___y_3560_, v___y_3561_, v___y_3562_, v___y_3563_);
lean_dec(v_snd_3579_);
if (lean_obj_tag(v___x_3591_) == 0)
{
lean_object* v_a_3592_; lean_object* v___x_3593_; uint8_t v___x_3594_; lean_object* v___y_3596_; lean_object* v___y_3597_; lean_object* v___y_3598_; lean_object* v___y_3625_; lean_object* v___y_3626_; lean_object* v___y_3627_; 
v_a_3592_ = lean_ctor_get(v___x_3591_, 0);
lean_inc(v_a_3592_);
lean_dec_ref(v___x_3591_);
v___x_3593_ = lean_unsigned_to_nat(0u);
v___x_3594_ = lean_nat_dec_eq(v___x_3552_, v___x_3593_);
switch(lean_obj_tag(v_a_3592_))
{
case 0:
{
lean_object* v_e_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; 
lean_del_object(v___x_3581_);
lean_dec_ref(v_erased_3550_);
v_e_3651_ = lean_ctor_get(v_a_3592_, 0);
v___x_3652_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__3));
v___x_3653_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg(v___x_3652_, v___y_3562_);
if (lean_obj_tag(v___x_3653_) == 0)
{
lean_object* v_a_3654_; uint8_t v___x_3655_; 
v_a_3654_ = lean_ctor_get(v___x_3653_, 0);
lean_inc(v_a_3654_);
lean_dec_ref(v___x_3653_);
v___x_3655_ = lean_unbox(v_a_3654_);
lean_dec(v_a_3654_);
if (v___x_3655_ == 0)
{
v___y_3596_ = v___y_3559_;
v___y_3597_ = v___y_3562_;
v___y_3598_ = v___y_3563_;
goto v___jp_3595_;
}
else
{
lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
v___x_3656_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5);
lean_inc(v_fst_3583_);
v___x_3657_ = l_Lean_MessageData_ofExpr(v_fst_3583_);
v___x_3658_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3658_, 0, v___x_3656_);
lean_ctor_set(v___x_3658_, 1, v___x_3657_);
v___x_3659_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7);
v___x_3660_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3660_, 0, v___x_3658_);
lean_ctor_set(v___x_3660_, 1, v___x_3659_);
lean_inc_ref(v_e_3651_);
v___x_3661_ = l_Lean_MessageData_ofExpr(v_e_3651_);
v___x_3662_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3662_, 0, v___x_3660_);
lean_ctor_set(v___x_3662_, 1, v___x_3661_);
v___x_3663_ = l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg(v___x_3652_, v___x_3662_, v___y_3560_, v___y_3561_, v___y_3562_, v___y_3563_);
if (lean_obj_tag(v___x_3663_) == 0)
{
lean_dec_ref(v___x_3663_);
v___y_3596_ = v___y_3559_;
v___y_3597_ = v___y_3562_;
v___y_3598_ = v___y_3563_;
goto v___jp_3595_;
}
else
{
lean_object* v_a_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3671_; 
lean_dec_ref(v_a_3592_);
lean_dec(v_declName_3588_);
lean_del_object(v___x_3586_);
lean_dec(v_snd_3584_);
lean_dec(v_fst_3583_);
lean_del_object(v___x_3575_);
v_a_3664_ = lean_ctor_get(v___x_3663_, 0);
v_isSharedCheck_3671_ = !lean_is_exclusive(v___x_3663_);
if (v_isSharedCheck_3671_ == 0)
{
v___x_3666_ = v___x_3663_;
v_isShared_3667_ = v_isSharedCheck_3671_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_a_3664_);
lean_dec(v___x_3663_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3671_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v___x_3669_; 
if (v_isShared_3667_ == 0)
{
v___x_3669_ = v___x_3666_;
goto v_reusejp_3668_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v_a_3664_);
v___x_3669_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3668_;
}
v_reusejp_3668_:
{
return v___x_3669_;
}
}
}
}
}
else
{
lean_object* v_a_3672_; lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3679_; 
lean_dec_ref(v_a_3592_);
lean_dec(v_declName_3588_);
lean_del_object(v___x_3586_);
lean_dec(v_snd_3584_);
lean_dec(v_fst_3583_);
lean_del_object(v___x_3575_);
v_a_3672_ = lean_ctor_get(v___x_3653_, 0);
v_isSharedCheck_3679_ = !lean_is_exclusive(v___x_3653_);
if (v_isSharedCheck_3679_ == 0)
{
v___x_3674_ = v___x_3653_;
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
else
{
lean_inc(v_a_3672_);
lean_dec(v___x_3653_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v___x_3677_; 
if (v_isShared_3675_ == 0)
{
v___x_3677_ = v___x_3674_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v_a_3672_);
v___x_3677_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
return v___x_3677_;
}
}
}
}
case 1:
{
lean_object* v_e_3680_; lean_object* v___x_3681_; lean_object* v___x_3682_; 
lean_del_object(v___x_3586_);
lean_del_object(v___x_3575_);
lean_dec_ref(v_erased_3550_);
v_e_3680_ = lean_ctor_get(v_a_3592_, 0);
v___x_3681_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__3));
v___x_3682_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg(v___x_3681_, v___y_3562_);
if (lean_obj_tag(v___x_3682_) == 0)
{
lean_object* v_a_3683_; uint8_t v___x_3684_; 
v_a_3683_ = lean_ctor_get(v___x_3682_, 0);
lean_inc(v_a_3683_);
lean_dec_ref(v___x_3682_);
v___x_3684_ = lean_unbox(v_a_3683_);
lean_dec(v_a_3683_);
if (v___x_3684_ == 0)
{
v___y_3625_ = v___y_3559_;
v___y_3626_ = v___y_3562_;
v___y_3627_ = v___y_3563_;
goto v___jp_3624_;
}
else
{
lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; 
v___x_3685_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5);
lean_inc(v_fst_3583_);
v___x_3686_ = l_Lean_MessageData_ofExpr(v_fst_3583_);
v___x_3687_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3687_, 0, v___x_3685_);
lean_ctor_set(v___x_3687_, 1, v___x_3686_);
v___x_3688_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7);
v___x_3689_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3689_, 0, v___x_3687_);
lean_ctor_set(v___x_3689_, 1, v___x_3688_);
lean_inc_ref(v_e_3680_);
v___x_3690_ = l_Lean_MessageData_ofExpr(v_e_3680_);
v___x_3691_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3691_, 0, v___x_3689_);
lean_ctor_set(v___x_3691_, 1, v___x_3690_);
v___x_3692_ = l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg(v___x_3681_, v___x_3691_, v___y_3560_, v___y_3561_, v___y_3562_, v___y_3563_);
if (lean_obj_tag(v___x_3692_) == 0)
{
lean_dec_ref(v___x_3692_);
v___y_3625_ = v___y_3559_;
v___y_3626_ = v___y_3562_;
v___y_3627_ = v___y_3563_;
goto v___jp_3624_;
}
else
{
lean_object* v_a_3693_; lean_object* v___x_3695_; uint8_t v_isShared_3696_; uint8_t v_isSharedCheck_3700_; 
lean_dec_ref(v_a_3592_);
lean_dec(v_declName_3588_);
lean_dec(v_snd_3584_);
lean_dec(v_fst_3583_);
lean_del_object(v___x_3581_);
v_a_3693_ = lean_ctor_get(v___x_3692_, 0);
v_isSharedCheck_3700_ = !lean_is_exclusive(v___x_3692_);
if (v_isSharedCheck_3700_ == 0)
{
v___x_3695_ = v___x_3692_;
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
else
{
lean_inc(v_a_3693_);
lean_dec(v___x_3692_);
v___x_3695_ = lean_box(0);
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
v_resetjp_3694_:
{
lean_object* v___x_3698_; 
if (v_isShared_3696_ == 0)
{
v___x_3698_ = v___x_3695_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3699_; 
v_reuseFailAlloc_3699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3699_, 0, v_a_3693_);
v___x_3698_ = v_reuseFailAlloc_3699_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
return v___x_3698_;
}
}
}
}
}
else
{
lean_object* v_a_3701_; lean_object* v___x_3703_; uint8_t v_isShared_3704_; uint8_t v_isSharedCheck_3708_; 
lean_dec_ref(v_a_3592_);
lean_dec(v_declName_3588_);
lean_dec(v_snd_3584_);
lean_dec(v_fst_3583_);
lean_del_object(v___x_3581_);
v_a_3701_ = lean_ctor_get(v___x_3682_, 0);
v_isSharedCheck_3708_ = !lean_is_exclusive(v___x_3682_);
if (v_isSharedCheck_3708_ == 0)
{
v___x_3703_ = v___x_3682_;
v_isShared_3704_ = v_isSharedCheck_3708_;
goto v_resetjp_3702_;
}
else
{
lean_inc(v_a_3701_);
lean_dec(v___x_3682_);
v___x_3703_ = lean_box(0);
v_isShared_3704_ = v_isSharedCheck_3708_;
goto v_resetjp_3702_;
}
v_resetjp_3702_:
{
lean_object* v___x_3706_; 
if (v_isShared_3704_ == 0)
{
v___x_3706_ = v___x_3703_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3707_; 
v_reuseFailAlloc_3707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3707_, 0, v_a_3701_);
v___x_3706_ = v_reuseFailAlloc_3707_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
return v___x_3706_;
}
}
}
}
default: 
{
lean_object* v_e_x3f_3709_; 
lean_del_object(v___x_3586_);
lean_del_object(v___x_3581_);
lean_del_object(v___x_3575_);
v_e_x3f_3709_ = lean_ctor_get(v_a_3592_, 0);
lean_inc(v_e_x3f_3709_);
lean_dec_ref(v_a_3592_);
if (lean_obj_tag(v_e_x3f_3709_) == 0)
{
lean_object* v___x_3710_; lean_object* v___x_3711_; 
lean_dec(v_declName_3588_);
v___x_3710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3710_, 0, v_fst_3583_);
lean_ctor_set(v___x_3710_, 1, v_snd_3584_);
v___x_3711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3711_, 0, v___x_3589_);
lean_ctor_set(v___x_3711_, 1, v___x_3710_);
v_a_3566_ = v___x_3711_;
goto v___jp_3565_;
}
else
{
lean_object* v_val_3712_; lean_object* v___y_3714_; lean_object* v___y_3715_; lean_object* v___y_3716_; lean_object* v___x_3730_; lean_object* v___x_3731_; 
lean_dec(v_snd_3584_);
v_val_3712_ = lean_ctor_get(v_e_x3f_3709_, 0);
lean_inc(v_val_3712_);
lean_dec_ref(v_e_x3f_3709_);
v___x_3730_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__3));
v___x_3731_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg(v___x_3730_, v___y_3562_);
if (lean_obj_tag(v___x_3731_) == 0)
{
lean_object* v_a_3732_; uint8_t v___x_3733_; 
v_a_3732_ = lean_ctor_get(v___x_3731_, 0);
lean_inc(v_a_3732_);
lean_dec_ref(v___x_3731_);
v___x_3733_ = lean_unbox(v_a_3732_);
lean_dec(v_a_3732_);
if (v___x_3733_ == 0)
{
lean_dec(v_fst_3583_);
v___y_3714_ = v___y_3559_;
v___y_3715_ = v___y_3562_;
v___y_3716_ = v___y_3563_;
goto v___jp_3713_;
}
else
{
lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; lean_object* v___x_3741_; 
v___x_3734_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__5);
v___x_3735_ = l_Lean_MessageData_ofExpr(v_fst_3583_);
v___x_3736_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3736_, 0, v___x_3734_);
lean_ctor_set(v___x_3736_, 1, v___x_3735_);
v___x_3737_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__7);
v___x_3738_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3738_, 0, v___x_3736_);
lean_ctor_set(v___x_3738_, 1, v___x_3737_);
lean_inc(v_val_3712_);
v___x_3739_ = l_Lean_MessageData_ofExpr(v_val_3712_);
v___x_3740_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3740_, 0, v___x_3738_);
lean_ctor_set(v___x_3740_, 1, v___x_3739_);
v___x_3741_ = l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg(v___x_3730_, v___x_3740_, v___y_3560_, v___y_3561_, v___y_3562_, v___y_3563_);
if (lean_obj_tag(v___x_3741_) == 0)
{
lean_dec_ref(v___x_3741_);
v___y_3714_ = v___y_3559_;
v___y_3715_ = v___y_3562_;
v___y_3716_ = v___y_3563_;
goto v___jp_3713_;
}
else
{
lean_object* v_a_3742_; lean_object* v___x_3744_; uint8_t v_isShared_3745_; uint8_t v_isSharedCheck_3749_; 
lean_dec(v_val_3712_);
lean_dec(v_declName_3588_);
lean_dec_ref(v_erased_3550_);
v_a_3742_ = lean_ctor_get(v___x_3741_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v___x_3741_);
if (v_isSharedCheck_3749_ == 0)
{
v___x_3744_ = v___x_3741_;
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
else
{
lean_inc(v_a_3742_);
lean_dec(v___x_3741_);
v___x_3744_ = lean_box(0);
v_isShared_3745_ = v_isSharedCheck_3749_;
goto v_resetjp_3743_;
}
v_resetjp_3743_:
{
lean_object* v___x_3747_; 
if (v_isShared_3745_ == 0)
{
v___x_3747_ = v___x_3744_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v_a_3742_);
v___x_3747_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
return v___x_3747_;
}
}
}
}
}
else
{
lean_object* v_a_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3757_; 
lean_dec(v_val_3712_);
lean_dec(v_declName_3588_);
lean_dec(v_fst_3583_);
lean_dec_ref(v_erased_3550_);
v_a_3750_ = lean_ctor_get(v___x_3731_, 0);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___x_3731_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3752_ = v___x_3731_;
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_a_3750_);
lean_dec(v___x_3731_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___x_3755_; 
if (v_isShared_3753_ == 0)
{
v___x_3755_ = v___x_3752_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v_a_3750_);
v___x_3755_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
return v___x_3755_;
}
}
}
v___jp_3713_:
{
lean_object* v___x_3717_; lean_object* v___x_3718_; 
v___x_3717_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_3717_, 0, v_declName_3588_);
lean_ctor_set_uint8(v___x_3717_, sizeof(void*)*1, v_post_3551_);
lean_ctor_set_uint8(v___x_3717_, sizeof(void*)*1 + 1, v___x_3594_);
v___x_3718_ = l_Lean_Meta_Simp_recordSimpTheorem___redArg(v___x_3717_, v___y_3714_, v___y_3715_, v___y_3716_);
if (lean_obj_tag(v___x_3718_) == 0)
{
lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; 
lean_dec_ref(v___x_3718_);
v___x_3719_ = lean_box(v___x_3570_);
v___x_3720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3720_, 0, v_val_3712_);
lean_ctor_set(v___x_3720_, 1, v___x_3719_);
v___x_3721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3721_, 0, v___x_3589_);
lean_ctor_set(v___x_3721_, 1, v___x_3720_);
v_a_3566_ = v___x_3721_;
goto v___jp_3565_;
}
else
{
lean_object* v_a_3722_; lean_object* v___x_3724_; uint8_t v_isShared_3725_; uint8_t v_isSharedCheck_3729_; 
lean_dec(v_val_3712_);
lean_dec_ref(v_erased_3550_);
v_a_3722_ = lean_ctor_get(v___x_3718_, 0);
v_isSharedCheck_3729_ = !lean_is_exclusive(v___x_3718_);
if (v_isSharedCheck_3729_ == 0)
{
v___x_3724_ = v___x_3718_;
v_isShared_3725_ = v_isSharedCheck_3729_;
goto v_resetjp_3723_;
}
else
{
lean_inc(v_a_3722_);
lean_dec(v___x_3718_);
v___x_3724_ = lean_box(0);
v_isShared_3725_ = v_isSharedCheck_3729_;
goto v_resetjp_3723_;
}
v_resetjp_3723_:
{
lean_object* v___x_3727_; 
if (v_isShared_3725_ == 0)
{
v___x_3727_ = v___x_3724_;
goto v_reusejp_3726_;
}
else
{
lean_object* v_reuseFailAlloc_3728_; 
v_reuseFailAlloc_3728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3728_, 0, v_a_3722_);
v___x_3727_ = v_reuseFailAlloc_3728_;
goto v_reusejp_3726_;
}
v_reusejp_3726_:
{
return v___x_3727_;
}
}
}
}
}
}
}
v___jp_3595_:
{
lean_object* v___x_3599_; lean_object* v___x_3600_; 
v___x_3599_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_3599_, 0, v_declName_3588_);
lean_ctor_set_uint8(v___x_3599_, sizeof(void*)*1, v_post_3551_);
lean_ctor_set_uint8(v___x_3599_, sizeof(void*)*1 + 1, v___x_3594_);
v___x_3600_ = l_Lean_Meta_Simp_recordSimpTheorem___redArg(v___x_3599_, v___y_3596_, v___y_3597_, v___y_3598_);
if (lean_obj_tag(v___x_3600_) == 0)
{
lean_object* v___x_3602_; uint8_t v_isShared_3603_; uint8_t v_isSharedCheck_3614_; 
v_isSharedCheck_3614_ = !lean_is_exclusive(v___x_3600_);
if (v_isSharedCheck_3614_ == 0)
{
lean_object* v_unused_3615_; 
v_unused_3615_ = lean_ctor_get(v___x_3600_, 0);
lean_dec(v_unused_3615_);
v___x_3602_ = v___x_3600_;
v_isShared_3603_ = v_isSharedCheck_3614_;
goto v_resetjp_3601_;
}
else
{
lean_dec(v___x_3600_);
v___x_3602_ = lean_box(0);
v_isShared_3603_ = v_isSharedCheck_3614_;
goto v_resetjp_3601_;
}
v_resetjp_3601_:
{
lean_object* v___x_3604_; lean_object* v___x_3606_; 
v___x_3604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3604_, 0, v_a_3592_);
if (v_isShared_3587_ == 0)
{
v___x_3606_ = v___x_3586_;
goto v_reusejp_3605_;
}
else
{
lean_object* v_reuseFailAlloc_3613_; 
v_reuseFailAlloc_3613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3613_, 0, v_fst_3583_);
lean_ctor_set(v_reuseFailAlloc_3613_, 1, v_snd_3584_);
v___x_3606_ = v_reuseFailAlloc_3613_;
goto v_reusejp_3605_;
}
v_reusejp_3605_:
{
lean_object* v___x_3608_; 
if (v_isShared_3576_ == 0)
{
lean_ctor_set(v___x_3575_, 1, v___x_3606_);
lean_ctor_set(v___x_3575_, 0, v___x_3604_);
v___x_3608_ = v___x_3575_;
goto v_reusejp_3607_;
}
else
{
lean_object* v_reuseFailAlloc_3612_; 
v_reuseFailAlloc_3612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3612_, 0, v___x_3604_);
lean_ctor_set(v_reuseFailAlloc_3612_, 1, v___x_3606_);
v___x_3608_ = v_reuseFailAlloc_3612_;
goto v_reusejp_3607_;
}
v_reusejp_3607_:
{
lean_object* v___x_3610_; 
if (v_isShared_3603_ == 0)
{
lean_ctor_set(v___x_3602_, 0, v___x_3608_);
v___x_3610_ = v___x_3602_;
goto v_reusejp_3609_;
}
else
{
lean_object* v_reuseFailAlloc_3611_; 
v_reuseFailAlloc_3611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3611_, 0, v___x_3608_);
v___x_3610_ = v_reuseFailAlloc_3611_;
goto v_reusejp_3609_;
}
v_reusejp_3609_:
{
return v___x_3610_;
}
}
}
}
}
else
{
lean_object* v_a_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3623_; 
lean_dec(v_a_3592_);
lean_del_object(v___x_3586_);
lean_dec(v_snd_3584_);
lean_dec(v_fst_3583_);
lean_del_object(v___x_3575_);
v_a_3616_ = lean_ctor_get(v___x_3600_, 0);
v_isSharedCheck_3623_ = !lean_is_exclusive(v___x_3600_);
if (v_isSharedCheck_3623_ == 0)
{
v___x_3618_ = v___x_3600_;
v_isShared_3619_ = v_isSharedCheck_3623_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_a_3616_);
lean_dec(v___x_3600_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3623_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v___x_3621_; 
if (v_isShared_3619_ == 0)
{
v___x_3621_ = v___x_3618_;
goto v_reusejp_3620_;
}
else
{
lean_object* v_reuseFailAlloc_3622_; 
v_reuseFailAlloc_3622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3622_, 0, v_a_3616_);
v___x_3621_ = v_reuseFailAlloc_3622_;
goto v_reusejp_3620_;
}
v_reusejp_3620_:
{
return v___x_3621_;
}
}
}
}
v___jp_3624_:
{
lean_object* v___x_3628_; lean_object* v___x_3629_; 
v___x_3628_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_3628_, 0, v_declName_3588_);
lean_ctor_set_uint8(v___x_3628_, sizeof(void*)*1, v_post_3551_);
lean_ctor_set_uint8(v___x_3628_, sizeof(void*)*1 + 1, v___x_3594_);
v___x_3629_ = l_Lean_Meta_Simp_recordSimpTheorem___redArg(v___x_3628_, v___y_3625_, v___y_3626_, v___y_3627_);
if (lean_obj_tag(v___x_3629_) == 0)
{
lean_object* v___x_3631_; uint8_t v_isShared_3632_; uint8_t v_isSharedCheck_3641_; 
v_isSharedCheck_3641_ = !lean_is_exclusive(v___x_3629_);
if (v_isSharedCheck_3641_ == 0)
{
lean_object* v_unused_3642_; 
v_unused_3642_ = lean_ctor_get(v___x_3629_, 0);
lean_dec(v_unused_3642_);
v___x_3631_ = v___x_3629_;
v_isShared_3632_ = v_isSharedCheck_3641_;
goto v_resetjp_3630_;
}
else
{
lean_dec(v___x_3629_);
v___x_3631_ = lean_box(0);
v_isShared_3632_ = v_isSharedCheck_3641_;
goto v_resetjp_3630_;
}
v_resetjp_3630_:
{
lean_object* v___x_3633_; lean_object* v___x_3635_; 
v___x_3633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3633_, 0, v_a_3592_);
if (v_isShared_3582_ == 0)
{
lean_ctor_set(v___x_3581_, 1, v_snd_3584_);
lean_ctor_set(v___x_3581_, 0, v_fst_3583_);
v___x_3635_ = v___x_3581_;
goto v_reusejp_3634_;
}
else
{
lean_object* v_reuseFailAlloc_3640_; 
v_reuseFailAlloc_3640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3640_, 0, v_fst_3583_);
lean_ctor_set(v_reuseFailAlloc_3640_, 1, v_snd_3584_);
v___x_3635_ = v_reuseFailAlloc_3640_;
goto v_reusejp_3634_;
}
v_reusejp_3634_:
{
lean_object* v___x_3636_; lean_object* v___x_3638_; 
v___x_3636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3636_, 0, v___x_3633_);
lean_ctor_set(v___x_3636_, 1, v___x_3635_);
if (v_isShared_3632_ == 0)
{
lean_ctor_set(v___x_3631_, 0, v___x_3636_);
v___x_3638_ = v___x_3631_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v___x_3636_);
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
else
{
lean_object* v_a_3643_; lean_object* v___x_3645_; uint8_t v_isShared_3646_; uint8_t v_isSharedCheck_3650_; 
lean_dec(v_a_3592_);
lean_dec(v_snd_3584_);
lean_dec(v_fst_3583_);
lean_del_object(v___x_3581_);
v_a_3643_ = lean_ctor_get(v___x_3629_, 0);
v_isSharedCheck_3650_ = !lean_is_exclusive(v___x_3629_);
if (v_isSharedCheck_3650_ == 0)
{
v___x_3645_ = v___x_3629_;
v_isShared_3646_ = v_isSharedCheck_3650_;
goto v_resetjp_3644_;
}
else
{
lean_inc(v_a_3643_);
lean_dec(v___x_3629_);
v___x_3645_ = lean_box(0);
v_isShared_3646_ = v_isSharedCheck_3650_;
goto v_resetjp_3644_;
}
v_resetjp_3644_:
{
lean_object* v___x_3648_; 
if (v_isShared_3646_ == 0)
{
v___x_3648_ = v___x_3645_;
goto v_reusejp_3647_;
}
else
{
lean_object* v_reuseFailAlloc_3649_; 
v_reuseFailAlloc_3649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3649_, 0, v_a_3643_);
v___x_3648_ = v_reuseFailAlloc_3649_;
goto v_reusejp_3647_;
}
v_reusejp_3647_:
{
return v___x_3648_;
}
}
}
}
}
else
{
lean_object* v_a_3758_; lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3765_; 
lean_dec(v_declName_3588_);
lean_del_object(v___x_3586_);
lean_dec(v_snd_3584_);
lean_dec(v_fst_3583_);
lean_del_object(v___x_3581_);
lean_del_object(v___x_3575_);
lean_dec_ref(v_erased_3550_);
v_a_3758_ = lean_ctor_get(v___x_3591_, 0);
v_isSharedCheck_3765_ = !lean_is_exclusive(v___x_3591_);
if (v_isSharedCheck_3765_ == 0)
{
v___x_3760_ = v___x_3591_;
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
else
{
lean_inc(v_a_3758_);
lean_dec(v___x_3591_);
v___x_3760_ = lean_box(0);
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
v_resetjp_3759_:
{
lean_object* v___x_3763_; 
if (v_isShared_3761_ == 0)
{
v___x_3763_ = v___x_3760_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v_a_3758_);
v___x_3763_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
return v___x_3763_;
}
}
}
}
else
{
lean_object* v___x_3767_; 
lean_dec(v_declName_3588_);
lean_del_object(v___x_3581_);
lean_dec(v_snd_3579_);
lean_dec(v_fst_3577_);
if (v_isShared_3587_ == 0)
{
v___x_3767_ = v___x_3586_;
goto v_reusejp_3766_;
}
else
{
lean_object* v_reuseFailAlloc_3771_; 
v_reuseFailAlloc_3771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3771_, 0, v_fst_3583_);
lean_ctor_set(v_reuseFailAlloc_3771_, 1, v_snd_3584_);
v___x_3767_ = v_reuseFailAlloc_3771_;
goto v_reusejp_3766_;
}
v_reusejp_3766_:
{
lean_object* v___x_3769_; 
if (v_isShared_3576_ == 0)
{
lean_ctor_set(v___x_3575_, 1, v___x_3767_);
lean_ctor_set(v___x_3575_, 0, v___x_3589_);
v___x_3769_ = v___x_3575_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3770_; 
v_reuseFailAlloc_3770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3770_, 0, v___x_3589_);
lean_ctor_set(v_reuseFailAlloc_3770_, 1, v___x_3767_);
v___x_3769_ = v_reuseFailAlloc_3770_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
v_a_3566_ = v___x_3769_;
goto v___jp_3565_;
}
}
}
}
}
}
}
v___jp_3565_:
{
size_t v___x_3567_; size_t v___x_3568_; 
v___x_3567_ = ((size_t)1ULL);
v___x_3568_ = lean_usize_add(v_i_3555_, v___x_3567_);
v_i_3555_ = v___x_3568_;
v_b_3556_ = v_a_3566_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_dsimprocCore_spec__0___boxed(lean_object* v_erased_3777_, lean_object* v_post_3778_, lean_object* v___x_3779_, lean_object* v_as_3780_, lean_object* v_sz_3781_, lean_object* v_i_3782_, lean_object* v_b_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_){
_start:
{
uint8_t v_post_boxed_3792_; size_t v_sz_boxed_3793_; size_t v_i_boxed_3794_; lean_object* v_res_3795_; 
v_post_boxed_3792_ = lean_unbox(v_post_3778_);
v_sz_boxed_3793_ = lean_unbox_usize(v_sz_3781_);
lean_dec(v_sz_3781_);
v_i_boxed_3794_ = lean_unbox_usize(v_i_3782_);
lean_dec(v_i_3782_);
v_res_3795_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_dsimprocCore_spec__0(v_erased_3777_, v_post_boxed_3792_, v___x_3779_, v_as_3780_, v_sz_boxed_3793_, v_i_boxed_3794_, v_b_3783_, v___y_3784_, v___y_3785_, v___y_3786_, v___y_3787_, v___y_3788_, v___y_3789_, v___y_3790_);
lean_dec(v___y_3790_);
lean_dec_ref(v___y_3789_);
lean_dec(v___y_3788_);
lean_dec_ref(v___y_3787_);
lean_dec(v___y_3786_);
lean_dec_ref(v___y_3785_);
lean_dec(v___y_3784_);
lean_dec_ref(v_as_3780_);
lean_dec(v___x_3779_);
return v_res_3795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_dsimprocCore(uint8_t v_post_3798_, lean_object* v_s_3799_, lean_object* v_erased_3800_, lean_object* v_e_3801_, lean_object* v_a_3802_, lean_object* v_a_3803_, lean_object* v_a_3804_, lean_object* v_a_3805_, lean_object* v_a_3806_, lean_object* v_a_3807_, lean_object* v_a_3808_){
_start:
{
lean_object* v___y_3814_; lean_object* v_a_3836_; lean_object* v_indexConfig_3880_; lean_object* v_config_3881_; uint8_t v_trackZetaDelta_3882_; lean_object* v_zetaDeltaSet_3883_; lean_object* v_lctx_3884_; lean_object* v_localInstances_3885_; lean_object* v_defEqCtx_x3f_3886_; lean_object* v_synthPendingDepth_3887_; lean_object* v_canUnfold_x3f_3888_; uint8_t v_univApprox_3889_; uint8_t v_inTypeClassResolution_3890_; uint8_t v_cacheInferType_3891_; uint64_t v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; 
v_indexConfig_3880_ = lean_ctor_get(v_a_3803_, 4);
v_config_3881_ = lean_ctor_get(v_indexConfig_3880_, 0);
v_trackZetaDelta_3882_ = lean_ctor_get_uint8(v_a_3805_, sizeof(void*)*7);
v_zetaDeltaSet_3883_ = lean_ctor_get(v_a_3805_, 1);
v_lctx_3884_ = lean_ctor_get(v_a_3805_, 2);
v_localInstances_3885_ = lean_ctor_get(v_a_3805_, 3);
v_defEqCtx_x3f_3886_ = lean_ctor_get(v_a_3805_, 4);
v_synthPendingDepth_3887_ = lean_ctor_get(v_a_3805_, 5);
v_canUnfold_x3f_3888_ = lean_ctor_get(v_a_3805_, 6);
v_univApprox_3889_ = lean_ctor_get_uint8(v_a_3805_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3890_ = lean_ctor_get_uint8(v_a_3805_, sizeof(void*)*7 + 2);
v_cacheInferType_3891_ = lean_ctor_get_uint8(v_a_3805_, sizeof(void*)*7 + 3);
v___x_3892_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v_config_3881_);
lean_inc_ref(v_config_3881_);
v___x_3893_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3893_, 0, v_config_3881_);
lean_ctor_set_uint64(v___x_3893_, sizeof(void*)*1, v___x_3892_);
lean_inc(v_canUnfold_x3f_3888_);
lean_inc(v_synthPendingDepth_3887_);
lean_inc(v_defEqCtx_x3f_3886_);
lean_inc_ref(v_localInstances_3885_);
lean_inc_ref(v_lctx_3884_);
lean_inc(v_zetaDeltaSet_3883_);
v___x_3894_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3894_, 0, v___x_3893_);
lean_ctor_set(v___x_3894_, 1, v_zetaDeltaSet_3883_);
lean_ctor_set(v___x_3894_, 2, v_lctx_3884_);
lean_ctor_set(v___x_3894_, 3, v_localInstances_3885_);
lean_ctor_set(v___x_3894_, 4, v_defEqCtx_x3f_3886_);
lean_ctor_set(v___x_3894_, 5, v_synthPendingDepth_3887_);
lean_ctor_set(v___x_3894_, 6, v_canUnfold_x3f_3888_);
lean_ctor_set_uint8(v___x_3894_, sizeof(void*)*7, v_trackZetaDelta_3882_);
lean_ctor_set_uint8(v___x_3894_, sizeof(void*)*7 + 1, v_univApprox_3889_);
lean_ctor_set_uint8(v___x_3894_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3890_);
lean_ctor_set_uint8(v___x_3894_, sizeof(void*)*7 + 3, v_cacheInferType_3891_);
lean_inc_ref(v_e_3801_);
v___x_3895_ = l_Lean_Meta_DiscrTree_getMatchWithExtra___redArg(v_s_3799_, v_e_3801_, v___x_3894_, v_a_3806_, v_a_3807_, v_a_3808_);
lean_dec_ref(v___x_3894_);
if (lean_obj_tag(v___x_3895_) == 0)
{
lean_object* v_a_3896_; 
v_a_3896_ = lean_ctor_get(v___x_3895_, 0);
lean_inc(v_a_3896_);
lean_dec_ref(v___x_3895_);
v_a_3836_ = v_a_3896_;
goto v___jp_3835_;
}
else
{
if (lean_obj_tag(v___x_3895_) == 0)
{
lean_object* v_a_3897_; 
v_a_3897_ = lean_ctor_get(v___x_3895_, 0);
lean_inc(v_a_3897_);
lean_dec_ref(v___x_3895_);
v_a_3836_ = v_a_3897_;
goto v___jp_3835_;
}
else
{
lean_object* v_a_3898_; lean_object* v___x_3900_; uint8_t v_isShared_3901_; uint8_t v_isSharedCheck_3905_; 
lean_dec_ref(v_e_3801_);
lean_dec_ref(v_erased_3800_);
v_a_3898_ = lean_ctor_get(v___x_3895_, 0);
v_isSharedCheck_3905_ = !lean_is_exclusive(v___x_3895_);
if (v_isSharedCheck_3905_ == 0)
{
v___x_3900_ = v___x_3895_;
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
else
{
lean_inc(v_a_3898_);
lean_dec(v___x_3895_);
v___x_3900_ = lean_box(0);
v_isShared_3901_ = v_isSharedCheck_3905_;
goto v_resetjp_3899_;
}
v_resetjp_3899_:
{
lean_object* v___x_3903_; 
if (v_isShared_3901_ == 0)
{
v___x_3903_ = v___x_3900_;
goto v_reusejp_3902_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v_a_3898_);
v___x_3903_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3902_;
}
v_reusejp_3902_:
{
return v___x_3903_;
}
}
}
}
v___jp_3810_:
{
lean_object* v___x_3811_; lean_object* v___x_3812_; 
v___x_3811_ = ((lean_object*)(l_Lean_Meta_Simp_SimprocEntry_tryD___closed__0));
v___x_3812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3812_, 0, v___x_3811_);
return v___x_3812_;
}
v___jp_3813_:
{
lean_object* v___x_3815_; lean_object* v___x_3816_; lean_object* v_a_3817_; uint8_t v___x_3818_; 
v___x_3815_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocCore_spec__2___closed__3));
v___x_3816_ = l_Lean_isTracingEnabledFor___at___00Lean_Meta_Simp_simprocCore_spec__0___redArg(v___x_3815_, v_a_3807_);
v_a_3817_ = lean_ctor_get(v___x_3816_, 0);
lean_inc(v_a_3817_);
lean_dec_ref(v___x_3816_);
v___x_3818_ = lean_unbox(v_a_3817_);
lean_dec(v_a_3817_);
if (v___x_3818_ == 0)
{
lean_dec_ref(v_e_3801_);
goto v___jp_3810_;
}
else
{
lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; 
v___x_3819_ = lean_obj_once(&l_Lean_Meta_Simp_simprocCore___closed__2, &l_Lean_Meta_Simp_simprocCore___closed__2_once, _init_l_Lean_Meta_Simp_simprocCore___closed__2);
lean_inc_ref(v___y_3814_);
v___x_3820_ = l_Lean_stringToMessageData(v___y_3814_);
v___x_3821_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3821_, 0, v___x_3819_);
lean_ctor_set(v___x_3821_, 1, v___x_3820_);
v___x_3822_ = lean_obj_once(&l_Lean_Meta_Simp_simprocCore___closed__4, &l_Lean_Meta_Simp_simprocCore___closed__4_once, _init_l_Lean_Meta_Simp_simprocCore___closed__4);
v___x_3823_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3823_, 0, v___x_3821_);
lean_ctor_set(v___x_3823_, 1, v___x_3822_);
v___x_3824_ = l_Lean_MessageData_ofExpr(v_e_3801_);
v___x_3825_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3825_, 0, v___x_3823_);
lean_ctor_set(v___x_3825_, 1, v___x_3824_);
v___x_3826_ = l_Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1___redArg(v___x_3815_, v___x_3825_, v_a_3805_, v_a_3806_, v_a_3807_, v_a_3808_);
if (lean_obj_tag(v___x_3826_) == 0)
{
lean_dec_ref(v___x_3826_);
goto v___jp_3810_;
}
else
{
lean_object* v_a_3827_; lean_object* v___x_3829_; uint8_t v_isShared_3830_; uint8_t v_isSharedCheck_3834_; 
v_a_3827_ = lean_ctor_get(v___x_3826_, 0);
v_isSharedCheck_3834_ = !lean_is_exclusive(v___x_3826_);
if (v_isSharedCheck_3834_ == 0)
{
v___x_3829_ = v___x_3826_;
v_isShared_3830_ = v_isSharedCheck_3834_;
goto v_resetjp_3828_;
}
else
{
lean_inc(v_a_3827_);
lean_dec(v___x_3826_);
v___x_3829_ = lean_box(0);
v_isShared_3830_ = v_isSharedCheck_3834_;
goto v_resetjp_3828_;
}
v_resetjp_3828_:
{
lean_object* v___x_3832_; 
if (v_isShared_3830_ == 0)
{
v___x_3832_ = v___x_3829_;
goto v_reusejp_3831_;
}
else
{
lean_object* v_reuseFailAlloc_3833_; 
v_reuseFailAlloc_3833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3833_, 0, v_a_3827_);
v___x_3832_ = v_reuseFailAlloc_3833_;
goto v_reusejp_3831_;
}
v_reusejp_3831_:
{
return v___x_3832_;
}
}
}
}
}
v___jp_3835_:
{
lean_object* v___x_3837_; lean_object* v___x_3838_; uint8_t v___x_3839_; 
v___x_3837_ = lean_array_get_size(v_a_3836_);
v___x_3838_ = lean_unsigned_to_nat(0u);
v___x_3839_ = lean_nat_dec_eq(v___x_3837_, v___x_3838_);
if (v___x_3839_ == 0)
{
lean_object* v___x_3840_; lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; size_t v_sz_3844_; size_t v___x_3845_; lean_object* v___x_3846_; 
v___x_3840_ = lean_box(0);
v___x_3841_ = lean_box(v___x_3839_);
v___x_3842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3842_, 0, v_e_3801_);
lean_ctor_set(v___x_3842_, 1, v___x_3841_);
v___x_3843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3843_, 0, v___x_3840_);
lean_ctor_set(v___x_3843_, 1, v___x_3842_);
v_sz_3844_ = lean_array_size(v_a_3836_);
v___x_3845_ = ((size_t)0ULL);
v___x_3846_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_dsimprocCore_spec__0(v_erased_3800_, v_post_3798_, v___x_3837_, v_a_3836_, v_sz_3844_, v___x_3845_, v___x_3843_, v_a_3802_, v_a_3803_, v_a_3804_, v_a_3805_, v_a_3806_, v_a_3807_, v_a_3808_);
lean_dec_ref(v_a_3836_);
if (lean_obj_tag(v___x_3846_) == 0)
{
lean_object* v_a_3847_; lean_object* v___x_3849_; uint8_t v_isShared_3850_; uint8_t v_isSharedCheck_3869_; 
v_a_3847_ = lean_ctor_get(v___x_3846_, 0);
v_isSharedCheck_3869_ = !lean_is_exclusive(v___x_3846_);
if (v_isSharedCheck_3869_ == 0)
{
v___x_3849_ = v___x_3846_;
v_isShared_3850_ = v_isSharedCheck_3869_;
goto v_resetjp_3848_;
}
else
{
lean_inc(v_a_3847_);
lean_dec(v___x_3846_);
v___x_3849_ = lean_box(0);
v_isShared_3850_ = v_isSharedCheck_3869_;
goto v_resetjp_3848_;
}
v_resetjp_3848_:
{
lean_object* v_fst_3851_; 
v_fst_3851_ = lean_ctor_get(v_a_3847_, 0);
if (lean_obj_tag(v_fst_3851_) == 0)
{
lean_object* v_snd_3852_; lean_object* v_snd_3853_; uint8_t v___x_3854_; 
v_snd_3852_ = lean_ctor_get(v_a_3847_, 1);
lean_inc(v_snd_3852_);
lean_dec(v_a_3847_);
v_snd_3853_ = lean_ctor_get(v_snd_3852_, 1);
v___x_3854_ = lean_unbox(v_snd_3853_);
if (v___x_3854_ == 0)
{
lean_object* v___x_3855_; lean_object* v___x_3857_; 
lean_dec(v_snd_3852_);
v___x_3855_ = ((lean_object*)(l_Lean_Meta_Simp_dsimprocCore___closed__0));
if (v_isShared_3850_ == 0)
{
lean_ctor_set(v___x_3849_, 0, v___x_3855_);
v___x_3857_ = v___x_3849_;
goto v_reusejp_3856_;
}
else
{
lean_object* v_reuseFailAlloc_3858_; 
v_reuseFailAlloc_3858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3858_, 0, v___x_3855_);
v___x_3857_ = v_reuseFailAlloc_3858_;
goto v_reusejp_3856_;
}
v_reusejp_3856_:
{
return v___x_3857_;
}
}
else
{
lean_object* v_fst_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3863_; 
v_fst_3859_ = lean_ctor_get(v_snd_3852_, 0);
lean_inc(v_fst_3859_);
lean_dec(v_snd_3852_);
v___x_3860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3860_, 0, v_fst_3859_);
v___x_3861_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3861_, 0, v___x_3860_);
if (v_isShared_3850_ == 0)
{
lean_ctor_set(v___x_3849_, 0, v___x_3861_);
v___x_3863_ = v___x_3849_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3864_; 
v_reuseFailAlloc_3864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3864_, 0, v___x_3861_);
v___x_3863_ = v_reuseFailAlloc_3864_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
return v___x_3863_;
}
}
}
else
{
lean_object* v_val_3865_; lean_object* v___x_3867_; 
lean_inc_ref(v_fst_3851_);
lean_dec(v_a_3847_);
v_val_3865_ = lean_ctor_get(v_fst_3851_, 0);
lean_inc(v_val_3865_);
lean_dec_ref(v_fst_3851_);
if (v_isShared_3850_ == 0)
{
lean_ctor_set(v___x_3849_, 0, v_val_3865_);
v___x_3867_ = v___x_3849_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v_val_3865_);
v___x_3867_ = v_reuseFailAlloc_3868_;
goto v_reusejp_3866_;
}
v_reusejp_3866_:
{
return v___x_3867_;
}
}
}
}
else
{
lean_object* v_a_3870_; lean_object* v___x_3872_; uint8_t v_isShared_3873_; uint8_t v_isSharedCheck_3877_; 
v_a_3870_ = lean_ctor_get(v___x_3846_, 0);
v_isSharedCheck_3877_ = !lean_is_exclusive(v___x_3846_);
if (v_isSharedCheck_3877_ == 0)
{
v___x_3872_ = v___x_3846_;
v_isShared_3873_ = v_isSharedCheck_3877_;
goto v_resetjp_3871_;
}
else
{
lean_inc(v_a_3870_);
lean_dec(v___x_3846_);
v___x_3872_ = lean_box(0);
v_isShared_3873_ = v_isSharedCheck_3877_;
goto v_resetjp_3871_;
}
v_resetjp_3871_:
{
lean_object* v___x_3875_; 
if (v_isShared_3873_ == 0)
{
v___x_3875_ = v___x_3872_;
goto v_reusejp_3874_;
}
else
{
lean_object* v_reuseFailAlloc_3876_; 
v_reuseFailAlloc_3876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3876_, 0, v_a_3870_);
v___x_3875_ = v_reuseFailAlloc_3876_;
goto v_reusejp_3874_;
}
v_reusejp_3874_:
{
return v___x_3875_;
}
}
}
}
else
{
lean_dec_ref(v_a_3836_);
lean_dec_ref(v_erased_3800_);
if (v_post_3798_ == 0)
{
lean_object* v___x_3878_; 
v___x_3878_ = ((lean_object*)(l_Lean_Meta_Simp_simprocCore___closed__6));
v___y_3814_ = v___x_3878_;
goto v___jp_3813_;
}
else
{
lean_object* v___x_3879_; 
v___x_3879_ = ((lean_object*)(l_Lean_Meta_Simp_simprocCore___closed__7));
v___y_3814_ = v___x_3879_;
goto v___jp_3813_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_dsimprocCore___boxed(lean_object* v_post_3906_, lean_object* v_s_3907_, lean_object* v_erased_3908_, lean_object* v_e_3909_, lean_object* v_a_3910_, lean_object* v_a_3911_, lean_object* v_a_3912_, lean_object* v_a_3913_, lean_object* v_a_3914_, lean_object* v_a_3915_, lean_object* v_a_3916_, lean_object* v_a_3917_){
_start:
{
uint8_t v_post_boxed_3918_; lean_object* v_res_3919_; 
v_post_boxed_3918_ = lean_unbox(v_post_3906_);
v_res_3919_ = l_Lean_Meta_Simp_dsimprocCore(v_post_boxed_3918_, v_s_3907_, v_erased_3908_, v_e_3909_, v_a_3910_, v_a_3911_, v_a_3912_, v_a_3913_, v_a_3914_, v_a_3915_, v_a_3916_);
lean_dec(v_a_3916_);
lean_dec_ref(v_a_3915_);
lean_dec(v_a_3914_);
lean_dec_ref(v_a_3913_);
lean_dec(v_a_3912_);
lean_dec_ref(v_a_3911_);
lean_dec(v_a_3910_);
return v_res_3919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocsArray_add(lean_object* v_ss_3920_, lean_object* v_declName_3921_, uint8_t v_post_3922_, lean_object* v_a_3923_, lean_object* v_a_3924_){
_start:
{
lean_object* v___x_3926_; lean_object* v___x_3927_; uint8_t v___x_3928_; 
v___x_3926_ = lean_array_get_size(v_ss_3920_);
v___x_3927_ = lean_unsigned_to_nat(0u);
v___x_3928_ = lean_nat_dec_eq(v___x_3926_, v___x_3927_);
if (v___x_3928_ == 0)
{
uint8_t v___x_3929_; 
v___x_3929_ = lean_nat_dec_lt(v___x_3927_, v___x_3926_);
if (v___x_3929_ == 0)
{
lean_object* v___x_3930_; 
lean_dec(v_declName_3921_);
v___x_3930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3930_, 0, v_ss_3920_);
return v___x_3930_;
}
else
{
lean_object* v_v_3931_; lean_object* v___x_3932_; 
v_v_3931_ = lean_array_fget_borrowed(v_ss_3920_, v___x_3927_);
lean_inc(v_v_3931_);
v___x_3932_ = l_Lean_Meta_Simp_Simprocs_add(v_v_3931_, v_declName_3921_, v_post_3922_, v_a_3923_, v_a_3924_);
if (lean_obj_tag(v___x_3932_) == 0)
{
lean_object* v_a_3933_; lean_object* v___x_3935_; uint8_t v_isShared_3936_; uint8_t v_isSharedCheck_3943_; 
v_a_3933_ = lean_ctor_get(v___x_3932_, 0);
v_isSharedCheck_3943_ = !lean_is_exclusive(v___x_3932_);
if (v_isSharedCheck_3943_ == 0)
{
v___x_3935_ = v___x_3932_;
v_isShared_3936_ = v_isSharedCheck_3943_;
goto v_resetjp_3934_;
}
else
{
lean_inc(v_a_3933_);
lean_dec(v___x_3932_);
v___x_3935_ = lean_box(0);
v_isShared_3936_ = v_isSharedCheck_3943_;
goto v_resetjp_3934_;
}
v_resetjp_3934_:
{
lean_object* v___x_3937_; lean_object* v_xs_x27_3938_; lean_object* v___x_3939_; lean_object* v___x_3941_; 
v___x_3937_ = lean_box(0);
v_xs_x27_3938_ = lean_array_fset(v_ss_3920_, v___x_3927_, v___x_3937_);
v___x_3939_ = lean_array_fset(v_xs_x27_3938_, v___x_3927_, v_a_3933_);
if (v_isShared_3936_ == 0)
{
lean_ctor_set(v___x_3935_, 0, v___x_3939_);
v___x_3941_ = v___x_3935_;
goto v_reusejp_3940_;
}
else
{
lean_object* v_reuseFailAlloc_3942_; 
v_reuseFailAlloc_3942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3942_, 0, v___x_3939_);
v___x_3941_ = v_reuseFailAlloc_3942_;
goto v_reusejp_3940_;
}
v_reusejp_3940_:
{
return v___x_3941_;
}
}
}
else
{
lean_object* v_a_3944_; lean_object* v___x_3946_; uint8_t v_isShared_3947_; uint8_t v_isSharedCheck_3951_; 
lean_dec_ref(v_ss_3920_);
v_a_3944_ = lean_ctor_get(v___x_3932_, 0);
v_isSharedCheck_3951_ = !lean_is_exclusive(v___x_3932_);
if (v_isSharedCheck_3951_ == 0)
{
v___x_3946_ = v___x_3932_;
v_isShared_3947_ = v_isSharedCheck_3951_;
goto v_resetjp_3945_;
}
else
{
lean_inc(v_a_3944_);
lean_dec(v___x_3932_);
v___x_3946_ = lean_box(0);
v_isShared_3947_ = v_isSharedCheck_3951_;
goto v_resetjp_3945_;
}
v_resetjp_3945_:
{
lean_object* v___x_3949_; 
if (v_isShared_3947_ == 0)
{
v___x_3949_ = v___x_3946_;
goto v_reusejp_3948_;
}
else
{
lean_object* v_reuseFailAlloc_3950_; 
v_reuseFailAlloc_3950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3950_, 0, v_a_3944_);
v___x_3949_ = v_reuseFailAlloc_3950_;
goto v_reusejp_3948_;
}
v_reusejp_3948_:
{
return v___x_3949_;
}
}
}
}
}
else
{
lean_object* v_s_3952_; lean_object* v___x_3953_; 
lean_dec_ref(v_ss_3920_);
v_s_3952_ = lean_obj_once(&l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_, &l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__once, _init_l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_);
v___x_3953_ = l_Lean_Meta_Simp_Simprocs_add(v_s_3952_, v_declName_3921_, v_post_3922_, v_a_3923_, v_a_3924_);
if (lean_obj_tag(v___x_3953_) == 0)
{
lean_object* v_a_3954_; lean_object* v___x_3956_; uint8_t v_isShared_3957_; uint8_t v_isSharedCheck_3964_; 
v_a_3954_ = lean_ctor_get(v___x_3953_, 0);
v_isSharedCheck_3964_ = !lean_is_exclusive(v___x_3953_);
if (v_isSharedCheck_3964_ == 0)
{
v___x_3956_ = v___x_3953_;
v_isShared_3957_ = v_isSharedCheck_3964_;
goto v_resetjp_3955_;
}
else
{
lean_inc(v_a_3954_);
lean_dec(v___x_3953_);
v___x_3956_ = lean_box(0);
v_isShared_3957_ = v_isSharedCheck_3964_;
goto v_resetjp_3955_;
}
v_resetjp_3955_:
{
lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3962_; 
v___x_3958_ = lean_unsigned_to_nat(1u);
v___x_3959_ = lean_mk_empty_array_with_capacity(v___x_3958_);
v___x_3960_ = lean_array_push(v___x_3959_, v_a_3954_);
if (v_isShared_3957_ == 0)
{
lean_ctor_set(v___x_3956_, 0, v___x_3960_);
v___x_3962_ = v___x_3956_;
goto v_reusejp_3961_;
}
else
{
lean_object* v_reuseFailAlloc_3963_; 
v_reuseFailAlloc_3963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3963_, 0, v___x_3960_);
v___x_3962_ = v_reuseFailAlloc_3963_;
goto v_reusejp_3961_;
}
v_reusejp_3961_:
{
return v___x_3962_;
}
}
}
else
{
lean_object* v_a_3965_; lean_object* v___x_3967_; uint8_t v_isShared_3968_; uint8_t v_isSharedCheck_3972_; 
v_a_3965_ = lean_ctor_get(v___x_3953_, 0);
v_isSharedCheck_3972_ = !lean_is_exclusive(v___x_3953_);
if (v_isSharedCheck_3972_ == 0)
{
v___x_3967_ = v___x_3953_;
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
else
{
lean_inc(v_a_3965_);
lean_dec(v___x_3953_);
v___x_3967_ = lean_box(0);
v_isShared_3968_ = v_isSharedCheck_3972_;
goto v_resetjp_3966_;
}
v_resetjp_3966_:
{
lean_object* v___x_3970_; 
if (v_isShared_3968_ == 0)
{
v___x_3970_ = v___x_3967_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3971_; 
v_reuseFailAlloc_3971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3971_, 0, v_a_3965_);
v___x_3970_ = v_reuseFailAlloc_3971_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
return v___x_3970_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocsArray_add___boxed(lean_object* v_ss_3973_, lean_object* v_declName_3974_, lean_object* v_post_3975_, lean_object* v_a_3976_, lean_object* v_a_3977_, lean_object* v_a_3978_){
_start:
{
uint8_t v_post_boxed_3979_; lean_object* v_res_3980_; 
v_post_boxed_3979_ = lean_unbox(v_post_3975_);
v_res_3980_ = l_Lean_Meta_Simp_SimprocsArray_add(v_ss_3973_, v_declName_3974_, v_post_boxed_3979_, v_a_3976_, v_a_3977_);
lean_dec(v_a_3977_);
lean_dec_ref(v_a_3976_);
return v_res_3980_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Simp_SimprocsArray_erase_spec__0(lean_object* v_declName_3981_, size_t v_sz_3982_, size_t v_i_3983_, lean_object* v_bs_3984_){
_start:
{
uint8_t v___x_3985_; 
v___x_3985_ = lean_usize_dec_lt(v_i_3983_, v_sz_3982_);
if (v___x_3985_ == 0)
{
lean_dec(v_declName_3981_);
return v_bs_3984_;
}
else
{
lean_object* v_v_3986_; lean_object* v___x_3987_; lean_object* v_bs_x27_3988_; lean_object* v___x_3989_; size_t v___x_3990_; size_t v___x_3991_; lean_object* v___x_3992_; 
v_v_3986_ = lean_array_uget(v_bs_3984_, v_i_3983_);
v___x_3987_ = lean_unsigned_to_nat(0u);
v_bs_x27_3988_ = lean_array_uset(v_bs_3984_, v_i_3983_, v___x_3987_);
lean_inc(v_declName_3981_);
v___x_3989_ = l_Lean_Meta_Simp_Simprocs_erase(v_v_3986_, v_declName_3981_);
v___x_3990_ = ((size_t)1ULL);
v___x_3991_ = lean_usize_add(v_i_3983_, v___x_3990_);
v___x_3992_ = lean_array_uset(v_bs_x27_3988_, v_i_3983_, v___x_3989_);
v_i_3983_ = v___x_3991_;
v_bs_3984_ = v___x_3992_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Simp_SimprocsArray_erase_spec__0___boxed(lean_object* v_declName_3994_, lean_object* v_sz_3995_, lean_object* v_i_3996_, lean_object* v_bs_3997_){
_start:
{
size_t v_sz_boxed_3998_; size_t v_i_boxed_3999_; lean_object* v_res_4000_; 
v_sz_boxed_3998_ = lean_unbox_usize(v_sz_3995_);
lean_dec(v_sz_3995_);
v_i_boxed_3999_ = lean_unbox_usize(v_i_3996_);
lean_dec(v_i_3996_);
v_res_4000_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Simp_SimprocsArray_erase_spec__0(v_declName_3994_, v_sz_boxed_3998_, v_i_boxed_3999_, v_bs_3997_);
return v_res_4000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocsArray_erase(lean_object* v_ss_4001_, lean_object* v_declName_4002_){
_start:
{
size_t v_sz_4003_; size_t v___x_4004_; lean_object* v___x_4005_; 
v_sz_4003_ = lean_array_size(v_ss_4001_);
v___x_4004_ = ((size_t)0ULL);
v___x_4005_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_Simp_SimprocsArray_erase_spec__0(v_declName_4002_, v_sz_4003_, v___x_4004_, v_ss_4001_);
return v___x_4005_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_Simp_SimprocsArray_isErased_spec__0(lean_object* v_declName_4006_, lean_object* v_as_4007_, size_t v_i_4008_, size_t v_stop_4009_){
_start:
{
uint8_t v___x_4010_; 
v___x_4010_ = lean_usize_dec_eq(v_i_4008_, v_stop_4009_);
if (v___x_4010_ == 0)
{
lean_object* v___x_4011_; lean_object* v_erased_4012_; uint8_t v___x_4013_; 
v___x_4011_ = lean_array_uget_borrowed(v_as_4007_, v_i_4008_);
v_erased_4012_ = lean_ctor_get(v___x_4011_, 3);
lean_inc_ref(v_erased_4012_);
v___x_4013_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Simp_eraseSimprocAttr_spec__0___redArg(v_erased_4012_, v_declName_4006_);
if (v___x_4013_ == 0)
{
size_t v___x_4014_; size_t v___x_4015_; 
v___x_4014_ = ((size_t)1ULL);
v___x_4015_ = lean_usize_add(v_i_4008_, v___x_4014_);
v_i_4008_ = v___x_4015_;
goto _start;
}
else
{
return v___x_4013_;
}
}
else
{
uint8_t v___x_4017_; 
v___x_4017_ = 0;
return v___x_4017_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_Simp_SimprocsArray_isErased_spec__0___boxed(lean_object* v_declName_4018_, lean_object* v_as_4019_, lean_object* v_i_4020_, lean_object* v_stop_4021_){
_start:
{
size_t v_i_boxed_4022_; size_t v_stop_boxed_4023_; uint8_t v_res_4024_; lean_object* v_r_4025_; 
v_i_boxed_4022_ = lean_unbox_usize(v_i_4020_);
lean_dec(v_i_4020_);
v_stop_boxed_4023_ = lean_unbox_usize(v_stop_4021_);
lean_dec(v_stop_4021_);
v_res_4024_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_Simp_SimprocsArray_isErased_spec__0(v_declName_4018_, v_as_4019_, v_i_boxed_4022_, v_stop_boxed_4023_);
lean_dec_ref(v_as_4019_);
lean_dec(v_declName_4018_);
v_r_4025_ = lean_box(v_res_4024_);
return v_r_4025_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Simp_SimprocsArray_isErased(lean_object* v_ss_4026_, lean_object* v_declName_4027_){
_start:
{
lean_object* v___x_4028_; lean_object* v___x_4029_; uint8_t v___x_4030_; 
v___x_4028_ = lean_unsigned_to_nat(0u);
v___x_4029_ = lean_array_get_size(v_ss_4026_);
v___x_4030_ = lean_nat_dec_lt(v___x_4028_, v___x_4029_);
if (v___x_4030_ == 0)
{
return v___x_4030_;
}
else
{
if (v___x_4030_ == 0)
{
return v___x_4030_;
}
else
{
size_t v___x_4031_; size_t v___x_4032_; uint8_t v___x_4033_; 
v___x_4031_ = ((size_t)0ULL);
v___x_4032_ = lean_usize_of_nat(v___x_4029_);
v___x_4033_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_Simp_SimprocsArray_isErased_spec__0(v_declName_4027_, v_ss_4026_, v___x_4031_, v___x_4032_);
return v___x_4033_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocsArray_isErased___boxed(lean_object* v_ss_4034_, lean_object* v_declName_4035_){
_start:
{
uint8_t v_res_4036_; lean_object* v_r_4037_; 
v_res_4036_ = l_Lean_Meta_Simp_SimprocsArray_isErased(v_ss_4034_, v_declName_4035_);
lean_dec(v_declName_4035_);
lean_dec_ref(v_ss_4034_);
v_r_4037_ = lean_box(v_res_4036_);
return v_r_4037_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocArrayCore_spec__0(uint8_t v_post_4038_, lean_object* v_as_4039_, size_t v_sz_4040_, size_t v_i_4041_, lean_object* v_b_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_){
_start:
{
lean_object* v_a_4052_; uint8_t v_cache_4056_; 
v_cache_4056_ = lean_usize_dec_lt(v_i_4041_, v_sz_4040_);
if (v_cache_4056_ == 0)
{
lean_object* v___x_4057_; 
v___x_4057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4057_, 0, v_b_4042_);
return v___x_4057_;
}
else
{
lean_object* v_snd_4058_; lean_object* v___x_4060_; uint8_t v_isShared_4061_; uint8_t v_isSharedCheck_4201_; 
v_snd_4058_ = lean_ctor_get(v_b_4042_, 1);
v_isSharedCheck_4201_ = !lean_is_exclusive(v_b_4042_);
if (v_isSharedCheck_4201_ == 0)
{
lean_object* v_unused_4202_; 
v_unused_4202_ = lean_ctor_get(v_b_4042_, 0);
lean_dec(v_unused_4202_);
v___x_4060_ = v_b_4042_;
v_isShared_4061_ = v_isSharedCheck_4201_;
goto v_resetjp_4059_;
}
else
{
lean_inc(v_snd_4058_);
lean_dec(v_b_4042_);
v___x_4060_ = lean_box(0);
v_isShared_4061_ = v_isSharedCheck_4201_;
goto v_resetjp_4059_;
}
v_resetjp_4059_:
{
lean_object* v_snd_4062_; lean_object* v_snd_4063_; lean_object* v_fst_4064_; lean_object* v___x_4066_; uint8_t v_isShared_4067_; uint8_t v_isSharedCheck_4199_; 
v_snd_4062_ = lean_ctor_get(v_snd_4058_, 1);
lean_inc(v_snd_4062_);
v_snd_4063_ = lean_ctor_get(v_snd_4062_, 1);
lean_inc(v_snd_4063_);
v_fst_4064_ = lean_ctor_get(v_snd_4058_, 0);
v_isSharedCheck_4199_ = !lean_is_exclusive(v_snd_4058_);
if (v_isSharedCheck_4199_ == 0)
{
lean_object* v_unused_4200_; 
v_unused_4200_ = lean_ctor_get(v_snd_4058_, 1);
lean_dec(v_unused_4200_);
v___x_4066_ = v_snd_4058_;
v_isShared_4067_ = v_isSharedCheck_4199_;
goto v_resetjp_4065_;
}
else
{
lean_inc(v_fst_4064_);
lean_dec(v_snd_4058_);
v___x_4066_ = lean_box(0);
v_isShared_4067_ = v_isSharedCheck_4199_;
goto v_resetjp_4065_;
}
v_resetjp_4065_:
{
lean_object* v_fst_4068_; lean_object* v___x_4070_; uint8_t v_isShared_4071_; uint8_t v_isSharedCheck_4197_; 
v_fst_4068_ = lean_ctor_get(v_snd_4062_, 0);
v_isSharedCheck_4197_ = !lean_is_exclusive(v_snd_4062_);
if (v_isSharedCheck_4197_ == 0)
{
lean_object* v_unused_4198_; 
v_unused_4198_ = lean_ctor_get(v_snd_4062_, 1);
lean_dec(v_unused_4198_);
v___x_4070_ = v_snd_4062_;
v_isShared_4071_ = v_isSharedCheck_4197_;
goto v_resetjp_4069_;
}
else
{
lean_inc(v_fst_4068_);
lean_dec(v_snd_4062_);
v___x_4070_ = lean_box(0);
v_isShared_4071_ = v_isSharedCheck_4197_;
goto v_resetjp_4069_;
}
v_resetjp_4069_:
{
lean_object* v_fst_4072_; lean_object* v_snd_4073_; lean_object* v___x_4075_; uint8_t v_isShared_4076_; uint8_t v_isSharedCheck_4196_; 
v_fst_4072_ = lean_ctor_get(v_snd_4063_, 0);
v_snd_4073_ = lean_ctor_get(v_snd_4063_, 1);
v_isSharedCheck_4196_ = !lean_is_exclusive(v_snd_4063_);
if (v_isSharedCheck_4196_ == 0)
{
v___x_4075_ = v_snd_4063_;
v_isShared_4076_ = v_isSharedCheck_4196_;
goto v_resetjp_4074_;
}
else
{
lean_inc(v_snd_4073_);
lean_inc(v_fst_4072_);
lean_dec(v_snd_4063_);
v___x_4075_ = lean_box(0);
v_isShared_4076_ = v_isSharedCheck_4196_;
goto v_resetjp_4074_;
}
v_resetjp_4074_:
{
lean_object* v___x_4077_; lean_object* v___y_4079_; lean_object* v___y_4080_; uint8_t v___y_4081_; uint8_t v_found_4096_; lean_object* v_a_4097_; lean_object* v___y_4099_; 
v___x_4077_ = lean_box(0);
v_found_4096_ = 0;
v_a_4097_ = lean_array_uget_borrowed(v_as_4039_, v_i_4041_);
if (v_post_4038_ == 0)
{
lean_object* v_pre_4194_; 
v_pre_4194_ = lean_ctor_get(v_a_4097_, 0);
lean_inc_ref(v_pre_4194_);
v___y_4099_ = v_pre_4194_;
goto v___jp_4098_;
}
else
{
lean_object* v_post_4195_; 
v_post_4195_ = lean_ctor_get(v_a_4097_, 1);
lean_inc_ref(v_post_4195_);
v___y_4099_ = v_post_4195_;
goto v___jp_4098_;
}
v___jp_4078_:
{
lean_object* v___x_4082_; lean_object* v___x_4084_; 
v___x_4082_ = lean_box(v___y_4081_);
if (v_isShared_4076_ == 0)
{
lean_ctor_set(v___x_4075_, 1, v___x_4082_);
lean_ctor_set(v___x_4075_, 0, v___y_4080_);
v___x_4084_ = v___x_4075_;
goto v_reusejp_4083_;
}
else
{
lean_object* v_reuseFailAlloc_4095_; 
v_reuseFailAlloc_4095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4095_, 0, v___y_4080_);
lean_ctor_set(v_reuseFailAlloc_4095_, 1, v___x_4082_);
v___x_4084_ = v_reuseFailAlloc_4095_;
goto v_reusejp_4083_;
}
v_reusejp_4083_:
{
lean_object* v___x_4086_; 
if (v_isShared_4071_ == 0)
{
lean_ctor_set(v___x_4070_, 1, v___x_4084_);
lean_ctor_set(v___x_4070_, 0, v___y_4079_);
v___x_4086_ = v___x_4070_;
goto v_reusejp_4085_;
}
else
{
lean_object* v_reuseFailAlloc_4094_; 
v_reuseFailAlloc_4094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4094_, 0, v___y_4079_);
lean_ctor_set(v_reuseFailAlloc_4094_, 1, v___x_4084_);
v___x_4086_ = v_reuseFailAlloc_4094_;
goto v_reusejp_4085_;
}
v_reusejp_4085_:
{
lean_object* v___x_4087_; lean_object* v___x_4089_; 
v___x_4087_ = lean_box(v_cache_4056_);
if (v_isShared_4067_ == 0)
{
lean_ctor_set(v___x_4066_, 1, v___x_4086_);
lean_ctor_set(v___x_4066_, 0, v___x_4087_);
v___x_4089_ = v___x_4066_;
goto v_reusejp_4088_;
}
else
{
lean_object* v_reuseFailAlloc_4093_; 
v_reuseFailAlloc_4093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4093_, 0, v___x_4087_);
lean_ctor_set(v_reuseFailAlloc_4093_, 1, v___x_4086_);
v___x_4089_ = v_reuseFailAlloc_4093_;
goto v_reusejp_4088_;
}
v_reusejp_4088_:
{
lean_object* v___x_4091_; 
if (v_isShared_4061_ == 0)
{
lean_ctor_set(v___x_4060_, 1, v___x_4089_);
lean_ctor_set(v___x_4060_, 0, v___x_4077_);
v___x_4091_ = v___x_4060_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v___x_4077_);
lean_ctor_set(v_reuseFailAlloc_4092_, 1, v___x_4089_);
v___x_4091_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
v_a_4052_ = v___x_4091_;
goto v___jp_4051_;
}
}
}
}
}
v___jp_4098_:
{
lean_object* v_erased_4100_; lean_object* v___x_4101_; 
v_erased_4100_ = lean_ctor_get(v_a_4097_, 3);
lean_inc(v_fst_4068_);
lean_inc_ref(v_erased_4100_);
v___x_4101_ = l_Lean_Meta_Simp_simprocCore(v_post_4038_, v___y_4099_, v_erased_4100_, v_fst_4068_, v___y_4043_, v___y_4044_, v___y_4045_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_);
if (lean_obj_tag(v___x_4101_) == 0)
{
lean_object* v_a_4102_; 
v_a_4102_ = lean_ctor_get(v___x_4101_, 0);
lean_inc(v_a_4102_);
lean_dec_ref(v___x_4101_);
switch(lean_obj_tag(v_a_4102_))
{
case 0:
{
lean_object* v_r_4103_; lean_object* v___x_4105_; uint8_t v_isShared_4106_; uint8_t v_isSharedCheck_4133_; 
lean_del_object(v___x_4075_);
lean_del_object(v___x_4070_);
lean_del_object(v___x_4066_);
lean_del_object(v___x_4060_);
v_r_4103_ = lean_ctor_get(v_a_4102_, 0);
v_isSharedCheck_4133_ = !lean_is_exclusive(v_a_4102_);
if (v_isSharedCheck_4133_ == 0)
{
v___x_4105_ = v_a_4102_;
v_isShared_4106_ = v_isSharedCheck_4133_;
goto v_resetjp_4104_;
}
else
{
lean_inc(v_r_4103_);
lean_dec(v_a_4102_);
v___x_4105_ = lean_box(0);
v_isShared_4106_ = v_isSharedCheck_4133_;
goto v_resetjp_4104_;
}
v_resetjp_4104_:
{
uint8_t v___x_4107_; lean_object* v___x_4108_; 
v___x_4107_ = lean_unbox(v_snd_4073_);
lean_inc(v_fst_4072_);
v___x_4108_ = l_Lean_Meta_Simp_mkEqTransOptProofResult(v_fst_4072_, v___x_4107_, v_r_4103_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_);
if (lean_obj_tag(v___x_4108_) == 0)
{
lean_object* v_a_4109_; lean_object* v___x_4111_; uint8_t v_isShared_4112_; uint8_t v_isSharedCheck_4124_; 
v_a_4109_ = lean_ctor_get(v___x_4108_, 0);
v_isSharedCheck_4124_ = !lean_is_exclusive(v___x_4108_);
if (v_isSharedCheck_4124_ == 0)
{
v___x_4111_ = v___x_4108_;
v_isShared_4112_ = v_isSharedCheck_4124_;
goto v_resetjp_4110_;
}
else
{
lean_inc(v_a_4109_);
lean_dec(v___x_4108_);
v___x_4111_ = lean_box(0);
v_isShared_4112_ = v_isSharedCheck_4124_;
goto v_resetjp_4110_;
}
v_resetjp_4110_:
{
lean_object* v___x_4114_; 
if (v_isShared_4106_ == 0)
{
lean_ctor_set(v___x_4105_, 0, v_a_4109_);
v___x_4114_ = v___x_4105_;
goto v_reusejp_4113_;
}
else
{
lean_object* v_reuseFailAlloc_4123_; 
v_reuseFailAlloc_4123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4123_, 0, v_a_4109_);
v___x_4114_ = v_reuseFailAlloc_4123_;
goto v_reusejp_4113_;
}
v_reusejp_4113_:
{
lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4121_; 
v___x_4115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4115_, 0, v___x_4114_);
v___x_4116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4116_, 0, v_fst_4072_);
lean_ctor_set(v___x_4116_, 1, v_snd_4073_);
v___x_4117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4117_, 0, v_fst_4068_);
lean_ctor_set(v___x_4117_, 1, v___x_4116_);
v___x_4118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4118_, 0, v_fst_4064_);
lean_ctor_set(v___x_4118_, 1, v___x_4117_);
v___x_4119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4119_, 0, v___x_4115_);
lean_ctor_set(v___x_4119_, 1, v___x_4118_);
if (v_isShared_4112_ == 0)
{
lean_ctor_set(v___x_4111_, 0, v___x_4119_);
v___x_4121_ = v___x_4111_;
goto v_reusejp_4120_;
}
else
{
lean_object* v_reuseFailAlloc_4122_; 
v_reuseFailAlloc_4122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4122_, 0, v___x_4119_);
v___x_4121_ = v_reuseFailAlloc_4122_;
goto v_reusejp_4120_;
}
v_reusejp_4120_:
{
return v___x_4121_;
}
}
}
}
else
{
lean_object* v_a_4125_; lean_object* v___x_4127_; uint8_t v_isShared_4128_; uint8_t v_isSharedCheck_4132_; 
lean_del_object(v___x_4105_);
lean_dec(v_snd_4073_);
lean_dec(v_fst_4072_);
lean_dec(v_fst_4068_);
lean_dec(v_fst_4064_);
v_a_4125_ = lean_ctor_get(v___x_4108_, 0);
v_isSharedCheck_4132_ = !lean_is_exclusive(v___x_4108_);
if (v_isSharedCheck_4132_ == 0)
{
v___x_4127_ = v___x_4108_;
v_isShared_4128_ = v_isSharedCheck_4132_;
goto v_resetjp_4126_;
}
else
{
lean_inc(v_a_4125_);
lean_dec(v___x_4108_);
v___x_4127_ = lean_box(0);
v_isShared_4128_ = v_isSharedCheck_4132_;
goto v_resetjp_4126_;
}
v_resetjp_4126_:
{
lean_object* v___x_4130_; 
if (v_isShared_4128_ == 0)
{
v___x_4130_ = v___x_4127_;
goto v_reusejp_4129_;
}
else
{
lean_object* v_reuseFailAlloc_4131_; 
v_reuseFailAlloc_4131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4131_, 0, v_a_4125_);
v___x_4130_ = v_reuseFailAlloc_4131_;
goto v_reusejp_4129_;
}
v_reusejp_4129_:
{
return v___x_4130_;
}
}
}
}
}
case 1:
{
lean_object* v_e_4134_; lean_object* v___x_4136_; uint8_t v_isShared_4137_; uint8_t v_isSharedCheck_4164_; 
lean_del_object(v___x_4075_);
lean_del_object(v___x_4070_);
lean_del_object(v___x_4066_);
lean_del_object(v___x_4060_);
v_e_4134_ = lean_ctor_get(v_a_4102_, 0);
v_isSharedCheck_4164_ = !lean_is_exclusive(v_a_4102_);
if (v_isSharedCheck_4164_ == 0)
{
v___x_4136_ = v_a_4102_;
v_isShared_4137_ = v_isSharedCheck_4164_;
goto v_resetjp_4135_;
}
else
{
lean_inc(v_e_4134_);
lean_dec(v_a_4102_);
v___x_4136_ = lean_box(0);
v_isShared_4137_ = v_isSharedCheck_4164_;
goto v_resetjp_4135_;
}
v_resetjp_4135_:
{
uint8_t v___x_4138_; lean_object* v___x_4139_; 
v___x_4138_ = lean_unbox(v_snd_4073_);
lean_inc(v_fst_4072_);
v___x_4139_ = l_Lean_Meta_Simp_mkEqTransOptProofResult(v_fst_4072_, v___x_4138_, v_e_4134_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_);
if (lean_obj_tag(v___x_4139_) == 0)
{
lean_object* v_a_4140_; lean_object* v___x_4142_; uint8_t v_isShared_4143_; uint8_t v_isSharedCheck_4155_; 
v_a_4140_ = lean_ctor_get(v___x_4139_, 0);
v_isSharedCheck_4155_ = !lean_is_exclusive(v___x_4139_);
if (v_isSharedCheck_4155_ == 0)
{
v___x_4142_ = v___x_4139_;
v_isShared_4143_ = v_isSharedCheck_4155_;
goto v_resetjp_4141_;
}
else
{
lean_inc(v_a_4140_);
lean_dec(v___x_4139_);
v___x_4142_ = lean_box(0);
v_isShared_4143_ = v_isSharedCheck_4155_;
goto v_resetjp_4141_;
}
v_resetjp_4141_:
{
lean_object* v___x_4145_; 
if (v_isShared_4137_ == 0)
{
lean_ctor_set(v___x_4136_, 0, v_a_4140_);
v___x_4145_ = v___x_4136_;
goto v_reusejp_4144_;
}
else
{
lean_object* v_reuseFailAlloc_4154_; 
v_reuseFailAlloc_4154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4154_, 0, v_a_4140_);
v___x_4145_ = v_reuseFailAlloc_4154_;
goto v_reusejp_4144_;
}
v_reusejp_4144_:
{
lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4152_; 
v___x_4146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4146_, 0, v___x_4145_);
v___x_4147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4147_, 0, v_fst_4072_);
lean_ctor_set(v___x_4147_, 1, v_snd_4073_);
v___x_4148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4148_, 0, v_fst_4068_);
lean_ctor_set(v___x_4148_, 1, v___x_4147_);
v___x_4149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4149_, 0, v_fst_4064_);
lean_ctor_set(v___x_4149_, 1, v___x_4148_);
v___x_4150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4150_, 0, v___x_4146_);
lean_ctor_set(v___x_4150_, 1, v___x_4149_);
if (v_isShared_4143_ == 0)
{
lean_ctor_set(v___x_4142_, 0, v___x_4150_);
v___x_4152_ = v___x_4142_;
goto v_reusejp_4151_;
}
else
{
lean_object* v_reuseFailAlloc_4153_; 
v_reuseFailAlloc_4153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4153_, 0, v___x_4150_);
v___x_4152_ = v_reuseFailAlloc_4153_;
goto v_reusejp_4151_;
}
v_reusejp_4151_:
{
return v___x_4152_;
}
}
}
}
else
{
lean_object* v_a_4156_; lean_object* v___x_4158_; uint8_t v_isShared_4159_; uint8_t v_isSharedCheck_4163_; 
lean_del_object(v___x_4136_);
lean_dec(v_snd_4073_);
lean_dec(v_fst_4072_);
lean_dec(v_fst_4068_);
lean_dec(v_fst_4064_);
v_a_4156_ = lean_ctor_get(v___x_4139_, 0);
v_isSharedCheck_4163_ = !lean_is_exclusive(v___x_4139_);
if (v_isSharedCheck_4163_ == 0)
{
v___x_4158_ = v___x_4139_;
v_isShared_4159_ = v_isSharedCheck_4163_;
goto v_resetjp_4157_;
}
else
{
lean_inc(v_a_4156_);
lean_dec(v___x_4139_);
v___x_4158_ = lean_box(0);
v_isShared_4159_ = v_isSharedCheck_4163_;
goto v_resetjp_4157_;
}
v_resetjp_4157_:
{
lean_object* v___x_4161_; 
if (v_isShared_4159_ == 0)
{
v___x_4161_ = v___x_4158_;
goto v_reusejp_4160_;
}
else
{
lean_object* v_reuseFailAlloc_4162_; 
v_reuseFailAlloc_4162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4162_, 0, v_a_4156_);
v___x_4161_ = v_reuseFailAlloc_4162_;
goto v_reusejp_4160_;
}
v_reusejp_4160_:
{
return v___x_4161_;
}
}
}
}
}
default: 
{
lean_object* v_e_x3f_4165_; 
v_e_x3f_4165_ = lean_ctor_get(v_a_4102_, 0);
lean_inc(v_e_x3f_4165_);
lean_dec_ref(v_a_4102_);
if (lean_obj_tag(v_e_x3f_4165_) == 0)
{
lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; 
lean_del_object(v___x_4075_);
lean_del_object(v___x_4070_);
lean_del_object(v___x_4066_);
lean_del_object(v___x_4060_);
v___x_4166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4166_, 0, v_fst_4072_);
lean_ctor_set(v___x_4166_, 1, v_snd_4073_);
v___x_4167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4167_, 0, v_fst_4068_);
lean_ctor_set(v___x_4167_, 1, v___x_4166_);
v___x_4168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4168_, 0, v_fst_4064_);
lean_ctor_set(v___x_4168_, 1, v___x_4167_);
v___x_4169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4169_, 0, v___x_4077_);
lean_ctor_set(v___x_4169_, 1, v___x_4168_);
v_a_4052_ = v___x_4169_;
goto v___jp_4051_;
}
else
{
lean_object* v_val_4170_; lean_object* v_expr_4171_; lean_object* v_proof_x3f_4172_; uint8_t v_cache_4173_; lean_object* v___x_4174_; 
lean_dec(v_fst_4068_);
lean_dec(v_fst_4064_);
v_val_4170_ = lean_ctor_get(v_e_x3f_4165_, 0);
lean_inc(v_val_4170_);
lean_dec_ref(v_e_x3f_4165_);
v_expr_4171_ = lean_ctor_get(v_val_4170_, 0);
lean_inc_ref(v_expr_4171_);
v_proof_x3f_4172_ = lean_ctor_get(v_val_4170_, 1);
lean_inc(v_proof_x3f_4172_);
v_cache_4173_ = lean_ctor_get_uint8(v_val_4170_, sizeof(void*)*2);
lean_dec(v_val_4170_);
v___x_4174_ = l_Lean_Meta_mkEqTrans_x3f(v_fst_4072_, v_proof_x3f_4172_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_);
if (lean_obj_tag(v___x_4174_) == 0)
{
uint8_t v___x_4175_; 
v___x_4175_ = lean_unbox(v_snd_4073_);
lean_dec(v_snd_4073_);
if (v___x_4175_ == 0)
{
lean_object* v_a_4176_; 
v_a_4176_ = lean_ctor_get(v___x_4174_, 0);
lean_inc(v_a_4176_);
lean_dec_ref(v___x_4174_);
v___y_4079_ = v_expr_4171_;
v___y_4080_ = v_a_4176_;
v___y_4081_ = v_found_4096_;
goto v___jp_4078_;
}
else
{
lean_object* v_a_4177_; 
v_a_4177_ = lean_ctor_get(v___x_4174_, 0);
lean_inc(v_a_4177_);
lean_dec_ref(v___x_4174_);
v___y_4079_ = v_expr_4171_;
v___y_4080_ = v_a_4177_;
v___y_4081_ = v_cache_4173_;
goto v___jp_4078_;
}
}
else
{
lean_object* v_a_4178_; lean_object* v___x_4180_; uint8_t v_isShared_4181_; uint8_t v_isSharedCheck_4185_; 
lean_dec_ref(v_expr_4171_);
lean_del_object(v___x_4075_);
lean_dec(v_snd_4073_);
lean_del_object(v___x_4070_);
lean_del_object(v___x_4066_);
lean_del_object(v___x_4060_);
v_a_4178_ = lean_ctor_get(v___x_4174_, 0);
v_isSharedCheck_4185_ = !lean_is_exclusive(v___x_4174_);
if (v_isSharedCheck_4185_ == 0)
{
v___x_4180_ = v___x_4174_;
v_isShared_4181_ = v_isSharedCheck_4185_;
goto v_resetjp_4179_;
}
else
{
lean_inc(v_a_4178_);
lean_dec(v___x_4174_);
v___x_4180_ = lean_box(0);
v_isShared_4181_ = v_isSharedCheck_4185_;
goto v_resetjp_4179_;
}
v_resetjp_4179_:
{
lean_object* v___x_4183_; 
if (v_isShared_4181_ == 0)
{
v___x_4183_ = v___x_4180_;
goto v_reusejp_4182_;
}
else
{
lean_object* v_reuseFailAlloc_4184_; 
v_reuseFailAlloc_4184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4184_, 0, v_a_4178_);
v___x_4183_ = v_reuseFailAlloc_4184_;
goto v_reusejp_4182_;
}
v_reusejp_4182_:
{
return v___x_4183_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4186_; lean_object* v___x_4188_; uint8_t v_isShared_4189_; uint8_t v_isSharedCheck_4193_; 
lean_del_object(v___x_4075_);
lean_dec(v_snd_4073_);
lean_dec(v_fst_4072_);
lean_del_object(v___x_4070_);
lean_dec(v_fst_4068_);
lean_del_object(v___x_4066_);
lean_dec(v_fst_4064_);
lean_del_object(v___x_4060_);
v_a_4186_ = lean_ctor_get(v___x_4101_, 0);
v_isSharedCheck_4193_ = !lean_is_exclusive(v___x_4101_);
if (v_isSharedCheck_4193_ == 0)
{
v___x_4188_ = v___x_4101_;
v_isShared_4189_ = v_isSharedCheck_4193_;
goto v_resetjp_4187_;
}
else
{
lean_inc(v_a_4186_);
lean_dec(v___x_4101_);
v___x_4188_ = lean_box(0);
v_isShared_4189_ = v_isSharedCheck_4193_;
goto v_resetjp_4187_;
}
v_resetjp_4187_:
{
lean_object* v___x_4191_; 
if (v_isShared_4189_ == 0)
{
v___x_4191_ = v___x_4188_;
goto v_reusejp_4190_;
}
else
{
lean_object* v_reuseFailAlloc_4192_; 
v_reuseFailAlloc_4192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4192_, 0, v_a_4186_);
v___x_4191_ = v_reuseFailAlloc_4192_;
goto v_reusejp_4190_;
}
v_reusejp_4190_:
{
return v___x_4191_;
}
}
}
}
}
}
}
}
}
v___jp_4051_:
{
size_t v___x_4053_; size_t v___x_4054_; 
v___x_4053_ = ((size_t)1ULL);
v___x_4054_ = lean_usize_add(v_i_4041_, v___x_4053_);
v_i_4041_ = v___x_4054_;
v_b_4042_ = v_a_4052_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocArrayCore_spec__0___boxed(lean_object* v_post_4203_, lean_object* v_as_4204_, lean_object* v_sz_4205_, lean_object* v_i_4206_, lean_object* v_b_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_){
_start:
{
uint8_t v_post_boxed_4216_; size_t v_sz_boxed_4217_; size_t v_i_boxed_4218_; lean_object* v_res_4219_; 
v_post_boxed_4216_ = lean_unbox(v_post_4203_);
v_sz_boxed_4217_ = lean_unbox_usize(v_sz_4205_);
lean_dec(v_sz_4205_);
v_i_boxed_4218_ = lean_unbox_usize(v_i_4206_);
lean_dec(v_i_4206_);
v_res_4219_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocArrayCore_spec__0(v_post_boxed_4216_, v_as_4204_, v_sz_boxed_4217_, v_i_boxed_4218_, v_b_4207_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_, v___y_4213_, v___y_4214_);
lean_dec(v___y_4214_);
lean_dec_ref(v___y_4213_);
lean_dec(v___y_4212_);
lean_dec_ref(v___y_4211_);
lean_dec(v___y_4210_);
lean_dec_ref(v___y_4209_);
lean_dec(v___y_4208_);
lean_dec_ref(v_as_4204_);
return v_res_4219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_simprocArrayCore(uint8_t v_post_4224_, lean_object* v_ss_4225_, lean_object* v_e_4226_, lean_object* v_a_4227_, lean_object* v_a_4228_, lean_object* v_a_4229_, lean_object* v_a_4230_, lean_object* v_a_4231_, lean_object* v_a_4232_, lean_object* v_a_4233_){
_start:
{
uint8_t v_found_4235_; lean_object* v_proof_x3f_4236_; uint8_t v_cache_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; size_t v_sz_4243_; size_t v___x_4244_; lean_object* v___x_4245_; 
v_found_4235_ = 0;
v_proof_x3f_4236_ = lean_box(0);
v_cache_4237_ = 1;
v___x_4238_ = ((lean_object*)(l_Lean_Meta_Simp_simprocArrayCore___closed__0));
v___x_4239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4239_, 0, v_e_4226_);
lean_ctor_set(v___x_4239_, 1, v___x_4238_);
v___x_4240_ = lean_box(v_found_4235_);
v___x_4241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4241_, 0, v___x_4240_);
lean_ctor_set(v___x_4241_, 1, v___x_4239_);
v___x_4242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4242_, 0, v_proof_x3f_4236_);
lean_ctor_set(v___x_4242_, 1, v___x_4241_);
v_sz_4243_ = lean_array_size(v_ss_4225_);
v___x_4244_ = ((size_t)0ULL);
v___x_4245_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_simprocArrayCore_spec__0(v_post_4224_, v_ss_4225_, v_sz_4243_, v___x_4244_, v___x_4242_, v_a_4227_, v_a_4228_, v_a_4229_, v_a_4230_, v_a_4231_, v_a_4232_, v_a_4233_);
if (lean_obj_tag(v___x_4245_) == 0)
{
lean_object* v_a_4246_; lean_object* v___x_4248_; uint8_t v_isShared_4249_; uint8_t v_isSharedCheck_4272_; 
v_a_4246_ = lean_ctor_get(v___x_4245_, 0);
v_isSharedCheck_4272_ = !lean_is_exclusive(v___x_4245_);
if (v_isSharedCheck_4272_ == 0)
{
v___x_4248_ = v___x_4245_;
v_isShared_4249_ = v_isSharedCheck_4272_;
goto v_resetjp_4247_;
}
else
{
lean_inc(v_a_4246_);
lean_dec(v___x_4245_);
v___x_4248_ = lean_box(0);
v_isShared_4249_ = v_isSharedCheck_4272_;
goto v_resetjp_4247_;
}
v_resetjp_4247_:
{
lean_object* v_fst_4250_; 
v_fst_4250_ = lean_ctor_get(v_a_4246_, 0);
if (lean_obj_tag(v_fst_4250_) == 0)
{
lean_object* v_snd_4251_; lean_object* v_fst_4252_; uint8_t v___x_4253_; 
v_snd_4251_ = lean_ctor_get(v_a_4246_, 1);
lean_inc(v_snd_4251_);
lean_dec(v_a_4246_);
v_fst_4252_ = lean_ctor_get(v_snd_4251_, 0);
v___x_4253_ = lean_unbox(v_fst_4252_);
if (v___x_4253_ == 0)
{
lean_object* v___x_4254_; lean_object* v___x_4256_; 
lean_dec(v_snd_4251_);
v___x_4254_ = ((lean_object*)(l_Lean_Meta_Simp_simprocCore___closed__5));
if (v_isShared_4249_ == 0)
{
lean_ctor_set(v___x_4248_, 0, v___x_4254_);
v___x_4256_ = v___x_4248_;
goto v_reusejp_4255_;
}
else
{
lean_object* v_reuseFailAlloc_4257_; 
v_reuseFailAlloc_4257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4257_, 0, v___x_4254_);
v___x_4256_ = v_reuseFailAlloc_4257_;
goto v_reusejp_4255_;
}
v_reusejp_4255_:
{
return v___x_4256_;
}
}
else
{
lean_object* v_snd_4258_; lean_object* v_snd_4259_; lean_object* v_fst_4260_; lean_object* v_fst_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4266_; 
v_snd_4258_ = lean_ctor_get(v_snd_4251_, 1);
lean_inc(v_snd_4258_);
lean_dec(v_snd_4251_);
v_snd_4259_ = lean_ctor_get(v_snd_4258_, 1);
lean_inc(v_snd_4259_);
v_fst_4260_ = lean_ctor_get(v_snd_4258_, 0);
lean_inc(v_fst_4260_);
lean_dec(v_snd_4258_);
v_fst_4261_ = lean_ctor_get(v_snd_4259_, 0);
lean_inc(v_fst_4261_);
lean_dec(v_snd_4259_);
v___x_4262_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4262_, 0, v_fst_4260_);
lean_ctor_set(v___x_4262_, 1, v_fst_4261_);
lean_ctor_set_uint8(v___x_4262_, sizeof(void*)*2, v_cache_4237_);
v___x_4263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4263_, 0, v___x_4262_);
v___x_4264_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4264_, 0, v___x_4263_);
if (v_isShared_4249_ == 0)
{
lean_ctor_set(v___x_4248_, 0, v___x_4264_);
v___x_4266_ = v___x_4248_;
goto v_reusejp_4265_;
}
else
{
lean_object* v_reuseFailAlloc_4267_; 
v_reuseFailAlloc_4267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4267_, 0, v___x_4264_);
v___x_4266_ = v_reuseFailAlloc_4267_;
goto v_reusejp_4265_;
}
v_reusejp_4265_:
{
return v___x_4266_;
}
}
}
else
{
lean_object* v_val_4268_; lean_object* v___x_4270_; 
lean_inc_ref(v_fst_4250_);
lean_dec(v_a_4246_);
v_val_4268_ = lean_ctor_get(v_fst_4250_, 0);
lean_inc(v_val_4268_);
lean_dec_ref(v_fst_4250_);
if (v_isShared_4249_ == 0)
{
lean_ctor_set(v___x_4248_, 0, v_val_4268_);
v___x_4270_ = v___x_4248_;
goto v_reusejp_4269_;
}
else
{
lean_object* v_reuseFailAlloc_4271_; 
v_reuseFailAlloc_4271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4271_, 0, v_val_4268_);
v___x_4270_ = v_reuseFailAlloc_4271_;
goto v_reusejp_4269_;
}
v_reusejp_4269_:
{
return v___x_4270_;
}
}
}
}
else
{
lean_object* v_a_4273_; lean_object* v___x_4275_; uint8_t v_isShared_4276_; uint8_t v_isSharedCheck_4280_; 
v_a_4273_ = lean_ctor_get(v___x_4245_, 0);
v_isSharedCheck_4280_ = !lean_is_exclusive(v___x_4245_);
if (v_isSharedCheck_4280_ == 0)
{
v___x_4275_ = v___x_4245_;
v_isShared_4276_ = v_isSharedCheck_4280_;
goto v_resetjp_4274_;
}
else
{
lean_inc(v_a_4273_);
lean_dec(v___x_4245_);
v___x_4275_ = lean_box(0);
v_isShared_4276_ = v_isSharedCheck_4280_;
goto v_resetjp_4274_;
}
v_resetjp_4274_:
{
lean_object* v___x_4278_; 
if (v_isShared_4276_ == 0)
{
v___x_4278_ = v___x_4275_;
goto v_reusejp_4277_;
}
else
{
lean_object* v_reuseFailAlloc_4279_; 
v_reuseFailAlloc_4279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4279_, 0, v_a_4273_);
v___x_4278_ = v_reuseFailAlloc_4279_;
goto v_reusejp_4277_;
}
v_reusejp_4277_:
{
return v___x_4278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_simprocArrayCore___boxed(lean_object* v_post_4281_, lean_object* v_ss_4282_, lean_object* v_e_4283_, lean_object* v_a_4284_, lean_object* v_a_4285_, lean_object* v_a_4286_, lean_object* v_a_4287_, lean_object* v_a_4288_, lean_object* v_a_4289_, lean_object* v_a_4290_, lean_object* v_a_4291_){
_start:
{
uint8_t v_post_boxed_4292_; lean_object* v_res_4293_; 
v_post_boxed_4292_ = lean_unbox(v_post_4281_);
v_res_4293_ = l_Lean_Meta_Simp_simprocArrayCore(v_post_boxed_4292_, v_ss_4282_, v_e_4283_, v_a_4284_, v_a_4285_, v_a_4286_, v_a_4287_, v_a_4288_, v_a_4289_, v_a_4290_);
lean_dec(v_a_4290_);
lean_dec_ref(v_a_4289_);
lean_dec(v_a_4288_);
lean_dec_ref(v_a_4287_);
lean_dec(v_a_4286_);
lean_dec_ref(v_a_4285_);
lean_dec(v_a_4284_);
lean_dec_ref(v_ss_4282_);
return v_res_4293_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_dsimprocArrayCore_spec__0(uint8_t v_post_4294_, lean_object* v_as_4295_, size_t v_sz_4296_, size_t v_i_4297_, lean_object* v_b_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_){
_start:
{
lean_object* v_a_4308_; uint8_t v___x_4312_; 
v___x_4312_ = lean_usize_dec_lt(v_i_4297_, v_sz_4296_);
if (v___x_4312_ == 0)
{
lean_object* v___x_4313_; 
v___x_4313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4313_, 0, v_b_4298_);
return v___x_4313_;
}
else
{
lean_object* v_snd_4314_; lean_object* v___x_4316_; uint8_t v_isShared_4317_; uint8_t v_isSharedCheck_4370_; 
v_snd_4314_ = lean_ctor_get(v_b_4298_, 1);
v_isSharedCheck_4370_ = !lean_is_exclusive(v_b_4298_);
if (v_isSharedCheck_4370_ == 0)
{
lean_object* v_unused_4371_; 
v_unused_4371_ = lean_ctor_get(v_b_4298_, 0);
lean_dec(v_unused_4371_);
v___x_4316_ = v_b_4298_;
v_isShared_4317_ = v_isSharedCheck_4370_;
goto v_resetjp_4315_;
}
else
{
lean_inc(v_snd_4314_);
lean_dec(v_b_4298_);
v___x_4316_ = lean_box(0);
v_isShared_4317_ = v_isSharedCheck_4370_;
goto v_resetjp_4315_;
}
v_resetjp_4315_:
{
lean_object* v_fst_4318_; lean_object* v_snd_4319_; lean_object* v___x_4321_; uint8_t v_isShared_4322_; uint8_t v_isSharedCheck_4369_; 
v_fst_4318_ = lean_ctor_get(v_snd_4314_, 0);
v_snd_4319_ = lean_ctor_get(v_snd_4314_, 1);
v_isSharedCheck_4369_ = !lean_is_exclusive(v_snd_4314_);
if (v_isSharedCheck_4369_ == 0)
{
v___x_4321_ = v_snd_4314_;
v_isShared_4322_ = v_isSharedCheck_4369_;
goto v_resetjp_4320_;
}
else
{
lean_inc(v_snd_4319_);
lean_inc(v_fst_4318_);
lean_dec(v_snd_4314_);
v___x_4321_ = lean_box(0);
v_isShared_4322_ = v_isSharedCheck_4369_;
goto v_resetjp_4320_;
}
v_resetjp_4320_:
{
lean_object* v___x_4323_; lean_object* v_a_4324_; lean_object* v___y_4326_; 
v___x_4323_ = lean_box(0);
v_a_4324_ = lean_array_uget_borrowed(v_as_4295_, v_i_4297_);
if (v_post_4294_ == 0)
{
lean_object* v_pre_4367_; 
v_pre_4367_ = lean_ctor_get(v_a_4324_, 0);
lean_inc_ref(v_pre_4367_);
v___y_4326_ = v_pre_4367_;
goto v___jp_4325_;
}
else
{
lean_object* v_post_4368_; 
v_post_4368_ = lean_ctor_get(v_a_4324_, 1);
lean_inc_ref(v_post_4368_);
v___y_4326_ = v_post_4368_;
goto v___jp_4325_;
}
v___jp_4325_:
{
lean_object* v_erased_4327_; lean_object* v___x_4328_; 
v_erased_4327_ = lean_ctor_get(v_a_4324_, 3);
lean_inc(v_snd_4319_);
lean_inc_ref(v_erased_4327_);
v___x_4328_ = l_Lean_Meta_Simp_dsimprocCore(v_post_4294_, v___y_4326_, v_erased_4327_, v_snd_4319_, v___y_4299_, v___y_4300_, v___y_4301_, v___y_4302_, v___y_4303_, v___y_4304_, v___y_4305_);
if (lean_obj_tag(v___x_4328_) == 0)
{
lean_object* v_a_4329_; lean_object* v___x_4331_; uint8_t v_isShared_4332_; uint8_t v_isSharedCheck_4358_; 
v_a_4329_ = lean_ctor_get(v___x_4328_, 0);
v_isSharedCheck_4358_ = !lean_is_exclusive(v___x_4328_);
if (v_isSharedCheck_4358_ == 0)
{
v___x_4331_ = v___x_4328_;
v_isShared_4332_ = v_isSharedCheck_4358_;
goto v_resetjp_4330_;
}
else
{
lean_inc(v_a_4329_);
lean_dec(v___x_4328_);
v___x_4331_ = lean_box(0);
v_isShared_4332_ = v_isSharedCheck_4358_;
goto v_resetjp_4330_;
}
v_resetjp_4330_:
{
if (lean_obj_tag(v_a_4329_) == 2)
{
lean_object* v_e_x3f_4333_; 
lean_del_object(v___x_4331_);
v_e_x3f_4333_ = lean_ctor_get(v_a_4329_, 0);
lean_inc(v_e_x3f_4333_);
lean_dec_ref(v_a_4329_);
if (lean_obj_tag(v_e_x3f_4333_) == 0)
{
lean_object* v___x_4335_; 
if (v_isShared_4322_ == 0)
{
v___x_4335_ = v___x_4321_;
goto v_reusejp_4334_;
}
else
{
lean_object* v_reuseFailAlloc_4339_; 
v_reuseFailAlloc_4339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4339_, 0, v_fst_4318_);
lean_ctor_set(v_reuseFailAlloc_4339_, 1, v_snd_4319_);
v___x_4335_ = v_reuseFailAlloc_4339_;
goto v_reusejp_4334_;
}
v_reusejp_4334_:
{
lean_object* v___x_4337_; 
if (v_isShared_4317_ == 0)
{
lean_ctor_set(v___x_4316_, 1, v___x_4335_);
lean_ctor_set(v___x_4316_, 0, v___x_4323_);
v___x_4337_ = v___x_4316_;
goto v_reusejp_4336_;
}
else
{
lean_object* v_reuseFailAlloc_4338_; 
v_reuseFailAlloc_4338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4338_, 0, v___x_4323_);
lean_ctor_set(v_reuseFailAlloc_4338_, 1, v___x_4335_);
v___x_4337_ = v_reuseFailAlloc_4338_;
goto v_reusejp_4336_;
}
v_reusejp_4336_:
{
v_a_4308_ = v___x_4337_;
goto v___jp_4307_;
}
}
}
else
{
lean_object* v_val_4340_; lean_object* v___x_4341_; lean_object* v___x_4343_; 
lean_dec(v_snd_4319_);
lean_dec(v_fst_4318_);
v_val_4340_ = lean_ctor_get(v_e_x3f_4333_, 0);
lean_inc(v_val_4340_);
lean_dec_ref(v_e_x3f_4333_);
v___x_4341_ = lean_box(v___x_4312_);
if (v_isShared_4322_ == 0)
{
lean_ctor_set(v___x_4321_, 1, v_val_4340_);
lean_ctor_set(v___x_4321_, 0, v___x_4341_);
v___x_4343_ = v___x_4321_;
goto v_reusejp_4342_;
}
else
{
lean_object* v_reuseFailAlloc_4347_; 
v_reuseFailAlloc_4347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4347_, 0, v___x_4341_);
lean_ctor_set(v_reuseFailAlloc_4347_, 1, v_val_4340_);
v___x_4343_ = v_reuseFailAlloc_4347_;
goto v_reusejp_4342_;
}
v_reusejp_4342_:
{
lean_object* v___x_4345_; 
if (v_isShared_4317_ == 0)
{
lean_ctor_set(v___x_4316_, 1, v___x_4343_);
lean_ctor_set(v___x_4316_, 0, v___x_4323_);
v___x_4345_ = v___x_4316_;
goto v_reusejp_4344_;
}
else
{
lean_object* v_reuseFailAlloc_4346_; 
v_reuseFailAlloc_4346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4346_, 0, v___x_4323_);
lean_ctor_set(v_reuseFailAlloc_4346_, 1, v___x_4343_);
v___x_4345_ = v_reuseFailAlloc_4346_;
goto v_reusejp_4344_;
}
v_reusejp_4344_:
{
v_a_4308_ = v___x_4345_;
goto v___jp_4307_;
}
}
}
}
else
{
lean_object* v___x_4348_; lean_object* v___x_4350_; 
v___x_4348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4348_, 0, v_a_4329_);
if (v_isShared_4322_ == 0)
{
v___x_4350_ = v___x_4321_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4357_; 
v_reuseFailAlloc_4357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4357_, 0, v_fst_4318_);
lean_ctor_set(v_reuseFailAlloc_4357_, 1, v_snd_4319_);
v___x_4350_ = v_reuseFailAlloc_4357_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
lean_object* v___x_4352_; 
if (v_isShared_4317_ == 0)
{
lean_ctor_set(v___x_4316_, 1, v___x_4350_);
lean_ctor_set(v___x_4316_, 0, v___x_4348_);
v___x_4352_ = v___x_4316_;
goto v_reusejp_4351_;
}
else
{
lean_object* v_reuseFailAlloc_4356_; 
v_reuseFailAlloc_4356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4356_, 0, v___x_4348_);
lean_ctor_set(v_reuseFailAlloc_4356_, 1, v___x_4350_);
v___x_4352_ = v_reuseFailAlloc_4356_;
goto v_reusejp_4351_;
}
v_reusejp_4351_:
{
lean_object* v___x_4354_; 
if (v_isShared_4332_ == 0)
{
lean_ctor_set(v___x_4331_, 0, v___x_4352_);
v___x_4354_ = v___x_4331_;
goto v_reusejp_4353_;
}
else
{
lean_object* v_reuseFailAlloc_4355_; 
v_reuseFailAlloc_4355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4355_, 0, v___x_4352_);
v___x_4354_ = v_reuseFailAlloc_4355_;
goto v_reusejp_4353_;
}
v_reusejp_4353_:
{
return v___x_4354_;
}
}
}
}
}
}
else
{
lean_object* v_a_4359_; lean_object* v___x_4361_; uint8_t v_isShared_4362_; uint8_t v_isSharedCheck_4366_; 
lean_del_object(v___x_4321_);
lean_dec(v_snd_4319_);
lean_dec(v_fst_4318_);
lean_del_object(v___x_4316_);
v_a_4359_ = lean_ctor_get(v___x_4328_, 0);
v_isSharedCheck_4366_ = !lean_is_exclusive(v___x_4328_);
if (v_isSharedCheck_4366_ == 0)
{
v___x_4361_ = v___x_4328_;
v_isShared_4362_ = v_isSharedCheck_4366_;
goto v_resetjp_4360_;
}
else
{
lean_inc(v_a_4359_);
lean_dec(v___x_4328_);
v___x_4361_ = lean_box(0);
v_isShared_4362_ = v_isSharedCheck_4366_;
goto v_resetjp_4360_;
}
v_resetjp_4360_:
{
lean_object* v___x_4364_; 
if (v_isShared_4362_ == 0)
{
v___x_4364_ = v___x_4361_;
goto v_reusejp_4363_;
}
else
{
lean_object* v_reuseFailAlloc_4365_; 
v_reuseFailAlloc_4365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4365_, 0, v_a_4359_);
v___x_4364_ = v_reuseFailAlloc_4365_;
goto v_reusejp_4363_;
}
v_reusejp_4363_:
{
return v___x_4364_;
}
}
}
}
}
}
}
v___jp_4307_:
{
size_t v___x_4309_; size_t v___x_4310_; 
v___x_4309_ = ((size_t)1ULL);
v___x_4310_ = lean_usize_add(v_i_4297_, v___x_4309_);
v_i_4297_ = v___x_4310_;
v_b_4298_ = v_a_4308_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_dsimprocArrayCore_spec__0___boxed(lean_object* v_post_4372_, lean_object* v_as_4373_, lean_object* v_sz_4374_, lean_object* v_i_4375_, lean_object* v_b_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_){
_start:
{
uint8_t v_post_boxed_4385_; size_t v_sz_boxed_4386_; size_t v_i_boxed_4387_; lean_object* v_res_4388_; 
v_post_boxed_4385_ = lean_unbox(v_post_4372_);
v_sz_boxed_4386_ = lean_unbox_usize(v_sz_4374_);
lean_dec(v_sz_4374_);
v_i_boxed_4387_ = lean_unbox_usize(v_i_4375_);
lean_dec(v_i_4375_);
v_res_4388_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_dsimprocArrayCore_spec__0(v_post_boxed_4385_, v_as_4373_, v_sz_boxed_4386_, v_i_boxed_4387_, v_b_4376_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_, v___y_4381_, v___y_4382_, v___y_4383_);
lean_dec(v___y_4383_);
lean_dec_ref(v___y_4382_);
lean_dec(v___y_4381_);
lean_dec_ref(v___y_4380_);
lean_dec(v___y_4379_);
lean_dec_ref(v___y_4378_);
lean_dec(v___y_4377_);
lean_dec_ref(v_as_4373_);
return v_res_4388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_dsimprocArrayCore(uint8_t v_post_4389_, lean_object* v_ss_4390_, lean_object* v_e_4391_, lean_object* v_a_4392_, lean_object* v_a_4393_, lean_object* v_a_4394_, lean_object* v_a_4395_, lean_object* v_a_4396_, lean_object* v_a_4397_, lean_object* v_a_4398_){
_start:
{
uint8_t v_found_4400_; lean_object* v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; size_t v_sz_4405_; size_t v___x_4406_; lean_object* v___x_4407_; 
v_found_4400_ = 0;
v___x_4401_ = lean_box(0);
v___x_4402_ = lean_box(v_found_4400_);
v___x_4403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4403_, 0, v___x_4402_);
lean_ctor_set(v___x_4403_, 1, v_e_4391_);
v___x_4404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4404_, 0, v___x_4401_);
lean_ctor_set(v___x_4404_, 1, v___x_4403_);
v_sz_4405_ = lean_array_size(v_ss_4390_);
v___x_4406_ = ((size_t)0ULL);
v___x_4407_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Simp_dsimprocArrayCore_spec__0(v_post_4389_, v_ss_4390_, v_sz_4405_, v___x_4406_, v___x_4404_, v_a_4392_, v_a_4393_, v_a_4394_, v_a_4395_, v_a_4396_, v_a_4397_, v_a_4398_);
if (lean_obj_tag(v___x_4407_) == 0)
{
lean_object* v_a_4408_; lean_object* v___x_4410_; uint8_t v_isShared_4411_; uint8_t v_isSharedCheck_4430_; 
v_a_4408_ = lean_ctor_get(v___x_4407_, 0);
v_isSharedCheck_4430_ = !lean_is_exclusive(v___x_4407_);
if (v_isSharedCheck_4430_ == 0)
{
v___x_4410_ = v___x_4407_;
v_isShared_4411_ = v_isSharedCheck_4430_;
goto v_resetjp_4409_;
}
else
{
lean_inc(v_a_4408_);
lean_dec(v___x_4407_);
v___x_4410_ = lean_box(0);
v_isShared_4411_ = v_isSharedCheck_4430_;
goto v_resetjp_4409_;
}
v_resetjp_4409_:
{
lean_object* v_fst_4412_; 
v_fst_4412_ = lean_ctor_get(v_a_4408_, 0);
if (lean_obj_tag(v_fst_4412_) == 0)
{
lean_object* v_snd_4413_; lean_object* v_fst_4414_; uint8_t v___x_4415_; 
v_snd_4413_ = lean_ctor_get(v_a_4408_, 1);
lean_inc(v_snd_4413_);
lean_dec(v_a_4408_);
v_fst_4414_ = lean_ctor_get(v_snd_4413_, 0);
v___x_4415_ = lean_unbox(v_fst_4414_);
if (v___x_4415_ == 0)
{
lean_object* v___x_4416_; lean_object* v___x_4418_; 
lean_dec(v_snd_4413_);
v___x_4416_ = ((lean_object*)(l_Lean_Meta_Simp_dsimprocCore___closed__0));
if (v_isShared_4411_ == 0)
{
lean_ctor_set(v___x_4410_, 0, v___x_4416_);
v___x_4418_ = v___x_4410_;
goto v_reusejp_4417_;
}
else
{
lean_object* v_reuseFailAlloc_4419_; 
v_reuseFailAlloc_4419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4419_, 0, v___x_4416_);
v___x_4418_ = v_reuseFailAlloc_4419_;
goto v_reusejp_4417_;
}
v_reusejp_4417_:
{
return v___x_4418_;
}
}
else
{
lean_object* v_snd_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4424_; 
v_snd_4420_ = lean_ctor_get(v_snd_4413_, 1);
lean_inc(v_snd_4420_);
lean_dec(v_snd_4413_);
v___x_4421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4421_, 0, v_snd_4420_);
v___x_4422_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4422_, 0, v___x_4421_);
if (v_isShared_4411_ == 0)
{
lean_ctor_set(v___x_4410_, 0, v___x_4422_);
v___x_4424_ = v___x_4410_;
goto v_reusejp_4423_;
}
else
{
lean_object* v_reuseFailAlloc_4425_; 
v_reuseFailAlloc_4425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4425_, 0, v___x_4422_);
v___x_4424_ = v_reuseFailAlloc_4425_;
goto v_reusejp_4423_;
}
v_reusejp_4423_:
{
return v___x_4424_;
}
}
}
else
{
lean_object* v_val_4426_; lean_object* v___x_4428_; 
lean_inc_ref(v_fst_4412_);
lean_dec(v_a_4408_);
v_val_4426_ = lean_ctor_get(v_fst_4412_, 0);
lean_inc(v_val_4426_);
lean_dec_ref(v_fst_4412_);
if (v_isShared_4411_ == 0)
{
lean_ctor_set(v___x_4410_, 0, v_val_4426_);
v___x_4428_ = v___x_4410_;
goto v_reusejp_4427_;
}
else
{
lean_object* v_reuseFailAlloc_4429_; 
v_reuseFailAlloc_4429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4429_, 0, v_val_4426_);
v___x_4428_ = v_reuseFailAlloc_4429_;
goto v_reusejp_4427_;
}
v_reusejp_4427_:
{
return v___x_4428_;
}
}
}
}
else
{
lean_object* v_a_4431_; lean_object* v___x_4433_; uint8_t v_isShared_4434_; uint8_t v_isSharedCheck_4438_; 
v_a_4431_ = lean_ctor_get(v___x_4407_, 0);
v_isSharedCheck_4438_ = !lean_is_exclusive(v___x_4407_);
if (v_isSharedCheck_4438_ == 0)
{
v___x_4433_ = v___x_4407_;
v_isShared_4434_ = v_isSharedCheck_4438_;
goto v_resetjp_4432_;
}
else
{
lean_inc(v_a_4431_);
lean_dec(v___x_4407_);
v___x_4433_ = lean_box(0);
v_isShared_4434_ = v_isSharedCheck_4438_;
goto v_resetjp_4432_;
}
v_resetjp_4432_:
{
lean_object* v___x_4436_; 
if (v_isShared_4434_ == 0)
{
v___x_4436_ = v___x_4433_;
goto v_reusejp_4435_;
}
else
{
lean_object* v_reuseFailAlloc_4437_; 
v_reuseFailAlloc_4437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4437_, 0, v_a_4431_);
v___x_4436_ = v_reuseFailAlloc_4437_;
goto v_reusejp_4435_;
}
v_reusejp_4435_:
{
return v___x_4436_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_dsimprocArrayCore___boxed(lean_object* v_post_4439_, lean_object* v_ss_4440_, lean_object* v_e_4441_, lean_object* v_a_4442_, lean_object* v_a_4443_, lean_object* v_a_4444_, lean_object* v_a_4445_, lean_object* v_a_4446_, lean_object* v_a_4447_, lean_object* v_a_4448_, lean_object* v_a_4449_){
_start:
{
uint8_t v_post_boxed_4450_; lean_object* v_res_4451_; 
v_post_boxed_4450_ = lean_unbox(v_post_4439_);
v_res_4451_ = l_Lean_Meta_Simp_dsimprocArrayCore(v_post_boxed_4450_, v_ss_4440_, v_e_4441_, v_a_4442_, v_a_4443_, v_a_4444_, v_a_4445_, v_a_4446_, v_a_4447_, v_a_4448_);
lean_dec(v_a_4448_);
lean_dec_ref(v_a_4447_);
lean_dec(v_a_4446_);
lean_dec_ref(v_a_4445_);
lean_dec(v_a_4444_);
lean_dec_ref(v_a_4443_);
lean_dec(v_a_4442_);
lean_dec_ref(v_ss_4440_);
return v_res_4451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__spec__0(lean_object* v_name_4452_, lean_object* v_decl_4453_, lean_object* v_ref_4454_){
_start:
{
lean_object* v_defValue_4456_; lean_object* v_descr_4457_; lean_object* v___x_4459_; uint8_t v_isShared_4460_; uint8_t v_isSharedCheck_4484_; 
v_defValue_4456_ = lean_ctor_get(v_decl_4453_, 0);
v_descr_4457_ = lean_ctor_get(v_decl_4453_, 1);
v_isSharedCheck_4484_ = !lean_is_exclusive(v_decl_4453_);
if (v_isSharedCheck_4484_ == 0)
{
v___x_4459_ = v_decl_4453_;
v_isShared_4460_ = v_isSharedCheck_4484_;
goto v_resetjp_4458_;
}
else
{
lean_inc(v_descr_4457_);
lean_inc(v_defValue_4456_);
lean_dec(v_decl_4453_);
v___x_4459_ = lean_box(0);
v_isShared_4460_ = v_isSharedCheck_4484_;
goto v_resetjp_4458_;
}
v_resetjp_4458_:
{
lean_object* v___x_4461_; uint8_t v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; 
v___x_4461_ = lean_alloc_ctor(1, 0, 1);
v___x_4462_ = lean_unbox(v_defValue_4456_);
lean_ctor_set_uint8(v___x_4461_, 0, v___x_4462_);
lean_inc(v_name_4452_);
v___x_4463_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4463_, 0, v_name_4452_);
lean_ctor_set(v___x_4463_, 1, v_ref_4454_);
lean_ctor_set(v___x_4463_, 2, v___x_4461_);
lean_ctor_set(v___x_4463_, 3, v_descr_4457_);
lean_inc(v_name_4452_);
v___x_4464_ = lean_register_option(v_name_4452_, v___x_4463_);
if (lean_obj_tag(v___x_4464_) == 0)
{
lean_object* v___x_4466_; uint8_t v_isShared_4467_; uint8_t v_isSharedCheck_4474_; 
v_isSharedCheck_4474_ = !lean_is_exclusive(v___x_4464_);
if (v_isSharedCheck_4474_ == 0)
{
lean_object* v_unused_4475_; 
v_unused_4475_ = lean_ctor_get(v___x_4464_, 0);
lean_dec(v_unused_4475_);
v___x_4466_ = v___x_4464_;
v_isShared_4467_ = v_isSharedCheck_4474_;
goto v_resetjp_4465_;
}
else
{
lean_dec(v___x_4464_);
v___x_4466_ = lean_box(0);
v_isShared_4467_ = v_isSharedCheck_4474_;
goto v_resetjp_4465_;
}
v_resetjp_4465_:
{
lean_object* v___x_4469_; 
if (v_isShared_4460_ == 0)
{
lean_ctor_set(v___x_4459_, 1, v_defValue_4456_);
lean_ctor_set(v___x_4459_, 0, v_name_4452_);
v___x_4469_ = v___x_4459_;
goto v_reusejp_4468_;
}
else
{
lean_object* v_reuseFailAlloc_4473_; 
v_reuseFailAlloc_4473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4473_, 0, v_name_4452_);
lean_ctor_set(v_reuseFailAlloc_4473_, 1, v_defValue_4456_);
v___x_4469_ = v_reuseFailAlloc_4473_;
goto v_reusejp_4468_;
}
v_reusejp_4468_:
{
lean_object* v___x_4471_; 
if (v_isShared_4467_ == 0)
{
lean_ctor_set(v___x_4466_, 0, v___x_4469_);
v___x_4471_ = v___x_4466_;
goto v_reusejp_4470_;
}
else
{
lean_object* v_reuseFailAlloc_4472_; 
v_reuseFailAlloc_4472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4472_, 0, v___x_4469_);
v___x_4471_ = v_reuseFailAlloc_4472_;
goto v_reusejp_4470_;
}
v_reusejp_4470_:
{
return v___x_4471_;
}
}
}
}
else
{
lean_object* v_a_4476_; lean_object* v___x_4478_; uint8_t v_isShared_4479_; uint8_t v_isSharedCheck_4483_; 
lean_del_object(v___x_4459_);
lean_dec(v_defValue_4456_);
lean_dec(v_name_4452_);
v_a_4476_ = lean_ctor_get(v___x_4464_, 0);
v_isSharedCheck_4483_ = !lean_is_exclusive(v___x_4464_);
if (v_isSharedCheck_4483_ == 0)
{
v___x_4478_ = v___x_4464_;
v_isShared_4479_ = v_isSharedCheck_4483_;
goto v_resetjp_4477_;
}
else
{
lean_inc(v_a_4476_);
lean_dec(v___x_4464_);
v___x_4478_ = lean_box(0);
v_isShared_4479_ = v_isSharedCheck_4483_;
goto v_resetjp_4477_;
}
v_resetjp_4477_:
{
lean_object* v___x_4481_; 
if (v_isShared_4479_ == 0)
{
v___x_4481_ = v___x_4478_;
goto v_reusejp_4480_;
}
else
{
lean_object* v_reuseFailAlloc_4482_; 
v_reuseFailAlloc_4482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4482_, 0, v_a_4476_);
v___x_4481_ = v_reuseFailAlloc_4482_;
goto v_reusejp_4480_;
}
v_reusejp_4480_:
{
return v___x_4481_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_4485_, lean_object* v_decl_4486_, lean_object* v_ref_4487_, lean_object* v_a_4488_){
_start:
{
lean_object* v_res_4489_; 
v_res_4489_ = l_Lean_Option_register___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__spec__0(v_name_4485_, v_decl_4486_, v_ref_4487_);
return v_res_4489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; 
v___x_4504_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4_));
v___x_4505_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4_));
v___x_4506_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__4_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4_));
v___x_4507_ = l_Lean_Option_register___at___00Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4__spec__0(v___x_4504_, v___x_4505_, v___x_4506_);
return v___x_4507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4____boxed(lean_object* v_a_4508_){
_start:
{
lean_object* v_res_4509_; 
v_res_4509_ = l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4_();
return v_res_4509_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Simp_userPreSimprocs_spec__0(lean_object* v_opts_4510_, lean_object* v_opt_4511_){
_start:
{
lean_object* v_name_4512_; lean_object* v_defValue_4513_; lean_object* v_map_4514_; lean_object* v___x_4515_; 
v_name_4512_ = lean_ctor_get(v_opt_4511_, 0);
v_defValue_4513_ = lean_ctor_get(v_opt_4511_, 1);
v_map_4514_ = lean_ctor_get(v_opts_4510_, 0);
v___x_4515_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4514_, v_name_4512_);
if (lean_obj_tag(v___x_4515_) == 0)
{
uint8_t v___x_4516_; 
v___x_4516_ = lean_unbox(v_defValue_4513_);
return v___x_4516_;
}
else
{
lean_object* v_val_4517_; 
v_val_4517_ = lean_ctor_get(v___x_4515_, 0);
lean_inc(v_val_4517_);
lean_dec_ref(v___x_4515_);
if (lean_obj_tag(v_val_4517_) == 1)
{
uint8_t v_v_4518_; 
v_v_4518_ = lean_ctor_get_uint8(v_val_4517_, 0);
lean_dec_ref(v_val_4517_);
return v_v_4518_;
}
else
{
uint8_t v___x_4519_; 
lean_dec(v_val_4517_);
v___x_4519_ = lean_unbox(v_defValue_4513_);
return v___x_4519_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Simp_userPreSimprocs_spec__0___boxed(lean_object* v_opts_4520_, lean_object* v_opt_4521_){
_start:
{
uint8_t v_res_4522_; lean_object* v_r_4523_; 
v_res_4522_ = l_Lean_Option_get___at___00Lean_Meta_Simp_userPreSimprocs_spec__0(v_opts_4520_, v_opt_4521_);
lean_dec_ref(v_opt_4521_);
lean_dec_ref(v_opts_4520_);
v_r_4523_ = lean_box(v_res_4522_);
return v_r_4523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_userPreSimprocs(lean_object* v_s_4524_, lean_object* v_e_4525_, lean_object* v_a_4526_, lean_object* v_a_4527_, lean_object* v_a_4528_, lean_object* v_a_4529_, lean_object* v_a_4530_, lean_object* v_a_4531_, lean_object* v_a_4532_){
_start:
{
lean_object* v_options_4534_; lean_object* v___x_4535_; uint8_t v___x_4536_; 
v_options_4534_ = lean_ctor_get(v_a_4531_, 2);
v___x_4535_ = l_Lean_Meta_Simp_simprocs;
v___x_4536_ = l_Lean_Option_get___at___00Lean_Meta_Simp_userPreSimprocs_spec__0(v_options_4534_, v___x_4535_);
if (v___x_4536_ == 0)
{
lean_object* v___x_4537_; lean_object* v___x_4538_; 
lean_dec_ref(v_e_4525_);
v___x_4537_ = ((lean_object*)(l_Lean_Meta_Simp_simprocCore___closed__0));
v___x_4538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4538_, 0, v___x_4537_);
return v___x_4538_;
}
else
{
uint8_t v___x_4539_; lean_object* v___x_4540_; 
v___x_4539_ = 0;
v___x_4540_ = l_Lean_Meta_Simp_simprocArrayCore(v___x_4539_, v_s_4524_, v_e_4525_, v_a_4526_, v_a_4527_, v_a_4528_, v_a_4529_, v_a_4530_, v_a_4531_, v_a_4532_);
return v___x_4540_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_userPreSimprocs___boxed(lean_object* v_s_4541_, lean_object* v_e_4542_, lean_object* v_a_4543_, lean_object* v_a_4544_, lean_object* v_a_4545_, lean_object* v_a_4546_, lean_object* v_a_4547_, lean_object* v_a_4548_, lean_object* v_a_4549_, lean_object* v_a_4550_){
_start:
{
lean_object* v_res_4551_; 
v_res_4551_ = l_Lean_Meta_Simp_userPreSimprocs(v_s_4541_, v_e_4542_, v_a_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_, v_a_4549_);
lean_dec(v_a_4549_);
lean_dec_ref(v_a_4548_);
lean_dec(v_a_4547_);
lean_dec_ref(v_a_4546_);
lean_dec(v_a_4545_);
lean_dec_ref(v_a_4544_);
lean_dec(v_a_4543_);
lean_dec_ref(v_s_4541_);
return v_res_4551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_userPostSimprocs(lean_object* v_s_4552_, lean_object* v_e_4553_, lean_object* v_a_4554_, lean_object* v_a_4555_, lean_object* v_a_4556_, lean_object* v_a_4557_, lean_object* v_a_4558_, lean_object* v_a_4559_, lean_object* v_a_4560_){
_start:
{
lean_object* v_options_4562_; lean_object* v___x_4563_; uint8_t v___x_4564_; 
v_options_4562_ = lean_ctor_get(v_a_4559_, 2);
v___x_4563_ = l_Lean_Meta_Simp_simprocs;
v___x_4564_ = l_Lean_Option_get___at___00Lean_Meta_Simp_userPreSimprocs_spec__0(v_options_4562_, v___x_4563_);
if (v___x_4564_ == 0)
{
lean_object* v___x_4565_; lean_object* v___x_4566_; 
lean_dec_ref(v_e_4553_);
v___x_4565_ = ((lean_object*)(l_Lean_Meta_Simp_simprocCore___closed__0));
v___x_4566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4566_, 0, v___x_4565_);
return v___x_4566_;
}
else
{
lean_object* v___x_4567_; 
v___x_4567_ = l_Lean_Meta_Simp_simprocArrayCore(v___x_4564_, v_s_4552_, v_e_4553_, v_a_4554_, v_a_4555_, v_a_4556_, v_a_4557_, v_a_4558_, v_a_4559_, v_a_4560_);
return v___x_4567_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_userPostSimprocs___boxed(lean_object* v_s_4568_, lean_object* v_e_4569_, lean_object* v_a_4570_, lean_object* v_a_4571_, lean_object* v_a_4572_, lean_object* v_a_4573_, lean_object* v_a_4574_, lean_object* v_a_4575_, lean_object* v_a_4576_, lean_object* v_a_4577_){
_start:
{
lean_object* v_res_4578_; 
v_res_4578_ = l_Lean_Meta_Simp_userPostSimprocs(v_s_4568_, v_e_4569_, v_a_4570_, v_a_4571_, v_a_4572_, v_a_4573_, v_a_4574_, v_a_4575_, v_a_4576_);
lean_dec(v_a_4576_);
lean_dec_ref(v_a_4575_);
lean_dec(v_a_4574_);
lean_dec_ref(v_a_4573_);
lean_dec(v_a_4572_);
lean_dec_ref(v_a_4571_);
lean_dec(v_a_4570_);
lean_dec_ref(v_s_4568_);
return v_res_4578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_userPreDSimprocs(lean_object* v_s_4579_, lean_object* v_e_4580_, lean_object* v_a_4581_, lean_object* v_a_4582_, lean_object* v_a_4583_, lean_object* v_a_4584_, lean_object* v_a_4585_, lean_object* v_a_4586_, lean_object* v_a_4587_){
_start:
{
lean_object* v_options_4589_; lean_object* v___x_4590_; uint8_t v___x_4591_; 
v_options_4589_ = lean_ctor_get(v_a_4586_, 2);
v___x_4590_ = l_Lean_Meta_Simp_simprocs;
v___x_4591_ = l_Lean_Option_get___at___00Lean_Meta_Simp_userPreSimprocs_spec__0(v_options_4589_, v___x_4590_);
if (v___x_4591_ == 0)
{
lean_object* v___x_4592_; lean_object* v___x_4593_; 
lean_dec_ref(v_e_4580_);
v___x_4592_ = ((lean_object*)(l_Lean_Meta_Simp_SimprocEntry_tryD___closed__0));
v___x_4593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4593_, 0, v___x_4592_);
return v___x_4593_;
}
else
{
uint8_t v___x_4594_; lean_object* v___x_4595_; 
v___x_4594_ = 0;
v___x_4595_ = l_Lean_Meta_Simp_dsimprocArrayCore(v___x_4594_, v_s_4579_, v_e_4580_, v_a_4581_, v_a_4582_, v_a_4583_, v_a_4584_, v_a_4585_, v_a_4586_, v_a_4587_);
return v___x_4595_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_userPreDSimprocs___boxed(lean_object* v_s_4596_, lean_object* v_e_4597_, lean_object* v_a_4598_, lean_object* v_a_4599_, lean_object* v_a_4600_, lean_object* v_a_4601_, lean_object* v_a_4602_, lean_object* v_a_4603_, lean_object* v_a_4604_, lean_object* v_a_4605_){
_start:
{
lean_object* v_res_4606_; 
v_res_4606_ = l_Lean_Meta_Simp_userPreDSimprocs(v_s_4596_, v_e_4597_, v_a_4598_, v_a_4599_, v_a_4600_, v_a_4601_, v_a_4602_, v_a_4603_, v_a_4604_);
lean_dec(v_a_4604_);
lean_dec_ref(v_a_4603_);
lean_dec(v_a_4602_);
lean_dec_ref(v_a_4601_);
lean_dec(v_a_4600_);
lean_dec_ref(v_a_4599_);
lean_dec(v_a_4598_);
lean_dec_ref(v_s_4596_);
return v_res_4606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_userPostDSimprocs(lean_object* v_s_4607_, lean_object* v_e_4608_, lean_object* v_a_4609_, lean_object* v_a_4610_, lean_object* v_a_4611_, lean_object* v_a_4612_, lean_object* v_a_4613_, lean_object* v_a_4614_, lean_object* v_a_4615_){
_start:
{
lean_object* v_options_4617_; lean_object* v___x_4618_; uint8_t v___x_4619_; 
v_options_4617_ = lean_ctor_get(v_a_4614_, 2);
v___x_4618_ = l_Lean_Meta_Simp_simprocs;
v___x_4619_ = l_Lean_Option_get___at___00Lean_Meta_Simp_userPreSimprocs_spec__0(v_options_4617_, v___x_4618_);
if (v___x_4619_ == 0)
{
lean_object* v___x_4620_; lean_object* v___x_4621_; 
lean_dec_ref(v_e_4608_);
v___x_4620_ = ((lean_object*)(l_Lean_Meta_Simp_SimprocEntry_tryD___closed__0));
v___x_4621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4621_, 0, v___x_4620_);
return v___x_4621_;
}
else
{
lean_object* v___x_4622_; 
v___x_4622_ = l_Lean_Meta_Simp_dsimprocArrayCore(v___x_4619_, v_s_4607_, v_e_4608_, v_a_4609_, v_a_4610_, v_a_4611_, v_a_4612_, v_a_4613_, v_a_4614_, v_a_4615_);
return v___x_4622_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_userPostDSimprocs___boxed(lean_object* v_s_4623_, lean_object* v_e_4624_, lean_object* v_a_4625_, lean_object* v_a_4626_, lean_object* v_a_4627_, lean_object* v_a_4628_, lean_object* v_a_4629_, lean_object* v_a_4630_, lean_object* v_a_4631_, lean_object* v_a_4632_){
_start:
{
lean_object* v_res_4633_; 
v_res_4633_ = l_Lean_Meta_Simp_userPostDSimprocs(v_s_4623_, v_e_4624_, v_a_4625_, v_a_4626_, v_a_4627_, v_a_4628_, v_a_4629_, v_a_4630_, v_a_4631_);
lean_dec(v_a_4631_);
lean_dec_ref(v_a_4630_);
lean_dec(v_a_4629_);
lean_dec_ref(v_a_4628_);
lean_dec(v_a_4627_);
lean_dec_ref(v_a_4626_);
lean_dec(v_a_4625_);
lean_dec_ref(v_s_4623_);
return v_res_4633_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__10(void){
_start:
{
lean_object* v___x_4658_; lean_object* v___x_4659_; 
v___x_4658_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__8));
v___x_4659_ = l_Lean_mkAtom(v___x_4658_);
return v___x_4659_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__11(void){
_start:
{
lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4662_; 
v___x_4660_ = lean_obj_once(&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__10, &l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__10_once, _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__10);
v___x_4661_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__3));
v___x_4662_ = lean_array_push(v___x_4661_, v___x_4660_);
return v___x_4662_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__16(void){
_start:
{
lean_object* v___x_4671_; lean_object* v___x_4672_; 
v___x_4671_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__15));
v___x_4672_ = l_Lean_mkAtom(v___x_4671_);
return v___x_4672_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__17(void){
_start:
{
lean_object* v___x_4673_; lean_object* v___x_4674_; lean_object* v___x_4675_; 
v___x_4673_ = lean_obj_once(&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__16, &l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__16_once, _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__16);
v___x_4674_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__3));
v___x_4675_ = lean_array_push(v___x_4674_, v___x_4673_);
return v___x_4675_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__18(void){
_start:
{
lean_object* v___x_4676_; lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; 
v___x_4676_ = lean_obj_once(&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__17, &l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__17_once, _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__17);
v___x_4677_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__14));
v___x_4678_ = lean_box(2);
v___x_4679_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4679_, 0, v___x_4678_);
lean_ctor_set(v___x_4679_, 1, v___x_4677_);
lean_ctor_set(v___x_4679_, 2, v___x_4676_);
return v___x_4679_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__19(void){
_start:
{
lean_object* v___x_4680_; lean_object* v___x_4681_; lean_object* v___x_4682_; 
v___x_4680_ = lean_obj_once(&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__18, &l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__18_once, _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__18);
v___x_4681_ = lean_obj_once(&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__11, &l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__11_once, _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__11);
v___x_4682_ = lean_array_push(v___x_4681_, v___x_4680_);
return v___x_4682_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__20(void){
_start:
{
lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; 
v___x_4683_ = lean_obj_once(&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__19, &l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__19_once, _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__19);
v___x_4684_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__9));
v___x_4685_ = lean_box(2);
v___x_4686_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4686_, 0, v___x_4685_);
lean_ctor_set(v___x_4686_, 1, v___x_4684_);
lean_ctor_set(v___x_4686_, 2, v___x_4683_);
return v___x_4686_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__21(void){
_start:
{
lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; 
v___x_4687_ = lean_obj_once(&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__20, &l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__20_once, _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__20);
v___x_4688_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__3));
v___x_4689_ = lean_array_push(v___x_4688_, v___x_4687_);
return v___x_4689_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__22(void){
_start:
{
lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; 
v___x_4690_ = lean_obj_once(&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__21, &l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__21_once, _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__21);
v___x_4691_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__7));
v___x_4692_ = lean_box(2);
v___x_4693_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4693_, 0, v___x_4692_);
lean_ctor_set(v___x_4693_, 1, v___x_4691_);
lean_ctor_set(v___x_4693_, 2, v___x_4690_);
return v___x_4693_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__23(void){
_start:
{
lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; 
v___x_4694_ = lean_obj_once(&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__22, &l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__22_once, _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__22);
v___x_4695_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__3));
v___x_4696_ = lean_array_push(v___x_4695_, v___x_4694_);
return v___x_4696_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__24(void){
_start:
{
lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; 
v___x_4697_ = lean_obj_once(&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__23, &l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__23_once, _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__23);
v___x_4698_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__5));
v___x_4699_ = lean_box(2);
v___x_4700_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4700_, 0, v___x_4699_);
lean_ctor_set(v___x_4700_, 1, v___x_4698_);
lean_ctor_set(v___x_4700_, 2, v___x_4697_);
return v___x_4700_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__25(void){
_start:
{
lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; 
v___x_4701_ = lean_obj_once(&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__24, &l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__24_once, _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__24);
v___x_4702_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__3));
v___x_4703_ = lean_array_push(v___x_4702_, v___x_4701_);
return v___x_4703_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__26(void){
_start:
{
lean_object* v___x_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; 
v___x_4704_ = lean_obj_once(&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__25, &l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__25_once, _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__25);
v___x_4705_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__2));
v___x_4706_ = lean_box(2);
v___x_4707_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4707_, 0, v___x_4706_);
lean_ctor_set(v___x_4707_, 1, v___x_4705_);
lean_ctor_set(v___x_4707_, 2, v___x_4704_);
return v___x_4707_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1(void){
_start:
{
lean_object* v___x_4708_; 
v___x_4708_ = lean_obj_once(&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__26, &l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__26_once, _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__26);
return v___x_4708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__0(uint8_t v_x_4709_, lean_object* v___y_4710_){
_start:
{
lean_object* v___x_4711_; 
v___x_4711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4711_, 0, v___y_4710_);
return v___x_4711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__0___boxed(lean_object* v_x_4712_, lean_object* v___y_4713_){
_start:
{
uint8_t v_x_180__boxed_4714_; lean_object* v_res_4715_; 
v_x_180__boxed_4714_ = lean_unbox(v_x_4712_);
v_res_4715_ = l_Lean_Meta_Simp_mkSimprocExt___lam__0(v_x_180__boxed_4714_, v___y_4713_);
return v_res_4715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__1(lean_object* v_s_4716_, lean_object* v_e_4717_){
_start:
{
lean_object* v_toSimprocOLeanEntry_4718_; lean_object* v_proc_4719_; lean_object* v_declName_4720_; uint8_t v_post_4721_; lean_object* v_keys_4722_; lean_object* v___x_4723_; 
v_toSimprocOLeanEntry_4718_ = lean_ctor_get(v_e_4717_, 0);
lean_inc_ref(v_toSimprocOLeanEntry_4718_);
v_proc_4719_ = lean_ctor_get(v_e_4717_, 1);
lean_inc_ref(v_proc_4719_);
lean_dec_ref(v_e_4717_);
v_declName_4720_ = lean_ctor_get(v_toSimprocOLeanEntry_4718_, 0);
lean_inc(v_declName_4720_);
v_post_4721_ = lean_ctor_get_uint8(v_toSimprocOLeanEntry_4718_, sizeof(void*)*2);
v_keys_4722_ = lean_ctor_get(v_toSimprocOLeanEntry_4718_, 1);
lean_inc_ref(v_keys_4722_);
lean_dec_ref(v_toSimprocOLeanEntry_4718_);
v___x_4723_ = l_Lean_Meta_Simp_Simprocs_addCore(v_s_4716_, v_keys_4722_, v_declName_4720_, v_post_4721_, v_proc_4719_);
return v___x_4723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__2(lean_object* v_e_4724_){
_start:
{
lean_object* v_toSimprocOLeanEntry_4725_; 
v_toSimprocOLeanEntry_4725_ = lean_ctor_get(v_e_4724_, 0);
lean_inc_ref(v_toSimprocOLeanEntry_4725_);
return v_toSimprocOLeanEntry_4725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__2___boxed(lean_object* v_e_4726_){
_start:
{
lean_object* v_res_4727_; 
v_res_4727_ = l_Lean_Meta_Simp_mkSimprocExt___lam__2(v_e_4726_);
lean_dec_ref(v_e_4726_);
return v_res_4727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__3(lean_object* v_x_4728_, lean_object* v___y_4729_, lean_object* v___y_4730_){
_start:
{
lean_object* v___x_4732_; 
v___x_4732_ = l_Lean_Meta_Simp_toSimprocEntry(v___y_4729_, v___y_4730_);
return v___x_4732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__3___boxed(lean_object* v_x_4733_, lean_object* v___y_4734_, lean_object* v___y_4735_, lean_object* v___y_4736_){
_start:
{
lean_object* v_res_4737_; 
v_res_4737_ = l_Lean_Meta_Simp_mkSimprocExt___lam__3(v_x_4733_, v___y_4734_, v___y_4735_);
lean_dec_ref(v___y_4735_);
lean_dec_ref(v_x_4733_);
return v_res_4737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__4(lean_object* v_ref_x3f_4738_){
_start:
{
if (lean_obj_tag(v_ref_x3f_4738_) == 1)
{
lean_object* v_val_4740_; lean_object* v___x_4742_; uint8_t v_isShared_4743_; uint8_t v_isSharedCheck_4748_; 
v_val_4740_ = lean_ctor_get(v_ref_x3f_4738_, 0);
v_isSharedCheck_4748_ = !lean_is_exclusive(v_ref_x3f_4738_);
if (v_isSharedCheck_4748_ == 0)
{
v___x_4742_ = v_ref_x3f_4738_;
v_isShared_4743_ = v_isSharedCheck_4748_;
goto v_resetjp_4741_;
}
else
{
lean_inc(v_val_4740_);
lean_dec(v_ref_x3f_4738_);
v___x_4742_ = lean_box(0);
v_isShared_4743_ = v_isSharedCheck_4748_;
goto v_resetjp_4741_;
}
v_resetjp_4741_:
{
lean_object* v___x_4744_; lean_object* v___x_4746_; 
v___x_4744_ = lean_st_ref_get(v_val_4740_);
lean_dec(v_val_4740_);
if (v_isShared_4743_ == 0)
{
lean_ctor_set_tag(v___x_4742_, 0);
lean_ctor_set(v___x_4742_, 0, v___x_4744_);
v___x_4746_ = v___x_4742_;
goto v_reusejp_4745_;
}
else
{
lean_object* v_reuseFailAlloc_4747_; 
v_reuseFailAlloc_4747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4747_, 0, v___x_4744_);
v___x_4746_ = v_reuseFailAlloc_4747_;
goto v_reusejp_4745_;
}
v_reusejp_4745_:
{
return v___x_4746_;
}
}
}
else
{
lean_object* v___x_4749_; lean_object* v___x_4750_; 
lean_dec(v_ref_x3f_4738_);
v___x_4749_ = lean_obj_once(&l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_, &l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2__once, _init_l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_);
v___x_4750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4750_, 0, v___x_4749_);
return v___x_4750_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__4___boxed(lean_object* v_ref_x3f_4751_, lean_object* v___y_4752_){
_start:
{
lean_object* v_res_4753_; 
v_res_4753_ = l_Lean_Meta_Simp_mkSimprocExt___lam__4(v_ref_x3f_4751_);
return v_res_4753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__5(lean_object* v___y_4754_){
_start:
{
lean_inc_ref(v___y_4754_);
return v___y_4754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___lam__5___boxed(lean_object* v___y_4755_){
_start:
{
lean_object* v_res_4756_; 
v_res_4756_ = l_Lean_Meta_Simp_mkSimprocExt___lam__5(v___y_4755_);
lean_dec_ref(v___y_4755_);
return v_res_4756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt(lean_object* v_name_4762_, lean_object* v_ref_x3f_4763_){
_start:
{
lean_object* v___f_4765_; lean_object* v___f_4766_; lean_object* v___f_4767_; lean_object* v___f_4768_; lean_object* v___y_4769_; lean_object* v___f_4770_; lean_object* v___x_4771_; lean_object* v___x_4772_; 
v___f_4765_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimprocExt___closed__0));
v___f_4766_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimprocExt___closed__1));
v___f_4767_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimprocExt___closed__2));
v___f_4768_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimprocExt___closed__3));
v___y_4769_ = lean_alloc_closure((void*)(l_Lean_Meta_Simp_mkSimprocExt___lam__4___boxed), 2, 1);
lean_closure_set(v___y_4769_, 0, v_ref_x3f_4763_);
v___f_4770_ = ((lean_object*)(l_Lean_Meta_Simp_mkSimprocExt___closed__4));
v___x_4771_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_4771_, 0, v_name_4762_);
lean_ctor_set(v___x_4771_, 1, v___y_4769_);
lean_ctor_set(v___x_4771_, 2, v___f_4768_);
lean_ctor_set(v___x_4771_, 3, v___f_4767_);
lean_ctor_set(v___x_4771_, 4, v___f_4766_);
lean_ctor_set(v___x_4771_, 5, v___f_4770_);
lean_ctor_set(v___x_4771_, 6, v___f_4765_);
v___x_4772_ = l_Lean_registerScopedEnvExtensionUnsafe___redArg(v___x_4771_);
return v___x_4772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocExt___boxed(lean_object* v_name_4773_, lean_object* v_ref_x3f_4774_, lean_object* v_a_4775_){
_start:
{
lean_object* v_res_4776_; 
v_res_4776_ = l_Lean_Meta_Simp_mkSimprocExt(v_name_4773_, v_ref_x3f_4774_);
return v_res_4776_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_addSimprocAttr___closed__0(void){
_start:
{
lean_object* v___x_4777_; lean_object* v___x_4778_; 
v___x_4777_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__1);
v___x_4778_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4778_, 0, v___x_4777_);
lean_ctor_set(v___x_4778_, 1, v___x_4777_);
lean_ctor_set(v___x_4778_, 2, v___x_4777_);
lean_ctor_set(v___x_4778_, 3, v___x_4777_);
lean_ctor_set(v___x_4778_, 4, v___x_4777_);
lean_ctor_set(v___x_4778_, 5, v___x_4777_);
return v___x_4778_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_addSimprocAttr___closed__1(void){
_start:
{
lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; 
v___x_4779_ = lean_unsigned_to_nat(32u);
v___x_4780_ = lean_mk_empty_array_with_capacity(v___x_4779_);
v___x_4781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4781_, 0, v___x_4780_);
return v___x_4781_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_addSimprocAttr___closed__2(void){
_start:
{
size_t v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; 
v___x_4782_ = ((size_t)5ULL);
v___x_4783_ = lean_unsigned_to_nat(0u);
v___x_4784_ = lean_unsigned_to_nat(32u);
v___x_4785_ = lean_mk_empty_array_with_capacity(v___x_4784_);
v___x_4786_ = lean_obj_once(&l_Lean_Meta_Simp_addSimprocAttr___closed__1, &l_Lean_Meta_Simp_addSimprocAttr___closed__1_once, _init_l_Lean_Meta_Simp_addSimprocAttr___closed__1);
v___x_4787_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4787_, 0, v___x_4786_);
lean_ctor_set(v___x_4787_, 1, v___x_4785_);
lean_ctor_set(v___x_4787_, 2, v___x_4783_);
lean_ctor_set(v___x_4787_, 3, v___x_4783_);
lean_ctor_set_usize(v___x_4787_, 4, v___x_4782_);
return v___x_4787_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_addSimprocAttr___closed__3(void){
_start:
{
lean_object* v___x_4788_; lean_object* v___x_4789_; 
v___x_4788_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__1);
v___x_4789_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4789_, 0, v___x_4788_);
lean_ctor_set(v___x_4789_, 1, v___x_4788_);
lean_ctor_set(v___x_4789_, 2, v___x_4788_);
lean_ctor_set(v___x_4789_, 3, v___x_4788_);
lean_ctor_set(v___x_4789_, 4, v___x_4788_);
return v___x_4789_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_addSimprocAttr___closed__4(void){
_start:
{
lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; 
v___x_4790_ = lean_obj_once(&l_Lean_Meta_Simp_addSimprocAttr___closed__3, &l_Lean_Meta_Simp_addSimprocAttr___closed__3_once, _init_l_Lean_Meta_Simp_addSimprocAttr___closed__3);
v___x_4791_ = lean_obj_once(&l_Lean_Meta_Simp_addSimprocAttr___closed__2, &l_Lean_Meta_Simp_addSimprocAttr___closed__2_once, _init_l_Lean_Meta_Simp_addSimprocAttr___closed__2);
v___x_4792_ = lean_box(1);
v___x_4793_ = lean_obj_once(&l_Lean_Meta_Simp_addSimprocAttr___closed__0, &l_Lean_Meta_Simp_addSimprocAttr___closed__0_once, _init_l_Lean_Meta_Simp_addSimprocAttr___closed__0);
v___x_4794_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__2);
v___x_4795_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4795_, 0, v___x_4794_);
lean_ctor_set(v___x_4795_, 1, v___x_4793_);
lean_ctor_set(v___x_4795_, 2, v___x_4792_);
lean_ctor_set(v___x_4795_, 3, v___x_4791_);
lean_ctor_set(v___x_4795_, 4, v___x_4790_);
return v___x_4795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSimprocAttr(lean_object* v_attrName_4802_, lean_object* v_ext_4803_, lean_object* v_declName_4804_, lean_object* v_stx_4805_, uint8_t v_attrKind_4806_, lean_object* v_a_4807_, lean_object* v_a_4808_){
_start:
{
lean_object* v___x_4810_; 
lean_inc(v_declName_4804_);
v___x_4810_ = l_Lean_ensureAttrDeclIsMeta(v_attrName_4802_, v_declName_4804_, v_attrKind_4806_, v_a_4807_, v_a_4808_);
if (lean_obj_tag(v___x_4810_) == 0)
{
uint8_t v___y_4812_; lean_object* v___x_4826_; lean_object* v___x_4827_; uint8_t v___x_4828_; 
lean_dec_ref(v___x_4810_);
v___x_4826_ = lean_unsigned_to_nat(1u);
v___x_4827_ = l_Lean_Syntax_getArg(v_stx_4805_, v___x_4826_);
v___x_4828_ = l_Lean_Syntax_isNone(v___x_4827_);
if (v___x_4828_ == 0)
{
lean_object* v___x_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; uint8_t v___x_4833_; 
v___x_4829_ = lean_unsigned_to_nat(0u);
v___x_4830_ = l_Lean_Syntax_getArg(v___x_4827_, v___x_4829_);
lean_dec(v___x_4827_);
v___x_4831_ = l_Lean_Syntax_getKind(v___x_4830_);
v___x_4832_ = ((lean_object*)(l_Lean_Meta_Simp_addSimprocAttr___closed__6));
v___x_4833_ = lean_name_eq(v___x_4831_, v___x_4832_);
lean_dec(v___x_4831_);
v___y_4812_ = v___x_4833_;
goto v___jp_4811_;
}
else
{
lean_dec(v___x_4827_);
v___y_4812_ = v___x_4828_;
goto v___jp_4811_;
}
v___jp_4811_:
{
lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; 
v___x_4813_ = lean_obj_once(&l_Lean_Meta_Simp_addSimprocAttr___closed__4, &l_Lean_Meta_Simp_addSimprocAttr___closed__4_once, _init_l_Lean_Meta_Simp_addSimprocAttr___closed__4);
v___x_4814_ = lean_st_mk_ref(v___x_4813_);
v___x_4815_ = l_Lean_Meta_Simp_addSimprocAttrCore(v_ext_4803_, v_declName_4804_, v_attrKind_4806_, v___y_4812_, v_a_4807_, v_a_4808_);
if (lean_obj_tag(v___x_4815_) == 0)
{
lean_object* v___x_4817_; uint8_t v_isShared_4818_; uint8_t v_isSharedCheck_4824_; 
v_isSharedCheck_4824_ = !lean_is_exclusive(v___x_4815_);
if (v_isSharedCheck_4824_ == 0)
{
lean_object* v_unused_4825_; 
v_unused_4825_ = lean_ctor_get(v___x_4815_, 0);
lean_dec(v_unused_4825_);
v___x_4817_ = v___x_4815_;
v_isShared_4818_ = v_isSharedCheck_4824_;
goto v_resetjp_4816_;
}
else
{
lean_dec(v___x_4815_);
v___x_4817_ = lean_box(0);
v_isShared_4818_ = v_isSharedCheck_4824_;
goto v_resetjp_4816_;
}
v_resetjp_4816_:
{
lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4822_; 
v___x_4819_ = lean_st_ref_get(v___x_4814_);
lean_dec(v___x_4814_);
lean_dec(v___x_4819_);
v___x_4820_ = lean_box(0);
if (v_isShared_4818_ == 0)
{
lean_ctor_set(v___x_4817_, 0, v___x_4820_);
v___x_4822_ = v___x_4817_;
goto v_reusejp_4821_;
}
else
{
lean_object* v_reuseFailAlloc_4823_; 
v_reuseFailAlloc_4823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4823_, 0, v___x_4820_);
v___x_4822_ = v_reuseFailAlloc_4823_;
goto v_reusejp_4821_;
}
v_reusejp_4821_:
{
return v___x_4822_;
}
}
}
else
{
lean_dec(v___x_4814_);
return v___x_4815_;
}
}
}
else
{
lean_dec(v_declName_4804_);
lean_dec_ref(v_ext_4803_);
return v___x_4810_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_addSimprocAttr___boxed(lean_object* v_attrName_4834_, lean_object* v_ext_4835_, lean_object* v_declName_4836_, lean_object* v_stx_4837_, lean_object* v_attrKind_4838_, lean_object* v_a_4839_, lean_object* v_a_4840_, lean_object* v_a_4841_){
_start:
{
uint8_t v_attrKind_boxed_4842_; lean_object* v_res_4843_; 
v_attrKind_boxed_4842_ = lean_unbox(v_attrKind_4838_);
v_res_4843_ = l_Lean_Meta_Simp_addSimprocAttr(v_attrName_4834_, v_ext_4835_, v_declName_4836_, v_stx_4837_, v_attrKind_boxed_4842_, v_a_4839_, v_a_4840_);
lean_dec(v_a_4840_);
lean_dec_ref(v_a_4839_);
lean_dec(v_stx_4837_);
return v_res_4843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocAttr(lean_object* v_attrName_4844_, lean_object* v_attrDescr_4845_, lean_object* v_ext_4846_, lean_object* v_name_4847_){
_start:
{
uint8_t v___x_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; lean_object* v___x_4853_; lean_object* v___x_4854_; 
v___x_4849_ = 1;
lean_inc(v_attrName_4844_);
v___x_4850_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_4850_, 0, v_name_4847_);
lean_ctor_set(v___x_4850_, 1, v_attrName_4844_);
lean_ctor_set(v___x_4850_, 2, v_attrDescr_4845_);
lean_ctor_set_uint8(v___x_4850_, sizeof(void*)*3, v___x_4849_);
lean_inc_ref(v_ext_4846_);
v___x_4851_ = lean_alloc_closure((void*)(l_Lean_Meta_Simp_addSimprocAttr___boxed), 8, 2);
lean_closure_set(v___x_4851_, 0, v_attrName_4844_);
lean_closure_set(v___x_4851_, 1, v_ext_4846_);
v___x_4852_ = lean_alloc_closure((void*)(l_Lean_Meta_Simp_eraseSimprocAttr___boxed), 5, 1);
lean_closure_set(v___x_4852_, 0, v_ext_4846_);
v___x_4853_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4853_, 0, v___x_4850_);
lean_ctor_set(v___x_4853_, 1, v___x_4851_);
lean_ctor_set(v___x_4853_, 2, v___x_4852_);
v___x_4854_ = l_Lean_registerBuiltinAttribute(v___x_4853_);
return v___x_4854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_mkSimprocAttr___boxed(lean_object* v_attrName_4855_, lean_object* v_attrDescr_4856_, lean_object* v_ext_4857_, lean_object* v_name_4858_, lean_object* v_a_4859_){
_start:
{
lean_object* v_res_4860_; 
v_res_4860_ = l_Lean_Meta_Simp_mkSimprocAttr(v_attrName_4855_, v_attrDescr_4856_, v_ext_4857_, v_name_4858_);
return v_res_4860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_2499117766____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4862_; lean_object* v___x_4863_; lean_object* v___x_4864_; 
v___x_4862_ = lean_obj_once(&l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__1, &l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__1_once, _init_l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default___closed__1);
v___x_4863_ = lean_st_mk_ref(v___x_4862_);
v___x_4864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4864_, 0, v___x_4863_);
return v___x_4864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_2499117766____hygCtx___hyg_2____boxed(lean_object* v_a_4865_){
_start:
{
lean_object* v_res_4866_; 
v_res_4866_ = l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_2499117766____hygCtx___hyg_2_();
return v_res_4866_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_registerSimprocAttr___auto__1(void){
_start:
{
lean_object* v___x_4867_; 
v___x_4867_ = lean_obj_once(&l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__26, &l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__26_once, _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1___closed__26);
return v___x_4867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerSimprocAttr(lean_object* v_attrName_4868_, lean_object* v_attrDescr_4869_, lean_object* v_ref_x3f_4870_, lean_object* v_name_4871_){
_start:
{
lean_object* v___x_4873_; 
lean_inc(v_name_4871_);
v___x_4873_ = l_Lean_Meta_Simp_mkSimprocExt(v_name_4871_, v_ref_x3f_4870_);
if (lean_obj_tag(v___x_4873_) == 0)
{
lean_object* v_a_4874_; lean_object* v___x_4875_; 
v_a_4874_ = lean_ctor_get(v___x_4873_, 0);
lean_inc(v_a_4874_);
lean_dec_ref(v___x_4873_);
lean_inc(v_a_4874_);
lean_inc(v_attrName_4868_);
v___x_4875_ = l_Lean_Meta_Simp_mkSimprocAttr(v_attrName_4868_, v_attrDescr_4869_, v_a_4874_, v_name_4871_);
if (lean_obj_tag(v___x_4875_) == 0)
{
lean_object* v___x_4877_; uint8_t v_isShared_4878_; uint8_t v_isSharedCheck_4886_; 
v_isSharedCheck_4886_ = !lean_is_exclusive(v___x_4875_);
if (v_isSharedCheck_4886_ == 0)
{
lean_object* v_unused_4887_; 
v_unused_4887_ = lean_ctor_get(v___x_4875_, 0);
lean_dec(v_unused_4887_);
v___x_4877_ = v___x_4875_;
v_isShared_4878_ = v_isSharedCheck_4886_;
goto v_resetjp_4876_;
}
else
{
lean_dec(v___x_4875_);
v___x_4877_ = lean_box(0);
v_isShared_4878_ = v_isSharedCheck_4886_;
goto v_resetjp_4876_;
}
v_resetjp_4876_:
{
lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4882_; lean_object* v___x_4884_; 
v___x_4879_ = l_Lean_Meta_Simp_simprocExtensionMapRef;
v___x_4880_ = lean_st_ref_take(v___x_4879_);
lean_inc(v_a_4874_);
v___x_4881_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Simp_registerBuiltinSimprocCore_spec__0___redArg(v___x_4880_, v_attrName_4868_, v_a_4874_);
v___x_4882_ = lean_st_ref_set(v___x_4879_, v___x_4881_);
if (v_isShared_4878_ == 0)
{
lean_ctor_set(v___x_4877_, 0, v_a_4874_);
v___x_4884_ = v___x_4877_;
goto v_reusejp_4883_;
}
else
{
lean_object* v_reuseFailAlloc_4885_; 
v_reuseFailAlloc_4885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4885_, 0, v_a_4874_);
v___x_4884_ = v_reuseFailAlloc_4885_;
goto v_reusejp_4883_;
}
v_reusejp_4883_:
{
return v___x_4884_;
}
}
}
else
{
lean_object* v_a_4888_; lean_object* v___x_4890_; uint8_t v_isShared_4891_; uint8_t v_isSharedCheck_4895_; 
lean_dec(v_a_4874_);
lean_dec(v_attrName_4868_);
v_a_4888_ = lean_ctor_get(v___x_4875_, 0);
v_isSharedCheck_4895_ = !lean_is_exclusive(v___x_4875_);
if (v_isSharedCheck_4895_ == 0)
{
v___x_4890_ = v___x_4875_;
v_isShared_4891_ = v_isSharedCheck_4895_;
goto v_resetjp_4889_;
}
else
{
lean_inc(v_a_4888_);
lean_dec(v___x_4875_);
v___x_4890_ = lean_box(0);
v_isShared_4891_ = v_isSharedCheck_4895_;
goto v_resetjp_4889_;
}
v_resetjp_4889_:
{
lean_object* v___x_4893_; 
if (v_isShared_4891_ == 0)
{
v___x_4893_ = v___x_4890_;
goto v_reusejp_4892_;
}
else
{
lean_object* v_reuseFailAlloc_4894_; 
v_reuseFailAlloc_4894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4894_, 0, v_a_4888_);
v___x_4893_ = v_reuseFailAlloc_4894_;
goto v_reusejp_4892_;
}
v_reusejp_4892_:
{
return v___x_4893_;
}
}
}
}
else
{
lean_dec(v_name_4871_);
lean_dec_ref(v_attrDescr_4869_);
lean_dec(v_attrName_4868_);
return v___x_4873_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_registerSimprocAttr___boxed(lean_object* v_attrName_4896_, lean_object* v_attrDescr_4897_, lean_object* v_ref_x3f_4898_, lean_object* v_name_4899_, lean_object* v_a_4900_){
_start:
{
lean_object* v_res_4901_; 
v_res_4901_ = l_Lean_Meta_Simp_registerSimprocAttr(v_attrName_4896_, v_attrDescr_4897_, v_ref_x3f_4898_, v_name_4899_);
return v_res_4901_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4906_; lean_object* v___x_4907_; 
v___x_4906_ = l_Lean_Meta_Simp_builtinSimprocsRef;
v___x_4907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4907_, 0, v___x_4906_);
return v___x_4907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4915_; lean_object* v___x_4916_; lean_object* v___x_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; 
v___x_4915_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2_));
v___x_4916_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2_));
v___x_4917_ = lean_obj_once(&l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2_, &l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2__once, _init_l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2_);
v___x_4918_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2_));
v___x_4919_ = l_Lean_Meta_Simp_registerSimprocAttr(v___x_4915_, v___x_4916_, v___x_4917_, v___x_4918_);
return v___x_4919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2____boxed(lean_object* v_a_4920_){
_start:
{
lean_object* v_res_4921_; 
v_res_4921_ = l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2_();
return v_res_4921_;
}
}
static lean_object* _init_l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4926_; lean_object* v___x_4927_; 
v___x_4926_ = l_Lean_Meta_Simp_builtinSEvalprocsRef;
v___x_4927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4927_, 0, v___x_4926_);
return v___x_4927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; 
v___x_4935_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2_));
v___x_4936_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__2_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2_));
v___x_4937_ = lean_obj_once(&l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2_, &l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2__once, _init_l_Lean_Meta_Simp_initFn___closed__3_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2_);
v___x_4938_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2_));
v___x_4939_ = l_Lean_Meta_Simp_registerSimprocAttr(v___x_4935_, v___x_4936_, v___x_4937_, v___x_4938_);
return v___x_4939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2____boxed(lean_object* v_a_4940_){
_start:
{
lean_object* v_res_4941_; 
v_res_4941_ = l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2_();
return v_res_4941_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; 
v___x_4950_ = lean_box(0);
v___x_4951_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__4));
v___x_4952_ = l_Lean_mkConst(v___x_4951_, v___x_4950_);
return v___x_4952_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__8(void){
_start:
{
lean_object* v___x_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; 
v___x_4957_ = lean_box(0);
v___x_4958_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__7));
v___x_4959_ = l_Lean_mkConst(v___x_4958_, v___x_4957_);
return v___x_4959_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0(lean_object* v_addDeclName_4960_, lean_object* v_declName_4961_, uint8_t v___y_4962_, lean_object* v_procExpr_4963_, lean_object* v___y_4964_, lean_object* v___y_4965_, lean_object* v___y_4966_, lean_object* v___y_4967_){
_start:
{
lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; lean_object* v___y_4973_; 
v___x_4969_ = lean_box(0);
v___x_4970_ = l_Lean_mkConst(v_addDeclName_4960_, v___x_4969_);
lean_inc(v_declName_4961_);
v___x_4971_ = l___private_Lean_ToExpr_0__Lean_Name_toExprAux(v_declName_4961_);
if (v___y_4962_ == 0)
{
lean_object* v___x_4993_; 
v___x_4993_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__5, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__5_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__5);
v___y_4973_ = v___x_4993_;
goto v___jp_4972_;
}
else
{
lean_object* v___x_4994_; 
v___x_4994_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__8, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__8_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__8);
v___y_4973_ = v___x_4994_;
goto v___jp_4972_;
}
v___jp_4972_:
{
lean_object* v___x_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; 
v___x_4974_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___closed__1));
v___x_4975_ = l_Lean_Name_append(v_declName_4961_, v___x_4974_);
v___x_4976_ = l_Lean_Core_mkFreshUserName(v___x_4975_, v___y_4966_, v___y_4967_);
if (lean_obj_tag(v___x_4976_) == 0)
{
lean_object* v_a_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; 
v_a_4977_ = lean_ctor_get(v___x_4976_, 0);
lean_inc(v_a_4977_);
lean_dec_ref(v___x_4976_);
v___x_4978_ = lean_unsigned_to_nat(3u);
v___x_4979_ = lean_mk_empty_array_with_capacity(v___x_4978_);
v___x_4980_ = lean_array_push(v___x_4979_, v___x_4971_);
lean_inc_ref(v___y_4973_);
v___x_4981_ = lean_array_push(v___x_4980_, v___y_4973_);
v___x_4982_ = lean_array_push(v___x_4981_, v_procExpr_4963_);
v___x_4983_ = l_Lean_mkAppN(v___x_4970_, v___x_4982_);
lean_dec_ref(v___x_4982_);
v___x_4984_ = l_Lean_declareBuiltin(v_a_4977_, v___x_4983_, v___y_4966_, v___y_4967_);
return v___x_4984_;
}
else
{
lean_object* v_a_4985_; lean_object* v___x_4987_; uint8_t v_isShared_4988_; uint8_t v_isSharedCheck_4992_; 
lean_dec_ref(v___x_4971_);
lean_dec_ref(v___x_4970_);
lean_dec_ref(v_procExpr_4963_);
v_a_4985_ = lean_ctor_get(v___x_4976_, 0);
v_isSharedCheck_4992_ = !lean_is_exclusive(v___x_4976_);
if (v_isSharedCheck_4992_ == 0)
{
v___x_4987_ = v___x_4976_;
v_isShared_4988_ = v_isSharedCheck_4992_;
goto v_resetjp_4986_;
}
else
{
lean_inc(v_a_4985_);
lean_dec(v___x_4976_);
v___x_4987_ = lean_box(0);
v_isShared_4988_ = v_isSharedCheck_4992_;
goto v_resetjp_4986_;
}
v_resetjp_4986_:
{
lean_object* v___x_4990_; 
if (v_isShared_4988_ == 0)
{
v___x_4990_ = v___x_4987_;
goto v_reusejp_4989_;
}
else
{
lean_object* v_reuseFailAlloc_4991_; 
v_reuseFailAlloc_4991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4991_, 0, v_a_4985_);
v___x_4990_ = v_reuseFailAlloc_4991_;
goto v_reusejp_4989_;
}
v_reusejp_4989_:
{
return v___x_4990_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___boxed(lean_object* v_addDeclName_4995_, lean_object* v_declName_4996_, lean_object* v___y_4997_, lean_object* v_procExpr_4998_, lean_object* v___y_4999_, lean_object* v___y_5000_, lean_object* v___y_5001_, lean_object* v___y_5002_, lean_object* v___y_5003_){
_start:
{
uint8_t v___y_4474__boxed_5004_; lean_object* v_res_5005_; 
v___y_4474__boxed_5004_ = lean_unbox(v___y_4997_);
v_res_5005_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0(v_addDeclName_4995_, v_declName_4996_, v___y_4474__boxed_5004_, v_procExpr_4998_, v___y_4999_, v___y_5000_, v___y_5001_, v___y_5002_);
lean_dec(v___y_5002_);
lean_dec_ref(v___y_5001_);
lean_dec(v___y_5000_);
lean_dec_ref(v___y_4999_);
return v_res_5005_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__0___redArg(lean_object* v_msg_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_){
_start:
{
lean_object* v_ref_5012_; lean_object* v___x_5013_; lean_object* v_a_5014_; lean_object* v___x_5016_; uint8_t v_isShared_5017_; uint8_t v_isSharedCheck_5022_; 
v_ref_5012_ = lean_ctor_get(v___y_5009_, 5);
v___x_5013_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Simp_simprocCore_spec__1_spec__1(v_msg_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_);
v_a_5014_ = lean_ctor_get(v___x_5013_, 0);
v_isSharedCheck_5022_ = !lean_is_exclusive(v___x_5013_);
if (v_isSharedCheck_5022_ == 0)
{
v___x_5016_ = v___x_5013_;
v_isShared_5017_ = v_isSharedCheck_5022_;
goto v_resetjp_5015_;
}
else
{
lean_inc(v_a_5014_);
lean_dec(v___x_5013_);
v___x_5016_ = lean_box(0);
v_isShared_5017_ = v_isSharedCheck_5022_;
goto v_resetjp_5015_;
}
v_resetjp_5015_:
{
lean_object* v___x_5018_; lean_object* v___x_5020_; 
lean_inc(v_ref_5012_);
v___x_5018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5018_, 0, v_ref_5012_);
lean_ctor_set(v___x_5018_, 1, v_a_5014_);
if (v_isShared_5017_ == 0)
{
lean_ctor_set_tag(v___x_5016_, 1);
lean_ctor_set(v___x_5016_, 0, v___x_5018_);
v___x_5020_ = v___x_5016_;
goto v_reusejp_5019_;
}
else
{
lean_object* v_reuseFailAlloc_5021_; 
v_reuseFailAlloc_5021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5021_, 0, v___x_5018_);
v___x_5020_ = v_reuseFailAlloc_5021_;
goto v_reusejp_5019_;
}
v_reusejp_5019_:
{
return v___x_5020_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__0___redArg___boxed(lean_object* v_msg_5023_, lean_object* v___y_5024_, lean_object* v___y_5025_, lean_object* v___y_5026_, lean_object* v___y_5027_, lean_object* v___y_5028_){
_start:
{
lean_object* v_res_5029_; 
v_res_5029_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__0___redArg(v_msg_5023_, v___y_5024_, v___y_5025_, v___y_5026_, v___y_5027_);
lean_dec(v___y_5027_);
lean_dec_ref(v___y_5026_);
lean_dec(v___y_5025_);
lean_dec_ref(v___y_5024_);
return v_res_5029_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__1(void){
_start:
{
lean_object* v___x_5031_; lean_object* v___x_5032_; 
v___x_5031_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__0));
v___x_5032_ = l_Lean_stringToMessageData(v___x_5031_);
return v___x_5032_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__3(void){
_start:
{
uint8_t v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; 
v___x_5038_ = 0;
v___x_5039_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__2));
v___x_5040_ = l_Lean_MessageData_ofConstName(v___x_5039_, v___x_5038_);
return v___x_5040_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__4(void){
_start:
{
lean_object* v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; 
v___x_5041_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__3, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__3_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__3);
v___x_5042_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__1, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__1_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__1);
v___x_5043_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5043_, 0, v___x_5042_);
lean_ctor_set(v___x_5043_, 1, v___x_5041_);
return v___x_5043_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__6(void){
_start:
{
lean_object* v___x_5045_; lean_object* v___x_5046_; 
v___x_5045_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__5));
v___x_5046_ = l_Lean_stringToMessageData(v___x_5045_);
return v___x_5046_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__7(void){
_start:
{
lean_object* v___x_5047_; lean_object* v___x_5048_; lean_object* v___x_5049_; 
v___x_5047_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__6, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__6_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__6);
v___x_5048_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__4, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__4_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__4);
v___x_5049_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5049_, 0, v___x_5048_);
lean_ctor_set(v___x_5049_, 1, v___x_5047_);
return v___x_5049_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__9(void){
_start:
{
uint8_t v___x_5055_; lean_object* v___x_5056_; lean_object* v___x_5057_; 
v___x_5055_ = 0;
v___x_5056_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__8));
v___x_5057_ = l_Lean_MessageData_ofConstName(v___x_5056_, v___x_5055_);
return v___x_5057_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__10(void){
_start:
{
lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; 
v___x_5058_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__9, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__9_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__9);
v___x_5059_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__7, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__7_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__7);
v___x_5060_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5060_, 0, v___x_5059_);
lean_ctor_set(v___x_5060_, 1, v___x_5058_);
return v___x_5060_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__12(void){
_start:
{
lean_object* v___x_5062_; lean_object* v___x_5063_; 
v___x_5062_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__11));
v___x_5063_ = l_Lean_stringToMessageData(v___x_5062_);
return v___x_5063_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__13(void){
_start:
{
lean_object* v___x_5064_; lean_object* v___x_5065_; lean_object* v___x_5066_; 
v___x_5064_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__12, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__12_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__12);
v___x_5065_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__10, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__10_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__10);
v___x_5066_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5066_, 0, v___x_5065_);
lean_ctor_set(v___x_5066_, 1, v___x_5064_);
return v___x_5066_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__15(void){
_start:
{
lean_object* v___x_5068_; lean_object* v___x_5069_; 
v___x_5068_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__14));
v___x_5069_ = l_Lean_stringToMessageData(v___x_5068_);
return v___x_5069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1(lean_object* v_declName_5070_, lean_object* v___f_5071_, lean_object* v_tp_5072_, lean_object* v___y_5073_, lean_object* v___y_5074_, lean_object* v___y_5075_, lean_object* v___y_5076_){
_start:
{
uint8_t v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v___x_5086_; lean_object* v_a_5087_; lean_object* v___x_5089_; uint8_t v_isShared_5090_; uint8_t v_isSharedCheck_5094_; 
v___x_5078_ = 0;
v___x_5079_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__13, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__13_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__13);
v___x_5080_ = l_Lean_MessageData_ofConstName(v_declName_5070_, v___x_5078_);
v___x_5081_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5081_, 0, v___x_5079_);
lean_ctor_set(v___x_5081_, 1, v___x_5080_);
v___x_5082_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__15, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__15_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__15);
v___x_5083_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5083_, 0, v___x_5081_);
lean_ctor_set(v___x_5083_, 1, v___x_5082_);
v___x_5084_ = l_Lean_indentExpr(v_tp_5072_);
v___x_5085_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5085_, 0, v___x_5083_);
lean_ctor_set(v___x_5085_, 1, v___x_5084_);
v___x_5086_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__0___redArg(v___x_5085_, v___y_5073_, v___y_5074_, v___y_5075_, v___y_5076_);
v_a_5087_ = lean_ctor_get(v___x_5086_, 0);
v_isSharedCheck_5094_ = !lean_is_exclusive(v___x_5086_);
if (v_isSharedCheck_5094_ == 0)
{
v___x_5089_ = v___x_5086_;
v_isShared_5090_ = v_isSharedCheck_5094_;
goto v_resetjp_5088_;
}
else
{
lean_inc(v_a_5087_);
lean_dec(v___x_5086_);
v___x_5089_ = lean_box(0);
v_isShared_5090_ = v_isSharedCheck_5094_;
goto v_resetjp_5088_;
}
v_resetjp_5088_:
{
lean_object* v___x_5092_; 
if (v_isShared_5090_ == 0)
{
v___x_5092_ = v___x_5089_;
goto v_reusejp_5091_;
}
else
{
lean_object* v_reuseFailAlloc_5093_; 
v_reuseFailAlloc_5093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5093_, 0, v_a_5087_);
v___x_5092_ = v_reuseFailAlloc_5093_;
goto v_reusejp_5091_;
}
v_reusejp_5091_:
{
return v___x_5092_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___boxed(lean_object* v_declName_5095_, lean_object* v___f_5096_, lean_object* v_tp_5097_, lean_object* v___y_5098_, lean_object* v___y_5099_, lean_object* v___y_5100_, lean_object* v___y_5101_, lean_object* v___y_5102_){
_start:
{
lean_object* v_res_5103_; 
v_res_5103_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1(v_declName_5095_, v___f_5096_, v_tp_5097_, v___y_5098_, v___y_5099_, v___y_5100_, v___y_5101_);
lean_dec(v___y_5101_);
lean_dec_ref(v___y_5100_);
lean_dec(v___y_5099_);
lean_dec_ref(v___y_5098_);
lean_dec_ref(v___f_5096_);
return v_res_5103_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_ref_5104_, lean_object* v_msg_5105_, lean_object* v___y_5106_, lean_object* v___y_5107_, lean_object* v___y_5108_, lean_object* v___y_5109_){
_start:
{
lean_object* v_fileName_5111_; lean_object* v_fileMap_5112_; lean_object* v_options_5113_; lean_object* v_currRecDepth_5114_; lean_object* v_maxRecDepth_5115_; lean_object* v_ref_5116_; lean_object* v_currNamespace_5117_; lean_object* v_openDecls_5118_; lean_object* v_initHeartbeats_5119_; lean_object* v_maxHeartbeats_5120_; lean_object* v_quotContext_5121_; lean_object* v_currMacroScope_5122_; uint8_t v_diag_5123_; lean_object* v_cancelTk_x3f_5124_; uint8_t v_suppressElabErrors_5125_; lean_object* v_inheritedTraceOptions_5126_; lean_object* v_ref_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; 
v_fileName_5111_ = lean_ctor_get(v___y_5108_, 0);
v_fileMap_5112_ = lean_ctor_get(v___y_5108_, 1);
v_options_5113_ = lean_ctor_get(v___y_5108_, 2);
v_currRecDepth_5114_ = lean_ctor_get(v___y_5108_, 3);
v_maxRecDepth_5115_ = lean_ctor_get(v___y_5108_, 4);
v_ref_5116_ = lean_ctor_get(v___y_5108_, 5);
v_currNamespace_5117_ = lean_ctor_get(v___y_5108_, 6);
v_openDecls_5118_ = lean_ctor_get(v___y_5108_, 7);
v_initHeartbeats_5119_ = lean_ctor_get(v___y_5108_, 8);
v_maxHeartbeats_5120_ = lean_ctor_get(v___y_5108_, 9);
v_quotContext_5121_ = lean_ctor_get(v___y_5108_, 10);
v_currMacroScope_5122_ = lean_ctor_get(v___y_5108_, 11);
v_diag_5123_ = lean_ctor_get_uint8(v___y_5108_, sizeof(void*)*14);
v_cancelTk_x3f_5124_ = lean_ctor_get(v___y_5108_, 12);
v_suppressElabErrors_5125_ = lean_ctor_get_uint8(v___y_5108_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_5126_ = lean_ctor_get(v___y_5108_, 13);
v_ref_5127_ = l_Lean_replaceRef(v_ref_5104_, v_ref_5116_);
lean_inc_ref(v_inheritedTraceOptions_5126_);
lean_inc(v_cancelTk_x3f_5124_);
lean_inc(v_currMacroScope_5122_);
lean_inc(v_quotContext_5121_);
lean_inc(v_maxHeartbeats_5120_);
lean_inc(v_initHeartbeats_5119_);
lean_inc(v_openDecls_5118_);
lean_inc(v_currNamespace_5117_);
lean_inc(v_maxRecDepth_5115_);
lean_inc(v_currRecDepth_5114_);
lean_inc_ref(v_options_5113_);
lean_inc_ref(v_fileMap_5112_);
lean_inc_ref(v_fileName_5111_);
v___x_5128_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_5128_, 0, v_fileName_5111_);
lean_ctor_set(v___x_5128_, 1, v_fileMap_5112_);
lean_ctor_set(v___x_5128_, 2, v_options_5113_);
lean_ctor_set(v___x_5128_, 3, v_currRecDepth_5114_);
lean_ctor_set(v___x_5128_, 4, v_maxRecDepth_5115_);
lean_ctor_set(v___x_5128_, 5, v_ref_5127_);
lean_ctor_set(v___x_5128_, 6, v_currNamespace_5117_);
lean_ctor_set(v___x_5128_, 7, v_openDecls_5118_);
lean_ctor_set(v___x_5128_, 8, v_initHeartbeats_5119_);
lean_ctor_set(v___x_5128_, 9, v_maxHeartbeats_5120_);
lean_ctor_set(v___x_5128_, 10, v_quotContext_5121_);
lean_ctor_set(v___x_5128_, 11, v_currMacroScope_5122_);
lean_ctor_set(v___x_5128_, 12, v_cancelTk_x3f_5124_);
lean_ctor_set(v___x_5128_, 13, v_inheritedTraceOptions_5126_);
lean_ctor_set_uint8(v___x_5128_, sizeof(void*)*14, v_diag_5123_);
lean_ctor_set_uint8(v___x_5128_, sizeof(void*)*14 + 1, v_suppressElabErrors_5125_);
v___x_5129_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__0___redArg(v_msg_5105_, v___y_5106_, v___y_5107_, v___x_5128_, v___y_5109_);
lean_dec_ref(v___x_5128_);
return v___x_5129_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_ref_5130_, lean_object* v_msg_5131_, lean_object* v___y_5132_, lean_object* v___y_5133_, lean_object* v___y_5134_, lean_object* v___y_5135_, lean_object* v___y_5136_){
_start:
{
lean_object* v_res_5137_; 
v_res_5137_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__5___redArg(v_ref_5130_, v_msg_5131_, v___y_5132_, v___y_5133_, v___y_5134_, v___y_5135_);
lean_dec(v___y_5135_);
lean_dec_ref(v___y_5134_);
lean_dec(v___y_5133_);
lean_dec_ref(v___y_5132_);
lean_dec(v_ref_5130_);
return v_res_5137_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_5139_; lean_object* v___x_5140_; 
v___x_5139_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__0));
v___x_5140_ = l_Lean_stringToMessageData(v___x_5139_);
return v___x_5140_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_5142_; lean_object* v___x_5143_; 
v___x_5142_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__2));
v___x_5143_ = l_Lean_stringToMessageData(v___x_5142_);
return v___x_5143_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__5(void){
_start:
{
lean_object* v___x_5145_; lean_object* v___x_5146_; 
v___x_5145_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__4));
v___x_5146_ = l_Lean_stringToMessageData(v___x_5145_);
return v___x_5146_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__7(void){
_start:
{
lean_object* v___x_5148_; lean_object* v___x_5149_; 
v___x_5148_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__6));
v___x_5149_ = l_Lean_stringToMessageData(v___x_5148_);
return v___x_5149_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__9(void){
_start:
{
lean_object* v___x_5151_; lean_object* v___x_5152_; 
v___x_5151_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__8));
v___x_5152_ = l_Lean_stringToMessageData(v___x_5151_);
return v___x_5152_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__11(void){
_start:
{
lean_object* v___x_5154_; lean_object* v___x_5155_; 
v___x_5154_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__10));
v___x_5155_ = l_Lean_stringToMessageData(v___x_5154_);
return v___x_5155_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__13(void){
_start:
{
lean_object* v___x_5157_; lean_object* v___x_5158_; 
v___x_5157_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__12));
v___x_5158_ = l_Lean_stringToMessageData(v___x_5157_);
return v___x_5158_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg(lean_object* v_msg_5159_, lean_object* v_declHint_5160_, lean_object* v___y_5161_){
_start:
{
lean_object* v___x_5163_; lean_object* v_env_5164_; uint8_t v___x_5165_; 
v___x_5163_ = lean_st_ref_get(v___y_5161_);
v_env_5164_ = lean_ctor_get(v___x_5163_, 0);
lean_inc_ref(v_env_5164_);
lean_dec(v___x_5163_);
v___x_5165_ = l_Lean_Name_isAnonymous(v_declHint_5160_);
if (v___x_5165_ == 0)
{
uint8_t v_isExporting_5166_; 
v_isExporting_5166_ = lean_ctor_get_uint8(v_env_5164_, sizeof(void*)*8);
if (v_isExporting_5166_ == 0)
{
lean_object* v___x_5167_; 
lean_dec_ref(v_env_5164_);
lean_dec(v_declHint_5160_);
v___x_5167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5167_, 0, v_msg_5159_);
return v___x_5167_;
}
else
{
lean_object* v___x_5168_; uint8_t v___x_5169_; 
lean_inc_ref(v_env_5164_);
v___x_5168_ = l_Lean_Environment_setExporting(v_env_5164_, v___x_5165_);
lean_inc(v_declHint_5160_);
lean_inc_ref(v___x_5168_);
v___x_5169_ = l_Lean_Environment_contains(v___x_5168_, v_declHint_5160_, v_isExporting_5166_);
if (v___x_5169_ == 0)
{
lean_object* v___x_5170_; 
lean_dec_ref(v___x_5168_);
lean_dec_ref(v_env_5164_);
lean_dec(v_declHint_5160_);
v___x_5170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5170_, 0, v_msg_5159_);
return v___x_5170_;
}
else
{
lean_object* v___x_5171_; lean_object* v___x_5172_; lean_object* v___x_5173_; lean_object* v___x_5174_; lean_object* v___x_5175_; lean_object* v_c_5176_; lean_object* v___x_5177_; 
v___x_5171_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__2);
v___x_5172_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__5);
v___x_5173_ = l_Lean_Options_empty;
v___x_5174_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5174_, 0, v___x_5168_);
lean_ctor_set(v___x_5174_, 1, v___x_5171_);
lean_ctor_set(v___x_5174_, 2, v___x_5172_);
lean_ctor_set(v___x_5174_, 3, v___x_5173_);
lean_inc(v_declHint_5160_);
v___x_5175_ = l_Lean_MessageData_ofConstName(v_declHint_5160_, v___x_5165_);
v_c_5176_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_5176_, 0, v___x_5174_);
lean_ctor_set(v_c_5176_, 1, v___x_5175_);
v___x_5177_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_5164_, v_declHint_5160_);
if (lean_obj_tag(v___x_5177_) == 0)
{
lean_object* v___x_5178_; lean_object* v___x_5179_; lean_object* v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; 
lean_dec_ref(v_env_5164_);
lean_dec(v_declHint_5160_);
v___x_5178_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__1);
v___x_5179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5179_, 0, v___x_5178_);
lean_ctor_set(v___x_5179_, 1, v_c_5176_);
v___x_5180_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__3);
v___x_5181_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5181_, 0, v___x_5179_);
lean_ctor_set(v___x_5181_, 1, v___x_5180_);
v___x_5182_ = l_Lean_MessageData_note(v___x_5181_);
v___x_5183_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5183_, 0, v_msg_5159_);
lean_ctor_set(v___x_5183_, 1, v___x_5182_);
v___x_5184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5184_, 0, v___x_5183_);
return v___x_5184_;
}
else
{
lean_object* v_val_5185_; lean_object* v___x_5187_; uint8_t v_isShared_5188_; uint8_t v_isSharedCheck_5220_; 
v_val_5185_ = lean_ctor_get(v___x_5177_, 0);
v_isSharedCheck_5220_ = !lean_is_exclusive(v___x_5177_);
if (v_isSharedCheck_5220_ == 0)
{
v___x_5187_ = v___x_5177_;
v_isShared_5188_ = v_isSharedCheck_5220_;
goto v_resetjp_5186_;
}
else
{
lean_inc(v_val_5185_);
lean_dec(v___x_5177_);
v___x_5187_ = lean_box(0);
v_isShared_5188_ = v_isSharedCheck_5220_;
goto v_resetjp_5186_;
}
v_resetjp_5186_:
{
lean_object* v___x_5189_; lean_object* v___x_5190_; lean_object* v___x_5191_; lean_object* v_mod_5192_; uint8_t v___x_5193_; 
v___x_5189_ = lean_box(0);
v___x_5190_ = l_Lean_Environment_header(v_env_5164_);
lean_dec_ref(v_env_5164_);
v___x_5191_ = l_Lean_EnvironmentHeader_moduleNames(v___x_5190_);
v_mod_5192_ = lean_array_get(v___x_5189_, v___x_5191_, v_val_5185_);
lean_dec(v_val_5185_);
lean_dec_ref(v___x_5191_);
v___x_5193_ = l_Lean_isPrivateName(v_declHint_5160_);
lean_dec(v_declHint_5160_);
if (v___x_5193_ == 0)
{
lean_object* v___x_5194_; lean_object* v___x_5195_; lean_object* v___x_5196_; lean_object* v___x_5197_; lean_object* v___x_5198_; lean_object* v___x_5199_; lean_object* v___x_5200_; lean_object* v___x_5201_; lean_object* v___x_5202_; lean_object* v___x_5203_; lean_object* v___x_5205_; 
v___x_5194_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__5);
v___x_5195_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5195_, 0, v___x_5194_);
lean_ctor_set(v___x_5195_, 1, v_c_5176_);
v___x_5196_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__7);
v___x_5197_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5197_, 0, v___x_5195_);
lean_ctor_set(v___x_5197_, 1, v___x_5196_);
v___x_5198_ = l_Lean_MessageData_ofName(v_mod_5192_);
v___x_5199_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5199_, 0, v___x_5197_);
lean_ctor_set(v___x_5199_, 1, v___x_5198_);
v___x_5200_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__9);
v___x_5201_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5201_, 0, v___x_5199_);
lean_ctor_set(v___x_5201_, 1, v___x_5200_);
v___x_5202_ = l_Lean_MessageData_note(v___x_5201_);
v___x_5203_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5203_, 0, v_msg_5159_);
lean_ctor_set(v___x_5203_, 1, v___x_5202_);
if (v_isShared_5188_ == 0)
{
lean_ctor_set_tag(v___x_5187_, 0);
lean_ctor_set(v___x_5187_, 0, v___x_5203_);
v___x_5205_ = v___x_5187_;
goto v_reusejp_5204_;
}
else
{
lean_object* v_reuseFailAlloc_5206_; 
v_reuseFailAlloc_5206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5206_, 0, v___x_5203_);
v___x_5205_ = v_reuseFailAlloc_5206_;
goto v_reusejp_5204_;
}
v_reusejp_5204_:
{
return v___x_5205_;
}
}
else
{
lean_object* v___x_5207_; lean_object* v___x_5208_; lean_object* v___x_5209_; lean_object* v___x_5210_; lean_object* v___x_5211_; lean_object* v___x_5212_; lean_object* v___x_5213_; lean_object* v___x_5214_; lean_object* v___x_5215_; lean_object* v___x_5216_; lean_object* v___x_5218_; 
v___x_5207_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__1);
v___x_5208_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5208_, 0, v___x_5207_);
lean_ctor_set(v___x_5208_, 1, v_c_5176_);
v___x_5209_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__11);
v___x_5210_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5210_, 0, v___x_5208_);
lean_ctor_set(v___x_5210_, 1, v___x_5209_);
v___x_5211_ = l_Lean_MessageData_ofName(v_mod_5192_);
v___x_5212_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5212_, 0, v___x_5210_);
lean_ctor_set(v___x_5212_, 1, v___x_5211_);
v___x_5213_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___closed__13);
v___x_5214_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5214_, 0, v___x_5212_);
lean_ctor_set(v___x_5214_, 1, v___x_5213_);
v___x_5215_ = l_Lean_MessageData_note(v___x_5214_);
v___x_5216_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5216_, 0, v_msg_5159_);
lean_ctor_set(v___x_5216_, 1, v___x_5215_);
if (v_isShared_5188_ == 0)
{
lean_ctor_set_tag(v___x_5187_, 0);
lean_ctor_set(v___x_5187_, 0, v___x_5216_);
v___x_5218_ = v___x_5187_;
goto v_reusejp_5217_;
}
else
{
lean_object* v_reuseFailAlloc_5219_; 
v_reuseFailAlloc_5219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5219_, 0, v___x_5216_);
v___x_5218_ = v_reuseFailAlloc_5219_;
goto v_reusejp_5217_;
}
v_reusejp_5217_:
{
return v___x_5218_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_5221_; 
lean_dec_ref(v_env_5164_);
lean_dec(v_declHint_5160_);
v___x_5221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5221_, 0, v_msg_5159_);
return v___x_5221_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg___boxed(lean_object* v_msg_5222_, lean_object* v_declHint_5223_, lean_object* v___y_5224_, lean_object* v___y_5225_){
_start:
{
lean_object* v_res_5226_; 
v_res_5226_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg(v_msg_5222_, v_declHint_5223_, v___y_5224_);
lean_dec(v___y_5224_);
return v_res_5226_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4(lean_object* v_msg_5227_, lean_object* v_declHint_5228_, lean_object* v___y_5229_, lean_object* v___y_5230_, lean_object* v___y_5231_, lean_object* v___y_5232_){
_start:
{
lean_object* v___x_5234_; lean_object* v_a_5235_; lean_object* v___x_5237_; uint8_t v_isShared_5238_; uint8_t v_isSharedCheck_5244_; 
v___x_5234_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg(v_msg_5227_, v_declHint_5228_, v___y_5232_);
v_a_5235_ = lean_ctor_get(v___x_5234_, 0);
v_isSharedCheck_5244_ = !lean_is_exclusive(v___x_5234_);
if (v_isSharedCheck_5244_ == 0)
{
v___x_5237_ = v___x_5234_;
v_isShared_5238_ = v_isSharedCheck_5244_;
goto v_resetjp_5236_;
}
else
{
lean_inc(v_a_5235_);
lean_dec(v___x_5234_);
v___x_5237_ = lean_box(0);
v_isShared_5238_ = v_isSharedCheck_5244_;
goto v_resetjp_5236_;
}
v_resetjp_5236_:
{
lean_object* v___x_5239_; lean_object* v___x_5240_; lean_object* v___x_5242_; 
v___x_5239_ = l_Lean_unknownIdentifierMessageTag;
v___x_5240_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_5240_, 0, v___x_5239_);
lean_ctor_set(v___x_5240_, 1, v_a_5235_);
if (v_isShared_5238_ == 0)
{
lean_ctor_set(v___x_5237_, 0, v___x_5240_);
v___x_5242_ = v___x_5237_;
goto v_reusejp_5241_;
}
else
{
lean_object* v_reuseFailAlloc_5243_; 
v_reuseFailAlloc_5243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5243_, 0, v___x_5240_);
v___x_5242_ = v_reuseFailAlloc_5243_;
goto v_reusejp_5241_;
}
v_reusejp_5241_:
{
return v___x_5242_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_msg_5245_, lean_object* v_declHint_5246_, lean_object* v___y_5247_, lean_object* v___y_5248_, lean_object* v___y_5249_, lean_object* v___y_5250_, lean_object* v___y_5251_){
_start:
{
lean_object* v_res_5252_; 
v_res_5252_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4(v_msg_5245_, v_declHint_5246_, v___y_5247_, v___y_5248_, v___y_5249_, v___y_5250_);
lean_dec(v___y_5250_);
lean_dec_ref(v___y_5249_);
lean_dec(v___y_5248_);
lean_dec_ref(v___y_5247_);
return v_res_5252_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3___redArg(lean_object* v_ref_5253_, lean_object* v_msg_5254_, lean_object* v_declHint_5255_, lean_object* v___y_5256_, lean_object* v___y_5257_, lean_object* v___y_5258_, lean_object* v___y_5259_){
_start:
{
lean_object* v___x_5261_; lean_object* v_a_5262_; lean_object* v___x_5263_; 
v___x_5261_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4(v_msg_5254_, v_declHint_5255_, v___y_5256_, v___y_5257_, v___y_5258_, v___y_5259_);
v_a_5262_ = lean_ctor_get(v___x_5261_, 0);
lean_inc(v_a_5262_);
lean_dec_ref(v___x_5261_);
v___x_5263_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__5___redArg(v_ref_5253_, v_a_5262_, v___y_5256_, v___y_5257_, v___y_5258_, v___y_5259_);
return v___x_5263_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3___redArg___boxed(lean_object* v_ref_5264_, lean_object* v_msg_5265_, lean_object* v_declHint_5266_, lean_object* v___y_5267_, lean_object* v___y_5268_, lean_object* v___y_5269_, lean_object* v___y_5270_, lean_object* v___y_5271_){
_start:
{
lean_object* v_res_5272_; 
v_res_5272_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3___redArg(v_ref_5264_, v_msg_5265_, v_declHint_5266_, v___y_5267_, v___y_5268_, v___y_5269_, v___y_5270_);
lean_dec(v___y_5270_);
lean_dec_ref(v___y_5269_);
lean_dec(v___y_5268_);
lean_dec_ref(v___y_5267_);
lean_dec(v_ref_5264_);
return v_res_5272_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_5273_; lean_object* v___x_5274_; 
v___x_5273_ = ((lean_object*)(l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__0));
v___x_5274_ = l_Lean_stringToMessageData(v___x_5273_);
return v___x_5274_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2___redArg(lean_object* v_ref_5275_, lean_object* v_constName_5276_, lean_object* v___y_5277_, lean_object* v___y_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_){
_start:
{
lean_object* v___x_5282_; uint8_t v___x_5283_; lean_object* v___x_5284_; lean_object* v___x_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; 
v___x_5282_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2___redArg___closed__0, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2___redArg___closed__0);
v___x_5283_ = 0;
lean_inc(v_constName_5276_);
v___x_5284_ = l_Lean_MessageData_ofConstName(v_constName_5276_, v___x_5283_);
v___x_5285_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5285_, 0, v___x_5282_);
lean_ctor_set(v___x_5285_, 1, v___x_5284_);
v___x_5286_ = lean_obj_once(&l_Lean_Meta_Simp_eraseSimprocAttr___closed__0, &l_Lean_Meta_Simp_eraseSimprocAttr___closed__0_once, _init_l_Lean_Meta_Simp_eraseSimprocAttr___closed__0);
v___x_5287_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5287_, 0, v___x_5285_);
lean_ctor_set(v___x_5287_, 1, v___x_5286_);
v___x_5288_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3___redArg(v_ref_5275_, v___x_5287_, v_constName_5276_, v___y_5277_, v___y_5278_, v___y_5279_, v___y_5280_);
return v___x_5288_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_ref_5289_, lean_object* v_constName_5290_, lean_object* v___y_5291_, lean_object* v___y_5292_, lean_object* v___y_5293_, lean_object* v___y_5294_, lean_object* v___y_5295_){
_start:
{
lean_object* v_res_5296_; 
v_res_5296_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2___redArg(v_ref_5289_, v_constName_5290_, v___y_5291_, v___y_5292_, v___y_5293_, v___y_5294_);
lean_dec(v___y_5294_);
lean_dec_ref(v___y_5293_);
lean_dec(v___y_5292_);
lean_dec_ref(v___y_5291_);
lean_dec(v_ref_5289_);
return v_res_5296_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1___redArg(lean_object* v_constName_5297_, lean_object* v___y_5298_, lean_object* v___y_5299_, lean_object* v___y_5300_, lean_object* v___y_5301_){
_start:
{
lean_object* v_ref_5303_; lean_object* v___x_5304_; 
v_ref_5303_ = lean_ctor_get(v___y_5300_, 5);
v___x_5304_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2___redArg(v_ref_5303_, v_constName_5297_, v___y_5298_, v___y_5299_, v___y_5300_, v___y_5301_);
return v___x_5304_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1___redArg___boxed(lean_object* v_constName_5305_, lean_object* v___y_5306_, lean_object* v___y_5307_, lean_object* v___y_5308_, lean_object* v___y_5309_, lean_object* v___y_5310_){
_start:
{
lean_object* v_res_5311_; 
v_res_5311_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1___redArg(v_constName_5305_, v___y_5306_, v___y_5307_, v___y_5308_, v___y_5309_);
lean_dec(v___y_5309_);
lean_dec_ref(v___y_5308_);
lean_dec(v___y_5307_);
lean_dec_ref(v___y_5306_);
return v_res_5311_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1(lean_object* v_constName_5312_, lean_object* v___y_5313_, lean_object* v___y_5314_, lean_object* v___y_5315_, lean_object* v___y_5316_){
_start:
{
lean_object* v___x_5318_; lean_object* v_env_5319_; uint8_t v___x_5320_; lean_object* v___x_5321_; 
v___x_5318_ = lean_st_ref_get(v___y_5316_);
v_env_5319_ = lean_ctor_get(v___x_5318_, 0);
lean_inc_ref(v_env_5319_);
lean_dec(v___x_5318_);
v___x_5320_ = 0;
lean_inc(v_constName_5312_);
v___x_5321_ = l_Lean_Environment_find_x3f(v_env_5319_, v_constName_5312_, v___x_5320_);
if (lean_obj_tag(v___x_5321_) == 0)
{
lean_object* v___x_5322_; 
v___x_5322_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1___redArg(v_constName_5312_, v___y_5313_, v___y_5314_, v___y_5315_, v___y_5316_);
return v___x_5322_;
}
else
{
lean_object* v_val_5323_; lean_object* v___x_5325_; uint8_t v_isShared_5326_; uint8_t v_isSharedCheck_5330_; 
lean_dec(v_constName_5312_);
v_val_5323_ = lean_ctor_get(v___x_5321_, 0);
v_isSharedCheck_5330_ = !lean_is_exclusive(v___x_5321_);
if (v_isSharedCheck_5330_ == 0)
{
v___x_5325_ = v___x_5321_;
v_isShared_5326_ = v_isSharedCheck_5330_;
goto v_resetjp_5324_;
}
else
{
lean_inc(v_val_5323_);
lean_dec(v___x_5321_);
v___x_5325_ = lean_box(0);
v_isShared_5326_ = v_isSharedCheck_5330_;
goto v_resetjp_5324_;
}
v_resetjp_5324_:
{
lean_object* v___x_5328_; 
if (v_isShared_5326_ == 0)
{
lean_ctor_set_tag(v___x_5325_, 0);
v___x_5328_ = v___x_5325_;
goto v_reusejp_5327_;
}
else
{
lean_object* v_reuseFailAlloc_5329_; 
v_reuseFailAlloc_5329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5329_, 0, v_val_5323_);
v___x_5328_ = v_reuseFailAlloc_5329_;
goto v_reusejp_5327_;
}
v_reusejp_5327_:
{
return v___x_5328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1___boxed(lean_object* v_constName_5331_, lean_object* v___y_5332_, lean_object* v___y_5333_, lean_object* v___y_5334_, lean_object* v___y_5335_, lean_object* v___y_5336_){
_start:
{
lean_object* v_res_5337_; 
v_res_5337_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1(v_constName_5331_, v___y_5332_, v___y_5333_, v___y_5334_, v___y_5335_);
lean_dec(v___y_5335_);
lean_dec_ref(v___y_5334_);
lean_dec(v___y_5333_);
lean_dec_ref(v___y_5332_);
return v_res_5337_;
}
}
static uint64_t _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__1(void){
_start:
{
lean_object* v___x_5344_; uint64_t v___x_5345_; 
v___x_5344_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__0));
v___x_5345_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_5344_);
return v___x_5345_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__2(void){
_start:
{
uint64_t v___x_5346_; lean_object* v___x_5347_; lean_object* v___x_5348_; 
v___x_5346_ = lean_uint64_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__1, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__1_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__1);
v___x_5347_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__0));
v___x_5348_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_5348_, 0, v___x_5347_);
lean_ctor_set_uint64(v___x_5348_, sizeof(void*)*1, v___x_5346_);
return v___x_5348_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__3(void){
_start:
{
lean_object* v___x_5349_; 
v___x_5349_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_5349_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__4(void){
_start:
{
lean_object* v___x_5350_; lean_object* v___x_5351_; 
v___x_5350_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__3, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__3_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__3);
v___x_5351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5351_, 0, v___x_5350_);
return v___x_5351_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__5(void){
_start:
{
lean_object* v___x_5352_; lean_object* v___x_5353_; lean_object* v___x_5354_; lean_object* v___x_5355_; 
v___x_5352_ = lean_box(1);
v___x_5353_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__4);
v___x_5354_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__4, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__4_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__4);
v___x_5355_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5355_, 0, v___x_5354_);
lean_ctor_set(v___x_5355_, 1, v___x_5353_);
lean_ctor_set(v___x_5355_, 2, v___x_5352_);
return v___x_5355_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__7(void){
_start:
{
uint8_t v___x_5358_; lean_object* v___x_5359_; lean_object* v___x_5360_; lean_object* v___x_5361_; lean_object* v___x_5362_; lean_object* v___x_5363_; uint8_t v___x_5364_; lean_object* v___x_5365_; lean_object* v___x_5366_; 
v___x_5358_ = 1;
v___x_5359_ = lean_unsigned_to_nat(0u);
v___x_5360_ = lean_box(0);
v___x_5361_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__6));
v___x_5362_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__5, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__5_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__5);
v___x_5363_ = lean_box(1);
v___x_5364_ = 0;
v___x_5365_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__2, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__2_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__2);
v___x_5366_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_5366_, 0, v___x_5365_);
lean_ctor_set(v___x_5366_, 1, v___x_5363_);
lean_ctor_set(v___x_5366_, 2, v___x_5362_);
lean_ctor_set(v___x_5366_, 3, v___x_5361_);
lean_ctor_set(v___x_5366_, 4, v___x_5360_);
lean_ctor_set(v___x_5366_, 5, v___x_5359_);
lean_ctor_set(v___x_5366_, 6, v___x_5360_);
lean_ctor_set_uint8(v___x_5366_, sizeof(void*)*7, v___x_5364_);
lean_ctor_set_uint8(v___x_5366_, sizeof(void*)*7 + 1, v___x_5364_);
lean_ctor_set_uint8(v___x_5366_, sizeof(void*)*7 + 2, v___x_5364_);
lean_ctor_set_uint8(v___x_5366_, sizeof(void*)*7 + 3, v___x_5358_);
return v___x_5366_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__8(void){
_start:
{
lean_object* v___x_5367_; lean_object* v___x_5368_; lean_object* v___x_5369_; 
v___x_5367_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__4, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__4_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__4);
v___x_5368_ = lean_unsigned_to_nat(0u);
v___x_5369_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_5369_, 0, v___x_5368_);
lean_ctor_set(v___x_5369_, 1, v___x_5368_);
lean_ctor_set(v___x_5369_, 2, v___x_5368_);
lean_ctor_set(v___x_5369_, 3, v___x_5367_);
lean_ctor_set(v___x_5369_, 4, v___x_5367_);
lean_ctor_set(v___x_5369_, 5, v___x_5367_);
lean_ctor_set(v___x_5369_, 6, v___x_5367_);
lean_ctor_set(v___x_5369_, 7, v___x_5367_);
lean_ctor_set(v___x_5369_, 8, v___x_5367_);
return v___x_5369_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__9(void){
_start:
{
lean_object* v___x_5370_; lean_object* v___x_5371_; 
v___x_5370_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__4, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__4_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__4);
v___x_5371_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_5371_, 0, v___x_5370_);
lean_ctor_set(v___x_5371_, 1, v___x_5370_);
lean_ctor_set(v___x_5371_, 2, v___x_5370_);
lean_ctor_set(v___x_5371_, 3, v___x_5370_);
lean_ctor_set(v___x_5371_, 4, v___x_5370_);
lean_ctor_set(v___x_5371_, 5, v___x_5370_);
return v___x_5371_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__10(void){
_start:
{
lean_object* v___x_5372_; lean_object* v___x_5373_; 
v___x_5372_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__4, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__4_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__4);
v___x_5373_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5373_, 0, v___x_5372_);
lean_ctor_set(v___x_5373_, 1, v___x_5372_);
lean_ctor_set(v___x_5373_, 2, v___x_5372_);
lean_ctor_set(v___x_5373_, 3, v___x_5372_);
lean_ctor_set(v___x_5373_, 4, v___x_5372_);
return v___x_5373_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__11(void){
_start:
{
lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; 
v___x_5374_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__10, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__10_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__10);
v___x_5375_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0_spec__0___closed__4);
v___x_5376_ = lean_box(1);
v___x_5377_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__9, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__9_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__9);
v___x_5378_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__8, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__8_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__8);
v___x_5379_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5379_, 0, v___x_5378_);
lean_ctor_set(v___x_5379_, 1, v___x_5377_);
lean_ctor_set(v___x_5379_, 2, v___x_5376_);
lean_ctor_set(v___x_5379_, 3, v___x_5375_);
lean_ctor_set(v___x_5379_, 4, v___x_5374_);
return v___x_5379_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__15(void){
_start:
{
lean_object* v___x_5385_; lean_object* v___x_5386_; 
v___x_5385_ = lean_unsigned_to_nat(0u);
v___x_5386_ = l_Lean_Level_ofNat(v___x_5385_);
return v___x_5386_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__16(void){
_start:
{
lean_object* v___x_5387_; lean_object* v___x_5388_; lean_object* v___x_5389_; 
v___x_5387_ = lean_box(0);
v___x_5388_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__15, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__15_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__15);
v___x_5389_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5389_, 0, v___x_5388_);
lean_ctor_set(v___x_5389_, 1, v___x_5387_);
return v___x_5389_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__17(void){
_start:
{
lean_object* v___x_5390_; lean_object* v___x_5391_; lean_object* v___x_5392_; 
v___x_5390_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__16, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__16_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__16);
v___x_5391_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__15, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__15_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__15);
v___x_5392_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5392_, 0, v___x_5391_);
lean_ctor_set(v___x_5392_, 1, v___x_5390_);
return v___x_5392_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__18(void){
_start:
{
lean_object* v___x_5393_; lean_object* v___x_5394_; lean_object* v___x_5395_; 
v___x_5393_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__17, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__17_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__17);
v___x_5394_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__14));
v___x_5395_ = l_Lean_mkConst(v___x_5394_, v___x_5393_);
return v___x_5395_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__19(void){
_start:
{
lean_object* v___x_5396_; lean_object* v___x_5397_; lean_object* v___x_5398_; 
v___x_5396_ = lean_box(0);
v___x_5397_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__2));
v___x_5398_ = l_Lean_mkConst(v___x_5397_, v___x_5396_);
return v___x_5398_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__20(void){
_start:
{
lean_object* v___x_5399_; lean_object* v___x_5400_; lean_object* v___x_5401_; 
v___x_5399_ = lean_box(0);
v___x_5400_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1___closed__8));
v___x_5401_ = l_Lean_mkConst(v___x_5400_, v___x_5399_);
return v___x_5401_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__23(void){
_start:
{
lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; 
v___x_5406_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__17, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__17_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__17);
v___x_5407_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__22));
v___x_5408_ = l_Lean_mkConst(v___x_5407_, v___x_5406_);
return v___x_5408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin(lean_object* v_declName_5409_, lean_object* v_stx_5410_, lean_object* v_addDeclName_5411_, lean_object* v_a_5412_, lean_object* v_a_5413_){
_start:
{
lean_object* v___y_5416_; lean_object* v___y_5417_; lean_object* v___x_5427_; lean_object* v___x_5428_; uint8_t v___x_5429_; uint8_t v___x_5430_; uint8_t v___y_5432_; 
v___x_5427_ = lean_unsigned_to_nat(1u);
v___x_5428_ = l_Lean_Syntax_getArg(v_stx_5410_, v___x_5427_);
v___x_5429_ = l_Lean_Syntax_isNone(v___x_5428_);
v___x_5430_ = 1;
if (v___x_5429_ == 0)
{
lean_object* v___x_5508_; lean_object* v___x_5509_; lean_object* v___x_5510_; lean_object* v___x_5511_; uint8_t v___x_5512_; 
v___x_5508_ = lean_unsigned_to_nat(0u);
v___x_5509_ = l_Lean_Syntax_getArg(v___x_5428_, v___x_5508_);
lean_dec(v___x_5428_);
v___x_5510_ = l_Lean_Syntax_getKind(v___x_5509_);
v___x_5511_ = ((lean_object*)(l_Lean_Meta_Simp_addSimprocAttr___closed__6));
v___x_5512_ = lean_name_eq(v___x_5510_, v___x_5511_);
lean_dec(v___x_5510_);
v___y_5432_ = v___x_5512_;
goto v___jp_5431_;
}
else
{
lean_dec(v___x_5428_);
v___y_5432_ = v___x_5430_;
goto v___jp_5431_;
}
v___jp_5415_:
{
if (lean_obj_tag(v___y_5417_) == 0)
{
lean_object* v_a_5418_; lean_object* v___x_5420_; uint8_t v_isShared_5421_; uint8_t v_isSharedCheck_5426_; 
v_a_5418_ = lean_ctor_get(v___y_5417_, 0);
v_isSharedCheck_5426_ = !lean_is_exclusive(v___y_5417_);
if (v_isSharedCheck_5426_ == 0)
{
v___x_5420_ = v___y_5417_;
v_isShared_5421_ = v_isSharedCheck_5426_;
goto v_resetjp_5419_;
}
else
{
lean_inc(v_a_5418_);
lean_dec(v___y_5417_);
v___x_5420_ = lean_box(0);
v_isShared_5421_ = v_isSharedCheck_5426_;
goto v_resetjp_5419_;
}
v_resetjp_5419_:
{
lean_object* v___x_5422_; lean_object* v___x_5424_; 
v___x_5422_ = lean_st_ref_get(v___y_5416_);
lean_dec(v___y_5416_);
lean_dec(v___x_5422_);
if (v_isShared_5421_ == 0)
{
v___x_5424_ = v___x_5420_;
goto v_reusejp_5423_;
}
else
{
lean_object* v_reuseFailAlloc_5425_; 
v_reuseFailAlloc_5425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5425_, 0, v_a_5418_);
v___x_5424_ = v_reuseFailAlloc_5425_;
goto v_reusejp_5423_;
}
v_reusejp_5423_:
{
return v___x_5424_;
}
}
}
else
{
lean_dec(v___y_5416_);
return v___y_5417_;
}
}
v___jp_5431_:
{
lean_object* v___x_5433_; lean_object* v___x_5434_; lean_object* v___x_5435_; lean_object* v___x_5436_; 
v___x_5433_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__7, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__7_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__7);
v___x_5434_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__11, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__11_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__11);
v___x_5435_ = lean_st_mk_ref(v___x_5434_);
lean_inc(v_declName_5409_);
v___x_5436_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1(v_declName_5409_, v___x_5433_, v___x_5435_, v_a_5412_, v_a_5413_);
if (lean_obj_tag(v___x_5436_) == 0)
{
lean_object* v_a_5437_; lean_object* v___x_5438_; lean_object* v___f_5439_; lean_object* v___x_5440_; 
v_a_5437_ = lean_ctor_get(v___x_5436_, 0);
lean_inc(v_a_5437_);
lean_dec_ref(v___x_5436_);
v___x_5438_ = lean_box(v___y_5432_);
lean_inc(v_declName_5409_);
lean_inc(v_addDeclName_5411_);
v___f_5439_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0___boxed), 9, 3);
lean_closure_set(v___f_5439_, 0, v_addDeclName_5411_);
lean_closure_set(v___f_5439_, 1, v_declName_5409_);
lean_closure_set(v___f_5439_, 2, v___x_5438_);
v___x_5440_ = l_Lean_ConstantInfo_type(v_a_5437_);
lean_dec(v_a_5437_);
if (lean_obj_tag(v___x_5440_) == 4)
{
lean_object* v_declName_5441_; 
v_declName_5441_ = lean_ctor_get(v___x_5440_, 0);
lean_inc(v_declName_5441_);
if (lean_obj_tag(v_declName_5441_) == 1)
{
lean_object* v_pre_5442_; 
v_pre_5442_ = lean_ctor_get(v_declName_5441_, 0);
lean_inc(v_pre_5442_);
if (lean_obj_tag(v_pre_5442_) == 1)
{
lean_object* v_pre_5443_; 
v_pre_5443_ = lean_ctor_get(v_pre_5442_, 0);
lean_inc(v_pre_5443_);
if (lean_obj_tag(v_pre_5443_) == 1)
{
lean_object* v_pre_5444_; 
v_pre_5444_ = lean_ctor_get(v_pre_5443_, 0);
lean_inc(v_pre_5444_);
if (lean_obj_tag(v_pre_5444_) == 1)
{
lean_object* v_pre_5445_; 
v_pre_5445_ = lean_ctor_get(v_pre_5444_, 0);
lean_inc(v_pre_5445_);
if (lean_obj_tag(v_pre_5445_) == 0)
{
lean_object* v_us_5446_; lean_object* v_str_5447_; lean_object* v_str_5448_; lean_object* v_str_5449_; lean_object* v_str_5450_; lean_object* v___x_5451_; uint8_t v___x_5452_; 
v_us_5446_ = lean_ctor_get(v___x_5440_, 1);
lean_inc(v_us_5446_);
v_str_5447_ = lean_ctor_get(v_declName_5441_, 1);
lean_inc_ref(v_str_5447_);
lean_dec_ref(v_declName_5441_);
v_str_5448_ = lean_ctor_get(v_pre_5442_, 1);
lean_inc_ref(v_str_5448_);
lean_dec_ref(v_pre_5442_);
v_str_5449_ = lean_ctor_get(v_pre_5443_, 1);
lean_inc_ref(v_str_5449_);
lean_dec_ref(v_pre_5443_);
v_str_5450_ = lean_ctor_get(v_pre_5444_, 1);
lean_inc_ref(v_str_5450_);
lean_dec_ref(v_pre_5444_);
v___x_5451_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__5_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_));
v___x_5452_ = lean_string_dec_eq(v_str_5450_, v___x_5451_);
lean_dec_ref(v_str_5450_);
if (v___x_5452_ == 0)
{
lean_object* v___x_5453_; 
lean_dec_ref(v_str_5449_);
lean_dec_ref(v_str_5448_);
lean_dec_ref(v_str_5447_);
lean_dec(v_us_5446_);
lean_dec(v_addDeclName_5411_);
v___x_5453_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1(v_declName_5409_, v___f_5439_, v___x_5440_, v___x_5433_, v___x_5435_, v_a_5412_, v_a_5413_);
lean_dec_ref(v___f_5439_);
v___y_5416_ = v___x_5435_;
v___y_5417_ = v___x_5453_;
goto v___jp_5415_;
}
else
{
lean_object* v___x_5454_; uint8_t v___x_5455_; 
lean_dec_ref(v___x_5440_);
v___x_5454_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__6_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_));
v___x_5455_ = lean_string_dec_eq(v_str_5449_, v___x_5454_);
if (v___x_5455_ == 0)
{
lean_object* v___x_5456_; lean_object* v___x_5457_; lean_object* v___x_5458_; lean_object* v___x_5459_; lean_object* v___x_5460_; lean_object* v___x_5461_; 
lean_dec(v_addDeclName_5411_);
v___x_5456_ = l_Lean_Name_str___override(v_pre_5445_, v___x_5451_);
v___x_5457_ = l_Lean_Name_str___override(v___x_5456_, v_str_5449_);
v___x_5458_ = l_Lean_Name_str___override(v___x_5457_, v_str_5448_);
v___x_5459_ = l_Lean_Name_str___override(v___x_5458_, v_str_5447_);
v___x_5460_ = l_Lean_Expr_const___override(v___x_5459_, v_us_5446_);
v___x_5461_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1(v_declName_5409_, v___f_5439_, v___x_5460_, v___x_5433_, v___x_5435_, v_a_5412_, v_a_5413_);
lean_dec_ref(v___f_5439_);
v___y_5416_ = v___x_5435_;
v___y_5417_ = v___x_5461_;
goto v___jp_5415_;
}
else
{
lean_object* v___x_5462_; uint8_t v___x_5463_; 
lean_dec_ref(v_str_5449_);
v___x_5462_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__7_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_));
v___x_5463_ = lean_string_dec_eq(v_str_5448_, v___x_5462_);
if (v___x_5463_ == 0)
{
lean_object* v___x_5464_; lean_object* v___x_5465_; lean_object* v___x_5466_; lean_object* v___x_5467_; lean_object* v___x_5468_; lean_object* v___x_5469_; 
lean_dec(v_addDeclName_5411_);
v___x_5464_ = l_Lean_Name_str___override(v_pre_5445_, v___x_5451_);
v___x_5465_ = l_Lean_Name_str___override(v___x_5464_, v___x_5454_);
v___x_5466_ = l_Lean_Name_str___override(v___x_5465_, v_str_5448_);
v___x_5467_ = l_Lean_Name_str___override(v___x_5466_, v_str_5447_);
v___x_5468_ = l_Lean_Expr_const___override(v___x_5467_, v_us_5446_);
v___x_5469_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1(v_declName_5409_, v___f_5439_, v___x_5468_, v___x_5433_, v___x_5435_, v_a_5412_, v_a_5413_);
lean_dec_ref(v___f_5439_);
v___y_5416_ = v___x_5435_;
v___y_5417_ = v___x_5469_;
goto v___jp_5415_;
}
else
{
lean_object* v___x_5470_; uint8_t v___x_5471_; 
lean_dec_ref(v_str_5448_);
v___x_5470_ = ((lean_object*)(l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__4));
v___x_5471_ = lean_string_dec_eq(v_str_5447_, v___x_5470_);
if (v___x_5471_ == 0)
{
lean_object* v___x_5472_; uint8_t v___x_5473_; 
v___x_5472_ = ((lean_object*)(l_Lean_Meta_Simp_getSimprocFromDeclImpl___closed__5));
v___x_5473_ = lean_string_dec_eq(v_str_5447_, v___x_5472_);
if (v___x_5473_ == 0)
{
lean_object* v___x_5474_; lean_object* v___x_5475_; lean_object* v___x_5476_; lean_object* v___x_5477_; lean_object* v___x_5478_; lean_object* v___x_5479_; 
lean_dec(v_addDeclName_5411_);
v___x_5474_ = l_Lean_Name_str___override(v_pre_5445_, v___x_5451_);
v___x_5475_ = l_Lean_Name_str___override(v___x_5474_, v___x_5454_);
v___x_5476_ = l_Lean_Name_str___override(v___x_5475_, v___x_5462_);
v___x_5477_ = l_Lean_Name_str___override(v___x_5476_, v_str_5447_);
v___x_5478_ = l_Lean_Expr_const___override(v___x_5477_, v_us_5446_);
v___x_5479_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1(v_declName_5409_, v___f_5439_, v___x_5478_, v___x_5433_, v___x_5435_, v_a_5412_, v_a_5413_);
lean_dec_ref(v___f_5439_);
v___y_5416_ = v___x_5435_;
v___y_5417_ = v___x_5479_;
goto v___jp_5415_;
}
else
{
lean_object* v___x_5480_; lean_object* v___x_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; lean_object* v___x_5484_; lean_object* v___x_5485_; lean_object* v___x_5486_; 
lean_dec_ref(v_str_5447_);
lean_dec(v_us_5446_);
lean_dec_ref(v___f_5439_);
v___x_5480_ = lean_box(0);
v___x_5481_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__18, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__18_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__18);
v___x_5482_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__19, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__19_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__19);
v___x_5483_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__20, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__20_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__20);
lean_inc(v_declName_5409_);
v___x_5484_ = l_Lean_mkConst(v_declName_5409_, v___x_5480_);
v___x_5485_ = l_Lean_mkApp3(v___x_5481_, v___x_5482_, v___x_5483_, v___x_5484_);
v___x_5486_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0(v_addDeclName_5411_, v_declName_5409_, v___y_5432_, v___x_5485_, v___x_5433_, v___x_5435_, v_a_5412_, v_a_5413_);
v___y_5416_ = v___x_5435_;
v___y_5417_ = v___x_5486_;
goto v___jp_5415_;
}
}
else
{
lean_object* v___x_5487_; lean_object* v___x_5488_; lean_object* v___x_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; lean_object* v___x_5492_; lean_object* v___x_5493_; 
lean_dec_ref(v_str_5447_);
lean_dec(v_us_5446_);
lean_dec_ref(v___f_5439_);
v___x_5487_ = lean_box(0);
v___x_5488_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__23, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__23_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__23);
v___x_5489_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__19, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__19_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__19);
v___x_5490_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__20, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__20_once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___closed__20);
lean_inc(v_declName_5409_);
v___x_5491_ = l_Lean_mkConst(v_declName_5409_, v___x_5487_);
v___x_5492_ = l_Lean_mkApp3(v___x_5488_, v___x_5489_, v___x_5490_, v___x_5491_);
v___x_5493_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__0(v_addDeclName_5411_, v_declName_5409_, v___y_5432_, v___x_5492_, v___x_5433_, v___x_5435_, v_a_5412_, v_a_5413_);
v___y_5416_ = v___x_5435_;
v___y_5417_ = v___x_5493_;
goto v___jp_5415_;
}
}
}
}
}
else
{
lean_object* v___x_5494_; 
lean_dec_ref(v_pre_5444_);
lean_dec(v_pre_5445_);
lean_dec_ref(v_pre_5443_);
lean_dec_ref(v_pre_5442_);
lean_dec_ref(v_declName_5441_);
lean_dec(v_addDeclName_5411_);
v___x_5494_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1(v_declName_5409_, v___f_5439_, v___x_5440_, v___x_5433_, v___x_5435_, v_a_5412_, v_a_5413_);
lean_dec_ref(v___f_5439_);
v___y_5416_ = v___x_5435_;
v___y_5417_ = v___x_5494_;
goto v___jp_5415_;
}
}
else
{
lean_object* v___x_5495_; 
lean_dec(v_pre_5444_);
lean_dec_ref(v_pre_5443_);
lean_dec_ref(v_pre_5442_);
lean_dec_ref(v_declName_5441_);
lean_dec(v_addDeclName_5411_);
v___x_5495_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1(v_declName_5409_, v___f_5439_, v___x_5440_, v___x_5433_, v___x_5435_, v_a_5412_, v_a_5413_);
lean_dec_ref(v___f_5439_);
v___y_5416_ = v___x_5435_;
v___y_5417_ = v___x_5495_;
goto v___jp_5415_;
}
}
else
{
lean_object* v___x_5496_; 
lean_dec_ref(v_pre_5442_);
lean_dec(v_pre_5443_);
lean_dec_ref(v_declName_5441_);
lean_dec(v_addDeclName_5411_);
v___x_5496_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1(v_declName_5409_, v___f_5439_, v___x_5440_, v___x_5433_, v___x_5435_, v_a_5412_, v_a_5413_);
lean_dec_ref(v___f_5439_);
v___y_5416_ = v___x_5435_;
v___y_5417_ = v___x_5496_;
goto v___jp_5415_;
}
}
else
{
lean_object* v___x_5497_; 
lean_dec_ref(v_declName_5441_);
lean_dec(v_pre_5442_);
lean_dec(v_addDeclName_5411_);
v___x_5497_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1(v_declName_5409_, v___f_5439_, v___x_5440_, v___x_5433_, v___x_5435_, v_a_5412_, v_a_5413_);
lean_dec_ref(v___f_5439_);
v___y_5416_ = v___x_5435_;
v___y_5417_ = v___x_5497_;
goto v___jp_5415_;
}
}
else
{
lean_object* v___x_5498_; 
lean_dec(v_declName_5441_);
lean_dec(v_addDeclName_5411_);
v___x_5498_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1(v_declName_5409_, v___f_5439_, v___x_5440_, v___x_5433_, v___x_5435_, v_a_5412_, v_a_5413_);
lean_dec_ref(v___f_5439_);
v___y_5416_ = v___x_5435_;
v___y_5417_ = v___x_5498_;
goto v___jp_5415_;
}
}
else
{
lean_object* v___x_5499_; 
lean_dec(v_addDeclName_5411_);
v___x_5499_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___lam__1(v_declName_5409_, v___f_5439_, v___x_5440_, v___x_5433_, v___x_5435_, v_a_5412_, v_a_5413_);
lean_dec_ref(v___f_5439_);
v___y_5416_ = v___x_5435_;
v___y_5417_ = v___x_5499_;
goto v___jp_5415_;
}
}
else
{
lean_object* v_a_5500_; lean_object* v___x_5502_; uint8_t v_isShared_5503_; uint8_t v_isSharedCheck_5507_; 
lean_dec(v___x_5435_);
lean_dec(v_addDeclName_5411_);
lean_dec(v_declName_5409_);
v_a_5500_ = lean_ctor_get(v___x_5436_, 0);
v_isSharedCheck_5507_ = !lean_is_exclusive(v___x_5436_);
if (v_isSharedCheck_5507_ == 0)
{
v___x_5502_ = v___x_5436_;
v_isShared_5503_ = v_isSharedCheck_5507_;
goto v_resetjp_5501_;
}
else
{
lean_inc(v_a_5500_);
lean_dec(v___x_5436_);
v___x_5502_ = lean_box(0);
v_isShared_5503_ = v_isSharedCheck_5507_;
goto v_resetjp_5501_;
}
v_resetjp_5501_:
{
lean_object* v___x_5505_; 
if (v_isShared_5503_ == 0)
{
v___x_5505_ = v___x_5502_;
goto v_reusejp_5504_;
}
else
{
lean_object* v_reuseFailAlloc_5506_; 
v_reuseFailAlloc_5506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5506_, 0, v_a_5500_);
v___x_5505_ = v_reuseFailAlloc_5506_;
goto v_reusejp_5504_;
}
v_reusejp_5504_:
{
return v___x_5505_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin___boxed(lean_object* v_declName_5513_, lean_object* v_stx_5514_, lean_object* v_addDeclName_5515_, lean_object* v_a_5516_, lean_object* v_a_5517_, lean_object* v_a_5518_){
_start:
{
lean_object* v_res_5519_; 
v_res_5519_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin(v_declName_5513_, v_stx_5514_, v_addDeclName_5515_, v_a_5516_, v_a_5517_);
lean_dec(v_a_5517_);
lean_dec_ref(v_a_5516_);
lean_dec(v_stx_5514_);
return v_res_5519_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__0(lean_object* v_00_u03b1_5520_, lean_object* v_msg_5521_, lean_object* v___y_5522_, lean_object* v___y_5523_, lean_object* v___y_5524_, lean_object* v___y_5525_){
_start:
{
lean_object* v___x_5527_; 
v___x_5527_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__0___redArg(v_msg_5521_, v___y_5522_, v___y_5523_, v___y_5524_, v___y_5525_);
return v___x_5527_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__0___boxed(lean_object* v_00_u03b1_5528_, lean_object* v_msg_5529_, lean_object* v___y_5530_, lean_object* v___y_5531_, lean_object* v___y_5532_, lean_object* v___y_5533_, lean_object* v___y_5534_){
_start:
{
lean_object* v_res_5535_; 
v_res_5535_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__0(v_00_u03b1_5528_, v_msg_5529_, v___y_5530_, v___y_5531_, v___y_5532_, v___y_5533_);
lean_dec(v___y_5533_);
lean_dec_ref(v___y_5532_);
lean_dec(v___y_5531_);
lean_dec_ref(v___y_5530_);
return v_res_5535_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1(lean_object* v_00_u03b1_5536_, lean_object* v_constName_5537_, lean_object* v___y_5538_, lean_object* v___y_5539_, lean_object* v___y_5540_, lean_object* v___y_5541_){
_start:
{
lean_object* v___x_5543_; 
v___x_5543_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1___redArg(v_constName_5537_, v___y_5538_, v___y_5539_, v___y_5540_, v___y_5541_);
return v___x_5543_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1___boxed(lean_object* v_00_u03b1_5544_, lean_object* v_constName_5545_, lean_object* v___y_5546_, lean_object* v___y_5547_, lean_object* v___y_5548_, lean_object* v___y_5549_, lean_object* v___y_5550_){
_start:
{
lean_object* v_res_5551_; 
v_res_5551_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1(v_00_u03b1_5544_, v_constName_5545_, v___y_5546_, v___y_5547_, v___y_5548_, v___y_5549_);
lean_dec(v___y_5549_);
lean_dec_ref(v___y_5548_);
lean_dec(v___y_5547_);
lean_dec_ref(v___y_5546_);
return v_res_5551_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2(lean_object* v_00_u03b1_5552_, lean_object* v_ref_5553_, lean_object* v_constName_5554_, lean_object* v___y_5555_, lean_object* v___y_5556_, lean_object* v___y_5557_, lean_object* v___y_5558_){
_start:
{
lean_object* v___x_5560_; 
v___x_5560_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2___redArg(v_ref_5553_, v_constName_5554_, v___y_5555_, v___y_5556_, v___y_5557_, v___y_5558_);
return v___x_5560_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b1_5561_, lean_object* v_ref_5562_, lean_object* v_constName_5563_, lean_object* v___y_5564_, lean_object* v___y_5565_, lean_object* v___y_5566_, lean_object* v___y_5567_, lean_object* v___y_5568_){
_start:
{
lean_object* v_res_5569_; 
v_res_5569_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2(v_00_u03b1_5561_, v_ref_5562_, v_constName_5563_, v___y_5564_, v___y_5565_, v___y_5566_, v___y_5567_);
lean_dec(v___y_5567_);
lean_dec_ref(v___y_5566_);
lean_dec(v___y_5565_);
lean_dec_ref(v___y_5564_);
lean_dec(v_ref_5562_);
return v_res_5569_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3(lean_object* v_00_u03b1_5570_, lean_object* v_ref_5571_, lean_object* v_msg_5572_, lean_object* v_declHint_5573_, lean_object* v___y_5574_, lean_object* v___y_5575_, lean_object* v___y_5576_, lean_object* v___y_5577_){
_start:
{
lean_object* v___x_5579_; 
v___x_5579_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3___redArg(v_ref_5571_, v_msg_5572_, v_declHint_5573_, v___y_5574_, v___y_5575_, v___y_5576_, v___y_5577_);
return v___x_5579_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3___boxed(lean_object* v_00_u03b1_5580_, lean_object* v_ref_5581_, lean_object* v_msg_5582_, lean_object* v_declHint_5583_, lean_object* v___y_5584_, lean_object* v___y_5585_, lean_object* v___y_5586_, lean_object* v___y_5587_, lean_object* v___y_5588_){
_start:
{
lean_object* v_res_5589_; 
v_res_5589_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3(v_00_u03b1_5580_, v_ref_5581_, v_msg_5582_, v_declHint_5583_, v___y_5584_, v___y_5585_, v___y_5586_, v___y_5587_);
lean_dec(v___y_5587_);
lean_dec_ref(v___y_5586_);
lean_dec(v___y_5585_);
lean_dec_ref(v___y_5584_);
lean_dec(v_ref_5581_);
return v_res_5589_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5(lean_object* v_msg_5590_, lean_object* v_declHint_5591_, lean_object* v___y_5592_, lean_object* v___y_5593_, lean_object* v___y_5594_, lean_object* v___y_5595_){
_start:
{
lean_object* v___x_5597_; 
v___x_5597_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___redArg(v_msg_5590_, v_declHint_5591_, v___y_5595_);
return v___x_5597_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5___boxed(lean_object* v_msg_5598_, lean_object* v_declHint_5599_, lean_object* v___y_5600_, lean_object* v___y_5601_, lean_object* v___y_5602_, lean_object* v___y_5603_, lean_object* v___y_5604_){
_start:
{
lean_object* v_res_5605_; 
v_res_5605_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__4_spec__5(v_msg_5598_, v_declHint_5599_, v___y_5600_, v___y_5601_, v___y_5602_, v___y_5603_);
lean_dec(v___y_5603_);
lean_dec_ref(v___y_5602_);
lean_dec(v___y_5601_);
lean_dec_ref(v___y_5600_);
return v_res_5605_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b1_5606_, lean_object* v_ref_5607_, lean_object* v_msg_5608_, lean_object* v___y_5609_, lean_object* v___y_5610_, lean_object* v___y_5611_, lean_object* v___y_5612_){
_start:
{
lean_object* v___x_5614_; 
v___x_5614_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__5___redArg(v_ref_5607_, v_msg_5608_, v___y_5609_, v___y_5610_, v___y_5611_, v___y_5612_);
return v___x_5614_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b1_5615_, lean_object* v_ref_5616_, lean_object* v_msg_5617_, lean_object* v___y_5618_, lean_object* v___y_5619_, lean_object* v___y_5620_, lean_object* v___y_5621_, lean_object* v___y_5622_){
_start:
{
lean_object* v_res_5623_; 
v_res_5623_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin_spec__1_spec__1_spec__2_spec__3_spec__5(v_00_u03b1_5615_, v_ref_5616_, v_msg_5617_, v___y_5618_, v___y_5619_, v___y_5620_, v___y_5621_);
lean_dec(v___y_5621_);
lean_dec_ref(v___y_5620_);
lean_dec(v___y_5619_);
lean_dec_ref(v___y_5618_);
lean_dec(v_ref_5616_);
return v_res_5623_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5625_; lean_object* v___x_5626_; 
v___x_5625_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_));
v___x_5626_ = l_Lean_stringToMessageData(v___x_5625_);
return v___x_5626_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_(lean_object* v_x_5627_, lean_object* v___y_5628_, lean_object* v___y_5629_){
_start:
{
lean_object* v___x_5631_; lean_object* v___x_5632_; 
v___x_5631_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_);
v___x_5632_ = l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0___redArg(v___x_5631_, v___y_5628_, v___y_5629_);
return v___x_5632_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2____boxed(lean_object* v_x_5633_, lean_object* v___y_5634_, lean_object* v___y_5635_, lean_object* v___y_5636_){
_start:
{
lean_object* v_res_5637_; 
v_res_5637_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_(v_x_5633_, v___y_5634_, v___y_5635_);
lean_dec(v___y_5635_);
lean_dec_ref(v___y_5634_);
lean_dec(v_x_5633_);
return v_res_5637_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_(lean_object* v___x_5639_, lean_object* v___x_5640_, lean_object* v___x_5641_, lean_object* v_declName_5642_, lean_object* v_stx_5643_, uint8_t v_x_5644_, lean_object* v___y_5645_, lean_object* v___y_5646_){
_start:
{
lean_object* v___x_5648_; lean_object* v___x_5649_; lean_object* v___x_5650_; 
v___x_5648_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_));
v___x_5649_ = l_Lean_Name_mkStr4(v___x_5639_, v___x_5640_, v___x_5641_, v___x_5648_);
v___x_5650_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin(v_declName_5642_, v_stx_5643_, v___x_5649_, v___y_5645_, v___y_5646_);
return v___x_5650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2____boxed(lean_object* v___x_5651_, lean_object* v___x_5652_, lean_object* v___x_5653_, lean_object* v_declName_5654_, lean_object* v_stx_5655_, lean_object* v_x_5656_, lean_object* v___y_5657_, lean_object* v___y_5658_, lean_object* v___y_5659_){
_start:
{
uint8_t v_x_151__boxed_5660_; lean_object* v_res_5661_; 
v_x_151__boxed_5660_ = lean_unbox(v_x_5656_);
v_res_5661_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_(v___x_5651_, v___x_5652_, v___x_5653_, v_declName_5654_, v_stx_5655_, v_x_151__boxed_5660_, v___y_5657_, v___y_5658_);
lean_dec(v___y_5658_);
lean_dec_ref(v___y_5657_);
lean_dec(v_stx_5655_);
return v_res_5661_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5749_; lean_object* v___x_5750_; 
v___x_5749_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__32_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_));
v___x_5750_ = l_Lean_registerBuiltinAttribute(v___x_5749_);
return v___x_5750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2____boxed(lean_object* v_a_5751_){
_start:
{
lean_object* v_res_5752_; 
v_res_5752_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_();
return v_res_5752_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5754_; lean_object* v___x_5755_; 
v___x_5754_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_));
v___x_5755_ = l_Lean_stringToMessageData(v___x_5754_);
return v___x_5755_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_(lean_object* v_x_5756_, lean_object* v___y_5757_, lean_object* v___y_5758_){
_start:
{
lean_object* v___x_5760_; lean_object* v___x_5761_; 
v___x_5760_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_);
v___x_5761_ = l_Lean_throwError___at___00Lean_Meta_Simp_registerSimproc_spec__0___redArg(v___x_5760_, v___y_5757_, v___y_5758_);
return v___x_5761_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2____boxed(lean_object* v_x_5762_, lean_object* v___y_5763_, lean_object* v___y_5764_, lean_object* v___y_5765_){
_start:
{
lean_object* v_res_5766_; 
v_res_5766_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_(v_x_5762_, v___y_5763_, v___y_5764_);
lean_dec(v___y_5764_);
lean_dec_ref(v___y_5763_);
lean_dec(v_x_5762_);
return v_res_5766_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_(lean_object* v___x_5768_, lean_object* v___x_5769_, lean_object* v___x_5770_, lean_object* v_declName_5771_, lean_object* v_stx_5772_, uint8_t v_x_5773_, lean_object* v___y_5774_, lean_object* v___y_5775_){
_start:
{
lean_object* v___x_5777_; lean_object* v___x_5778_; lean_object* v___x_5779_; 
v___x_5777_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1___closed__0_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_));
v___x_5778_ = l_Lean_Name_mkStr4(v___x_5768_, v___x_5769_, v___x_5770_, v___x_5777_);
v___x_5779_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_addBuiltin(v_declName_5771_, v_stx_5772_, v___x_5778_, v___y_5774_, v___y_5775_);
return v___x_5779_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2____boxed(lean_object* v___x_5780_, lean_object* v___x_5781_, lean_object* v___x_5782_, lean_object* v_declName_5783_, lean_object* v_stx_5784_, lean_object* v_x_5785_, lean_object* v___y_5786_, lean_object* v___y_5787_, lean_object* v___y_5788_){
_start:
{
uint8_t v_x_151__boxed_5789_; lean_object* v_res_5790_; 
v_x_151__boxed_5789_ = lean_unbox(v_x_5785_);
v_res_5790_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___lam__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_(v___x_5780_, v___x_5781_, v___x_5782_, v_declName_5783_, v_stx_5784_, v_x_151__boxed_5789_, v___y_5786_, v___y_5787_);
lean_dec(v___y_5787_);
lean_dec_ref(v___y_5786_);
lean_dec(v_stx_5784_);
return v_res_5790_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5822_; lean_object* v___x_5823_; 
v___x_5822_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn___closed__10_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_));
v___x_5823_ = l_Lean_registerBuiltinAttribute(v___x_5822_);
return v___x_5823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2____boxed(lean_object* v_a_5824_){
_start:
{
lean_object* v_res_5825_; 
v_res_5825_ = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_();
return v_res_5825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocs___redArg(lean_object* v_a_5826_){
_start:
{
lean_object* v___x_5828_; lean_object* v_env_5829_; lean_object* v___x_5830_; lean_object* v_ext_5831_; lean_object* v_toEnvExtension_5832_; lean_object* v_asyncMode_5833_; lean_object* v___x_5834_; lean_object* v___x_5835_; lean_object* v___x_5836_; 
v___x_5828_ = lean_st_ref_get(v_a_5826_);
v_env_5829_ = lean_ctor_get(v___x_5828_, 0);
lean_inc_ref(v_env_5829_);
lean_dec(v___x_5828_);
v___x_5830_ = l_Lean_Meta_Simp_simprocExtension;
v_ext_5831_ = lean_ctor_get(v___x_5830_, 1);
v_toEnvExtension_5832_ = lean_ctor_get(v_ext_5831_, 0);
v_asyncMode_5833_ = lean_ctor_get(v_toEnvExtension_5832_, 2);
v___x_5834_ = l_Lean_Meta_Simp_instInhabitedSimprocs_default;
v___x_5835_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5834_, v___x_5830_, v_env_5829_, v_asyncMode_5833_);
v___x_5836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5836_, 0, v___x_5835_);
return v___x_5836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocs___redArg___boxed(lean_object* v_a_5837_, lean_object* v_a_5838_){
_start:
{
lean_object* v_res_5839_; 
v_res_5839_ = l_Lean_Meta_Simp_getSimprocs___redArg(v_a_5837_);
lean_dec(v_a_5837_);
return v_res_5839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocs(lean_object* v_a_5840_, lean_object* v_a_5841_){
_start:
{
lean_object* v___x_5843_; 
v___x_5843_ = l_Lean_Meta_Simp_getSimprocs___redArg(v_a_5841_);
return v___x_5843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocs___boxed(lean_object* v_a_5844_, lean_object* v_a_5845_, lean_object* v_a_5846_){
_start:
{
lean_object* v_res_5847_; 
v_res_5847_ = l_Lean_Meta_Simp_getSimprocs(v_a_5844_, v_a_5845_);
lean_dec(v_a_5845_);
lean_dec_ref(v_a_5844_);
return v_res_5847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSEvalSimprocs___redArg(lean_object* v_a_5848_){
_start:
{
lean_object* v___x_5850_; lean_object* v_env_5851_; lean_object* v___x_5852_; lean_object* v_ext_5853_; lean_object* v_toEnvExtension_5854_; lean_object* v_asyncMode_5855_; lean_object* v___x_5856_; lean_object* v___x_5857_; lean_object* v___x_5858_; 
v___x_5850_ = lean_st_ref_get(v_a_5848_);
v_env_5851_ = lean_ctor_get(v___x_5850_, 0);
lean_inc_ref(v_env_5851_);
lean_dec(v___x_5850_);
v___x_5852_ = l_Lean_Meta_Simp_simprocSEvalExtension;
v_ext_5853_ = lean_ctor_get(v___x_5852_, 1);
v_toEnvExtension_5854_ = lean_ctor_get(v_ext_5853_, 0);
v_asyncMode_5855_ = lean_ctor_get(v_toEnvExtension_5854_, 2);
v___x_5856_ = l_Lean_Meta_Simp_instInhabitedSimprocs_default;
v___x_5857_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5856_, v___x_5852_, v_env_5851_, v_asyncMode_5855_);
v___x_5858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5858_, 0, v___x_5857_);
return v___x_5858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSEvalSimprocs___redArg___boxed(lean_object* v_a_5859_, lean_object* v_a_5860_){
_start:
{
lean_object* v_res_5861_; 
v_res_5861_ = l_Lean_Meta_Simp_getSEvalSimprocs___redArg(v_a_5859_);
lean_dec(v_a_5859_);
return v_res_5861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSEvalSimprocs(lean_object* v_a_5862_, lean_object* v_a_5863_){
_start:
{
lean_object* v___x_5865_; 
v___x_5865_ = l_Lean_Meta_Simp_getSEvalSimprocs___redArg(v_a_5863_);
return v___x_5865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSEvalSimprocs___boxed(lean_object* v_a_5866_, lean_object* v_a_5867_, lean_object* v_a_5868_){
_start:
{
lean_object* v_res_5869_; 
v_res_5869_ = l_Lean_Meta_Simp_getSEvalSimprocs(v_a_5866_, v_a_5867_);
lean_dec(v_a_5867_);
lean_dec_ref(v_a_5866_);
return v_res_5869_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocExtensionCore_x3f(lean_object* v_attrName_5870_){
_start:
{
lean_object* v___x_5872_; lean_object* v___x_5873_; lean_object* v___x_5874_; lean_object* v___x_5875_; 
v___x_5872_ = l_Lean_Meta_Simp_simprocExtensionMapRef;
v___x_5873_ = lean_st_ref_get(v___x_5872_);
v___x_5874_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_Simp_getSimprocDeclKeys_x3f_spec__0___redArg(v___x_5873_, v_attrName_5870_);
lean_dec(v___x_5873_);
v___x_5875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5875_, 0, v___x_5874_);
return v___x_5875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocExtensionCore_x3f___boxed(lean_object* v_attrName_5876_, lean_object* v_a_5877_){
_start:
{
lean_object* v_res_5878_; 
v_res_5878_ = l_Lean_Meta_Simp_getSimprocExtensionCore_x3f(v_attrName_5876_);
lean_dec(v_attrName_5876_);
return v_res_5878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName(lean_object* v_attrName_5885_){
_start:
{
lean_object* v___x_5886_; uint8_t v___x_5887_; 
v___x_5886_ = ((lean_object*)(l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName___closed__0));
v___x_5887_ = lean_name_eq(v_attrName_5885_, v___x_5886_);
if (v___x_5887_ == 0)
{
lean_object* v___x_5888_; uint8_t v___x_5889_; 
v___x_5888_ = ((lean_object*)(l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName___closed__2));
v___x_5889_ = lean_name_eq(v_attrName_5885_, v___x_5888_);
if (v___x_5889_ == 0)
{
lean_object* v___x_5890_; lean_object* v___x_5891_; 
v___x_5890_ = ((lean_object*)(l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName___closed__3));
v___x_5891_ = lean_name_append_after(v_attrName_5885_, v___x_5890_);
return v___x_5891_;
}
else
{
lean_object* v___x_5892_; 
lean_dec(v_attrName_5885_);
v___x_5892_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2_));
return v___x_5892_;
}
}
else
{
lean_object* v___x_5893_; 
lean_dec(v_attrName_5885_);
v___x_5893_ = ((lean_object*)(l_Lean_Meta_Simp_initFn___closed__1_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2_));
return v___x_5893_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocExtension_x3f(lean_object* v_simprocAttrNameOrsimpAttrName_5894_){
_start:
{
lean_object* v___x_5896_; lean_object* v_a_5897_; 
v___x_5896_ = l_Lean_Meta_Simp_getSimprocExtensionCore_x3f(v_simprocAttrNameOrsimpAttrName_5894_);
v_a_5897_ = lean_ctor_get(v___x_5896_, 0);
lean_inc(v_a_5897_);
if (lean_obj_tag(v_a_5897_) == 1)
{
lean_dec_ref(v_a_5897_);
lean_dec(v_simprocAttrNameOrsimpAttrName_5894_);
return v___x_5896_;
}
else
{
lean_object* v___x_5898_; lean_object* v___x_5899_; 
lean_dec(v_a_5897_);
lean_dec_ref(v___x_5896_);
v___x_5898_ = l_Lean_Meta_Simp_simpAttrNameToSimprocAttrName(v_simprocAttrNameOrsimpAttrName_5894_);
v___x_5899_ = l_Lean_Meta_Simp_getSimprocExtensionCore_x3f(v___x_5898_);
lean_dec(v___x_5898_);
return v___x_5899_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_getSimprocExtension_x3f___boxed(lean_object* v_simprocAttrNameOrsimpAttrName_5900_, lean_object* v_a_5901_){
_start:
{
lean_object* v_res_5902_; 
v_res_5902_ = l_Lean_Meta_Simp_getSimprocExtension_x3f(v_simprocAttrNameOrsimpAttrName_5900_);
return v_res_5902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocExtension_getSimprocs___redArg(lean_object* v_ext_5903_, lean_object* v_a_5904_){
_start:
{
lean_object* v___x_5906_; lean_object* v_ext_5907_; lean_object* v_toEnvExtension_5908_; lean_object* v_env_5909_; lean_object* v_asyncMode_5910_; lean_object* v___x_5911_; lean_object* v___x_5912_; lean_object* v___x_5913_; 
v___x_5906_ = lean_st_ref_get(v_a_5904_);
v_ext_5907_ = lean_ctor_get(v_ext_5903_, 1);
v_toEnvExtension_5908_ = lean_ctor_get(v_ext_5907_, 0);
v_env_5909_ = lean_ctor_get(v___x_5906_, 0);
lean_inc_ref(v_env_5909_);
lean_dec(v___x_5906_);
v_asyncMode_5910_ = lean_ctor_get(v_toEnvExtension_5908_, 2);
v___x_5911_ = l_Lean_Meta_Simp_instInhabitedSimprocs_default;
v___x_5912_ = l_Lean_ScopedEnvExtension_getState___redArg(v___x_5911_, v_ext_5903_, v_env_5909_, v_asyncMode_5910_);
v___x_5913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5913_, 0, v___x_5912_);
return v___x_5913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocExtension_getSimprocs___redArg___boxed(lean_object* v_ext_5914_, lean_object* v_a_5915_, lean_object* v_a_5916_){
_start:
{
lean_object* v_res_5917_; 
v_res_5917_ = l_Lean_Meta_Simp_SimprocExtension_getSimprocs___redArg(v_ext_5914_, v_a_5915_);
lean_dec(v_a_5915_);
lean_dec_ref(v_ext_5914_);
return v_res_5917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocExtension_getSimprocs(lean_object* v_ext_5918_, lean_object* v_a_5919_, lean_object* v_a_5920_){
_start:
{
lean_object* v___x_5922_; 
v___x_5922_ = l_Lean_Meta_Simp_SimprocExtension_getSimprocs___redArg(v_ext_5918_, v_a_5920_);
return v___x_5922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Simp_SimprocExtension_getSimprocs___boxed(lean_object* v_ext_5923_, lean_object* v_a_5924_, lean_object* v_a_5925_, lean_object* v_a_5926_){
_start:
{
lean_object* v_res_5927_; 
v_res_5927_ = l_Lean_Meta_Simp_SimprocExtension_getSimprocs(v_ext_5923_, v_a_5924_, v_a_5925_);
lean_dec(v_a_5925_);
lean_dec_ref(v_a_5924_);
lean_dec_ref(v_ext_5923_);
return v_res_5927_;
}
}
lean_object* runtime_initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Simproc(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default = _init_l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default();
lean_mark_persistent(l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs_default);
l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs = _init_l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs();
lean_mark_persistent(l_Lean_Meta_Simp_instInhabitedBuiltinSimprocs);
res = l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1481072680____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Simp_builtinSimprocDeclsRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Simp_builtinSimprocDeclsRef);
lean_dec_ref(res);
l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default = _init_l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default();
lean_mark_persistent(l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState_default);
l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState = _init_l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState();
lean_mark_persistent(l_Lean_Meta_Simp_instInhabitedSimprocDeclExtState);
res = l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1881898657____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Simp_simprocDeclExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Simp_simprocDeclExt);
lean_dec_ref(res);
res = l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_4225812397____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Simp_builtinSimprocsRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Simp_builtinSimprocsRef);
lean_dec_ref(res);
res = l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1207380286____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Simp_builtinSEvalprocsRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Simp_builtinSEvalprocsRef);
lean_dec_ref(res);
res = l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1784667116____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Simp_simprocs = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Simp_simprocs);
lean_dec_ref(res);
res = l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_2499117766____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Simp_simprocExtensionMapRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Simp_simprocExtensionMapRef);
lean_dec_ref(res);
res = l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_3132623482____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Simp_simprocExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Simp_simprocExtension);
lean_dec_ref(res);
res = l_Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_302158981____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Meta_Simp_simprocSEvalExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Meta_Simp_simprocSEvalExtension);
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1616411946____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Simp_Simproc_0__Lean_Meta_Simp_initFn_00___x40_Lean_Meta_Tactic_Simp_Simproc_1544969214____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Simp_Simproc(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Meta_Simp_mkSimprocExt___auto__1 = _init_l_Lean_Meta_Simp_mkSimprocExt___auto__1();
lean_mark_persistent(l_Lean_Meta_Simp_mkSimprocExt___auto__1);
l_Lean_Meta_Simp_registerSimprocAttr___auto__1 = _init_l_Lean_Meta_Simp_registerSimprocAttr___auto__1();
lean_mark_persistent(l_Lean_Meta_Simp_registerSimprocAttr___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_InitAttr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Simp_Types(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Simp_Simproc(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_InitAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Simp_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Simp_Simproc(builtin);
}
#ifdef __cplusplus
}
#endif
