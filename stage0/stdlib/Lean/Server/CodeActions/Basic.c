// Lean compiler output
// Module: Lean.Server.CodeActions.Basic
// Imports: public import Lean.Server.Requests
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
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Name_quickLt___boxed(lean_object*, lean_object*);
lean_object* l_Array_qpartition___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* l_Lean_initializing();
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
extern lean_object* l_Lean_Server_requestHandlers;
lean_object* lean_st_ref_get(lean_object*);
uint64_t lean_string_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonCodeActionParams_fromJson(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Lsp_instToJsonCodeAction_toJson(lean_object*);
lean_object* l_Lean_Server_ServerTask_mapCheap___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Name_fromJson_x3f(lean_object*);
lean_object* l_Lean_Lsp_instFromJsonCodeAction_fromJson(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Server_RequestError_internalError(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
extern lean_object* l_Lean_Server_instInhabitedRequestError_default;
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_indentExpr(lean_object*);
extern lean_object* l_Lean_Elab_abortCommandExceptionId;
lean_object* l_Lean_Server_Snapshots_Snapshot_endPos(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_has_compile_error(lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConstCheck___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Server_RequestM_runCoreM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_RequestM_checkCancelled(lean_object*);
lean_object* l_Lean_Lsp_instToJsonCodeActionParams_toJson(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* l_Lean_FileMap_lspPosToUtf8Pos(lean_object*, lean_object*);
lean_object* l_Lean_Server_RequestM_withWaitFindSnap___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l___private_Lean_ToExpr_0__Lean_Name_toExprAux(lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_declareBuiltin(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Attribute_Builtin_ensureNoArgs(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t, uint8_t);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_ensureAttrDeclIsMeta(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Server_RequestError_ofIoError(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Server_RequestError_invalidParams(lean_object*);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* l_Lean_evalConstCheck___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Server_instToJsonCodeActionResolveData_toJson_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "params"};
static const lean_object* l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__0 = (const lean_object*)&l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__0_value;
static const lean_string_object l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "providerName"};
static const lean_object* l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__1 = (const lean_object*)&l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__1_value;
static const lean_string_object l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "providerResultIndex"};
static const lean_object* l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__2 = (const lean_object*)&l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__2_value;
static const lean_array_object l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__3 = (const lean_object*)&l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Server_instToJsonCodeActionResolveData_toJson(lean_object*);
static const lean_closure_object l_Lean_Server_instToJsonCodeActionResolveData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_instToJsonCodeActionResolveData_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instToJsonCodeActionResolveData___closed__0 = (const lean_object*)&l_Lean_Server_instToJsonCodeActionResolveData___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_instToJsonCodeActionResolveData = (const lean_object*)&l_Lean_Server_instToJsonCodeActionResolveData___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonCodeActionResolveData_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonCodeActionResolveData_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonCodeActionResolveData_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonCodeActionResolveData_fromJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonCodeActionResolveData_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonCodeActionResolveData_fromJson_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__0 = (const lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__0_value;
static const lean_string_object l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Server"};
static const lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__1 = (const lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__1_value;
static const lean_string_object l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "CodeActionResolveData"};
static const lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__2 = (const lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__2_value;
static const lean_ctor_object l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__3_value_aux_0),((lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__3_value_aux_1),((lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(41, 163, 251, 30, 79, 190, 187, 231)}};
static const lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__3 = (const lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__3_value;
static lean_once_cell_t l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__4;
static const lean_string_object l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__5 = (const lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__5_value;
static lean_once_cell_t l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__6;
static const lean_ctor_object l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 17, 68, 35, 208, 145, 117, 163)}};
static const lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__7 = (const lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__7_value;
static lean_once_cell_t l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__8;
static lean_once_cell_t l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__9;
static const lean_string_object l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__10 = (const lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__10_value;
static lean_once_cell_t l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__11;
static const lean_ctor_object l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(160, 181, 198, 121, 111, 102, 201, 148)}};
static const lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__12 = (const lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__12_value;
static lean_once_cell_t l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__13;
static lean_once_cell_t l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__14;
static lean_once_cell_t l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__15;
static const lean_ctor_object l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__2_value),LEAN_SCALAR_PTR_LITERAL(68, 69, 136, 239, 46, 100, 203, 21)}};
static const lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__16 = (const lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__16_value;
static lean_once_cell_t l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__17;
static lean_once_cell_t l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__18;
static lean_once_cell_t l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__19;
LEAN_EXPORT lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson(lean_object*);
static const lean_closure_object l_Lean_Server_instFromJsonCodeActionResolveData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_instFromJsonCodeActionResolveData_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instFromJsonCodeActionResolveData___closed__0 = (const lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_instFromJsonCodeActionResolveData = (const lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData___closed__0_value;
static const lean_string_object l_panic___at___00Lean_Server_CodeAction_getFileSource_x21_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_panic___at___00Lean_Server_CodeAction_getFileSource_x21_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_Server_CodeAction_getFileSource_x21_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_CodeAction_getFileSource_x21_spec__0(lean_object*);
static const lean_string_object l_Lean_Server_CodeAction_getFileSource_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.Server.CodeActions.Basic"};
static const lean_object* l_Lean_Server_CodeAction_getFileSource_x21___closed__0 = (const lean_object*)&l_Lean_Server_CodeAction_getFileSource_x21___closed__0_value;
static const lean_string_object l_Lean_Server_CodeAction_getFileSource_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Server.CodeAction.getFileSource!"};
static const lean_object* l_Lean_Server_CodeAction_getFileSource_x21___closed__1 = (const lean_object*)&l_Lean_Server_CodeAction_getFileSource_x21___closed__1_value;
static const lean_string_object l_Lean_Server_CodeAction_getFileSource_x21___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "no data param on code action "};
static const lean_object* l_Lean_Server_CodeAction_getFileSource_x21___closed__2 = (const lean_object*)&l_Lean_Server_CodeAction_getFileSource_x21___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Server_CodeAction_getFileSource_x21(lean_object*);
static const lean_closure_object l_Lean_Server_instFileSourceCodeAction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_CodeAction_getFileSource_x21, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instFileSourceCodeAction___closed__0 = (const lean_object*)&l_Lean_Server_instFileSourceCodeAction___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_instFileSourceCodeAction = (const lean_object*)&l_Lean_Server_instFileSourceCodeAction___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_instCoeCodeActionLazyCodeAction___lam__0(lean_object*);
static const lean_closure_object l_Lean_Server_instCoeCodeActionLazyCodeAction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_instCoeCodeActionLazyCodeAction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instCoeCodeActionLazyCodeAction___closed__0 = (const lean_object*)&l_Lean_Server_instCoeCodeActionLazyCodeAction___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_instCoeCodeActionLazyCodeAction = (const lean_object*)&l_Lean_Server_instCoeCodeActionLazyCodeAction___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedCodeActionProvider___aux__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedCodeActionProvider___aux__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedCodeActionProvider___aux__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedCodeActionProvider___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedCodeActionProvider___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedCodeActionProvider___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_instInhabitedCodeActionProvider___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_instInhabitedCodeActionProvider___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_instInhabitedCodeActionProvider___closed__0 = (const lean_object*)&l_Lean_Server_instInhabitedCodeActionProvider___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Server_instInhabitedCodeActionProvider = (const lean_object*)&l_Lean_Server_instInhabitedCodeActionProvider___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_2573400817____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_2573400817____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_builtinCodeActionProviders;
LEAN_EXPORT lean_object* l_Lean_Server_addBuiltinCodeActionProvider(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_addBuiltinCodeActionProvider___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_initFn___lam__0_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_initFn___lam__0_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2____boxed(lean_object*);
static const lean_closure_object l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_quickLt___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_initFn___lam__1_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2_(lean_object*);
static const lean_closure_object l_Lean_Server_initFn___closed__0_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameSet_insert, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_initFn___closed__0_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Server_initFn___closed__0_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Server_initFn___closed__1_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_initFn___lam__0_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_initFn___closed__1_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Server_initFn___closed__1_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value;
static const lean_closure_object l_Lean_Server_initFn___closed__2_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_initFn___lam__1_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_initFn___closed__2_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Server_initFn___closed__2_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value;
static const lean_string_object l_Lean_Server_initFn___closed__3_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "codeActionProviderExt"};
static const lean_object* l_Lean_Server_initFn___closed__3_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Server_initFn___closed__3_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Server_initFn___closed__4_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Server_initFn___closed__4_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_initFn___closed__4_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l_Lean_Server_initFn___closed__4_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Server_initFn___closed__4_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Server_initFn___closed__3_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(0, 40, 10, 229, 67, 12, 129, 142)}};
static const lean_object* l_Lean_Server_initFn___closed__4_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Server_initFn___closed__4_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value;
static const lean_ctor_object l_Lean_Server_initFn___closed__5_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Server_initFn___closed__4_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Server_initFn___closed__0_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Server_initFn___closed__1_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Server_initFn___closed__2_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Server_initFn___closed__5_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2_ = (const lean_object*)&l_Lean_Server_initFn___closed__5_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l_Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l_Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_codeActionProviderExt;
static lean_once_cell_t l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__3_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__3_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Invalid attribute scope: Attribute `["};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "]` must be global, not `"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__5;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "global"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__6 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__6_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__7 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__7_value;
static const lean_string_object l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "scoped"};
static const lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__8 = (const lean_object*)&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Cannot add attribute `["};
static const lean_object* l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__1;
static const lean_string_object l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "]`: Declaration `"};
static const lean_object* l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__3;
static const lean_string_object l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "` has type"};
static const lean_object* l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__4 = (const lean_object*)&l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__4_value;
static lean_once_cell_t l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__5;
static const lean_string_object l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "\nbut `["};
static const lean_object* l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__6 = (const lean_object*)&l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__6_value;
static lean_once_cell_t l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__7;
static const lean_string_object l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "]` can only be added to declarations of type"};
static const lean_object* l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__8 = (const lean_object*)&l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__8_value;
static lean_once_cell_t l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__9;
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1___closed__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "addBuiltinCodeActionProvider"};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1___closed__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1___closed__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "CodeActionProvider"};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1___closed__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1___closed__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1___closed__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1___closed__3_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1___closed__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1___closed__3_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1___closed__3_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__3_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(79, 45, 83, 138, 97, 177, 55, 171)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__3_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__3_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__4_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "CodeActions"};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__4_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__4_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__5_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__3_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__4_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(41, 109, 98, 186, 215, 54, 31, 240)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__5_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__5_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__6_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Basic"};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__6_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__6_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__7_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__5_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__6_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(30, 156, 164, 13, 237, 167, 211, 120)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__7_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__7_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__8_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__7_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(231, 236, 211, 153, 183, 200, 194, 142)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__8_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__8_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__9_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__8_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(218, 170, 13, 173, 36, 216, 196, 218)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__9_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__9_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__10_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__9_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(207, 127, 135, 167, 105, 120, 107, 85)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__10_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__10_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__11_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__11_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__11_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__12_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__10_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__11_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(78, 126, 20, 13, 61, 118, 74, 86)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__12_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__12_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__13_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__13_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__13_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__14_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__12_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__13_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(79, 190, 141, 117, 213, 113, 13, 74)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__14_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__14_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__15_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__14_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(98, 52, 0, 130, 198, 230, 46, 197)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__15_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__15_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__16_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__15_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(71, 157, 19, 223, 35, 0, 13, 34)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__16_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__16_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__17_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__16_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__4_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(209, 137, 0, 217, 239, 233, 195, 40)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__17_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__17_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__18_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__17_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__6_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(54, 243, 113, 54, 127, 25, 120, 16)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__18_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__18_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__19_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__18_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1656927832) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(147, 227, 181, 202, 147, 137, 254, 160)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__19_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__19_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__20_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__20_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__20_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__21_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__19_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__20_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 144, 64, 31, 165, 31, 253, 43)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__21_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__21_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__22_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__22_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__22_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__23_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__21_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__22_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(76, 113, 109, 139, 146, 133, 143, 148)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__23_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__23_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__24_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__23_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(117, 166, 231, 135, 42, 93, 24, 222)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__24_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__24_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__25_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 108, .m_capacity = 108, .m_length = 107, .m_data = "Use to decorate methods for suggesting code actions. This is a low-level interface for making code actions."};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__25_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__25_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__26_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "(builtin) "};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__26_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__26_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "builtin_code_action_provider"};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 9, 40, 2, 206, 24, 214, 24)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "code_action_provider"};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__3_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(33, 50, 164, 33, 247, 115, 55, 128)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__3_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__3_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___redArg___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___redArg___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___redArg___closed__0_value_aux_0),((lean_object*)&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__1_value),LEAN_SCALAR_PTR_LITERAL(251, 1, 140, 35, 91, 244, 83, 213)}};
static const lean_ctor_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___redArg___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(110, 233, 106, 27, 160, 7, 34, 38)}};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___redArg___closed__0 = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Server_handleCodeAction_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Server_handleCodeAction_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Server_handleCodeAction_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Server_handleCodeAction_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__6___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__6___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__6___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_handleCodeAction_spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_handleCodeAction_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_handleCodeAction_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeAction___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeAction___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Server_handleCodeAction_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Server_handleCodeAction_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_handleCodeAction_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_handleCodeAction_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Server_handleCodeAction___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_handleCodeAction___lam__1___closed__0 = (const lean_object*)&l_Lean_Server_handleCodeAction___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeAction___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeAction___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_handleCodeAction___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeAction___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeAction___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeAction___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Server_handleCodeAction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_handleCodeAction___lam__0___boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Server_handleCodeAction___closed__0 = (const lean_object*)&l_Lean_Server_handleCodeAction___closed__0_value;
static const lean_array_object l_Lean_Server_handleCodeAction___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Server_handleCodeAction___closed__1 = (const lean_object*)&l_Lean_Server_handleCodeAction___closed__1_value;
static const lean_closure_object l_Lean_Server_handleCodeAction___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_handleCodeAction___lam__3___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Server_handleCodeAction___closed__1_value)} };
static const lean_object* l_Lean_Server_handleCodeAction___closed__2 = (const lean_object*)&l_Lean_Server_handleCodeAction___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeAction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeAction___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Server_handleCodeAction_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Server_handleCodeAction_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_handleCodeAction_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__2_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_toJson___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___lam__1(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__10___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Cannot parse request params: "};
static const lean_object* l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___lam__0(lean_object*);
static const lean_string_object l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Failed to register LSP request handler for '"};
static const lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__0 = (const lean_object*)&l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__0_value;
static const lean_string_object l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "': only possible during initialization"};
static const lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__1 = (const lean_object*)&l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__1_value;
static const lean_closure_object l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__2 = (const lean_object*)&l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__2_value;
static const lean_string_object l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "': already registered"};
static const lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__3 = (const lean_object*)&l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "textDocument/codeAction"};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_handleCodeAction___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__10(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_handleCodeActionResolve___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Failed to resolve code action index "};
static const lean_object* l_Lean_Server_handleCodeActionResolve___lam__0___closed__0 = (const lean_object*)&l_Lean_Server_handleCodeActionResolve___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeActionResolve___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeActionResolve___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeActionResolve___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeActionResolve___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_handleCodeActionResolve_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_handleCodeActionResolve_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_handleCodeActionResolve_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Server_handleCodeActionResolve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "snapshot not found"};
static const lean_object* l_Lean_Server_handleCodeActionResolve___closed__0 = (const lean_object*)&l_Lean_Server_handleCodeActionResolve___closed__0_value;
static lean_once_cell_t l_Lean_Server_handleCodeActionResolve___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_handleCodeActionResolve___closed__1;
static lean_once_cell_t l_Lean_Server_handleCodeActionResolve___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_handleCodeActionResolve___closed__2;
static const lean_string_object l_Lean_Server_handleCodeActionResolve___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Expected a data field on CodeAction."};
static const lean_object* l_Lean_Server_handleCodeActionResolve___closed__3 = (const lean_object*)&l_Lean_Server_handleCodeActionResolve___closed__3_value;
static lean_once_cell_t l_Lean_Server_handleCodeActionResolve___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_handleCodeActionResolve___closed__4;
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeActionResolve(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeActionResolve___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_handleCodeActionResolve_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_handleCodeActionResolve_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___lam__1(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___lam__0(lean_object*);
static const lean_closure_object l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___closed__0 = (const lean_object*)&l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "codeAction/resolve"};
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Server_handleCodeActionResolve___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Server_instToJsonCodeActionResolveData_toJson_spec__0(lean_object* v_a_1_, lean_object* v_a_2_){
_start:
{
if (lean_obj_tag(v_a_1_) == 0)
{
lean_object* v___x_3_; 
v___x_3_ = lean_array_to_list(v_a_2_);
return v___x_3_;
}
else
{
lean_object* v_head_4_; lean_object* v_tail_5_; lean_object* v___x_6_; 
v_head_4_ = lean_ctor_get(v_a_1_, 0);
lean_inc(v_head_4_);
v_tail_5_ = lean_ctor_get(v_a_1_, 1);
lean_inc(v_tail_5_);
lean_dec_ref(v_a_1_);
v___x_6_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2_, v_head_4_);
v_a_1_ = v_tail_5_;
v_a_2_ = v___x_6_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instToJsonCodeActionResolveData_toJson(lean_object* v_x_13_){
_start:
{
lean_object* v_params_14_; lean_object* v_providerName_15_; lean_object* v_providerResultIndex_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; uint8_t v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v_params_14_ = lean_ctor_get(v_x_13_, 0);
lean_inc_ref(v_params_14_);
v_providerName_15_ = lean_ctor_get(v_x_13_, 1);
lean_inc(v_providerName_15_);
v_providerResultIndex_16_ = lean_ctor_get(v_x_13_, 2);
lean_inc(v_providerResultIndex_16_);
lean_dec_ref(v_x_13_);
v___x_17_ = ((lean_object*)(l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__0));
v___x_18_ = l_Lean_Lsp_instToJsonCodeActionParams_toJson(v_params_14_);
v___x_19_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_19_, 0, v___x_17_);
lean_ctor_set(v___x_19_, 1, v___x_18_);
v___x_20_ = lean_box(0);
v___x_21_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_21_, 0, v___x_19_);
lean_ctor_set(v___x_21_, 1, v___x_20_);
v___x_22_ = ((lean_object*)(l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__1));
v___x_23_ = 1;
v___x_24_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_providerName_15_, v___x_23_);
v___x_25_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_25_, 0, v___x_24_);
v___x_26_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_26_, 0, v___x_22_);
lean_ctor_set(v___x_26_, 1, v___x_25_);
v___x_27_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
lean_ctor_set(v___x_27_, 1, v___x_20_);
v___x_28_ = ((lean_object*)(l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__2));
v___x_29_ = l_Lean_JsonNumber_fromNat(v_providerResultIndex_16_);
v___x_30_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
v___x_31_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_31_, 0, v___x_28_);
lean_ctor_set(v___x_31_, 1, v___x_30_);
v___x_32_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
lean_ctor_set(v___x_32_, 1, v___x_20_);
v___x_33_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
lean_ctor_set(v___x_33_, 1, v___x_20_);
v___x_34_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_34_, 0, v___x_27_);
lean_ctor_set(v___x_34_, 1, v___x_33_);
v___x_35_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_35_, 0, v___x_21_);
lean_ctor_set(v___x_35_, 1, v___x_34_);
v___x_36_ = ((lean_object*)(l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__3));
v___x_37_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_Server_instToJsonCodeActionResolveData_toJson_spec__0(v___x_35_, v___x_36_);
v___x_38_ = l_Lean_Json_mkObj(v___x_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonCodeActionResolveData_fromJson_spec__0(lean_object* v_j_41_, lean_object* v_k_42_){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = l_Lean_Json_getObjValD(v_j_41_, v_k_42_);
v___x_44_ = l_Lean_Lsp_instFromJsonCodeActionParams_fromJson(v___x_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonCodeActionResolveData_fromJson_spec__0___boxed(lean_object* v_j_45_, lean_object* v_k_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonCodeActionResolveData_fromJson_spec__0(v_j_45_, v_k_46_);
lean_dec_ref(v_k_46_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonCodeActionResolveData_fromJson_spec__1(lean_object* v_j_48_, lean_object* v_k_49_){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = l_Lean_Json_getObjValD(v_j_48_, v_k_49_);
v___x_51_ = l_Lean_Name_fromJson_x3f(v___x_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonCodeActionResolveData_fromJson_spec__1___boxed(lean_object* v_j_52_, lean_object* v_k_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonCodeActionResolveData_fromJson_spec__1(v_j_52_, v_k_53_);
lean_dec_ref(v_k_53_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonCodeActionResolveData_fromJson_spec__2(lean_object* v_j_55_, lean_object* v_k_56_){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_57_ = l_Lean_Json_getObjValD(v_j_55_, v_k_56_);
v___x_58_ = l_Lean_Json_getNat_x3f(v___x_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonCodeActionResolveData_fromJson_spec__2___boxed(lean_object* v_j_59_, lean_object* v_k_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonCodeActionResolveData_fromJson_spec__2(v_j_59_, v_k_60_);
lean_dec_ref(v_k_60_);
return v_res_61_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__4(void){
_start:
{
uint8_t v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_69_ = 1;
v___x_70_ = ((lean_object*)(l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__3));
v___x_71_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_70_, v___x_69_);
return v___x_71_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__6(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_73_ = ((lean_object*)(l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__5));
v___x_74_ = lean_obj_once(&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__4, &l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__4_once, _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__4);
v___x_75_ = lean_string_append(v___x_74_, v___x_73_);
return v___x_75_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__8(void){
_start:
{
uint8_t v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_78_ = 1;
v___x_79_ = ((lean_object*)(l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__7));
v___x_80_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_79_, v___x_78_);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__9(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_81_ = lean_obj_once(&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__8, &l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__8_once, _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__8);
v___x_82_ = lean_obj_once(&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__6, &l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__6_once, _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__6);
v___x_83_ = lean_string_append(v___x_82_, v___x_81_);
return v___x_83_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__11(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_85_ = ((lean_object*)(l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__10));
v___x_86_ = lean_obj_once(&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__9, &l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__9_once, _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__9);
v___x_87_ = lean_string_append(v___x_86_, v___x_85_);
return v___x_87_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__13(void){
_start:
{
uint8_t v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = 1;
v___x_91_ = ((lean_object*)(l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__12));
v___x_92_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_91_, v___x_90_);
return v___x_92_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__14(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_93_ = lean_obj_once(&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__13, &l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__13_once, _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__13);
v___x_94_ = lean_obj_once(&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__6, &l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__6_once, _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__6);
v___x_95_ = lean_string_append(v___x_94_, v___x_93_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__15(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = ((lean_object*)(l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__10));
v___x_97_ = lean_obj_once(&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__14, &l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__14_once, _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__14);
v___x_98_ = lean_string_append(v___x_97_, v___x_96_);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__17(void){
_start:
{
uint8_t v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_101_ = 1;
v___x_102_ = ((lean_object*)(l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__16));
v___x_103_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_102_, v___x_101_);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__18(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_104_ = lean_obj_once(&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__17, &l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__17_once, _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__17);
v___x_105_ = lean_obj_once(&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__6, &l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__6_once, _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__6);
v___x_106_ = lean_string_append(v___x_105_, v___x_104_);
return v___x_106_;
}
}
static lean_object* _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__19(void){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = ((lean_object*)(l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__10));
v___x_108_ = lean_obj_once(&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__18, &l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__18_once, _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__18);
v___x_109_ = lean_string_append(v___x_108_, v___x_107_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instFromJsonCodeActionResolveData_fromJson(lean_object* v_json_110_){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_111_ = ((lean_object*)(l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__0));
lean_inc(v_json_110_);
v___x_112_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonCodeActionResolveData_fromJson_spec__0(v_json_110_, v___x_111_);
if (lean_obj_tag(v___x_112_) == 0)
{
lean_object* v_a_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_122_; 
lean_dec(v_json_110_);
v_a_113_ = lean_ctor_get(v___x_112_, 0);
v_isSharedCheck_122_ = !lean_is_exclusive(v___x_112_);
if (v_isSharedCheck_122_ == 0)
{
v___x_115_ = v___x_112_;
v_isShared_116_ = v_isSharedCheck_122_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_a_113_);
lean_dec(v___x_112_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_122_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_120_; 
v___x_117_ = lean_obj_once(&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__11, &l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__11_once, _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__11);
v___x_118_ = lean_string_append(v___x_117_, v_a_113_);
lean_dec(v_a_113_);
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 0, v___x_118_);
v___x_120_ = v___x_115_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v___x_118_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
return v___x_120_;
}
}
}
else
{
if (lean_obj_tag(v___x_112_) == 0)
{
lean_object* v_a_123_; lean_object* v___x_125_; uint8_t v_isShared_126_; uint8_t v_isSharedCheck_130_; 
lean_dec(v_json_110_);
v_a_123_ = lean_ctor_get(v___x_112_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_112_);
if (v_isSharedCheck_130_ == 0)
{
v___x_125_ = v___x_112_;
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
else
{
lean_inc(v_a_123_);
lean_dec(v___x_112_);
v___x_125_ = lean_box(0);
v_isShared_126_ = v_isSharedCheck_130_;
goto v_resetjp_124_;
}
v_resetjp_124_:
{
lean_object* v___x_128_; 
if (v_isShared_126_ == 0)
{
lean_ctor_set_tag(v___x_125_, 0);
v___x_128_ = v___x_125_;
goto v_reusejp_127_;
}
else
{
lean_object* v_reuseFailAlloc_129_; 
v_reuseFailAlloc_129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_129_, 0, v_a_123_);
v___x_128_ = v_reuseFailAlloc_129_;
goto v_reusejp_127_;
}
v_reusejp_127_:
{
return v___x_128_;
}
}
}
else
{
lean_object* v_a_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v_a_131_ = lean_ctor_get(v___x_112_, 0);
lean_inc(v_a_131_);
lean_dec_ref(v___x_112_);
v___x_132_ = ((lean_object*)(l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__1));
lean_inc(v_json_110_);
v___x_133_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonCodeActionResolveData_fromJson_spec__1(v_json_110_, v___x_132_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v_a_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_143_; 
lean_dec(v_a_131_);
lean_dec(v_json_110_);
v_a_134_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_143_ == 0)
{
v___x_136_ = v___x_133_;
v_isShared_137_ = v_isSharedCheck_143_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_a_134_);
lean_dec(v___x_133_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_143_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_141_; 
v___x_138_ = lean_obj_once(&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__15, &l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__15_once, _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__15);
v___x_139_ = lean_string_append(v___x_138_, v_a_134_);
lean_dec(v_a_134_);
if (v_isShared_137_ == 0)
{
lean_ctor_set(v___x_136_, 0, v___x_139_);
v___x_141_ = v___x_136_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v___x_139_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
else
{
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v_a_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_151_; 
lean_dec(v_a_131_);
lean_dec(v_json_110_);
v_a_144_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_151_ == 0)
{
v___x_146_ = v___x_133_;
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_a_144_);
lean_dec(v___x_133_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_151_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_149_; 
if (v_isShared_147_ == 0)
{
lean_ctor_set_tag(v___x_146_, 0);
v___x_149_ = v___x_146_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_a_144_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
}
else
{
lean_object* v_a_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v_a_152_ = lean_ctor_get(v___x_133_, 0);
lean_inc(v_a_152_);
lean_dec_ref(v___x_133_);
v___x_153_ = ((lean_object*)(l_Lean_Server_instToJsonCodeActionResolveData_toJson___closed__2));
v___x_154_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_Server_instFromJsonCodeActionResolveData_fromJson_spec__2(v_json_110_, v___x_153_);
if (lean_obj_tag(v___x_154_) == 0)
{
lean_object* v_a_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_164_; 
lean_dec(v_a_152_);
lean_dec(v_a_131_);
v_a_155_ = lean_ctor_get(v___x_154_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_164_ == 0)
{
v___x_157_ = v___x_154_;
v_isShared_158_ = v_isSharedCheck_164_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_a_155_);
lean_dec(v___x_154_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_164_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_162_; 
v___x_159_ = lean_obj_once(&l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__19, &l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__19_once, _init_l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__19);
v___x_160_ = lean_string_append(v___x_159_, v_a_155_);
lean_dec(v_a_155_);
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 0, v___x_160_);
v___x_162_ = v___x_157_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v___x_160_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
else
{
if (lean_obj_tag(v___x_154_) == 0)
{
lean_object* v_a_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_172_; 
lean_dec(v_a_152_);
lean_dec(v_a_131_);
v_a_165_ = lean_ctor_get(v___x_154_, 0);
v_isSharedCheck_172_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_172_ == 0)
{
v___x_167_ = v___x_154_;
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_a_165_);
lean_dec(v___x_154_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_170_; 
if (v_isShared_168_ == 0)
{
lean_ctor_set_tag(v___x_167_, 0);
v___x_170_ = v___x_167_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_a_165_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
}
else
{
lean_object* v_a_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_181_; 
v_a_173_ = lean_ctor_get(v___x_154_, 0);
v_isSharedCheck_181_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_181_ == 0)
{
v___x_175_ = v___x_154_;
v_isShared_176_ = v_isSharedCheck_181_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_a_173_);
lean_dec(v___x_154_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_181_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_177_; lean_object* v___x_179_; 
v___x_177_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_177_, 0, v_a_131_);
lean_ctor_set(v___x_177_, 1, v_a_152_);
lean_ctor_set(v___x_177_, 2, v_a_173_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 0, v___x_177_);
v___x_179_ = v___x_175_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v___x_177_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
return v___x_179_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Server_CodeAction_getFileSource_x21_spec__0(lean_object* v_msg_185_){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = ((lean_object*)(l_panic___at___00Lean_Server_CodeAction_getFileSource_x21_spec__0___closed__0));
v___x_187_ = lean_panic_fn(v___x_186_, v_msg_185_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_CodeAction_getFileSource_x21(lean_object* v_ca_191_){
_start:
{
lean_object* v_a_193_; lean_object* v_data_x3f_200_; 
v_data_x3f_200_ = lean_ctor_get(v_ca_191_, 9);
if (lean_obj_tag(v_data_x3f_200_) == 1)
{
lean_object* v_val_201_; lean_object* v___x_202_; 
lean_inc_ref(v_data_x3f_200_);
lean_dec_ref(v_ca_191_);
v_val_201_ = lean_ctor_get(v_data_x3f_200_, 0);
lean_inc(v_val_201_);
lean_dec_ref(v_data_x3f_200_);
v___x_202_ = l_Lean_Server_instFromJsonCodeActionResolveData_fromJson(v_val_201_);
if (lean_obj_tag(v___x_202_) == 0)
{
lean_object* v_a_203_; 
v_a_203_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_a_203_);
lean_dec_ref(v___x_202_);
v_a_193_ = v_a_203_;
goto v___jp_192_;
}
else
{
lean_object* v_a_204_; lean_object* v_params_205_; lean_object* v_textDocument_206_; 
v_a_204_ = lean_ctor_get(v___x_202_, 0);
lean_inc(v_a_204_);
lean_dec_ref(v___x_202_);
v_params_205_ = lean_ctor_get(v_a_204_, 0);
lean_inc_ref(v_params_205_);
lean_dec(v_a_204_);
v_textDocument_206_ = lean_ctor_get(v_params_205_, 2);
lean_inc_ref(v_textDocument_206_);
lean_dec_ref(v_params_205_);
return v_textDocument_206_;
}
}
else
{
lean_object* v_title_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v_title_207_ = lean_ctor_get(v_ca_191_, 2);
lean_inc_ref(v_title_207_);
lean_dec_ref(v_ca_191_);
v___x_208_ = ((lean_object*)(l_Lean_Server_CodeAction_getFileSource_x21___closed__2));
v___x_209_ = lean_string_append(v___x_208_, v_title_207_);
lean_dec_ref(v_title_207_);
v_a_193_ = v___x_209_;
goto v___jp_192_;
}
v___jp_192_:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_194_ = ((lean_object*)(l_Lean_Server_CodeAction_getFileSource_x21___closed__0));
v___x_195_ = ((lean_object*)(l_Lean_Server_CodeAction_getFileSource_x21___closed__1));
v___x_196_ = lean_unsigned_to_nat(47u);
v___x_197_ = lean_unsigned_to_nat(22u);
v___x_198_ = l_mkPanicMessageWithDecl(v___x_194_, v___x_195_, v___x_196_, v___x_197_, v_a_193_);
lean_dec_ref(v_a_193_);
v___x_199_ = l_panic___at___00Lean_Server_CodeAction_getFileSource_x21_spec__0(v___x_198_);
return v___x_199_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instCoeCodeActionLazyCodeAction___lam__0(lean_object* v_c_212_){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_213_ = lean_box(0);
v___x_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_214_, 0, v_c_212_);
lean_ctor_set(v___x_214_, 1, v___x_213_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedCodeActionProvider___aux__1___redArg(){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_218_ = l_Lean_Server_instInhabitedRequestError_default;
v___x_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedCodeActionProvider___aux__1___redArg___boxed(lean_object* v_a_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l_Lean_Server_instInhabitedCodeActionProvider___aux__1___redArg();
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedCodeActionProvider___aux__1(lean_object* v_x_222_, lean_object* v_a_223_, lean_object* v_a_224_){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = l_Lean_Server_instInhabitedRequestError_default;
v___x_227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedCodeActionProvider___aux__1___boxed(lean_object* v_x_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Lean_Server_instInhabitedCodeActionProvider___aux__1(v_x_228_, v_a_229_, v_a_230_);
lean_dec_ref(v_a_230_);
lean_dec_ref(v_a_229_);
lean_dec_ref(v_x_228_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedCodeActionProvider___lam__0(lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_){
_start:
{
lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_237_ = l_Lean_Server_instInhabitedRequestError_default;
v___x_238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_instInhabitedCodeActionProvider___lam__0___boxed(lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Lean_Server_instInhabitedCodeActionProvider___lam__0(v___y_239_, v___y_240_, v___y_241_);
lean_dec_ref(v___y_241_);
lean_dec_ref(v___y_240_);
lean_dec_ref(v___y_239_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_2573400817____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
v___x_247_ = lean_box(1);
v___x_248_ = lean_st_mk_ref(v___x_247_);
v___x_249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_249_, 0, v___x_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_2573400817____hygCtx___hyg_2____boxed(lean_object* v_a_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_2573400817____hygCtx___hyg_2_();
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_addBuiltinCodeActionProvider(lean_object* v_decl_252_, lean_object* v_provider_253_){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_255_ = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_builtinCodeActionProviders;
v___x_256_ = lean_st_ref_take(v___x_255_);
v___x_257_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_decl_252_, v_provider_253_, v___x_256_);
v___x_258_ = lean_st_ref_set(v___x_255_, v___x_257_);
v___x_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_addBuiltinCodeActionProvider___boxed(lean_object* v_decl_260_, lean_object* v_provider_261_, lean_object* v_a_262_){
_start:
{
lean_object* v_res_263_; 
v_res_263_ = l_Lean_Server_addBuiltinCodeActionProvider(v_decl_260_, v_provider_261_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__0(lean_object* v_as_264_, size_t v_i_265_, size_t v_stop_266_, lean_object* v_b_267_){
_start:
{
uint8_t v___x_268_; 
v___x_268_ = lean_usize_dec_eq(v_i_265_, v_stop_266_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; lean_object* v___x_270_; size_t v___x_271_; size_t v___x_272_; 
v___x_269_ = lean_array_uget_borrowed(v_as_264_, v_i_265_);
lean_inc(v___x_269_);
v___x_270_ = l_Lean_NameSet_insert(v_b_267_, v___x_269_);
v___x_271_ = ((size_t)1ULL);
v___x_272_ = lean_usize_add(v_i_265_, v___x_271_);
v_i_265_ = v___x_272_;
v_b_267_ = v___x_270_;
goto _start;
}
else
{
return v_b_267_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__0___boxed(lean_object* v_as_274_, lean_object* v_i_275_, lean_object* v_stop_276_, lean_object* v_b_277_){
_start:
{
size_t v_i_boxed_278_; size_t v_stop_boxed_279_; lean_object* v_res_280_; 
v_i_boxed_278_ = lean_unbox_usize(v_i_275_);
lean_dec(v_i_275_);
v_stop_boxed_279_ = lean_unbox_usize(v_stop_276_);
lean_dec(v_stop_276_);
v_res_280_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__0(v_as_274_, v_i_boxed_278_, v_stop_boxed_279_, v_b_277_);
lean_dec_ref(v_as_274_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__1(lean_object* v_as_281_, size_t v_i_282_, size_t v_stop_283_, lean_object* v_b_284_){
_start:
{
lean_object* v___y_286_; uint8_t v___x_290_; 
v___x_290_ = lean_usize_dec_eq(v_i_282_, v_stop_283_);
if (v___x_290_ == 0)
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; uint8_t v___x_294_; 
v___x_291_ = lean_array_uget_borrowed(v_as_281_, v_i_282_);
v___x_292_ = lean_unsigned_to_nat(0u);
v___x_293_ = lean_array_get_size(v___x_291_);
v___x_294_ = lean_nat_dec_lt(v___x_292_, v___x_293_);
if (v___x_294_ == 0)
{
v___y_286_ = v_b_284_;
goto v___jp_285_;
}
else
{
uint8_t v___x_295_; 
v___x_295_ = lean_nat_dec_le(v___x_293_, v___x_293_);
if (v___x_295_ == 0)
{
if (v___x_294_ == 0)
{
v___y_286_ = v_b_284_;
goto v___jp_285_;
}
else
{
size_t v___x_296_; size_t v___x_297_; lean_object* v___x_298_; 
v___x_296_ = ((size_t)0ULL);
v___x_297_ = lean_usize_of_nat(v___x_293_);
v___x_298_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__0(v___x_291_, v___x_296_, v___x_297_, v_b_284_);
v___y_286_ = v___x_298_;
goto v___jp_285_;
}
}
else
{
size_t v___x_299_; size_t v___x_300_; lean_object* v___x_301_; 
v___x_299_ = ((size_t)0ULL);
v___x_300_ = lean_usize_of_nat(v___x_293_);
v___x_301_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__0(v___x_291_, v___x_299_, v___x_300_, v_b_284_);
v___y_286_ = v___x_301_;
goto v___jp_285_;
}
}
}
else
{
return v_b_284_;
}
v___jp_285_:
{
size_t v___x_287_; size_t v___x_288_; 
v___x_287_ = ((size_t)1ULL);
v___x_288_ = lean_usize_add(v_i_282_, v___x_287_);
v_i_282_ = v___x_288_;
v_b_284_ = v___y_286_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__1___boxed(lean_object* v_as_302_, lean_object* v_i_303_, lean_object* v_stop_304_, lean_object* v_b_305_){
_start:
{
size_t v_i_boxed_306_; size_t v_stop_boxed_307_; lean_object* v_res_308_; 
v_i_boxed_306_ = lean_unbox_usize(v_i_303_);
lean_dec(v_i_303_);
v_stop_boxed_307_ = lean_unbox_usize(v_stop_304_);
lean_dec(v_stop_304_);
v_res_308_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__1(v_as_302_, v_i_boxed_306_, v_stop_boxed_307_, v_b_305_);
lean_dec_ref(v_as_302_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_initFn___lam__0_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2_(lean_object* v_nss_309_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; uint8_t v___x_313_; 
v___x_310_ = l_Lean_NameSet_empty;
v___x_311_ = lean_unsigned_to_nat(0u);
v___x_312_ = lean_array_get_size(v_nss_309_);
v___x_313_ = lean_nat_dec_lt(v___x_311_, v___x_312_);
if (v___x_313_ == 0)
{
return v___x_310_;
}
else
{
uint8_t v___x_314_; 
v___x_314_ = lean_nat_dec_le(v___x_312_, v___x_312_);
if (v___x_314_ == 0)
{
if (v___x_313_ == 0)
{
return v___x_310_;
}
else
{
size_t v___x_315_; size_t v___x_316_; lean_object* v___x_317_; 
v___x_315_ = ((size_t)0ULL);
v___x_316_ = lean_usize_of_nat(v___x_312_);
v___x_317_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__1(v_nss_309_, v___x_315_, v___x_316_, v___x_310_);
return v___x_317_;
}
}
else
{
size_t v___x_318_; size_t v___x_319_; lean_object* v___x_320_; 
v___x_318_ = ((size_t)0ULL);
v___x_319_ = lean_usize_of_nat(v___x_312_);
v___x_320_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__1(v_nss_309_, v___x_318_, v___x_319_, v___x_310_);
return v___x_320_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_initFn___lam__0_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2____boxed(lean_object* v_nss_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l_Lean_Server_initFn___lam__0_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2_(v_nss_321_);
lean_dec_ref(v_nss_321_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__2___redArg(lean_object* v_as_324_, lean_object* v_lo_325_, lean_object* v_hi_326_){
_start:
{
uint8_t v___x_327_; 
v___x_327_ = lean_nat_dec_lt(v_lo_325_, v_hi_326_);
if (v___x_327_ == 0)
{
lean_dec(v_lo_325_);
return v_as_324_;
}
else
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v_fst_330_; lean_object* v_snd_331_; uint8_t v___x_332_; 
v___x_328_ = ((lean_object*)(l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__2___redArg___closed__0));
lean_inc(v_lo_325_);
v___x_329_ = l_Array_qpartition___redArg(v_as_324_, v___x_328_, v_lo_325_, v_hi_326_);
v_fst_330_ = lean_ctor_get(v___x_329_, 0);
lean_inc(v_fst_330_);
v_snd_331_ = lean_ctor_get(v___x_329_, 1);
lean_inc(v_snd_331_);
lean_dec_ref(v___x_329_);
v___x_332_ = lean_nat_dec_le(v_hi_326_, v_fst_330_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; 
v___x_333_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__2___redArg(v_snd_331_, v_lo_325_, v_fst_330_);
v___x_334_ = lean_unsigned_to_nat(1u);
v___x_335_ = lean_nat_add(v_fst_330_, v___x_334_);
lean_dec(v_fst_330_);
v_as_324_ = v___x_333_;
v_lo_325_ = v___x_335_;
goto _start;
}
else
{
lean_dec(v_fst_330_);
lean_dec(v_lo_325_);
return v_snd_331_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object* v_as_337_, lean_object* v_lo_338_, lean_object* v_hi_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__2___redArg(v_as_337_, v_lo_338_, v_hi_339_);
lean_dec(v_hi_339_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_initFn___lam__1_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2_(lean_object* v_es_341_){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_342_ = lean_array_mk(v_es_341_);
v___x_343_ = lean_array_get_size(v___x_342_);
v___x_344_ = lean_unsigned_to_nat(0u);
v___x_345_ = lean_nat_dec_eq(v___x_343_, v___x_344_);
if (v___x_345_ == 0)
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___y_349_; uint8_t v___x_353_; 
v___x_346_ = lean_unsigned_to_nat(1u);
v___x_347_ = lean_nat_sub(v___x_343_, v___x_346_);
v___x_353_ = lean_nat_dec_le(v___x_344_, v___x_347_);
if (v___x_353_ == 0)
{
lean_inc(v___x_347_);
v___y_349_ = v___x_347_;
goto v___jp_348_;
}
else
{
v___y_349_ = v___x_344_;
goto v___jp_348_;
}
v___jp_348_:
{
uint8_t v___x_350_; 
v___x_350_ = lean_nat_dec_le(v___y_349_, v___x_347_);
if (v___x_350_ == 0)
{
lean_object* v___x_351_; 
lean_dec(v___x_347_);
lean_inc(v___y_349_);
v___x_351_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__2___redArg(v___x_342_, v___y_349_, v___y_349_);
lean_dec(v___y_349_);
return v___x_351_;
}
else
{
lean_object* v___x_352_; 
v___x_352_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__2___redArg(v___x_342_, v___y_349_, v___x_347_);
lean_dec(v___x_347_);
return v___x_352_;
}
}
}
else
{
return v___x_342_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_370_ = ((lean_object*)(l_Lean_Server_initFn___closed__5_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2_));
v___x_371_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_370_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2____boxed(lean_object* v_a_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2_();
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__2(lean_object* v_n_374_, lean_object* v_as_375_, lean_object* v_lo_376_, lean_object* v_hi_377_, lean_object* v_w_378_, lean_object* v_hlo_379_, lean_object* v_hhi_380_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__2___redArg(v_as_375_, v_lo_376_, v_hi_377_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__2___boxed(lean_object* v_n_382_, lean_object* v_as_383_, lean_object* v_lo_384_, lean_object* v_hi_385_, lean_object* v_w_386_, lean_object* v_hlo_387_, lean_object* v_hhi_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2__spec__2(v_n_382_, v_as_383_, v_lo_384_, v_hi_385_, v_w_386_, v_hlo_387_, v_hhi_388_);
lean_dec(v_hi_385_);
lean_dec(v_n_382_);
return v_res_389_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_390_; 
v___x_390_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_390_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_391_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___closed__0, &l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___closed__0_once, _init_l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___closed__0);
v___x_392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
return v___x_392_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_393_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___closed__1, &l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___closed__1_once, _init_l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___closed__1);
v___x_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_393_);
lean_ctor_set(v___x_394_, 1, v___x_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg(lean_object* v_env_395_, lean_object* v___y_396_){
_start:
{
lean_object* v___x_398_; lean_object* v_nextMacroScope_399_; lean_object* v_ngen_400_; lean_object* v_auxDeclNGen_401_; lean_object* v_traceState_402_; lean_object* v_messages_403_; lean_object* v_infoState_404_; lean_object* v_snapshotTasks_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_416_; 
v___x_398_ = lean_st_ref_take(v___y_396_);
v_nextMacroScope_399_ = lean_ctor_get(v___x_398_, 1);
v_ngen_400_ = lean_ctor_get(v___x_398_, 2);
v_auxDeclNGen_401_ = lean_ctor_get(v___x_398_, 3);
v_traceState_402_ = lean_ctor_get(v___x_398_, 4);
v_messages_403_ = lean_ctor_get(v___x_398_, 6);
v_infoState_404_ = lean_ctor_get(v___x_398_, 7);
v_snapshotTasks_405_ = lean_ctor_get(v___x_398_, 8);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_416_ == 0)
{
lean_object* v_unused_417_; lean_object* v_unused_418_; 
v_unused_417_ = lean_ctor_get(v___x_398_, 5);
lean_dec(v_unused_417_);
v_unused_418_ = lean_ctor_get(v___x_398_, 0);
lean_dec(v_unused_418_);
v___x_407_ = v___x_398_;
v_isShared_408_ = v_isSharedCheck_416_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_snapshotTasks_405_);
lean_inc(v_infoState_404_);
lean_inc(v_messages_403_);
lean_inc(v_traceState_402_);
lean_inc(v_auxDeclNGen_401_);
lean_inc(v_ngen_400_);
lean_inc(v_nextMacroScope_399_);
lean_dec(v___x_398_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_416_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_409_; lean_object* v___x_411_; 
v___x_409_ = lean_obj_once(&l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___closed__2, &l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___closed__2_once, _init_l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___closed__2);
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 5, v___x_409_);
lean_ctor_set(v___x_407_, 0, v_env_395_);
v___x_411_ = v___x_407_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_env_395_);
lean_ctor_set(v_reuseFailAlloc_415_, 1, v_nextMacroScope_399_);
lean_ctor_set(v_reuseFailAlloc_415_, 2, v_ngen_400_);
lean_ctor_set(v_reuseFailAlloc_415_, 3, v_auxDeclNGen_401_);
lean_ctor_set(v_reuseFailAlloc_415_, 4, v_traceState_402_);
lean_ctor_set(v_reuseFailAlloc_415_, 5, v___x_409_);
lean_ctor_set(v_reuseFailAlloc_415_, 6, v_messages_403_);
lean_ctor_set(v_reuseFailAlloc_415_, 7, v_infoState_404_);
lean_ctor_set(v_reuseFailAlloc_415_, 8, v_snapshotTasks_405_);
v___x_411_ = v_reuseFailAlloc_415_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_412_ = lean_st_ref_set(v___y_396_, v___x_411_);
v___x_413_ = lean_box(0);
v___x_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
return v___x_414_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_env_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg(v_env_419_, v___y_420_);
lean_dec(v___y_420_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1(lean_object* v_env_423_, lean_object* v___y_424_, lean_object* v___y_425_){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg(v_env_423_, v___y_425_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___boxed(lean_object* v_env_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1(v_env_428_, v___y_429_, v___y_430_);
lean_dec(v___y_430_);
lean_dec_ref(v___y_429_);
return v_res_432_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_433_; 
v___x_433_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_433_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_434_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__0);
v___x_435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
return v___x_435_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_436_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_437_ = lean_unsigned_to_nat(0u);
v___x_438_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_438_, 0, v___x_437_);
lean_ctor_set(v___x_438_, 1, v___x_437_);
lean_ctor_set(v___x_438_, 2, v___x_437_);
lean_ctor_set(v___x_438_, 3, v___x_436_);
lean_ctor_set(v___x_438_, 4, v___x_436_);
lean_ctor_set(v___x_438_, 5, v___x_436_);
lean_ctor_set(v___x_438_, 6, v___x_436_);
lean_ctor_set(v___x_438_, 7, v___x_436_);
lean_ctor_set(v___x_438_, 8, v___x_436_);
return v___x_438_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_439_ = lean_unsigned_to_nat(32u);
v___x_440_ = lean_mk_empty_array_with_capacity(v___x_439_);
v___x_441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_441_, 0, v___x_440_);
return v___x_441_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__4(void){
_start:
{
size_t v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_442_ = ((size_t)5ULL);
v___x_443_ = lean_unsigned_to_nat(0u);
v___x_444_ = lean_unsigned_to_nat(32u);
v___x_445_ = lean_mk_empty_array_with_capacity(v___x_444_);
v___x_446_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__3);
v___x_447_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_447_, 0, v___x_446_);
lean_ctor_set(v___x_447_, 1, v___x_445_);
lean_ctor_set(v___x_447_, 2, v___x_443_);
lean_ctor_set(v___x_447_, 3, v___x_443_);
lean_ctor_set_usize(v___x_447_, 4, v___x_442_);
return v___x_447_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_448_ = lean_box(1);
v___x_449_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__4);
v___x_450_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__1);
v___x_451_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_451_, 0, v___x_450_);
lean_ctor_set(v___x_451_, 1, v___x_449_);
lean_ctor_set(v___x_451_, 2, v___x_448_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_msgData_452_, lean_object* v___y_453_, lean_object* v___y_454_){
_start:
{
lean_object* v___x_456_; lean_object* v_env_457_; lean_object* v_options_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v___x_456_ = lean_st_ref_get(v___y_454_);
v_env_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc_ref(v_env_457_);
lean_dec(v___x_456_);
v_options_458_ = lean_ctor_get(v___y_453_, 2);
v___x_459_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__2);
v___x_460_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__5);
lean_inc_ref(v_options_458_);
v___x_461_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_461_, 0, v_env_457_);
lean_ctor_set(v___x_461_, 1, v___x_459_);
lean_ctor_set(v___x_461_, 2, v___x_460_);
lean_ctor_set(v___x_461_, 3, v_options_458_);
v___x_462_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_462_, 0, v___x_461_);
lean_ctor_set(v___x_462_, 1, v_msgData_452_);
v___x_463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_463_, 0, v___x_462_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_msgData_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0(v_msgData_464_, v___y_465_, v___y_466_);
lean_dec(v___y_466_);
lean_dec_ref(v___y_465_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0___redArg(lean_object* v_msg_469_, lean_object* v___y_470_, lean_object* v___y_471_){
_start:
{
lean_object* v_ref_473_; lean_object* v___x_474_; lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_483_; 
v_ref_473_ = lean_ctor_get(v___y_470_, 5);
v___x_474_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0(v_msg_469_, v___y_470_, v___y_471_);
v_a_475_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_483_ == 0)
{
v___x_477_ = v___x_474_;
v_isShared_478_ = v_isSharedCheck_483_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_474_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_483_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_479_; lean_object* v___x_481_; 
lean_inc(v_ref_473_);
v___x_479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_479_, 0, v_ref_473_);
lean_ctor_set(v___x_479_, 1, v_a_475_);
if (v_isShared_478_ == 0)
{
lean_ctor_set_tag(v___x_477_, 1);
lean_ctor_set(v___x_477_, 0, v___x_479_);
v___x_481_ = v___x_477_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(1, 1, 0);
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
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_msg_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0___redArg(v_msg_484_, v___y_485_, v___y_486_);
lean_dec(v___y_486_);
lean_dec_ref(v___y_485_);
return v_res_488_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_490_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_));
v___x_491_ = l_Lean_stringToMessageData(v___x_490_);
return v___x_491_;
}
}
static lean_object* _init_l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__3_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_493_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_));
v___x_494_ = l_Lean_stringToMessageData(v___x_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_(lean_object* v_name_495_, lean_object* v_decl_496_, lean_object* v___y_497_, lean_object* v___y_498_){
_start:
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_500_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_, &l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__once, _init_l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_);
v___x_501_ = l_Lean_MessageData_ofName(v_name_495_);
v___x_502_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_502_, 0, v___x_500_);
lean_ctor_set(v___x_502_, 1, v___x_501_);
v___x_503_ = lean_obj_once(&l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__3_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_, &l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__3_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__once, _init_l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0___closed__3_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_);
v___x_504_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_504_, 0, v___x_502_);
lean_ctor_set(v___x_504_, 1, v___x_503_);
v___x_505_ = l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0___redArg(v___x_504_, v___y_497_, v___y_498_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2____boxed(lean_object* v_name_506_, lean_object* v_decl_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_(v_name_506_, v_decl_507_, v___y_508_, v___y_509_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
lean_dec(v_decl_507_);
return v_res_511_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__0));
v___x_514_ = l_Lean_stringToMessageData(v___x_513_);
return v___x_514_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__2));
v___x_517_ = l_Lean_stringToMessageData(v___x_516_);
return v___x_517_;
}
}
static lean_object* _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_519_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__4));
v___x_520_ = l_Lean_stringToMessageData(v___x_519_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg(lean_object* v_name_524_, uint8_t v_kind_525_, lean_object* v___y_526_, lean_object* v___y_527_){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___y_535_; 
v___x_529_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__1, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__1_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__1);
v___x_530_ = l_Lean_MessageData_ofName(v_name_524_);
v___x_531_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_531_, 0, v___x_529_);
lean_ctor_set(v___x_531_, 1, v___x_530_);
v___x_532_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__3, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__3_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__3);
v___x_533_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_531_);
lean_ctor_set(v___x_533_, 1, v___x_532_);
switch(v_kind_525_)
{
case 0:
{
lean_object* v___x_542_; 
v___x_542_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__6));
v___y_535_ = v___x_542_;
goto v___jp_534_;
}
case 1:
{
lean_object* v___x_543_; 
v___x_543_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__7));
v___y_535_ = v___x_543_;
goto v___jp_534_;
}
default: 
{
lean_object* v___x_544_; 
v___x_544_ = ((lean_object*)(l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__8));
v___y_535_ = v___x_544_;
goto v___jp_534_;
}
}
v___jp_534_:
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_536_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_536_, 0, v___y_535_);
v___x_537_ = l_Lean_MessageData_ofFormat(v___x_536_);
v___x_538_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_538_, 0, v___x_533_);
lean_ctor_set(v___x_538_, 1, v___x_537_);
v___x_539_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__5);
v___x_540_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_540_, 0, v___x_538_);
lean_ctor_set(v___x_540_, 1, v___x_539_);
v___x_541_ = l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0___redArg(v___x_540_, v___y_526_, v___y_527_);
return v___x_541_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___boxed(lean_object* v_name_545_, lean_object* v_kind_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_){
_start:
{
uint8_t v_kind_boxed_550_; lean_object* v_res_551_; 
v_kind_boxed_550_ = lean_unbox(v_kind_546_);
v_res_551_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg(v_name_545_, v_kind_boxed_550_, v___y_547_, v___y_548_);
lean_dec(v___y_548_);
lean_dec_ref(v___y_547_);
return v_res_551_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = ((lean_object*)(l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__0));
v___x_554_ = l_Lean_stringToMessageData(v___x_553_);
return v___x_554_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; 
v___x_556_ = ((lean_object*)(l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__2));
v___x_557_ = l_Lean_stringToMessageData(v___x_556_);
return v___x_557_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_559_ = ((lean_object*)(l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__4));
v___x_560_ = l_Lean_stringToMessageData(v___x_559_);
return v___x_560_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__7(void){
_start:
{
lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_562_ = ((lean_object*)(l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__6));
v___x_563_ = l_Lean_stringToMessageData(v___x_562_);
return v___x_563_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__9(void){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_565_ = ((lean_object*)(l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__8));
v___x_566_ = l_Lean_stringToMessageData(v___x_565_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg(lean_object* v_attrName_567_, lean_object* v_declName_568_, lean_object* v_givenType_569_, lean_object* v_expectedType_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; uint8_t v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_574_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__1, &l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__1_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__1);
v___x_575_ = l_Lean_MessageData_ofName(v_attrName_567_);
lean_inc_ref(v___x_575_);
v___x_576_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_576_, 0, v___x_574_);
lean_ctor_set(v___x_576_, 1, v___x_575_);
v___x_577_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__3, &l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__3_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__3);
v___x_578_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_578_, 0, v___x_576_);
lean_ctor_set(v___x_578_, 1, v___x_577_);
v___x_579_ = 0;
v___x_580_ = l_Lean_MessageData_ofConstName(v_declName_568_, v___x_579_);
v___x_581_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_578_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
v___x_582_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__5, &l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__5_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__5);
v___x_583_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_583_, 0, v___x_581_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = l_Lean_indentExpr(v_givenType_569_);
v___x_585_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_583_);
lean_ctor_set(v___x_585_, 1, v___x_584_);
v___x_586_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__7, &l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__7_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__7);
v___x_587_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_587_, 0, v___x_585_);
lean_ctor_set(v___x_587_, 1, v___x_586_);
v___x_588_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
lean_ctor_set(v___x_588_, 1, v___x_575_);
v___x_589_ = lean_obj_once(&l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__9, &l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__9_once, _init_l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___closed__9);
v___x_590_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_590_, 0, v___x_588_);
lean_ctor_set(v___x_590_, 1, v___x_589_);
v___x_591_ = l_Lean_indentExpr(v_expectedType_570_);
v___x_592_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_592_, 0, v___x_590_);
lean_ctor_set(v___x_592_, 1, v___x_591_);
v___x_593_ = l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0___redArg(v___x_592_, v___y_571_, v___y_572_);
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg___boxed(lean_object* v_attrName_594_, lean_object* v_declName_595_, lean_object* v_givenType_596_, lean_object* v_expectedType_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg(v_attrName_594_, v_declName_595_, v_givenType_596_, v_expectedType_597_, v___y_598_, v___y_599_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__9___redArg(lean_object* v_ref_602_, lean_object* v_msg_603_, lean_object* v___y_604_, lean_object* v___y_605_){
_start:
{
lean_object* v_fileName_607_; lean_object* v_fileMap_608_; lean_object* v_options_609_; lean_object* v_currRecDepth_610_; lean_object* v_maxRecDepth_611_; lean_object* v_ref_612_; lean_object* v_currNamespace_613_; lean_object* v_openDecls_614_; lean_object* v_initHeartbeats_615_; lean_object* v_maxHeartbeats_616_; lean_object* v_quotContext_617_; lean_object* v_currMacroScope_618_; uint8_t v_diag_619_; lean_object* v_cancelTk_x3f_620_; uint8_t v_suppressElabErrors_621_; lean_object* v_inheritedTraceOptions_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_631_; 
v_fileName_607_ = lean_ctor_get(v___y_604_, 0);
v_fileMap_608_ = lean_ctor_get(v___y_604_, 1);
v_options_609_ = lean_ctor_get(v___y_604_, 2);
v_currRecDepth_610_ = lean_ctor_get(v___y_604_, 3);
v_maxRecDepth_611_ = lean_ctor_get(v___y_604_, 4);
v_ref_612_ = lean_ctor_get(v___y_604_, 5);
v_currNamespace_613_ = lean_ctor_get(v___y_604_, 6);
v_openDecls_614_ = lean_ctor_get(v___y_604_, 7);
v_initHeartbeats_615_ = lean_ctor_get(v___y_604_, 8);
v_maxHeartbeats_616_ = lean_ctor_get(v___y_604_, 9);
v_quotContext_617_ = lean_ctor_get(v___y_604_, 10);
v_currMacroScope_618_ = lean_ctor_get(v___y_604_, 11);
v_diag_619_ = lean_ctor_get_uint8(v___y_604_, sizeof(void*)*14);
v_cancelTk_x3f_620_ = lean_ctor_get(v___y_604_, 12);
v_suppressElabErrors_621_ = lean_ctor_get_uint8(v___y_604_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_622_ = lean_ctor_get(v___y_604_, 13);
v_isSharedCheck_631_ = !lean_is_exclusive(v___y_604_);
if (v_isSharedCheck_631_ == 0)
{
v___x_624_ = v___y_604_;
v_isShared_625_ = v_isSharedCheck_631_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_inheritedTraceOptions_622_);
lean_inc(v_cancelTk_x3f_620_);
lean_inc(v_currMacroScope_618_);
lean_inc(v_quotContext_617_);
lean_inc(v_maxHeartbeats_616_);
lean_inc(v_initHeartbeats_615_);
lean_inc(v_openDecls_614_);
lean_inc(v_currNamespace_613_);
lean_inc(v_ref_612_);
lean_inc(v_maxRecDepth_611_);
lean_inc(v_currRecDepth_610_);
lean_inc(v_options_609_);
lean_inc(v_fileMap_608_);
lean_inc(v_fileName_607_);
lean_dec(v___y_604_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_631_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v_ref_626_; lean_object* v___x_628_; 
v_ref_626_ = l_Lean_replaceRef(v_ref_602_, v_ref_612_);
lean_dec(v_ref_612_);
if (v_isShared_625_ == 0)
{
lean_ctor_set(v___x_624_, 5, v_ref_626_);
v___x_628_ = v___x_624_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_fileName_607_);
lean_ctor_set(v_reuseFailAlloc_630_, 1, v_fileMap_608_);
lean_ctor_set(v_reuseFailAlloc_630_, 2, v_options_609_);
lean_ctor_set(v_reuseFailAlloc_630_, 3, v_currRecDepth_610_);
lean_ctor_set(v_reuseFailAlloc_630_, 4, v_maxRecDepth_611_);
lean_ctor_set(v_reuseFailAlloc_630_, 5, v_ref_626_);
lean_ctor_set(v_reuseFailAlloc_630_, 6, v_currNamespace_613_);
lean_ctor_set(v_reuseFailAlloc_630_, 7, v_openDecls_614_);
lean_ctor_set(v_reuseFailAlloc_630_, 8, v_initHeartbeats_615_);
lean_ctor_set(v_reuseFailAlloc_630_, 9, v_maxHeartbeats_616_);
lean_ctor_set(v_reuseFailAlloc_630_, 10, v_quotContext_617_);
lean_ctor_set(v_reuseFailAlloc_630_, 11, v_currMacroScope_618_);
lean_ctor_set(v_reuseFailAlloc_630_, 12, v_cancelTk_x3f_620_);
lean_ctor_set(v_reuseFailAlloc_630_, 13, v_inheritedTraceOptions_622_);
lean_ctor_set_uint8(v_reuseFailAlloc_630_, sizeof(void*)*14, v_diag_619_);
lean_ctor_set_uint8(v_reuseFailAlloc_630_, sizeof(void*)*14 + 1, v_suppressElabErrors_621_);
v___x_628_ = v_reuseFailAlloc_630_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
lean_object* v___x_629_; 
v___x_629_ = l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0___redArg(v_msg_603_, v___x_628_, v___y_605_);
lean_dec_ref(v___x_628_);
return v___x_629_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__9___redArg___boxed(lean_object* v_ref_632_, lean_object* v_msg_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_){
_start:
{
lean_object* v_res_637_; 
v_res_637_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__9___redArg(v_ref_632_, v_msg_633_, v___y_634_, v___y_635_);
lean_dec(v___y_635_);
lean_dec(v_ref_632_);
return v_res_637_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_639_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__0));
v___x_640_ = l_Lean_stringToMessageData(v___x_639_);
return v___x_640_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_642_; lean_object* v___x_643_; 
v___x_642_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__2));
v___x_643_ = l_Lean_stringToMessageData(v___x_642_);
return v___x_643_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__5(void){
_start:
{
lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_645_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__4));
v___x_646_ = l_Lean_stringToMessageData(v___x_645_);
return v___x_646_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__7(void){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; 
v___x_648_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__6));
v___x_649_ = l_Lean_stringToMessageData(v___x_648_);
return v___x_649_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__9(void){
_start:
{
lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_651_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__8));
v___x_652_ = l_Lean_stringToMessageData(v___x_651_);
return v___x_652_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__11(void){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_654_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__10));
v___x_655_ = l_Lean_stringToMessageData(v___x_654_);
return v___x_655_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__13(void){
_start:
{
lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_657_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__12));
v___x_658_ = l_Lean_stringToMessageData(v___x_657_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg(lean_object* v_msg_659_, lean_object* v_declHint_660_, lean_object* v___y_661_){
_start:
{
lean_object* v___x_663_; lean_object* v_env_664_; uint8_t v___x_665_; 
v___x_663_ = lean_st_ref_get(v___y_661_);
v_env_664_ = lean_ctor_get(v___x_663_, 0);
lean_inc_ref(v_env_664_);
lean_dec(v___x_663_);
v___x_665_ = l_Lean_Name_isAnonymous(v_declHint_660_);
if (v___x_665_ == 0)
{
uint8_t v_isExporting_666_; 
v_isExporting_666_ = lean_ctor_get_uint8(v_env_664_, sizeof(void*)*8);
if (v_isExporting_666_ == 0)
{
lean_object* v___x_667_; 
lean_dec_ref(v_env_664_);
lean_dec(v_declHint_660_);
v___x_667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_667_, 0, v_msg_659_);
return v___x_667_;
}
else
{
lean_object* v___x_668_; uint8_t v___x_669_; 
lean_inc_ref(v_env_664_);
v___x_668_ = l_Lean_Environment_setExporting(v_env_664_, v___x_665_);
lean_inc(v_declHint_660_);
lean_inc_ref(v___x_668_);
v___x_669_ = l_Lean_Environment_contains(v___x_668_, v_declHint_660_, v_isExporting_666_);
if (v___x_669_ == 0)
{
lean_object* v___x_670_; 
lean_dec_ref(v___x_668_);
lean_dec_ref(v_env_664_);
lean_dec(v_declHint_660_);
v___x_670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_670_, 0, v_msg_659_);
return v___x_670_;
}
else
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v_c_676_; lean_object* v___x_677_; 
v___x_671_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__2);
v___x_672_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0___closed__5);
v___x_673_ = l_Lean_Options_empty;
v___x_674_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_674_, 0, v___x_668_);
lean_ctor_set(v___x_674_, 1, v___x_671_);
lean_ctor_set(v___x_674_, 2, v___x_672_);
lean_ctor_set(v___x_674_, 3, v___x_673_);
lean_inc(v_declHint_660_);
v___x_675_ = l_Lean_MessageData_ofConstName(v_declHint_660_, v___x_665_);
v_c_676_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_676_, 0, v___x_674_);
lean_ctor_set(v_c_676_, 1, v___x_675_);
v___x_677_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_664_, v_declHint_660_);
if (lean_obj_tag(v___x_677_) == 0)
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
lean_dec_ref(v_env_664_);
lean_dec(v_declHint_660_);
v___x_678_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_679_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
lean_ctor_set(v___x_679_, 1, v_c_676_);
v___x_680_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__3);
v___x_681_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_681_, 0, v___x_679_);
lean_ctor_set(v___x_681_, 1, v___x_680_);
v___x_682_ = l_Lean_MessageData_note(v___x_681_);
v___x_683_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_683_, 0, v_msg_659_);
lean_ctor_set(v___x_683_, 1, v___x_682_);
v___x_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_684_, 0, v___x_683_);
return v___x_684_;
}
else
{
lean_object* v_val_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_720_; 
v_val_685_ = lean_ctor_get(v___x_677_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_720_ == 0)
{
v___x_687_ = v___x_677_;
v_isShared_688_ = v_isSharedCheck_720_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_val_685_);
lean_dec(v___x_677_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_720_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v_mod_692_; uint8_t v___x_693_; 
v___x_689_ = lean_box(0);
v___x_690_ = l_Lean_Environment_header(v_env_664_);
lean_dec_ref(v_env_664_);
v___x_691_ = l_Lean_EnvironmentHeader_moduleNames(v___x_690_);
v_mod_692_ = lean_array_get(v___x_689_, v___x_691_, v_val_685_);
lean_dec(v_val_685_);
lean_dec_ref(v___x_691_);
v___x_693_ = l_Lean_isPrivateName(v_declHint_660_);
lean_dec(v_declHint_660_);
if (v___x_693_ == 0)
{
lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_705_; 
v___x_694_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__5);
v___x_695_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_695_, 0, v___x_694_);
lean_ctor_set(v___x_695_, 1, v_c_676_);
v___x_696_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__7);
v___x_697_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_697_, 0, v___x_695_);
lean_ctor_set(v___x_697_, 1, v___x_696_);
v___x_698_ = l_Lean_MessageData_ofName(v_mod_692_);
v___x_699_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_699_, 0, v___x_697_);
lean_ctor_set(v___x_699_, 1, v___x_698_);
v___x_700_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__9);
v___x_701_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_701_, 0, v___x_699_);
lean_ctor_set(v___x_701_, 1, v___x_700_);
v___x_702_ = l_Lean_MessageData_note(v___x_701_);
v___x_703_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_703_, 0, v_msg_659_);
lean_ctor_set(v___x_703_, 1, v___x_702_);
if (v_isShared_688_ == 0)
{
lean_ctor_set_tag(v___x_687_, 0);
lean_ctor_set(v___x_687_, 0, v___x_703_);
v___x_705_ = v___x_687_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v___x_703_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
else
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_718_; 
v___x_707_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__1);
v___x_708_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_708_, 0, v___x_707_);
lean_ctor_set(v___x_708_, 1, v_c_676_);
v___x_709_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__11);
v___x_710_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_710_, 0, v___x_708_);
lean_ctor_set(v___x_710_, 1, v___x_709_);
v___x_711_ = l_Lean_MessageData_ofName(v_mod_692_);
v___x_712_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_712_, 0, v___x_710_);
lean_ctor_set(v___x_712_, 1, v___x_711_);
v___x_713_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___closed__13);
v___x_714_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_714_, 0, v___x_712_);
lean_ctor_set(v___x_714_, 1, v___x_713_);
v___x_715_ = l_Lean_MessageData_note(v___x_714_);
v___x_716_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_716_, 0, v_msg_659_);
lean_ctor_set(v___x_716_, 1, v___x_715_);
if (v_isShared_688_ == 0)
{
lean_ctor_set_tag(v___x_687_, 0);
lean_ctor_set(v___x_687_, 0, v___x_716_);
v___x_718_ = v___x_687_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v___x_716_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_721_; 
lean_dec_ref(v_env_664_);
lean_dec(v_declHint_660_);
v___x_721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_721_, 0, v_msg_659_);
return v___x_721_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg___boxed(lean_object* v_msg_722_, lean_object* v_declHint_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg(v_msg_722_, v_declHint_723_, v___y_724_);
lean_dec(v___y_724_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8(lean_object* v_msg_727_, lean_object* v_declHint_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
lean_object* v___x_732_; lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_742_; 
v___x_732_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg(v_msg_727_, v_declHint_728_, v___y_730_);
v_a_733_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_742_ == 0)
{
v___x_735_ = v___x_732_;
v_isShared_736_ = v_isSharedCheck_742_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___x_732_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_742_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_740_; 
v___x_737_ = l_Lean_unknownIdentifierMessageTag;
v___x_738_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_738_, 0, v___x_737_);
lean_ctor_set(v___x_738_, 1, v_a_733_);
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 0, v___x_738_);
v___x_740_ = v___x_735_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v___x_738_);
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
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8___boxed(lean_object* v_msg_743_, lean_object* v_declHint_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8(v_msg_743_, v_declHint_744_, v___y_745_, v___y_746_);
lean_dec(v___y_746_);
lean_dec_ref(v___y_745_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7___redArg(lean_object* v_ref_749_, lean_object* v_msg_750_, lean_object* v_declHint_751_, lean_object* v___y_752_, lean_object* v___y_753_){
_start:
{
lean_object* v___x_755_; lean_object* v_a_756_; lean_object* v___x_757_; 
v___x_755_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8(v_msg_750_, v_declHint_751_, v___y_752_, v___y_753_);
v_a_756_ = lean_ctor_get(v___x_755_, 0);
lean_inc(v_a_756_);
lean_dec_ref(v___x_755_);
v___x_757_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__9___redArg(v_ref_749_, v_a_756_, v___y_752_, v___y_753_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7___redArg___boxed(lean_object* v_ref_758_, lean_object* v_msg_759_, lean_object* v_declHint_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7___redArg(v_ref_758_, v_msg_759_, v_declHint_760_, v___y_761_, v___y_762_);
lean_dec(v___y_762_);
lean_dec(v_ref_758_);
return v_res_764_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_766_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___redArg___closed__0));
v___x_767_ = l_Lean_stringToMessageData(v___x_766_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___redArg(lean_object* v_ref_768_, lean_object* v_constName_769_, lean_object* v___y_770_, lean_object* v___y_771_){
_start:
{
lean_object* v___x_773_; uint8_t v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_773_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___redArg___closed__1);
v___x_774_ = 0;
lean_inc(v_constName_769_);
v___x_775_ = l_Lean_MessageData_ofConstName(v_constName_769_, v___x_774_);
v___x_776_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_776_, 0, v___x_773_);
lean_ctor_set(v___x_776_, 1, v___x_775_);
v___x_777_ = lean_obj_once(&l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__5, &l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__5_once, _init_l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg___closed__5);
v___x_778_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_778_, 0, v___x_776_);
lean_ctor_set(v___x_778_, 1, v___x_777_);
v___x_779_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7___redArg(v_ref_768_, v___x_778_, v_constName_769_, v___y_770_, v___y_771_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_ref_780_, lean_object* v_constName_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
lean_object* v_res_785_; 
v_res_785_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___redArg(v_ref_780_, v_constName_781_, v___y_782_, v___y_783_);
lean_dec(v___y_783_);
lean_dec(v_ref_780_);
return v_res_785_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3___redArg(lean_object* v_constName_786_, lean_object* v___y_787_, lean_object* v___y_788_){
_start:
{
lean_object* v_ref_790_; lean_object* v___x_791_; 
v_ref_790_ = lean_ctor_get(v___y_787_, 5);
lean_inc(v_ref_790_);
v___x_791_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___redArg(v_ref_790_, v_constName_786_, v___y_787_, v___y_788_);
lean_dec(v_ref_790_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3___redArg___boxed(lean_object* v_constName_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3___redArg(v_constName_792_, v___y_793_, v___y_794_);
lean_dec(v___y_794_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2(lean_object* v_constName_797_, lean_object* v___y_798_, lean_object* v___y_799_){
_start:
{
lean_object* v___x_801_; lean_object* v_env_802_; uint8_t v___x_803_; lean_object* v___x_804_; 
v___x_801_ = lean_st_ref_get(v___y_799_);
v_env_802_ = lean_ctor_get(v___x_801_, 0);
lean_inc_ref(v_env_802_);
lean_dec(v___x_801_);
v___x_803_ = 0;
lean_inc(v_constName_797_);
v___x_804_ = l_Lean_Environment_find_x3f(v_env_802_, v_constName_797_, v___x_803_);
if (lean_obj_tag(v___x_804_) == 0)
{
lean_object* v___x_805_; 
v___x_805_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3___redArg(v_constName_797_, v___y_798_, v___y_799_);
return v___x_805_;
}
else
{
lean_object* v_val_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_813_; 
lean_dec_ref(v___y_798_);
lean_dec(v_constName_797_);
v_val_806_ = lean_ctor_get(v___x_804_, 0);
v_isSharedCheck_813_ = !lean_is_exclusive(v___x_804_);
if (v_isSharedCheck_813_ == 0)
{
v___x_808_ = v___x_804_;
v_isShared_809_ = v_isSharedCheck_813_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_val_806_);
lean_dec(v___x_804_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_813_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v___x_811_; 
if (v_isShared_809_ == 0)
{
lean_ctor_set_tag(v___x_808_, 0);
v___x_811_ = v___x_808_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v_val_806_);
v___x_811_ = v_reuseFailAlloc_812_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
return v___x_811_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2___boxed(lean_object* v_constName_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l_Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2(v_constName_814_, v___y_815_, v___y_816_);
lean_dec(v___y_816_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_(uint8_t v_builtin_824_, lean_object* v___x_825_, lean_object* v___x_826_, lean_object* v___x_827_, lean_object* v_name_828_, lean_object* v_decl_829_, lean_object* v_stx_830_, uint8_t v_kind_831_, lean_object* v___y_832_, lean_object* v___y_833_){
_start:
{
lean_object* v___y_836_; lean_object* v___y_837_; lean_object* v___y_854_; lean_object* v___y_855_; 
if (v_builtin_824_ == 0)
{
lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_878_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1___closed__3_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_));
lean_inc(v___y_833_);
lean_inc_ref(v___y_832_);
lean_inc(v_decl_829_);
v___x_879_ = l_Lean_ensureAttrDeclIsMeta(v___x_878_, v_decl_829_, v_kind_831_, v___y_832_, v___y_833_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_dec_ref(v___x_879_);
goto v___jp_873_;
}
else
{
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
lean_dec(v_stx_830_);
lean_dec(v_decl_829_);
lean_dec(v_name_828_);
lean_dec_ref(v___x_827_);
lean_dec_ref(v___x_826_);
lean_dec(v___x_825_);
return v___x_879_;
}
}
else
{
goto v___jp_873_;
}
v___jp_835_:
{
lean_object* v___x_838_; 
v___x_838_ = lean_st_ref_get(v___y_837_);
if (v_builtin_824_ == 0)
{
lean_object* v_env_839_; lean_object* v___x_840_; lean_object* v_toEnvExtension_841_; lean_object* v_asyncMode_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
lean_dec_ref(v___y_836_);
lean_dec_ref(v___x_827_);
lean_dec_ref(v___x_826_);
v_env_839_ = lean_ctor_get(v___x_838_, 0);
lean_inc_ref(v_env_839_);
lean_dec(v___x_838_);
v___x_840_ = l_Lean_Server_codeActionProviderExt;
v_toEnvExtension_841_ = lean_ctor_get(v___x_840_, 0);
lean_inc_ref(v_toEnvExtension_841_);
v_asyncMode_842_ = lean_ctor_get(v_toEnvExtension_841_, 2);
lean_inc(v_asyncMode_842_);
lean_dec_ref(v_toEnvExtension_841_);
v___x_843_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_840_, v_env_839_, v_decl_829_, v_asyncMode_842_, v___x_825_);
lean_dec(v_asyncMode_842_);
v___x_844_ = l_Lean_setEnv___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__1___redArg(v___x_843_, v___y_837_);
lean_dec(v___y_837_);
return v___x_844_;
}
else
{
lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; 
lean_dec(v___x_838_);
lean_dec(v___x_825_);
v___x_845_ = lean_box(0);
lean_inc(v_decl_829_);
v___x_846_ = l_Lean_mkConst(v_decl_829_, v___x_845_);
v___x_847_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1___closed__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_));
v___x_848_ = l_Lean_Name_mkStr3(v___x_826_, v___x_827_, v___x_847_);
v___x_849_ = l_Lean_mkConst(v___x_848_, v___x_845_);
lean_inc(v_decl_829_);
v___x_850_ = l___private_Lean_ToExpr_0__Lean_Name_toExprAux(v_decl_829_);
v___x_851_ = l_Lean_mkAppB(v___x_849_, v___x_850_, v___x_846_);
v___x_852_ = l_Lean_declareBuiltin(v_decl_829_, v___x_851_, v___y_836_, v___y_837_);
return v___x_852_;
}
}
v___jp_853_:
{
lean_object* v___x_856_; 
lean_inc_ref(v___y_854_);
lean_inc(v_decl_829_);
v___x_856_ = l_Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2(v_decl_829_, v___y_854_, v___y_855_);
if (lean_obj_tag(v___x_856_) == 0)
{
lean_object* v_a_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; uint8_t v___x_861_; 
v_a_857_ = lean_ctor_get(v___x_856_, 0);
lean_inc(v_a_857_);
lean_dec_ref(v___x_856_);
v___x_858_ = l_Lean_ConstantInfo_type(v_a_857_);
lean_dec(v_a_857_);
v___x_859_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_));
lean_inc_ref(v___x_827_);
lean_inc_ref(v___x_826_);
v___x_860_ = l_Lean_Name_mkStr3(v___x_826_, v___x_827_, v___x_859_);
v___x_861_ = l_Lean_Expr_isConstOf(v___x_858_, v___x_860_);
if (v___x_861_ == 0)
{
lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
lean_dec_ref(v___x_827_);
lean_dec_ref(v___x_826_);
lean_dec(v___x_825_);
v___x_862_ = lean_box(0);
v___x_863_ = l_Lean_mkConst(v___x_860_, v___x_862_);
v___x_864_ = l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg(v_name_828_, v_decl_829_, v___x_858_, v___x_863_, v___y_854_, v___y_855_);
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
return v___x_864_;
}
else
{
lean_dec(v___x_860_);
lean_dec_ref(v___x_858_);
lean_dec(v_name_828_);
v___y_836_ = v___y_854_;
v___y_837_ = v___y_855_;
goto v___jp_835_;
}
}
else
{
lean_object* v_a_865_; lean_object* v___x_867_; uint8_t v_isShared_868_; uint8_t v_isSharedCheck_872_; 
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
lean_dec(v_decl_829_);
lean_dec(v_name_828_);
lean_dec_ref(v___x_827_);
lean_dec_ref(v___x_826_);
lean_dec(v___x_825_);
v_a_865_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_872_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_872_ == 0)
{
v___x_867_ = v___x_856_;
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
else
{
lean_inc(v_a_865_);
lean_dec(v___x_856_);
v___x_867_ = lean_box(0);
v_isShared_868_ = v_isSharedCheck_872_;
goto v_resetjp_866_;
}
v_resetjp_866_:
{
lean_object* v___x_870_; 
if (v_isShared_868_ == 0)
{
v___x_870_ = v___x_867_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v_a_865_);
v___x_870_ = v_reuseFailAlloc_871_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
return v___x_870_;
}
}
}
}
v___jp_873_:
{
lean_object* v___x_874_; 
lean_inc_ref(v___y_832_);
v___x_874_ = l_Lean_Attribute_Builtin_ensureNoArgs(v_stx_830_, v___y_832_, v___y_833_);
if (lean_obj_tag(v___x_874_) == 0)
{
uint8_t v___x_875_; uint8_t v___x_876_; 
lean_dec_ref(v___x_874_);
v___x_875_ = 0;
v___x_876_ = l_Lean_instBEqAttributeKind_beq(v_kind_831_, v___x_875_);
if (v___x_876_ == 0)
{
lean_object* v___x_877_; 
lean_dec(v_decl_829_);
lean_dec_ref(v___x_827_);
lean_dec_ref(v___x_826_);
lean_dec(v___x_825_);
v___x_877_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg(v_name_828_, v_kind_831_, v___y_832_, v___y_833_);
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
return v___x_877_;
}
else
{
v___y_854_ = v___y_832_;
v___y_855_ = v___y_833_;
goto v___jp_853_;
}
}
else
{
lean_dec(v___y_833_);
lean_dec_ref(v___y_832_);
lean_dec(v_decl_829_);
lean_dec(v_name_828_);
lean_dec_ref(v___x_827_);
lean_dec_ref(v___x_826_);
lean_dec(v___x_825_);
return v___x_874_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2____boxed(lean_object* v_builtin_880_, lean_object* v___x_881_, lean_object* v___x_882_, lean_object* v___x_883_, lean_object* v_name_884_, lean_object* v_decl_885_, lean_object* v_stx_886_, lean_object* v_kind_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_){
_start:
{
uint8_t v_builtin_boxed_891_; uint8_t v_kind_boxed_892_; lean_object* v_res_893_; 
v_builtin_boxed_891_ = lean_unbox(v_builtin_880_);
v_kind_boxed_892_ = lean_unbox(v_kind_887_);
v_res_893_ = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_(v_builtin_boxed_891_, v___x_881_, v___x_882_, v___x_883_, v_name_884_, v_decl_885_, v_stx_886_, v_kind_boxed_892_, v___y_888_, v___y_889_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_(uint8_t v_builtin_957_, lean_object* v_name_958_){
_start:
{
lean_object* v___f_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___f_965_; lean_object* v___x_966_; lean_object* v___y_968_; 
lean_inc(v_name_958_);
v___f_960_ = lean_alloc_closure((void*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__0_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2____boxed), 5, 1);
lean_closure_set(v___f_960_, 0, v_name_958_);
v___x_961_ = lean_box(0);
v___x_962_ = ((lean_object*)(l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__0));
v___x_963_ = ((lean_object*)(l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__1));
v___x_964_ = lean_box(v_builtin_957_);
lean_inc(v_name_958_);
v___f_965_ = lean_alloc_closure((void*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2____boxed), 11, 5);
lean_closure_set(v___f_965_, 0, v___x_964_);
lean_closure_set(v___f_965_, 1, v___x_961_);
lean_closure_set(v___f_965_, 2, v___x_962_);
lean_closure_set(v___f_965_, 3, v___x_963_);
lean_closure_set(v___f_965_, 4, v_name_958_);
v___x_966_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__24_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_));
if (v_builtin_957_ == 0)
{
lean_object* v___x_975_; 
v___x_975_ = ((lean_object*)(l_panic___at___00Lean_Server_CodeAction_getFileSource_x21_spec__0___closed__0));
v___y_968_ = v___x_975_;
goto v___jp_967_;
}
else
{
lean_object* v___x_976_; 
v___x_976_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__26_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_));
v___y_968_ = v___x_976_;
goto v___jp_967_;
}
v___jp_967_:
{
lean_object* v___x_969_; lean_object* v___x_970_; uint8_t v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_969_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2___closed__25_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_));
v___x_970_ = lean_string_append(v___y_968_, v___x_969_);
v___x_971_ = 1;
v___x_972_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_972_, 0, v___x_966_);
lean_ctor_set(v___x_972_, 1, v_name_958_);
lean_ctor_set(v___x_972_, 2, v___x_970_);
lean_ctor_set_uint8(v___x_972_, sizeof(void*)*3, v___x_971_);
v___x_973_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_973_, 0, v___x_972_);
lean_ctor_set(v___x_973_, 1, v___f_965_);
lean_ctor_set(v___x_973_, 2, v___f_960_);
v___x_974_ = l_Lean_registerBuiltinAttribute(v___x_973_);
return v___x_974_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2____boxed(lean_object* v_builtin_977_, lean_object* v_name_978_, lean_object* v___y_979_){
_start:
{
uint8_t v_builtin_boxed_980_; lean_object* v_res_981_; 
v_builtin_boxed_980_ = lean_unbox(v_builtin_977_);
v_res_981_ = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_(v_builtin_boxed_980_, v_name_978_);
return v_res_981_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_(){
_start:
{
uint8_t v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_989_ = 1;
v___x_990_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_));
v___x_991_ = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_(v___x_989_, v___x_990_);
if (lean_obj_tag(v___x_991_) == 0)
{
uint8_t v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
lean_dec_ref(v___x_991_);
v___x_992_ = 0;
v___x_993_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__3_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_));
v___x_994_ = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___lam__2_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_(v___x_992_, v___x_993_);
return v___x_994_;
}
else
{
return v___x_991_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2____boxed(lean_object* v_a_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_();
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_997_, lean_object* v_msg_998_, lean_object* v___y_999_, lean_object* v___y_1000_){
_start:
{
lean_object* v___x_1002_; 
v___x_1002_ = l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0___redArg(v_msg_998_, v___y_999_, v___y_1000_);
return v___x_1002_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_1003_, lean_object* v_msg_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0(v_00_u03b1_1003_, v_msg_1004_, v___y_1005_, v___y_1006_);
lean_dec(v___y_1006_);
lean_dec_ref(v___y_1005_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3(lean_object* v_00_u03b1_1009_, lean_object* v_attrName_1010_, lean_object* v_declName_1011_, lean_object* v_givenType_1012_, lean_object* v_expectedType_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_){
_start:
{
lean_object* v___x_1017_; 
v___x_1017_ = l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___redArg(v_attrName_1010_, v_declName_1011_, v_givenType_1012_, v_expectedType_1013_, v___y_1014_, v___y_1015_);
return v___x_1017_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3___boxed(lean_object* v_00_u03b1_1018_, lean_object* v_attrName_1019_, lean_object* v_declName_1020_, lean_object* v_givenType_1021_, lean_object* v_expectedType_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Lean_throwAttrDeclNotOfExpectedType___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__3(v_00_u03b1_1018_, v_attrName_1019_, v_declName_1020_, v_givenType_1021_, v_expectedType_1022_, v___y_1023_, v___y_1024_);
lean_dec(v___y_1024_);
lean_dec_ref(v___y_1023_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4(lean_object* v_00_u03b1_1027_, lean_object* v_name_1028_, uint8_t v_kind_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_){
_start:
{
lean_object* v___x_1033_; 
v___x_1033_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___redArg(v_name_1028_, v_kind_1029_, v___y_1030_, v___y_1031_);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4___boxed(lean_object* v_00_u03b1_1034_, lean_object* v_name_1035_, lean_object* v_kind_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_){
_start:
{
uint8_t v_kind_boxed_1040_; lean_object* v_res_1041_; 
v_kind_boxed_1040_ = lean_unbox(v_kind_1036_);
v_res_1041_ = l_Lean_throwAttrMustBeGlobal___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__4(v_00_u03b1_1034_, v_name_1035_, v_kind_boxed_1040_, v___y_1037_, v___y_1038_);
lean_dec(v___y_1038_);
lean_dec_ref(v___y_1037_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3(lean_object* v_00_u03b1_1042_, lean_object* v_constName_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3___redArg(v_constName_1043_, v___y_1044_, v___y_1045_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object* v_00_u03b1_1048_, lean_object* v_constName_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3(v_00_u03b1_1048_, v_constName_1049_, v___y_1050_, v___y_1051_);
lean_dec(v___y_1051_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4(lean_object* v_00_u03b1_1054_, lean_object* v_ref_1055_, lean_object* v_constName_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_){
_start:
{
lean_object* v___x_1060_; 
v___x_1060_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___redArg(v_ref_1055_, v_constName_1056_, v___y_1057_, v___y_1058_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b1_1061_, lean_object* v_ref_1062_, lean_object* v_constName_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
lean_object* v_res_1067_; 
v_res_1067_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4(v_00_u03b1_1061_, v_ref_1062_, v_constName_1063_, v___y_1064_, v___y_1065_);
lean_dec(v___y_1065_);
lean_dec(v_ref_1062_);
return v_res_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7(lean_object* v_00_u03b1_1068_, lean_object* v_ref_1069_, lean_object* v_msg_1070_, lean_object* v_declHint_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_){
_start:
{
lean_object* v___x_1075_; 
v___x_1075_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7___redArg(v_ref_1069_, v_msg_1070_, v_declHint_1071_, v___y_1072_, v___y_1073_);
return v___x_1075_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7___boxed(lean_object* v_00_u03b1_1076_, lean_object* v_ref_1077_, lean_object* v_msg_1078_, lean_object* v_declHint_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_){
_start:
{
lean_object* v_res_1083_; 
v_res_1083_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7(v_00_u03b1_1076_, v_ref_1077_, v_msg_1078_, v_declHint_1079_, v___y_1080_, v___y_1081_);
lean_dec(v___y_1081_);
lean_dec(v_ref_1077_);
return v_res_1083_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9(lean_object* v_msg_1084_, lean_object* v_declHint_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_){
_start:
{
lean_object* v___x_1089_; 
v___x_1089_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___redArg(v_msg_1084_, v_declHint_1085_, v___y_1087_);
return v___x_1089_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9___boxed(lean_object* v_msg_1090_, lean_object* v_declHint_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__8_spec__9(v_msg_1090_, v_declHint_1091_, v___y_1092_, v___y_1093_);
lean_dec(v___y_1093_);
lean_dec_ref(v___y_1092_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__9(lean_object* v_00_u03b1_1096_, lean_object* v_ref_1097_, lean_object* v_msg_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v___x_1102_; 
v___x_1102_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__9___redArg(v_ref_1097_, v_msg_1098_, v___y_1099_, v___y_1100_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__9___boxed(lean_object* v_00_u03b1_1103_, lean_object* v_ref_1104_, lean_object* v_msg_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
lean_object* v_res_1109_; 
v_res_1109_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__2_spec__3_spec__4_spec__7_spec__9(v_00_u03b1_1103_, v_ref_1104_, v_msg_1105_, v___y_1106_, v___y_1107_);
lean_dec(v___y_1107_);
lean_dec(v_ref_1104_);
return v_res_1109_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___redArg(lean_object* v_inst_1114_, lean_object* v_inst_1115_, lean_object* v_inst_1116_, lean_object* v_inst_1117_, lean_object* v_declName_1118_){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; 
v___x_1119_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___redArg___closed__0));
v___x_1120_ = l_Lean_evalConstCheck___redArg(v_inst_1117_, v_inst_1114_, v_inst_1116_, v_inst_1115_, v___x_1119_, v_declName_1118_);
return v___x_1120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe(lean_object* v_M_1121_, lean_object* v_inst_1122_, lean_object* v_inst_1123_, lean_object* v_inst_1124_, lean_object* v_inst_1125_, lean_object* v_declName_1126_){
_start:
{
lean_object* v___x_1127_; 
v___x_1127_ = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___redArg(v_inst_1122_, v_inst_1123_, v_inst_1124_, v_inst_1125_, v_declName_1126_);
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Server_handleCodeAction_spec__6(lean_object* v___y_1128_){
_start:
{
lean_object* v_doc_1130_; lean_object* v___x_1131_; 
v_doc_1130_ = lean_ctor_get(v___y_1128_, 1);
lean_inc_ref(v_doc_1130_);
v___x_1131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1131_, 0, v_doc_1130_);
return v___x_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_readDoc___at___00Lean_Server_handleCodeAction_spec__6___boxed(lean_object* v___y_1132_, lean_object* v___y_1133_){
_start:
{
lean_object* v_res_1134_; 
v_res_1134_ = l_Lean_Server_RequestM_readDoc___at___00Lean_Server_handleCodeAction_spec__6(v___y_1132_);
lean_dec_ref(v___y_1132_);
return v_res_1134_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Server_handleCodeAction_spec__4(lean_object* v_init_1135_, lean_object* v_x_1136_){
_start:
{
if (lean_obj_tag(v_x_1136_) == 0)
{
lean_object* v_k_1137_; lean_object* v_v_1138_; lean_object* v_l_1139_; lean_object* v_r_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
v_k_1137_ = lean_ctor_get(v_x_1136_, 1);
v_v_1138_ = lean_ctor_get(v_x_1136_, 2);
v_l_1139_ = lean_ctor_get(v_x_1136_, 3);
v_r_1140_ = lean_ctor_get(v_x_1136_, 4);
v___x_1141_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Server_handleCodeAction_spec__4(v_init_1135_, v_r_1140_);
lean_inc(v_v_1138_);
lean_inc(v_k_1137_);
v___x_1142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1142_, 0, v_k_1137_);
lean_ctor_set(v___x_1142_, 1, v_v_1138_);
v___x_1143_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1142_);
lean_ctor_set(v___x_1143_, 1, v___x_1141_);
v_init_1135_ = v___x_1143_;
v_x_1136_ = v_l_1139_;
goto _start;
}
else
{
return v_init_1135_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Server_handleCodeAction_spec__4___boxed(lean_object* v_init_1145_, lean_object* v_x_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Server_handleCodeAction_spec__4(v_init_1145_, v_x_1146_);
lean_dec(v_x_1146_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3___redArg___lam__0(lean_object* v___y_1148_, lean_object* v___y_1149_){
_start:
{
lean_object* v___x_1151_; lean_object* v_env_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1151_ = lean_st_ref_get(v___y_1149_);
v_env_1152_ = lean_ctor_get(v___x_1151_, 0);
lean_inc_ref(v_env_1152_);
lean_dec(v___x_1151_);
v___x_1153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1153_, 0, v_env_1152_);
v___x_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3___redArg___lam__0___boxed(lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_){
_start:
{
lean_object* v_res_1158_; 
v_res_1158_ = l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3___redArg___lam__0(v___y_1155_, v___y_1156_);
lean_dec(v___y_1156_);
lean_dec_ref(v___y_1155_);
return v_res_1158_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1159_ = lean_box(0);
v___x_1160_ = l_Lean_Elab_abortCommandExceptionId;
v___x_1161_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1161_, 0, v___x_1160_);
lean_ctor_set(v___x_1161_, 1, v___x_1159_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__6___redArg(){
_start:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; 
v___x_1163_ = lean_obj_once(&l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__6___redArg___closed__0, &l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__6___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__6___redArg___closed__0);
v___x_1164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1163_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v___y_1165_){
_start:
{
lean_object* v_res_1166_; 
v_res_1166_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__6___redArg();
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5_spec__9___redArg(lean_object* v_msg_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_){
_start:
{
lean_object* v_ref_1171_; lean_object* v___x_1172_; lean_object* v_a_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1181_; 
v_ref_1171_ = lean_ctor_get(v___y_1168_, 5);
v___x_1172_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2__spec__0_spec__0(v_msg_1167_, v___y_1168_, v___y_1169_);
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1181_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1175_ = v___x_1172_;
v_isShared_1176_ = v_isSharedCheck_1181_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_a_1173_);
lean_dec(v___x_1172_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1181_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v___x_1177_; lean_object* v___x_1179_; 
lean_inc(v_ref_1171_);
v___x_1177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1177_, 0, v_ref_1171_);
lean_ctor_set(v___x_1177_, 1, v_a_1173_);
if (v_isShared_1176_ == 0)
{
lean_ctor_set_tag(v___x_1175_, 1);
lean_ctor_set(v___x_1175_, 0, v___x_1177_);
v___x_1179_ = v___x_1175_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v___x_1177_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5_spec__9___redArg___boxed(lean_object* v_msg_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_){
_start:
{
lean_object* v_res_1186_; 
v_res_1186_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5_spec__9___redArg(v_msg_1182_, v___y_1183_, v___y_1184_);
lean_dec(v___y_1184_);
lean_dec_ref(v___y_1183_);
return v_res_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5___redArg(lean_object* v_x_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
if (lean_obj_tag(v_x_1187_) == 0)
{
lean_object* v_a_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; 
v_a_1192_ = lean_ctor_get(v_x_1187_, 0);
lean_inc(v_a_1192_);
lean_dec_ref(v_x_1187_);
v___x_1193_ = l_Lean_stringToMessageData(v_a_1192_);
v___x_1194_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5_spec__9___redArg(v___x_1193_, v___y_1189_, v___y_1190_);
return v___x_1194_;
}
else
{
lean_object* v_a_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1203_; 
v_a_1195_ = lean_ctor_get(v_x_1187_, 0);
v_isSharedCheck_1203_ = !lean_is_exclusive(v_x_1187_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1197_ = v_x_1187_;
v_isShared_1198_ = v_isSharedCheck_1203_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_a_1195_);
lean_dec(v_x_1187_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1203_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v___x_1200_; 
if (v_isShared_1198_ == 0)
{
v___x_1200_ = v___x_1197_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v_a_1195_);
v___x_1200_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
lean_object* v___x_1201_; 
v___x_1201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1201_, 0, v___x_1200_);
return v___x_1201_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_x_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_){
_start:
{
lean_object* v_res_1209_; 
v_res_1209_ = l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5___redArg(v_x_1204_, v___y_1205_, v___y_1206_, v___y_1207_);
lean_dec(v___y_1207_);
lean_dec_ref(v___y_1206_);
lean_dec_ref(v___y_1205_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3___redArg(lean_object* v_typeName_1210_, lean_object* v_constName_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_){
_start:
{
lean_object* v___x_1216_; lean_object* v_env_1217_; uint8_t v___x_1218_; 
v___x_1216_ = lean_st_ref_get(v___y_1214_);
v_env_1217_ = lean_ctor_get(v___x_1216_, 0);
lean_inc_ref(v_env_1217_);
lean_dec(v___x_1216_);
lean_inc(v_constName_1211_);
v___x_1218_ = lean_has_compile_error(v_env_1217_, v_constName_1211_);
if (v___x_1218_ == 0)
{
lean_object* v___x_1219_; 
v___x_1219_ = l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3___redArg___lam__0(v___y_1213_, v___y_1214_);
if (lean_obj_tag(v___x_1219_) == 0)
{
lean_object* v_a_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1239_; 
v_a_1220_ = lean_ctor_get(v___x_1219_, 0);
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1219_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1222_ = v___x_1219_;
v_isShared_1223_ = v_isSharedCheck_1239_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_a_1220_);
lean_dec(v___x_1219_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1239_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
if (lean_obj_tag(v_a_1220_) == 0)
{
lean_object* v_a_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1234_; 
lean_dec(v_constName_1211_);
lean_dec(v_typeName_1210_);
v_a_1224_ = lean_ctor_get(v_a_1220_, 0);
v_isSharedCheck_1234_ = !lean_is_exclusive(v_a_1220_);
if (v_isSharedCheck_1234_ == 0)
{
v___x_1226_ = v_a_1220_;
v_isShared_1227_ = v_isSharedCheck_1234_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_a_1224_);
lean_dec(v_a_1220_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1234_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1229_; 
if (v_isShared_1227_ == 0)
{
v___x_1229_ = v___x_1226_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v_a_1224_);
v___x_1229_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
lean_object* v___x_1231_; 
if (v_isShared_1223_ == 0)
{
lean_ctor_set(v___x_1222_, 0, v___x_1229_);
v___x_1231_ = v___x_1222_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v___x_1229_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
}
else
{
lean_object* v_a_1235_; lean_object* v_options_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
lean_del_object(v___x_1222_);
v_a_1235_ = lean_ctor_get(v_a_1220_, 0);
lean_inc(v_a_1235_);
lean_dec_ref(v_a_1220_);
v_options_1236_ = lean_ctor_get(v___y_1213_, 2);
v___x_1237_ = l_Lean_Environment_evalConstCheck___redArg(v_a_1235_, v_options_1236_, v_typeName_1210_, v_constName_1211_);
v___x_1238_ = l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5___redArg(v___x_1237_, v___y_1212_, v___y_1213_, v___y_1214_);
return v___x_1238_;
}
}
}
else
{
lean_object* v_a_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1247_; 
lean_dec(v_constName_1211_);
lean_dec(v_typeName_1210_);
v_a_1240_ = lean_ctor_get(v___x_1219_, 0);
v_isSharedCheck_1247_ = !lean_is_exclusive(v___x_1219_);
if (v_isSharedCheck_1247_ == 0)
{
v___x_1242_ = v___x_1219_;
v_isShared_1243_ = v_isSharedCheck_1247_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_a_1240_);
lean_dec(v___x_1219_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1247_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1245_; 
if (v_isShared_1243_ == 0)
{
v___x_1245_ = v___x_1242_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v_a_1240_);
v___x_1245_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
return v___x_1245_;
}
}
}
}
else
{
lean_object* v___x_1248_; 
v___x_1248_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__6___redArg();
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_object* v_a_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1293_; 
v_a_1249_ = lean_ctor_get(v___x_1248_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1251_ = v___x_1248_;
v_isShared_1252_ = v_isSharedCheck_1293_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_a_1249_);
lean_dec(v___x_1248_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1293_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
if (lean_obj_tag(v_a_1249_) == 0)
{
lean_object* v_a_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1263_; 
lean_dec(v_constName_1211_);
lean_dec(v_typeName_1210_);
v_a_1253_ = lean_ctor_get(v_a_1249_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v_a_1249_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1255_ = v_a_1249_;
v_isShared_1256_ = v_isSharedCheck_1263_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_a_1253_);
lean_dec(v_a_1249_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1263_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1258_; 
if (v_isShared_1256_ == 0)
{
v___x_1258_ = v___x_1255_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_a_1253_);
v___x_1258_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
lean_object* v___x_1260_; 
if (v_isShared_1252_ == 0)
{
lean_ctor_set(v___x_1251_, 0, v___x_1258_);
v___x_1260_ = v___x_1251_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v___x_1264_; 
lean_dec_ref(v_a_1249_);
lean_del_object(v___x_1251_);
v___x_1264_ = l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3___redArg___lam__0(v___y_1213_, v___y_1214_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v_a_1265_; lean_object* v___x_1267_; uint8_t v_isShared_1268_; uint8_t v_isSharedCheck_1284_; 
v_a_1265_ = lean_ctor_get(v___x_1264_, 0);
v_isSharedCheck_1284_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1267_ = v___x_1264_;
v_isShared_1268_ = v_isSharedCheck_1284_;
goto v_resetjp_1266_;
}
else
{
lean_inc(v_a_1265_);
lean_dec(v___x_1264_);
v___x_1267_ = lean_box(0);
v_isShared_1268_ = v_isSharedCheck_1284_;
goto v_resetjp_1266_;
}
v_resetjp_1266_:
{
if (lean_obj_tag(v_a_1265_) == 0)
{
lean_object* v_a_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1279_; 
lean_dec(v_constName_1211_);
lean_dec(v_typeName_1210_);
v_a_1269_ = lean_ctor_get(v_a_1265_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v_a_1265_);
if (v_isSharedCheck_1279_ == 0)
{
v___x_1271_ = v_a_1265_;
v_isShared_1272_ = v_isSharedCheck_1279_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_a_1269_);
lean_dec(v_a_1265_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1279_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v___x_1274_; 
if (v_isShared_1272_ == 0)
{
v___x_1274_ = v___x_1271_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v_a_1269_);
v___x_1274_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
lean_object* v___x_1276_; 
if (v_isShared_1268_ == 0)
{
lean_ctor_set(v___x_1267_, 0, v___x_1274_);
v___x_1276_ = v___x_1267_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v___x_1274_);
v___x_1276_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
return v___x_1276_;
}
}
}
}
else
{
lean_object* v_a_1280_; lean_object* v_options_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
lean_del_object(v___x_1267_);
v_a_1280_ = lean_ctor_get(v_a_1265_, 0);
lean_inc(v_a_1280_);
lean_dec_ref(v_a_1265_);
v_options_1281_ = lean_ctor_get(v___y_1213_, 2);
v___x_1282_ = l_Lean_Environment_evalConstCheck___redArg(v_a_1280_, v_options_1281_, v_typeName_1210_, v_constName_1211_);
v___x_1283_ = l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5___redArg(v___x_1282_, v___y_1212_, v___y_1213_, v___y_1214_);
return v___x_1283_;
}
}
}
else
{
lean_object* v_a_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1292_; 
lean_dec(v_constName_1211_);
lean_dec(v_typeName_1210_);
v_a_1285_ = lean_ctor_get(v___x_1264_, 0);
v_isSharedCheck_1292_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1287_ = v___x_1264_;
v_isShared_1288_ = v_isSharedCheck_1292_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_a_1285_);
lean_dec(v___x_1264_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1292_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___x_1290_; 
if (v_isShared_1288_ == 0)
{
v___x_1290_ = v___x_1287_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v_a_1285_);
v___x_1290_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
return v___x_1290_;
}
}
}
}
}
}
else
{
lean_object* v_a_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1301_; 
lean_dec(v_constName_1211_);
lean_dec(v_typeName_1210_);
v_a_1294_ = lean_ctor_get(v___x_1248_, 0);
v_isSharedCheck_1301_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1296_ = v___x_1248_;
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_a_1294_);
lean_dec(v___x_1248_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1299_; 
if (v_isShared_1297_ == 0)
{
v___x_1299_ = v___x_1296_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v_a_1294_);
v___x_1299_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
return v___x_1299_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3___redArg___boxed(lean_object* v_typeName_1302_, lean_object* v_constName_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3___redArg(v_typeName_1302_, v_constName_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
lean_dec_ref(v___y_1304_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2(lean_object* v_declName_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1314_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___redArg___closed__0));
v___x_1315_ = l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3___redArg(v___x_1314_, v_declName_1309_, v___y_1310_, v___y_1311_, v___y_1312_);
return v___x_1315_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2___boxed(lean_object* v_declName_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_, lean_object* v___y_1320_){
_start:
{
lean_object* v_res_1321_; 
v_res_1321_ = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2(v_declName_1316_, v___y_1317_, v___y_1318_, v___y_1319_);
lean_dec(v___y_1319_);
lean_dec_ref(v___y_1318_);
lean_dec_ref(v___y_1317_);
return v_res_1321_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_handleCodeAction_spec__3(size_t v_sz_1322_, size_t v_i_1323_, lean_object* v_bs_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
uint8_t v___x_1329_; 
v___x_1329_ = lean_usize_dec_lt(v_i_1323_, v_sz_1322_);
if (v___x_1329_ == 0)
{
lean_object* v___x_1330_; lean_object* v___x_1331_; 
v___x_1330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1330_, 0, v_bs_1324_);
v___x_1331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1331_, 0, v___x_1330_);
return v___x_1331_;
}
else
{
lean_object* v_v_1332_; lean_object* v___x_1333_; 
v_v_1332_ = lean_array_uget_borrowed(v_bs_1324_, v_i_1323_);
lean_inc(v_v_1332_);
v___x_1333_ = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2(v_v_1332_, v___y_1325_, v___y_1326_, v___y_1327_);
if (lean_obj_tag(v___x_1333_) == 0)
{
lean_object* v_a_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1356_; 
v_a_1334_ = lean_ctor_get(v___x_1333_, 0);
v_isSharedCheck_1356_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1356_ == 0)
{
v___x_1336_ = v___x_1333_;
v_isShared_1337_ = v_isSharedCheck_1356_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_a_1334_);
lean_dec(v___x_1333_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1356_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
if (lean_obj_tag(v_a_1334_) == 0)
{
lean_object* v_a_1338_; lean_object* v___x_1340_; uint8_t v_isShared_1341_; uint8_t v_isSharedCheck_1348_; 
lean_dec_ref(v_bs_1324_);
v_a_1338_ = lean_ctor_get(v_a_1334_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v_a_1334_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1340_ = v_a_1334_;
v_isShared_1341_ = v_isSharedCheck_1348_;
goto v_resetjp_1339_;
}
else
{
lean_inc(v_a_1338_);
lean_dec(v_a_1334_);
v___x_1340_ = lean_box(0);
v_isShared_1341_ = v_isSharedCheck_1348_;
goto v_resetjp_1339_;
}
v_resetjp_1339_:
{
lean_object* v___x_1343_; 
if (v_isShared_1341_ == 0)
{
v___x_1343_ = v___x_1340_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v_a_1338_);
v___x_1343_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
lean_object* v___x_1345_; 
if (v_isShared_1337_ == 0)
{
lean_ctor_set(v___x_1336_, 0, v___x_1343_);
v___x_1345_ = v___x_1336_;
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
lean_object* v_a_1349_; lean_object* v___x_1350_; lean_object* v_bs_x27_1351_; size_t v___x_1352_; size_t v___x_1353_; lean_object* v___x_1354_; 
lean_del_object(v___x_1336_);
v_a_1349_ = lean_ctor_get(v_a_1334_, 0);
lean_inc(v_a_1349_);
lean_dec_ref(v_a_1334_);
v___x_1350_ = lean_unsigned_to_nat(0u);
v_bs_x27_1351_ = lean_array_uset(v_bs_1324_, v_i_1323_, v___x_1350_);
v___x_1352_ = ((size_t)1ULL);
v___x_1353_ = lean_usize_add(v_i_1323_, v___x_1352_);
v___x_1354_ = lean_array_uset(v_bs_x27_1351_, v_i_1323_, v_a_1349_);
v_i_1323_ = v___x_1353_;
v_bs_1324_ = v___x_1354_;
goto _start;
}
}
}
else
{
lean_object* v_a_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1364_; 
lean_dec_ref(v_bs_1324_);
v_a_1357_ = lean_ctor_get(v___x_1333_, 0);
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1359_ = v___x_1333_;
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_a_1357_);
lean_dec(v___x_1333_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1362_; 
if (v_isShared_1360_ == 0)
{
v___x_1362_ = v___x_1359_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_a_1357_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_handleCodeAction_spec__3___boxed(lean_object* v_sz_1365_, lean_object* v_i_1366_, lean_object* v_bs_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_){
_start:
{
size_t v_sz_boxed_1372_; size_t v_i_boxed_1373_; lean_object* v_res_1374_; 
v_sz_boxed_1372_ = lean_unbox_usize(v_sz_1365_);
lean_dec(v_sz_1365_);
v_i_boxed_1373_ = lean_unbox_usize(v_i_1366_);
lean_dec(v_i_1366_);
v_res_1374_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_handleCodeAction_spec__3(v_sz_boxed_1372_, v_i_boxed_1373_, v_bs_1367_, v___y_1368_, v___y_1369_, v___y_1370_);
lean_dec(v___y_1370_);
lean_dec_ref(v___y_1369_);
lean_dec_ref(v___y_1368_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_handleCodeAction_spec__1_spec__1(lean_object* v_init_1375_, lean_object* v_x_1376_){
_start:
{
if (lean_obj_tag(v_x_1376_) == 0)
{
lean_object* v_k_1377_; lean_object* v_l_1378_; lean_object* v_r_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; 
v_k_1377_ = lean_ctor_get(v_x_1376_, 1);
lean_inc(v_k_1377_);
v_l_1378_ = lean_ctor_get(v_x_1376_, 3);
lean_inc(v_l_1378_);
v_r_1379_ = lean_ctor_get(v_x_1376_, 4);
lean_inc(v_r_1379_);
lean_dec_ref(v_x_1376_);
v___x_1380_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_handleCodeAction_spec__1_spec__1(v_init_1375_, v_l_1378_);
v___x_1381_ = lean_array_push(v___x_1380_, v_k_1377_);
v_init_1375_ = v___x_1381_;
v_x_1376_ = v_r_1379_;
goto _start;
}
else
{
return v_init_1375_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeAction___lam__0(lean_object* v___x_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_){
_start:
{
lean_object* v___x_1388_; lean_object* v_env_1389_; lean_object* v___x_1390_; lean_object* v_toEnvExtension_1391_; lean_object* v_asyncMode_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___y_1396_; 
v___x_1388_ = lean_st_ref_get(v___y_1386_);
v_env_1389_ = lean_ctor_get(v___x_1388_, 0);
lean_inc_ref(v_env_1389_);
lean_dec(v___x_1388_);
v___x_1390_ = l_Lean_Server_codeActionProviderExt;
v_toEnvExtension_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc_ref(v_toEnvExtension_1391_);
v_asyncMode_1392_ = lean_ctor_get(v_toEnvExtension_1391_, 2);
lean_inc(v_asyncMode_1392_);
lean_dec_ref(v_toEnvExtension_1391_);
v___x_1393_ = lean_box(0);
v___x_1394_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1383_, v___x_1390_, v_env_1389_, v_asyncMode_1392_, v___x_1393_);
lean_dec(v_asyncMode_1392_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v_size_1444_; 
v_size_1444_ = lean_ctor_get(v___x_1394_, 0);
lean_inc(v_size_1444_);
v___y_1396_ = v_size_1444_;
goto v___jp_1395_;
}
else
{
lean_object* v___x_1445_; 
v___x_1445_ = lean_unsigned_to_nat(0u);
v___y_1396_ = v___x_1445_;
goto v___jp_1395_;
}
v___jp_1395_:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; size_t v_sz_1399_; size_t v___x_1400_; lean_object* v___x_1401_; 
v___x_1397_ = lean_mk_empty_array_with_capacity(v___y_1396_);
lean_dec(v___y_1396_);
v___x_1398_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_handleCodeAction_spec__1_spec__1(v___x_1397_, v___x_1394_);
v_sz_1399_ = lean_array_size(v___x_1398_);
v___x_1400_ = ((size_t)0ULL);
lean_inc_ref(v___x_1398_);
v___x_1401_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_handleCodeAction_spec__3(v_sz_1399_, v___x_1400_, v___x_1398_, v___y_1384_, v___y_1385_, v___y_1386_);
if (lean_obj_tag(v___x_1401_) == 0)
{
lean_object* v_a_1402_; lean_object* v___x_1404_; uint8_t v_isShared_1405_; uint8_t v_isSharedCheck_1435_; 
v_a_1402_ = lean_ctor_get(v___x_1401_, 0);
v_isSharedCheck_1435_ = !lean_is_exclusive(v___x_1401_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1404_ = v___x_1401_;
v_isShared_1405_ = v_isSharedCheck_1435_;
goto v_resetjp_1403_;
}
else
{
lean_inc(v_a_1402_);
lean_dec(v___x_1401_);
v___x_1404_ = lean_box(0);
v_isShared_1405_ = v_isSharedCheck_1435_;
goto v_resetjp_1403_;
}
v_resetjp_1403_:
{
if (lean_obj_tag(v_a_1402_) == 0)
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1416_; 
lean_dec_ref(v___x_1398_);
v_a_1406_ = lean_ctor_get(v_a_1402_, 0);
v_isSharedCheck_1416_ = !lean_is_exclusive(v_a_1402_);
if (v_isSharedCheck_1416_ == 0)
{
v___x_1408_ = v_a_1402_;
v_isShared_1409_ = v_isSharedCheck_1416_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v_a_1402_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1416_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
lean_object* v___x_1413_; 
if (v_isShared_1405_ == 0)
{
lean_ctor_set(v___x_1404_, 0, v___x_1411_);
v___x_1413_ = v___x_1404_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1411_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
}
}
else
{
lean_object* v_a_1417_; lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1434_; 
v_a_1417_ = lean_ctor_get(v_a_1402_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v_a_1402_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1419_ = v_a_1402_;
v_isShared_1420_ = v_isSharedCheck_1434_;
goto v_resetjp_1418_;
}
else
{
lean_inc(v_a_1417_);
lean_dec(v_a_1402_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1434_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1429_; 
v___x_1421_ = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_builtinCodeActionProviders;
v___x_1422_ = lean_st_ref_get(v___x_1421_);
v___x_1423_ = lean_box(0);
v___x_1424_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00Lean_Server_handleCodeAction_spec__4(v___x_1423_, v___x_1422_);
lean_dec(v___x_1422_);
v___x_1425_ = lean_array_mk(v___x_1424_);
v___x_1426_ = l_Array_zip___redArg(v___x_1398_, v_a_1417_);
lean_dec(v_a_1417_);
lean_dec_ref(v___x_1398_);
v___x_1427_ = l_Array_append___redArg(v___x_1425_, v___x_1426_);
lean_dec_ref(v___x_1426_);
if (v_isShared_1420_ == 0)
{
lean_ctor_set(v___x_1419_, 0, v___x_1427_);
v___x_1429_ = v___x_1419_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v___x_1427_);
v___x_1429_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
lean_object* v___x_1431_; 
if (v_isShared_1405_ == 0)
{
lean_ctor_set(v___x_1404_, 0, v___x_1429_);
v___x_1431_ = v___x_1404_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v___x_1429_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
return v___x_1431_;
}
}
}
}
}
}
else
{
lean_object* v_a_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1443_; 
lean_dec_ref(v___x_1398_);
v_a_1436_ = lean_ctor_get(v___x_1401_, 0);
v_isSharedCheck_1443_ = !lean_is_exclusive(v___x_1401_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1438_ = v___x_1401_;
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_a_1436_);
lean_dec(v___x_1401_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1441_; 
if (v_isShared_1439_ == 0)
{
v___x_1441_ = v___x_1438_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_a_1436_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeAction___lam__0___boxed(lean_object* v___x_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v_res_1451_; 
v_res_1451_ = l_Lean_Server_handleCodeAction___lam__0(v___x_1446_, v___y_1447_, v___y_1448_, v___y_1449_);
lean_dec(v___y_1449_);
lean_dec_ref(v___y_1448_);
lean_dec_ref(v___y_1447_);
return v_res_1451_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Server_handleCodeAction_spec__0___redArg(lean_object* v_params_1452_, lean_object* v_fst_1453_, lean_object* v_as_1454_, lean_object* v_i_1455_, lean_object* v_j_1456_, lean_object* v_bs_1457_){
_start:
{
lean_object* v_zero_1459_; uint8_t v_isZero_1460_; 
v_zero_1459_ = lean_unsigned_to_nat(0u);
v_isZero_1460_ = lean_nat_dec_eq(v_i_1455_, v_zero_1459_);
if (v_isZero_1460_ == 1)
{
lean_object* v___x_1461_; 
lean_dec(v_j_1456_);
lean_dec(v_i_1455_);
lean_dec(v_fst_1453_);
lean_dec_ref(v_params_1452_);
v___x_1461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1461_, 0, v_bs_1457_);
return v___x_1461_;
}
else
{
lean_object* v___x_1462_; lean_object* v_eager_1463_; lean_object* v_toWorkDoneProgressParams_1464_; lean_object* v_toPartialResultParams_1465_; lean_object* v_title_1466_; lean_object* v_kind_x3f_1467_; lean_object* v_diagnostics_x3f_1468_; lean_object* v_isPreferred_x3f_1469_; lean_object* v_disabled_x3f_1470_; lean_object* v_edit_x3f_1471_; lean_object* v_command_x3f_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1487_; 
v___x_1462_ = lean_array_fget_borrowed(v_as_1454_, v_j_1456_);
v_eager_1463_ = lean_ctor_get(v___x_1462_, 0);
lean_inc_ref(v_eager_1463_);
v_toWorkDoneProgressParams_1464_ = lean_ctor_get(v_eager_1463_, 0);
v_toPartialResultParams_1465_ = lean_ctor_get(v_eager_1463_, 1);
v_title_1466_ = lean_ctor_get(v_eager_1463_, 2);
v_kind_x3f_1467_ = lean_ctor_get(v_eager_1463_, 3);
v_diagnostics_x3f_1468_ = lean_ctor_get(v_eager_1463_, 4);
v_isPreferred_x3f_1469_ = lean_ctor_get(v_eager_1463_, 5);
v_disabled_x3f_1470_ = lean_ctor_get(v_eager_1463_, 6);
v_edit_x3f_1471_ = lean_ctor_get(v_eager_1463_, 7);
v_command_x3f_1472_ = lean_ctor_get(v_eager_1463_, 8);
v_isSharedCheck_1487_ = !lean_is_exclusive(v_eager_1463_);
if (v_isSharedCheck_1487_ == 0)
{
lean_object* v_unused_1488_; 
v_unused_1488_ = lean_ctor_get(v_eager_1463_, 9);
lean_dec(v_unused_1488_);
v___x_1474_ = v_eager_1463_;
v_isShared_1475_ = v_isSharedCheck_1487_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_command_x3f_1472_);
lean_inc(v_edit_x3f_1471_);
lean_inc(v_disabled_x3f_1470_);
lean_inc(v_isPreferred_x3f_1469_);
lean_inc(v_diagnostics_x3f_1468_);
lean_inc(v_kind_x3f_1467_);
lean_inc(v_title_1466_);
lean_inc(v_toPartialResultParams_1465_);
lean_inc(v_toWorkDoneProgressParams_1464_);
lean_dec(v_eager_1463_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1487_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v_one_1476_; lean_object* v_n_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1482_; 
v_one_1476_ = lean_unsigned_to_nat(1u);
v_n_1477_ = lean_nat_sub(v_i_1455_, v_one_1476_);
lean_dec(v_i_1455_);
lean_inc(v_j_1456_);
lean_inc(v_fst_1453_);
lean_inc_ref(v_params_1452_);
v___x_1478_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1478_, 0, v_params_1452_);
lean_ctor_set(v___x_1478_, 1, v_fst_1453_);
lean_ctor_set(v___x_1478_, 2, v_j_1456_);
v___x_1479_ = l_Lean_Server_instToJsonCodeActionResolveData_toJson(v___x_1478_);
v___x_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1480_, 0, v___x_1479_);
if (v_isShared_1475_ == 0)
{
lean_ctor_set(v___x_1474_, 9, v___x_1480_);
v___x_1482_ = v___x_1474_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v_toWorkDoneProgressParams_1464_);
lean_ctor_set(v_reuseFailAlloc_1486_, 1, v_toPartialResultParams_1465_);
lean_ctor_set(v_reuseFailAlloc_1486_, 2, v_title_1466_);
lean_ctor_set(v_reuseFailAlloc_1486_, 3, v_kind_x3f_1467_);
lean_ctor_set(v_reuseFailAlloc_1486_, 4, v_diagnostics_x3f_1468_);
lean_ctor_set(v_reuseFailAlloc_1486_, 5, v_isPreferred_x3f_1469_);
lean_ctor_set(v_reuseFailAlloc_1486_, 6, v_disabled_x3f_1470_);
lean_ctor_set(v_reuseFailAlloc_1486_, 7, v_edit_x3f_1471_);
lean_ctor_set(v_reuseFailAlloc_1486_, 8, v_command_x3f_1472_);
lean_ctor_set(v_reuseFailAlloc_1486_, 9, v___x_1480_);
v___x_1482_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
lean_object* v___x_1483_; lean_object* v___x_1484_; 
v___x_1483_ = lean_nat_add(v_j_1456_, v_one_1476_);
lean_dec(v_j_1456_);
v___x_1484_ = lean_array_push(v_bs_1457_, v___x_1482_);
v_i_1455_ = v_n_1477_;
v_j_1456_ = v___x_1483_;
v_bs_1457_ = v___x_1484_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Server_handleCodeAction_spec__0___redArg___boxed(lean_object* v_params_1489_, lean_object* v_fst_1490_, lean_object* v_as_1491_, lean_object* v_i_1492_, lean_object* v_j_1493_, lean_object* v_bs_1494_, lean_object* v___y_1495_){
_start:
{
lean_object* v_res_1496_; 
v_res_1496_ = l_Array_mapFinIdxM_map___at___00Lean_Server_handleCodeAction_spec__0___redArg(v_params_1489_, v_fst_1490_, v_as_1491_, v_i_1492_, v_j_1493_, v_bs_1494_);
lean_dec_ref(v_as_1491_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_handleCodeAction_spec__5(lean_object* v_params_1497_, lean_object* v_snap_1498_, lean_object* v_as_1499_, size_t v_i_1500_, size_t v_stop_1501_, lean_object* v_b_1502_, lean_object* v___y_1503_){
_start:
{
lean_object* v_a_1506_; uint8_t v___x_1510_; 
v___x_1510_ = lean_usize_dec_eq(v_i_1500_, v_stop_1501_);
if (v___x_1510_ == 0)
{
lean_object* v___x_1511_; lean_object* v_fst_1512_; lean_object* v_snd_1513_; lean_object* v___x_1514_; 
v___x_1511_ = lean_array_uget_borrowed(v_as_1499_, v_i_1500_);
v_fst_1512_ = lean_ctor_get(v___x_1511_, 0);
v_snd_1513_ = lean_ctor_get(v___x_1511_, 1);
v___x_1514_ = l_Lean_Server_RequestM_checkCancelled(v___y_1503_);
if (lean_obj_tag(v___x_1514_) == 0)
{
lean_object* v___x_1515_; 
lean_dec_ref(v___x_1514_);
lean_inc(v_snd_1513_);
lean_inc_ref(v___y_1503_);
lean_inc_ref(v_snap_1498_);
lean_inc_ref(v_params_1497_);
v___x_1515_ = lean_apply_4(v_snd_1513_, v_params_1497_, v_snap_1498_, v___y_1503_, lean_box(0));
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_object* v_a_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
v_a_1516_ = lean_ctor_get(v___x_1515_, 0);
lean_inc(v_a_1516_);
lean_dec_ref(v___x_1515_);
v___x_1517_ = lean_array_get_size(v_a_1516_);
v___x_1518_ = lean_unsigned_to_nat(0u);
v___x_1519_ = lean_mk_empty_array_with_capacity(v___x_1517_);
lean_inc(v_fst_1512_);
lean_inc_ref(v_params_1497_);
v___x_1520_ = l_Array_mapFinIdxM_map___at___00Lean_Server_handleCodeAction_spec__0___redArg(v_params_1497_, v_fst_1512_, v_a_1516_, v___x_1517_, v___x_1518_, v___x_1519_);
lean_dec(v_a_1516_);
if (lean_obj_tag(v___x_1520_) == 0)
{
lean_object* v_a_1521_; lean_object* v___x_1522_; 
v_a_1521_ = lean_ctor_get(v___x_1520_, 0);
lean_inc(v_a_1521_);
lean_dec_ref(v___x_1520_);
v___x_1522_ = l_Array_append___redArg(v_b_1502_, v_a_1521_);
lean_dec(v_a_1521_);
v_a_1506_ = v___x_1522_;
goto v___jp_1505_;
}
else
{
lean_dec_ref(v_b_1502_);
if (lean_obj_tag(v___x_1520_) == 0)
{
lean_object* v_a_1523_; 
v_a_1523_ = lean_ctor_get(v___x_1520_, 0);
lean_inc(v_a_1523_);
lean_dec_ref(v___x_1520_);
v_a_1506_ = v_a_1523_;
goto v___jp_1505_;
}
else
{
lean_dec_ref(v___y_1503_);
lean_dec_ref(v_snap_1498_);
lean_dec_ref(v_params_1497_);
return v___x_1520_;
}
}
}
else
{
lean_object* v_a_1524_; lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1531_; 
lean_dec_ref(v___y_1503_);
lean_dec_ref(v_b_1502_);
lean_dec_ref(v_snap_1498_);
lean_dec_ref(v_params_1497_);
v_a_1524_ = lean_ctor_get(v___x_1515_, 0);
v_isSharedCheck_1531_ = !lean_is_exclusive(v___x_1515_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1526_ = v___x_1515_;
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
else
{
lean_inc(v_a_1524_);
lean_dec(v___x_1515_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v___x_1529_; 
if (v_isShared_1527_ == 0)
{
v___x_1529_ = v___x_1526_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v_a_1524_);
v___x_1529_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
return v___x_1529_;
}
}
}
}
else
{
lean_object* v_a_1532_; lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1539_; 
lean_dec_ref(v___y_1503_);
lean_dec_ref(v_b_1502_);
lean_dec_ref(v_snap_1498_);
lean_dec_ref(v_params_1497_);
v_a_1532_ = lean_ctor_get(v___x_1514_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1514_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1534_ = v___x_1514_;
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
else
{
lean_inc(v_a_1532_);
lean_dec(v___x_1514_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1539_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
lean_object* v___x_1537_; 
if (v_isShared_1535_ == 0)
{
v___x_1537_ = v___x_1534_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_a_1532_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
}
else
{
lean_object* v___x_1540_; 
lean_dec_ref(v___y_1503_);
lean_dec_ref(v_snap_1498_);
lean_dec_ref(v_params_1497_);
v___x_1540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1540_, 0, v_b_1502_);
return v___x_1540_;
}
v___jp_1505_:
{
size_t v___x_1507_; size_t v___x_1508_; 
v___x_1507_ = ((size_t)1ULL);
v___x_1508_ = lean_usize_add(v_i_1500_, v___x_1507_);
v_i_1500_ = v___x_1508_;
v_b_1502_ = v_a_1506_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_handleCodeAction_spec__5___boxed(lean_object* v_params_1541_, lean_object* v_snap_1542_, lean_object* v_as_1543_, lean_object* v_i_1544_, lean_object* v_stop_1545_, lean_object* v_b_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_){
_start:
{
size_t v_i_boxed_1549_; size_t v_stop_boxed_1550_; lean_object* v_res_1551_; 
v_i_boxed_1549_ = lean_unbox_usize(v_i_1544_);
lean_dec(v_i_1544_);
v_stop_boxed_1550_ = lean_unbox_usize(v_stop_1545_);
lean_dec(v_stop_1545_);
v_res_1551_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_handleCodeAction_spec__5(v_params_1541_, v_snap_1542_, v_as_1543_, v_i_boxed_1549_, v_stop_boxed_1550_, v_b_1546_, v___y_1547_);
lean_dec_ref(v_as_1543_);
return v_res_1551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeAction___lam__1(lean_object* v___f_1554_, lean_object* v_params_1555_, lean_object* v_snap_1556_, lean_object* v___y_1557_){
_start:
{
lean_object* v___x_1559_; 
lean_inc_ref(v___y_1557_);
lean_inc_ref(v_snap_1556_);
v___x_1559_ = l_Lean_Server_RequestM_runCoreM___redArg(v_snap_1556_, v___f_1554_, v___y_1557_);
if (lean_obj_tag(v___x_1559_) == 0)
{
lean_object* v_a_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1581_; 
v_a_1560_ = lean_ctor_get(v___x_1559_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___x_1559_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1562_ = v___x_1559_;
v_isShared_1563_ = v_isSharedCheck_1581_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_a_1560_);
lean_dec(v___x_1559_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1581_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; uint8_t v___x_1567_; 
v___x_1564_ = lean_unsigned_to_nat(0u);
v___x_1565_ = ((lean_object*)(l_Lean_Server_handleCodeAction___lam__1___closed__0));
v___x_1566_ = lean_array_get_size(v_a_1560_);
v___x_1567_ = lean_nat_dec_lt(v___x_1564_, v___x_1566_);
if (v___x_1567_ == 0)
{
lean_object* v___x_1569_; 
lean_dec(v_a_1560_);
lean_dec_ref(v___y_1557_);
lean_dec_ref(v_snap_1556_);
lean_dec_ref(v_params_1555_);
if (v_isShared_1563_ == 0)
{
lean_ctor_set(v___x_1562_, 0, v___x_1565_);
v___x_1569_ = v___x_1562_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v___x_1565_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
else
{
uint8_t v___x_1571_; 
v___x_1571_ = lean_nat_dec_le(v___x_1566_, v___x_1566_);
if (v___x_1571_ == 0)
{
if (v___x_1567_ == 0)
{
lean_object* v___x_1573_; 
lean_dec(v_a_1560_);
lean_dec_ref(v___y_1557_);
lean_dec_ref(v_snap_1556_);
lean_dec_ref(v_params_1555_);
if (v_isShared_1563_ == 0)
{
lean_ctor_set(v___x_1562_, 0, v___x_1565_);
v___x_1573_ = v___x_1562_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v___x_1565_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
return v___x_1573_;
}
}
else
{
size_t v___x_1575_; size_t v___x_1576_; lean_object* v___x_1577_; 
lean_del_object(v___x_1562_);
v___x_1575_ = ((size_t)0ULL);
v___x_1576_ = lean_usize_of_nat(v___x_1566_);
v___x_1577_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_handleCodeAction_spec__5(v_params_1555_, v_snap_1556_, v_a_1560_, v___x_1575_, v___x_1576_, v___x_1565_, v___y_1557_);
lean_dec(v_a_1560_);
return v___x_1577_;
}
}
else
{
size_t v___x_1578_; size_t v___x_1579_; lean_object* v___x_1580_; 
lean_del_object(v___x_1562_);
v___x_1578_ = ((size_t)0ULL);
v___x_1579_ = lean_usize_of_nat(v___x_1566_);
v___x_1580_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_handleCodeAction_spec__5(v_params_1555_, v_snap_1556_, v_a_1560_, v___x_1578_, v___x_1579_, v___x_1565_, v___y_1557_);
lean_dec(v_a_1560_);
return v___x_1580_;
}
}
}
}
else
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
lean_dec_ref(v___y_1557_);
lean_dec_ref(v_snap_1556_);
lean_dec_ref(v_params_1555_);
v_a_1582_ = lean_ctor_get(v___x_1559_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1559_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1584_ = v___x_1559_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___x_1559_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1587_; 
if (v_isShared_1585_ == 0)
{
v___x_1587_ = v___x_1584_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_a_1582_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeAction___lam__1___boxed(lean_object* v___f_1590_, lean_object* v_params_1591_, lean_object* v_snap_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_){
_start:
{
lean_object* v_res_1595_; 
v_res_1595_ = l_Lean_Server_handleCodeAction___lam__1(v___f_1590_, v_params_1591_, v_snap_1592_, v___y_1593_);
return v_res_1595_;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_handleCodeAction___lam__2(lean_object* v___x_1596_, lean_object* v_s_1597_){
_start:
{
lean_object* v___x_1598_; uint8_t v___x_1599_; 
v___x_1598_ = l_Lean_Server_Snapshots_Snapshot_endPos(v_s_1597_);
v___x_1599_ = lean_nat_dec_le(v___x_1596_, v___x_1598_);
lean_dec(v___x_1598_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeAction___lam__2___boxed(lean_object* v___x_1600_, lean_object* v_s_1601_){
_start:
{
uint8_t v_res_1602_; lean_object* v_r_1603_; 
v_res_1602_ = l_Lean_Server_handleCodeAction___lam__2(v___x_1600_, v_s_1601_);
lean_dec_ref(v_s_1601_);
lean_dec(v___x_1600_);
v_r_1603_ = lean_box(v_res_1602_);
return v_r_1603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeAction___lam__3(lean_object* v___x_1604_, lean_object* v___y_1605_){
_start:
{
lean_object* v___x_1607_; 
v___x_1607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1607_, 0, v___x_1604_);
return v___x_1607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeAction___lam__3___boxed(lean_object* v___x_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_){
_start:
{
lean_object* v_res_1611_; 
v_res_1611_ = l_Lean_Server_handleCodeAction___lam__3(v___x_1608_, v___y_1609_);
lean_dec_ref(v___y_1609_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeAction(lean_object* v_params_1618_, lean_object* v_a_1619_){
_start:
{
lean_object* v___x_1621_; lean_object* v_a_1622_; lean_object* v_toEditableDocumentCore_1623_; lean_object* v_meta_1624_; lean_object* v_range_1625_; lean_object* v_text_1626_; lean_object* v_end_1627_; lean_object* v___f_1628_; lean_object* v___f_1629_; lean_object* v___x_1630_; lean_object* v___f_1631_; lean_object* v___f_1632_; lean_object* v___x_1633_; 
v___x_1621_ = l_Lean_Server_RequestM_readDoc___at___00Lean_Server_handleCodeAction_spec__6(v_a_1619_);
v_a_1622_ = lean_ctor_get(v___x_1621_, 0);
lean_inc(v_a_1622_);
lean_dec_ref(v___x_1621_);
v_toEditableDocumentCore_1623_ = lean_ctor_get(v_a_1622_, 0);
v_meta_1624_ = lean_ctor_get(v_toEditableDocumentCore_1623_, 0);
v_range_1625_ = lean_ctor_get(v_params_1618_, 3);
v_text_1626_ = lean_ctor_get(v_meta_1624_, 3);
v_end_1627_ = lean_ctor_get(v_range_1625_, 1);
lean_inc_ref(v_end_1627_);
v___f_1628_ = ((lean_object*)(l_Lean_Server_handleCodeAction___closed__0));
v___f_1629_ = lean_alloc_closure((void*)(l_Lean_Server_handleCodeAction___lam__1___boxed), 5, 2);
lean_closure_set(v___f_1629_, 0, v___f_1628_);
lean_closure_set(v___f_1629_, 1, v_params_1618_);
v___x_1630_ = l_Lean_FileMap_lspPosToUtf8Pos(v_text_1626_, v_end_1627_);
v___f_1631_ = lean_alloc_closure((void*)(l_Lean_Server_handleCodeAction___lam__2___boxed), 2, 1);
lean_closure_set(v___f_1631_, 0, v___x_1630_);
v___f_1632_ = ((lean_object*)(l_Lean_Server_handleCodeAction___closed__2));
v___x_1633_ = l_Lean_Server_RequestM_withWaitFindSnap___redArg(v_a_1622_, v___f_1631_, v___f_1632_, v___f_1629_, v_a_1619_);
return v___x_1633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeAction___boxed(lean_object* v_params_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_){
_start:
{
lean_object* v_res_1637_; 
v_res_1637_ = l_Lean_Server_handleCodeAction(v_params_1634_, v_a_1635_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Server_handleCodeAction_spec__0(lean_object* v_params_1638_, lean_object* v_fst_1639_, lean_object* v_as_1640_, lean_object* v_i_1641_, lean_object* v_j_1642_, lean_object* v_inv_1643_, lean_object* v_bs_1644_, lean_object* v___y_1645_){
_start:
{
lean_object* v___x_1647_; 
v___x_1647_ = l_Array_mapFinIdxM_map___at___00Lean_Server_handleCodeAction_spec__0___redArg(v_params_1638_, v_fst_1639_, v_as_1640_, v_i_1641_, v_j_1642_, v_bs_1644_);
return v___x_1647_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Server_handleCodeAction_spec__0___boxed(lean_object* v_params_1648_, lean_object* v_fst_1649_, lean_object* v_as_1650_, lean_object* v_i_1651_, lean_object* v_j_1652_, lean_object* v_inv_1653_, lean_object* v_bs_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_){
_start:
{
lean_object* v_res_1657_; 
v_res_1657_ = l_Array_mapFinIdxM_map___at___00Lean_Server_handleCodeAction_spec__0(v_params_1648_, v_fst_1649_, v_as_1650_, v_i_1651_, v_j_1652_, v_inv_1653_, v_bs_1654_, v___y_1655_);
lean_dec_ref(v___y_1655_);
lean_dec_ref(v_as_1650_);
return v_res_1657_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_handleCodeAction_spec__1(lean_object* v_init_1658_, lean_object* v_t_1659_){
_start:
{
lean_object* v___x_1660_; 
v___x_1660_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_Server_handleCodeAction_spec__1_spec__1(v_init_1658_, v_t_1659_);
return v___x_1660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__6(lean_object* v_00_u03b1_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_){
_start:
{
lean_object* v___x_1666_; 
v___x_1666_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__6___redArg();
return v___x_1666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__6___boxed(lean_object* v_00_u03b1_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_){
_start:
{
lean_object* v_res_1672_; 
v_res_1672_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__6(v_00_u03b1_1667_, v___y_1668_, v___y_1669_, v___y_1670_);
lean_dec(v___y_1670_);
lean_dec_ref(v___y_1669_);
lean_dec_ref(v___y_1668_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3(lean_object* v_00_u03b1_1673_, lean_object* v_typeName_1674_, lean_object* v_constName_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_){
_start:
{
lean_object* v___x_1680_; 
v___x_1680_ = l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3___redArg(v_typeName_1674_, v_constName_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3___boxed(lean_object* v_00_u03b1_1681_, lean_object* v_typeName_1682_, lean_object* v_constName_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_){
_start:
{
lean_object* v_res_1688_; 
v_res_1688_ = l_Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3(v_00_u03b1_1681_, v_typeName_1682_, v_constName_1683_, v___y_1684_, v___y_1685_, v___y_1686_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec_ref(v___y_1684_);
return v_res_1688_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5(lean_object* v_00_u03b1_1689_, lean_object* v_x_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_){
_start:
{
lean_object* v___x_1695_; 
v___x_1695_ = l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5___redArg(v_x_1690_, v___y_1691_, v___y_1692_, v___y_1693_);
return v___x_1695_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1696_, lean_object* v_x_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_){
_start:
{
lean_object* v_res_1702_; 
v_res_1702_ = l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5(v_00_u03b1_1696_, v_x_1697_, v___y_1698_, v___y_1699_, v___y_1700_);
lean_dec(v___y_1700_);
lean_dec_ref(v___y_1699_);
lean_dec_ref(v___y_1698_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5_spec__9(lean_object* v_00_u03b1_1703_, lean_object* v_msg_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_){
_start:
{
lean_object* v___x_1709_; 
v___x_1709_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5_spec__9___redArg(v_msg_1704_, v___y_1706_, v___y_1707_);
return v___x_1709_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5_spec__9___boxed(lean_object* v_00_u03b1_1710_, lean_object* v_msg_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_){
_start:
{
lean_object* v_res_1716_; 
v_res_1716_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2_spec__3_spec__5_spec__9(v_00_u03b1_1710_, v_msg_1711_, v___y_1712_, v___y_1713_, v___y_1714_);
lean_dec(v___y_1714_);
lean_dec_ref(v___y_1713_);
lean_dec_ref(v___y_1712_);
return v_res_1716_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__2_spec__3(size_t v_sz_1717_, size_t v_i_1718_, lean_object* v_bs_1719_){
_start:
{
uint8_t v___x_1720_; 
v___x_1720_ = lean_usize_dec_lt(v_i_1718_, v_sz_1717_);
if (v___x_1720_ == 0)
{
return v_bs_1719_;
}
else
{
lean_object* v_v_1721_; lean_object* v___x_1722_; lean_object* v_bs_x27_1723_; lean_object* v___x_1724_; size_t v___x_1725_; size_t v___x_1726_; lean_object* v___x_1727_; 
v_v_1721_ = lean_array_uget(v_bs_1719_, v_i_1718_);
v___x_1722_ = lean_unsigned_to_nat(0u);
v_bs_x27_1723_ = lean_array_uset(v_bs_1719_, v_i_1718_, v___x_1722_);
v___x_1724_ = l_Lean_Lsp_instToJsonCodeAction_toJson(v_v_1721_);
v___x_1725_ = ((size_t)1ULL);
v___x_1726_ = lean_usize_add(v_i_1718_, v___x_1725_);
v___x_1727_ = lean_array_uset(v_bs_x27_1723_, v_i_1718_, v___x_1724_);
v_i_1718_ = v___x_1726_;
v_bs_1719_ = v___x_1727_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__2_spec__3___boxed(lean_object* v_sz_1729_, lean_object* v_i_1730_, lean_object* v_bs_1731_){
_start:
{
size_t v_sz_boxed_1732_; size_t v_i_boxed_1733_; lean_object* v_res_1734_; 
v_sz_boxed_1732_ = lean_unbox_usize(v_sz_1729_);
lean_dec(v_sz_1729_);
v_i_boxed_1733_ = lean_unbox_usize(v_i_1730_);
lean_dec(v_i_1730_);
v_res_1734_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__2_spec__3(v_sz_boxed_1732_, v_i_boxed_1733_, v_bs_1731_);
return v_res_1734_;
}
}
LEAN_EXPORT lean_object* l_Array_toJson___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__2(lean_object* v_a_1735_){
_start:
{
size_t v_sz_1736_; size_t v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
v_sz_1736_ = lean_array_size(v_a_1735_);
v___x_1737_ = ((size_t)0ULL);
v___x_1738_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Array_toJson___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__2_spec__3(v_sz_1736_, v___x_1737_, v_a_1735_);
v___x_1739_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1738_);
return v___x_1739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___lam__1(lean_object* v_serialize_x3f_1740_, uint8_t v_a_1741_, lean_object* v___y_1742_){
_start:
{
if (lean_obj_tag(v___y_1742_) == 0)
{
lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1750_; 
lean_dec(v_serialize_x3f_1740_);
v_a_1743_ = lean_ctor_get(v___y_1742_, 0);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___y_1742_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1745_ = v___y_1742_;
v_isShared_1746_ = v_isSharedCheck_1750_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_dec(v___y_1742_);
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
if (lean_obj_tag(v_serialize_x3f_1740_) == 1)
{
lean_object* v_a_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1762_; 
v_a_1751_ = lean_ctor_get(v___y_1742_, 0);
v_isSharedCheck_1762_ = !lean_is_exclusive(v___y_1742_);
if (v_isSharedCheck_1762_ == 0)
{
v___x_1753_ = v___y_1742_;
v_isShared_1754_ = v_isSharedCheck_1762_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_a_1751_);
lean_dec(v___y_1742_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1762_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v_val_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1760_; 
v_val_1755_ = lean_ctor_get(v_serialize_x3f_1740_, 0);
lean_inc(v_val_1755_);
lean_dec_ref(v_serialize_x3f_1740_);
v___x_1756_ = lean_box(0);
v___x_1757_ = lean_apply_1(v_val_1755_, v_a_1751_);
v___x_1758_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1758_, 0, v___x_1756_);
lean_ctor_set(v___x_1758_, 1, v___x_1757_);
lean_ctor_set_uint8(v___x_1758_, sizeof(void*)*2, v_a_1741_);
if (v_isShared_1754_ == 0)
{
lean_ctor_set(v___x_1753_, 0, v___x_1758_);
v___x_1760_ = v___x_1753_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1761_; 
v_reuseFailAlloc_1761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1761_, 0, v___x_1758_);
v___x_1760_ = v_reuseFailAlloc_1761_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
return v___x_1760_;
}
}
}
else
{
lean_object* v_a_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1774_; 
lean_dec(v_serialize_x3f_1740_);
v_a_1763_ = lean_ctor_get(v___y_1742_, 0);
v_isSharedCheck_1774_ = !lean_is_exclusive(v___y_1742_);
if (v_isSharedCheck_1774_ == 0)
{
v___x_1765_ = v___y_1742_;
v_isShared_1766_ = v_isSharedCheck_1774_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_a_1763_);
lean_dec(v___y_1742_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1774_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1772_; 
v___x_1767_ = l_Array_toJson___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__2(v_a_1763_);
lean_inc(v___x_1767_);
v___x_1768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1767_);
v___x_1769_ = l_Lean_Json_compress(v___x_1767_);
v___x_1770_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1770_, 0, v___x_1768_);
lean_ctor_set(v___x_1770_, 1, v___x_1769_);
lean_ctor_set_uint8(v___x_1770_, sizeof(void*)*2, v_a_1741_);
if (v_isShared_1766_ == 0)
{
lean_ctor_set(v___x_1765_, 0, v___x_1770_);
v___x_1772_ = v___x_1765_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v___x_1770_);
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
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___lam__1___boxed(lean_object* v_serialize_x3f_1775_, lean_object* v_a_1776_, lean_object* v___y_1777_){
_start:
{
uint8_t v_a_831__boxed_1778_; lean_object* v_res_1779_; 
v_a_831__boxed_1778_ = lean_unbox(v_a_1776_);
v_res_1779_ = l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___lam__1(v_serialize_x3f_1775_, v_a_831__boxed_1778_, v___y_1777_);
return v_res_1779_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__6___redArg(lean_object* v_keys_1780_, lean_object* v_i_1781_, lean_object* v_k_1782_){
_start:
{
lean_object* v___x_1783_; uint8_t v___x_1784_; 
v___x_1783_ = lean_array_get_size(v_keys_1780_);
v___x_1784_ = lean_nat_dec_lt(v_i_1781_, v___x_1783_);
if (v___x_1784_ == 0)
{
lean_dec(v_i_1781_);
return v___x_1784_;
}
else
{
lean_object* v_k_x27_1785_; uint8_t v___x_1786_; 
v_k_x27_1785_ = lean_array_fget_borrowed(v_keys_1780_, v_i_1781_);
v___x_1786_ = lean_string_dec_eq(v_k_1782_, v_k_x27_1785_);
if (v___x_1786_ == 0)
{
lean_object* v___x_1787_; lean_object* v___x_1788_; 
v___x_1787_ = lean_unsigned_to_nat(1u);
v___x_1788_ = lean_nat_add(v_i_1781_, v___x_1787_);
lean_dec(v_i_1781_);
v_i_1781_ = v___x_1788_;
goto _start;
}
else
{
lean_dec(v_i_1781_);
return v___x_1786_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__6___redArg___boxed(lean_object* v_keys_1790_, lean_object* v_i_1791_, lean_object* v_k_1792_){
_start:
{
uint8_t v_res_1793_; lean_object* v_r_1794_; 
v_res_1793_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__6___redArg(v_keys_1790_, v_i_1791_, v_k_1792_);
lean_dec_ref(v_k_1792_);
lean_dec_ref(v_keys_1790_);
v_r_1794_ = lean_box(v_res_1793_);
return v_r_1794_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__0(void){
_start:
{
size_t v___x_1795_; size_t v___x_1796_; size_t v___x_1797_; 
v___x_1795_ = ((size_t)5ULL);
v___x_1796_ = ((size_t)1ULL);
v___x_1797_ = lean_usize_shift_left(v___x_1796_, v___x_1795_);
return v___x_1797_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__1(void){
_start:
{
size_t v___x_1798_; size_t v___x_1799_; size_t v___x_1800_; 
v___x_1798_ = ((size_t)1ULL);
v___x_1799_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__0);
v___x_1800_ = lean_usize_sub(v___x_1799_, v___x_1798_);
return v___x_1800_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(lean_object* v_x_1801_, size_t v_x_1802_, lean_object* v_x_1803_){
_start:
{
if (lean_obj_tag(v_x_1801_) == 0)
{
lean_object* v_es_1804_; lean_object* v___x_1805_; size_t v___x_1806_; size_t v___x_1807_; size_t v___x_1808_; lean_object* v_j_1809_; lean_object* v___x_1810_; 
v_es_1804_ = lean_ctor_get(v_x_1801_, 0);
lean_inc_ref(v_es_1804_);
lean_dec_ref(v_x_1801_);
v___x_1805_ = lean_box(2);
v___x_1806_ = ((size_t)5ULL);
v___x_1807_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__1);
v___x_1808_ = lean_usize_land(v_x_1802_, v___x_1807_);
v_j_1809_ = lean_usize_to_nat(v___x_1808_);
v___x_1810_ = lean_array_get(v___x_1805_, v_es_1804_, v_j_1809_);
lean_dec(v_j_1809_);
lean_dec_ref(v_es_1804_);
switch(lean_obj_tag(v___x_1810_))
{
case 0:
{
lean_object* v_key_1811_; uint8_t v___x_1812_; 
v_key_1811_ = lean_ctor_get(v___x_1810_, 0);
lean_inc(v_key_1811_);
lean_dec_ref(v___x_1810_);
v___x_1812_ = lean_string_dec_eq(v_x_1803_, v_key_1811_);
lean_dec(v_key_1811_);
return v___x_1812_;
}
case 1:
{
lean_object* v_node_1813_; size_t v___x_1814_; 
v_node_1813_ = lean_ctor_get(v___x_1810_, 0);
lean_inc(v_node_1813_);
lean_dec_ref(v___x_1810_);
v___x_1814_ = lean_usize_shift_right(v_x_1802_, v___x_1806_);
v_x_1801_ = v_node_1813_;
v_x_1802_ = v___x_1814_;
goto _start;
}
default: 
{
uint8_t v___x_1816_; 
v___x_1816_ = 0;
return v___x_1816_;
}
}
}
else
{
lean_object* v_ks_1817_; lean_object* v___x_1818_; uint8_t v___x_1819_; 
v_ks_1817_ = lean_ctor_get(v_x_1801_, 0);
lean_inc_ref(v_ks_1817_);
lean_dec_ref(v_x_1801_);
v___x_1818_ = lean_unsigned_to_nat(0u);
v___x_1819_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__6___redArg(v_ks_1817_, v___x_1818_, v_x_1803_);
lean_dec_ref(v_ks_1817_);
return v___x_1819_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___boxed(lean_object* v_x_1820_, lean_object* v_x_1821_, lean_object* v_x_1822_){
_start:
{
size_t v_x_926__boxed_1823_; uint8_t v_res_1824_; lean_object* v_r_1825_; 
v_x_926__boxed_1823_ = lean_unbox_usize(v_x_1821_);
lean_dec(v_x_1821_);
v_res_1824_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(v_x_1820_, v_x_926__boxed_1823_, v_x_1822_);
lean_dec_ref(v_x_1822_);
v_r_1825_ = lean_box(v_res_1824_);
return v_r_1825_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3___redArg(lean_object* v_x_1826_, lean_object* v_x_1827_){
_start:
{
uint64_t v___x_1828_; size_t v___x_1829_; uint8_t v___x_1830_; 
v___x_1828_ = lean_string_hash(v_x_1827_);
v___x_1829_ = lean_uint64_to_usize(v___x_1828_);
v___x_1830_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(v_x_1826_, v___x_1829_, v_x_1827_);
return v___x_1830_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3___redArg___boxed(lean_object* v_x_1831_, lean_object* v_x_1832_){
_start:
{
uint8_t v_res_1833_; lean_object* v_r_1834_; 
v_res_1833_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3___redArg(v_x_1831_, v_x_1832_);
lean_dec_ref(v_x_1832_);
v_r_1834_ = lean_box(v_res_1833_);
return v_r_1834_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__9_spec__10___redArg(lean_object* v_x_1835_, lean_object* v_x_1836_, lean_object* v_x_1837_, lean_object* v_x_1838_){
_start:
{
lean_object* v_ks_1839_; lean_object* v_vs_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1864_; 
v_ks_1839_ = lean_ctor_get(v_x_1835_, 0);
v_vs_1840_ = lean_ctor_get(v_x_1835_, 1);
v_isSharedCheck_1864_ = !lean_is_exclusive(v_x_1835_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1842_ = v_x_1835_;
v_isShared_1843_ = v_isSharedCheck_1864_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_vs_1840_);
lean_inc(v_ks_1839_);
lean_dec(v_x_1835_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1864_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v___x_1844_; uint8_t v___x_1845_; 
v___x_1844_ = lean_array_get_size(v_ks_1839_);
v___x_1845_ = lean_nat_dec_lt(v_x_1836_, v___x_1844_);
if (v___x_1845_ == 0)
{
lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1849_; 
lean_dec(v_x_1836_);
v___x_1846_ = lean_array_push(v_ks_1839_, v_x_1837_);
v___x_1847_ = lean_array_push(v_vs_1840_, v_x_1838_);
if (v_isShared_1843_ == 0)
{
lean_ctor_set(v___x_1842_, 1, v___x_1847_);
lean_ctor_set(v___x_1842_, 0, v___x_1846_);
v___x_1849_ = v___x_1842_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v___x_1846_);
lean_ctor_set(v_reuseFailAlloc_1850_, 1, v___x_1847_);
v___x_1849_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
return v___x_1849_;
}
}
else
{
lean_object* v_k_x27_1851_; uint8_t v___x_1852_; 
v_k_x27_1851_ = lean_array_fget_borrowed(v_ks_1839_, v_x_1836_);
v___x_1852_ = lean_string_dec_eq(v_x_1837_, v_k_x27_1851_);
if (v___x_1852_ == 0)
{
lean_object* v___x_1854_; 
if (v_isShared_1843_ == 0)
{
v___x_1854_ = v___x_1842_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v_ks_1839_);
lean_ctor_set(v_reuseFailAlloc_1858_, 1, v_vs_1840_);
v___x_1854_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
lean_object* v___x_1855_; lean_object* v___x_1856_; 
v___x_1855_ = lean_unsigned_to_nat(1u);
v___x_1856_ = lean_nat_add(v_x_1836_, v___x_1855_);
lean_dec(v_x_1836_);
v_x_1835_ = v___x_1854_;
v_x_1836_ = v___x_1856_;
goto _start;
}
}
else
{
lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1862_; 
v___x_1859_ = lean_array_fset(v_ks_1839_, v_x_1836_, v_x_1837_);
v___x_1860_ = lean_array_fset(v_vs_1840_, v_x_1836_, v_x_1838_);
lean_dec(v_x_1836_);
if (v_isShared_1843_ == 0)
{
lean_ctor_set(v___x_1842_, 1, v___x_1860_);
lean_ctor_set(v___x_1842_, 0, v___x_1859_);
v___x_1862_ = v___x_1842_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v___x_1859_);
lean_ctor_set(v_reuseFailAlloc_1863_, 1, v___x_1860_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__9___redArg(lean_object* v_n_1865_, lean_object* v_k_1866_, lean_object* v_v_1867_){
_start:
{
lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1868_ = lean_unsigned_to_nat(0u);
v___x_1869_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__9_spec__10___redArg(v_n_1865_, v___x_1868_, v_k_1866_, v_v_1867_);
return v___x_1869_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_1870_; 
v___x_1870_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1870_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7___redArg(lean_object* v_x_1871_, size_t v_x_1872_, size_t v_x_1873_, lean_object* v_x_1874_, lean_object* v_x_1875_){
_start:
{
if (lean_obj_tag(v_x_1871_) == 0)
{
lean_object* v_es_1876_; size_t v___x_1877_; size_t v___x_1878_; size_t v___x_1879_; size_t v___x_1880_; lean_object* v_j_1881_; lean_object* v___x_1882_; uint8_t v___x_1883_; 
v_es_1876_ = lean_ctor_get(v_x_1871_, 0);
v___x_1877_ = ((size_t)5ULL);
v___x_1878_ = ((size_t)1ULL);
v___x_1879_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg___closed__1);
v___x_1880_ = lean_usize_land(v_x_1872_, v___x_1879_);
v_j_1881_ = lean_usize_to_nat(v___x_1880_);
v___x_1882_ = lean_array_get_size(v_es_1876_);
v___x_1883_ = lean_nat_dec_lt(v_j_1881_, v___x_1882_);
if (v___x_1883_ == 0)
{
lean_dec(v_j_1881_);
lean_dec(v_x_1875_);
lean_dec_ref(v_x_1874_);
return v_x_1871_;
}
else
{
lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1920_; 
lean_inc_ref(v_es_1876_);
v_isSharedCheck_1920_ = !lean_is_exclusive(v_x_1871_);
if (v_isSharedCheck_1920_ == 0)
{
lean_object* v_unused_1921_; 
v_unused_1921_ = lean_ctor_get(v_x_1871_, 0);
lean_dec(v_unused_1921_);
v___x_1885_ = v_x_1871_;
v_isShared_1886_ = v_isSharedCheck_1920_;
goto v_resetjp_1884_;
}
else
{
lean_dec(v_x_1871_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1920_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v_v_1887_; lean_object* v___x_1888_; lean_object* v_xs_x27_1889_; lean_object* v___y_1891_; 
v_v_1887_ = lean_array_fget(v_es_1876_, v_j_1881_);
v___x_1888_ = lean_box(0);
v_xs_x27_1889_ = lean_array_fset(v_es_1876_, v_j_1881_, v___x_1888_);
switch(lean_obj_tag(v_v_1887_))
{
case 0:
{
lean_object* v_key_1896_; lean_object* v_val_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1907_; 
v_key_1896_ = lean_ctor_get(v_v_1887_, 0);
v_val_1897_ = lean_ctor_get(v_v_1887_, 1);
v_isSharedCheck_1907_ = !lean_is_exclusive(v_v_1887_);
if (v_isSharedCheck_1907_ == 0)
{
v___x_1899_ = v_v_1887_;
v_isShared_1900_ = v_isSharedCheck_1907_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_val_1897_);
lean_inc(v_key_1896_);
lean_dec(v_v_1887_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1907_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
uint8_t v___x_1901_; 
v___x_1901_ = lean_string_dec_eq(v_x_1874_, v_key_1896_);
if (v___x_1901_ == 0)
{
lean_object* v___x_1902_; lean_object* v___x_1903_; 
lean_del_object(v___x_1899_);
v___x_1902_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1896_, v_val_1897_, v_x_1874_, v_x_1875_);
v___x_1903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1902_);
v___y_1891_ = v___x_1903_;
goto v___jp_1890_;
}
else
{
lean_object* v___x_1905_; 
lean_dec(v_val_1897_);
lean_dec(v_key_1896_);
if (v_isShared_1900_ == 0)
{
lean_ctor_set(v___x_1899_, 1, v_x_1875_);
lean_ctor_set(v___x_1899_, 0, v_x_1874_);
v___x_1905_ = v___x_1899_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v_x_1874_);
lean_ctor_set(v_reuseFailAlloc_1906_, 1, v_x_1875_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
v___y_1891_ = v___x_1905_;
goto v___jp_1890_;
}
}
}
}
case 1:
{
lean_object* v_node_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1918_; 
v_node_1908_ = lean_ctor_get(v_v_1887_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v_v_1887_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1910_ = v_v_1887_;
v_isShared_1911_ = v_isSharedCheck_1918_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_node_1908_);
lean_dec(v_v_1887_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1918_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
size_t v___x_1912_; size_t v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1916_; 
v___x_1912_ = lean_usize_shift_right(v_x_1872_, v___x_1877_);
v___x_1913_ = lean_usize_add(v_x_1873_, v___x_1878_);
v___x_1914_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7___redArg(v_node_1908_, v___x_1912_, v___x_1913_, v_x_1874_, v_x_1875_);
if (v_isShared_1911_ == 0)
{
lean_ctor_set(v___x_1910_, 0, v___x_1914_);
v___x_1916_ = v___x_1910_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v___x_1914_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
v___y_1891_ = v___x_1916_;
goto v___jp_1890_;
}
}
}
default: 
{
lean_object* v___x_1919_; 
v___x_1919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1919_, 0, v_x_1874_);
lean_ctor_set(v___x_1919_, 1, v_x_1875_);
v___y_1891_ = v___x_1919_;
goto v___jp_1890_;
}
}
v___jp_1890_:
{
lean_object* v___x_1892_; lean_object* v___x_1894_; 
v___x_1892_ = lean_array_fset(v_xs_x27_1889_, v_j_1881_, v___y_1891_);
lean_dec(v_j_1881_);
if (v_isShared_1886_ == 0)
{
lean_ctor_set(v___x_1885_, 0, v___x_1892_);
v___x_1894_ = v___x_1885_;
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
}
else
{
lean_object* v_ks_1922_; lean_object* v_vs_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1943_; 
v_ks_1922_ = lean_ctor_get(v_x_1871_, 0);
v_vs_1923_ = lean_ctor_get(v_x_1871_, 1);
v_isSharedCheck_1943_ = !lean_is_exclusive(v_x_1871_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1925_ = v_x_1871_;
v_isShared_1926_ = v_isSharedCheck_1943_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_vs_1923_);
lean_inc(v_ks_1922_);
lean_dec(v_x_1871_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1943_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
lean_object* v___x_1928_; 
if (v_isShared_1926_ == 0)
{
v___x_1928_ = v___x_1925_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_ks_1922_);
lean_ctor_set(v_reuseFailAlloc_1942_, 1, v_vs_1923_);
v___x_1928_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1927_;
}
v_reusejp_1927_:
{
lean_object* v_newNode_1929_; uint8_t v___y_1931_; size_t v___x_1937_; uint8_t v___x_1938_; 
v_newNode_1929_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__9___redArg(v___x_1928_, v_x_1874_, v_x_1875_);
v___x_1937_ = ((size_t)7ULL);
v___x_1938_ = lean_usize_dec_le(v___x_1937_, v_x_1873_);
if (v___x_1938_ == 0)
{
lean_object* v___x_1939_; lean_object* v___x_1940_; uint8_t v___x_1941_; 
v___x_1939_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1929_);
v___x_1940_ = lean_unsigned_to_nat(4u);
v___x_1941_ = lean_nat_dec_lt(v___x_1939_, v___x_1940_);
lean_dec(v___x_1939_);
v___y_1931_ = v___x_1941_;
goto v___jp_1930_;
}
else
{
v___y_1931_ = v___x_1938_;
goto v___jp_1930_;
}
v___jp_1930_:
{
if (v___y_1931_ == 0)
{
lean_object* v_ks_1932_; lean_object* v_vs_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; 
v_ks_1932_ = lean_ctor_get(v_newNode_1929_, 0);
lean_inc_ref(v_ks_1932_);
v_vs_1933_ = lean_ctor_get(v_newNode_1929_, 1);
lean_inc_ref(v_vs_1933_);
lean_dec_ref(v_newNode_1929_);
v___x_1934_ = lean_unsigned_to_nat(0u);
v___x_1935_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7___redArg___closed__0);
v___x_1936_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__10___redArg(v_x_1873_, v_ks_1932_, v_vs_1933_, v___x_1934_, v___x_1935_);
lean_dec_ref(v_vs_1933_);
lean_dec_ref(v_ks_1932_);
return v___x_1936_;
}
else
{
return v_newNode_1929_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__10___redArg(size_t v_depth_1944_, lean_object* v_keys_1945_, lean_object* v_vals_1946_, lean_object* v_i_1947_, lean_object* v_entries_1948_){
_start:
{
lean_object* v___x_1949_; uint8_t v___x_1950_; 
v___x_1949_ = lean_array_get_size(v_keys_1945_);
v___x_1950_ = lean_nat_dec_lt(v_i_1947_, v___x_1949_);
if (v___x_1950_ == 0)
{
lean_dec(v_i_1947_);
return v_entries_1948_;
}
else
{
lean_object* v_k_1951_; lean_object* v_v_1952_; uint64_t v___x_1953_; size_t v_h_1954_; size_t v___x_1955_; lean_object* v___x_1956_; size_t v___x_1957_; size_t v___x_1958_; size_t v___x_1959_; size_t v_h_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v_k_1951_ = lean_array_fget_borrowed(v_keys_1945_, v_i_1947_);
v_v_1952_ = lean_array_fget_borrowed(v_vals_1946_, v_i_1947_);
v___x_1953_ = lean_string_hash(v_k_1951_);
v_h_1954_ = lean_uint64_to_usize(v___x_1953_);
v___x_1955_ = ((size_t)5ULL);
v___x_1956_ = lean_unsigned_to_nat(1u);
v___x_1957_ = ((size_t)1ULL);
v___x_1958_ = lean_usize_sub(v_depth_1944_, v___x_1957_);
v___x_1959_ = lean_usize_mul(v___x_1955_, v___x_1958_);
v_h_1960_ = lean_usize_shift_right(v_h_1954_, v___x_1959_);
v___x_1961_ = lean_nat_add(v_i_1947_, v___x_1956_);
lean_dec(v_i_1947_);
lean_inc(v_v_1952_);
lean_inc(v_k_1951_);
v___x_1962_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7___redArg(v_entries_1948_, v_h_1960_, v_depth_1944_, v_k_1951_, v_v_1952_);
v_i_1947_ = v___x_1961_;
v_entries_1948_ = v___x_1962_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__10___redArg___boxed(lean_object* v_depth_1964_, lean_object* v_keys_1965_, lean_object* v_vals_1966_, lean_object* v_i_1967_, lean_object* v_entries_1968_){
_start:
{
size_t v_depth_boxed_1969_; lean_object* v_res_1970_; 
v_depth_boxed_1969_ = lean_unbox_usize(v_depth_1964_);
lean_dec(v_depth_1964_);
v_res_1970_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__10___redArg(v_depth_boxed_1969_, v_keys_1965_, v_vals_1966_, v_i_1967_, v_entries_1968_);
lean_dec_ref(v_vals_1966_);
lean_dec_ref(v_keys_1965_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7___redArg___boxed(lean_object* v_x_1971_, lean_object* v_x_1972_, lean_object* v_x_1973_, lean_object* v_x_1974_, lean_object* v_x_1975_){
_start:
{
size_t v_x_1067__boxed_1976_; size_t v_x_1068__boxed_1977_; lean_object* v_res_1978_; 
v_x_1067__boxed_1976_ = lean_unbox_usize(v_x_1972_);
lean_dec(v_x_1972_);
v_x_1068__boxed_1977_ = lean_unbox_usize(v_x_1973_);
lean_dec(v_x_1973_);
v_res_1978_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7___redArg(v_x_1971_, v_x_1067__boxed_1976_, v_x_1068__boxed_1977_, v_x_1974_, v_x_1975_);
return v_res_1978_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4___redArg(lean_object* v_x_1979_, lean_object* v_x_1980_, lean_object* v_x_1981_){
_start:
{
uint64_t v___x_1982_; size_t v___x_1983_; size_t v___x_1984_; lean_object* v___x_1985_; 
v___x_1982_ = lean_string_hash(v_x_1980_);
v___x_1983_ = lean_uint64_to_usize(v___x_1982_);
v___x_1984_ = ((size_t)1ULL);
v___x_1985_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7___redArg(v_x_1979_, v___x_1983_, v___x_1984_, v_x_1980_, v_x_1981_);
return v___x_1985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_params_1988_){
_start:
{
lean_object* v___x_1989_; 
lean_inc(v_params_1988_);
v___x_1989_ = l_Lean_Lsp_instFromJsonCodeActionParams_fromJson(v_params_1988_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_a_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_2005_; 
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_1992_ = v___x_1989_;
v_isShared_1993_ = v_isSharedCheck_2005_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_a_1990_);
lean_dec(v___x_1989_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_2005_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
uint8_t v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2003_; 
v___x_1994_ = 3;
v___x_1995_ = ((lean_object*)(l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__0___closed__0));
v___x_1996_ = l_Lean_Json_compress(v_params_1988_);
v___x_1997_ = lean_string_append(v___x_1995_, v___x_1996_);
lean_dec_ref(v___x_1996_);
v___x_1998_ = ((lean_object*)(l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__0___closed__1));
v___x_1999_ = lean_string_append(v___x_1997_, v___x_1998_);
v___x_2000_ = lean_string_append(v___x_1999_, v_a_1990_);
lean_dec(v_a_1990_);
v___x_2001_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2001_, 0, v___x_2000_);
lean_ctor_set_uint8(v___x_2001_, sizeof(void*)*1, v___x_1994_);
if (v_isShared_1993_ == 0)
{
lean_ctor_set(v___x_1992_, 0, v___x_2001_);
v___x_2003_ = v___x_1992_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v___x_2001_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
else
{
lean_object* v_a_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2013_; 
lean_dec(v_params_1988_);
v_a_2006_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_2013_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2013_ == 0)
{
v___x_2008_ = v___x_1989_;
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_a_2006_);
lean_dec(v___x_1989_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2013_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
lean_object* v___x_2011_; 
if (v_isShared_2009_ == 0)
{
v___x_2011_ = v___x_2008_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_a_2006_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object* v_params_2014_){
_start:
{
lean_object* v___x_2016_; 
v___x_2016_ = l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__0(v_params_2014_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v_a_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2024_; 
v_a_2017_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2019_ = v___x_2016_;
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_a_2017_);
lean_dec(v___x_2016_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2022_; 
if (v_isShared_2020_ == 0)
{
lean_ctor_set_tag(v___x_2019_, 1);
v___x_2022_ = v___x_2019_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_a_2017_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
else
{
lean_object* v_a_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2032_; 
v_a_2025_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2027_ = v___x_2016_;
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_a_2025_);
lean_dec(v___x_2016_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2030_; 
if (v_isShared_2028_ == 0)
{
lean_ctor_set_tag(v___x_2027_, 0);
v___x_2030_ = v___x_2027_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_a_2025_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
return v___x_2030_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__1___redArg___boxed(lean_object* v_params_2033_, lean_object* v_a_2034_){
_start:
{
lean_object* v_res_2035_; 
v_res_2035_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__1___redArg(v_params_2033_);
return v_res_2035_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___lam__2(lean_object* v_handler_2036_, lean_object* v___f_2037_, lean_object* v_j_2038_, lean_object* v___y_2039_){
_start:
{
lean_object* v___x_2041_; 
v___x_2041_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__1___redArg(v_j_2038_);
if (lean_obj_tag(v___x_2041_) == 0)
{
lean_object* v_a_2042_; lean_object* v___x_2043_; 
v_a_2042_ = lean_ctor_get(v___x_2041_, 0);
lean_inc(v_a_2042_);
lean_dec_ref(v___x_2041_);
v___x_2043_ = lean_apply_3(v_handler_2036_, v_a_2042_, v___y_2039_, lean_box(0));
if (lean_obj_tag(v___x_2043_) == 0)
{
lean_object* v_a_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2052_; 
v_a_2044_ = lean_ctor_get(v___x_2043_, 0);
v_isSharedCheck_2052_ = !lean_is_exclusive(v___x_2043_);
if (v_isSharedCheck_2052_ == 0)
{
v___x_2046_ = v___x_2043_;
v_isShared_2047_ = v_isSharedCheck_2052_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_a_2044_);
lean_dec(v___x_2043_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2052_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
lean_object* v___x_2048_; lean_object* v___x_2050_; 
v___x_2048_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_2037_, v_a_2044_);
if (v_isShared_2047_ == 0)
{
lean_ctor_set(v___x_2046_, 0, v___x_2048_);
v___x_2050_ = v___x_2046_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v___x_2048_);
v___x_2050_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
return v___x_2050_;
}
}
}
else
{
lean_object* v_a_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2060_; 
lean_dec_ref(v___f_2037_);
v_a_2053_ = lean_ctor_get(v___x_2043_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v___x_2043_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_2055_ = v___x_2043_;
v_isShared_2056_ = v_isSharedCheck_2060_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_a_2053_);
lean_dec(v___x_2043_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2060_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___x_2058_; 
if (v_isShared_2056_ == 0)
{
v___x_2058_ = v___x_2055_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2059_; 
v_reuseFailAlloc_2059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2059_, 0, v_a_2053_);
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
else
{
lean_object* v_a_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2068_; 
lean_dec_ref(v___y_2039_);
lean_dec_ref(v___f_2037_);
lean_dec_ref(v_handler_2036_);
v_a_2061_ = lean_ctor_get(v___x_2041_, 0);
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_2041_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2063_ = v___x_2041_;
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_a_2061_);
lean_dec(v___x_2041_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2066_; 
if (v_isShared_2064_ == 0)
{
v___x_2066_ = v___x_2063_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_a_2061_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
return v___x_2066_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___lam__2___boxed(lean_object* v_handler_2069_, lean_object* v___f_2070_, lean_object* v_j_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_){
_start:
{
lean_object* v_res_2074_; 
v_res_2074_ = l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___lam__2(v_handler_2069_, v___f_2070_, v_j_2071_, v___y_2072_);
return v_res_2074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___lam__0(lean_object* v_j_2075_){
_start:
{
lean_object* v___x_2076_; 
v___x_2076_ = l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__0(v_j_2075_);
if (lean_obj_tag(v___x_2076_) == 0)
{
lean_object* v_a_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2084_; 
v_a_2077_ = lean_ctor_get(v___x_2076_, 0);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2076_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2079_ = v___x_2076_;
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_a_2077_);
lean_dec(v___x_2076_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v___x_2082_; 
if (v_isShared_2080_ == 0)
{
v___x_2082_ = v___x_2079_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v_a_2077_);
v___x_2082_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
return v___x_2082_;
}
}
}
else
{
lean_object* v_a_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2093_; 
v_a_2085_ = lean_ctor_get(v___x_2076_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_2076_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2087_ = v___x_2076_;
v_isShared_2088_ = v_isSharedCheck_2093_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_a_2085_);
lean_dec(v___x_2076_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2093_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
lean_object* v_textDocument_2089_; lean_object* v___x_2091_; 
v_textDocument_2089_ = lean_ctor_get(v_a_2085_, 2);
lean_inc_ref(v_textDocument_2089_);
lean_dec(v_a_2085_);
if (v_isShared_2088_ == 0)
{
lean_ctor_set(v___x_2087_, 0, v_textDocument_2089_);
v___x_2091_ = v___x_2087_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_textDocument_2089_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0(lean_object* v_method_2098_, lean_object* v_handler_2099_, lean_object* v_serialize_x3f_2100_){
_start:
{
lean_object* v___x_2102_; 
v___x_2102_ = l_Lean_initializing();
if (lean_obj_tag(v___x_2102_) == 0)
{
lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2137_; 
v_a_2103_ = lean_ctor_get(v___x_2102_, 0);
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2102_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2105_ = v___x_2102_;
v_isShared_2106_ = v_isSharedCheck_2137_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v___x_2102_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2137_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
uint8_t v___x_2107_; 
v___x_2107_ = lean_unbox(v_a_2103_);
if (v___x_2107_ == 0)
{
lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2114_; 
lean_dec(v_a_2103_);
lean_dec(v_serialize_x3f_2100_);
lean_dec_ref(v_handler_2099_);
v___x_2108_ = ((lean_object*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__0));
v___x_2109_ = lean_string_append(v___x_2108_, v_method_2098_);
lean_dec_ref(v_method_2098_);
v___x_2110_ = ((lean_object*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__1));
v___x_2111_ = lean_string_append(v___x_2109_, v___x_2110_);
v___x_2112_ = lean_mk_io_user_error(v___x_2111_);
if (v_isShared_2106_ == 0)
{
lean_ctor_set_tag(v___x_2105_, 1);
lean_ctor_set(v___x_2105_, 0, v___x_2112_);
v___x_2114_ = v___x_2105_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v___x_2112_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
return v___x_2114_;
}
}
else
{
lean_object* v___x_2116_; lean_object* v___x_2117_; uint8_t v___x_2118_; 
v___x_2116_ = l_Lean_Server_requestHandlers;
v___x_2117_ = lean_st_ref_get(v___x_2116_);
v___x_2118_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3___redArg(v___x_2117_, v_method_2098_);
if (v___x_2118_ == 0)
{
lean_object* v___x_2119_; lean_object* v___f_2120_; lean_object* v___f_2121_; lean_object* v___f_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2127_; 
v___x_2119_ = lean_st_ref_take(v___x_2116_);
v___f_2120_ = ((lean_object*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__2));
v___f_2121_ = lean_alloc_closure((void*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2121_, 0, v_serialize_x3f_2100_);
lean_closure_set(v___f_2121_, 1, v_a_2103_);
v___f_2122_ = lean_alloc_closure((void*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___lam__2___boxed), 5, 2);
lean_closure_set(v___f_2122_, 0, v_handler_2099_);
lean_closure_set(v___f_2122_, 1, v___f_2121_);
v___x_2123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2123_, 0, v___f_2120_);
lean_ctor_set(v___x_2123_, 1, v___f_2122_);
v___x_2124_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4___redArg(v___x_2119_, v_method_2098_, v___x_2123_);
v___x_2125_ = lean_st_ref_set(v___x_2116_, v___x_2124_);
if (v_isShared_2106_ == 0)
{
lean_ctor_set(v___x_2105_, 0, v___x_2125_);
v___x_2127_ = v___x_2105_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v___x_2125_);
v___x_2127_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
return v___x_2127_;
}
}
else
{
lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2135_; 
lean_dec(v_a_2103_);
lean_dec(v_serialize_x3f_2100_);
lean_dec_ref(v_handler_2099_);
v___x_2129_ = ((lean_object*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__0));
v___x_2130_ = lean_string_append(v___x_2129_, v_method_2098_);
lean_dec_ref(v_method_2098_);
v___x_2131_ = ((lean_object*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__3));
v___x_2132_ = lean_string_append(v___x_2130_, v___x_2131_);
v___x_2133_ = lean_mk_io_user_error(v___x_2132_);
if (v_isShared_2106_ == 0)
{
lean_ctor_set_tag(v___x_2105_, 1);
lean_ctor_set(v___x_2105_, 0, v___x_2133_);
v___x_2135_ = v___x_2105_;
goto v_reusejp_2134_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v___x_2133_);
v___x_2135_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2134_;
}
v_reusejp_2134_:
{
return v___x_2135_;
}
}
}
}
}
else
{
lean_object* v_a_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2145_; 
lean_dec(v_serialize_x3f_2100_);
lean_dec_ref(v_handler_2099_);
lean_dec_ref(v_method_2098_);
v_a_2138_ = lean_ctor_get(v___x_2102_, 0);
v_isSharedCheck_2145_ = !lean_is_exclusive(v___x_2102_);
if (v_isSharedCheck_2145_ == 0)
{
v___x_2140_ = v___x_2102_;
v_isShared_2141_ = v_isSharedCheck_2145_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_a_2138_);
lean_dec(v___x_2102_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2145_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v___x_2143_; 
if (v_isShared_2141_ == 0)
{
v___x_2143_ = v___x_2140_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v_a_2138_);
v___x_2143_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
return v___x_2143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___boxed(lean_object* v_method_2146_, lean_object* v_handler_2147_, lean_object* v_serialize_x3f_2148_, lean_object* v_a_2149_){
_start:
{
lean_object* v_res_2150_; 
v_res_2150_ = l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0(v_method_2146_, v_handler_2147_, v_serialize_x3f_2148_);
return v_res_2150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2154_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2_));
v___x_2155_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2_));
v___x_2156_ = lean_box(0);
v___x_2157_ = l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0(v___x_2154_, v___x_2155_, v___x_2156_);
return v___x_2157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2____boxed(lean_object* v_a_2158_){
_start:
{
lean_object* v_res_2159_; 
v_res_2159_ = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2_();
return v_res_2159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_params_2160_, lean_object* v_a_2161_){
_start:
{
lean_object* v___x_2163_; 
v___x_2163_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__1___redArg(v_params_2160_);
return v___x_2163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_params_2164_, lean_object* v_a_2165_, lean_object* v_a_2166_){
_start:
{
lean_object* v_res_2167_; 
v_res_2167_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__1(v_params_2164_, v_a_2165_);
lean_dec_ref(v_a_2165_);
return v_res_2167_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3(lean_object* v_00_u03b2_2168_, lean_object* v_x_2169_, lean_object* v_x_2170_){
_start:
{
uint8_t v___x_2171_; 
v___x_2171_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3___redArg(v_x_2169_, v_x_2170_);
return v___x_2171_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3___boxed(lean_object* v_00_u03b2_2172_, lean_object* v_x_2173_, lean_object* v_x_2174_){
_start:
{
uint8_t v_res_2175_; lean_object* v_r_2176_; 
v_res_2175_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3(v_00_u03b2_2172_, v_x_2173_, v_x_2174_);
lean_dec_ref(v_x_2174_);
v_r_2176_ = lean_box(v_res_2175_);
return v_r_2176_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4(lean_object* v_00_u03b2_2177_, lean_object* v_x_2178_, lean_object* v_x_2179_, lean_object* v_x_2180_){
_start:
{
lean_object* v___x_2181_; 
v___x_2181_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4___redArg(v_x_2178_, v_x_2179_, v_x_2180_);
return v___x_2181_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5(lean_object* v_00_u03b2_2182_, lean_object* v_x_2183_, size_t v_x_2184_, lean_object* v_x_2185_){
_start:
{
uint8_t v___x_2186_; 
v___x_2186_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___redArg(v_x_2183_, v_x_2184_, v_x_2185_);
return v___x_2186_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5___boxed(lean_object* v_00_u03b2_2187_, lean_object* v_x_2188_, lean_object* v_x_2189_, lean_object* v_x_2190_){
_start:
{
size_t v_x_1574__boxed_2191_; uint8_t v_res_2192_; lean_object* v_r_2193_; 
v_x_1574__boxed_2191_ = lean_unbox_usize(v_x_2189_);
lean_dec(v_x_2189_);
v_res_2192_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5(v_00_u03b2_2187_, v_x_2188_, v_x_1574__boxed_2191_, v_x_2190_);
lean_dec_ref(v_x_2190_);
v_r_2193_ = lean_box(v_res_2192_);
return v_r_2193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7(lean_object* v_00_u03b2_2194_, lean_object* v_x_2195_, size_t v_x_2196_, size_t v_x_2197_, lean_object* v_x_2198_, lean_object* v_x_2199_){
_start:
{
lean_object* v___x_2200_; 
v___x_2200_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7___redArg(v_x_2195_, v_x_2196_, v_x_2197_, v_x_2198_, v_x_2199_);
return v___x_2200_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7___boxed(lean_object* v_00_u03b2_2201_, lean_object* v_x_2202_, lean_object* v_x_2203_, lean_object* v_x_2204_, lean_object* v_x_2205_, lean_object* v_x_2206_){
_start:
{
size_t v_x_1585__boxed_2207_; size_t v_x_1586__boxed_2208_; lean_object* v_res_2209_; 
v_x_1585__boxed_2207_ = lean_unbox_usize(v_x_2203_);
lean_dec(v_x_2203_);
v_x_1586__boxed_2208_ = lean_unbox_usize(v_x_2204_);
lean_dec(v_x_2204_);
v_res_2209_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7(v_00_u03b2_2201_, v_x_2202_, v_x_1585__boxed_2207_, v_x_1586__boxed_2208_, v_x_2205_, v_x_2206_);
return v_res_2209_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__6(lean_object* v_00_u03b2_2210_, lean_object* v_keys_2211_, lean_object* v_vals_2212_, lean_object* v_heq_2213_, lean_object* v_i_2214_, lean_object* v_k_2215_){
_start:
{
uint8_t v___x_2216_; 
v___x_2216_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__6___redArg(v_keys_2211_, v_i_2214_, v_k_2215_);
return v___x_2216_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__6___boxed(lean_object* v_00_u03b2_2217_, lean_object* v_keys_2218_, lean_object* v_vals_2219_, lean_object* v_heq_2220_, lean_object* v_i_2221_, lean_object* v_k_2222_){
_start:
{
uint8_t v_res_2223_; lean_object* v_r_2224_; 
v_res_2223_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3_spec__5_spec__6(v_00_u03b2_2217_, v_keys_2218_, v_vals_2219_, v_heq_2220_, v_i_2221_, v_k_2222_);
lean_dec_ref(v_k_2222_);
lean_dec_ref(v_vals_2219_);
lean_dec_ref(v_keys_2218_);
v_r_2224_ = lean_box(v_res_2223_);
return v_r_2224_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__9(lean_object* v_00_u03b2_2225_, lean_object* v_n_2226_, lean_object* v_k_2227_, lean_object* v_v_2228_){
_start:
{
lean_object* v___x_2229_; 
v___x_2229_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__9___redArg(v_n_2226_, v_k_2227_, v_v_2228_);
return v___x_2229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__10(lean_object* v_00_u03b2_2230_, size_t v_depth_2231_, lean_object* v_keys_2232_, lean_object* v_vals_2233_, lean_object* v_heq_2234_, lean_object* v_i_2235_, lean_object* v_entries_2236_){
_start:
{
lean_object* v___x_2237_; 
v___x_2237_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__10___redArg(v_depth_2231_, v_keys_2232_, v_vals_2233_, v_i_2235_, v_entries_2236_);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__10___boxed(lean_object* v_00_u03b2_2238_, lean_object* v_depth_2239_, lean_object* v_keys_2240_, lean_object* v_vals_2241_, lean_object* v_heq_2242_, lean_object* v_i_2243_, lean_object* v_entries_2244_){
_start:
{
size_t v_depth_boxed_2245_; lean_object* v_res_2246_; 
v_depth_boxed_2245_ = lean_unbox_usize(v_depth_2239_);
lean_dec(v_depth_2239_);
v_res_2246_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__10(v_00_u03b2_2238_, v_depth_boxed_2245_, v_keys_2240_, v_vals_2241_, v_heq_2242_, v_i_2243_, v_entries_2244_);
lean_dec_ref(v_vals_2241_);
lean_dec_ref(v_keys_2240_);
return v_res_2246_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__9_spec__10(lean_object* v_00_u03b2_2247_, lean_object* v_x_2248_, lean_object* v_x_2249_, lean_object* v_x_2250_, lean_object* v_x_2251_){
_start:
{
lean_object* v___x_2252_; 
v___x_2252_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4_spec__7_spec__9_spec__10___redArg(v_x_2248_, v_x_2249_, v_x_2250_, v_x_2251_);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeActionResolve___lam__0(lean_object* v_params_2254_, lean_object* v_providerResultIndex_2255_, lean_object* v_param_2256_, lean_object* v_providerName_2257_, lean_object* v_snap_2258_, lean_object* v___y_2259_){
_start:
{
lean_object* v_cap_2262_; lean_object* v___y_2263_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; 
v___x_2313_ = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_builtinCodeActionProviders;
v___x_2314_ = lean_st_ref_get(v___x_2313_);
v___x_2315_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_2314_, v_providerName_2257_);
lean_dec(v___x_2314_);
if (lean_obj_tag(v___x_2315_) == 0)
{
lean_object* v___x_2316_; lean_object* v___x_2317_; 
v___x_2316_ = lean_alloc_closure((void*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_evalCodeActionProviderUnsafe___at___00Lean_Server_handleCodeAction_spec__2___boxed), 5, 1);
lean_closure_set(v___x_2316_, 0, v_providerName_2257_);
lean_inc_ref(v___y_2259_);
lean_inc_ref(v_snap_2258_);
v___x_2317_ = l_Lean_Server_RequestM_runCoreM___redArg(v_snap_2258_, v___x_2316_, v___y_2259_);
if (lean_obj_tag(v___x_2317_) == 0)
{
lean_object* v_a_2318_; 
v_a_2318_ = lean_ctor_get(v___x_2317_, 0);
lean_inc(v_a_2318_);
lean_dec_ref(v___x_2317_);
v_cap_2262_ = v_a_2318_;
v___y_2263_ = v___y_2259_;
goto v___jp_2261_;
}
else
{
lean_object* v_a_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2326_; 
lean_dec_ref(v___y_2259_);
lean_dec_ref(v_snap_2258_);
lean_dec_ref(v_param_2256_);
lean_dec(v_providerResultIndex_2255_);
lean_dec_ref(v_params_2254_);
v_a_2319_ = lean_ctor_get(v___x_2317_, 0);
v_isSharedCheck_2326_ = !lean_is_exclusive(v___x_2317_);
if (v_isSharedCheck_2326_ == 0)
{
v___x_2321_ = v___x_2317_;
v_isShared_2322_ = v_isSharedCheck_2326_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_a_2319_);
lean_dec(v___x_2317_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2326_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v___x_2324_; 
if (v_isShared_2322_ == 0)
{
v___x_2324_ = v___x_2321_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v_a_2319_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
return v___x_2324_;
}
}
}
}
else
{
lean_object* v_val_2327_; 
lean_dec(v_providerName_2257_);
v_val_2327_ = lean_ctor_get(v___x_2315_, 0);
lean_inc(v_val_2327_);
lean_dec_ref(v___x_2315_);
v_cap_2262_ = v_val_2327_;
v___y_2263_ = v___y_2259_;
goto v___jp_2261_;
}
v___jp_2261_:
{
lean_object* v___x_2264_; 
v___x_2264_ = lean_apply_4(v_cap_2262_, v_params_2254_, v_snap_2258_, v___y_2263_, lean_box(0));
if (lean_obj_tag(v___x_2264_) == 0)
{
lean_object* v_a_2265_; lean_object* v___x_2267_; uint8_t v_isShared_2268_; uint8_t v_isSharedCheck_2304_; 
v_a_2265_ = lean_ctor_get(v___x_2264_, 0);
v_isSharedCheck_2304_ = !lean_is_exclusive(v___x_2264_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2267_ = v___x_2264_;
v_isShared_2268_ = v_isSharedCheck_2304_;
goto v_resetjp_2266_;
}
else
{
lean_inc(v_a_2265_);
lean_dec(v___x_2264_);
v___x_2267_ = lean_box(0);
v_isShared_2268_ = v_isSharedCheck_2304_;
goto v_resetjp_2266_;
}
v_resetjp_2266_:
{
lean_object* v___x_2269_; uint8_t v___x_2270_; 
v___x_2269_ = lean_array_get_size(v_a_2265_);
v___x_2270_ = lean_nat_dec_lt(v_providerResultIndex_2255_, v___x_2269_);
if (v___x_2270_ == 0)
{
lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2278_; 
lean_dec(v_a_2265_);
lean_dec_ref(v_param_2256_);
v___x_2271_ = ((lean_object*)(l_Lean_Server_handleCodeActionResolve___lam__0___closed__0));
v___x_2272_ = l_Nat_reprFast(v_providerResultIndex_2255_);
v___x_2273_ = lean_string_append(v___x_2271_, v___x_2272_);
lean_dec_ref(v___x_2272_);
v___x_2274_ = ((lean_object*)(l_Lean_Server_instFromJsonCodeActionResolveData_fromJson___closed__5));
v___x_2275_ = lean_string_append(v___x_2273_, v___x_2274_);
v___x_2276_ = l_Lean_Server_RequestError_internalError(v___x_2275_);
if (v_isShared_2268_ == 0)
{
lean_ctor_set_tag(v___x_2267_, 1);
lean_ctor_set(v___x_2267_, 0, v___x_2276_);
v___x_2278_ = v___x_2267_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v___x_2276_);
v___x_2278_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2277_;
}
v_reusejp_2277_:
{
return v___x_2278_;
}
}
else
{
lean_object* v___x_2280_; lean_object* v_lazy_x3f_2281_; 
v___x_2280_ = lean_array_fget(v_a_2265_, v_providerResultIndex_2255_);
lean_dec(v_providerResultIndex_2255_);
lean_dec(v_a_2265_);
v_lazy_x3f_2281_ = lean_ctor_get(v___x_2280_, 1);
lean_inc(v_lazy_x3f_2281_);
lean_dec(v___x_2280_);
if (lean_obj_tag(v_lazy_x3f_2281_) == 1)
{
lean_object* v_val_2282_; lean_object* v___x_2283_; 
lean_del_object(v___x_2267_);
lean_dec_ref(v_param_2256_);
v_val_2282_ = lean_ctor_get(v_lazy_x3f_2281_, 0);
lean_inc(v_val_2282_);
lean_dec_ref(v_lazy_x3f_2281_);
v___x_2283_ = lean_apply_1(v_val_2282_, lean_box(0));
if (lean_obj_tag(v___x_2283_) == 0)
{
lean_object* v_a_2284_; lean_object* v___x_2286_; uint8_t v_isShared_2287_; uint8_t v_isSharedCheck_2291_; 
v_a_2284_ = lean_ctor_get(v___x_2283_, 0);
v_isSharedCheck_2291_ = !lean_is_exclusive(v___x_2283_);
if (v_isSharedCheck_2291_ == 0)
{
v___x_2286_ = v___x_2283_;
v_isShared_2287_ = v_isSharedCheck_2291_;
goto v_resetjp_2285_;
}
else
{
lean_inc(v_a_2284_);
lean_dec(v___x_2283_);
v___x_2286_ = lean_box(0);
v_isShared_2287_ = v_isSharedCheck_2291_;
goto v_resetjp_2285_;
}
v_resetjp_2285_:
{
lean_object* v___x_2289_; 
if (v_isShared_2287_ == 0)
{
v___x_2289_ = v___x_2286_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2290_; 
v_reuseFailAlloc_2290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2290_, 0, v_a_2284_);
v___x_2289_ = v_reuseFailAlloc_2290_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
return v___x_2289_;
}
}
}
else
{
lean_object* v_a_2292_; lean_object* v___x_2294_; uint8_t v_isShared_2295_; uint8_t v_isSharedCheck_2300_; 
v_a_2292_ = lean_ctor_get(v___x_2283_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___x_2283_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2294_ = v___x_2283_;
v_isShared_2295_ = v_isSharedCheck_2300_;
goto v_resetjp_2293_;
}
else
{
lean_inc(v_a_2292_);
lean_dec(v___x_2283_);
v___x_2294_ = lean_box(0);
v_isShared_2295_ = v_isSharedCheck_2300_;
goto v_resetjp_2293_;
}
v_resetjp_2293_:
{
lean_object* v___x_2296_; lean_object* v___x_2298_; 
v___x_2296_ = l_Lean_Server_RequestError_ofIoError(v_a_2292_);
if (v_isShared_2295_ == 0)
{
lean_ctor_set(v___x_2294_, 0, v___x_2296_);
v___x_2298_ = v___x_2294_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v___x_2296_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
return v___x_2298_;
}
}
}
}
else
{
lean_object* v___x_2302_; 
lean_dec(v_lazy_x3f_2281_);
if (v_isShared_2268_ == 0)
{
lean_ctor_set(v___x_2267_, 0, v_param_2256_);
v___x_2302_ = v___x_2267_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2303_; 
v_reuseFailAlloc_2303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2303_, 0, v_param_2256_);
v___x_2302_ = v_reuseFailAlloc_2303_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
return v___x_2302_;
}
}
}
}
}
else
{
lean_object* v_a_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2312_; 
lean_dec_ref(v_param_2256_);
lean_dec(v_providerResultIndex_2255_);
v_a_2305_ = lean_ctor_get(v___x_2264_, 0);
v_isSharedCheck_2312_ = !lean_is_exclusive(v___x_2264_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2307_ = v___x_2264_;
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
else
{
lean_inc(v_a_2305_);
lean_dec(v___x_2264_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2312_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v___x_2310_; 
if (v_isShared_2308_ == 0)
{
v___x_2310_ = v___x_2307_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v_a_2305_);
v___x_2310_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
return v___x_2310_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeActionResolve___lam__0___boxed(lean_object* v_params_2328_, lean_object* v_providerResultIndex_2329_, lean_object* v_param_2330_, lean_object* v_providerName_2331_, lean_object* v_snap_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_){
_start:
{
lean_object* v_res_2335_; 
v_res_2335_ = l_Lean_Server_handleCodeActionResolve___lam__0(v_params_2328_, v_providerResultIndex_2329_, v_param_2330_, v_providerName_2331_, v_snap_2332_, v___y_2333_);
return v_res_2335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeActionResolve___lam__2(lean_object* v___x_2336_, lean_object* v___y_2337_){
_start:
{
lean_object* v___x_2339_; 
v___x_2339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2339_, 0, v___x_2336_);
return v___x_2339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeActionResolve___lam__2___boxed(lean_object* v___x_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_){
_start:
{
lean_object* v_res_2343_; 
v_res_2343_ = l_Lean_Server_handleCodeActionResolve___lam__2(v___x_2340_, v___y_2341_);
lean_dec_ref(v___y_2341_);
return v_res_2343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_handleCodeActionResolve_spec__0_spec__0(lean_object* v_params_2344_){
_start:
{
lean_object* v___x_2345_; 
lean_inc(v_params_2344_);
v___x_2345_ = l_Lean_Server_instFromJsonCodeActionResolveData_fromJson(v_params_2344_);
if (lean_obj_tag(v___x_2345_) == 0)
{
lean_object* v_a_2346_; lean_object* v___x_2348_; uint8_t v_isShared_2349_; uint8_t v_isSharedCheck_2361_; 
v_a_2346_ = lean_ctor_get(v___x_2345_, 0);
v_isSharedCheck_2361_ = !lean_is_exclusive(v___x_2345_);
if (v_isSharedCheck_2361_ == 0)
{
v___x_2348_ = v___x_2345_;
v_isShared_2349_ = v_isSharedCheck_2361_;
goto v_resetjp_2347_;
}
else
{
lean_inc(v_a_2346_);
lean_dec(v___x_2345_);
v___x_2348_ = lean_box(0);
v_isShared_2349_ = v_isSharedCheck_2361_;
goto v_resetjp_2347_;
}
v_resetjp_2347_:
{
uint8_t v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2359_; 
v___x_2350_ = 3;
v___x_2351_ = ((lean_object*)(l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__0___closed__0));
v___x_2352_ = l_Lean_Json_compress(v_params_2344_);
v___x_2353_ = lean_string_append(v___x_2351_, v___x_2352_);
lean_dec_ref(v___x_2352_);
v___x_2354_ = ((lean_object*)(l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__0___closed__1));
v___x_2355_ = lean_string_append(v___x_2353_, v___x_2354_);
v___x_2356_ = lean_string_append(v___x_2355_, v_a_2346_);
lean_dec(v_a_2346_);
v___x_2357_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2357_, 0, v___x_2356_);
lean_ctor_set_uint8(v___x_2357_, sizeof(void*)*1, v___x_2350_);
if (v_isShared_2349_ == 0)
{
lean_ctor_set(v___x_2348_, 0, v___x_2357_);
v___x_2359_ = v___x_2348_;
goto v_reusejp_2358_;
}
else
{
lean_object* v_reuseFailAlloc_2360_; 
v_reuseFailAlloc_2360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2360_, 0, v___x_2357_);
v___x_2359_ = v_reuseFailAlloc_2360_;
goto v_reusejp_2358_;
}
v_reusejp_2358_:
{
return v___x_2359_;
}
}
}
else
{
lean_object* v_a_2362_; lean_object* v___x_2364_; uint8_t v_isShared_2365_; uint8_t v_isSharedCheck_2369_; 
lean_dec(v_params_2344_);
v_a_2362_ = lean_ctor_get(v___x_2345_, 0);
v_isSharedCheck_2369_ = !lean_is_exclusive(v___x_2345_);
if (v_isSharedCheck_2369_ == 0)
{
v___x_2364_ = v___x_2345_;
v_isShared_2365_ = v_isSharedCheck_2369_;
goto v_resetjp_2363_;
}
else
{
lean_inc(v_a_2362_);
lean_dec(v___x_2345_);
v___x_2364_ = lean_box(0);
v_isShared_2365_ = v_isSharedCheck_2369_;
goto v_resetjp_2363_;
}
v_resetjp_2363_:
{
lean_object* v___x_2367_; 
if (v_isShared_2365_ == 0)
{
v___x_2367_ = v___x_2364_;
goto v_reusejp_2366_;
}
else
{
lean_object* v_reuseFailAlloc_2368_; 
v_reuseFailAlloc_2368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2368_, 0, v_a_2362_);
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
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_handleCodeActionResolve_spec__0___redArg(lean_object* v_params_2370_){
_start:
{
lean_object* v___x_2372_; 
v___x_2372_ = l_Lean_Server_parseRequestParams___at___00Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_handleCodeActionResolve_spec__0_spec__0(v_params_2370_);
if (lean_obj_tag(v___x_2372_) == 0)
{
lean_object* v_a_2373_; lean_object* v___x_2375_; uint8_t v_isShared_2376_; uint8_t v_isSharedCheck_2380_; 
v_a_2373_ = lean_ctor_get(v___x_2372_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v___x_2372_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2375_ = v___x_2372_;
v_isShared_2376_ = v_isSharedCheck_2380_;
goto v_resetjp_2374_;
}
else
{
lean_inc(v_a_2373_);
lean_dec(v___x_2372_);
v___x_2375_ = lean_box(0);
v_isShared_2376_ = v_isSharedCheck_2380_;
goto v_resetjp_2374_;
}
v_resetjp_2374_:
{
lean_object* v___x_2378_; 
if (v_isShared_2376_ == 0)
{
lean_ctor_set_tag(v___x_2375_, 1);
v___x_2378_ = v___x_2375_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v_a_2373_);
v___x_2378_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
return v___x_2378_;
}
}
}
else
{
lean_object* v_a_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2388_; 
v_a_2381_ = lean_ctor_get(v___x_2372_, 0);
v_isSharedCheck_2388_ = !lean_is_exclusive(v___x_2372_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2383_ = v___x_2372_;
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_a_2381_);
lean_dec(v___x_2372_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2386_; 
if (v_isShared_2384_ == 0)
{
lean_ctor_set_tag(v___x_2383_, 0);
v___x_2386_ = v___x_2383_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v_a_2381_);
v___x_2386_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
return v___x_2386_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_handleCodeActionResolve_spec__0___redArg___boxed(lean_object* v_params_2389_, lean_object* v_a_2390_){
_start:
{
lean_object* v_res_2391_; 
v_res_2391_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_handleCodeActionResolve_spec__0___redArg(v_params_2389_);
return v_res_2391_;
}
}
static lean_object* _init_l_Lean_Server_handleCodeActionResolve___closed__1(void){
_start:
{
lean_object* v___x_2393_; lean_object* v___x_2394_; 
v___x_2393_ = ((lean_object*)(l_Lean_Server_handleCodeActionResolve___closed__0));
v___x_2394_ = l_Lean_Server_RequestError_internalError(v___x_2393_);
return v___x_2394_;
}
}
static lean_object* _init_l_Lean_Server_handleCodeActionResolve___closed__2(void){
_start:
{
lean_object* v___x_2395_; lean_object* v___f_2396_; 
v___x_2395_ = lean_obj_once(&l_Lean_Server_handleCodeActionResolve___closed__1, &l_Lean_Server_handleCodeActionResolve___closed__1_once, _init_l_Lean_Server_handleCodeActionResolve___closed__1);
v___f_2396_ = lean_alloc_closure((void*)(l_Lean_Server_handleCodeActionResolve___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2396_, 0, v___x_2395_);
return v___f_2396_;
}
}
static lean_object* _init_l_Lean_Server_handleCodeActionResolve___closed__4(void){
_start:
{
lean_object* v___x_2398_; lean_object* v___x_2399_; 
v___x_2398_ = ((lean_object*)(l_Lean_Server_handleCodeActionResolve___closed__3));
v___x_2399_ = l_Lean_Server_RequestError_invalidParams(v___x_2398_);
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeActionResolve(lean_object* v_param_2400_, lean_object* v_a_2401_){
_start:
{
lean_object* v___x_2403_; lean_object* v_data_x3f_2404_; 
v___x_2403_ = l_Lean_Server_RequestM_readDoc___at___00Lean_Server_handleCodeAction_spec__6(v_a_2401_);
v_data_x3f_2404_ = lean_ctor_get(v_param_2400_, 9);
if (lean_obj_tag(v_data_x3f_2404_) == 1)
{
lean_object* v_a_2405_; lean_object* v_val_2406_; lean_object* v___x_2407_; 
v_a_2405_ = lean_ctor_get(v___x_2403_, 0);
lean_inc(v_a_2405_);
lean_dec_ref(v___x_2403_);
v_val_2406_ = lean_ctor_get(v_data_x3f_2404_, 0);
lean_inc(v_val_2406_);
v___x_2407_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_handleCodeActionResolve_spec__0___redArg(v_val_2406_);
if (lean_obj_tag(v___x_2407_) == 0)
{
lean_object* v_toEditableDocumentCore_2408_; lean_object* v_meta_2409_; lean_object* v_a_2410_; lean_object* v_params_2411_; lean_object* v_range_2412_; lean_object* v_text_2413_; lean_object* v_providerName_2414_; lean_object* v_providerResultIndex_2415_; lean_object* v_end_2416_; lean_object* v___f_2417_; lean_object* v___x_2418_; lean_object* v___f_2419_; lean_object* v___f_2420_; lean_object* v___x_2421_; 
v_toEditableDocumentCore_2408_ = lean_ctor_get(v_a_2405_, 0);
v_meta_2409_ = lean_ctor_get(v_toEditableDocumentCore_2408_, 0);
v_a_2410_ = lean_ctor_get(v___x_2407_, 0);
lean_inc(v_a_2410_);
lean_dec_ref(v___x_2407_);
v_params_2411_ = lean_ctor_get(v_a_2410_, 0);
lean_inc_ref(v_params_2411_);
v_range_2412_ = lean_ctor_get(v_params_2411_, 3);
v_text_2413_ = lean_ctor_get(v_meta_2409_, 3);
v_providerName_2414_ = lean_ctor_get(v_a_2410_, 1);
lean_inc(v_providerName_2414_);
v_providerResultIndex_2415_ = lean_ctor_get(v_a_2410_, 2);
lean_inc(v_providerResultIndex_2415_);
lean_dec(v_a_2410_);
v_end_2416_ = lean_ctor_get(v_range_2412_, 1);
lean_inc_ref(v_end_2416_);
v___f_2417_ = lean_alloc_closure((void*)(l_Lean_Server_handleCodeActionResolve___lam__0___boxed), 7, 4);
lean_closure_set(v___f_2417_, 0, v_params_2411_);
lean_closure_set(v___f_2417_, 1, v_providerResultIndex_2415_);
lean_closure_set(v___f_2417_, 2, v_param_2400_);
lean_closure_set(v___f_2417_, 3, v_providerName_2414_);
v___x_2418_ = l_Lean_FileMap_lspPosToUtf8Pos(v_text_2413_, v_end_2416_);
v___f_2419_ = lean_alloc_closure((void*)(l_Lean_Server_handleCodeAction___lam__2___boxed), 2, 1);
lean_closure_set(v___f_2419_, 0, v___x_2418_);
v___f_2420_ = lean_obj_once(&l_Lean_Server_handleCodeActionResolve___closed__2, &l_Lean_Server_handleCodeActionResolve___closed__2_once, _init_l_Lean_Server_handleCodeActionResolve___closed__2);
v___x_2421_ = l_Lean_Server_RequestM_withWaitFindSnap___redArg(v_a_2405_, v___f_2419_, v___f_2420_, v___f_2417_, v_a_2401_);
return v___x_2421_;
}
else
{
lean_object* v_a_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2429_; 
lean_dec(v_a_2405_);
lean_dec_ref(v_a_2401_);
lean_dec_ref(v_param_2400_);
v_a_2422_ = lean_ctor_get(v___x_2407_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v___x_2407_);
if (v_isSharedCheck_2429_ == 0)
{
v___x_2424_ = v___x_2407_;
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_a_2422_);
lean_dec(v___x_2407_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___x_2427_; 
if (v_isShared_2425_ == 0)
{
v___x_2427_ = v___x_2424_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v_a_2422_);
v___x_2427_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
return v___x_2427_;
}
}
}
}
else
{
lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2437_; 
lean_dec_ref(v_a_2401_);
lean_dec_ref(v_param_2400_);
v_isSharedCheck_2437_ = !lean_is_exclusive(v___x_2403_);
if (v_isSharedCheck_2437_ == 0)
{
lean_object* v_unused_2438_; 
v_unused_2438_ = lean_ctor_get(v___x_2403_, 0);
lean_dec(v_unused_2438_);
v___x_2431_ = v___x_2403_;
v_isShared_2432_ = v_isSharedCheck_2437_;
goto v_resetjp_2430_;
}
else
{
lean_dec(v___x_2403_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2437_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___x_2433_; lean_object* v___x_2435_; 
v___x_2433_ = lean_obj_once(&l_Lean_Server_handleCodeActionResolve___closed__4, &l_Lean_Server_handleCodeActionResolve___closed__4_once, _init_l_Lean_Server_handleCodeActionResolve___closed__4);
if (v_isShared_2432_ == 0)
{
lean_ctor_set_tag(v___x_2431_, 1);
lean_ctor_set(v___x_2431_, 0, v___x_2433_);
v___x_2435_ = v___x_2431_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v___x_2433_);
v___x_2435_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
return v___x_2435_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_handleCodeActionResolve___boxed(lean_object* v_param_2439_, lean_object* v_a_2440_, lean_object* v_a_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = l_Lean_Server_handleCodeActionResolve(v_param_2439_, v_a_2440_);
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_handleCodeActionResolve_spec__0(lean_object* v_params_2443_, lean_object* v_a_2444_){
_start:
{
lean_object* v___x_2446_; 
v___x_2446_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_handleCodeActionResolve_spec__0___redArg(v_params_2443_);
return v___x_2446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_handleCodeActionResolve_spec__0___boxed(lean_object* v_params_2447_, lean_object* v_a_2448_, lean_object* v_a_2449_){
_start:
{
lean_object* v_res_2450_; 
v_res_2450_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_handleCodeActionResolve_spec__0(v_params_2447_, v_a_2448_);
lean_dec_ref(v_a_2448_);
return v_res_2450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___lam__1(lean_object* v_serialize_x3f_2451_, uint8_t v_a_2452_, lean_object* v___y_2453_){
_start:
{
if (lean_obj_tag(v___y_2453_) == 0)
{
lean_object* v_a_2454_; lean_object* v___x_2456_; uint8_t v_isShared_2457_; uint8_t v_isSharedCheck_2461_; 
lean_dec(v_serialize_x3f_2451_);
v_a_2454_ = lean_ctor_get(v___y_2453_, 0);
v_isSharedCheck_2461_ = !lean_is_exclusive(v___y_2453_);
if (v_isSharedCheck_2461_ == 0)
{
v___x_2456_ = v___y_2453_;
v_isShared_2457_ = v_isSharedCheck_2461_;
goto v_resetjp_2455_;
}
else
{
lean_inc(v_a_2454_);
lean_dec(v___y_2453_);
v___x_2456_ = lean_box(0);
v_isShared_2457_ = v_isSharedCheck_2461_;
goto v_resetjp_2455_;
}
v_resetjp_2455_:
{
lean_object* v___x_2459_; 
if (v_isShared_2457_ == 0)
{
v___x_2459_ = v___x_2456_;
goto v_reusejp_2458_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v_a_2454_);
v___x_2459_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2458_;
}
v_reusejp_2458_:
{
return v___x_2459_;
}
}
}
else
{
if (lean_obj_tag(v_serialize_x3f_2451_) == 1)
{
lean_object* v_a_2462_; lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2473_; 
v_a_2462_ = lean_ctor_get(v___y_2453_, 0);
v_isSharedCheck_2473_ = !lean_is_exclusive(v___y_2453_);
if (v_isSharedCheck_2473_ == 0)
{
v___x_2464_ = v___y_2453_;
v_isShared_2465_ = v_isSharedCheck_2473_;
goto v_resetjp_2463_;
}
else
{
lean_inc(v_a_2462_);
lean_dec(v___y_2453_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2473_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v_val_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2471_; 
v_val_2466_ = lean_ctor_get(v_serialize_x3f_2451_, 0);
lean_inc(v_val_2466_);
lean_dec_ref(v_serialize_x3f_2451_);
v___x_2467_ = lean_box(0);
v___x_2468_ = lean_apply_1(v_val_2466_, v_a_2462_);
v___x_2469_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2469_, 0, v___x_2467_);
lean_ctor_set(v___x_2469_, 1, v___x_2468_);
lean_ctor_set_uint8(v___x_2469_, sizeof(void*)*2, v_a_2452_);
if (v_isShared_2465_ == 0)
{
lean_ctor_set(v___x_2464_, 0, v___x_2469_);
v___x_2471_ = v___x_2464_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v___x_2469_);
v___x_2471_ = v_reuseFailAlloc_2472_;
goto v_reusejp_2470_;
}
v_reusejp_2470_:
{
return v___x_2471_;
}
}
}
else
{
lean_object* v_a_2474_; lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2485_; 
lean_dec(v_serialize_x3f_2451_);
v_a_2474_ = lean_ctor_get(v___y_2453_, 0);
v_isSharedCheck_2485_ = !lean_is_exclusive(v___y_2453_);
if (v_isSharedCheck_2485_ == 0)
{
v___x_2476_ = v___y_2453_;
v_isShared_2477_ = v_isSharedCheck_2485_;
goto v_resetjp_2475_;
}
else
{
lean_inc(v_a_2474_);
lean_dec(v___y_2453_);
v___x_2476_ = lean_box(0);
v_isShared_2477_ = v_isSharedCheck_2485_;
goto v_resetjp_2475_;
}
v_resetjp_2475_:
{
lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2483_; 
v___x_2478_ = l_Lean_Lsp_instToJsonCodeAction_toJson(v_a_2474_);
lean_inc(v___x_2478_);
v___x_2479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2479_, 0, v___x_2478_);
v___x_2480_ = l_Lean_Json_compress(v___x_2478_);
v___x_2481_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2481_, 0, v___x_2479_);
lean_ctor_set(v___x_2481_, 1, v___x_2480_);
lean_ctor_set_uint8(v___x_2481_, sizeof(void*)*2, v_a_2452_);
if (v_isShared_2477_ == 0)
{
lean_ctor_set(v___x_2476_, 0, v___x_2481_);
v___x_2483_ = v___x_2476_;
goto v_reusejp_2482_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v___x_2481_);
v___x_2483_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2482_;
}
v_reusejp_2482_:
{
return v___x_2483_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___lam__1___boxed(lean_object* v_serialize_x3f_2486_, lean_object* v_a_2487_, lean_object* v___y_2488_){
_start:
{
uint8_t v_a_275__boxed_2489_; lean_object* v_res_2490_; 
v_a_275__boxed_2489_ = lean_unbox(v_a_2487_);
v_res_2490_ = l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___lam__1(v_serialize_x3f_2486_, v_a_275__boxed_2489_, v___y_2488_);
return v_res_2490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_params_2491_){
_start:
{
lean_object* v___x_2492_; 
lean_inc(v_params_2491_);
v___x_2492_ = l_Lean_Lsp_instFromJsonCodeAction_fromJson(v_params_2491_);
if (lean_obj_tag(v___x_2492_) == 0)
{
lean_object* v_a_2493_; lean_object* v___x_2495_; uint8_t v_isShared_2496_; uint8_t v_isSharedCheck_2508_; 
v_a_2493_ = lean_ctor_get(v___x_2492_, 0);
v_isSharedCheck_2508_ = !lean_is_exclusive(v___x_2492_);
if (v_isSharedCheck_2508_ == 0)
{
v___x_2495_ = v___x_2492_;
v_isShared_2496_ = v_isSharedCheck_2508_;
goto v_resetjp_2494_;
}
else
{
lean_inc(v_a_2493_);
lean_dec(v___x_2492_);
v___x_2495_ = lean_box(0);
v_isShared_2496_ = v_isSharedCheck_2508_;
goto v_resetjp_2494_;
}
v_resetjp_2494_:
{
uint8_t v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2506_; 
v___x_2497_ = 3;
v___x_2498_ = ((lean_object*)(l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__0___closed__0));
v___x_2499_ = l_Lean_Json_compress(v_params_2491_);
v___x_2500_ = lean_string_append(v___x_2498_, v___x_2499_);
lean_dec_ref(v___x_2499_);
v___x_2501_ = ((lean_object*)(l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__0___closed__1));
v___x_2502_ = lean_string_append(v___x_2500_, v___x_2501_);
v___x_2503_ = lean_string_append(v___x_2502_, v_a_2493_);
lean_dec(v_a_2493_);
v___x_2504_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_2504_, 0, v___x_2503_);
lean_ctor_set_uint8(v___x_2504_, sizeof(void*)*1, v___x_2497_);
if (v_isShared_2496_ == 0)
{
lean_ctor_set(v___x_2495_, 0, v___x_2504_);
v___x_2506_ = v___x_2495_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2507_; 
v_reuseFailAlloc_2507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2507_, 0, v___x_2504_);
v___x_2506_ = v_reuseFailAlloc_2507_;
goto v_reusejp_2505_;
}
v_reusejp_2505_:
{
return v___x_2506_;
}
}
}
else
{
lean_object* v_a_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2516_; 
lean_dec(v_params_2491_);
v_a_2509_ = lean_ctor_get(v___x_2492_, 0);
v_isSharedCheck_2516_ = !lean_is_exclusive(v___x_2492_);
if (v_isSharedCheck_2516_ == 0)
{
v___x_2511_ = v___x_2492_;
v_isShared_2512_ = v_isSharedCheck_2516_;
goto v_resetjp_2510_;
}
else
{
lean_inc(v_a_2509_);
lean_dec(v___x_2492_);
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
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0_spec__1___redArg(lean_object* v_params_2517_){
_start:
{
lean_object* v___x_2519_; 
v___x_2519_ = l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0_spec__0(v_params_2517_);
if (lean_obj_tag(v___x_2519_) == 0)
{
lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2527_; 
v_a_2520_ = lean_ctor_get(v___x_2519_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2519_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2522_ = v___x_2519_;
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v___x_2519_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2525_; 
if (v_isShared_2523_ == 0)
{
lean_ctor_set_tag(v___x_2522_, 1);
v___x_2525_ = v___x_2522_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_a_2520_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
return v___x_2525_;
}
}
}
else
{
lean_object* v_a_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2535_; 
v_a_2528_ = lean_ctor_get(v___x_2519_, 0);
v_isSharedCheck_2535_ = !lean_is_exclusive(v___x_2519_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2530_ = v___x_2519_;
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_a_2528_);
lean_dec(v___x_2519_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v___x_2533_; 
if (v_isShared_2531_ == 0)
{
lean_ctor_set_tag(v___x_2530_, 0);
v___x_2533_ = v___x_2530_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v_a_2528_);
v___x_2533_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
return v___x_2533_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0_spec__1___redArg___boxed(lean_object* v_params_2536_, lean_object* v_a_2537_){
_start:
{
lean_object* v_res_2538_; 
v_res_2538_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0_spec__1___redArg(v_params_2536_);
return v_res_2538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___lam__2(lean_object* v_handler_2539_, lean_object* v___f_2540_, lean_object* v_j_2541_, lean_object* v___y_2542_){
_start:
{
lean_object* v___x_2544_; 
v___x_2544_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0_spec__1___redArg(v_j_2541_);
if (lean_obj_tag(v___x_2544_) == 0)
{
lean_object* v_a_2545_; lean_object* v___x_2546_; 
v_a_2545_ = lean_ctor_get(v___x_2544_, 0);
lean_inc(v_a_2545_);
lean_dec_ref(v___x_2544_);
v___x_2546_ = lean_apply_3(v_handler_2539_, v_a_2545_, v___y_2542_, lean_box(0));
if (lean_obj_tag(v___x_2546_) == 0)
{
lean_object* v_a_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2555_; 
v_a_2547_ = lean_ctor_get(v___x_2546_, 0);
v_isSharedCheck_2555_ = !lean_is_exclusive(v___x_2546_);
if (v_isSharedCheck_2555_ == 0)
{
v___x_2549_ = v___x_2546_;
v_isShared_2550_ = v_isSharedCheck_2555_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_a_2547_);
lean_dec(v___x_2546_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2555_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v___x_2551_; lean_object* v___x_2553_; 
v___x_2551_ = l_Lean_Server_ServerTask_mapCheap___redArg(v___f_2540_, v_a_2547_);
if (v_isShared_2550_ == 0)
{
lean_ctor_set(v___x_2549_, 0, v___x_2551_);
v___x_2553_ = v___x_2549_;
goto v_reusejp_2552_;
}
else
{
lean_object* v_reuseFailAlloc_2554_; 
v_reuseFailAlloc_2554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2554_, 0, v___x_2551_);
v___x_2553_ = v_reuseFailAlloc_2554_;
goto v_reusejp_2552_;
}
v_reusejp_2552_:
{
return v___x_2553_;
}
}
}
else
{
lean_object* v_a_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2563_; 
lean_dec_ref(v___f_2540_);
v_a_2556_ = lean_ctor_get(v___x_2546_, 0);
v_isSharedCheck_2563_ = !lean_is_exclusive(v___x_2546_);
if (v_isSharedCheck_2563_ == 0)
{
v___x_2558_ = v___x_2546_;
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_a_2556_);
lean_dec(v___x_2546_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
lean_object* v___x_2561_; 
if (v_isShared_2559_ == 0)
{
v___x_2561_ = v___x_2558_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2562_, 0, v_a_2556_);
v___x_2561_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
return v___x_2561_;
}
}
}
}
else
{
lean_object* v_a_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2571_; 
lean_dec_ref(v___y_2542_);
lean_dec_ref(v___f_2540_);
lean_dec_ref(v_handler_2539_);
v_a_2564_ = lean_ctor_get(v___x_2544_, 0);
v_isSharedCheck_2571_ = !lean_is_exclusive(v___x_2544_);
if (v_isSharedCheck_2571_ == 0)
{
v___x_2566_ = v___x_2544_;
v_isShared_2567_ = v_isSharedCheck_2571_;
goto v_resetjp_2565_;
}
else
{
lean_inc(v_a_2564_);
lean_dec(v___x_2544_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2571_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
lean_object* v___x_2569_; 
if (v_isShared_2567_ == 0)
{
v___x_2569_ = v___x_2566_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2570_; 
v_reuseFailAlloc_2570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2570_, 0, v_a_2564_);
v___x_2569_ = v_reuseFailAlloc_2570_;
goto v_reusejp_2568_;
}
v_reusejp_2568_:
{
return v___x_2569_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___lam__2___boxed(lean_object* v_handler_2572_, lean_object* v___f_2573_, lean_object* v_j_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___lam__2(v_handler_2572_, v___f_2573_, v_j_2574_, v___y_2575_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___lam__0(lean_object* v_j_2578_){
_start:
{
lean_object* v___x_2579_; 
v___x_2579_ = l_Lean_Server_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0_spec__0(v_j_2578_);
if (lean_obj_tag(v___x_2579_) == 0)
{
lean_object* v_a_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2587_; 
v_a_2580_ = lean_ctor_get(v___x_2579_, 0);
v_isSharedCheck_2587_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2587_ == 0)
{
v___x_2582_ = v___x_2579_;
v_isShared_2583_ = v_isSharedCheck_2587_;
goto v_resetjp_2581_;
}
else
{
lean_inc(v_a_2580_);
lean_dec(v___x_2579_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2587_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v___x_2585_; 
if (v_isShared_2583_ == 0)
{
v___x_2585_ = v___x_2582_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2586_; 
v_reuseFailAlloc_2586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2586_, 0, v_a_2580_);
v___x_2585_ = v_reuseFailAlloc_2586_;
goto v_reusejp_2584_;
}
v_reusejp_2584_:
{
return v___x_2585_;
}
}
}
else
{
lean_object* v_a_2588_; lean_object* v___x_2590_; uint8_t v_isShared_2591_; uint8_t v_isSharedCheck_2596_; 
v_a_2588_ = lean_ctor_get(v___x_2579_, 0);
v_isSharedCheck_2596_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2596_ == 0)
{
v___x_2590_ = v___x_2579_;
v_isShared_2591_ = v_isSharedCheck_2596_;
goto v_resetjp_2589_;
}
else
{
lean_inc(v_a_2588_);
lean_dec(v___x_2579_);
v___x_2590_ = lean_box(0);
v_isShared_2591_ = v_isSharedCheck_2596_;
goto v_resetjp_2589_;
}
v_resetjp_2589_:
{
lean_object* v___x_2592_; lean_object* v___x_2594_; 
v___x_2592_ = l_Lean_Server_CodeAction_getFileSource_x21(v_a_2588_);
if (v_isShared_2591_ == 0)
{
lean_ctor_set(v___x_2590_, 0, v___x_2592_);
v___x_2594_ = v___x_2590_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2595_; 
v_reuseFailAlloc_2595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2595_, 0, v___x_2592_);
v___x_2594_ = v_reuseFailAlloc_2595_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
return v___x_2594_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0(lean_object* v_method_2598_, lean_object* v_handler_2599_, lean_object* v_serialize_x3f_2600_){
_start:
{
lean_object* v___x_2602_; 
v___x_2602_ = l_Lean_initializing();
if (lean_obj_tag(v___x_2602_) == 0)
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2637_; 
v_a_2603_ = lean_ctor_get(v___x_2602_, 0);
v_isSharedCheck_2637_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_2637_ == 0)
{
v___x_2605_ = v___x_2602_;
v_isShared_2606_ = v_isSharedCheck_2637_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2602_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2637_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
uint8_t v___x_2607_; 
v___x_2607_ = lean_unbox(v_a_2603_);
if (v___x_2607_ == 0)
{
lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2614_; 
lean_dec(v_a_2603_);
lean_dec(v_serialize_x3f_2600_);
lean_dec_ref(v_handler_2599_);
v___x_2608_ = ((lean_object*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__0));
v___x_2609_ = lean_string_append(v___x_2608_, v_method_2598_);
lean_dec_ref(v_method_2598_);
v___x_2610_ = ((lean_object*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__1));
v___x_2611_ = lean_string_append(v___x_2609_, v___x_2610_);
v___x_2612_ = lean_mk_io_user_error(v___x_2611_);
if (v_isShared_2606_ == 0)
{
lean_ctor_set_tag(v___x_2605_, 1);
lean_ctor_set(v___x_2605_, 0, v___x_2612_);
v___x_2614_ = v___x_2605_;
goto v_reusejp_2613_;
}
else
{
lean_object* v_reuseFailAlloc_2615_; 
v_reuseFailAlloc_2615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2615_, 0, v___x_2612_);
v___x_2614_ = v_reuseFailAlloc_2615_;
goto v_reusejp_2613_;
}
v_reusejp_2613_:
{
return v___x_2614_;
}
}
else
{
lean_object* v___x_2616_; lean_object* v___x_2617_; uint8_t v___x_2618_; 
v___x_2616_ = l_Lean_Server_requestHandlers;
v___x_2617_ = lean_st_ref_get(v___x_2616_);
v___x_2618_ = l_Lean_PersistentHashMap_contains___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__3___redArg(v___x_2617_, v_method_2598_);
if (v___x_2618_ == 0)
{
lean_object* v___x_2619_; lean_object* v___f_2620_; lean_object* v___f_2621_; lean_object* v___f_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2627_; 
v___x_2619_ = lean_st_ref_take(v___x_2616_);
v___f_2620_ = ((lean_object*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___closed__0));
v___f_2621_ = lean_alloc_closure((void*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___lam__1___boxed), 3, 2);
lean_closure_set(v___f_2621_, 0, v_serialize_x3f_2600_);
lean_closure_set(v___f_2621_, 1, v_a_2603_);
v___f_2622_ = lean_alloc_closure((void*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___lam__2___boxed), 5, 2);
lean_closure_set(v___f_2622_, 0, v_handler_2599_);
lean_closure_set(v___f_2622_, 1, v___f_2621_);
v___x_2623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2623_, 0, v___f_2620_);
lean_ctor_set(v___x_2623_, 1, v___f_2622_);
v___x_2624_ = l_Lean_PersistentHashMap_insert___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0_spec__4___redArg(v___x_2619_, v_method_2598_, v___x_2623_);
v___x_2625_ = lean_st_ref_set(v___x_2616_, v___x_2624_);
if (v_isShared_2606_ == 0)
{
lean_ctor_set(v___x_2605_, 0, v___x_2625_);
v___x_2627_ = v___x_2605_;
goto v_reusejp_2626_;
}
else
{
lean_object* v_reuseFailAlloc_2628_; 
v_reuseFailAlloc_2628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2628_, 0, v___x_2625_);
v___x_2627_ = v_reuseFailAlloc_2628_;
goto v_reusejp_2626_;
}
v_reusejp_2626_:
{
return v___x_2627_;
}
}
else
{
lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2635_; 
lean_dec(v_a_2603_);
lean_dec(v_serialize_x3f_2600_);
lean_dec_ref(v_handler_2599_);
v___x_2629_ = ((lean_object*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__0));
v___x_2630_ = lean_string_append(v___x_2629_, v_method_2598_);
lean_dec_ref(v_method_2598_);
v___x_2631_ = ((lean_object*)(l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2__spec__0___closed__3));
v___x_2632_ = lean_string_append(v___x_2630_, v___x_2631_);
v___x_2633_ = lean_mk_io_user_error(v___x_2632_);
if (v_isShared_2606_ == 0)
{
lean_ctor_set_tag(v___x_2605_, 1);
lean_ctor_set(v___x_2605_, 0, v___x_2633_);
v___x_2635_ = v___x_2605_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v___x_2633_);
v___x_2635_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
return v___x_2635_;
}
}
}
}
}
else
{
lean_object* v_a_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2645_; 
lean_dec(v_serialize_x3f_2600_);
lean_dec_ref(v_handler_2599_);
lean_dec_ref(v_method_2598_);
v_a_2638_ = lean_ctor_get(v___x_2602_, 0);
v_isSharedCheck_2645_ = !lean_is_exclusive(v___x_2602_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2640_ = v___x_2602_;
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
else
{
lean_inc(v_a_2638_);
lean_dec(v___x_2602_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v___x_2643_; 
if (v_isShared_2641_ == 0)
{
v___x_2643_ = v___x_2640_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v_a_2638_);
v___x_2643_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
return v___x_2643_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0___boxed(lean_object* v_method_2646_, lean_object* v_handler_2647_, lean_object* v_serialize_x3f_2648_, lean_object* v_a_2649_){
_start:
{
lean_object* v_res_2650_; 
v_res_2650_ = l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0(v_method_2646_, v_handler_2647_, v_serialize_x3f_2648_);
return v_res_2650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2654_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__0_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2_));
v___x_2655_ = ((lean_object*)(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn___closed__1_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2_));
v___x_2656_ = lean_box(0);
v___x_2657_ = l_Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0(v___x_2654_, v___x_2655_, v___x_2656_);
return v___x_2657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2____boxed(lean_object* v_a_2658_){
_start:
{
lean_object* v_res_2659_; 
v_res_2659_ = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2_();
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0_spec__1(lean_object* v_params_2660_, lean_object* v_a_2661_){
_start:
{
lean_object* v___x_2663_; 
v___x_2663_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0_spec__1___redArg(v_params_2660_);
return v___x_2663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0_spec__1___boxed(lean_object* v_params_2664_, lean_object* v_a_2665_, lean_object* v_a_2666_){
_start:
{
lean_object* v_res_2667_; 
v_res_2667_ = l_Lean_Server_RequestM_parseRequestParams___at___00Lean_Server_registerLspRequestHandler___at___00__private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2__spec__0_spec__1(v_params_2664_, v_a_2665_);
lean_dec_ref(v_a_2665_);
return v_res_2667_;
}
}
lean_object* runtime_initialize_Lean_Server_Requests(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_CodeActions_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Server_Requests(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_2573400817____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_builtinCodeActionProviders = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_builtinCodeActionProviders);
lean_dec_ref(res);
res = l_Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_454587247____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Server_codeActionProviderExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Server_codeActionProviderExt);
lean_dec_ref(res);
res = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1656927832____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_275661449____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Server_CodeActions_Basic_0__Lean_Server_initFn_00___x40_Lean_Server_CodeActions_Basic_1161087171____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_CodeActions_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Server_Requests(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_CodeActions_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Server_Requests(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_CodeActions_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_CodeActions_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_CodeActions_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
