// Lean compiler output
// Module: Lean.DocString.Add
// Imports: import Lean.Elab.DocString public import Lean.DocString.Parser public import Lean.Elab.Term.TermElabM
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
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Error_toString(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_allErrors(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Doc_Parser_BlockCtxt_forDocString(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserState(lean_object*);
lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
lean_object* l_Lean_Doc_Parser_document(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getTokenTable(lean_object*);
lean_object* l_Lean_Parser_ParserFn_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_Parser_block(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Doc_elabModSnippet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_DocM_execForModule___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_getMainVersoModuleDocs(lean_object*);
lean_object* l_Lean_getMainModuleDoc(lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_addVersoModuleDocSnippet(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
extern lean_object* l_Lean_versoDocStringExt;
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_TSyntax_getDocString(lean_object*);
lean_object* l_Lean_rewriteManualLinksCore(lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo_x3f(lean_object*);
lean_object* l_Lean_SourceInfo_getPos_x3f(lean_object*, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lean_docStringExt;
lean_object* l_String_removeLeadingSpaces(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_FileMap_ofString(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Core_getAndEmptyMessageLog___redArg(lean_object*);
lean_object* l_Lean_Core_setMessageLog___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Doc_elabBlocks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_DocM_exec___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_toArray(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getDocStringText___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_logErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_logError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___aux__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_doc_verso;
lean_object* l_Lean_findInternalDocString_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_removeBuiltinDocString(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__2(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_parseVersoDocString___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_parseVersoDocString___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_parseVersoDocString___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "unexpected '"};
static const lean_object* l_Lean_parseVersoDocString___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___lam__5___closed__0_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_parseVersoDocString___redArg___lam__5___closed__1 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___lam__5___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_parseVersoDocString___redArg___lam__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "Documentation comment has no source location, cannot parse"};
static const lean_object* l_Lean_parseVersoDocString___redArg___lam__11___closed__0 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___lam__11___closed__0_value;
static lean_once_cell_t l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___redArg___lam__11___closed__1;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__0 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__0_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__1 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__1_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__2 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__2_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__3 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__3_value;
static const lean_ctor_object l_Lean_parseVersoDocString___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_parseVersoDocString___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_parseVersoDocString___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_parseVersoDocString___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__4_value_aux_2),((lean_object*)&l_Lean_parseVersoDocString___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(44, 76, 179, 33, 27, 4, 201, 125)}};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__4 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__4_value;
static const lean_string_object l_Lean_parseVersoDocString___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "versoCommentBody"};
static const lean_object* l_Lean_parseVersoDocString___redArg___closed__5 = (const lean_object*)&l_Lean_parseVersoDocString___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__0 = (const lean_object*)&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__0_value;
static const lean_string_object l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__1 = (const lean_object*)&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__1_value;
static const lean_string_object l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__2 = (const lean_object*)&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__2_value;
static const lean_string_object l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__3 = (const lean_object*)&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__3_value;
static const lean_string_object l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__4 = (const lean_object*)&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__4_value;
static const lean_string_object l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__5 = (const lean_object*)&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__5_value;
static const lean_string_object l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__6 = (const lean_object*)&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__6_value;
static const lean_string_object l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__7 = (const lean_object*)&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__6___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_versoDocString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_versoDocString___closed__0 = (const lean_object*)&l_Lean_versoDocString___closed__0_value;
static lean_once_cell_t l_Lean_versoDocString___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versoDocString___closed__1;
LEAN_EXPORT lean_object* l_Lean_versoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoModDocString_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoModDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoModDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoModDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringFromString_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringFromString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringFromString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringFromString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_versoDocStringFromString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_versoDocStringFromString___closed__0 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__0_value;
static const lean_ctor_object l_Lean_versoDocStringFromString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_versoDocStringFromString___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_versoDocStringFromString___closed__1 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__1_value;
static const lean_closure_object l_Lean_versoDocStringFromString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_document, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_versoDocStringFromString___closed__1_value)} };
static const lean_object* l_Lean_versoDocStringFromString___closed__2 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__2_value;
static const lean_array_object l_Lean_versoDocStringFromString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_versoDocStringFromString___closed__3 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__3_value;
static const lean_string_object l_Lean_versoDocStringFromString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_versoDocStringFromString___closed__4 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__4_value;
static const lean_ctor_object l_Lean_versoDocStringFromString___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_versoDocStringFromString___closed__4_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_versoDocStringFromString___closed__5 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__5_value;
static const lean_ctor_object l_Lean_versoDocStringFromString___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_versoDocStringFromString___closed__5_value),((lean_object*)&l_Lean_versoDocStringFromString___closed__3_value)}};
static const lean_object* l_Lean_versoDocStringFromString___closed__6 = (const lean_object*)&l_Lean_versoDocStringFromString___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__4(lean_object*, lean_object*);
static const lean_string_object l_Lean_addMarkdownDocString___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "invalid doc string, declaration `"};
static const lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__0 = (const lean_object*)&l_Lean_addMarkdownDocString___redArg___lam__5___closed__0_value;
static lean_once_cell_t l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__1;
static const lean_string_object l_Lean_addMarkdownDocString___redArg___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "` is in an imported module"};
static const lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__2 = (const lean_object*)&l_Lean_addMarkdownDocString___redArg___lam__5___closed__2_value;
static lean_once_cell_t l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__3;
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "invalid doc string, declaration '"};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0_value;
static const lean_string_object l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "' is in an imported module"};
static const lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Error adding module docs: "};
static const lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 93, .m_capacity = 93, .m_length = 92, .m_data = "Can't add Verso-format module docs because there is already Markdown-format content present."};
static const lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unexpected doc string"};
static const lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0_value;
static lean_once_cell_t l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringOf(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "invalid doc string removal, declaration `"};
static const lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0 = (const lean_object*)&l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0_value;
static lean_once_cell_t l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_makeDocStringVerso___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Documentation for `"};
static const lean_object* l_Lean_makeDocStringVerso___closed__0 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__0_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__1;
static const lean_string_object l_Lean_makeDocStringVerso___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "` is already in Verso format"};
static const lean_object* l_Lean_makeDocStringVerso___closed__2 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__2_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__3;
static const lean_string_object l_Lean_makeDocStringVerso___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "No documentation found for `"};
static const lean_object* l_Lean_makeDocStringVerso___closed__4 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__4_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__5;
static const lean_string_object l_Lean_makeDocStringVerso___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_makeDocStringVerso___closed__6 = (const lean_object*)&l_Lean_makeDocStringVerso___closed__6_value;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__7;
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__0(lean_object* v_toPure_1_, lean_object* v_____s_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_box(0);
v___x_4_ = lean_apply_2(v_toPure_1_, lean_box(0), v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__1(lean_object* v___x_5_, lean_object* v_toPure_6_, lean_object* v_r_7_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_5_);
v___x_9_ = lean_apply_2(v_toPure_6_, lean_box(0), v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3(lean_object* v___y_10_, lean_object* v_str_11_, lean_object* v_inst_12_, lean_object* v_inst_13_, lean_object* v_inst_14_, lean_object* v_inst_15_, lean_object* v_toBind_16_, lean_object* v___f_17_, lean_object* v___f_18_, lean_object* v_a_19_, lean_object* v_x_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_fst_22_; 
v_fst_22_ = lean_ctor_get(v_a_19_, 0);
lean_inc(v_fst_22_);
if (lean_obj_tag(v___y_10_) == 1)
{
lean_object* v_snd_23_; lean_object* v_start_24_; lean_object* v_stop_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_48_; 
lean_dec(v___f_18_);
v_snd_23_ = lean_ctor_get(v_a_19_, 1);
lean_inc(v_snd_23_);
lean_dec_ref(v_a_19_);
v_start_24_ = lean_ctor_get(v_fst_22_, 0);
v_stop_25_ = lean_ctor_get(v_fst_22_, 1);
v_isSharedCheck_48_ = !lean_is_exclusive(v_fst_22_);
if (v_isSharedCheck_48_ == 0)
{
v___x_27_ = v_fst_22_;
v_isShared_28_ = v_isSharedCheck_48_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_stop_25_);
lean_inc(v_start_24_);
lean_dec(v_fst_22_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_48_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v_val_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_47_; 
v_val_29_ = lean_ctor_get(v___y_10_, 0);
v_isSharedCheck_47_ = !lean_is_exclusive(v___y_10_);
if (v_isSharedCheck_47_ == 0)
{
v___x_31_ = v___y_10_;
v_isShared_32_ = v_isSharedCheck_47_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_val_29_);
lean_dec(v___y_10_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_47_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_33_; lean_object* v___x_34_; uint8_t v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_39_; 
v___x_33_ = lean_nat_add(v_val_29_, v_start_24_);
v___x_34_ = lean_nat_add(v_val_29_, v_stop_25_);
lean_dec(v_val_29_);
v___x_35_ = 0;
v___x_36_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_36_, 0, v___x_33_);
lean_ctor_set(v___x_36_, 1, v___x_34_);
lean_ctor_set_uint8(v___x_36_, sizeof(void*)*2, v___x_35_);
v___x_37_ = lean_string_utf8_extract(v_str_11_, v_start_24_, v_stop_25_);
lean_dec(v_stop_25_);
lean_dec(v_start_24_);
if (v_isShared_28_ == 0)
{
lean_ctor_set_tag(v___x_27_, 2);
lean_ctor_set(v___x_27_, 1, v___x_37_);
lean_ctor_set(v___x_27_, 0, v___x_36_);
v___x_39_ = v___x_27_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v___x_36_);
lean_ctor_set(v_reuseFailAlloc_46_, 1, v___x_37_);
v___x_39_ = v_reuseFailAlloc_46_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
lean_object* v___x_41_; 
if (v_isShared_32_ == 0)
{
lean_ctor_set_tag(v___x_31_, 3);
lean_ctor_set(v___x_31_, 0, v_snd_23_);
v___x_41_ = v___x_31_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_snd_23_);
v___x_41_ = v_reuseFailAlloc_45_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = l_Lean_MessageData_ofFormat(v___x_41_);
v___x_43_ = l_Lean_logErrorAt___redArg(v_inst_12_, v_inst_13_, v_inst_14_, v_inst_15_, v___x_39_, v___x_42_);
v___x_44_ = lean_apply_4(v_toBind_16_, lean_box(0), lean_box(0), v___x_43_, v___f_17_);
return v___x_44_;
}
}
}
}
}
else
{
lean_object* v_snd_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
lean_dec(v_fst_22_);
lean_dec(v___f_17_);
lean_dec(v___y_10_);
v_snd_49_ = lean_ctor_get(v_a_19_, 1);
lean_inc(v_snd_49_);
lean_dec_ref(v_a_19_);
v___x_50_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_50_, 0, v_snd_49_);
v___x_51_ = l_Lean_MessageData_ofFormat(v___x_50_);
v___x_52_ = l_Lean_logError___redArg(v_inst_12_, v_inst_13_, v_inst_14_, v_inst_15_, v___x_51_);
v___x_53_ = lean_apply_4(v_toBind_16_, lean_box(0), lean_box(0), v___x_52_, v___f_18_);
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3___boxed(lean_object* v___y_54_, lean_object* v_str_55_, lean_object* v_inst_56_, lean_object* v_inst_57_, lean_object* v_inst_58_, lean_object* v_inst_59_, lean_object* v_toBind_60_, lean_object* v___f_61_, lean_object* v___f_62_, lean_object* v_a_63_, lean_object* v_x_64_, lean_object* v___y_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_validateDocComment___redArg___lam__3(v___y_54_, v_str_55_, v_inst_56_, v_inst_57_, v_inst_58_, v_inst_59_, v_toBind_60_, v___f_61_, v___f_62_, v_a_63_, v_x_64_, v___y_65_);
lean_dec_ref(v_str_55_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__2(lean_object* v_toPure_67_, lean_object* v___y_68_, lean_object* v_str_69_, lean_object* v_inst_70_, lean_object* v_inst_71_, lean_object* v_inst_72_, lean_object* v_inst_73_, lean_object* v_toBind_74_, lean_object* v___f_75_, lean_object* v_____x_76_){
_start:
{
lean_object* v_fst_77_; lean_object* v___x_78_; lean_object* v___f_79_; lean_object* v___f_80_; size_t v_sz_81_; size_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v_fst_77_ = lean_ctor_get(v_____x_76_, 0);
lean_inc(v_fst_77_);
lean_dec_ref(v_____x_76_);
v___x_78_ = lean_box(0);
v___f_79_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__1), 3, 2);
lean_closure_set(v___f_79_, 0, v___x_78_);
lean_closure_set(v___f_79_, 1, v_toPure_67_);
lean_inc_ref(v___f_79_);
lean_inc(v_toBind_74_);
lean_inc_ref(v_inst_70_);
v___f_80_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__3___boxed), 12, 9);
lean_closure_set(v___f_80_, 0, v___y_68_);
lean_closure_set(v___f_80_, 1, v_str_69_);
lean_closure_set(v___f_80_, 2, v_inst_70_);
lean_closure_set(v___f_80_, 3, v_inst_71_);
lean_closure_set(v___f_80_, 4, v_inst_72_);
lean_closure_set(v___f_80_, 5, v_inst_73_);
lean_closure_set(v___f_80_, 6, v_toBind_74_);
lean_closure_set(v___f_80_, 7, v___f_79_);
lean_closure_set(v___f_80_, 8, v___f_79_);
v_sz_81_ = lean_array_size(v_fst_77_);
v___x_82_ = ((size_t)0ULL);
v___x_83_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_70_, v_fst_77_, v___f_80_, v_sz_81_, v___x_82_, v___x_78_);
v___x_84_ = lean_apply_4(v_toBind_74_, lean_box(0), lean_box(0), v___x_83_, v___f_75_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg(lean_object* v_inst_85_, lean_object* v_inst_86_, lean_object* v_inst_87_, lean_object* v_inst_88_, lean_object* v_inst_89_, lean_object* v_docstring_90_){
_start:
{
lean_object* v_toApplicative_91_; lean_object* v_toBind_92_; lean_object* v_toPure_93_; lean_object* v_str_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___f_98_; lean_object* v___y_100_; 
v_toApplicative_91_ = lean_ctor_get(v_inst_85_, 0);
v_toBind_92_ = lean_ctor_get(v_inst_85_, 1);
lean_inc(v_toBind_92_);
v_toPure_93_ = lean_ctor_get(v_toApplicative_91_, 1);
lean_inc(v_toPure_93_);
v_str_94_ = l_Lean_TSyntax_getDocString(v_docstring_90_);
v___x_95_ = lean_unsigned_to_nat(1u);
v___x_96_ = l_Lean_Syntax_getArg(v_docstring_90_, v___x_95_);
v___x_97_ = l_Lean_Syntax_getHeadInfo_x3f(v___x_96_);
lean_dec(v___x_96_);
lean_inc(v_toPure_93_);
v___f_98_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__0), 2, 1);
lean_closure_set(v___f_98_, 0, v_toPure_93_);
if (lean_obj_tag(v___x_97_) == 0)
{
lean_object* v___x_106_; 
v___x_106_ = lean_box(0);
v___y_100_ = v___x_106_;
goto v___jp_99_;
}
else
{
lean_object* v_val_107_; uint8_t v___x_108_; lean_object* v___x_109_; 
v_val_107_ = lean_ctor_get(v___x_97_, 0);
lean_inc(v_val_107_);
lean_dec_ref(v___x_97_);
v___x_108_ = 0;
v___x_109_ = l_Lean_SourceInfo_getPos_x3f(v_val_107_, v___x_108_);
lean_dec(v_val_107_);
v___y_100_ = v___x_109_;
goto v___jp_99_;
}
v___jp_99_:
{
lean_object* v___f_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
lean_inc(v_toBind_92_);
lean_inc_ref(v_str_94_);
v___f_101_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__2), 10, 9);
lean_closure_set(v___f_101_, 0, v_toPure_93_);
lean_closure_set(v___f_101_, 1, v___y_100_);
lean_closure_set(v___f_101_, 2, v_str_94_);
lean_closure_set(v___f_101_, 3, v_inst_85_);
lean_closure_set(v___f_101_, 4, v_inst_87_);
lean_closure_set(v___f_101_, 5, v_inst_88_);
lean_closure_set(v___f_101_, 6, v_inst_89_);
lean_closure_set(v___f_101_, 7, v_toBind_92_);
lean_closure_set(v___f_101_, 8, v___f_98_);
v___x_102_ = l_Lean_rewriteManualLinksCore(v_str_94_);
v___x_103_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__5___boxed), 4, 3);
lean_closure_set(v___x_103_, 0, lean_box(0));
lean_closure_set(v___x_103_, 1, lean_box(0));
lean_closure_set(v___x_103_, 2, v___x_102_);
v___x_104_ = lean_apply_2(v_inst_86_, lean_box(0), v___x_103_);
v___x_105_ = lean_apply_4(v_toBind_92_, lean_box(0), lean_box(0), v___x_104_, v___f_101_);
return v___x_105_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___boxed(lean_object* v_inst_110_, lean_object* v_inst_111_, lean_object* v_inst_112_, lean_object* v_inst_113_, lean_object* v_inst_114_, lean_object* v_docstring_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Lean_validateDocComment___redArg(v_inst_110_, v_inst_111_, v_inst_112_, v_inst_113_, v_inst_114_, v_docstring_115_);
lean_dec(v_docstring_115_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment(lean_object* v_m_117_, lean_object* v_inst_118_, lean_object* v_inst_119_, lean_object* v_inst_120_, lean_object* v_inst_121_, lean_object* v_inst_122_, lean_object* v_docstring_123_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Lean_validateDocComment___redArg(v_inst_118_, v_inst_119_, v_inst_120_, v_inst_121_, v_inst_122_, v_docstring_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___boxed(lean_object* v_m_125_, lean_object* v_inst_126_, lean_object* v_inst_127_, lean_object* v_inst_128_, lean_object* v_inst_129_, lean_object* v_inst_130_, lean_object* v_docstring_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_Lean_validateDocComment(v_m_125_, v_inst_126_, v_inst_127_, v_inst_128_, v_inst_129_, v_inst_130_, v_docstring_131_);
lean_dec(v_docstring_131_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__0(lean_object* v_toApplicative_133_, lean_object* v_____s_134_){
_start:
{
lean_object* v_toPure_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v_toPure_135_ = lean_ctor_get(v_toApplicative_133_, 1);
lean_inc(v_toPure_135_);
lean_dec_ref(v_toApplicative_133_);
v___x_136_ = lean_box(0);
v___x_137_ = lean_apply_2(v_toPure_135_, lean_box(0), v___x_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__1(lean_object* v_toApplicative_138_, lean_object* v_____r_139_){
_start:
{
lean_object* v_toPure_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v_toPure_140_ = lean_ctor_get(v_toApplicative_138_, 1);
lean_inc(v_toPure_140_);
lean_dec_ref(v_toApplicative_138_);
v___x_141_ = lean_box(0);
v___x_142_ = lean_apply_2(v_toPure_140_, lean_box(0), v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__2(lean_object* v_toApplicative_143_, lean_object* v___x_144_, lean_object* v_____r_145_){
_start:
{
lean_object* v_toPure_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v_toPure_146_ = lean_ctor_get(v_toApplicative_143_, 1);
lean_inc(v_toPure_146_);
lean_dec_ref(v_toApplicative_143_);
v___x_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_147_, 0, v___x_144_);
v___x_148_ = lean_apply_2(v_toPure_146_, lean_box(0), v___x_147_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3(lean_object* v_text_150_, lean_object* v_fst_151_, lean_object* v_snd_152_, uint8_t v___x_153_, lean_object* v_logMessage_154_, lean_object* v_toBind_155_, lean_object* v___f_156_, lean_object* v_____do__lift_157_){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; uint8_t v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_158_ = l_Lean_FileMap_toPosition(v_text_150_, v_fst_151_);
v___x_159_ = lean_box(0);
v___x_160_ = 2;
v___x_161_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_162_ = l_Lean_Parser_Error_toString(v_snd_152_);
v___x_163_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
v___x_164_ = l_Lean_MessageData_ofFormat(v___x_163_);
v___x_165_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_165_, 0, v_____do__lift_157_);
lean_ctor_set(v___x_165_, 1, v___x_158_);
lean_ctor_set(v___x_165_, 2, v___x_159_);
lean_ctor_set(v___x_165_, 3, v___x_161_);
lean_ctor_set(v___x_165_, 4, v___x_164_);
lean_ctor_set_uint8(v___x_165_, sizeof(void*)*5, v___x_153_);
lean_ctor_set_uint8(v___x_165_, sizeof(void*)*5 + 1, v___x_160_);
lean_ctor_set_uint8(v___x_165_, sizeof(void*)*5 + 2, v___x_153_);
v___x_166_ = lean_apply_1(v_logMessage_154_, v___x_165_);
v___x_167_ = lean_apply_4(v_toBind_155_, lean_box(0), lean_box(0), v___x_166_, v___f_156_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3___boxed(lean_object* v_text_168_, lean_object* v_fst_169_, lean_object* v_snd_170_, lean_object* v___x_171_, lean_object* v_logMessage_172_, lean_object* v_toBind_173_, lean_object* v___f_174_, lean_object* v_____do__lift_175_){
_start:
{
uint8_t v___x_1931__boxed_176_; lean_object* v_res_177_; 
v___x_1931__boxed_176_ = lean_unbox(v___x_171_);
v_res_177_ = l_Lean_parseVersoDocString___redArg___lam__3(v_text_168_, v_fst_169_, v_snd_170_, v___x_1931__boxed_176_, v_logMessage_172_, v_toBind_173_, v___f_174_, v_____do__lift_175_);
lean_dec(v_fst_169_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4(lean_object* v_text_178_, uint8_t v___x_179_, lean_object* v_logMessage_180_, lean_object* v_toBind_181_, lean_object* v___f_182_, lean_object* v_getFileName_183_, lean_object* v_a_184_, lean_object* v_x_185_, lean_object* v___y_186_){
_start:
{
lean_object* v_snd_187_; lean_object* v_fst_188_; lean_object* v_snd_189_; lean_object* v___x_190_; lean_object* v___f_191_; lean_object* v___x_192_; 
v_snd_187_ = lean_ctor_get(v_a_184_, 1);
lean_inc(v_snd_187_);
v_fst_188_ = lean_ctor_get(v_a_184_, 0);
lean_inc(v_fst_188_);
lean_dec_ref(v_a_184_);
v_snd_189_ = lean_ctor_get(v_snd_187_, 1);
lean_inc(v_snd_189_);
lean_dec(v_snd_187_);
v___x_190_ = lean_box(v___x_179_);
lean_inc(v_toBind_181_);
v___f_191_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_191_, 0, v_text_178_);
lean_closure_set(v___f_191_, 1, v_fst_188_);
lean_closure_set(v___f_191_, 2, v_snd_189_);
lean_closure_set(v___f_191_, 3, v___x_190_);
lean_closure_set(v___f_191_, 4, v_logMessage_180_);
lean_closure_set(v___f_191_, 5, v_toBind_181_);
lean_closure_set(v___f_191_, 6, v___f_182_);
v___x_192_ = lean_apply_4(v_toBind_181_, lean_box(0), lean_box(0), v_getFileName_183_, v___f_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4___boxed(lean_object* v_text_193_, lean_object* v___x_194_, lean_object* v_logMessage_195_, lean_object* v_toBind_196_, lean_object* v___f_197_, lean_object* v_getFileName_198_, lean_object* v_a_199_, lean_object* v_x_200_, lean_object* v___y_201_){
_start:
{
uint8_t v___x_1965__boxed_202_; lean_object* v_res_203_; 
v___x_1965__boxed_202_ = lean_unbox(v___x_194_);
v_res_203_ = l_Lean_parseVersoDocString___redArg___lam__4(v_text_193_, v___x_1965__boxed_202_, v_logMessage_195_, v_toBind_196_, v___f_197_, v_getFileName_198_, v_a_199_, v_x_200_, v___y_201_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5(lean_object* v_text_206_, lean_object* v_pos_207_, lean_object* v_source_208_, uint8_t v___x_209_, lean_object* v_logMessage_210_, lean_object* v_toBind_211_, lean_object* v___f_212_, lean_object* v_____do__lift_213_){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; uint8_t v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; uint32_t v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_214_ = l_Lean_FileMap_toPosition(v_text_206_, v_pos_207_);
v___x_215_ = lean_box(0);
v___x_216_ = 2;
v___x_217_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_218_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__0));
v___x_219_ = lean_string_utf8_get(v_source_208_, v_pos_207_);
v___x_220_ = lean_string_push(v___x_217_, v___x_219_);
v___x_221_ = lean_string_append(v___x_218_, v___x_220_);
lean_dec_ref(v___x_220_);
v___x_222_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__1));
v___x_223_ = lean_string_append(v___x_221_, v___x_222_);
v___x_224_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
v___x_225_ = l_Lean_MessageData_ofFormat(v___x_224_);
v___x_226_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_226_, 0, v_____do__lift_213_);
lean_ctor_set(v___x_226_, 1, v___x_214_);
lean_ctor_set(v___x_226_, 2, v___x_215_);
lean_ctor_set(v___x_226_, 3, v___x_217_);
lean_ctor_set(v___x_226_, 4, v___x_225_);
lean_ctor_set_uint8(v___x_226_, sizeof(void*)*5, v___x_209_);
lean_ctor_set_uint8(v___x_226_, sizeof(void*)*5 + 1, v___x_216_);
lean_ctor_set_uint8(v___x_226_, sizeof(void*)*5 + 2, v___x_209_);
v___x_227_ = lean_apply_1(v_logMessage_210_, v___x_226_);
v___x_228_ = lean_apply_4(v_toBind_211_, lean_box(0), lean_box(0), v___x_227_, v___f_212_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5___boxed(lean_object* v_text_229_, lean_object* v_pos_230_, lean_object* v_source_231_, lean_object* v___x_232_, lean_object* v_logMessage_233_, lean_object* v_toBind_234_, lean_object* v___f_235_, lean_object* v_____do__lift_236_){
_start:
{
uint8_t v___x_1995__boxed_237_; lean_object* v_res_238_; 
v___x_1995__boxed_237_ = lean_unbox(v___x_232_);
v_res_238_ = l_Lean_parseVersoDocString___redArg___lam__5(v_text_229_, v_pos_230_, v_source_231_, v___x_1995__boxed_237_, v_logMessage_233_, v_toBind_234_, v___f_235_, v_____do__lift_236_);
lean_dec_ref(v_source_231_);
lean_dec(v_pos_230_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6(lean_object* v_toApplicative_239_, lean_object* v_text_240_, lean_object* v_logMessage_241_, lean_object* v_toBind_242_, lean_object* v_getFileName_243_, lean_object* v_inst_244_, lean_object* v___f_245_, lean_object* v_ictx_246_, lean_object* v_source_247_, lean_object* v___f_248_, lean_object* v_env_249_, lean_object* v_____do__lift_250_, lean_object* v_____do__lift_251_, lean_object* v_val_252_, lean_object* v___y_253_, lean_object* v___x_254_, lean_object* v_____do__lift_255_){
_start:
{
lean_object* v___y_257_; lean_object* v_pmctx_280_; lean_object* v_blockCtxt_281_; lean_object* v___x_282_; lean_object* v_s_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v_s_286_; uint8_t v___y_288_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; uint8_t v___x_301_; 
lean_inc_ref(v_env_249_);
v_pmctx_280_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_pmctx_280_, 0, v_env_249_);
lean_ctor_set(v_pmctx_280_, 1, v_____do__lift_250_);
lean_ctor_set(v_pmctx_280_, 2, v_____do__lift_251_);
lean_ctor_set(v_pmctx_280_, 3, v_____do__lift_255_);
lean_inc(v_val_252_);
lean_inc_ref(v_text_240_);
v_blockCtxt_281_ = l_Lean_Doc_Parser_BlockCtxt_forDocString(v_text_240_, v_val_252_, v___y_253_);
v___x_282_ = l_Lean_Parser_mkParserState(v_source_247_);
lean_inc_ref(v___x_282_);
v_s_283_ = l_Lean_Parser_ParserState_setPos(v___x_282_, v_val_252_);
v___x_284_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document), 3, 1);
lean_closure_set(v___x_284_, 0, v_blockCtxt_281_);
v___x_285_ = l_Lean_Parser_getTokenTable(v_env_249_);
lean_inc_ref(v___x_285_);
lean_inc_ref(v_pmctx_280_);
lean_inc_ref(v_ictx_246_);
v_s_286_ = l_Lean_Parser_ParserFn_run(v___x_284_, v_ictx_246_, v_pmctx_280_, v___x_285_, v_s_283_);
lean_inc_ref(v_s_286_);
v___x_298_ = l_Lean_Parser_ParserState_allErrors(v_s_286_);
v___x_299_ = lean_array_get_size(v___x_298_);
lean_dec_ref(v___x_298_);
v___x_300_ = lean_unsigned_to_nat(0u);
v___x_301_ = lean_nat_dec_eq(v___x_299_, v___x_300_);
if (v___x_301_ == 0)
{
v___y_288_ = v___x_301_;
goto v___jp_287_;
}
else
{
lean_object* v_pos_302_; uint8_t v___x_303_; 
v_pos_302_ = lean_ctor_get(v_s_286_, 2);
lean_inc(v_pos_302_);
v___x_303_ = l_Lean_Parser_InputContext_atEnd(v_ictx_246_, v_pos_302_);
lean_dec(v_pos_302_);
if (v___x_303_ == 0)
{
v___y_288_ = v___x_301_;
goto v___jp_287_;
}
else
{
lean_dec_ref(v___x_285_);
lean_dec_ref(v___x_282_);
lean_dec_ref(v_pmctx_280_);
lean_dec(v___x_254_);
v___y_257_ = v_s_286_;
goto v___jp_256_;
}
}
v___jp_256_:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; uint8_t v___x_261_; 
lean_inc_ref(v___y_257_);
v___x_258_ = l_Lean_Parser_ParserState_allErrors(v___y_257_);
v___x_259_ = lean_array_get_size(v___x_258_);
v___x_260_ = lean_unsigned_to_nat(0u);
v___x_261_ = lean_nat_dec_eq(v___x_259_, v___x_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; lean_object* v___f_263_; lean_object* v___x_264_; lean_object* v___f_265_; size_t v_sz_266_; size_t v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
lean_dec_ref(v___y_257_);
lean_dec(v___f_248_);
lean_dec_ref(v_source_247_);
lean_dec_ref(v_ictx_246_);
v___x_262_ = lean_box(0);
v___f_263_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__2), 3, 2);
lean_closure_set(v___f_263_, 0, v_toApplicative_239_);
lean_closure_set(v___f_263_, 1, v___x_262_);
v___x_264_ = lean_box(v___x_261_);
lean_inc(v_toBind_242_);
v___f_265_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__4___boxed), 9, 6);
lean_closure_set(v___f_265_, 0, v_text_240_);
lean_closure_set(v___f_265_, 1, v___x_264_);
lean_closure_set(v___f_265_, 2, v_logMessage_241_);
lean_closure_set(v___f_265_, 3, v_toBind_242_);
lean_closure_set(v___f_265_, 4, v___f_263_);
lean_closure_set(v___f_265_, 5, v_getFileName_243_);
v_sz_266_ = lean_array_size(v___x_258_);
v___x_267_ = ((size_t)0ULL);
v___x_268_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_244_, v___x_258_, v___f_265_, v_sz_266_, v___x_267_, v___x_262_);
v___x_269_ = lean_apply_4(v_toBind_242_, lean_box(0), lean_box(0), v___x_268_, v___f_245_);
return v___x_269_;
}
else
{
lean_object* v_stxStack_270_; lean_object* v_pos_271_; uint8_t v___x_272_; 
lean_dec_ref(v___x_258_);
lean_dec(v___f_245_);
lean_dec_ref(v_inst_244_);
v_stxStack_270_ = lean_ctor_get(v___y_257_, 0);
lean_inc_ref(v_stxStack_270_);
v_pos_271_ = lean_ctor_get(v___y_257_, 2);
lean_inc(v_pos_271_);
lean_dec_ref(v___y_257_);
v___x_272_ = l_Lean_Parser_InputContext_atEnd(v_ictx_246_, v_pos_271_);
lean_dec_ref(v_ictx_246_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; lean_object* v___f_274_; lean_object* v___x_275_; 
lean_dec_ref(v_stxStack_270_);
lean_dec_ref(v_toApplicative_239_);
v___x_273_ = lean_box(v___x_272_);
lean_inc(v_toBind_242_);
v___f_274_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_274_, 0, v_text_240_);
lean_closure_set(v___f_274_, 1, v_pos_271_);
lean_closure_set(v___f_274_, 2, v_source_247_);
lean_closure_set(v___f_274_, 3, v___x_273_);
lean_closure_set(v___f_274_, 4, v_logMessage_241_);
lean_closure_set(v___f_274_, 5, v_toBind_242_);
lean_closure_set(v___f_274_, 6, v___f_248_);
v___x_275_ = lean_apply_4(v_toBind_242_, lean_box(0), lean_box(0), v_getFileName_243_, v___f_274_);
return v___x_275_;
}
else
{
lean_object* v_toPure_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
lean_dec(v_pos_271_);
lean_dec(v___f_248_);
lean_dec_ref(v_source_247_);
lean_dec(v_getFileName_243_);
lean_dec(v_toBind_242_);
lean_dec(v_logMessage_241_);
lean_dec_ref(v_text_240_);
v_toPure_276_ = lean_ctor_get(v_toApplicative_239_, 1);
lean_inc(v_toPure_276_);
lean_dec_ref(v_toApplicative_239_);
v___x_277_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_270_);
lean_dec_ref(v_stxStack_270_);
v___x_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
v___x_279_ = lean_apply_2(v_toPure_276_, lean_box(0), v___x_278_);
return v___x_279_;
}
}
}
v___jp_287_:
{
if (v___y_288_ == 0)
{
lean_dec_ref(v___x_285_);
lean_dec_ref(v___x_282_);
lean_dec_ref(v_pmctx_280_);
lean_dec(v___x_254_);
v___y_257_ = v_s_286_;
goto v___jp_256_;
}
else
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v_pos_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_289_ = lean_unsigned_to_nat(0u);
v___x_290_ = lean_box(0);
v___x_291_ = lean_box(0);
v___x_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_254_);
lean_ctor_set(v___x_292_, 1, v___x_289_);
v___x_293_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_293_, 0, v___x_289_);
lean_ctor_set(v___x_293_, 1, v___x_290_);
lean_ctor_set(v___x_293_, 2, v___x_291_);
lean_ctor_set(v___x_293_, 3, v___x_292_);
lean_ctor_set(v___x_293_, 4, v___x_289_);
v_pos_294_ = lean_ctor_get(v_s_286_, 2);
lean_inc(v_pos_294_);
lean_dec_ref(v_s_286_);
v___x_295_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_block), 3, 1);
lean_closure_set(v___x_295_, 0, v___x_293_);
v___x_296_ = l_Lean_Parser_ParserState_setPos(v___x_282_, v_pos_294_);
lean_inc_ref(v_ictx_246_);
v___x_297_ = l_Lean_Parser_ParserFn_run(v___x_295_, v_ictx_246_, v_pmctx_280_, v___x_285_, v___x_296_);
v___y_257_ = v___x_297_;
goto v___jp_256_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_toApplicative_304_ = _args[0];
lean_object* v_text_305_ = _args[1];
lean_object* v_logMessage_306_ = _args[2];
lean_object* v_toBind_307_ = _args[3];
lean_object* v_getFileName_308_ = _args[4];
lean_object* v_inst_309_ = _args[5];
lean_object* v___f_310_ = _args[6];
lean_object* v_ictx_311_ = _args[7];
lean_object* v_source_312_ = _args[8];
lean_object* v___f_313_ = _args[9];
lean_object* v_env_314_ = _args[10];
lean_object* v_____do__lift_315_ = _args[11];
lean_object* v_____do__lift_316_ = _args[12];
lean_object* v_val_317_ = _args[13];
lean_object* v___y_318_ = _args[14];
lean_object* v___x_319_ = _args[15];
lean_object* v_____do__lift_320_ = _args[16];
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Lean_parseVersoDocString___redArg___lam__6(v_toApplicative_304_, v_text_305_, v_logMessage_306_, v_toBind_307_, v_getFileName_308_, v_inst_309_, v___f_310_, v_ictx_311_, v_source_312_, v___f_313_, v_env_314_, v_____do__lift_315_, v_____do__lift_316_, v_val_317_, v___y_318_, v___x_319_, v_____do__lift_320_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7(lean_object* v_toApplicative_322_, lean_object* v_text_323_, lean_object* v_logMessage_324_, lean_object* v_toBind_325_, lean_object* v_getFileName_326_, lean_object* v_inst_327_, lean_object* v___f_328_, lean_object* v_ictx_329_, lean_object* v_source_330_, lean_object* v___f_331_, lean_object* v_env_332_, lean_object* v_____do__lift_333_, lean_object* v_val_334_, lean_object* v___y_335_, lean_object* v___x_336_, lean_object* v_getOpenDecls_337_, lean_object* v_____do__lift_338_){
_start:
{
lean_object* v___f_339_; lean_object* v___x_340_; 
lean_inc(v_toBind_325_);
v___f_339_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__6___boxed), 17, 16);
lean_closure_set(v___f_339_, 0, v_toApplicative_322_);
lean_closure_set(v___f_339_, 1, v_text_323_);
lean_closure_set(v___f_339_, 2, v_logMessage_324_);
lean_closure_set(v___f_339_, 3, v_toBind_325_);
lean_closure_set(v___f_339_, 4, v_getFileName_326_);
lean_closure_set(v___f_339_, 5, v_inst_327_);
lean_closure_set(v___f_339_, 6, v___f_328_);
lean_closure_set(v___f_339_, 7, v_ictx_329_);
lean_closure_set(v___f_339_, 8, v_source_330_);
lean_closure_set(v___f_339_, 9, v___f_331_);
lean_closure_set(v___f_339_, 10, v_env_332_);
lean_closure_set(v___f_339_, 11, v_____do__lift_333_);
lean_closure_set(v___f_339_, 12, v_____do__lift_338_);
lean_closure_set(v___f_339_, 13, v_val_334_);
lean_closure_set(v___f_339_, 14, v___y_335_);
lean_closure_set(v___f_339_, 15, v___x_336_);
v___x_340_ = lean_apply_4(v_toBind_325_, lean_box(0), lean_box(0), v_getOpenDecls_337_, v___f_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7___boxed(lean_object** _args){
lean_object* v_toApplicative_341_ = _args[0];
lean_object* v_text_342_ = _args[1];
lean_object* v_logMessage_343_ = _args[2];
lean_object* v_toBind_344_ = _args[3];
lean_object* v_getFileName_345_ = _args[4];
lean_object* v_inst_346_ = _args[5];
lean_object* v___f_347_ = _args[6];
lean_object* v_ictx_348_ = _args[7];
lean_object* v_source_349_ = _args[8];
lean_object* v___f_350_ = _args[9];
lean_object* v_env_351_ = _args[10];
lean_object* v_____do__lift_352_ = _args[11];
lean_object* v_val_353_ = _args[12];
lean_object* v___y_354_ = _args[13];
lean_object* v___x_355_ = _args[14];
lean_object* v_getOpenDecls_356_ = _args[15];
lean_object* v_____do__lift_357_ = _args[16];
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Lean_parseVersoDocString___redArg___lam__7(v_toApplicative_341_, v_text_342_, v_logMessage_343_, v_toBind_344_, v_getFileName_345_, v_inst_346_, v___f_347_, v_ictx_348_, v_source_349_, v___f_350_, v_env_351_, v_____do__lift_352_, v_val_353_, v___y_354_, v___x_355_, v_getOpenDecls_356_, v_____do__lift_357_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__8(lean_object* v_inst_359_, lean_object* v_toApplicative_360_, lean_object* v_text_361_, lean_object* v_logMessage_362_, lean_object* v_toBind_363_, lean_object* v_getFileName_364_, lean_object* v_inst_365_, lean_object* v___f_366_, lean_object* v_ictx_367_, lean_object* v_source_368_, lean_object* v___f_369_, lean_object* v_env_370_, lean_object* v_val_371_, lean_object* v___y_372_, lean_object* v___x_373_, lean_object* v_____do__lift_374_){
_start:
{
lean_object* v_getCurrNamespace_375_; lean_object* v_getOpenDecls_376_; lean_object* v___f_377_; lean_object* v___x_378_; 
v_getCurrNamespace_375_ = lean_ctor_get(v_inst_359_, 0);
lean_inc(v_getCurrNamespace_375_);
v_getOpenDecls_376_ = lean_ctor_get(v_inst_359_, 1);
lean_inc(v_getOpenDecls_376_);
lean_dec_ref(v_inst_359_);
lean_inc(v_toBind_363_);
v___f_377_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__7___boxed), 17, 16);
lean_closure_set(v___f_377_, 0, v_toApplicative_360_);
lean_closure_set(v___f_377_, 1, v_text_361_);
lean_closure_set(v___f_377_, 2, v_logMessage_362_);
lean_closure_set(v___f_377_, 3, v_toBind_363_);
lean_closure_set(v___f_377_, 4, v_getFileName_364_);
lean_closure_set(v___f_377_, 5, v_inst_365_);
lean_closure_set(v___f_377_, 6, v___f_366_);
lean_closure_set(v___f_377_, 7, v_ictx_367_);
lean_closure_set(v___f_377_, 8, v_source_368_);
lean_closure_set(v___f_377_, 9, v___f_369_);
lean_closure_set(v___f_377_, 10, v_env_370_);
lean_closure_set(v___f_377_, 11, v_____do__lift_374_);
lean_closure_set(v___f_377_, 12, v_val_371_);
lean_closure_set(v___f_377_, 13, v___y_372_);
lean_closure_set(v___f_377_, 14, v___x_373_);
lean_closure_set(v___f_377_, 15, v_getOpenDecls_376_);
v___x_378_ = lean_apply_4(v_toBind_363_, lean_box(0), lean_box(0), v_getCurrNamespace_375_, v___f_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__9(lean_object* v_source_379_, lean_object* v_text_380_, lean_object* v___y_381_, lean_object* v_inst_382_, lean_object* v_toApplicative_383_, lean_object* v_logMessage_384_, lean_object* v_toBind_385_, lean_object* v_getFileName_386_, lean_object* v_inst_387_, lean_object* v___f_388_, lean_object* v___f_389_, lean_object* v_env_390_, lean_object* v_val_391_, lean_object* v___x_392_, lean_object* v_inst_393_, lean_object* v_____do__lift_394_){
_start:
{
lean_object* v_ictx_395_; lean_object* v___f_396_; lean_object* v___x_397_; 
lean_inc(v___y_381_);
lean_inc_ref(v_text_380_);
lean_inc_ref(v_source_379_);
v_ictx_395_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_ictx_395_, 0, v_source_379_);
lean_ctor_set(v_ictx_395_, 1, v_____do__lift_394_);
lean_ctor_set(v_ictx_395_, 2, v_text_380_);
lean_ctor_set(v_ictx_395_, 3, v___y_381_);
lean_inc(v_toBind_385_);
v___f_396_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__8), 16, 15);
lean_closure_set(v___f_396_, 0, v_inst_382_);
lean_closure_set(v___f_396_, 1, v_toApplicative_383_);
lean_closure_set(v___f_396_, 2, v_text_380_);
lean_closure_set(v___f_396_, 3, v_logMessage_384_);
lean_closure_set(v___f_396_, 4, v_toBind_385_);
lean_closure_set(v___f_396_, 5, v_getFileName_386_);
lean_closure_set(v___f_396_, 6, v_inst_387_);
lean_closure_set(v___f_396_, 7, v___f_388_);
lean_closure_set(v___f_396_, 8, v_ictx_395_);
lean_closure_set(v___f_396_, 9, v_source_379_);
lean_closure_set(v___f_396_, 10, v___f_389_);
lean_closure_set(v___f_396_, 11, v_env_390_);
lean_closure_set(v___f_396_, 12, v_val_391_);
lean_closure_set(v___f_396_, 13, v___y_381_);
lean_closure_set(v___f_396_, 14, v___x_392_);
v___x_397_ = lean_apply_4(v_toBind_385_, lean_box(0), lean_box(0), v_inst_393_, v___f_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__10(lean_object* v_inst_398_, lean_object* v_source_399_, lean_object* v_text_400_, lean_object* v___y_401_, lean_object* v_inst_402_, lean_object* v_toApplicative_403_, lean_object* v_toBind_404_, lean_object* v_inst_405_, lean_object* v___f_406_, lean_object* v___f_407_, lean_object* v_val_408_, lean_object* v___x_409_, lean_object* v_inst_410_, lean_object* v_env_411_){
_start:
{
lean_object* v_getFileName_412_; lean_object* v_logMessage_413_; lean_object* v___f_414_; lean_object* v___x_415_; 
v_getFileName_412_ = lean_ctor_get(v_inst_398_, 2);
lean_inc(v_getFileName_412_);
v_logMessage_413_ = lean_ctor_get(v_inst_398_, 4);
lean_inc(v_logMessage_413_);
lean_dec_ref(v_inst_398_);
lean_inc(v_getFileName_412_);
lean_inc(v_toBind_404_);
v___f_414_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__9), 16, 15);
lean_closure_set(v___f_414_, 0, v_source_399_);
lean_closure_set(v___f_414_, 1, v_text_400_);
lean_closure_set(v___f_414_, 2, v___y_401_);
lean_closure_set(v___f_414_, 3, v_inst_402_);
lean_closure_set(v___f_414_, 4, v_toApplicative_403_);
lean_closure_set(v___f_414_, 5, v_logMessage_413_);
lean_closure_set(v___f_414_, 6, v_toBind_404_);
lean_closure_set(v___f_414_, 7, v_getFileName_412_);
lean_closure_set(v___f_414_, 8, v_inst_405_);
lean_closure_set(v___f_414_, 9, v___f_406_);
lean_closure_set(v___f_414_, 10, v___f_407_);
lean_closure_set(v___f_414_, 11, v_env_411_);
lean_closure_set(v___f_414_, 12, v_val_408_);
lean_closure_set(v___f_414_, 13, v___x_409_);
lean_closure_set(v___f_414_, 14, v_inst_410_);
v___x_415_ = lean_apply_4(v_toBind_404_, lean_box(0), lean_box(0), v_getFileName_412_, v___f_414_);
return v___x_415_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1(void){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_417_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__11___closed__0));
v___x_418_ = l_Lean_stringToMessageData(v___x_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__11(lean_object* v_docComment_419_, lean_object* v_inst_420_, lean_object* v_inst_421_, lean_object* v_inst_422_, lean_object* v_toApplicative_423_, lean_object* v_toBind_424_, lean_object* v_inst_425_, lean_object* v___f_426_, lean_object* v___f_427_, lean_object* v_inst_428_, lean_object* v_inst_429_, lean_object* v_text_430_){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; uint8_t v___x_433_; lean_object* v___x_434_; 
v___x_431_ = lean_unsigned_to_nat(1u);
v___x_432_ = l_Lean_Syntax_getArg(v_docComment_419_, v___x_431_);
v___x_433_ = 1;
v___x_434_ = l_Lean_Syntax_getPos_x3f(v___x_432_, v___x_433_);
if (lean_obj_tag(v___x_434_) == 1)
{
lean_object* v_val_435_; lean_object* v___x_436_; 
v_val_435_ = lean_ctor_get(v___x_434_, 0);
lean_inc(v_val_435_);
lean_dec_ref(v___x_434_);
v___x_436_ = l_Lean_Syntax_getTailPos_x3f(v___x_432_, v___x_433_);
lean_dec(v___x_432_);
if (lean_obj_tag(v___x_436_) == 1)
{
lean_object* v_val_437_; lean_object* v_source_438_; lean_object* v___y_440_; lean_object* v___x_444_; lean_object* v_endPos_445_; lean_object* v___x_446_; uint8_t v___x_447_; 
lean_dec_ref(v_inst_429_);
lean_dec(v_docComment_419_);
v_val_437_ = lean_ctor_get(v___x_436_, 0);
lean_inc(v_val_437_);
lean_dec_ref(v___x_436_);
v_source_438_ = lean_ctor_get(v_text_430_, 0);
lean_inc_ref(v_source_438_);
v___x_444_ = lean_string_utf8_prev(v_source_438_, v_val_437_);
lean_dec(v_val_437_);
v_endPos_445_ = lean_string_utf8_prev(v_source_438_, v___x_444_);
lean_dec(v___x_444_);
v___x_446_ = lean_string_utf8_byte_size(v_source_438_);
v___x_447_ = lean_nat_dec_le(v_endPos_445_, v___x_446_);
if (v___x_447_ == 0)
{
lean_dec(v_endPos_445_);
v___y_440_ = v___x_446_;
goto v___jp_439_;
}
else
{
v___y_440_ = v_endPos_445_;
goto v___jp_439_;
}
v___jp_439_:
{
lean_object* v_getEnv_441_; lean_object* v___f_442_; lean_object* v___x_443_; 
v_getEnv_441_ = lean_ctor_get(v_inst_420_, 0);
lean_inc(v_getEnv_441_);
lean_dec_ref(v_inst_420_);
lean_inc(v_toBind_424_);
v___f_442_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__10), 14, 13);
lean_closure_set(v___f_442_, 0, v_inst_421_);
lean_closure_set(v___f_442_, 1, v_source_438_);
lean_closure_set(v___f_442_, 2, v_text_430_);
lean_closure_set(v___f_442_, 3, v___y_440_);
lean_closure_set(v___f_442_, 4, v_inst_422_);
lean_closure_set(v___f_442_, 5, v_toApplicative_423_);
lean_closure_set(v___f_442_, 6, v_toBind_424_);
lean_closure_set(v___f_442_, 7, v_inst_425_);
lean_closure_set(v___f_442_, 8, v___f_426_);
lean_closure_set(v___f_442_, 9, v___f_427_);
lean_closure_set(v___f_442_, 10, v_val_435_);
lean_closure_set(v___f_442_, 11, v___x_431_);
lean_closure_set(v___f_442_, 12, v_inst_428_);
v___x_443_ = lean_apply_4(v_toBind_424_, lean_box(0), lean_box(0), v_getEnv_441_, v___f_442_);
return v___x_443_;
}
}
else
{
lean_object* v___x_448_; lean_object* v___x_449_; 
lean_dec(v___x_436_);
lean_dec(v_val_435_);
lean_dec_ref(v_text_430_);
lean_dec(v_inst_428_);
lean_dec(v___f_427_);
lean_dec(v___f_426_);
lean_dec(v_toBind_424_);
lean_dec_ref(v_toApplicative_423_);
lean_dec_ref(v_inst_422_);
lean_dec_ref(v_inst_421_);
lean_dec_ref(v_inst_420_);
v___x_448_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_449_ = l_Lean_throwErrorAt___redArg(v_inst_425_, v_inst_429_, v_docComment_419_, v___x_448_);
return v___x_449_;
}
}
else
{
lean_object* v___x_450_; lean_object* v___x_451_; 
lean_dec(v___x_434_);
lean_dec(v___x_432_);
lean_dec_ref(v_text_430_);
lean_dec(v_inst_428_);
lean_dec(v___f_427_);
lean_dec(v___f_426_);
lean_dec(v_toBind_424_);
lean_dec_ref(v_toApplicative_423_);
lean_dec_ref(v_inst_422_);
lean_dec_ref(v_inst_421_);
lean_dec_ref(v_inst_420_);
v___x_450_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_451_ = l_Lean_throwErrorAt___redArg(v_inst_425_, v_inst_429_, v_docComment_419_, v___x_450_);
return v___x_451_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg(lean_object* v_inst_462_, lean_object* v_inst_463_, lean_object* v_inst_464_, lean_object* v_inst_465_, lean_object* v_inst_466_, lean_object* v_inst_467_, lean_object* v_inst_468_, lean_object* v_docComment_469_){
_start:
{
lean_object* v_toApplicative_470_; lean_object* v_toBind_471_; lean_object* v___f_472_; lean_object* v___f_473_; lean_object* v___f_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; uint8_t v___x_480_; 
v_toApplicative_470_ = lean_ctor_get(v_inst_462_, 0);
lean_inc_ref(v_toApplicative_470_);
v_toBind_471_ = lean_ctor_get(v_inst_462_, 1);
lean_inc(v_toBind_471_);
lean_inc_ref(v_toApplicative_470_);
v___f_472_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__0), 2, 1);
lean_closure_set(v___f_472_, 0, v_toApplicative_470_);
lean_inc_ref(v_toApplicative_470_);
v___f_473_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__1), 2, 1);
lean_closure_set(v___f_473_, 0, v_toApplicative_470_);
lean_inc(v_toBind_471_);
lean_inc_ref(v_toApplicative_470_);
lean_inc(v_docComment_469_);
v___f_474_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__11), 12, 11);
lean_closure_set(v___f_474_, 0, v_docComment_469_);
lean_closure_set(v___f_474_, 1, v_inst_465_);
lean_closure_set(v___f_474_, 2, v_inst_467_);
lean_closure_set(v___f_474_, 3, v_inst_468_);
lean_closure_set(v___f_474_, 4, v_toApplicative_470_);
lean_closure_set(v___f_474_, 5, v_toBind_471_);
lean_closure_set(v___f_474_, 6, v_inst_462_);
lean_closure_set(v___f_474_, 7, v___f_472_);
lean_closure_set(v___f_474_, 8, v___f_473_);
lean_closure_set(v___f_474_, 9, v_inst_466_);
lean_closure_set(v___f_474_, 10, v_inst_464_);
lean_inc(v_docComment_469_);
v___x_475_ = l_Lean_Syntax_getKind(v_docComment_469_);
v___x_476_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__0));
v___x_477_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__1));
v___x_478_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__2));
v___x_479_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__4));
v___x_480_ = lean_name_eq(v___x_475_, v___x_479_);
lean_dec(v___x_475_);
if (v___x_480_ == 0)
{
lean_object* v___x_481_; 
lean_dec_ref(v_toApplicative_470_);
lean_dec(v_docComment_469_);
v___x_481_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_481_;
}
else
{
lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_482_ = lean_unsigned_to_nat(0u);
v___x_483_ = l_Lean_Syntax_getArg(v_docComment_469_, v___x_482_);
lean_dec(v_docComment_469_);
if (lean_obj_tag(v___x_483_) == 1)
{
lean_object* v_kind_484_; 
v_kind_484_ = lean_ctor_get(v___x_483_, 1);
lean_inc(v_kind_484_);
if (lean_obj_tag(v_kind_484_) == 1)
{
lean_object* v_pre_485_; 
v_pre_485_ = lean_ctor_get(v_kind_484_, 0);
lean_inc(v_pre_485_);
if (lean_obj_tag(v_pre_485_) == 1)
{
lean_object* v_pre_486_; 
v_pre_486_ = lean_ctor_get(v_pre_485_, 0);
lean_inc(v_pre_486_);
if (lean_obj_tag(v_pre_486_) == 1)
{
lean_object* v_pre_487_; 
v_pre_487_ = lean_ctor_get(v_pre_486_, 0);
lean_inc(v_pre_487_);
if (lean_obj_tag(v_pre_487_) == 1)
{
lean_object* v_pre_488_; 
v_pre_488_ = lean_ctor_get(v_pre_487_, 0);
lean_inc(v_pre_488_);
if (lean_obj_tag(v_pre_488_) == 0)
{
lean_object* v_info_489_; lean_object* v_args_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_522_; 
v_info_489_ = lean_ctor_get(v___x_483_, 0);
v_args_490_ = lean_ctor_get(v___x_483_, 2);
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_522_ == 0)
{
lean_object* v_unused_523_; 
v_unused_523_ = lean_ctor_get(v___x_483_, 1);
lean_dec(v_unused_523_);
v___x_492_ = v___x_483_;
v_isShared_493_ = v_isSharedCheck_522_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_args_490_);
lean_inc(v_info_489_);
lean_dec(v___x_483_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_522_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v_str_494_; lean_object* v_str_495_; lean_object* v_str_496_; lean_object* v_str_497_; uint8_t v___x_498_; 
v_str_494_ = lean_ctor_get(v_kind_484_, 1);
lean_inc_ref(v_str_494_);
lean_dec_ref(v_kind_484_);
v_str_495_ = lean_ctor_get(v_pre_485_, 1);
lean_inc_ref(v_str_495_);
lean_dec_ref(v_pre_485_);
v_str_496_ = lean_ctor_get(v_pre_486_, 1);
lean_inc_ref(v_str_496_);
lean_dec_ref(v_pre_486_);
v_str_497_ = lean_ctor_get(v_pre_487_, 1);
lean_inc_ref(v_str_497_);
lean_dec_ref(v_pre_487_);
v___x_498_ = lean_string_dec_eq(v_str_497_, v___x_476_);
lean_dec_ref(v_str_497_);
if (v___x_498_ == 0)
{
lean_object* v___x_499_; 
lean_dec_ref(v_str_496_);
lean_dec_ref(v_str_495_);
lean_dec_ref(v_str_494_);
lean_del_object(v___x_492_);
lean_dec_ref(v_args_490_);
lean_dec(v_info_489_);
lean_dec_ref(v_toApplicative_470_);
v___x_499_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_499_;
}
else
{
uint8_t v___x_500_; 
v___x_500_ = lean_string_dec_eq(v_str_496_, v___x_477_);
lean_dec_ref(v_str_496_);
if (v___x_500_ == 0)
{
lean_object* v___x_501_; 
lean_dec_ref(v_str_495_);
lean_dec_ref(v_str_494_);
lean_del_object(v___x_492_);
lean_dec_ref(v_args_490_);
lean_dec(v_info_489_);
lean_dec_ref(v_toApplicative_470_);
v___x_501_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_501_;
}
else
{
uint8_t v___x_502_; 
v___x_502_ = lean_string_dec_eq(v_str_495_, v___x_478_);
lean_dec_ref(v_str_495_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; 
lean_dec_ref(v_str_494_);
lean_del_object(v___x_492_);
lean_dec_ref(v_args_490_);
lean_dec(v_info_489_);
lean_dec_ref(v_toApplicative_470_);
v___x_503_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_503_;
}
else
{
lean_object* v___x_504_; uint8_t v___x_505_; 
v___x_504_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__5));
v___x_505_ = lean_string_dec_eq(v_str_494_, v___x_504_);
lean_dec_ref(v_str_494_);
if (v___x_505_ == 0)
{
lean_object* v___x_506_; 
lean_del_object(v___x_492_);
lean_dec_ref(v_args_490_);
lean_dec(v_info_489_);
lean_dec_ref(v_toApplicative_470_);
v___x_506_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_506_;
}
else
{
lean_dec_ref(v___f_474_);
lean_dec(v_toBind_471_);
lean_dec(v_inst_463_);
if (v___x_505_ == 0)
{
lean_object* v_toPure_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
lean_del_object(v___x_492_);
lean_dec_ref(v_args_490_);
lean_dec(v_info_489_);
v_toPure_507_ = lean_ctor_get(v_toApplicative_470_, 1);
lean_inc(v_toPure_507_);
lean_dec_ref(v_toApplicative_470_);
v___x_508_ = lean_box(0);
v___x_509_ = lean_apply_2(v_toPure_507_, lean_box(0), v___x_508_);
return v___x_509_;
}
else
{
lean_object* v_toPure_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_516_; 
v_toPure_510_ = lean_ctor_get(v_toApplicative_470_, 1);
lean_inc(v_toPure_510_);
lean_dec_ref(v_toApplicative_470_);
v___x_511_ = l_Lean_Name_str___override(v_pre_488_, v___x_476_);
v___x_512_ = l_Lean_Name_str___override(v___x_511_, v___x_477_);
v___x_513_ = l_Lean_Name_str___override(v___x_512_, v___x_478_);
v___x_514_ = l_Lean_Name_str___override(v___x_513_, v___x_504_);
if (v_isShared_493_ == 0)
{
lean_ctor_set(v___x_492_, 1, v___x_514_);
v___x_516_ = v___x_492_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v_info_489_);
lean_ctor_set(v_reuseFailAlloc_521_, 1, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_521_, 2, v_args_490_);
v___x_516_ = v_reuseFailAlloc_521_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_517_ = lean_unsigned_to_nat(1u);
v___x_518_ = l_Lean_Syntax_getArg(v___x_516_, v___x_517_);
lean_dec_ref(v___x_516_);
v___x_519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
v___x_520_ = lean_apply_2(v_toPure_510_, lean_box(0), v___x_519_);
return v___x_520_;
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
lean_object* v___x_524_; 
lean_dec(v_pre_488_);
lean_dec_ref(v_pre_487_);
lean_dec_ref(v_pre_486_);
lean_dec_ref(v_pre_485_);
lean_dec_ref(v_kind_484_);
lean_dec_ref(v___x_483_);
lean_dec_ref(v_toApplicative_470_);
v___x_524_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_524_;
}
}
else
{
lean_object* v___x_525_; 
lean_dec_ref(v_pre_486_);
lean_dec(v_pre_487_);
lean_dec_ref(v_pre_485_);
lean_dec_ref(v_kind_484_);
lean_dec_ref(v___x_483_);
lean_dec_ref(v_toApplicative_470_);
v___x_525_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_525_;
}
}
else
{
lean_object* v___x_526_; 
lean_dec(v_pre_486_);
lean_dec_ref(v_pre_485_);
lean_dec_ref(v_kind_484_);
lean_dec_ref(v___x_483_);
lean_dec_ref(v_toApplicative_470_);
v___x_526_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_526_;
}
}
else
{
lean_object* v___x_527_; 
lean_dec_ref(v_kind_484_);
lean_dec(v_pre_485_);
lean_dec_ref(v___x_483_);
lean_dec_ref(v_toApplicative_470_);
v___x_527_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_527_;
}
}
else
{
lean_object* v___x_528_; 
lean_dec(v_kind_484_);
lean_dec_ref(v___x_483_);
lean_dec_ref(v_toApplicative_470_);
v___x_528_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_528_;
}
}
else
{
lean_object* v___x_529_; 
lean_dec(v___x_483_);
lean_dec_ref(v_toApplicative_470_);
v___x_529_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_529_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString(lean_object* v_m_530_, lean_object* v_inst_531_, lean_object* v_inst_532_, lean_object* v_inst_533_, lean_object* v_inst_534_, lean_object* v_inst_535_, lean_object* v_inst_536_, lean_object* v_inst_537_, lean_object* v_docComment_538_){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = l_Lean_parseVersoDocString___redArg(v_inst_531_, v_inst_532_, v_inst_533_, v_inst_534_, v_inst_535_, v_inst_536_, v_inst_537_, v_docComment_538_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0(lean_object* v___y_540_, lean_object* v_text_541_, lean_object* v_source_542_, lean_object* v_logMessage_543_, lean_object* v_____do__lift_544_){
_start:
{
lean_object* v_pos_545_; lean_object* v___x_546_; lean_object* v___x_547_; uint8_t v___x_548_; uint8_t v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; uint32_t v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v_pos_545_ = lean_ctor_get(v___y_540_, 2);
v___x_546_ = l_Lean_FileMap_toPosition(v_text_541_, v_pos_545_);
v___x_547_ = lean_box(0);
v___x_548_ = 0;
v___x_549_ = 2;
v___x_550_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_551_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__0));
v___x_552_ = lean_string_utf8_get(v_source_542_, v_pos_545_);
v___x_553_ = lean_string_push(v___x_550_, v___x_552_);
v___x_554_ = lean_string_append(v___x_551_, v___x_553_);
lean_dec_ref(v___x_553_);
v___x_555_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__1));
v___x_556_ = lean_string_append(v___x_554_, v___x_555_);
v___x_557_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_557_, 0, v___x_556_);
v___x_558_ = l_Lean_MessageData_ofFormat(v___x_557_);
v___x_559_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_559_, 0, v_____do__lift_544_);
lean_ctor_set(v___x_559_, 1, v___x_546_);
lean_ctor_set(v___x_559_, 2, v___x_547_);
lean_ctor_set(v___x_559_, 3, v___x_550_);
lean_ctor_set(v___x_559_, 4, v___x_558_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*5, v___x_548_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*5 + 1, v___x_549_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*5 + 2, v___x_548_);
v___x_560_ = lean_apply_1(v_logMessage_543_, v___x_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0___boxed(lean_object* v___y_561_, lean_object* v_text_562_, lean_object* v_source_563_, lean_object* v_logMessage_564_, lean_object* v_____do__lift_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lean_reportVersoParseFailure___redArg___lam__0(v___y_561_, v_text_562_, v_source_563_, v_logMessage_564_, v_____do__lift_565_);
lean_dec_ref(v_source_563_);
lean_dec_ref(v___y_561_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__1(lean_object* v___x_567_, lean_object* v_toPure_568_, lean_object* v_____r_569_){
_start:
{
lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_570_, 0, v___x_567_);
v___x_571_ = lean_apply_2(v_toPure_568_, lean_box(0), v___x_570_);
return v___x_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__2(lean_object* v_text_572_, lean_object* v_fst_573_, lean_object* v_snd_574_, lean_object* v_logMessage_575_, lean_object* v_toBind_576_, lean_object* v___f_577_, lean_object* v_____do__lift_578_){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; uint8_t v___x_581_; uint8_t v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_579_ = l_Lean_FileMap_toPosition(v_text_572_, v_fst_573_);
v___x_580_ = lean_box(0);
v___x_581_ = 0;
v___x_582_ = 2;
v___x_583_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_584_ = l_Lean_Parser_Error_toString(v_snd_574_);
v___x_585_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_585_, 0, v___x_584_);
v___x_586_ = l_Lean_MessageData_ofFormat(v___x_585_);
v___x_587_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_587_, 0, v_____do__lift_578_);
lean_ctor_set(v___x_587_, 1, v___x_579_);
lean_ctor_set(v___x_587_, 2, v___x_580_);
lean_ctor_set(v___x_587_, 3, v___x_583_);
lean_ctor_set(v___x_587_, 4, v___x_586_);
lean_ctor_set_uint8(v___x_587_, sizeof(void*)*5, v___x_581_);
lean_ctor_set_uint8(v___x_587_, sizeof(void*)*5 + 1, v___x_582_);
lean_ctor_set_uint8(v___x_587_, sizeof(void*)*5 + 2, v___x_581_);
v___x_588_ = lean_apply_1(v_logMessage_575_, v___x_587_);
v___x_589_ = lean_apply_4(v_toBind_576_, lean_box(0), lean_box(0), v___x_588_, v___f_577_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__2___boxed(lean_object* v_text_590_, lean_object* v_fst_591_, lean_object* v_snd_592_, lean_object* v_logMessage_593_, lean_object* v_toBind_594_, lean_object* v___f_595_, lean_object* v_____do__lift_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l_Lean_reportVersoParseFailure___redArg___lam__2(v_text_590_, v_fst_591_, v_snd_592_, v_logMessage_593_, v_toBind_594_, v___f_595_, v_____do__lift_596_);
lean_dec(v_fst_591_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__3(lean_object* v_text_598_, lean_object* v_logMessage_599_, lean_object* v_toBind_600_, lean_object* v___f_601_, lean_object* v_getFileName_602_, lean_object* v_a_603_, lean_object* v_x_604_, lean_object* v___y_605_){
_start:
{
lean_object* v_snd_606_; lean_object* v_fst_607_; lean_object* v_snd_608_; lean_object* v___f_609_; lean_object* v___x_610_; 
v_snd_606_ = lean_ctor_get(v_a_603_, 1);
lean_inc(v_snd_606_);
v_fst_607_ = lean_ctor_get(v_a_603_, 0);
lean_inc(v_fst_607_);
lean_dec_ref(v_a_603_);
v_snd_608_ = lean_ctor_get(v_snd_606_, 1);
lean_inc(v_snd_608_);
lean_dec(v_snd_606_);
lean_inc(v_toBind_600_);
v___f_609_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__2___boxed), 7, 6);
lean_closure_set(v___f_609_, 0, v_text_598_);
lean_closure_set(v___f_609_, 1, v_fst_607_);
lean_closure_set(v___f_609_, 2, v_snd_608_);
lean_closure_set(v___f_609_, 3, v_logMessage_599_);
lean_closure_set(v___f_609_, 4, v_toBind_600_);
lean_closure_set(v___f_609_, 5, v___f_601_);
v___x_610_ = lean_apply_4(v_toBind_600_, lean_box(0), lean_box(0), v_getFileName_602_, v___f_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__4(lean_object* v_toPure_611_, lean_object* v___x_612_, lean_object* v_toBind_613_, lean_object* v_getFileName_614_, lean_object* v___f_615_, lean_object* v___x_616_, lean_object* v___x_617_, lean_object* v___y_618_, lean_object* v_ictx_619_, lean_object* v_____s_620_){
_start:
{
uint8_t v___y_622_; lean_object* v___x_625_; uint8_t v___x_626_; 
v___x_625_ = lean_array_get_size(v___x_616_);
v___x_626_ = lean_nat_dec_eq(v___x_625_, v___x_617_);
if (v___x_626_ == 0)
{
v___y_622_ = v___x_626_;
goto v___jp_621_;
}
else
{
lean_object* v_pos_627_; uint8_t v___x_628_; 
v_pos_627_ = lean_ctor_get(v___y_618_, 2);
v___x_628_ = l_Lean_Parser_InputContext_atEnd(v_ictx_619_, v_pos_627_);
if (v___x_628_ == 0)
{
v___y_622_ = v___x_626_;
goto v___jp_621_;
}
else
{
lean_object* v___x_629_; 
lean_dec(v___f_615_);
lean_dec(v_getFileName_614_);
lean_dec(v_toBind_613_);
v___x_629_ = lean_apply_2(v_toPure_611_, lean_box(0), v___x_612_);
return v___x_629_;
}
}
v___jp_621_:
{
if (v___y_622_ == 0)
{
lean_object* v___x_623_; 
lean_dec(v___f_615_);
lean_dec(v_getFileName_614_);
lean_dec(v_toBind_613_);
v___x_623_ = lean_apply_2(v_toPure_611_, lean_box(0), v___x_612_);
return v___x_623_;
}
else
{
lean_object* v___x_624_; 
lean_dec(v_toPure_611_);
v___x_624_ = lean_apply_4(v_toBind_613_, lean_box(0), lean_box(0), v_getFileName_614_, v___f_615_);
return v___x_624_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__4___boxed(lean_object* v_toPure_630_, lean_object* v___x_631_, lean_object* v_toBind_632_, lean_object* v_getFileName_633_, lean_object* v___f_634_, lean_object* v___x_635_, lean_object* v___x_636_, lean_object* v___y_637_, lean_object* v_ictx_638_, lean_object* v_____s_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Lean_reportVersoParseFailure___redArg___lam__4(v_toPure_630_, v___x_631_, v_toBind_632_, v_getFileName_633_, v___f_634_, v___x_635_, v___x_636_, v___y_637_, v_ictx_638_, v_____s_639_);
lean_dec_ref(v_ictx_638_);
lean_dec_ref(v___y_637_);
lean_dec(v___x_636_);
lean_dec_ref(v___x_635_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__5(lean_object* v_text_641_, lean_object* v_source_642_, lean_object* v_logMessage_643_, lean_object* v_toPure_644_, lean_object* v_toBind_645_, lean_object* v_getFileName_646_, lean_object* v___x_647_, lean_object* v_ictx_648_, lean_object* v_inst_649_, lean_object* v_env_650_, lean_object* v_____do__lift_651_, lean_object* v_____do__lift_652_, lean_object* v_val_653_, lean_object* v___y_654_, lean_object* v_____do__lift_655_){
_start:
{
lean_object* v___y_657_; lean_object* v_pmctx_668_; lean_object* v_blockCtxt_669_; lean_object* v___x_670_; lean_object* v_s_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v_s_674_; uint8_t v___y_676_; lean_object* v___x_686_; lean_object* v___x_687_; uint8_t v___x_688_; 
lean_inc_ref(v_env_650_);
v_pmctx_668_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_pmctx_668_, 0, v_env_650_);
lean_ctor_set(v_pmctx_668_, 1, v_____do__lift_651_);
lean_ctor_set(v_pmctx_668_, 2, v_____do__lift_652_);
lean_ctor_set(v_pmctx_668_, 3, v_____do__lift_655_);
lean_inc(v_val_653_);
lean_inc_ref(v_text_641_);
v_blockCtxt_669_ = l_Lean_Doc_Parser_BlockCtxt_forDocString(v_text_641_, v_val_653_, v___y_654_);
v___x_670_ = l_Lean_Parser_mkParserState(v_source_642_);
lean_inc_ref(v___x_670_);
v_s_671_ = l_Lean_Parser_ParserState_setPos(v___x_670_, v_val_653_);
v___x_672_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document), 3, 1);
lean_closure_set(v___x_672_, 0, v_blockCtxt_669_);
v___x_673_ = l_Lean_Parser_getTokenTable(v_env_650_);
lean_inc_ref(v___x_673_);
lean_inc_ref(v_pmctx_668_);
lean_inc_ref(v_ictx_648_);
v_s_674_ = l_Lean_Parser_ParserFn_run(v___x_672_, v_ictx_648_, v_pmctx_668_, v___x_673_, v_s_671_);
lean_inc_ref(v_s_674_);
v___x_686_ = l_Lean_Parser_ParserState_allErrors(v_s_674_);
v___x_687_ = lean_array_get_size(v___x_686_);
lean_dec_ref(v___x_686_);
v___x_688_ = lean_nat_dec_eq(v___x_687_, v___x_647_);
if (v___x_688_ == 0)
{
v___y_676_ = v___x_688_;
goto v___jp_675_;
}
else
{
lean_object* v_pos_689_; uint8_t v___x_690_; 
v_pos_689_ = lean_ctor_get(v_s_674_, 2);
lean_inc(v_pos_689_);
v___x_690_ = l_Lean_Parser_InputContext_atEnd(v_ictx_648_, v_pos_689_);
lean_dec(v_pos_689_);
if (v___x_690_ == 0)
{
v___y_676_ = v___x_688_;
goto v___jp_675_;
}
else
{
lean_dec_ref(v___x_673_);
lean_dec_ref(v___x_670_);
lean_dec_ref(v_pmctx_668_);
v___y_657_ = v_s_674_;
goto v___jp_656_;
}
}
v___jp_656_:
{
lean_object* v___f_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___f_661_; lean_object* v___f_662_; lean_object* v___f_663_; size_t v_sz_664_; size_t v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; 
lean_inc(v_logMessage_643_);
lean_inc_ref(v_text_641_);
lean_inc_ref(v___y_657_);
v___f_658_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_658_, 0, v___y_657_);
lean_closure_set(v___f_658_, 1, v_text_641_);
lean_closure_set(v___f_658_, 2, v_source_642_);
lean_closure_set(v___f_658_, 3, v_logMessage_643_);
lean_inc_ref(v___y_657_);
v___x_659_ = l_Lean_Parser_ParserState_allErrors(v___y_657_);
v___x_660_ = lean_box(0);
lean_inc(v_toPure_644_);
v___f_661_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__1), 3, 2);
lean_closure_set(v___f_661_, 0, v___x_660_);
lean_closure_set(v___f_661_, 1, v_toPure_644_);
lean_inc(v_getFileName_646_);
lean_inc(v_toBind_645_);
v___f_662_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__3), 8, 5);
lean_closure_set(v___f_662_, 0, v_text_641_);
lean_closure_set(v___f_662_, 1, v_logMessage_643_);
lean_closure_set(v___f_662_, 2, v_toBind_645_);
lean_closure_set(v___f_662_, 3, v___f_661_);
lean_closure_set(v___f_662_, 4, v_getFileName_646_);
lean_inc_ref(v___x_659_);
lean_inc(v_toBind_645_);
v___f_663_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__4___boxed), 10, 9);
lean_closure_set(v___f_663_, 0, v_toPure_644_);
lean_closure_set(v___f_663_, 1, v___x_660_);
lean_closure_set(v___f_663_, 2, v_toBind_645_);
lean_closure_set(v___f_663_, 3, v_getFileName_646_);
lean_closure_set(v___f_663_, 4, v___f_658_);
lean_closure_set(v___f_663_, 5, v___x_659_);
lean_closure_set(v___f_663_, 6, v___x_647_);
lean_closure_set(v___f_663_, 7, v___y_657_);
lean_closure_set(v___f_663_, 8, v_ictx_648_);
v_sz_664_ = lean_array_size(v___x_659_);
v___x_665_ = ((size_t)0ULL);
v___x_666_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_649_, v___x_659_, v___f_662_, v_sz_664_, v___x_665_, v___x_660_);
v___x_667_ = lean_apply_4(v_toBind_645_, lean_box(0), lean_box(0), v___x_666_, v___f_663_);
return v___x_667_;
}
v___jp_675_:
{
if (v___y_676_ == 0)
{
lean_dec_ref(v___x_673_);
lean_dec_ref(v___x_670_);
lean_dec_ref(v_pmctx_668_);
v___y_657_ = v_s_674_;
goto v___jp_656_;
}
else
{
lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v_pos_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_677_ = lean_box(0);
v___x_678_ = lean_box(0);
v___x_679_ = lean_unsigned_to_nat(1u);
lean_inc(v___x_647_);
v___x_680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_680_, 0, v___x_679_);
lean_ctor_set(v___x_680_, 1, v___x_647_);
lean_inc_n(v___x_647_, 2);
v___x_681_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_681_, 0, v___x_647_);
lean_ctor_set(v___x_681_, 1, v___x_677_);
lean_ctor_set(v___x_681_, 2, v___x_678_);
lean_ctor_set(v___x_681_, 3, v___x_680_);
lean_ctor_set(v___x_681_, 4, v___x_647_);
v_pos_682_ = lean_ctor_get(v_s_674_, 2);
lean_inc(v_pos_682_);
lean_dec_ref(v_s_674_);
v___x_683_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_block), 3, 1);
lean_closure_set(v___x_683_, 0, v___x_681_);
v___x_684_ = l_Lean_Parser_ParserState_setPos(v___x_670_, v_pos_682_);
lean_inc_ref(v_ictx_648_);
v___x_685_ = l_Lean_Parser_ParserFn_run(v___x_683_, v_ictx_648_, v_pmctx_668_, v___x_673_, v___x_684_);
v___y_657_ = v___x_685_;
goto v___jp_656_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__6(lean_object* v_text_691_, lean_object* v_source_692_, lean_object* v_logMessage_693_, lean_object* v_toPure_694_, lean_object* v_toBind_695_, lean_object* v_getFileName_696_, lean_object* v___x_697_, lean_object* v_ictx_698_, lean_object* v_inst_699_, lean_object* v_env_700_, lean_object* v_____do__lift_701_, lean_object* v_val_702_, lean_object* v___y_703_, lean_object* v_getOpenDecls_704_, lean_object* v_____do__lift_705_){
_start:
{
lean_object* v___f_706_; lean_object* v___x_707_; 
lean_inc(v_toBind_695_);
v___f_706_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__5), 15, 14);
lean_closure_set(v___f_706_, 0, v_text_691_);
lean_closure_set(v___f_706_, 1, v_source_692_);
lean_closure_set(v___f_706_, 2, v_logMessage_693_);
lean_closure_set(v___f_706_, 3, v_toPure_694_);
lean_closure_set(v___f_706_, 4, v_toBind_695_);
lean_closure_set(v___f_706_, 5, v_getFileName_696_);
lean_closure_set(v___f_706_, 6, v___x_697_);
lean_closure_set(v___f_706_, 7, v_ictx_698_);
lean_closure_set(v___f_706_, 8, v_inst_699_);
lean_closure_set(v___f_706_, 9, v_env_700_);
lean_closure_set(v___f_706_, 10, v_____do__lift_701_);
lean_closure_set(v___f_706_, 11, v_____do__lift_705_);
lean_closure_set(v___f_706_, 12, v_val_702_);
lean_closure_set(v___f_706_, 13, v___y_703_);
v___x_707_ = lean_apply_4(v_toBind_695_, lean_box(0), lean_box(0), v_getOpenDecls_704_, v___f_706_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__7(lean_object* v_inst_708_, lean_object* v_text_709_, lean_object* v_source_710_, lean_object* v_logMessage_711_, lean_object* v_toPure_712_, lean_object* v_toBind_713_, lean_object* v_getFileName_714_, lean_object* v___x_715_, lean_object* v_ictx_716_, lean_object* v_inst_717_, lean_object* v_env_718_, lean_object* v_val_719_, lean_object* v___y_720_, lean_object* v_____do__lift_721_){
_start:
{
lean_object* v_getCurrNamespace_722_; lean_object* v_getOpenDecls_723_; lean_object* v___f_724_; lean_object* v___x_725_; 
v_getCurrNamespace_722_ = lean_ctor_get(v_inst_708_, 0);
lean_inc(v_getCurrNamespace_722_);
v_getOpenDecls_723_ = lean_ctor_get(v_inst_708_, 1);
lean_inc(v_getOpenDecls_723_);
lean_dec_ref(v_inst_708_);
lean_inc(v_toBind_713_);
v___f_724_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__6), 15, 14);
lean_closure_set(v___f_724_, 0, v_text_709_);
lean_closure_set(v___f_724_, 1, v_source_710_);
lean_closure_set(v___f_724_, 2, v_logMessage_711_);
lean_closure_set(v___f_724_, 3, v_toPure_712_);
lean_closure_set(v___f_724_, 4, v_toBind_713_);
lean_closure_set(v___f_724_, 5, v_getFileName_714_);
lean_closure_set(v___f_724_, 6, v___x_715_);
lean_closure_set(v___f_724_, 7, v_ictx_716_);
lean_closure_set(v___f_724_, 8, v_inst_717_);
lean_closure_set(v___f_724_, 9, v_env_718_);
lean_closure_set(v___f_724_, 10, v_____do__lift_721_);
lean_closure_set(v___f_724_, 11, v_val_719_);
lean_closure_set(v___f_724_, 12, v___y_720_);
lean_closure_set(v___f_724_, 13, v_getOpenDecls_723_);
v___x_725_ = lean_apply_4(v_toBind_713_, lean_box(0), lean_box(0), v_getCurrNamespace_722_, v___f_724_);
return v___x_725_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__8(lean_object* v_source_726_, lean_object* v_text_727_, lean_object* v___y_728_, lean_object* v_inst_729_, lean_object* v_logMessage_730_, lean_object* v_toPure_731_, lean_object* v_toBind_732_, lean_object* v_getFileName_733_, lean_object* v___x_734_, lean_object* v_inst_735_, lean_object* v_env_736_, lean_object* v_val_737_, lean_object* v_inst_738_, lean_object* v_____do__lift_739_){
_start:
{
lean_object* v_ictx_740_; lean_object* v___f_741_; lean_object* v___x_742_; 
lean_inc(v___y_728_);
lean_inc_ref(v_text_727_);
lean_inc_ref(v_source_726_);
v_ictx_740_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_ictx_740_, 0, v_source_726_);
lean_ctor_set(v_ictx_740_, 1, v_____do__lift_739_);
lean_ctor_set(v_ictx_740_, 2, v_text_727_);
lean_ctor_set(v_ictx_740_, 3, v___y_728_);
lean_inc(v_toBind_732_);
v___f_741_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__7), 14, 13);
lean_closure_set(v___f_741_, 0, v_inst_729_);
lean_closure_set(v___f_741_, 1, v_text_727_);
lean_closure_set(v___f_741_, 2, v_source_726_);
lean_closure_set(v___f_741_, 3, v_logMessage_730_);
lean_closure_set(v___f_741_, 4, v_toPure_731_);
lean_closure_set(v___f_741_, 5, v_toBind_732_);
lean_closure_set(v___f_741_, 6, v_getFileName_733_);
lean_closure_set(v___f_741_, 7, v___x_734_);
lean_closure_set(v___f_741_, 8, v_ictx_740_);
lean_closure_set(v___f_741_, 9, v_inst_735_);
lean_closure_set(v___f_741_, 10, v_env_736_);
lean_closure_set(v___f_741_, 11, v_val_737_);
lean_closure_set(v___f_741_, 12, v___y_728_);
v___x_742_ = lean_apply_4(v_toBind_732_, lean_box(0), lean_box(0), v_inst_738_, v___f_741_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__9(lean_object* v_inst_743_, lean_object* v_source_744_, lean_object* v_text_745_, lean_object* v___y_746_, lean_object* v_inst_747_, lean_object* v_toPure_748_, lean_object* v_toBind_749_, lean_object* v___x_750_, lean_object* v_inst_751_, lean_object* v_val_752_, lean_object* v_inst_753_, lean_object* v_env_754_){
_start:
{
lean_object* v_getFileName_755_; lean_object* v_logMessage_756_; lean_object* v___f_757_; lean_object* v___x_758_; 
v_getFileName_755_ = lean_ctor_get(v_inst_743_, 2);
lean_inc(v_getFileName_755_);
v_logMessage_756_ = lean_ctor_get(v_inst_743_, 4);
lean_inc(v_logMessage_756_);
lean_dec_ref(v_inst_743_);
lean_inc(v_getFileName_755_);
lean_inc(v_toBind_749_);
v___f_757_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__8), 14, 13);
lean_closure_set(v___f_757_, 0, v_source_744_);
lean_closure_set(v___f_757_, 1, v_text_745_);
lean_closure_set(v___f_757_, 2, v___y_746_);
lean_closure_set(v___f_757_, 3, v_inst_747_);
lean_closure_set(v___f_757_, 4, v_logMessage_756_);
lean_closure_set(v___f_757_, 5, v_toPure_748_);
lean_closure_set(v___f_757_, 6, v_toBind_749_);
lean_closure_set(v___f_757_, 7, v_getFileName_755_);
lean_closure_set(v___f_757_, 8, v___x_750_);
lean_closure_set(v___f_757_, 9, v_inst_751_);
lean_closure_set(v___f_757_, 10, v_env_754_);
lean_closure_set(v___f_757_, 11, v_val_752_);
lean_closure_set(v___f_757_, 12, v_inst_753_);
v___x_758_ = lean_apply_4(v_toBind_749_, lean_box(0), lean_box(0), v_getFileName_755_, v___f_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__10(lean_object* v_inst_759_, lean_object* v_inst_760_, lean_object* v_inst_761_, lean_object* v_toPure_762_, lean_object* v_toBind_763_, lean_object* v___x_764_, lean_object* v_inst_765_, lean_object* v_val_766_, lean_object* v_inst_767_, lean_object* v_val_768_, lean_object* v_text_769_){
_start:
{
lean_object* v_source_770_; lean_object* v___y_772_; lean_object* v___x_776_; uint8_t v___x_777_; 
v_source_770_ = lean_ctor_get(v_text_769_, 0);
lean_inc_ref(v_source_770_);
v___x_776_ = lean_string_utf8_byte_size(v_source_770_);
v___x_777_ = lean_nat_dec_le(v_val_768_, v___x_776_);
if (v___x_777_ == 0)
{
lean_dec(v_val_768_);
v___y_772_ = v___x_776_;
goto v___jp_771_;
}
else
{
v___y_772_ = v_val_768_;
goto v___jp_771_;
}
v___jp_771_:
{
lean_object* v_getEnv_773_; lean_object* v___f_774_; lean_object* v___x_775_; 
v_getEnv_773_ = lean_ctor_get(v_inst_759_, 0);
lean_inc(v_getEnv_773_);
lean_dec_ref(v_inst_759_);
lean_inc(v_toBind_763_);
v___f_774_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__9), 12, 11);
lean_closure_set(v___f_774_, 0, v_inst_760_);
lean_closure_set(v___f_774_, 1, v_source_770_);
lean_closure_set(v___f_774_, 2, v_text_769_);
lean_closure_set(v___f_774_, 3, v___y_772_);
lean_closure_set(v___f_774_, 4, v_inst_761_);
lean_closure_set(v___f_774_, 5, v_toPure_762_);
lean_closure_set(v___f_774_, 6, v_toBind_763_);
lean_closure_set(v___f_774_, 7, v___x_764_);
lean_closure_set(v___f_774_, 8, v_inst_765_);
lean_closure_set(v___f_774_, 9, v_val_766_);
lean_closure_set(v___f_774_, 10, v_inst_767_);
v___x_775_ = lean_apply_4(v_toBind_763_, lean_box(0), lean_box(0), v_getEnv_773_, v___f_774_);
return v___x_775_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg(lean_object* v_inst_778_, lean_object* v_inst_779_, lean_object* v_inst_780_, lean_object* v_inst_781_, lean_object* v_inst_782_, lean_object* v_inst_783_, lean_object* v_parseFailure_784_){
_start:
{
lean_object* v_toApplicative_785_; lean_object* v_toBind_786_; lean_object* v_toPure_787_; lean_object* v___x_788_; lean_object* v___x_789_; uint8_t v___x_790_; lean_object* v___x_791_; 
v_toApplicative_785_ = lean_ctor_get(v_inst_778_, 0);
v_toBind_786_ = lean_ctor_get(v_inst_778_, 1);
lean_inc(v_toBind_786_);
v_toPure_787_ = lean_ctor_get(v_toApplicative_785_, 1);
lean_inc(v_toPure_787_);
v___x_788_ = lean_unsigned_to_nat(0u);
v___x_789_ = l_Lean_Syntax_getArg(v_parseFailure_784_, v___x_788_);
v___x_790_ = 1;
v___x_791_ = l_Lean_Syntax_getPos_x3f(v___x_789_, v___x_790_);
if (lean_obj_tag(v___x_791_) == 1)
{
lean_object* v_val_792_; lean_object* v___x_793_; 
v_val_792_ = lean_ctor_get(v___x_791_, 0);
lean_inc(v_val_792_);
lean_dec_ref(v___x_791_);
v___x_793_ = l_Lean_Syntax_getTailPos_x3f(v___x_789_, v___x_790_);
lean_dec(v___x_789_);
if (lean_obj_tag(v___x_793_) == 1)
{
lean_object* v_val_794_; lean_object* v___f_795_; lean_object* v___x_796_; 
v_val_794_ = lean_ctor_get(v___x_793_, 0);
lean_inc(v_val_794_);
lean_dec_ref(v___x_793_);
lean_inc(v_toBind_786_);
v___f_795_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__10), 11, 10);
lean_closure_set(v___f_795_, 0, v_inst_780_);
lean_closure_set(v___f_795_, 1, v_inst_782_);
lean_closure_set(v___f_795_, 2, v_inst_783_);
lean_closure_set(v___f_795_, 3, v_toPure_787_);
lean_closure_set(v___f_795_, 4, v_toBind_786_);
lean_closure_set(v___f_795_, 5, v___x_788_);
lean_closure_set(v___f_795_, 6, v_inst_778_);
lean_closure_set(v___f_795_, 7, v_val_792_);
lean_closure_set(v___f_795_, 8, v_inst_781_);
lean_closure_set(v___f_795_, 9, v_val_794_);
v___x_796_ = lean_apply_4(v_toBind_786_, lean_box(0), lean_box(0), v_inst_779_, v___f_795_);
return v___x_796_;
}
else
{
lean_object* v___x_797_; lean_object* v___x_798_; 
lean_dec(v___x_793_);
lean_dec(v_val_792_);
lean_dec(v_toBind_786_);
lean_dec_ref(v_inst_783_);
lean_dec_ref(v_inst_782_);
lean_dec(v_inst_781_);
lean_dec_ref(v_inst_780_);
lean_dec(v_inst_779_);
lean_dec_ref(v_inst_778_);
v___x_797_ = lean_box(0);
v___x_798_ = lean_apply_2(v_toPure_787_, lean_box(0), v___x_797_);
return v___x_798_;
}
}
else
{
lean_object* v___x_799_; lean_object* v___x_800_; 
lean_dec(v___x_791_);
lean_dec(v___x_789_);
lean_dec(v_toBind_786_);
lean_dec_ref(v_inst_783_);
lean_dec_ref(v_inst_782_);
lean_dec(v_inst_781_);
lean_dec_ref(v_inst_780_);
lean_dec(v_inst_779_);
lean_dec_ref(v_inst_778_);
v___x_799_ = lean_box(0);
v___x_800_ = lean_apply_2(v_toPure_787_, lean_box(0), v___x_799_);
return v___x_800_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___boxed(lean_object* v_inst_801_, lean_object* v_inst_802_, lean_object* v_inst_803_, lean_object* v_inst_804_, lean_object* v_inst_805_, lean_object* v_inst_806_, lean_object* v_parseFailure_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l_Lean_reportVersoParseFailure___redArg(v_inst_801_, v_inst_802_, v_inst_803_, v_inst_804_, v_inst_805_, v_inst_806_, v_parseFailure_807_);
lean_dec(v_parseFailure_807_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure(lean_object* v_m_809_, lean_object* v_inst_810_, lean_object* v_inst_811_, lean_object* v_inst_812_, lean_object* v_inst_813_, lean_object* v_inst_814_, lean_object* v_inst_815_, lean_object* v_inst_816_, lean_object* v_parseFailure_817_){
_start:
{
lean_object* v___x_818_; 
v___x_818_ = l_Lean_reportVersoParseFailure___redArg(v_inst_810_, v_inst_811_, v_inst_813_, v_inst_814_, v_inst_815_, v_inst_816_, v_parseFailure_817_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___boxed(lean_object* v_m_819_, lean_object* v_inst_820_, lean_object* v_inst_821_, lean_object* v_inst_822_, lean_object* v_inst_823_, lean_object* v_inst_824_, lean_object* v_inst_825_, lean_object* v_inst_826_, lean_object* v_parseFailure_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Lean_reportVersoParseFailure(v_m_819_, v_inst_820_, v_inst_821_, v_inst_822_, v_inst_823_, v_inst_824_, v_inst_825_, v_inst_826_, v_parseFailure_827_);
lean_dec(v_parseFailure_827_);
lean_dec_ref(v_inst_822_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(size_t v_sz_829_, size_t v_i_830_, lean_object* v_bs_831_){
_start:
{
uint8_t v___x_832_; 
v___x_832_ = lean_usize_dec_lt(v_i_830_, v_sz_829_);
if (v___x_832_ == 0)
{
return v_bs_831_;
}
else
{
lean_object* v_v_833_; lean_object* v___x_834_; lean_object* v_bs_x27_835_; size_t v___x_836_; size_t v___x_837_; lean_object* v___x_838_; 
v_v_833_ = lean_array_uget(v_bs_831_, v_i_830_);
v___x_834_ = lean_unsigned_to_nat(0u);
v_bs_x27_835_ = lean_array_uset(v_bs_831_, v_i_830_, v___x_834_);
v___x_836_ = ((size_t)1ULL);
v___x_837_ = lean_usize_add(v_i_830_, v___x_836_);
v___x_838_ = lean_array_uset(v_bs_x27_835_, v_i_830_, v_v_833_);
v_i_830_ = v___x_837_;
v_bs_831_ = v___x_838_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1___boxed(lean_object* v_sz_840_, lean_object* v_i_841_, lean_object* v_bs_842_){
_start:
{
size_t v_sz_boxed_843_; size_t v_i_boxed_844_; lean_object* v_res_845_; 
v_sz_boxed_843_ = lean_unbox_usize(v_sz_840_);
lean_dec(v_sz_840_);
v_i_boxed_844_ = lean_unbox_usize(v_i_841_);
lean_dec(v_i_841_);
v_res_845_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(v_sz_boxed_843_, v_i_boxed_844_, v_bs_842_);
return v_res_845_;
}
}
LEAN_EXPORT uint8_t l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0(uint8_t v___x_854_, uint8_t v_suppressElabErrors_855_, lean_object* v_x_856_){
_start:
{
if (lean_obj_tag(v_x_856_) == 1)
{
lean_object* v_pre_857_; 
v_pre_857_ = lean_ctor_get(v_x_856_, 0);
switch(lean_obj_tag(v_pre_857_))
{
case 1:
{
lean_object* v_pre_858_; 
v_pre_858_ = lean_ctor_get(v_pre_857_, 0);
switch(lean_obj_tag(v_pre_858_))
{
case 0:
{
lean_object* v_str_859_; lean_object* v_str_860_; lean_object* v___x_861_; uint8_t v___x_862_; 
v_str_859_ = lean_ctor_get(v_x_856_, 1);
v_str_860_ = lean_ctor_get(v_pre_857_, 1);
v___x_861_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__0));
v___x_862_ = lean_string_dec_eq(v_str_860_, v___x_861_);
if (v___x_862_ == 0)
{
lean_object* v___x_863_; uint8_t v___x_864_; 
v___x_863_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__1));
v___x_864_ = lean_string_dec_eq(v_str_860_, v___x_863_);
if (v___x_864_ == 0)
{
return v___x_854_;
}
else
{
lean_object* v___x_865_; uint8_t v___x_866_; 
v___x_865_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__2));
v___x_866_ = lean_string_dec_eq(v_str_859_, v___x_865_);
if (v___x_866_ == 0)
{
return v___x_854_;
}
else
{
return v_suppressElabErrors_855_;
}
}
}
else
{
lean_object* v___x_867_; uint8_t v___x_868_; 
v___x_867_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__3));
v___x_868_ = lean_string_dec_eq(v_str_859_, v___x_867_);
if (v___x_868_ == 0)
{
return v___x_854_;
}
else
{
return v_suppressElabErrors_855_;
}
}
}
case 1:
{
lean_object* v_pre_869_; 
v_pre_869_ = lean_ctor_get(v_pre_858_, 0);
if (lean_obj_tag(v_pre_869_) == 0)
{
lean_object* v_str_870_; lean_object* v_str_871_; lean_object* v_str_872_; lean_object* v___x_873_; uint8_t v___x_874_; 
v_str_870_ = lean_ctor_get(v_x_856_, 1);
v_str_871_ = lean_ctor_get(v_pre_857_, 1);
v_str_872_ = lean_ctor_get(v_pre_858_, 1);
v___x_873_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__4));
v___x_874_ = lean_string_dec_eq(v_str_872_, v___x_873_);
if (v___x_874_ == 0)
{
return v___x_854_;
}
else
{
lean_object* v___x_875_; uint8_t v___x_876_; 
v___x_875_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__5));
v___x_876_ = lean_string_dec_eq(v_str_871_, v___x_875_);
if (v___x_876_ == 0)
{
return v___x_854_;
}
else
{
lean_object* v___x_877_; uint8_t v___x_878_; 
v___x_877_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__6));
v___x_878_ = lean_string_dec_eq(v_str_870_, v___x_877_);
if (v___x_878_ == 0)
{
return v___x_854_;
}
else
{
return v_suppressElabErrors_855_;
}
}
}
}
else
{
return v___x_854_;
}
}
default: 
{
return v___x_854_;
}
}
}
case 0:
{
lean_object* v_str_879_; lean_object* v___x_880_; uint8_t v___x_881_; 
v_str_879_ = lean_ctor_get(v_x_856_, 1);
v___x_880_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__7));
v___x_881_ = lean_string_dec_eq(v_str_879_, v___x_880_);
if (v___x_881_ == 0)
{
return v___x_854_;
}
else
{
return v_suppressElabErrors_855_;
}
}
default: 
{
return v___x_854_;
}
}
}
else
{
return v___x_854_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___boxed(lean_object* v___x_882_, lean_object* v_suppressElabErrors_883_, lean_object* v_x_884_){
_start:
{
uint8_t v___x_10531__boxed_885_; uint8_t v_suppressElabErrors_boxed_886_; uint8_t v_res_887_; lean_object* v_r_888_; 
v___x_10531__boxed_885_ = lean_unbox(v___x_882_);
v_suppressElabErrors_boxed_886_ = lean_unbox(v_suppressElabErrors_883_);
v_res_887_ = l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0(v___x_10531__boxed_885_, v_suppressElabErrors_boxed_886_, v_x_884_);
lean_dec(v_x_884_);
v_r_888_ = lean_box(v_res_887_);
return v_r_888_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0(uint8_t v___x_889_, uint8_t v_suppressElabErrors_890_, lean_object* v_x_891_){
_start:
{
if (lean_obj_tag(v_x_891_) == 1)
{
lean_object* v_pre_892_; 
v_pre_892_ = lean_ctor_get(v_x_891_, 0);
switch(lean_obj_tag(v_pre_892_))
{
case 1:
{
lean_object* v_pre_893_; 
v_pre_893_ = lean_ctor_get(v_pre_892_, 0);
switch(lean_obj_tag(v_pre_893_))
{
case 0:
{
lean_object* v_str_894_; lean_object* v_str_895_; lean_object* v___x_896_; uint8_t v___x_897_; 
v_str_894_ = lean_ctor_get(v_x_891_, 1);
v_str_895_ = lean_ctor_get(v_pre_892_, 1);
v___x_896_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__0));
v___x_897_ = lean_string_dec_eq(v_str_895_, v___x_896_);
if (v___x_897_ == 0)
{
lean_object* v___x_898_; uint8_t v___x_899_; 
v___x_898_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__1));
v___x_899_ = lean_string_dec_eq(v_str_895_, v___x_898_);
if (v___x_899_ == 0)
{
return v___x_889_;
}
else
{
lean_object* v___x_900_; uint8_t v___x_901_; 
v___x_900_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__2));
v___x_901_ = lean_string_dec_eq(v_str_894_, v___x_900_);
if (v___x_901_ == 0)
{
return v___x_889_;
}
else
{
return v_suppressElabErrors_890_;
}
}
}
else
{
lean_object* v___x_902_; uint8_t v___x_903_; 
v___x_902_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__3));
v___x_903_ = lean_string_dec_eq(v_str_894_, v___x_902_);
if (v___x_903_ == 0)
{
return v___x_889_;
}
else
{
return v_suppressElabErrors_890_;
}
}
}
case 1:
{
lean_object* v_pre_904_; 
v_pre_904_ = lean_ctor_get(v_pre_893_, 0);
if (lean_obj_tag(v_pre_904_) == 0)
{
lean_object* v_str_905_; lean_object* v_str_906_; lean_object* v_str_907_; lean_object* v___x_908_; uint8_t v___x_909_; 
v_str_905_ = lean_ctor_get(v_x_891_, 1);
v_str_906_ = lean_ctor_get(v_pre_892_, 1);
v_str_907_ = lean_ctor_get(v_pre_893_, 1);
v___x_908_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__4));
v___x_909_ = lean_string_dec_eq(v_str_907_, v___x_908_);
if (v___x_909_ == 0)
{
return v___x_889_;
}
else
{
lean_object* v___x_910_; uint8_t v___x_911_; 
v___x_910_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__5));
v___x_911_ = lean_string_dec_eq(v_str_906_, v___x_910_);
if (v___x_911_ == 0)
{
return v___x_889_;
}
else
{
lean_object* v___x_912_; uint8_t v___x_913_; 
v___x_912_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__6));
v___x_913_ = lean_string_dec_eq(v_str_905_, v___x_912_);
if (v___x_913_ == 0)
{
return v___x_889_;
}
else
{
return v_suppressElabErrors_890_;
}
}
}
}
else
{
return v___x_889_;
}
}
default: 
{
return v___x_889_;
}
}
}
case 0:
{
lean_object* v_str_914_; lean_object* v___x_915_; uint8_t v___x_916_; 
v_str_914_ = lean_ctor_get(v_x_891_, 1);
v___x_915_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__7));
v___x_916_ = lean_string_dec_eq(v_str_914_, v___x_915_);
if (v___x_916_ == 0)
{
return v___x_889_;
}
else
{
return v_suppressElabErrors_890_;
}
}
default: 
{
return v___x_889_;
}
}
}
else
{
return v___x_889_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v___x_917_, lean_object* v_suppressElabErrors_918_, lean_object* v_x_919_){
_start:
{
uint8_t v___x_10603__boxed_920_; uint8_t v_suppressElabErrors_boxed_921_; uint8_t v_res_922_; lean_object* v_r_923_; 
v___x_10603__boxed_920_ = lean_unbox(v___x_917_);
v_suppressElabErrors_boxed_921_ = lean_unbox(v_suppressElabErrors_918_);
v_res_922_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0(v___x_10603__boxed_920_, v_suppressElabErrors_boxed_921_, v_x_919_);
lean_dec(v_x_919_);
v_r_923_ = lean_box(v_res_922_);
return v_r_923_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(lean_object* v___x_924_, lean_object* v___x_925_, lean_object* v_as_926_, size_t v_sz_927_, size_t v_i_928_, lean_object* v_b_929_, lean_object* v___y_930_, lean_object* v___y_931_){
_start:
{
lean_object* v_a_934_; uint8_t v___x_938_; 
v___x_938_ = lean_usize_dec_lt(v_i_928_, v_sz_927_);
if (v___x_938_ == 0)
{
lean_object* v___x_939_; 
lean_dec_ref(v___x_924_);
v___x_939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_939_, 0, v_b_929_);
return v___x_939_;
}
else
{
lean_object* v_a_940_; lean_object* v_snd_941_; lean_object* v_fst_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_999_; 
v_a_940_ = lean_array_uget(v_as_926_, v_i_928_);
v_snd_941_ = lean_ctor_get(v_a_940_, 1);
v_fst_942_ = lean_ctor_get(v_a_940_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v_a_940_);
if (v_isSharedCheck_999_ == 0)
{
v___x_944_ = v_a_940_;
v_isShared_945_ = v_isSharedCheck_999_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_snd_941_);
lean_inc(v_fst_942_);
lean_dec(v_a_940_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_999_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v_snd_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_997_; 
v_snd_946_ = lean_ctor_get(v_snd_941_, 1);
v_isSharedCheck_997_ = !lean_is_exclusive(v_snd_941_);
if (v_isSharedCheck_997_ == 0)
{
lean_object* v_unused_998_; 
v_unused_998_ = lean_ctor_get(v_snd_941_, 0);
lean_dec(v_unused_998_);
v___x_948_ = v_snd_941_;
v_isShared_949_ = v_isSharedCheck_997_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_snd_946_);
lean_dec(v_snd_941_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_997_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v_fileName_950_; uint8_t v_suppressElabErrors_951_; lean_object* v___x_952_; lean_object* v___x_953_; uint8_t v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; uint8_t v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___y_963_; lean_object* v___y_964_; 
v_fileName_950_ = lean_ctor_get(v___y_930_, 0);
v_suppressElabErrors_951_ = lean_ctor_get_uint8(v___y_930_, sizeof(void*)*14 + 1);
v___x_952_ = lean_box(0);
v___x_953_ = lean_unsigned_to_nat(0u);
v___x_954_ = lean_nat_dec_eq(v___x_925_, v___x_953_);
lean_inc_ref(v___x_924_);
v___x_955_ = l_Lean_FileMap_toPosition(v___x_924_, v_fst_942_);
lean_dec(v_fst_942_);
v___x_956_ = lean_box(0);
v___x_957_ = 2;
v___x_958_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_959_ = l_Lean_Parser_Error_toString(v_snd_946_);
v___x_960_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_960_, 0, v___x_959_);
v___x_961_ = l_Lean_MessageData_ofFormat(v___x_960_);
if (v_suppressElabErrors_951_ == 0)
{
v___y_963_ = v___y_930_;
v___y_964_ = v___y_931_;
goto v___jp_962_;
}
else
{
lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___f_995_; uint8_t v___x_996_; 
v___x_993_ = lean_box(v___x_954_);
v___x_994_ = lean_box(v_suppressElabErrors_951_);
v___f_995_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_995_, 0, v___x_993_);
lean_closure_set(v___f_995_, 1, v___x_994_);
lean_inc_ref(v___x_961_);
v___x_996_ = l_Lean_MessageData_hasTag(v___f_995_, v___x_961_);
if (v___x_996_ == 0)
{
lean_dec_ref(v___x_961_);
lean_dec_ref(v___x_955_);
lean_del_object(v___x_948_);
lean_del_object(v___x_944_);
v_a_934_ = v___x_952_;
goto v___jp_933_;
}
else
{
v___y_963_ = v___y_930_;
v___y_964_ = v___y_931_;
goto v___jp_962_;
}
}
v___jp_962_:
{
lean_object* v___x_965_; lean_object* v_currNamespace_966_; lean_object* v_openDecls_967_; lean_object* v___x_969_; 
v___x_965_ = lean_st_ref_take(v___y_964_);
v_currNamespace_966_ = lean_ctor_get(v___y_963_, 6);
v_openDecls_967_ = lean_ctor_get(v___y_963_, 7);
lean_inc(v_openDecls_967_);
lean_inc(v_currNamespace_966_);
if (v_isShared_949_ == 0)
{
lean_ctor_set(v___x_948_, 1, v_openDecls_967_);
lean_ctor_set(v___x_948_, 0, v_currNamespace_966_);
v___x_969_ = v___x_948_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_currNamespace_966_);
lean_ctor_set(v_reuseFailAlloc_992_, 1, v_openDecls_967_);
v___x_969_ = v_reuseFailAlloc_992_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
lean_object* v___x_971_; 
if (v_isShared_945_ == 0)
{
lean_ctor_set_tag(v___x_944_, 4);
lean_ctor_set(v___x_944_, 1, v___x_961_);
lean_ctor_set(v___x_944_, 0, v___x_969_);
v___x_971_ = v___x_944_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v___x_969_);
lean_ctor_set(v_reuseFailAlloc_991_, 1, v___x_961_);
v___x_971_ = v_reuseFailAlloc_991_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
lean_object* v___x_972_; lean_object* v_env_973_; lean_object* v_nextMacroScope_974_; lean_object* v_ngen_975_; lean_object* v_auxDeclNGen_976_; lean_object* v_traceState_977_; lean_object* v_cache_978_; lean_object* v_messages_979_; lean_object* v_infoState_980_; lean_object* v_snapshotTasks_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_990_; 
lean_inc_ref(v_fileName_950_);
v___x_972_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_972_, 0, v_fileName_950_);
lean_ctor_set(v___x_972_, 1, v___x_955_);
lean_ctor_set(v___x_972_, 2, v___x_956_);
lean_ctor_set(v___x_972_, 3, v___x_958_);
lean_ctor_set(v___x_972_, 4, v___x_971_);
lean_ctor_set_uint8(v___x_972_, sizeof(void*)*5, v___x_954_);
lean_ctor_set_uint8(v___x_972_, sizeof(void*)*5 + 1, v___x_957_);
lean_ctor_set_uint8(v___x_972_, sizeof(void*)*5 + 2, v___x_954_);
v_env_973_ = lean_ctor_get(v___x_965_, 0);
v_nextMacroScope_974_ = lean_ctor_get(v___x_965_, 1);
v_ngen_975_ = lean_ctor_get(v___x_965_, 2);
v_auxDeclNGen_976_ = lean_ctor_get(v___x_965_, 3);
v_traceState_977_ = lean_ctor_get(v___x_965_, 4);
v_cache_978_ = lean_ctor_get(v___x_965_, 5);
v_messages_979_ = lean_ctor_get(v___x_965_, 6);
v_infoState_980_ = lean_ctor_get(v___x_965_, 7);
v_snapshotTasks_981_ = lean_ctor_get(v___x_965_, 8);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_990_ == 0)
{
v___x_983_ = v___x_965_;
v_isShared_984_ = v_isSharedCheck_990_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_snapshotTasks_981_);
lean_inc(v_infoState_980_);
lean_inc(v_messages_979_);
lean_inc(v_cache_978_);
lean_inc(v_traceState_977_);
lean_inc(v_auxDeclNGen_976_);
lean_inc(v_ngen_975_);
lean_inc(v_nextMacroScope_974_);
lean_inc(v_env_973_);
lean_dec(v___x_965_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_990_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_985_; lean_object* v___x_987_; 
v___x_985_ = l_Lean_MessageLog_add(v___x_972_, v_messages_979_);
if (v_isShared_984_ == 0)
{
lean_ctor_set(v___x_983_, 6, v___x_985_);
v___x_987_ = v___x_983_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_env_973_);
lean_ctor_set(v_reuseFailAlloc_989_, 1, v_nextMacroScope_974_);
lean_ctor_set(v_reuseFailAlloc_989_, 2, v_ngen_975_);
lean_ctor_set(v_reuseFailAlloc_989_, 3, v_auxDeclNGen_976_);
lean_ctor_set(v_reuseFailAlloc_989_, 4, v_traceState_977_);
lean_ctor_set(v_reuseFailAlloc_989_, 5, v_cache_978_);
lean_ctor_set(v_reuseFailAlloc_989_, 6, v___x_985_);
lean_ctor_set(v_reuseFailAlloc_989_, 7, v_infoState_980_);
lean_ctor_set(v_reuseFailAlloc_989_, 8, v_snapshotTasks_981_);
v___x_987_ = v_reuseFailAlloc_989_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
lean_object* v___x_988_; 
v___x_988_ = lean_st_ref_set(v___y_964_, v___x_987_);
v_a_934_ = v___x_952_;
goto v___jp_933_;
}
}
}
}
}
}
}
}
v___jp_933_:
{
size_t v___x_935_; size_t v___x_936_; 
v___x_935_ = ((size_t)1ULL);
v___x_936_ = lean_usize_add(v_i_928_, v___x_935_);
v_i_928_ = v___x_936_;
v_b_929_ = v_a_934_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___boxed(lean_object* v___x_1000_, lean_object* v___x_1001_, lean_object* v_as_1002_, lean_object* v_sz_1003_, lean_object* v_i_1004_, lean_object* v_b_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_){
_start:
{
size_t v_sz_boxed_1009_; size_t v_i_boxed_1010_; lean_object* v_res_1011_; 
v_sz_boxed_1009_ = lean_unbox_usize(v_sz_1003_);
lean_dec(v_sz_1003_);
v_i_boxed_1010_ = lean_unbox_usize(v_i_1004_);
lean_dec(v_i_1004_);
v_res_1011_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(v___x_1000_, v___x_1001_, v_as_1002_, v_sz_boxed_1009_, v_i_boxed_1010_, v_b_1005_, v___y_1006_, v___y_1007_);
lean_dec(v___y_1007_);
lean_dec_ref(v___y_1006_);
lean_dec_ref(v_as_1002_);
lean_dec(v___x_1001_);
return v_res_1011_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__0(void){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1012_ = lean_box(1);
v___x_1013_ = l_Lean_MessageData_ofFormat(v___x_1012_);
return v___x_1013_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__3(void){
_start:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1017_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__2));
v___x_1018_ = l_Lean_MessageData_ofFormat(v___x_1017_);
return v___x_1018_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7(lean_object* v_x_1019_, lean_object* v_x_1020_){
_start:
{
if (lean_obj_tag(v_x_1020_) == 0)
{
return v_x_1019_;
}
else
{
lean_object* v_head_1021_; lean_object* v_tail_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1044_; 
v_head_1021_ = lean_ctor_get(v_x_1020_, 0);
v_tail_1022_ = lean_ctor_get(v_x_1020_, 1);
v_isSharedCheck_1044_ = !lean_is_exclusive(v_x_1020_);
if (v_isSharedCheck_1044_ == 0)
{
v___x_1024_ = v_x_1020_;
v_isShared_1025_ = v_isSharedCheck_1044_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_tail_1022_);
lean_inc(v_head_1021_);
lean_dec(v_x_1020_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1044_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v_before_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1042_; 
v_before_1026_ = lean_ctor_get(v_head_1021_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v_head_1021_);
if (v_isSharedCheck_1042_ == 0)
{
lean_object* v_unused_1043_; 
v_unused_1043_ = lean_ctor_get(v_head_1021_, 1);
lean_dec(v_unused_1043_);
v___x_1028_ = v_head_1021_;
v_isShared_1029_ = v_isSharedCheck_1042_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_before_1026_);
lean_dec(v_head_1021_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1042_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1030_; lean_object* v___x_1032_; 
v___x_1030_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__0);
if (v_isShared_1029_ == 0)
{
lean_ctor_set_tag(v___x_1028_, 7);
lean_ctor_set(v___x_1028_, 1, v___x_1030_);
lean_ctor_set(v___x_1028_, 0, v_x_1019_);
v___x_1032_ = v___x_1028_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_x_1019_);
lean_ctor_set(v_reuseFailAlloc_1041_, 1, v___x_1030_);
v___x_1032_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
lean_object* v___x_1033_; lean_object* v___x_1035_; 
v___x_1033_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__3);
if (v_isShared_1025_ == 0)
{
lean_ctor_set_tag(v___x_1024_, 7);
lean_ctor_set(v___x_1024_, 1, v___x_1033_);
lean_ctor_set(v___x_1024_, 0, v___x_1032_);
v___x_1035_ = v___x_1024_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1040_; 
v_reuseFailAlloc_1040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1040_, 0, v___x_1032_);
lean_ctor_set(v_reuseFailAlloc_1040_, 1, v___x_1033_);
v___x_1035_ = v_reuseFailAlloc_1040_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1036_ = l_Lean_MessageData_ofSyntax(v_before_1026_);
v___x_1037_ = l_Lean_indentD(v___x_1036_);
v___x_1038_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1035_);
lean_ctor_set(v___x_1038_, 1, v___x_1037_);
v_x_1019_ = v___x_1038_;
v_x_1020_ = v_tail_1022_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__6(lean_object* v_opts_1045_, lean_object* v_opt_1046_){
_start:
{
lean_object* v_name_1047_; lean_object* v_defValue_1048_; lean_object* v_map_1049_; lean_object* v___x_1050_; 
v_name_1047_ = lean_ctor_get(v_opt_1046_, 0);
v_defValue_1048_ = lean_ctor_get(v_opt_1046_, 1);
v_map_1049_ = lean_ctor_get(v_opts_1045_, 0);
v___x_1050_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1049_, v_name_1047_);
if (lean_obj_tag(v___x_1050_) == 0)
{
uint8_t v___x_1051_; 
v___x_1051_ = lean_unbox(v_defValue_1048_);
return v___x_1051_;
}
else
{
lean_object* v_val_1052_; 
v_val_1052_ = lean_ctor_get(v___x_1050_, 0);
lean_inc(v_val_1052_);
lean_dec_ref(v___x_1050_);
if (lean_obj_tag(v_val_1052_) == 1)
{
uint8_t v_v_1053_; 
v_v_1053_ = lean_ctor_get_uint8(v_val_1052_, 0);
lean_dec_ref(v_val_1052_);
return v_v_1053_;
}
else
{
uint8_t v___x_1054_; 
lean_dec(v_val_1052_);
v___x_1054_ = lean_unbox(v_defValue_1048_);
return v___x_1054_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__6___boxed(lean_object* v_opts_1055_, lean_object* v_opt_1056_){
_start:
{
uint8_t v_res_1057_; lean_object* v_r_1058_; 
v_res_1057_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__6(v_opts_1055_, v_opt_1056_);
lean_dec_ref(v_opt_1056_);
lean_dec_ref(v_opts_1055_);
v_r_1058_ = lean_box(v_res_1057_);
return v_r_1058_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1062_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__1));
v___x_1063_ = l_Lean_MessageData_ofFormat(v___x_1062_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg(lean_object* v_msgData_1064_, lean_object* v_macroStack_1065_, lean_object* v___y_1066_){
_start:
{
lean_object* v_options_1068_; lean_object* v___x_1069_; uint8_t v___x_1070_; 
v_options_1068_ = lean_ctor_get(v___y_1066_, 2);
v___x_1069_ = l_Lean_Elab_pp_macroStack;
v___x_1070_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__6(v_options_1068_, v___x_1069_);
if (v___x_1070_ == 0)
{
lean_object* v___x_1071_; 
lean_dec(v_macroStack_1065_);
v___x_1071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1071_, 0, v_msgData_1064_);
return v___x_1071_;
}
else
{
if (lean_obj_tag(v_macroStack_1065_) == 0)
{
lean_object* v___x_1072_; 
v___x_1072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1072_, 0, v_msgData_1064_);
return v___x_1072_;
}
else
{
lean_object* v_head_1073_; lean_object* v_after_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1089_; 
v_head_1073_ = lean_ctor_get(v_macroStack_1065_, 0);
lean_inc(v_head_1073_);
v_after_1074_ = lean_ctor_get(v_head_1073_, 1);
v_isSharedCheck_1089_ = !lean_is_exclusive(v_head_1073_);
if (v_isSharedCheck_1089_ == 0)
{
lean_object* v_unused_1090_; 
v_unused_1090_ = lean_ctor_get(v_head_1073_, 0);
lean_dec(v_unused_1090_);
v___x_1076_ = v_head_1073_;
v_isShared_1077_ = v_isSharedCheck_1089_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_after_1074_);
lean_dec(v_head_1073_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1089_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v___x_1078_; lean_object* v___x_1080_; 
v___x_1078_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__0);
if (v_isShared_1077_ == 0)
{
lean_ctor_set_tag(v___x_1076_, 7);
lean_ctor_set(v___x_1076_, 1, v___x_1078_);
lean_ctor_set(v___x_1076_, 0, v_msgData_1064_);
v___x_1080_ = v___x_1076_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_msgData_1064_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v___x_1078_);
v___x_1080_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v_msgData_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1081_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__2);
v___x_1082_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1080_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = l_Lean_MessageData_ofSyntax(v_after_1074_);
v___x_1084_ = l_Lean_indentD(v___x_1083_);
v_msgData_1085_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1085_, 0, v___x_1082_);
lean_ctor_set(v_msgData_1085_, 1, v___x_1084_);
v___x_1086_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7(v_msgData_1085_, v_macroStack_1065_);
v___x_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1086_);
return v___x_1087_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_msgData_1091_, lean_object* v_macroStack_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg(v_msgData_1091_, v_macroStack_1092_, v___y_1093_);
lean_dec_ref(v___y_1093_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(lean_object* v_msgData_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v___x_1102_; lean_object* v_env_1103_; lean_object* v___x_1104_; lean_object* v_mctx_1105_; lean_object* v_lctx_1106_; lean_object* v_options_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
v___x_1102_ = lean_st_ref_get(v___y_1100_);
v_env_1103_ = lean_ctor_get(v___x_1102_, 0);
lean_inc_ref(v_env_1103_);
lean_dec(v___x_1102_);
v___x_1104_ = lean_st_ref_get(v___y_1098_);
v_mctx_1105_ = lean_ctor_get(v___x_1104_, 0);
lean_inc_ref(v_mctx_1105_);
lean_dec(v___x_1104_);
v_lctx_1106_ = lean_ctor_get(v___y_1097_, 2);
v_options_1107_ = lean_ctor_get(v___y_1099_, 2);
lean_inc_ref(v_options_1107_);
lean_inc_ref(v_lctx_1106_);
v___x_1108_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1108_, 0, v_env_1103_);
lean_ctor_set(v___x_1108_, 1, v_mctx_1105_);
lean_ctor_set(v___x_1108_, 2, v_lctx_1106_);
lean_ctor_set(v___x_1108_, 3, v_options_1107_);
v___x_1109_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1108_);
lean_ctor_set(v___x_1109_, 1, v_msgData_1096_);
v___x_1110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1109_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_msgData_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_){
_start:
{
lean_object* v_res_1117_; 
v_res_1117_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(v_msgData_1111_, v___y_1112_, v___y_1113_, v___y_1114_, v___y_1115_);
lean_dec(v___y_1115_);
lean_dec_ref(v___y_1114_);
lean_dec(v___y_1113_);
lean_dec_ref(v___y_1112_);
return v_res_1117_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(lean_object* v_msg_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_){
_start:
{
lean_object* v_ref_1126_; lean_object* v___x_1127_; lean_object* v_a_1128_; lean_object* v_macroStack_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v_a_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1140_; 
v_ref_1126_ = lean_ctor_get(v___y_1123_, 5);
v___x_1127_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(v_msg_1118_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_);
v_a_1128_ = lean_ctor_get(v___x_1127_, 0);
lean_inc(v_a_1128_);
lean_dec_ref(v___x_1127_);
v_macroStack_1129_ = lean_ctor_get(v___y_1119_, 1);
lean_inc(v_macroStack_1129_);
lean_dec_ref(v___y_1119_);
lean_inc(v_macroStack_1129_);
v___x_1130_ = l_Lean_Elab_getBetterRef(v_ref_1126_, v_macroStack_1129_);
v___x_1131_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg(v_a_1128_, v_macroStack_1129_, v___y_1123_);
v_a_1132_ = lean_ctor_get(v___x_1131_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1134_ = v___x_1131_;
v_isShared_1135_ = v_isSharedCheck_1140_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_a_1132_);
lean_dec(v___x_1131_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1140_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___x_1136_; lean_object* v___x_1138_; 
v___x_1136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1130_);
lean_ctor_set(v___x_1136_, 1, v_a_1132_);
if (v_isShared_1135_ == 0)
{
lean_ctor_set_tag(v___x_1134_, 1);
lean_ctor_set(v___x_1134_, 0, v___x_1136_);
v___x_1138_ = v___x_1134_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(1, 1, 0);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_msg_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v_msg_1141_, v___y_1142_, v___y_1143_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_);
lean_dec(v___y_1147_);
lean_dec_ref(v___y_1146_);
lean_dec(v___y_1145_);
lean_dec_ref(v___y_1144_);
lean_dec(v___y_1143_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(lean_object* v_ref_1150_, lean_object* v_msg_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_){
_start:
{
lean_object* v_fileName_1159_; lean_object* v_fileMap_1160_; lean_object* v_options_1161_; lean_object* v_currRecDepth_1162_; lean_object* v_maxRecDepth_1163_; lean_object* v_ref_1164_; lean_object* v_currNamespace_1165_; lean_object* v_openDecls_1166_; lean_object* v_initHeartbeats_1167_; lean_object* v_maxHeartbeats_1168_; lean_object* v_quotContext_1169_; lean_object* v_currMacroScope_1170_; uint8_t v_diag_1171_; lean_object* v_cancelTk_x3f_1172_; uint8_t v_suppressElabErrors_1173_; lean_object* v_inheritedTraceOptions_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1183_; 
v_fileName_1159_ = lean_ctor_get(v___y_1156_, 0);
v_fileMap_1160_ = lean_ctor_get(v___y_1156_, 1);
v_options_1161_ = lean_ctor_get(v___y_1156_, 2);
v_currRecDepth_1162_ = lean_ctor_get(v___y_1156_, 3);
v_maxRecDepth_1163_ = lean_ctor_get(v___y_1156_, 4);
v_ref_1164_ = lean_ctor_get(v___y_1156_, 5);
v_currNamespace_1165_ = lean_ctor_get(v___y_1156_, 6);
v_openDecls_1166_ = lean_ctor_get(v___y_1156_, 7);
v_initHeartbeats_1167_ = lean_ctor_get(v___y_1156_, 8);
v_maxHeartbeats_1168_ = lean_ctor_get(v___y_1156_, 9);
v_quotContext_1169_ = lean_ctor_get(v___y_1156_, 10);
v_currMacroScope_1170_ = lean_ctor_get(v___y_1156_, 11);
v_diag_1171_ = lean_ctor_get_uint8(v___y_1156_, sizeof(void*)*14);
v_cancelTk_x3f_1172_ = lean_ctor_get(v___y_1156_, 12);
v_suppressElabErrors_1173_ = lean_ctor_get_uint8(v___y_1156_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1174_ = lean_ctor_get(v___y_1156_, 13);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___y_1156_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1176_ = v___y_1156_;
v_isShared_1177_ = v_isSharedCheck_1183_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_inheritedTraceOptions_1174_);
lean_inc(v_cancelTk_x3f_1172_);
lean_inc(v_currMacroScope_1170_);
lean_inc(v_quotContext_1169_);
lean_inc(v_maxHeartbeats_1168_);
lean_inc(v_initHeartbeats_1167_);
lean_inc(v_openDecls_1166_);
lean_inc(v_currNamespace_1165_);
lean_inc(v_ref_1164_);
lean_inc(v_maxRecDepth_1163_);
lean_inc(v_currRecDepth_1162_);
lean_inc(v_options_1161_);
lean_inc(v_fileMap_1160_);
lean_inc(v_fileName_1159_);
lean_dec(v___y_1156_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1183_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v_ref_1178_; lean_object* v___x_1180_; 
v_ref_1178_ = l_Lean_replaceRef(v_ref_1150_, v_ref_1164_);
lean_dec(v_ref_1164_);
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 5, v_ref_1178_);
v___x_1180_ = v___x_1176_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_fileName_1159_);
lean_ctor_set(v_reuseFailAlloc_1182_, 1, v_fileMap_1160_);
lean_ctor_set(v_reuseFailAlloc_1182_, 2, v_options_1161_);
lean_ctor_set(v_reuseFailAlloc_1182_, 3, v_currRecDepth_1162_);
lean_ctor_set(v_reuseFailAlloc_1182_, 4, v_maxRecDepth_1163_);
lean_ctor_set(v_reuseFailAlloc_1182_, 5, v_ref_1178_);
lean_ctor_set(v_reuseFailAlloc_1182_, 6, v_currNamespace_1165_);
lean_ctor_set(v_reuseFailAlloc_1182_, 7, v_openDecls_1166_);
lean_ctor_set(v_reuseFailAlloc_1182_, 8, v_initHeartbeats_1167_);
lean_ctor_set(v_reuseFailAlloc_1182_, 9, v_maxHeartbeats_1168_);
lean_ctor_set(v_reuseFailAlloc_1182_, 10, v_quotContext_1169_);
lean_ctor_set(v_reuseFailAlloc_1182_, 11, v_currMacroScope_1170_);
lean_ctor_set(v_reuseFailAlloc_1182_, 12, v_cancelTk_x3f_1172_);
lean_ctor_set(v_reuseFailAlloc_1182_, 13, v_inheritedTraceOptions_1174_);
lean_ctor_set_uint8(v_reuseFailAlloc_1182_, sizeof(void*)*14, v_diag_1171_);
lean_ctor_set_uint8(v_reuseFailAlloc_1182_, sizeof(void*)*14 + 1, v_suppressElabErrors_1173_);
v___x_1180_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
lean_object* v___x_1181_; 
v___x_1181_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v_msg_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___x_1180_, v___y_1157_);
lean_dec_ref(v___x_1180_);
return v___x_1181_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg___boxed(lean_object* v_ref_1184_, lean_object* v_msg_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_){
_start:
{
lean_object* v_res_1193_; 
v_res_1193_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_ref_1184_, v_msg_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_);
lean_dec(v___y_1191_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
lean_dec(v___y_1187_);
lean_dec(v_ref_1184_);
return v_res_1193_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(lean_object* v_docComment_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_){
_start:
{
lean_object* v___y_1206_; uint8_t v___y_1207_; lean_object* v___y_1208_; lean_object* v___y_1209_; uint8_t v___y_1210_; lean_object* v___y_1211_; lean_object* v___y_1212_; lean_object* v___y_1213_; lean_object* v___y_1214_; uint8_t v___y_1240_; lean_object* v___y_1241_; lean_object* v___y_1242_; uint8_t v___y_1243_; lean_object* v___y_1244_; lean_object* v___y_1245_; lean_object* v___y_1246_; uint8_t v___y_1295_; lean_object* v___y_1296_; lean_object* v___y_1297_; lean_object* v___y_1298_; lean_object* v___y_1299_; lean_object* v___y_1300_; uint8_t v___y_1301_; lean_object* v___y_1302_; lean_object* v___y_1303_; lean_object* v___y_1304_; lean_object* v___y_1305_; uint8_t v___y_1306_; lean_object* v___y_1317_; uint8_t v___y_1318_; lean_object* v___y_1319_; lean_object* v___y_1320_; lean_object* v___y_1321_; lean_object* v___y_1322_; lean_object* v___y_1323_; uint8_t v___y_1324_; lean_object* v___y_1325_; lean_object* v___y_1326_; lean_object* v___y_1327_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; uint8_t v___x_1372_; 
lean_inc(v_docComment_1194_);
v___x_1367_ = l_Lean_Syntax_getKind(v_docComment_1194_);
v___x_1368_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__0));
v___x_1369_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__1));
v___x_1370_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__2));
v___x_1371_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__4));
v___x_1372_ = lean_name_eq(v___x_1367_, v___x_1371_);
lean_dec(v___x_1367_);
if (v___x_1372_ == 0)
{
goto v___jp_1344_;
}
else
{
lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___x_1373_ = lean_unsigned_to_nat(0u);
v___x_1374_ = l_Lean_Syntax_getArg(v_docComment_1194_, v___x_1373_);
if (lean_obj_tag(v___x_1374_) == 1)
{
lean_object* v_kind_1375_; 
v_kind_1375_ = lean_ctor_get(v___x_1374_, 1);
lean_inc(v_kind_1375_);
if (lean_obj_tag(v_kind_1375_) == 1)
{
lean_object* v_pre_1376_; 
v_pre_1376_ = lean_ctor_get(v_kind_1375_, 0);
lean_inc(v_pre_1376_);
if (lean_obj_tag(v_pre_1376_) == 1)
{
lean_object* v_pre_1377_; 
v_pre_1377_ = lean_ctor_get(v_pre_1376_, 0);
lean_inc(v_pre_1377_);
if (lean_obj_tag(v_pre_1377_) == 1)
{
lean_object* v_pre_1378_; 
v_pre_1378_ = lean_ctor_get(v_pre_1377_, 0);
lean_inc(v_pre_1378_);
if (lean_obj_tag(v_pre_1378_) == 1)
{
lean_object* v_pre_1379_; 
v_pre_1379_ = lean_ctor_get(v_pre_1378_, 0);
lean_inc(v_pre_1379_);
if (lean_obj_tag(v_pre_1379_) == 0)
{
lean_object* v_info_1380_; lean_object* v_args_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1407_; 
v_info_1380_ = lean_ctor_get(v___x_1374_, 0);
v_args_1381_ = lean_ctor_get(v___x_1374_, 2);
v_isSharedCheck_1407_ = !lean_is_exclusive(v___x_1374_);
if (v_isSharedCheck_1407_ == 0)
{
lean_object* v_unused_1408_; 
v_unused_1408_ = lean_ctor_get(v___x_1374_, 1);
lean_dec(v_unused_1408_);
v___x_1383_ = v___x_1374_;
v_isShared_1384_ = v_isSharedCheck_1407_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_args_1381_);
lean_inc(v_info_1380_);
lean_dec(v___x_1374_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1407_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v_str_1385_; lean_object* v_str_1386_; lean_object* v_str_1387_; lean_object* v_str_1388_; uint8_t v___x_1389_; 
v_str_1385_ = lean_ctor_get(v_kind_1375_, 1);
lean_inc_ref(v_str_1385_);
lean_dec_ref(v_kind_1375_);
v_str_1386_ = lean_ctor_get(v_pre_1376_, 1);
lean_inc_ref(v_str_1386_);
lean_dec_ref(v_pre_1376_);
v_str_1387_ = lean_ctor_get(v_pre_1377_, 1);
lean_inc_ref(v_str_1387_);
lean_dec_ref(v_pre_1377_);
v_str_1388_ = lean_ctor_get(v_pre_1378_, 1);
lean_inc_ref(v_str_1388_);
lean_dec_ref(v_pre_1378_);
v___x_1389_ = lean_string_dec_eq(v_str_1388_, v___x_1368_);
lean_dec_ref(v_str_1388_);
if (v___x_1389_ == 0)
{
lean_dec_ref(v_str_1387_);
lean_dec_ref(v_str_1386_);
lean_dec_ref(v_str_1385_);
lean_del_object(v___x_1383_);
lean_dec_ref(v_args_1381_);
lean_dec(v_info_1380_);
goto v___jp_1344_;
}
else
{
uint8_t v___x_1390_; 
v___x_1390_ = lean_string_dec_eq(v_str_1387_, v___x_1369_);
lean_dec_ref(v_str_1387_);
if (v___x_1390_ == 0)
{
lean_dec_ref(v_str_1386_);
lean_dec_ref(v_str_1385_);
lean_del_object(v___x_1383_);
lean_dec_ref(v_args_1381_);
lean_dec(v_info_1380_);
goto v___jp_1344_;
}
else
{
uint8_t v___x_1391_; 
v___x_1391_ = lean_string_dec_eq(v_str_1386_, v___x_1370_);
lean_dec_ref(v_str_1386_);
if (v___x_1391_ == 0)
{
lean_dec_ref(v_str_1385_);
lean_del_object(v___x_1383_);
lean_dec_ref(v_args_1381_);
lean_dec(v_info_1380_);
goto v___jp_1344_;
}
else
{
lean_object* v___x_1392_; uint8_t v___x_1393_; 
v___x_1392_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__5));
v___x_1393_ = lean_string_dec_eq(v_str_1385_, v___x_1392_);
lean_dec_ref(v_str_1385_);
if (v___x_1393_ == 0)
{
lean_del_object(v___x_1383_);
lean_dec_ref(v_args_1381_);
lean_dec(v_info_1380_);
goto v___jp_1344_;
}
else
{
lean_dec_ref(v___y_1199_);
lean_dec_ref(v___y_1195_);
lean_dec(v_docComment_1194_);
if (v___x_1393_ == 0)
{
lean_object* v___x_1394_; lean_object* v___x_1395_; 
lean_del_object(v___x_1383_);
lean_dec_ref(v_args_1381_);
lean_dec(v_info_1380_);
v___x_1394_ = lean_box(0);
v___x_1395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1395_, 0, v___x_1394_);
return v___x_1395_;
}
else
{
lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1401_; 
v___x_1396_ = l_Lean_Name_str___override(v_pre_1379_, v___x_1368_);
v___x_1397_ = l_Lean_Name_str___override(v___x_1396_, v___x_1369_);
v___x_1398_ = l_Lean_Name_str___override(v___x_1397_, v___x_1370_);
v___x_1399_ = l_Lean_Name_str___override(v___x_1398_, v___x_1392_);
if (v_isShared_1384_ == 0)
{
lean_ctor_set(v___x_1383_, 1, v___x_1399_);
v___x_1401_ = v___x_1383_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1406_; 
v_reuseFailAlloc_1406_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1406_, 0, v_info_1380_);
lean_ctor_set(v_reuseFailAlloc_1406_, 1, v___x_1399_);
lean_ctor_set(v_reuseFailAlloc_1406_, 2, v_args_1381_);
v___x_1401_ = v_reuseFailAlloc_1406_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1402_ = lean_unsigned_to_nat(1u);
v___x_1403_ = l_Lean_Syntax_getArg(v___x_1401_, v___x_1402_);
lean_dec_ref(v___x_1401_);
v___x_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1403_);
v___x_1405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1405_, 0, v___x_1404_);
return v___x_1405_;
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
lean_dec_ref(v_pre_1378_);
lean_dec(v_pre_1379_);
lean_dec_ref(v_pre_1377_);
lean_dec_ref(v_pre_1376_);
lean_dec_ref(v_kind_1375_);
lean_dec_ref(v___x_1374_);
goto v___jp_1344_;
}
}
else
{
lean_dec_ref(v_pre_1377_);
lean_dec(v_pre_1378_);
lean_dec_ref(v_pre_1376_);
lean_dec_ref(v_kind_1375_);
lean_dec_ref(v___x_1374_);
goto v___jp_1344_;
}
}
else
{
lean_dec(v_pre_1377_);
lean_dec_ref(v_pre_1376_);
lean_dec_ref(v_kind_1375_);
lean_dec_ref(v___x_1374_);
goto v___jp_1344_;
}
}
else
{
lean_dec_ref(v_kind_1375_);
lean_dec(v_pre_1376_);
lean_dec_ref(v___x_1374_);
goto v___jp_1344_;
}
}
else
{
lean_dec(v_kind_1375_);
lean_dec_ref(v___x_1374_);
goto v___jp_1344_;
}
}
else
{
lean_dec(v___x_1374_);
goto v___jp_1344_;
}
}
v___jp_1202_:
{
lean_object* v___x_1203_; lean_object* v___x_1204_; 
v___x_1203_ = lean_box(0);
v___x_1204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1204_, 0, v___x_1203_);
return v___x_1204_;
}
v___jp_1205_:
{
lean_object* v___x_1215_; lean_object* v_currNamespace_1216_; lean_object* v_openDecls_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v_env_1221_; lean_object* v_nextMacroScope_1222_; lean_object* v_ngen_1223_; lean_object* v_auxDeclNGen_1224_; lean_object* v_traceState_1225_; lean_object* v_cache_1226_; lean_object* v_messages_1227_; lean_object* v_infoState_1228_; lean_object* v_snapshotTasks_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1238_; 
v___x_1215_ = lean_st_ref_take(v___y_1214_);
v_currNamespace_1216_ = lean_ctor_get(v___y_1213_, 6);
lean_inc(v_currNamespace_1216_);
v_openDecls_1217_ = lean_ctor_get(v___y_1213_, 7);
lean_inc(v_openDecls_1217_);
lean_dec_ref(v___y_1213_);
v___x_1218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1218_, 0, v_currNamespace_1216_);
lean_ctor_set(v___x_1218_, 1, v_openDecls_1217_);
v___x_1219_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1218_);
lean_ctor_set(v___x_1219_, 1, v___y_1211_);
v___x_1220_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1220_, 0, v___y_1208_);
lean_ctor_set(v___x_1220_, 1, v___y_1206_);
lean_ctor_set(v___x_1220_, 2, v___y_1212_);
lean_ctor_set(v___x_1220_, 3, v___y_1209_);
lean_ctor_set(v___x_1220_, 4, v___x_1219_);
lean_ctor_set_uint8(v___x_1220_, sizeof(void*)*5, v___y_1207_);
lean_ctor_set_uint8(v___x_1220_, sizeof(void*)*5 + 1, v___y_1210_);
lean_ctor_set_uint8(v___x_1220_, sizeof(void*)*5 + 2, v___y_1207_);
v_env_1221_ = lean_ctor_get(v___x_1215_, 0);
v_nextMacroScope_1222_ = lean_ctor_get(v___x_1215_, 1);
v_ngen_1223_ = lean_ctor_get(v___x_1215_, 2);
v_auxDeclNGen_1224_ = lean_ctor_get(v___x_1215_, 3);
v_traceState_1225_ = lean_ctor_get(v___x_1215_, 4);
v_cache_1226_ = lean_ctor_get(v___x_1215_, 5);
v_messages_1227_ = lean_ctor_get(v___x_1215_, 6);
v_infoState_1228_ = lean_ctor_get(v___x_1215_, 7);
v_snapshotTasks_1229_ = lean_ctor_get(v___x_1215_, 8);
v_isSharedCheck_1238_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1238_ == 0)
{
v___x_1231_ = v___x_1215_;
v_isShared_1232_ = v_isSharedCheck_1238_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_snapshotTasks_1229_);
lean_inc(v_infoState_1228_);
lean_inc(v_messages_1227_);
lean_inc(v_cache_1226_);
lean_inc(v_traceState_1225_);
lean_inc(v_auxDeclNGen_1224_);
lean_inc(v_ngen_1223_);
lean_inc(v_nextMacroScope_1222_);
lean_inc(v_env_1221_);
lean_dec(v___x_1215_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1238_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1233_; lean_object* v___x_1235_; 
v___x_1233_ = l_Lean_MessageLog_add(v___x_1220_, v_messages_1227_);
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 6, v___x_1233_);
v___x_1235_ = v___x_1231_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1237_; 
v_reuseFailAlloc_1237_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1237_, 0, v_env_1221_);
lean_ctor_set(v_reuseFailAlloc_1237_, 1, v_nextMacroScope_1222_);
lean_ctor_set(v_reuseFailAlloc_1237_, 2, v_ngen_1223_);
lean_ctor_set(v_reuseFailAlloc_1237_, 3, v_auxDeclNGen_1224_);
lean_ctor_set(v_reuseFailAlloc_1237_, 4, v_traceState_1225_);
lean_ctor_set(v_reuseFailAlloc_1237_, 5, v_cache_1226_);
lean_ctor_set(v_reuseFailAlloc_1237_, 6, v___x_1233_);
lean_ctor_set(v_reuseFailAlloc_1237_, 7, v_infoState_1228_);
lean_ctor_set(v_reuseFailAlloc_1237_, 8, v_snapshotTasks_1229_);
v___x_1235_ = v_reuseFailAlloc_1237_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
lean_object* v___x_1236_; 
v___x_1236_ = lean_st_ref_set(v___y_1214_, v___x_1235_);
goto v___jp_1202_;
}
}
}
v___jp_1239_:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; uint8_t v___x_1250_; 
lean_inc_ref(v___y_1246_);
v___x_1247_ = l_Lean_Parser_ParserState_allErrors(v___y_1246_);
v___x_1248_ = lean_array_get_size(v___x_1247_);
v___x_1249_ = lean_unsigned_to_nat(0u);
v___x_1250_ = lean_nat_dec_eq(v___x_1248_, v___x_1249_);
if (v___x_1250_ == 0)
{
lean_object* v___x_1251_; size_t v_sz_1252_; size_t v___x_1253_; lean_object* v___x_1254_; 
lean_dec_ref(v___y_1246_);
lean_dec_ref(v___y_1245_);
lean_dec_ref(v___y_1242_);
lean_dec_ref(v___y_1241_);
v___x_1251_ = lean_box(0);
v_sz_1252_ = lean_array_size(v___x_1247_);
v___x_1253_ = ((size_t)0ULL);
v___x_1254_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(v___y_1244_, v___x_1248_, v___x_1247_, v_sz_1252_, v___x_1253_, v___x_1251_, v___y_1199_, v___y_1200_);
lean_dec_ref(v___y_1199_);
lean_dec_ref(v___x_1247_);
if (lean_obj_tag(v___x_1254_) == 0)
{
lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1262_; 
v_isSharedCheck_1262_ = !lean_is_exclusive(v___x_1254_);
if (v_isSharedCheck_1262_ == 0)
{
lean_object* v_unused_1263_; 
v_unused_1263_ = lean_ctor_get(v___x_1254_, 0);
lean_dec(v_unused_1263_);
v___x_1256_ = v___x_1254_;
v_isShared_1257_ = v_isSharedCheck_1262_;
goto v_resetjp_1255_;
}
else
{
lean_dec(v___x_1254_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1262_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v___x_1258_; lean_object* v___x_1260_; 
v___x_1258_ = lean_box(0);
if (v_isShared_1257_ == 0)
{
lean_ctor_set(v___x_1256_, 0, v___x_1258_);
v___x_1260_ = v___x_1256_;
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
else
{
lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1271_; 
v_a_1264_ = lean_ctor_get(v___x_1254_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1254_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1266_ = v___x_1254_;
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v___x_1254_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1269_; 
if (v_isShared_1267_ == 0)
{
v___x_1269_ = v___x_1266_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_a_1264_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
}
else
{
lean_object* v_stxStack_1272_; lean_object* v_pos_1273_; uint8_t v___x_1274_; 
lean_dec_ref(v___x_1247_);
v_stxStack_1272_ = lean_ctor_get(v___y_1246_, 0);
lean_inc_ref(v_stxStack_1272_);
v_pos_1273_ = lean_ctor_get(v___y_1246_, 2);
lean_inc(v_pos_1273_);
lean_dec_ref(v___y_1246_);
v___x_1274_ = l_Lean_Parser_InputContext_atEnd(v___y_1245_, v_pos_1273_);
lean_dec_ref(v___y_1245_);
if (v___x_1274_ == 0)
{
lean_object* v___x_1275_; lean_object* v___x_1276_; uint8_t v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; uint32_t v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
lean_dec_ref(v_stxStack_1272_);
v___x_1275_ = l_Lean_FileMap_toPosition(v___y_1244_, v_pos_1273_);
v___x_1276_ = lean_box(0);
v___x_1277_ = 2;
v___x_1278_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
v___x_1279_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__0));
v___x_1280_ = lean_string_utf8_get(v___y_1242_, v_pos_1273_);
lean_dec(v_pos_1273_);
lean_dec_ref(v___y_1242_);
v___x_1281_ = lean_string_push(v___x_1278_, v___x_1280_);
v___x_1282_ = lean_string_append(v___x_1279_, v___x_1281_);
lean_dec_ref(v___x_1281_);
v___x_1283_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__5___closed__1));
v___x_1284_ = lean_string_append(v___x_1282_, v___x_1283_);
v___x_1285_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1284_);
v___x_1286_ = l_Lean_MessageData_ofFormat(v___x_1285_);
if (v___y_1243_ == 0)
{
v___y_1206_ = v___x_1275_;
v___y_1207_ = v___x_1274_;
v___y_1208_ = v___y_1241_;
v___y_1209_ = v___x_1278_;
v___y_1210_ = v___x_1277_;
v___y_1211_ = v___x_1286_;
v___y_1212_ = v___x_1276_;
v___y_1213_ = v___y_1199_;
v___y_1214_ = v___y_1200_;
goto v___jp_1205_;
}
else
{
lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___f_1289_; uint8_t v___x_1290_; 
v___x_1287_ = lean_box(v___x_1274_);
v___x_1288_ = lean_box(v___y_1240_);
v___f_1289_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1289_, 0, v___x_1287_);
lean_closure_set(v___f_1289_, 1, v___x_1288_);
lean_inc_ref(v___x_1286_);
v___x_1290_ = l_Lean_MessageData_hasTag(v___f_1289_, v___x_1286_);
if (v___x_1290_ == 0)
{
lean_dec_ref(v___x_1286_);
lean_dec_ref(v___x_1275_);
lean_dec_ref(v___y_1241_);
lean_dec_ref(v___y_1199_);
goto v___jp_1202_;
}
else
{
v___y_1206_ = v___x_1275_;
v___y_1207_ = v___x_1274_;
v___y_1208_ = v___y_1241_;
v___y_1209_ = v___x_1278_;
v___y_1210_ = v___x_1277_;
v___y_1211_ = v___x_1286_;
v___y_1212_ = v___x_1276_;
v___y_1213_ = v___y_1199_;
v___y_1214_ = v___y_1200_;
goto v___jp_1205_;
}
}
}
else
{
lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; 
lean_dec(v_pos_1273_);
lean_dec_ref(v___y_1244_);
lean_dec_ref(v___y_1242_);
lean_dec_ref(v___y_1241_);
lean_dec_ref(v___y_1199_);
v___x_1291_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1272_);
lean_dec_ref(v_stxStack_1272_);
v___x_1292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1291_);
v___x_1293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
return v___x_1293_;
}
}
}
v___jp_1294_:
{
if (v___y_1306_ == 0)
{
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
lean_dec_ref(v___y_1299_);
lean_dec_ref(v___y_1298_);
v___y_1240_ = v___y_1295_;
v___y_1241_ = v___y_1296_;
v___y_1242_ = v___y_1297_;
v___y_1243_ = v___y_1301_;
v___y_1244_ = v___y_1300_;
v___y_1245_ = v___y_1304_;
v___y_1246_ = v___y_1305_;
goto v___jp_1239_;
}
else
{
lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v_pos_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1307_ = lean_unsigned_to_nat(0u);
v___x_1308_ = lean_box(0);
v___x_1309_ = lean_box(0);
v___x_1310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1310_, 0, v___y_1303_);
lean_ctor_set(v___x_1310_, 1, v___x_1307_);
v___x_1311_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1307_);
lean_ctor_set(v___x_1311_, 1, v___x_1308_);
lean_ctor_set(v___x_1311_, 2, v___x_1309_);
lean_ctor_set(v___x_1311_, 3, v___x_1310_);
lean_ctor_set(v___x_1311_, 4, v___x_1307_);
v_pos_1312_ = lean_ctor_get(v___y_1305_, 2);
lean_inc(v_pos_1312_);
lean_dec_ref(v___y_1305_);
v___x_1313_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_block), 3, 1);
lean_closure_set(v___x_1313_, 0, v___x_1311_);
v___x_1314_ = l_Lean_Parser_ParserState_setPos(v___y_1302_, v_pos_1312_);
lean_inc_ref(v___y_1304_);
v___x_1315_ = l_Lean_Parser_ParserFn_run(v___x_1313_, v___y_1304_, v___y_1299_, v___y_1298_, v___x_1314_);
v___y_1240_ = v___y_1295_;
v___y_1241_ = v___y_1296_;
v___y_1242_ = v___y_1297_;
v___y_1243_ = v___y_1301_;
v___y_1244_ = v___y_1300_;
v___y_1245_ = v___y_1304_;
v___y_1246_ = v___x_1315_;
goto v___jp_1239_;
}
}
v___jp_1316_:
{
lean_object* v___x_1328_; lean_object* v_env_1329_; lean_object* v_ictx_1330_; lean_object* v_pmctx_1331_; lean_object* v_blockCtxt_1332_; lean_object* v___x_1333_; lean_object* v_s_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v_s_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; uint8_t v___x_1341_; 
v___x_1328_ = lean_st_ref_get(v___y_1200_);
v_env_1329_ = lean_ctor_get(v___x_1328_, 0);
lean_inc_ref(v_env_1329_);
lean_dec(v___x_1328_);
lean_inc(v___y_1327_);
lean_inc_ref(v___y_1325_);
lean_inc_ref(v___y_1320_);
lean_inc_ref(v___y_1317_);
v_ictx_1330_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_ictx_1330_, 0, v___y_1317_);
lean_ctor_set(v_ictx_1330_, 1, v___y_1320_);
lean_ctor_set(v_ictx_1330_, 2, v___y_1325_);
lean_ctor_set(v_ictx_1330_, 3, v___y_1327_);
lean_inc_ref(v_env_1329_);
v_pmctx_1331_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_pmctx_1331_, 0, v_env_1329_);
lean_ctor_set(v_pmctx_1331_, 1, v___y_1323_);
lean_ctor_set(v_pmctx_1331_, 2, v___y_1321_);
lean_ctor_set(v_pmctx_1331_, 3, v___y_1322_);
lean_inc(v___y_1319_);
lean_inc_ref(v___y_1325_);
v_blockCtxt_1332_ = l_Lean_Doc_Parser_BlockCtxt_forDocString(v___y_1325_, v___y_1319_, v___y_1327_);
v___x_1333_ = l_Lean_Parser_mkParserState(v___y_1317_);
lean_inc_ref(v___x_1333_);
v_s_1334_ = l_Lean_Parser_ParserState_setPos(v___x_1333_, v___y_1319_);
v___x_1335_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document), 3, 1);
lean_closure_set(v___x_1335_, 0, v_blockCtxt_1332_);
v___x_1336_ = l_Lean_Parser_getTokenTable(v_env_1329_);
lean_inc_ref(v___x_1336_);
lean_inc_ref(v_pmctx_1331_);
lean_inc_ref(v_ictx_1330_);
v_s_1337_ = l_Lean_Parser_ParserFn_run(v___x_1335_, v_ictx_1330_, v_pmctx_1331_, v___x_1336_, v_s_1334_);
lean_inc_ref(v_s_1337_);
v___x_1338_ = l_Lean_Parser_ParserState_allErrors(v_s_1337_);
v___x_1339_ = lean_array_get_size(v___x_1338_);
lean_dec_ref(v___x_1338_);
v___x_1340_ = lean_unsigned_to_nat(0u);
v___x_1341_ = lean_nat_dec_eq(v___x_1339_, v___x_1340_);
if (v___x_1341_ == 0)
{
v___y_1295_ = v___y_1318_;
v___y_1296_ = v___y_1320_;
v___y_1297_ = v___y_1317_;
v___y_1298_ = v___x_1336_;
v___y_1299_ = v_pmctx_1331_;
v___y_1300_ = v___y_1325_;
v___y_1301_ = v___y_1324_;
v___y_1302_ = v___x_1333_;
v___y_1303_ = v___y_1326_;
v___y_1304_ = v_ictx_1330_;
v___y_1305_ = v_s_1337_;
v___y_1306_ = v___x_1341_;
goto v___jp_1294_;
}
else
{
lean_object* v_pos_1342_; uint8_t v___x_1343_; 
v_pos_1342_ = lean_ctor_get(v_s_1337_, 2);
lean_inc(v_pos_1342_);
v___x_1343_ = l_Lean_Parser_InputContext_atEnd(v_ictx_1330_, v_pos_1342_);
lean_dec(v_pos_1342_);
if (v___x_1343_ == 0)
{
v___y_1295_ = v___y_1318_;
v___y_1296_ = v___y_1320_;
v___y_1297_ = v___y_1317_;
v___y_1298_ = v___x_1336_;
v___y_1299_ = v_pmctx_1331_;
v___y_1300_ = v___y_1325_;
v___y_1301_ = v___y_1324_;
v___y_1302_ = v___x_1333_;
v___y_1303_ = v___y_1326_;
v___y_1304_ = v_ictx_1330_;
v___y_1305_ = v_s_1337_;
v___y_1306_ = v___x_1341_;
goto v___jp_1294_;
}
else
{
lean_dec_ref(v___x_1336_);
lean_dec_ref(v___x_1333_);
lean_dec_ref(v_pmctx_1331_);
lean_dec(v___y_1326_);
v___y_1240_ = v___y_1318_;
v___y_1241_ = v___y_1320_;
v___y_1242_ = v___y_1317_;
v___y_1243_ = v___y_1324_;
v___y_1244_ = v___y_1325_;
v___y_1245_ = v_ictx_1330_;
v___y_1246_ = v_s_1337_;
goto v___jp_1239_;
}
}
}
v___jp_1344_:
{
lean_object* v_fileName_1345_; lean_object* v_fileMap_1346_; lean_object* v_options_1347_; lean_object* v_currNamespace_1348_; lean_object* v_openDecls_1349_; uint8_t v_suppressElabErrors_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; uint8_t v___x_1353_; lean_object* v___x_1354_; 
v_fileName_1345_ = lean_ctor_get(v___y_1199_, 0);
v_fileMap_1346_ = lean_ctor_get(v___y_1199_, 1);
v_options_1347_ = lean_ctor_get(v___y_1199_, 2);
v_currNamespace_1348_ = lean_ctor_get(v___y_1199_, 6);
v_openDecls_1349_ = lean_ctor_get(v___y_1199_, 7);
v_suppressElabErrors_1350_ = lean_ctor_get_uint8(v___y_1199_, sizeof(void*)*14 + 1);
v___x_1351_ = lean_unsigned_to_nat(1u);
v___x_1352_ = l_Lean_Syntax_getArg(v_docComment_1194_, v___x_1351_);
v___x_1353_ = 1;
v___x_1354_ = l_Lean_Syntax_getPos_x3f(v___x_1352_, v___x_1353_);
if (lean_obj_tag(v___x_1354_) == 1)
{
lean_object* v_val_1355_; lean_object* v___x_1356_; 
v_val_1355_ = lean_ctor_get(v___x_1354_, 0);
lean_inc(v_val_1355_);
lean_dec_ref(v___x_1354_);
v___x_1356_ = l_Lean_Syntax_getTailPos_x3f(v___x_1352_, v___x_1353_);
lean_dec(v___x_1352_);
if (lean_obj_tag(v___x_1356_) == 1)
{
lean_object* v_val_1357_; lean_object* v_source_1358_; lean_object* v___x_1359_; lean_object* v_endPos_1360_; lean_object* v___x_1361_; uint8_t v___x_1362_; 
lean_dec_ref(v___y_1195_);
lean_dec(v_docComment_1194_);
v_val_1357_ = lean_ctor_get(v___x_1356_, 0);
lean_inc(v_val_1357_);
lean_dec_ref(v___x_1356_);
v_source_1358_ = lean_ctor_get(v_fileMap_1346_, 0);
v___x_1359_ = lean_string_utf8_prev(v_source_1358_, v_val_1357_);
lean_dec(v_val_1357_);
v_endPos_1360_ = lean_string_utf8_prev(v_source_1358_, v___x_1359_);
lean_dec(v___x_1359_);
v___x_1361_ = lean_string_utf8_byte_size(v_source_1358_);
v___x_1362_ = lean_nat_dec_le(v_endPos_1360_, v___x_1361_);
if (v___x_1362_ == 0)
{
lean_dec(v_endPos_1360_);
lean_inc_ref(v_fileMap_1346_);
lean_inc_ref(v_options_1347_);
lean_inc(v_openDecls_1349_);
lean_inc(v_currNamespace_1348_);
lean_inc_ref(v_fileName_1345_);
lean_inc_ref(v_source_1358_);
v___y_1317_ = v_source_1358_;
v___y_1318_ = v_suppressElabErrors_1350_;
v___y_1319_ = v_val_1355_;
v___y_1320_ = v_fileName_1345_;
v___y_1321_ = v_currNamespace_1348_;
v___y_1322_ = v_openDecls_1349_;
v___y_1323_ = v_options_1347_;
v___y_1324_ = v_suppressElabErrors_1350_;
v___y_1325_ = v_fileMap_1346_;
v___y_1326_ = v___x_1351_;
v___y_1327_ = v___x_1361_;
goto v___jp_1316_;
}
else
{
lean_inc_ref(v_fileMap_1346_);
lean_inc_ref(v_options_1347_);
lean_inc(v_openDecls_1349_);
lean_inc(v_currNamespace_1348_);
lean_inc_ref(v_fileName_1345_);
lean_inc_ref(v_source_1358_);
v___y_1317_ = v_source_1358_;
v___y_1318_ = v_suppressElabErrors_1350_;
v___y_1319_ = v_val_1355_;
v___y_1320_ = v_fileName_1345_;
v___y_1321_ = v_currNamespace_1348_;
v___y_1322_ = v_openDecls_1349_;
v___y_1323_ = v_options_1347_;
v___y_1324_ = v_suppressElabErrors_1350_;
v___y_1325_ = v_fileMap_1346_;
v___y_1326_ = v___x_1351_;
v___y_1327_ = v_endPos_1360_;
goto v___jp_1316_;
}
}
else
{
lean_object* v___x_1363_; lean_object* v___x_1364_; 
lean_dec(v___x_1356_);
lean_dec(v_val_1355_);
v___x_1363_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_1364_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_docComment_1194_, v___x_1363_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_);
lean_dec(v_docComment_1194_);
return v___x_1364_;
}
}
else
{
lean_object* v___x_1365_; lean_object* v___x_1366_; 
lean_dec(v___x_1354_);
lean_dec(v___x_1352_);
v___x_1365_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_1366_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_docComment_1194_, v___x_1365_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_);
lean_dec(v_docComment_1194_);
return v___x_1366_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___boxed(lean_object* v_docComment_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_){
_start:
{
lean_object* v_res_1417_; 
v_res_1417_ = l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(v_docComment_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_, v___y_1415_);
lean_dec(v___y_1415_);
lean_dec(v___y_1413_);
lean_dec_ref(v___y_1412_);
lean_dec(v___y_1411_);
return v_res_1417_;
}
}
static lean_object* _init_l_Lean_versoDocString___closed__1(void){
_start:
{
lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1420_ = ((lean_object*)(l_Lean_versoDocString___closed__0));
v___x_1421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1420_);
lean_ctor_set(v___x_1421_, 1, v___x_1420_);
return v___x_1421_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocString(lean_object* v_declName_1422_, lean_object* v_binders_1423_, lean_object* v_docComment_1424_, lean_object* v_a_1425_, lean_object* v_a_1426_, lean_object* v_a_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_){
_start:
{
lean_object* v___x_1432_; 
lean_inc_ref(v_a_1429_);
lean_inc_ref(v_a_1425_);
v___x_1432_ = l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(v_docComment_1424_, v_a_1425_, v_a_1426_, v_a_1427_, v_a_1428_, v_a_1429_, v_a_1430_);
if (lean_obj_tag(v___x_1432_) == 0)
{
lean_object* v_a_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1449_; 
v_a_1433_ = lean_ctor_get(v___x_1432_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1432_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1435_ = v___x_1432_;
v_isShared_1436_ = v_isSharedCheck_1449_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_a_1433_);
lean_dec(v___x_1432_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1449_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
if (lean_obj_tag(v_a_1433_) == 1)
{
lean_object* v_val_1437_; lean_object* v___x_1438_; size_t v_sz_1439_; size_t v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; uint8_t v___x_1443_; lean_object* v___x_1444_; 
lean_del_object(v___x_1435_);
v_val_1437_ = lean_ctor_get(v_a_1433_, 0);
lean_inc(v_val_1437_);
lean_dec_ref(v_a_1433_);
v___x_1438_ = l_Lean_Syntax_getArgs(v_val_1437_);
lean_dec(v_val_1437_);
v_sz_1439_ = lean_array_size(v___x_1438_);
v___x_1440_ = ((size_t)0ULL);
v___x_1441_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(v_sz_1439_, v___x_1440_, v___x_1438_);
v___x_1442_ = lean_alloc_closure((void*)(l_Lean_Doc_elabBlocks___boxed), 11, 1);
lean_closure_set(v___x_1442_, 0, v___x_1441_);
v___x_1443_ = 0;
v___x_1444_ = l_Lean_Doc_DocM_exec___redArg(v_declName_1422_, v_binders_1423_, v___x_1442_, v___x_1443_, v_a_1425_, v_a_1426_, v_a_1427_, v_a_1428_, v_a_1429_, v_a_1430_);
return v___x_1444_;
}
else
{
lean_object* v___x_1445_; lean_object* v___x_1447_; 
lean_dec(v_a_1433_);
lean_dec(v_a_1430_);
lean_dec_ref(v_a_1429_);
lean_dec(v_a_1428_);
lean_dec_ref(v_a_1427_);
lean_dec(v_a_1426_);
lean_dec_ref(v_a_1425_);
lean_dec(v_binders_1423_);
lean_dec(v_declName_1422_);
v___x_1445_ = lean_obj_once(&l_Lean_versoDocString___closed__1, &l_Lean_versoDocString___closed__1_once, _init_l_Lean_versoDocString___closed__1);
if (v_isShared_1436_ == 0)
{
lean_ctor_set(v___x_1435_, 0, v___x_1445_);
v___x_1447_ = v___x_1435_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v___x_1445_);
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
else
{
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
lean_dec(v_a_1430_);
lean_dec_ref(v_a_1429_);
lean_dec(v_a_1428_);
lean_dec_ref(v_a_1427_);
lean_dec(v_a_1426_);
lean_dec_ref(v_a_1425_);
lean_dec(v_binders_1423_);
lean_dec(v_declName_1422_);
v_a_1450_ = lean_ctor_get(v___x_1432_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1432_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1452_ = v___x_1432_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1432_);
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
LEAN_EXPORT lean_object* l_Lean_versoDocString___boxed(lean_object* v_declName_1458_, lean_object* v_binders_1459_, lean_object* v_docComment_1460_, lean_object* v_a_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_, lean_object* v_a_1464_, lean_object* v_a_1465_, lean_object* v_a_1466_, lean_object* v_a_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l_Lean_versoDocString(v_declName_1458_, v_binders_1459_, v_docComment_1460_, v_a_1461_, v_a_1462_, v_a_1463_, v_a_1464_, v_a_1465_, v_a_1466_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0(lean_object* v___x_1469_, lean_object* v___x_1470_, lean_object* v_as_1471_, size_t v_sz_1472_, size_t v_i_1473_, lean_object* v_b_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_){
_start:
{
lean_object* v___x_1482_; 
v___x_1482_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(v___x_1469_, v___x_1470_, v_as_1471_, v_sz_1472_, v_i_1473_, v_b_1474_, v___y_1479_, v___y_1480_);
return v___x_1482_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___boxed(lean_object* v___x_1483_, lean_object* v___x_1484_, lean_object* v_as_1485_, lean_object* v_sz_1486_, lean_object* v_i_1487_, lean_object* v_b_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_){
_start:
{
size_t v_sz_boxed_1496_; size_t v_i_boxed_1497_; lean_object* v_res_1498_; 
v_sz_boxed_1496_ = lean_unbox_usize(v_sz_1486_);
lean_dec(v_sz_1486_);
v_i_boxed_1497_ = lean_unbox_usize(v_i_1487_);
lean_dec(v_i_1487_);
v_res_1498_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0(v___x_1483_, v___x_1484_, v_as_1485_, v_sz_boxed_1496_, v_i_boxed_1497_, v_b_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_);
lean_dec(v___y_1494_);
lean_dec_ref(v___y_1493_);
lean_dec(v___y_1492_);
lean_dec_ref(v___y_1491_);
lean_dec(v___y_1490_);
lean_dec_ref(v___y_1489_);
lean_dec_ref(v_as_1485_);
lean_dec(v___x_1484_);
return v_res_1498_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1(lean_object* v_00_u03b1_1499_, lean_object* v_ref_1500_, lean_object* v_msg_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_){
_start:
{
lean_object* v___x_1509_; 
v___x_1509_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_ref_1500_, v_msg_1501_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1510_, lean_object* v_ref_1511_, lean_object* v_msg_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_){
_start:
{
lean_object* v_res_1520_; 
v_res_1520_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1(v_00_u03b1_1510_, v_ref_1511_, v_msg_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
lean_dec(v___y_1518_);
lean_dec(v___y_1516_);
lean_dec_ref(v___y_1515_);
lean_dec(v___y_1514_);
lean_dec(v_ref_1511_);
return v_res_1520_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_1521_, lean_object* v_msg_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_){
_start:
{
lean_object* v___x_1530_; 
v___x_1530_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v_msg_1522_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_);
return v___x_1530_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1531_, lean_object* v_msg_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2(v_00_u03b1_1531_, v_msg_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_);
lean_dec(v___y_1538_);
lean_dec_ref(v___y_1537_);
lean_dec(v___y_1536_);
lean_dec_ref(v___y_1535_);
lean_dec(v___y_1534_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5(lean_object* v_msgData_1541_, lean_object* v_macroStack_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_){
_start:
{
lean_object* v___x_1550_; 
v___x_1550_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg(v_msgData_1541_, v_macroStack_1542_, v___y_1547_);
return v___x_1550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___boxed(lean_object* v_msgData_1551_, lean_object* v_macroStack_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_, lean_object* v___y_1559_){
_start:
{
lean_object* v_res_1560_; 
v_res_1560_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5(v_msgData_1551_, v_macroStack_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_);
lean_dec(v___y_1558_);
lean_dec_ref(v___y_1557_);
lean_dec(v___y_1556_);
lean_dec_ref(v___y_1555_);
lean_dec(v___y_1554_);
lean_dec_ref(v___y_1553_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoModDocString_spec__0(size_t v_sz_1561_, size_t v_i_1562_, lean_object* v_bs_1563_){
_start:
{
uint8_t v___x_1564_; 
v___x_1564_ = lean_usize_dec_lt(v_i_1562_, v_sz_1561_);
if (v___x_1564_ == 0)
{
return v_bs_1563_;
}
else
{
lean_object* v_v_1565_; lean_object* v___x_1566_; lean_object* v_bs_x27_1567_; size_t v___x_1568_; size_t v___x_1569_; lean_object* v___x_1570_; 
v_v_1565_ = lean_array_uget(v_bs_1563_, v_i_1562_);
v___x_1566_ = lean_unsigned_to_nat(0u);
v_bs_x27_1567_ = lean_array_uset(v_bs_1563_, v_i_1562_, v___x_1566_);
v___x_1568_ = ((size_t)1ULL);
v___x_1569_ = lean_usize_add(v_i_1562_, v___x_1568_);
v___x_1570_ = lean_array_uset(v_bs_x27_1567_, v_i_1562_, v_v_1565_);
v_i_1562_ = v___x_1569_;
v_bs_1563_ = v___x_1570_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoModDocString_spec__0___boxed(lean_object* v_sz_1572_, lean_object* v_i_1573_, lean_object* v_bs_1574_){
_start:
{
size_t v_sz_boxed_1575_; size_t v_i_boxed_1576_; lean_object* v_res_1577_; 
v_sz_boxed_1575_ = lean_unbox_usize(v_sz_1572_);
lean_dec(v_sz_1572_);
v_i_boxed_1576_ = lean_unbox_usize(v_i_1573_);
lean_dec(v_i_1573_);
v_res_1577_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoModDocString_spec__0(v_sz_boxed_1575_, v_i_boxed_1576_, v_bs_1574_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoModDocString(lean_object* v_range_1578_, lean_object* v_doc_1579_, lean_object* v_a_1580_, lean_object* v_a_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_){
_start:
{
lean_object* v___x_1587_; lean_object* v___y_1589_; lean_object* v___y_1590_; lean_object* v___y_1595_; lean_object* v_env_1602_; lean_object* v___x_1603_; lean_object* v_terminalNesting_1604_; 
v___x_1587_ = lean_st_ref_get(v_a_1585_);
v_env_1602_ = lean_ctor_get(v___x_1587_, 0);
lean_inc_ref(v_env_1602_);
lean_dec(v___x_1587_);
v___x_1603_ = l_Lean_getMainVersoModuleDocs(v_env_1602_);
v_terminalNesting_1604_ = lean_ctor_get(v___x_1603_, 1);
lean_inc(v_terminalNesting_1604_);
lean_dec_ref(v___x_1603_);
if (lean_obj_tag(v_terminalNesting_1604_) == 0)
{
v___y_1595_ = v_terminalNesting_1604_;
goto v___jp_1594_;
}
else
{
lean_object* v_val_1605_; lean_object* v___x_1607_; uint8_t v_isShared_1608_; uint8_t v_isSharedCheck_1614_; 
v_val_1605_ = lean_ctor_get(v_terminalNesting_1604_, 0);
v_isSharedCheck_1614_ = !lean_is_exclusive(v_terminalNesting_1604_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1607_ = v_terminalNesting_1604_;
v_isShared_1608_ = v_isSharedCheck_1614_;
goto v_resetjp_1606_;
}
else
{
lean_inc(v_val_1605_);
lean_dec(v_terminalNesting_1604_);
v___x_1607_ = lean_box(0);
v_isShared_1608_ = v_isSharedCheck_1614_;
goto v_resetjp_1606_;
}
v_resetjp_1606_:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1612_; 
v___x_1609_ = lean_unsigned_to_nat(1u);
v___x_1610_ = lean_nat_add(v_val_1605_, v___x_1609_);
lean_dec(v_val_1605_);
if (v_isShared_1608_ == 0)
{
lean_ctor_set(v___x_1607_, 0, v___x_1610_);
v___x_1612_ = v___x_1607_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v___x_1610_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
v___y_1595_ = v___x_1612_;
goto v___jp_1594_;
}
}
}
v___jp_1588_:
{
lean_object* v___x_1591_; uint8_t v___x_1592_; lean_object* v___x_1593_; 
v___x_1591_ = lean_alloc_closure((void*)(l_Lean_Doc_elabModSnippet___boxed), 13, 3);
lean_closure_set(v___x_1591_, 0, v_range_1578_);
lean_closure_set(v___x_1591_, 1, v___y_1589_);
lean_closure_set(v___x_1591_, 2, v___y_1590_);
v___x_1592_ = 0;
v___x_1593_ = l_Lean_Doc_DocM_execForModule___redArg(v___x_1591_, v___x_1592_, v_a_1580_, v_a_1581_, v_a_1582_, v_a_1583_, v_a_1584_, v_a_1585_);
return v___x_1593_;
}
v___jp_1594_:
{
lean_object* v___x_1596_; size_t v_sz_1597_; size_t v___x_1598_; lean_object* v___x_1599_; 
v___x_1596_ = l_Lean_Syntax_getArgs(v_doc_1579_);
v_sz_1597_ = lean_array_size(v___x_1596_);
v___x_1598_ = ((size_t)0ULL);
v___x_1599_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoModDocString_spec__0(v_sz_1597_, v___x_1598_, v___x_1596_);
if (lean_obj_tag(v___y_1595_) == 0)
{
lean_object* v___x_1600_; 
v___x_1600_ = lean_unsigned_to_nat(0u);
v___y_1589_ = v___x_1599_;
v___y_1590_ = v___x_1600_;
goto v___jp_1588_;
}
else
{
lean_object* v_val_1601_; 
v_val_1601_ = lean_ctor_get(v___y_1595_, 0);
lean_inc(v_val_1601_);
lean_dec_ref(v___y_1595_);
v___y_1589_ = v___x_1599_;
v___y_1590_ = v_val_1601_;
goto v___jp_1588_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoModDocString___boxed(lean_object* v_range_1615_, lean_object* v_doc_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_, lean_object* v_a_1622_, lean_object* v_a_1623_){
_start:
{
lean_object* v_res_1624_; 
v_res_1624_ = l_Lean_versoModDocString(v_range_1615_, v_doc_1616_, v_a_1617_, v_a_1618_, v_a_1619_, v_a_1620_, v_a_1621_, v_a_1622_);
lean_dec(v_doc_1616_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___lam__0(lean_object* v___x_1625_, lean_object* v_declName_1626_, lean_object* v___x_1627_, lean_object* v___x_1628_, uint8_t v___x_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_){
_start:
{
lean_object* v_fileName_1637_; lean_object* v_options_1638_; lean_object* v_currRecDepth_1639_; lean_object* v_maxRecDepth_1640_; lean_object* v_ref_1641_; lean_object* v_currNamespace_1642_; lean_object* v_openDecls_1643_; lean_object* v_initHeartbeats_1644_; lean_object* v_maxHeartbeats_1645_; lean_object* v_quotContext_1646_; lean_object* v_currMacroScope_1647_; uint8_t v_diag_1648_; lean_object* v_cancelTk_x3f_1649_; uint8_t v_suppressElabErrors_1650_; lean_object* v_inheritedTraceOptions_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1659_; 
v_fileName_1637_ = lean_ctor_get(v___y_1634_, 0);
v_options_1638_ = lean_ctor_get(v___y_1634_, 2);
v_currRecDepth_1639_ = lean_ctor_get(v___y_1634_, 3);
v_maxRecDepth_1640_ = lean_ctor_get(v___y_1634_, 4);
v_ref_1641_ = lean_ctor_get(v___y_1634_, 5);
v_currNamespace_1642_ = lean_ctor_get(v___y_1634_, 6);
v_openDecls_1643_ = lean_ctor_get(v___y_1634_, 7);
v_initHeartbeats_1644_ = lean_ctor_get(v___y_1634_, 8);
v_maxHeartbeats_1645_ = lean_ctor_get(v___y_1634_, 9);
v_quotContext_1646_ = lean_ctor_get(v___y_1634_, 10);
v_currMacroScope_1647_ = lean_ctor_get(v___y_1634_, 11);
v_diag_1648_ = lean_ctor_get_uint8(v___y_1634_, sizeof(void*)*14);
v_cancelTk_x3f_1649_ = lean_ctor_get(v___y_1634_, 12);
v_suppressElabErrors_1650_ = lean_ctor_get_uint8(v___y_1634_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1651_ = lean_ctor_get(v___y_1634_, 13);
v_isSharedCheck_1659_ = !lean_is_exclusive(v___y_1634_);
if (v_isSharedCheck_1659_ == 0)
{
lean_object* v_unused_1660_; 
v_unused_1660_ = lean_ctor_get(v___y_1634_, 1);
lean_dec(v_unused_1660_);
v___x_1653_ = v___y_1634_;
v_isShared_1654_ = v_isSharedCheck_1659_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_inheritedTraceOptions_1651_);
lean_inc(v_cancelTk_x3f_1649_);
lean_inc(v_currMacroScope_1647_);
lean_inc(v_quotContext_1646_);
lean_inc(v_maxHeartbeats_1645_);
lean_inc(v_initHeartbeats_1644_);
lean_inc(v_openDecls_1643_);
lean_inc(v_currNamespace_1642_);
lean_inc(v_ref_1641_);
lean_inc(v_maxRecDepth_1640_);
lean_inc(v_currRecDepth_1639_);
lean_inc(v_options_1638_);
lean_inc(v_fileName_1637_);
lean_dec(v___y_1634_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1659_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
lean_ctor_set(v___x_1653_, 1, v___x_1625_);
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v_fileName_1637_);
lean_ctor_set(v_reuseFailAlloc_1658_, 1, v___x_1625_);
lean_ctor_set(v_reuseFailAlloc_1658_, 2, v_options_1638_);
lean_ctor_set(v_reuseFailAlloc_1658_, 3, v_currRecDepth_1639_);
lean_ctor_set(v_reuseFailAlloc_1658_, 4, v_maxRecDepth_1640_);
lean_ctor_set(v_reuseFailAlloc_1658_, 5, v_ref_1641_);
lean_ctor_set(v_reuseFailAlloc_1658_, 6, v_currNamespace_1642_);
lean_ctor_set(v_reuseFailAlloc_1658_, 7, v_openDecls_1643_);
lean_ctor_set(v_reuseFailAlloc_1658_, 8, v_initHeartbeats_1644_);
lean_ctor_set(v_reuseFailAlloc_1658_, 9, v_maxHeartbeats_1645_);
lean_ctor_set(v_reuseFailAlloc_1658_, 10, v_quotContext_1646_);
lean_ctor_set(v_reuseFailAlloc_1658_, 11, v_currMacroScope_1647_);
lean_ctor_set(v_reuseFailAlloc_1658_, 12, v_cancelTk_x3f_1649_);
lean_ctor_set(v_reuseFailAlloc_1658_, 13, v_inheritedTraceOptions_1651_);
lean_ctor_set_uint8(v_reuseFailAlloc_1658_, sizeof(void*)*14, v_diag_1648_);
lean_ctor_set_uint8(v_reuseFailAlloc_1658_, sizeof(void*)*14 + 1, v_suppressElabErrors_1650_);
v___x_1656_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
lean_object* v___x_1657_; 
v___x_1657_ = l_Lean_Doc_DocM_exec___redArg(v_declName_1626_, v___x_1627_, v___x_1628_, v___x_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___x_1656_, v___y_1635_);
return v___x_1657_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___lam__0___boxed(lean_object* v___x_1661_, lean_object* v_declName_1662_, lean_object* v___x_1663_, lean_object* v___x_1664_, lean_object* v___x_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_){
_start:
{
uint8_t v___x_15602__boxed_1673_; lean_object* v_res_1674_; 
v___x_15602__boxed_1673_ = lean_unbox(v___x_1665_);
v_res_1674_ = l_Lean_versoDocStringFromString___lam__0(v___x_1661_, v_declName_1662_, v___x_1663_, v___x_1664_, v___x_15602__boxed_1673_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_);
return v_res_1674_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg___lam__0(uint8_t v___y_1675_, uint8_t v_suppressElabErrors_1676_, lean_object* v_x_1677_){
_start:
{
if (lean_obj_tag(v_x_1677_) == 1)
{
lean_object* v_pre_1678_; 
v_pre_1678_ = lean_ctor_get(v_x_1677_, 0);
switch(lean_obj_tag(v_pre_1678_))
{
case 1:
{
lean_object* v_pre_1679_; 
v_pre_1679_ = lean_ctor_get(v_pre_1678_, 0);
switch(lean_obj_tag(v_pre_1679_))
{
case 0:
{
lean_object* v_str_1680_; lean_object* v_str_1681_; lean_object* v___x_1682_; uint8_t v___x_1683_; 
v_str_1680_ = lean_ctor_get(v_x_1677_, 1);
v_str_1681_ = lean_ctor_get(v_pre_1678_, 1);
v___x_1682_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__0));
v___x_1683_ = lean_string_dec_eq(v_str_1681_, v___x_1682_);
if (v___x_1683_ == 0)
{
lean_object* v___x_1684_; uint8_t v___x_1685_; 
v___x_1684_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__1));
v___x_1685_ = lean_string_dec_eq(v_str_1681_, v___x_1684_);
if (v___x_1685_ == 0)
{
return v___y_1675_;
}
else
{
lean_object* v___x_1686_; uint8_t v___x_1687_; 
v___x_1686_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__2));
v___x_1687_ = lean_string_dec_eq(v_str_1680_, v___x_1686_);
if (v___x_1687_ == 0)
{
return v___y_1675_;
}
else
{
return v_suppressElabErrors_1676_;
}
}
}
else
{
lean_object* v___x_1688_; uint8_t v___x_1689_; 
v___x_1688_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__3));
v___x_1689_ = lean_string_dec_eq(v_str_1680_, v___x_1688_);
if (v___x_1689_ == 0)
{
return v___y_1675_;
}
else
{
return v_suppressElabErrors_1676_;
}
}
}
case 1:
{
lean_object* v_pre_1690_; 
v_pre_1690_ = lean_ctor_get(v_pre_1679_, 0);
if (lean_obj_tag(v_pre_1690_) == 0)
{
lean_object* v_str_1691_; lean_object* v_str_1692_; lean_object* v_str_1693_; lean_object* v___x_1694_; uint8_t v___x_1695_; 
v_str_1691_ = lean_ctor_get(v_x_1677_, 1);
v_str_1692_ = lean_ctor_get(v_pre_1678_, 1);
v_str_1693_ = lean_ctor_get(v_pre_1679_, 1);
v___x_1694_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__4));
v___x_1695_ = lean_string_dec_eq(v_str_1693_, v___x_1694_);
if (v___x_1695_ == 0)
{
return v___y_1675_;
}
else
{
lean_object* v___x_1696_; uint8_t v___x_1697_; 
v___x_1696_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__5));
v___x_1697_ = lean_string_dec_eq(v_str_1692_, v___x_1696_);
if (v___x_1697_ == 0)
{
return v___y_1675_;
}
else
{
lean_object* v___x_1698_; uint8_t v___x_1699_; 
v___x_1698_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__6));
v___x_1699_ = lean_string_dec_eq(v_str_1691_, v___x_1698_);
if (v___x_1699_ == 0)
{
return v___y_1675_;
}
else
{
return v_suppressElabErrors_1676_;
}
}
}
}
else
{
return v___y_1675_;
}
}
default: 
{
return v___y_1675_;
}
}
}
case 0:
{
lean_object* v_str_1700_; lean_object* v___x_1701_; uint8_t v___x_1702_; 
v_str_1700_ = lean_ctor_get(v_x_1677_, 1);
v___x_1701_ = ((lean_object*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__7));
v___x_1702_ = lean_string_dec_eq(v_str_1700_, v___x_1701_);
if (v___x_1702_ == 0)
{
return v___y_1675_;
}
else
{
return v_suppressElabErrors_1676_;
}
}
default: 
{
return v___y_1675_;
}
}
}
else
{
return v___y_1675_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg___lam__0___boxed(lean_object* v___y_1703_, lean_object* v_suppressElabErrors_1704_, lean_object* v_x_1705_){
_start:
{
uint8_t v___y_15658__boxed_1706_; uint8_t v_suppressElabErrors_boxed_1707_; uint8_t v_res_1708_; lean_object* v_r_1709_; 
v___y_15658__boxed_1706_ = lean_unbox(v___y_1703_);
v_suppressElabErrors_boxed_1707_ = lean_unbox(v_suppressElabErrors_1704_);
v_res_1708_ = l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg___lam__0(v___y_15658__boxed_1706_, v_suppressElabErrors_boxed_1707_, v_x_1705_);
lean_dec(v_x_1705_);
v_r_1709_ = lean_box(v_res_1708_);
return v_r_1709_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg(lean_object* v_ref_1710_, lean_object* v_msgData_1711_, uint8_t v_severity_1712_, uint8_t v_isSilent_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_){
_start:
{
uint8_t v___y_1720_; lean_object* v___y_1721_; lean_object* v___y_1722_; uint8_t v___y_1723_; lean_object* v___y_1724_; lean_object* v___y_1725_; lean_object* v___y_1726_; lean_object* v___y_1727_; lean_object* v___y_1728_; lean_object* v___y_1756_; uint8_t v___y_1757_; lean_object* v___y_1758_; lean_object* v___y_1759_; uint8_t v___y_1760_; uint8_t v___y_1761_; lean_object* v___y_1762_; lean_object* v___y_1763_; lean_object* v___y_1781_; uint8_t v___y_1782_; lean_object* v___y_1783_; lean_object* v___y_1784_; uint8_t v___y_1785_; lean_object* v___y_1786_; uint8_t v___y_1787_; lean_object* v___y_1788_; lean_object* v___y_1792_; lean_object* v___y_1793_; uint8_t v___y_1794_; lean_object* v___y_1795_; uint8_t v___y_1796_; lean_object* v___y_1797_; uint8_t v___y_1798_; uint8_t v___x_1803_; lean_object* v___y_1805_; lean_object* v___y_1806_; lean_object* v___y_1807_; lean_object* v___y_1808_; uint8_t v___y_1809_; uint8_t v___y_1810_; uint8_t v___y_1811_; uint8_t v___y_1813_; uint8_t v___x_1828_; 
v___x_1803_ = 2;
v___x_1828_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1712_, v___x_1803_);
if (v___x_1828_ == 0)
{
v___y_1813_ = v___x_1828_;
goto v___jp_1812_;
}
else
{
uint8_t v___x_1829_; 
lean_inc_ref(v_msgData_1711_);
v___x_1829_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1711_);
v___y_1813_ = v___x_1829_;
goto v___jp_1812_;
}
v___jp_1719_:
{
lean_object* v___x_1729_; lean_object* v_currNamespace_1730_; lean_object* v_openDecls_1731_; lean_object* v_env_1732_; lean_object* v_nextMacroScope_1733_; lean_object* v_ngen_1734_; lean_object* v_auxDeclNGen_1735_; lean_object* v_traceState_1736_; lean_object* v_cache_1737_; lean_object* v_messages_1738_; lean_object* v_infoState_1739_; lean_object* v_snapshotTasks_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1754_; 
v___x_1729_ = lean_st_ref_take(v___y_1728_);
v_currNamespace_1730_ = lean_ctor_get(v___y_1727_, 6);
lean_inc(v_currNamespace_1730_);
v_openDecls_1731_ = lean_ctor_get(v___y_1727_, 7);
lean_inc(v_openDecls_1731_);
lean_dec_ref(v___y_1727_);
v_env_1732_ = lean_ctor_get(v___x_1729_, 0);
v_nextMacroScope_1733_ = lean_ctor_get(v___x_1729_, 1);
v_ngen_1734_ = lean_ctor_get(v___x_1729_, 2);
v_auxDeclNGen_1735_ = lean_ctor_get(v___x_1729_, 3);
v_traceState_1736_ = lean_ctor_get(v___x_1729_, 4);
v_cache_1737_ = lean_ctor_get(v___x_1729_, 5);
v_messages_1738_ = lean_ctor_get(v___x_1729_, 6);
v_infoState_1739_ = lean_ctor_get(v___x_1729_, 7);
v_snapshotTasks_1740_ = lean_ctor_get(v___x_1729_, 8);
v_isSharedCheck_1754_ = !lean_is_exclusive(v___x_1729_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1742_ = v___x_1729_;
v_isShared_1743_ = v_isSharedCheck_1754_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_snapshotTasks_1740_);
lean_inc(v_infoState_1739_);
lean_inc(v_messages_1738_);
lean_inc(v_cache_1737_);
lean_inc(v_traceState_1736_);
lean_inc(v_auxDeclNGen_1735_);
lean_inc(v_ngen_1734_);
lean_inc(v_nextMacroScope_1733_);
lean_inc(v_env_1732_);
lean_dec(v___x_1729_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1754_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1749_; 
v___x_1744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1744_, 0, v_currNamespace_1730_);
lean_ctor_set(v___x_1744_, 1, v_openDecls_1731_);
v___x_1745_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1745_, 0, v___x_1744_);
lean_ctor_set(v___x_1745_, 1, v___y_1726_);
v___x_1746_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1746_, 0, v___y_1724_);
lean_ctor_set(v___x_1746_, 1, v___y_1721_);
lean_ctor_set(v___x_1746_, 2, v___y_1722_);
lean_ctor_set(v___x_1746_, 3, v___y_1725_);
lean_ctor_set(v___x_1746_, 4, v___x_1745_);
lean_ctor_set_uint8(v___x_1746_, sizeof(void*)*5, v___y_1723_);
lean_ctor_set_uint8(v___x_1746_, sizeof(void*)*5 + 1, v___y_1720_);
lean_ctor_set_uint8(v___x_1746_, sizeof(void*)*5 + 2, v_isSilent_1713_);
v___x_1747_ = l_Lean_MessageLog_add(v___x_1746_, v_messages_1738_);
if (v_isShared_1743_ == 0)
{
lean_ctor_set(v___x_1742_, 6, v___x_1747_);
v___x_1749_ = v___x_1742_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v_env_1732_);
lean_ctor_set(v_reuseFailAlloc_1753_, 1, v_nextMacroScope_1733_);
lean_ctor_set(v_reuseFailAlloc_1753_, 2, v_ngen_1734_);
lean_ctor_set(v_reuseFailAlloc_1753_, 3, v_auxDeclNGen_1735_);
lean_ctor_set(v_reuseFailAlloc_1753_, 4, v_traceState_1736_);
lean_ctor_set(v_reuseFailAlloc_1753_, 5, v_cache_1737_);
lean_ctor_set(v_reuseFailAlloc_1753_, 6, v___x_1747_);
lean_ctor_set(v_reuseFailAlloc_1753_, 7, v_infoState_1739_);
lean_ctor_set(v_reuseFailAlloc_1753_, 8, v_snapshotTasks_1740_);
v___x_1749_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; 
v___x_1750_ = lean_st_ref_set(v___y_1728_, v___x_1749_);
v___x_1751_ = lean_box(0);
v___x_1752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1752_, 0, v___x_1751_);
return v___x_1752_;
}
}
}
v___jp_1755_:
{
lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v_a_1766_; lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1779_; 
v___x_1764_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1711_);
v___x_1765_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(v___x_1764_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_);
v_a_1766_ = lean_ctor_get(v___x_1765_, 0);
v_isSharedCheck_1779_ = !lean_is_exclusive(v___x_1765_);
if (v_isSharedCheck_1779_ == 0)
{
v___x_1768_ = v___x_1765_;
v_isShared_1769_ = v_isSharedCheck_1779_;
goto v_resetjp_1767_;
}
else
{
lean_inc(v_a_1766_);
lean_dec(v___x_1765_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1779_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
lean_inc_ref(v___y_1759_);
v___x_1770_ = l_Lean_FileMap_toPosition(v___y_1759_, v___y_1758_);
lean_dec(v___y_1758_);
v___x_1771_ = l_Lean_FileMap_toPosition(v___y_1759_, v___y_1763_);
lean_dec(v___y_1763_);
v___x_1772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1771_);
v___x_1773_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___lam__3___closed__0));
if (v___y_1761_ == 0)
{
lean_del_object(v___x_1768_);
lean_dec_ref(v___y_1756_);
v___y_1720_ = v___y_1757_;
v___y_1721_ = v___x_1770_;
v___y_1722_ = v___x_1772_;
v___y_1723_ = v___y_1760_;
v___y_1724_ = v___y_1762_;
v___y_1725_ = v___x_1773_;
v___y_1726_ = v_a_1766_;
v___y_1727_ = v___y_1716_;
v___y_1728_ = v___y_1717_;
goto v___jp_1719_;
}
else
{
uint8_t v___x_1774_; 
lean_inc(v_a_1766_);
v___x_1774_ = l_Lean_MessageData_hasTag(v___y_1756_, v_a_1766_);
if (v___x_1774_ == 0)
{
lean_object* v___x_1775_; lean_object* v___x_1777_; 
lean_dec_ref(v___x_1772_);
lean_dec_ref(v___x_1770_);
lean_dec(v_a_1766_);
lean_dec_ref(v___y_1762_);
lean_dec_ref(v___y_1716_);
v___x_1775_ = lean_box(0);
if (v_isShared_1769_ == 0)
{
lean_ctor_set(v___x_1768_, 0, v___x_1775_);
v___x_1777_ = v___x_1768_;
goto v_reusejp_1776_;
}
else
{
lean_object* v_reuseFailAlloc_1778_; 
v_reuseFailAlloc_1778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1778_, 0, v___x_1775_);
v___x_1777_ = v_reuseFailAlloc_1778_;
goto v_reusejp_1776_;
}
v_reusejp_1776_:
{
return v___x_1777_;
}
}
else
{
lean_del_object(v___x_1768_);
v___y_1720_ = v___y_1757_;
v___y_1721_ = v___x_1770_;
v___y_1722_ = v___x_1772_;
v___y_1723_ = v___y_1760_;
v___y_1724_ = v___y_1762_;
v___y_1725_ = v___x_1773_;
v___y_1726_ = v_a_1766_;
v___y_1727_ = v___y_1716_;
v___y_1728_ = v___y_1717_;
goto v___jp_1719_;
}
}
}
}
v___jp_1780_:
{
lean_object* v___x_1789_; 
v___x_1789_ = l_Lean_Syntax_getTailPos_x3f(v___y_1783_, v___y_1785_);
lean_dec(v___y_1783_);
if (lean_obj_tag(v___x_1789_) == 0)
{
lean_inc(v___y_1788_);
v___y_1756_ = v___y_1781_;
v___y_1757_ = v___y_1782_;
v___y_1758_ = v___y_1788_;
v___y_1759_ = v___y_1784_;
v___y_1760_ = v___y_1785_;
v___y_1761_ = v___y_1787_;
v___y_1762_ = v___y_1786_;
v___y_1763_ = v___y_1788_;
goto v___jp_1755_;
}
else
{
lean_object* v_val_1790_; 
v_val_1790_ = lean_ctor_get(v___x_1789_, 0);
lean_inc(v_val_1790_);
lean_dec_ref(v___x_1789_);
v___y_1756_ = v___y_1781_;
v___y_1757_ = v___y_1782_;
v___y_1758_ = v___y_1788_;
v___y_1759_ = v___y_1784_;
v___y_1760_ = v___y_1785_;
v___y_1761_ = v___y_1787_;
v___y_1762_ = v___y_1786_;
v___y_1763_ = v_val_1790_;
goto v___jp_1755_;
}
}
v___jp_1791_:
{
lean_object* v_ref_1799_; lean_object* v___x_1800_; 
v_ref_1799_ = l_Lean_replaceRef(v_ref_1710_, v___y_1795_);
lean_dec(v___y_1795_);
v___x_1800_ = l_Lean_Syntax_getPos_x3f(v_ref_1799_, v___y_1794_);
if (lean_obj_tag(v___x_1800_) == 0)
{
lean_object* v___x_1801_; 
v___x_1801_ = lean_unsigned_to_nat(0u);
v___y_1781_ = v___y_1792_;
v___y_1782_ = v___y_1798_;
v___y_1783_ = v_ref_1799_;
v___y_1784_ = v___y_1793_;
v___y_1785_ = v___y_1794_;
v___y_1786_ = v___y_1797_;
v___y_1787_ = v___y_1796_;
v___y_1788_ = v___x_1801_;
goto v___jp_1780_;
}
else
{
lean_object* v_val_1802_; 
v_val_1802_ = lean_ctor_get(v___x_1800_, 0);
lean_inc(v_val_1802_);
lean_dec_ref(v___x_1800_);
v___y_1781_ = v___y_1792_;
v___y_1782_ = v___y_1798_;
v___y_1783_ = v_ref_1799_;
v___y_1784_ = v___y_1793_;
v___y_1785_ = v___y_1794_;
v___y_1786_ = v___y_1797_;
v___y_1787_ = v___y_1796_;
v___y_1788_ = v_val_1802_;
goto v___jp_1780_;
}
}
v___jp_1804_:
{
if (v___y_1811_ == 0)
{
v___y_1792_ = v___y_1806_;
v___y_1793_ = v___y_1805_;
v___y_1794_ = v___y_1810_;
v___y_1795_ = v___y_1807_;
v___y_1796_ = v___y_1809_;
v___y_1797_ = v___y_1808_;
v___y_1798_ = v_severity_1712_;
goto v___jp_1791_;
}
else
{
v___y_1792_ = v___y_1806_;
v___y_1793_ = v___y_1805_;
v___y_1794_ = v___y_1810_;
v___y_1795_ = v___y_1807_;
v___y_1796_ = v___y_1809_;
v___y_1797_ = v___y_1808_;
v___y_1798_ = v___x_1803_;
goto v___jp_1791_;
}
}
v___jp_1812_:
{
if (v___y_1813_ == 0)
{
lean_object* v_fileName_1814_; lean_object* v_fileMap_1815_; lean_object* v_options_1816_; lean_object* v_ref_1817_; uint8_t v_suppressElabErrors_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___f_1821_; uint8_t v___x_1822_; uint8_t v___x_1823_; 
v_fileName_1814_ = lean_ctor_get(v___y_1716_, 0);
v_fileMap_1815_ = lean_ctor_get(v___y_1716_, 1);
v_options_1816_ = lean_ctor_get(v___y_1716_, 2);
v_ref_1817_ = lean_ctor_get(v___y_1716_, 5);
v_suppressElabErrors_1818_ = lean_ctor_get_uint8(v___y_1716_, sizeof(void*)*14 + 1);
v___x_1819_ = lean_box(v___y_1813_);
v___x_1820_ = lean_box(v_suppressElabErrors_1818_);
v___f_1821_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1821_, 0, v___x_1819_);
lean_closure_set(v___f_1821_, 1, v___x_1820_);
v___x_1822_ = 1;
v___x_1823_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1712_, v___x_1822_);
if (v___x_1823_ == 0)
{
lean_inc_ref(v_fileName_1814_);
lean_inc(v_ref_1817_);
lean_inc_ref(v_fileMap_1815_);
v___y_1805_ = v_fileMap_1815_;
v___y_1806_ = v___f_1821_;
v___y_1807_ = v_ref_1817_;
v___y_1808_ = v_fileName_1814_;
v___y_1809_ = v_suppressElabErrors_1818_;
v___y_1810_ = v___y_1813_;
v___y_1811_ = v___x_1823_;
goto v___jp_1804_;
}
else
{
lean_object* v___x_1824_; uint8_t v___x_1825_; 
v___x_1824_ = l_Lean_warningAsError;
v___x_1825_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__6(v_options_1816_, v___x_1824_);
lean_inc_ref(v_fileName_1814_);
lean_inc(v_ref_1817_);
lean_inc_ref(v_fileMap_1815_);
v___y_1805_ = v_fileMap_1815_;
v___y_1806_ = v___f_1821_;
v___y_1807_ = v_ref_1817_;
v___y_1808_ = v_fileName_1814_;
v___y_1809_ = v_suppressElabErrors_1818_;
v___y_1810_ = v___y_1813_;
v___y_1811_ = v___x_1825_;
goto v___jp_1804_;
}
}
else
{
lean_object* v___x_1826_; lean_object* v___x_1827_; 
lean_dec_ref(v___y_1716_);
lean_dec_ref(v_msgData_1711_);
v___x_1826_ = lean_box(0);
v___x_1827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1827_, 0, v___x_1826_);
return v___x_1827_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg___boxed(lean_object* v_ref_1830_, lean_object* v_msgData_1831_, lean_object* v_severity_1832_, lean_object* v_isSilent_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_){
_start:
{
uint8_t v_severity_boxed_1839_; uint8_t v_isSilent_boxed_1840_; lean_object* v_res_1841_; 
v_severity_boxed_1839_ = lean_unbox(v_severity_1832_);
v_isSilent_boxed_1840_ = lean_unbox(v_isSilent_1833_);
v_res_1841_ = l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg(v_ref_1830_, v_msgData_1831_, v_severity_boxed_1839_, v_isSilent_boxed_1840_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_);
lean_dec(v___y_1837_);
lean_dec(v___y_1835_);
lean_dec_ref(v___y_1834_);
lean_dec(v_ref_1830_);
return v_res_1841_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__4(lean_object* v_as_1842_, size_t v_sz_1843_, size_t v_i_1844_, lean_object* v_b_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_){
_start:
{
uint8_t v___x_1853_; 
v___x_1853_ = lean_usize_dec_lt(v_i_1844_, v_sz_1843_);
if (v___x_1853_ == 0)
{
lean_object* v___x_1854_; 
lean_dec_ref(v___y_1850_);
v___x_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1854_, 0, v_b_1845_);
return v___x_1854_;
}
else
{
lean_object* v_ref_1855_; lean_object* v_a_1856_; uint8_t v_severity_1857_; lean_object* v_data_1858_; uint8_t v___x_1859_; lean_object* v___x_1860_; 
v_ref_1855_ = lean_ctor_get(v___y_1850_, 5);
v_a_1856_ = lean_array_uget_borrowed(v_as_1842_, v_i_1844_);
v_severity_1857_ = lean_ctor_get_uint8(v_a_1856_, sizeof(void*)*5 + 1);
v_data_1858_ = lean_ctor_get(v_a_1856_, 4);
v___x_1859_ = 0;
lean_inc_ref(v___y_1850_);
lean_inc(v_data_1858_);
v___x_1860_ = l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg(v_ref_1855_, v_data_1858_, v_severity_1857_, v___x_1859_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_);
if (lean_obj_tag(v___x_1860_) == 0)
{
lean_object* v___x_1861_; size_t v___x_1862_; size_t v___x_1863_; 
lean_dec_ref(v___x_1860_);
v___x_1861_ = lean_box(0);
v___x_1862_ = ((size_t)1ULL);
v___x_1863_ = lean_usize_add(v_i_1844_, v___x_1862_);
v_i_1844_ = v___x_1863_;
v_b_1845_ = v___x_1861_;
goto _start;
}
else
{
lean_dec_ref(v___y_1850_);
return v___x_1860_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__4___boxed(lean_object* v_as_1865_, lean_object* v_sz_1866_, lean_object* v_i_1867_, lean_object* v_b_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_){
_start:
{
size_t v_sz_boxed_1876_; size_t v_i_boxed_1877_; lean_object* v_res_1878_; 
v_sz_boxed_1876_ = lean_unbox_usize(v_sz_1866_);
lean_dec(v_sz_1866_);
v_i_boxed_1877_ = lean_unbox_usize(v_i_1867_);
lean_dec(v_i_1867_);
v_res_1878_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__4(v_as_1865_, v_sz_boxed_1876_, v_i_boxed_1877_, v_b_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_);
lean_dec(v___y_1874_);
lean_dec(v___y_1872_);
lean_dec_ref(v___y_1871_);
lean_dec(v___y_1870_);
lean_dec_ref(v___y_1869_);
lean_dec_ref(v_as_1865_);
return v_res_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___redArg(uint8_t v_flag_1879_, lean_object* v___y_1880_){
_start:
{
lean_object* v___x_1882_; lean_object* v_infoState_1883_; lean_object* v_env_1884_; lean_object* v_nextMacroScope_1885_; lean_object* v_ngen_1886_; lean_object* v_auxDeclNGen_1887_; lean_object* v_traceState_1888_; lean_object* v_cache_1889_; lean_object* v_messages_1890_; lean_object* v_snapshotTasks_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1911_; 
v___x_1882_ = lean_st_ref_take(v___y_1880_);
v_infoState_1883_ = lean_ctor_get(v___x_1882_, 7);
v_env_1884_ = lean_ctor_get(v___x_1882_, 0);
v_nextMacroScope_1885_ = lean_ctor_get(v___x_1882_, 1);
v_ngen_1886_ = lean_ctor_get(v___x_1882_, 2);
v_auxDeclNGen_1887_ = lean_ctor_get(v___x_1882_, 3);
v_traceState_1888_ = lean_ctor_get(v___x_1882_, 4);
v_cache_1889_ = lean_ctor_get(v___x_1882_, 5);
v_messages_1890_ = lean_ctor_get(v___x_1882_, 6);
v_snapshotTasks_1891_ = lean_ctor_get(v___x_1882_, 8);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1893_ = v___x_1882_;
v_isShared_1894_ = v_isSharedCheck_1911_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_snapshotTasks_1891_);
lean_inc(v_infoState_1883_);
lean_inc(v_messages_1890_);
lean_inc(v_cache_1889_);
lean_inc(v_traceState_1888_);
lean_inc(v_auxDeclNGen_1887_);
lean_inc(v_ngen_1886_);
lean_inc(v_nextMacroScope_1885_);
lean_inc(v_env_1884_);
lean_dec(v___x_1882_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1911_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v_assignment_1895_; lean_object* v_lazyAssignment_1896_; lean_object* v_trees_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1910_; 
v_assignment_1895_ = lean_ctor_get(v_infoState_1883_, 0);
v_lazyAssignment_1896_ = lean_ctor_get(v_infoState_1883_, 1);
v_trees_1897_ = lean_ctor_get(v_infoState_1883_, 2);
v_isSharedCheck_1910_ = !lean_is_exclusive(v_infoState_1883_);
if (v_isSharedCheck_1910_ == 0)
{
v___x_1899_ = v_infoState_1883_;
v_isShared_1900_ = v_isSharedCheck_1910_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_trees_1897_);
lean_inc(v_lazyAssignment_1896_);
lean_inc(v_assignment_1895_);
lean_dec(v_infoState_1883_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1910_;
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
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v_assignment_1895_);
lean_ctor_set(v_reuseFailAlloc_1909_, 1, v_lazyAssignment_1896_);
lean_ctor_set(v_reuseFailAlloc_1909_, 2, v_trees_1897_);
v___x_1902_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
lean_object* v___x_1904_; 
lean_ctor_set_uint8(v___x_1902_, sizeof(void*)*3, v_flag_1879_);
if (v_isShared_1894_ == 0)
{
lean_ctor_set(v___x_1893_, 7, v___x_1902_);
v___x_1904_ = v___x_1893_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_env_1884_);
lean_ctor_set(v_reuseFailAlloc_1908_, 1, v_nextMacroScope_1885_);
lean_ctor_set(v_reuseFailAlloc_1908_, 2, v_ngen_1886_);
lean_ctor_set(v_reuseFailAlloc_1908_, 3, v_auxDeclNGen_1887_);
lean_ctor_set(v_reuseFailAlloc_1908_, 4, v_traceState_1888_);
lean_ctor_set(v_reuseFailAlloc_1908_, 5, v_cache_1889_);
lean_ctor_set(v_reuseFailAlloc_1908_, 6, v_messages_1890_);
lean_ctor_set(v_reuseFailAlloc_1908_, 7, v___x_1902_);
lean_ctor_set(v_reuseFailAlloc_1908_, 8, v_snapshotTasks_1891_);
v___x_1904_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; 
v___x_1905_ = lean_st_ref_set(v___y_1880_, v___x_1904_);
v___x_1906_ = lean_box(0);
v___x_1907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1907_, 0, v___x_1906_);
return v___x_1907_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___redArg___boxed(lean_object* v_flag_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_){
_start:
{
uint8_t v_flag_boxed_1915_; lean_object* v_res_1916_; 
v_flag_boxed_1915_ = lean_unbox(v_flag_1912_);
v_res_1916_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___redArg(v_flag_boxed_1915_, v___y_1913_);
lean_dec(v___y_1913_);
return v_res_1916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2___redArg(uint8_t v_flag_1917_, lean_object* v_x_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_){
_start:
{
lean_object* v___x_1926_; lean_object* v_infoState_1927_; uint8_t v_enabled_1928_; lean_object* v_a_1930_; lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1926_ = lean_st_ref_get(v___y_1924_);
v_infoState_1927_ = lean_ctor_get(v___x_1926_, 7);
lean_inc_ref(v_infoState_1927_);
lean_dec(v___x_1926_);
v_enabled_1928_ = lean_ctor_get_uint8(v_infoState_1927_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1927_);
v___x_1940_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___redArg(v_flag_1917_, v___y_1924_);
lean_dec_ref(v___x_1940_);
lean_inc(v___y_1924_);
v___x_1941_ = lean_apply_7(v_x_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_, v___y_1924_, lean_box(0));
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v_a_1942_; lean_object* v___x_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1950_; 
v_a_1942_ = lean_ctor_get(v___x_1941_, 0);
lean_inc(v_a_1942_);
lean_dec_ref(v___x_1941_);
v___x_1943_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___redArg(v_enabled_1928_, v___y_1924_);
lean_dec(v___y_1924_);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___x_1943_);
if (v_isSharedCheck_1950_ == 0)
{
lean_object* v_unused_1951_; 
v_unused_1951_ = lean_ctor_get(v___x_1943_, 0);
lean_dec(v_unused_1951_);
v___x_1945_ = v___x_1943_;
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
else
{
lean_dec(v___x_1943_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1948_; 
if (v_isShared_1946_ == 0)
{
lean_ctor_set(v___x_1945_, 0, v_a_1942_);
v___x_1948_ = v___x_1945_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v_a_1942_);
v___x_1948_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
return v___x_1948_;
}
}
}
else
{
lean_object* v_a_1952_; 
v_a_1952_ = lean_ctor_get(v___x_1941_, 0);
lean_inc(v_a_1952_);
lean_dec_ref(v___x_1941_);
v_a_1930_ = v_a_1952_;
goto v___jp_1929_;
}
v___jp_1929_:
{
lean_object* v___x_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1938_; 
v___x_1931_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___redArg(v_enabled_1928_, v___y_1924_);
lean_dec(v___y_1924_);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1931_);
if (v_isSharedCheck_1938_ == 0)
{
lean_object* v_unused_1939_; 
v_unused_1939_ = lean_ctor_get(v___x_1931_, 0);
lean_dec(v_unused_1939_);
v___x_1933_ = v___x_1931_;
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
else
{
lean_dec(v___x_1931_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1936_; 
if (v_isShared_1934_ == 0)
{
lean_ctor_set_tag(v___x_1933_, 1);
lean_ctor_set(v___x_1933_, 0, v_a_1930_);
v___x_1936_ = v___x_1933_;
goto v_reusejp_1935_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v_a_1930_);
v___x_1936_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1935_;
}
v_reusejp_1935_:
{
return v___x_1936_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2___redArg___boxed(lean_object* v_flag_1953_, lean_object* v_x_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_){
_start:
{
uint8_t v_flag_boxed_1962_; lean_object* v_res_1963_; 
v_flag_boxed_1962_ = lean_unbox(v_flag_1953_);
v_res_1963_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2___redArg(v_flag_boxed_1962_, v_x_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringFromString_spec__0_spec__0(lean_object* v_msgData_1964_, uint8_t v_severity_1965_, uint8_t v_isSilent_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_){
_start:
{
lean_object* v_ref_1974_; lean_object* v___x_1975_; 
v_ref_1974_ = lean_ctor_get(v___y_1971_, 5);
lean_inc(v_ref_1974_);
v___x_1975_ = l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg(v_ref_1974_, v_msgData_1964_, v_severity_1965_, v_isSilent_1966_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
lean_dec(v_ref_1974_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringFromString_spec__0_spec__0___boxed(lean_object* v_msgData_1976_, lean_object* v_severity_1977_, lean_object* v_isSilent_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_){
_start:
{
uint8_t v_severity_boxed_1986_; uint8_t v_isSilent_boxed_1987_; lean_object* v_res_1988_; 
v_severity_boxed_1986_ = lean_unbox(v_severity_1977_);
v_isSilent_boxed_1987_ = lean_unbox(v_isSilent_1978_);
v_res_1988_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringFromString_spec__0_spec__0(v_msgData_1976_, v_severity_boxed_1986_, v_isSilent_boxed_1987_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_);
lean_dec(v___y_1984_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1981_);
lean_dec(v___y_1980_);
lean_dec_ref(v___y_1979_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringFromString_spec__0(lean_object* v_msgData_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_){
_start:
{
uint8_t v___x_1997_; uint8_t v___x_1998_; lean_object* v___x_1999_; 
v___x_1997_ = 2;
v___x_1998_ = 0;
v___x_1999_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringFromString_spec__0_spec__0(v_msgData_1989_, v___x_1997_, v___x_1998_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_);
return v___x_1999_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringFromString_spec__0___boxed(lean_object* v_msgData_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_){
_start:
{
lean_object* v_res_2008_; 
v_res_2008_ = l_Lean_logError___at___00Lean_versoDocStringFromString_spec__0(v_msgData_2000_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_);
lean_dec(v___y_2006_);
lean_dec(v___y_2004_);
lean_dec_ref(v___y_2003_);
lean_dec(v___y_2002_);
lean_dec_ref(v___y_2001_);
return v_res_2008_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__1(lean_object* v_as_2009_, size_t v_sz_2010_, size_t v_i_2011_, lean_object* v_b_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_){
_start:
{
uint8_t v___x_2020_; 
v___x_2020_ = lean_usize_dec_lt(v_i_2011_, v_sz_2010_);
if (v___x_2020_ == 0)
{
lean_object* v___x_2021_; 
lean_dec_ref(v___y_2017_);
v___x_2021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2021_, 0, v_b_2012_);
return v___x_2021_;
}
else
{
lean_object* v_a_2022_; lean_object* v_snd_2023_; lean_object* v_snd_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; 
v_a_2022_ = lean_array_uget_borrowed(v_as_2009_, v_i_2011_);
v_snd_2023_ = lean_ctor_get(v_a_2022_, 1);
v_snd_2024_ = lean_ctor_get(v_snd_2023_, 1);
lean_inc(v_snd_2024_);
v___x_2025_ = l_Lean_Parser_Error_toString(v_snd_2024_);
v___x_2026_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2026_, 0, v___x_2025_);
v___x_2027_ = l_Lean_MessageData_ofFormat(v___x_2026_);
lean_inc_ref(v___y_2017_);
v___x_2028_ = l_Lean_logError___at___00Lean_versoDocStringFromString_spec__0(v___x_2027_, v___y_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_, v___y_2018_);
if (lean_obj_tag(v___x_2028_) == 0)
{
lean_object* v___x_2029_; size_t v___x_2030_; size_t v___x_2031_; 
lean_dec_ref(v___x_2028_);
v___x_2029_ = lean_box(0);
v___x_2030_ = ((size_t)1ULL);
v___x_2031_ = lean_usize_add(v_i_2011_, v___x_2030_);
v_i_2011_ = v___x_2031_;
v_b_2012_ = v___x_2029_;
goto _start;
}
else
{
lean_dec_ref(v___y_2017_);
return v___x_2028_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__1___boxed(lean_object* v_as_2033_, lean_object* v_sz_2034_, lean_object* v_i_2035_, lean_object* v_b_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_){
_start:
{
size_t v_sz_boxed_2044_; size_t v_i_boxed_2045_; lean_object* v_res_2046_; 
v_sz_boxed_2044_ = lean_unbox_usize(v_sz_2034_);
lean_dec(v_sz_2034_);
v_i_boxed_2045_ = lean_unbox_usize(v_i_2035_);
lean_dec(v_i_2035_);
v_res_2046_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__1(v_as_2033_, v_sz_boxed_2044_, v_i_boxed_2045_, v_b_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_, v___y_2042_);
lean_dec(v___y_2042_);
lean_dec(v___y_2040_);
lean_dec_ref(v___y_2039_);
lean_dec(v___y_2038_);
lean_dec_ref(v___y_2037_);
lean_dec_ref(v_as_2033_);
return v_res_2046_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString(lean_object* v_declName_2066_, lean_object* v_docComment_2067_, lean_object* v_a_2068_, lean_object* v_a_2069_, lean_object* v_a_2070_, lean_object* v_a_2071_, lean_object* v_a_2072_, lean_object* v_a_2073_){
_start:
{
lean_object* v___x_2075_; lean_object* v_env_2076_; lean_object* v_fileName_2077_; lean_object* v_options_2078_; lean_object* v_currNamespace_2079_; lean_object* v_openDecls_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; uint8_t v___x_2092_; 
v___x_2075_ = lean_st_ref_get(v_a_2073_);
v_env_2076_ = lean_ctor_get(v___x_2075_, 0);
lean_inc_ref(v_env_2076_);
lean_dec(v___x_2075_);
v_fileName_2077_ = lean_ctor_get(v_a_2072_, 0);
v_options_2078_ = lean_ctor_get(v_a_2072_, 2);
v_currNamespace_2079_ = lean_ctor_get(v_a_2072_, 6);
v_openDecls_2080_ = lean_ctor_get(v_a_2072_, 7);
v___x_2081_ = lean_string_utf8_byte_size(v_docComment_2067_);
lean_inc_ref(v_docComment_2067_);
v___x_2082_ = l_Lean_FileMap_ofString(v_docComment_2067_);
lean_inc_ref(v___x_2082_);
lean_inc_ref(v_fileName_2077_);
lean_inc_ref(v_docComment_2067_);
v___x_2083_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2083_, 0, v_docComment_2067_);
lean_ctor_set(v___x_2083_, 1, v_fileName_2077_);
lean_ctor_set(v___x_2083_, 2, v___x_2082_);
lean_ctor_set(v___x_2083_, 3, v___x_2081_);
lean_inc(v_openDecls_2080_);
lean_inc(v_currNamespace_2079_);
lean_inc_ref(v_options_2078_);
lean_inc_ref(v_env_2076_);
v___x_2084_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2084_, 0, v_env_2076_);
lean_ctor_set(v___x_2084_, 1, v_options_2078_);
lean_ctor_set(v___x_2084_, 2, v_currNamespace_2079_);
lean_ctor_set(v___x_2084_, 3, v_openDecls_2080_);
v___x_2085_ = l_Lean_Parser_mkParserState(v_docComment_2067_);
lean_dec_ref(v_docComment_2067_);
v___x_2086_ = lean_unsigned_to_nat(0u);
v___x_2087_ = ((lean_object*)(l_Lean_versoDocStringFromString___closed__2));
v___x_2088_ = l_Lean_Parser_getTokenTable(v_env_2076_);
v___x_2089_ = l_Lean_Parser_ParserFn_run(v___x_2087_, v___x_2083_, v___x_2084_, v___x_2088_, v___x_2085_);
lean_inc_ref(v___x_2089_);
v___x_2090_ = l_Lean_Parser_ParserState_allErrors(v___x_2089_);
v___x_2091_ = lean_array_get_size(v___x_2090_);
v___x_2092_ = lean_nat_dec_eq(v___x_2091_, v___x_2086_);
if (v___x_2092_ == 0)
{
lean_object* v___x_2093_; size_t v_sz_2094_; size_t v___x_2095_; lean_object* v___x_2096_; 
lean_dec_ref(v___x_2089_);
lean_dec_ref(v___x_2082_);
lean_dec(v_declName_2066_);
v___x_2093_ = lean_box(0);
v_sz_2094_ = lean_array_size(v___x_2090_);
v___x_2095_ = ((size_t)0ULL);
v___x_2096_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__1(v___x_2090_, v_sz_2094_, v___x_2095_, v___x_2093_, v_a_2068_, v_a_2069_, v_a_2070_, v_a_2071_, v_a_2072_, v_a_2073_);
lean_dec(v_a_2073_);
lean_dec(v_a_2071_);
lean_dec_ref(v_a_2070_);
lean_dec(v_a_2069_);
lean_dec_ref(v_a_2068_);
lean_dec_ref(v___x_2090_);
if (lean_obj_tag(v___x_2096_) == 0)
{
lean_object* v___x_2098_; uint8_t v_isShared_2099_; uint8_t v_isSharedCheck_2104_; 
v_isSharedCheck_2104_ = !lean_is_exclusive(v___x_2096_);
if (v_isSharedCheck_2104_ == 0)
{
lean_object* v_unused_2105_; 
v_unused_2105_ = lean_ctor_get(v___x_2096_, 0);
lean_dec(v_unused_2105_);
v___x_2098_ = v___x_2096_;
v_isShared_2099_ = v_isSharedCheck_2104_;
goto v_resetjp_2097_;
}
else
{
lean_dec(v___x_2096_);
v___x_2098_ = lean_box(0);
v_isShared_2099_ = v_isSharedCheck_2104_;
goto v_resetjp_2097_;
}
v_resetjp_2097_:
{
lean_object* v___x_2100_; lean_object* v___x_2102_; 
v___x_2100_ = lean_obj_once(&l_Lean_versoDocString___closed__1, &l_Lean_versoDocString___closed__1_once, _init_l_Lean_versoDocString___closed__1);
if (v_isShared_2099_ == 0)
{
lean_ctor_set(v___x_2098_, 0, v___x_2100_);
v___x_2102_ = v___x_2098_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v___x_2100_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
}
else
{
lean_object* v_a_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2113_; 
v_a_2106_ = lean_ctor_get(v___x_2096_, 0);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2096_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2108_ = v___x_2096_;
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_a_2106_);
lean_dec(v___x_2096_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2111_; 
if (v_isShared_2109_ == 0)
{
v___x_2111_ = v___x_2108_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_a_2106_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
}
}
else
{
lean_object* v___x_2114_; 
lean_dec_ref(v___x_2090_);
v___x_2114_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v_a_2073_);
if (lean_obj_tag(v___x_2114_) == 0)
{
lean_object* v_a_2115_; lean_object* v_a_2117_; lean_object* v_stxStack_2135_; uint8_t v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; size_t v_sz_2140_; size_t v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; uint8_t v___x_2144_; lean_object* v___x_2145_; lean_object* v___f_2146_; lean_object* v___x_2147_; 
v_a_2115_ = lean_ctor_get(v___x_2114_, 0);
lean_inc(v_a_2115_);
lean_dec_ref(v___x_2114_);
v_stxStack_2135_ = lean_ctor_get(v___x_2089_, 0);
lean_inc_ref(v_stxStack_2135_);
lean_dec_ref(v___x_2089_);
v___x_2136_ = 0;
v___x_2137_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_2135_);
lean_dec_ref(v_stxStack_2135_);
v___x_2138_ = l_Lean_Syntax_getArgs(v___x_2137_);
lean_dec(v___x_2137_);
v___x_2139_ = ((lean_object*)(l_Lean_versoDocStringFromString___closed__6));
v_sz_2140_ = lean_array_size(v___x_2138_);
v___x_2141_ = ((size_t)0ULL);
v___x_2142_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoModDocString_spec__0(v_sz_2140_, v___x_2141_, v___x_2138_);
v___x_2143_ = lean_alloc_closure((void*)(l_Lean_Doc_elabBlocks___boxed), 11, 1);
lean_closure_set(v___x_2143_, 0, v___x_2142_);
v___x_2144_ = 1;
v___x_2145_ = lean_box(v___x_2144_);
v___f_2146_ = lean_alloc_closure((void*)(l_Lean_versoDocStringFromString___lam__0___boxed), 12, 5);
lean_closure_set(v___f_2146_, 0, v___x_2082_);
lean_closure_set(v___f_2146_, 1, v_declName_2066_);
lean_closure_set(v___f_2146_, 2, v___x_2139_);
lean_closure_set(v___f_2146_, 3, v___x_2143_);
lean_closure_set(v___f_2146_, 4, v___x_2145_);
lean_inc(v_a_2073_);
lean_inc_ref(v_a_2072_);
lean_inc(v_a_2071_);
lean_inc_ref(v_a_2070_);
lean_inc(v_a_2069_);
lean_inc_ref(v_a_2068_);
v___x_2147_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2___redArg(v___x_2136_, v___f_2146_, v_a_2068_, v_a_2069_, v_a_2070_, v_a_2071_, v_a_2072_, v_a_2073_);
if (lean_obj_tag(v___x_2147_) == 0)
{
lean_object* v_a_2148_; lean_object* v___x_2149_; 
v_a_2148_ = lean_ctor_get(v___x_2147_, 0);
lean_inc(v_a_2148_);
lean_dec_ref(v___x_2147_);
v___x_2149_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v_a_2073_);
if (lean_obj_tag(v___x_2149_) == 0)
{
lean_object* v_a_2150_; lean_object* v___x_2151_; 
v_a_2150_ = lean_ctor_get(v___x_2149_, 0);
lean_inc(v_a_2150_);
lean_dec_ref(v___x_2149_);
v___x_2151_ = l_Lean_Core_setMessageLog___redArg(v_a_2115_, v_a_2073_);
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v___x_2152_; lean_object* v___x_2153_; size_t v_sz_2154_; lean_object* v___x_2155_; 
lean_dec_ref(v___x_2151_);
v___x_2152_ = l_Lean_MessageLog_toArray(v_a_2150_);
lean_dec(v_a_2150_);
v___x_2153_ = lean_box(0);
v_sz_2154_ = lean_array_size(v___x_2152_);
v___x_2155_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__4(v___x_2152_, v_sz_2154_, v___x_2141_, v___x_2153_, v_a_2068_, v_a_2069_, v_a_2070_, v_a_2071_, v_a_2072_, v_a_2073_);
lean_dec(v_a_2073_);
lean_dec(v_a_2071_);
lean_dec_ref(v_a_2070_);
lean_dec(v_a_2069_);
lean_dec_ref(v_a_2068_);
lean_dec_ref(v___x_2152_);
if (lean_obj_tag(v___x_2155_) == 0)
{
lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2162_; 
v_isSharedCheck_2162_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2162_ == 0)
{
lean_object* v_unused_2163_; 
v_unused_2163_ = lean_ctor_get(v___x_2155_, 0);
lean_dec(v_unused_2163_);
v___x_2157_ = v___x_2155_;
v_isShared_2158_ = v_isSharedCheck_2162_;
goto v_resetjp_2156_;
}
else
{
lean_dec(v___x_2155_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2162_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
lean_object* v___x_2160_; 
if (v_isShared_2158_ == 0)
{
lean_ctor_set(v___x_2157_, 0, v_a_2148_);
v___x_2160_ = v___x_2157_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v_a_2148_);
v___x_2160_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
return v___x_2160_;
}
}
}
else
{
lean_object* v_a_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2171_; 
lean_dec(v_a_2148_);
v_a_2164_ = lean_ctor_get(v___x_2155_, 0);
v_isSharedCheck_2171_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2166_ = v___x_2155_;
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_a_2164_);
lean_dec(v___x_2155_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2169_; 
if (v_isShared_2167_ == 0)
{
v___x_2169_ = v___x_2166_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_a_2164_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
return v___x_2169_;
}
}
}
}
else
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
lean_dec(v_a_2150_);
lean_dec(v_a_2148_);
lean_dec(v_a_2073_);
lean_dec_ref(v_a_2072_);
lean_dec(v_a_2071_);
lean_dec_ref(v_a_2070_);
lean_dec(v_a_2069_);
lean_dec_ref(v_a_2068_);
v_a_2172_ = lean_ctor_get(v___x_2151_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2174_ = v___x_2151_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2151_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2177_; 
if (v_isShared_2175_ == 0)
{
v___x_2177_ = v___x_2174_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_a_2172_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
}
else
{
lean_object* v_a_2180_; 
lean_dec(v_a_2148_);
lean_dec_ref(v_a_2072_);
lean_dec(v_a_2071_);
lean_dec_ref(v_a_2070_);
lean_dec(v_a_2069_);
lean_dec_ref(v_a_2068_);
v_a_2180_ = lean_ctor_get(v___x_2149_, 0);
lean_inc(v_a_2180_);
lean_dec_ref(v___x_2149_);
v_a_2117_ = v_a_2180_;
goto v___jp_2116_;
}
}
else
{
lean_object* v_a_2181_; 
lean_dec_ref(v_a_2072_);
lean_dec(v_a_2071_);
lean_dec_ref(v_a_2070_);
lean_dec(v_a_2069_);
lean_dec_ref(v_a_2068_);
v_a_2181_ = lean_ctor_get(v___x_2147_, 0);
lean_inc(v_a_2181_);
lean_dec_ref(v___x_2147_);
v_a_2117_ = v_a_2181_;
goto v___jp_2116_;
}
v___jp_2116_:
{
lean_object* v___x_2118_; 
v___x_2118_ = l_Lean_Core_setMessageLog___redArg(v_a_2115_, v_a_2073_);
lean_dec(v_a_2073_);
if (lean_obj_tag(v___x_2118_) == 0)
{
lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2125_; 
v_isSharedCheck_2125_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2125_ == 0)
{
lean_object* v_unused_2126_; 
v_unused_2126_ = lean_ctor_get(v___x_2118_, 0);
lean_dec(v_unused_2126_);
v___x_2120_ = v___x_2118_;
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
else
{
lean_dec(v___x_2118_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2123_; 
if (v_isShared_2121_ == 0)
{
lean_ctor_set_tag(v___x_2120_, 1);
lean_ctor_set(v___x_2120_, 0, v_a_2117_);
v___x_2123_ = v___x_2120_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v_a_2117_);
v___x_2123_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
return v___x_2123_;
}
}
}
else
{
lean_object* v_a_2127_; lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2134_; 
lean_dec_ref(v_a_2117_);
v_a_2127_ = lean_ctor_get(v___x_2118_, 0);
v_isSharedCheck_2134_ = !lean_is_exclusive(v___x_2118_);
if (v_isSharedCheck_2134_ == 0)
{
v___x_2129_ = v___x_2118_;
v_isShared_2130_ = v_isSharedCheck_2134_;
goto v_resetjp_2128_;
}
else
{
lean_inc(v_a_2127_);
lean_dec(v___x_2118_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2134_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
lean_object* v___x_2132_; 
if (v_isShared_2130_ == 0)
{
v___x_2132_ = v___x_2129_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v_a_2127_);
v___x_2132_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
return v___x_2132_;
}
}
}
}
}
else
{
lean_object* v_a_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2189_; 
lean_dec_ref(v___x_2089_);
lean_dec_ref(v___x_2082_);
lean_dec(v_a_2073_);
lean_dec_ref(v_a_2072_);
lean_dec(v_a_2071_);
lean_dec_ref(v_a_2070_);
lean_dec(v_a_2069_);
lean_dec_ref(v_a_2068_);
lean_dec(v_declName_2066_);
v_a_2182_ = lean_ctor_get(v___x_2114_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2114_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2184_ = v___x_2114_;
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_a_2182_);
lean_dec(v___x_2114_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2187_; 
if (v_isShared_2185_ == 0)
{
v___x_2187_ = v___x_2184_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v_a_2182_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___boxed(lean_object* v_declName_2190_, lean_object* v_docComment_2191_, lean_object* v_a_2192_, lean_object* v_a_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_){
_start:
{
lean_object* v_res_2199_; 
v_res_2199_ = l_Lean_versoDocStringFromString(v_declName_2190_, v_docComment_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_, v_a_2197_);
return v_res_2199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3(uint8_t v_flag_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_){
_start:
{
lean_object* v___x_2208_; 
v___x_2208_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___redArg(v_flag_2200_, v___y_2206_);
return v___x_2208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___boxed(lean_object* v_flag_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_){
_start:
{
uint8_t v_flag_boxed_2217_; lean_object* v_res_2218_; 
v_flag_boxed_2217_ = lean_unbox(v_flag_2209_);
v_res_2218_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3(v_flag_boxed_2217_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_, v___y_2215_);
lean_dec(v___y_2215_);
lean_dec_ref(v___y_2214_);
lean_dec(v___y_2213_);
lean_dec_ref(v___y_2212_);
lean_dec(v___y_2211_);
lean_dec_ref(v___y_2210_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2(lean_object* v_00_u03b1_2219_, uint8_t v_flag_2220_, lean_object* v_x_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_){
_start:
{
lean_object* v___x_2229_; 
v___x_2229_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2___redArg(v_flag_2220_, v_x_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_, v___y_2227_);
return v___x_2229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2___boxed(lean_object* v_00_u03b1_2230_, lean_object* v_flag_2231_, lean_object* v_x_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_){
_start:
{
uint8_t v_flag_boxed_2240_; lean_object* v_res_2241_; 
v_flag_boxed_2240_ = lean_unbox(v_flag_2231_);
v_res_2241_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2(v_00_u03b1_2230_, v_flag_boxed_2240_, v_x_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_);
return v_res_2241_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3(lean_object* v_ref_2242_, lean_object* v_msgData_2243_, uint8_t v_severity_2244_, uint8_t v_isSilent_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_){
_start:
{
lean_object* v___x_2253_; 
v___x_2253_ = l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg(v_ref_2242_, v_msgData_2243_, v_severity_2244_, v_isSilent_2245_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_);
return v___x_2253_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___boxed(lean_object* v_ref_2254_, lean_object* v_msgData_2255_, lean_object* v_severity_2256_, lean_object* v_isSilent_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_){
_start:
{
uint8_t v_severity_boxed_2265_; uint8_t v_isSilent_boxed_2266_; lean_object* v_res_2267_; 
v_severity_boxed_2265_ = lean_unbox(v_severity_2256_);
v_isSilent_boxed_2266_ = lean_unbox(v_isSilent_2257_);
v_res_2267_ = l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3(v_ref_2254_, v_msgData_2255_, v_severity_boxed_2265_, v_isSilent_boxed_2266_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_, v___y_2262_, v___y_2263_);
lean_dec(v___y_2263_);
lean_dec(v___y_2261_);
lean_dec_ref(v___y_2260_);
lean_dec(v___y_2259_);
lean_dec_ref(v___y_2258_);
lean_dec(v_ref_2254_);
return v_res_2267_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__0(lean_object* v_docString_2268_, lean_object* v_declName_2269_, lean_object* v_env_2270_){
_start:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2271_ = l_Lean_docStringExt;
v___x_2272_ = l_String_removeLeadingSpaces(v_docString_2268_);
v___x_2273_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2271_, v_env_2270_, v_declName_2269_, v___x_2272_);
return v___x_2273_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__1(lean_object* v_declName_2274_, lean_object* v_modifyEnv_2275_, lean_object* v_docString_2276_){
_start:
{
lean_object* v___f_2277_; lean_object* v___x_2278_; 
v___f_2277_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2277_, 0, v_docString_2276_);
lean_closure_set(v___f_2277_, 1, v_declName_2274_);
v___x_2278_ = lean_apply_1(v_modifyEnv_2275_, v___f_2277_);
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__2(lean_object* v_inst_2279_, lean_object* v_inst_2280_, lean_object* v_docComment_2281_, lean_object* v_toBind_2282_, lean_object* v___f_2283_, lean_object* v_____r_2284_){
_start:
{
lean_object* v___x_2285_; lean_object* v___x_2286_; 
v___x_2285_ = l_Lean_getDocStringText___redArg(v_inst_2279_, v_inst_2280_, v_docComment_2281_);
v___x_2286_ = lean_apply_4(v_toBind_2282_, lean_box(0), lean_box(0), v___x_2285_, v___f_2283_);
return v___x_2286_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3(lean_object* v_inst_2287_, lean_object* v_inst_2288_, lean_object* v_inst_2289_, lean_object* v_inst_2290_, lean_object* v_inst_2291_, lean_object* v_docComment_2292_, lean_object* v_toBind_2293_, lean_object* v___f_2294_, lean_object* v_____r_2295_){
_start:
{
lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2296_ = l_Lean_validateDocComment___redArg(v_inst_2287_, v_inst_2288_, v_inst_2289_, v_inst_2290_, v_inst_2291_, v_docComment_2292_);
v___x_2297_ = lean_apply_4(v_toBind_2293_, lean_box(0), lean_box(0), v___x_2296_, v___f_2294_);
return v___x_2297_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3___boxed(lean_object* v_inst_2298_, lean_object* v_inst_2299_, lean_object* v_inst_2300_, lean_object* v_inst_2301_, lean_object* v_inst_2302_, lean_object* v_docComment_2303_, lean_object* v_toBind_2304_, lean_object* v___f_2305_, lean_object* v_____r_2306_){
_start:
{
lean_object* v_res_2307_; 
v_res_2307_ = l_Lean_addMarkdownDocString___redArg___lam__3(v_inst_2298_, v_inst_2299_, v_inst_2300_, v_inst_2301_, v_inst_2302_, v_docComment_2303_, v_toBind_2304_, v___f_2305_, v_____r_2306_);
lean_dec(v_docComment_2303_);
return v_res_2307_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__4(lean_object* v___f_2308_, lean_object* v_____r_2309_){
_start:
{
lean_object* v___x_2310_; 
v___x_2310_ = lean_apply_1(v___f_2308_, v_____r_2309_);
return v___x_2310_;
}
}
static lean_object* _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2312_ = ((lean_object*)(l_Lean_addMarkdownDocString___redArg___lam__5___closed__0));
v___x_2313_ = l_Lean_stringToMessageData(v___x_2312_);
return v___x_2313_;
}
}
static lean_object* _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2315_ = ((lean_object*)(l_Lean_addMarkdownDocString___redArg___lam__5___closed__2));
v___x_2316_ = l_Lean_stringToMessageData(v___x_2315_);
return v___x_2316_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5(lean_object* v___f_2317_, lean_object* v_declName_2318_, uint8_t v___x_2319_, lean_object* v_inst_2320_, lean_object* v_inst_2321_, lean_object* v_toBind_2322_, lean_object* v___f_2323_, lean_object* v_____do__lift_2324_){
_start:
{
lean_object* v___x_2328_; 
v___x_2328_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_2324_, v_declName_2318_);
if (lean_obj_tag(v___x_2328_) == 0)
{
lean_dec(v___f_2323_);
lean_dec(v_toBind_2322_);
lean_dec_ref(v_inst_2321_);
lean_dec_ref(v_inst_2320_);
lean_dec(v_declName_2318_);
goto v___jp_2325_;
}
else
{
lean_dec_ref(v___x_2328_);
if (v___x_2319_ == 0)
{
lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; 
lean_dec(v___f_2317_);
v___x_2329_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__1, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1);
v___x_2330_ = l_Lean_MessageData_ofConstName(v_declName_2318_, v___x_2319_);
v___x_2331_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2331_, 0, v___x_2329_);
lean_ctor_set(v___x_2331_, 1, v___x_2330_);
v___x_2332_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_2333_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2331_);
lean_ctor_set(v___x_2333_, 1, v___x_2332_);
v___x_2334_ = l_Lean_throwError___redArg(v_inst_2320_, v_inst_2321_, v___x_2333_);
v___x_2335_ = lean_apply_4(v_toBind_2322_, lean_box(0), lean_box(0), v___x_2334_, v___f_2323_);
return v___x_2335_;
}
else
{
lean_dec(v___f_2323_);
lean_dec(v_toBind_2322_);
lean_dec_ref(v_inst_2321_);
lean_dec_ref(v_inst_2320_);
lean_dec(v_declName_2318_);
goto v___jp_2325_;
}
}
v___jp_2325_:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2326_ = lean_box(0);
v___x_2327_ = lean_apply_1(v___f_2317_, v___x_2326_);
return v___x_2327_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___boxed(lean_object* v___f_2336_, lean_object* v_declName_2337_, lean_object* v___x_2338_, lean_object* v_inst_2339_, lean_object* v_inst_2340_, lean_object* v_toBind_2341_, lean_object* v___f_2342_, lean_object* v_____do__lift_2343_){
_start:
{
uint8_t v___x_389__boxed_2344_; lean_object* v_res_2345_; 
v___x_389__boxed_2344_ = lean_unbox(v___x_2338_);
v_res_2345_ = l_Lean_addMarkdownDocString___redArg___lam__5(v___f_2336_, v_declName_2337_, v___x_389__boxed_2344_, v_inst_2339_, v_inst_2340_, v_toBind_2341_, v___f_2342_, v_____do__lift_2343_);
lean_dec_ref(v_____do__lift_2343_);
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg(lean_object* v_inst_2346_, lean_object* v_inst_2347_, lean_object* v_inst_2348_, lean_object* v_inst_2349_, lean_object* v_inst_2350_, lean_object* v_inst_2351_, lean_object* v_inst_2352_, lean_object* v_declName_2353_, lean_object* v_docComment_2354_){
_start:
{
uint8_t v___x_2355_; 
v___x_2355_ = l_Lean_Name_isAnonymous(v_declName_2353_);
if (v___x_2355_ == 0)
{
lean_object* v_toBind_2356_; lean_object* v_getEnv_2357_; lean_object* v_modifyEnv_2358_; lean_object* v___f_2359_; lean_object* v___f_2360_; lean_object* v___f_2361_; lean_object* v___f_2362_; lean_object* v___x_2363_; lean_object* v___f_2364_; lean_object* v___x_2365_; 
v_toBind_2356_ = lean_ctor_get(v_inst_2346_, 1);
lean_inc(v_toBind_2356_);
v_getEnv_2357_ = lean_ctor_get(v_inst_2349_, 0);
lean_inc(v_getEnv_2357_);
v_modifyEnv_2358_ = lean_ctor_get(v_inst_2349_, 1);
lean_inc(v_modifyEnv_2358_);
lean_dec_ref(v_inst_2349_);
lean_inc(v_declName_2353_);
v___f_2359_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2359_, 0, v_declName_2353_);
lean_closure_set(v___f_2359_, 1, v_modifyEnv_2358_);
lean_inc(v_toBind_2356_);
lean_inc(v_docComment_2354_);
lean_inc_ref(v_inst_2350_);
lean_inc_ref(v_inst_2346_);
v___f_2360_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__2), 6, 5);
lean_closure_set(v___f_2360_, 0, v_inst_2346_);
lean_closure_set(v___f_2360_, 1, v_inst_2350_);
lean_closure_set(v___f_2360_, 2, v_docComment_2354_);
lean_closure_set(v___f_2360_, 3, v_toBind_2356_);
lean_closure_set(v___f_2360_, 4, v___f_2359_);
lean_inc(v_toBind_2356_);
lean_inc_ref(v_inst_2346_);
v___f_2361_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__3___boxed), 9, 8);
lean_closure_set(v___f_2361_, 0, v_inst_2346_);
lean_closure_set(v___f_2361_, 1, v_inst_2347_);
lean_closure_set(v___f_2361_, 2, v_inst_2351_);
lean_closure_set(v___f_2361_, 3, v_inst_2352_);
lean_closure_set(v___f_2361_, 4, v_inst_2348_);
lean_closure_set(v___f_2361_, 5, v_docComment_2354_);
lean_closure_set(v___f_2361_, 6, v_toBind_2356_);
lean_closure_set(v___f_2361_, 7, v___f_2360_);
lean_inc_ref(v___f_2361_);
v___f_2362_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__4), 2, 1);
lean_closure_set(v___f_2362_, 0, v___f_2361_);
v___x_2363_ = lean_box(v___x_2355_);
lean_inc(v_toBind_2356_);
v___f_2364_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_2364_, 0, v___f_2361_);
lean_closure_set(v___f_2364_, 1, v_declName_2353_);
lean_closure_set(v___f_2364_, 2, v___x_2363_);
lean_closure_set(v___f_2364_, 3, v_inst_2346_);
lean_closure_set(v___f_2364_, 4, v_inst_2350_);
lean_closure_set(v___f_2364_, 5, v_toBind_2356_);
lean_closure_set(v___f_2364_, 6, v___f_2362_);
v___x_2365_ = lean_apply_4(v_toBind_2356_, lean_box(0), lean_box(0), v_getEnv_2357_, v___f_2364_);
return v___x_2365_;
}
else
{
lean_object* v_toApplicative_2366_; lean_object* v_toPure_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; 
lean_dec(v_docComment_2354_);
lean_dec(v_declName_2353_);
lean_dec(v_inst_2352_);
lean_dec_ref(v_inst_2351_);
lean_dec_ref(v_inst_2350_);
lean_dec_ref(v_inst_2349_);
lean_dec(v_inst_2348_);
lean_dec(v_inst_2347_);
v_toApplicative_2366_ = lean_ctor_get(v_inst_2346_, 0);
lean_inc_ref(v_toApplicative_2366_);
lean_dec_ref(v_inst_2346_);
v_toPure_2367_ = lean_ctor_get(v_toApplicative_2366_, 1);
lean_inc(v_toPure_2367_);
lean_dec_ref(v_toApplicative_2366_);
v___x_2368_ = lean_box(0);
v___x_2369_ = lean_apply_2(v_toPure_2367_, lean_box(0), v___x_2368_);
return v___x_2369_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString(lean_object* v_m_2370_, lean_object* v_inst_2371_, lean_object* v_inst_2372_, lean_object* v_inst_2373_, lean_object* v_inst_2374_, lean_object* v_inst_2375_, lean_object* v_inst_2376_, lean_object* v_inst_2377_, lean_object* v_declName_2378_, lean_object* v_docComment_2379_){
_start:
{
lean_object* v___x_2380_; 
v___x_2380_ = l_Lean_addMarkdownDocString___redArg(v_inst_2371_, v_inst_2372_, v_inst_2373_, v_inst_2374_, v_inst_2375_, v_inst_2376_, v_inst_2377_, v_declName_2378_, v_docComment_2379_);
return v___x_2380_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__0(lean_object* v_declName_2381_, lean_object* v_docs_2382_, lean_object* v_env_2383_){
_start:
{
lean_object* v___x_2384_; lean_object* v___x_2385_; 
v___x_2384_ = l_Lean_versoDocStringExt;
v___x_2385_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2384_, v_env_2383_, v_declName_2381_, v_docs_2382_);
return v___x_2385_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1(lean_object* v_modifyEnv_2386_, lean_object* v___f_2387_, lean_object* v_____r_2388_){
_start:
{
lean_object* v___x_2389_; 
v___x_2389_ = lean_apply_1(v_modifyEnv_2386_, v___f_2387_);
return v___x_2389_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2(lean_object* v_declName_2392_, lean_object* v_modifyEnv_2393_, lean_object* v___f_2394_, uint8_t v___x_2395_, lean_object* v_inst_2396_, lean_object* v_inst_2397_, lean_object* v_toBind_2398_, lean_object* v___f_2399_, lean_object* v_____do__lift_2400_){
_start:
{
lean_object* v___x_2401_; 
v___x_2401_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_2400_, v_declName_2392_);
if (lean_obj_tag(v___x_2401_) == 0)
{
lean_object* v___x_2402_; 
lean_dec(v___f_2399_);
lean_dec(v_toBind_2398_);
lean_dec_ref(v_inst_2397_);
lean_dec_ref(v_inst_2396_);
lean_dec(v_declName_2392_);
v___x_2402_ = lean_apply_1(v_modifyEnv_2393_, v___f_2394_);
return v___x_2402_;
}
else
{
lean_object* v___x_2404_; uint8_t v_isShared_2405_; uint8_t v_isSharedCheck_2419_; 
v_isSharedCheck_2419_ = !lean_is_exclusive(v___x_2401_);
if (v_isSharedCheck_2419_ == 0)
{
lean_object* v_unused_2420_; 
v_unused_2420_ = lean_ctor_get(v___x_2401_, 0);
lean_dec(v_unused_2420_);
v___x_2404_ = v___x_2401_;
v_isShared_2405_ = v_isSharedCheck_2419_;
goto v_resetjp_2403_;
}
else
{
lean_dec(v___x_2401_);
v___x_2404_ = lean_box(0);
v_isShared_2405_ = v_isSharedCheck_2419_;
goto v_resetjp_2403_;
}
v_resetjp_2403_:
{
if (v___x_2395_ == 0)
{
lean_object* v___x_2406_; uint8_t v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2413_; 
lean_dec_ref(v___f_2394_);
lean_dec(v_modifyEnv_2393_);
v___x_2406_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0));
v___x_2407_ = 1;
v___x_2408_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2392_, v___x_2407_);
v___x_2409_ = lean_string_append(v___x_2406_, v___x_2408_);
lean_dec_ref(v___x_2408_);
v___x_2410_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1));
v___x_2411_ = lean_string_append(v___x_2409_, v___x_2410_);
if (v_isShared_2405_ == 0)
{
lean_ctor_set_tag(v___x_2404_, 3);
lean_ctor_set(v___x_2404_, 0, v___x_2411_);
v___x_2413_ = v___x_2404_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v___x_2411_);
v___x_2413_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; 
v___x_2414_ = l_Lean_MessageData_ofFormat(v___x_2413_);
v___x_2415_ = l_Lean_throwError___redArg(v_inst_2396_, v_inst_2397_, v___x_2414_);
v___x_2416_ = lean_apply_4(v_toBind_2398_, lean_box(0), lean_box(0), v___x_2415_, v___f_2399_);
return v___x_2416_;
}
}
else
{
lean_object* v___x_2418_; 
lean_del_object(v___x_2404_);
lean_dec(v___f_2399_);
lean_dec(v_toBind_2398_);
lean_dec_ref(v_inst_2397_);
lean_dec_ref(v_inst_2396_);
lean_dec(v_declName_2392_);
v___x_2418_ = lean_apply_1(v_modifyEnv_2393_, v___f_2394_);
return v___x_2418_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___boxed(lean_object* v_declName_2421_, lean_object* v_modifyEnv_2422_, lean_object* v___f_2423_, lean_object* v___x_2424_, lean_object* v_inst_2425_, lean_object* v_inst_2426_, lean_object* v_toBind_2427_, lean_object* v___f_2428_, lean_object* v_____do__lift_2429_){
_start:
{
uint8_t v___x_303__boxed_2430_; lean_object* v_res_2431_; 
v___x_303__boxed_2430_ = lean_unbox(v___x_2424_);
v_res_2431_ = l_Lean_addVersoDocStringCore___redArg___lam__2(v_declName_2421_, v_modifyEnv_2422_, v___f_2423_, v___x_303__boxed_2430_, v_inst_2425_, v_inst_2426_, v_toBind_2427_, v___f_2428_, v_____do__lift_2429_);
lean_dec_ref(v_____do__lift_2429_);
return v_res_2431_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg(lean_object* v_inst_2432_, lean_object* v_inst_2433_, lean_object* v_inst_2434_, lean_object* v_declName_2435_, lean_object* v_docs_2436_){
_start:
{
uint8_t v___x_2437_; 
v___x_2437_ = l_Lean_Name_isAnonymous(v_declName_2435_);
if (v___x_2437_ == 0)
{
lean_object* v_toBind_2438_; lean_object* v_getEnv_2439_; lean_object* v_modifyEnv_2440_; lean_object* v___f_2441_; lean_object* v___f_2442_; lean_object* v___x_2443_; lean_object* v___f_2444_; lean_object* v___x_2445_; 
v_toBind_2438_ = lean_ctor_get(v_inst_2432_, 1);
lean_inc(v_toBind_2438_);
v_getEnv_2439_ = lean_ctor_get(v_inst_2433_, 0);
lean_inc(v_getEnv_2439_);
v_modifyEnv_2440_ = lean_ctor_get(v_inst_2433_, 1);
lean_inc(v_modifyEnv_2440_);
lean_dec_ref(v_inst_2433_);
lean_inc(v_declName_2435_);
v___f_2441_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2441_, 0, v_declName_2435_);
lean_closure_set(v___f_2441_, 1, v_docs_2436_);
lean_inc_ref(v___f_2441_);
lean_inc(v_modifyEnv_2440_);
v___f_2442_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2442_, 0, v_modifyEnv_2440_);
lean_closure_set(v___f_2442_, 1, v___f_2441_);
v___x_2443_ = lean_box(v___x_2437_);
lean_inc(v_toBind_2438_);
v___f_2444_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_2444_, 0, v_declName_2435_);
lean_closure_set(v___f_2444_, 1, v_modifyEnv_2440_);
lean_closure_set(v___f_2444_, 2, v___f_2441_);
lean_closure_set(v___f_2444_, 3, v___x_2443_);
lean_closure_set(v___f_2444_, 4, v_inst_2432_);
lean_closure_set(v___f_2444_, 5, v_inst_2434_);
lean_closure_set(v___f_2444_, 6, v_toBind_2438_);
lean_closure_set(v___f_2444_, 7, v___f_2442_);
v___x_2445_ = lean_apply_4(v_toBind_2438_, lean_box(0), lean_box(0), v_getEnv_2439_, v___f_2444_);
return v___x_2445_;
}
else
{
lean_object* v_toApplicative_2446_; lean_object* v_toPure_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
lean_dec_ref(v_docs_2436_);
lean_dec(v_declName_2435_);
lean_dec_ref(v_inst_2434_);
lean_dec_ref(v_inst_2433_);
v_toApplicative_2446_ = lean_ctor_get(v_inst_2432_, 0);
lean_inc_ref(v_toApplicative_2446_);
lean_dec_ref(v_inst_2432_);
v_toPure_2447_ = lean_ctor_get(v_toApplicative_2446_, 1);
lean_inc(v_toPure_2447_);
lean_dec_ref(v_toApplicative_2446_);
v___x_2448_ = lean_box(0);
v___x_2449_ = lean_apply_2(v_toPure_2447_, lean_box(0), v___x_2448_);
return v___x_2449_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore(lean_object* v_m_2450_, lean_object* v_inst_2451_, lean_object* v_inst_2452_, lean_object* v_inst_2453_, lean_object* v_inst_2454_, lean_object* v_declName_2455_, lean_object* v_docs_2456_){
_start:
{
lean_object* v___x_2457_; 
v___x_2457_ = l_Lean_addVersoDocStringCore___redArg(v_inst_2451_, v_inst_2452_, v_inst_2454_, v_declName_2455_, v_docs_2456_);
return v___x_2457_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___boxed(lean_object* v_m_2458_, lean_object* v_inst_2459_, lean_object* v_inst_2460_, lean_object* v_inst_2461_, lean_object* v_inst_2462_, lean_object* v_declName_2463_, lean_object* v_docs_2464_){
_start:
{
lean_object* v_res_2465_; 
v_res_2465_ = l_Lean_addVersoDocStringCore(v_m_2458_, v_inst_2459_, v_inst_2460_, v_inst_2461_, v_inst_2462_, v_declName_2463_, v_docs_2464_);
lean_dec(v_inst_2461_);
return v_res_2465_;
}
}
static lean_object* _init_l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2467_; lean_object* v___x_2468_; 
v___x_2467_ = ((lean_object*)(l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0));
v___x_2468_ = l_Lean_stringToMessageData(v___x_2467_);
return v___x_2468_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0(lean_object* v_docs_2469_, lean_object* v_inst_2470_, lean_object* v_inst_2471_, lean_object* v_inst_2472_, lean_object* v_____do__lift_2473_){
_start:
{
lean_object* v___x_2474_; 
v___x_2474_ = l_Lean_addVersoModuleDocSnippet(v_____do__lift_2473_, v_docs_2469_);
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_object* v_a_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; 
lean_dec_ref(v_inst_2472_);
v_a_2475_ = lean_ctor_get(v___x_2474_, 0);
lean_inc(v_a_2475_);
lean_dec_ref(v___x_2474_);
v___x_2476_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1);
v___x_2477_ = l_Lean_stringToMessageData(v_a_2475_);
v___x_2478_ = l_Lean_indentD(v___x_2477_);
v___x_2479_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2479_, 0, v___x_2476_);
lean_ctor_set(v___x_2479_, 1, v___x_2478_);
v___x_2480_ = l_Lean_throwError___redArg(v_inst_2470_, v_inst_2471_, v___x_2479_);
return v___x_2480_;
}
else
{
lean_object* v_a_2481_; lean_object* v___x_2482_; 
lean_dec_ref(v_inst_2471_);
lean_dec_ref(v_inst_2470_);
v_a_2481_ = lean_ctor_get(v___x_2474_, 0);
lean_inc(v_a_2481_);
lean_dec_ref(v___x_2474_);
v___x_2482_ = l_Lean_setEnv___redArg(v_inst_2472_, v_a_2481_);
return v___x_2482_;
}
}
}
static lean_object* _init_l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2484_ = ((lean_object*)(l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0));
v___x_2485_ = l_Lean_stringToMessageData(v___x_2484_);
return v___x_2485_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1(lean_object* v_inst_2486_, lean_object* v_inst_2487_, lean_object* v_toBind_2488_, lean_object* v_getEnv_2489_, lean_object* v___f_2490_, lean_object* v_____do__lift_2491_){
_start:
{
lean_object* v___x_2492_; uint8_t v___x_2493_; 
v___x_2492_ = l_Lean_getMainModuleDoc(v_____do__lift_2491_);
v___x_2493_ = l_Lean_PersistentArray_isEmpty___redArg(v___x_2492_);
lean_dec_ref(v___x_2492_);
if (v___x_2493_ == 0)
{
lean_object* v___x_2494_; lean_object* v___x_2495_; 
lean_dec(v___f_2490_);
lean_dec(v_getEnv_2489_);
lean_dec(v_toBind_2488_);
v___x_2494_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1);
v___x_2495_ = l_Lean_throwError___redArg(v_inst_2486_, v_inst_2487_, v___x_2494_);
return v___x_2495_;
}
else
{
lean_object* v___x_2496_; 
lean_dec_ref(v_inst_2487_);
lean_dec_ref(v_inst_2486_);
v___x_2496_ = lean_apply_4(v_toBind_2488_, lean_box(0), lean_box(0), v_getEnv_2489_, v___f_2490_);
return v___x_2496_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg(lean_object* v_inst_2497_, lean_object* v_inst_2498_, lean_object* v_inst_2499_, lean_object* v_docs_2500_){
_start:
{
lean_object* v_toBind_2501_; lean_object* v_getEnv_2502_; lean_object* v___f_2503_; lean_object* v___f_2504_; lean_object* v___x_2505_; 
v_toBind_2501_ = lean_ctor_get(v_inst_2497_, 1);
lean_inc(v_toBind_2501_);
v_getEnv_2502_ = lean_ctor_get(v_inst_2498_, 0);
lean_inc(v_getEnv_2502_);
lean_inc_ref(v_inst_2499_);
lean_inc_ref(v_inst_2497_);
v___f_2503_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2503_, 0, v_docs_2500_);
lean_closure_set(v___f_2503_, 1, v_inst_2497_);
lean_closure_set(v___f_2503_, 2, v_inst_2499_);
lean_closure_set(v___f_2503_, 3, v_inst_2498_);
lean_inc(v_getEnv_2502_);
lean_inc(v_toBind_2501_);
v___f_2504_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__1), 6, 5);
lean_closure_set(v___f_2504_, 0, v_inst_2497_);
lean_closure_set(v___f_2504_, 1, v_inst_2499_);
lean_closure_set(v___f_2504_, 2, v_toBind_2501_);
lean_closure_set(v___f_2504_, 3, v_getEnv_2502_);
lean_closure_set(v___f_2504_, 4, v___f_2503_);
v___x_2505_ = lean_apply_4(v_toBind_2501_, lean_box(0), lean_box(0), v_getEnv_2502_, v___f_2504_);
return v___x_2505_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore(lean_object* v_m_2506_, lean_object* v_inst_2507_, lean_object* v_inst_2508_, lean_object* v_inst_2509_, lean_object* v_inst_2510_, lean_object* v_docs_2511_){
_start:
{
lean_object* v___x_2512_; 
v___x_2512_ = l_Lean_addVersoModDocStringCore___redArg(v_inst_2507_, v_inst_2508_, v_inst_2510_, v_docs_2511_);
return v___x_2512_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___boxed(lean_object* v_m_2513_, lean_object* v_inst_2514_, lean_object* v_inst_2515_, lean_object* v_inst_2516_, lean_object* v_inst_2517_, lean_object* v_docs_2518_){
_start:
{
lean_object* v_res_2519_; 
v_res_2519_ = l_Lean_addVersoModDocStringCore(v_m_2513_, v_inst_2514_, v_inst_2515_, v_inst_2516_, v_inst_2517_, v_docs_2518_);
lean_dec(v_inst_2516_);
return v_res_2519_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2520_; 
v___x_2520_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2520_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2521_; lean_object* v___x_2522_; 
v___x_2521_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0);
v___x_2522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2522_, 0, v___x_2521_);
return v___x_2522_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2523_; lean_object* v___x_2524_; 
v___x_2523_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1);
v___x_2524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2524_, 0, v___x_2523_);
lean_ctor_set(v___x_2524_, 1, v___x_2523_);
return v___x_2524_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2525_; lean_object* v___x_2526_; 
v___x_2525_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1);
v___x_2526_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2526_, 0, v___x_2525_);
lean_ctor_set(v___x_2526_, 1, v___x_2525_);
lean_ctor_set(v___x_2526_, 2, v___x_2525_);
lean_ctor_set(v___x_2526_, 3, v___x_2525_);
lean_ctor_set(v___x_2526_, 4, v___x_2525_);
lean_ctor_set(v___x_2526_, 5, v___x_2525_);
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(lean_object* v_declName_2527_, lean_object* v_docs_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_){
_start:
{
lean_object* v___y_2537_; lean_object* v___y_2538_; uint8_t v___x_2577_; 
v___x_2577_ = l_Lean_Name_isAnonymous(v_declName_2527_);
if (v___x_2577_ == 0)
{
lean_object* v___x_2578_; lean_object* v_env_2579_; lean_object* v___x_2580_; 
v___x_2578_ = lean_st_ref_get(v___y_2534_);
v_env_2579_ = lean_ctor_get(v___x_2578_, 0);
lean_inc_ref(v_env_2579_);
lean_dec(v___x_2578_);
v___x_2580_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2579_, v_declName_2527_);
lean_dec_ref(v_env_2579_);
if (lean_obj_tag(v___x_2580_) == 0)
{
lean_dec_ref(v___y_2529_);
v___y_2537_ = v___y_2532_;
v___y_2538_ = v___y_2534_;
goto v___jp_2536_;
}
else
{
lean_object* v___x_2582_; uint8_t v_isShared_2583_; uint8_t v_isSharedCheck_2595_; 
v_isSharedCheck_2595_ = !lean_is_exclusive(v___x_2580_);
if (v_isSharedCheck_2595_ == 0)
{
lean_object* v_unused_2596_; 
v_unused_2596_ = lean_ctor_get(v___x_2580_, 0);
lean_dec(v_unused_2596_);
v___x_2582_ = v___x_2580_;
v_isShared_2583_ = v_isSharedCheck_2595_;
goto v_resetjp_2581_;
}
else
{
lean_dec(v___x_2580_);
v___x_2582_ = lean_box(0);
v_isShared_2583_ = v_isSharedCheck_2595_;
goto v_resetjp_2581_;
}
v_resetjp_2581_:
{
if (v___x_2577_ == 0)
{
lean_object* v___x_2584_; uint8_t v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2591_; 
lean_dec_ref(v_docs_2528_);
v___x_2584_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0));
v___x_2585_ = 1;
v___x_2586_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2527_, v___x_2585_);
v___x_2587_ = lean_string_append(v___x_2584_, v___x_2586_);
lean_dec_ref(v___x_2586_);
v___x_2588_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1));
v___x_2589_ = lean_string_append(v___x_2587_, v___x_2588_);
if (v_isShared_2583_ == 0)
{
lean_ctor_set_tag(v___x_2582_, 3);
lean_ctor_set(v___x_2582_, 0, v___x_2589_);
v___x_2591_ = v___x_2582_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v___x_2589_);
v___x_2591_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
lean_object* v___x_2592_; lean_object* v___x_2593_; 
v___x_2592_ = l_Lean_MessageData_ofFormat(v___x_2591_);
v___x_2593_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_2592_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_);
return v___x_2593_;
}
}
else
{
lean_del_object(v___x_2582_);
lean_dec_ref(v___y_2529_);
v___y_2537_ = v___y_2532_;
v___y_2538_ = v___y_2534_;
goto v___jp_2536_;
}
}
}
}
else
{
lean_object* v___x_2597_; lean_object* v___x_2598_; 
lean_dec_ref(v___y_2529_);
lean_dec_ref(v_docs_2528_);
lean_dec(v_declName_2527_);
v___x_2597_ = lean_box(0);
v___x_2598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2597_);
return v___x_2598_;
}
v___jp_2536_:
{
lean_object* v___x_2539_; lean_object* v_env_2540_; lean_object* v_nextMacroScope_2541_; lean_object* v_ngen_2542_; lean_object* v_auxDeclNGen_2543_; lean_object* v_traceState_2544_; lean_object* v_messages_2545_; lean_object* v_infoState_2546_; lean_object* v_snapshotTasks_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2575_; 
v___x_2539_ = lean_st_ref_take(v___y_2538_);
v_env_2540_ = lean_ctor_get(v___x_2539_, 0);
v_nextMacroScope_2541_ = lean_ctor_get(v___x_2539_, 1);
v_ngen_2542_ = lean_ctor_get(v___x_2539_, 2);
v_auxDeclNGen_2543_ = lean_ctor_get(v___x_2539_, 3);
v_traceState_2544_ = lean_ctor_get(v___x_2539_, 4);
v_messages_2545_ = lean_ctor_get(v___x_2539_, 6);
v_infoState_2546_ = lean_ctor_get(v___x_2539_, 7);
v_snapshotTasks_2547_ = lean_ctor_get(v___x_2539_, 8);
v_isSharedCheck_2575_ = !lean_is_exclusive(v___x_2539_);
if (v_isSharedCheck_2575_ == 0)
{
lean_object* v_unused_2576_; 
v_unused_2576_ = lean_ctor_get(v___x_2539_, 5);
lean_dec(v_unused_2576_);
v___x_2549_ = v___x_2539_;
v_isShared_2550_ = v_isSharedCheck_2575_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_snapshotTasks_2547_);
lean_inc(v_infoState_2546_);
lean_inc(v_messages_2545_);
lean_inc(v_traceState_2544_);
lean_inc(v_auxDeclNGen_2543_);
lean_inc(v_ngen_2542_);
lean_inc(v_nextMacroScope_2541_);
lean_inc(v_env_2540_);
lean_dec(v___x_2539_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2575_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2555_; 
v___x_2551_ = l_Lean_versoDocStringExt;
v___x_2552_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2551_, v_env_2540_, v_declName_2527_, v_docs_2528_);
v___x_2553_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_2550_ == 0)
{
lean_ctor_set(v___x_2549_, 5, v___x_2553_);
lean_ctor_set(v___x_2549_, 0, v___x_2552_);
v___x_2555_ = v___x_2549_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2574_; 
v_reuseFailAlloc_2574_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2574_, 0, v___x_2552_);
lean_ctor_set(v_reuseFailAlloc_2574_, 1, v_nextMacroScope_2541_);
lean_ctor_set(v_reuseFailAlloc_2574_, 2, v_ngen_2542_);
lean_ctor_set(v_reuseFailAlloc_2574_, 3, v_auxDeclNGen_2543_);
lean_ctor_set(v_reuseFailAlloc_2574_, 4, v_traceState_2544_);
lean_ctor_set(v_reuseFailAlloc_2574_, 5, v___x_2553_);
lean_ctor_set(v_reuseFailAlloc_2574_, 6, v_messages_2545_);
lean_ctor_set(v_reuseFailAlloc_2574_, 7, v_infoState_2546_);
lean_ctor_set(v_reuseFailAlloc_2574_, 8, v_snapshotTasks_2547_);
v___x_2555_ = v_reuseFailAlloc_2574_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v_mctx_2558_; lean_object* v_zetaDeltaFVarIds_2559_; lean_object* v_postponed_2560_; lean_object* v_diag_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2572_; 
v___x_2556_ = lean_st_ref_set(v___y_2538_, v___x_2555_);
v___x_2557_ = lean_st_ref_take(v___y_2537_);
v_mctx_2558_ = lean_ctor_get(v___x_2557_, 0);
v_zetaDeltaFVarIds_2559_ = lean_ctor_get(v___x_2557_, 2);
v_postponed_2560_ = lean_ctor_get(v___x_2557_, 3);
v_diag_2561_ = lean_ctor_get(v___x_2557_, 4);
v_isSharedCheck_2572_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2572_ == 0)
{
lean_object* v_unused_2573_; 
v_unused_2573_ = lean_ctor_get(v___x_2557_, 1);
lean_dec(v_unused_2573_);
v___x_2563_ = v___x_2557_;
v_isShared_2564_ = v_isSharedCheck_2572_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_diag_2561_);
lean_inc(v_postponed_2560_);
lean_inc(v_zetaDeltaFVarIds_2559_);
lean_inc(v_mctx_2558_);
lean_dec(v___x_2557_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2572_;
goto v_resetjp_2562_;
}
v_resetjp_2562_:
{
lean_object* v___x_2565_; lean_object* v___x_2567_; 
v___x_2565_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_2564_ == 0)
{
lean_ctor_set(v___x_2563_, 1, v___x_2565_);
v___x_2567_ = v___x_2563_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2571_; 
v_reuseFailAlloc_2571_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2571_, 0, v_mctx_2558_);
lean_ctor_set(v_reuseFailAlloc_2571_, 1, v___x_2565_);
lean_ctor_set(v_reuseFailAlloc_2571_, 2, v_zetaDeltaFVarIds_2559_);
lean_ctor_set(v_reuseFailAlloc_2571_, 3, v_postponed_2560_);
lean_ctor_set(v_reuseFailAlloc_2571_, 4, v_diag_2561_);
v___x_2567_ = v_reuseFailAlloc_2571_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
v___x_2568_ = lean_st_ref_set(v___y_2537_, v___x_2567_);
v___x_2569_ = lean_box(0);
v___x_2570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2569_);
return v___x_2570_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___boxed(lean_object* v_declName_2599_, lean_object* v_docs_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_){
_start:
{
lean_object* v_res_2608_; 
v_res_2608_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2599_, v_docs_2600_, v___y_2601_, v___y_2602_, v___y_2603_, v___y_2604_, v___y_2605_, v___y_2606_);
lean_dec(v___y_2606_);
lean_dec_ref(v___y_2605_);
lean_dec(v___y_2604_);
lean_dec_ref(v___y_2603_);
lean_dec(v___y_2602_);
return v_res_2608_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocString(lean_object* v_declName_2609_, lean_object* v_binders_2610_, lean_object* v_docComment_2611_, lean_object* v_a_2612_, lean_object* v_a_2613_, lean_object* v_a_2614_, lean_object* v_a_2615_, lean_object* v_a_2616_, lean_object* v_a_2617_){
_start:
{
lean_object* v___y_2620_; lean_object* v___y_2621_; lean_object* v___y_2622_; lean_object* v___y_2623_; lean_object* v___y_2624_; lean_object* v___y_2625_; lean_object* v___x_2646_; lean_object* v_env_2647_; lean_object* v___x_2648_; 
v___x_2646_ = lean_st_ref_get(v_a_2617_);
v_env_2647_ = lean_ctor_get(v___x_2646_, 0);
lean_inc_ref(v_env_2647_);
lean_dec(v___x_2646_);
v___x_2648_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2647_, v_declName_2609_);
lean_dec_ref(v_env_2647_);
if (lean_obj_tag(v___x_2648_) == 0)
{
v___y_2620_ = v_a_2612_;
v___y_2621_ = v_a_2613_;
v___y_2622_ = v_a_2614_;
v___y_2623_ = v_a_2615_;
v___y_2624_ = v_a_2616_;
v___y_2625_ = v_a_2617_;
goto v___jp_2619_;
}
else
{
lean_object* v___x_2650_; uint8_t v_isShared_2651_; uint8_t v_isSharedCheck_2663_; 
lean_dec(v_docComment_2611_);
lean_dec(v_binders_2610_);
v_isSharedCheck_2663_ = !lean_is_exclusive(v___x_2648_);
if (v_isSharedCheck_2663_ == 0)
{
lean_object* v_unused_2664_; 
v_unused_2664_ = lean_ctor_get(v___x_2648_, 0);
lean_dec(v_unused_2664_);
v___x_2650_ = v___x_2648_;
v_isShared_2651_ = v_isSharedCheck_2663_;
goto v_resetjp_2649_;
}
else
{
lean_dec(v___x_2648_);
v___x_2650_ = lean_box(0);
v_isShared_2651_ = v_isSharedCheck_2663_;
goto v_resetjp_2649_;
}
v_resetjp_2649_:
{
lean_object* v___x_2652_; uint8_t v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2659_; 
v___x_2652_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0));
v___x_2653_ = 1;
v___x_2654_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2609_, v___x_2653_);
v___x_2655_ = lean_string_append(v___x_2652_, v___x_2654_);
lean_dec_ref(v___x_2654_);
v___x_2656_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1));
v___x_2657_ = lean_string_append(v___x_2655_, v___x_2656_);
if (v_isShared_2651_ == 0)
{
lean_ctor_set_tag(v___x_2650_, 3);
lean_ctor_set(v___x_2650_, 0, v___x_2657_);
v___x_2659_ = v___x_2650_;
goto v_reusejp_2658_;
}
else
{
lean_object* v_reuseFailAlloc_2662_; 
v_reuseFailAlloc_2662_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2662_, 0, v___x_2657_);
v___x_2659_ = v_reuseFailAlloc_2662_;
goto v_reusejp_2658_;
}
v_reusejp_2658_:
{
lean_object* v___x_2660_; lean_object* v___x_2661_; 
v___x_2660_ = l_Lean_MessageData_ofFormat(v___x_2659_);
v___x_2661_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_2660_, v_a_2612_, v_a_2613_, v_a_2614_, v_a_2615_, v_a_2616_, v_a_2617_);
lean_dec(v_a_2617_);
lean_dec_ref(v_a_2616_);
lean_dec(v_a_2615_);
lean_dec_ref(v_a_2614_);
lean_dec(v_a_2613_);
return v___x_2661_;
}
}
}
v___jp_2619_:
{
lean_object* v___x_2626_; 
lean_inc(v___y_2625_);
lean_inc_ref(v___y_2624_);
lean_inc(v___y_2623_);
lean_inc_ref(v___y_2622_);
lean_inc(v___y_2621_);
lean_inc_ref(v___y_2620_);
lean_inc(v_declName_2609_);
v___x_2626_ = l_Lean_versoDocString(v_declName_2609_, v_binders_2610_, v_docComment_2611_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_, v___y_2625_);
if (lean_obj_tag(v___x_2626_) == 0)
{
lean_object* v_a_2627_; lean_object* v_fst_2628_; lean_object* v_snd_2629_; lean_object* v___x_2631_; uint8_t v_isShared_2632_; uint8_t v_isSharedCheck_2637_; 
v_a_2627_ = lean_ctor_get(v___x_2626_, 0);
lean_inc(v_a_2627_);
lean_dec_ref(v___x_2626_);
v_fst_2628_ = lean_ctor_get(v_a_2627_, 0);
v_snd_2629_ = lean_ctor_get(v_a_2627_, 1);
v_isSharedCheck_2637_ = !lean_is_exclusive(v_a_2627_);
if (v_isSharedCheck_2637_ == 0)
{
v___x_2631_ = v_a_2627_;
v_isShared_2632_ = v_isSharedCheck_2637_;
goto v_resetjp_2630_;
}
else
{
lean_inc(v_snd_2629_);
lean_inc(v_fst_2628_);
lean_dec(v_a_2627_);
v___x_2631_ = lean_box(0);
v_isShared_2632_ = v_isSharedCheck_2637_;
goto v_resetjp_2630_;
}
v_resetjp_2630_:
{
lean_object* v___x_2634_; 
if (v_isShared_2632_ == 0)
{
v___x_2634_ = v___x_2631_;
goto v_reusejp_2633_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v_fst_2628_);
lean_ctor_set(v_reuseFailAlloc_2636_, 1, v_snd_2629_);
v___x_2634_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2633_;
}
v_reusejp_2633_:
{
lean_object* v___x_2635_; 
v___x_2635_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2609_, v___x_2634_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_, v___y_2625_);
lean_dec(v___y_2625_);
lean_dec_ref(v___y_2624_);
lean_dec(v___y_2623_);
lean_dec_ref(v___y_2622_);
lean_dec(v___y_2621_);
return v___x_2635_;
}
}
}
else
{
lean_object* v_a_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2645_; 
lean_dec(v___y_2625_);
lean_dec_ref(v___y_2624_);
lean_dec(v___y_2623_);
lean_dec_ref(v___y_2622_);
lean_dec(v___y_2621_);
lean_dec_ref(v___y_2620_);
lean_dec(v_declName_2609_);
v_a_2638_ = lean_ctor_get(v___x_2626_, 0);
v_isSharedCheck_2645_ = !lean_is_exclusive(v___x_2626_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2640_ = v___x_2626_;
v_isShared_2641_ = v_isSharedCheck_2645_;
goto v_resetjp_2639_;
}
else
{
lean_inc(v_a_2638_);
lean_dec(v___x_2626_);
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
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocString___boxed(lean_object* v_declName_2665_, lean_object* v_binders_2666_, lean_object* v_docComment_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_, lean_object* v_a_2672_, lean_object* v_a_2673_, lean_object* v_a_2674_){
_start:
{
lean_object* v_res_2675_; 
v_res_2675_ = l_Lean_addVersoDocString(v_declName_2665_, v_binders_2666_, v_docComment_2667_, v_a_2668_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_, v_a_2673_);
return v_res_2675_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString(lean_object* v_declName_2676_, lean_object* v_docComment_2677_, lean_object* v_a_2678_, lean_object* v_a_2679_, lean_object* v_a_2680_, lean_object* v_a_2681_, lean_object* v_a_2682_, lean_object* v_a_2683_){
_start:
{
lean_object* v___y_2686_; lean_object* v___y_2687_; lean_object* v___y_2688_; lean_object* v___y_2689_; lean_object* v___y_2690_; lean_object* v___y_2691_; lean_object* v___x_2712_; lean_object* v_env_2713_; lean_object* v___x_2714_; 
v___x_2712_ = lean_st_ref_get(v_a_2683_);
v_env_2713_ = lean_ctor_get(v___x_2712_, 0);
lean_inc_ref(v_env_2713_);
lean_dec(v___x_2712_);
v___x_2714_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2713_, v_declName_2676_);
lean_dec_ref(v_env_2713_);
if (lean_obj_tag(v___x_2714_) == 0)
{
v___y_2686_ = v_a_2678_;
v___y_2687_ = v_a_2679_;
v___y_2688_ = v_a_2680_;
v___y_2689_ = v_a_2681_;
v___y_2690_ = v_a_2682_;
v___y_2691_ = v_a_2683_;
goto v___jp_2685_;
}
else
{
lean_object* v___x_2716_; uint8_t v_isShared_2717_; uint8_t v_isSharedCheck_2729_; 
lean_dec_ref(v_docComment_2677_);
v_isSharedCheck_2729_ = !lean_is_exclusive(v___x_2714_);
if (v_isSharedCheck_2729_ == 0)
{
lean_object* v_unused_2730_; 
v_unused_2730_ = lean_ctor_get(v___x_2714_, 0);
lean_dec(v_unused_2730_);
v___x_2716_ = v___x_2714_;
v_isShared_2717_ = v_isSharedCheck_2729_;
goto v_resetjp_2715_;
}
else
{
lean_dec(v___x_2714_);
v___x_2716_ = lean_box(0);
v_isShared_2717_ = v_isSharedCheck_2729_;
goto v_resetjp_2715_;
}
v_resetjp_2715_:
{
lean_object* v___x_2718_; uint8_t v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2725_; 
v___x_2718_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0));
v___x_2719_ = 1;
v___x_2720_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2676_, v___x_2719_);
v___x_2721_ = lean_string_append(v___x_2718_, v___x_2720_);
lean_dec_ref(v___x_2720_);
v___x_2722_ = ((lean_object*)(l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1));
v___x_2723_ = lean_string_append(v___x_2721_, v___x_2722_);
if (v_isShared_2717_ == 0)
{
lean_ctor_set_tag(v___x_2716_, 3);
lean_ctor_set(v___x_2716_, 0, v___x_2723_);
v___x_2725_ = v___x_2716_;
goto v_reusejp_2724_;
}
else
{
lean_object* v_reuseFailAlloc_2728_; 
v_reuseFailAlloc_2728_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2728_, 0, v___x_2723_);
v___x_2725_ = v_reuseFailAlloc_2728_;
goto v_reusejp_2724_;
}
v_reusejp_2724_:
{
lean_object* v___x_2726_; lean_object* v___x_2727_; 
v___x_2726_ = l_Lean_MessageData_ofFormat(v___x_2725_);
v___x_2727_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_2726_, v_a_2678_, v_a_2679_, v_a_2680_, v_a_2681_, v_a_2682_, v_a_2683_);
lean_dec(v_a_2683_);
lean_dec_ref(v_a_2682_);
lean_dec(v_a_2681_);
lean_dec_ref(v_a_2680_);
lean_dec(v_a_2679_);
return v___x_2727_;
}
}
}
v___jp_2685_:
{
lean_object* v___x_2692_; 
lean_inc(v___y_2691_);
lean_inc_ref(v___y_2690_);
lean_inc(v___y_2689_);
lean_inc_ref(v___y_2688_);
lean_inc(v___y_2687_);
lean_inc_ref(v___y_2686_);
lean_inc(v_declName_2676_);
v___x_2692_ = l_Lean_versoDocStringFromString(v_declName_2676_, v_docComment_2677_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_);
if (lean_obj_tag(v___x_2692_) == 0)
{
lean_object* v_a_2693_; lean_object* v_fst_2694_; lean_object* v_snd_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2703_; 
v_a_2693_ = lean_ctor_get(v___x_2692_, 0);
lean_inc(v_a_2693_);
lean_dec_ref(v___x_2692_);
v_fst_2694_ = lean_ctor_get(v_a_2693_, 0);
v_snd_2695_ = lean_ctor_get(v_a_2693_, 1);
v_isSharedCheck_2703_ = !lean_is_exclusive(v_a_2693_);
if (v_isSharedCheck_2703_ == 0)
{
v___x_2697_ = v_a_2693_;
v_isShared_2698_ = v_isSharedCheck_2703_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_snd_2695_);
lean_inc(v_fst_2694_);
lean_dec(v_a_2693_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2703_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2700_; 
if (v_isShared_2698_ == 0)
{
v___x_2700_ = v___x_2697_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v_fst_2694_);
lean_ctor_set(v_reuseFailAlloc_2702_, 1, v_snd_2695_);
v___x_2700_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
lean_object* v___x_2701_; 
v___x_2701_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2676_, v___x_2700_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_);
lean_dec(v___y_2691_);
lean_dec_ref(v___y_2690_);
lean_dec(v___y_2689_);
lean_dec_ref(v___y_2688_);
lean_dec(v___y_2687_);
return v___x_2701_;
}
}
}
else
{
lean_object* v_a_2704_; lean_object* v___x_2706_; uint8_t v_isShared_2707_; uint8_t v_isSharedCheck_2711_; 
lean_dec(v___y_2691_);
lean_dec_ref(v___y_2690_);
lean_dec(v___y_2689_);
lean_dec_ref(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec_ref(v___y_2686_);
lean_dec(v_declName_2676_);
v_a_2704_ = lean_ctor_get(v___x_2692_, 0);
v_isSharedCheck_2711_ = !lean_is_exclusive(v___x_2692_);
if (v_isSharedCheck_2711_ == 0)
{
v___x_2706_ = v___x_2692_;
v_isShared_2707_ = v_isSharedCheck_2711_;
goto v_resetjp_2705_;
}
else
{
lean_inc(v_a_2704_);
lean_dec(v___x_2692_);
v___x_2706_ = lean_box(0);
v_isShared_2707_ = v_isSharedCheck_2711_;
goto v_resetjp_2705_;
}
v_resetjp_2705_:
{
lean_object* v___x_2709_; 
if (v_isShared_2707_ == 0)
{
v___x_2709_ = v___x_2706_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2710_; 
v_reuseFailAlloc_2710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2710_, 0, v_a_2704_);
v___x_2709_ = v_reuseFailAlloc_2710_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
return v___x_2709_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString___boxed(lean_object* v_declName_2731_, lean_object* v_docComment_2732_, lean_object* v_a_2733_, lean_object* v_a_2734_, lean_object* v_a_2735_, lean_object* v_a_2736_, lean_object* v_a_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_){
_start:
{
lean_object* v_res_2740_; 
v_res_2740_ = l_Lean_addVersoDocStringFromString(v_declName_2731_, v_docComment_2732_, v_a_2733_, v_a_2734_, v_a_2735_, v_a_2736_, v_a_2737_, v_a_2738_);
return v_res_2740_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_2741_, lean_object* v_msgData_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_){
_start:
{
uint8_t v___x_2748_; uint8_t v___x_2749_; lean_object* v___x_2750_; 
v___x_2748_ = 2;
v___x_2749_ = 0;
v___x_2750_ = l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg(v_ref_2741_, v_msgData_2742_, v___x_2748_, v___x_2749_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_);
return v___x_2750_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_2751_, lean_object* v_msgData_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_){
_start:
{
lean_object* v_res_2758_; 
v_res_2758_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v_ref_2751_, v_msgData_2752_, v___y_2753_, v___y_2754_, v___y_2755_, v___y_2756_);
lean_dec(v___y_2756_);
lean_dec(v___y_2754_);
lean_dec_ref(v___y_2753_);
lean_dec(v_ref_2751_);
return v_res_2758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(lean_object* v___y_2759_, lean_object* v_str_2760_, lean_object* v_as_2761_, size_t v_sz_2762_, size_t v_i_2763_, lean_object* v_b_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_){
_start:
{
lean_object* v_a_2773_; uint8_t v___x_2777_; 
v___x_2777_ = lean_usize_dec_lt(v_i_2763_, v_sz_2762_);
if (v___x_2777_ == 0)
{
lean_object* v___x_2778_; 
lean_dec_ref(v___y_2769_);
v___x_2778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2778_, 0, v_b_2764_);
return v___x_2778_;
}
else
{
lean_object* v_a_2779_; lean_object* v_fst_2780_; lean_object* v_snd_2781_; lean_object* v_start_2782_; lean_object* v_stop_2783_; lean_object* v___x_2785_; uint8_t v_isShared_2786_; uint8_t v_isSharedCheck_2803_; 
v_a_2779_ = lean_array_uget_borrowed(v_as_2761_, v_i_2763_);
v_fst_2780_ = lean_ctor_get(v_a_2779_, 0);
lean_inc(v_fst_2780_);
v_snd_2781_ = lean_ctor_get(v_a_2779_, 1);
v_start_2782_ = lean_ctor_get(v_fst_2780_, 0);
v_stop_2783_ = lean_ctor_get(v_fst_2780_, 1);
v_isSharedCheck_2803_ = !lean_is_exclusive(v_fst_2780_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2785_ = v_fst_2780_;
v_isShared_2786_ = v_isSharedCheck_2803_;
goto v_resetjp_2784_;
}
else
{
lean_inc(v_stop_2783_);
lean_inc(v_start_2782_);
lean_dec(v_fst_2780_);
v___x_2785_ = lean_box(0);
v_isShared_2786_ = v_isSharedCheck_2803_;
goto v_resetjp_2784_;
}
v_resetjp_2784_:
{
lean_object* v___x_2787_; 
v___x_2787_ = lean_box(0);
if (lean_obj_tag(v___y_2759_) == 1)
{
lean_object* v_val_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; uint8_t v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2795_; 
v_val_2788_ = lean_ctor_get(v___y_2759_, 0);
v___x_2789_ = lean_nat_add(v_val_2788_, v_start_2782_);
v___x_2790_ = lean_nat_add(v_val_2788_, v_stop_2783_);
v___x_2791_ = 0;
v___x_2792_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_2792_, 0, v___x_2789_);
lean_ctor_set(v___x_2792_, 1, v___x_2790_);
lean_ctor_set_uint8(v___x_2792_, sizeof(void*)*2, v___x_2791_);
v___x_2793_ = lean_string_utf8_extract(v_str_2760_, v_start_2782_, v_stop_2783_);
lean_dec(v_stop_2783_);
lean_dec(v_start_2782_);
if (v_isShared_2786_ == 0)
{
lean_ctor_set_tag(v___x_2785_, 2);
lean_ctor_set(v___x_2785_, 1, v___x_2793_);
lean_ctor_set(v___x_2785_, 0, v___x_2792_);
v___x_2795_ = v___x_2785_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v___x_2792_);
lean_ctor_set(v_reuseFailAlloc_2799_, 1, v___x_2793_);
v___x_2795_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2794_;
}
v_reusejp_2794_:
{
lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; 
lean_inc(v_snd_2781_);
v___x_2796_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2796_, 0, v_snd_2781_);
v___x_2797_ = l_Lean_MessageData_ofFormat(v___x_2796_);
lean_inc_ref(v___y_2769_);
v___x_2798_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v___x_2795_, v___x_2797_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_);
lean_dec_ref(v___x_2795_);
if (lean_obj_tag(v___x_2798_) == 0)
{
lean_dec_ref(v___x_2798_);
v_a_2773_ = v___x_2787_;
goto v___jp_2772_;
}
else
{
lean_dec_ref(v___y_2769_);
return v___x_2798_;
}
}
}
else
{
lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; 
lean_del_object(v___x_2785_);
lean_dec(v_stop_2783_);
lean_dec(v_start_2782_);
lean_inc(v_snd_2781_);
v___x_2800_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2800_, 0, v_snd_2781_);
v___x_2801_ = l_Lean_MessageData_ofFormat(v___x_2800_);
lean_inc_ref(v___y_2769_);
v___x_2802_ = l_Lean_logError___at___00Lean_versoDocStringFromString_spec__0(v___x_2801_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_);
if (lean_obj_tag(v___x_2802_) == 0)
{
lean_dec_ref(v___x_2802_);
v_a_2773_ = v___x_2787_;
goto v___jp_2772_;
}
else
{
lean_dec_ref(v___y_2769_);
return v___x_2802_;
}
}
}
}
v___jp_2772_:
{
size_t v___x_2774_; size_t v___x_2775_; 
v___x_2774_ = ((size_t)1ULL);
v___x_2775_ = lean_usize_add(v_i_2763_, v___x_2774_);
v_i_2763_ = v___x_2775_;
v_b_2764_ = v_a_2773_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2___boxed(lean_object* v___y_2804_, lean_object* v_str_2805_, lean_object* v_as_2806_, lean_object* v_sz_2807_, lean_object* v_i_2808_, lean_object* v_b_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_){
_start:
{
size_t v_sz_boxed_2817_; size_t v_i_boxed_2818_; lean_object* v_res_2819_; 
v_sz_boxed_2817_ = lean_unbox_usize(v_sz_2807_);
lean_dec(v_sz_2807_);
v_i_boxed_2818_ = lean_unbox_usize(v_i_2808_);
lean_dec(v_i_2808_);
v_res_2819_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(v___y_2804_, v_str_2805_, v_as_2806_, v_sz_boxed_2817_, v_i_boxed_2818_, v_b_2809_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_, v___y_2815_);
lean_dec(v___y_2815_);
lean_dec(v___y_2813_);
lean_dec_ref(v___y_2812_);
lean_dec(v___y_2811_);
lean_dec_ref(v___y_2810_);
lean_dec_ref(v_as_2806_);
lean_dec_ref(v_str_2805_);
lean_dec(v___y_2804_);
return v_res_2819_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(lean_object* v_docstring_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_){
_start:
{
lean_object* v_str_2828_; lean_object* v___y_2830_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; 
v_str_2828_ = l_Lean_TSyntax_getDocString(v_docstring_2820_);
v___x_2845_ = lean_unsigned_to_nat(1u);
v___x_2846_ = l_Lean_Syntax_getArg(v_docstring_2820_, v___x_2845_);
v___x_2847_ = l_Lean_Syntax_getHeadInfo_x3f(v___x_2846_);
lean_dec(v___x_2846_);
if (lean_obj_tag(v___x_2847_) == 0)
{
lean_object* v___x_2848_; 
v___x_2848_ = lean_box(0);
v___y_2830_ = v___x_2848_;
goto v___jp_2829_;
}
else
{
lean_object* v_val_2849_; uint8_t v___x_2850_; lean_object* v___x_2851_; 
v_val_2849_ = lean_ctor_get(v___x_2847_, 0);
lean_inc(v_val_2849_);
lean_dec_ref(v___x_2847_);
v___x_2850_ = 0;
v___x_2851_ = l_Lean_SourceInfo_getPos_x3f(v_val_2849_, v___x_2850_);
lean_dec(v_val_2849_);
v___y_2830_ = v___x_2851_;
goto v___jp_2829_;
}
v___jp_2829_:
{
lean_object* v___x_2831_; lean_object* v_fst_2832_; lean_object* v___x_2833_; size_t v_sz_2834_; size_t v___x_2835_; lean_object* v___x_2836_; 
lean_inc_ref(v_str_2828_);
v___x_2831_ = l_Lean_rewriteManualLinksCore(v_str_2828_);
v_fst_2832_ = lean_ctor_get(v___x_2831_, 0);
lean_inc(v_fst_2832_);
lean_dec_ref(v___x_2831_);
v___x_2833_ = lean_box(0);
v_sz_2834_ = lean_array_size(v_fst_2832_);
v___x_2835_ = ((size_t)0ULL);
v___x_2836_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(v___y_2830_, v_str_2828_, v_fst_2832_, v_sz_2834_, v___x_2835_, v___x_2833_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_, v___y_2825_, v___y_2826_);
lean_dec(v_fst_2832_);
lean_dec_ref(v_str_2828_);
lean_dec(v___y_2830_);
if (lean_obj_tag(v___x_2836_) == 0)
{
lean_object* v___x_2838_; uint8_t v_isShared_2839_; uint8_t v_isSharedCheck_2843_; 
v_isSharedCheck_2843_ = !lean_is_exclusive(v___x_2836_);
if (v_isSharedCheck_2843_ == 0)
{
lean_object* v_unused_2844_; 
v_unused_2844_ = lean_ctor_get(v___x_2836_, 0);
lean_dec(v_unused_2844_);
v___x_2838_ = v___x_2836_;
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
else
{
lean_dec(v___x_2836_);
v___x_2838_ = lean_box(0);
v_isShared_2839_ = v_isSharedCheck_2843_;
goto v_resetjp_2837_;
}
v_resetjp_2837_:
{
lean_object* v___x_2841_; 
if (v_isShared_2839_ == 0)
{
lean_ctor_set(v___x_2838_, 0, v___x_2833_);
v___x_2841_ = v___x_2838_;
goto v_reusejp_2840_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v___x_2833_);
v___x_2841_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2840_;
}
v_reusejp_2840_:
{
return v___x_2841_;
}
}
}
else
{
return v___x_2836_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0___boxed(lean_object* v_docstring_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_){
_start:
{
lean_object* v_res_2860_; 
v_res_2860_ = l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(v_docstring_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_);
lean_dec(v___y_2858_);
lean_dec(v___y_2856_);
lean_dec_ref(v___y_2855_);
lean_dec(v___y_2854_);
lean_dec_ref(v___y_2853_);
lean_dec(v_docstring_2852_);
return v_res_2860_;
}
}
static lean_object* _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2862_; lean_object* v___x_2863_; 
v___x_2862_ = ((lean_object*)(l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0));
v___x_2863_ = l_Lean_stringToMessageData(v___x_2862_);
return v___x_2863_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(lean_object* v_stx_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_){
_start:
{
lean_object* v_val_2879_; lean_object* v___x_2886_; lean_object* v___x_2887_; 
v___x_2886_ = lean_unsigned_to_nat(1u);
v___x_2887_ = l_Lean_Syntax_getArg(v_stx_2864_, v___x_2886_);
switch(lean_obj_tag(v___x_2887_))
{
case 2:
{
lean_object* v_val_2888_; 
lean_dec_ref(v___y_2869_);
lean_dec_ref(v___y_2865_);
lean_dec(v_stx_2864_);
v_val_2888_ = lean_ctor_get(v___x_2887_, 1);
lean_inc_ref(v_val_2888_);
lean_dec_ref(v___x_2887_);
v_val_2879_ = v_val_2888_;
goto v___jp_2878_;
}
case 1:
{
lean_object* v_kind_2889_; 
v_kind_2889_ = lean_ctor_get(v___x_2887_, 1);
lean_inc(v_kind_2889_);
if (lean_obj_tag(v_kind_2889_) == 1)
{
lean_object* v_pre_2890_; 
v_pre_2890_ = lean_ctor_get(v_kind_2889_, 0);
lean_inc(v_pre_2890_);
if (lean_obj_tag(v_pre_2890_) == 1)
{
lean_object* v_pre_2891_; 
v_pre_2891_ = lean_ctor_get(v_pre_2890_, 0);
lean_inc(v_pre_2891_);
if (lean_obj_tag(v_pre_2891_) == 1)
{
lean_object* v_pre_2892_; 
v_pre_2892_ = lean_ctor_get(v_pre_2891_, 0);
lean_inc(v_pre_2892_);
if (lean_obj_tag(v_pre_2892_) == 1)
{
lean_object* v_pre_2893_; 
v_pre_2893_ = lean_ctor_get(v_pre_2892_, 0);
if (lean_obj_tag(v_pre_2893_) == 0)
{
lean_object* v_str_2894_; lean_object* v_str_2895_; lean_object* v_str_2896_; lean_object* v_str_2897_; lean_object* v___x_2898_; uint8_t v___x_2899_; 
v_str_2894_ = lean_ctor_get(v_kind_2889_, 1);
lean_inc_ref(v_str_2894_);
lean_dec_ref(v_kind_2889_);
v_str_2895_ = lean_ctor_get(v_pre_2890_, 1);
lean_inc_ref(v_str_2895_);
lean_dec_ref(v_pre_2890_);
v_str_2896_ = lean_ctor_get(v_pre_2891_, 1);
lean_inc_ref(v_str_2896_);
lean_dec_ref(v_pre_2891_);
v_str_2897_ = lean_ctor_get(v_pre_2892_, 1);
lean_inc_ref(v_str_2897_);
lean_dec_ref(v_pre_2892_);
v___x_2898_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__0));
v___x_2899_ = lean_string_dec_eq(v_str_2897_, v___x_2898_);
lean_dec_ref(v_str_2897_);
if (v___x_2899_ == 0)
{
lean_dec_ref(v_str_2896_);
lean_dec_ref(v_str_2895_);
lean_dec_ref(v_str_2894_);
lean_dec_ref(v___x_2887_);
goto v___jp_2872_;
}
else
{
lean_object* v___x_2900_; uint8_t v___x_2901_; 
v___x_2900_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__1));
v___x_2901_ = lean_string_dec_eq(v_str_2896_, v___x_2900_);
lean_dec_ref(v_str_2896_);
if (v___x_2901_ == 0)
{
lean_dec_ref(v_str_2895_);
lean_dec_ref(v_str_2894_);
lean_dec_ref(v___x_2887_);
goto v___jp_2872_;
}
else
{
lean_object* v___x_2902_; uint8_t v___x_2903_; 
v___x_2902_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__2));
v___x_2903_ = lean_string_dec_eq(v_str_2895_, v___x_2902_);
lean_dec_ref(v_str_2895_);
if (v___x_2903_ == 0)
{
lean_dec_ref(v_str_2894_);
lean_dec_ref(v___x_2887_);
goto v___jp_2872_;
}
else
{
lean_object* v___x_2904_; uint8_t v___x_2905_; 
v___x_2904_ = ((lean_object*)(l_Lean_parseVersoDocString___redArg___closed__5));
v___x_2905_ = lean_string_dec_eq(v_str_2894_, v___x_2904_);
lean_dec_ref(v_str_2894_);
if (v___x_2905_ == 0)
{
lean_dec_ref(v___x_2887_);
goto v___jp_2872_;
}
else
{
lean_object* v___x_2906_; lean_object* v___x_2907_; 
v___x_2906_ = lean_unsigned_to_nat(0u);
v___x_2907_ = l_Lean_Syntax_getArg(v___x_2887_, v___x_2906_);
lean_dec_ref(v___x_2887_);
if (lean_obj_tag(v___x_2907_) == 2)
{
lean_object* v_val_2908_; 
lean_dec_ref(v___y_2869_);
lean_dec_ref(v___y_2865_);
lean_dec(v_stx_2864_);
v_val_2908_ = lean_ctor_get(v___x_2907_, 1);
lean_inc_ref(v_val_2908_);
lean_dec_ref(v___x_2907_);
v_val_2879_ = v_val_2908_;
goto v___jp_2878_;
}
else
{
lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; 
lean_dec(v___x_2907_);
v___x_2909_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1, &l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1);
lean_inc(v_stx_2864_);
v___x_2910_ = l_Lean_MessageData_ofSyntax(v_stx_2864_);
v___x_2911_ = l_Lean_indentD(v___x_2910_);
v___x_2912_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2909_);
lean_ctor_set(v___x_2912_, 1, v___x_2911_);
v___x_2913_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_stx_2864_, v___x_2912_, v___y_2865_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_);
lean_dec(v_stx_2864_);
return v___x_2913_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_pre_2892_);
lean_dec_ref(v_pre_2891_);
lean_dec_ref(v_pre_2890_);
lean_dec_ref(v_kind_2889_);
lean_dec_ref(v___x_2887_);
goto v___jp_2872_;
}
}
else
{
lean_dec(v_pre_2892_);
lean_dec_ref(v_pre_2891_);
lean_dec_ref(v_pre_2890_);
lean_dec_ref(v_kind_2889_);
lean_dec_ref(v___x_2887_);
goto v___jp_2872_;
}
}
else
{
lean_dec_ref(v_pre_2890_);
lean_dec(v_pre_2891_);
lean_dec_ref(v_kind_2889_);
lean_dec_ref(v___x_2887_);
goto v___jp_2872_;
}
}
else
{
lean_dec_ref(v_kind_2889_);
lean_dec(v_pre_2890_);
lean_dec_ref(v___x_2887_);
goto v___jp_2872_;
}
}
else
{
lean_dec_ref(v___x_2887_);
lean_dec(v_kind_2889_);
goto v___jp_2872_;
}
}
default: 
{
lean_dec(v___x_2887_);
goto v___jp_2872_;
}
}
v___jp_2872_:
{
lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; 
v___x_2873_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1, &l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1);
lean_inc(v_stx_2864_);
v___x_2874_ = l_Lean_MessageData_ofSyntax(v_stx_2864_);
v___x_2875_ = l_Lean_indentD(v___x_2874_);
v___x_2876_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2876_, 0, v___x_2873_);
lean_ctor_set(v___x_2876_, 1, v___x_2875_);
v___x_2877_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_stx_2864_, v___x_2876_, v___y_2865_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_);
lean_dec(v_stx_2864_);
return v___x_2877_;
}
v___jp_2878_:
{
lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; 
v___x_2880_ = lean_unsigned_to_nat(0u);
v___x_2881_ = lean_string_utf8_byte_size(v_val_2879_);
v___x_2882_ = lean_unsigned_to_nat(2u);
v___x_2883_ = lean_nat_sub(v___x_2881_, v___x_2882_);
v___x_2884_ = lean_string_utf8_extract(v_val_2879_, v___x_2880_, v___x_2883_);
lean_dec(v___x_2883_);
lean_dec_ref(v_val_2879_);
v___x_2885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2885_, 0, v___x_2884_);
return v___x_2885_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___boxed(lean_object* v_stx_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_){
_start:
{
lean_object* v_res_2922_; 
v_res_2922_ = l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(v_stx_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_);
lean_dec(v___y_2920_);
lean_dec(v___y_2918_);
lean_dec_ref(v___y_2917_);
lean_dec(v___y_2916_);
return v_res_2922_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(lean_object* v_declName_2923_, lean_object* v_docComment_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_){
_start:
{
lean_object* v___y_2933_; lean_object* v___y_2934_; lean_object* v___y_2935_; lean_object* v___y_2936_; lean_object* v___y_2937_; lean_object* v___y_2938_; uint8_t v___x_2995_; 
v___x_2995_ = l_Lean_Name_isAnonymous(v_declName_2923_);
if (v___x_2995_ == 0)
{
lean_object* v___x_2996_; lean_object* v_env_2997_; lean_object* v___x_2998_; 
v___x_2996_ = lean_st_ref_get(v___y_2930_);
v_env_2997_ = lean_ctor_get(v___x_2996_, 0);
lean_inc_ref(v_env_2997_);
lean_dec(v___x_2996_);
v___x_2998_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2997_, v_declName_2923_);
lean_dec_ref(v_env_2997_);
if (lean_obj_tag(v___x_2998_) == 0)
{
v___y_2933_ = v___y_2925_;
v___y_2934_ = v___y_2926_;
v___y_2935_ = v___y_2927_;
v___y_2936_ = v___y_2928_;
v___y_2937_ = v___y_2929_;
v___y_2938_ = v___y_2930_;
goto v___jp_2932_;
}
else
{
lean_dec_ref(v___x_2998_);
if (v___x_2995_ == 0)
{
lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; 
lean_dec(v_docComment_2924_);
v___x_2999_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__1, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1);
v___x_3000_ = l_Lean_MessageData_ofConstName(v_declName_2923_, v___x_2995_);
v___x_3001_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3001_, 0, v___x_2999_);
lean_ctor_set(v___x_3001_, 1, v___x_3000_);
v___x_3002_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_3003_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3003_, 0, v___x_3001_);
lean_ctor_set(v___x_3003_, 1, v___x_3002_);
v___x_3004_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3003_, v___y_2925_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_, v___y_2930_);
lean_dec_ref(v___y_2929_);
return v___x_3004_;
}
else
{
v___y_2933_ = v___y_2925_;
v___y_2934_ = v___y_2926_;
v___y_2935_ = v___y_2927_;
v___y_2936_ = v___y_2928_;
v___y_2937_ = v___y_2929_;
v___y_2938_ = v___y_2930_;
goto v___jp_2932_;
}
}
}
else
{
lean_object* v___x_3005_; lean_object* v___x_3006_; 
lean_dec_ref(v___y_2929_);
lean_dec_ref(v___y_2925_);
lean_dec(v_docComment_2924_);
lean_dec(v_declName_2923_);
v___x_3005_ = lean_box(0);
v___x_3006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3006_, 0, v___x_3005_);
return v___x_3006_;
}
v___jp_2932_:
{
lean_object* v___x_2939_; 
lean_inc_ref(v___y_2937_);
v___x_2939_ = l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(v_docComment_2924_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
if (lean_obj_tag(v___x_2939_) == 0)
{
lean_object* v___x_2940_; 
lean_dec_ref(v___x_2939_);
v___x_2940_ = l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(v_docComment_2924_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
if (lean_obj_tag(v___x_2940_) == 0)
{
lean_object* v_a_2941_; lean_object* v___x_2943_; uint8_t v_isShared_2944_; uint8_t v_isSharedCheck_2986_; 
v_a_2941_ = lean_ctor_get(v___x_2940_, 0);
v_isSharedCheck_2986_ = !lean_is_exclusive(v___x_2940_);
if (v_isSharedCheck_2986_ == 0)
{
v___x_2943_ = v___x_2940_;
v_isShared_2944_ = v_isSharedCheck_2986_;
goto v_resetjp_2942_;
}
else
{
lean_inc(v_a_2941_);
lean_dec(v___x_2940_);
v___x_2943_ = lean_box(0);
v_isShared_2944_ = v_isSharedCheck_2986_;
goto v_resetjp_2942_;
}
v_resetjp_2942_:
{
lean_object* v___x_2945_; lean_object* v_env_2946_; lean_object* v_nextMacroScope_2947_; lean_object* v_ngen_2948_; lean_object* v_auxDeclNGen_2949_; lean_object* v_traceState_2950_; lean_object* v_messages_2951_; lean_object* v_infoState_2952_; lean_object* v_snapshotTasks_2953_; lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_2984_; 
v___x_2945_ = lean_st_ref_take(v___y_2938_);
v_env_2946_ = lean_ctor_get(v___x_2945_, 0);
v_nextMacroScope_2947_ = lean_ctor_get(v___x_2945_, 1);
v_ngen_2948_ = lean_ctor_get(v___x_2945_, 2);
v_auxDeclNGen_2949_ = lean_ctor_get(v___x_2945_, 3);
v_traceState_2950_ = lean_ctor_get(v___x_2945_, 4);
v_messages_2951_ = lean_ctor_get(v___x_2945_, 6);
v_infoState_2952_ = lean_ctor_get(v___x_2945_, 7);
v_snapshotTasks_2953_ = lean_ctor_get(v___x_2945_, 8);
v_isSharedCheck_2984_ = !lean_is_exclusive(v___x_2945_);
if (v_isSharedCheck_2984_ == 0)
{
lean_object* v_unused_2985_; 
v_unused_2985_ = lean_ctor_get(v___x_2945_, 5);
lean_dec(v_unused_2985_);
v___x_2955_ = v___x_2945_;
v_isShared_2956_ = v_isSharedCheck_2984_;
goto v_resetjp_2954_;
}
else
{
lean_inc(v_snapshotTasks_2953_);
lean_inc(v_infoState_2952_);
lean_inc(v_messages_2951_);
lean_inc(v_traceState_2950_);
lean_inc(v_auxDeclNGen_2949_);
lean_inc(v_ngen_2948_);
lean_inc(v_nextMacroScope_2947_);
lean_inc(v_env_2946_);
lean_dec(v___x_2945_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_2984_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2962_; 
v___x_2957_ = l_Lean_docStringExt;
v___x_2958_ = l_String_removeLeadingSpaces(v_a_2941_);
v___x_2959_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2957_, v_env_2946_, v_declName_2923_, v___x_2958_);
v___x_2960_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_2956_ == 0)
{
lean_ctor_set(v___x_2955_, 5, v___x_2960_);
lean_ctor_set(v___x_2955_, 0, v___x_2959_);
v___x_2962_ = v___x_2955_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v___x_2959_);
lean_ctor_set(v_reuseFailAlloc_2983_, 1, v_nextMacroScope_2947_);
lean_ctor_set(v_reuseFailAlloc_2983_, 2, v_ngen_2948_);
lean_ctor_set(v_reuseFailAlloc_2983_, 3, v_auxDeclNGen_2949_);
lean_ctor_set(v_reuseFailAlloc_2983_, 4, v_traceState_2950_);
lean_ctor_set(v_reuseFailAlloc_2983_, 5, v___x_2960_);
lean_ctor_set(v_reuseFailAlloc_2983_, 6, v_messages_2951_);
lean_ctor_set(v_reuseFailAlloc_2983_, 7, v_infoState_2952_);
lean_ctor_set(v_reuseFailAlloc_2983_, 8, v_snapshotTasks_2953_);
v___x_2962_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v_mctx_2965_; lean_object* v_zetaDeltaFVarIds_2966_; lean_object* v_postponed_2967_; lean_object* v_diag_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2981_; 
v___x_2963_ = lean_st_ref_set(v___y_2938_, v___x_2962_);
v___x_2964_ = lean_st_ref_take(v___y_2936_);
v_mctx_2965_ = lean_ctor_get(v___x_2964_, 0);
v_zetaDeltaFVarIds_2966_ = lean_ctor_get(v___x_2964_, 2);
v_postponed_2967_ = lean_ctor_get(v___x_2964_, 3);
v_diag_2968_ = lean_ctor_get(v___x_2964_, 4);
v_isSharedCheck_2981_ = !lean_is_exclusive(v___x_2964_);
if (v_isSharedCheck_2981_ == 0)
{
lean_object* v_unused_2982_; 
v_unused_2982_ = lean_ctor_get(v___x_2964_, 1);
lean_dec(v_unused_2982_);
v___x_2970_ = v___x_2964_;
v_isShared_2971_ = v_isSharedCheck_2981_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_diag_2968_);
lean_inc(v_postponed_2967_);
lean_inc(v_zetaDeltaFVarIds_2966_);
lean_inc(v_mctx_2965_);
lean_dec(v___x_2964_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2981_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2972_; lean_object* v___x_2974_; 
v___x_2972_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_2971_ == 0)
{
lean_ctor_set(v___x_2970_, 1, v___x_2972_);
v___x_2974_ = v___x_2970_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_mctx_2965_);
lean_ctor_set(v_reuseFailAlloc_2980_, 1, v___x_2972_);
lean_ctor_set(v_reuseFailAlloc_2980_, 2, v_zetaDeltaFVarIds_2966_);
lean_ctor_set(v_reuseFailAlloc_2980_, 3, v_postponed_2967_);
lean_ctor_set(v_reuseFailAlloc_2980_, 4, v_diag_2968_);
v___x_2974_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2978_; 
v___x_2975_ = lean_st_ref_set(v___y_2936_, v___x_2974_);
v___x_2976_ = lean_box(0);
if (v_isShared_2944_ == 0)
{
lean_ctor_set(v___x_2943_, 0, v___x_2976_);
v___x_2978_ = v___x_2943_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v___x_2976_);
v___x_2978_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
return v___x_2978_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2987_; lean_object* v___x_2989_; uint8_t v_isShared_2990_; uint8_t v_isSharedCheck_2994_; 
lean_dec(v_declName_2923_);
v_a_2987_ = lean_ctor_get(v___x_2940_, 0);
v_isSharedCheck_2994_ = !lean_is_exclusive(v___x_2940_);
if (v_isSharedCheck_2994_ == 0)
{
v___x_2989_ = v___x_2940_;
v_isShared_2990_ = v_isSharedCheck_2994_;
goto v_resetjp_2988_;
}
else
{
lean_inc(v_a_2987_);
lean_dec(v___x_2940_);
v___x_2989_ = lean_box(0);
v_isShared_2990_ = v_isSharedCheck_2994_;
goto v_resetjp_2988_;
}
v_resetjp_2988_:
{
lean_object* v___x_2992_; 
if (v_isShared_2990_ == 0)
{
v___x_2992_ = v___x_2989_;
goto v_reusejp_2991_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v_a_2987_);
v___x_2992_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2991_;
}
v_reusejp_2991_:
{
return v___x_2992_;
}
}
}
}
else
{
lean_dec_ref(v___y_2937_);
lean_dec_ref(v___y_2933_);
lean_dec(v_docComment_2924_);
lean_dec(v_declName_2923_);
return v___x_2939_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0___boxed(lean_object* v_declName_3007_, lean_object* v_docComment_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_){
_start:
{
lean_object* v_res_3016_; 
v_res_3016_ = l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(v_declName_3007_, v_docComment_3008_, v___y_3009_, v___y_3010_, v___y_3011_, v___y_3012_, v___y_3013_, v___y_3014_);
lean_dec(v___y_3014_);
lean_dec(v___y_3012_);
lean_dec_ref(v___y_3011_);
lean_dec(v___y_3010_);
return v_res_3016_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringOf(uint8_t v_isVerso_3017_, lean_object* v_declName_3018_, lean_object* v_binders_3019_, lean_object* v_docComment_3020_, lean_object* v_a_3021_, lean_object* v_a_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_){
_start:
{
if (v_isVerso_3017_ == 0)
{
lean_object* v___x_3028_; 
lean_dec(v_binders_3019_);
v___x_3028_ = l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(v_declName_3018_, v_docComment_3020_, v_a_3021_, v_a_3022_, v_a_3023_, v_a_3024_, v_a_3025_, v_a_3026_);
lean_dec(v_a_3026_);
lean_dec(v_a_3024_);
lean_dec_ref(v_a_3023_);
lean_dec(v_a_3022_);
return v___x_3028_;
}
else
{
lean_object* v___x_3029_; 
v___x_3029_ = l_Lean_addVersoDocString(v_declName_3018_, v_binders_3019_, v_docComment_3020_, v_a_3021_, v_a_3022_, v_a_3023_, v_a_3024_, v_a_3025_, v_a_3026_);
return v___x_3029_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringOf___boxed(lean_object* v_isVerso_3030_, lean_object* v_declName_3031_, lean_object* v_binders_3032_, lean_object* v_docComment_3033_, lean_object* v_a_3034_, lean_object* v_a_3035_, lean_object* v_a_3036_, lean_object* v_a_3037_, lean_object* v_a_3038_, lean_object* v_a_3039_, lean_object* v_a_3040_){
_start:
{
uint8_t v_isVerso_boxed_3041_; lean_object* v_res_3042_; 
v_isVerso_boxed_3041_ = lean_unbox(v_isVerso_3030_);
v_res_3042_ = l_Lean_addDocStringOf(v_isVerso_boxed_3041_, v_declName_3031_, v_binders_3032_, v_docComment_3033_, v_a_3034_, v_a_3035_, v_a_3036_, v_a_3037_, v_a_3038_, v_a_3039_);
return v_res_3042_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(lean_object* v_ref_3043_, lean_object* v_msgData_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_){
_start:
{
lean_object* v___x_3052_; 
v___x_3052_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v_ref_3043_, v_msgData_3044_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_);
return v___x_3052_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_3053_, lean_object* v_msgData_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_){
_start:
{
lean_object* v_res_3062_; 
v_res_3062_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(v_ref_3053_, v_msgData_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_);
lean_dec(v___y_3060_);
lean_dec(v___y_3058_);
lean_dec_ref(v___y_3057_);
lean_dec(v___y_3056_);
lean_dec_ref(v___y_3055_);
lean_dec(v_ref_3053_);
return v_res_3062_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(lean_object* v_k_3063_, lean_object* v_t_3064_){
_start:
{
if (lean_obj_tag(v_t_3064_) == 0)
{
lean_object* v_k_3065_; lean_object* v_v_3066_; lean_object* v_l_3067_; lean_object* v_r_3068_; lean_object* v___x_3070_; uint8_t v_isShared_3071_; uint8_t v_isSharedCheck_3722_; 
v_k_3065_ = lean_ctor_get(v_t_3064_, 1);
v_v_3066_ = lean_ctor_get(v_t_3064_, 2);
v_l_3067_ = lean_ctor_get(v_t_3064_, 3);
v_r_3068_ = lean_ctor_get(v_t_3064_, 4);
v_isSharedCheck_3722_ = !lean_is_exclusive(v_t_3064_);
if (v_isSharedCheck_3722_ == 0)
{
lean_object* v_unused_3723_; 
v_unused_3723_ = lean_ctor_get(v_t_3064_, 0);
lean_dec(v_unused_3723_);
v___x_3070_ = v_t_3064_;
v_isShared_3071_ = v_isSharedCheck_3722_;
goto v_resetjp_3069_;
}
else
{
lean_inc(v_r_3068_);
lean_inc(v_l_3067_);
lean_inc(v_v_3066_);
lean_inc(v_k_3065_);
lean_dec(v_t_3064_);
v___x_3070_ = lean_box(0);
v_isShared_3071_ = v_isSharedCheck_3722_;
goto v_resetjp_3069_;
}
v_resetjp_3069_:
{
uint8_t v___x_3072_; 
v___x_3072_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3063_, v_k_3065_);
switch(v___x_3072_)
{
case 0:
{
lean_object* v_impl_3073_; lean_object* v___x_3074_; 
v_impl_3073_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_3063_, v_l_3067_);
v___x_3074_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_3073_) == 0)
{
if (lean_obj_tag(v_r_3068_) == 0)
{
lean_object* v_size_3075_; lean_object* v_size_3076_; lean_object* v_k_3077_; lean_object* v_v_3078_; lean_object* v_l_3079_; lean_object* v_r_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; uint8_t v___x_3083_; 
v_size_3075_ = lean_ctor_get(v_impl_3073_, 0);
lean_inc(v_size_3075_);
v_size_3076_ = lean_ctor_get(v_r_3068_, 0);
v_k_3077_ = lean_ctor_get(v_r_3068_, 1);
v_v_3078_ = lean_ctor_get(v_r_3068_, 2);
v_l_3079_ = lean_ctor_get(v_r_3068_, 3);
lean_inc(v_l_3079_);
v_r_3080_ = lean_ctor_get(v_r_3068_, 4);
v___x_3081_ = lean_unsigned_to_nat(3u);
v___x_3082_ = lean_nat_mul(v___x_3081_, v_size_3075_);
v___x_3083_ = lean_nat_dec_lt(v___x_3082_, v_size_3076_);
lean_dec(v___x_3082_);
if (v___x_3083_ == 0)
{
lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3087_; 
lean_dec(v_l_3079_);
v___x_3084_ = lean_nat_add(v___x_3074_, v_size_3075_);
lean_dec(v_size_3075_);
v___x_3085_ = lean_nat_add(v___x_3084_, v_size_3076_);
lean_dec(v___x_3084_);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 3, v_impl_3073_);
lean_ctor_set(v___x_3070_, 0, v___x_3085_);
v___x_3087_ = v___x_3070_;
goto v_reusejp_3086_;
}
else
{
lean_object* v_reuseFailAlloc_3088_; 
v_reuseFailAlloc_3088_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3088_, 0, v___x_3085_);
lean_ctor_set(v_reuseFailAlloc_3088_, 1, v_k_3065_);
lean_ctor_set(v_reuseFailAlloc_3088_, 2, v_v_3066_);
lean_ctor_set(v_reuseFailAlloc_3088_, 3, v_impl_3073_);
lean_ctor_set(v_reuseFailAlloc_3088_, 4, v_r_3068_);
v___x_3087_ = v_reuseFailAlloc_3088_;
goto v_reusejp_3086_;
}
v_reusejp_3086_:
{
return v___x_3087_;
}
}
else
{
lean_object* v___x_3090_; uint8_t v_isShared_3091_; uint8_t v_isSharedCheck_3152_; 
lean_inc(v_r_3080_);
lean_inc(v_v_3078_);
lean_inc(v_k_3077_);
lean_inc(v_size_3076_);
v_isSharedCheck_3152_ = !lean_is_exclusive(v_r_3068_);
if (v_isSharedCheck_3152_ == 0)
{
lean_object* v_unused_3153_; lean_object* v_unused_3154_; lean_object* v_unused_3155_; lean_object* v_unused_3156_; lean_object* v_unused_3157_; 
v_unused_3153_ = lean_ctor_get(v_r_3068_, 4);
lean_dec(v_unused_3153_);
v_unused_3154_ = lean_ctor_get(v_r_3068_, 3);
lean_dec(v_unused_3154_);
v_unused_3155_ = lean_ctor_get(v_r_3068_, 2);
lean_dec(v_unused_3155_);
v_unused_3156_ = lean_ctor_get(v_r_3068_, 1);
lean_dec(v_unused_3156_);
v_unused_3157_ = lean_ctor_get(v_r_3068_, 0);
lean_dec(v_unused_3157_);
v___x_3090_ = v_r_3068_;
v_isShared_3091_ = v_isSharedCheck_3152_;
goto v_resetjp_3089_;
}
else
{
lean_dec(v_r_3068_);
v___x_3090_ = lean_box(0);
v_isShared_3091_ = v_isSharedCheck_3152_;
goto v_resetjp_3089_;
}
v_resetjp_3089_:
{
lean_object* v_size_3092_; lean_object* v_k_3093_; lean_object* v_v_3094_; lean_object* v_l_3095_; lean_object* v_r_3096_; lean_object* v_size_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; uint8_t v___x_3100_; 
v_size_3092_ = lean_ctor_get(v_l_3079_, 0);
v_k_3093_ = lean_ctor_get(v_l_3079_, 1);
v_v_3094_ = lean_ctor_get(v_l_3079_, 2);
v_l_3095_ = lean_ctor_get(v_l_3079_, 3);
v_r_3096_ = lean_ctor_get(v_l_3079_, 4);
v_size_3097_ = lean_ctor_get(v_r_3080_, 0);
v___x_3098_ = lean_unsigned_to_nat(2u);
v___x_3099_ = lean_nat_mul(v___x_3098_, v_size_3097_);
v___x_3100_ = lean_nat_dec_lt(v_size_3092_, v___x_3099_);
lean_dec(v___x_3099_);
if (v___x_3100_ == 0)
{
lean_object* v___x_3102_; uint8_t v_isShared_3103_; uint8_t v_isSharedCheck_3128_; 
lean_inc(v_r_3096_);
lean_inc(v_l_3095_);
lean_inc(v_v_3094_);
lean_inc(v_k_3093_);
v_isSharedCheck_3128_ = !lean_is_exclusive(v_l_3079_);
if (v_isSharedCheck_3128_ == 0)
{
lean_object* v_unused_3129_; lean_object* v_unused_3130_; lean_object* v_unused_3131_; lean_object* v_unused_3132_; lean_object* v_unused_3133_; 
v_unused_3129_ = lean_ctor_get(v_l_3079_, 4);
lean_dec(v_unused_3129_);
v_unused_3130_ = lean_ctor_get(v_l_3079_, 3);
lean_dec(v_unused_3130_);
v_unused_3131_ = lean_ctor_get(v_l_3079_, 2);
lean_dec(v_unused_3131_);
v_unused_3132_ = lean_ctor_get(v_l_3079_, 1);
lean_dec(v_unused_3132_);
v_unused_3133_ = lean_ctor_get(v_l_3079_, 0);
lean_dec(v_unused_3133_);
v___x_3102_ = v_l_3079_;
v_isShared_3103_ = v_isSharedCheck_3128_;
goto v_resetjp_3101_;
}
else
{
lean_dec(v_l_3079_);
v___x_3102_ = lean_box(0);
v_isShared_3103_ = v_isSharedCheck_3128_;
goto v_resetjp_3101_;
}
v_resetjp_3101_:
{
lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___y_3107_; lean_object* v___y_3108_; lean_object* v___y_3109_; lean_object* v___y_3118_; 
v___x_3104_ = lean_nat_add(v___x_3074_, v_size_3075_);
lean_dec(v_size_3075_);
v___x_3105_ = lean_nat_add(v___x_3104_, v_size_3076_);
lean_dec(v_size_3076_);
if (lean_obj_tag(v_l_3095_) == 0)
{
lean_object* v_size_3126_; 
v_size_3126_ = lean_ctor_get(v_l_3095_, 0);
lean_inc(v_size_3126_);
v___y_3118_ = v_size_3126_;
goto v___jp_3117_;
}
else
{
lean_object* v___x_3127_; 
v___x_3127_ = lean_unsigned_to_nat(0u);
v___y_3118_ = v___x_3127_;
goto v___jp_3117_;
}
v___jp_3106_:
{
lean_object* v___x_3110_; lean_object* v___x_3112_; 
v___x_3110_ = lean_nat_add(v___y_3107_, v___y_3109_);
lean_dec(v___y_3109_);
lean_dec(v___y_3107_);
if (v_isShared_3103_ == 0)
{
lean_ctor_set(v___x_3102_, 4, v_r_3080_);
lean_ctor_set(v___x_3102_, 3, v_r_3096_);
lean_ctor_set(v___x_3102_, 2, v_v_3078_);
lean_ctor_set(v___x_3102_, 1, v_k_3077_);
lean_ctor_set(v___x_3102_, 0, v___x_3110_);
v___x_3112_ = v___x_3102_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3116_; 
v_reuseFailAlloc_3116_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3116_, 0, v___x_3110_);
lean_ctor_set(v_reuseFailAlloc_3116_, 1, v_k_3077_);
lean_ctor_set(v_reuseFailAlloc_3116_, 2, v_v_3078_);
lean_ctor_set(v_reuseFailAlloc_3116_, 3, v_r_3096_);
lean_ctor_set(v_reuseFailAlloc_3116_, 4, v_r_3080_);
v___x_3112_ = v_reuseFailAlloc_3116_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
lean_object* v___x_3114_; 
if (v_isShared_3091_ == 0)
{
lean_ctor_set(v___x_3090_, 4, v___x_3112_);
lean_ctor_set(v___x_3090_, 3, v___y_3108_);
lean_ctor_set(v___x_3090_, 2, v_v_3094_);
lean_ctor_set(v___x_3090_, 1, v_k_3093_);
lean_ctor_set(v___x_3090_, 0, v___x_3105_);
v___x_3114_ = v___x_3090_;
goto v_reusejp_3113_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v___x_3105_);
lean_ctor_set(v_reuseFailAlloc_3115_, 1, v_k_3093_);
lean_ctor_set(v_reuseFailAlloc_3115_, 2, v_v_3094_);
lean_ctor_set(v_reuseFailAlloc_3115_, 3, v___y_3108_);
lean_ctor_set(v_reuseFailAlloc_3115_, 4, v___x_3112_);
v___x_3114_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3113_;
}
v_reusejp_3113_:
{
return v___x_3114_;
}
}
}
v___jp_3117_:
{
lean_object* v___x_3119_; lean_object* v___x_3121_; 
v___x_3119_ = lean_nat_add(v___x_3104_, v___y_3118_);
lean_dec(v___y_3118_);
lean_dec(v___x_3104_);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 4, v_l_3095_);
lean_ctor_set(v___x_3070_, 3, v_impl_3073_);
lean_ctor_set(v___x_3070_, 0, v___x_3119_);
v___x_3121_ = v___x_3070_;
goto v_reusejp_3120_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v___x_3119_);
lean_ctor_set(v_reuseFailAlloc_3125_, 1, v_k_3065_);
lean_ctor_set(v_reuseFailAlloc_3125_, 2, v_v_3066_);
lean_ctor_set(v_reuseFailAlloc_3125_, 3, v_impl_3073_);
lean_ctor_set(v_reuseFailAlloc_3125_, 4, v_l_3095_);
v___x_3121_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3120_;
}
v_reusejp_3120_:
{
lean_object* v___x_3122_; 
v___x_3122_ = lean_nat_add(v___x_3074_, v_size_3097_);
if (lean_obj_tag(v_r_3096_) == 0)
{
lean_object* v_size_3123_; 
v_size_3123_ = lean_ctor_get(v_r_3096_, 0);
lean_inc(v_size_3123_);
v___y_3107_ = v___x_3122_;
v___y_3108_ = v___x_3121_;
v___y_3109_ = v_size_3123_;
goto v___jp_3106_;
}
else
{
lean_object* v___x_3124_; 
v___x_3124_ = lean_unsigned_to_nat(0u);
v___y_3107_ = v___x_3122_;
v___y_3108_ = v___x_3121_;
v___y_3109_ = v___x_3124_;
goto v___jp_3106_;
}
}
}
}
}
else
{
lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3138_; 
lean_del_object(v___x_3070_);
v___x_3134_ = lean_nat_add(v___x_3074_, v_size_3075_);
lean_dec(v_size_3075_);
v___x_3135_ = lean_nat_add(v___x_3134_, v_size_3076_);
lean_dec(v_size_3076_);
v___x_3136_ = lean_nat_add(v___x_3134_, v_size_3092_);
lean_dec(v___x_3134_);
lean_inc_ref(v_impl_3073_);
if (v_isShared_3091_ == 0)
{
lean_ctor_set(v___x_3090_, 4, v_l_3079_);
lean_ctor_set(v___x_3090_, 3, v_impl_3073_);
lean_ctor_set(v___x_3090_, 2, v_v_3066_);
lean_ctor_set(v___x_3090_, 1, v_k_3065_);
lean_ctor_set(v___x_3090_, 0, v___x_3136_);
v___x_3138_ = v___x_3090_;
goto v_reusejp_3137_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v___x_3136_);
lean_ctor_set(v_reuseFailAlloc_3151_, 1, v_k_3065_);
lean_ctor_set(v_reuseFailAlloc_3151_, 2, v_v_3066_);
lean_ctor_set(v_reuseFailAlloc_3151_, 3, v_impl_3073_);
lean_ctor_set(v_reuseFailAlloc_3151_, 4, v_l_3079_);
v___x_3138_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3137_;
}
v_reusejp_3137_:
{
lean_object* v___x_3140_; uint8_t v_isShared_3141_; uint8_t v_isSharedCheck_3145_; 
v_isSharedCheck_3145_ = !lean_is_exclusive(v_impl_3073_);
if (v_isSharedCheck_3145_ == 0)
{
lean_object* v_unused_3146_; lean_object* v_unused_3147_; lean_object* v_unused_3148_; lean_object* v_unused_3149_; lean_object* v_unused_3150_; 
v_unused_3146_ = lean_ctor_get(v_impl_3073_, 4);
lean_dec(v_unused_3146_);
v_unused_3147_ = lean_ctor_get(v_impl_3073_, 3);
lean_dec(v_unused_3147_);
v_unused_3148_ = lean_ctor_get(v_impl_3073_, 2);
lean_dec(v_unused_3148_);
v_unused_3149_ = lean_ctor_get(v_impl_3073_, 1);
lean_dec(v_unused_3149_);
v_unused_3150_ = lean_ctor_get(v_impl_3073_, 0);
lean_dec(v_unused_3150_);
v___x_3140_ = v_impl_3073_;
v_isShared_3141_ = v_isSharedCheck_3145_;
goto v_resetjp_3139_;
}
else
{
lean_dec(v_impl_3073_);
v___x_3140_ = lean_box(0);
v_isShared_3141_ = v_isSharedCheck_3145_;
goto v_resetjp_3139_;
}
v_resetjp_3139_:
{
lean_object* v___x_3143_; 
if (v_isShared_3141_ == 0)
{
lean_ctor_set(v___x_3140_, 4, v_r_3080_);
lean_ctor_set(v___x_3140_, 3, v___x_3138_);
lean_ctor_set(v___x_3140_, 2, v_v_3078_);
lean_ctor_set(v___x_3140_, 1, v_k_3077_);
lean_ctor_set(v___x_3140_, 0, v___x_3135_);
v___x_3143_ = v___x_3140_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3144_; 
v_reuseFailAlloc_3144_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3144_, 0, v___x_3135_);
lean_ctor_set(v_reuseFailAlloc_3144_, 1, v_k_3077_);
lean_ctor_set(v_reuseFailAlloc_3144_, 2, v_v_3078_);
lean_ctor_set(v_reuseFailAlloc_3144_, 3, v___x_3138_);
lean_ctor_set(v_reuseFailAlloc_3144_, 4, v_r_3080_);
v___x_3143_ = v_reuseFailAlloc_3144_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
return v___x_3143_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_3158_; lean_object* v___x_3159_; lean_object* v___x_3161_; 
v_size_3158_ = lean_ctor_get(v_impl_3073_, 0);
lean_inc(v_size_3158_);
v___x_3159_ = lean_nat_add(v___x_3074_, v_size_3158_);
lean_dec(v_size_3158_);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 3, v_impl_3073_);
lean_ctor_set(v___x_3070_, 0, v___x_3159_);
v___x_3161_ = v___x_3070_;
goto v_reusejp_3160_;
}
else
{
lean_object* v_reuseFailAlloc_3162_; 
v_reuseFailAlloc_3162_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3162_, 0, v___x_3159_);
lean_ctor_set(v_reuseFailAlloc_3162_, 1, v_k_3065_);
lean_ctor_set(v_reuseFailAlloc_3162_, 2, v_v_3066_);
lean_ctor_set(v_reuseFailAlloc_3162_, 3, v_impl_3073_);
lean_ctor_set(v_reuseFailAlloc_3162_, 4, v_r_3068_);
v___x_3161_ = v_reuseFailAlloc_3162_;
goto v_reusejp_3160_;
}
v_reusejp_3160_:
{
return v___x_3161_;
}
}
}
else
{
if (lean_obj_tag(v_r_3068_) == 0)
{
lean_object* v_l_3163_; 
v_l_3163_ = lean_ctor_get(v_r_3068_, 3);
lean_inc(v_l_3163_);
if (lean_obj_tag(v_l_3163_) == 0)
{
lean_object* v_r_3164_; 
v_r_3164_ = lean_ctor_get(v_r_3068_, 4);
lean_inc(v_r_3164_);
if (lean_obj_tag(v_r_3164_) == 0)
{
lean_object* v_size_3165_; lean_object* v_k_3166_; lean_object* v_v_3167_; lean_object* v___x_3169_; uint8_t v_isShared_3170_; uint8_t v_isSharedCheck_3180_; 
v_size_3165_ = lean_ctor_get(v_r_3068_, 0);
v_k_3166_ = lean_ctor_get(v_r_3068_, 1);
v_v_3167_ = lean_ctor_get(v_r_3068_, 2);
v_isSharedCheck_3180_ = !lean_is_exclusive(v_r_3068_);
if (v_isSharedCheck_3180_ == 0)
{
lean_object* v_unused_3181_; lean_object* v_unused_3182_; 
v_unused_3181_ = lean_ctor_get(v_r_3068_, 4);
lean_dec(v_unused_3181_);
v_unused_3182_ = lean_ctor_get(v_r_3068_, 3);
lean_dec(v_unused_3182_);
v___x_3169_ = v_r_3068_;
v_isShared_3170_ = v_isSharedCheck_3180_;
goto v_resetjp_3168_;
}
else
{
lean_inc(v_v_3167_);
lean_inc(v_k_3166_);
lean_inc(v_size_3165_);
lean_dec(v_r_3068_);
v___x_3169_ = lean_box(0);
v_isShared_3170_ = v_isSharedCheck_3180_;
goto v_resetjp_3168_;
}
v_resetjp_3168_:
{
lean_object* v_size_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3175_; 
v_size_3171_ = lean_ctor_get(v_l_3163_, 0);
v___x_3172_ = lean_nat_add(v___x_3074_, v_size_3165_);
lean_dec(v_size_3165_);
v___x_3173_ = lean_nat_add(v___x_3074_, v_size_3171_);
if (v_isShared_3170_ == 0)
{
lean_ctor_set(v___x_3169_, 4, v_l_3163_);
lean_ctor_set(v___x_3169_, 3, v_impl_3073_);
lean_ctor_set(v___x_3169_, 2, v_v_3066_);
lean_ctor_set(v___x_3169_, 1, v_k_3065_);
lean_ctor_set(v___x_3169_, 0, v___x_3173_);
v___x_3175_ = v___x_3169_;
goto v_reusejp_3174_;
}
else
{
lean_object* v_reuseFailAlloc_3179_; 
v_reuseFailAlloc_3179_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3179_, 0, v___x_3173_);
lean_ctor_set(v_reuseFailAlloc_3179_, 1, v_k_3065_);
lean_ctor_set(v_reuseFailAlloc_3179_, 2, v_v_3066_);
lean_ctor_set(v_reuseFailAlloc_3179_, 3, v_impl_3073_);
lean_ctor_set(v_reuseFailAlloc_3179_, 4, v_l_3163_);
v___x_3175_ = v_reuseFailAlloc_3179_;
goto v_reusejp_3174_;
}
v_reusejp_3174_:
{
lean_object* v___x_3177_; 
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 4, v_r_3164_);
lean_ctor_set(v___x_3070_, 3, v___x_3175_);
lean_ctor_set(v___x_3070_, 2, v_v_3167_);
lean_ctor_set(v___x_3070_, 1, v_k_3166_);
lean_ctor_set(v___x_3070_, 0, v___x_3172_);
v___x_3177_ = v___x_3070_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3178_; 
v_reuseFailAlloc_3178_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3178_, 0, v___x_3172_);
lean_ctor_set(v_reuseFailAlloc_3178_, 1, v_k_3166_);
lean_ctor_set(v_reuseFailAlloc_3178_, 2, v_v_3167_);
lean_ctor_set(v_reuseFailAlloc_3178_, 3, v___x_3175_);
lean_ctor_set(v_reuseFailAlloc_3178_, 4, v_r_3164_);
v___x_3177_ = v_reuseFailAlloc_3178_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
return v___x_3177_;
}
}
}
}
else
{
lean_object* v_k_3183_; lean_object* v_v_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3207_; 
v_k_3183_ = lean_ctor_get(v_r_3068_, 1);
v_v_3184_ = lean_ctor_get(v_r_3068_, 2);
v_isSharedCheck_3207_ = !lean_is_exclusive(v_r_3068_);
if (v_isSharedCheck_3207_ == 0)
{
lean_object* v_unused_3208_; lean_object* v_unused_3209_; lean_object* v_unused_3210_; 
v_unused_3208_ = lean_ctor_get(v_r_3068_, 4);
lean_dec(v_unused_3208_);
v_unused_3209_ = lean_ctor_get(v_r_3068_, 3);
lean_dec(v_unused_3209_);
v_unused_3210_ = lean_ctor_get(v_r_3068_, 0);
lean_dec(v_unused_3210_);
v___x_3186_ = v_r_3068_;
v_isShared_3187_ = v_isSharedCheck_3207_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_v_3184_);
lean_inc(v_k_3183_);
lean_dec(v_r_3068_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3207_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v_k_3188_; lean_object* v_v_3189_; lean_object* v___x_3191_; uint8_t v_isShared_3192_; uint8_t v_isSharedCheck_3203_; 
v_k_3188_ = lean_ctor_get(v_l_3163_, 1);
v_v_3189_ = lean_ctor_get(v_l_3163_, 2);
v_isSharedCheck_3203_ = !lean_is_exclusive(v_l_3163_);
if (v_isSharedCheck_3203_ == 0)
{
lean_object* v_unused_3204_; lean_object* v_unused_3205_; lean_object* v_unused_3206_; 
v_unused_3204_ = lean_ctor_get(v_l_3163_, 4);
lean_dec(v_unused_3204_);
v_unused_3205_ = lean_ctor_get(v_l_3163_, 3);
lean_dec(v_unused_3205_);
v_unused_3206_ = lean_ctor_get(v_l_3163_, 0);
lean_dec(v_unused_3206_);
v___x_3191_ = v_l_3163_;
v_isShared_3192_ = v_isSharedCheck_3203_;
goto v_resetjp_3190_;
}
else
{
lean_inc(v_v_3189_);
lean_inc(v_k_3188_);
lean_dec(v_l_3163_);
v___x_3191_ = lean_box(0);
v_isShared_3192_ = v_isSharedCheck_3203_;
goto v_resetjp_3190_;
}
v_resetjp_3190_:
{
lean_object* v___x_3193_; lean_object* v___x_3195_; 
v___x_3193_ = lean_unsigned_to_nat(3u);
if (v_isShared_3192_ == 0)
{
lean_ctor_set(v___x_3191_, 4, v_r_3164_);
lean_ctor_set(v___x_3191_, 3, v_r_3164_);
lean_ctor_set(v___x_3191_, 2, v_v_3066_);
lean_ctor_set(v___x_3191_, 1, v_k_3065_);
lean_ctor_set(v___x_3191_, 0, v___x_3074_);
v___x_3195_ = v___x_3191_;
goto v_reusejp_3194_;
}
else
{
lean_object* v_reuseFailAlloc_3202_; 
v_reuseFailAlloc_3202_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3202_, 0, v___x_3074_);
lean_ctor_set(v_reuseFailAlloc_3202_, 1, v_k_3065_);
lean_ctor_set(v_reuseFailAlloc_3202_, 2, v_v_3066_);
lean_ctor_set(v_reuseFailAlloc_3202_, 3, v_r_3164_);
lean_ctor_set(v_reuseFailAlloc_3202_, 4, v_r_3164_);
v___x_3195_ = v_reuseFailAlloc_3202_;
goto v_reusejp_3194_;
}
v_reusejp_3194_:
{
lean_object* v___x_3197_; 
if (v_isShared_3187_ == 0)
{
lean_ctor_set(v___x_3186_, 3, v_r_3164_);
lean_ctor_set(v___x_3186_, 0, v___x_3074_);
v___x_3197_ = v___x_3186_;
goto v_reusejp_3196_;
}
else
{
lean_object* v_reuseFailAlloc_3201_; 
v_reuseFailAlloc_3201_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3201_, 0, v___x_3074_);
lean_ctor_set(v_reuseFailAlloc_3201_, 1, v_k_3183_);
lean_ctor_set(v_reuseFailAlloc_3201_, 2, v_v_3184_);
lean_ctor_set(v_reuseFailAlloc_3201_, 3, v_r_3164_);
lean_ctor_set(v_reuseFailAlloc_3201_, 4, v_r_3164_);
v___x_3197_ = v_reuseFailAlloc_3201_;
goto v_reusejp_3196_;
}
v_reusejp_3196_:
{
lean_object* v___x_3199_; 
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 4, v___x_3197_);
lean_ctor_set(v___x_3070_, 3, v___x_3195_);
lean_ctor_set(v___x_3070_, 2, v_v_3189_);
lean_ctor_set(v___x_3070_, 1, v_k_3188_);
lean_ctor_set(v___x_3070_, 0, v___x_3193_);
v___x_3199_ = v___x_3070_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v___x_3193_);
lean_ctor_set(v_reuseFailAlloc_3200_, 1, v_k_3188_);
lean_ctor_set(v_reuseFailAlloc_3200_, 2, v_v_3189_);
lean_ctor_set(v_reuseFailAlloc_3200_, 3, v___x_3195_);
lean_ctor_set(v_reuseFailAlloc_3200_, 4, v___x_3197_);
v___x_3199_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
return v___x_3199_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_3211_; 
v_r_3211_ = lean_ctor_get(v_r_3068_, 4);
lean_inc(v_r_3211_);
if (lean_obj_tag(v_r_3211_) == 0)
{
lean_object* v_k_3212_; lean_object* v_v_3213_; lean_object* v___x_3215_; uint8_t v_isShared_3216_; uint8_t v_isSharedCheck_3224_; 
v_k_3212_ = lean_ctor_get(v_r_3068_, 1);
v_v_3213_ = lean_ctor_get(v_r_3068_, 2);
v_isSharedCheck_3224_ = !lean_is_exclusive(v_r_3068_);
if (v_isSharedCheck_3224_ == 0)
{
lean_object* v_unused_3225_; lean_object* v_unused_3226_; lean_object* v_unused_3227_; 
v_unused_3225_ = lean_ctor_get(v_r_3068_, 4);
lean_dec(v_unused_3225_);
v_unused_3226_ = lean_ctor_get(v_r_3068_, 3);
lean_dec(v_unused_3226_);
v_unused_3227_ = lean_ctor_get(v_r_3068_, 0);
lean_dec(v_unused_3227_);
v___x_3215_ = v_r_3068_;
v_isShared_3216_ = v_isSharedCheck_3224_;
goto v_resetjp_3214_;
}
else
{
lean_inc(v_v_3213_);
lean_inc(v_k_3212_);
lean_dec(v_r_3068_);
v___x_3215_ = lean_box(0);
v_isShared_3216_ = v_isSharedCheck_3224_;
goto v_resetjp_3214_;
}
v_resetjp_3214_:
{
lean_object* v___x_3217_; lean_object* v___x_3219_; 
v___x_3217_ = lean_unsigned_to_nat(3u);
if (v_isShared_3216_ == 0)
{
lean_ctor_set(v___x_3215_, 4, v_l_3163_);
lean_ctor_set(v___x_3215_, 2, v_v_3066_);
lean_ctor_set(v___x_3215_, 1, v_k_3065_);
lean_ctor_set(v___x_3215_, 0, v___x_3074_);
v___x_3219_ = v___x_3215_;
goto v_reusejp_3218_;
}
else
{
lean_object* v_reuseFailAlloc_3223_; 
v_reuseFailAlloc_3223_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3223_, 0, v___x_3074_);
lean_ctor_set(v_reuseFailAlloc_3223_, 1, v_k_3065_);
lean_ctor_set(v_reuseFailAlloc_3223_, 2, v_v_3066_);
lean_ctor_set(v_reuseFailAlloc_3223_, 3, v_l_3163_);
lean_ctor_set(v_reuseFailAlloc_3223_, 4, v_l_3163_);
v___x_3219_ = v_reuseFailAlloc_3223_;
goto v_reusejp_3218_;
}
v_reusejp_3218_:
{
lean_object* v___x_3221_; 
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 4, v_r_3211_);
lean_ctor_set(v___x_3070_, 3, v___x_3219_);
lean_ctor_set(v___x_3070_, 2, v_v_3213_);
lean_ctor_set(v___x_3070_, 1, v_k_3212_);
lean_ctor_set(v___x_3070_, 0, v___x_3217_);
v___x_3221_ = v___x_3070_;
goto v_reusejp_3220_;
}
else
{
lean_object* v_reuseFailAlloc_3222_; 
v_reuseFailAlloc_3222_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3222_, 0, v___x_3217_);
lean_ctor_set(v_reuseFailAlloc_3222_, 1, v_k_3212_);
lean_ctor_set(v_reuseFailAlloc_3222_, 2, v_v_3213_);
lean_ctor_set(v_reuseFailAlloc_3222_, 3, v___x_3219_);
lean_ctor_set(v_reuseFailAlloc_3222_, 4, v_r_3211_);
v___x_3221_ = v_reuseFailAlloc_3222_;
goto v_reusejp_3220_;
}
v_reusejp_3220_:
{
return v___x_3221_;
}
}
}
}
else
{
lean_object* v_size_3228_; lean_object* v_k_3229_; lean_object* v_v_3230_; lean_object* v___x_3232_; uint8_t v_isShared_3233_; uint8_t v_isSharedCheck_3241_; 
v_size_3228_ = lean_ctor_get(v_r_3068_, 0);
v_k_3229_ = lean_ctor_get(v_r_3068_, 1);
v_v_3230_ = lean_ctor_get(v_r_3068_, 2);
v_isSharedCheck_3241_ = !lean_is_exclusive(v_r_3068_);
if (v_isSharedCheck_3241_ == 0)
{
lean_object* v_unused_3242_; lean_object* v_unused_3243_; 
v_unused_3242_ = lean_ctor_get(v_r_3068_, 4);
lean_dec(v_unused_3242_);
v_unused_3243_ = lean_ctor_get(v_r_3068_, 3);
lean_dec(v_unused_3243_);
v___x_3232_ = v_r_3068_;
v_isShared_3233_ = v_isSharedCheck_3241_;
goto v_resetjp_3231_;
}
else
{
lean_inc(v_v_3230_);
lean_inc(v_k_3229_);
lean_inc(v_size_3228_);
lean_dec(v_r_3068_);
v___x_3232_ = lean_box(0);
v_isShared_3233_ = v_isSharedCheck_3241_;
goto v_resetjp_3231_;
}
v_resetjp_3231_:
{
lean_object* v___x_3235_; 
if (v_isShared_3233_ == 0)
{
lean_ctor_set(v___x_3232_, 3, v_r_3211_);
v___x_3235_ = v___x_3232_;
goto v_reusejp_3234_;
}
else
{
lean_object* v_reuseFailAlloc_3240_; 
v_reuseFailAlloc_3240_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3240_, 0, v_size_3228_);
lean_ctor_set(v_reuseFailAlloc_3240_, 1, v_k_3229_);
lean_ctor_set(v_reuseFailAlloc_3240_, 2, v_v_3230_);
lean_ctor_set(v_reuseFailAlloc_3240_, 3, v_r_3211_);
lean_ctor_set(v_reuseFailAlloc_3240_, 4, v_r_3211_);
v___x_3235_ = v_reuseFailAlloc_3240_;
goto v_reusejp_3234_;
}
v_reusejp_3234_:
{
lean_object* v___x_3236_; lean_object* v___x_3238_; 
v___x_3236_ = lean_unsigned_to_nat(2u);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 4, v___x_3235_);
lean_ctor_set(v___x_3070_, 3, v_r_3211_);
lean_ctor_set(v___x_3070_, 0, v___x_3236_);
v___x_3238_ = v___x_3070_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v___x_3236_);
lean_ctor_set(v_reuseFailAlloc_3239_, 1, v_k_3065_);
lean_ctor_set(v_reuseFailAlloc_3239_, 2, v_v_3066_);
lean_ctor_set(v_reuseFailAlloc_3239_, 3, v_r_3211_);
lean_ctor_set(v_reuseFailAlloc_3239_, 4, v___x_3235_);
v___x_3238_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
return v___x_3238_;
}
}
}
}
}
}
else
{
lean_object* v___x_3245_; 
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 3, v_r_3068_);
lean_ctor_set(v___x_3070_, 0, v___x_3074_);
v___x_3245_ = v___x_3070_;
goto v_reusejp_3244_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v___x_3074_);
lean_ctor_set(v_reuseFailAlloc_3246_, 1, v_k_3065_);
lean_ctor_set(v_reuseFailAlloc_3246_, 2, v_v_3066_);
lean_ctor_set(v_reuseFailAlloc_3246_, 3, v_r_3068_);
lean_ctor_set(v_reuseFailAlloc_3246_, 4, v_r_3068_);
v___x_3245_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3244_;
}
v_reusejp_3244_:
{
return v___x_3245_;
}
}
}
}
case 1:
{
lean_del_object(v___x_3070_);
lean_dec(v_v_3066_);
lean_dec(v_k_3065_);
if (lean_obj_tag(v_l_3067_) == 0)
{
if (lean_obj_tag(v_r_3068_) == 0)
{
lean_object* v_size_3247_; lean_object* v_k_3248_; lean_object* v_v_3249_; lean_object* v_l_3250_; lean_object* v_r_3251_; lean_object* v_size_3252_; lean_object* v_k_3253_; lean_object* v_v_3254_; lean_object* v_l_3255_; lean_object* v_r_3256_; lean_object* v___x_3257_; uint8_t v___x_3258_; 
v_size_3247_ = lean_ctor_get(v_l_3067_, 0);
v_k_3248_ = lean_ctor_get(v_l_3067_, 1);
v_v_3249_ = lean_ctor_get(v_l_3067_, 2);
v_l_3250_ = lean_ctor_get(v_l_3067_, 3);
v_r_3251_ = lean_ctor_get(v_l_3067_, 4);
lean_inc(v_r_3251_);
v_size_3252_ = lean_ctor_get(v_r_3068_, 0);
v_k_3253_ = lean_ctor_get(v_r_3068_, 1);
v_v_3254_ = lean_ctor_get(v_r_3068_, 2);
v_l_3255_ = lean_ctor_get(v_r_3068_, 3);
lean_inc(v_l_3255_);
v_r_3256_ = lean_ctor_get(v_r_3068_, 4);
v___x_3257_ = lean_unsigned_to_nat(1u);
v___x_3258_ = lean_nat_dec_lt(v_size_3247_, v_size_3252_);
if (v___x_3258_ == 0)
{
lean_object* v___x_3260_; uint8_t v_isShared_3261_; uint8_t v_isSharedCheck_3394_; 
lean_inc(v_l_3250_);
lean_inc(v_v_3249_);
lean_inc(v_k_3248_);
v_isSharedCheck_3394_ = !lean_is_exclusive(v_l_3067_);
if (v_isSharedCheck_3394_ == 0)
{
lean_object* v_unused_3395_; lean_object* v_unused_3396_; lean_object* v_unused_3397_; lean_object* v_unused_3398_; lean_object* v_unused_3399_; 
v_unused_3395_ = lean_ctor_get(v_l_3067_, 4);
lean_dec(v_unused_3395_);
v_unused_3396_ = lean_ctor_get(v_l_3067_, 3);
lean_dec(v_unused_3396_);
v_unused_3397_ = lean_ctor_get(v_l_3067_, 2);
lean_dec(v_unused_3397_);
v_unused_3398_ = lean_ctor_get(v_l_3067_, 1);
lean_dec(v_unused_3398_);
v_unused_3399_ = lean_ctor_get(v_l_3067_, 0);
lean_dec(v_unused_3399_);
v___x_3260_ = v_l_3067_;
v_isShared_3261_ = v_isSharedCheck_3394_;
goto v_resetjp_3259_;
}
else
{
lean_dec(v_l_3067_);
v___x_3260_ = lean_box(0);
v_isShared_3261_ = v_isSharedCheck_3394_;
goto v_resetjp_3259_;
}
v_resetjp_3259_:
{
lean_object* v___x_3262_; lean_object* v_tree_3263_; 
v___x_3262_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_3248_, v_v_3249_, v_l_3250_, v_r_3251_);
v_tree_3263_ = lean_ctor_get(v___x_3262_, 2);
lean_inc(v_tree_3263_);
if (lean_obj_tag(v_tree_3263_) == 0)
{
lean_object* v_k_3264_; lean_object* v_v_3265_; lean_object* v_size_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; uint8_t v___x_3269_; 
v_k_3264_ = lean_ctor_get(v___x_3262_, 0);
lean_inc(v_k_3264_);
v_v_3265_ = lean_ctor_get(v___x_3262_, 1);
lean_inc(v_v_3265_);
lean_dec_ref(v___x_3262_);
v_size_3266_ = lean_ctor_get(v_tree_3263_, 0);
v___x_3267_ = lean_unsigned_to_nat(3u);
v___x_3268_ = lean_nat_mul(v___x_3267_, v_size_3266_);
v___x_3269_ = lean_nat_dec_lt(v___x_3268_, v_size_3252_);
lean_dec(v___x_3268_);
if (v___x_3269_ == 0)
{
lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3273_; 
lean_dec(v_l_3255_);
v___x_3270_ = lean_nat_add(v___x_3257_, v_size_3266_);
v___x_3271_ = lean_nat_add(v___x_3270_, v_size_3252_);
lean_dec(v___x_3270_);
if (v_isShared_3261_ == 0)
{
lean_ctor_set(v___x_3260_, 4, v_r_3068_);
lean_ctor_set(v___x_3260_, 3, v_tree_3263_);
lean_ctor_set(v___x_3260_, 2, v_v_3265_);
lean_ctor_set(v___x_3260_, 1, v_k_3264_);
lean_ctor_set(v___x_3260_, 0, v___x_3271_);
v___x_3273_ = v___x_3260_;
goto v_reusejp_3272_;
}
else
{
lean_object* v_reuseFailAlloc_3274_; 
v_reuseFailAlloc_3274_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3274_, 0, v___x_3271_);
lean_ctor_set(v_reuseFailAlloc_3274_, 1, v_k_3264_);
lean_ctor_set(v_reuseFailAlloc_3274_, 2, v_v_3265_);
lean_ctor_set(v_reuseFailAlloc_3274_, 3, v_tree_3263_);
lean_ctor_set(v_reuseFailAlloc_3274_, 4, v_r_3068_);
v___x_3273_ = v_reuseFailAlloc_3274_;
goto v_reusejp_3272_;
}
v_reusejp_3272_:
{
return v___x_3273_;
}
}
else
{
lean_object* v___x_3276_; uint8_t v_isShared_3277_; uint8_t v_isSharedCheck_3329_; 
lean_inc(v_r_3256_);
lean_inc(v_v_3254_);
lean_inc(v_k_3253_);
lean_inc(v_size_3252_);
v_isSharedCheck_3329_ = !lean_is_exclusive(v_r_3068_);
if (v_isSharedCheck_3329_ == 0)
{
lean_object* v_unused_3330_; lean_object* v_unused_3331_; lean_object* v_unused_3332_; lean_object* v_unused_3333_; lean_object* v_unused_3334_; 
v_unused_3330_ = lean_ctor_get(v_r_3068_, 4);
lean_dec(v_unused_3330_);
v_unused_3331_ = lean_ctor_get(v_r_3068_, 3);
lean_dec(v_unused_3331_);
v_unused_3332_ = lean_ctor_get(v_r_3068_, 2);
lean_dec(v_unused_3332_);
v_unused_3333_ = lean_ctor_get(v_r_3068_, 1);
lean_dec(v_unused_3333_);
v_unused_3334_ = lean_ctor_get(v_r_3068_, 0);
lean_dec(v_unused_3334_);
v___x_3276_ = v_r_3068_;
v_isShared_3277_ = v_isSharedCheck_3329_;
goto v_resetjp_3275_;
}
else
{
lean_dec(v_r_3068_);
v___x_3276_ = lean_box(0);
v_isShared_3277_ = v_isSharedCheck_3329_;
goto v_resetjp_3275_;
}
v_resetjp_3275_:
{
lean_object* v_size_3278_; lean_object* v_k_3279_; lean_object* v_v_3280_; lean_object* v_l_3281_; lean_object* v_r_3282_; lean_object* v_size_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; uint8_t v___x_3286_; 
v_size_3278_ = lean_ctor_get(v_l_3255_, 0);
v_k_3279_ = lean_ctor_get(v_l_3255_, 1);
v_v_3280_ = lean_ctor_get(v_l_3255_, 2);
v_l_3281_ = lean_ctor_get(v_l_3255_, 3);
v_r_3282_ = lean_ctor_get(v_l_3255_, 4);
v_size_3283_ = lean_ctor_get(v_r_3256_, 0);
v___x_3284_ = lean_unsigned_to_nat(2u);
v___x_3285_ = lean_nat_mul(v___x_3284_, v_size_3283_);
v___x_3286_ = lean_nat_dec_lt(v_size_3278_, v___x_3285_);
lean_dec(v___x_3285_);
if (v___x_3286_ == 0)
{
lean_object* v___x_3288_; uint8_t v_isShared_3289_; uint8_t v_isSharedCheck_3314_; 
lean_inc(v_r_3282_);
lean_inc(v_l_3281_);
lean_inc(v_v_3280_);
lean_inc(v_k_3279_);
v_isSharedCheck_3314_ = !lean_is_exclusive(v_l_3255_);
if (v_isSharedCheck_3314_ == 0)
{
lean_object* v_unused_3315_; lean_object* v_unused_3316_; lean_object* v_unused_3317_; lean_object* v_unused_3318_; lean_object* v_unused_3319_; 
v_unused_3315_ = lean_ctor_get(v_l_3255_, 4);
lean_dec(v_unused_3315_);
v_unused_3316_ = lean_ctor_get(v_l_3255_, 3);
lean_dec(v_unused_3316_);
v_unused_3317_ = lean_ctor_get(v_l_3255_, 2);
lean_dec(v_unused_3317_);
v_unused_3318_ = lean_ctor_get(v_l_3255_, 1);
lean_dec(v_unused_3318_);
v_unused_3319_ = lean_ctor_get(v_l_3255_, 0);
lean_dec(v_unused_3319_);
v___x_3288_ = v_l_3255_;
v_isShared_3289_ = v_isSharedCheck_3314_;
goto v_resetjp_3287_;
}
else
{
lean_dec(v_l_3255_);
v___x_3288_ = lean_box(0);
v_isShared_3289_ = v_isSharedCheck_3314_;
goto v_resetjp_3287_;
}
v_resetjp_3287_:
{
lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___y_3293_; lean_object* v___y_3294_; lean_object* v___y_3295_; lean_object* v___y_3304_; 
v___x_3290_ = lean_nat_add(v___x_3257_, v_size_3266_);
v___x_3291_ = lean_nat_add(v___x_3290_, v_size_3252_);
lean_dec(v_size_3252_);
if (lean_obj_tag(v_l_3281_) == 0)
{
lean_object* v_size_3312_; 
v_size_3312_ = lean_ctor_get(v_l_3281_, 0);
lean_inc(v_size_3312_);
v___y_3304_ = v_size_3312_;
goto v___jp_3303_;
}
else
{
lean_object* v___x_3313_; 
v___x_3313_ = lean_unsigned_to_nat(0u);
v___y_3304_ = v___x_3313_;
goto v___jp_3303_;
}
v___jp_3292_:
{
lean_object* v___x_3296_; lean_object* v___x_3298_; 
v___x_3296_ = lean_nat_add(v___y_3293_, v___y_3295_);
lean_dec(v___y_3295_);
lean_dec(v___y_3293_);
if (v_isShared_3289_ == 0)
{
lean_ctor_set(v___x_3288_, 4, v_r_3256_);
lean_ctor_set(v___x_3288_, 3, v_r_3282_);
lean_ctor_set(v___x_3288_, 2, v_v_3254_);
lean_ctor_set(v___x_3288_, 1, v_k_3253_);
lean_ctor_set(v___x_3288_, 0, v___x_3296_);
v___x_3298_ = v___x_3288_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3302_; 
v_reuseFailAlloc_3302_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3302_, 0, v___x_3296_);
lean_ctor_set(v_reuseFailAlloc_3302_, 1, v_k_3253_);
lean_ctor_set(v_reuseFailAlloc_3302_, 2, v_v_3254_);
lean_ctor_set(v_reuseFailAlloc_3302_, 3, v_r_3282_);
lean_ctor_set(v_reuseFailAlloc_3302_, 4, v_r_3256_);
v___x_3298_ = v_reuseFailAlloc_3302_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
lean_object* v___x_3300_; 
if (v_isShared_3277_ == 0)
{
lean_ctor_set(v___x_3276_, 4, v___x_3298_);
lean_ctor_set(v___x_3276_, 3, v___y_3294_);
lean_ctor_set(v___x_3276_, 2, v_v_3280_);
lean_ctor_set(v___x_3276_, 1, v_k_3279_);
lean_ctor_set(v___x_3276_, 0, v___x_3291_);
v___x_3300_ = v___x_3276_;
goto v_reusejp_3299_;
}
else
{
lean_object* v_reuseFailAlloc_3301_; 
v_reuseFailAlloc_3301_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3301_, 0, v___x_3291_);
lean_ctor_set(v_reuseFailAlloc_3301_, 1, v_k_3279_);
lean_ctor_set(v_reuseFailAlloc_3301_, 2, v_v_3280_);
lean_ctor_set(v_reuseFailAlloc_3301_, 3, v___y_3294_);
lean_ctor_set(v_reuseFailAlloc_3301_, 4, v___x_3298_);
v___x_3300_ = v_reuseFailAlloc_3301_;
goto v_reusejp_3299_;
}
v_reusejp_3299_:
{
return v___x_3300_;
}
}
}
v___jp_3303_:
{
lean_object* v___x_3305_; lean_object* v___x_3307_; 
v___x_3305_ = lean_nat_add(v___x_3290_, v___y_3304_);
lean_dec(v___y_3304_);
lean_dec(v___x_3290_);
if (v_isShared_3261_ == 0)
{
lean_ctor_set(v___x_3260_, 4, v_l_3281_);
lean_ctor_set(v___x_3260_, 3, v_tree_3263_);
lean_ctor_set(v___x_3260_, 2, v_v_3265_);
lean_ctor_set(v___x_3260_, 1, v_k_3264_);
lean_ctor_set(v___x_3260_, 0, v___x_3305_);
v___x_3307_ = v___x_3260_;
goto v_reusejp_3306_;
}
else
{
lean_object* v_reuseFailAlloc_3311_; 
v_reuseFailAlloc_3311_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3311_, 0, v___x_3305_);
lean_ctor_set(v_reuseFailAlloc_3311_, 1, v_k_3264_);
lean_ctor_set(v_reuseFailAlloc_3311_, 2, v_v_3265_);
lean_ctor_set(v_reuseFailAlloc_3311_, 3, v_tree_3263_);
lean_ctor_set(v_reuseFailAlloc_3311_, 4, v_l_3281_);
v___x_3307_ = v_reuseFailAlloc_3311_;
goto v_reusejp_3306_;
}
v_reusejp_3306_:
{
lean_object* v___x_3308_; 
v___x_3308_ = lean_nat_add(v___x_3257_, v_size_3283_);
if (lean_obj_tag(v_r_3282_) == 0)
{
lean_object* v_size_3309_; 
v_size_3309_ = lean_ctor_get(v_r_3282_, 0);
lean_inc(v_size_3309_);
v___y_3293_ = v___x_3308_;
v___y_3294_ = v___x_3307_;
v___y_3295_ = v_size_3309_;
goto v___jp_3292_;
}
else
{
lean_object* v___x_3310_; 
v___x_3310_ = lean_unsigned_to_nat(0u);
v___y_3293_ = v___x_3308_;
v___y_3294_ = v___x_3307_;
v___y_3295_ = v___x_3310_;
goto v___jp_3292_;
}
}
}
}
}
else
{
lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3324_; 
v___x_3320_ = lean_nat_add(v___x_3257_, v_size_3266_);
v___x_3321_ = lean_nat_add(v___x_3320_, v_size_3252_);
lean_dec(v_size_3252_);
v___x_3322_ = lean_nat_add(v___x_3320_, v_size_3278_);
lean_dec(v___x_3320_);
if (v_isShared_3277_ == 0)
{
lean_ctor_set(v___x_3276_, 4, v_l_3255_);
lean_ctor_set(v___x_3276_, 3, v_tree_3263_);
lean_ctor_set(v___x_3276_, 2, v_v_3265_);
lean_ctor_set(v___x_3276_, 1, v_k_3264_);
lean_ctor_set(v___x_3276_, 0, v___x_3322_);
v___x_3324_ = v___x_3276_;
goto v_reusejp_3323_;
}
else
{
lean_object* v_reuseFailAlloc_3328_; 
v_reuseFailAlloc_3328_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3328_, 0, v___x_3322_);
lean_ctor_set(v_reuseFailAlloc_3328_, 1, v_k_3264_);
lean_ctor_set(v_reuseFailAlloc_3328_, 2, v_v_3265_);
lean_ctor_set(v_reuseFailAlloc_3328_, 3, v_tree_3263_);
lean_ctor_set(v_reuseFailAlloc_3328_, 4, v_l_3255_);
v___x_3324_ = v_reuseFailAlloc_3328_;
goto v_reusejp_3323_;
}
v_reusejp_3323_:
{
lean_object* v___x_3326_; 
if (v_isShared_3261_ == 0)
{
lean_ctor_set(v___x_3260_, 4, v_r_3256_);
lean_ctor_set(v___x_3260_, 3, v___x_3324_);
lean_ctor_set(v___x_3260_, 2, v_v_3254_);
lean_ctor_set(v___x_3260_, 1, v_k_3253_);
lean_ctor_set(v___x_3260_, 0, v___x_3321_);
v___x_3326_ = v___x_3260_;
goto v_reusejp_3325_;
}
else
{
lean_object* v_reuseFailAlloc_3327_; 
v_reuseFailAlloc_3327_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3327_, 0, v___x_3321_);
lean_ctor_set(v_reuseFailAlloc_3327_, 1, v_k_3253_);
lean_ctor_set(v_reuseFailAlloc_3327_, 2, v_v_3254_);
lean_ctor_set(v_reuseFailAlloc_3327_, 3, v___x_3324_);
lean_ctor_set(v_reuseFailAlloc_3327_, 4, v_r_3256_);
v___x_3326_ = v_reuseFailAlloc_3327_;
goto v_reusejp_3325_;
}
v_reusejp_3325_:
{
return v___x_3326_;
}
}
}
}
}
}
else
{
lean_object* v___x_3336_; uint8_t v_isShared_3337_; uint8_t v_isSharedCheck_3388_; 
lean_inc(v_r_3256_);
lean_inc(v_v_3254_);
lean_inc(v_k_3253_);
lean_inc(v_size_3252_);
v_isSharedCheck_3388_ = !lean_is_exclusive(v_r_3068_);
if (v_isSharedCheck_3388_ == 0)
{
lean_object* v_unused_3389_; lean_object* v_unused_3390_; lean_object* v_unused_3391_; lean_object* v_unused_3392_; lean_object* v_unused_3393_; 
v_unused_3389_ = lean_ctor_get(v_r_3068_, 4);
lean_dec(v_unused_3389_);
v_unused_3390_ = lean_ctor_get(v_r_3068_, 3);
lean_dec(v_unused_3390_);
v_unused_3391_ = lean_ctor_get(v_r_3068_, 2);
lean_dec(v_unused_3391_);
v_unused_3392_ = lean_ctor_get(v_r_3068_, 1);
lean_dec(v_unused_3392_);
v_unused_3393_ = lean_ctor_get(v_r_3068_, 0);
lean_dec(v_unused_3393_);
v___x_3336_ = v_r_3068_;
v_isShared_3337_ = v_isSharedCheck_3388_;
goto v_resetjp_3335_;
}
else
{
lean_dec(v_r_3068_);
v___x_3336_ = lean_box(0);
v_isShared_3337_ = v_isSharedCheck_3388_;
goto v_resetjp_3335_;
}
v_resetjp_3335_:
{
if (lean_obj_tag(v_l_3255_) == 0)
{
if (lean_obj_tag(v_r_3256_) == 0)
{
lean_object* v_k_3338_; lean_object* v_v_3339_; lean_object* v_size_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3344_; 
v_k_3338_ = lean_ctor_get(v___x_3262_, 0);
lean_inc(v_k_3338_);
v_v_3339_ = lean_ctor_get(v___x_3262_, 1);
lean_inc(v_v_3339_);
lean_dec_ref(v___x_3262_);
v_size_3340_ = lean_ctor_get(v_l_3255_, 0);
v___x_3341_ = lean_nat_add(v___x_3257_, v_size_3252_);
lean_dec(v_size_3252_);
v___x_3342_ = lean_nat_add(v___x_3257_, v_size_3340_);
if (v_isShared_3337_ == 0)
{
lean_ctor_set(v___x_3336_, 4, v_l_3255_);
lean_ctor_set(v___x_3336_, 3, v_tree_3263_);
lean_ctor_set(v___x_3336_, 2, v_v_3339_);
lean_ctor_set(v___x_3336_, 1, v_k_3338_);
lean_ctor_set(v___x_3336_, 0, v___x_3342_);
v___x_3344_ = v___x_3336_;
goto v_reusejp_3343_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v___x_3342_);
lean_ctor_set(v_reuseFailAlloc_3348_, 1, v_k_3338_);
lean_ctor_set(v_reuseFailAlloc_3348_, 2, v_v_3339_);
lean_ctor_set(v_reuseFailAlloc_3348_, 3, v_tree_3263_);
lean_ctor_set(v_reuseFailAlloc_3348_, 4, v_l_3255_);
v___x_3344_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3343_;
}
v_reusejp_3343_:
{
lean_object* v___x_3346_; 
if (v_isShared_3261_ == 0)
{
lean_ctor_set(v___x_3260_, 4, v_r_3256_);
lean_ctor_set(v___x_3260_, 3, v___x_3344_);
lean_ctor_set(v___x_3260_, 2, v_v_3254_);
lean_ctor_set(v___x_3260_, 1, v_k_3253_);
lean_ctor_set(v___x_3260_, 0, v___x_3341_);
v___x_3346_ = v___x_3260_;
goto v_reusejp_3345_;
}
else
{
lean_object* v_reuseFailAlloc_3347_; 
v_reuseFailAlloc_3347_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3347_, 0, v___x_3341_);
lean_ctor_set(v_reuseFailAlloc_3347_, 1, v_k_3253_);
lean_ctor_set(v_reuseFailAlloc_3347_, 2, v_v_3254_);
lean_ctor_set(v_reuseFailAlloc_3347_, 3, v___x_3344_);
lean_ctor_set(v_reuseFailAlloc_3347_, 4, v_r_3256_);
v___x_3346_ = v_reuseFailAlloc_3347_;
goto v_reusejp_3345_;
}
v_reusejp_3345_:
{
return v___x_3346_;
}
}
}
else
{
lean_object* v_k_3349_; lean_object* v_v_3350_; lean_object* v_k_3351_; lean_object* v_v_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3366_; 
lean_dec(v_size_3252_);
v_k_3349_ = lean_ctor_get(v___x_3262_, 0);
lean_inc(v_k_3349_);
v_v_3350_ = lean_ctor_get(v___x_3262_, 1);
lean_inc(v_v_3350_);
lean_dec_ref(v___x_3262_);
v_k_3351_ = lean_ctor_get(v_l_3255_, 1);
v_v_3352_ = lean_ctor_get(v_l_3255_, 2);
v_isSharedCheck_3366_ = !lean_is_exclusive(v_l_3255_);
if (v_isSharedCheck_3366_ == 0)
{
lean_object* v_unused_3367_; lean_object* v_unused_3368_; lean_object* v_unused_3369_; 
v_unused_3367_ = lean_ctor_get(v_l_3255_, 4);
lean_dec(v_unused_3367_);
v_unused_3368_ = lean_ctor_get(v_l_3255_, 3);
lean_dec(v_unused_3368_);
v_unused_3369_ = lean_ctor_get(v_l_3255_, 0);
lean_dec(v_unused_3369_);
v___x_3354_ = v_l_3255_;
v_isShared_3355_ = v_isSharedCheck_3366_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_v_3352_);
lean_inc(v_k_3351_);
lean_dec(v_l_3255_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3366_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v___x_3356_; lean_object* v___x_3358_; 
v___x_3356_ = lean_unsigned_to_nat(3u);
if (v_isShared_3355_ == 0)
{
lean_ctor_set(v___x_3354_, 4, v_r_3256_);
lean_ctor_set(v___x_3354_, 3, v_r_3256_);
lean_ctor_set(v___x_3354_, 2, v_v_3350_);
lean_ctor_set(v___x_3354_, 1, v_k_3349_);
lean_ctor_set(v___x_3354_, 0, v___x_3257_);
v___x_3358_ = v___x_3354_;
goto v_reusejp_3357_;
}
else
{
lean_object* v_reuseFailAlloc_3365_; 
v_reuseFailAlloc_3365_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3365_, 0, v___x_3257_);
lean_ctor_set(v_reuseFailAlloc_3365_, 1, v_k_3349_);
lean_ctor_set(v_reuseFailAlloc_3365_, 2, v_v_3350_);
lean_ctor_set(v_reuseFailAlloc_3365_, 3, v_r_3256_);
lean_ctor_set(v_reuseFailAlloc_3365_, 4, v_r_3256_);
v___x_3358_ = v_reuseFailAlloc_3365_;
goto v_reusejp_3357_;
}
v_reusejp_3357_:
{
lean_object* v___x_3360_; 
if (v_isShared_3337_ == 0)
{
lean_ctor_set(v___x_3336_, 3, v_r_3256_);
lean_ctor_set(v___x_3336_, 0, v___x_3257_);
v___x_3360_ = v___x_3336_;
goto v_reusejp_3359_;
}
else
{
lean_object* v_reuseFailAlloc_3364_; 
v_reuseFailAlloc_3364_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3364_, 0, v___x_3257_);
lean_ctor_set(v_reuseFailAlloc_3364_, 1, v_k_3253_);
lean_ctor_set(v_reuseFailAlloc_3364_, 2, v_v_3254_);
lean_ctor_set(v_reuseFailAlloc_3364_, 3, v_r_3256_);
lean_ctor_set(v_reuseFailAlloc_3364_, 4, v_r_3256_);
v___x_3360_ = v_reuseFailAlloc_3364_;
goto v_reusejp_3359_;
}
v_reusejp_3359_:
{
lean_object* v___x_3362_; 
if (v_isShared_3261_ == 0)
{
lean_ctor_set(v___x_3260_, 4, v___x_3360_);
lean_ctor_set(v___x_3260_, 3, v___x_3358_);
lean_ctor_set(v___x_3260_, 2, v_v_3352_);
lean_ctor_set(v___x_3260_, 1, v_k_3351_);
lean_ctor_set(v___x_3260_, 0, v___x_3356_);
v___x_3362_ = v___x_3260_;
goto v_reusejp_3361_;
}
else
{
lean_object* v_reuseFailAlloc_3363_; 
v_reuseFailAlloc_3363_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3363_, 0, v___x_3356_);
lean_ctor_set(v_reuseFailAlloc_3363_, 1, v_k_3351_);
lean_ctor_set(v_reuseFailAlloc_3363_, 2, v_v_3352_);
lean_ctor_set(v_reuseFailAlloc_3363_, 3, v___x_3358_);
lean_ctor_set(v_reuseFailAlloc_3363_, 4, v___x_3360_);
v___x_3362_ = v_reuseFailAlloc_3363_;
goto v_reusejp_3361_;
}
v_reusejp_3361_:
{
return v___x_3362_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_3256_) == 0)
{
lean_object* v_k_3370_; lean_object* v_v_3371_; lean_object* v___x_3372_; lean_object* v___x_3374_; 
lean_dec(v_size_3252_);
v_k_3370_ = lean_ctor_get(v___x_3262_, 0);
lean_inc(v_k_3370_);
v_v_3371_ = lean_ctor_get(v___x_3262_, 1);
lean_inc(v_v_3371_);
lean_dec_ref(v___x_3262_);
v___x_3372_ = lean_unsigned_to_nat(3u);
if (v_isShared_3337_ == 0)
{
lean_ctor_set(v___x_3336_, 4, v_l_3255_);
lean_ctor_set(v___x_3336_, 2, v_v_3371_);
lean_ctor_set(v___x_3336_, 1, v_k_3370_);
lean_ctor_set(v___x_3336_, 0, v___x_3257_);
v___x_3374_ = v___x_3336_;
goto v_reusejp_3373_;
}
else
{
lean_object* v_reuseFailAlloc_3378_; 
v_reuseFailAlloc_3378_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3378_, 0, v___x_3257_);
lean_ctor_set(v_reuseFailAlloc_3378_, 1, v_k_3370_);
lean_ctor_set(v_reuseFailAlloc_3378_, 2, v_v_3371_);
lean_ctor_set(v_reuseFailAlloc_3378_, 3, v_l_3255_);
lean_ctor_set(v_reuseFailAlloc_3378_, 4, v_l_3255_);
v___x_3374_ = v_reuseFailAlloc_3378_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
lean_object* v___x_3376_; 
if (v_isShared_3261_ == 0)
{
lean_ctor_set(v___x_3260_, 4, v_r_3256_);
lean_ctor_set(v___x_3260_, 3, v___x_3374_);
lean_ctor_set(v___x_3260_, 2, v_v_3254_);
lean_ctor_set(v___x_3260_, 1, v_k_3253_);
lean_ctor_set(v___x_3260_, 0, v___x_3372_);
v___x_3376_ = v___x_3260_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3377_; 
v_reuseFailAlloc_3377_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3377_, 0, v___x_3372_);
lean_ctor_set(v_reuseFailAlloc_3377_, 1, v_k_3253_);
lean_ctor_set(v_reuseFailAlloc_3377_, 2, v_v_3254_);
lean_ctor_set(v_reuseFailAlloc_3377_, 3, v___x_3374_);
lean_ctor_set(v_reuseFailAlloc_3377_, 4, v_r_3256_);
v___x_3376_ = v_reuseFailAlloc_3377_;
goto v_reusejp_3375_;
}
v_reusejp_3375_:
{
return v___x_3376_;
}
}
}
else
{
lean_object* v_k_3379_; lean_object* v_v_3380_; lean_object* v___x_3382_; 
v_k_3379_ = lean_ctor_get(v___x_3262_, 0);
lean_inc(v_k_3379_);
v_v_3380_ = lean_ctor_get(v___x_3262_, 1);
lean_inc(v_v_3380_);
lean_dec_ref(v___x_3262_);
if (v_isShared_3337_ == 0)
{
lean_ctor_set(v___x_3336_, 3, v_r_3256_);
v___x_3382_ = v___x_3336_;
goto v_reusejp_3381_;
}
else
{
lean_object* v_reuseFailAlloc_3387_; 
v_reuseFailAlloc_3387_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3387_, 0, v_size_3252_);
lean_ctor_set(v_reuseFailAlloc_3387_, 1, v_k_3253_);
lean_ctor_set(v_reuseFailAlloc_3387_, 2, v_v_3254_);
lean_ctor_set(v_reuseFailAlloc_3387_, 3, v_r_3256_);
lean_ctor_set(v_reuseFailAlloc_3387_, 4, v_r_3256_);
v___x_3382_ = v_reuseFailAlloc_3387_;
goto v_reusejp_3381_;
}
v_reusejp_3381_:
{
lean_object* v___x_3383_; lean_object* v___x_3385_; 
v___x_3383_ = lean_unsigned_to_nat(2u);
if (v_isShared_3261_ == 0)
{
lean_ctor_set(v___x_3260_, 4, v___x_3382_);
lean_ctor_set(v___x_3260_, 3, v_r_3256_);
lean_ctor_set(v___x_3260_, 2, v_v_3380_);
lean_ctor_set(v___x_3260_, 1, v_k_3379_);
lean_ctor_set(v___x_3260_, 0, v___x_3383_);
v___x_3385_ = v___x_3260_;
goto v_reusejp_3384_;
}
else
{
lean_object* v_reuseFailAlloc_3386_; 
v_reuseFailAlloc_3386_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3386_, 0, v___x_3383_);
lean_ctor_set(v_reuseFailAlloc_3386_, 1, v_k_3379_);
lean_ctor_set(v_reuseFailAlloc_3386_, 2, v_v_3380_);
lean_ctor_set(v_reuseFailAlloc_3386_, 3, v_r_3256_);
lean_ctor_set(v_reuseFailAlloc_3386_, 4, v___x_3382_);
v___x_3385_ = v_reuseFailAlloc_3386_;
goto v_reusejp_3384_;
}
v_reusejp_3384_:
{
return v___x_3385_;
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
lean_object* v___x_3401_; uint8_t v_isShared_3402_; uint8_t v_isSharedCheck_3552_; 
lean_inc(v_r_3256_);
lean_inc(v_v_3254_);
lean_inc(v_k_3253_);
v_isSharedCheck_3552_ = !lean_is_exclusive(v_r_3068_);
if (v_isSharedCheck_3552_ == 0)
{
lean_object* v_unused_3553_; lean_object* v_unused_3554_; lean_object* v_unused_3555_; lean_object* v_unused_3556_; lean_object* v_unused_3557_; 
v_unused_3553_ = lean_ctor_get(v_r_3068_, 4);
lean_dec(v_unused_3553_);
v_unused_3554_ = lean_ctor_get(v_r_3068_, 3);
lean_dec(v_unused_3554_);
v_unused_3555_ = lean_ctor_get(v_r_3068_, 2);
lean_dec(v_unused_3555_);
v_unused_3556_ = lean_ctor_get(v_r_3068_, 1);
lean_dec(v_unused_3556_);
v_unused_3557_ = lean_ctor_get(v_r_3068_, 0);
lean_dec(v_unused_3557_);
v___x_3401_ = v_r_3068_;
v_isShared_3402_ = v_isSharedCheck_3552_;
goto v_resetjp_3400_;
}
else
{
lean_dec(v_r_3068_);
v___x_3401_ = lean_box(0);
v_isShared_3402_ = v_isSharedCheck_3552_;
goto v_resetjp_3400_;
}
v_resetjp_3400_:
{
lean_object* v___x_3403_; lean_object* v_tree_3404_; 
v___x_3403_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_3253_, v_v_3254_, v_l_3255_, v_r_3256_);
v_tree_3404_ = lean_ctor_get(v___x_3403_, 2);
lean_inc(v_tree_3404_);
if (lean_obj_tag(v_tree_3404_) == 0)
{
lean_object* v_k_3405_; lean_object* v_v_3406_; lean_object* v_size_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; uint8_t v___x_3410_; 
v_k_3405_ = lean_ctor_get(v___x_3403_, 0);
lean_inc(v_k_3405_);
v_v_3406_ = lean_ctor_get(v___x_3403_, 1);
lean_inc(v_v_3406_);
lean_dec_ref(v___x_3403_);
v_size_3407_ = lean_ctor_get(v_tree_3404_, 0);
v___x_3408_ = lean_unsigned_to_nat(3u);
v___x_3409_ = lean_nat_mul(v___x_3408_, v_size_3407_);
v___x_3410_ = lean_nat_dec_lt(v___x_3409_, v_size_3247_);
lean_dec(v___x_3409_);
if (v___x_3410_ == 0)
{
lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3414_; 
lean_dec(v_r_3251_);
v___x_3411_ = lean_nat_add(v___x_3257_, v_size_3247_);
v___x_3412_ = lean_nat_add(v___x_3411_, v_size_3407_);
lean_dec(v___x_3411_);
if (v_isShared_3402_ == 0)
{
lean_ctor_set(v___x_3401_, 4, v_tree_3404_);
lean_ctor_set(v___x_3401_, 3, v_l_3067_);
lean_ctor_set(v___x_3401_, 2, v_v_3406_);
lean_ctor_set(v___x_3401_, 1, v_k_3405_);
lean_ctor_set(v___x_3401_, 0, v___x_3412_);
v___x_3414_ = v___x_3401_;
goto v_reusejp_3413_;
}
else
{
lean_object* v_reuseFailAlloc_3415_; 
v_reuseFailAlloc_3415_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3415_, 0, v___x_3412_);
lean_ctor_set(v_reuseFailAlloc_3415_, 1, v_k_3405_);
lean_ctor_set(v_reuseFailAlloc_3415_, 2, v_v_3406_);
lean_ctor_set(v_reuseFailAlloc_3415_, 3, v_l_3067_);
lean_ctor_set(v_reuseFailAlloc_3415_, 4, v_tree_3404_);
v___x_3414_ = v_reuseFailAlloc_3415_;
goto v_reusejp_3413_;
}
v_reusejp_3413_:
{
return v___x_3414_;
}
}
else
{
lean_object* v___x_3417_; uint8_t v_isShared_3418_; uint8_t v_isSharedCheck_3481_; 
lean_inc(v_l_3250_);
lean_inc(v_v_3249_);
lean_inc(v_k_3248_);
lean_inc(v_size_3247_);
v_isSharedCheck_3481_ = !lean_is_exclusive(v_l_3067_);
if (v_isSharedCheck_3481_ == 0)
{
lean_object* v_unused_3482_; lean_object* v_unused_3483_; lean_object* v_unused_3484_; lean_object* v_unused_3485_; lean_object* v_unused_3486_; 
v_unused_3482_ = lean_ctor_get(v_l_3067_, 4);
lean_dec(v_unused_3482_);
v_unused_3483_ = lean_ctor_get(v_l_3067_, 3);
lean_dec(v_unused_3483_);
v_unused_3484_ = lean_ctor_get(v_l_3067_, 2);
lean_dec(v_unused_3484_);
v_unused_3485_ = lean_ctor_get(v_l_3067_, 1);
lean_dec(v_unused_3485_);
v_unused_3486_ = lean_ctor_get(v_l_3067_, 0);
lean_dec(v_unused_3486_);
v___x_3417_ = v_l_3067_;
v_isShared_3418_ = v_isSharedCheck_3481_;
goto v_resetjp_3416_;
}
else
{
lean_dec(v_l_3067_);
v___x_3417_ = lean_box(0);
v_isShared_3418_ = v_isSharedCheck_3481_;
goto v_resetjp_3416_;
}
v_resetjp_3416_:
{
lean_object* v_size_3419_; lean_object* v_size_3420_; lean_object* v_k_3421_; lean_object* v_v_3422_; lean_object* v_l_3423_; lean_object* v_r_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; uint8_t v___x_3427_; 
v_size_3419_ = lean_ctor_get(v_l_3250_, 0);
v_size_3420_ = lean_ctor_get(v_r_3251_, 0);
v_k_3421_ = lean_ctor_get(v_r_3251_, 1);
v_v_3422_ = lean_ctor_get(v_r_3251_, 2);
v_l_3423_ = lean_ctor_get(v_r_3251_, 3);
v_r_3424_ = lean_ctor_get(v_r_3251_, 4);
v___x_3425_ = lean_unsigned_to_nat(2u);
v___x_3426_ = lean_nat_mul(v___x_3425_, v_size_3419_);
v___x_3427_ = lean_nat_dec_lt(v_size_3420_, v___x_3426_);
lean_dec(v___x_3426_);
if (v___x_3427_ == 0)
{
lean_object* v___x_3429_; uint8_t v_isShared_3430_; uint8_t v_isSharedCheck_3465_; 
lean_inc(v_r_3424_);
lean_inc(v_l_3423_);
lean_inc(v_v_3422_);
lean_inc(v_k_3421_);
lean_del_object(v___x_3417_);
v_isSharedCheck_3465_ = !lean_is_exclusive(v_r_3251_);
if (v_isSharedCheck_3465_ == 0)
{
lean_object* v_unused_3466_; lean_object* v_unused_3467_; lean_object* v_unused_3468_; lean_object* v_unused_3469_; lean_object* v_unused_3470_; 
v_unused_3466_ = lean_ctor_get(v_r_3251_, 4);
lean_dec(v_unused_3466_);
v_unused_3467_ = lean_ctor_get(v_r_3251_, 3);
lean_dec(v_unused_3467_);
v_unused_3468_ = lean_ctor_get(v_r_3251_, 2);
lean_dec(v_unused_3468_);
v_unused_3469_ = lean_ctor_get(v_r_3251_, 1);
lean_dec(v_unused_3469_);
v_unused_3470_ = lean_ctor_get(v_r_3251_, 0);
lean_dec(v_unused_3470_);
v___x_3429_ = v_r_3251_;
v_isShared_3430_ = v_isSharedCheck_3465_;
goto v_resetjp_3428_;
}
else
{
lean_dec(v_r_3251_);
v___x_3429_ = lean_box(0);
v_isShared_3430_ = v_isSharedCheck_3465_;
goto v_resetjp_3428_;
}
v_resetjp_3428_:
{
lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___y_3434_; lean_object* v___y_3435_; lean_object* v___y_3436_; lean_object* v___x_3453_; lean_object* v___y_3455_; 
v___x_3431_ = lean_nat_add(v___x_3257_, v_size_3247_);
lean_dec(v_size_3247_);
v___x_3432_ = lean_nat_add(v___x_3431_, v_size_3407_);
lean_dec(v___x_3431_);
v___x_3453_ = lean_nat_add(v___x_3257_, v_size_3419_);
if (lean_obj_tag(v_l_3423_) == 0)
{
lean_object* v_size_3463_; 
v_size_3463_ = lean_ctor_get(v_l_3423_, 0);
lean_inc(v_size_3463_);
v___y_3455_ = v_size_3463_;
goto v___jp_3454_;
}
else
{
lean_object* v___x_3464_; 
v___x_3464_ = lean_unsigned_to_nat(0u);
v___y_3455_ = v___x_3464_;
goto v___jp_3454_;
}
v___jp_3433_:
{
lean_object* v___x_3437_; lean_object* v___x_3439_; 
v___x_3437_ = lean_nat_add(v___y_3434_, v___y_3436_);
lean_dec(v___y_3436_);
lean_dec(v___y_3434_);
lean_inc_ref(v_tree_3404_);
if (v_isShared_3430_ == 0)
{
lean_ctor_set(v___x_3429_, 4, v_tree_3404_);
lean_ctor_set(v___x_3429_, 3, v_r_3424_);
lean_ctor_set(v___x_3429_, 2, v_v_3406_);
lean_ctor_set(v___x_3429_, 1, v_k_3405_);
lean_ctor_set(v___x_3429_, 0, v___x_3437_);
v___x_3439_ = v___x_3429_;
goto v_reusejp_3438_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v___x_3437_);
lean_ctor_set(v_reuseFailAlloc_3452_, 1, v_k_3405_);
lean_ctor_set(v_reuseFailAlloc_3452_, 2, v_v_3406_);
lean_ctor_set(v_reuseFailAlloc_3452_, 3, v_r_3424_);
lean_ctor_set(v_reuseFailAlloc_3452_, 4, v_tree_3404_);
v___x_3439_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3438_;
}
v_reusejp_3438_:
{
lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3446_; 
v_isSharedCheck_3446_ = !lean_is_exclusive(v_tree_3404_);
if (v_isSharedCheck_3446_ == 0)
{
lean_object* v_unused_3447_; lean_object* v_unused_3448_; lean_object* v_unused_3449_; lean_object* v_unused_3450_; lean_object* v_unused_3451_; 
v_unused_3447_ = lean_ctor_get(v_tree_3404_, 4);
lean_dec(v_unused_3447_);
v_unused_3448_ = lean_ctor_get(v_tree_3404_, 3);
lean_dec(v_unused_3448_);
v_unused_3449_ = lean_ctor_get(v_tree_3404_, 2);
lean_dec(v_unused_3449_);
v_unused_3450_ = lean_ctor_get(v_tree_3404_, 1);
lean_dec(v_unused_3450_);
v_unused_3451_ = lean_ctor_get(v_tree_3404_, 0);
lean_dec(v_unused_3451_);
v___x_3441_ = v_tree_3404_;
v_isShared_3442_ = v_isSharedCheck_3446_;
goto v_resetjp_3440_;
}
else
{
lean_dec(v_tree_3404_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3446_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v___x_3444_; 
if (v_isShared_3442_ == 0)
{
lean_ctor_set(v___x_3441_, 4, v___x_3439_);
lean_ctor_set(v___x_3441_, 3, v___y_3435_);
lean_ctor_set(v___x_3441_, 2, v_v_3422_);
lean_ctor_set(v___x_3441_, 1, v_k_3421_);
lean_ctor_set(v___x_3441_, 0, v___x_3432_);
v___x_3444_ = v___x_3441_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v___x_3432_);
lean_ctor_set(v_reuseFailAlloc_3445_, 1, v_k_3421_);
lean_ctor_set(v_reuseFailAlloc_3445_, 2, v_v_3422_);
lean_ctor_set(v_reuseFailAlloc_3445_, 3, v___y_3435_);
lean_ctor_set(v_reuseFailAlloc_3445_, 4, v___x_3439_);
v___x_3444_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
return v___x_3444_;
}
}
}
}
v___jp_3454_:
{
lean_object* v___x_3456_; lean_object* v___x_3458_; 
v___x_3456_ = lean_nat_add(v___x_3453_, v___y_3455_);
lean_dec(v___y_3455_);
lean_dec(v___x_3453_);
if (v_isShared_3402_ == 0)
{
lean_ctor_set(v___x_3401_, 4, v_l_3423_);
lean_ctor_set(v___x_3401_, 3, v_l_3250_);
lean_ctor_set(v___x_3401_, 2, v_v_3249_);
lean_ctor_set(v___x_3401_, 1, v_k_3248_);
lean_ctor_set(v___x_3401_, 0, v___x_3456_);
v___x_3458_ = v___x_3401_;
goto v_reusejp_3457_;
}
else
{
lean_object* v_reuseFailAlloc_3462_; 
v_reuseFailAlloc_3462_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3462_, 0, v___x_3456_);
lean_ctor_set(v_reuseFailAlloc_3462_, 1, v_k_3248_);
lean_ctor_set(v_reuseFailAlloc_3462_, 2, v_v_3249_);
lean_ctor_set(v_reuseFailAlloc_3462_, 3, v_l_3250_);
lean_ctor_set(v_reuseFailAlloc_3462_, 4, v_l_3423_);
v___x_3458_ = v_reuseFailAlloc_3462_;
goto v_reusejp_3457_;
}
v_reusejp_3457_:
{
lean_object* v___x_3459_; 
v___x_3459_ = lean_nat_add(v___x_3257_, v_size_3407_);
if (lean_obj_tag(v_r_3424_) == 0)
{
lean_object* v_size_3460_; 
v_size_3460_ = lean_ctor_get(v_r_3424_, 0);
lean_inc(v_size_3460_);
v___y_3434_ = v___x_3459_;
v___y_3435_ = v___x_3458_;
v___y_3436_ = v_size_3460_;
goto v___jp_3433_;
}
else
{
lean_object* v___x_3461_; 
v___x_3461_ = lean_unsigned_to_nat(0u);
v___y_3434_ = v___x_3459_;
v___y_3435_ = v___x_3458_;
v___y_3436_ = v___x_3461_;
goto v___jp_3433_;
}
}
}
}
}
else
{
lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3476_; 
v___x_3471_ = lean_nat_add(v___x_3257_, v_size_3247_);
lean_dec(v_size_3247_);
v___x_3472_ = lean_nat_add(v___x_3471_, v_size_3407_);
lean_dec(v___x_3471_);
v___x_3473_ = lean_nat_add(v___x_3257_, v_size_3407_);
v___x_3474_ = lean_nat_add(v___x_3473_, v_size_3420_);
lean_dec(v___x_3473_);
if (v_isShared_3402_ == 0)
{
lean_ctor_set(v___x_3401_, 4, v_tree_3404_);
lean_ctor_set(v___x_3401_, 3, v_r_3251_);
lean_ctor_set(v___x_3401_, 2, v_v_3406_);
lean_ctor_set(v___x_3401_, 1, v_k_3405_);
lean_ctor_set(v___x_3401_, 0, v___x_3474_);
v___x_3476_ = v___x_3401_;
goto v_reusejp_3475_;
}
else
{
lean_object* v_reuseFailAlloc_3480_; 
v_reuseFailAlloc_3480_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3480_, 0, v___x_3474_);
lean_ctor_set(v_reuseFailAlloc_3480_, 1, v_k_3405_);
lean_ctor_set(v_reuseFailAlloc_3480_, 2, v_v_3406_);
lean_ctor_set(v_reuseFailAlloc_3480_, 3, v_r_3251_);
lean_ctor_set(v_reuseFailAlloc_3480_, 4, v_tree_3404_);
v___x_3476_ = v_reuseFailAlloc_3480_;
goto v_reusejp_3475_;
}
v_reusejp_3475_:
{
lean_object* v___x_3478_; 
if (v_isShared_3418_ == 0)
{
lean_ctor_set(v___x_3417_, 4, v___x_3476_);
lean_ctor_set(v___x_3417_, 0, v___x_3472_);
v___x_3478_ = v___x_3417_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3479_; 
v_reuseFailAlloc_3479_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3479_, 0, v___x_3472_);
lean_ctor_set(v_reuseFailAlloc_3479_, 1, v_k_3248_);
lean_ctor_set(v_reuseFailAlloc_3479_, 2, v_v_3249_);
lean_ctor_set(v_reuseFailAlloc_3479_, 3, v_l_3250_);
lean_ctor_set(v_reuseFailAlloc_3479_, 4, v___x_3476_);
v___x_3478_ = v_reuseFailAlloc_3479_;
goto v_reusejp_3477_;
}
v_reusejp_3477_:
{
return v___x_3478_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_3250_) == 0)
{
lean_object* v___x_3488_; uint8_t v_isShared_3489_; uint8_t v_isSharedCheck_3510_; 
lean_inc_ref(v_l_3250_);
lean_inc(v_v_3249_);
lean_inc(v_k_3248_);
lean_inc(v_size_3247_);
v_isSharedCheck_3510_ = !lean_is_exclusive(v_l_3067_);
if (v_isSharedCheck_3510_ == 0)
{
lean_object* v_unused_3511_; lean_object* v_unused_3512_; lean_object* v_unused_3513_; lean_object* v_unused_3514_; lean_object* v_unused_3515_; 
v_unused_3511_ = lean_ctor_get(v_l_3067_, 4);
lean_dec(v_unused_3511_);
v_unused_3512_ = lean_ctor_get(v_l_3067_, 3);
lean_dec(v_unused_3512_);
v_unused_3513_ = lean_ctor_get(v_l_3067_, 2);
lean_dec(v_unused_3513_);
v_unused_3514_ = lean_ctor_get(v_l_3067_, 1);
lean_dec(v_unused_3514_);
v_unused_3515_ = lean_ctor_get(v_l_3067_, 0);
lean_dec(v_unused_3515_);
v___x_3488_ = v_l_3067_;
v_isShared_3489_ = v_isSharedCheck_3510_;
goto v_resetjp_3487_;
}
else
{
lean_dec(v_l_3067_);
v___x_3488_ = lean_box(0);
v_isShared_3489_ = v_isSharedCheck_3510_;
goto v_resetjp_3487_;
}
v_resetjp_3487_:
{
if (lean_obj_tag(v_r_3251_) == 0)
{
lean_object* v_k_3490_; lean_object* v_v_3491_; lean_object* v_size_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3496_; 
v_k_3490_ = lean_ctor_get(v___x_3403_, 0);
lean_inc(v_k_3490_);
v_v_3491_ = lean_ctor_get(v___x_3403_, 1);
lean_inc(v_v_3491_);
lean_dec_ref(v___x_3403_);
v_size_3492_ = lean_ctor_get(v_r_3251_, 0);
v___x_3493_ = lean_nat_add(v___x_3257_, v_size_3247_);
lean_dec(v_size_3247_);
v___x_3494_ = lean_nat_add(v___x_3257_, v_size_3492_);
if (v_isShared_3402_ == 0)
{
lean_ctor_set(v___x_3401_, 4, v_tree_3404_);
lean_ctor_set(v___x_3401_, 3, v_r_3251_);
lean_ctor_set(v___x_3401_, 2, v_v_3491_);
lean_ctor_set(v___x_3401_, 1, v_k_3490_);
lean_ctor_set(v___x_3401_, 0, v___x_3494_);
v___x_3496_ = v___x_3401_;
goto v_reusejp_3495_;
}
else
{
lean_object* v_reuseFailAlloc_3500_; 
v_reuseFailAlloc_3500_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3500_, 0, v___x_3494_);
lean_ctor_set(v_reuseFailAlloc_3500_, 1, v_k_3490_);
lean_ctor_set(v_reuseFailAlloc_3500_, 2, v_v_3491_);
lean_ctor_set(v_reuseFailAlloc_3500_, 3, v_r_3251_);
lean_ctor_set(v_reuseFailAlloc_3500_, 4, v_tree_3404_);
v___x_3496_ = v_reuseFailAlloc_3500_;
goto v_reusejp_3495_;
}
v_reusejp_3495_:
{
lean_object* v___x_3498_; 
if (v_isShared_3489_ == 0)
{
lean_ctor_set(v___x_3488_, 4, v___x_3496_);
lean_ctor_set(v___x_3488_, 0, v___x_3493_);
v___x_3498_ = v___x_3488_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v___x_3493_);
lean_ctor_set(v_reuseFailAlloc_3499_, 1, v_k_3248_);
lean_ctor_set(v_reuseFailAlloc_3499_, 2, v_v_3249_);
lean_ctor_set(v_reuseFailAlloc_3499_, 3, v_l_3250_);
lean_ctor_set(v_reuseFailAlloc_3499_, 4, v___x_3496_);
v___x_3498_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
return v___x_3498_;
}
}
}
else
{
lean_object* v_k_3501_; lean_object* v_v_3502_; lean_object* v___x_3503_; lean_object* v___x_3505_; 
lean_dec(v_size_3247_);
v_k_3501_ = lean_ctor_get(v___x_3403_, 0);
lean_inc(v_k_3501_);
v_v_3502_ = lean_ctor_get(v___x_3403_, 1);
lean_inc(v_v_3502_);
lean_dec_ref(v___x_3403_);
v___x_3503_ = lean_unsigned_to_nat(3u);
if (v_isShared_3402_ == 0)
{
lean_ctor_set(v___x_3401_, 4, v_r_3251_);
lean_ctor_set(v___x_3401_, 3, v_r_3251_);
lean_ctor_set(v___x_3401_, 2, v_v_3502_);
lean_ctor_set(v___x_3401_, 1, v_k_3501_);
lean_ctor_set(v___x_3401_, 0, v___x_3257_);
v___x_3505_ = v___x_3401_;
goto v_reusejp_3504_;
}
else
{
lean_object* v_reuseFailAlloc_3509_; 
v_reuseFailAlloc_3509_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3509_, 0, v___x_3257_);
lean_ctor_set(v_reuseFailAlloc_3509_, 1, v_k_3501_);
lean_ctor_set(v_reuseFailAlloc_3509_, 2, v_v_3502_);
lean_ctor_set(v_reuseFailAlloc_3509_, 3, v_r_3251_);
lean_ctor_set(v_reuseFailAlloc_3509_, 4, v_r_3251_);
v___x_3505_ = v_reuseFailAlloc_3509_;
goto v_reusejp_3504_;
}
v_reusejp_3504_:
{
lean_object* v___x_3507_; 
if (v_isShared_3489_ == 0)
{
lean_ctor_set(v___x_3488_, 4, v___x_3505_);
lean_ctor_set(v___x_3488_, 0, v___x_3503_);
v___x_3507_ = v___x_3488_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v___x_3503_);
lean_ctor_set(v_reuseFailAlloc_3508_, 1, v_k_3248_);
lean_ctor_set(v_reuseFailAlloc_3508_, 2, v_v_3249_);
lean_ctor_set(v_reuseFailAlloc_3508_, 3, v_l_3250_);
lean_ctor_set(v_reuseFailAlloc_3508_, 4, v___x_3505_);
v___x_3507_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
return v___x_3507_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_3251_) == 0)
{
lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3540_; 
lean_inc(v_l_3250_);
lean_inc(v_v_3249_);
lean_inc(v_k_3248_);
v_isSharedCheck_3540_ = !lean_is_exclusive(v_l_3067_);
if (v_isSharedCheck_3540_ == 0)
{
lean_object* v_unused_3541_; lean_object* v_unused_3542_; lean_object* v_unused_3543_; lean_object* v_unused_3544_; lean_object* v_unused_3545_; 
v_unused_3541_ = lean_ctor_get(v_l_3067_, 4);
lean_dec(v_unused_3541_);
v_unused_3542_ = lean_ctor_get(v_l_3067_, 3);
lean_dec(v_unused_3542_);
v_unused_3543_ = lean_ctor_get(v_l_3067_, 2);
lean_dec(v_unused_3543_);
v_unused_3544_ = lean_ctor_get(v_l_3067_, 1);
lean_dec(v_unused_3544_);
v_unused_3545_ = lean_ctor_get(v_l_3067_, 0);
lean_dec(v_unused_3545_);
v___x_3517_ = v_l_3067_;
v_isShared_3518_ = v_isSharedCheck_3540_;
goto v_resetjp_3516_;
}
else
{
lean_dec(v_l_3067_);
v___x_3517_ = lean_box(0);
v_isShared_3518_ = v_isSharedCheck_3540_;
goto v_resetjp_3516_;
}
v_resetjp_3516_:
{
lean_object* v_k_3519_; lean_object* v_v_3520_; lean_object* v_k_3521_; lean_object* v_v_3522_; lean_object* v___x_3524_; uint8_t v_isShared_3525_; uint8_t v_isSharedCheck_3536_; 
v_k_3519_ = lean_ctor_get(v___x_3403_, 0);
lean_inc(v_k_3519_);
v_v_3520_ = lean_ctor_get(v___x_3403_, 1);
lean_inc(v_v_3520_);
lean_dec_ref(v___x_3403_);
v_k_3521_ = lean_ctor_get(v_r_3251_, 1);
v_v_3522_ = lean_ctor_get(v_r_3251_, 2);
v_isSharedCheck_3536_ = !lean_is_exclusive(v_r_3251_);
if (v_isSharedCheck_3536_ == 0)
{
lean_object* v_unused_3537_; lean_object* v_unused_3538_; lean_object* v_unused_3539_; 
v_unused_3537_ = lean_ctor_get(v_r_3251_, 4);
lean_dec(v_unused_3537_);
v_unused_3538_ = lean_ctor_get(v_r_3251_, 3);
lean_dec(v_unused_3538_);
v_unused_3539_ = lean_ctor_get(v_r_3251_, 0);
lean_dec(v_unused_3539_);
v___x_3524_ = v_r_3251_;
v_isShared_3525_ = v_isSharedCheck_3536_;
goto v_resetjp_3523_;
}
else
{
lean_inc(v_v_3522_);
lean_inc(v_k_3521_);
lean_dec(v_r_3251_);
v___x_3524_ = lean_box(0);
v_isShared_3525_ = v_isSharedCheck_3536_;
goto v_resetjp_3523_;
}
v_resetjp_3523_:
{
lean_object* v___x_3526_; lean_object* v___x_3528_; 
v___x_3526_ = lean_unsigned_to_nat(3u);
if (v_isShared_3525_ == 0)
{
lean_ctor_set(v___x_3524_, 4, v_l_3250_);
lean_ctor_set(v___x_3524_, 3, v_l_3250_);
lean_ctor_set(v___x_3524_, 2, v_v_3249_);
lean_ctor_set(v___x_3524_, 1, v_k_3248_);
lean_ctor_set(v___x_3524_, 0, v___x_3257_);
v___x_3528_ = v___x_3524_;
goto v_reusejp_3527_;
}
else
{
lean_object* v_reuseFailAlloc_3535_; 
v_reuseFailAlloc_3535_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3535_, 0, v___x_3257_);
lean_ctor_set(v_reuseFailAlloc_3535_, 1, v_k_3248_);
lean_ctor_set(v_reuseFailAlloc_3535_, 2, v_v_3249_);
lean_ctor_set(v_reuseFailAlloc_3535_, 3, v_l_3250_);
lean_ctor_set(v_reuseFailAlloc_3535_, 4, v_l_3250_);
v___x_3528_ = v_reuseFailAlloc_3535_;
goto v_reusejp_3527_;
}
v_reusejp_3527_:
{
lean_object* v___x_3530_; 
if (v_isShared_3402_ == 0)
{
lean_ctor_set(v___x_3401_, 4, v_l_3250_);
lean_ctor_set(v___x_3401_, 3, v_l_3250_);
lean_ctor_set(v___x_3401_, 2, v_v_3520_);
lean_ctor_set(v___x_3401_, 1, v_k_3519_);
lean_ctor_set(v___x_3401_, 0, v___x_3257_);
v___x_3530_ = v___x_3401_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3534_; 
v_reuseFailAlloc_3534_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3534_, 0, v___x_3257_);
lean_ctor_set(v_reuseFailAlloc_3534_, 1, v_k_3519_);
lean_ctor_set(v_reuseFailAlloc_3534_, 2, v_v_3520_);
lean_ctor_set(v_reuseFailAlloc_3534_, 3, v_l_3250_);
lean_ctor_set(v_reuseFailAlloc_3534_, 4, v_l_3250_);
v___x_3530_ = v_reuseFailAlloc_3534_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
lean_object* v___x_3532_; 
if (v_isShared_3518_ == 0)
{
lean_ctor_set(v___x_3517_, 4, v___x_3530_);
lean_ctor_set(v___x_3517_, 3, v___x_3528_);
lean_ctor_set(v___x_3517_, 2, v_v_3522_);
lean_ctor_set(v___x_3517_, 1, v_k_3521_);
lean_ctor_set(v___x_3517_, 0, v___x_3526_);
v___x_3532_ = v___x_3517_;
goto v_reusejp_3531_;
}
else
{
lean_object* v_reuseFailAlloc_3533_; 
v_reuseFailAlloc_3533_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3533_, 0, v___x_3526_);
lean_ctor_set(v_reuseFailAlloc_3533_, 1, v_k_3521_);
lean_ctor_set(v_reuseFailAlloc_3533_, 2, v_v_3522_);
lean_ctor_set(v_reuseFailAlloc_3533_, 3, v___x_3528_);
lean_ctor_set(v_reuseFailAlloc_3533_, 4, v___x_3530_);
v___x_3532_ = v_reuseFailAlloc_3533_;
goto v_reusejp_3531_;
}
v_reusejp_3531_:
{
return v___x_3532_;
}
}
}
}
}
}
else
{
lean_object* v_k_3546_; lean_object* v_v_3547_; lean_object* v___x_3548_; lean_object* v___x_3550_; 
v_k_3546_ = lean_ctor_get(v___x_3403_, 0);
lean_inc(v_k_3546_);
v_v_3547_ = lean_ctor_get(v___x_3403_, 1);
lean_inc(v_v_3547_);
lean_dec_ref(v___x_3403_);
v___x_3548_ = lean_unsigned_to_nat(2u);
if (v_isShared_3402_ == 0)
{
lean_ctor_set(v___x_3401_, 4, v_r_3251_);
lean_ctor_set(v___x_3401_, 3, v_l_3067_);
lean_ctor_set(v___x_3401_, 2, v_v_3547_);
lean_ctor_set(v___x_3401_, 1, v_k_3546_);
lean_ctor_set(v___x_3401_, 0, v___x_3548_);
v___x_3550_ = v___x_3401_;
goto v_reusejp_3549_;
}
else
{
lean_object* v_reuseFailAlloc_3551_; 
v_reuseFailAlloc_3551_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3551_, 0, v___x_3548_);
lean_ctor_set(v_reuseFailAlloc_3551_, 1, v_k_3546_);
lean_ctor_set(v_reuseFailAlloc_3551_, 2, v_v_3547_);
lean_ctor_set(v_reuseFailAlloc_3551_, 3, v_l_3067_);
lean_ctor_set(v_reuseFailAlloc_3551_, 4, v_r_3251_);
v___x_3550_ = v_reuseFailAlloc_3551_;
goto v_reusejp_3549_;
}
v_reusejp_3549_:
{
return v___x_3550_;
}
}
}
}
}
}
}
else
{
return v_l_3067_;
}
}
else
{
return v_r_3068_;
}
}
default: 
{
lean_object* v_impl_3558_; lean_object* v___x_3559_; 
v_impl_3558_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_3063_, v_r_3068_);
v___x_3559_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_3558_) == 0)
{
if (lean_obj_tag(v_l_3067_) == 0)
{
lean_object* v_size_3560_; lean_object* v_size_3561_; lean_object* v_k_3562_; lean_object* v_v_3563_; lean_object* v_l_3564_; lean_object* v_r_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; uint8_t v___x_3568_; 
v_size_3560_ = lean_ctor_get(v_impl_3558_, 0);
lean_inc(v_size_3560_);
v_size_3561_ = lean_ctor_get(v_l_3067_, 0);
v_k_3562_ = lean_ctor_get(v_l_3067_, 1);
v_v_3563_ = lean_ctor_get(v_l_3067_, 2);
v_l_3564_ = lean_ctor_get(v_l_3067_, 3);
v_r_3565_ = lean_ctor_get(v_l_3067_, 4);
lean_inc(v_r_3565_);
v___x_3566_ = lean_unsigned_to_nat(3u);
v___x_3567_ = lean_nat_mul(v___x_3566_, v_size_3560_);
v___x_3568_ = lean_nat_dec_lt(v___x_3567_, v_size_3561_);
lean_dec(v___x_3567_);
if (v___x_3568_ == 0)
{
lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3572_; 
lean_dec(v_r_3565_);
v___x_3569_ = lean_nat_add(v___x_3559_, v_size_3561_);
v___x_3570_ = lean_nat_add(v___x_3569_, v_size_3560_);
lean_dec(v_size_3560_);
lean_dec(v___x_3569_);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 4, v_impl_3558_);
lean_ctor_set(v___x_3070_, 0, v___x_3570_);
v___x_3572_ = v___x_3070_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v___x_3570_);
lean_ctor_set(v_reuseFailAlloc_3573_, 1, v_k_3065_);
lean_ctor_set(v_reuseFailAlloc_3573_, 2, v_v_3066_);
lean_ctor_set(v_reuseFailAlloc_3573_, 3, v_l_3067_);
lean_ctor_set(v_reuseFailAlloc_3573_, 4, v_impl_3558_);
v___x_3572_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
return v___x_3572_;
}
}
else
{
lean_object* v___x_3575_; uint8_t v_isShared_3576_; uint8_t v_isSharedCheck_3639_; 
lean_inc(v_l_3564_);
lean_inc(v_v_3563_);
lean_inc(v_k_3562_);
lean_inc(v_size_3561_);
v_isSharedCheck_3639_ = !lean_is_exclusive(v_l_3067_);
if (v_isSharedCheck_3639_ == 0)
{
lean_object* v_unused_3640_; lean_object* v_unused_3641_; lean_object* v_unused_3642_; lean_object* v_unused_3643_; lean_object* v_unused_3644_; 
v_unused_3640_ = lean_ctor_get(v_l_3067_, 4);
lean_dec(v_unused_3640_);
v_unused_3641_ = lean_ctor_get(v_l_3067_, 3);
lean_dec(v_unused_3641_);
v_unused_3642_ = lean_ctor_get(v_l_3067_, 2);
lean_dec(v_unused_3642_);
v_unused_3643_ = lean_ctor_get(v_l_3067_, 1);
lean_dec(v_unused_3643_);
v_unused_3644_ = lean_ctor_get(v_l_3067_, 0);
lean_dec(v_unused_3644_);
v___x_3575_ = v_l_3067_;
v_isShared_3576_ = v_isSharedCheck_3639_;
goto v_resetjp_3574_;
}
else
{
lean_dec(v_l_3067_);
v___x_3575_ = lean_box(0);
v_isShared_3576_ = v_isSharedCheck_3639_;
goto v_resetjp_3574_;
}
v_resetjp_3574_:
{
lean_object* v_size_3577_; lean_object* v_size_3578_; lean_object* v_k_3579_; lean_object* v_v_3580_; lean_object* v_l_3581_; lean_object* v_r_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; uint8_t v___x_3585_; 
v_size_3577_ = lean_ctor_get(v_l_3564_, 0);
v_size_3578_ = lean_ctor_get(v_r_3565_, 0);
v_k_3579_ = lean_ctor_get(v_r_3565_, 1);
v_v_3580_ = lean_ctor_get(v_r_3565_, 2);
v_l_3581_ = lean_ctor_get(v_r_3565_, 3);
v_r_3582_ = lean_ctor_get(v_r_3565_, 4);
v___x_3583_ = lean_unsigned_to_nat(2u);
v___x_3584_ = lean_nat_mul(v___x_3583_, v_size_3577_);
v___x_3585_ = lean_nat_dec_lt(v_size_3578_, v___x_3584_);
lean_dec(v___x_3584_);
if (v___x_3585_ == 0)
{
lean_object* v___x_3587_; uint8_t v_isShared_3588_; uint8_t v_isSharedCheck_3614_; 
lean_inc(v_r_3582_);
lean_inc(v_l_3581_);
lean_inc(v_v_3580_);
lean_inc(v_k_3579_);
v_isSharedCheck_3614_ = !lean_is_exclusive(v_r_3565_);
if (v_isSharedCheck_3614_ == 0)
{
lean_object* v_unused_3615_; lean_object* v_unused_3616_; lean_object* v_unused_3617_; lean_object* v_unused_3618_; lean_object* v_unused_3619_; 
v_unused_3615_ = lean_ctor_get(v_r_3565_, 4);
lean_dec(v_unused_3615_);
v_unused_3616_ = lean_ctor_get(v_r_3565_, 3);
lean_dec(v_unused_3616_);
v_unused_3617_ = lean_ctor_get(v_r_3565_, 2);
lean_dec(v_unused_3617_);
v_unused_3618_ = lean_ctor_get(v_r_3565_, 1);
lean_dec(v_unused_3618_);
v_unused_3619_ = lean_ctor_get(v_r_3565_, 0);
lean_dec(v_unused_3619_);
v___x_3587_ = v_r_3565_;
v_isShared_3588_ = v_isSharedCheck_3614_;
goto v_resetjp_3586_;
}
else
{
lean_dec(v_r_3565_);
v___x_3587_ = lean_box(0);
v_isShared_3588_ = v_isSharedCheck_3614_;
goto v_resetjp_3586_;
}
v_resetjp_3586_:
{
lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___y_3592_; lean_object* v___y_3593_; lean_object* v___y_3594_; lean_object* v___x_3602_; lean_object* v___y_3604_; 
v___x_3589_ = lean_nat_add(v___x_3559_, v_size_3561_);
lean_dec(v_size_3561_);
v___x_3590_ = lean_nat_add(v___x_3589_, v_size_3560_);
lean_dec(v___x_3589_);
v___x_3602_ = lean_nat_add(v___x_3559_, v_size_3577_);
if (lean_obj_tag(v_l_3581_) == 0)
{
lean_object* v_size_3612_; 
v_size_3612_ = lean_ctor_get(v_l_3581_, 0);
lean_inc(v_size_3612_);
v___y_3604_ = v_size_3612_;
goto v___jp_3603_;
}
else
{
lean_object* v___x_3613_; 
v___x_3613_ = lean_unsigned_to_nat(0u);
v___y_3604_ = v___x_3613_;
goto v___jp_3603_;
}
v___jp_3591_:
{
lean_object* v___x_3595_; lean_object* v___x_3597_; 
v___x_3595_ = lean_nat_add(v___y_3592_, v___y_3594_);
lean_dec(v___y_3594_);
lean_dec(v___y_3592_);
if (v_isShared_3588_ == 0)
{
lean_ctor_set(v___x_3587_, 4, v_impl_3558_);
lean_ctor_set(v___x_3587_, 3, v_r_3582_);
lean_ctor_set(v___x_3587_, 2, v_v_3066_);
lean_ctor_set(v___x_3587_, 1, v_k_3065_);
lean_ctor_set(v___x_3587_, 0, v___x_3595_);
v___x_3597_ = v___x_3587_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3601_; 
v_reuseFailAlloc_3601_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3601_, 0, v___x_3595_);
lean_ctor_set(v_reuseFailAlloc_3601_, 1, v_k_3065_);
lean_ctor_set(v_reuseFailAlloc_3601_, 2, v_v_3066_);
lean_ctor_set(v_reuseFailAlloc_3601_, 3, v_r_3582_);
lean_ctor_set(v_reuseFailAlloc_3601_, 4, v_impl_3558_);
v___x_3597_ = v_reuseFailAlloc_3601_;
goto v_reusejp_3596_;
}
v_reusejp_3596_:
{
lean_object* v___x_3599_; 
if (v_isShared_3576_ == 0)
{
lean_ctor_set(v___x_3575_, 4, v___x_3597_);
lean_ctor_set(v___x_3575_, 3, v___y_3593_);
lean_ctor_set(v___x_3575_, 2, v_v_3580_);
lean_ctor_set(v___x_3575_, 1, v_k_3579_);
lean_ctor_set(v___x_3575_, 0, v___x_3590_);
v___x_3599_ = v___x_3575_;
goto v_reusejp_3598_;
}
else
{
lean_object* v_reuseFailAlloc_3600_; 
v_reuseFailAlloc_3600_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3600_, 0, v___x_3590_);
lean_ctor_set(v_reuseFailAlloc_3600_, 1, v_k_3579_);
lean_ctor_set(v_reuseFailAlloc_3600_, 2, v_v_3580_);
lean_ctor_set(v_reuseFailAlloc_3600_, 3, v___y_3593_);
lean_ctor_set(v_reuseFailAlloc_3600_, 4, v___x_3597_);
v___x_3599_ = v_reuseFailAlloc_3600_;
goto v_reusejp_3598_;
}
v_reusejp_3598_:
{
return v___x_3599_;
}
}
}
v___jp_3603_:
{
lean_object* v___x_3605_; lean_object* v___x_3607_; 
v___x_3605_ = lean_nat_add(v___x_3602_, v___y_3604_);
lean_dec(v___y_3604_);
lean_dec(v___x_3602_);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 4, v_l_3581_);
lean_ctor_set(v___x_3070_, 3, v_l_3564_);
lean_ctor_set(v___x_3070_, 2, v_v_3563_);
lean_ctor_set(v___x_3070_, 1, v_k_3562_);
lean_ctor_set(v___x_3070_, 0, v___x_3605_);
v___x_3607_ = v___x_3070_;
goto v_reusejp_3606_;
}
else
{
lean_object* v_reuseFailAlloc_3611_; 
v_reuseFailAlloc_3611_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3611_, 0, v___x_3605_);
lean_ctor_set(v_reuseFailAlloc_3611_, 1, v_k_3562_);
lean_ctor_set(v_reuseFailAlloc_3611_, 2, v_v_3563_);
lean_ctor_set(v_reuseFailAlloc_3611_, 3, v_l_3564_);
lean_ctor_set(v_reuseFailAlloc_3611_, 4, v_l_3581_);
v___x_3607_ = v_reuseFailAlloc_3611_;
goto v_reusejp_3606_;
}
v_reusejp_3606_:
{
lean_object* v___x_3608_; 
v___x_3608_ = lean_nat_add(v___x_3559_, v_size_3560_);
lean_dec(v_size_3560_);
if (lean_obj_tag(v_r_3582_) == 0)
{
lean_object* v_size_3609_; 
v_size_3609_ = lean_ctor_get(v_r_3582_, 0);
lean_inc(v_size_3609_);
v___y_3592_ = v___x_3608_;
v___y_3593_ = v___x_3607_;
v___y_3594_ = v_size_3609_;
goto v___jp_3591_;
}
else
{
lean_object* v___x_3610_; 
v___x_3610_ = lean_unsigned_to_nat(0u);
v___y_3592_ = v___x_3608_;
v___y_3593_ = v___x_3607_;
v___y_3594_ = v___x_3610_;
goto v___jp_3591_;
}
}
}
}
}
else
{
lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3625_; 
lean_del_object(v___x_3070_);
v___x_3620_ = lean_nat_add(v___x_3559_, v_size_3561_);
lean_dec(v_size_3561_);
v___x_3621_ = lean_nat_add(v___x_3620_, v_size_3560_);
lean_dec(v___x_3620_);
v___x_3622_ = lean_nat_add(v___x_3559_, v_size_3560_);
lean_dec(v_size_3560_);
v___x_3623_ = lean_nat_add(v___x_3622_, v_size_3578_);
lean_dec(v___x_3622_);
lean_inc_ref(v_impl_3558_);
if (v_isShared_3576_ == 0)
{
lean_ctor_set(v___x_3575_, 4, v_impl_3558_);
lean_ctor_set(v___x_3575_, 3, v_r_3565_);
lean_ctor_set(v___x_3575_, 2, v_v_3066_);
lean_ctor_set(v___x_3575_, 1, v_k_3065_);
lean_ctor_set(v___x_3575_, 0, v___x_3623_);
v___x_3625_ = v___x_3575_;
goto v_reusejp_3624_;
}
else
{
lean_object* v_reuseFailAlloc_3638_; 
v_reuseFailAlloc_3638_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3638_, 0, v___x_3623_);
lean_ctor_set(v_reuseFailAlloc_3638_, 1, v_k_3065_);
lean_ctor_set(v_reuseFailAlloc_3638_, 2, v_v_3066_);
lean_ctor_set(v_reuseFailAlloc_3638_, 3, v_r_3565_);
lean_ctor_set(v_reuseFailAlloc_3638_, 4, v_impl_3558_);
v___x_3625_ = v_reuseFailAlloc_3638_;
goto v_reusejp_3624_;
}
v_reusejp_3624_:
{
lean_object* v___x_3627_; uint8_t v_isShared_3628_; uint8_t v_isSharedCheck_3632_; 
v_isSharedCheck_3632_ = !lean_is_exclusive(v_impl_3558_);
if (v_isSharedCheck_3632_ == 0)
{
lean_object* v_unused_3633_; lean_object* v_unused_3634_; lean_object* v_unused_3635_; lean_object* v_unused_3636_; lean_object* v_unused_3637_; 
v_unused_3633_ = lean_ctor_get(v_impl_3558_, 4);
lean_dec(v_unused_3633_);
v_unused_3634_ = lean_ctor_get(v_impl_3558_, 3);
lean_dec(v_unused_3634_);
v_unused_3635_ = lean_ctor_get(v_impl_3558_, 2);
lean_dec(v_unused_3635_);
v_unused_3636_ = lean_ctor_get(v_impl_3558_, 1);
lean_dec(v_unused_3636_);
v_unused_3637_ = lean_ctor_get(v_impl_3558_, 0);
lean_dec(v_unused_3637_);
v___x_3627_ = v_impl_3558_;
v_isShared_3628_ = v_isSharedCheck_3632_;
goto v_resetjp_3626_;
}
else
{
lean_dec(v_impl_3558_);
v___x_3627_ = lean_box(0);
v_isShared_3628_ = v_isSharedCheck_3632_;
goto v_resetjp_3626_;
}
v_resetjp_3626_:
{
lean_object* v___x_3630_; 
if (v_isShared_3628_ == 0)
{
lean_ctor_set(v___x_3627_, 4, v___x_3625_);
lean_ctor_set(v___x_3627_, 3, v_l_3564_);
lean_ctor_set(v___x_3627_, 2, v_v_3563_);
lean_ctor_set(v___x_3627_, 1, v_k_3562_);
lean_ctor_set(v___x_3627_, 0, v___x_3621_);
v___x_3630_ = v___x_3627_;
goto v_reusejp_3629_;
}
else
{
lean_object* v_reuseFailAlloc_3631_; 
v_reuseFailAlloc_3631_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3631_, 0, v___x_3621_);
lean_ctor_set(v_reuseFailAlloc_3631_, 1, v_k_3562_);
lean_ctor_set(v_reuseFailAlloc_3631_, 2, v_v_3563_);
lean_ctor_set(v_reuseFailAlloc_3631_, 3, v_l_3564_);
lean_ctor_set(v_reuseFailAlloc_3631_, 4, v___x_3625_);
v___x_3630_ = v_reuseFailAlloc_3631_;
goto v_reusejp_3629_;
}
v_reusejp_3629_:
{
return v___x_3630_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_3645_; lean_object* v___x_3646_; lean_object* v___x_3648_; 
v_size_3645_ = lean_ctor_get(v_impl_3558_, 0);
lean_inc(v_size_3645_);
v___x_3646_ = lean_nat_add(v___x_3559_, v_size_3645_);
lean_dec(v_size_3645_);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 4, v_impl_3558_);
lean_ctor_set(v___x_3070_, 0, v___x_3646_);
v___x_3648_ = v___x_3070_;
goto v_reusejp_3647_;
}
else
{
lean_object* v_reuseFailAlloc_3649_; 
v_reuseFailAlloc_3649_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3649_, 0, v___x_3646_);
lean_ctor_set(v_reuseFailAlloc_3649_, 1, v_k_3065_);
lean_ctor_set(v_reuseFailAlloc_3649_, 2, v_v_3066_);
lean_ctor_set(v_reuseFailAlloc_3649_, 3, v_l_3067_);
lean_ctor_set(v_reuseFailAlloc_3649_, 4, v_impl_3558_);
v___x_3648_ = v_reuseFailAlloc_3649_;
goto v_reusejp_3647_;
}
v_reusejp_3647_:
{
return v___x_3648_;
}
}
}
else
{
if (lean_obj_tag(v_l_3067_) == 0)
{
lean_object* v_l_3650_; 
v_l_3650_ = lean_ctor_get(v_l_3067_, 3);
if (lean_obj_tag(v_l_3650_) == 0)
{
lean_object* v_r_3651_; 
lean_inc_ref(v_l_3650_);
v_r_3651_ = lean_ctor_get(v_l_3067_, 4);
lean_inc(v_r_3651_);
if (lean_obj_tag(v_r_3651_) == 0)
{
lean_object* v_size_3652_; lean_object* v_k_3653_; lean_object* v_v_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3667_; 
v_size_3652_ = lean_ctor_get(v_l_3067_, 0);
v_k_3653_ = lean_ctor_get(v_l_3067_, 1);
v_v_3654_ = lean_ctor_get(v_l_3067_, 2);
v_isSharedCheck_3667_ = !lean_is_exclusive(v_l_3067_);
if (v_isSharedCheck_3667_ == 0)
{
lean_object* v_unused_3668_; lean_object* v_unused_3669_; 
v_unused_3668_ = lean_ctor_get(v_l_3067_, 4);
lean_dec(v_unused_3668_);
v_unused_3669_ = lean_ctor_get(v_l_3067_, 3);
lean_dec(v_unused_3669_);
v___x_3656_ = v_l_3067_;
v_isShared_3657_ = v_isSharedCheck_3667_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_v_3654_);
lean_inc(v_k_3653_);
lean_inc(v_size_3652_);
lean_dec(v_l_3067_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3667_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v_size_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3662_; 
v_size_3658_ = lean_ctor_get(v_r_3651_, 0);
v___x_3659_ = lean_nat_add(v___x_3559_, v_size_3652_);
lean_dec(v_size_3652_);
v___x_3660_ = lean_nat_add(v___x_3559_, v_size_3658_);
if (v_isShared_3657_ == 0)
{
lean_ctor_set(v___x_3656_, 4, v_impl_3558_);
lean_ctor_set(v___x_3656_, 3, v_r_3651_);
lean_ctor_set(v___x_3656_, 2, v_v_3066_);
lean_ctor_set(v___x_3656_, 1, v_k_3065_);
lean_ctor_set(v___x_3656_, 0, v___x_3660_);
v___x_3662_ = v___x_3656_;
goto v_reusejp_3661_;
}
else
{
lean_object* v_reuseFailAlloc_3666_; 
v_reuseFailAlloc_3666_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3666_, 0, v___x_3660_);
lean_ctor_set(v_reuseFailAlloc_3666_, 1, v_k_3065_);
lean_ctor_set(v_reuseFailAlloc_3666_, 2, v_v_3066_);
lean_ctor_set(v_reuseFailAlloc_3666_, 3, v_r_3651_);
lean_ctor_set(v_reuseFailAlloc_3666_, 4, v_impl_3558_);
v___x_3662_ = v_reuseFailAlloc_3666_;
goto v_reusejp_3661_;
}
v_reusejp_3661_:
{
lean_object* v___x_3664_; 
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 4, v___x_3662_);
lean_ctor_set(v___x_3070_, 3, v_l_3650_);
lean_ctor_set(v___x_3070_, 2, v_v_3654_);
lean_ctor_set(v___x_3070_, 1, v_k_3653_);
lean_ctor_set(v___x_3070_, 0, v___x_3659_);
v___x_3664_ = v___x_3070_;
goto v_reusejp_3663_;
}
else
{
lean_object* v_reuseFailAlloc_3665_; 
v_reuseFailAlloc_3665_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3665_, 0, v___x_3659_);
lean_ctor_set(v_reuseFailAlloc_3665_, 1, v_k_3653_);
lean_ctor_set(v_reuseFailAlloc_3665_, 2, v_v_3654_);
lean_ctor_set(v_reuseFailAlloc_3665_, 3, v_l_3650_);
lean_ctor_set(v_reuseFailAlloc_3665_, 4, v___x_3662_);
v___x_3664_ = v_reuseFailAlloc_3665_;
goto v_reusejp_3663_;
}
v_reusejp_3663_:
{
return v___x_3664_;
}
}
}
}
else
{
lean_object* v_k_3670_; lean_object* v_v_3671_; lean_object* v___x_3673_; uint8_t v_isShared_3674_; uint8_t v_isSharedCheck_3682_; 
v_k_3670_ = lean_ctor_get(v_l_3067_, 1);
v_v_3671_ = lean_ctor_get(v_l_3067_, 2);
v_isSharedCheck_3682_ = !lean_is_exclusive(v_l_3067_);
if (v_isSharedCheck_3682_ == 0)
{
lean_object* v_unused_3683_; lean_object* v_unused_3684_; lean_object* v_unused_3685_; 
v_unused_3683_ = lean_ctor_get(v_l_3067_, 4);
lean_dec(v_unused_3683_);
v_unused_3684_ = lean_ctor_get(v_l_3067_, 3);
lean_dec(v_unused_3684_);
v_unused_3685_ = lean_ctor_get(v_l_3067_, 0);
lean_dec(v_unused_3685_);
v___x_3673_ = v_l_3067_;
v_isShared_3674_ = v_isSharedCheck_3682_;
goto v_resetjp_3672_;
}
else
{
lean_inc(v_v_3671_);
lean_inc(v_k_3670_);
lean_dec(v_l_3067_);
v___x_3673_ = lean_box(0);
v_isShared_3674_ = v_isSharedCheck_3682_;
goto v_resetjp_3672_;
}
v_resetjp_3672_:
{
lean_object* v___x_3675_; lean_object* v___x_3677_; 
v___x_3675_ = lean_unsigned_to_nat(3u);
if (v_isShared_3674_ == 0)
{
lean_ctor_set(v___x_3673_, 3, v_r_3651_);
lean_ctor_set(v___x_3673_, 2, v_v_3066_);
lean_ctor_set(v___x_3673_, 1, v_k_3065_);
lean_ctor_set(v___x_3673_, 0, v___x_3559_);
v___x_3677_ = v___x_3673_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v___x_3559_);
lean_ctor_set(v_reuseFailAlloc_3681_, 1, v_k_3065_);
lean_ctor_set(v_reuseFailAlloc_3681_, 2, v_v_3066_);
lean_ctor_set(v_reuseFailAlloc_3681_, 3, v_r_3651_);
lean_ctor_set(v_reuseFailAlloc_3681_, 4, v_r_3651_);
v___x_3677_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
lean_object* v___x_3679_; 
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 4, v___x_3677_);
lean_ctor_set(v___x_3070_, 3, v_l_3650_);
lean_ctor_set(v___x_3070_, 2, v_v_3671_);
lean_ctor_set(v___x_3070_, 1, v_k_3670_);
lean_ctor_set(v___x_3070_, 0, v___x_3675_);
v___x_3679_ = v___x_3070_;
goto v_reusejp_3678_;
}
else
{
lean_object* v_reuseFailAlloc_3680_; 
v_reuseFailAlloc_3680_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3680_, 0, v___x_3675_);
lean_ctor_set(v_reuseFailAlloc_3680_, 1, v_k_3670_);
lean_ctor_set(v_reuseFailAlloc_3680_, 2, v_v_3671_);
lean_ctor_set(v_reuseFailAlloc_3680_, 3, v_l_3650_);
lean_ctor_set(v_reuseFailAlloc_3680_, 4, v___x_3677_);
v___x_3679_ = v_reuseFailAlloc_3680_;
goto v_reusejp_3678_;
}
v_reusejp_3678_:
{
return v___x_3679_;
}
}
}
}
}
else
{
lean_object* v_r_3686_; 
v_r_3686_ = lean_ctor_get(v_l_3067_, 4);
lean_inc(v_r_3686_);
if (lean_obj_tag(v_r_3686_) == 0)
{
lean_object* v_k_3687_; lean_object* v_v_3688_; lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3711_; 
lean_inc(v_l_3650_);
v_k_3687_ = lean_ctor_get(v_l_3067_, 1);
v_v_3688_ = lean_ctor_get(v_l_3067_, 2);
v_isSharedCheck_3711_ = !lean_is_exclusive(v_l_3067_);
if (v_isSharedCheck_3711_ == 0)
{
lean_object* v_unused_3712_; lean_object* v_unused_3713_; lean_object* v_unused_3714_; 
v_unused_3712_ = lean_ctor_get(v_l_3067_, 4);
lean_dec(v_unused_3712_);
v_unused_3713_ = lean_ctor_get(v_l_3067_, 3);
lean_dec(v_unused_3713_);
v_unused_3714_ = lean_ctor_get(v_l_3067_, 0);
lean_dec(v_unused_3714_);
v___x_3690_ = v_l_3067_;
v_isShared_3691_ = v_isSharedCheck_3711_;
goto v_resetjp_3689_;
}
else
{
lean_inc(v_v_3688_);
lean_inc(v_k_3687_);
lean_dec(v_l_3067_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3711_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
lean_object* v_k_3692_; lean_object* v_v_3693_; lean_object* v___x_3695_; uint8_t v_isShared_3696_; uint8_t v_isSharedCheck_3707_; 
v_k_3692_ = lean_ctor_get(v_r_3686_, 1);
v_v_3693_ = lean_ctor_get(v_r_3686_, 2);
v_isSharedCheck_3707_ = !lean_is_exclusive(v_r_3686_);
if (v_isSharedCheck_3707_ == 0)
{
lean_object* v_unused_3708_; lean_object* v_unused_3709_; lean_object* v_unused_3710_; 
v_unused_3708_ = lean_ctor_get(v_r_3686_, 4);
lean_dec(v_unused_3708_);
v_unused_3709_ = lean_ctor_get(v_r_3686_, 3);
lean_dec(v_unused_3709_);
v_unused_3710_ = lean_ctor_get(v_r_3686_, 0);
lean_dec(v_unused_3710_);
v___x_3695_ = v_r_3686_;
v_isShared_3696_ = v_isSharedCheck_3707_;
goto v_resetjp_3694_;
}
else
{
lean_inc(v_v_3693_);
lean_inc(v_k_3692_);
lean_dec(v_r_3686_);
v___x_3695_ = lean_box(0);
v_isShared_3696_ = v_isSharedCheck_3707_;
goto v_resetjp_3694_;
}
v_resetjp_3694_:
{
lean_object* v___x_3697_; lean_object* v___x_3699_; 
v___x_3697_ = lean_unsigned_to_nat(3u);
if (v_isShared_3696_ == 0)
{
lean_ctor_set(v___x_3695_, 4, v_l_3650_);
lean_ctor_set(v___x_3695_, 3, v_l_3650_);
lean_ctor_set(v___x_3695_, 2, v_v_3688_);
lean_ctor_set(v___x_3695_, 1, v_k_3687_);
lean_ctor_set(v___x_3695_, 0, v___x_3559_);
v___x_3699_ = v___x_3695_;
goto v_reusejp_3698_;
}
else
{
lean_object* v_reuseFailAlloc_3706_; 
v_reuseFailAlloc_3706_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3706_, 0, v___x_3559_);
lean_ctor_set(v_reuseFailAlloc_3706_, 1, v_k_3687_);
lean_ctor_set(v_reuseFailAlloc_3706_, 2, v_v_3688_);
lean_ctor_set(v_reuseFailAlloc_3706_, 3, v_l_3650_);
lean_ctor_set(v_reuseFailAlloc_3706_, 4, v_l_3650_);
v___x_3699_ = v_reuseFailAlloc_3706_;
goto v_reusejp_3698_;
}
v_reusejp_3698_:
{
lean_object* v___x_3701_; 
if (v_isShared_3691_ == 0)
{
lean_ctor_set(v___x_3690_, 4, v_l_3650_);
lean_ctor_set(v___x_3690_, 2, v_v_3066_);
lean_ctor_set(v___x_3690_, 1, v_k_3065_);
lean_ctor_set(v___x_3690_, 0, v___x_3559_);
v___x_3701_ = v___x_3690_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3705_; 
v_reuseFailAlloc_3705_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3705_, 0, v___x_3559_);
lean_ctor_set(v_reuseFailAlloc_3705_, 1, v_k_3065_);
lean_ctor_set(v_reuseFailAlloc_3705_, 2, v_v_3066_);
lean_ctor_set(v_reuseFailAlloc_3705_, 3, v_l_3650_);
lean_ctor_set(v_reuseFailAlloc_3705_, 4, v_l_3650_);
v___x_3701_ = v_reuseFailAlloc_3705_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
lean_object* v___x_3703_; 
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 4, v___x_3701_);
lean_ctor_set(v___x_3070_, 3, v___x_3699_);
lean_ctor_set(v___x_3070_, 2, v_v_3693_);
lean_ctor_set(v___x_3070_, 1, v_k_3692_);
lean_ctor_set(v___x_3070_, 0, v___x_3697_);
v___x_3703_ = v___x_3070_;
goto v_reusejp_3702_;
}
else
{
lean_object* v_reuseFailAlloc_3704_; 
v_reuseFailAlloc_3704_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3704_, 0, v___x_3697_);
lean_ctor_set(v_reuseFailAlloc_3704_, 1, v_k_3692_);
lean_ctor_set(v_reuseFailAlloc_3704_, 2, v_v_3693_);
lean_ctor_set(v_reuseFailAlloc_3704_, 3, v___x_3699_);
lean_ctor_set(v_reuseFailAlloc_3704_, 4, v___x_3701_);
v___x_3703_ = v_reuseFailAlloc_3704_;
goto v_reusejp_3702_;
}
v_reusejp_3702_:
{
return v___x_3703_;
}
}
}
}
}
}
else
{
lean_object* v___x_3715_; lean_object* v___x_3717_; 
v___x_3715_ = lean_unsigned_to_nat(2u);
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 4, v_r_3686_);
lean_ctor_set(v___x_3070_, 0, v___x_3715_);
v___x_3717_ = v___x_3070_;
goto v_reusejp_3716_;
}
else
{
lean_object* v_reuseFailAlloc_3718_; 
v_reuseFailAlloc_3718_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3718_, 0, v___x_3715_);
lean_ctor_set(v_reuseFailAlloc_3718_, 1, v_k_3065_);
lean_ctor_set(v_reuseFailAlloc_3718_, 2, v_v_3066_);
lean_ctor_set(v_reuseFailAlloc_3718_, 3, v_l_3067_);
lean_ctor_set(v_reuseFailAlloc_3718_, 4, v_r_3686_);
v___x_3717_ = v_reuseFailAlloc_3718_;
goto v_reusejp_3716_;
}
v_reusejp_3716_:
{
return v___x_3717_;
}
}
}
}
else
{
lean_object* v___x_3720_; 
if (v_isShared_3071_ == 0)
{
lean_ctor_set(v___x_3070_, 4, v_l_3067_);
lean_ctor_set(v___x_3070_, 0, v___x_3559_);
v___x_3720_ = v___x_3070_;
goto v_reusejp_3719_;
}
else
{
lean_object* v_reuseFailAlloc_3721_; 
v_reuseFailAlloc_3721_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3721_, 0, v___x_3559_);
lean_ctor_set(v_reuseFailAlloc_3721_, 1, v_k_3065_);
lean_ctor_set(v_reuseFailAlloc_3721_, 2, v_v_3066_);
lean_ctor_set(v_reuseFailAlloc_3721_, 3, v_l_3067_);
lean_ctor_set(v_reuseFailAlloc_3721_, 4, v_l_3067_);
v___x_3720_ = v_reuseFailAlloc_3721_;
goto v_reusejp_3719_;
}
v_reusejp_3719_:
{
return v___x_3720_;
}
}
}
}
}
}
}
else
{
return v_t_3064_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg___boxed(lean_object* v_k_3724_, lean_object* v_t_3725_){
_start:
{
lean_object* v_res_3726_; 
v_res_3726_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_3724_, v_t_3725_);
lean_dec(v_k_3724_);
return v_res_3726_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(lean_object* v_declName_3727_, lean_object* v_x_3728_){
_start:
{
lean_object* v___x_3729_; 
v___x_3729_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_declName_3727_, v_x_3728_);
return v___x_3729_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed(lean_object* v_declName_3730_, lean_object* v_x_3731_){
_start:
{
lean_object* v_res_3732_; 
v_res_3732_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(v_declName_3730_, v_x_3731_);
lean_dec(v_declName_3730_);
return v_res_3732_;
}
}
static lean_object* _init_l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1(void){
_start:
{
lean_object* v___x_3734_; lean_object* v___x_3735_; 
v___x_3734_ = ((lean_object*)(l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0));
v___x_3735_ = l_Lean_stringToMessageData(v___x_3734_);
return v___x_3735_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(lean_object* v_declName_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_){
_start:
{
lean_object* v___x_3744_; lean_object* v_env_3745_; lean_object* v___f_3746_; lean_object* v___y_3748_; lean_object* v___y_3749_; lean_object* v___x_3790_; 
v___x_3744_ = lean_st_ref_get(v___y_3742_);
v_env_3745_ = lean_ctor_get(v___x_3744_, 0);
lean_inc_ref(v_env_3745_);
lean_dec(v___x_3744_);
lean_inc(v_declName_3736_);
v___f_3746_ = lean_alloc_closure((void*)(l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3746_, 0, v_declName_3736_);
v___x_3790_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3745_, v_declName_3736_);
lean_dec_ref(v_env_3745_);
if (lean_obj_tag(v___x_3790_) == 0)
{
lean_dec_ref(v___y_3737_);
lean_dec(v_declName_3736_);
v___y_3748_ = v___y_3740_;
v___y_3749_ = v___y_3742_;
goto v___jp_3747_;
}
else
{
uint8_t v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; 
lean_dec_ref(v___x_3790_);
lean_dec_ref(v___f_3746_);
v___x_3791_ = 0;
v___x_3792_ = lean_obj_once(&l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1, &l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1_once, _init_l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1);
v___x_3793_ = l_Lean_MessageData_ofConstName(v_declName_3736_, v___x_3791_);
v___x_3794_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3794_, 0, v___x_3792_);
lean_ctor_set(v___x_3794_, 1, v___x_3793_);
v___x_3795_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_3796_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3796_, 0, v___x_3794_);
lean_ctor_set(v___x_3796_, 1, v___x_3795_);
v___x_3797_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3796_, v___y_3737_, v___y_3738_, v___y_3739_, v___y_3740_, v___y_3741_, v___y_3742_);
return v___x_3797_;
}
v___jp_3747_:
{
lean_object* v___x_3750_; lean_object* v_env_3751_; lean_object* v_nextMacroScope_3752_; lean_object* v_ngen_3753_; lean_object* v_auxDeclNGen_3754_; lean_object* v_traceState_3755_; lean_object* v_messages_3756_; lean_object* v_infoState_3757_; lean_object* v_snapshotTasks_3758_; lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3788_; 
v___x_3750_ = lean_st_ref_take(v___y_3749_);
v_env_3751_ = lean_ctor_get(v___x_3750_, 0);
v_nextMacroScope_3752_ = lean_ctor_get(v___x_3750_, 1);
v_ngen_3753_ = lean_ctor_get(v___x_3750_, 2);
v_auxDeclNGen_3754_ = lean_ctor_get(v___x_3750_, 3);
v_traceState_3755_ = lean_ctor_get(v___x_3750_, 4);
v_messages_3756_ = lean_ctor_get(v___x_3750_, 6);
v_infoState_3757_ = lean_ctor_get(v___x_3750_, 7);
v_snapshotTasks_3758_ = lean_ctor_get(v___x_3750_, 8);
v_isSharedCheck_3788_ = !lean_is_exclusive(v___x_3750_);
if (v_isSharedCheck_3788_ == 0)
{
lean_object* v_unused_3789_; 
v_unused_3789_ = lean_ctor_get(v___x_3750_, 5);
lean_dec(v_unused_3789_);
v___x_3760_ = v___x_3750_;
v_isShared_3761_ = v_isSharedCheck_3788_;
goto v_resetjp_3759_;
}
else
{
lean_inc(v_snapshotTasks_3758_);
lean_inc(v_infoState_3757_);
lean_inc(v_messages_3756_);
lean_inc(v_traceState_3755_);
lean_inc(v_auxDeclNGen_3754_);
lean_inc(v_ngen_3753_);
lean_inc(v_nextMacroScope_3752_);
lean_inc(v_env_3751_);
lean_dec(v___x_3750_);
v___x_3760_ = lean_box(0);
v_isShared_3761_ = v_isSharedCheck_3788_;
goto v_resetjp_3759_;
}
v_resetjp_3759_:
{
lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3768_; 
v___x_3762_ = l_Lean_docStringExt;
v___x_3763_ = lean_box(2);
v___x_3764_ = lean_box(0);
v___x_3765_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v___x_3762_, v_env_3751_, v___f_3746_, v___x_3763_, v___x_3764_);
v___x_3766_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_3761_ == 0)
{
lean_ctor_set(v___x_3760_, 5, v___x_3766_);
lean_ctor_set(v___x_3760_, 0, v___x_3765_);
v___x_3768_ = v___x_3760_;
goto v_reusejp_3767_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v___x_3765_);
lean_ctor_set(v_reuseFailAlloc_3787_, 1, v_nextMacroScope_3752_);
lean_ctor_set(v_reuseFailAlloc_3787_, 2, v_ngen_3753_);
lean_ctor_set(v_reuseFailAlloc_3787_, 3, v_auxDeclNGen_3754_);
lean_ctor_set(v_reuseFailAlloc_3787_, 4, v_traceState_3755_);
lean_ctor_set(v_reuseFailAlloc_3787_, 5, v___x_3766_);
lean_ctor_set(v_reuseFailAlloc_3787_, 6, v_messages_3756_);
lean_ctor_set(v_reuseFailAlloc_3787_, 7, v_infoState_3757_);
lean_ctor_set(v_reuseFailAlloc_3787_, 8, v_snapshotTasks_3758_);
v___x_3768_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3767_;
}
v_reusejp_3767_:
{
lean_object* v___x_3769_; lean_object* v___x_3770_; lean_object* v_mctx_3771_; lean_object* v_zetaDeltaFVarIds_3772_; lean_object* v_postponed_3773_; lean_object* v_diag_3774_; lean_object* v___x_3776_; uint8_t v_isShared_3777_; uint8_t v_isSharedCheck_3785_; 
v___x_3769_ = lean_st_ref_set(v___y_3749_, v___x_3768_);
v___x_3770_ = lean_st_ref_take(v___y_3748_);
v_mctx_3771_ = lean_ctor_get(v___x_3770_, 0);
v_zetaDeltaFVarIds_3772_ = lean_ctor_get(v___x_3770_, 2);
v_postponed_3773_ = lean_ctor_get(v___x_3770_, 3);
v_diag_3774_ = lean_ctor_get(v___x_3770_, 4);
v_isSharedCheck_3785_ = !lean_is_exclusive(v___x_3770_);
if (v_isSharedCheck_3785_ == 0)
{
lean_object* v_unused_3786_; 
v_unused_3786_ = lean_ctor_get(v___x_3770_, 1);
lean_dec(v_unused_3786_);
v___x_3776_ = v___x_3770_;
v_isShared_3777_ = v_isSharedCheck_3785_;
goto v_resetjp_3775_;
}
else
{
lean_inc(v_diag_3774_);
lean_inc(v_postponed_3773_);
lean_inc(v_zetaDeltaFVarIds_3772_);
lean_inc(v_mctx_3771_);
lean_dec(v___x_3770_);
v___x_3776_ = lean_box(0);
v_isShared_3777_ = v_isSharedCheck_3785_;
goto v_resetjp_3775_;
}
v_resetjp_3775_:
{
lean_object* v___x_3778_; lean_object* v___x_3780_; 
v___x_3778_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_3777_ == 0)
{
lean_ctor_set(v___x_3776_, 1, v___x_3778_);
v___x_3780_ = v___x_3776_;
goto v_reusejp_3779_;
}
else
{
lean_object* v_reuseFailAlloc_3784_; 
v_reuseFailAlloc_3784_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3784_, 0, v_mctx_3771_);
lean_ctor_set(v_reuseFailAlloc_3784_, 1, v___x_3778_);
lean_ctor_set(v_reuseFailAlloc_3784_, 2, v_zetaDeltaFVarIds_3772_);
lean_ctor_set(v_reuseFailAlloc_3784_, 3, v_postponed_3773_);
lean_ctor_set(v_reuseFailAlloc_3784_, 4, v_diag_3774_);
v___x_3780_ = v_reuseFailAlloc_3784_;
goto v_reusejp_3779_;
}
v_reusejp_3779_:
{
lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; 
v___x_3781_ = lean_st_ref_set(v___y_3748_, v___x_3780_);
v___x_3782_ = lean_box(0);
v___x_3783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3783_, 0, v___x_3782_);
return v___x_3783_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___boxed(lean_object* v_declName_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_){
_start:
{
lean_object* v_res_3806_; 
v_res_3806_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(v_declName_3798_, v___y_3799_, v___y_3800_, v___y_3801_, v___y_3802_, v___y_3803_, v___y_3804_);
lean_dec(v___y_3804_);
lean_dec_ref(v___y_3803_);
lean_dec(v___y_3802_);
lean_dec_ref(v___y_3801_);
lean_dec(v___y_3800_);
return v_res_3806_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__1(void){
_start:
{
lean_object* v___x_3808_; lean_object* v___x_3809_; 
v___x_3808_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__0));
v___x_3809_ = l_Lean_stringToMessageData(v___x_3808_);
return v___x_3809_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__3(void){
_start:
{
lean_object* v___x_3811_; lean_object* v___x_3812_; 
v___x_3811_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__2));
v___x_3812_ = l_Lean_stringToMessageData(v___x_3811_);
return v___x_3812_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__5(void){
_start:
{
lean_object* v___x_3814_; lean_object* v___x_3815_; 
v___x_3814_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__4));
v___x_3815_ = l_Lean_stringToMessageData(v___x_3814_);
return v___x_3815_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__7(void){
_start:
{
lean_object* v___x_3817_; lean_object* v___x_3818_; 
v___x_3817_ = ((lean_object*)(l_Lean_makeDocStringVerso___closed__6));
v___x_3818_ = l_Lean_stringToMessageData(v___x_3817_);
return v___x_3818_;
}
}
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso(lean_object* v_declName_3819_, lean_object* v_a_3820_, lean_object* v_a_3821_, lean_object* v_a_3822_, lean_object* v_a_3823_, lean_object* v_a_3824_, lean_object* v_a_3825_){
_start:
{
lean_object* v___x_3827_; lean_object* v_env_3828_; uint8_t v___x_3829_; lean_object* v___x_3830_; 
v___x_3827_ = lean_st_ref_get(v_a_3825_);
v_env_3828_ = lean_ctor_get(v___x_3827_, 0);
lean_inc_ref(v_env_3828_);
lean_dec(v___x_3827_);
v___x_3829_ = 1;
lean_inc(v_declName_3819_);
v___x_3830_ = l_Lean_findInternalDocString_x3f(v_env_3828_, v_declName_3819_, v___x_3829_);
if (lean_obj_tag(v___x_3830_) == 0)
{
lean_object* v_a_3831_; 
v_a_3831_ = lean_ctor_get(v___x_3830_, 0);
lean_inc(v_a_3831_);
lean_dec_ref(v___x_3830_);
if (lean_obj_tag(v_a_3831_) == 1)
{
lean_object* v_val_3832_; 
v_val_3832_ = lean_ctor_get(v_a_3831_, 0);
lean_inc(v_val_3832_);
lean_dec_ref(v_a_3831_);
if (lean_obj_tag(v_val_3832_) == 0)
{
lean_object* v_val_3833_; lean_object* v___x_3835_; uint8_t v_isShared_3836_; uint8_t v_isSharedCheck_3855_; 
v_val_3833_ = lean_ctor_get(v_val_3832_, 0);
v_isSharedCheck_3855_ = !lean_is_exclusive(v_val_3832_);
if (v_isSharedCheck_3855_ == 0)
{
v___x_3835_ = v_val_3832_;
v_isShared_3836_ = v_isSharedCheck_3855_;
goto v_resetjp_3834_;
}
else
{
lean_inc(v_val_3833_);
lean_dec(v_val_3832_);
v___x_3835_ = lean_box(0);
v_isShared_3836_ = v_isSharedCheck_3855_;
goto v_resetjp_3834_;
}
v_resetjp_3834_:
{
lean_object* v___x_3837_; 
v___x_3837_ = l_Lean_removeBuiltinDocString(v_declName_3819_);
if (lean_obj_tag(v___x_3837_) == 0)
{
lean_object* v___x_3838_; 
lean_dec_ref(v___x_3837_);
lean_del_object(v___x_3835_);
lean_inc_ref(v_a_3820_);
lean_inc(v_declName_3819_);
v___x_3838_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(v_declName_3819_, v_a_3820_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_, v_a_3825_);
if (lean_obj_tag(v___x_3838_) == 0)
{
lean_object* v___x_3839_; 
lean_dec_ref(v___x_3838_);
v___x_3839_ = l_Lean_addVersoDocStringFromString(v_declName_3819_, v_val_3833_, v_a_3820_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_, v_a_3825_);
return v___x_3839_;
}
else
{
lean_dec(v_val_3833_);
lean_dec(v_a_3825_);
lean_dec_ref(v_a_3824_);
lean_dec(v_a_3823_);
lean_dec_ref(v_a_3822_);
lean_dec(v_a_3821_);
lean_dec_ref(v_a_3820_);
lean_dec(v_declName_3819_);
return v___x_3838_;
}
}
else
{
lean_object* v_a_3840_; lean_object* v___x_3842_; uint8_t v_isShared_3843_; uint8_t v_isSharedCheck_3854_; 
lean_dec(v_val_3833_);
lean_dec(v_a_3825_);
lean_dec(v_a_3823_);
lean_dec_ref(v_a_3822_);
lean_dec(v_a_3821_);
lean_dec_ref(v_a_3820_);
lean_dec(v_declName_3819_);
v_a_3840_ = lean_ctor_get(v___x_3837_, 0);
v_isSharedCheck_3854_ = !lean_is_exclusive(v___x_3837_);
if (v_isSharedCheck_3854_ == 0)
{
v___x_3842_ = v___x_3837_;
v_isShared_3843_ = v_isSharedCheck_3854_;
goto v_resetjp_3841_;
}
else
{
lean_inc(v_a_3840_);
lean_dec(v___x_3837_);
v___x_3842_ = lean_box(0);
v_isShared_3843_ = v_isSharedCheck_3854_;
goto v_resetjp_3841_;
}
v_resetjp_3841_:
{
lean_object* v_ref_3844_; lean_object* v___x_3845_; lean_object* v___x_3847_; 
v_ref_3844_ = lean_ctor_get(v_a_3824_, 5);
lean_inc(v_ref_3844_);
lean_dec_ref(v_a_3824_);
v___x_3845_ = lean_io_error_to_string(v_a_3840_);
if (v_isShared_3836_ == 0)
{
lean_ctor_set_tag(v___x_3835_, 3);
lean_ctor_set(v___x_3835_, 0, v___x_3845_);
v___x_3847_ = v___x_3835_;
goto v_reusejp_3846_;
}
else
{
lean_object* v_reuseFailAlloc_3853_; 
v_reuseFailAlloc_3853_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3853_, 0, v___x_3845_);
v___x_3847_ = v_reuseFailAlloc_3853_;
goto v_reusejp_3846_;
}
v_reusejp_3846_:
{
lean_object* v___x_3848_; lean_object* v___x_3849_; lean_object* v___x_3851_; 
v___x_3848_ = l_Lean_MessageData_ofFormat(v___x_3847_);
v___x_3849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3849_, 0, v_ref_3844_);
lean_ctor_set(v___x_3849_, 1, v___x_3848_);
if (v_isShared_3843_ == 0)
{
lean_ctor_set(v___x_3842_, 0, v___x_3849_);
v___x_3851_ = v___x_3842_;
goto v_reusejp_3850_;
}
else
{
lean_object* v_reuseFailAlloc_3852_; 
v_reuseFailAlloc_3852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3852_, 0, v___x_3849_);
v___x_3851_ = v_reuseFailAlloc_3852_;
goto v_reusejp_3850_;
}
v_reusejp_3850_:
{
return v___x_3851_;
}
}
}
}
}
}
else
{
lean_object* v___x_3856_; uint8_t v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; 
lean_dec(v_val_3832_);
v___x_3856_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__1, &l_Lean_makeDocStringVerso___closed__1_once, _init_l_Lean_makeDocStringVerso___closed__1);
v___x_3857_ = 0;
v___x_3858_ = l_Lean_MessageData_ofConstName(v_declName_3819_, v___x_3857_);
v___x_3859_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3859_, 0, v___x_3856_);
lean_ctor_set(v___x_3859_, 1, v___x_3858_);
v___x_3860_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__3, &l_Lean_makeDocStringVerso___closed__3_once, _init_l_Lean_makeDocStringVerso___closed__3);
v___x_3861_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3861_, 0, v___x_3859_);
lean_ctor_set(v___x_3861_, 1, v___x_3860_);
v___x_3862_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3861_, v_a_3820_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_, v_a_3825_);
lean_dec(v_a_3825_);
lean_dec_ref(v_a_3824_);
lean_dec(v_a_3823_);
lean_dec_ref(v_a_3822_);
lean_dec(v_a_3821_);
return v___x_3862_;
}
}
else
{
lean_object* v___x_3863_; uint8_t v___x_3864_; lean_object* v___x_3865_; lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; 
lean_dec(v_a_3831_);
v___x_3863_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__5, &l_Lean_makeDocStringVerso___closed__5_once, _init_l_Lean_makeDocStringVerso___closed__5);
v___x_3864_ = 0;
v___x_3865_ = l_Lean_MessageData_ofConstName(v_declName_3819_, v___x_3864_);
v___x_3866_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3866_, 0, v___x_3863_);
lean_ctor_set(v___x_3866_, 1, v___x_3865_);
v___x_3867_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__7, &l_Lean_makeDocStringVerso___closed__7_once, _init_l_Lean_makeDocStringVerso___closed__7);
v___x_3868_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3868_, 0, v___x_3866_);
lean_ctor_set(v___x_3868_, 1, v___x_3867_);
v___x_3869_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3868_, v_a_3820_, v_a_3821_, v_a_3822_, v_a_3823_, v_a_3824_, v_a_3825_);
lean_dec(v_a_3825_);
lean_dec_ref(v_a_3824_);
lean_dec(v_a_3823_);
lean_dec_ref(v_a_3822_);
lean_dec(v_a_3821_);
return v___x_3869_;
}
}
else
{
lean_object* v_a_3870_; lean_object* v___x_3872_; uint8_t v_isShared_3873_; uint8_t v_isSharedCheck_3882_; 
lean_dec(v_a_3825_);
lean_dec(v_a_3823_);
lean_dec_ref(v_a_3822_);
lean_dec(v_a_3821_);
lean_dec_ref(v_a_3820_);
lean_dec(v_declName_3819_);
v_a_3870_ = lean_ctor_get(v___x_3830_, 0);
v_isSharedCheck_3882_ = !lean_is_exclusive(v___x_3830_);
if (v_isSharedCheck_3882_ == 0)
{
v___x_3872_ = v___x_3830_;
v_isShared_3873_ = v_isSharedCheck_3882_;
goto v_resetjp_3871_;
}
else
{
lean_inc(v_a_3870_);
lean_dec(v___x_3830_);
v___x_3872_ = lean_box(0);
v_isShared_3873_ = v_isSharedCheck_3882_;
goto v_resetjp_3871_;
}
v_resetjp_3871_:
{
lean_object* v_ref_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3880_; 
v_ref_3874_ = lean_ctor_get(v_a_3824_, 5);
lean_inc(v_ref_3874_);
lean_dec_ref(v_a_3824_);
v___x_3875_ = lean_io_error_to_string(v_a_3870_);
v___x_3876_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3876_, 0, v___x_3875_);
v___x_3877_ = l_Lean_MessageData_ofFormat(v___x_3876_);
v___x_3878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3878_, 0, v_ref_3874_);
lean_ctor_set(v___x_3878_, 1, v___x_3877_);
if (v_isShared_3873_ == 0)
{
lean_ctor_set(v___x_3872_, 0, v___x_3878_);
v___x_3880_ = v___x_3872_;
goto v_reusejp_3879_;
}
else
{
lean_object* v_reuseFailAlloc_3881_; 
v_reuseFailAlloc_3881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3881_, 0, v___x_3878_);
v___x_3880_ = v_reuseFailAlloc_3881_;
goto v_reusejp_3879_;
}
v_reusejp_3879_:
{
return v___x_3880_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso___boxed(lean_object* v_declName_3883_, lean_object* v_a_3884_, lean_object* v_a_3885_, lean_object* v_a_3886_, lean_object* v_a_3887_, lean_object* v_a_3888_, lean_object* v_a_3889_, lean_object* v_a_3890_){
_start:
{
lean_object* v_res_3891_; 
v_res_3891_ = l_Lean_makeDocStringVerso(v_declName_3883_, v_a_3884_, v_a_3885_, v_a_3886_, v_a_3887_, v_a_3888_, v_a_3889_);
return v_res_3891_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0(lean_object* v_00_u03b2_3892_, lean_object* v_k_3893_, lean_object* v_t_3894_, lean_object* v_h_3895_){
_start:
{
lean_object* v___x_3896_; 
v___x_3896_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_3893_, v_t_3894_);
return v___x_3896_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3897_, lean_object* v_k_3898_, lean_object* v_t_3899_, lean_object* v_h_3900_){
_start:
{
lean_object* v_res_3901_; 
v_res_3901_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0(v_00_u03b2_3897_, v_k_3898_, v_t_3899_, v_h_3900_);
lean_dec(v_k_3898_);
return v_res_3901_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString(lean_object* v_declName_3902_, lean_object* v_binders_3903_, lean_object* v_docComment_3904_, lean_object* v_a_3905_, lean_object* v_a_3906_, lean_object* v_a_3907_, lean_object* v_a_3908_, lean_object* v_a_3909_, lean_object* v_a_3910_){
_start:
{
lean_object* v_options_3912_; lean_object* v___x_3913_; uint8_t v___x_3914_; lean_object* v___x_3915_; 
v_options_3912_ = lean_ctor_get(v_a_3909_, 2);
v___x_3913_ = l_Lean_doc_verso;
v___x_3914_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__6(v_options_3912_, v___x_3913_);
v___x_3915_ = l_Lean_addDocStringOf(v___x_3914_, v_declName_3902_, v_binders_3903_, v_docComment_3904_, v_a_3905_, v_a_3906_, v_a_3907_, v_a_3908_, v_a_3909_, v_a_3910_);
return v___x_3915_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString___boxed(lean_object* v_declName_3916_, lean_object* v_binders_3917_, lean_object* v_docComment_3918_, lean_object* v_a_3919_, lean_object* v_a_3920_, lean_object* v_a_3921_, lean_object* v_a_3922_, lean_object* v_a_3923_, lean_object* v_a_3924_, lean_object* v_a_3925_){
_start:
{
lean_object* v_res_3926_; 
v_res_3926_ = l_Lean_addDocString(v_declName_3916_, v_binders_3917_, v_docComment_3918_, v_a_3919_, v_a_3920_, v_a_3921_, v_a_3922_, v_a_3923_, v_a_3924_);
return v_res_3926_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString_x27(lean_object* v_declName_3927_, lean_object* v_binders_3928_, lean_object* v_docString_x3f_3929_, lean_object* v_a_3930_, lean_object* v_a_3931_, lean_object* v_a_3932_, lean_object* v_a_3933_, lean_object* v_a_3934_, lean_object* v_a_3935_){
_start:
{
if (lean_obj_tag(v_docString_x3f_3929_) == 0)
{
lean_object* v___x_3937_; lean_object* v___x_3938_; 
lean_dec(v_a_3935_);
lean_dec_ref(v_a_3934_);
lean_dec(v_a_3933_);
lean_dec_ref(v_a_3932_);
lean_dec(v_a_3931_);
lean_dec_ref(v_a_3930_);
lean_dec(v_binders_3928_);
lean_dec(v_declName_3927_);
v___x_3937_ = lean_box(0);
v___x_3938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3938_, 0, v___x_3937_);
return v___x_3938_;
}
else
{
lean_object* v_val_3939_; lean_object* v___x_3940_; 
v_val_3939_ = lean_ctor_get(v_docString_x3f_3929_, 0);
lean_inc(v_val_3939_);
lean_dec_ref(v_docString_x3f_3929_);
v___x_3940_ = l_Lean_addDocString(v_declName_3927_, v_binders_3928_, v_val_3939_, v_a_3930_, v_a_3931_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_);
return v___x_3940_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString_x27___boxed(lean_object* v_declName_3941_, lean_object* v_binders_3942_, lean_object* v_docString_x3f_3943_, lean_object* v_a_3944_, lean_object* v_a_3945_, lean_object* v_a_3946_, lean_object* v_a_3947_, lean_object* v_a_3948_, lean_object* v_a_3949_, lean_object* v_a_3950_){
_start:
{
lean_object* v_res_3951_; 
v_res_3951_ = l_Lean_addDocString_x27(v_declName_3941_, v_binders_3942_, v_docString_x3f_3943_, v_a_3944_, v_a_3945_, v_a_3946_, v_a_3947_, v_a_3948_, v_a_3949_);
return v_res_3951_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(lean_object* v_env_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_){
_start:
{
lean_object* v___x_3956_; lean_object* v_nextMacroScope_3957_; lean_object* v_ngen_3958_; lean_object* v_auxDeclNGen_3959_; lean_object* v_traceState_3960_; lean_object* v_messages_3961_; lean_object* v_infoState_3962_; lean_object* v_snapshotTasks_3963_; lean_object* v___x_3965_; uint8_t v_isShared_3966_; uint8_t v_isSharedCheck_3989_; 
v___x_3956_ = lean_st_ref_take(v___y_3954_);
v_nextMacroScope_3957_ = lean_ctor_get(v___x_3956_, 1);
v_ngen_3958_ = lean_ctor_get(v___x_3956_, 2);
v_auxDeclNGen_3959_ = lean_ctor_get(v___x_3956_, 3);
v_traceState_3960_ = lean_ctor_get(v___x_3956_, 4);
v_messages_3961_ = lean_ctor_get(v___x_3956_, 6);
v_infoState_3962_ = lean_ctor_get(v___x_3956_, 7);
v_snapshotTasks_3963_ = lean_ctor_get(v___x_3956_, 8);
v_isSharedCheck_3989_ = !lean_is_exclusive(v___x_3956_);
if (v_isSharedCheck_3989_ == 0)
{
lean_object* v_unused_3990_; lean_object* v_unused_3991_; 
v_unused_3990_ = lean_ctor_get(v___x_3956_, 5);
lean_dec(v_unused_3990_);
v_unused_3991_ = lean_ctor_get(v___x_3956_, 0);
lean_dec(v_unused_3991_);
v___x_3965_ = v___x_3956_;
v_isShared_3966_ = v_isSharedCheck_3989_;
goto v_resetjp_3964_;
}
else
{
lean_inc(v_snapshotTasks_3963_);
lean_inc(v_infoState_3962_);
lean_inc(v_messages_3961_);
lean_inc(v_traceState_3960_);
lean_inc(v_auxDeclNGen_3959_);
lean_inc(v_ngen_3958_);
lean_inc(v_nextMacroScope_3957_);
lean_dec(v___x_3956_);
v___x_3965_ = lean_box(0);
v_isShared_3966_ = v_isSharedCheck_3989_;
goto v_resetjp_3964_;
}
v_resetjp_3964_:
{
lean_object* v___x_3967_; lean_object* v___x_3969_; 
v___x_3967_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_3966_ == 0)
{
lean_ctor_set(v___x_3965_, 5, v___x_3967_);
lean_ctor_set(v___x_3965_, 0, v_env_3952_);
v___x_3969_ = v___x_3965_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3988_; 
v_reuseFailAlloc_3988_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3988_, 0, v_env_3952_);
lean_ctor_set(v_reuseFailAlloc_3988_, 1, v_nextMacroScope_3957_);
lean_ctor_set(v_reuseFailAlloc_3988_, 2, v_ngen_3958_);
lean_ctor_set(v_reuseFailAlloc_3988_, 3, v_auxDeclNGen_3959_);
lean_ctor_set(v_reuseFailAlloc_3988_, 4, v_traceState_3960_);
lean_ctor_set(v_reuseFailAlloc_3988_, 5, v___x_3967_);
lean_ctor_set(v_reuseFailAlloc_3988_, 6, v_messages_3961_);
lean_ctor_set(v_reuseFailAlloc_3988_, 7, v_infoState_3962_);
lean_ctor_set(v_reuseFailAlloc_3988_, 8, v_snapshotTasks_3963_);
v___x_3969_ = v_reuseFailAlloc_3988_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v_mctx_3972_; lean_object* v_zetaDeltaFVarIds_3973_; lean_object* v_postponed_3974_; lean_object* v_diag_3975_; lean_object* v___x_3977_; uint8_t v_isShared_3978_; uint8_t v_isSharedCheck_3986_; 
v___x_3970_ = lean_st_ref_set(v___y_3954_, v___x_3969_);
v___x_3971_ = lean_st_ref_take(v___y_3953_);
v_mctx_3972_ = lean_ctor_get(v___x_3971_, 0);
v_zetaDeltaFVarIds_3973_ = lean_ctor_get(v___x_3971_, 2);
v_postponed_3974_ = lean_ctor_get(v___x_3971_, 3);
v_diag_3975_ = lean_ctor_get(v___x_3971_, 4);
v_isSharedCheck_3986_ = !lean_is_exclusive(v___x_3971_);
if (v_isSharedCheck_3986_ == 0)
{
lean_object* v_unused_3987_; 
v_unused_3987_ = lean_ctor_get(v___x_3971_, 1);
lean_dec(v_unused_3987_);
v___x_3977_ = v___x_3971_;
v_isShared_3978_ = v_isSharedCheck_3986_;
goto v_resetjp_3976_;
}
else
{
lean_inc(v_diag_3975_);
lean_inc(v_postponed_3974_);
lean_inc(v_zetaDeltaFVarIds_3973_);
lean_inc(v_mctx_3972_);
lean_dec(v___x_3971_);
v___x_3977_ = lean_box(0);
v_isShared_3978_ = v_isSharedCheck_3986_;
goto v_resetjp_3976_;
}
v_resetjp_3976_:
{
lean_object* v___x_3979_; lean_object* v___x_3981_; 
v___x_3979_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_3978_ == 0)
{
lean_ctor_set(v___x_3977_, 1, v___x_3979_);
v___x_3981_ = v___x_3977_;
goto v_reusejp_3980_;
}
else
{
lean_object* v_reuseFailAlloc_3985_; 
v_reuseFailAlloc_3985_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3985_, 0, v_mctx_3972_);
lean_ctor_set(v_reuseFailAlloc_3985_, 1, v___x_3979_);
lean_ctor_set(v_reuseFailAlloc_3985_, 2, v_zetaDeltaFVarIds_3973_);
lean_ctor_set(v_reuseFailAlloc_3985_, 3, v_postponed_3974_);
lean_ctor_set(v_reuseFailAlloc_3985_, 4, v_diag_3975_);
v___x_3981_ = v_reuseFailAlloc_3985_;
goto v_reusejp_3980_;
}
v_reusejp_3980_:
{
lean_object* v___x_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; 
v___x_3982_ = lean_st_ref_set(v___y_3953_, v___x_3981_);
v___x_3983_ = lean_box(0);
v___x_3984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3984_, 0, v___x_3983_);
return v___x_3984_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg___boxed(lean_object* v_env_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_){
_start:
{
lean_object* v_res_3996_; 
v_res_3996_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_env_3992_, v___y_3993_, v___y_3994_);
lean_dec(v___y_3994_);
lean_dec(v___y_3993_);
return v_res_3996_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(lean_object* v_docs_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_){
_start:
{
lean_object* v___x_4005_; lean_object* v_env_4006_; lean_object* v___x_4007_; uint8_t v___x_4008_; 
v___x_4005_ = lean_st_ref_get(v___y_4003_);
v_env_4006_ = lean_ctor_get(v___x_4005_, 0);
lean_inc_ref(v_env_4006_);
lean_dec(v___x_4005_);
v___x_4007_ = l_Lean_getMainModuleDoc(v_env_4006_);
v___x_4008_ = l_Lean_PersistentArray_isEmpty___redArg(v___x_4007_);
lean_dec_ref(v___x_4007_);
if (v___x_4008_ == 0)
{
lean_object* v___x_4009_; lean_object* v___x_4010_; 
lean_dec_ref(v_docs_3997_);
v___x_4009_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1);
v___x_4010_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_4009_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_, v___y_4003_);
return v___x_4010_;
}
else
{
lean_object* v___x_4011_; lean_object* v_env_4012_; lean_object* v___x_4013_; 
v___x_4011_ = lean_st_ref_get(v___y_4003_);
v_env_4012_ = lean_ctor_get(v___x_4011_, 0);
lean_inc_ref(v_env_4012_);
lean_dec(v___x_4011_);
v___x_4013_ = l_Lean_addVersoModuleDocSnippet(v_env_4012_, v_docs_3997_);
if (lean_obj_tag(v___x_4013_) == 0)
{
lean_object* v_a_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; 
v_a_4014_ = lean_ctor_get(v___x_4013_, 0);
lean_inc(v_a_4014_);
lean_dec_ref(v___x_4013_);
v___x_4015_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1);
v___x_4016_ = l_Lean_stringToMessageData(v_a_4014_);
v___x_4017_ = l_Lean_indentD(v___x_4016_);
v___x_4018_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4018_, 0, v___x_4015_);
lean_ctor_set(v___x_4018_, 1, v___x_4017_);
v___x_4019_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_4018_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_, v___y_4003_);
return v___x_4019_;
}
else
{
lean_object* v_a_4020_; lean_object* v___x_4021_; 
lean_dec_ref(v___y_3998_);
v_a_4020_ = lean_ctor_get(v___x_4013_, 0);
lean_inc(v_a_4020_);
lean_dec_ref(v___x_4013_);
v___x_4021_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_a_4020_, v___y_4001_, v___y_4003_);
return v___x_4021_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0___boxed(lean_object* v_docs_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_){
_start:
{
lean_object* v_res_4030_; 
v_res_4030_ = l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(v_docs_4022_, v___y_4023_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_);
lean_dec(v___y_4028_);
lean_dec_ref(v___y_4027_);
lean_dec(v___y_4026_);
lean_dec_ref(v___y_4025_);
lean_dec(v___y_4024_);
return v_res_4030_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString(lean_object* v_range_4031_, lean_object* v_docComment_4032_, lean_object* v_a_4033_, lean_object* v_a_4034_, lean_object* v_a_4035_, lean_object* v_a_4036_, lean_object* v_a_4037_, lean_object* v_a_4038_){
_start:
{
lean_object* v___x_4040_; 
lean_inc(v_a_4038_);
lean_inc_ref(v_a_4037_);
lean_inc(v_a_4036_);
lean_inc_ref(v_a_4035_);
lean_inc(v_a_4034_);
lean_inc_ref(v_a_4033_);
v___x_4040_ = l_Lean_versoModDocString(v_range_4031_, v_docComment_4032_, v_a_4033_, v_a_4034_, v_a_4035_, v_a_4036_, v_a_4037_, v_a_4038_);
if (lean_obj_tag(v___x_4040_) == 0)
{
lean_object* v_a_4041_; lean_object* v___x_4042_; 
v_a_4041_ = lean_ctor_get(v___x_4040_, 0);
lean_inc(v_a_4041_);
lean_dec_ref(v___x_4040_);
v___x_4042_ = l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(v_a_4041_, v_a_4033_, v_a_4034_, v_a_4035_, v_a_4036_, v_a_4037_, v_a_4038_);
lean_dec(v_a_4038_);
lean_dec_ref(v_a_4037_);
lean_dec(v_a_4036_);
lean_dec_ref(v_a_4035_);
lean_dec(v_a_4034_);
return v___x_4042_;
}
else
{
lean_object* v_a_4043_; lean_object* v___x_4045_; uint8_t v_isShared_4046_; uint8_t v_isSharedCheck_4050_; 
lean_dec(v_a_4038_);
lean_dec_ref(v_a_4037_);
lean_dec(v_a_4036_);
lean_dec_ref(v_a_4035_);
lean_dec(v_a_4034_);
lean_dec_ref(v_a_4033_);
v_a_4043_ = lean_ctor_get(v___x_4040_, 0);
v_isSharedCheck_4050_ = !lean_is_exclusive(v___x_4040_);
if (v_isSharedCheck_4050_ == 0)
{
v___x_4045_ = v___x_4040_;
v_isShared_4046_ = v_isSharedCheck_4050_;
goto v_resetjp_4044_;
}
else
{
lean_inc(v_a_4043_);
lean_dec(v___x_4040_);
v___x_4045_ = lean_box(0);
v_isShared_4046_ = v_isSharedCheck_4050_;
goto v_resetjp_4044_;
}
v_resetjp_4044_:
{
lean_object* v___x_4048_; 
if (v_isShared_4046_ == 0)
{
v___x_4048_ = v___x_4045_;
goto v_reusejp_4047_;
}
else
{
lean_object* v_reuseFailAlloc_4049_; 
v_reuseFailAlloc_4049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4049_, 0, v_a_4043_);
v___x_4048_ = v_reuseFailAlloc_4049_;
goto v_reusejp_4047_;
}
v_reusejp_4047_:
{
return v___x_4048_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString___boxed(lean_object* v_range_4051_, lean_object* v_docComment_4052_, lean_object* v_a_4053_, lean_object* v_a_4054_, lean_object* v_a_4055_, lean_object* v_a_4056_, lean_object* v_a_4057_, lean_object* v_a_4058_, lean_object* v_a_4059_){
_start:
{
lean_object* v_res_4060_; 
v_res_4060_ = l_Lean_addVersoModDocString(v_range_4051_, v_docComment_4052_, v_a_4053_, v_a_4054_, v_a_4055_, v_a_4056_, v_a_4057_, v_a_4058_);
lean_dec(v_docComment_4052_);
return v_res_4060_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(lean_object* v_env_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_){
_start:
{
lean_object* v___x_4069_; 
v___x_4069_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_env_4061_, v___y_4065_, v___y_4067_);
return v___x_4069_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___boxed(lean_object* v_env_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_){
_start:
{
lean_object* v_res_4078_; 
v_res_4078_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(v_env_4070_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_, v___y_4075_, v___y_4076_);
lean_dec(v___y_4076_);
lean_dec_ref(v___y_4075_);
lean_dec(v___y_4074_);
lean_dec_ref(v___y_4073_);
lean_dec(v___y_4072_);
lean_dec_ref(v___y_4071_);
return v_res_4078_;
}
}
lean_object* runtime_initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Parser(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* initialize_Lean_DocString_Parser(uint8_t builtin);
lean_object* initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_DocString_Add(builtin);
}
#ifdef __cplusplus
}
#endif
