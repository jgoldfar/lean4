// Lean compiler output
// Module: Lean.Elab.DeclModifiers
// Imports: public import Lean.DocString.Add meta import Lean.Parser.Command
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Elab_pushInfoLeaf___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConstWithLevelParams___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* lean_private_to_user_name(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
uint8_t lean_is_reserved_name(lean_object*, lean_object*);
lean_object* l_Lean_withEnv___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_addProtected(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Elab_elabDeclAttrs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_doc_verso;
lean_object* l_Lean_Option_get___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* l_Lean_getStructureFieldsFlattened(lean_object*, lean_object*, uint8_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* l_Std_instToFormatFormat___lam__0___boxed(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Format_joinSep___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
extern lean_object* l_Lean_KVMap_instValueBool;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "a non-private declaration `"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1;
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "` has already been declared"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__2 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__2_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "a private declaration `"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1;
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "` is a reserved name"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__2 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__2_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "private declaration `"};
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedVisibility_default;
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedVisibility;
static const lean_string_object l_Lean_Elab_instToStringVisibility___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l_Lean_Elab_instToStringVisibility___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_instToStringVisibility___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l_Lean_Elab_instToStringVisibility___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_instToStringVisibility___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l_Lean_Elab_instToStringVisibility___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instToStringVisibility___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_instToStringVisibility___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Elab_instToStringVisibility___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instToStringVisibility___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToStringVisibility___closed__0 = (const lean_object*)&l_Lean_Elab_instToStringVisibility___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instToStringVisibility = (const lean_object*)&l_Lean_Elab_instToStringVisibility___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Visibility_isPrivate(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_isPrivate___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Visibility_isPublic(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_isPublic___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Visibility_isInferredPublic(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_isInferredPublic___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedRecKind_default;
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedRecKind;
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedComputeKind_default;
LEAN_EXPORT uint8_t l_Lean_Elab_instInhabitedComputeKind;
LEAN_EXPORT uint8_t l_Lean_Elab_instBEqComputeKind_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_instBEqComputeKind_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instBEqComputeKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instBEqComputeKind_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instBEqComputeKind___closed__0 = (const lean_object*)&l_Lean_Elab_instBEqComputeKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instBEqComputeKind = (const lean_object*)&l_Lean_Elab_instBEqComputeKind___closed__0_value;
static const lean_string_object l_Lean_Elab_instReprComputeKind_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.Elab.ComputeKind.regular"};
static const lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__0 = (const lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__0_value;
static const lean_ctor_object l_Lean_Elab_instReprComputeKind_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__0_value)}};
static const lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__1 = (const lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__1_value;
static const lean_string_object l_Lean_Elab_instReprComputeKind_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Elab.ComputeKind.meta"};
static const lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__2 = (const lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__2_value;
static const lean_ctor_object l_Lean_Elab_instReprComputeKind_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__2_value)}};
static const lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__3 = (const lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__3_value;
static const lean_string_object l_Lean_Elab_instReprComputeKind_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Elab.ComputeKind.noncomputable"};
static const lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__4 = (const lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__4_value;
static const lean_ctor_object l_Lean_Elab_instReprComputeKind_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__4_value)}};
static const lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__5 = (const lean_object*)&l_Lean_Elab_instReprComputeKind_repr___closed__5_value;
static lean_once_cell_t l_Lean_Elab_instReprComputeKind_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__6;
static lean_once_cell_t l_Lean_Elab_instReprComputeKind_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprComputeKind_repr___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_instReprComputeKind_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instReprComputeKind_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instReprComputeKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instReprComputeKind_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instReprComputeKind___closed__0 = (const lean_object*)&l_Lean_Elab_instReprComputeKind___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instReprComputeKind = (const lean_object*)&l_Lean_Elab_instReprComputeKind___closed__0_value;
static const lean_array_object l_Lean_Elab_instInhabitedModifiers_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_instInhabitedModifiers_default___closed__0 = (const lean_object*)&l_Lean_Elab_instInhabitedModifiers_default___closed__0_value;
static const lean_ctor_object l_Lean_Elab_instInhabitedModifiers_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instInhabitedModifiers_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Elab_instInhabitedModifiers_default___closed__1 = (const lean_object*)&l_Lean_Elab_instInhabitedModifiers_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedModifiers_default = (const lean_object*)&l_Lean_Elab_instInhabitedModifiers_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instInhabitedModifiers = (const lean_object*)&l_Lean_Elab_instInhabitedModifiers_default___closed__1_value;
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isPrivate(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isPrivate___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isPublic(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isPublic___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isInferredPublic(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isInferredPublic___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isPartial(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isPartial___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isNonrec(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isNonrec___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isMeta(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isMeta___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isNoncomputable(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isNoncomputable___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_addAttr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_addFirstAttr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Modifiers_filterAttrs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Modifiers_filterAttrs___closed__0 = (const lean_object*)&l_Lean_Elab_Modifiers_filterAttrs___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_filterAttrs(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Modifiers_anyAttr_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Modifiers_anyAttr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_anyAttr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_anyAttr___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Elab_instToFormatModifiers___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_instToFormatModifiers___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__3;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__1_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__5_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__6_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "local "};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__7_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "scoped "};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__0___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instToFormatModifiers___lam__0(lean_object*);
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__0_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__1_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__1_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__2_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__3_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Elab_instToFormatModifiers___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__5;
static lean_once_cell_t l_Lean_Elab_instToFormatModifiers___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__6;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__0_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__7_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__4_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__8_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "unsafe"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__9 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__9_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__9_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__10 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__10_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__11 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__11_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "partial"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__12 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__12_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__12_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__13 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__13_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__14 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__14_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "nonrec"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__15 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__15_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__15_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__16 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__16_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__17 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__17_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__18 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__18_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__18_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__19 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__19_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__19_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__20 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__20_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "noncomputable"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__21 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__21_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__21_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__22 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__22_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__23 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__23_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "protected"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__24 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__24_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__24_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__25 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__25_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__25_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__26 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__26_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__1_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__27 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__27_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__27_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__28 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__28_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__2_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__29 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__29_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__29_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__30 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__30_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "/--"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__31 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__31_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__31_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__32 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__32_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__33 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__33_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__34 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__34_value;
static lean_once_cell_t l_Lean_Elab_instToFormatModifiers___lam__1___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__35;
static lean_once_cell_t l_Lean_Elab_instToFormatModifiers___lam__1___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__36;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__33_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__37 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__37_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__34_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__38 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__38_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "-/"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__39 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__39_value;
static const lean_ctor_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__39_value)}};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__40 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__40_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__41 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__41_value;
static const lean_string_object l_Lean_Elab_instToFormatModifiers___lam__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Elab_instToFormatModifiers___lam__1___closed__42 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__42_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instToFormatModifiers___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_instToFormatModifiers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instToFormatModifiers___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToFormatModifiers___closed__0 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__0_value;
static const lean_closure_object l_Lean_Elab_instToFormatModifiers___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_instToFormatFormat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToFormatModifiers___closed__1 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__1_value;
static const lean_closure_object l_Lean_Elab_instToFormatModifiers___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instToFormatModifiers___lam__1, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__0_value),((lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__1_value)} };
static const lean_object* l_Lean_Elab_instToFormatModifiers___closed__2 = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instToFormatModifiers = (const lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_instToStringModifiers___lam__0(lean_object*);
static const lean_closure_object l_Lean_Elab_instToStringModifiers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_instToStringModifiers___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_instToStringModifiers___closed__0 = (const lean_object*)&l_Lean_Elab_instToStringModifiers___closed__0_value;
static const lean_closure_object l_Lean_Elab_instToStringModifiers___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_instToStringModifiers___closed__0_value),((lean_object*)&l_Lean_Elab_instToFormatModifiers___closed__2_value)} };
static const lean_object* l_Lean_Elab_instToStringModifiers___closed__1 = (const lean_object*)&l_Lean_Elab_instToStringModifiers___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_instToStringModifiers = (const lean_object*)&l_Lean_Elab_instToStringModifiers___closed__1_value;
static const lean_string_object l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected doc string"};
static const lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__3(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__2(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_elabModifiers___redArg___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_elabModifiers___redArg___lam__7___closed__0 = (const lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__0_value;
static const lean_string_object l_Lean_Elab_elabModifiers___redArg___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_elabModifiers___redArg___lam__7___closed__1 = (const lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__1_value;
static const lean_string_object l_Lean_Elab_elabModifiers___redArg___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_elabModifiers___redArg___lam__7___closed__2 = (const lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__2_value;
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___lam__7___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___lam__7___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___lam__7___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___lam__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(213, 248, 16, 228, 25, 227, 72, 143)}};
static const lean_object* l_Lean_Elab_elabModifiers___redArg___lam__7___closed__3 = (const lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__3_value;
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___lam__7___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___lam__7___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___lam__7___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___lam__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_instToStringVisibility___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(99, 134, 241, 204, 211, 206, 124, 144)}};
static const lean_object* l_Lean_Elab_elabModifiers___redArg___lam__7___closed__4 = (const lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__4_value;
static const lean_string_object l_Lean_Elab_elabModifiers___redArg___lam__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "unexpected visibility modifier"};
static const lean_object* l_Lean_Elab_elabModifiers___redArg___lam__7___closed__5 = (const lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__5_value;
static lean_once_cell_t l_Lean_Elab_elabModifiers___redArg___lam__7___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_elabModifiers___redArg___lam__7___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__7(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__7___boxed(lean_object**);
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__0_value_aux_1),((lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__0_value_aux_2),((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__12_value),LEAN_SCALAR_PTR_LITERAL(103, 175, 198, 167, 172, 79, 14, 207)}};
static const lean_object* l_Lean_Elab_elabModifiers___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_elabModifiers___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_instToFormatModifiers___lam__1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(124, 247, 59, 43, 44, 177, 111, 66)}};
static const lean_object* l_Lean_Elab_elabModifiers___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_elabModifiers___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "invalid declaration name `"};
static const lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1;
static const lean_string_object l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "`, structure `"};
static const lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__2 = (const lean_object*)&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__2_value;
static lean_once_cell_t l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3;
static const lean_string_object l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "` has field `"};
static const lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__4 = (const lean_object*)&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__4_value;
static lean_once_cell_t l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_mkDeclName___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "protected declarations must be in a namespace"};
static const lean_object* l_Lean_Elab_mkDeclName___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_mkDeclName___redArg___lam__2___closed__0_value;
static lean_once_cell_t l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__5___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_mkDeclName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_root_"};
static const lean_object* l_Lean_Elab_mkDeclName___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_mkDeclName___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_mkDeclName___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_mkDeclName___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(184, 175, 53, 50, 212, 152, 178, 8)}};
static const lean_object* l_Lean_Elab_mkDeclName___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_mkDeclName___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_mkDeclName___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 93, .m_data = "invalid declaration name `_root_`, `_root_` is a prefix used to refer to the 'root' namespace"};
static const lean_object* l_Lean_Elab_mkDeclName___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_mkDeclName___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_mkDeclName___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_mkDeclName___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_expandDeclIdCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_expandDeclIdCore___closed__0 = (const lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__0_value;
static const lean_string_object l_Lean_Elab_expandDeclIdCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_expandDeclIdCore___closed__1 = (const lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__1_value;
static const lean_ctor_object l_Lean_Elab_expandDeclIdCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__1_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_expandDeclIdCore___closed__2 = (const lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__2_value;
static const lean_ctor_object l_Lean_Elab_expandDeclIdCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__2_value),((lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__0_value)}};
static const lean_object* l_Lean_Elab_expandDeclIdCore___closed__3 = (const lean_object*)&l_Lean_Elab_expandDeclIdCore___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclIdCore(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclIdCore___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__7___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__15(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__17;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__0___boxed, .m_arity = 9, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___closed__0 = (const lean_object*)&l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4(uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Elab_expandDeclId_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Elab_expandDeclId_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "a universe level named `"};
static const lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__0);
v___x_3_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_unsigned_to_nat(32u);
v___x_5_ = lean_mk_empty_array_with_capacity(v___x_4_);
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3(void){
_start:
{
size_t v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_7_ = ((size_t)5ULL);
v___x_8_ = lean_unsigned_to_nat(0u);
v___x_9_ = lean_unsigned_to_nat(32u);
v___x_10_ = lean_mk_empty_array_with_capacity(v___x_9_);
v___x_11_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__2, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__2_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__2);
v___x_12_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_12_, 0, v___x_11_);
lean_ctor_set(v___x_12_, 1, v___x_10_);
lean_ctor_set(v___x_12_, 2, v___x_8_);
lean_ctor_set(v___x_12_, 3, v___x_8_);
lean_ctor_set_usize(v___x_12_, 4, v___x_7_);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_13_ = lean_box(1);
v___x_14_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3);
v___x_15_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__1);
v___x_16_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
lean_ctor_set(v___x_16_, 1, v___x_14_);
lean_ctor_set(v___x_16_, 2, v___x_13_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0(lean_object* v_____do__lift_17_, uint8_t v___x_18_, lean_object* v_inst_19_, lean_object* v_inst_20_, lean_object* v_____do__lift_21_){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_22_ = lean_box(0);
v___x_23_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
lean_ctor_set(v___x_23_, 1, v_____do__lift_17_);
v___x_24_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4);
v___x_25_ = lean_box(0);
v___x_26_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_26_, 0, v___x_23_);
lean_ctor_set(v___x_26_, 1, v___x_24_);
lean_ctor_set(v___x_26_, 2, v___x_25_);
lean_ctor_set(v___x_26_, 3, v_____do__lift_21_);
lean_ctor_set_uint8(v___x_26_, sizeof(void*)*4, v___x_18_);
lean_ctor_set_uint8(v___x_26_, sizeof(void*)*4 + 1, v___x_18_);
v___x_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
v___x_28_ = l_Lean_Elab_pushInfoLeaf___redArg(v_inst_19_, v_inst_20_, v___x_27_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___boxed(lean_object* v_____do__lift_29_, lean_object* v___x_30_, lean_object* v_inst_31_, lean_object* v_inst_32_, lean_object* v_____do__lift_33_){
_start:
{
uint8_t v___x_877__boxed_34_; lean_object* v_res_35_; 
v___x_877__boxed_34_ = lean_unbox(v___x_30_);
v_res_35_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0(v_____do__lift_29_, v___x_877__boxed_34_, v_inst_31_, v_inst_32_, v_____do__lift_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__1(uint8_t v___x_36_, lean_object* v_inst_37_, lean_object* v_inst_38_, lean_object* v_inst_39_, lean_object* v_inst_40_, lean_object* v_declName_41_, lean_object* v_toBind_42_, lean_object* v_____do__lift_43_){
_start:
{
lean_object* v___x_44_; lean_object* v___f_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_44_ = lean_box(v___x_36_);
lean_inc_ref(v_inst_37_);
v___f_45_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_45_, 0, v_____do__lift_43_);
lean_closure_set(v___f_45_, 1, v___x_44_);
lean_closure_set(v___f_45_, 2, v_inst_37_);
lean_closure_set(v___f_45_, 3, v_inst_38_);
v___x_46_ = l_Lean_mkConstWithLevelParams___redArg(v_inst_37_, v_inst_39_, v_inst_40_, v_declName_41_);
v___x_47_ = lean_apply_4(v_toBind_42_, lean_box(0), lean_box(0), v___x_46_, v___f_45_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__1___boxed(lean_object* v___x_48_, lean_object* v_inst_49_, lean_object* v_inst_50_, lean_object* v_inst_51_, lean_object* v_inst_52_, lean_object* v_declName_53_, lean_object* v_toBind_54_, lean_object* v_____do__lift_55_){
_start:
{
uint8_t v___x_921__boxed_56_; lean_object* v_res_57_; 
v___x_921__boxed_56_ = lean_unbox(v___x_48_);
v_res_57_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__1(v___x_921__boxed_56_, v_inst_49_, v_inst_50_, v_inst_51_, v_inst_52_, v_declName_53_, v_toBind_54_, v_____do__lift_55_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2(lean_object* v_toMonadRef_58_, uint8_t v___x_59_, lean_object* v_inst_60_, lean_object* v_inst_61_, lean_object* v_inst_62_, lean_object* v_inst_63_, lean_object* v_toBind_64_, lean_object* v_declName_65_){
_start:
{
lean_object* v_getRef_66_; lean_object* v___x_67_; lean_object* v___f_68_; lean_object* v___x_69_; 
v_getRef_66_ = lean_ctor_get(v_toMonadRef_58_, 0);
lean_inc(v_getRef_66_);
lean_dec_ref(v_toMonadRef_58_);
v___x_67_ = lean_box(v___x_59_);
lean_inc(v_toBind_64_);
v___f_68_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_68_, 0, v___x_67_);
lean_closure_set(v___f_68_, 1, v_inst_60_);
lean_closure_set(v___f_68_, 2, v_inst_61_);
lean_closure_set(v___f_68_, 3, v_inst_62_);
lean_closure_set(v___f_68_, 4, v_inst_63_);
lean_closure_set(v___f_68_, 5, v_declName_65_);
lean_closure_set(v___f_68_, 6, v_toBind_64_);
v___x_69_ = lean_apply_4(v_toBind_64_, lean_box(0), lean_box(0), v_getRef_66_, v___f_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2___boxed(lean_object* v_toMonadRef_70_, lean_object* v___x_71_, lean_object* v_inst_72_, lean_object* v_inst_73_, lean_object* v_inst_74_, lean_object* v_inst_75_, lean_object* v_toBind_76_, lean_object* v_declName_77_){
_start:
{
uint8_t v___x_947__boxed_78_; lean_object* v_res_79_; 
v___x_947__boxed_78_ = lean_unbox(v___x_71_);
v_res_79_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2(v_toMonadRef_70_, v___x_947__boxed_78_, v_inst_72_, v_inst_73_, v_inst_74_, v_inst_75_, v_toBind_76_, v_declName_77_);
return v_res_79_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_81_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__0));
v___x_82_ = l_Lean_stringToMessageData(v___x_81_);
return v___x_82_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__2));
v___x_85_ = l_Lean_stringToMessageData(v___x_84_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3(lean_object* v_val_86_, uint8_t v___x_87_, lean_object* v_inst_88_, lean_object* v_inst_89_, lean_object* v_____r_90_){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_91_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1);
v___x_92_ = l_Lean_MessageData_ofConstName(v_val_86_, v___x_87_);
v___x_93_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_91_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_95_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_93_);
lean_ctor_set(v___x_95_, 1, v___x_94_);
v___x_96_ = l_Lean_throwError___redArg(v_inst_88_, v_inst_89_, v___x_95_);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___boxed(lean_object* v_val_97_, lean_object* v___x_98_, lean_object* v_inst_99_, lean_object* v_inst_100_, lean_object* v_____r_101_){
_start:
{
uint8_t v___x_981__boxed_102_; lean_object* v_res_103_; 
v___x_981__boxed_102_ = lean_unbox(v___x_98_);
v_res_103_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3(v_val_97_, v___x_981__boxed_102_, v_inst_99_, v_inst_100_, v_____r_101_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__4(lean_object* v_declName_104_, lean_object* v_toPure_105_, lean_object* v_env_106_, lean_object* v_inst_107_, lean_object* v_inst_108_, lean_object* v_addInfo_109_, lean_object* v_toBind_110_, lean_object* v_____r_111_){
_start:
{
lean_object* v___x_112_; 
v___x_112_ = lean_private_to_user_name(v_declName_104_);
if (lean_obj_tag(v___x_112_) == 0)
{
lean_object* v___x_113_; lean_object* v___x_114_; 
lean_dec(v_toBind_110_);
lean_dec(v_addInfo_109_);
lean_dec_ref(v_inst_108_);
lean_dec_ref(v_inst_107_);
lean_dec_ref(v_env_106_);
v___x_113_ = lean_box(0);
v___x_114_ = lean_apply_2(v_toPure_105_, lean_box(0), v___x_113_);
return v___x_114_;
}
else
{
lean_object* v_val_115_; uint8_t v___x_116_; uint8_t v___x_117_; 
v_val_115_ = lean_ctor_get(v___x_112_, 0);
lean_inc(v_val_115_);
lean_dec_ref(v___x_112_);
v___x_116_ = 1;
lean_inc(v_val_115_);
v___x_117_ = l_Lean_Environment_contains(v_env_106_, v_val_115_, v___x_116_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; lean_object* v___x_119_; 
lean_dec(v_val_115_);
lean_dec(v_toBind_110_);
lean_dec(v_addInfo_109_);
lean_dec_ref(v_inst_108_);
lean_dec_ref(v_inst_107_);
v___x_118_ = lean_box(0);
v___x_119_ = lean_apply_2(v_toPure_105_, lean_box(0), v___x_118_);
return v___x_119_;
}
else
{
lean_object* v___x_120_; lean_object* v___f_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
lean_dec(v_toPure_105_);
v___x_120_ = lean_box(v___x_116_);
lean_inc(v_val_115_);
v___f_121_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___boxed), 5, 4);
lean_closure_set(v___f_121_, 0, v_val_115_);
lean_closure_set(v___f_121_, 1, v___x_120_);
lean_closure_set(v___f_121_, 2, v_inst_107_);
lean_closure_set(v___f_121_, 3, v_inst_108_);
v___x_122_ = lean_apply_1(v_addInfo_109_, v_val_115_);
v___x_123_ = lean_apply_4(v_toBind_110_, lean_box(0), lean_box(0), v___x_122_, v___f_121_);
return v___x_123_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5(lean_object* v___f_124_, lean_object* v_____r_125_){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = lean_apply_1(v___f_124_, v_____r_125_);
return v___x_126_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1(void){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__0));
v___x_129_ = l_Lean_stringToMessageData(v___x_128_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6(lean_object* v_declName_130_, uint8_t v___x_131_, lean_object* v_inst_132_, lean_object* v_inst_133_, lean_object* v_toBind_134_, lean_object* v___f_135_, lean_object* v_____r_136_){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_137_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1);
v___x_138_ = l_Lean_MessageData_ofConstName(v_declName_130_, v___x_131_);
v___x_139_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_139_, 0, v___x_137_);
lean_ctor_set(v___x_139_, 1, v___x_138_);
v___x_140_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_141_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_139_);
lean_ctor_set(v___x_141_, 1, v___x_140_);
v___x_142_ = l_Lean_throwError___redArg(v_inst_132_, v_inst_133_, v___x_141_);
v___x_143_ = lean_apply_4(v_toBind_134_, lean_box(0), lean_box(0), v___x_142_, v___f_135_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___boxed(lean_object* v_declName_144_, lean_object* v___x_145_, lean_object* v_inst_146_, lean_object* v_inst_147_, lean_object* v_toBind_148_, lean_object* v___f_149_, lean_object* v_____r_150_){
_start:
{
uint8_t v___x_1058__boxed_151_; lean_object* v_res_152_; 
v___x_1058__boxed_151_ = lean_unbox(v___x_145_);
v_res_152_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6(v_declName_144_, v___x_1058__boxed_151_, v_inst_146_, v_inst_147_, v_toBind_148_, v___f_149_, v_____r_150_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__7(lean_object* v_env_153_, lean_object* v_declName_154_, lean_object* v___f_155_, lean_object* v_inst_156_, lean_object* v_inst_157_, lean_object* v_toBind_158_, lean_object* v___f_159_, lean_object* v_addInfo_160_, lean_object* v_____r_161_){
_start:
{
lean_object* v___x_162_; uint8_t v___x_163_; uint8_t v___x_164_; 
lean_inc(v_declName_154_);
v___x_162_ = l_Lean_mkPrivateName(v_env_153_, v_declName_154_);
v___x_163_ = 1;
lean_inc(v___x_162_);
v___x_164_ = l_Lean_Environment_contains(v_env_153_, v___x_162_, v___x_163_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; lean_object* v___x_166_; 
lean_dec(v___x_162_);
lean_dec(v_addInfo_160_);
lean_dec(v___f_159_);
lean_dec(v_toBind_158_);
lean_dec_ref(v_inst_157_);
lean_dec_ref(v_inst_156_);
lean_dec(v_declName_154_);
v___x_165_ = lean_box(0);
v___x_166_ = lean_apply_1(v___f_155_, v___x_165_);
return v___x_166_;
}
else
{
lean_object* v___x_167_; lean_object* v___f_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
lean_dec(v___f_155_);
v___x_167_ = lean_box(v___x_163_);
lean_inc(v_toBind_158_);
v___f_168_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___boxed), 7, 6);
lean_closure_set(v___f_168_, 0, v_declName_154_);
lean_closure_set(v___f_168_, 1, v___x_167_);
lean_closure_set(v___f_168_, 2, v_inst_156_);
lean_closure_set(v___f_168_, 3, v_inst_157_);
lean_closure_set(v___f_168_, 4, v_toBind_158_);
lean_closure_set(v___f_168_, 5, v___f_159_);
v___x_169_ = lean_apply_1(v_addInfo_160_, v___x_162_);
v___x_170_ = lean_apply_4(v_toBind_158_, lean_box(0), lean_box(0), v___x_169_, v___f_168_);
return v___x_170_;
}
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1(void){
_start:
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__0));
v___x_173_ = l_Lean_stringToMessageData(v___x_172_);
return v___x_173_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_175_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__2));
v___x_176_ = l_Lean_stringToMessageData(v___x_175_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9(lean_object* v___f_177_, lean_object* v_declName_178_, uint8_t v___x_179_, lean_object* v_inst_180_, lean_object* v_inst_181_, lean_object* v_toBind_182_, lean_object* v___f_183_, lean_object* v_env_184_, lean_object* v_____do__lift_185_){
_start:
{
uint8_t v___y_187_; lean_object* v___x_197_; uint8_t v___x_198_; 
lean_inc(v_declName_178_);
v___x_197_ = l_Lean_privateToUserName(v_declName_178_);
lean_inc_ref(v_env_184_);
v___x_198_ = lean_is_reserved_name(v_env_184_, v___x_197_);
if (v___x_198_ == 0)
{
lean_object* v___x_199_; uint8_t v___x_200_; 
lean_inc(v_declName_178_);
v___x_199_ = l_Lean_mkPrivateName(v_____do__lift_185_, v_declName_178_);
v___x_200_ = lean_is_reserved_name(v_env_184_, v___x_199_);
v___y_187_ = v___x_200_;
goto v___jp_186_;
}
else
{
lean_dec_ref(v_env_184_);
v___y_187_ = v___x_198_;
goto v___jp_186_;
}
v___jp_186_:
{
if (v___y_187_ == 0)
{
lean_object* v___x_188_; lean_object* v___x_189_; 
lean_dec(v___f_183_);
lean_dec(v_toBind_182_);
lean_dec_ref(v_inst_181_);
lean_dec_ref(v_inst_180_);
lean_dec(v_declName_178_);
v___x_188_ = lean_box(0);
v___x_189_ = lean_apply_1(v___f_177_, v___x_188_);
return v___x_189_;
}
else
{
lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
lean_dec(v___f_177_);
v___x_190_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_191_ = l_Lean_MessageData_ofConstName(v_declName_178_, v___x_179_);
v___x_192_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_190_);
lean_ctor_set(v___x_192_, 1, v___x_191_);
v___x_193_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3);
v___x_194_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_194_, 0, v___x_192_);
lean_ctor_set(v___x_194_, 1, v___x_193_);
v___x_195_ = l_Lean_throwError___redArg(v_inst_180_, v_inst_181_, v___x_194_);
v___x_196_ = lean_apply_4(v_toBind_182_, lean_box(0), lean_box(0), v___x_195_, v___f_183_);
return v___x_196_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___boxed(lean_object* v___f_201_, lean_object* v_declName_202_, lean_object* v___x_203_, lean_object* v_inst_204_, lean_object* v_inst_205_, lean_object* v_toBind_206_, lean_object* v___f_207_, lean_object* v_env_208_, lean_object* v_____do__lift_209_){
_start:
{
uint8_t v___x_1131__boxed_210_; lean_object* v_res_211_; 
v___x_1131__boxed_210_ = lean_unbox(v___x_203_);
v_res_211_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9(v___f_201_, v_declName_202_, v___x_1131__boxed_210_, v_inst_204_, v_inst_205_, v_toBind_206_, v___f_207_, v_env_208_, v_____do__lift_209_);
lean_dec_ref(v_____do__lift_209_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__8(lean_object* v_toBind_212_, lean_object* v_getEnv_213_, lean_object* v___f_214_, lean_object* v_____r_215_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = lean_apply_4(v_toBind_212_, lean_box(0), lean_box(0), v_getEnv_213_, v___f_214_);
return v___x_216_;
}
}
static lean_object* _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1(void){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_218_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__0));
v___x_219_ = l_Lean_stringToMessageData(v___x_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11(lean_object* v_declName_220_, uint8_t v___x_221_, lean_object* v_inst_222_, lean_object* v_inst_223_, lean_object* v_toBind_224_, lean_object* v___f_225_, lean_object* v___f_226_, lean_object* v_____r_227_){
_start:
{
lean_object* v___x_228_; 
lean_inc(v_declName_220_);
v___x_228_ = lean_private_to_user_name(v_declName_220_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
lean_dec(v___f_226_);
v___x_229_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_230_ = l_Lean_MessageData_ofConstName(v_declName_220_, v___x_221_);
v___x_231_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_229_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_233_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_231_);
lean_ctor_set(v___x_233_, 1, v___x_232_);
v___x_234_ = l_Lean_throwError___redArg(v_inst_222_, v_inst_223_, v___x_233_);
v___x_235_ = lean_apply_4(v_toBind_224_, lean_box(0), lean_box(0), v___x_234_, v___f_225_);
return v___x_235_;
}
else
{
lean_object* v_val_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
lean_dec(v___f_225_);
lean_dec(v_declName_220_);
v_val_236_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_val_236_);
lean_dec_ref(v___x_228_);
v___x_237_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1);
v___x_238_ = l_Lean_MessageData_ofConstName(v_val_236_, v___x_221_);
v___x_239_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_241_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_239_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
v___x_242_ = l_Lean_throwError___redArg(v_inst_222_, v_inst_223_, v___x_241_);
v___x_243_ = lean_apply_4(v_toBind_224_, lean_box(0), lean_box(0), v___x_242_, v___f_226_);
return v___x_243_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___boxed(lean_object* v_declName_244_, lean_object* v___x_245_, lean_object* v_inst_246_, lean_object* v_inst_247_, lean_object* v_toBind_248_, lean_object* v___f_249_, lean_object* v___f_250_, lean_object* v_____r_251_){
_start:
{
uint8_t v___x_1205__boxed_252_; lean_object* v_res_253_; 
v___x_1205__boxed_252_ = lean_unbox(v___x_245_);
v_res_253_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11(v_declName_244_, v___x_1205__boxed_252_, v_inst_246_, v_inst_247_, v_toBind_248_, v___f_249_, v___f_250_, v_____r_251_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__10(lean_object* v_toMonadRef_254_, lean_object* v_inst_255_, lean_object* v_inst_256_, lean_object* v_inst_257_, lean_object* v_inst_258_, lean_object* v_toBind_259_, lean_object* v_declName_260_, lean_object* v_toPure_261_, lean_object* v_getEnv_262_, lean_object* v_inst_263_, lean_object* v_env_264_){
_start:
{
uint8_t v___x_265_; lean_object* v___x_266_; lean_object* v_addInfo_267_; lean_object* v_env_268_; lean_object* v___f_269_; lean_object* v___f_270_; lean_object* v___f_271_; lean_object* v___f_272_; lean_object* v___x_273_; lean_object* v___f_274_; uint8_t v___x_275_; uint8_t v___x_276_; 
v___x_265_ = 0;
v___x_266_ = lean_box(v___x_265_);
lean_inc(v_toBind_259_);
lean_inc_ref(v_inst_258_);
lean_inc_ref(v_inst_257_);
lean_inc_ref(v_inst_256_);
lean_inc_ref(v_inst_255_);
lean_inc_ref(v_toMonadRef_254_);
v_addInfo_267_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v_addInfo_267_, 0, v_toMonadRef_254_);
lean_closure_set(v_addInfo_267_, 1, v___x_266_);
lean_closure_set(v_addInfo_267_, 2, v_inst_255_);
lean_closure_set(v_addInfo_267_, 3, v_inst_256_);
lean_closure_set(v_addInfo_267_, 4, v_inst_257_);
lean_closure_set(v_addInfo_267_, 5, v_inst_258_);
lean_closure_set(v_addInfo_267_, 6, v_toBind_259_);
v_env_268_ = l_Lean_Environment_setExporting(v_env_264_, v___x_265_);
lean_inc(v_toBind_259_);
lean_inc_ref(v_addInfo_267_);
lean_inc_ref(v_inst_258_);
lean_inc_ref(v_inst_255_);
lean_inc_ref(v_env_268_);
lean_inc(v_declName_260_);
v___f_269_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__4), 8, 7);
lean_closure_set(v___f_269_, 0, v_declName_260_);
lean_closure_set(v___f_269_, 1, v_toPure_261_);
lean_closure_set(v___f_269_, 2, v_env_268_);
lean_closure_set(v___f_269_, 3, v_inst_255_);
lean_closure_set(v___f_269_, 4, v_inst_258_);
lean_closure_set(v___f_269_, 5, v_addInfo_267_);
lean_closure_set(v___f_269_, 6, v_toBind_259_);
lean_inc_ref(v___f_269_);
v___f_270_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5), 2, 1);
lean_closure_set(v___f_270_, 0, v___f_269_);
lean_inc(v_toBind_259_);
lean_inc_ref(v_inst_258_);
lean_inc_ref(v_inst_255_);
lean_inc(v_declName_260_);
lean_inc_ref(v_env_268_);
v___f_271_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__7), 9, 8);
lean_closure_set(v___f_271_, 0, v_env_268_);
lean_closure_set(v___f_271_, 1, v_declName_260_);
lean_closure_set(v___f_271_, 2, v___f_269_);
lean_closure_set(v___f_271_, 3, v_inst_255_);
lean_closure_set(v___f_271_, 4, v_inst_258_);
lean_closure_set(v___f_271_, 5, v_toBind_259_);
lean_closure_set(v___f_271_, 6, v___f_270_);
lean_closure_set(v___f_271_, 7, v_addInfo_267_);
lean_inc_ref(v___f_271_);
v___f_272_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5), 2, 1);
lean_closure_set(v___f_272_, 0, v___f_271_);
v___x_273_ = lean_box(v___x_265_);
lean_inc_ref(v_env_268_);
lean_inc(v_toBind_259_);
lean_inc_ref(v_inst_258_);
lean_inc_ref(v_inst_255_);
lean_inc(v_declName_260_);
v___f_274_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___boxed), 9, 8);
lean_closure_set(v___f_274_, 0, v___f_271_);
lean_closure_set(v___f_274_, 1, v_declName_260_);
lean_closure_set(v___f_274_, 2, v___x_273_);
lean_closure_set(v___f_274_, 3, v_inst_255_);
lean_closure_set(v___f_274_, 4, v_inst_258_);
lean_closure_set(v___f_274_, 5, v_toBind_259_);
lean_closure_set(v___f_274_, 6, v___f_272_);
lean_closure_set(v___f_274_, 7, v_env_268_);
v___x_275_ = 1;
lean_inc(v_declName_260_);
lean_inc_ref(v_env_268_);
v___x_276_ = l_Lean_Environment_contains(v_env_268_, v_declName_260_, v___x_275_);
if (v___x_276_ == 0)
{
lean_object* v___x_277_; lean_object* v___x_278_; 
lean_dec(v_declName_260_);
lean_dec_ref(v_inst_258_);
lean_dec_ref(v_inst_256_);
lean_dec_ref(v_toMonadRef_254_);
v___x_277_ = lean_apply_4(v_toBind_259_, lean_box(0), lean_box(0), v_getEnv_262_, v___f_274_);
v___x_278_ = l_Lean_withEnv___redArg(v_inst_255_, v_inst_263_, v_inst_257_, v_env_268_, v___x_277_);
return v___x_278_;
}
else
{
lean_object* v___f_279_; lean_object* v___x_280_; lean_object* v___f_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
lean_inc(v_toBind_259_);
v___f_279_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__8), 4, 3);
lean_closure_set(v___f_279_, 0, v_toBind_259_);
lean_closure_set(v___f_279_, 1, v_getEnv_262_);
lean_closure_set(v___f_279_, 2, v___f_274_);
v___x_280_ = lean_box(v___x_275_);
lean_inc_ref(v___f_279_);
lean_inc(v_toBind_259_);
lean_inc_ref(v_inst_258_);
lean_inc_ref(v_inst_255_);
lean_inc(v_declName_260_);
v___f_281_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___boxed), 8, 7);
lean_closure_set(v___f_281_, 0, v_declName_260_);
lean_closure_set(v___f_281_, 1, v___x_280_);
lean_closure_set(v___f_281_, 2, v_inst_255_);
lean_closure_set(v___f_281_, 3, v_inst_258_);
lean_closure_set(v___f_281_, 4, v_toBind_259_);
lean_closure_set(v___f_281_, 5, v___f_279_);
lean_closure_set(v___f_281_, 6, v___f_279_);
lean_inc(v_toBind_259_);
lean_inc_ref(v_inst_257_);
lean_inc_ref(v_inst_255_);
v___x_282_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__2(v_toMonadRef_254_, v___x_265_, v_inst_255_, v_inst_256_, v_inst_257_, v_inst_258_, v_toBind_259_, v_declName_260_);
v___x_283_ = lean_apply_4(v_toBind_259_, lean_box(0), lean_box(0), v___x_282_, v___f_281_);
v___x_284_ = l_Lean_withEnv___redArg(v_inst_255_, v_inst_263_, v_inst_257_, v_env_268_, v___x_283_);
return v___x_284_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___redArg(lean_object* v_inst_285_, lean_object* v_inst_286_, lean_object* v_inst_287_, lean_object* v_inst_288_, lean_object* v_inst_289_, lean_object* v_declName_290_){
_start:
{
lean_object* v_toApplicative_291_; lean_object* v_toBind_292_; lean_object* v_getEnv_293_; lean_object* v_toMonadRef_294_; lean_object* v_toPure_295_; lean_object* v___f_296_; lean_object* v___x_297_; 
v_toApplicative_291_ = lean_ctor_get(v_inst_285_, 0);
v_toBind_292_ = lean_ctor_get(v_inst_285_, 1);
lean_inc(v_toBind_292_);
v_getEnv_293_ = lean_ctor_get(v_inst_286_, 0);
lean_inc(v_getEnv_293_);
v_toMonadRef_294_ = lean_ctor_get(v_inst_287_, 1);
lean_inc_ref(v_toMonadRef_294_);
v_toPure_295_ = lean_ctor_get(v_toApplicative_291_, 1);
lean_inc(v_toPure_295_);
lean_inc(v_getEnv_293_);
lean_inc(v_toBind_292_);
v___f_296_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__10), 11, 10);
lean_closure_set(v___f_296_, 0, v_toMonadRef_294_);
lean_closure_set(v___f_296_, 1, v_inst_285_);
lean_closure_set(v___f_296_, 2, v_inst_289_);
lean_closure_set(v___f_296_, 3, v_inst_286_);
lean_closure_set(v___f_296_, 4, v_inst_287_);
lean_closure_set(v___f_296_, 5, v_toBind_292_);
lean_closure_set(v___f_296_, 6, v_declName_290_);
lean_closure_set(v___f_296_, 7, v_toPure_295_);
lean_closure_set(v___f_296_, 8, v_getEnv_293_);
lean_closure_set(v___f_296_, 9, v_inst_288_);
v___x_297_ = lean_apply_4(v_toBind_292_, lean_box(0), lean_box(0), v_getEnv_293_, v___f_296_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared(lean_object* v_m_298_, lean_object* v_inst_299_, lean_object* v_inst_300_, lean_object* v_inst_301_, lean_object* v_inst_302_, lean_object* v_inst_303_, lean_object* v_declName_304_){
_start:
{
lean_object* v___x_305_; 
v___x_305_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg(v_inst_299_, v_inst_300_, v_inst_301_, v_inst_302_, v_inst_303_, v_declName_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorIdx(uint8_t v_x_306_){
_start:
{
switch(v_x_306_)
{
case 0:
{
lean_object* v___x_307_; 
v___x_307_ = lean_unsigned_to_nat(0u);
return v___x_307_;
}
case 1:
{
lean_object* v___x_308_; 
v___x_308_ = lean_unsigned_to_nat(1u);
return v___x_308_;
}
default: 
{
lean_object* v___x_309_; 
v___x_309_ = lean_unsigned_to_nat(2u);
return v___x_309_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorIdx___boxed(lean_object* v_x_310_){
_start:
{
uint8_t v_x_boxed_311_; lean_object* v_res_312_; 
v_x_boxed_311_ = lean_unbox(v_x_310_);
v_res_312_ = l_Lean_Elab_Visibility_ctorIdx(v_x_boxed_311_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_toCtorIdx(uint8_t v_x_313_){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = l_Lean_Elab_Visibility_ctorIdx(v_x_313_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_toCtorIdx___boxed(lean_object* v_x_315_){
_start:
{
uint8_t v_x_4__boxed_316_; lean_object* v_res_317_; 
v_x_4__boxed_316_ = lean_unbox(v_x_315_);
v_res_317_ = l_Lean_Elab_Visibility_toCtorIdx(v_x_4__boxed_316_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim___redArg(lean_object* v_k_318_){
_start:
{
lean_inc(v_k_318_);
return v_k_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim___redArg___boxed(lean_object* v_k_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Lean_Elab_Visibility_ctorElim___redArg(v_k_319_);
lean_dec(v_k_319_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim(lean_object* v_motive_321_, lean_object* v_ctorIdx_322_, uint8_t v_t_323_, lean_object* v_h_324_, lean_object* v_k_325_){
_start:
{
lean_inc(v_k_325_);
return v_k_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_ctorElim___boxed(lean_object* v_motive_326_, lean_object* v_ctorIdx_327_, lean_object* v_t_328_, lean_object* v_h_329_, lean_object* v_k_330_){
_start:
{
uint8_t v_t_boxed_331_; lean_object* v_res_332_; 
v_t_boxed_331_ = lean_unbox(v_t_328_);
v_res_332_ = l_Lean_Elab_Visibility_ctorElim(v_motive_326_, v_ctorIdx_327_, v_t_boxed_331_, v_h_329_, v_k_330_);
lean_dec(v_k_330_);
lean_dec(v_ctorIdx_327_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim___redArg(lean_object* v_regular_333_){
_start:
{
lean_inc(v_regular_333_);
return v_regular_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim___redArg___boxed(lean_object* v_regular_334_){
_start:
{
lean_object* v_res_335_; 
v_res_335_ = l_Lean_Elab_Visibility_regular_elim___redArg(v_regular_334_);
lean_dec(v_regular_334_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim(lean_object* v_motive_336_, uint8_t v_t_337_, lean_object* v_h_338_, lean_object* v_regular_339_){
_start:
{
lean_inc(v_regular_339_);
return v_regular_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_regular_elim___boxed(lean_object* v_motive_340_, lean_object* v_t_341_, lean_object* v_h_342_, lean_object* v_regular_343_){
_start:
{
uint8_t v_t_boxed_344_; lean_object* v_res_345_; 
v_t_boxed_344_ = lean_unbox(v_t_341_);
v_res_345_ = l_Lean_Elab_Visibility_regular_elim(v_motive_340_, v_t_boxed_344_, v_h_342_, v_regular_343_);
lean_dec(v_regular_343_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim___redArg(lean_object* v_private_346_){
_start:
{
lean_inc(v_private_346_);
return v_private_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim___redArg___boxed(lean_object* v_private_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lean_Elab_Visibility_private_elim___redArg(v_private_347_);
lean_dec(v_private_347_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim(lean_object* v_motive_349_, uint8_t v_t_350_, lean_object* v_h_351_, lean_object* v_private_352_){
_start:
{
lean_inc(v_private_352_);
return v_private_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_private_elim___boxed(lean_object* v_motive_353_, lean_object* v_t_354_, lean_object* v_h_355_, lean_object* v_private_356_){
_start:
{
uint8_t v_t_boxed_357_; lean_object* v_res_358_; 
v_t_boxed_357_ = lean_unbox(v_t_354_);
v_res_358_ = l_Lean_Elab_Visibility_private_elim(v_motive_353_, v_t_boxed_357_, v_h_355_, v_private_356_);
lean_dec(v_private_356_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim___redArg(lean_object* v_public_359_){
_start:
{
lean_inc(v_public_359_);
return v_public_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim___redArg___boxed(lean_object* v_public_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_Elab_Visibility_public_elim___redArg(v_public_360_);
lean_dec(v_public_360_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim(lean_object* v_motive_362_, uint8_t v_t_363_, lean_object* v_h_364_, lean_object* v_public_365_){
_start:
{
lean_inc(v_public_365_);
return v_public_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_public_elim___boxed(lean_object* v_motive_366_, lean_object* v_t_367_, lean_object* v_h_368_, lean_object* v_public_369_){
_start:
{
uint8_t v_t_boxed_370_; lean_object* v_res_371_; 
v_t_boxed_370_ = lean_unbox(v_t_367_);
v_res_371_ = l_Lean_Elab_Visibility_public_elim(v_motive_366_, v_t_boxed_370_, v_h_368_, v_public_369_);
lean_dec(v_public_369_);
return v_res_371_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedVisibility_default(void){
_start:
{
uint8_t v___x_372_; 
v___x_372_ = 0;
return v___x_372_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedVisibility(void){
_start:
{
uint8_t v___x_373_; 
v___x_373_ = 0;
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToStringVisibility___lam__0(uint8_t v_x_377_){
_start:
{
switch(v_x_377_)
{
case 0:
{
lean_object* v___x_378_; 
v___x_378_ = ((lean_object*)(l_Lean_Elab_instToStringVisibility___lam__0___closed__0));
return v___x_378_;
}
case 1:
{
lean_object* v___x_379_; 
v___x_379_ = ((lean_object*)(l_Lean_Elab_instToStringVisibility___lam__0___closed__1));
return v___x_379_;
}
default: 
{
lean_object* v___x_380_; 
v___x_380_ = ((lean_object*)(l_Lean_Elab_instToStringVisibility___lam__0___closed__2));
return v___x_380_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToStringVisibility___lam__0___boxed(lean_object* v_x_381_){
_start:
{
uint8_t v_x_36__boxed_382_; lean_object* v_res_383_; 
v_x_36__boxed_382_ = lean_unbox(v_x_381_);
v_res_383_ = l_Lean_Elab_instToStringVisibility___lam__0(v_x_36__boxed_382_);
return v_res_383_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Visibility_isPrivate(uint8_t v_x_386_){
_start:
{
if (v_x_386_ == 1)
{
uint8_t v___x_387_; 
v___x_387_ = 1;
return v___x_387_;
}
else
{
uint8_t v___x_388_; 
v___x_388_ = 0;
return v___x_388_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_isPrivate___boxed(lean_object* v_x_389_){
_start:
{
uint8_t v_x_21__boxed_390_; uint8_t v_res_391_; lean_object* v_r_392_; 
v_x_21__boxed_390_ = lean_unbox(v_x_389_);
v_res_391_ = l_Lean_Elab_Visibility_isPrivate(v_x_21__boxed_390_);
v_r_392_ = lean_box(v_res_391_);
return v_r_392_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Visibility_isPublic(uint8_t v_x_393_){
_start:
{
if (v_x_393_ == 2)
{
uint8_t v___x_394_; 
v___x_394_ = 1;
return v___x_394_;
}
else
{
uint8_t v___x_395_; 
v___x_395_ = 0;
return v___x_395_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_isPublic___boxed(lean_object* v_x_396_){
_start:
{
uint8_t v_x_21__boxed_397_; uint8_t v_res_398_; lean_object* v_r_399_; 
v_x_21__boxed_397_ = lean_unbox(v_x_396_);
v_res_398_ = l_Lean_Elab_Visibility_isPublic(v_x_21__boxed_397_);
v_r_399_ = lean_box(v_res_398_);
return v_r_399_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Visibility_isInferredPublic(lean_object* v_env_400_, uint8_t v_v_401_){
_start:
{
uint8_t v___y_403_; uint8_t v_isExporting_406_; 
v_isExporting_406_ = lean_ctor_get_uint8(v_env_400_, sizeof(void*)*8);
if (v_isExporting_406_ == 0)
{
lean_object* v___x_407_; uint8_t v_isModule_408_; 
v___x_407_ = l_Lean_Environment_header(v_env_400_);
v_isModule_408_ = lean_ctor_get_uint8(v___x_407_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_407_);
if (v_isModule_408_ == 0)
{
uint8_t v___x_409_; 
v___x_409_ = 1;
v___y_403_ = v___x_409_;
goto v___jp_402_;
}
else
{
uint8_t v___x_410_; 
v___x_410_ = l_Lean_Elab_Visibility_isPublic(v_v_401_);
return v___x_410_;
}
}
else
{
v___y_403_ = v_isExporting_406_;
goto v___jp_402_;
}
v___jp_402_:
{
uint8_t v___x_404_; 
v___x_404_ = l_Lean_Elab_Visibility_isPrivate(v_v_401_);
if (v___x_404_ == 0)
{
return v___y_403_;
}
else
{
uint8_t v___x_405_; 
v___x_405_ = 0;
return v___x_405_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Visibility_isInferredPublic___boxed(lean_object* v_env_411_, lean_object* v_v_412_){
_start:
{
uint8_t v_v_boxed_413_; uint8_t v_res_414_; lean_object* v_r_415_; 
v_v_boxed_413_ = lean_unbox(v_v_412_);
v_res_414_ = l_Lean_Elab_Visibility_isInferredPublic(v_env_411_, v_v_boxed_413_);
lean_dec_ref(v_env_411_);
v_r_415_ = lean_box(v_res_414_);
return v_r_415_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorIdx(uint8_t v_x_416_){
_start:
{
switch(v_x_416_)
{
case 0:
{
lean_object* v___x_417_; 
v___x_417_ = lean_unsigned_to_nat(0u);
return v___x_417_;
}
case 1:
{
lean_object* v___x_418_; 
v___x_418_ = lean_unsigned_to_nat(1u);
return v___x_418_;
}
default: 
{
lean_object* v___x_419_; 
v___x_419_ = lean_unsigned_to_nat(2u);
return v___x_419_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorIdx___boxed(lean_object* v_x_420_){
_start:
{
uint8_t v_x_boxed_421_; lean_object* v_res_422_; 
v_x_boxed_421_ = lean_unbox(v_x_420_);
v_res_422_ = l_Lean_Elab_RecKind_ctorIdx(v_x_boxed_421_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_toCtorIdx(uint8_t v_x_423_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = l_Lean_Elab_RecKind_ctorIdx(v_x_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_toCtorIdx___boxed(lean_object* v_x_425_){
_start:
{
uint8_t v_x_4__boxed_426_; lean_object* v_res_427_; 
v_x_4__boxed_426_ = lean_unbox(v_x_425_);
v_res_427_ = l_Lean_Elab_RecKind_toCtorIdx(v_x_4__boxed_426_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim___redArg(lean_object* v_k_428_){
_start:
{
lean_inc(v_k_428_);
return v_k_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim___redArg___boxed(lean_object* v_k_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l_Lean_Elab_RecKind_ctorElim___redArg(v_k_429_);
lean_dec(v_k_429_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim(lean_object* v_motive_431_, lean_object* v_ctorIdx_432_, uint8_t v_t_433_, lean_object* v_h_434_, lean_object* v_k_435_){
_start:
{
lean_inc(v_k_435_);
return v_k_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_ctorElim___boxed(lean_object* v_motive_436_, lean_object* v_ctorIdx_437_, lean_object* v_t_438_, lean_object* v_h_439_, lean_object* v_k_440_){
_start:
{
uint8_t v_t_boxed_441_; lean_object* v_res_442_; 
v_t_boxed_441_ = lean_unbox(v_t_438_);
v_res_442_ = l_Lean_Elab_RecKind_ctorElim(v_motive_436_, v_ctorIdx_437_, v_t_boxed_441_, v_h_439_, v_k_440_);
lean_dec(v_k_440_);
lean_dec(v_ctorIdx_437_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim___redArg(lean_object* v_partial_443_){
_start:
{
lean_inc(v_partial_443_);
return v_partial_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim___redArg___boxed(lean_object* v_partial_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Lean_Elab_RecKind_partial_elim___redArg(v_partial_444_);
lean_dec(v_partial_444_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim(lean_object* v_motive_446_, uint8_t v_t_447_, lean_object* v_h_448_, lean_object* v_partial_449_){
_start:
{
lean_inc(v_partial_449_);
return v_partial_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_partial_elim___boxed(lean_object* v_motive_450_, lean_object* v_t_451_, lean_object* v_h_452_, lean_object* v_partial_453_){
_start:
{
uint8_t v_t_boxed_454_; lean_object* v_res_455_; 
v_t_boxed_454_ = lean_unbox(v_t_451_);
v_res_455_ = l_Lean_Elab_RecKind_partial_elim(v_motive_450_, v_t_boxed_454_, v_h_452_, v_partial_453_);
lean_dec(v_partial_453_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim___redArg(lean_object* v_nonrec_456_){
_start:
{
lean_inc(v_nonrec_456_);
return v_nonrec_456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim___redArg___boxed(lean_object* v_nonrec_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l_Lean_Elab_RecKind_nonrec_elim___redArg(v_nonrec_457_);
lean_dec(v_nonrec_457_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim(lean_object* v_motive_459_, uint8_t v_t_460_, lean_object* v_h_461_, lean_object* v_nonrec_462_){
_start:
{
lean_inc(v_nonrec_462_);
return v_nonrec_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_nonrec_elim___boxed(lean_object* v_motive_463_, lean_object* v_t_464_, lean_object* v_h_465_, lean_object* v_nonrec_466_){
_start:
{
uint8_t v_t_boxed_467_; lean_object* v_res_468_; 
v_t_boxed_467_ = lean_unbox(v_t_464_);
v_res_468_ = l_Lean_Elab_RecKind_nonrec_elim(v_motive_463_, v_t_boxed_467_, v_h_465_, v_nonrec_466_);
lean_dec(v_nonrec_466_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim___redArg(lean_object* v_default_469_){
_start:
{
lean_inc(v_default_469_);
return v_default_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim___redArg___boxed(lean_object* v_default_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Lean_Elab_RecKind_default_elim___redArg(v_default_470_);
lean_dec(v_default_470_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim(lean_object* v_motive_472_, uint8_t v_t_473_, lean_object* v_h_474_, lean_object* v_default_475_){
_start:
{
lean_inc(v_default_475_);
return v_default_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_RecKind_default_elim___boxed(lean_object* v_motive_476_, lean_object* v_t_477_, lean_object* v_h_478_, lean_object* v_default_479_){
_start:
{
uint8_t v_t_boxed_480_; lean_object* v_res_481_; 
v_t_boxed_480_ = lean_unbox(v_t_477_);
v_res_481_ = l_Lean_Elab_RecKind_default_elim(v_motive_476_, v_t_boxed_480_, v_h_478_, v_default_479_);
lean_dec(v_default_479_);
return v_res_481_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedRecKind_default(void){
_start:
{
uint8_t v___x_482_; 
v___x_482_ = 0;
return v___x_482_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedRecKind(void){
_start:
{
uint8_t v___x_483_; 
v___x_483_ = 0;
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorIdx(uint8_t v_x_484_){
_start:
{
switch(v_x_484_)
{
case 0:
{
lean_object* v___x_485_; 
v___x_485_ = lean_unsigned_to_nat(0u);
return v___x_485_;
}
case 1:
{
lean_object* v___x_486_; 
v___x_486_ = lean_unsigned_to_nat(1u);
return v___x_486_;
}
default: 
{
lean_object* v___x_487_; 
v___x_487_ = lean_unsigned_to_nat(2u);
return v___x_487_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorIdx___boxed(lean_object* v_x_488_){
_start:
{
uint8_t v_x_boxed_489_; lean_object* v_res_490_; 
v_x_boxed_489_ = lean_unbox(v_x_488_);
v_res_490_ = l_Lean_Elab_ComputeKind_ctorIdx(v_x_boxed_489_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_toCtorIdx(uint8_t v_x_491_){
_start:
{
lean_object* v___x_492_; 
v___x_492_ = l_Lean_Elab_ComputeKind_ctorIdx(v_x_491_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_toCtorIdx___boxed(lean_object* v_x_493_){
_start:
{
uint8_t v_x_4__boxed_494_; lean_object* v_res_495_; 
v_x_4__boxed_494_ = lean_unbox(v_x_493_);
v_res_495_ = l_Lean_Elab_ComputeKind_toCtorIdx(v_x_4__boxed_494_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim___redArg(lean_object* v_k_496_){
_start:
{
lean_inc(v_k_496_);
return v_k_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim___redArg___boxed(lean_object* v_k_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l_Lean_Elab_ComputeKind_ctorElim___redArg(v_k_497_);
lean_dec(v_k_497_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim(lean_object* v_motive_499_, lean_object* v_ctorIdx_500_, uint8_t v_t_501_, lean_object* v_h_502_, lean_object* v_k_503_){
_start:
{
lean_inc(v_k_503_);
return v_k_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_ctorElim___boxed(lean_object* v_motive_504_, lean_object* v_ctorIdx_505_, lean_object* v_t_506_, lean_object* v_h_507_, lean_object* v_k_508_){
_start:
{
uint8_t v_t_boxed_509_; lean_object* v_res_510_; 
v_t_boxed_509_ = lean_unbox(v_t_506_);
v_res_510_ = l_Lean_Elab_ComputeKind_ctorElim(v_motive_504_, v_ctorIdx_505_, v_t_boxed_509_, v_h_507_, v_k_508_);
lean_dec(v_k_508_);
lean_dec(v_ctorIdx_505_);
return v_res_510_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim___redArg(lean_object* v_regular_511_){
_start:
{
lean_inc(v_regular_511_);
return v_regular_511_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim___redArg___boxed(lean_object* v_regular_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l_Lean_Elab_ComputeKind_regular_elim___redArg(v_regular_512_);
lean_dec(v_regular_512_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim(lean_object* v_motive_514_, uint8_t v_t_515_, lean_object* v_h_516_, lean_object* v_regular_517_){
_start:
{
lean_inc(v_regular_517_);
return v_regular_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_regular_elim___boxed(lean_object* v_motive_518_, lean_object* v_t_519_, lean_object* v_h_520_, lean_object* v_regular_521_){
_start:
{
uint8_t v_t_boxed_522_; lean_object* v_res_523_; 
v_t_boxed_522_ = lean_unbox(v_t_519_);
v_res_523_ = l_Lean_Elab_ComputeKind_regular_elim(v_motive_518_, v_t_boxed_522_, v_h_520_, v_regular_521_);
lean_dec(v_regular_521_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim___redArg(lean_object* v_meta_524_){
_start:
{
lean_inc(v_meta_524_);
return v_meta_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim___redArg___boxed(lean_object* v_meta_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Lean_Elab_ComputeKind_meta_elim___redArg(v_meta_525_);
lean_dec(v_meta_525_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim(lean_object* v_motive_527_, uint8_t v_t_528_, lean_object* v_h_529_, lean_object* v_meta_530_){
_start:
{
lean_inc(v_meta_530_);
return v_meta_530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_meta_elim___boxed(lean_object* v_motive_531_, lean_object* v_t_532_, lean_object* v_h_533_, lean_object* v_meta_534_){
_start:
{
uint8_t v_t_boxed_535_; lean_object* v_res_536_; 
v_t_boxed_535_ = lean_unbox(v_t_532_);
v_res_536_ = l_Lean_Elab_ComputeKind_meta_elim(v_motive_531_, v_t_boxed_535_, v_h_533_, v_meta_534_);
lean_dec(v_meta_534_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim___redArg(lean_object* v_noncomputable_537_){
_start:
{
lean_inc(v_noncomputable_537_);
return v_noncomputable_537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim___redArg___boxed(lean_object* v_noncomputable_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = l_Lean_Elab_ComputeKind_noncomputable_elim___redArg(v_noncomputable_538_);
lean_dec(v_noncomputable_538_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim(lean_object* v_motive_540_, uint8_t v_t_541_, lean_object* v_h_542_, lean_object* v_noncomputable_543_){
_start:
{
lean_inc(v_noncomputable_543_);
return v_noncomputable_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ComputeKind_noncomputable_elim___boxed(lean_object* v_motive_544_, lean_object* v_t_545_, lean_object* v_h_546_, lean_object* v_noncomputable_547_){
_start:
{
uint8_t v_t_boxed_548_; lean_object* v_res_549_; 
v_t_boxed_548_ = lean_unbox(v_t_545_);
v_res_549_ = l_Lean_Elab_ComputeKind_noncomputable_elim(v_motive_544_, v_t_boxed_548_, v_h_546_, v_noncomputable_547_);
lean_dec(v_noncomputable_547_);
return v_res_549_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedComputeKind_default(void){
_start:
{
uint8_t v___x_550_; 
v___x_550_ = 0;
return v___x_550_;
}
}
static uint8_t _init_l_Lean_Elab_instInhabitedComputeKind(void){
_start:
{
uint8_t v___x_551_; 
v___x_551_ = 0;
return v___x_551_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_instBEqComputeKind_beq(uint8_t v_x_552_, uint8_t v_y_553_){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; uint8_t v___x_556_; 
v___x_554_ = l_Lean_Elab_ComputeKind_ctorIdx(v_x_552_);
v___x_555_ = l_Lean_Elab_ComputeKind_ctorIdx(v_y_553_);
v___x_556_ = lean_nat_dec_eq(v___x_554_, v___x_555_);
lean_dec(v___x_555_);
lean_dec(v___x_554_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instBEqComputeKind_beq___boxed(lean_object* v_x_557_, lean_object* v_y_558_){
_start:
{
uint8_t v_x_17__boxed_559_; uint8_t v_y_18__boxed_560_; uint8_t v_res_561_; lean_object* v_r_562_; 
v_x_17__boxed_559_ = lean_unbox(v_x_557_);
v_y_18__boxed_560_ = lean_unbox(v_y_558_);
v_res_561_ = l_Lean_Elab_instBEqComputeKind_beq(v_x_17__boxed_559_, v_y_18__boxed_560_);
v_r_562_ = lean_box(v_res_561_);
return v_r_562_;
}
}
static lean_object* _init_l_Lean_Elab_instReprComputeKind_repr___closed__6(void){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_574_ = lean_unsigned_to_nat(2u);
v___x_575_ = lean_nat_to_int(v___x_574_);
return v___x_575_;
}
}
static lean_object* _init_l_Lean_Elab_instReprComputeKind_repr___closed__7(void){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_576_ = lean_unsigned_to_nat(1u);
v___x_577_ = lean_nat_to_int(v___x_576_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprComputeKind_repr(uint8_t v_x_578_, lean_object* v_prec_579_){
_start:
{
lean_object* v___y_581_; lean_object* v___y_588_; lean_object* v___y_595_; 
switch(v_x_578_)
{
case 0:
{
lean_object* v___x_601_; uint8_t v___x_602_; 
v___x_601_ = lean_unsigned_to_nat(1024u);
v___x_602_ = lean_nat_dec_le(v___x_601_, v_prec_579_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; 
v___x_603_ = lean_obj_once(&l_Lean_Elab_instReprComputeKind_repr___closed__6, &l_Lean_Elab_instReprComputeKind_repr___closed__6_once, _init_l_Lean_Elab_instReprComputeKind_repr___closed__6);
v___y_581_ = v___x_603_;
goto v___jp_580_;
}
else
{
lean_object* v___x_604_; 
v___x_604_ = lean_obj_once(&l_Lean_Elab_instReprComputeKind_repr___closed__7, &l_Lean_Elab_instReprComputeKind_repr___closed__7_once, _init_l_Lean_Elab_instReprComputeKind_repr___closed__7);
v___y_581_ = v___x_604_;
goto v___jp_580_;
}
}
case 1:
{
lean_object* v___x_605_; uint8_t v___x_606_; 
v___x_605_ = lean_unsigned_to_nat(1024u);
v___x_606_ = lean_nat_dec_le(v___x_605_, v_prec_579_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; 
v___x_607_ = lean_obj_once(&l_Lean_Elab_instReprComputeKind_repr___closed__6, &l_Lean_Elab_instReprComputeKind_repr___closed__6_once, _init_l_Lean_Elab_instReprComputeKind_repr___closed__6);
v___y_588_ = v___x_607_;
goto v___jp_587_;
}
else
{
lean_object* v___x_608_; 
v___x_608_ = lean_obj_once(&l_Lean_Elab_instReprComputeKind_repr___closed__7, &l_Lean_Elab_instReprComputeKind_repr___closed__7_once, _init_l_Lean_Elab_instReprComputeKind_repr___closed__7);
v___y_588_ = v___x_608_;
goto v___jp_587_;
}
}
default: 
{
lean_object* v___x_609_; uint8_t v___x_610_; 
v___x_609_ = lean_unsigned_to_nat(1024u);
v___x_610_ = lean_nat_dec_le(v___x_609_, v_prec_579_);
if (v___x_610_ == 0)
{
lean_object* v___x_611_; 
v___x_611_ = lean_obj_once(&l_Lean_Elab_instReprComputeKind_repr___closed__6, &l_Lean_Elab_instReprComputeKind_repr___closed__6_once, _init_l_Lean_Elab_instReprComputeKind_repr___closed__6);
v___y_595_ = v___x_611_;
goto v___jp_594_;
}
else
{
lean_object* v___x_612_; 
v___x_612_ = lean_obj_once(&l_Lean_Elab_instReprComputeKind_repr___closed__7, &l_Lean_Elab_instReprComputeKind_repr___closed__7_once, _init_l_Lean_Elab_instReprComputeKind_repr___closed__7);
v___y_595_ = v___x_612_;
goto v___jp_594_;
}
}
}
v___jp_580_:
{
lean_object* v___x_582_; lean_object* v___x_583_; uint8_t v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_582_ = ((lean_object*)(l_Lean_Elab_instReprComputeKind_repr___closed__1));
v___x_583_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_583_, 0, v___y_581_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = 0;
v___x_585_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_585_, 0, v___x_583_);
lean_ctor_set_uint8(v___x_585_, sizeof(void*)*1, v___x_584_);
v___x_586_ = l_Repr_addAppParen(v___x_585_, v_prec_579_);
return v___x_586_;
}
v___jp_587_:
{
lean_object* v___x_589_; lean_object* v___x_590_; uint8_t v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v___x_589_ = ((lean_object*)(l_Lean_Elab_instReprComputeKind_repr___closed__3));
v___x_590_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_590_, 0, v___y_588_);
lean_ctor_set(v___x_590_, 1, v___x_589_);
v___x_591_ = 0;
v___x_592_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_592_, 0, v___x_590_);
lean_ctor_set_uint8(v___x_592_, sizeof(void*)*1, v___x_591_);
v___x_593_ = l_Repr_addAppParen(v___x_592_, v_prec_579_);
return v___x_593_;
}
v___jp_594_:
{
lean_object* v___x_596_; lean_object* v___x_597_; uint8_t v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_596_ = ((lean_object*)(l_Lean_Elab_instReprComputeKind_repr___closed__5));
v___x_597_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_597_, 0, v___y_595_);
lean_ctor_set(v___x_597_, 1, v___x_596_);
v___x_598_ = 0;
v___x_599_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_599_, 0, v___x_597_);
lean_ctor_set_uint8(v___x_599_, sizeof(void*)*1, v___x_598_);
v___x_600_ = l_Repr_addAppParen(v___x_599_, v_prec_579_);
return v___x_600_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprComputeKind_repr___boxed(lean_object* v_x_613_, lean_object* v_prec_614_){
_start:
{
uint8_t v_x_177__boxed_615_; lean_object* v_res_616_; 
v_x_177__boxed_615_ = lean_unbox(v_x_613_);
v_res_616_ = l_Lean_Elab_instReprComputeKind_repr(v_x_177__boxed_615_, v_prec_614_);
lean_dec(v_prec_614_);
return v_res_616_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isPrivate(lean_object* v_m_631_){
_start:
{
uint8_t v_visibility_632_; uint8_t v___x_633_; 
v_visibility_632_ = lean_ctor_get_uint8(v_m_631_, sizeof(void*)*3);
v___x_633_ = l_Lean_Elab_Visibility_isPrivate(v_visibility_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isPrivate___boxed(lean_object* v_m_634_){
_start:
{
uint8_t v_res_635_; lean_object* v_r_636_; 
v_res_635_ = l_Lean_Elab_Modifiers_isPrivate(v_m_634_);
lean_dec_ref(v_m_634_);
v_r_636_ = lean_box(v_res_635_);
return v_r_636_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isPublic(lean_object* v_m_637_){
_start:
{
uint8_t v_visibility_638_; uint8_t v___x_639_; 
v_visibility_638_ = lean_ctor_get_uint8(v_m_637_, sizeof(void*)*3);
v___x_639_ = l_Lean_Elab_Visibility_isPublic(v_visibility_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isPublic___boxed(lean_object* v_m_640_){
_start:
{
uint8_t v_res_641_; lean_object* v_r_642_; 
v_res_641_ = l_Lean_Elab_Modifiers_isPublic(v_m_640_);
lean_dec_ref(v_m_640_);
v_r_642_ = lean_box(v_res_641_);
return v_r_642_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isInferredPublic(lean_object* v_env_643_, lean_object* v_m_644_){
_start:
{
uint8_t v_visibility_645_; uint8_t v___x_646_; 
v_visibility_645_ = lean_ctor_get_uint8(v_m_644_, sizeof(void*)*3);
v___x_646_ = l_Lean_Elab_Visibility_isInferredPublic(v_env_643_, v_visibility_645_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isInferredPublic___boxed(lean_object* v_env_647_, lean_object* v_m_648_){
_start:
{
uint8_t v_res_649_; lean_object* v_r_650_; 
v_res_649_ = l_Lean_Elab_Modifiers_isInferredPublic(v_env_647_, v_m_648_);
lean_dec_ref(v_m_648_);
lean_dec_ref(v_env_647_);
v_r_650_ = lean_box(v_res_649_);
return v_r_650_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isPartial(lean_object* v_x_651_){
_start:
{
uint8_t v_recKind_652_; 
v_recKind_652_ = lean_ctor_get_uint8(v_x_651_, sizeof(void*)*3 + 3);
if (v_recKind_652_ == 0)
{
uint8_t v___x_653_; 
v___x_653_ = 1;
return v___x_653_;
}
else
{
uint8_t v___x_654_; 
v___x_654_ = 0;
return v___x_654_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isPartial___boxed(lean_object* v_x_655_){
_start:
{
uint8_t v_res_656_; lean_object* v_r_657_; 
v_res_656_ = l_Lean_Elab_Modifiers_isPartial(v_x_655_);
lean_dec_ref(v_x_655_);
v_r_657_ = lean_box(v_res_656_);
return v_r_657_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isNonrec(lean_object* v_x_658_){
_start:
{
uint8_t v_recKind_659_; 
v_recKind_659_ = lean_ctor_get_uint8(v_x_658_, sizeof(void*)*3 + 3);
if (v_recKind_659_ == 1)
{
uint8_t v___x_660_; 
v___x_660_ = 1;
return v___x_660_;
}
else
{
uint8_t v___x_661_; 
v___x_661_ = 0;
return v___x_661_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isNonrec___boxed(lean_object* v_x_662_){
_start:
{
uint8_t v_res_663_; lean_object* v_r_664_; 
v_res_663_ = l_Lean_Elab_Modifiers_isNonrec(v_x_662_);
lean_dec_ref(v_x_662_);
v_r_664_ = lean_box(v_res_663_);
return v_r_664_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isMeta(lean_object* v_m_665_){
_start:
{
uint8_t v_computeKind_666_; 
v_computeKind_666_ = lean_ctor_get_uint8(v_m_665_, sizeof(void*)*3 + 2);
if (v_computeKind_666_ == 1)
{
uint8_t v___x_667_; 
v___x_667_ = 1;
return v___x_667_;
}
else
{
uint8_t v___x_668_; 
v___x_668_ = 0;
return v___x_668_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isMeta___boxed(lean_object* v_m_669_){
_start:
{
uint8_t v_res_670_; lean_object* v_r_671_; 
v_res_670_ = l_Lean_Elab_Modifiers_isMeta(v_m_669_);
lean_dec_ref(v_m_669_);
v_r_671_ = lean_box(v_res_670_);
return v_r_671_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_isNoncomputable(lean_object* v_m_672_){
_start:
{
uint8_t v_computeKind_673_; 
v_computeKind_673_ = lean_ctor_get_uint8(v_m_672_, sizeof(void*)*3 + 2);
if (v_computeKind_673_ == 2)
{
uint8_t v___x_674_; 
v___x_674_ = 1;
return v___x_674_;
}
else
{
uint8_t v___x_675_; 
v___x_675_ = 0;
return v___x_675_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_isNoncomputable___boxed(lean_object* v_m_676_){
_start:
{
uint8_t v_res_677_; lean_object* v_r_678_; 
v_res_677_ = l_Lean_Elab_Modifiers_isNoncomputable(v_m_676_);
lean_dec_ref(v_m_676_);
v_r_678_ = lean_box(v_res_677_);
return v_r_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_addAttr(lean_object* v_modifiers_679_, lean_object* v_attr_680_){
_start:
{
lean_object* v_stx_681_; lean_object* v_docString_x3f_682_; uint8_t v_visibility_683_; uint8_t v_isProtected_684_; uint8_t v_computeKind_685_; uint8_t v_recKind_686_; uint8_t v_isUnsafe_687_; lean_object* v_attrs_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_696_; 
v_stx_681_ = lean_ctor_get(v_modifiers_679_, 0);
v_docString_x3f_682_ = lean_ctor_get(v_modifiers_679_, 1);
v_visibility_683_ = lean_ctor_get_uint8(v_modifiers_679_, sizeof(void*)*3);
v_isProtected_684_ = lean_ctor_get_uint8(v_modifiers_679_, sizeof(void*)*3 + 1);
v_computeKind_685_ = lean_ctor_get_uint8(v_modifiers_679_, sizeof(void*)*3 + 2);
v_recKind_686_ = lean_ctor_get_uint8(v_modifiers_679_, sizeof(void*)*3 + 3);
v_isUnsafe_687_ = lean_ctor_get_uint8(v_modifiers_679_, sizeof(void*)*3 + 4);
v_attrs_688_ = lean_ctor_get(v_modifiers_679_, 2);
v_isSharedCheck_696_ = !lean_is_exclusive(v_modifiers_679_);
if (v_isSharedCheck_696_ == 0)
{
v___x_690_ = v_modifiers_679_;
v_isShared_691_ = v_isSharedCheck_696_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_attrs_688_);
lean_inc(v_docString_x3f_682_);
lean_inc(v_stx_681_);
lean_dec(v_modifiers_679_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_696_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_692_; lean_object* v___x_694_; 
v___x_692_ = lean_array_push(v_attrs_688_, v_attr_680_);
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 2, v___x_692_);
v___x_694_ = v___x_690_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_stx_681_);
lean_ctor_set(v_reuseFailAlloc_695_, 1, v_docString_x3f_682_);
lean_ctor_set(v_reuseFailAlloc_695_, 2, v___x_692_);
lean_ctor_set_uint8(v_reuseFailAlloc_695_, sizeof(void*)*3, v_visibility_683_);
lean_ctor_set_uint8(v_reuseFailAlloc_695_, sizeof(void*)*3 + 1, v_isProtected_684_);
lean_ctor_set_uint8(v_reuseFailAlloc_695_, sizeof(void*)*3 + 2, v_computeKind_685_);
lean_ctor_set_uint8(v_reuseFailAlloc_695_, sizeof(void*)*3 + 3, v_recKind_686_);
lean_ctor_set_uint8(v_reuseFailAlloc_695_, sizeof(void*)*3 + 4, v_isUnsafe_687_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_addFirstAttr(lean_object* v_modifiers_697_, lean_object* v_attr_698_){
_start:
{
lean_object* v_stx_699_; lean_object* v_docString_x3f_700_; uint8_t v_visibility_701_; uint8_t v_isProtected_702_; uint8_t v_computeKind_703_; uint8_t v_recKind_704_; uint8_t v_isUnsafe_705_; lean_object* v_attrs_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_717_; 
v_stx_699_ = lean_ctor_get(v_modifiers_697_, 0);
v_docString_x3f_700_ = lean_ctor_get(v_modifiers_697_, 1);
v_visibility_701_ = lean_ctor_get_uint8(v_modifiers_697_, sizeof(void*)*3);
v_isProtected_702_ = lean_ctor_get_uint8(v_modifiers_697_, sizeof(void*)*3 + 1);
v_computeKind_703_ = lean_ctor_get_uint8(v_modifiers_697_, sizeof(void*)*3 + 2);
v_recKind_704_ = lean_ctor_get_uint8(v_modifiers_697_, sizeof(void*)*3 + 3);
v_isUnsafe_705_ = lean_ctor_get_uint8(v_modifiers_697_, sizeof(void*)*3 + 4);
v_attrs_706_ = lean_ctor_get(v_modifiers_697_, 2);
v_isSharedCheck_717_ = !lean_is_exclusive(v_modifiers_697_);
if (v_isSharedCheck_717_ == 0)
{
v___x_708_ = v_modifiers_697_;
v_isShared_709_ = v_isSharedCheck_717_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_attrs_706_);
lean_inc(v_docString_x3f_700_);
lean_inc(v_stx_699_);
lean_dec(v_modifiers_697_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_717_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_715_; 
v___x_710_ = lean_unsigned_to_nat(1u);
v___x_711_ = lean_mk_empty_array_with_capacity(v___x_710_);
v___x_712_ = lean_array_push(v___x_711_, v_attr_698_);
v___x_713_ = l_Array_append___redArg(v___x_712_, v_attrs_706_);
lean_dec_ref(v_attrs_706_);
if (v_isShared_709_ == 0)
{
lean_ctor_set(v___x_708_, 2, v___x_713_);
v___x_715_ = v___x_708_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_stx_699_);
lean_ctor_set(v_reuseFailAlloc_716_, 1, v_docString_x3f_700_);
lean_ctor_set(v_reuseFailAlloc_716_, 2, v___x_713_);
lean_ctor_set_uint8(v_reuseFailAlloc_716_, sizeof(void*)*3, v_visibility_701_);
lean_ctor_set_uint8(v_reuseFailAlloc_716_, sizeof(void*)*3 + 1, v_isProtected_702_);
lean_ctor_set_uint8(v_reuseFailAlloc_716_, sizeof(void*)*3 + 2, v_computeKind_703_);
lean_ctor_set_uint8(v_reuseFailAlloc_716_, sizeof(void*)*3 + 3, v_recKind_704_);
lean_ctor_set_uint8(v_reuseFailAlloc_716_, sizeof(void*)*3 + 4, v_isUnsafe_705_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0(lean_object* v_p_718_, lean_object* v_as_719_, size_t v_i_720_, size_t v_stop_721_, lean_object* v_b_722_){
_start:
{
lean_object* v___y_724_; uint8_t v___x_728_; 
v___x_728_ = lean_usize_dec_eq(v_i_720_, v_stop_721_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; lean_object* v___x_730_; uint8_t v___x_731_; 
v___x_729_ = lean_array_uget_borrowed(v_as_719_, v_i_720_);
lean_inc_ref(v_p_718_);
lean_inc(v___x_729_);
v___x_730_ = lean_apply_1(v_p_718_, v___x_729_);
v___x_731_ = lean_unbox(v___x_730_);
if (v___x_731_ == 0)
{
v___y_724_ = v_b_722_;
goto v___jp_723_;
}
else
{
lean_object* v___x_732_; 
lean_inc(v___x_729_);
v___x_732_ = lean_array_push(v_b_722_, v___x_729_);
v___y_724_ = v___x_732_;
goto v___jp_723_;
}
}
else
{
lean_dec_ref(v_p_718_);
return v_b_722_;
}
v___jp_723_:
{
size_t v___x_725_; size_t v___x_726_; 
v___x_725_ = ((size_t)1ULL);
v___x_726_ = lean_usize_add(v_i_720_, v___x_725_);
v_i_720_ = v___x_726_;
v_b_722_ = v___y_724_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0___boxed(lean_object* v_p_733_, lean_object* v_as_734_, lean_object* v_i_735_, lean_object* v_stop_736_, lean_object* v_b_737_){
_start:
{
size_t v_i_boxed_738_; size_t v_stop_boxed_739_; lean_object* v_res_740_; 
v_i_boxed_738_ = lean_unbox_usize(v_i_735_);
lean_dec(v_i_735_);
v_stop_boxed_739_ = lean_unbox_usize(v_stop_736_);
lean_dec(v_stop_736_);
v_res_740_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0(v_p_733_, v_as_734_, v_i_boxed_738_, v_stop_boxed_739_, v_b_737_);
lean_dec_ref(v_as_734_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_filterAttrs(lean_object* v_modifiers_743_, lean_object* v_p_744_){
_start:
{
lean_object* v_stx_745_; lean_object* v_docString_x3f_746_; uint8_t v_visibility_747_; uint8_t v_isProtected_748_; uint8_t v_computeKind_749_; uint8_t v_recKind_750_; uint8_t v_isUnsafe_751_; lean_object* v_attrs_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_779_; 
v_stx_745_ = lean_ctor_get(v_modifiers_743_, 0);
v_docString_x3f_746_ = lean_ctor_get(v_modifiers_743_, 1);
v_visibility_747_ = lean_ctor_get_uint8(v_modifiers_743_, sizeof(void*)*3);
v_isProtected_748_ = lean_ctor_get_uint8(v_modifiers_743_, sizeof(void*)*3 + 1);
v_computeKind_749_ = lean_ctor_get_uint8(v_modifiers_743_, sizeof(void*)*3 + 2);
v_recKind_750_ = lean_ctor_get_uint8(v_modifiers_743_, sizeof(void*)*3 + 3);
v_isUnsafe_751_ = lean_ctor_get_uint8(v_modifiers_743_, sizeof(void*)*3 + 4);
v_attrs_752_ = lean_ctor_get(v_modifiers_743_, 2);
v_isSharedCheck_779_ = !lean_is_exclusive(v_modifiers_743_);
if (v_isSharedCheck_779_ == 0)
{
v___x_754_ = v_modifiers_743_;
v_isShared_755_ = v_isSharedCheck_779_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_attrs_752_);
lean_inc(v_docString_x3f_746_);
lean_inc(v_stx_745_);
lean_dec(v_modifiers_743_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_779_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; uint8_t v___x_759_; 
v___x_756_ = lean_unsigned_to_nat(0u);
v___x_757_ = lean_array_get_size(v_attrs_752_);
v___x_758_ = ((lean_object*)(l_Lean_Elab_Modifiers_filterAttrs___closed__0));
v___x_759_ = lean_nat_dec_lt(v___x_756_, v___x_757_);
if (v___x_759_ == 0)
{
lean_object* v___x_761_; 
lean_dec_ref(v_attrs_752_);
lean_dec_ref(v_p_744_);
if (v_isShared_755_ == 0)
{
lean_ctor_set(v___x_754_, 2, v___x_758_);
v___x_761_ = v___x_754_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_stx_745_);
lean_ctor_set(v_reuseFailAlloc_762_, 1, v_docString_x3f_746_);
lean_ctor_set(v_reuseFailAlloc_762_, 2, v___x_758_);
lean_ctor_set_uint8(v_reuseFailAlloc_762_, sizeof(void*)*3, v_visibility_747_);
lean_ctor_set_uint8(v_reuseFailAlloc_762_, sizeof(void*)*3 + 1, v_isProtected_748_);
lean_ctor_set_uint8(v_reuseFailAlloc_762_, sizeof(void*)*3 + 2, v_computeKind_749_);
lean_ctor_set_uint8(v_reuseFailAlloc_762_, sizeof(void*)*3 + 3, v_recKind_750_);
lean_ctor_set_uint8(v_reuseFailAlloc_762_, sizeof(void*)*3 + 4, v_isUnsafe_751_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
else
{
uint8_t v___x_763_; 
v___x_763_ = lean_nat_dec_le(v___x_757_, v___x_757_);
if (v___x_763_ == 0)
{
if (v___x_759_ == 0)
{
lean_object* v___x_765_; 
lean_dec_ref(v_attrs_752_);
lean_dec_ref(v_p_744_);
if (v_isShared_755_ == 0)
{
lean_ctor_set(v___x_754_, 2, v___x_758_);
v___x_765_ = v___x_754_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_stx_745_);
lean_ctor_set(v_reuseFailAlloc_766_, 1, v_docString_x3f_746_);
lean_ctor_set(v_reuseFailAlloc_766_, 2, v___x_758_);
lean_ctor_set_uint8(v_reuseFailAlloc_766_, sizeof(void*)*3, v_visibility_747_);
lean_ctor_set_uint8(v_reuseFailAlloc_766_, sizeof(void*)*3 + 1, v_isProtected_748_);
lean_ctor_set_uint8(v_reuseFailAlloc_766_, sizeof(void*)*3 + 2, v_computeKind_749_);
lean_ctor_set_uint8(v_reuseFailAlloc_766_, sizeof(void*)*3 + 3, v_recKind_750_);
lean_ctor_set_uint8(v_reuseFailAlloc_766_, sizeof(void*)*3 + 4, v_isUnsafe_751_);
v___x_765_ = v_reuseFailAlloc_766_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
return v___x_765_;
}
}
else
{
size_t v___x_767_; size_t v___x_768_; lean_object* v___x_769_; lean_object* v___x_771_; 
v___x_767_ = ((size_t)0ULL);
v___x_768_ = lean_usize_of_nat(v___x_757_);
v___x_769_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0(v_p_744_, v_attrs_752_, v___x_767_, v___x_768_, v___x_758_);
lean_dec_ref(v_attrs_752_);
if (v_isShared_755_ == 0)
{
lean_ctor_set(v___x_754_, 2, v___x_769_);
v___x_771_ = v___x_754_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v_stx_745_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v_docString_x3f_746_);
lean_ctor_set(v_reuseFailAlloc_772_, 2, v___x_769_);
lean_ctor_set_uint8(v_reuseFailAlloc_772_, sizeof(void*)*3, v_visibility_747_);
lean_ctor_set_uint8(v_reuseFailAlloc_772_, sizeof(void*)*3 + 1, v_isProtected_748_);
lean_ctor_set_uint8(v_reuseFailAlloc_772_, sizeof(void*)*3 + 2, v_computeKind_749_);
lean_ctor_set_uint8(v_reuseFailAlloc_772_, sizeof(void*)*3 + 3, v_recKind_750_);
lean_ctor_set_uint8(v_reuseFailAlloc_772_, sizeof(void*)*3 + 4, v_isUnsafe_751_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
else
{
size_t v___x_773_; size_t v___x_774_; lean_object* v___x_775_; lean_object* v___x_777_; 
v___x_773_ = ((size_t)0ULL);
v___x_774_ = lean_usize_of_nat(v___x_757_);
v___x_775_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Modifiers_filterAttrs_spec__0(v_p_744_, v_attrs_752_, v___x_773_, v___x_774_, v___x_758_);
lean_dec_ref(v_attrs_752_);
if (v_isShared_755_ == 0)
{
lean_ctor_set(v___x_754_, 2, v___x_775_);
v___x_777_ = v___x_754_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_stx_745_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v_docString_x3f_746_);
lean_ctor_set(v_reuseFailAlloc_778_, 2, v___x_775_);
lean_ctor_set_uint8(v_reuseFailAlloc_778_, sizeof(void*)*3, v_visibility_747_);
lean_ctor_set_uint8(v_reuseFailAlloc_778_, sizeof(void*)*3 + 1, v_isProtected_748_);
lean_ctor_set_uint8(v_reuseFailAlloc_778_, sizeof(void*)*3 + 2, v_computeKind_749_);
lean_ctor_set_uint8(v_reuseFailAlloc_778_, sizeof(void*)*3 + 3, v_recKind_750_);
lean_ctor_set_uint8(v_reuseFailAlloc_778_, sizeof(void*)*3 + 4, v_isUnsafe_751_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Modifiers_anyAttr_spec__0(lean_object* v_p_780_, lean_object* v_as_781_, size_t v_i_782_, size_t v_stop_783_){
_start:
{
uint8_t v___x_784_; 
v___x_784_ = lean_usize_dec_eq(v_i_782_, v_stop_783_);
if (v___x_784_ == 0)
{
lean_object* v___x_785_; lean_object* v___x_786_; uint8_t v___x_787_; 
v___x_785_ = lean_array_uget_borrowed(v_as_781_, v_i_782_);
lean_inc_ref(v_p_780_);
lean_inc(v___x_785_);
v___x_786_ = lean_apply_1(v_p_780_, v___x_785_);
v___x_787_ = lean_unbox(v___x_786_);
if (v___x_787_ == 0)
{
size_t v___x_788_; size_t v___x_789_; 
v___x_788_ = ((size_t)1ULL);
v___x_789_ = lean_usize_add(v_i_782_, v___x_788_);
v_i_782_ = v___x_789_;
goto _start;
}
else
{
uint8_t v___x_791_; 
lean_dec_ref(v_p_780_);
v___x_791_ = lean_unbox(v___x_786_);
return v___x_791_;
}
}
else
{
uint8_t v___x_792_; 
lean_dec_ref(v_p_780_);
v___x_792_ = 0;
return v___x_792_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Modifiers_anyAttr_spec__0___boxed(lean_object* v_p_793_, lean_object* v_as_794_, lean_object* v_i_795_, lean_object* v_stop_796_){
_start:
{
size_t v_i_boxed_797_; size_t v_stop_boxed_798_; uint8_t v_res_799_; lean_object* v_r_800_; 
v_i_boxed_797_ = lean_unbox_usize(v_i_795_);
lean_dec(v_i_795_);
v_stop_boxed_798_ = lean_unbox_usize(v_stop_796_);
lean_dec(v_stop_796_);
v_res_799_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Modifiers_anyAttr_spec__0(v_p_793_, v_as_794_, v_i_boxed_797_, v_stop_boxed_798_);
lean_dec_ref(v_as_794_);
v_r_800_ = lean_box(v_res_799_);
return v_r_800_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Modifiers_anyAttr(lean_object* v_modifiers_801_, lean_object* v_p_802_){
_start:
{
lean_object* v_attrs_803_; lean_object* v___x_804_; lean_object* v___x_805_; uint8_t v___x_806_; 
v_attrs_803_ = lean_ctor_get(v_modifiers_801_, 2);
v___x_804_ = lean_unsigned_to_nat(0u);
v___x_805_ = lean_array_get_size(v_attrs_803_);
v___x_806_ = lean_nat_dec_lt(v___x_804_, v___x_805_);
if (v___x_806_ == 0)
{
lean_dec_ref(v_p_802_);
return v___x_806_;
}
else
{
if (v___x_806_ == 0)
{
lean_dec_ref(v_p_802_);
return v___x_806_;
}
else
{
size_t v___x_807_; size_t v___x_808_; uint8_t v___x_809_; 
v___x_807_ = ((size_t)0ULL);
v___x_808_ = lean_usize_of_nat(v___x_805_);
v___x_809_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_Modifiers_anyAttr_spec__0(v_p_802_, v_attrs_803_, v___x_807_, v___x_808_);
return v___x_809_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Modifiers_anyAttr___boxed(lean_object* v_modifiers_810_, lean_object* v_p_811_){
_start:
{
uint8_t v_res_812_; lean_object* v_r_813_; 
v_res_812_ = l_Lean_Elab_Modifiers_anyAttr(v_modifiers_810_, v_p_811_);
lean_dec_ref(v_modifiers_810_);
v_r_813_ = lean_box(v_res_812_);
return v_r_813_;
}
}
static lean_object* _init_l_Lean_Elab_instToFormatModifiers___lam__0___closed__2(void){
_start:
{
lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_816_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__0___closed__0));
v___x_817_ = lean_string_length(v___x_816_);
return v___x_817_;
}
}
static lean_object* _init_l_Lean_Elab_instToFormatModifiers___lam__0___closed__3(void){
_start:
{
lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_818_ = lean_obj_once(&l_Lean_Elab_instToFormatModifiers___lam__0___closed__2, &l_Lean_Elab_instToFormatModifiers___lam__0___closed__2_once, _init_l_Lean_Elab_instToFormatModifiers___lam__0___closed__2);
v___x_819_ = lean_nat_to_int(v___x_818_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToFormatModifiers___lam__0(lean_object* v_attr_827_){
_start:
{
uint8_t v_kind_828_; lean_object* v_name_829_; lean_object* v_stx_830_; lean_object* v___y_832_; 
v_kind_828_ = lean_ctor_get_uint8(v_attr_827_, sizeof(void*)*2);
v_name_829_ = lean_ctor_get(v_attr_827_, 0);
lean_inc(v_name_829_);
v_stx_830_ = lean_ctor_get(v_attr_827_, 1);
lean_inc(v_stx_830_);
lean_dec_ref(v_attr_827_);
switch(v_kind_828_)
{
case 0:
{
lean_object* v___x_854_; 
v___x_854_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__0___closed__6));
v___y_832_ = v___x_854_;
goto v___jp_831_;
}
case 1:
{
lean_object* v___x_855_; 
v___x_855_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__0___closed__7));
v___y_832_ = v___x_855_;
goto v___jp_831_;
}
default: 
{
lean_object* v___x_856_; 
v___x_856_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__0___closed__8));
v___y_832_ = v___x_856_;
goto v___jp_831_;
}
}
v___jp_831_:
{
lean_object* v___x_833_; uint8_t v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; uint8_t v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; uint8_t v___x_852_; lean_object* v___x_853_; 
v___x_833_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_833_, 0, v___y_832_);
v___x_834_ = 1;
v___x_835_ = l_Lean_Name_toString(v_name_829_, v___x_834_);
v___x_836_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_836_, 0, v___x_835_);
v___x_837_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_837_, 0, v___x_833_);
lean_ctor_set(v___x_837_, 1, v___x_836_);
v___x_838_ = lean_box(0);
v___x_839_ = 0;
v___x_840_ = l_Lean_Syntax_formatStx(v_stx_830_, v___x_838_, v___x_839_);
v___x_841_ = l_Std_Format_defWidth;
v___x_842_ = lean_unsigned_to_nat(0u);
v___x_843_ = l_Std_Format_pretty(v___x_840_, v___x_841_, v___x_842_, v___x_842_);
v___x_844_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_844_, 0, v___x_843_);
v___x_845_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_845_, 0, v___x_837_);
lean_ctor_set(v___x_845_, 1, v___x_844_);
v___x_846_ = lean_obj_once(&l_Lean_Elab_instToFormatModifiers___lam__0___closed__3, &l_Lean_Elab_instToFormatModifiers___lam__0___closed__3_once, _init_l_Lean_Elab_instToFormatModifiers___lam__0___closed__3);
v___x_847_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__0___closed__4));
v___x_848_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_848_, 0, v___x_847_);
lean_ctor_set(v___x_848_, 1, v___x_845_);
v___x_849_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__0___closed__5));
v___x_850_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_850_, 0, v___x_848_);
lean_ctor_set(v___x_850_, 1, v___x_849_);
v___x_851_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_851_, 0, v___x_846_);
lean_ctor_set(v___x_851_, 1, v___x_850_);
v___x_852_ = 0;
v___x_853_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_853_, 0, v___x_851_);
lean_ctor_set_uint8(v___x_853_, sizeof(void*)*1, v___x_852_);
return v___x_853_;
}
}
}
static lean_object* _init_l_Lean_Elab_instToFormatModifiers___lam__1___closed__5(void){
_start:
{
lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_865_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__0));
v___x_866_ = lean_string_length(v___x_865_);
return v___x_866_;
}
}
static lean_object* _init_l_Lean_Elab_instToFormatModifiers___lam__1___closed__6(void){
_start:
{
lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_867_ = lean_obj_once(&l_Lean_Elab_instToFormatModifiers___lam__1___closed__5, &l_Lean_Elab_instToFormatModifiers___lam__1___closed__5_once, _init_l_Lean_Elab_instToFormatModifiers___lam__1___closed__5);
v___x_868_ = lean_nat_to_int(v___x_867_);
return v___x_868_;
}
}
static lean_object* _init_l_Lean_Elab_instToFormatModifiers___lam__1___closed__35(void){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_924_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__33));
v___x_925_ = lean_string_length(v___x_924_);
return v___x_925_;
}
}
static lean_object* _init_l_Lean_Elab_instToFormatModifiers___lam__1___closed__36(void){
_start:
{
lean_object* v___x_926_; lean_object* v___x_927_; 
v___x_926_ = lean_obj_once(&l_Lean_Elab_instToFormatModifiers___lam__1___closed__35, &l_Lean_Elab_instToFormatModifiers___lam__1___closed__35_once, _init_l_Lean_Elab_instToFormatModifiers___lam__1___closed__35);
v___x_927_ = lean_nat_to_int(v___x_926_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToFormatModifiers___lam__1(lean_object* v___f_937_, lean_object* v___f_938_, lean_object* v_m_939_){
_start:
{
lean_object* v_docString_x3f_940_; uint8_t v_visibility_941_; uint8_t v_isProtected_942_; uint8_t v_computeKind_943_; uint8_t v_recKind_944_; uint8_t v_isUnsafe_945_; lean_object* v_attrs_946_; lean_object* v___y_948_; lean_object* v___y_949_; lean_object* v___y_966_; lean_object* v___y_967_; lean_object* v___y_972_; lean_object* v___y_973_; lean_object* v___y_979_; lean_object* v___y_980_; lean_object* v___y_986_; lean_object* v___y_987_; lean_object* v___y_992_; 
v_docString_x3f_940_ = lean_ctor_get(v_m_939_, 1);
lean_inc(v_docString_x3f_940_);
v_visibility_941_ = lean_ctor_get_uint8(v_m_939_, sizeof(void*)*3);
v_isProtected_942_ = lean_ctor_get_uint8(v_m_939_, sizeof(void*)*3 + 1);
v_computeKind_943_ = lean_ctor_get_uint8(v_m_939_, sizeof(void*)*3 + 2);
v_recKind_944_ = lean_ctor_get_uint8(v_m_939_, sizeof(void*)*3 + 3);
v_isUnsafe_945_ = lean_ctor_get_uint8(v_m_939_, sizeof(void*)*3 + 4);
v_attrs_946_ = lean_ctor_get(v_m_939_, 2);
lean_inc_ref(v_attrs_946_);
lean_dec_ref(v_m_939_);
if (lean_obj_tag(v_docString_x3f_940_) == 0)
{
lean_object* v___x_996_; 
v___x_996_ = lean_box(0);
v___y_992_ = v___x_996_;
goto v___jp_991_;
}
else
{
lean_object* v_val_997_; lean_object* v___x_999_; uint8_t v_isShared_1000_; uint8_t v_isSharedCheck_1039_; 
v_val_997_ = lean_ctor_get(v_docString_x3f_940_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v_docString_x3f_940_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_999_ = v_docString_x3f_940_;
v_isShared_1000_ = v_isSharedCheck_1039_;
goto v_resetjp_998_;
}
else
{
lean_inc(v_val_997_);
lean_dec(v_docString_x3f_940_);
v___x_999_ = lean_box(0);
v_isShared_1000_ = v_isSharedCheck_1039_;
goto v_resetjp_998_;
}
v_resetjp_998_:
{
lean_object* v_fst_1001_; lean_object* v_snd_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1038_; 
v_fst_1001_ = lean_ctor_get(v_val_997_, 0);
v_snd_1002_ = lean_ctor_get(v_val_997_, 1);
v_isSharedCheck_1038_ = !lean_is_exclusive(v_val_997_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1004_ = v_val_997_;
v_isShared_1005_ = v_isSharedCheck_1038_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_snd_1002_);
lean_inc(v_fst_1001_);
lean_dec(v_val_997_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1038_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; uint8_t v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1012_; 
v___x_1006_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__32));
v___x_1007_ = lean_box(0);
v___x_1008_ = 0;
v___x_1009_ = l_Lean_Syntax_formatStx(v_fst_1001_, v___x_1007_, v___x_1008_);
v___x_1010_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__2));
if (v_isShared_1005_ == 0)
{
lean_ctor_set_tag(v___x_1004_, 5);
lean_ctor_set(v___x_1004_, 1, v___x_1010_);
lean_ctor_set(v___x_1004_, 0, v___x_1009_);
v___x_1012_ = v___x_1004_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1009_);
lean_ctor_set(v_reuseFailAlloc_1037_, 1, v___x_1010_);
v___x_1012_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___y_1016_; uint8_t v___x_1034_; 
v___x_1013_ = lean_box(1);
v___x_1014_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1012_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
v___x_1034_ = lean_unbox(v_snd_1002_);
lean_dec(v_snd_1002_);
if (v___x_1034_ == 0)
{
lean_object* v___x_1035_; 
v___x_1035_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__41));
v___y_1016_ = v___x_1035_;
goto v___jp_1015_;
}
else
{
lean_object* v___x_1036_; 
v___x_1036_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__42));
v___y_1016_ = v___x_1036_;
goto v___jp_1015_;
}
v___jp_1015_:
{
lean_object* v___x_1018_; 
if (v_isShared_1000_ == 0)
{
lean_ctor_set_tag(v___x_999_, 3);
lean_ctor_set(v___x_999_, 0, v___y_1016_);
v___x_1018_ = v___x_999_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v___y_1016_);
v___x_1018_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; uint8_t v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1019_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1014_);
lean_ctor_set(v___x_1019_, 1, v___x_1018_);
v___x_1020_ = lean_obj_once(&l_Lean_Elab_instToFormatModifiers___lam__1___closed__36, &l_Lean_Elab_instToFormatModifiers___lam__1___closed__36_once, _init_l_Lean_Elab_instToFormatModifiers___lam__1___closed__36);
v___x_1021_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__37));
v___x_1022_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1022_, 0, v___x_1021_);
lean_ctor_set(v___x_1022_, 1, v___x_1019_);
v___x_1023_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__38));
v___x_1024_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1022_);
lean_ctor_set(v___x_1024_, 1, v___x_1023_);
v___x_1025_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1020_);
lean_ctor_set(v___x_1025_, 1, v___x_1024_);
v___x_1026_ = 0;
v___x_1027_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1027_, 0, v___x_1025_);
lean_ctor_set_uint8(v___x_1027_, sizeof(void*)*1, v___x_1026_);
v___x_1028_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1028_, 0, v___x_1006_);
lean_ctor_set(v___x_1028_, 1, v___x_1027_);
v___x_1029_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__40));
v___x_1030_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1030_, 0, v___x_1028_);
lean_ctor_set(v___x_1030_, 1, v___x_1029_);
v___x_1031_ = lean_box(0);
v___x_1032_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1030_);
lean_ctor_set(v___x_1032_, 1, v___x_1031_);
v___y_992_ = v___x_1032_;
goto v___jp_991_;
}
}
}
}
}
}
v___jp_947_:
{
lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v_components_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; uint8_t v___x_963_; lean_object* v___x_964_; 
v___x_950_ = l_List_appendTR___redArg(v___y_948_, v___y_949_);
v___x_951_ = lean_array_to_list(v_attrs_946_);
v___x_952_ = lean_box(0);
v___x_953_ = l_List_mapTR_loop___redArg(v___f_937_, v___x_951_, v___x_952_);
v_components_954_ = l_List_appendTR___redArg(v___x_950_, v___x_953_);
v___x_955_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__3));
v___x_956_ = l_Std_Format_joinSep___redArg(v___f_938_, v_components_954_, v___x_955_);
v___x_957_ = lean_obj_once(&l_Lean_Elab_instToFormatModifiers___lam__1___closed__6, &l_Lean_Elab_instToFormatModifiers___lam__1___closed__6_once, _init_l_Lean_Elab_instToFormatModifiers___lam__1___closed__6);
v___x_958_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__7));
v___x_959_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_958_);
lean_ctor_set(v___x_959_, 1, v___x_956_);
v___x_960_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__8));
v___x_961_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_961_, 0, v___x_959_);
lean_ctor_set(v___x_961_, 1, v___x_960_);
v___x_962_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_962_, 0, v___x_957_);
lean_ctor_set(v___x_962_, 1, v___x_961_);
v___x_963_ = 0;
v___x_964_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_964_, 0, v___x_962_);
lean_ctor_set_uint8(v___x_964_, sizeof(void*)*1, v___x_963_);
return v___x_964_;
}
v___jp_965_:
{
lean_object* v___x_968_; 
v___x_968_ = l_List_appendTR___redArg(v___y_966_, v___y_967_);
if (v_isUnsafe_945_ == 0)
{
lean_object* v___x_969_; 
v___x_969_ = lean_box(0);
v___y_948_ = v___x_968_;
v___y_949_ = v___x_969_;
goto v___jp_947_;
}
else
{
lean_object* v___x_970_; 
v___x_970_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__11));
v___y_948_ = v___x_968_;
v___y_949_ = v___x_970_;
goto v___jp_947_;
}
}
v___jp_971_:
{
lean_object* v___x_974_; 
v___x_974_ = l_List_appendTR___redArg(v___y_972_, v___y_973_);
switch(v_recKind_944_)
{
case 0:
{
lean_object* v___x_975_; 
v___x_975_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__14));
v___y_966_ = v___x_974_;
v___y_967_ = v___x_975_;
goto v___jp_965_;
}
case 1:
{
lean_object* v___x_976_; 
v___x_976_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__17));
v___y_966_ = v___x_974_;
v___y_967_ = v___x_976_;
goto v___jp_965_;
}
default: 
{
lean_object* v___x_977_; 
v___x_977_ = lean_box(0);
v___y_966_ = v___x_974_;
v___y_967_ = v___x_977_;
goto v___jp_965_;
}
}
}
v___jp_978_:
{
lean_object* v___x_981_; 
v___x_981_ = l_List_appendTR___redArg(v___y_979_, v___y_980_);
switch(v_computeKind_943_)
{
case 0:
{
lean_object* v___x_982_; 
v___x_982_ = lean_box(0);
v___y_972_ = v___x_981_;
v___y_973_ = v___x_982_;
goto v___jp_971_;
}
case 1:
{
lean_object* v___x_983_; 
v___x_983_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__20));
v___y_972_ = v___x_981_;
v___y_973_ = v___x_983_;
goto v___jp_971_;
}
default: 
{
lean_object* v___x_984_; 
v___x_984_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__23));
v___y_972_ = v___x_981_;
v___y_973_ = v___x_984_;
goto v___jp_971_;
}
}
}
v___jp_985_:
{
lean_object* v___x_988_; 
v___x_988_ = l_List_appendTR___redArg(v___y_986_, v___y_987_);
if (v_isProtected_942_ == 0)
{
lean_object* v___x_989_; 
v___x_989_ = lean_box(0);
v___y_979_ = v___x_988_;
v___y_980_ = v___x_989_;
goto v___jp_978_;
}
else
{
lean_object* v___x_990_; 
v___x_990_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__26));
v___y_979_ = v___x_988_;
v___y_980_ = v___x_990_;
goto v___jp_978_;
}
}
v___jp_991_:
{
switch(v_visibility_941_)
{
case 0:
{
lean_object* v___x_993_; 
v___x_993_ = lean_box(0);
v___y_986_ = v___y_992_;
v___y_987_ = v___x_993_;
goto v___jp_985_;
}
case 1:
{
lean_object* v___x_994_; 
v___x_994_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__28));
v___y_986_ = v___y_992_;
v___y_987_ = v___x_994_;
goto v___jp_985_;
}
default: 
{
lean_object* v___x_995_; 
v___x_995_ = ((lean_object*)(l_Lean_Elab_instToFormatModifiers___lam__1___closed__30));
v___y_986_ = v___y_992_;
v___y_987_ = v___x_995_;
goto v___jp_985_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instToStringModifiers___lam__0(lean_object* v_f_1046_){
_start:
{
lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1047_ = l_Std_Format_defWidth;
v___x_1048_ = lean_unsigned_to_nat(0u);
v___x_1049_ = l_Std_Format_pretty(v_f_1046_, v___x_1047_, v___x_1048_, v___x_1048_);
return v___x_1049_;
}
}
static lean_object* _init_l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1056_ = ((lean_object*)(l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__0));
v___x_1057_ = l_Lean_stringToMessageData(v___x_1056_);
return v___x_1057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg(lean_object* v_inst_1058_, lean_object* v_inst_1059_, lean_object* v_optDocComment_1060_){
_start:
{
lean_object* v_toApplicative_1061_; lean_object* v_toPure_1062_; lean_object* v___x_1063_; 
v_toApplicative_1061_ = lean_ctor_get(v_inst_1058_, 0);
v_toPure_1062_ = lean_ctor_get(v_toApplicative_1061_, 1);
v___x_1063_ = l_Lean_Syntax_getOptional_x3f(v_optDocComment_1060_);
if (lean_obj_tag(v___x_1063_) == 0)
{
lean_object* v___x_1064_; lean_object* v___x_1065_; 
lean_inc(v_toPure_1062_);
lean_dec_ref(v_inst_1059_);
lean_dec_ref(v_inst_1058_);
v___x_1064_ = lean_box(0);
v___x_1065_ = lean_apply_2(v_toPure_1062_, lean_box(0), v___x_1064_);
return v___x_1065_;
}
else
{
lean_object* v_val_1066_; lean_object* v___x_1068_; uint8_t v_isShared_1069_; uint8_t v_isSharedCheck_1087_; 
v_val_1066_ = lean_ctor_get(v___x_1063_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1063_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1068_ = v___x_1063_;
v_isShared_1069_ = v_isSharedCheck_1087_;
goto v_resetjp_1067_;
}
else
{
lean_inc(v_val_1066_);
lean_dec(v___x_1063_);
v___x_1068_ = lean_box(0);
v_isShared_1069_ = v_isSharedCheck_1087_;
goto v_resetjp_1067_;
}
v_resetjp_1067_:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; 
v___x_1070_ = lean_unsigned_to_nat(1u);
v___x_1071_ = l_Lean_Syntax_getArg(v_val_1066_, v___x_1070_);
if (lean_obj_tag(v___x_1071_) == 2)
{
lean_object* v_val_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1079_; 
lean_inc(v_toPure_1062_);
lean_dec(v_val_1066_);
lean_dec_ref(v_inst_1059_);
lean_dec_ref(v_inst_1058_);
v_val_1072_ = lean_ctor_get(v___x_1071_, 1);
lean_inc_ref(v_val_1072_);
lean_dec_ref(v___x_1071_);
v___x_1073_ = lean_unsigned_to_nat(0u);
v___x_1074_ = lean_string_utf8_byte_size(v_val_1072_);
v___x_1075_ = lean_unsigned_to_nat(2u);
v___x_1076_ = lean_nat_sub(v___x_1074_, v___x_1075_);
v___x_1077_ = lean_string_utf8_extract(v_val_1072_, v___x_1073_, v___x_1076_);
lean_dec(v___x_1076_);
lean_dec_ref(v_val_1072_);
if (v_isShared_1069_ == 0)
{
lean_ctor_set(v___x_1068_, 0, v___x_1077_);
v___x_1079_ = v___x_1068_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v___x_1077_);
v___x_1079_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
lean_object* v___x_1080_; 
v___x_1080_ = lean_apply_2(v_toPure_1062_, lean_box(0), v___x_1079_);
return v___x_1080_;
}
}
else
{
lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
lean_del_object(v___x_1068_);
v___x_1082_ = lean_obj_once(&l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__1, &l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__1_once, _init_l_Lean_Elab_expandOptDocComment_x3f___redArg___closed__1);
v___x_1083_ = l_Lean_MessageData_ofSyntax(v___x_1071_);
v___x_1084_ = l_Lean_indentD(v___x_1083_);
v___x_1085_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1082_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
v___x_1086_ = l_Lean_throwErrorAt___redArg(v_inst_1058_, v_inst_1059_, v_val_1066_, v___x_1085_);
return v___x_1086_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f___redArg___boxed(lean_object* v_inst_1088_, lean_object* v_inst_1089_, lean_object* v_optDocComment_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = l_Lean_Elab_expandOptDocComment_x3f___redArg(v_inst_1088_, v_inst_1089_, v_optDocComment_1090_);
lean_dec(v_optDocComment_1090_);
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f(lean_object* v_m_1092_, lean_object* v_inst_1093_, lean_object* v_inst_1094_, lean_object* v_optDocComment_1095_){
_start:
{
lean_object* v___x_1096_; 
v___x_1096_ = l_Lean_Elab_expandOptDocComment_x3f___redArg(v_inst_1093_, v_inst_1094_, v_optDocComment_1095_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandOptDocComment_x3f___boxed(lean_object* v_m_1097_, lean_object* v_inst_1098_, lean_object* v_inst_1099_, lean_object* v_optDocComment_1100_){
_start:
{
lean_object* v_res_1101_; 
v_res_1101_ = l_Lean_Elab_expandOptDocComment_x3f(v_m_1097_, v_inst_1098_, v_inst_1099_, v_optDocComment_1100_);
lean_dec(v_optDocComment_1100_);
return v_res_1101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__0(lean_object* v_stx_1102_, lean_object* v___y_1103_, uint8_t v_visibility_1104_, uint8_t v___y_1105_, uint8_t v___y_1106_, uint8_t v___y_1107_, lean_object* v_toPure_1108_, lean_object* v_unsafeStx_1109_, lean_object* v_attrs_1110_){
_start:
{
uint8_t v___y_1112_; uint8_t v___x_1115_; 
v___x_1115_ = l_Lean_Syntax_isNone(v_unsafeStx_1109_);
if (v___x_1115_ == 0)
{
uint8_t v___x_1116_; 
v___x_1116_ = 1;
v___y_1112_ = v___x_1116_;
goto v___jp_1111_;
}
else
{
uint8_t v___x_1117_; 
v___x_1117_ = 0;
v___y_1112_ = v___x_1117_;
goto v___jp_1111_;
}
v___jp_1111_:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1113_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_1113_, 0, v_stx_1102_);
lean_ctor_set(v___x_1113_, 1, v___y_1103_);
lean_ctor_set(v___x_1113_, 2, v_attrs_1110_);
lean_ctor_set_uint8(v___x_1113_, sizeof(void*)*3, v_visibility_1104_);
lean_ctor_set_uint8(v___x_1113_, sizeof(void*)*3 + 1, v___y_1105_);
lean_ctor_set_uint8(v___x_1113_, sizeof(void*)*3 + 2, v___y_1106_);
lean_ctor_set_uint8(v___x_1113_, sizeof(void*)*3 + 3, v___y_1107_);
lean_ctor_set_uint8(v___x_1113_, sizeof(void*)*3 + 4, v___y_1112_);
v___x_1114_ = lean_apply_2(v_toPure_1108_, lean_box(0), v___x_1113_);
return v___x_1114_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__0___boxed(lean_object* v_stx_1118_, lean_object* v___y_1119_, lean_object* v_visibility_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v_toPure_1124_, lean_object* v_unsafeStx_1125_, lean_object* v_attrs_1126_){
_start:
{
uint8_t v_visibility_boxed_1127_; uint8_t v___y_721__boxed_1128_; uint8_t v___y_722__boxed_1129_; uint8_t v___y_723__boxed_1130_; lean_object* v_res_1131_; 
v_visibility_boxed_1127_ = lean_unbox(v_visibility_1120_);
v___y_721__boxed_1128_ = lean_unbox(v___y_1121_);
v___y_722__boxed_1129_ = lean_unbox(v___y_1122_);
v___y_723__boxed_1130_ = lean_unbox(v___y_1123_);
v_res_1131_ = l_Lean_Elab_elabModifiers___redArg___lam__0(v_stx_1118_, v___y_1119_, v_visibility_boxed_1127_, v___y_721__boxed_1128_, v___y_722__boxed_1129_, v___y_723__boxed_1130_, v_toPure_1124_, v_unsafeStx_1125_, v_attrs_1126_);
lean_dec(v_unsafeStx_1125_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__1(lean_object* v___f_1132_, lean_object* v_attrs_1133_){
_start:
{
lean_object* v___x_1134_; 
v___x_1134_ = lean_apply_1(v___f_1132_, v_attrs_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__3(lean_object* v_stx_1135_, lean_object* v___y_1136_, uint8_t v___y_1137_, uint8_t v___y_1138_, lean_object* v_toPure_1139_, lean_object* v_unsafeStx_1140_, lean_object* v_attrsStx_1141_, lean_object* v___x_1142_, lean_object* v_toBind_1143_, lean_object* v_inst_1144_, lean_object* v_inst_1145_, lean_object* v_inst_1146_, lean_object* v_inst_1147_, lean_object* v_inst_1148_, lean_object* v_inst_1149_, lean_object* v_inst_1150_, lean_object* v_inst_1151_, lean_object* v_inst_1152_, lean_object* v_inst_1153_, lean_object* v_inst_1154_, lean_object* v_inst_1155_, lean_object* v_protectedStx_1156_, uint8_t v_visibility_1157_){
_start:
{
uint8_t v___y_1159_; uint8_t v___x_1174_; 
v___x_1174_ = l_Lean_Syntax_isNone(v_protectedStx_1156_);
if (v___x_1174_ == 0)
{
uint8_t v___x_1175_; 
v___x_1175_ = 1;
v___y_1159_ = v___x_1175_;
goto v___jp_1158_;
}
else
{
uint8_t v___x_1176_; 
v___x_1176_ = 0;
v___y_1159_ = v___x_1176_;
goto v___jp_1158_;
}
v___jp_1158_:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___f_1164_; lean_object* v___x_1165_; 
v___x_1160_ = lean_box(v_visibility_1157_);
v___x_1161_ = lean_box(v___y_1159_);
v___x_1162_ = lean_box(v___y_1137_);
v___x_1163_ = lean_box(v___y_1138_);
lean_inc(v_toPure_1139_);
v___f_1164_ = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_1164_, 0, v_stx_1135_);
lean_closure_set(v___f_1164_, 1, v___y_1136_);
lean_closure_set(v___f_1164_, 2, v___x_1160_);
lean_closure_set(v___f_1164_, 3, v___x_1161_);
lean_closure_set(v___f_1164_, 4, v___x_1162_);
lean_closure_set(v___f_1164_, 5, v___x_1163_);
lean_closure_set(v___f_1164_, 6, v_toPure_1139_);
lean_closure_set(v___f_1164_, 7, v_unsafeStx_1140_);
v___x_1165_ = l_Lean_Syntax_getOptional_x3f(v_attrsStx_1141_);
if (lean_obj_tag(v___x_1165_) == 0)
{
lean_object* v___f_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; 
lean_dec(v_inst_1155_);
lean_dec(v_inst_1154_);
lean_dec_ref(v_inst_1153_);
lean_dec(v_inst_1152_);
lean_dec(v_inst_1151_);
lean_dec_ref(v_inst_1150_);
lean_dec_ref(v_inst_1149_);
lean_dec_ref(v_inst_1148_);
lean_dec_ref(v_inst_1147_);
lean_dec_ref(v_inst_1146_);
lean_dec_ref(v_inst_1145_);
lean_dec_ref(v_inst_1144_);
v___f_1166_ = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1166_, 0, v___f_1164_);
v___x_1167_ = lean_mk_empty_array_with_capacity(v___x_1142_);
v___x_1168_ = lean_apply_2(v_toPure_1139_, lean_box(0), v___x_1167_);
v___x_1169_ = lean_apply_4(v_toBind_1143_, lean_box(0), lean_box(0), v___x_1168_, v___f_1166_);
return v___x_1169_;
}
else
{
lean_object* v_val_1170_; lean_object* v___f_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
lean_dec(v_toPure_1139_);
v_val_1170_ = lean_ctor_get(v___x_1165_, 0);
lean_inc(v_val_1170_);
lean_dec_ref(v___x_1165_);
v___f_1171_ = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1171_, 0, v___f_1164_);
v___x_1172_ = l_Lean_Elab_elabDeclAttrs___redArg(v_inst_1144_, v_inst_1145_, v_inst_1146_, v_inst_1147_, v_inst_1148_, v_inst_1149_, v_inst_1150_, v_inst_1151_, v_inst_1152_, v_inst_1153_, v_inst_1154_, v_inst_1155_, v_val_1170_);
lean_dec(v_val_1170_);
v___x_1173_ = lean_apply_4(v_toBind_1143_, lean_box(0), lean_box(0), v___x_1172_, v___f_1171_);
return v___x_1173_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__3___boxed(lean_object** _args){
lean_object* v_stx_1177_ = _args[0];
lean_object* v___y_1178_ = _args[1];
lean_object* v___y_1179_ = _args[2];
lean_object* v___y_1180_ = _args[3];
lean_object* v_toPure_1181_ = _args[4];
lean_object* v_unsafeStx_1182_ = _args[5];
lean_object* v_attrsStx_1183_ = _args[6];
lean_object* v___x_1184_ = _args[7];
lean_object* v_toBind_1185_ = _args[8];
lean_object* v_inst_1186_ = _args[9];
lean_object* v_inst_1187_ = _args[10];
lean_object* v_inst_1188_ = _args[11];
lean_object* v_inst_1189_ = _args[12];
lean_object* v_inst_1190_ = _args[13];
lean_object* v_inst_1191_ = _args[14];
lean_object* v_inst_1192_ = _args[15];
lean_object* v_inst_1193_ = _args[16];
lean_object* v_inst_1194_ = _args[17];
lean_object* v_inst_1195_ = _args[18];
lean_object* v_inst_1196_ = _args[19];
lean_object* v_inst_1197_ = _args[20];
lean_object* v_protectedStx_1198_ = _args[21];
lean_object* v_visibility_1199_ = _args[22];
_start:
{
uint8_t v___y_751__boxed_1200_; uint8_t v___y_752__boxed_1201_; uint8_t v_visibility_boxed_1202_; lean_object* v_res_1203_; 
v___y_751__boxed_1200_ = lean_unbox(v___y_1179_);
v___y_752__boxed_1201_ = lean_unbox(v___y_1180_);
v_visibility_boxed_1202_ = lean_unbox(v_visibility_1199_);
v_res_1203_ = l_Lean_Elab_elabModifiers___redArg___lam__3(v_stx_1177_, v___y_1178_, v___y_751__boxed_1200_, v___y_752__boxed_1201_, v_toPure_1181_, v_unsafeStx_1182_, v_attrsStx_1183_, v___x_1184_, v_toBind_1185_, v_inst_1186_, v_inst_1187_, v_inst_1188_, v_inst_1189_, v_inst_1190_, v_inst_1191_, v_inst_1192_, v_inst_1193_, v_inst_1194_, v_inst_1195_, v_inst_1196_, v_inst_1197_, v_protectedStx_1198_, v_visibility_boxed_1202_);
lean_dec(v_protectedStx_1198_);
lean_dec(v___x_1184_);
lean_dec(v_attrsStx_1183_);
return v_res_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__2(lean_object* v___f_1204_, uint8_t v_visibility_1205_){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; 
v___x_1206_ = lean_box(v_visibility_1205_);
v___x_1207_ = lean_apply_1(v___f_1204_, v___x_1206_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__2___boxed(lean_object* v___f_1208_, lean_object* v_visibility_1209_){
_start:
{
uint8_t v_visibility_boxed_1210_; lean_object* v_res_1211_; 
v_visibility_boxed_1210_ = lean_unbox(v_visibility_1209_);
v_res_1211_ = l_Lean_Elab_elabModifiers___redArg___lam__2(v___f_1208_, v_visibility_boxed_1210_);
return v_res_1211_;
}
}
static lean_object* _init_l_Lean_Elab_elabModifiers___redArg___lam__7___closed__6(void){
_start:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1226_ = ((lean_object*)(l_Lean_Elab_elabModifiers___redArg___lam__7___closed__5));
v___x_1227_ = l_Lean_stringToMessageData(v___x_1226_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__7(lean_object* v_stx_1228_, uint8_t v___y_1229_, uint8_t v___y_1230_, lean_object* v_toPure_1231_, lean_object* v_unsafeStx_1232_, lean_object* v_attrsStx_1233_, lean_object* v___x_1234_, lean_object* v_toBind_1235_, lean_object* v_inst_1236_, lean_object* v_inst_1237_, lean_object* v_inst_1238_, lean_object* v_inst_1239_, lean_object* v_inst_1240_, lean_object* v_inst_1241_, lean_object* v_inst_1242_, lean_object* v_inst_1243_, lean_object* v_inst_1244_, lean_object* v_inst_1245_, lean_object* v_inst_1246_, lean_object* v_inst_1247_, lean_object* v_protectedStx_1248_, lean_object* v_visibilityStx_1249_, lean_object* v_docCommentStx_1250_, lean_object* v___x_1251_, lean_object* v_____do__lift_1252_){
_start:
{
lean_object* v___y_1254_; lean_object* v___x_1283_; 
v___x_1283_ = l_Lean_Syntax_getOptional_x3f(v_docCommentStx_1250_);
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_object* v___x_1284_; 
lean_dec_ref(v___x_1251_);
v___x_1284_ = lean_box(0);
v___y_1254_ = v___x_1284_;
goto v___jp_1253_;
}
else
{
lean_object* v_val_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1295_; 
v_val_1285_ = lean_ctor_get(v___x_1283_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1287_ = v___x_1283_;
v_isShared_1288_ = v_isSharedCheck_1295_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_val_1285_);
lean_dec(v___x_1283_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1295_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1293_; 
v___x_1289_ = l_Lean_doc_verso;
v___x_1290_ = l_Lean_Option_get___redArg(v___x_1251_, v_____do__lift_1252_, v___x_1289_);
v___x_1291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1291_, 0, v_val_1285_);
lean_ctor_set(v___x_1291_, 1, v___x_1290_);
if (v_isShared_1288_ == 0)
{
lean_ctor_set(v___x_1287_, 0, v___x_1291_);
v___x_1293_ = v___x_1287_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v___x_1291_);
v___x_1293_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
v___y_1254_ = v___x_1293_;
goto v___jp_1253_;
}
}
}
v___jp_1253_:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___f_1257_; lean_object* v___x_1258_; 
v___x_1255_ = lean_box(v___y_1229_);
v___x_1256_ = lean_box(v___y_1230_);
lean_inc_ref(v_inst_1239_);
lean_inc_ref(v_inst_1236_);
lean_inc(v_toBind_1235_);
lean_inc(v_toPure_1231_);
v___f_1257_ = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___redArg___lam__3___boxed), 23, 22);
lean_closure_set(v___f_1257_, 0, v_stx_1228_);
lean_closure_set(v___f_1257_, 1, v___y_1254_);
lean_closure_set(v___f_1257_, 2, v___x_1255_);
lean_closure_set(v___f_1257_, 3, v___x_1256_);
lean_closure_set(v___f_1257_, 4, v_toPure_1231_);
lean_closure_set(v___f_1257_, 5, v_unsafeStx_1232_);
lean_closure_set(v___f_1257_, 6, v_attrsStx_1233_);
lean_closure_set(v___f_1257_, 7, v___x_1234_);
lean_closure_set(v___f_1257_, 8, v_toBind_1235_);
lean_closure_set(v___f_1257_, 9, v_inst_1236_);
lean_closure_set(v___f_1257_, 10, v_inst_1237_);
lean_closure_set(v___f_1257_, 11, v_inst_1238_);
lean_closure_set(v___f_1257_, 12, v_inst_1239_);
lean_closure_set(v___f_1257_, 13, v_inst_1240_);
lean_closure_set(v___f_1257_, 14, v_inst_1241_);
lean_closure_set(v___f_1257_, 15, v_inst_1242_);
lean_closure_set(v___f_1257_, 16, v_inst_1243_);
lean_closure_set(v___f_1257_, 17, v_inst_1244_);
lean_closure_set(v___f_1257_, 18, v_inst_1245_);
lean_closure_set(v___f_1257_, 19, v_inst_1246_);
lean_closure_set(v___f_1257_, 20, v_inst_1247_);
lean_closure_set(v___f_1257_, 21, v_protectedStx_1248_);
v___x_1258_ = l_Lean_Syntax_getOptional_x3f(v_visibilityStx_1249_);
if (lean_obj_tag(v___x_1258_) == 0)
{
lean_object* v___f_1259_; uint8_t v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
lean_dec_ref(v_inst_1239_);
lean_dec_ref(v_inst_1236_);
v___f_1259_ = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_1259_, 0, v___f_1257_);
v___x_1260_ = 0;
v___x_1261_ = lean_box(v___x_1260_);
v___x_1262_ = lean_apply_2(v_toPure_1231_, lean_box(0), v___x_1261_);
v___x_1263_ = lean_apply_4(v_toBind_1235_, lean_box(0), lean_box(0), v___x_1262_, v___f_1259_);
return v___x_1263_;
}
else
{
lean_object* v_val_1264_; lean_object* v___x_1265_; uint8_t v___x_1266_; 
v_val_1264_ = lean_ctor_get(v___x_1258_, 0);
lean_inc(v_val_1264_);
lean_dec_ref(v___x_1258_);
v___x_1265_ = ((lean_object*)(l_Lean_Elab_elabModifiers___redArg___lam__7___closed__3));
lean_inc(v_val_1264_);
v___x_1266_ = l_Lean_Syntax_isOfKind(v_val_1264_, v___x_1265_);
if (v___x_1266_ == 0)
{
lean_object* v___x_1267_; uint8_t v___x_1268_; 
v___x_1267_ = ((lean_object*)(l_Lean_Elab_elabModifiers___redArg___lam__7___closed__4));
lean_inc(v_val_1264_);
v___x_1268_ = l_Lean_Syntax_isOfKind(v_val_1264_, v___x_1267_);
if (v___x_1268_ == 0)
{
lean_object* v___f_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
lean_dec(v_toPure_1231_);
v___f_1269_ = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_1269_, 0, v___f_1257_);
v___x_1270_ = lean_obj_once(&l_Lean_Elab_elabModifiers___redArg___lam__7___closed__6, &l_Lean_Elab_elabModifiers___redArg___lam__7___closed__6_once, _init_l_Lean_Elab_elabModifiers___redArg___lam__7___closed__6);
v___x_1271_ = l_Lean_throwErrorAt___redArg(v_inst_1236_, v_inst_1239_, v_val_1264_, v___x_1270_);
v___x_1272_ = lean_apply_4(v_toBind_1235_, lean_box(0), lean_box(0), v___x_1271_, v___f_1269_);
return v___x_1272_;
}
else
{
lean_object* v___f_1273_; uint8_t v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; 
lean_dec(v_val_1264_);
lean_dec_ref(v_inst_1239_);
lean_dec_ref(v_inst_1236_);
v___f_1273_ = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_1273_, 0, v___f_1257_);
v___x_1274_ = 2;
v___x_1275_ = lean_box(v___x_1274_);
v___x_1276_ = lean_apply_2(v_toPure_1231_, lean_box(0), v___x_1275_);
v___x_1277_ = lean_apply_4(v_toBind_1235_, lean_box(0), lean_box(0), v___x_1276_, v___f_1273_);
return v___x_1277_;
}
}
else
{
lean_object* v___f_1278_; uint8_t v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
lean_dec(v_val_1264_);
lean_dec_ref(v_inst_1239_);
lean_dec_ref(v_inst_1236_);
v___f_1278_ = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_1278_, 0, v___f_1257_);
v___x_1279_ = 1;
v___x_1280_ = lean_box(v___x_1279_);
v___x_1281_ = lean_apply_2(v_toPure_1231_, lean_box(0), v___x_1280_);
v___x_1282_ = lean_apply_4(v_toBind_1235_, lean_box(0), lean_box(0), v___x_1281_, v___f_1278_);
return v___x_1282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg___lam__7___boxed(lean_object** _args){
lean_object* v_stx_1296_ = _args[0];
lean_object* v___y_1297_ = _args[1];
lean_object* v___y_1298_ = _args[2];
lean_object* v_toPure_1299_ = _args[3];
lean_object* v_unsafeStx_1300_ = _args[4];
lean_object* v_attrsStx_1301_ = _args[5];
lean_object* v___x_1302_ = _args[6];
lean_object* v_toBind_1303_ = _args[7];
lean_object* v_inst_1304_ = _args[8];
lean_object* v_inst_1305_ = _args[9];
lean_object* v_inst_1306_ = _args[10];
lean_object* v_inst_1307_ = _args[11];
lean_object* v_inst_1308_ = _args[12];
lean_object* v_inst_1309_ = _args[13];
lean_object* v_inst_1310_ = _args[14];
lean_object* v_inst_1311_ = _args[15];
lean_object* v_inst_1312_ = _args[16];
lean_object* v_inst_1313_ = _args[17];
lean_object* v_inst_1314_ = _args[18];
lean_object* v_inst_1315_ = _args[19];
lean_object* v_protectedStx_1316_ = _args[20];
lean_object* v_visibilityStx_1317_ = _args[21];
lean_object* v_docCommentStx_1318_ = _args[22];
lean_object* v___x_1319_ = _args[23];
lean_object* v_____do__lift_1320_ = _args[24];
_start:
{
uint8_t v___y_877__boxed_1321_; uint8_t v___y_878__boxed_1322_; lean_object* v_res_1323_; 
v___y_877__boxed_1321_ = lean_unbox(v___y_1297_);
v___y_878__boxed_1322_ = lean_unbox(v___y_1298_);
v_res_1323_ = l_Lean_Elab_elabModifiers___redArg___lam__7(v_stx_1296_, v___y_877__boxed_1321_, v___y_878__boxed_1322_, v_toPure_1299_, v_unsafeStx_1300_, v_attrsStx_1301_, v___x_1302_, v_toBind_1303_, v_inst_1304_, v_inst_1305_, v_inst_1306_, v_inst_1307_, v_inst_1308_, v_inst_1309_, v_inst_1310_, v_inst_1311_, v_inst_1312_, v_inst_1313_, v_inst_1314_, v_inst_1315_, v_protectedStx_1316_, v_visibilityStx_1317_, v_docCommentStx_1318_, v___x_1319_, v_____do__lift_1320_);
lean_dec_ref(v_____do__lift_1320_);
lean_dec(v_docCommentStx_1318_);
lean_dec(v_visibilityStx_1317_);
return v_res_1323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers___redArg(lean_object* v_inst_1334_, lean_object* v_inst_1335_, lean_object* v_inst_1336_, lean_object* v_inst_1337_, lean_object* v_inst_1338_, lean_object* v_inst_1339_, lean_object* v_inst_1340_, lean_object* v_inst_1341_, lean_object* v_inst_1342_, lean_object* v_inst_1343_, lean_object* v_inst_1344_, lean_object* v_inst_1345_, lean_object* v_stx_1346_){
_start:
{
lean_object* v___x_1347_; lean_object* v_toApplicative_1348_; lean_object* v_toBind_1349_; lean_object* v_toPure_1350_; lean_object* v___x_1351_; lean_object* v_docCommentStx_1352_; lean_object* v___x_1353_; lean_object* v_attrsStx_1354_; lean_object* v___x_1355_; lean_object* v_visibilityStx_1356_; lean_object* v___x_1357_; lean_object* v_protectedStx_1358_; uint8_t v___y_1360_; lean_object* v___y_1361_; uint8_t v___y_1362_; uint8_t v___y_1368_; lean_object* v___x_1381_; lean_object* v___x_1382_; uint8_t v___x_1383_; 
v___x_1347_ = l_Lean_KVMap_instValueBool;
v_toApplicative_1348_ = lean_ctor_get(v_inst_1334_, 0);
v_toBind_1349_ = lean_ctor_get(v_inst_1334_, 1);
lean_inc(v_toBind_1349_);
v_toPure_1350_ = lean_ctor_get(v_toApplicative_1348_, 1);
lean_inc(v_toPure_1350_);
v___x_1351_ = lean_unsigned_to_nat(0u);
v_docCommentStx_1352_ = l_Lean_Syntax_getArg(v_stx_1346_, v___x_1351_);
v___x_1353_ = lean_unsigned_to_nat(1u);
v_attrsStx_1354_ = l_Lean_Syntax_getArg(v_stx_1346_, v___x_1353_);
v___x_1355_ = lean_unsigned_to_nat(2u);
v_visibilityStx_1356_ = l_Lean_Syntax_getArg(v_stx_1346_, v___x_1355_);
v___x_1357_ = lean_unsigned_to_nat(3u);
v_protectedStx_1358_ = l_Lean_Syntax_getArg(v_stx_1346_, v___x_1357_);
v___x_1381_ = lean_unsigned_to_nat(4u);
v___x_1382_ = l_Lean_Syntax_getArg(v_stx_1346_, v___x_1381_);
v___x_1383_ = l_Lean_Syntax_isNone(v___x_1382_);
if (v___x_1383_ == 0)
{
lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; uint8_t v___x_1387_; 
v___x_1384_ = l_Lean_Syntax_getArg(v___x_1382_, v___x_1351_);
lean_dec(v___x_1382_);
v___x_1385_ = l_Lean_Syntax_getKind(v___x_1384_);
v___x_1386_ = ((lean_object*)(l_Lean_Elab_elabModifiers___redArg___closed__1));
v___x_1387_ = lean_name_eq(v___x_1385_, v___x_1386_);
lean_dec(v___x_1385_);
if (v___x_1387_ == 0)
{
uint8_t v___x_1388_; 
v___x_1388_ = 2;
v___y_1368_ = v___x_1388_;
goto v___jp_1367_;
}
else
{
uint8_t v___x_1389_; 
v___x_1389_ = 1;
v___y_1368_ = v___x_1389_;
goto v___jp_1367_;
}
}
else
{
uint8_t v___x_1390_; 
lean_dec(v___x_1382_);
v___x_1390_ = 0;
v___y_1368_ = v___x_1390_;
goto v___jp_1367_;
}
v___jp_1359_:
{
lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___f_1365_; lean_object* v___x_1366_; 
v___x_1363_ = lean_box(v___y_1360_);
v___x_1364_ = lean_box(v___y_1362_);
lean_inc(v_inst_1342_);
lean_inc(v_toBind_1349_);
v___f_1365_ = lean_alloc_closure((void*)(l_Lean_Elab_elabModifiers___redArg___lam__7___boxed), 25, 24);
lean_closure_set(v___f_1365_, 0, v_stx_1346_);
lean_closure_set(v___f_1365_, 1, v___x_1363_);
lean_closure_set(v___f_1365_, 2, v___x_1364_);
lean_closure_set(v___f_1365_, 3, v_toPure_1350_);
lean_closure_set(v___f_1365_, 4, v___y_1361_);
lean_closure_set(v___f_1365_, 5, v_attrsStx_1354_);
lean_closure_set(v___f_1365_, 6, v___x_1351_);
lean_closure_set(v___f_1365_, 7, v_toBind_1349_);
lean_closure_set(v___f_1365_, 8, v_inst_1334_);
lean_closure_set(v___f_1365_, 9, v_inst_1335_);
lean_closure_set(v___f_1365_, 10, v_inst_1336_);
lean_closure_set(v___f_1365_, 11, v_inst_1337_);
lean_closure_set(v___f_1365_, 12, v_inst_1339_);
lean_closure_set(v___f_1365_, 13, v_inst_1340_);
lean_closure_set(v___f_1365_, 14, v_inst_1341_);
lean_closure_set(v___f_1365_, 15, v_inst_1342_);
lean_closure_set(v___f_1365_, 16, v_inst_1343_);
lean_closure_set(v___f_1365_, 17, v_inst_1344_);
lean_closure_set(v___f_1365_, 18, v_inst_1345_);
lean_closure_set(v___f_1365_, 19, v_inst_1338_);
lean_closure_set(v___f_1365_, 20, v_protectedStx_1358_);
lean_closure_set(v___f_1365_, 21, v_visibilityStx_1356_);
lean_closure_set(v___f_1365_, 22, v_docCommentStx_1352_);
lean_closure_set(v___f_1365_, 23, v___x_1347_);
v___x_1366_ = lean_apply_4(v_toBind_1349_, lean_box(0), lean_box(0), v_inst_1342_, v___f_1365_);
return v___x_1366_;
}
v___jp_1367_:
{
lean_object* v___x_1369_; lean_object* v_unsafeStx_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; uint8_t v___x_1373_; 
v___x_1369_ = lean_unsigned_to_nat(5u);
v_unsafeStx_1370_ = l_Lean_Syntax_getArg(v_stx_1346_, v___x_1369_);
v___x_1371_ = lean_unsigned_to_nat(6u);
v___x_1372_ = l_Lean_Syntax_getArg(v_stx_1346_, v___x_1371_);
v___x_1373_ = l_Lean_Syntax_isNone(v___x_1372_);
if (v___x_1373_ == 0)
{
lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; uint8_t v___x_1377_; 
v___x_1374_ = l_Lean_Syntax_getArg(v___x_1372_, v___x_1351_);
lean_dec(v___x_1372_);
v___x_1375_ = l_Lean_Syntax_getKind(v___x_1374_);
v___x_1376_ = ((lean_object*)(l_Lean_Elab_elabModifiers___redArg___closed__0));
v___x_1377_ = lean_name_eq(v___x_1375_, v___x_1376_);
lean_dec(v___x_1375_);
if (v___x_1377_ == 0)
{
uint8_t v___x_1378_; 
v___x_1378_ = 1;
v___y_1360_ = v___y_1368_;
v___y_1361_ = v_unsafeStx_1370_;
v___y_1362_ = v___x_1378_;
goto v___jp_1359_;
}
else
{
uint8_t v___x_1379_; 
v___x_1379_ = 0;
v___y_1360_ = v___y_1368_;
v___y_1361_ = v_unsafeStx_1370_;
v___y_1362_ = v___x_1379_;
goto v___jp_1359_;
}
}
else
{
uint8_t v___x_1380_; 
lean_dec(v___x_1372_);
v___x_1380_ = 2;
v___y_1360_ = v___y_1368_;
v___y_1361_ = v_unsafeStx_1370_;
v___y_1362_ = v___x_1380_;
goto v___jp_1359_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_elabModifiers(lean_object* v_m_1391_, lean_object* v_inst_1392_, lean_object* v_inst_1393_, lean_object* v_inst_1394_, lean_object* v_inst_1395_, lean_object* v_inst_1396_, lean_object* v_inst_1397_, lean_object* v_inst_1398_, lean_object* v_inst_1399_, lean_object* v_inst_1400_, lean_object* v_inst_1401_, lean_object* v_inst_1402_, lean_object* v_inst_1403_, lean_object* v_stx_1404_){
_start:
{
lean_object* v___x_1405_; 
v___x_1405_ = l_Lean_Elab_elabModifiers___redArg(v_inst_1392_, v_inst_1393_, v_inst_1394_, v_inst_1395_, v_inst_1396_, v_inst_1397_, v_inst_1398_, v_inst_1399_, v_inst_1400_, v_inst_1401_, v_inst_1402_, v_inst_1403_, v_stx_1404_);
return v___x_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__0(lean_object* v_toPure_1406_, lean_object* v_declName_1407_, lean_object* v_____r_1408_){
_start:
{
lean_object* v___x_1409_; 
v___x_1409_ = lean_apply_2(v_toPure_1406_, lean_box(0), v_declName_1407_);
return v___x_1409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__1(lean_object* v_declName_1410_, lean_object* v_env_1411_){
_start:
{
lean_object* v___x_1412_; 
v___x_1412_ = l_Lean_addProtected(v_env_1411_, v_declName_1410_);
return v___x_1412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__2(lean_object* v_modifiers_1413_, lean_object* v_toPure_1414_, lean_object* v_declName_1415_, lean_object* v_modifyEnv_1416_, lean_object* v___f_1417_, lean_object* v_toBind_1418_, lean_object* v___f_1419_, lean_object* v_____r_1420_){
_start:
{
uint8_t v_isProtected_1421_; 
v_isProtected_1421_ = lean_ctor_get_uint8(v_modifiers_1413_, sizeof(void*)*3 + 1);
if (v_isProtected_1421_ == 0)
{
lean_object* v___x_1422_; 
lean_dec(v___f_1419_);
lean_dec(v_toBind_1418_);
lean_dec_ref(v___f_1417_);
lean_dec(v_modifyEnv_1416_);
v___x_1422_ = lean_apply_2(v_toPure_1414_, lean_box(0), v_declName_1415_);
return v___x_1422_;
}
else
{
lean_object* v___x_1423_; lean_object* v___x_1424_; 
lean_dec(v_declName_1415_);
lean_dec(v_toPure_1414_);
v___x_1423_ = lean_apply_1(v_modifyEnv_1416_, v___f_1417_);
v___x_1424_ = lean_apply_4(v_toBind_1418_, lean_box(0), lean_box(0), v___x_1423_, v___f_1419_);
return v___x_1424_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__2___boxed(lean_object* v_modifiers_1425_, lean_object* v_toPure_1426_, lean_object* v_declName_1427_, lean_object* v_modifyEnv_1428_, lean_object* v___f_1429_, lean_object* v_toBind_1430_, lean_object* v___f_1431_, lean_object* v_____r_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l_Lean_Elab_applyVisibility___redArg___lam__2(v_modifiers_1425_, v_toPure_1426_, v_declName_1427_, v_modifyEnv_1428_, v___f_1429_, v_toBind_1430_, v___f_1431_, v_____r_1432_);
lean_dec_ref(v_modifiers_1425_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__3(lean_object* v_toPure_1434_, lean_object* v_modifiers_1435_, lean_object* v_modifyEnv_1436_, lean_object* v_toBind_1437_, lean_object* v_inst_1438_, lean_object* v_inst_1439_, lean_object* v_inst_1440_, lean_object* v_inst_1441_, lean_object* v_inst_1442_, lean_object* v_____r_1443_, lean_object* v_declName_1444_){
_start:
{
lean_object* v___f_1445_; lean_object* v___f_1446_; lean_object* v___f_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
lean_inc(v_declName_1444_);
lean_inc(v_toPure_1434_);
v___f_1445_ = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1445_, 0, v_toPure_1434_);
lean_closure_set(v___f_1445_, 1, v_declName_1444_);
lean_inc(v_declName_1444_);
v___f_1446_ = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1446_, 0, v_declName_1444_);
lean_inc(v_toBind_1437_);
lean_inc(v_declName_1444_);
v___f_1447_ = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_1447_, 0, v_modifiers_1435_);
lean_closure_set(v___f_1447_, 1, v_toPure_1434_);
lean_closure_set(v___f_1447_, 2, v_declName_1444_);
lean_closure_set(v___f_1447_, 3, v_modifyEnv_1436_);
lean_closure_set(v___f_1447_, 4, v___f_1446_);
lean_closure_set(v___f_1447_, 5, v_toBind_1437_);
lean_closure_set(v___f_1447_, 6, v___f_1445_);
v___x_1448_ = l_Lean_Elab_checkNotAlreadyDeclared___redArg(v_inst_1438_, v_inst_1439_, v_inst_1440_, v_inst_1441_, v_inst_1442_, v_declName_1444_);
v___x_1449_ = lean_apply_4(v_toBind_1437_, lean_box(0), lean_box(0), v___x_1448_, v___f_1447_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__4(lean_object* v_declName_1450_, lean_object* v___f_1451_, lean_object* v_____do__lift_1452_){
_start:
{
lean_object* v_declName_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v_declName_1453_ = l_Lean_mkPrivateName(v_____do__lift_1452_, v_declName_1450_);
v___x_1454_ = lean_box(0);
v___x_1455_ = lean_apply_2(v___f_1451_, v___x_1454_, v_declName_1453_);
return v___x_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__4___boxed(lean_object* v_declName_1456_, lean_object* v___f_1457_, lean_object* v_____do__lift_1458_){
_start:
{
lean_object* v_res_1459_; 
v_res_1459_ = l_Lean_Elab_applyVisibility___redArg___lam__4(v_declName_1456_, v___f_1457_, v_____do__lift_1458_);
lean_dec_ref(v_____do__lift_1458_);
return v_res_1459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__5(lean_object* v_modifiers_1460_, lean_object* v_toBind_1461_, lean_object* v_getEnv_1462_, lean_object* v___f_1463_, lean_object* v___f_1464_, lean_object* v_declName_1465_, lean_object* v_____do__lift_1466_){
_start:
{
uint8_t v_visibility_1467_; uint8_t v___x_1468_; 
v_visibility_1467_ = lean_ctor_get_uint8(v_modifiers_1460_, sizeof(void*)*3);
v___x_1468_ = l_Lean_Elab_Visibility_isInferredPublic(v_____do__lift_1466_, v_visibility_1467_);
if (v___x_1468_ == 0)
{
lean_object* v___x_1469_; 
lean_dec(v_declName_1465_);
lean_dec(v___f_1464_);
v___x_1469_ = lean_apply_4(v_toBind_1461_, lean_box(0), lean_box(0), v_getEnv_1462_, v___f_1463_);
return v___x_1469_;
}
else
{
lean_object* v___x_1470_; lean_object* v___x_1471_; 
lean_dec(v___f_1463_);
lean_dec(v_getEnv_1462_);
lean_dec(v_toBind_1461_);
v___x_1470_ = lean_box(0);
v___x_1471_ = lean_apply_2(v___f_1464_, v___x_1470_, v_declName_1465_);
return v___x_1471_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg___lam__5___boxed(lean_object* v_modifiers_1472_, lean_object* v_toBind_1473_, lean_object* v_getEnv_1474_, lean_object* v___f_1475_, lean_object* v___f_1476_, lean_object* v_declName_1477_, lean_object* v_____do__lift_1478_){
_start:
{
lean_object* v_res_1479_; 
v_res_1479_ = l_Lean_Elab_applyVisibility___redArg___lam__5(v_modifiers_1472_, v_toBind_1473_, v_getEnv_1474_, v___f_1475_, v___f_1476_, v_declName_1477_, v_____do__lift_1478_);
lean_dec_ref(v_____do__lift_1478_);
lean_dec_ref(v_modifiers_1472_);
return v_res_1479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___redArg(lean_object* v_inst_1480_, lean_object* v_inst_1481_, lean_object* v_inst_1482_, lean_object* v_inst_1483_, lean_object* v_inst_1484_, lean_object* v_modifiers_1485_, lean_object* v_declName_1486_){
_start:
{
lean_object* v_toApplicative_1487_; lean_object* v_toBind_1488_; lean_object* v_getEnv_1489_; lean_object* v_modifyEnv_1490_; lean_object* v_toPure_1491_; lean_object* v___f_1492_; lean_object* v___f_1493_; lean_object* v___f_1494_; lean_object* v___x_1495_; 
v_toApplicative_1487_ = lean_ctor_get(v_inst_1480_, 0);
v_toBind_1488_ = lean_ctor_get(v_inst_1480_, 1);
lean_inc(v_toBind_1488_);
v_getEnv_1489_ = lean_ctor_get(v_inst_1481_, 0);
lean_inc(v_getEnv_1489_);
v_modifyEnv_1490_ = lean_ctor_get(v_inst_1481_, 1);
lean_inc(v_modifyEnv_1490_);
v_toPure_1491_ = lean_ctor_get(v_toApplicative_1487_, 1);
lean_inc(v_toPure_1491_);
lean_inc(v_toBind_1488_);
lean_inc_ref(v_modifiers_1485_);
v___f_1492_ = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___redArg___lam__3), 11, 9);
lean_closure_set(v___f_1492_, 0, v_toPure_1491_);
lean_closure_set(v___f_1492_, 1, v_modifiers_1485_);
lean_closure_set(v___f_1492_, 2, v_modifyEnv_1490_);
lean_closure_set(v___f_1492_, 3, v_toBind_1488_);
lean_closure_set(v___f_1492_, 4, v_inst_1480_);
lean_closure_set(v___f_1492_, 5, v_inst_1481_);
lean_closure_set(v___f_1492_, 6, v_inst_1482_);
lean_closure_set(v___f_1492_, 7, v_inst_1483_);
lean_closure_set(v___f_1492_, 8, v_inst_1484_);
lean_inc_ref(v___f_1492_);
lean_inc(v_declName_1486_);
v___f_1493_ = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___redArg___lam__4___boxed), 3, 2);
lean_closure_set(v___f_1493_, 0, v_declName_1486_);
lean_closure_set(v___f_1493_, 1, v___f_1492_);
lean_inc(v_getEnv_1489_);
lean_inc(v_toBind_1488_);
v___f_1494_ = lean_alloc_closure((void*)(l_Lean_Elab_applyVisibility___redArg___lam__5___boxed), 7, 6);
lean_closure_set(v___f_1494_, 0, v_modifiers_1485_);
lean_closure_set(v___f_1494_, 1, v_toBind_1488_);
lean_closure_set(v___f_1494_, 2, v_getEnv_1489_);
lean_closure_set(v___f_1494_, 3, v___f_1493_);
lean_closure_set(v___f_1494_, 4, v___f_1492_);
lean_closure_set(v___f_1494_, 5, v_declName_1486_);
v___x_1495_ = lean_apply_4(v_toBind_1488_, lean_box(0), lean_box(0), v_getEnv_1489_, v___f_1494_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility(lean_object* v_m_1496_, lean_object* v_inst_1497_, lean_object* v_inst_1498_, lean_object* v_inst_1499_, lean_object* v_inst_1500_, lean_object* v_inst_1501_, lean_object* v_modifiers_1502_, lean_object* v_declName_1503_){
_start:
{
lean_object* v___x_1504_; 
v___x_1504_ = l_Lean_Elab_applyVisibility___redArg(v_inst_1497_, v_inst_1498_, v_inst_1499_, v_inst_1500_, v_inst_1501_, v_modifiers_1502_, v_declName_1503_);
return v___x_1504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__0(lean_object* v_toPure_1505_, lean_object* v_____s_1506_){
_start:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1507_ = lean_box(0);
v___x_1508_ = lean_apply_2(v_toPure_1505_, lean_box(0), v___x_1507_);
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__1(lean_object* v___x_1509_, lean_object* v_toPure_1510_, lean_object* v_r_1511_){
_start:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1512_, 0, v___x_1509_);
v___x_1513_ = lean_apply_2(v_toPure_1510_, lean_box(0), v___x_1512_);
return v___x_1513_;
}
}
static lean_object* _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1515_; lean_object* v___x_1516_; 
v___x_1515_ = ((lean_object*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__0));
v___x_1516_ = l_Lean_stringToMessageData(v___x_1515_);
return v___x_1516_;
}
}
static lean_object* _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; 
v___x_1518_ = ((lean_object*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__2));
v___x_1519_ = l_Lean_stringToMessageData(v___x_1518_);
return v___x_1519_;
}
}
static lean_object* _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5(void){
_start:
{
lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1521_ = ((lean_object*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__4));
v___x_1522_ = l_Lean_stringToMessageData(v___x_1521_);
return v___x_1522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2(lean_object* v_pre_1523_, lean_object* v_declName_1524_, lean_object* v___x_1525_, lean_object* v_toPure_1526_, lean_object* v_inst_1527_, lean_object* v_inst_1528_, lean_object* v_toBind_1529_, lean_object* v___f_1530_, lean_object* v_a_1531_, lean_object* v_x_1532_, lean_object* v___y_1533_){
_start:
{
lean_object* v___x_1534_; uint8_t v___x_1535_; 
lean_inc(v_a_1531_);
lean_inc(v_pre_1523_);
v___x_1534_ = l_Lean_Name_append(v_pre_1523_, v_a_1531_);
v___x_1535_ = lean_name_eq(v___x_1534_, v_declName_1524_);
lean_dec(v___x_1534_);
if (v___x_1535_ == 0)
{
lean_object* v___x_1536_; lean_object* v___x_1537_; 
lean_dec(v_a_1531_);
lean_dec(v___f_1530_);
lean_dec(v_toBind_1529_);
lean_dec_ref(v_inst_1528_);
lean_dec_ref(v_inst_1527_);
lean_dec(v_declName_1524_);
lean_dec(v_pre_1523_);
v___x_1536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1536_, 0, v___x_1525_);
v___x_1537_ = lean_apply_2(v_toPure_1526_, lean_box(0), v___x_1536_);
return v___x_1537_;
}
else
{
lean_object* v___x_1538_; uint8_t v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; 
lean_dec(v_toPure_1526_);
v___x_1538_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1);
v___x_1539_ = 0;
v___x_1540_ = l_Lean_MessageData_ofConstName(v_declName_1524_, v___x_1539_);
v___x_1541_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1541_, 0, v___x_1538_);
lean_ctor_set(v___x_1541_, 1, v___x_1540_);
v___x_1542_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3);
v___x_1543_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1543_, 0, v___x_1541_);
lean_ctor_set(v___x_1543_, 1, v___x_1542_);
v___x_1544_ = l_Lean_MessageData_ofName(v_pre_1523_);
v___x_1545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1545_, 0, v___x_1543_);
lean_ctor_set(v___x_1545_, 1, v___x_1544_);
v___x_1546_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5);
v___x_1547_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1545_);
lean_ctor_set(v___x_1547_, 1, v___x_1546_);
v___x_1548_ = l_Lean_MessageData_ofName(v_a_1531_);
v___x_1549_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1547_);
lean_ctor_set(v___x_1549_, 1, v___x_1548_);
v___x_1550_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_1551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1549_);
lean_ctor_set(v___x_1551_, 1, v___x_1550_);
v___x_1552_ = l_Lean_throwError___redArg(v_inst_1527_, v_inst_1528_, v___x_1551_);
v___x_1553_ = lean_apply_4(v_toBind_1529_, lean_box(0), lean_box(0), v___x_1552_, v___f_1530_);
return v___x_1553_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__3(lean_object* v_pre_1554_, uint8_t v___x_1555_, lean_object* v_toPure_1556_, lean_object* v_declName_1557_, lean_object* v_inst_1558_, lean_object* v_inst_1559_, lean_object* v_toBind_1560_, lean_object* v___f_1561_, lean_object* v_____do__lift_1562_){
_start:
{
lean_object* v_fieldNames_1563_; lean_object* v___x_1564_; lean_object* v___f_1565_; lean_object* v___f_1566_; size_t v_sz_1567_; size_t v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; 
lean_inc(v_pre_1554_);
v_fieldNames_1563_ = l_Lean_getStructureFieldsFlattened(v_____do__lift_1562_, v_pre_1554_, v___x_1555_);
v___x_1564_ = lean_box(0);
lean_inc(v_toPure_1556_);
v___f_1565_ = lean_alloc_closure((void*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1565_, 0, v___x_1564_);
lean_closure_set(v___f_1565_, 1, v_toPure_1556_);
lean_inc(v_toBind_1560_);
lean_inc_ref(v_inst_1558_);
v___f_1566_ = lean_alloc_closure((void*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2), 11, 8);
lean_closure_set(v___f_1566_, 0, v_pre_1554_);
lean_closure_set(v___f_1566_, 1, v_declName_1557_);
lean_closure_set(v___f_1566_, 2, v___x_1564_);
lean_closure_set(v___f_1566_, 3, v_toPure_1556_);
lean_closure_set(v___f_1566_, 4, v_inst_1558_);
lean_closure_set(v___f_1566_, 5, v_inst_1559_);
lean_closure_set(v___f_1566_, 6, v_toBind_1560_);
lean_closure_set(v___f_1566_, 7, v___f_1565_);
v_sz_1567_ = lean_array_size(v_fieldNames_1563_);
v___x_1568_ = ((size_t)0ULL);
v___x_1569_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1558_, v_fieldNames_1563_, v___f_1566_, v_sz_1567_, v___x_1568_, v___x_1564_);
v___x_1570_ = lean_apply_4(v_toBind_1560_, lean_box(0), lean_box(0), v___x_1569_, v___f_1561_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__3___boxed(lean_object* v_pre_1571_, lean_object* v___x_1572_, lean_object* v_toPure_1573_, lean_object* v_declName_1574_, lean_object* v_inst_1575_, lean_object* v_inst_1576_, lean_object* v_toBind_1577_, lean_object* v___f_1578_, lean_object* v_____do__lift_1579_){
_start:
{
uint8_t v___x_671__boxed_1580_; lean_object* v_res_1581_; 
v___x_671__boxed_1580_ = lean_unbox(v___x_1572_);
v_res_1581_ = l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__3(v_pre_1571_, v___x_671__boxed_1580_, v_toPure_1573_, v_declName_1574_, v_inst_1575_, v_inst_1576_, v_toBind_1577_, v___f_1578_, v_____do__lift_1579_);
return v_res_1581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__4(lean_object* v_pre_1582_, lean_object* v_toPure_1583_, lean_object* v_declName_1584_, lean_object* v_inst_1585_, lean_object* v_inst_1586_, lean_object* v_toBind_1587_, lean_object* v___f_1588_, lean_object* v_getEnv_1589_, lean_object* v_____do__lift_1590_){
_start:
{
uint8_t v___x_1591_; 
lean_inc(v_pre_1582_);
v___x_1591_ = l_Lean_isStructure(v_____do__lift_1590_, v_pre_1582_);
if (v___x_1591_ == 0)
{
lean_object* v___x_1592_; lean_object* v___x_1593_; 
lean_dec(v_getEnv_1589_);
lean_dec(v___f_1588_);
lean_dec(v_toBind_1587_);
lean_dec_ref(v_inst_1586_);
lean_dec_ref(v_inst_1585_);
lean_dec(v_declName_1584_);
lean_dec(v_pre_1582_);
v___x_1592_ = lean_box(0);
v___x_1593_ = lean_apply_2(v_toPure_1583_, lean_box(0), v___x_1592_);
return v___x_1593_;
}
else
{
lean_object* v___x_1594_; lean_object* v___f_1595_; lean_object* v___x_1596_; 
v___x_1594_ = lean_box(v___x_1591_);
lean_inc(v_toBind_1587_);
v___f_1595_ = lean_alloc_closure((void*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__3___boxed), 9, 8);
lean_closure_set(v___f_1595_, 0, v_pre_1582_);
lean_closure_set(v___f_1595_, 1, v___x_1594_);
lean_closure_set(v___f_1595_, 2, v_toPure_1583_);
lean_closure_set(v___f_1595_, 3, v_declName_1584_);
lean_closure_set(v___f_1595_, 4, v_inst_1585_);
lean_closure_set(v___f_1595_, 5, v_inst_1586_);
lean_closure_set(v___f_1595_, 6, v_toBind_1587_);
lean_closure_set(v___f_1595_, 7, v___f_1588_);
v___x_1596_ = lean_apply_4(v_toBind_1587_, lean_box(0), lean_box(0), v_getEnv_1589_, v___f_1595_);
return v___x_1596_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___redArg(lean_object* v_inst_1597_, lean_object* v_inst_1598_, lean_object* v_inst_1599_, lean_object* v_declName_1600_){
_start:
{
if (lean_obj_tag(v_declName_1600_) == 1)
{
lean_object* v_toApplicative_1601_; lean_object* v_toBind_1602_; lean_object* v_toPure_1603_; lean_object* v_pre_1604_; lean_object* v_getEnv_1605_; lean_object* v___f_1606_; lean_object* v___f_1607_; lean_object* v___x_1608_; 
v_toApplicative_1601_ = lean_ctor_get(v_inst_1597_, 0);
v_toBind_1602_ = lean_ctor_get(v_inst_1597_, 1);
lean_inc(v_toBind_1602_);
v_toPure_1603_ = lean_ctor_get(v_toApplicative_1601_, 1);
lean_inc(v_toPure_1603_);
v_pre_1604_ = lean_ctor_get(v_declName_1600_, 0);
lean_inc(v_pre_1604_);
v_getEnv_1605_ = lean_ctor_get(v_inst_1598_, 0);
lean_inc(v_getEnv_1605_);
lean_dec_ref(v_inst_1598_);
lean_inc(v_toPure_1603_);
v___f_1606_ = lean_alloc_closure((void*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1606_, 0, v_toPure_1603_);
lean_inc(v_getEnv_1605_);
lean_inc(v_toBind_1602_);
v___f_1607_ = lean_alloc_closure((void*)(l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__4), 9, 8);
lean_closure_set(v___f_1607_, 0, v_pre_1604_);
lean_closure_set(v___f_1607_, 1, v_toPure_1603_);
lean_closure_set(v___f_1607_, 2, v_declName_1600_);
lean_closure_set(v___f_1607_, 3, v_inst_1597_);
lean_closure_set(v___f_1607_, 4, v_inst_1599_);
lean_closure_set(v___f_1607_, 5, v_toBind_1602_);
lean_closure_set(v___f_1607_, 6, v___f_1606_);
lean_closure_set(v___f_1607_, 7, v_getEnv_1605_);
v___x_1608_ = lean_apply_4(v_toBind_1602_, lean_box(0), lean_box(0), v_getEnv_1605_, v___f_1607_);
return v___x_1608_;
}
else
{
lean_object* v_toApplicative_1609_; lean_object* v_toPure_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; 
v_toApplicative_1609_ = lean_ctor_get(v_inst_1597_, 0);
lean_inc_ref(v_toApplicative_1609_);
lean_dec(v_declName_1600_);
lean_dec_ref(v_inst_1599_);
lean_dec_ref(v_inst_1598_);
lean_dec_ref(v_inst_1597_);
v_toPure_1610_ = lean_ctor_get(v_toApplicative_1609_, 1);
lean_inc(v_toPure_1610_);
lean_dec_ref(v_toApplicative_1609_);
v___x_1611_ = lean_box(0);
v___x_1612_ = lean_apply_2(v_toPure_1610_, lean_box(0), v___x_1611_);
return v___x_1612_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField(lean_object* v_m_1613_, lean_object* v_inst_1614_, lean_object* v_inst_1615_, lean_object* v_inst_1616_, lean_object* v_declName_1617_){
_start:
{
lean_object* v___x_1618_; 
v___x_1618_ = l_Lean_Elab_checkIfShadowingStructureField___redArg(v_inst_1614_, v_inst_1615_, v_inst_1616_, v_declName_1617_);
return v___x_1618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__0(lean_object* v_toApplicative_1619_, lean_object* v_declName_1620_, lean_object* v_shortName_1621_, lean_object* v_____r_1622_){
_start:
{
lean_object* v_toPure_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; 
v_toPure_1623_ = lean_ctor_get(v_toApplicative_1619_, 1);
lean_inc(v_toPure_1623_);
lean_dec_ref(v_toApplicative_1619_);
v___x_1624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1624_, 0, v_declName_1620_);
lean_ctor_set(v___x_1624_, 1, v_shortName_1621_);
v___x_1625_ = lean_apply_2(v_toPure_1623_, lean_box(0), v___x_1624_);
return v___x_1625_;
}
}
static lean_object* _init_l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1627_ = ((lean_object*)(l_Lean_Elab_mkDeclName___redArg___lam__2___closed__0));
v___x_1628_ = l_Lean_stringToMessageData(v___x_1627_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__2(lean_object* v_modifiers_1629_, lean_object* v_toApplicative_1630_, lean_object* v_shortName_1631_, lean_object* v_currNamespace_1632_, lean_object* v_inst_1633_, lean_object* v_inst_1634_, lean_object* v_toBind_1635_, lean_object* v_declName_1636_){
_start:
{
uint8_t v_isProtected_1637_; 
v_isProtected_1637_ = lean_ctor_get_uint8(v_modifiers_1629_, sizeof(void*)*3 + 1);
if (v_isProtected_1637_ == 0)
{
lean_object* v_toPure_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; 
lean_dec(v_toBind_1635_);
lean_dec_ref(v_inst_1634_);
lean_dec_ref(v_inst_1633_);
lean_dec(v_currNamespace_1632_);
v_toPure_1638_ = lean_ctor_get(v_toApplicative_1630_, 1);
lean_inc(v_toPure_1638_);
lean_dec_ref(v_toApplicative_1630_);
v___x_1639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1639_, 0, v_declName_1636_);
lean_ctor_set(v___x_1639_, 1, v_shortName_1631_);
v___x_1640_ = lean_apply_2(v_toPure_1638_, lean_box(0), v___x_1639_);
return v___x_1640_;
}
else
{
if (lean_obj_tag(v_currNamespace_1632_) == 1)
{
lean_object* v_str_1641_; lean_object* v_toPure_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; 
lean_dec(v_toBind_1635_);
lean_dec_ref(v_inst_1634_);
lean_dec_ref(v_inst_1633_);
v_str_1641_ = lean_ctor_get(v_currNamespace_1632_, 1);
lean_inc_ref(v_str_1641_);
lean_dec_ref(v_currNamespace_1632_);
v_toPure_1642_ = lean_ctor_get(v_toApplicative_1630_, 1);
lean_inc(v_toPure_1642_);
lean_dec_ref(v_toApplicative_1630_);
v___x_1643_ = lean_box(0);
v___x_1644_ = l_Lean_Name_str___override(v___x_1643_, v_str_1641_);
v___x_1645_ = l_Lean_Name_append(v___x_1644_, v_shortName_1631_);
v___x_1646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1646_, 0, v_declName_1636_);
lean_ctor_set(v___x_1646_, 1, v___x_1645_);
v___x_1647_ = lean_apply_2(v_toPure_1642_, lean_box(0), v___x_1646_);
return v___x_1647_;
}
else
{
lean_object* v___f_1648_; uint8_t v___x_1649_; 
lean_dec(v_currNamespace_1632_);
lean_inc(v_shortName_1631_);
lean_inc(v_declName_1636_);
lean_inc_ref(v_toApplicative_1630_);
v___f_1648_ = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1648_, 0, v_toApplicative_1630_);
lean_closure_set(v___f_1648_, 1, v_declName_1636_);
lean_closure_set(v___f_1648_, 2, v_shortName_1631_);
v___x_1649_ = l_Lean_Name_isAtomic(v_shortName_1631_);
if (v___x_1649_ == 0)
{
lean_object* v___x_1650_; lean_object* v___x_1651_; 
lean_dec_ref(v___f_1648_);
lean_dec(v_toBind_1635_);
lean_dec_ref(v_inst_1634_);
lean_dec_ref(v_inst_1633_);
v___x_1650_ = lean_box(0);
v___x_1651_ = l_Lean_Elab_mkDeclName___redArg___lam__0(v_toApplicative_1630_, v_declName_1636_, v_shortName_1631_, v___x_1650_);
return v___x_1651_;
}
else
{
lean_object* v___f_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; 
lean_dec(v_declName_1636_);
lean_dec(v_shortName_1631_);
lean_dec_ref(v_toApplicative_1630_);
v___f_1652_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5), 2, 1);
lean_closure_set(v___f_1652_, 0, v___f_1648_);
v___x_1653_ = lean_obj_once(&l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1, &l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1);
v___x_1654_ = l_Lean_throwError___redArg(v_inst_1633_, v_inst_1634_, v___x_1653_);
v___x_1655_ = lean_apply_4(v_toBind_1635_, lean_box(0), lean_box(0), v___x_1654_, v___f_1652_);
return v___x_1655_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__2___boxed(lean_object* v_modifiers_1656_, lean_object* v_toApplicative_1657_, lean_object* v_shortName_1658_, lean_object* v_currNamespace_1659_, lean_object* v_inst_1660_, lean_object* v_inst_1661_, lean_object* v_toBind_1662_, lean_object* v_declName_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l_Lean_Elab_mkDeclName___redArg___lam__2(v_modifiers_1656_, v_toApplicative_1657_, v_shortName_1658_, v_currNamespace_1659_, v_inst_1660_, v_inst_1661_, v_toBind_1662_, v_declName_1663_);
lean_dec_ref(v_modifiers_1656_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__1(lean_object* v_inst_1665_, lean_object* v_inst_1666_, lean_object* v_inst_1667_, lean_object* v_inst_1668_, lean_object* v_inst_1669_, lean_object* v_modifiers_1670_, lean_object* v___y_1671_, lean_object* v_toBind_1672_, lean_object* v___f_1673_, lean_object* v_____r_1674_){
_start:
{
lean_object* v___x_1675_; lean_object* v___x_1676_; 
v___x_1675_ = l_Lean_Elab_applyVisibility___redArg(v_inst_1665_, v_inst_1666_, v_inst_1667_, v_inst_1668_, v_inst_1669_, v_modifiers_1670_, v___y_1671_);
v___x_1676_ = lean_apply_4(v_toBind_1672_, lean_box(0), lean_box(0), v___x_1675_, v___f_1673_);
return v___x_1676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__3(lean_object* v_modifiers_1677_, lean_object* v_toApplicative_1678_, lean_object* v_inst_1679_, lean_object* v_inst_1680_, lean_object* v_toBind_1681_, lean_object* v_inst_1682_, lean_object* v_inst_1683_, lean_object* v_inst_1684_, lean_object* v___y_1685_, lean_object* v_____r_1686_, lean_object* v_shortName_1687_, lean_object* v_currNamespace_1688_){
_start:
{
lean_object* v___f_1689_; lean_object* v___f_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
lean_inc(v_toBind_1681_);
lean_inc_ref(v_inst_1680_);
lean_inc_ref(v_inst_1679_);
lean_inc_ref(v_modifiers_1677_);
v___f_1689_ = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_1689_, 0, v_modifiers_1677_);
lean_closure_set(v___f_1689_, 1, v_toApplicative_1678_);
lean_closure_set(v___f_1689_, 2, v_shortName_1687_);
lean_closure_set(v___f_1689_, 3, v_currNamespace_1688_);
lean_closure_set(v___f_1689_, 4, v_inst_1679_);
lean_closure_set(v___f_1689_, 5, v_inst_1680_);
lean_closure_set(v___f_1689_, 6, v_toBind_1681_);
lean_inc(v_toBind_1681_);
lean_inc(v___y_1685_);
lean_inc_ref(v_inst_1680_);
lean_inc_ref(v_inst_1682_);
lean_inc_ref(v_inst_1679_);
v___f_1690_ = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___redArg___lam__1), 10, 9);
lean_closure_set(v___f_1690_, 0, v_inst_1679_);
lean_closure_set(v___f_1690_, 1, v_inst_1682_);
lean_closure_set(v___f_1690_, 2, v_inst_1680_);
lean_closure_set(v___f_1690_, 3, v_inst_1683_);
lean_closure_set(v___f_1690_, 4, v_inst_1684_);
lean_closure_set(v___f_1690_, 5, v_modifiers_1677_);
lean_closure_set(v___f_1690_, 6, v___y_1685_);
lean_closure_set(v___f_1690_, 7, v_toBind_1681_);
lean_closure_set(v___f_1690_, 8, v___f_1689_);
v___x_1691_ = l_Lean_Elab_checkIfShadowingStructureField___redArg(v_inst_1679_, v_inst_1682_, v_inst_1680_, v___y_1685_);
v___x_1692_ = lean_apply_4(v_toBind_1681_, lean_box(0), lean_box(0), v___x_1691_, v___f_1690_);
return v___x_1692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__4(lean_object* v___f_1693_, lean_object* v_shortName_1694_, lean_object* v_currNamespace_1695_, lean_object* v_____r_1696_){
_start:
{
lean_object* v___x_1697_; 
v___x_1697_ = lean_apply_3(v___f_1693_, v_____r_1696_, v_shortName_1694_, v_currNamespace_1695_);
return v___x_1697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__5(lean_object* v_modifiers_1698_, lean_object* v_toApplicative_1699_, lean_object* v_inst_1700_, lean_object* v_inst_1701_, lean_object* v_toBind_1702_, lean_object* v_inst_1703_, lean_object* v_inst_1704_, lean_object* v_inst_1705_, uint8_t v_isRootName_1706_, lean_object* v_shortName_1707_, lean_object* v_currNamespace_1708_, lean_object* v_name_1709_, lean_object* v___x_1710_, lean_object* v_imported_1711_, lean_object* v_ctx_1712_, lean_object* v_scopes_1713_, lean_object* v_____r_1714_){
_start:
{
lean_object* v___y_1716_; 
if (v_isRootName_1706_ == 0)
{
lean_object* v___x_1735_; 
lean_dec(v_scopes_1713_);
lean_dec(v_ctx_1712_);
lean_dec(v_imported_1711_);
lean_inc(v_shortName_1707_);
lean_inc(v_currNamespace_1708_);
v___x_1735_ = l_Lean_Name_append(v_currNamespace_1708_, v_shortName_1707_);
v___y_1716_ = v___x_1735_;
goto v___jp_1715_;
}
else
{
lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
v___x_1736_ = lean_box(0);
lean_inc(v_name_1709_);
v___x_1737_ = l_Lean_Name_replacePrefix(v_name_1709_, v___x_1710_, v___x_1736_);
v___x_1738_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1738_, 0, v___x_1737_);
lean_ctor_set(v___x_1738_, 1, v_imported_1711_);
lean_ctor_set(v___x_1738_, 2, v_ctx_1712_);
lean_ctor_set(v___x_1738_, 3, v_scopes_1713_);
v___x_1739_ = l_Lean_MacroScopesView_review(v___x_1738_);
v___y_1716_ = v___x_1739_;
goto v___jp_1715_;
}
v___jp_1715_:
{
lean_object* v___f_1717_; 
lean_inc(v___y_1716_);
lean_inc_ref(v_inst_1705_);
lean_inc(v_inst_1704_);
lean_inc_ref(v_inst_1703_);
lean_inc(v_toBind_1702_);
lean_inc_ref(v_inst_1701_);
lean_inc_ref(v_inst_1700_);
lean_inc_ref(v_toApplicative_1699_);
lean_inc_ref(v_modifiers_1698_);
v___f_1717_ = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___redArg___lam__3), 12, 9);
lean_closure_set(v___f_1717_, 0, v_modifiers_1698_);
lean_closure_set(v___f_1717_, 1, v_toApplicative_1699_);
lean_closure_set(v___f_1717_, 2, v_inst_1700_);
lean_closure_set(v___f_1717_, 3, v_inst_1701_);
lean_closure_set(v___f_1717_, 4, v_toBind_1702_);
lean_closure_set(v___f_1717_, 5, v_inst_1703_);
lean_closure_set(v___f_1717_, 6, v_inst_1704_);
lean_closure_set(v___f_1717_, 7, v_inst_1705_);
lean_closure_set(v___f_1717_, 8, v___y_1716_);
if (v_isRootName_1706_ == 0)
{
lean_object* v___x_1718_; lean_object* v___x_1719_; 
lean_dec_ref(v___f_1717_);
lean_dec(v_name_1709_);
v___x_1718_ = lean_box(0);
v___x_1719_ = l_Lean_Elab_mkDeclName___redArg___lam__3(v_modifiers_1698_, v_toApplicative_1699_, v_inst_1700_, v_inst_1701_, v_toBind_1702_, v_inst_1703_, v_inst_1704_, v_inst_1705_, v___y_1716_, v___x_1718_, v_shortName_1707_, v_currNamespace_1708_);
return v___x_1719_;
}
else
{
if (lean_obj_tag(v_name_1709_) == 1)
{
lean_object* v_pre_1720_; lean_object* v_str_1721_; lean_object* v___x_1722_; lean_object* v_shortName_1723_; lean_object* v_currNamespace_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
lean_dec_ref(v___f_1717_);
lean_dec(v_currNamespace_1708_);
lean_dec(v_shortName_1707_);
v_pre_1720_ = lean_ctor_get(v_name_1709_, 0);
lean_inc(v_pre_1720_);
v_str_1721_ = lean_ctor_get(v_name_1709_, 1);
lean_inc_ref(v_str_1721_);
lean_dec_ref(v_name_1709_);
v___x_1722_ = lean_box(0);
v_shortName_1723_ = l_Lean_Name_str___override(v___x_1722_, v_str_1721_);
v_currNamespace_1724_ = l_Lean_Name_replacePrefix(v_pre_1720_, v___x_1710_, v___x_1722_);
v___x_1725_ = lean_box(0);
v___x_1726_ = l_Lean_Elab_mkDeclName___redArg___lam__3(v_modifiers_1698_, v_toApplicative_1699_, v_inst_1700_, v_inst_1701_, v_toBind_1702_, v_inst_1703_, v_inst_1704_, v_inst_1705_, v___y_1716_, v___x_1725_, v_shortName_1723_, v_currNamespace_1724_);
return v___x_1726_;
}
else
{
lean_object* v___f_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
lean_dec(v___y_1716_);
lean_dec_ref(v_inst_1705_);
lean_dec(v_inst_1704_);
lean_dec_ref(v_inst_1703_);
lean_dec_ref(v_toApplicative_1699_);
lean_dec_ref(v_modifiers_1698_);
v___f_1727_ = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___redArg___lam__4), 4, 3);
lean_closure_set(v___f_1727_, 0, v___f_1717_);
lean_closure_set(v___f_1727_, 1, v_shortName_1707_);
lean_closure_set(v___f_1727_, 2, v_currNamespace_1708_);
v___x_1728_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1);
v___x_1729_ = l_Lean_MessageData_ofName(v_name_1709_);
v___x_1730_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1730_, 0, v___x_1728_);
lean_ctor_set(v___x_1730_, 1, v___x_1729_);
v___x_1731_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_1732_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1732_, 0, v___x_1730_);
lean_ctor_set(v___x_1732_, 1, v___x_1731_);
v___x_1733_ = l_Lean_throwError___redArg(v_inst_1700_, v_inst_1701_, v___x_1732_);
v___x_1734_ = lean_apply_4(v_toBind_1702_, lean_box(0), lean_box(0), v___x_1733_, v___f_1727_);
return v___x_1734_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg___lam__5___boxed(lean_object** _args){
lean_object* v_modifiers_1740_ = _args[0];
lean_object* v_toApplicative_1741_ = _args[1];
lean_object* v_inst_1742_ = _args[2];
lean_object* v_inst_1743_ = _args[3];
lean_object* v_toBind_1744_ = _args[4];
lean_object* v_inst_1745_ = _args[5];
lean_object* v_inst_1746_ = _args[6];
lean_object* v_inst_1747_ = _args[7];
lean_object* v_isRootName_1748_ = _args[8];
lean_object* v_shortName_1749_ = _args[9];
lean_object* v_currNamespace_1750_ = _args[10];
lean_object* v_name_1751_ = _args[11];
lean_object* v___x_1752_ = _args[12];
lean_object* v_imported_1753_ = _args[13];
lean_object* v_ctx_1754_ = _args[14];
lean_object* v_scopes_1755_ = _args[15];
lean_object* v_____r_1756_ = _args[16];
_start:
{
uint8_t v_isRootName_boxed_1757_; lean_object* v_res_1758_; 
v_isRootName_boxed_1757_ = lean_unbox(v_isRootName_1748_);
v_res_1758_ = l_Lean_Elab_mkDeclName___redArg___lam__5(v_modifiers_1740_, v_toApplicative_1741_, v_inst_1742_, v_inst_1743_, v_toBind_1744_, v_inst_1745_, v_inst_1746_, v_inst_1747_, v_isRootName_boxed_1757_, v_shortName_1749_, v_currNamespace_1750_, v_name_1751_, v___x_1752_, v_imported_1753_, v_ctx_1754_, v_scopes_1755_, v_____r_1756_);
lean_dec(v___x_1752_);
return v_res_1758_;
}
}
static lean_object* _init_l_Lean_Elab_mkDeclName___redArg___closed__3(void){
_start:
{
lean_object* v___x_1763_; lean_object* v___x_1764_; 
v___x_1763_ = ((lean_object*)(l_Lean_Elab_mkDeclName___redArg___closed__2));
v___x_1764_ = l_Lean_stringToMessageData(v___x_1763_);
return v___x_1764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___redArg(lean_object* v_inst_1765_, lean_object* v_inst_1766_, lean_object* v_inst_1767_, lean_object* v_inst_1768_, lean_object* v_inst_1769_, lean_object* v_currNamespace_1770_, lean_object* v_modifiers_1771_, lean_object* v_shortName_1772_){
_start:
{
lean_object* v_view_1773_; lean_object* v_name_1774_; lean_object* v_imported_1775_; lean_object* v_ctx_1776_; lean_object* v_scopes_1777_; lean_object* v_toApplicative_1778_; lean_object* v_toBind_1779_; lean_object* v___x_1780_; uint8_t v_isRootName_1781_; lean_object* v___x_1782_; lean_object* v___f_1783_; uint8_t v___x_1784_; 
lean_inc(v_shortName_1772_);
v_view_1773_ = l_Lean_extractMacroScopes(v_shortName_1772_);
v_name_1774_ = lean_ctor_get(v_view_1773_, 0);
lean_inc(v_name_1774_);
v_imported_1775_ = lean_ctor_get(v_view_1773_, 1);
lean_inc(v_imported_1775_);
v_ctx_1776_ = lean_ctor_get(v_view_1773_, 2);
lean_inc(v_ctx_1776_);
v_scopes_1777_ = lean_ctor_get(v_view_1773_, 3);
lean_inc(v_scopes_1777_);
lean_dec_ref(v_view_1773_);
v_toApplicative_1778_ = lean_ctor_get(v_inst_1765_, 0);
v_toBind_1779_ = lean_ctor_get(v_inst_1765_, 1);
lean_inc(v_toBind_1779_);
v___x_1780_ = ((lean_object*)(l_Lean_Elab_mkDeclName___redArg___closed__1));
v_isRootName_1781_ = l_Lean_Name_isPrefixOf(v___x_1780_, v_name_1774_);
v___x_1782_ = lean_box(v_isRootName_1781_);
lean_inc(v_scopes_1777_);
lean_inc(v_ctx_1776_);
lean_inc(v_imported_1775_);
lean_inc(v_name_1774_);
lean_inc(v_currNamespace_1770_);
lean_inc(v_shortName_1772_);
lean_inc_ref(v_inst_1769_);
lean_inc(v_inst_1768_);
lean_inc_ref(v_inst_1766_);
lean_inc(v_toBind_1779_);
lean_inc_ref(v_inst_1767_);
lean_inc_ref(v_inst_1765_);
lean_inc_ref(v_toApplicative_1778_);
lean_inc_ref(v_modifiers_1771_);
v___f_1783_ = lean_alloc_closure((void*)(l_Lean_Elab_mkDeclName___redArg___lam__5___boxed), 17, 16);
lean_closure_set(v___f_1783_, 0, v_modifiers_1771_);
lean_closure_set(v___f_1783_, 1, v_toApplicative_1778_);
lean_closure_set(v___f_1783_, 2, v_inst_1765_);
lean_closure_set(v___f_1783_, 3, v_inst_1767_);
lean_closure_set(v___f_1783_, 4, v_toBind_1779_);
lean_closure_set(v___f_1783_, 5, v_inst_1766_);
lean_closure_set(v___f_1783_, 6, v_inst_1768_);
lean_closure_set(v___f_1783_, 7, v_inst_1769_);
lean_closure_set(v___f_1783_, 8, v___x_1782_);
lean_closure_set(v___f_1783_, 9, v_shortName_1772_);
lean_closure_set(v___f_1783_, 10, v_currNamespace_1770_);
lean_closure_set(v___f_1783_, 11, v_name_1774_);
lean_closure_set(v___f_1783_, 12, v___x_1780_);
lean_closure_set(v___f_1783_, 13, v_imported_1775_);
lean_closure_set(v___f_1783_, 14, v_ctx_1776_);
lean_closure_set(v___f_1783_, 15, v_scopes_1777_);
v___x_1784_ = lean_name_eq(v_name_1774_, v___x_1780_);
if (v___x_1784_ == 0)
{
lean_object* v___x_1785_; lean_object* v___x_1786_; 
lean_inc_ref(v_toApplicative_1778_);
lean_dec_ref(v___f_1783_);
v___x_1785_ = lean_box(0);
v___x_1786_ = l_Lean_Elab_mkDeclName___redArg___lam__5(v_modifiers_1771_, v_toApplicative_1778_, v_inst_1765_, v_inst_1767_, v_toBind_1779_, v_inst_1766_, v_inst_1768_, v_inst_1769_, v_isRootName_1781_, v_shortName_1772_, v_currNamespace_1770_, v_name_1774_, v___x_1780_, v_imported_1775_, v_ctx_1776_, v_scopes_1777_, v___x_1785_);
return v___x_1786_;
}
else
{
lean_object* v___f_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
lean_dec(v_scopes_1777_);
lean_dec(v_ctx_1776_);
lean_dec(v_imported_1775_);
lean_dec(v_name_1774_);
lean_dec(v_shortName_1772_);
lean_dec_ref(v_modifiers_1771_);
lean_dec(v_currNamespace_1770_);
lean_dec_ref(v_inst_1769_);
lean_dec(v_inst_1768_);
lean_dec_ref(v_inst_1766_);
v___f_1787_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__5), 2, 1);
lean_closure_set(v___f_1787_, 0, v___f_1783_);
v___x_1788_ = lean_obj_once(&l_Lean_Elab_mkDeclName___redArg___closed__3, &l_Lean_Elab_mkDeclName___redArg___closed__3_once, _init_l_Lean_Elab_mkDeclName___redArg___closed__3);
v___x_1789_ = l_Lean_throwError___redArg(v_inst_1765_, v_inst_1767_, v___x_1788_);
v___x_1790_ = lean_apply_4(v_toBind_1779_, lean_box(0), lean_box(0), v___x_1789_, v___f_1787_);
return v___x_1790_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName(lean_object* v_m_1791_, lean_object* v_inst_1792_, lean_object* v_inst_1793_, lean_object* v_inst_1794_, lean_object* v_inst_1795_, lean_object* v_inst_1796_, lean_object* v_currNamespace_1797_, lean_object* v_modifiers_1798_, lean_object* v_shortName_1799_){
_start:
{
lean_object* v___x_1800_; 
v___x_1800_ = l_Lean_Elab_mkDeclName___redArg(v_inst_1792_, v_inst_1793_, v_inst_1794_, v_inst_1795_, v_inst_1796_, v_currNamespace_1797_, v_modifiers_1798_, v_shortName_1799_);
return v___x_1800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclIdCore(lean_object* v_declId_1810_){
_start:
{
uint8_t v___x_1811_; 
v___x_1811_ = l_Lean_Syntax_isIdent(v_declId_1810_);
if (v___x_1811_ == 0)
{
lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v_id_1814_; lean_object* v___x_1815_; lean_object* v_optUnivDeclStx_1816_; lean_object* v___x_1817_; 
v___x_1812_ = lean_unsigned_to_nat(0u);
v___x_1813_ = l_Lean_Syntax_getArg(v_declId_1810_, v___x_1812_);
v_id_1814_ = l_Lean_Syntax_getId(v___x_1813_);
lean_dec(v___x_1813_);
v___x_1815_ = lean_unsigned_to_nat(1u);
v_optUnivDeclStx_1816_ = l_Lean_Syntax_getArg(v_declId_1810_, v___x_1815_);
v___x_1817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1817_, 0, v_id_1814_);
lean_ctor_set(v___x_1817_, 1, v_optUnivDeclStx_1816_);
return v___x_1817_;
}
else
{
lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; 
v___x_1818_ = l_Lean_Syntax_getId(v_declId_1810_);
v___x_1819_ = ((lean_object*)(l_Lean_Elab_expandDeclIdCore___closed__3));
v___x_1820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1820_, 0, v___x_1818_);
lean_ctor_set(v___x_1820_, 1, v___x_1819_);
return v___x_1820_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclIdCore___boxed(lean_object* v_declId_1821_){
_start:
{
lean_object* v_res_1822_; 
v_res_1822_ = l_Lean_Elab_expandDeclIdCore(v_declId_1821_);
lean_dec(v_declId_1821_);
return v_res_1822_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__2(lean_object* v_msgData_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_){
_start:
{
lean_object* v___x_1829_; lean_object* v_env_1830_; lean_object* v___x_1831_; lean_object* v_mctx_1832_; lean_object* v_lctx_1833_; lean_object* v_options_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
v___x_1829_ = lean_st_ref_get(v___y_1827_);
v_env_1830_ = lean_ctor_get(v___x_1829_, 0);
lean_inc_ref(v_env_1830_);
lean_dec(v___x_1829_);
v___x_1831_ = lean_st_ref_get(v___y_1825_);
v_mctx_1832_ = lean_ctor_get(v___x_1831_, 0);
lean_inc_ref(v_mctx_1832_);
lean_dec(v___x_1831_);
v_lctx_1833_ = lean_ctor_get(v___y_1824_, 2);
v_options_1834_ = lean_ctor_get(v___y_1826_, 2);
lean_inc_ref(v_options_1834_);
lean_inc_ref(v_lctx_1833_);
v___x_1835_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1835_, 0, v_env_1830_);
lean_ctor_set(v___x_1835_, 1, v_mctx_1832_);
lean_ctor_set(v___x_1835_, 2, v_lctx_1833_);
lean_ctor_set(v___x_1835_, 3, v_options_1834_);
v___x_1836_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1836_, 0, v___x_1835_);
lean_ctor_set(v___x_1836_, 1, v_msgData_1823_);
v___x_1837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1837_, 0, v___x_1836_);
return v___x_1837_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__2___boxed(lean_object* v_msgData_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_){
_start:
{
lean_object* v_res_1844_; 
v_res_1844_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__2(v_msgData_1838_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_);
lean_dec(v___y_1842_);
lean_dec_ref(v___y_1841_);
lean_dec(v___y_1840_);
lean_dec_ref(v___y_1839_);
return v_res_1844_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__7(lean_object* v_opts_1845_, lean_object* v_opt_1846_){
_start:
{
lean_object* v_name_1847_; lean_object* v_defValue_1848_; lean_object* v_map_1849_; lean_object* v___x_1850_; 
v_name_1847_ = lean_ctor_get(v_opt_1846_, 0);
v_defValue_1848_ = lean_ctor_get(v_opt_1846_, 1);
v_map_1849_ = lean_ctor_get(v_opts_1845_, 0);
v___x_1850_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1849_, v_name_1847_);
if (lean_obj_tag(v___x_1850_) == 0)
{
uint8_t v___x_1851_; 
v___x_1851_ = lean_unbox(v_defValue_1848_);
return v___x_1851_;
}
else
{
lean_object* v_val_1852_; 
v_val_1852_ = lean_ctor_get(v___x_1850_, 0);
lean_inc(v_val_1852_);
lean_dec_ref(v___x_1850_);
if (lean_obj_tag(v_val_1852_) == 1)
{
uint8_t v_v_1853_; 
v_v_1853_ = lean_ctor_get_uint8(v_val_1852_, 0);
lean_dec_ref(v_val_1852_);
return v_v_1853_;
}
else
{
uint8_t v___x_1854_; 
lean_dec(v_val_1852_);
v___x_1854_ = lean_unbox(v_defValue_1848_);
return v___x_1854_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__7___boxed(lean_object* v_opts_1855_, lean_object* v_opt_1856_){
_start:
{
uint8_t v_res_1857_; lean_object* v_r_1858_; 
v_res_1857_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__7(v_opts_1855_, v_opt_1856_);
lean_dec_ref(v_opt_1856_);
lean_dec_ref(v_opts_1855_);
v_r_1858_ = lean_box(v_res_1857_);
return v_r_1858_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0(void){
_start:
{
lean_object* v___x_1859_; lean_object* v___x_1860_; 
v___x_1859_ = lean_box(1);
v___x_1860_ = l_Lean_MessageData_ofFormat(v___x_1859_);
return v___x_1860_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__3(void){
_start:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; 
v___x_1864_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__2));
v___x_1865_ = l_Lean_MessageData_ofFormat(v___x_1864_);
return v___x_1865_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8(lean_object* v_x_1866_, lean_object* v_x_1867_){
_start:
{
if (lean_obj_tag(v_x_1867_) == 0)
{
return v_x_1866_;
}
else
{
lean_object* v_head_1868_; lean_object* v_tail_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1891_; 
v_head_1868_ = lean_ctor_get(v_x_1867_, 0);
v_tail_1869_ = lean_ctor_get(v_x_1867_, 1);
v_isSharedCheck_1891_ = !lean_is_exclusive(v_x_1867_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1871_ = v_x_1867_;
v_isShared_1872_ = v_isSharedCheck_1891_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_tail_1869_);
lean_inc(v_head_1868_);
lean_dec(v_x_1867_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1891_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v_before_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1889_; 
v_before_1873_ = lean_ctor_get(v_head_1868_, 0);
v_isSharedCheck_1889_ = !lean_is_exclusive(v_head_1868_);
if (v_isSharedCheck_1889_ == 0)
{
lean_object* v_unused_1890_; 
v_unused_1890_ = lean_ctor_get(v_head_1868_, 1);
lean_dec(v_unused_1890_);
v___x_1875_ = v_head_1868_;
v_isShared_1876_ = v_isSharedCheck_1889_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_before_1873_);
lean_dec(v_head_1868_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1889_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1877_; lean_object* v___x_1879_; 
v___x_1877_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0);
if (v_isShared_1876_ == 0)
{
lean_ctor_set_tag(v___x_1875_, 7);
lean_ctor_set(v___x_1875_, 1, v___x_1877_);
lean_ctor_set(v___x_1875_, 0, v_x_1866_);
v___x_1879_ = v___x_1875_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v_x_1866_);
lean_ctor_set(v_reuseFailAlloc_1888_, 1, v___x_1877_);
v___x_1879_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
lean_object* v___x_1880_; lean_object* v___x_1882_; 
v___x_1880_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__3);
if (v_isShared_1872_ == 0)
{
lean_ctor_set_tag(v___x_1871_, 7);
lean_ctor_set(v___x_1871_, 1, v___x_1880_);
lean_ctor_set(v___x_1871_, 0, v___x_1879_);
v___x_1882_ = v___x_1871_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v___x_1879_);
lean_ctor_set(v_reuseFailAlloc_1887_, 1, v___x_1880_);
v___x_1882_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; 
v___x_1883_ = l_Lean_MessageData_ofSyntax(v_before_1873_);
v___x_1884_ = l_Lean_indentD(v___x_1883_);
v___x_1885_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1885_, 0, v___x_1882_);
lean_ctor_set(v___x_1885_, 1, v___x_1884_);
v_x_1866_ = v___x_1885_;
v_x_1867_ = v_tail_1869_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1895_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__1));
v___x_1896_ = l_Lean_MessageData_ofFormat(v___x_1895_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg(lean_object* v_msgData_1897_, lean_object* v_macroStack_1898_, lean_object* v___y_1899_){
_start:
{
lean_object* v_options_1901_; lean_object* v___x_1902_; uint8_t v___x_1903_; 
v_options_1901_ = lean_ctor_get(v___y_1899_, 2);
v___x_1902_ = l_Lean_Elab_pp_macroStack;
v___x_1903_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__7(v_options_1901_, v___x_1902_);
if (v___x_1903_ == 0)
{
lean_object* v___x_1904_; 
lean_dec(v_macroStack_1898_);
v___x_1904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1904_, 0, v_msgData_1897_);
return v___x_1904_;
}
else
{
if (lean_obj_tag(v_macroStack_1898_) == 0)
{
lean_object* v___x_1905_; 
v___x_1905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1905_, 0, v_msgData_1897_);
return v___x_1905_;
}
else
{
lean_object* v_head_1906_; lean_object* v_after_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1922_; 
v_head_1906_ = lean_ctor_get(v_macroStack_1898_, 0);
lean_inc(v_head_1906_);
v_after_1907_ = lean_ctor_get(v_head_1906_, 1);
v_isSharedCheck_1922_ = !lean_is_exclusive(v_head_1906_);
if (v_isSharedCheck_1922_ == 0)
{
lean_object* v_unused_1923_; 
v_unused_1923_ = lean_ctor_get(v_head_1906_, 0);
lean_dec(v_unused_1923_);
v___x_1909_ = v_head_1906_;
v_isShared_1910_ = v_isSharedCheck_1922_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_after_1907_);
lean_dec(v_head_1906_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1922_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1911_; lean_object* v___x_1913_; 
v___x_1911_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8___closed__0);
if (v_isShared_1910_ == 0)
{
lean_ctor_set_tag(v___x_1909_, 7);
lean_ctor_set(v___x_1909_, 1, v___x_1911_);
lean_ctor_set(v___x_1909_, 0, v_msgData_1897_);
v___x_1913_ = v___x_1909_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v_msgData_1897_);
lean_ctor_set(v_reuseFailAlloc_1921_, 1, v___x_1911_);
v___x_1913_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v_msgData_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; 
v___x_1914_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___closed__2);
v___x_1915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1915_, 0, v___x_1913_);
lean_ctor_set(v___x_1915_, 1, v___x_1914_);
v___x_1916_ = l_Lean_MessageData_ofSyntax(v_after_1907_);
v___x_1917_ = l_Lean_indentD(v___x_1916_);
v_msgData_1918_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1918_, 0, v___x_1915_);
lean_ctor_set(v_msgData_1918_, 1, v___x_1917_);
v___x_1919_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3_spec__8(v_msgData_1918_, v_macroStack_1898_);
v___x_1920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1920_, 0, v___x_1919_);
return v___x_1920_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_msgData_1924_, lean_object* v_macroStack_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_){
_start:
{
lean_object* v_res_1928_; 
v_res_1928_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg(v_msgData_1924_, v_macroStack_1925_, v___y_1926_);
lean_dec_ref(v___y_1926_);
return v_res_1928_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(lean_object* v_msg_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_){
_start:
{
lean_object* v_ref_1937_; lean_object* v___x_1938_; lean_object* v_a_1939_; lean_object* v_macroStack_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v_a_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1951_; 
v_ref_1937_ = lean_ctor_get(v___y_1934_, 5);
v___x_1938_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__2(v_msg_1929_, v___y_1932_, v___y_1933_, v___y_1934_, v___y_1935_);
v_a_1939_ = lean_ctor_get(v___x_1938_, 0);
lean_inc(v_a_1939_);
lean_dec_ref(v___x_1938_);
v_macroStack_1940_ = lean_ctor_get(v___y_1930_, 1);
lean_inc(v_macroStack_1940_);
lean_dec_ref(v___y_1930_);
lean_inc(v_macroStack_1940_);
v___x_1941_ = l_Lean_Elab_getBetterRef(v_ref_1937_, v_macroStack_1940_);
v___x_1942_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg(v_a_1939_, v_macroStack_1940_, v___y_1934_);
v_a_1943_ = lean_ctor_get(v___x_1942_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1942_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1945_ = v___x_1942_;
v_isShared_1946_ = v_isSharedCheck_1951_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_a_1943_);
lean_dec(v___x_1942_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1951_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1947_; lean_object* v___x_1949_; 
v___x_1947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1947_, 0, v___x_1941_);
lean_ctor_set(v___x_1947_, 1, v_a_1943_);
if (v_isShared_1946_ == 0)
{
lean_ctor_set_tag(v___x_1945_, 1);
lean_ctor_set(v___x_1945_, 0, v___x_1947_);
v___x_1949_ = v___x_1945_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v___x_1947_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg___boxed(lean_object* v_msg_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_){
_start:
{
lean_object* v_res_1960_; 
v_res_1960_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v_msg_1952_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_);
lean_dec(v___y_1958_);
lean_dec_ref(v___y_1957_);
lean_dec(v___y_1956_);
lean_dec_ref(v___y_1955_);
lean_dec(v___y_1954_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__2(lean_object* v_env_1961_, lean_object* v_declName_1962_, lean_object* v___f_1963_, lean_object* v_addInfo_1964_, lean_object* v_____r_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_){
_start:
{
lean_object* v___x_1973_; uint8_t v___x_1974_; uint8_t v___x_1975_; 
lean_inc(v_declName_1962_);
v___x_1973_ = l_Lean_mkPrivateName(v_env_1961_, v_declName_1962_);
v___x_1974_ = 1;
lean_inc(v___x_1973_);
v___x_1975_ = l_Lean_Environment_contains(v_env_1961_, v___x_1973_, v___x_1974_);
if (v___x_1975_ == 0)
{
lean_object* v___x_1976_; lean_object* v___x_1977_; 
lean_dec(v___x_1973_);
lean_dec_ref(v_addInfo_1964_);
lean_dec(v_declName_1962_);
v___x_1976_ = lean_box(0);
v___x_1977_ = lean_apply_8(v___f_1963_, v___x_1976_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, lean_box(0));
return v___x_1977_;
}
else
{
lean_object* v___x_1978_; 
lean_dec_ref(v___f_1963_);
lean_inc(v___y_1971_);
lean_inc_ref(v___y_1970_);
lean_inc(v___y_1969_);
lean_inc_ref(v___y_1968_);
lean_inc(v___y_1967_);
lean_inc_ref(v___y_1966_);
v___x_1978_ = lean_apply_8(v_addInfo_1964_, v___x_1973_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, lean_box(0));
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; 
lean_dec_ref(v___x_1978_);
v___x_1979_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__6___closed__1);
v___x_1980_ = l_Lean_MessageData_ofConstName(v_declName_1962_, v___x_1974_);
v___x_1981_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1981_, 0, v___x_1979_);
lean_ctor_set(v___x_1981_, 1, v___x_1980_);
v___x_1982_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_1983_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1983_, 0, v___x_1981_);
lean_ctor_set(v___x_1983_, 1, v___x_1982_);
v___x_1984_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_1983_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_);
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1968_);
lean_dec(v___y_1967_);
return v___x_1984_;
}
else
{
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1968_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v_declName_1962_);
return v___x_1978_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__2___boxed(lean_object* v_env_1985_, lean_object* v_declName_1986_, lean_object* v___f_1987_, lean_object* v_addInfo_1988_, lean_object* v_____r_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_){
_start:
{
lean_object* v_res_1997_; 
v_res_1997_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__2(v_env_1985_, v_declName_1986_, v___f_1987_, v_addInfo_1988_, v_____r_1989_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_);
return v_res_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__3(lean_object* v___f_1998_, lean_object* v_declName_1999_, uint8_t v___x_2000_, lean_object* v_env_2001_, lean_object* v_____do__lift_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_){
_start:
{
uint8_t v___y_2011_; lean_object* v___x_2020_; uint8_t v___x_2021_; 
lean_inc(v_declName_1999_);
v___x_2020_ = l_Lean_privateToUserName(v_declName_1999_);
lean_inc_ref(v_env_2001_);
v___x_2021_ = lean_is_reserved_name(v_env_2001_, v___x_2020_);
if (v___x_2021_ == 0)
{
lean_object* v___x_2022_; uint8_t v___x_2023_; 
lean_inc(v_declName_1999_);
v___x_2022_ = l_Lean_mkPrivateName(v_____do__lift_2002_, v_declName_1999_);
v___x_2023_ = lean_is_reserved_name(v_env_2001_, v___x_2022_);
v___y_2011_ = v___x_2023_;
goto v___jp_2010_;
}
else
{
lean_dec_ref(v_env_2001_);
v___y_2011_ = v___x_2021_;
goto v___jp_2010_;
}
v___jp_2010_:
{
if (v___y_2011_ == 0)
{
lean_object* v___x_2012_; lean_object* v___x_2013_; 
lean_dec(v_declName_1999_);
v___x_2012_ = lean_box(0);
v___x_2013_ = lean_apply_8(v___f_1998_, v___x_2012_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_, lean_box(0));
return v___x_2013_;
}
else
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; 
lean_dec_ref(v___f_1998_);
v___x_2014_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_2015_ = l_Lean_MessageData_ofConstName(v_declName_1999_, v___x_2000_);
v___x_2016_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2016_, 0, v___x_2014_);
lean_ctor_set(v___x_2016_, 1, v___x_2015_);
v___x_2017_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__3);
v___x_2018_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2018_, 0, v___x_2016_);
lean_ctor_set(v___x_2018_, 1, v___x_2017_);
v___x_2019_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2018_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_);
lean_dec(v___y_2008_);
lean_dec_ref(v___y_2007_);
lean_dec(v___y_2006_);
lean_dec_ref(v___y_2005_);
lean_dec(v___y_2004_);
return v___x_2019_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__3___boxed(lean_object* v___f_2024_, lean_object* v_declName_2025_, lean_object* v___x_2026_, lean_object* v_env_2027_, lean_object* v_____do__lift_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_){
_start:
{
uint8_t v___x_18034__boxed_2036_; lean_object* v_res_2037_; 
v___x_18034__boxed_2036_ = lean_unbox(v___x_2026_);
v_res_2037_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__3(v___f_2024_, v_declName_2025_, v___x_18034__boxed_2036_, v_env_2027_, v_____do__lift_2028_, v___y_2029_, v___y_2030_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_);
lean_dec_ref(v_____do__lift_2028_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg(lean_object* v_t_2038_, lean_object* v___y_2039_){
_start:
{
lean_object* v___x_2041_; lean_object* v_infoState_2042_; uint8_t v_enabled_2043_; 
v___x_2041_ = lean_st_ref_get(v___y_2039_);
v_infoState_2042_ = lean_ctor_get(v___x_2041_, 7);
lean_inc_ref(v_infoState_2042_);
lean_dec(v___x_2041_);
v_enabled_2043_ = lean_ctor_get_uint8(v_infoState_2042_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2042_);
if (v_enabled_2043_ == 0)
{
lean_object* v___x_2044_; lean_object* v___x_2045_; 
lean_dec_ref(v_t_2038_);
v___x_2044_ = lean_box(0);
v___x_2045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2044_);
return v___x_2045_;
}
else
{
lean_object* v___x_2046_; lean_object* v_infoState_2047_; lean_object* v_env_2048_; lean_object* v_nextMacroScope_2049_; lean_object* v_ngen_2050_; lean_object* v_auxDeclNGen_2051_; lean_object* v_traceState_2052_; lean_object* v_cache_2053_; lean_object* v_messages_2054_; lean_object* v_snapshotTasks_2055_; lean_object* v___x_2057_; uint8_t v_isShared_2058_; uint8_t v_isSharedCheck_2077_; 
v___x_2046_ = lean_st_ref_take(v___y_2039_);
v_infoState_2047_ = lean_ctor_get(v___x_2046_, 7);
v_env_2048_ = lean_ctor_get(v___x_2046_, 0);
v_nextMacroScope_2049_ = lean_ctor_get(v___x_2046_, 1);
v_ngen_2050_ = lean_ctor_get(v___x_2046_, 2);
v_auxDeclNGen_2051_ = lean_ctor_get(v___x_2046_, 3);
v_traceState_2052_ = lean_ctor_get(v___x_2046_, 4);
v_cache_2053_ = lean_ctor_get(v___x_2046_, 5);
v_messages_2054_ = lean_ctor_get(v___x_2046_, 6);
v_snapshotTasks_2055_ = lean_ctor_get(v___x_2046_, 8);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_2046_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2057_ = v___x_2046_;
v_isShared_2058_ = v_isSharedCheck_2077_;
goto v_resetjp_2056_;
}
else
{
lean_inc(v_snapshotTasks_2055_);
lean_inc(v_infoState_2047_);
lean_inc(v_messages_2054_);
lean_inc(v_cache_2053_);
lean_inc(v_traceState_2052_);
lean_inc(v_auxDeclNGen_2051_);
lean_inc(v_ngen_2050_);
lean_inc(v_nextMacroScope_2049_);
lean_inc(v_env_2048_);
lean_dec(v___x_2046_);
v___x_2057_ = lean_box(0);
v_isShared_2058_ = v_isSharedCheck_2077_;
goto v_resetjp_2056_;
}
v_resetjp_2056_:
{
uint8_t v_enabled_2059_; lean_object* v_assignment_2060_; lean_object* v_lazyAssignment_2061_; lean_object* v_trees_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2076_; 
v_enabled_2059_ = lean_ctor_get_uint8(v_infoState_2047_, sizeof(void*)*3);
v_assignment_2060_ = lean_ctor_get(v_infoState_2047_, 0);
v_lazyAssignment_2061_ = lean_ctor_get(v_infoState_2047_, 1);
v_trees_2062_ = lean_ctor_get(v_infoState_2047_, 2);
v_isSharedCheck_2076_ = !lean_is_exclusive(v_infoState_2047_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2064_ = v_infoState_2047_;
v_isShared_2065_ = v_isSharedCheck_2076_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_trees_2062_);
lean_inc(v_lazyAssignment_2061_);
lean_inc(v_assignment_2060_);
lean_dec(v_infoState_2047_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2076_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2066_; lean_object* v___x_2068_; 
v___x_2066_ = l_Lean_PersistentArray_push___redArg(v_trees_2062_, v_t_2038_);
if (v_isShared_2065_ == 0)
{
lean_ctor_set(v___x_2064_, 2, v___x_2066_);
v___x_2068_ = v___x_2064_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_assignment_2060_);
lean_ctor_set(v_reuseFailAlloc_2075_, 1, v_lazyAssignment_2061_);
lean_ctor_set(v_reuseFailAlloc_2075_, 2, v___x_2066_);
lean_ctor_set_uint8(v_reuseFailAlloc_2075_, sizeof(void*)*3, v_enabled_2059_);
v___x_2068_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
lean_object* v___x_2070_; 
if (v_isShared_2058_ == 0)
{
lean_ctor_set(v___x_2057_, 7, v___x_2068_);
v___x_2070_ = v___x_2057_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v_env_2048_);
lean_ctor_set(v_reuseFailAlloc_2074_, 1, v_nextMacroScope_2049_);
lean_ctor_set(v_reuseFailAlloc_2074_, 2, v_ngen_2050_);
lean_ctor_set(v_reuseFailAlloc_2074_, 3, v_auxDeclNGen_2051_);
lean_ctor_set(v_reuseFailAlloc_2074_, 4, v_traceState_2052_);
lean_ctor_set(v_reuseFailAlloc_2074_, 5, v_cache_2053_);
lean_ctor_set(v_reuseFailAlloc_2074_, 6, v_messages_2054_);
lean_ctor_set(v_reuseFailAlloc_2074_, 7, v___x_2068_);
lean_ctor_set(v_reuseFailAlloc_2074_, 8, v_snapshotTasks_2055_);
v___x_2070_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; 
v___x_2071_ = lean_st_ref_set(v___y_2039_, v___x_2070_);
v___x_2072_ = lean_box(0);
v___x_2073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2073_, 0, v___x_2072_);
return v___x_2073_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg___boxed(lean_object* v_t_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_){
_start:
{
lean_object* v_res_2081_; 
v_res_2081_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg(v_t_2078_, v___y_2079_);
lean_dec(v___y_2079_);
return v_res_2081_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__0(void){
_start:
{
lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2082_ = lean_unsigned_to_nat(32u);
v___x_2083_ = lean_mk_empty_array_with_capacity(v___x_2082_);
v___x_2084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2083_);
return v___x_2084_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__1(void){
_start:
{
size_t v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; 
v___x_2085_ = ((size_t)5ULL);
v___x_2086_ = lean_unsigned_to_nat(0u);
v___x_2087_ = lean_unsigned_to_nat(32u);
v___x_2088_ = lean_mk_empty_array_with_capacity(v___x_2087_);
v___x_2089_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__0);
v___x_2090_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2090_, 0, v___x_2089_);
lean_ctor_set(v___x_2090_, 1, v___x_2088_);
lean_ctor_set(v___x_2090_, 2, v___x_2086_);
lean_ctor_set(v___x_2090_, 3, v___x_2086_);
lean_ctor_set_usize(v___x_2090_, 4, v___x_2085_);
return v___x_2090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14(lean_object* v_t_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_){
_start:
{
lean_object* v___x_2099_; lean_object* v_infoState_2100_; uint8_t v_enabled_2101_; 
v___x_2099_ = lean_st_ref_get(v___y_2097_);
v_infoState_2100_ = lean_ctor_get(v___x_2099_, 7);
lean_inc_ref(v_infoState_2100_);
lean_dec(v___x_2099_);
v_enabled_2101_ = lean_ctor_get_uint8(v_infoState_2100_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2100_);
if (v_enabled_2101_ == 0)
{
lean_object* v___x_2102_; lean_object* v___x_2103_; 
lean_dec_ref(v_t_2091_);
v___x_2102_ = lean_box(0);
v___x_2103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2102_);
return v___x_2103_;
}
else
{
lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; 
v___x_2104_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___closed__1);
v___x_2105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2105_, 0, v_t_2091_);
lean_ctor_set(v___x_2105_, 1, v___x_2104_);
v___x_2106_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg(v___x_2105_, v___y_2097_);
return v___x_2106_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14___boxed(lean_object* v_t_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_){
_start:
{
lean_object* v_res_2115_; 
v_res_2115_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14(v_t_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2112_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
return v_res_2115_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__15(lean_object* v_a_2116_, lean_object* v_a_2117_){
_start:
{
if (lean_obj_tag(v_a_2116_) == 0)
{
lean_object* v___x_2118_; 
v___x_2118_ = l_List_reverse___redArg(v_a_2117_);
return v___x_2118_;
}
else
{
lean_object* v_head_2119_; lean_object* v_tail_2120_; lean_object* v___x_2122_; uint8_t v_isShared_2123_; uint8_t v_isSharedCheck_2129_; 
v_head_2119_ = lean_ctor_get(v_a_2116_, 0);
v_tail_2120_ = lean_ctor_get(v_a_2116_, 1);
v_isSharedCheck_2129_ = !lean_is_exclusive(v_a_2116_);
if (v_isSharedCheck_2129_ == 0)
{
v___x_2122_ = v_a_2116_;
v_isShared_2123_ = v_isSharedCheck_2129_;
goto v_resetjp_2121_;
}
else
{
lean_inc(v_tail_2120_);
lean_inc(v_head_2119_);
lean_dec(v_a_2116_);
v___x_2122_ = lean_box(0);
v_isShared_2123_ = v_isSharedCheck_2129_;
goto v_resetjp_2121_;
}
v_resetjp_2121_:
{
lean_object* v___x_2124_; lean_object* v___x_2126_; 
v___x_2124_ = l_Lean_mkLevelParam(v_head_2119_);
if (v_isShared_2123_ == 0)
{
lean_ctor_set(v___x_2122_, 1, v_a_2117_);
lean_ctor_set(v___x_2122_, 0, v___x_2124_);
v___x_2126_ = v___x_2122_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v___x_2124_);
lean_ctor_set(v_reuseFailAlloc_2128_, 1, v_a_2117_);
v___x_2126_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
v_a_2116_ = v_tail_2120_;
v_a_2117_ = v___x_2126_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__0(void){
_start:
{
lean_object* v___x_2130_; 
v___x_2130_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2130_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__1(void){
_start:
{
lean_object* v___x_2131_; lean_object* v___x_2132_; 
v___x_2131_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__0);
v___x_2132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2131_);
return v___x_2132_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__2(void){
_start:
{
lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; 
v___x_2133_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__1);
v___x_2134_ = lean_unsigned_to_nat(0u);
v___x_2135_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2135_, 0, v___x_2134_);
lean_ctor_set(v___x_2135_, 1, v___x_2134_);
lean_ctor_set(v___x_2135_, 2, v___x_2134_);
lean_ctor_set(v___x_2135_, 3, v___x_2133_);
lean_ctor_set(v___x_2135_, 4, v___x_2133_);
lean_ctor_set(v___x_2135_, 5, v___x_2133_);
lean_ctor_set(v___x_2135_, 6, v___x_2133_);
lean_ctor_set(v___x_2135_, 7, v___x_2133_);
lean_ctor_set(v___x_2135_, 8, v___x_2133_);
return v___x_2135_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__3(void){
_start:
{
lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2136_ = lean_box(1);
v___x_2137_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__3);
v___x_2138_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__1);
v___x_2139_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2138_);
lean_ctor_set(v___x_2139_, 1, v___x_2137_);
lean_ctor_set(v___x_2139_, 2, v___x_2136_);
return v___x_2139_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__5(void){
_start:
{
lean_object* v___x_2141_; lean_object* v___x_2142_; 
v___x_2141_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__4));
v___x_2142_ = l_Lean_stringToMessageData(v___x_2141_);
return v___x_2142_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__7(void){
_start:
{
lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2144_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__6));
v___x_2145_ = l_Lean_stringToMessageData(v___x_2144_);
return v___x_2145_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__9(void){
_start:
{
lean_object* v___x_2147_; lean_object* v___x_2148_; 
v___x_2147_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__8));
v___x_2148_ = l_Lean_stringToMessageData(v___x_2147_);
return v___x_2148_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__11(void){
_start:
{
lean_object* v___x_2150_; lean_object* v___x_2151_; 
v___x_2150_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__10));
v___x_2151_ = l_Lean_stringToMessageData(v___x_2150_);
return v___x_2151_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__13(void){
_start:
{
lean_object* v___x_2153_; lean_object* v___x_2154_; 
v___x_2153_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__12));
v___x_2154_ = l_Lean_stringToMessageData(v___x_2153_);
return v___x_2154_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__15(void){
_start:
{
lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2156_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__14));
v___x_2157_ = l_Lean_stringToMessageData(v___x_2156_);
return v___x_2157_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__17(void){
_start:
{
lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2159_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__16));
v___x_2160_ = l_Lean_stringToMessageData(v___x_2159_);
return v___x_2160_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg(lean_object* v_msg_2161_, lean_object* v_declHint_2162_, lean_object* v___y_2163_){
_start:
{
lean_object* v___x_2165_; lean_object* v_env_2166_; uint8_t v___x_2167_; 
v___x_2165_ = lean_st_ref_get(v___y_2163_);
v_env_2166_ = lean_ctor_get(v___x_2165_, 0);
lean_inc_ref(v_env_2166_);
lean_dec(v___x_2165_);
v___x_2167_ = l_Lean_Name_isAnonymous(v_declHint_2162_);
if (v___x_2167_ == 0)
{
uint8_t v_isExporting_2168_; 
v_isExporting_2168_ = lean_ctor_get_uint8(v_env_2166_, sizeof(void*)*8);
if (v_isExporting_2168_ == 0)
{
lean_object* v___x_2169_; 
lean_dec_ref(v_env_2166_);
lean_dec(v_declHint_2162_);
v___x_2169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2169_, 0, v_msg_2161_);
return v___x_2169_;
}
else
{
lean_object* v___x_2170_; uint8_t v___x_2171_; 
lean_inc_ref(v_env_2166_);
v___x_2170_ = l_Lean_Environment_setExporting(v_env_2166_, v___x_2167_);
lean_inc(v_declHint_2162_);
lean_inc_ref(v___x_2170_);
v___x_2171_ = l_Lean_Environment_contains(v___x_2170_, v_declHint_2162_, v_isExporting_2168_);
if (v___x_2171_ == 0)
{
lean_object* v___x_2172_; 
lean_dec_ref(v___x_2170_);
lean_dec_ref(v_env_2166_);
lean_dec(v_declHint_2162_);
v___x_2172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2172_, 0, v_msg_2161_);
return v___x_2172_;
}
else
{
lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v_c_2178_; lean_object* v___x_2179_; 
v___x_2173_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__2);
v___x_2174_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__3);
v___x_2175_ = l_Lean_Options_empty;
v___x_2176_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2176_, 0, v___x_2170_);
lean_ctor_set(v___x_2176_, 1, v___x_2173_);
lean_ctor_set(v___x_2176_, 2, v___x_2174_);
lean_ctor_set(v___x_2176_, 3, v___x_2175_);
lean_inc(v_declHint_2162_);
v___x_2177_ = l_Lean_MessageData_ofConstName(v_declHint_2162_, v___x_2167_);
v_c_2178_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2178_, 0, v___x_2176_);
lean_ctor_set(v_c_2178_, 1, v___x_2177_);
v___x_2179_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2166_, v_declHint_2162_);
if (lean_obj_tag(v___x_2179_) == 0)
{
lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; 
lean_dec_ref(v_env_2166_);
lean_dec(v_declHint_2162_);
v___x_2180_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__5);
v___x_2181_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2181_, 0, v___x_2180_);
lean_ctor_set(v___x_2181_, 1, v_c_2178_);
v___x_2182_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__7);
v___x_2183_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2183_, 0, v___x_2181_);
lean_ctor_set(v___x_2183_, 1, v___x_2182_);
v___x_2184_ = l_Lean_MessageData_note(v___x_2183_);
v___x_2185_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2185_, 0, v_msg_2161_);
lean_ctor_set(v___x_2185_, 1, v___x_2184_);
v___x_2186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2186_, 0, v___x_2185_);
return v___x_2186_;
}
else
{
lean_object* v_val_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2222_; 
v_val_2187_ = lean_ctor_get(v___x_2179_, 0);
v_isSharedCheck_2222_ = !lean_is_exclusive(v___x_2179_);
if (v_isSharedCheck_2222_ == 0)
{
v___x_2189_ = v___x_2179_;
v_isShared_2190_ = v_isSharedCheck_2222_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_val_2187_);
lean_dec(v___x_2179_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2222_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v_mod_2194_; uint8_t v___x_2195_; 
v___x_2191_ = lean_box(0);
v___x_2192_ = l_Lean_Environment_header(v_env_2166_);
lean_dec_ref(v_env_2166_);
v___x_2193_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2192_);
v_mod_2194_ = lean_array_get(v___x_2191_, v___x_2193_, v_val_2187_);
lean_dec(v_val_2187_);
lean_dec_ref(v___x_2193_);
v___x_2195_ = l_Lean_isPrivateName(v_declHint_2162_);
lean_dec(v_declHint_2162_);
if (v___x_2195_ == 0)
{
lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2207_; 
v___x_2196_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__9);
v___x_2197_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2196_);
lean_ctor_set(v___x_2197_, 1, v_c_2178_);
v___x_2198_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__11);
v___x_2199_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2199_, 0, v___x_2197_);
lean_ctor_set(v___x_2199_, 1, v___x_2198_);
v___x_2200_ = l_Lean_MessageData_ofName(v_mod_2194_);
v___x_2201_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2201_, 0, v___x_2199_);
lean_ctor_set(v___x_2201_, 1, v___x_2200_);
v___x_2202_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__13);
v___x_2203_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2201_);
lean_ctor_set(v___x_2203_, 1, v___x_2202_);
v___x_2204_ = l_Lean_MessageData_note(v___x_2203_);
v___x_2205_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2205_, 0, v_msg_2161_);
lean_ctor_set(v___x_2205_, 1, v___x_2204_);
if (v_isShared_2190_ == 0)
{
lean_ctor_set_tag(v___x_2189_, 0);
lean_ctor_set(v___x_2189_, 0, v___x_2205_);
v___x_2207_ = v___x_2189_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v___x_2205_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
else
{
lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2220_; 
v___x_2209_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__5);
v___x_2210_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2210_, 0, v___x_2209_);
lean_ctor_set(v___x_2210_, 1, v_c_2178_);
v___x_2211_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__15);
v___x_2212_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2210_);
lean_ctor_set(v___x_2212_, 1, v___x_2211_);
v___x_2213_ = l_Lean_MessageData_ofName(v_mod_2194_);
v___x_2214_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2212_);
lean_ctor_set(v___x_2214_, 1, v___x_2213_);
v___x_2215_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___closed__17);
v___x_2216_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2214_);
lean_ctor_set(v___x_2216_, 1, v___x_2215_);
v___x_2217_ = l_Lean_MessageData_note(v___x_2216_);
v___x_2218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2218_, 0, v_msg_2161_);
lean_ctor_set(v___x_2218_, 1, v___x_2217_);
if (v_isShared_2190_ == 0)
{
lean_ctor_set_tag(v___x_2189_, 0);
lean_ctor_set(v___x_2189_, 0, v___x_2218_);
v___x_2220_ = v___x_2189_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v___x_2218_);
v___x_2220_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
return v___x_2220_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2223_; 
lean_dec_ref(v_env_2166_);
lean_dec(v_declHint_2162_);
v___x_2223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2223_, 0, v_msg_2161_);
return v___x_2223_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg___boxed(lean_object* v_msg_2224_, lean_object* v_declHint_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_){
_start:
{
lean_object* v_res_2228_; 
v_res_2228_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg(v_msg_2224_, v_declHint_2225_, v___y_2226_);
lean_dec(v___y_2226_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23(lean_object* v_msg_2229_, lean_object* v_declHint_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_){
_start:
{
lean_object* v___x_2238_; lean_object* v_a_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2248_; 
v___x_2238_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg(v_msg_2229_, v_declHint_2230_, v___y_2236_);
v_a_2239_ = lean_ctor_get(v___x_2238_, 0);
v_isSharedCheck_2248_ = !lean_is_exclusive(v___x_2238_);
if (v_isSharedCheck_2248_ == 0)
{
v___x_2241_ = v___x_2238_;
v_isShared_2242_ = v_isSharedCheck_2248_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_a_2239_);
lean_dec(v___x_2238_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2248_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2246_; 
v___x_2243_ = l_Lean_unknownIdentifierMessageTag;
v___x_2244_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2243_);
lean_ctor_set(v___x_2244_, 1, v_a_2239_);
if (v_isShared_2242_ == 0)
{
lean_ctor_set(v___x_2241_, 0, v___x_2244_);
v___x_2246_ = v___x_2241_;
goto v_reusejp_2245_;
}
else
{
lean_object* v_reuseFailAlloc_2247_; 
v_reuseFailAlloc_2247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2247_, 0, v___x_2244_);
v___x_2246_ = v_reuseFailAlloc_2247_;
goto v_reusejp_2245_;
}
v_reusejp_2245_:
{
return v___x_2246_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23___boxed(lean_object* v_msg_2249_, lean_object* v_declHint_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_){
_start:
{
lean_object* v_res_2258_; 
v_res_2258_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23(v_msg_2249_, v_declHint_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_);
lean_dec(v___y_2256_);
lean_dec_ref(v___y_2255_);
lean_dec(v___y_2254_);
lean_dec_ref(v___y_2253_);
lean_dec(v___y_2252_);
lean_dec_ref(v___y_2251_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24___redArg(lean_object* v_ref_2259_, lean_object* v_msg_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_){
_start:
{
lean_object* v_fileName_2268_; lean_object* v_fileMap_2269_; lean_object* v_options_2270_; lean_object* v_currRecDepth_2271_; lean_object* v_maxRecDepth_2272_; lean_object* v_ref_2273_; lean_object* v_currNamespace_2274_; lean_object* v_openDecls_2275_; lean_object* v_initHeartbeats_2276_; lean_object* v_maxHeartbeats_2277_; lean_object* v_quotContext_2278_; lean_object* v_currMacroScope_2279_; uint8_t v_diag_2280_; lean_object* v_cancelTk_x3f_2281_; uint8_t v_suppressElabErrors_2282_; lean_object* v_inheritedTraceOptions_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2292_; 
v_fileName_2268_ = lean_ctor_get(v___y_2265_, 0);
v_fileMap_2269_ = lean_ctor_get(v___y_2265_, 1);
v_options_2270_ = lean_ctor_get(v___y_2265_, 2);
v_currRecDepth_2271_ = lean_ctor_get(v___y_2265_, 3);
v_maxRecDepth_2272_ = lean_ctor_get(v___y_2265_, 4);
v_ref_2273_ = lean_ctor_get(v___y_2265_, 5);
v_currNamespace_2274_ = lean_ctor_get(v___y_2265_, 6);
v_openDecls_2275_ = lean_ctor_get(v___y_2265_, 7);
v_initHeartbeats_2276_ = lean_ctor_get(v___y_2265_, 8);
v_maxHeartbeats_2277_ = lean_ctor_get(v___y_2265_, 9);
v_quotContext_2278_ = lean_ctor_get(v___y_2265_, 10);
v_currMacroScope_2279_ = lean_ctor_get(v___y_2265_, 11);
v_diag_2280_ = lean_ctor_get_uint8(v___y_2265_, sizeof(void*)*14);
v_cancelTk_x3f_2281_ = lean_ctor_get(v___y_2265_, 12);
v_suppressElabErrors_2282_ = lean_ctor_get_uint8(v___y_2265_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_2283_ = lean_ctor_get(v___y_2265_, 13);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___y_2265_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2285_ = v___y_2265_;
v_isShared_2286_ = v_isSharedCheck_2292_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_inheritedTraceOptions_2283_);
lean_inc(v_cancelTk_x3f_2281_);
lean_inc(v_currMacroScope_2279_);
lean_inc(v_quotContext_2278_);
lean_inc(v_maxHeartbeats_2277_);
lean_inc(v_initHeartbeats_2276_);
lean_inc(v_openDecls_2275_);
lean_inc(v_currNamespace_2274_);
lean_inc(v_ref_2273_);
lean_inc(v_maxRecDepth_2272_);
lean_inc(v_currRecDepth_2271_);
lean_inc(v_options_2270_);
lean_inc(v_fileMap_2269_);
lean_inc(v_fileName_2268_);
lean_dec(v___y_2265_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2292_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v_ref_2287_; lean_object* v___x_2289_; 
v_ref_2287_ = l_Lean_replaceRef(v_ref_2259_, v_ref_2273_);
lean_dec(v_ref_2273_);
if (v_isShared_2286_ == 0)
{
lean_ctor_set(v___x_2285_, 5, v_ref_2287_);
v___x_2289_ = v___x_2285_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2291_; 
v_reuseFailAlloc_2291_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_2291_, 0, v_fileName_2268_);
lean_ctor_set(v_reuseFailAlloc_2291_, 1, v_fileMap_2269_);
lean_ctor_set(v_reuseFailAlloc_2291_, 2, v_options_2270_);
lean_ctor_set(v_reuseFailAlloc_2291_, 3, v_currRecDepth_2271_);
lean_ctor_set(v_reuseFailAlloc_2291_, 4, v_maxRecDepth_2272_);
lean_ctor_set(v_reuseFailAlloc_2291_, 5, v_ref_2287_);
lean_ctor_set(v_reuseFailAlloc_2291_, 6, v_currNamespace_2274_);
lean_ctor_set(v_reuseFailAlloc_2291_, 7, v_openDecls_2275_);
lean_ctor_set(v_reuseFailAlloc_2291_, 8, v_initHeartbeats_2276_);
lean_ctor_set(v_reuseFailAlloc_2291_, 9, v_maxHeartbeats_2277_);
lean_ctor_set(v_reuseFailAlloc_2291_, 10, v_quotContext_2278_);
lean_ctor_set(v_reuseFailAlloc_2291_, 11, v_currMacroScope_2279_);
lean_ctor_set(v_reuseFailAlloc_2291_, 12, v_cancelTk_x3f_2281_);
lean_ctor_set(v_reuseFailAlloc_2291_, 13, v_inheritedTraceOptions_2283_);
lean_ctor_set_uint8(v_reuseFailAlloc_2291_, sizeof(void*)*14, v_diag_2280_);
lean_ctor_set_uint8(v_reuseFailAlloc_2291_, sizeof(void*)*14 + 1, v_suppressElabErrors_2282_);
v___x_2289_ = v_reuseFailAlloc_2291_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
lean_object* v___x_2290_; 
v___x_2290_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v_msg_2260_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_, v___x_2289_, v___y_2266_);
lean_dec_ref(v___x_2289_);
return v___x_2290_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24___redArg___boxed(lean_object* v_ref_2293_, lean_object* v_msg_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_){
_start:
{
lean_object* v_res_2302_; 
v_res_2302_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24___redArg(v_ref_2293_, v_msg_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_);
lean_dec(v___y_2300_);
lean_dec(v___y_2298_);
lean_dec_ref(v___y_2297_);
lean_dec(v___y_2296_);
lean_dec(v_ref_2293_);
return v_res_2302_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22___redArg(lean_object* v_ref_2303_, lean_object* v_msg_2304_, lean_object* v_declHint_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_){
_start:
{
lean_object* v___x_2313_; lean_object* v_a_2314_; lean_object* v___x_2315_; 
v___x_2313_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23(v_msg_2304_, v_declHint_2305_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_);
v_a_2314_ = lean_ctor_get(v___x_2313_, 0);
lean_inc(v_a_2314_);
lean_dec_ref(v___x_2313_);
v___x_2315_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24___redArg(v_ref_2303_, v_a_2314_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_);
return v___x_2315_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22___redArg___boxed(lean_object* v_ref_2316_, lean_object* v_msg_2317_, lean_object* v_declHint_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_){
_start:
{
lean_object* v_res_2326_; 
v_res_2326_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22___redArg(v_ref_2316_, v_msg_2317_, v_declHint_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_, v___y_2324_);
lean_dec(v___y_2324_);
lean_dec(v___y_2322_);
lean_dec_ref(v___y_2321_);
lean_dec(v___y_2320_);
lean_dec(v_ref_2316_);
return v_res_2326_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__1(void){
_start:
{
lean_object* v___x_2328_; lean_object* v___x_2329_; 
v___x_2328_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__0));
v___x_2329_ = l_Lean_stringToMessageData(v___x_2328_);
return v___x_2329_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg(lean_object* v_ref_2330_, lean_object* v_constName_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_){
_start:
{
lean_object* v___x_2339_; uint8_t v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; 
v___x_2339_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___closed__1);
v___x_2340_ = 0;
lean_inc(v_constName_2331_);
v___x_2341_ = l_Lean_MessageData_ofConstName(v_constName_2331_, v___x_2340_);
v___x_2342_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2342_, 0, v___x_2339_);
lean_ctor_set(v___x_2342_, 1, v___x_2341_);
v___x_2343_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_2344_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2344_, 0, v___x_2342_);
lean_ctor_set(v___x_2344_, 1, v___x_2343_);
v___x_2345_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22___redArg(v_ref_2330_, v___x_2344_, v_constName_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_);
return v___x_2345_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg___boxed(lean_object* v_ref_2346_, lean_object* v_constName_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_){
_start:
{
lean_object* v_res_2355_; 
v_res_2355_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg(v_ref_2346_, v_constName_2347_, v___y_2348_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_);
lean_dec(v___y_2353_);
lean_dec(v___y_2351_);
lean_dec_ref(v___y_2350_);
lean_dec(v___y_2349_);
lean_dec(v_ref_2346_);
return v_res_2355_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15___redArg(lean_object* v_constName_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_){
_start:
{
lean_object* v_ref_2364_; lean_object* v___x_2365_; 
v_ref_2364_ = lean_ctor_get(v___y_2361_, 5);
lean_inc(v_ref_2364_);
v___x_2365_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg(v_ref_2364_, v_constName_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_, v___y_2362_);
lean_dec(v_ref_2364_);
return v___x_2365_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15___redArg___boxed(lean_object* v_constName_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_){
_start:
{
lean_object* v_res_2374_; 
v_res_2374_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15___redArg(v_constName_2366_, v___y_2367_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_);
lean_dec(v___y_2372_);
lean_dec(v___y_2370_);
lean_dec_ref(v___y_2369_);
lean_dec(v___y_2368_);
return v_res_2374_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14(lean_object* v_constName_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_){
_start:
{
lean_object* v___x_2383_; lean_object* v_env_2384_; uint8_t v___x_2385_; lean_object* v___x_2386_; 
v___x_2383_ = lean_st_ref_get(v___y_2381_);
v_env_2384_ = lean_ctor_get(v___x_2383_, 0);
lean_inc_ref(v_env_2384_);
lean_dec(v___x_2383_);
v___x_2385_ = 0;
lean_inc(v_constName_2375_);
v___x_2386_ = l_Lean_Environment_findConstVal_x3f(v_env_2384_, v_constName_2375_, v___x_2385_);
if (lean_obj_tag(v___x_2386_) == 0)
{
lean_object* v___x_2387_; 
v___x_2387_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15___redArg(v_constName_2375_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_);
return v___x_2387_;
}
else
{
lean_object* v_val_2388_; lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2395_; 
lean_dec_ref(v___y_2380_);
lean_dec_ref(v___y_2376_);
lean_dec(v_constName_2375_);
v_val_2388_ = lean_ctor_get(v___x_2386_, 0);
v_isSharedCheck_2395_ = !lean_is_exclusive(v___x_2386_);
if (v_isSharedCheck_2395_ == 0)
{
v___x_2390_ = v___x_2386_;
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
else
{
lean_inc(v_val_2388_);
lean_dec(v___x_2386_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2395_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2393_; 
if (v_isShared_2391_ == 0)
{
lean_ctor_set_tag(v___x_2390_, 0);
v___x_2393_ = v___x_2390_;
goto v_reusejp_2392_;
}
else
{
lean_object* v_reuseFailAlloc_2394_; 
v_reuseFailAlloc_2394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2394_, 0, v_val_2388_);
v___x_2393_ = v_reuseFailAlloc_2394_;
goto v_reusejp_2392_;
}
v_reusejp_2392_:
{
return v___x_2393_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14___boxed(lean_object* v_constName_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_){
_start:
{
lean_object* v_res_2404_; 
v_res_2404_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14(v_constName_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_);
lean_dec(v___y_2402_);
lean_dec(v___y_2400_);
lean_dec_ref(v___y_2399_);
lean_dec(v___y_2398_);
return v_res_2404_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13(lean_object* v_constName_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_){
_start:
{
lean_object* v___x_2413_; 
lean_inc(v_constName_2405_);
v___x_2413_ = l_Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14(v_constName_2405_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_);
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2425_; 
v_a_2414_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2416_ = v___x_2413_;
v_isShared_2417_ = v_isSharedCheck_2425_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_dec(v___x_2413_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2425_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v_levelParams_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2423_; 
v_levelParams_2418_ = lean_ctor_get(v_a_2414_, 1);
lean_inc(v_levelParams_2418_);
lean_dec(v_a_2414_);
v___x_2419_ = lean_box(0);
v___x_2420_ = l_List_mapTR_loop___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__15(v_levelParams_2418_, v___x_2419_);
v___x_2421_ = l_Lean_mkConst(v_constName_2405_, v___x_2420_);
if (v_isShared_2417_ == 0)
{
lean_ctor_set(v___x_2416_, 0, v___x_2421_);
v___x_2423_ = v___x_2416_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v___x_2421_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
return v___x_2423_;
}
}
}
else
{
lean_object* v_a_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2433_; 
lean_dec(v_constName_2405_);
v_a_2426_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2428_ = v___x_2413_;
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_a_2426_);
lean_dec(v___x_2413_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2431_; 
if (v_isShared_2429_ == 0)
{
v___x_2431_ = v___x_2428_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v_a_2426_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13___boxed(lean_object* v_constName_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13(v_constName_2434_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_);
lean_dec(v___y_2440_);
lean_dec(v___y_2438_);
lean_dec_ref(v___y_2437_);
lean_dec(v___y_2436_);
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__0(uint8_t v___x_2443_, lean_object* v_declName_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_){
_start:
{
lean_object* v_ref_2452_; lean_object* v___x_2453_; 
v_ref_2452_ = lean_ctor_get(v___y_2449_, 5);
lean_inc_ref(v___y_2449_);
lean_inc_ref(v___y_2445_);
v___x_2453_ = l_Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13(v_declName_2444_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_);
if (lean_obj_tag(v___x_2453_) == 0)
{
lean_object* v_a_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; 
v_a_2454_ = lean_ctor_get(v___x_2453_, 0);
lean_inc(v_a_2454_);
lean_dec_ref(v___x_2453_);
v___x_2455_ = lean_box(0);
lean_inc(v_ref_2452_);
v___x_2456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2456_, 0, v___x_2455_);
lean_ctor_set(v___x_2456_, 1, v_ref_2452_);
v___x_2457_ = lean_unsigned_to_nat(32u);
v___x_2458_ = lean_mk_empty_array_with_capacity(v___x_2457_);
lean_dec_ref(v___x_2458_);
v___x_2459_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__0___closed__4);
v___x_2460_ = lean_box(0);
v___x_2461_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_2461_, 0, v___x_2456_);
lean_ctor_set(v___x_2461_, 1, v___x_2459_);
lean_ctor_set(v___x_2461_, 2, v___x_2460_);
lean_ctor_set(v___x_2461_, 3, v_a_2454_);
lean_ctor_set_uint8(v___x_2461_, sizeof(void*)*4, v___x_2443_);
lean_ctor_set_uint8(v___x_2461_, sizeof(void*)*4 + 1, v___x_2443_);
v___x_2462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2462_, 0, v___x_2461_);
v___x_2463_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14(v___x_2462_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_);
lean_dec_ref(v___y_2449_);
lean_dec_ref(v___y_2445_);
return v___x_2463_;
}
else
{
lean_object* v_a_2464_; lean_object* v___x_2466_; uint8_t v_isShared_2467_; uint8_t v_isSharedCheck_2471_; 
lean_dec_ref(v___y_2449_);
lean_dec_ref(v___y_2445_);
v_a_2464_ = lean_ctor_get(v___x_2453_, 0);
v_isSharedCheck_2471_ = !lean_is_exclusive(v___x_2453_);
if (v_isSharedCheck_2471_ == 0)
{
v___x_2466_ = v___x_2453_;
v_isShared_2467_ = v_isSharedCheck_2471_;
goto v_resetjp_2465_;
}
else
{
lean_inc(v_a_2464_);
lean_dec(v___x_2453_);
v___x_2466_ = lean_box(0);
v_isShared_2467_ = v_isSharedCheck_2471_;
goto v_resetjp_2465_;
}
v_resetjp_2465_:
{
lean_object* v___x_2469_; 
if (v_isShared_2467_ == 0)
{
v___x_2469_ = v___x_2466_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v_a_2464_);
v___x_2469_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
return v___x_2469_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__0___boxed(lean_object* v___x_2472_, lean_object* v_declName_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_){
_start:
{
uint8_t v___x_18773__boxed_2481_; lean_object* v_res_2482_; 
v___x_18773__boxed_2481_ = lean_unbox(v___x_2472_);
v_res_2482_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__0(v___x_18773__boxed_2481_, v_declName_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_);
lean_dec(v___y_2479_);
lean_dec(v___y_2477_);
lean_dec_ref(v___y_2476_);
lean_dec(v___y_2475_);
return v_res_2482_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__4(lean_object* v___f_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_){
_start:
{
lean_object* v___x_2491_; lean_object* v_env_2492_; lean_object* v___x_2493_; 
v___x_2491_ = lean_st_ref_get(v___y_2489_);
v_env_2492_ = lean_ctor_get(v___x_2491_, 0);
lean_inc_ref(v_env_2492_);
lean_dec(v___x_2491_);
v___x_2493_ = lean_apply_8(v___f_2483_, v_env_2492_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_, v___y_2489_, lean_box(0));
return v___x_2493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__4___boxed(lean_object* v___f_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_){
_start:
{
lean_object* v_res_2502_; 
v_res_2502_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__4(v___f_2494_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_);
return v_res_2502_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0(void){
_start:
{
lean_object* v___x_2503_; 
v___x_2503_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2503_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1(void){
_start:
{
lean_object* v___x_2504_; lean_object* v___x_2505_; 
v___x_2504_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__0);
v___x_2505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2505_, 0, v___x_2504_);
return v___x_2505_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2(void){
_start:
{
lean_object* v___x_2506_; lean_object* v___x_2507_; 
v___x_2506_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1);
v___x_2507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2507_, 0, v___x_2506_);
lean_ctor_set(v___x_2507_, 1, v___x_2506_);
return v___x_2507_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__3(void){
_start:
{
lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2508_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__1);
v___x_2509_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2509_, 0, v___x_2508_);
lean_ctor_set(v___x_2509_, 1, v___x_2508_);
lean_ctor_set(v___x_2509_, 2, v___x_2508_);
lean_ctor_set(v___x_2509_, 3, v___x_2508_);
lean_ctor_set(v___x_2509_, 4, v___x_2508_);
lean_ctor_set(v___x_2509_, 5, v___x_2508_);
return v___x_2509_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(lean_object* v_env_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_){
_start:
{
lean_object* v___x_2514_; lean_object* v_nextMacroScope_2515_; lean_object* v_ngen_2516_; lean_object* v_auxDeclNGen_2517_; lean_object* v_traceState_2518_; lean_object* v_messages_2519_; lean_object* v_infoState_2520_; lean_object* v_snapshotTasks_2521_; lean_object* v___x_2523_; uint8_t v_isShared_2524_; uint8_t v_isSharedCheck_2547_; 
v___x_2514_ = lean_st_ref_take(v___y_2512_);
v_nextMacroScope_2515_ = lean_ctor_get(v___x_2514_, 1);
v_ngen_2516_ = lean_ctor_get(v___x_2514_, 2);
v_auxDeclNGen_2517_ = lean_ctor_get(v___x_2514_, 3);
v_traceState_2518_ = lean_ctor_get(v___x_2514_, 4);
v_messages_2519_ = lean_ctor_get(v___x_2514_, 6);
v_infoState_2520_ = lean_ctor_get(v___x_2514_, 7);
v_snapshotTasks_2521_ = lean_ctor_get(v___x_2514_, 8);
v_isSharedCheck_2547_ = !lean_is_exclusive(v___x_2514_);
if (v_isSharedCheck_2547_ == 0)
{
lean_object* v_unused_2548_; lean_object* v_unused_2549_; 
v_unused_2548_ = lean_ctor_get(v___x_2514_, 5);
lean_dec(v_unused_2548_);
v_unused_2549_ = lean_ctor_get(v___x_2514_, 0);
lean_dec(v_unused_2549_);
v___x_2523_ = v___x_2514_;
v_isShared_2524_ = v_isSharedCheck_2547_;
goto v_resetjp_2522_;
}
else
{
lean_inc(v_snapshotTasks_2521_);
lean_inc(v_infoState_2520_);
lean_inc(v_messages_2519_);
lean_inc(v_traceState_2518_);
lean_inc(v_auxDeclNGen_2517_);
lean_inc(v_ngen_2516_);
lean_inc(v_nextMacroScope_2515_);
lean_dec(v___x_2514_);
v___x_2523_ = lean_box(0);
v_isShared_2524_ = v_isSharedCheck_2547_;
goto v_resetjp_2522_;
}
v_resetjp_2522_:
{
lean_object* v___x_2525_; lean_object* v___x_2527_; 
v___x_2525_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2);
if (v_isShared_2524_ == 0)
{
lean_ctor_set(v___x_2523_, 5, v___x_2525_);
lean_ctor_set(v___x_2523_, 0, v_env_2510_);
v___x_2527_ = v___x_2523_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v_env_2510_);
lean_ctor_set(v_reuseFailAlloc_2546_, 1, v_nextMacroScope_2515_);
lean_ctor_set(v_reuseFailAlloc_2546_, 2, v_ngen_2516_);
lean_ctor_set(v_reuseFailAlloc_2546_, 3, v_auxDeclNGen_2517_);
lean_ctor_set(v_reuseFailAlloc_2546_, 4, v_traceState_2518_);
lean_ctor_set(v_reuseFailAlloc_2546_, 5, v___x_2525_);
lean_ctor_set(v_reuseFailAlloc_2546_, 6, v_messages_2519_);
lean_ctor_set(v_reuseFailAlloc_2546_, 7, v_infoState_2520_);
lean_ctor_set(v_reuseFailAlloc_2546_, 8, v_snapshotTasks_2521_);
v___x_2527_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v_mctx_2530_; lean_object* v_zetaDeltaFVarIds_2531_; lean_object* v_postponed_2532_; lean_object* v_diag_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2544_; 
v___x_2528_ = lean_st_ref_set(v___y_2512_, v___x_2527_);
v___x_2529_ = lean_st_ref_take(v___y_2511_);
v_mctx_2530_ = lean_ctor_get(v___x_2529_, 0);
v_zetaDeltaFVarIds_2531_ = lean_ctor_get(v___x_2529_, 2);
v_postponed_2532_ = lean_ctor_get(v___x_2529_, 3);
v_diag_2533_ = lean_ctor_get(v___x_2529_, 4);
v_isSharedCheck_2544_ = !lean_is_exclusive(v___x_2529_);
if (v_isSharedCheck_2544_ == 0)
{
lean_object* v_unused_2545_; 
v_unused_2545_ = lean_ctor_get(v___x_2529_, 1);
lean_dec(v_unused_2545_);
v___x_2535_ = v___x_2529_;
v_isShared_2536_ = v_isSharedCheck_2544_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_diag_2533_);
lean_inc(v_postponed_2532_);
lean_inc(v_zetaDeltaFVarIds_2531_);
lean_inc(v_mctx_2530_);
lean_dec(v___x_2529_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2544_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2537_; lean_object* v___x_2539_; 
v___x_2537_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__3, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__3);
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 1, v___x_2537_);
v___x_2539_ = v___x_2535_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v_mctx_2530_);
lean_ctor_set(v_reuseFailAlloc_2543_, 1, v___x_2537_);
lean_ctor_set(v_reuseFailAlloc_2543_, 2, v_zetaDeltaFVarIds_2531_);
lean_ctor_set(v_reuseFailAlloc_2543_, 3, v_postponed_2532_);
lean_ctor_set(v_reuseFailAlloc_2543_, 4, v_diag_2533_);
v___x_2539_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___x_2540_ = lean_st_ref_set(v___y_2511_, v___x_2539_);
v___x_2541_ = lean_box(0);
v___x_2542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2542_, 0, v___x_2541_);
return v___x_2542_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___boxed(lean_object* v_env_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_){
_start:
{
lean_object* v_res_2554_; 
v_res_2554_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(v_env_2550_, v___y_2551_, v___y_2552_);
lean_dec(v___y_2552_);
lean_dec(v___y_2551_);
return v_res_2554_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg(lean_object* v_env_2555_, lean_object* v_x_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_){
_start:
{
lean_object* v___x_2564_; lean_object* v_env_2565_; lean_object* v_a_2567_; lean_object* v___x_2577_; lean_object* v___x_2578_; 
v___x_2564_ = lean_st_ref_get(v___y_2562_);
v_env_2565_ = lean_ctor_get(v___x_2564_, 0);
lean_inc_ref(v_env_2565_);
lean_dec(v___x_2564_);
v___x_2577_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(v_env_2555_, v___y_2560_, v___y_2562_);
lean_dec_ref(v___x_2577_);
lean_inc(v___y_2562_);
lean_inc(v___y_2560_);
v___x_2578_ = lean_apply_7(v_x_2556_, v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, lean_box(0));
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_object* v_a_2579_; lean_object* v___x_2580_; lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2587_; 
v_a_2579_ = lean_ctor_get(v___x_2578_, 0);
lean_inc(v_a_2579_);
lean_dec_ref(v___x_2578_);
v___x_2580_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(v_env_2565_, v___y_2560_, v___y_2562_);
lean_dec(v___y_2562_);
lean_dec(v___y_2560_);
v_isSharedCheck_2587_ = !lean_is_exclusive(v___x_2580_);
if (v_isSharedCheck_2587_ == 0)
{
lean_object* v_unused_2588_; 
v_unused_2588_ = lean_ctor_get(v___x_2580_, 0);
lean_dec(v_unused_2588_);
v___x_2582_ = v___x_2580_;
v_isShared_2583_ = v_isSharedCheck_2587_;
goto v_resetjp_2581_;
}
else
{
lean_dec(v___x_2580_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2587_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
lean_object* v___x_2585_; 
if (v_isShared_2583_ == 0)
{
lean_ctor_set(v___x_2582_, 0, v_a_2579_);
v___x_2585_ = v___x_2582_;
goto v_reusejp_2584_;
}
else
{
lean_object* v_reuseFailAlloc_2586_; 
v_reuseFailAlloc_2586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2586_, 0, v_a_2579_);
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
lean_object* v_a_2589_; 
v_a_2589_ = lean_ctor_get(v___x_2578_, 0);
lean_inc(v_a_2589_);
lean_dec_ref(v___x_2578_);
v_a_2567_ = v_a_2589_;
goto v___jp_2566_;
}
v___jp_2566_:
{
lean_object* v___x_2568_; lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2575_; 
v___x_2568_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(v_env_2565_, v___y_2560_, v___y_2562_);
lean_dec(v___y_2562_);
lean_dec(v___y_2560_);
v_isSharedCheck_2575_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2575_ == 0)
{
lean_object* v_unused_2576_; 
v_unused_2576_ = lean_ctor_get(v___x_2568_, 0);
lean_dec(v_unused_2576_);
v___x_2570_ = v___x_2568_;
v_isShared_2571_ = v_isSharedCheck_2575_;
goto v_resetjp_2569_;
}
else
{
lean_dec(v___x_2568_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2575_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
lean_object* v___x_2573_; 
if (v_isShared_2571_ == 0)
{
lean_ctor_set_tag(v___x_2570_, 1);
lean_ctor_set(v___x_2570_, 0, v_a_2567_);
v___x_2573_ = v___x_2570_;
goto v_reusejp_2572_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v_a_2567_);
v___x_2573_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2572_;
}
v_reusejp_2572_:
{
return v___x_2573_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg___boxed(lean_object* v_env_2590_, lean_object* v_x_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_){
_start:
{
lean_object* v_res_2599_; 
v_res_2599_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg(v_env_2590_, v_x_2591_, v___y_2592_, v___y_2593_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_);
return v_res_2599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__1(lean_object* v_declName_2600_, lean_object* v_env_2601_, lean_object* v_addInfo_2602_, lean_object* v_____r_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_){
_start:
{
lean_object* v___x_2611_; 
v___x_2611_ = lean_private_to_user_name(v_declName_2600_);
if (lean_obj_tag(v___x_2611_) == 0)
{
lean_object* v___x_2612_; lean_object* v___x_2613_; 
lean_dec(v___y_2609_);
lean_dec_ref(v___y_2608_);
lean_dec(v___y_2607_);
lean_dec_ref(v___y_2606_);
lean_dec(v___y_2605_);
lean_dec_ref(v___y_2604_);
lean_dec_ref(v_addInfo_2602_);
lean_dec_ref(v_env_2601_);
v___x_2612_ = lean_box(0);
v___x_2613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2613_, 0, v___x_2612_);
return v___x_2613_;
}
else
{
lean_object* v_val_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2631_; 
v_val_2614_ = lean_ctor_get(v___x_2611_, 0);
v_isSharedCheck_2631_ = !lean_is_exclusive(v___x_2611_);
if (v_isSharedCheck_2631_ == 0)
{
v___x_2616_ = v___x_2611_;
v_isShared_2617_ = v_isSharedCheck_2631_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_val_2614_);
lean_dec(v___x_2611_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2631_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
uint8_t v___x_2618_; uint8_t v___x_2619_; 
v___x_2618_ = 1;
lean_inc(v_val_2614_);
v___x_2619_ = l_Lean_Environment_contains(v_env_2601_, v_val_2614_, v___x_2618_);
if (v___x_2619_ == 0)
{
lean_object* v___x_2620_; lean_object* v___x_2622_; 
lean_dec(v_val_2614_);
lean_dec(v___y_2609_);
lean_dec_ref(v___y_2608_);
lean_dec(v___y_2607_);
lean_dec_ref(v___y_2606_);
lean_dec(v___y_2605_);
lean_dec_ref(v___y_2604_);
lean_dec_ref(v_addInfo_2602_);
v___x_2620_ = lean_box(0);
if (v_isShared_2617_ == 0)
{
lean_ctor_set_tag(v___x_2616_, 0);
lean_ctor_set(v___x_2616_, 0, v___x_2620_);
v___x_2622_ = v___x_2616_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v___x_2620_);
v___x_2622_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
return v___x_2622_;
}
}
else
{
lean_object* v___x_2624_; 
lean_del_object(v___x_2616_);
lean_inc(v___y_2609_);
lean_inc_ref(v___y_2608_);
lean_inc(v___y_2607_);
lean_inc_ref(v___y_2606_);
lean_inc(v___y_2605_);
lean_inc_ref(v___y_2604_);
lean_inc(v_val_2614_);
v___x_2624_ = lean_apply_8(v_addInfo_2602_, v_val_2614_, v___y_2604_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, lean_box(0));
if (lean_obj_tag(v___x_2624_) == 0)
{
lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; 
lean_dec_ref(v___x_2624_);
v___x_2625_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__1);
v___x_2626_ = l_Lean_MessageData_ofConstName(v_val_2614_, v___x_2618_);
v___x_2627_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2627_, 0, v___x_2625_);
lean_ctor_set(v___x_2627_, 1, v___x_2626_);
v___x_2628_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_2629_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2629_, 0, v___x_2627_);
lean_ctor_set(v___x_2629_, 1, v___x_2628_);
v___x_2630_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2629_, v___y_2604_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
lean_dec(v___y_2609_);
lean_dec_ref(v___y_2608_);
lean_dec(v___y_2607_);
lean_dec_ref(v___y_2606_);
lean_dec(v___y_2605_);
return v___x_2630_;
}
else
{
lean_dec(v_val_2614_);
lean_dec(v___y_2609_);
lean_dec_ref(v___y_2608_);
lean_dec(v___y_2607_);
lean_dec_ref(v___y_2606_);
lean_dec(v___y_2605_);
lean_dec_ref(v___y_2604_);
return v___x_2624_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__1___boxed(lean_object* v_declName_2632_, lean_object* v_env_2633_, lean_object* v_addInfo_2634_, lean_object* v_____r_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_){
_start:
{
lean_object* v_res_2643_; 
v_res_2643_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__1(v_declName_2632_, v_env_2633_, v_addInfo_2634_, v_____r_2635_, v___y_2636_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_);
return v_res_2643_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__5(lean_object* v_addInfo_2644_, lean_object* v_declName_2645_, uint8_t v___x_2646_, lean_object* v___f_2647_, uint8_t v___x_2648_, lean_object* v_env_2649_, lean_object* v___f_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_){
_start:
{
lean_object* v___x_2658_; 
lean_inc(v___y_2656_);
lean_inc_ref(v___y_2655_);
lean_inc(v___y_2654_);
lean_inc_ref(v___y_2653_);
lean_inc(v___y_2652_);
lean_inc_ref(v___y_2651_);
lean_inc(v_declName_2645_);
v___x_2658_ = lean_apply_8(v_addInfo_2644_, v_declName_2645_, v___y_2651_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, lean_box(0));
if (lean_obj_tag(v___x_2658_) == 0)
{
lean_object* v___x_2659_; 
lean_dec_ref(v___x_2658_);
lean_inc(v_declName_2645_);
v___x_2659_ = lean_private_to_user_name(v_declName_2645_);
if (lean_obj_tag(v___x_2659_) == 0)
{
lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; 
v___x_2660_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_2661_ = l_Lean_MessageData_ofConstName(v_declName_2645_, v___x_2646_);
v___x_2662_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2662_, 0, v___x_2660_);
lean_ctor_set(v___x_2662_, 1, v___x_2661_);
v___x_2663_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_2664_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2664_, 0, v___x_2662_);
lean_ctor_set(v___x_2664_, 1, v___x_2663_);
v___x_2665_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2664_, v___y_2651_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_);
lean_dec(v___y_2656_);
lean_dec_ref(v___y_2655_);
lean_dec(v___y_2654_);
lean_dec_ref(v___y_2653_);
lean_dec(v___y_2652_);
return v___x_2665_;
}
else
{
lean_object* v_val_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; 
lean_dec(v_declName_2645_);
v_val_2666_ = lean_ctor_get(v___x_2659_, 0);
lean_inc(v_val_2666_);
lean_dec_ref(v___x_2659_);
v___x_2667_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__11___closed__1);
v___x_2668_ = l_Lean_MessageData_ofConstName(v_val_2666_, v___x_2646_);
v___x_2669_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2669_, 0, v___x_2667_);
lean_ctor_set(v___x_2669_, 1, v___x_2668_);
v___x_2670_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_2671_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2669_);
lean_ctor_set(v___x_2671_, 1, v___x_2670_);
v___x_2672_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2671_, v___y_2651_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_);
lean_dec(v___y_2656_);
lean_dec_ref(v___y_2655_);
lean_dec(v___y_2654_);
lean_dec_ref(v___y_2653_);
lean_dec(v___y_2652_);
return v___x_2672_;
}
}
else
{
lean_dec(v___y_2656_);
lean_dec_ref(v___y_2655_);
lean_dec(v___y_2654_);
lean_dec_ref(v___y_2653_);
lean_dec(v___y_2652_);
lean_dec_ref(v___y_2651_);
lean_dec(v_declName_2645_);
return v___x_2658_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__5___boxed(lean_object* v_addInfo_2673_, lean_object* v_declName_2674_, lean_object* v___x_2675_, lean_object* v___f_2676_, lean_object* v___x_2677_, lean_object* v_env_2678_, lean_object* v___f_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_){
_start:
{
uint8_t v___x_19127__boxed_2687_; uint8_t v___x_19129__boxed_2688_; lean_object* v_res_2689_; 
v___x_19127__boxed_2687_ = lean_unbox(v___x_2675_);
v___x_19129__boxed_2688_ = lean_unbox(v___x_2677_);
v_res_2689_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__5(v_addInfo_2673_, v_declName_2674_, v___x_19127__boxed_2687_, v___f_2676_, v___x_19129__boxed_2688_, v_env_2678_, v___f_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_);
lean_dec_ref(v___f_2679_);
lean_dec_ref(v_env_2678_);
lean_dec_ref(v___f_2676_);
return v_res_2689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8(lean_object* v_declName_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_){
_start:
{
lean_object* v___x_2701_; lean_object* v_env_2702_; uint8_t v___x_2703_; lean_object* v_addInfo_2704_; lean_object* v_env_2705_; lean_object* v___f_2706_; lean_object* v___f_2707_; lean_object* v___x_2708_; lean_object* v___f_2709_; uint8_t v___x_2710_; uint8_t v___x_2711_; 
v___x_2701_ = lean_st_ref_get(v___y_2699_);
v_env_2702_ = lean_ctor_get(v___x_2701_, 0);
lean_inc_ref(v_env_2702_);
lean_dec(v___x_2701_);
v___x_2703_ = 0;
v_addInfo_2704_ = ((lean_object*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___closed__0));
v_env_2705_ = l_Lean_Environment_setExporting(v_env_2702_, v___x_2703_);
lean_inc_ref(v_env_2705_);
lean_inc(v_declName_2693_);
v___f_2706_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__1___boxed), 11, 3);
lean_closure_set(v___f_2706_, 0, v_declName_2693_);
lean_closure_set(v___f_2706_, 1, v_env_2705_);
lean_closure_set(v___f_2706_, 2, v_addInfo_2704_);
lean_inc(v_declName_2693_);
lean_inc_ref(v_env_2705_);
v___f_2707_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__2___boxed), 12, 4);
lean_closure_set(v___f_2707_, 0, v_env_2705_);
lean_closure_set(v___f_2707_, 1, v_declName_2693_);
lean_closure_set(v___f_2707_, 2, v___f_2706_);
lean_closure_set(v___f_2707_, 3, v_addInfo_2704_);
v___x_2708_ = lean_box(v___x_2703_);
lean_inc_ref(v_env_2705_);
lean_inc(v_declName_2693_);
lean_inc_ref(v___f_2707_);
v___f_2709_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__3___boxed), 12, 4);
lean_closure_set(v___f_2709_, 0, v___f_2707_);
lean_closure_set(v___f_2709_, 1, v_declName_2693_);
lean_closure_set(v___f_2709_, 2, v___x_2708_);
lean_closure_set(v___f_2709_, 3, v_env_2705_);
v___x_2710_ = 1;
lean_inc(v_declName_2693_);
lean_inc_ref(v_env_2705_);
v___x_2711_ = l_Lean_Environment_contains(v_env_2705_, v_declName_2693_, v___x_2710_);
if (v___x_2711_ == 0)
{
lean_object* v___f_2712_; lean_object* v___x_2713_; 
lean_dec_ref(v___f_2707_);
lean_dec(v_declName_2693_);
v___f_2712_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__4___boxed), 8, 1);
lean_closure_set(v___f_2712_, 0, v___f_2709_);
v___x_2713_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg(v_env_2705_, v___f_2712_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
return v___x_2713_;
}
else
{
lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___f_2716_; lean_object* v___x_2717_; 
v___x_2714_ = lean_box(v___x_2710_);
v___x_2715_ = lean_box(v___x_2703_);
lean_inc_ref(v_env_2705_);
v___f_2716_ = lean_alloc_closure((void*)(l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___lam__5___boxed), 14, 7);
lean_closure_set(v___f_2716_, 0, v_addInfo_2704_);
lean_closure_set(v___f_2716_, 1, v_declName_2693_);
lean_closure_set(v___f_2716_, 2, v___x_2714_);
lean_closure_set(v___f_2716_, 3, v___f_2707_);
lean_closure_set(v___f_2716_, 4, v___x_2715_);
lean_closure_set(v___f_2716_, 5, v_env_2705_);
lean_closure_set(v___f_2716_, 6, v___f_2709_);
v___x_2717_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg(v_env_2705_, v___f_2716_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_);
return v___x_2717_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8___boxed(lean_object* v_declName_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_){
_start:
{
lean_object* v_res_2726_; 
v_res_2726_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8(v_declName_2718_, v___y_2719_, v___y_2720_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4(lean_object* v_modifiers_2727_, lean_object* v_declName_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_){
_start:
{
lean_object* v___x_2736_; lean_object* v_env_2737_; uint8_t v_visibility_2738_; uint8_t v_isProtected_2739_; lean_object* v_declName_2741_; lean_object* v___y_2742_; lean_object* v___y_2743_; lean_object* v___y_2744_; lean_object* v___y_2745_; lean_object* v___y_2746_; lean_object* v___y_2747_; uint8_t v___x_2803_; 
v___x_2736_ = lean_st_ref_get(v___y_2734_);
v_env_2737_ = lean_ctor_get(v___x_2736_, 0);
lean_inc_ref(v_env_2737_);
lean_dec(v___x_2736_);
v_visibility_2738_ = lean_ctor_get_uint8(v_modifiers_2727_, sizeof(void*)*3);
v_isProtected_2739_ = lean_ctor_get_uint8(v_modifiers_2727_, sizeof(void*)*3 + 1);
v___x_2803_ = l_Lean_Elab_Visibility_isInferredPublic(v_env_2737_, v_visibility_2738_);
lean_dec_ref(v_env_2737_);
if (v___x_2803_ == 0)
{
lean_object* v___x_2804_; lean_object* v_env_2805_; lean_object* v_declName_2806_; 
v___x_2804_ = lean_st_ref_get(v___y_2734_);
v_env_2805_ = lean_ctor_get(v___x_2804_, 0);
lean_inc_ref(v_env_2805_);
lean_dec(v___x_2804_);
v_declName_2806_ = l_Lean_mkPrivateName(v_env_2805_, v_declName_2728_);
lean_dec_ref(v_env_2805_);
v_declName_2741_ = v_declName_2806_;
v___y_2742_ = v___y_2729_;
v___y_2743_ = v___y_2730_;
v___y_2744_ = v___y_2731_;
v___y_2745_ = v___y_2732_;
v___y_2746_ = v___y_2733_;
v___y_2747_ = v___y_2734_;
goto v___jp_2740_;
}
else
{
v_declName_2741_ = v_declName_2728_;
v___y_2742_ = v___y_2729_;
v___y_2743_ = v___y_2730_;
v___y_2744_ = v___y_2731_;
v___y_2745_ = v___y_2732_;
v___y_2746_ = v___y_2733_;
v___y_2747_ = v___y_2734_;
goto v___jp_2740_;
}
v___jp_2740_:
{
lean_object* v___x_2748_; 
lean_inc(v___y_2747_);
lean_inc(v___y_2745_);
lean_inc(v_declName_2741_);
v___x_2748_ = l_Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8(v_declName_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_);
if (lean_obj_tag(v___x_2748_) == 0)
{
lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2793_; 
v_isSharedCheck_2793_ = !lean_is_exclusive(v___x_2748_);
if (v_isSharedCheck_2793_ == 0)
{
lean_object* v_unused_2794_; 
v_unused_2794_ = lean_ctor_get(v___x_2748_, 0);
lean_dec(v_unused_2794_);
v___x_2750_ = v___x_2748_;
v_isShared_2751_ = v_isSharedCheck_2793_;
goto v_resetjp_2749_;
}
else
{
lean_dec(v___x_2748_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2793_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
if (v_isProtected_2739_ == 0)
{
lean_object* v___x_2753_; 
lean_dec(v___y_2747_);
lean_dec(v___y_2745_);
if (v_isShared_2751_ == 0)
{
lean_ctor_set(v___x_2750_, 0, v_declName_2741_);
v___x_2753_ = v___x_2750_;
goto v_reusejp_2752_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v_declName_2741_);
v___x_2753_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2752_;
}
v_reusejp_2752_:
{
return v___x_2753_;
}
}
else
{
lean_object* v___x_2755_; lean_object* v_env_2756_; lean_object* v_nextMacroScope_2757_; lean_object* v_ngen_2758_; lean_object* v_auxDeclNGen_2759_; lean_object* v_traceState_2760_; lean_object* v_messages_2761_; lean_object* v_infoState_2762_; lean_object* v_snapshotTasks_2763_; lean_object* v___x_2765_; uint8_t v_isShared_2766_; uint8_t v_isSharedCheck_2791_; 
v___x_2755_ = lean_st_ref_take(v___y_2747_);
v_env_2756_ = lean_ctor_get(v___x_2755_, 0);
v_nextMacroScope_2757_ = lean_ctor_get(v___x_2755_, 1);
v_ngen_2758_ = lean_ctor_get(v___x_2755_, 2);
v_auxDeclNGen_2759_ = lean_ctor_get(v___x_2755_, 3);
v_traceState_2760_ = lean_ctor_get(v___x_2755_, 4);
v_messages_2761_ = lean_ctor_get(v___x_2755_, 6);
v_infoState_2762_ = lean_ctor_get(v___x_2755_, 7);
v_snapshotTasks_2763_ = lean_ctor_get(v___x_2755_, 8);
v_isSharedCheck_2791_ = !lean_is_exclusive(v___x_2755_);
if (v_isSharedCheck_2791_ == 0)
{
lean_object* v_unused_2792_; 
v_unused_2792_ = lean_ctor_get(v___x_2755_, 5);
lean_dec(v_unused_2792_);
v___x_2765_ = v___x_2755_;
v_isShared_2766_ = v_isSharedCheck_2791_;
goto v_resetjp_2764_;
}
else
{
lean_inc(v_snapshotTasks_2763_);
lean_inc(v_infoState_2762_);
lean_inc(v_messages_2761_);
lean_inc(v_traceState_2760_);
lean_inc(v_auxDeclNGen_2759_);
lean_inc(v_ngen_2758_);
lean_inc(v_nextMacroScope_2757_);
lean_inc(v_env_2756_);
lean_dec(v___x_2755_);
v___x_2765_ = lean_box(0);
v_isShared_2766_ = v_isSharedCheck_2791_;
goto v_resetjp_2764_;
}
v_resetjp_2764_:
{
lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2770_; 
lean_inc(v_declName_2741_);
v___x_2767_ = l_Lean_addProtected(v_env_2756_, v_declName_2741_);
v___x_2768_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__2);
if (v_isShared_2766_ == 0)
{
lean_ctor_set(v___x_2765_, 5, v___x_2768_);
lean_ctor_set(v___x_2765_, 0, v___x_2767_);
v___x_2770_ = v___x_2765_;
goto v_reusejp_2769_;
}
else
{
lean_object* v_reuseFailAlloc_2790_; 
v_reuseFailAlloc_2790_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2790_, 0, v___x_2767_);
lean_ctor_set(v_reuseFailAlloc_2790_, 1, v_nextMacroScope_2757_);
lean_ctor_set(v_reuseFailAlloc_2790_, 2, v_ngen_2758_);
lean_ctor_set(v_reuseFailAlloc_2790_, 3, v_auxDeclNGen_2759_);
lean_ctor_set(v_reuseFailAlloc_2790_, 4, v_traceState_2760_);
lean_ctor_set(v_reuseFailAlloc_2790_, 5, v___x_2768_);
lean_ctor_set(v_reuseFailAlloc_2790_, 6, v_messages_2761_);
lean_ctor_set(v_reuseFailAlloc_2790_, 7, v_infoState_2762_);
lean_ctor_set(v_reuseFailAlloc_2790_, 8, v_snapshotTasks_2763_);
v___x_2770_ = v_reuseFailAlloc_2790_;
goto v_reusejp_2769_;
}
v_reusejp_2769_:
{
lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v_mctx_2773_; lean_object* v_zetaDeltaFVarIds_2774_; lean_object* v_postponed_2775_; lean_object* v_diag_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2788_; 
v___x_2771_ = lean_st_ref_set(v___y_2747_, v___x_2770_);
lean_dec(v___y_2747_);
v___x_2772_ = lean_st_ref_take(v___y_2745_);
v_mctx_2773_ = lean_ctor_get(v___x_2772_, 0);
v_zetaDeltaFVarIds_2774_ = lean_ctor_get(v___x_2772_, 2);
v_postponed_2775_ = lean_ctor_get(v___x_2772_, 3);
v_diag_2776_ = lean_ctor_get(v___x_2772_, 4);
v_isSharedCheck_2788_ = !lean_is_exclusive(v___x_2772_);
if (v_isSharedCheck_2788_ == 0)
{
lean_object* v_unused_2789_; 
v_unused_2789_ = lean_ctor_get(v___x_2772_, 1);
lean_dec(v_unused_2789_);
v___x_2778_ = v___x_2772_;
v_isShared_2779_ = v_isSharedCheck_2788_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_diag_2776_);
lean_inc(v_postponed_2775_);
lean_inc(v_zetaDeltaFVarIds_2774_);
lean_inc(v_mctx_2773_);
lean_dec(v___x_2772_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2788_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v___x_2780_; lean_object* v___x_2782_; 
v___x_2780_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__3, &l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg___closed__3);
if (v_isShared_2779_ == 0)
{
lean_ctor_set(v___x_2778_, 1, v___x_2780_);
v___x_2782_ = v___x_2778_;
goto v_reusejp_2781_;
}
else
{
lean_object* v_reuseFailAlloc_2787_; 
v_reuseFailAlloc_2787_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2787_, 0, v_mctx_2773_);
lean_ctor_set(v_reuseFailAlloc_2787_, 1, v___x_2780_);
lean_ctor_set(v_reuseFailAlloc_2787_, 2, v_zetaDeltaFVarIds_2774_);
lean_ctor_set(v_reuseFailAlloc_2787_, 3, v_postponed_2775_);
lean_ctor_set(v_reuseFailAlloc_2787_, 4, v_diag_2776_);
v___x_2782_ = v_reuseFailAlloc_2787_;
goto v_reusejp_2781_;
}
v_reusejp_2781_:
{
lean_object* v___x_2783_; lean_object* v___x_2785_; 
v___x_2783_ = lean_st_ref_set(v___y_2745_, v___x_2782_);
lean_dec(v___y_2745_);
if (v_isShared_2751_ == 0)
{
lean_ctor_set(v___x_2750_, 0, v_declName_2741_);
v___x_2785_ = v___x_2750_;
goto v_reusejp_2784_;
}
else
{
lean_object* v_reuseFailAlloc_2786_; 
v_reuseFailAlloc_2786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2786_, 0, v_declName_2741_);
v___x_2785_ = v_reuseFailAlloc_2786_;
goto v_reusejp_2784_;
}
v_reusejp_2784_:
{
return v___x_2785_;
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
lean_object* v_a_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2802_; 
lean_dec(v___y_2747_);
lean_dec(v___y_2745_);
lean_dec(v_declName_2741_);
v_a_2795_ = lean_ctor_get(v___x_2748_, 0);
v_isSharedCheck_2802_ = !lean_is_exclusive(v___x_2748_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2797_ = v___x_2748_;
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_dec(v___x_2748_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2800_; 
if (v_isShared_2798_ == 0)
{
v___x_2800_ = v___x_2797_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v_a_2795_);
v___x_2800_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
return v___x_2800_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4___boxed(lean_object* v_modifiers_2807_, lean_object* v_declName_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_){
_start:
{
lean_object* v_res_2816_; 
v_res_2816_ = l_Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4(v_modifiers_2807_, v_declName_2808_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_);
lean_dec_ref(v_modifiers_2807_);
return v_res_2816_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3_spec__6(lean_object* v_pre_2817_, lean_object* v_declName_2818_, lean_object* v_as_2819_, size_t v_sz_2820_, size_t v_i_2821_, lean_object* v_b_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_){
_start:
{
lean_object* v_a_2831_; uint8_t v___x_2835_; 
v___x_2835_ = lean_usize_dec_lt(v_i_2821_, v_sz_2820_);
if (v___x_2835_ == 0)
{
lean_object* v___x_2836_; 
lean_dec_ref(v___y_2823_);
lean_dec(v_declName_2818_);
lean_dec(v_pre_2817_);
v___x_2836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2836_, 0, v_b_2822_);
return v___x_2836_;
}
else
{
lean_object* v___x_2837_; lean_object* v_a_2838_; lean_object* v___x_2839_; uint8_t v___x_2840_; 
v___x_2837_ = lean_box(0);
v_a_2838_ = lean_array_uget_borrowed(v_as_2819_, v_i_2821_);
lean_inc(v_a_2838_);
lean_inc(v_pre_2817_);
v___x_2839_ = l_Lean_Name_append(v_pre_2817_, v_a_2838_);
v___x_2840_ = lean_name_eq(v___x_2839_, v_declName_2818_);
lean_dec(v___x_2839_);
if (v___x_2840_ == 0)
{
v_a_2831_ = v___x_2837_;
goto v___jp_2830_;
}
else
{
lean_object* v___x_2841_; uint8_t v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; 
v___x_2841_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1);
v___x_2842_ = 0;
lean_inc(v_declName_2818_);
v___x_2843_ = l_Lean_MessageData_ofConstName(v_declName_2818_, v___x_2842_);
v___x_2844_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2844_, 0, v___x_2841_);
lean_ctor_set(v___x_2844_, 1, v___x_2843_);
v___x_2845_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__3);
v___x_2846_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2846_, 0, v___x_2844_);
lean_ctor_set(v___x_2846_, 1, v___x_2845_);
lean_inc(v_pre_2817_);
v___x_2847_ = l_Lean_MessageData_ofName(v_pre_2817_);
v___x_2848_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2848_, 0, v___x_2846_);
lean_ctor_set(v___x_2848_, 1, v___x_2847_);
v___x_2849_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__5);
v___x_2850_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2850_, 0, v___x_2848_);
lean_ctor_set(v___x_2850_, 1, v___x_2849_);
lean_inc(v_a_2838_);
v___x_2851_ = l_Lean_MessageData_ofName(v_a_2838_);
v___x_2852_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2850_);
lean_ctor_set(v___x_2852_, 1, v___x_2851_);
v___x_2853_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_2854_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2854_, 0, v___x_2852_);
lean_ctor_set(v___x_2854_, 1, v___x_2853_);
lean_inc_ref(v___y_2823_);
v___x_2855_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2854_, v___y_2823_, v___y_2824_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_);
if (lean_obj_tag(v___x_2855_) == 0)
{
lean_dec_ref(v___x_2855_);
v_a_2831_ = v___x_2837_;
goto v___jp_2830_;
}
else
{
lean_dec_ref(v___y_2823_);
lean_dec(v_declName_2818_);
lean_dec(v_pre_2817_);
return v___x_2855_;
}
}
}
v___jp_2830_:
{
size_t v___x_2832_; size_t v___x_2833_; 
v___x_2832_ = ((size_t)1ULL);
v___x_2833_ = lean_usize_add(v_i_2821_, v___x_2832_);
v_i_2821_ = v___x_2833_;
v_b_2822_ = v_a_2831_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3_spec__6___boxed(lean_object* v_pre_2856_, lean_object* v_declName_2857_, lean_object* v_as_2858_, lean_object* v_sz_2859_, lean_object* v_i_2860_, lean_object* v_b_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_){
_start:
{
size_t v_sz_boxed_2869_; size_t v_i_boxed_2870_; lean_object* v_res_2871_; 
v_sz_boxed_2869_ = lean_unbox_usize(v_sz_2859_);
lean_dec(v_sz_2859_);
v_i_boxed_2870_ = lean_unbox_usize(v_i_2860_);
lean_dec(v_i_2860_);
v_res_2871_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3_spec__6(v_pre_2856_, v_declName_2857_, v_as_2858_, v_sz_boxed_2869_, v_i_boxed_2870_, v_b_2861_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_);
lean_dec(v___y_2867_);
lean_dec_ref(v___y_2866_);
lean_dec(v___y_2865_);
lean_dec_ref(v___y_2864_);
lean_dec(v___y_2863_);
lean_dec_ref(v_as_2858_);
return v_res_2871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3(lean_object* v_declName_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_){
_start:
{
if (lean_obj_tag(v_declName_2872_) == 1)
{
lean_object* v_pre_2880_; lean_object* v___x_2881_; lean_object* v_env_2882_; uint8_t v___x_2883_; 
v_pre_2880_ = lean_ctor_get(v_declName_2872_, 0);
lean_inc(v_pre_2880_);
v___x_2881_ = lean_st_ref_get(v___y_2878_);
v_env_2882_ = lean_ctor_get(v___x_2881_, 0);
lean_inc_ref(v_env_2882_);
lean_dec(v___x_2881_);
lean_inc(v_pre_2880_);
v___x_2883_ = l_Lean_isStructure(v_env_2882_, v_pre_2880_);
if (v___x_2883_ == 0)
{
lean_object* v___x_2884_; lean_object* v___x_2885_; 
lean_dec_ref(v_declName_2872_);
lean_dec(v_pre_2880_);
lean_dec_ref(v___y_2873_);
v___x_2884_ = lean_box(0);
v___x_2885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2885_, 0, v___x_2884_);
return v___x_2885_;
}
else
{
lean_object* v___x_2886_; lean_object* v_env_2887_; lean_object* v_fieldNames_2888_; lean_object* v___x_2889_; size_t v_sz_2890_; size_t v___x_2891_; lean_object* v___x_2892_; 
v___x_2886_ = lean_st_ref_get(v___y_2878_);
v_env_2887_ = lean_ctor_get(v___x_2886_, 0);
lean_inc_ref(v_env_2887_);
lean_dec(v___x_2886_);
lean_inc(v_pre_2880_);
v_fieldNames_2888_ = l_Lean_getStructureFieldsFlattened(v_env_2887_, v_pre_2880_, v___x_2883_);
v___x_2889_ = lean_box(0);
v_sz_2890_ = lean_array_size(v_fieldNames_2888_);
v___x_2891_ = ((size_t)0ULL);
v___x_2892_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3_spec__6(v_pre_2880_, v_declName_2872_, v_fieldNames_2888_, v_sz_2890_, v___x_2891_, v___x_2889_, v___y_2873_, v___y_2874_, v___y_2875_, v___y_2876_, v___y_2877_, v___y_2878_);
lean_dec_ref(v_fieldNames_2888_);
if (lean_obj_tag(v___x_2892_) == 0)
{
lean_object* v___x_2894_; uint8_t v_isShared_2895_; uint8_t v_isSharedCheck_2899_; 
v_isSharedCheck_2899_ = !lean_is_exclusive(v___x_2892_);
if (v_isSharedCheck_2899_ == 0)
{
lean_object* v_unused_2900_; 
v_unused_2900_ = lean_ctor_get(v___x_2892_, 0);
lean_dec(v_unused_2900_);
v___x_2894_ = v___x_2892_;
v_isShared_2895_ = v_isSharedCheck_2899_;
goto v_resetjp_2893_;
}
else
{
lean_dec(v___x_2892_);
v___x_2894_ = lean_box(0);
v_isShared_2895_ = v_isSharedCheck_2899_;
goto v_resetjp_2893_;
}
v_resetjp_2893_:
{
lean_object* v___x_2897_; 
if (v_isShared_2895_ == 0)
{
lean_ctor_set(v___x_2894_, 0, v___x_2889_);
v___x_2897_ = v___x_2894_;
goto v_reusejp_2896_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v___x_2889_);
v___x_2897_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2896_;
}
v_reusejp_2896_:
{
return v___x_2897_;
}
}
}
else
{
return v___x_2892_;
}
}
}
else
{
lean_object* v___x_2901_; lean_object* v___x_2902_; 
lean_dec_ref(v___y_2873_);
lean_dec(v_declName_2872_);
v___x_2901_ = lean_box(0);
v___x_2902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2902_, 0, v___x_2901_);
return v___x_2902_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3___boxed(lean_object* v_declName_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_){
_start:
{
lean_object* v_res_2911_; 
v_res_2911_ = l_Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3(v_declName_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_);
lean_dec(v___y_2909_);
lean_dec_ref(v___y_2908_);
lean_dec(v___y_2907_);
lean_dec_ref(v___y_2906_);
lean_dec(v___y_2905_);
return v_res_2911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2(lean_object* v_currNamespace_2912_, lean_object* v_modifiers_2913_, lean_object* v_shortName_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_){
_start:
{
lean_object* v___y_2923_; lean_object* v___y_2924_; lean_object* v___y_2928_; lean_object* v_shortName_2929_; lean_object* v_currNamespace_2930_; lean_object* v___y_2931_; lean_object* v___y_2932_; lean_object* v___y_2933_; lean_object* v___y_2934_; lean_object* v___y_2935_; lean_object* v___y_2936_; lean_object* v_view_2990_; lean_object* v_name_2991_; lean_object* v_imported_2992_; lean_object* v_ctx_2993_; lean_object* v_scopes_2994_; lean_object* v___x_2996_; uint8_t v_isShared_2997_; uint8_t v_isSharedCheck_3052_; 
lean_inc(v_shortName_2914_);
v_view_2990_ = l_Lean_extractMacroScopes(v_shortName_2914_);
v_name_2991_ = lean_ctor_get(v_view_2990_, 0);
v_imported_2992_ = lean_ctor_get(v_view_2990_, 1);
v_ctx_2993_ = lean_ctor_get(v_view_2990_, 2);
v_scopes_2994_ = lean_ctor_get(v_view_2990_, 3);
v_isSharedCheck_3052_ = !lean_is_exclusive(v_view_2990_);
if (v_isSharedCheck_3052_ == 0)
{
v___x_2996_ = v_view_2990_;
v_isShared_2997_ = v_isSharedCheck_3052_;
goto v_resetjp_2995_;
}
else
{
lean_inc(v_scopes_2994_);
lean_inc(v_ctx_2993_);
lean_inc(v_imported_2992_);
lean_inc(v_name_2991_);
lean_dec(v_view_2990_);
v___x_2996_ = lean_box(0);
v_isShared_2997_ = v_isSharedCheck_3052_;
goto v_resetjp_2995_;
}
v___jp_2922_:
{
lean_object* v___x_2925_; lean_object* v___x_2926_; 
v___x_2925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2925_, 0, v___y_2923_);
lean_ctor_set(v___x_2925_, 1, v___y_2924_);
v___x_2926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2926_, 0, v___x_2925_);
return v___x_2926_;
}
v___jp_2927_:
{
lean_object* v___x_2937_; 
lean_inc_ref(v___y_2931_);
lean_inc(v___y_2928_);
v___x_2937_ = l_Lean_Elab_checkIfShadowingStructureField___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__3(v___y_2928_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2936_);
if (lean_obj_tag(v___x_2937_) == 0)
{
lean_object* v___x_2938_; 
lean_dec_ref(v___x_2937_);
lean_inc(v___y_2936_);
lean_inc_ref(v___y_2935_);
lean_inc(v___y_2934_);
lean_inc_ref(v___y_2933_);
lean_inc(v___y_2932_);
lean_inc_ref(v___y_2931_);
v___x_2938_ = l_Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4(v_modifiers_2913_, v___y_2928_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2936_);
if (lean_obj_tag(v___x_2938_) == 0)
{
uint8_t v_isProtected_2939_; 
v_isProtected_2939_ = lean_ctor_get_uint8(v_modifiers_2913_, sizeof(void*)*3 + 1);
if (v_isProtected_2939_ == 0)
{
lean_object* v_a_2940_; lean_object* v___x_2942_; uint8_t v_isShared_2943_; uint8_t v_isSharedCheck_2948_; 
lean_dec(v___y_2936_);
lean_dec_ref(v___y_2935_);
lean_dec(v___y_2934_);
lean_dec_ref(v___y_2933_);
lean_dec(v___y_2932_);
lean_dec_ref(v___y_2931_);
lean_dec(v_currNamespace_2930_);
v_a_2940_ = lean_ctor_get(v___x_2938_, 0);
v_isSharedCheck_2948_ = !lean_is_exclusive(v___x_2938_);
if (v_isSharedCheck_2948_ == 0)
{
v___x_2942_ = v___x_2938_;
v_isShared_2943_ = v_isSharedCheck_2948_;
goto v_resetjp_2941_;
}
else
{
lean_inc(v_a_2940_);
lean_dec(v___x_2938_);
v___x_2942_ = lean_box(0);
v_isShared_2943_ = v_isSharedCheck_2948_;
goto v_resetjp_2941_;
}
v_resetjp_2941_:
{
lean_object* v___x_2944_; lean_object* v___x_2946_; 
v___x_2944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2944_, 0, v_a_2940_);
lean_ctor_set(v___x_2944_, 1, v_shortName_2929_);
if (v_isShared_2943_ == 0)
{
lean_ctor_set(v___x_2942_, 0, v___x_2944_);
v___x_2946_ = v___x_2942_;
goto v_reusejp_2945_;
}
else
{
lean_object* v_reuseFailAlloc_2947_; 
v_reuseFailAlloc_2947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2947_, 0, v___x_2944_);
v___x_2946_ = v_reuseFailAlloc_2947_;
goto v_reusejp_2945_;
}
v_reusejp_2945_:
{
return v___x_2946_;
}
}
}
else
{
if (lean_obj_tag(v_currNamespace_2930_) == 1)
{
lean_object* v_a_2949_; lean_object* v___x_2951_; uint8_t v_isShared_2952_; uint8_t v_isSharedCheck_2961_; 
lean_dec(v___y_2936_);
lean_dec_ref(v___y_2935_);
lean_dec(v___y_2934_);
lean_dec_ref(v___y_2933_);
lean_dec(v___y_2932_);
lean_dec_ref(v___y_2931_);
v_a_2949_ = lean_ctor_get(v___x_2938_, 0);
v_isSharedCheck_2961_ = !lean_is_exclusive(v___x_2938_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2951_ = v___x_2938_;
v_isShared_2952_ = v_isSharedCheck_2961_;
goto v_resetjp_2950_;
}
else
{
lean_inc(v_a_2949_);
lean_dec(v___x_2938_);
v___x_2951_ = lean_box(0);
v_isShared_2952_ = v_isSharedCheck_2961_;
goto v_resetjp_2950_;
}
v_resetjp_2950_:
{
lean_object* v_str_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2959_; 
v_str_2953_ = lean_ctor_get(v_currNamespace_2930_, 1);
lean_inc_ref(v_str_2953_);
lean_dec_ref(v_currNamespace_2930_);
v___x_2954_ = lean_box(0);
v___x_2955_ = l_Lean_Name_str___override(v___x_2954_, v_str_2953_);
v___x_2956_ = l_Lean_Name_append(v___x_2955_, v_shortName_2929_);
v___x_2957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2957_, 0, v_a_2949_);
lean_ctor_set(v___x_2957_, 1, v___x_2956_);
if (v_isShared_2952_ == 0)
{
lean_ctor_set(v___x_2951_, 0, v___x_2957_);
v___x_2959_ = v___x_2951_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v___x_2957_);
v___x_2959_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
return v___x_2959_;
}
}
}
else
{
lean_object* v_a_2962_; uint8_t v___x_2963_; 
lean_dec(v_currNamespace_2930_);
v_a_2962_ = lean_ctor_get(v___x_2938_, 0);
lean_inc(v_a_2962_);
lean_dec_ref(v___x_2938_);
v___x_2963_ = l_Lean_Name_isAtomic(v_shortName_2929_);
if (v___x_2963_ == 0)
{
lean_dec(v___y_2936_);
lean_dec_ref(v___y_2935_);
lean_dec(v___y_2934_);
lean_dec_ref(v___y_2933_);
lean_dec(v___y_2932_);
lean_dec_ref(v___y_2931_);
v___y_2923_ = v_a_2962_;
v___y_2924_ = v_shortName_2929_;
goto v___jp_2922_;
}
else
{
lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v_a_2966_; lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_2973_; 
lean_dec(v_a_2962_);
lean_dec(v_shortName_2929_);
v___x_2964_ = lean_obj_once(&l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1, &l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_mkDeclName___redArg___lam__2___closed__1);
v___x_2965_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_2964_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2936_);
lean_dec(v___y_2936_);
lean_dec_ref(v___y_2935_);
lean_dec(v___y_2934_);
lean_dec_ref(v___y_2933_);
lean_dec(v___y_2932_);
v_a_2966_ = lean_ctor_get(v___x_2965_, 0);
v_isSharedCheck_2973_ = !lean_is_exclusive(v___x_2965_);
if (v_isSharedCheck_2973_ == 0)
{
v___x_2968_ = v___x_2965_;
v_isShared_2969_ = v_isSharedCheck_2973_;
goto v_resetjp_2967_;
}
else
{
lean_inc(v_a_2966_);
lean_dec(v___x_2965_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_2973_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v___x_2971_; 
if (v_isShared_2969_ == 0)
{
v___x_2971_ = v___x_2968_;
goto v_reusejp_2970_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v_a_2966_);
v___x_2971_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2970_;
}
v_reusejp_2970_:
{
return v___x_2971_;
}
}
}
}
}
}
else
{
lean_object* v_a_2974_; lean_object* v___x_2976_; uint8_t v_isShared_2977_; uint8_t v_isSharedCheck_2981_; 
lean_dec(v___y_2936_);
lean_dec_ref(v___y_2935_);
lean_dec(v___y_2934_);
lean_dec_ref(v___y_2933_);
lean_dec(v___y_2932_);
lean_dec_ref(v___y_2931_);
lean_dec(v_currNamespace_2930_);
lean_dec(v_shortName_2929_);
v_a_2974_ = lean_ctor_get(v___x_2938_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v___x_2938_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2976_ = v___x_2938_;
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
else
{
lean_inc(v_a_2974_);
lean_dec(v___x_2938_);
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
else
{
lean_object* v_a_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_2989_; 
lean_dec(v___y_2936_);
lean_dec_ref(v___y_2935_);
lean_dec(v___y_2934_);
lean_dec_ref(v___y_2933_);
lean_dec(v___y_2932_);
lean_dec_ref(v___y_2931_);
lean_dec(v_currNamespace_2930_);
lean_dec(v_shortName_2929_);
lean_dec(v___y_2928_);
v_a_2982_ = lean_ctor_get(v___x_2937_, 0);
v_isSharedCheck_2989_ = !lean_is_exclusive(v___x_2937_);
if (v_isSharedCheck_2989_ == 0)
{
v___x_2984_ = v___x_2937_;
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_a_2982_);
lean_dec(v___x_2937_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v___x_2987_; 
if (v_isShared_2985_ == 0)
{
v___x_2987_ = v___x_2984_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v_a_2982_);
v___x_2987_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
return v___x_2987_;
}
}
}
}
v_resetjp_2995_:
{
lean_object* v___x_2998_; uint8_t v_isRootName_2999_; lean_object* v___y_3001_; lean_object* v___y_3002_; lean_object* v___y_3003_; lean_object* v___y_3004_; lean_object* v___y_3005_; lean_object* v___y_3006_; lean_object* v___y_3007_; lean_object* v___y_3028_; lean_object* v___y_3029_; lean_object* v___y_3030_; lean_object* v___y_3031_; lean_object* v___y_3032_; lean_object* v___y_3033_; uint8_t v___x_3041_; 
v___x_2998_ = ((lean_object*)(l_Lean_Elab_mkDeclName___redArg___closed__1));
v_isRootName_2999_ = l_Lean_Name_isPrefixOf(v___x_2998_, v_name_2991_);
v___x_3041_ = lean_name_eq(v_name_2991_, v___x_2998_);
if (v___x_3041_ == 0)
{
v___y_3028_ = v___y_2915_;
v___y_3029_ = v___y_2916_;
v___y_3030_ = v___y_2917_;
v___y_3031_ = v___y_2918_;
v___y_3032_ = v___y_2919_;
v___y_3033_ = v___y_2920_;
goto v___jp_3027_;
}
else
{
lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v_a_3044_; lean_object* v___x_3046_; uint8_t v_isShared_3047_; uint8_t v_isSharedCheck_3051_; 
lean_del_object(v___x_2996_);
lean_dec(v_scopes_2994_);
lean_dec(v_ctx_2993_);
lean_dec(v_imported_2992_);
lean_dec(v_name_2991_);
lean_dec(v_shortName_2914_);
lean_dec(v_currNamespace_2912_);
v___x_3042_ = lean_obj_once(&l_Lean_Elab_mkDeclName___redArg___closed__3, &l_Lean_Elab_mkDeclName___redArg___closed__3_once, _init_l_Lean_Elab_mkDeclName___redArg___closed__3);
v___x_3043_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_3042_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_);
lean_dec(v___y_2920_);
lean_dec_ref(v___y_2919_);
lean_dec(v___y_2918_);
lean_dec_ref(v___y_2917_);
lean_dec(v___y_2916_);
v_a_3044_ = lean_ctor_get(v___x_3043_, 0);
v_isSharedCheck_3051_ = !lean_is_exclusive(v___x_3043_);
if (v_isSharedCheck_3051_ == 0)
{
v___x_3046_ = v___x_3043_;
v_isShared_3047_ = v_isSharedCheck_3051_;
goto v_resetjp_3045_;
}
else
{
lean_inc(v_a_3044_);
lean_dec(v___x_3043_);
v___x_3046_ = lean_box(0);
v_isShared_3047_ = v_isSharedCheck_3051_;
goto v_resetjp_3045_;
}
v_resetjp_3045_:
{
lean_object* v___x_3049_; 
if (v_isShared_3047_ == 0)
{
v___x_3049_ = v___x_3046_;
goto v_reusejp_3048_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v_a_3044_);
v___x_3049_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3048_;
}
v_reusejp_3048_:
{
return v___x_3049_;
}
}
}
v___jp_3000_:
{
if (v_isRootName_2999_ == 0)
{
lean_dec(v_name_2991_);
v___y_2928_ = v___y_3007_;
v_shortName_2929_ = v_shortName_2914_;
v_currNamespace_2930_ = v_currNamespace_2912_;
v___y_2931_ = v___y_3004_;
v___y_2932_ = v___y_3003_;
v___y_2933_ = v___y_3002_;
v___y_2934_ = v___y_3006_;
v___y_2935_ = v___y_3005_;
v___y_2936_ = v___y_3001_;
goto v___jp_2927_;
}
else
{
lean_dec(v_shortName_2914_);
lean_dec(v_currNamespace_2912_);
if (lean_obj_tag(v_name_2991_) == 1)
{
lean_object* v_pre_3008_; lean_object* v_str_3009_; lean_object* v___x_3010_; lean_object* v_shortName_3011_; lean_object* v_currNamespace_3012_; 
v_pre_3008_ = lean_ctor_get(v_name_2991_, 0);
lean_inc(v_pre_3008_);
v_str_3009_ = lean_ctor_get(v_name_2991_, 1);
lean_inc_ref(v_str_3009_);
lean_dec_ref(v_name_2991_);
v___x_3010_ = lean_box(0);
v_shortName_3011_ = l_Lean_Name_str___override(v___x_3010_, v_str_3009_);
v_currNamespace_3012_ = l_Lean_Name_replacePrefix(v_pre_3008_, v___x_2998_, v___x_3010_);
v___y_2928_ = v___y_3007_;
v_shortName_2929_ = v_shortName_3011_;
v_currNamespace_2930_ = v_currNamespace_3012_;
v___y_2931_ = v___y_3004_;
v___y_2932_ = v___y_3003_;
v___y_2933_ = v___y_3002_;
v___y_2934_ = v___y_3006_;
v___y_2935_ = v___y_3005_;
v___y_2936_ = v___y_3001_;
goto v___jp_2927_;
}
else
{
lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v_a_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3026_; 
lean_dec(v___y_3007_);
v___x_3013_ = lean_obj_once(&l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1, &l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1_once, _init_l_Lean_Elab_checkIfShadowingStructureField___redArg___lam__2___closed__1);
v___x_3014_ = l_Lean_MessageData_ofName(v_name_2991_);
v___x_3015_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3015_, 0, v___x_3013_);
lean_ctor_set(v___x_3015_, 1, v___x_3014_);
v___x_3016_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__9___closed__1);
v___x_3017_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3017_, 0, v___x_3015_);
lean_ctor_set(v___x_3017_, 1, v___x_3016_);
v___x_3018_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_3017_, v___y_3004_, v___y_3003_, v___y_3002_, v___y_3006_, v___y_3005_, v___y_3001_);
lean_dec(v___y_3001_);
lean_dec_ref(v___y_3005_);
lean_dec(v___y_3006_);
lean_dec_ref(v___y_3002_);
lean_dec(v___y_3003_);
v_a_3019_ = lean_ctor_get(v___x_3018_, 0);
v_isSharedCheck_3026_ = !lean_is_exclusive(v___x_3018_);
if (v_isSharedCheck_3026_ == 0)
{
v___x_3021_ = v___x_3018_;
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_a_3019_);
lean_dec(v___x_3018_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3024_; 
if (v_isShared_3022_ == 0)
{
v___x_3024_ = v___x_3021_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v_a_3019_);
v___x_3024_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
return v___x_3024_;
}
}
}
}
}
v___jp_3027_:
{
if (v_isRootName_2999_ == 0)
{
lean_object* v___x_3034_; 
lean_del_object(v___x_2996_);
lean_dec(v_scopes_2994_);
lean_dec(v_ctx_2993_);
lean_dec(v_imported_2992_);
lean_inc(v_shortName_2914_);
lean_inc(v_currNamespace_2912_);
v___x_3034_ = l_Lean_Name_append(v_currNamespace_2912_, v_shortName_2914_);
v___y_3001_ = v___y_3033_;
v___y_3002_ = v___y_3030_;
v___y_3003_ = v___y_3029_;
v___y_3004_ = v___y_3028_;
v___y_3005_ = v___y_3032_;
v___y_3006_ = v___y_3031_;
v___y_3007_ = v___x_3034_;
goto v___jp_3000_;
}
else
{
lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3038_; 
v___x_3035_ = lean_box(0);
lean_inc(v_name_2991_);
v___x_3036_ = l_Lean_Name_replacePrefix(v_name_2991_, v___x_2998_, v___x_3035_);
if (v_isShared_2997_ == 0)
{
lean_ctor_set(v___x_2996_, 0, v___x_3036_);
v___x_3038_ = v___x_2996_;
goto v_reusejp_3037_;
}
else
{
lean_object* v_reuseFailAlloc_3040_; 
v_reuseFailAlloc_3040_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3040_, 0, v___x_3036_);
lean_ctor_set(v_reuseFailAlloc_3040_, 1, v_imported_2992_);
lean_ctor_set(v_reuseFailAlloc_3040_, 2, v_ctx_2993_);
lean_ctor_set(v_reuseFailAlloc_3040_, 3, v_scopes_2994_);
v___x_3038_ = v_reuseFailAlloc_3040_;
goto v_reusejp_3037_;
}
v_reusejp_3037_:
{
lean_object* v___x_3039_; 
v___x_3039_ = l_Lean_MacroScopesView_review(v___x_3038_);
v___y_3001_ = v___y_3033_;
v___y_3002_ = v___y_3030_;
v___y_3003_ = v___y_3029_;
v___y_3004_ = v___y_3028_;
v___y_3005_ = v___y_3032_;
v___y_3006_ = v___y_3031_;
v___y_3007_ = v___x_3039_;
goto v___jp_3000_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2___boxed(lean_object* v_currNamespace_3053_, lean_object* v_modifiers_3054_, lean_object* v_shortName_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_){
_start:
{
lean_object* v_res_3063_; 
v_res_3063_ = l_Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2(v_currNamespace_3053_, v_modifiers_3054_, v_shortName_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_, v___y_3061_);
lean_dec_ref(v_modifiers_3054_);
return v_res_3063_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4(uint8_t v___x_3064_, lean_object* v_as_3065_, size_t v_i_3066_, size_t v_stop_3067_, lean_object* v_b_3068_){
_start:
{
lean_object* v___y_3070_; uint8_t v___x_3074_; 
v___x_3074_ = lean_usize_dec_eq(v_i_3066_, v_stop_3067_);
if (v___x_3074_ == 0)
{
lean_object* v_fst_3075_; uint8_t v___x_3076_; 
v_fst_3075_ = lean_ctor_get(v_b_3068_, 0);
v___x_3076_ = lean_unbox(v_fst_3075_);
if (v___x_3076_ == 0)
{
lean_object* v_snd_3077_; lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3086_; 
v_snd_3077_ = lean_ctor_get(v_b_3068_, 1);
v_isSharedCheck_3086_ = !lean_is_exclusive(v_b_3068_);
if (v_isSharedCheck_3086_ == 0)
{
lean_object* v_unused_3087_; 
v_unused_3087_ = lean_ctor_get(v_b_3068_, 0);
lean_dec(v_unused_3087_);
v___x_3079_ = v_b_3068_;
v_isShared_3080_ = v_isSharedCheck_3086_;
goto v_resetjp_3078_;
}
else
{
lean_inc(v_snd_3077_);
lean_dec(v_b_3068_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3086_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
uint8_t v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3084_; 
v___x_3081_ = 1;
v___x_3082_ = lean_box(v___x_3081_);
if (v_isShared_3080_ == 0)
{
lean_ctor_set(v___x_3079_, 0, v___x_3082_);
v___x_3084_ = v___x_3079_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v___x_3082_);
lean_ctor_set(v_reuseFailAlloc_3085_, 1, v_snd_3077_);
v___x_3084_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
v___y_3070_ = v___x_3084_;
goto v___jp_3069_;
}
}
}
else
{
lean_object* v_snd_3088_; lean_object* v___x_3090_; uint8_t v_isShared_3091_; uint8_t v_isSharedCheck_3098_; 
v_snd_3088_ = lean_ctor_get(v_b_3068_, 1);
v_isSharedCheck_3098_ = !lean_is_exclusive(v_b_3068_);
if (v_isSharedCheck_3098_ == 0)
{
lean_object* v_unused_3099_; 
v_unused_3099_ = lean_ctor_get(v_b_3068_, 0);
lean_dec(v_unused_3099_);
v___x_3090_ = v_b_3068_;
v_isShared_3091_ = v_isSharedCheck_3098_;
goto v_resetjp_3089_;
}
else
{
lean_inc(v_snd_3088_);
lean_dec(v_b_3068_);
v___x_3090_ = lean_box(0);
v_isShared_3091_ = v_isSharedCheck_3098_;
goto v_resetjp_3089_;
}
v_resetjp_3089_:
{
lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3096_; 
v___x_3092_ = lean_array_uget_borrowed(v_as_3065_, v_i_3066_);
lean_inc(v___x_3092_);
v___x_3093_ = lean_array_push(v_snd_3088_, v___x_3092_);
v___x_3094_ = lean_box(v___x_3064_);
if (v_isShared_3091_ == 0)
{
lean_ctor_set(v___x_3090_, 1, v___x_3093_);
lean_ctor_set(v___x_3090_, 0, v___x_3094_);
v___x_3096_ = v___x_3090_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v___x_3094_);
lean_ctor_set(v_reuseFailAlloc_3097_, 1, v___x_3093_);
v___x_3096_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
v___y_3070_ = v___x_3096_;
goto v___jp_3069_;
}
}
}
}
else
{
return v_b_3068_;
}
v___jp_3069_:
{
size_t v___x_3071_; size_t v___x_3072_; 
v___x_3071_ = ((size_t)1ULL);
v___x_3072_ = lean_usize_add(v_i_3066_, v___x_3071_);
v_i_3066_ = v___x_3072_;
v_b_3068_ = v___y_3070_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4___boxed(lean_object* v___x_3100_, lean_object* v_as_3101_, lean_object* v_i_3102_, lean_object* v_stop_3103_, lean_object* v_b_3104_){
_start:
{
uint8_t v___x_19836__boxed_3105_; size_t v_i_boxed_3106_; size_t v_stop_boxed_3107_; lean_object* v_res_3108_; 
v___x_19836__boxed_3105_ = lean_unbox(v___x_3100_);
v_i_boxed_3106_ = lean_unbox_usize(v_i_3102_);
lean_dec(v_i_3102_);
v_stop_boxed_3107_ = lean_unbox_usize(v_stop_3103_);
lean_dec(v_stop_3103_);
v_res_3108_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4(v___x_19836__boxed_3105_, v_as_3101_, v_i_boxed_3106_, v_stop_boxed_3107_, v_b_3104_);
lean_dec_ref(v_as_3101_);
return v_res_3108_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Elab_expandDeclId_spec__0(lean_object* v_a_3109_, lean_object* v_x_3110_){
_start:
{
if (lean_obj_tag(v_x_3110_) == 0)
{
uint8_t v___x_3111_; 
v___x_3111_ = 0;
return v___x_3111_;
}
else
{
lean_object* v_head_3112_; lean_object* v_tail_3113_; uint8_t v___x_3114_; 
v_head_3112_ = lean_ctor_get(v_x_3110_, 0);
v_tail_3113_ = lean_ctor_get(v_x_3110_, 1);
v___x_3114_ = lean_name_eq(v_a_3109_, v_head_3112_);
if (v___x_3114_ == 0)
{
v_x_3110_ = v_tail_3113_;
goto _start;
}
else
{
return v___x_3114_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Elab_expandDeclId_spec__0___boxed(lean_object* v_a_3116_, lean_object* v_x_3117_){
_start:
{
uint8_t v_res_3118_; lean_object* v_r_3119_; 
v_res_3118_ = l_List_elem___at___00Lean_Elab_expandDeclId_spec__0(v_a_3116_, v_x_3117_);
lean_dec(v_x_3117_);
lean_dec(v_a_3116_);
v_r_3119_ = lean_box(v_res_3118_);
return v_r_3119_;
}
}
static lean_object* _init_l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_3121_; lean_object* v___x_3122_; 
v___x_3121_ = ((lean_object*)(l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__0));
v___x_3122_ = l_Lean_stringToMessageData(v___x_3121_);
return v___x_3122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg(lean_object* v_u_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_){
_start:
{
lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; 
v___x_3131_ = lean_obj_once(&l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__1, &l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__1_once, _init_l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___closed__1);
v___x_3132_ = l_Lean_MessageData_ofName(v_u_3123_);
v___x_3133_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3131_);
lean_ctor_set(v___x_3133_, 1, v___x_3132_);
v___x_3134_ = lean_obj_once(&l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3, &l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3_once, _init_l_Lean_Elab_checkNotAlreadyDeclared___redArg___lam__3___closed__3);
v___x_3135_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3135_, 0, v___x_3133_);
lean_ctor_set(v___x_3135_, 1, v___x_3134_);
v___x_3136_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v___x_3135_, v___y_3124_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_, v___y_3129_);
return v___x_3136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg___boxed(lean_object* v_u_3137_, lean_object* v___y_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_){
_start:
{
lean_object* v_res_3145_; 
v_res_3145_ = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg(v_u_3137_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_, v___y_3143_);
lean_dec(v___y_3143_);
lean_dec_ref(v___y_3142_);
lean_dec(v___y_3141_);
lean_dec_ref(v___y_3140_);
lean_dec(v___y_3139_);
return v_res_3145_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3(lean_object* v_as_3146_, size_t v_i_3147_, size_t v_stop_3148_, lean_object* v_b_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_){
_start:
{
lean_object* v_a_3158_; uint8_t v___x_3162_; 
v___x_3162_ = lean_usize_dec_eq(v_i_3147_, v_stop_3148_);
if (v___x_3162_ == 0)
{
lean_object* v___x_3163_; lean_object* v_id_3164_; uint8_t v___x_3165_; 
v___x_3163_ = lean_array_uget_borrowed(v_as_3146_, v_i_3147_);
v_id_3164_ = l_Lean_Syntax_getId(v___x_3163_);
v___x_3165_ = l_List_elem___at___00Lean_Elab_expandDeclId_spec__0(v_id_3164_, v_b_3149_);
if (v___x_3165_ == 0)
{
lean_object* v___x_3166_; 
v___x_3166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3166_, 0, v_id_3164_);
lean_ctor_set(v___x_3166_, 1, v_b_3149_);
v_a_3158_ = v___x_3166_;
goto v___jp_3157_;
}
else
{
lean_object* v_fileName_3167_; lean_object* v_fileMap_3168_; lean_object* v_options_3169_; lean_object* v_currRecDepth_3170_; lean_object* v_maxRecDepth_3171_; lean_object* v_ref_3172_; lean_object* v_currNamespace_3173_; lean_object* v_openDecls_3174_; lean_object* v_initHeartbeats_3175_; lean_object* v_maxHeartbeats_3176_; lean_object* v_quotContext_3177_; lean_object* v_currMacroScope_3178_; uint8_t v_diag_3179_; lean_object* v_cancelTk_x3f_3180_; uint8_t v_suppressElabErrors_3181_; lean_object* v_inheritedTraceOptions_3182_; lean_object* v_ref_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; 
lean_dec(v_b_3149_);
v_fileName_3167_ = lean_ctor_get(v___y_3154_, 0);
v_fileMap_3168_ = lean_ctor_get(v___y_3154_, 1);
v_options_3169_ = lean_ctor_get(v___y_3154_, 2);
v_currRecDepth_3170_ = lean_ctor_get(v___y_3154_, 3);
v_maxRecDepth_3171_ = lean_ctor_get(v___y_3154_, 4);
v_ref_3172_ = lean_ctor_get(v___y_3154_, 5);
v_currNamespace_3173_ = lean_ctor_get(v___y_3154_, 6);
v_openDecls_3174_ = lean_ctor_get(v___y_3154_, 7);
v_initHeartbeats_3175_ = lean_ctor_get(v___y_3154_, 8);
v_maxHeartbeats_3176_ = lean_ctor_get(v___y_3154_, 9);
v_quotContext_3177_ = lean_ctor_get(v___y_3154_, 10);
v_currMacroScope_3178_ = lean_ctor_get(v___y_3154_, 11);
v_diag_3179_ = lean_ctor_get_uint8(v___y_3154_, sizeof(void*)*14);
v_cancelTk_x3f_3180_ = lean_ctor_get(v___y_3154_, 12);
v_suppressElabErrors_3181_ = lean_ctor_get_uint8(v___y_3154_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3182_ = lean_ctor_get(v___y_3154_, 13);
v_ref_3183_ = l_Lean_replaceRef(v___x_3163_, v_ref_3172_);
lean_inc_ref(v_inheritedTraceOptions_3182_);
lean_inc(v_cancelTk_x3f_3180_);
lean_inc(v_currMacroScope_3178_);
lean_inc(v_quotContext_3177_);
lean_inc(v_maxHeartbeats_3176_);
lean_inc(v_initHeartbeats_3175_);
lean_inc(v_openDecls_3174_);
lean_inc(v_currNamespace_3173_);
lean_inc(v_maxRecDepth_3171_);
lean_inc(v_currRecDepth_3170_);
lean_inc_ref(v_options_3169_);
lean_inc_ref(v_fileMap_3168_);
lean_inc_ref(v_fileName_3167_);
v___x_3184_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3184_, 0, v_fileName_3167_);
lean_ctor_set(v___x_3184_, 1, v_fileMap_3168_);
lean_ctor_set(v___x_3184_, 2, v_options_3169_);
lean_ctor_set(v___x_3184_, 3, v_currRecDepth_3170_);
lean_ctor_set(v___x_3184_, 4, v_maxRecDepth_3171_);
lean_ctor_set(v___x_3184_, 5, v_ref_3183_);
lean_ctor_set(v___x_3184_, 6, v_currNamespace_3173_);
lean_ctor_set(v___x_3184_, 7, v_openDecls_3174_);
lean_ctor_set(v___x_3184_, 8, v_initHeartbeats_3175_);
lean_ctor_set(v___x_3184_, 9, v_maxHeartbeats_3176_);
lean_ctor_set(v___x_3184_, 10, v_quotContext_3177_);
lean_ctor_set(v___x_3184_, 11, v_currMacroScope_3178_);
lean_ctor_set(v___x_3184_, 12, v_cancelTk_x3f_3180_);
lean_ctor_set(v___x_3184_, 13, v_inheritedTraceOptions_3182_);
lean_ctor_set_uint8(v___x_3184_, sizeof(void*)*14, v_diag_3179_);
lean_ctor_set_uint8(v___x_3184_, sizeof(void*)*14 + 1, v_suppressElabErrors_3181_);
lean_inc_ref(v___y_3150_);
v___x_3185_ = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg(v_id_3164_, v___y_3150_, v___y_3151_, v___y_3152_, v___y_3153_, v___x_3184_, v___y_3155_);
lean_dec_ref(v___x_3184_);
if (lean_obj_tag(v___x_3185_) == 0)
{
lean_object* v_a_3186_; 
v_a_3186_ = lean_ctor_get(v___x_3185_, 0);
lean_inc(v_a_3186_);
lean_dec_ref(v___x_3185_);
v_a_3158_ = v_a_3186_;
goto v___jp_3157_;
}
else
{
lean_dec_ref(v___y_3150_);
return v___x_3185_;
}
}
}
else
{
lean_object* v___x_3187_; 
lean_dec_ref(v___y_3150_);
v___x_3187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3187_, 0, v_b_3149_);
return v___x_3187_;
}
v___jp_3157_:
{
size_t v___x_3159_; size_t v___x_3160_; 
v___x_3159_ = ((size_t)1ULL);
v___x_3160_ = lean_usize_add(v_i_3147_, v___x_3159_);
v_i_3147_ = v___x_3160_;
v_b_3149_ = v_a_3158_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3___boxed(lean_object* v_as_3188_, lean_object* v_i_3189_, lean_object* v_stop_3190_, lean_object* v_b_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_){
_start:
{
size_t v_i_boxed_3199_; size_t v_stop_boxed_3200_; lean_object* v_res_3201_; 
v_i_boxed_3199_ = lean_unbox_usize(v_i_3189_);
lean_dec(v_i_3189_);
v_stop_boxed_3200_ = lean_unbox_usize(v_stop_3190_);
lean_dec(v_stop_3190_);
v_res_3201_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3(v_as_3188_, v_i_boxed_3199_, v_stop_boxed_3200_, v_b_3191_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_);
lean_dec(v___y_3197_);
lean_dec_ref(v___y_3196_);
lean_dec(v___y_3195_);
lean_dec_ref(v___y_3194_);
lean_dec(v___y_3193_);
lean_dec_ref(v_as_3188_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclId(lean_object* v_currNamespace_3202_, lean_object* v_currLevelNames_3203_, lean_object* v_declId_3204_, lean_object* v_modifiers_3205_, lean_object* v_a_3206_, lean_object* v_a_3207_, lean_object* v_a_3208_, lean_object* v_a_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_){
_start:
{
lean_object* v___x_3213_; lean_object* v_fst_3214_; lean_object* v_snd_3215_; lean_object* v___x_3217_; uint8_t v_isShared_3218_; uint8_t v_isSharedCheck_3316_; 
v___x_3213_ = l_Lean_Elab_expandDeclIdCore(v_declId_3204_);
v_fst_3214_ = lean_ctor_get(v___x_3213_, 0);
v_snd_3215_ = lean_ctor_get(v___x_3213_, 1);
v_isSharedCheck_3316_ = !lean_is_exclusive(v___x_3213_);
if (v_isSharedCheck_3316_ == 0)
{
v___x_3217_ = v___x_3213_;
v_isShared_3218_ = v_isSharedCheck_3316_;
goto v_resetjp_3216_;
}
else
{
lean_inc(v_snd_3215_);
lean_inc(v_fst_3214_);
lean_dec(v___x_3213_);
v___x_3217_ = lean_box(0);
v_isShared_3218_ = v_isSharedCheck_3316_;
goto v_resetjp_3216_;
}
v_resetjp_3216_:
{
lean_object* v_levelNames_3220_; lean_object* v___y_3221_; lean_object* v___y_3222_; lean_object* v___y_3223_; lean_object* v___y_3224_; lean_object* v___y_3225_; lean_object* v___y_3226_; lean_object* v___y_3273_; lean_object* v___y_3284_; uint8_t v___x_3295_; 
v___x_3295_ = l_Lean_Syntax_isNone(v_snd_3215_);
if (v___x_3295_ == 0)
{
lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; uint8_t v___x_3302_; 
v___x_3296_ = lean_unsigned_to_nat(1u);
v___x_3297_ = l_Lean_Syntax_getArg(v_snd_3215_, v___x_3296_);
lean_dec(v_snd_3215_);
v___x_3298_ = l_Lean_Syntax_getArgs(v___x_3297_);
lean_dec(v___x_3297_);
v___x_3299_ = lean_unsigned_to_nat(0u);
v___x_3300_ = ((lean_object*)(l_Lean_Elab_expandDeclIdCore___closed__0));
v___x_3301_ = lean_array_get_size(v___x_3298_);
v___x_3302_ = lean_nat_dec_lt(v___x_3299_, v___x_3301_);
if (v___x_3302_ == 0)
{
lean_dec_ref(v___x_3298_);
lean_del_object(v___x_3217_);
v___y_3284_ = v___x_3300_;
goto v___jp_3283_;
}
else
{
lean_object* v___x_3303_; lean_object* v___x_3305_; 
v___x_3303_ = lean_box(v___x_3302_);
if (v_isShared_3218_ == 0)
{
lean_ctor_set(v___x_3217_, 1, v___x_3300_);
lean_ctor_set(v___x_3217_, 0, v___x_3303_);
v___x_3305_ = v___x_3217_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v___x_3303_);
lean_ctor_set(v_reuseFailAlloc_3315_, 1, v___x_3300_);
v___x_3305_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
uint8_t v___x_3306_; 
v___x_3306_ = lean_nat_dec_le(v___x_3301_, v___x_3301_);
if (v___x_3306_ == 0)
{
if (v___x_3302_ == 0)
{
lean_dec_ref(v___x_3305_);
lean_dec_ref(v___x_3298_);
v___y_3284_ = v___x_3300_;
goto v___jp_3283_;
}
else
{
size_t v___x_3307_; size_t v___x_3308_; lean_object* v___x_3309_; lean_object* v_snd_3310_; 
v___x_3307_ = ((size_t)0ULL);
v___x_3308_ = lean_usize_of_nat(v___x_3301_);
v___x_3309_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4(v___x_3295_, v___x_3298_, v___x_3307_, v___x_3308_, v___x_3305_);
lean_dec_ref(v___x_3298_);
v_snd_3310_ = lean_ctor_get(v___x_3309_, 1);
lean_inc(v_snd_3310_);
lean_dec_ref(v___x_3309_);
v___y_3284_ = v_snd_3310_;
goto v___jp_3283_;
}
}
else
{
size_t v___x_3311_; size_t v___x_3312_; lean_object* v___x_3313_; lean_object* v_snd_3314_; 
v___x_3311_ = ((size_t)0ULL);
v___x_3312_ = lean_usize_of_nat(v___x_3301_);
v___x_3313_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__4(v___x_3295_, v___x_3298_, v___x_3311_, v___x_3312_, v___x_3305_);
lean_dec_ref(v___x_3298_);
v_snd_3314_ = lean_ctor_get(v___x_3313_, 1);
lean_inc(v_snd_3314_);
lean_dec_ref(v___x_3313_);
v___y_3284_ = v_snd_3314_;
goto v___jp_3283_;
}
}
}
}
else
{
lean_del_object(v___x_3217_);
lean_dec(v_snd_3215_);
v_levelNames_3220_ = v_currLevelNames_3203_;
v___y_3221_ = v_a_3206_;
v___y_3222_ = v_a_3207_;
v___y_3223_ = v_a_3208_;
v___y_3224_ = v_a_3209_;
v___y_3225_ = v_a_3210_;
v___y_3226_ = v_a_3211_;
goto v___jp_3219_;
}
v___jp_3219_:
{
lean_object* v_fileName_3227_; lean_object* v_fileMap_3228_; lean_object* v_options_3229_; lean_object* v_currRecDepth_3230_; lean_object* v_maxRecDepth_3231_; lean_object* v_ref_3232_; lean_object* v_currNamespace_3233_; lean_object* v_openDecls_3234_; lean_object* v_initHeartbeats_3235_; lean_object* v_maxHeartbeats_3236_; lean_object* v_quotContext_3237_; lean_object* v_currMacroScope_3238_; uint8_t v_diag_3239_; lean_object* v_cancelTk_x3f_3240_; uint8_t v_suppressElabErrors_3241_; lean_object* v_inheritedTraceOptions_3242_; lean_object* v___x_3244_; uint8_t v_isShared_3245_; uint8_t v_isSharedCheck_3271_; 
v_fileName_3227_ = lean_ctor_get(v___y_3225_, 0);
v_fileMap_3228_ = lean_ctor_get(v___y_3225_, 1);
v_options_3229_ = lean_ctor_get(v___y_3225_, 2);
v_currRecDepth_3230_ = lean_ctor_get(v___y_3225_, 3);
v_maxRecDepth_3231_ = lean_ctor_get(v___y_3225_, 4);
v_ref_3232_ = lean_ctor_get(v___y_3225_, 5);
v_currNamespace_3233_ = lean_ctor_get(v___y_3225_, 6);
v_openDecls_3234_ = lean_ctor_get(v___y_3225_, 7);
v_initHeartbeats_3235_ = lean_ctor_get(v___y_3225_, 8);
v_maxHeartbeats_3236_ = lean_ctor_get(v___y_3225_, 9);
v_quotContext_3237_ = lean_ctor_get(v___y_3225_, 10);
v_currMacroScope_3238_ = lean_ctor_get(v___y_3225_, 11);
v_diag_3239_ = lean_ctor_get_uint8(v___y_3225_, sizeof(void*)*14);
v_cancelTk_x3f_3240_ = lean_ctor_get(v___y_3225_, 12);
v_suppressElabErrors_3241_ = lean_ctor_get_uint8(v___y_3225_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3242_ = lean_ctor_get(v___y_3225_, 13);
v_isSharedCheck_3271_ = !lean_is_exclusive(v___y_3225_);
if (v_isSharedCheck_3271_ == 0)
{
v___x_3244_ = v___y_3225_;
v_isShared_3245_ = v_isSharedCheck_3271_;
goto v_resetjp_3243_;
}
else
{
lean_inc(v_inheritedTraceOptions_3242_);
lean_inc(v_cancelTk_x3f_3240_);
lean_inc(v_currMacroScope_3238_);
lean_inc(v_quotContext_3237_);
lean_inc(v_maxHeartbeats_3236_);
lean_inc(v_initHeartbeats_3235_);
lean_inc(v_openDecls_3234_);
lean_inc(v_currNamespace_3233_);
lean_inc(v_ref_3232_);
lean_inc(v_maxRecDepth_3231_);
lean_inc(v_currRecDepth_3230_);
lean_inc(v_options_3229_);
lean_inc(v_fileMap_3228_);
lean_inc(v_fileName_3227_);
lean_dec(v___y_3225_);
v___x_3244_ = lean_box(0);
v_isShared_3245_ = v_isSharedCheck_3271_;
goto v_resetjp_3243_;
}
v_resetjp_3243_:
{
lean_object* v_ref_3246_; lean_object* v___x_3248_; 
v_ref_3246_ = l_Lean_replaceRef(v_declId_3204_, v_ref_3232_);
lean_dec(v_ref_3232_);
if (v_isShared_3245_ == 0)
{
lean_ctor_set(v___x_3244_, 5, v_ref_3246_);
v___x_3248_ = v___x_3244_;
goto v_reusejp_3247_;
}
else
{
lean_object* v_reuseFailAlloc_3270_; 
v_reuseFailAlloc_3270_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_3270_, 0, v_fileName_3227_);
lean_ctor_set(v_reuseFailAlloc_3270_, 1, v_fileMap_3228_);
lean_ctor_set(v_reuseFailAlloc_3270_, 2, v_options_3229_);
lean_ctor_set(v_reuseFailAlloc_3270_, 3, v_currRecDepth_3230_);
lean_ctor_set(v_reuseFailAlloc_3270_, 4, v_maxRecDepth_3231_);
lean_ctor_set(v_reuseFailAlloc_3270_, 5, v_ref_3246_);
lean_ctor_set(v_reuseFailAlloc_3270_, 6, v_currNamespace_3233_);
lean_ctor_set(v_reuseFailAlloc_3270_, 7, v_openDecls_3234_);
lean_ctor_set(v_reuseFailAlloc_3270_, 8, v_initHeartbeats_3235_);
lean_ctor_set(v_reuseFailAlloc_3270_, 9, v_maxHeartbeats_3236_);
lean_ctor_set(v_reuseFailAlloc_3270_, 10, v_quotContext_3237_);
lean_ctor_set(v_reuseFailAlloc_3270_, 11, v_currMacroScope_3238_);
lean_ctor_set(v_reuseFailAlloc_3270_, 12, v_cancelTk_x3f_3240_);
lean_ctor_set(v_reuseFailAlloc_3270_, 13, v_inheritedTraceOptions_3242_);
lean_ctor_set_uint8(v_reuseFailAlloc_3270_, sizeof(void*)*14, v_diag_3239_);
lean_ctor_set_uint8(v_reuseFailAlloc_3270_, sizeof(void*)*14 + 1, v_suppressElabErrors_3241_);
v___x_3248_ = v_reuseFailAlloc_3270_;
goto v_reusejp_3247_;
}
v_reusejp_3247_:
{
lean_object* v___x_3249_; 
v___x_3249_ = l_Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2(v_currNamespace_3202_, v_modifiers_3205_, v_fst_3214_, v___y_3221_, v___y_3222_, v___y_3223_, v___y_3224_, v___x_3248_, v___y_3226_);
if (lean_obj_tag(v___x_3249_) == 0)
{
lean_object* v_a_3250_; lean_object* v___x_3252_; uint8_t v_isShared_3253_; uint8_t v_isSharedCheck_3261_; 
v_a_3250_ = lean_ctor_get(v___x_3249_, 0);
v_isSharedCheck_3261_ = !lean_is_exclusive(v___x_3249_);
if (v_isSharedCheck_3261_ == 0)
{
v___x_3252_ = v___x_3249_;
v_isShared_3253_ = v_isSharedCheck_3261_;
goto v_resetjp_3251_;
}
else
{
lean_inc(v_a_3250_);
lean_dec(v___x_3249_);
v___x_3252_ = lean_box(0);
v_isShared_3253_ = v_isSharedCheck_3261_;
goto v_resetjp_3251_;
}
v_resetjp_3251_:
{
lean_object* v_fst_3254_; lean_object* v_snd_3255_; lean_object* v_docString_x3f_3256_; lean_object* v___x_3257_; lean_object* v___x_3259_; 
v_fst_3254_ = lean_ctor_get(v_a_3250_, 0);
lean_inc(v_fst_3254_);
v_snd_3255_ = lean_ctor_get(v_a_3250_, 1);
lean_inc(v_snd_3255_);
lean_dec(v_a_3250_);
v_docString_x3f_3256_ = lean_ctor_get(v_modifiers_3205_, 1);
lean_inc(v_docString_x3f_3256_);
v___x_3257_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3257_, 0, v_snd_3255_);
lean_ctor_set(v___x_3257_, 1, v_fst_3254_);
lean_ctor_set(v___x_3257_, 2, v_levelNames_3220_);
lean_ctor_set(v___x_3257_, 3, v_docString_x3f_3256_);
if (v_isShared_3253_ == 0)
{
lean_ctor_set(v___x_3252_, 0, v___x_3257_);
v___x_3259_ = v___x_3252_;
goto v_reusejp_3258_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v___x_3257_);
v___x_3259_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3258_;
}
v_reusejp_3258_:
{
return v___x_3259_;
}
}
}
else
{
lean_object* v_a_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3269_; 
lean_dec(v_levelNames_3220_);
v_a_3262_ = lean_ctor_get(v___x_3249_, 0);
v_isSharedCheck_3269_ = !lean_is_exclusive(v___x_3249_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3264_ = v___x_3249_;
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_a_3262_);
lean_dec(v___x_3249_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3269_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3267_; 
if (v_isShared_3265_ == 0)
{
v___x_3267_ = v___x_3264_;
goto v_reusejp_3266_;
}
else
{
lean_object* v_reuseFailAlloc_3268_; 
v_reuseFailAlloc_3268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3268_, 0, v_a_3262_);
v___x_3267_ = v_reuseFailAlloc_3268_;
goto v_reusejp_3266_;
}
v_reusejp_3266_:
{
return v___x_3267_;
}
}
}
}
}
}
v___jp_3272_:
{
if (lean_obj_tag(v___y_3273_) == 0)
{
lean_object* v_a_3274_; 
v_a_3274_ = lean_ctor_get(v___y_3273_, 0);
lean_inc(v_a_3274_);
lean_dec_ref(v___y_3273_);
v_levelNames_3220_ = v_a_3274_;
v___y_3221_ = v_a_3206_;
v___y_3222_ = v_a_3207_;
v___y_3223_ = v_a_3208_;
v___y_3224_ = v_a_3209_;
v___y_3225_ = v_a_3210_;
v___y_3226_ = v_a_3211_;
goto v___jp_3219_;
}
else
{
lean_object* v_a_3275_; lean_object* v___x_3277_; uint8_t v_isShared_3278_; uint8_t v_isSharedCheck_3282_; 
lean_dec(v_fst_3214_);
lean_dec(v_a_3211_);
lean_dec_ref(v_a_3210_);
lean_dec(v_a_3209_);
lean_dec_ref(v_a_3208_);
lean_dec(v_a_3207_);
lean_dec_ref(v_a_3206_);
lean_dec(v_currNamespace_3202_);
v_a_3275_ = lean_ctor_get(v___y_3273_, 0);
v_isSharedCheck_3282_ = !lean_is_exclusive(v___y_3273_);
if (v_isSharedCheck_3282_ == 0)
{
v___x_3277_ = v___y_3273_;
v_isShared_3278_ = v_isSharedCheck_3282_;
goto v_resetjp_3276_;
}
else
{
lean_inc(v_a_3275_);
lean_dec(v___y_3273_);
v___x_3277_ = lean_box(0);
v_isShared_3278_ = v_isSharedCheck_3282_;
goto v_resetjp_3276_;
}
v_resetjp_3276_:
{
lean_object* v___x_3280_; 
if (v_isShared_3278_ == 0)
{
v___x_3280_ = v___x_3277_;
goto v_reusejp_3279_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v_a_3275_);
v___x_3280_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3279_;
}
v_reusejp_3279_:
{
return v___x_3280_;
}
}
}
}
v___jp_3283_:
{
lean_object* v___x_3285_; lean_object* v___x_3286_; uint8_t v___x_3287_; 
v___x_3285_ = lean_unsigned_to_nat(0u);
v___x_3286_ = lean_array_get_size(v___y_3284_);
v___x_3287_ = lean_nat_dec_lt(v___x_3285_, v___x_3286_);
if (v___x_3287_ == 0)
{
lean_dec_ref(v___y_3284_);
v_levelNames_3220_ = v_currLevelNames_3203_;
v___y_3221_ = v_a_3206_;
v___y_3222_ = v_a_3207_;
v___y_3223_ = v_a_3208_;
v___y_3224_ = v_a_3209_;
v___y_3225_ = v_a_3210_;
v___y_3226_ = v_a_3211_;
goto v___jp_3219_;
}
else
{
uint8_t v___x_3288_; 
v___x_3288_ = lean_nat_dec_le(v___x_3286_, v___x_3286_);
if (v___x_3288_ == 0)
{
if (v___x_3287_ == 0)
{
lean_dec_ref(v___y_3284_);
v_levelNames_3220_ = v_currLevelNames_3203_;
v___y_3221_ = v_a_3206_;
v___y_3222_ = v_a_3207_;
v___y_3223_ = v_a_3208_;
v___y_3224_ = v_a_3209_;
v___y_3225_ = v_a_3210_;
v___y_3226_ = v_a_3211_;
goto v___jp_3219_;
}
else
{
size_t v___x_3289_; size_t v___x_3290_; lean_object* v___x_3291_; 
v___x_3289_ = ((size_t)0ULL);
v___x_3290_ = lean_usize_of_nat(v___x_3286_);
lean_inc_ref(v_a_3206_);
v___x_3291_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3(v___y_3284_, v___x_3289_, v___x_3290_, v_currLevelNames_3203_, v_a_3206_, v_a_3207_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_);
lean_dec_ref(v___y_3284_);
v___y_3273_ = v___x_3291_;
goto v___jp_3272_;
}
}
else
{
size_t v___x_3292_; size_t v___x_3293_; lean_object* v___x_3294_; 
v___x_3292_ = ((size_t)0ULL);
v___x_3293_ = lean_usize_of_nat(v___x_3286_);
lean_inc_ref(v_a_3206_);
v___x_3294_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_expandDeclId_spec__3(v___y_3284_, v___x_3292_, v___x_3293_, v_currLevelNames_3203_, v_a_3206_, v_a_3207_, v_a_3208_, v_a_3209_, v_a_3210_, v_a_3211_);
lean_dec_ref(v___y_3284_);
v___y_3273_ = v___x_3294_;
goto v___jp_3272_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_expandDeclId___boxed(lean_object* v_currNamespace_3317_, lean_object* v_currLevelNames_3318_, lean_object* v_declId_3319_, lean_object* v_modifiers_3320_, lean_object* v_a_3321_, lean_object* v_a_3322_, lean_object* v_a_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_, lean_object* v_a_3327_){
_start:
{
lean_object* v_res_3328_; 
v_res_3328_ = l_Lean_Elab_expandDeclId(v_currNamespace_3317_, v_currLevelNames_3318_, v_declId_3319_, v_modifiers_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_, v_a_3325_, v_a_3326_);
lean_dec_ref(v_modifiers_3320_);
lean_dec(v_declId_3319_);
return v_res_3328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1(lean_object* v_00_u03b1_3329_, lean_object* v_u_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_){
_start:
{
lean_object* v___x_3338_; 
v___x_3338_ = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___redArg(v_u_3330_, v___y_3331_, v___y_3332_, v___y_3333_, v___y_3334_, v___y_3335_, v___y_3336_);
return v___x_3338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1___boxed(lean_object* v_00_u03b1_3339_, lean_object* v_u_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_){
_start:
{
lean_object* v_res_3348_; 
v_res_3348_ = l_Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1(v_00_u03b1_3339_, v_u_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_);
lean_dec(v___y_3346_);
lean_dec_ref(v___y_3345_);
lean_dec(v___y_3344_);
lean_dec_ref(v___y_3343_);
lean_dec(v___y_3342_);
return v_res_3348_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1(lean_object* v_00_u03b1_3349_, lean_object* v_msg_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_){
_start:
{
lean_object* v___x_3358_; 
v___x_3358_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___redArg(v_msg_3350_, v___y_3351_, v___y_3352_, v___y_3353_, v___y_3354_, v___y_3355_, v___y_3356_);
return v___x_3358_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1___boxed(lean_object* v_00_u03b1_3359_, lean_object* v_msg_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_){
_start:
{
lean_object* v_res_3368_; 
v_res_3368_ = l_Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1(v_00_u03b1_3359_, v_msg_3360_, v___y_3361_, v___y_3362_, v___y_3363_, v___y_3364_, v___y_3365_, v___y_3366_);
lean_dec(v___y_3366_);
lean_dec_ref(v___y_3365_);
lean_dec(v___y_3364_);
lean_dec_ref(v___y_3363_);
lean_dec(v___y_3362_);
return v_res_3368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3(lean_object* v_msgData_3369_, lean_object* v_macroStack_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_){
_start:
{
lean_object* v___x_3378_; 
v___x_3378_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___redArg(v_msgData_3369_, v_macroStack_3370_, v___y_3375_);
return v___x_3378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3___boxed(lean_object* v_msgData_3379_, lean_object* v_macroStack_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_){
_start:
{
lean_object* v_res_3388_; 
v_res_3388_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_throwAlreadyDeclaredUniverseLevel___at___00Lean_Elab_expandDeclId_spec__1_spec__1_spec__3(v_msgData_3379_, v_macroStack_3380_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_, v___y_3385_, v___y_3386_);
lean_dec(v___y_3386_);
lean_dec_ref(v___y_3385_);
lean_dec(v___y_3384_);
lean_dec_ref(v___y_3383_);
lean_dec(v___y_3382_);
lean_dec_ref(v___y_3381_);
return v_res_3388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17(lean_object* v_t_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_){
_start:
{
lean_object* v___x_3397_; 
v___x_3397_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___redArg(v_t_3389_, v___y_3395_);
return v___x_3397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17___boxed(lean_object* v_t_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_){
_start:
{
lean_object* v_res_3406_; 
v_res_3406_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__14_spec__17(v_t_3398_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_, v___y_3404_);
lean_dec(v___y_3404_);
lean_dec_ref(v___y_3403_);
lean_dec(v___y_3402_);
lean_dec_ref(v___y_3401_);
lean_dec(v___y_3400_);
lean_dec_ref(v___y_3399_);
return v_res_3406_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19(lean_object* v_env_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_){
_start:
{
lean_object* v___x_3415_; 
v___x_3415_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___redArg(v_env_3407_, v___y_3411_, v___y_3413_);
return v___x_3415_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19___boxed(lean_object* v_env_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_){
_start:
{
lean_object* v_res_3424_; 
v_res_3424_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15_spec__19(v_env_3416_, v___y_3417_, v___y_3418_, v___y_3419_, v___y_3420_, v___y_3421_, v___y_3422_);
lean_dec(v___y_3422_);
lean_dec_ref(v___y_3421_);
lean_dec(v___y_3420_);
lean_dec_ref(v___y_3419_);
lean_dec(v___y_3418_);
lean_dec_ref(v___y_3417_);
return v_res_3424_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15(lean_object* v_00_u03b1_3425_, lean_object* v_env_3426_, lean_object* v_x_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_){
_start:
{
lean_object* v___x_3435_; 
v___x_3435_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___redArg(v_env_3426_, v_x_3427_, v___y_3428_, v___y_3429_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_);
return v___x_3435_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15___boxed(lean_object* v_00_u03b1_3436_, lean_object* v_env_3437_, lean_object* v_x_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_){
_start:
{
lean_object* v_res_3446_; 
v_res_3446_ = l_Lean_withEnv___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__15(v_00_u03b1_3436_, v_env_3437_, v_x_3438_, v___y_3439_, v___y_3440_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15(lean_object* v_00_u03b1_3447_, lean_object* v_constName_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_){
_start:
{
lean_object* v___x_3456_; 
v___x_3456_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15___redArg(v_constName_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_, v___y_3454_);
return v___x_3456_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15___boxed(lean_object* v_00_u03b1_3457_, lean_object* v_constName_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_){
_start:
{
lean_object* v_res_3466_; 
v_res_3466_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15(v_00_u03b1_3457_, v_constName_3458_, v___y_3459_, v___y_3460_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_);
lean_dec(v___y_3464_);
lean_dec(v___y_3462_);
lean_dec_ref(v___y_3461_);
lean_dec(v___y_3460_);
return v_res_3466_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20(lean_object* v_00_u03b1_3467_, lean_object* v_ref_3468_, lean_object* v_constName_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_){
_start:
{
lean_object* v___x_3477_; 
v___x_3477_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___redArg(v_ref_3468_, v_constName_3469_, v___y_3470_, v___y_3471_, v___y_3472_, v___y_3473_, v___y_3474_, v___y_3475_);
return v___x_3477_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20___boxed(lean_object* v_00_u03b1_3478_, lean_object* v_ref_3479_, lean_object* v_constName_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_, lean_object* v___y_3486_, lean_object* v___y_3487_){
_start:
{
lean_object* v_res_3488_; 
v_res_3488_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20(v_00_u03b1_3478_, v_ref_3479_, v_constName_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_, v___y_3486_);
lean_dec(v___y_3486_);
lean_dec(v___y_3484_);
lean_dec_ref(v___y_3483_);
lean_dec(v___y_3482_);
lean_dec(v_ref_3479_);
return v_res_3488_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22(lean_object* v_00_u03b1_3489_, lean_object* v_ref_3490_, lean_object* v_msg_3491_, lean_object* v_declHint_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_){
_start:
{
lean_object* v___x_3500_; 
v___x_3500_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22___redArg(v_ref_3490_, v_msg_3491_, v_declHint_3492_, v___y_3493_, v___y_3494_, v___y_3495_, v___y_3496_, v___y_3497_, v___y_3498_);
return v___x_3500_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22___boxed(lean_object* v_00_u03b1_3501_, lean_object* v_ref_3502_, lean_object* v_msg_3503_, lean_object* v_declHint_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_){
_start:
{
lean_object* v_res_3512_; 
v_res_3512_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22(v_00_u03b1_3501_, v_ref_3502_, v_msg_3503_, v_declHint_3504_, v___y_3505_, v___y_3506_, v___y_3507_, v___y_3508_, v___y_3509_, v___y_3510_);
lean_dec(v___y_3510_);
lean_dec(v___y_3508_);
lean_dec_ref(v___y_3507_);
lean_dec(v___y_3506_);
lean_dec(v_ref_3502_);
return v_res_3512_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24(lean_object* v_msg_3513_, lean_object* v_declHint_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_){
_start:
{
lean_object* v___x_3522_; 
v___x_3522_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___redArg(v_msg_3513_, v_declHint_3514_, v___y_3520_);
return v___x_3522_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24___boxed(lean_object* v_msg_3523_, lean_object* v_declHint_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_){
_start:
{
lean_object* v_res_3532_; 
v_res_3532_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__23_spec__24(v_msg_3523_, v_declHint_3524_, v___y_3525_, v___y_3526_, v___y_3527_, v___y_3528_, v___y_3529_, v___y_3530_);
lean_dec(v___y_3530_);
lean_dec_ref(v___y_3529_);
lean_dec(v___y_3528_);
lean_dec_ref(v___y_3527_);
lean_dec(v___y_3526_);
lean_dec_ref(v___y_3525_);
return v_res_3532_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24(lean_object* v_00_u03b1_3533_, lean_object* v_ref_3534_, lean_object* v_msg_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_, lean_object* v___y_3541_){
_start:
{
lean_object* v___x_3543_; 
v___x_3543_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24___redArg(v_ref_3534_, v_msg_3535_, v___y_3536_, v___y_3537_, v___y_3538_, v___y_3539_, v___y_3540_, v___y_3541_);
return v___x_3543_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24___boxed(lean_object* v_00_u03b1_3544_, lean_object* v_ref_3545_, lean_object* v_msg_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_){
_start:
{
lean_object* v_res_3554_; 
v_res_3554_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00Lean_mkConstWithLevelParams___at___00Lean_Elab_checkNotAlreadyDeclared___at___00Lean_Elab_applyVisibility___at___00Lean_Elab_mkDeclName___at___00Lean_Elab_expandDeclId_spec__2_spec__4_spec__8_spec__13_spec__14_spec__15_spec__20_spec__22_spec__24(v_00_u03b1_3544_, v_ref_3545_, v_msg_3546_, v___y_3547_, v___y_3548_, v___y_3549_, v___y_3550_, v___y_3551_, v___y_3552_);
lean_dec(v___y_3552_);
lean_dec(v___y_3550_);
lean_dec_ref(v___y_3549_);
lean_dec(v___y_3548_);
lean_dec(v_ref_3545_);
return v_res_3554_;
}
}
lean_object* runtime_initialize_Lean_DocString_Add(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_DeclModifiers(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_instInhabitedVisibility_default = _init_l_Lean_Elab_instInhabitedVisibility_default();
l_Lean_Elab_instInhabitedVisibility = _init_l_Lean_Elab_instInhabitedVisibility();
l_Lean_Elab_instInhabitedRecKind_default = _init_l_Lean_Elab_instInhabitedRecKind_default();
l_Lean_Elab_instInhabitedRecKind = _init_l_Lean_Elab_instInhabitedRecKind();
l_Lean_Elab_instInhabitedComputeKind_default = _init_l_Lean_Elab_instInhabitedComputeKind_default();
l_Lean_Elab_instInhabitedComputeKind = _init_l_Lean_Elab_instInhabitedComputeKind();
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Command(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_DeclModifiers(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_DocString_Add(uint8_t builtin);
lean_object* initialize_Lean_Parser_Command(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_DeclModifiers(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DeclModifiers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_DeclModifiers(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_DeclModifiers(builtin);
}
#ifdef __cplusplus
}
#endif
