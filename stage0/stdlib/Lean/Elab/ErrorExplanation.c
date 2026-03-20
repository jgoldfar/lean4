// Lean compiler output
// Module: Lean.Elab.ErrorExplanation
// Imports: public import Lean.Widget.UserWidget meta import Lean.Widget.UserWidget
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
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instHashableExtraModUse_hash___boxed(lean_object*);
lean_object* l_Lean_instBEqExtraModUse_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
extern lean_object* l_Lean_Elab_Command_instInhabitedScope_default;
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_getRef___redArg(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalExpr___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
extern lean_object* l_Lean_Elab_abortTermExceptionId;
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_errorExplanationExt;
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
extern lean_object* l_Lean_Elab_Command_commandElabAttribute;
lean_object* l_Lean_DeclarationRange_ofStringPositions(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_getNumParts(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_runTermElabM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_termElabAttribute;
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(lean_object*, lean_object*);
lean_object* l_Lean_quoteNameMk(lean_object*);
lean_object* lean_string_intercalate(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Syntax_setArgs(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_MessageData_hint_x27(lean_object*);
extern lean_object* l_Lean_errorDescriptionWidget;
lean_object* l_Lean_Widget_addBuiltinModule(lean_object*, lean_object*);
static const lean_string_object l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0 = (const lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value;
static const lean_string_object l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "errorDescriptionWidget"};
static const lean_object* l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1 = (const lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1_value;
static const lean_ctor_object l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__2_value_aux_0),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(97, 213, 240, 52, 84, 173, 13, 164)}};
static const lean_object* l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__2 = (const lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1();
LEAN_EXPORT lean_object* l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___boxed(lean_object*);
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__0 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__0_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__1 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__1_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "throwNamedErrorMacro"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__2 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__2_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(147, 71, 28, 75, 97, 117, 128, 98)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__3 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__3_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "throwNamedErrorAtMacro"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__4 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__4_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__4_value),LEAN_SCALAR_PTR_LITERAL(123, 65, 2, 235, 170, 76, 164, 46)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__5 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__5_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "logNamedErrorMacro"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__6 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__6_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__6_value),LEAN_SCALAR_PTR_LITERAL(73, 64, 162, 114, 236, 8, 247, 133)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__7 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__7_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "logNamedErrorAtMacro"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__8 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__8_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__8_value),LEAN_SCALAR_PTR_LITERAL(78, 239, 95, 34, 175, 88, 94, 179)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__9 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__9_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "logNamedWarningMacro"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__10 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__10_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__11_value_aux_2),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__10_value),LEAN_SCALAR_PTR_LITERAL(2, 91, 200, 35, 216, 48, 104, 184)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__11 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__11_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "logNamedWarningAtMacro"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__12 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__12_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__13_value_aux_2),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__12_value),LEAN_SCALAR_PTR_LITERAL(15, 172, 147, 28, 87, 118, 172, 232)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__13 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__13_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "interpolatedStrKind"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__14 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__14_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__14_value),LEAN_SCALAR_PTR_LITERAL(239, 118, 32, 248, 73, 51, 110, 198)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__15 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__15_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__16 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__16_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17_value_aux_0),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17_value_aux_1),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17_value_aux_2),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__16_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.logNamedWarningAt"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__18 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__18_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__19;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "logNamedWarningAt"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__20 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__20_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__21_value_aux_0),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__20_value),LEAN_SCALAR_PTR_LITERAL(165, 244, 38, 255, 142, 163, 212, 242)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__21 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__21_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__21_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__22 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__22_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__22_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__23 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__23_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__24 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__24_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__24_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__25 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__25_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "quotedName"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__26 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__26_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27_value_aux_0),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27_value_aux_1),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27_value_aux_2),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__26_value),LEAN_SCALAR_PTR_LITERAL(217, 120, 158, 75, 195, 162, 2, 130)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__28 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__28_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__29 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__29_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "termM!_"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__30 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__30_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__31_value_aux_0),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__30_value),LEAN_SCALAR_PTR_LITERAL(241, 254, 249, 246, 41, 222, 210, 184)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__31 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__31_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "m!"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__32 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__32_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.logNamedWarning"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__33 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__33_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__34;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "logNamedWarning"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__35 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__35_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__36_value_aux_0),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__35_value),LEAN_SCALAR_PTR_LITERAL(34, 53, 86, 106, 208, 200, 15, 240)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__36 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__36_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__36_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__37 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__37_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__37_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__38 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__38_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.logNamedErrorAt"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__39 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__39_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__40;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "logNamedErrorAt"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__41 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__41_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__42_value_aux_0),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__41_value),LEAN_SCALAR_PTR_LITERAL(215, 212, 218, 121, 130, 143, 154, 83)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__42 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__42_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__42_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__43 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__43_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__43_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__44 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__44_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lean.logNamedError"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__45 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__45_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__46;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "logNamedError"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__47 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__47_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__48_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__48_value_aux_0),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__47_value),LEAN_SCALAR_PTR_LITERAL(193, 48, 226, 102, 122, 31, 140, 200)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__48 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__48_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__48_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__49 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__49_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__49_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__50 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__50_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.throwNamedErrorAt"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__51 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__51_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__52_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__52;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "throwNamedErrorAt"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__53 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__53_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__54_value_aux_0),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__53_value),LEAN_SCALAR_PTR_LITERAL(151, 5, 168, 142, 232, 160, 229, 118)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__54 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__54_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__54_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__55 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__55_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__55_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__56 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__56_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__57 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__57_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__57_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__58 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__58_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lean.throwNamedError"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__59 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__59_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__60;
static const lean_string_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "throwNamedError"};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__61 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__61_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__62_value_aux_0),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__61_value),LEAN_SCALAR_PTR_LITERAL(55, 87, 79, 197, 235, 27, 154, 123)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__62 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__62_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__62_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__63 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__63_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__63_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__64 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__64_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Exception"};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__0 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 208, 119, 110, 215, 6, 136, 235)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__1 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__1_value),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__62_value)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__2 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__3_value),((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__2_value)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__3 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__1_value),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__54_value)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__4 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__5_value),((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__4_value)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__5 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__5_value;
static const lean_string_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Log"};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__6 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__6_value),LEAN_SCALAR_PTR_LITERAL(151, 176, 165, 28, 129, 118, 207, 221)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__7 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__7_value),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__48_value)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__8 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__7_value),((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__8_value)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__9 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__7_value),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__42_value)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__10 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__9_value),((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__10_value)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__11 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__7_value),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__36_value)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__12 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__11_value),((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__12_value)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__13 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__7_value),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__21_value)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__14 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__13_value),((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__14_value)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__15 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__15_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__16 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__13_value),((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__16_value)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__17 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__11_value),((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__17_value)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__18 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__18_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__9_value),((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__18_value)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__19 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__19_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__5_value),((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__19_value)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__20 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__20_value;
static const lean_ctor_object l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__3_value),((lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__20_value)}};
static const lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__21 = (const lean_object*)&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__21_value;
static lean_once_cell_t l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__22;
static lean_once_cell_t l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__23;
static lean_once_cell_t l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__24;
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8___redArg___boxed(lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14_spec__17___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___redArg___closed__0_value;
static const lean_ctor_object l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6_spec__17___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6_spec__17___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24_spec__27___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqExtraModUse_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__0 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__0_value;
static const lean_closure_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableExtraModUse_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__1 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__1_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__4;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__5;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__6;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "extraModUses"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__7 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__7_value;
static const lean_ctor_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__7_value),LEAN_SCALAR_PTR_LITERAL(27, 95, 70, 98, 97, 66, 56, 109)}};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__8 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__8_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " extra mod use "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__9 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__9_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__10;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__11 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__11_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__12;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__13;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "recording "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__14 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__14_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__15;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__16 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__16_value;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__17;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "regular"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__18 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__18_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "meta"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__19 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__19_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__20 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__20_value;
static const lean_string_object l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "public"};
static const lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__21 = (const lean_object*)&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__21_value;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__0 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__0_value;
static const lean_closure_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Name_hash___override___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__1 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__1_value;
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__2;
static const lean_array_object l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__3 = (const lean_object*)&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 158, .m_capacity = 158, .m_length = 157, .m_data = "maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information"};
static const lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addCompletionInfo___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addCompletionInfo___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "The error name `"};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__0 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__0_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__1;
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "` was removed in Lean version "};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__3;
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = " and should not be used."};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__5;
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "There is no explanation registered with the name `"};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__7;
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "`. Register an explanation for this error in the `Lean.ErrorExplanation` module."};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__9;
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "The constant `"};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__11;
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "` has not been imported"};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__12 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__12_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__13;
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Add `import "};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__14 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__14_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__15;
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "` to this file's header to use this macro"};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__16 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__16_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__17;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6_spec__17(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6_spec__17___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ErrorExplanation"};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__0 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__0_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "elabCheckedNamedError"};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__1 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__1_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__2_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(30, 18, 113, 52, 22, 68, 187, 184)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(29, 92, 138, 205, 69, 125, 159, 73)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__2 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1();
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__3();
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__5();
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__7();
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__7___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__9();
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__9___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__11();
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__11___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortTerm___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortTerm___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__0 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__0_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "registerErrorExplanationStx"};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__1 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__1_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__1_value),LEAN_SCALAR_PTR_LITERAL(150, 121, 11, 220, 201, 134, 39, 253)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__2 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__2_value;
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "Cannot add explanation: An error explanation already exists for `"};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__3 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__3_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__4;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__5;
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Invalid name `"};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__6 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__6_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__7;
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "`: Error explanation names must have two components"};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__8 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__8_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__9;
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 149, .m_capacity = 149, .m_length = 148, .m_data = "The first component of an error explanation name identifies the package from which the error originates, and the second identifies the error itself."};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__10 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__10_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__11;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__12;
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 132, .m_capacity = 132, .m_length = 131, .m_data = "`: Error explanations cannot have inaccessible names. This error often occurs when an error explanation is generated using a macro."};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__13 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__13_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__14;
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Metadata"};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__15 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__15_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__16_value_aux_0),((lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(228, 124, 72, 60, 38, 86, 32, 253)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__16_value_aux_1),((lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__15_value),LEAN_SCALAR_PTR_LITERAL(228, 194, 107, 149, 38, 116, 86, 230)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__16 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__16_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__17;
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Invalid name for error explanation: `"};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__18 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__18_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__19;
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "To use this command, add `import Lean.ErrorExplanation` to the header of this file"};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__20 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__20_value;
static lean_once_cell_t l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__21;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "elabRegisterErrorExplanation"};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__0 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__1_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(30, 18, 113, 52, 22, 68, 187, 184)}};
static const lean_ctor_object l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(21, 148, 59, 123, 129, 88, 83, 38)}};
static const lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__1 = (const lean_object*)&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1();
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1(){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_7_ = ((lean_object*)(l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___closed__2));
v___x_8_ = l_Lean_errorDescriptionWidget;
v___x_9_ = l_Lean_Widget_addBuiltinModule(v___x_7_, v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1___boxed(lean_object* v_a_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1();
return v_res_11_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__19(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__18));
v___x_61_ = l_String_toRawSubstring_x27(v___x_60_);
return v___x_61_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__34(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_89_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__33));
v___x_90_ = l_String_toRawSubstring_x27(v___x_89_);
return v___x_90_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__40(void){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_102_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__39));
v___x_103_ = l_String_toRawSubstring_x27(v___x_102_);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__46(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__45));
v___x_116_ = l_String_toRawSubstring_x27(v___x_115_);
return v___x_116_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__52(void){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__51));
v___x_129_ = l_String_toRawSubstring_x27(v___x_128_);
return v___x_129_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__60(void){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_144_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__59));
v___x_145_ = l_String_toRawSubstring_x27(v___x_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro(lean_object* v_x_156_, lean_object* v_a_157_, lean_object* v_a_158_){
_start:
{
lean_object* v___x_159_; uint8_t v___x_160_; 
v___x_159_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__3));
lean_inc(v_x_156_);
v___x_160_ = l_Lean_Syntax_isOfKind(v_x_156_, v___x_159_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_161_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__5));
lean_inc(v_x_156_);
v___x_162_ = l_Lean_Syntax_isOfKind(v_x_156_, v___x_161_);
if (v___x_162_ == 0)
{
lean_object* v___x_163_; uint8_t v___x_164_; 
v___x_163_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__7));
lean_inc(v_x_156_);
v___x_164_ = l_Lean_Syntax_isOfKind(v_x_156_, v___x_163_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; uint8_t v___x_166_; 
v___x_165_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__9));
lean_inc(v_x_156_);
v___x_166_ = l_Lean_Syntax_isOfKind(v_x_156_, v___x_165_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; uint8_t v___x_168_; 
v___x_167_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__11));
lean_inc(v_x_156_);
v___x_168_ = l_Lean_Syntax_isOfKind(v_x_156_, v___x_167_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; uint8_t v___x_170_; 
v___x_169_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__13));
lean_inc(v_x_156_);
v___x_170_ = l_Lean_Syntax_isOfKind(v_x_156_, v___x_169_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; 
lean_dec_ref(v_a_157_);
lean_dec(v_x_156_);
v___x_171_ = l_Lean_Macro_throwUnsupported___redArg(v_a_158_);
return v___x_171_;
}
else
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; uint8_t v___x_175_; 
v___x_172_ = lean_unsigned_to_nat(0u);
v___x_173_ = lean_unsigned_to_nat(3u);
v___x_174_ = l_Lean_Syntax_getArg(v_x_156_, v___x_173_);
v___x_175_ = l_Lean_Syntax_matchesNull(v___x_174_, v___x_172_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; 
lean_dec_ref(v_a_157_);
lean_dec(v_x_156_);
v___x_176_ = l_Lean_Macro_throwUnsupported___redArg(v_a_158_);
return v___x_176_;
}
else
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v_id_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; uint8_t v___x_184_; 
v___x_177_ = lean_unsigned_to_nat(1u);
v___x_178_ = l_Lean_Syntax_getArg(v_x_156_, v___x_177_);
v___x_179_ = lean_unsigned_to_nat(2u);
v_id_180_ = l_Lean_Syntax_getArg(v_x_156_, v___x_179_);
v___x_181_ = lean_unsigned_to_nat(4u);
v___x_182_ = l_Lean_Syntax_getArg(v_x_156_, v___x_181_);
lean_dec(v_x_156_);
v___x_183_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__15));
lean_inc(v___x_182_);
v___x_184_ = l_Lean_Syntax_isOfKind(v___x_182_, v___x_183_);
if (v___x_184_ == 0)
{
lean_object* v_quotContext_185_; lean_object* v_currMacroScope_186_; lean_object* v_ref_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___y_198_; lean_object* v___x_202_; lean_object* v___x_203_; 
v_quotContext_185_ = lean_ctor_get(v_a_157_, 1);
lean_inc(v_quotContext_185_);
v_currMacroScope_186_ = lean_ctor_get(v_a_157_, 2);
lean_inc(v_currMacroScope_186_);
v_ref_187_ = lean_ctor_get(v_a_157_, 5);
lean_inc(v_ref_187_);
lean_dec_ref(v_a_157_);
v___x_188_ = l_Lean_SourceInfo_fromRef(v_ref_187_, v___x_184_);
lean_dec(v_ref_187_);
v___x_189_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17));
v___x_190_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__19, &l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__19_once, _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__19);
v___x_191_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__21));
v___x_192_ = l_Lean_addMacroScope(v_quotContext_185_, v___x_191_, v_currMacroScope_186_);
v___x_193_ = lean_box(0);
v___x_194_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__23));
lean_inc(v___x_188_);
v___x_195_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_195_, 0, v___x_188_);
lean_ctor_set(v___x_195_, 1, v___x_190_);
lean_ctor_set(v___x_195_, 2, v___x_192_);
lean_ctor_set(v___x_195_, 3, v___x_194_);
v___x_196_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__25));
v___x_202_ = l_Lean_TSyntax_getId(v_id_180_);
lean_dec(v_id_180_);
lean_inc(v___x_202_);
v___x_203_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_193_, v___x_202_);
if (lean_obj_tag(v___x_203_) == 0)
{
lean_object* v___x_204_; 
v___x_204_ = l_Lean_quoteNameMk(v___x_202_);
v___y_198_ = v___x_204_;
goto v___jp_197_;
}
else
{
lean_object* v_val_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; 
lean_dec(v___x_202_);
v_val_205_ = lean_ctor_get(v___x_203_, 0);
lean_inc(v_val_205_);
lean_dec_ref(v___x_203_);
v___x_206_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27));
v___x_207_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__28));
v___x_208_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__29));
v___x_209_ = lean_string_intercalate(v___x_208_, v_val_205_);
v___x_210_ = lean_string_append(v___x_207_, v___x_209_);
lean_dec_ref(v___x_209_);
v___x_211_ = lean_box(2);
v___x_212_ = l_Lean_Syntax_mkNameLit(v___x_210_, v___x_211_);
v___x_213_ = lean_mk_empty_array_with_capacity(v___x_177_);
v___x_214_ = lean_array_push(v___x_213_, v___x_212_);
v___x_215_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_215_, 0, v___x_211_);
lean_ctor_set(v___x_215_, 1, v___x_206_);
lean_ctor_set(v___x_215_, 2, v___x_214_);
v___y_198_ = v___x_215_;
goto v___jp_197_;
}
v___jp_197_:
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
lean_inc(v___x_188_);
v___x_199_ = l_Lean_Syntax_node3(v___x_188_, v___x_196_, v___x_178_, v___y_198_, v___x_182_);
v___x_200_ = l_Lean_Syntax_node2(v___x_188_, v___x_189_, v___x_195_, v___x_199_);
v___x_201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
lean_ctor_set(v___x_201_, 1, v_a_158_);
return v___x_201_;
}
}
else
{
lean_object* v_quotContext_216_; lean_object* v_currMacroScope_217_; lean_object* v_ref_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___y_229_; lean_object* v___x_237_; lean_object* v___x_238_; 
v_quotContext_216_ = lean_ctor_get(v_a_157_, 1);
lean_inc(v_quotContext_216_);
v_currMacroScope_217_ = lean_ctor_get(v_a_157_, 2);
lean_inc(v_currMacroScope_217_);
v_ref_218_ = lean_ctor_get(v_a_157_, 5);
lean_inc(v_ref_218_);
lean_dec_ref(v_a_157_);
v___x_219_ = l_Lean_SourceInfo_fromRef(v_ref_218_, v___x_168_);
lean_dec(v_ref_218_);
v___x_220_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17));
v___x_221_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__19, &l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__19_once, _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__19);
v___x_222_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__21));
v___x_223_ = l_Lean_addMacroScope(v_quotContext_216_, v___x_222_, v_currMacroScope_217_);
v___x_224_ = lean_box(0);
v___x_225_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__23));
lean_inc(v___x_219_);
v___x_226_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_226_, 0, v___x_219_);
lean_ctor_set(v___x_226_, 1, v___x_221_);
lean_ctor_set(v___x_226_, 2, v___x_223_);
lean_ctor_set(v___x_226_, 3, v___x_225_);
v___x_227_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__25));
v___x_237_ = l_Lean_TSyntax_getId(v_id_180_);
lean_dec(v_id_180_);
lean_inc(v___x_237_);
v___x_238_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_224_, v___x_237_);
if (lean_obj_tag(v___x_238_) == 0)
{
lean_object* v___x_239_; 
v___x_239_ = l_Lean_quoteNameMk(v___x_237_);
v___y_229_ = v___x_239_;
goto v___jp_228_;
}
else
{
lean_object* v_val_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; 
lean_dec(v___x_237_);
v_val_240_ = lean_ctor_get(v___x_238_, 0);
lean_inc(v_val_240_);
lean_dec_ref(v___x_238_);
v___x_241_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27));
v___x_242_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__28));
v___x_243_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__29));
v___x_244_ = lean_string_intercalate(v___x_243_, v_val_240_);
v___x_245_ = lean_string_append(v___x_242_, v___x_244_);
lean_dec_ref(v___x_244_);
v___x_246_ = lean_box(2);
v___x_247_ = l_Lean_Syntax_mkNameLit(v___x_245_, v___x_246_);
v___x_248_ = lean_mk_empty_array_with_capacity(v___x_177_);
v___x_249_ = lean_array_push(v___x_248_, v___x_247_);
v___x_250_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_250_, 0, v___x_246_);
lean_ctor_set(v___x_250_, 1, v___x_241_);
lean_ctor_set(v___x_250_, 2, v___x_249_);
v___y_229_ = v___x_250_;
goto v___jp_228_;
}
v___jp_228_:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_230_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__31));
v___x_231_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__32));
lean_inc(v___x_219_);
v___x_232_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_219_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
lean_inc(v___x_219_);
v___x_233_ = l_Lean_Syntax_node2(v___x_219_, v___x_230_, v___x_232_, v___x_182_);
lean_inc(v___x_219_);
v___x_234_ = l_Lean_Syntax_node3(v___x_219_, v___x_227_, v___x_178_, v___y_229_, v___x_233_);
v___x_235_ = l_Lean_Syntax_node2(v___x_219_, v___x_220_, v___x_226_, v___x_234_);
v___x_236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
lean_ctor_set(v___x_236_, 1, v_a_158_);
return v___x_236_;
}
}
}
}
}
else
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; uint8_t v___x_254_; 
v___x_251_ = lean_unsigned_to_nat(0u);
v___x_252_ = lean_unsigned_to_nat(2u);
v___x_253_ = l_Lean_Syntax_getArg(v_x_156_, v___x_252_);
v___x_254_ = l_Lean_Syntax_matchesNull(v___x_253_, v___x_251_);
if (v___x_254_ == 0)
{
lean_object* v___x_255_; 
lean_dec_ref(v_a_157_);
lean_dec(v_x_156_);
v___x_255_ = l_Lean_Macro_throwUnsupported___redArg(v_a_158_);
return v___x_255_;
}
else
{
lean_object* v___x_256_; lean_object* v_id_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_256_ = lean_unsigned_to_nat(1u);
v_id_257_ = l_Lean_Syntax_getArg(v_x_156_, v___x_256_);
v___x_258_ = lean_unsigned_to_nat(3u);
v___x_259_ = l_Lean_Syntax_getArg(v_x_156_, v___x_258_);
lean_dec(v_x_156_);
v___x_260_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__15));
lean_inc(v___x_259_);
v___x_261_ = l_Lean_Syntax_isOfKind(v___x_259_, v___x_260_);
if (v___x_261_ == 0)
{
lean_object* v_quotContext_262_; lean_object* v_currMacroScope_263_; lean_object* v_ref_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___y_275_; lean_object* v___x_279_; lean_object* v___x_280_; 
v_quotContext_262_ = lean_ctor_get(v_a_157_, 1);
lean_inc(v_quotContext_262_);
v_currMacroScope_263_ = lean_ctor_get(v_a_157_, 2);
lean_inc(v_currMacroScope_263_);
v_ref_264_ = lean_ctor_get(v_a_157_, 5);
lean_inc(v_ref_264_);
lean_dec_ref(v_a_157_);
v___x_265_ = l_Lean_SourceInfo_fromRef(v_ref_264_, v___x_261_);
lean_dec(v_ref_264_);
v___x_266_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17));
v___x_267_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__34, &l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__34_once, _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__34);
v___x_268_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__36));
v___x_269_ = l_Lean_addMacroScope(v_quotContext_262_, v___x_268_, v_currMacroScope_263_);
v___x_270_ = lean_box(0);
v___x_271_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__38));
lean_inc(v___x_265_);
v___x_272_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_272_, 0, v___x_265_);
lean_ctor_set(v___x_272_, 1, v___x_267_);
lean_ctor_set(v___x_272_, 2, v___x_269_);
lean_ctor_set(v___x_272_, 3, v___x_271_);
v___x_273_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__25));
v___x_279_ = l_Lean_TSyntax_getId(v_id_257_);
lean_dec(v_id_257_);
lean_inc(v___x_279_);
v___x_280_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_270_, v___x_279_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v___x_281_; 
v___x_281_ = l_Lean_quoteNameMk(v___x_279_);
v___y_275_ = v___x_281_;
goto v___jp_274_;
}
else
{
lean_object* v_val_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
lean_dec(v___x_279_);
v_val_282_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_val_282_);
lean_dec_ref(v___x_280_);
v___x_283_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27));
v___x_284_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__28));
v___x_285_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__29));
v___x_286_ = lean_string_intercalate(v___x_285_, v_val_282_);
v___x_287_ = lean_string_append(v___x_284_, v___x_286_);
lean_dec_ref(v___x_286_);
v___x_288_ = lean_box(2);
v___x_289_ = l_Lean_Syntax_mkNameLit(v___x_287_, v___x_288_);
v___x_290_ = lean_mk_empty_array_with_capacity(v___x_256_);
v___x_291_ = lean_array_push(v___x_290_, v___x_289_);
v___x_292_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_292_, 0, v___x_288_);
lean_ctor_set(v___x_292_, 1, v___x_283_);
lean_ctor_set(v___x_292_, 2, v___x_291_);
v___y_275_ = v___x_292_;
goto v___jp_274_;
}
v___jp_274_:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
lean_inc(v___x_265_);
v___x_276_ = l_Lean_Syntax_node2(v___x_265_, v___x_273_, v___y_275_, v___x_259_);
v___x_277_ = l_Lean_Syntax_node2(v___x_265_, v___x_266_, v___x_272_, v___x_276_);
v___x_278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
lean_ctor_set(v___x_278_, 1, v_a_158_);
return v___x_278_;
}
}
else
{
lean_object* v_quotContext_293_; lean_object* v_currMacroScope_294_; lean_object* v_ref_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___y_306_; lean_object* v___x_314_; lean_object* v___x_315_; 
v_quotContext_293_ = lean_ctor_get(v_a_157_, 1);
lean_inc(v_quotContext_293_);
v_currMacroScope_294_ = lean_ctor_get(v_a_157_, 2);
lean_inc(v_currMacroScope_294_);
v_ref_295_ = lean_ctor_get(v_a_157_, 5);
lean_inc(v_ref_295_);
lean_dec_ref(v_a_157_);
v___x_296_ = l_Lean_SourceInfo_fromRef(v_ref_295_, v___x_166_);
lean_dec(v_ref_295_);
v___x_297_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17));
v___x_298_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__34, &l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__34_once, _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__34);
v___x_299_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__36));
v___x_300_ = l_Lean_addMacroScope(v_quotContext_293_, v___x_299_, v_currMacroScope_294_);
v___x_301_ = lean_box(0);
v___x_302_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__38));
lean_inc(v___x_296_);
v___x_303_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_303_, 0, v___x_296_);
lean_ctor_set(v___x_303_, 1, v___x_298_);
lean_ctor_set(v___x_303_, 2, v___x_300_);
lean_ctor_set(v___x_303_, 3, v___x_302_);
v___x_304_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__25));
v___x_314_ = l_Lean_TSyntax_getId(v_id_257_);
lean_dec(v_id_257_);
lean_inc(v___x_314_);
v___x_315_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_301_, v___x_314_);
if (lean_obj_tag(v___x_315_) == 0)
{
lean_object* v___x_316_; 
v___x_316_ = l_Lean_quoteNameMk(v___x_314_);
v___y_306_ = v___x_316_;
goto v___jp_305_;
}
else
{
lean_object* v_val_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
lean_dec(v___x_314_);
v_val_317_ = lean_ctor_get(v___x_315_, 0);
lean_inc(v_val_317_);
lean_dec_ref(v___x_315_);
v___x_318_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27));
v___x_319_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__28));
v___x_320_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__29));
v___x_321_ = lean_string_intercalate(v___x_320_, v_val_317_);
v___x_322_ = lean_string_append(v___x_319_, v___x_321_);
lean_dec_ref(v___x_321_);
v___x_323_ = lean_box(2);
v___x_324_ = l_Lean_Syntax_mkNameLit(v___x_322_, v___x_323_);
v___x_325_ = lean_mk_empty_array_with_capacity(v___x_256_);
v___x_326_ = lean_array_push(v___x_325_, v___x_324_);
v___x_327_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_327_, 0, v___x_323_);
lean_ctor_set(v___x_327_, 1, v___x_318_);
lean_ctor_set(v___x_327_, 2, v___x_326_);
v___y_306_ = v___x_327_;
goto v___jp_305_;
}
v___jp_305_:
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_307_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__31));
v___x_308_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__32));
lean_inc(v___x_296_);
v___x_309_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_309_, 0, v___x_296_);
lean_ctor_set(v___x_309_, 1, v___x_308_);
lean_inc(v___x_296_);
v___x_310_ = l_Lean_Syntax_node2(v___x_296_, v___x_307_, v___x_309_, v___x_259_);
lean_inc(v___x_296_);
v___x_311_ = l_Lean_Syntax_node2(v___x_296_, v___x_304_, v___y_306_, v___x_310_);
v___x_312_ = l_Lean_Syntax_node2(v___x_296_, v___x_297_, v___x_303_, v___x_311_);
v___x_313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
lean_ctor_set(v___x_313_, 1, v_a_158_);
return v___x_313_;
}
}
}
}
}
else
{
lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; uint8_t v___x_331_; 
v___x_328_ = lean_unsigned_to_nat(0u);
v___x_329_ = lean_unsigned_to_nat(3u);
v___x_330_ = l_Lean_Syntax_getArg(v_x_156_, v___x_329_);
v___x_331_ = l_Lean_Syntax_matchesNull(v___x_330_, v___x_328_);
if (v___x_331_ == 0)
{
lean_object* v___x_332_; 
lean_dec_ref(v_a_157_);
lean_dec(v_x_156_);
v___x_332_ = l_Lean_Macro_throwUnsupported___redArg(v_a_158_);
return v___x_332_;
}
else
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v_id_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; uint8_t v___x_340_; 
v___x_333_ = lean_unsigned_to_nat(1u);
v___x_334_ = l_Lean_Syntax_getArg(v_x_156_, v___x_333_);
v___x_335_ = lean_unsigned_to_nat(2u);
v_id_336_ = l_Lean_Syntax_getArg(v_x_156_, v___x_335_);
v___x_337_ = lean_unsigned_to_nat(4u);
v___x_338_ = l_Lean_Syntax_getArg(v_x_156_, v___x_337_);
lean_dec(v_x_156_);
v___x_339_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__15));
lean_inc(v___x_338_);
v___x_340_ = l_Lean_Syntax_isOfKind(v___x_338_, v___x_339_);
if (v___x_340_ == 0)
{
lean_object* v_quotContext_341_; lean_object* v_currMacroScope_342_; lean_object* v_ref_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___y_354_; lean_object* v___x_358_; lean_object* v___x_359_; 
v_quotContext_341_ = lean_ctor_get(v_a_157_, 1);
lean_inc(v_quotContext_341_);
v_currMacroScope_342_ = lean_ctor_get(v_a_157_, 2);
lean_inc(v_currMacroScope_342_);
v_ref_343_ = lean_ctor_get(v_a_157_, 5);
lean_inc(v_ref_343_);
lean_dec_ref(v_a_157_);
v___x_344_ = l_Lean_SourceInfo_fromRef(v_ref_343_, v___x_340_);
lean_dec(v_ref_343_);
v___x_345_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17));
v___x_346_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__40, &l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__40_once, _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__40);
v___x_347_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__42));
v___x_348_ = l_Lean_addMacroScope(v_quotContext_341_, v___x_347_, v_currMacroScope_342_);
v___x_349_ = lean_box(0);
v___x_350_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__44));
lean_inc(v___x_344_);
v___x_351_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_351_, 0, v___x_344_);
lean_ctor_set(v___x_351_, 1, v___x_346_);
lean_ctor_set(v___x_351_, 2, v___x_348_);
lean_ctor_set(v___x_351_, 3, v___x_350_);
v___x_352_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__25));
v___x_358_ = l_Lean_TSyntax_getId(v_id_336_);
lean_dec(v_id_336_);
lean_inc(v___x_358_);
v___x_359_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_349_, v___x_358_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v___x_360_; 
v___x_360_ = l_Lean_quoteNameMk(v___x_358_);
v___y_354_ = v___x_360_;
goto v___jp_353_;
}
else
{
lean_object* v_val_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
lean_dec(v___x_358_);
v_val_361_ = lean_ctor_get(v___x_359_, 0);
lean_inc(v_val_361_);
lean_dec_ref(v___x_359_);
v___x_362_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27));
v___x_363_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__28));
v___x_364_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__29));
v___x_365_ = lean_string_intercalate(v___x_364_, v_val_361_);
v___x_366_ = lean_string_append(v___x_363_, v___x_365_);
lean_dec_ref(v___x_365_);
v___x_367_ = lean_box(2);
v___x_368_ = l_Lean_Syntax_mkNameLit(v___x_366_, v___x_367_);
v___x_369_ = lean_mk_empty_array_with_capacity(v___x_333_);
v___x_370_ = lean_array_push(v___x_369_, v___x_368_);
v___x_371_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_371_, 0, v___x_367_);
lean_ctor_set(v___x_371_, 1, v___x_362_);
lean_ctor_set(v___x_371_, 2, v___x_370_);
v___y_354_ = v___x_371_;
goto v___jp_353_;
}
v___jp_353_:
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
lean_inc(v___x_344_);
v___x_355_ = l_Lean_Syntax_node3(v___x_344_, v___x_352_, v___x_334_, v___y_354_, v___x_338_);
v___x_356_ = l_Lean_Syntax_node2(v___x_344_, v___x_345_, v___x_351_, v___x_355_);
v___x_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
lean_ctor_set(v___x_357_, 1, v_a_158_);
return v___x_357_;
}
}
else
{
lean_object* v_quotContext_372_; lean_object* v_currMacroScope_373_; lean_object* v_ref_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___y_385_; lean_object* v___x_393_; lean_object* v___x_394_; 
v_quotContext_372_ = lean_ctor_get(v_a_157_, 1);
lean_inc(v_quotContext_372_);
v_currMacroScope_373_ = lean_ctor_get(v_a_157_, 2);
lean_inc(v_currMacroScope_373_);
v_ref_374_ = lean_ctor_get(v_a_157_, 5);
lean_inc(v_ref_374_);
lean_dec_ref(v_a_157_);
v___x_375_ = l_Lean_SourceInfo_fromRef(v_ref_374_, v___x_164_);
lean_dec(v_ref_374_);
v___x_376_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17));
v___x_377_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__40, &l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__40_once, _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__40);
v___x_378_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__42));
v___x_379_ = l_Lean_addMacroScope(v_quotContext_372_, v___x_378_, v_currMacroScope_373_);
v___x_380_ = lean_box(0);
v___x_381_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__44));
lean_inc(v___x_375_);
v___x_382_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_382_, 0, v___x_375_);
lean_ctor_set(v___x_382_, 1, v___x_377_);
lean_ctor_set(v___x_382_, 2, v___x_379_);
lean_ctor_set(v___x_382_, 3, v___x_381_);
v___x_383_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__25));
v___x_393_ = l_Lean_TSyntax_getId(v_id_336_);
lean_dec(v_id_336_);
lean_inc(v___x_393_);
v___x_394_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_380_, v___x_393_);
if (lean_obj_tag(v___x_394_) == 0)
{
lean_object* v___x_395_; 
v___x_395_ = l_Lean_quoteNameMk(v___x_393_);
v___y_385_ = v___x_395_;
goto v___jp_384_;
}
else
{
lean_object* v_val_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
lean_dec(v___x_393_);
v_val_396_ = lean_ctor_get(v___x_394_, 0);
lean_inc(v_val_396_);
lean_dec_ref(v___x_394_);
v___x_397_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27));
v___x_398_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__28));
v___x_399_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__29));
v___x_400_ = lean_string_intercalate(v___x_399_, v_val_396_);
v___x_401_ = lean_string_append(v___x_398_, v___x_400_);
lean_dec_ref(v___x_400_);
v___x_402_ = lean_box(2);
v___x_403_ = l_Lean_Syntax_mkNameLit(v___x_401_, v___x_402_);
v___x_404_ = lean_mk_empty_array_with_capacity(v___x_333_);
v___x_405_ = lean_array_push(v___x_404_, v___x_403_);
v___x_406_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_406_, 0, v___x_402_);
lean_ctor_set(v___x_406_, 1, v___x_397_);
lean_ctor_set(v___x_406_, 2, v___x_405_);
v___y_385_ = v___x_406_;
goto v___jp_384_;
}
v___jp_384_:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_386_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__31));
v___x_387_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__32));
lean_inc(v___x_375_);
v___x_388_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_388_, 0, v___x_375_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
lean_inc(v___x_375_);
v___x_389_ = l_Lean_Syntax_node2(v___x_375_, v___x_386_, v___x_388_, v___x_338_);
lean_inc(v___x_375_);
v___x_390_ = l_Lean_Syntax_node3(v___x_375_, v___x_383_, v___x_334_, v___y_385_, v___x_389_);
v___x_391_ = l_Lean_Syntax_node2(v___x_375_, v___x_376_, v___x_382_, v___x_390_);
v___x_392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
lean_ctor_set(v___x_392_, 1, v_a_158_);
return v___x_392_;
}
}
}
}
}
else
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; uint8_t v___x_410_; 
v___x_407_ = lean_unsigned_to_nat(0u);
v___x_408_ = lean_unsigned_to_nat(2u);
v___x_409_ = l_Lean_Syntax_getArg(v_x_156_, v___x_408_);
v___x_410_ = l_Lean_Syntax_matchesNull(v___x_409_, v___x_407_);
if (v___x_410_ == 0)
{
lean_object* v___x_411_; 
lean_dec_ref(v_a_157_);
lean_dec(v_x_156_);
v___x_411_ = l_Lean_Macro_throwUnsupported___redArg(v_a_158_);
return v___x_411_;
}
else
{
lean_object* v___x_412_; lean_object* v_id_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; uint8_t v___x_417_; 
v___x_412_ = lean_unsigned_to_nat(1u);
v_id_413_ = l_Lean_Syntax_getArg(v_x_156_, v___x_412_);
v___x_414_ = lean_unsigned_to_nat(3u);
v___x_415_ = l_Lean_Syntax_getArg(v_x_156_, v___x_414_);
lean_dec(v_x_156_);
v___x_416_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__15));
lean_inc(v___x_415_);
v___x_417_ = l_Lean_Syntax_isOfKind(v___x_415_, v___x_416_);
if (v___x_417_ == 0)
{
lean_object* v_quotContext_418_; lean_object* v_currMacroScope_419_; lean_object* v_ref_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___y_431_; lean_object* v___x_435_; lean_object* v___x_436_; 
v_quotContext_418_ = lean_ctor_get(v_a_157_, 1);
lean_inc(v_quotContext_418_);
v_currMacroScope_419_ = lean_ctor_get(v_a_157_, 2);
lean_inc(v_currMacroScope_419_);
v_ref_420_ = lean_ctor_get(v_a_157_, 5);
lean_inc(v_ref_420_);
lean_dec_ref(v_a_157_);
v___x_421_ = l_Lean_SourceInfo_fromRef(v_ref_420_, v___x_417_);
lean_dec(v_ref_420_);
v___x_422_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17));
v___x_423_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__46, &l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__46_once, _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__46);
v___x_424_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__48));
v___x_425_ = l_Lean_addMacroScope(v_quotContext_418_, v___x_424_, v_currMacroScope_419_);
v___x_426_ = lean_box(0);
v___x_427_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__50));
lean_inc(v___x_421_);
v___x_428_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_428_, 0, v___x_421_);
lean_ctor_set(v___x_428_, 1, v___x_423_);
lean_ctor_set(v___x_428_, 2, v___x_425_);
lean_ctor_set(v___x_428_, 3, v___x_427_);
v___x_429_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__25));
v___x_435_ = l_Lean_TSyntax_getId(v_id_413_);
lean_dec(v_id_413_);
lean_inc(v___x_435_);
v___x_436_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_426_, v___x_435_);
if (lean_obj_tag(v___x_436_) == 0)
{
lean_object* v___x_437_; 
v___x_437_ = l_Lean_quoteNameMk(v___x_435_);
v___y_431_ = v___x_437_;
goto v___jp_430_;
}
else
{
lean_object* v_val_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
lean_dec(v___x_435_);
v_val_438_ = lean_ctor_get(v___x_436_, 0);
lean_inc(v_val_438_);
lean_dec_ref(v___x_436_);
v___x_439_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27));
v___x_440_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__28));
v___x_441_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__29));
v___x_442_ = lean_string_intercalate(v___x_441_, v_val_438_);
v___x_443_ = lean_string_append(v___x_440_, v___x_442_);
lean_dec_ref(v___x_442_);
v___x_444_ = lean_box(2);
v___x_445_ = l_Lean_Syntax_mkNameLit(v___x_443_, v___x_444_);
v___x_446_ = lean_mk_empty_array_with_capacity(v___x_412_);
v___x_447_ = lean_array_push(v___x_446_, v___x_445_);
v___x_448_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_448_, 0, v___x_444_);
lean_ctor_set(v___x_448_, 1, v___x_439_);
lean_ctor_set(v___x_448_, 2, v___x_447_);
v___y_431_ = v___x_448_;
goto v___jp_430_;
}
v___jp_430_:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
lean_inc(v___x_421_);
v___x_432_ = l_Lean_Syntax_node2(v___x_421_, v___x_429_, v___y_431_, v___x_415_);
v___x_433_ = l_Lean_Syntax_node2(v___x_421_, v___x_422_, v___x_428_, v___x_432_);
v___x_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_434_, 0, v___x_433_);
lean_ctor_set(v___x_434_, 1, v_a_158_);
return v___x_434_;
}
}
else
{
lean_object* v_quotContext_449_; lean_object* v_currMacroScope_450_; lean_object* v_ref_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___y_462_; lean_object* v___x_470_; lean_object* v___x_471_; 
v_quotContext_449_ = lean_ctor_get(v_a_157_, 1);
lean_inc(v_quotContext_449_);
v_currMacroScope_450_ = lean_ctor_get(v_a_157_, 2);
lean_inc(v_currMacroScope_450_);
v_ref_451_ = lean_ctor_get(v_a_157_, 5);
lean_inc(v_ref_451_);
lean_dec_ref(v_a_157_);
v___x_452_ = l_Lean_SourceInfo_fromRef(v_ref_451_, v___x_162_);
lean_dec(v_ref_451_);
v___x_453_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17));
v___x_454_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__46, &l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__46_once, _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__46);
v___x_455_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__48));
v___x_456_ = l_Lean_addMacroScope(v_quotContext_449_, v___x_455_, v_currMacroScope_450_);
v___x_457_ = lean_box(0);
v___x_458_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__50));
lean_inc(v___x_452_);
v___x_459_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_459_, 0, v___x_452_);
lean_ctor_set(v___x_459_, 1, v___x_454_);
lean_ctor_set(v___x_459_, 2, v___x_456_);
lean_ctor_set(v___x_459_, 3, v___x_458_);
v___x_460_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__25));
v___x_470_ = l_Lean_TSyntax_getId(v_id_413_);
lean_dec(v_id_413_);
lean_inc(v___x_470_);
v___x_471_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_457_, v___x_470_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v___x_472_; 
v___x_472_ = l_Lean_quoteNameMk(v___x_470_);
v___y_462_ = v___x_472_;
goto v___jp_461_;
}
else
{
lean_object* v_val_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
lean_dec(v___x_470_);
v_val_473_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_val_473_);
lean_dec_ref(v___x_471_);
v___x_474_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27));
v___x_475_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__28));
v___x_476_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__29));
v___x_477_ = lean_string_intercalate(v___x_476_, v_val_473_);
v___x_478_ = lean_string_append(v___x_475_, v___x_477_);
lean_dec_ref(v___x_477_);
v___x_479_ = lean_box(2);
v___x_480_ = l_Lean_Syntax_mkNameLit(v___x_478_, v___x_479_);
v___x_481_ = lean_mk_empty_array_with_capacity(v___x_412_);
v___x_482_ = lean_array_push(v___x_481_, v___x_480_);
v___x_483_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_483_, 0, v___x_479_);
lean_ctor_set(v___x_483_, 1, v___x_474_);
lean_ctor_set(v___x_483_, 2, v___x_482_);
v___y_462_ = v___x_483_;
goto v___jp_461_;
}
v___jp_461_:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_463_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__31));
v___x_464_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__32));
lean_inc(v___x_452_);
v___x_465_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_452_);
lean_ctor_set(v___x_465_, 1, v___x_464_);
lean_inc(v___x_452_);
v___x_466_ = l_Lean_Syntax_node2(v___x_452_, v___x_463_, v___x_465_, v___x_415_);
lean_inc(v___x_452_);
v___x_467_ = l_Lean_Syntax_node2(v___x_452_, v___x_460_, v___y_462_, v___x_466_);
v___x_468_ = l_Lean_Syntax_node2(v___x_452_, v___x_453_, v___x_459_, v___x_467_);
v___x_469_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_469_, 0, v___x_468_);
lean_ctor_set(v___x_469_, 1, v_a_158_);
return v___x_469_;
}
}
}
}
}
else
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; uint8_t v___x_487_; 
v___x_484_ = lean_unsigned_to_nat(0u);
v___x_485_ = lean_unsigned_to_nat(3u);
v___x_486_ = l_Lean_Syntax_getArg(v_x_156_, v___x_485_);
v___x_487_ = l_Lean_Syntax_matchesNull(v___x_486_, v___x_484_);
if (v___x_487_ == 0)
{
lean_object* v___x_488_; 
lean_dec_ref(v_a_157_);
lean_dec(v_x_156_);
v___x_488_ = l_Lean_Macro_throwUnsupported___redArg(v_a_158_);
return v___x_488_;
}
else
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v_id_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; uint8_t v___x_496_; 
v___x_489_ = lean_unsigned_to_nat(1u);
v___x_490_ = l_Lean_Syntax_getArg(v_x_156_, v___x_489_);
v___x_491_ = lean_unsigned_to_nat(2u);
v_id_492_ = l_Lean_Syntax_getArg(v_x_156_, v___x_491_);
v___x_493_ = lean_unsigned_to_nat(4u);
v___x_494_ = l_Lean_Syntax_getArg(v_x_156_, v___x_493_);
lean_dec(v_x_156_);
v___x_495_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__15));
lean_inc(v___x_494_);
v___x_496_ = l_Lean_Syntax_isOfKind(v___x_494_, v___x_495_);
if (v___x_496_ == 0)
{
lean_object* v_quotContext_497_; lean_object* v_currMacroScope_498_; lean_object* v_ref_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___y_510_; lean_object* v___x_514_; lean_object* v___x_515_; 
v_quotContext_497_ = lean_ctor_get(v_a_157_, 1);
lean_inc(v_quotContext_497_);
v_currMacroScope_498_ = lean_ctor_get(v_a_157_, 2);
lean_inc(v_currMacroScope_498_);
v_ref_499_ = lean_ctor_get(v_a_157_, 5);
lean_inc(v_ref_499_);
lean_dec_ref(v_a_157_);
v___x_500_ = l_Lean_SourceInfo_fromRef(v_ref_499_, v___x_496_);
lean_dec(v_ref_499_);
v___x_501_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17));
v___x_502_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__52, &l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__52_once, _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__52);
v___x_503_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__54));
v___x_504_ = l_Lean_addMacroScope(v_quotContext_497_, v___x_503_, v_currMacroScope_498_);
v___x_505_ = lean_box(0);
v___x_506_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__56));
lean_inc(v___x_500_);
v___x_507_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_507_, 0, v___x_500_);
lean_ctor_set(v___x_507_, 1, v___x_502_);
lean_ctor_set(v___x_507_, 2, v___x_504_);
lean_ctor_set(v___x_507_, 3, v___x_506_);
v___x_508_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__25));
v___x_514_ = l_Lean_TSyntax_getId(v_id_492_);
lean_dec(v_id_492_);
lean_inc(v___x_514_);
v___x_515_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_505_, v___x_514_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v___x_516_; 
v___x_516_ = l_Lean_quoteNameMk(v___x_514_);
v___y_510_ = v___x_516_;
goto v___jp_509_;
}
else
{
lean_object* v_val_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; 
lean_dec(v___x_514_);
v_val_517_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_val_517_);
lean_dec_ref(v___x_515_);
v___x_518_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27));
v___x_519_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__28));
v___x_520_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__29));
v___x_521_ = lean_string_intercalate(v___x_520_, v_val_517_);
v___x_522_ = lean_string_append(v___x_519_, v___x_521_);
lean_dec_ref(v___x_521_);
v___x_523_ = lean_box(2);
v___x_524_ = l_Lean_Syntax_mkNameLit(v___x_522_, v___x_523_);
v___x_525_ = lean_mk_empty_array_with_capacity(v___x_489_);
v___x_526_ = lean_array_push(v___x_525_, v___x_524_);
v___x_527_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_527_, 0, v___x_523_);
lean_ctor_set(v___x_527_, 1, v___x_518_);
lean_ctor_set(v___x_527_, 2, v___x_526_);
v___y_510_ = v___x_527_;
goto v___jp_509_;
}
v___jp_509_:
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
lean_inc(v___x_500_);
v___x_511_ = l_Lean_Syntax_node3(v___x_500_, v___x_508_, v___x_490_, v___y_510_, v___x_494_);
v___x_512_ = l_Lean_Syntax_node2(v___x_500_, v___x_501_, v___x_507_, v___x_511_);
v___x_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
lean_ctor_set(v___x_513_, 1, v_a_158_);
return v___x_513_;
}
}
else
{
lean_object* v_quotContext_528_; lean_object* v_currMacroScope_529_; lean_object* v_ref_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___y_541_; lean_object* v___x_549_; lean_object* v___x_550_; 
v_quotContext_528_ = lean_ctor_get(v_a_157_, 1);
lean_inc(v_quotContext_528_);
v_currMacroScope_529_ = lean_ctor_get(v_a_157_, 2);
lean_inc(v_currMacroScope_529_);
v_ref_530_ = lean_ctor_get(v_a_157_, 5);
lean_inc(v_ref_530_);
lean_dec_ref(v_a_157_);
v___x_531_ = l_Lean_SourceInfo_fromRef(v_ref_530_, v___x_160_);
lean_dec(v_ref_530_);
v___x_532_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17));
v___x_533_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__52, &l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__52_once, _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__52);
v___x_534_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__54));
v___x_535_ = l_Lean_addMacroScope(v_quotContext_528_, v___x_534_, v_currMacroScope_529_);
v___x_536_ = lean_box(0);
v___x_537_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__56));
lean_inc(v___x_531_);
v___x_538_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_538_, 0, v___x_531_);
lean_ctor_set(v___x_538_, 1, v___x_533_);
lean_ctor_set(v___x_538_, 2, v___x_535_);
lean_ctor_set(v___x_538_, 3, v___x_537_);
v___x_539_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__25));
v___x_549_ = l_Lean_TSyntax_getId(v_id_492_);
lean_dec(v_id_492_);
lean_inc(v___x_549_);
v___x_550_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_536_, v___x_549_);
if (lean_obj_tag(v___x_550_) == 0)
{
lean_object* v___x_551_; 
v___x_551_ = l_Lean_quoteNameMk(v___x_549_);
v___y_541_ = v___x_551_;
goto v___jp_540_;
}
else
{
lean_object* v_val_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
lean_dec(v___x_549_);
v_val_552_ = lean_ctor_get(v___x_550_, 0);
lean_inc(v_val_552_);
lean_dec_ref(v___x_550_);
v___x_553_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27));
v___x_554_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__28));
v___x_555_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__29));
v___x_556_ = lean_string_intercalate(v___x_555_, v_val_552_);
v___x_557_ = lean_string_append(v___x_554_, v___x_556_);
lean_dec_ref(v___x_556_);
v___x_558_ = lean_box(2);
v___x_559_ = l_Lean_Syntax_mkNameLit(v___x_557_, v___x_558_);
v___x_560_ = lean_mk_empty_array_with_capacity(v___x_489_);
v___x_561_ = lean_array_push(v___x_560_, v___x_559_);
v___x_562_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_562_, 0, v___x_558_);
lean_ctor_set(v___x_562_, 1, v___x_553_);
lean_ctor_set(v___x_562_, 2, v___x_561_);
v___y_541_ = v___x_562_;
goto v___jp_540_;
}
v___jp_540_:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_542_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__31));
v___x_543_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__32));
lean_inc(v___x_531_);
v___x_544_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_544_, 0, v___x_531_);
lean_ctor_set(v___x_544_, 1, v___x_543_);
lean_inc(v___x_531_);
v___x_545_ = l_Lean_Syntax_node2(v___x_531_, v___x_542_, v___x_544_, v___x_494_);
lean_inc(v___x_531_);
v___x_546_ = l_Lean_Syntax_node3(v___x_531_, v___x_539_, v___x_490_, v___y_541_, v___x_545_);
v___x_547_ = l_Lean_Syntax_node2(v___x_531_, v___x_532_, v___x_538_, v___x_546_);
v___x_548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
lean_ctor_set(v___x_548_, 1, v_a_158_);
return v___x_548_;
}
}
}
}
}
else
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v_id_565_; lean_object* v___x_566_; uint8_t v___x_567_; 
v___x_563_ = lean_unsigned_to_nat(0u);
v___x_564_ = lean_unsigned_to_nat(1u);
v_id_565_ = l_Lean_Syntax_getArg(v_x_156_, v___x_564_);
v___x_566_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__58));
lean_inc(v_id_565_);
v___x_567_ = l_Lean_Syntax_isOfKind(v_id_565_, v___x_566_);
if (v___x_567_ == 0)
{
lean_object* v___x_568_; lean_object* v___x_569_; uint8_t v___x_570_; 
v___x_568_ = lean_unsigned_to_nat(2u);
v___x_569_ = l_Lean_Syntax_getArg(v_x_156_, v___x_568_);
v___x_570_ = l_Lean_Syntax_matchesNull(v___x_569_, v___x_563_);
if (v___x_570_ == 0)
{
lean_object* v___x_571_; 
lean_dec(v_id_565_);
lean_dec_ref(v_a_157_);
lean_dec(v_x_156_);
v___x_571_ = l_Lean_Macro_throwUnsupported___redArg(v_a_158_);
return v___x_571_;
}
else
{
lean_object* v_quotContext_572_; lean_object* v_currMacroScope_573_; lean_object* v_ref_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___y_587_; lean_object* v___x_591_; lean_object* v___x_592_; 
v_quotContext_572_ = lean_ctor_get(v_a_157_, 1);
lean_inc(v_quotContext_572_);
v_currMacroScope_573_ = lean_ctor_get(v_a_157_, 2);
lean_inc(v_currMacroScope_573_);
v_ref_574_ = lean_ctor_get(v_a_157_, 5);
lean_inc(v_ref_574_);
lean_dec_ref(v_a_157_);
v___x_575_ = lean_unsigned_to_nat(3u);
v___x_576_ = l_Lean_Syntax_getArg(v_x_156_, v___x_575_);
lean_dec(v_x_156_);
v___x_577_ = l_Lean_SourceInfo_fromRef(v_ref_574_, v___x_567_);
lean_dec(v_ref_574_);
v___x_578_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17));
v___x_579_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__60, &l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__60_once, _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__60);
v___x_580_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__62));
v___x_581_ = l_Lean_addMacroScope(v_quotContext_572_, v___x_580_, v_currMacroScope_573_);
v___x_582_ = lean_box(0);
v___x_583_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__64));
lean_inc(v___x_577_);
v___x_584_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_584_, 0, v___x_577_);
lean_ctor_set(v___x_584_, 1, v___x_579_);
lean_ctor_set(v___x_584_, 2, v___x_581_);
lean_ctor_set(v___x_584_, 3, v___x_583_);
v___x_585_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__25));
v___x_591_ = l_Lean_TSyntax_getId(v_id_565_);
lean_dec(v_id_565_);
lean_inc(v___x_591_);
v___x_592_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_582_, v___x_591_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v___x_593_; 
v___x_593_ = l_Lean_quoteNameMk(v___x_591_);
v___y_587_ = v___x_593_;
goto v___jp_586_;
}
else
{
lean_object* v_val_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
lean_dec(v___x_591_);
v_val_594_ = lean_ctor_get(v___x_592_, 0);
lean_inc(v_val_594_);
lean_dec_ref(v___x_592_);
v___x_595_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27));
v___x_596_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__28));
v___x_597_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__29));
v___x_598_ = lean_string_intercalate(v___x_597_, v_val_594_);
v___x_599_ = lean_string_append(v___x_596_, v___x_598_);
lean_dec_ref(v___x_598_);
v___x_600_ = lean_box(2);
v___x_601_ = l_Lean_Syntax_mkNameLit(v___x_599_, v___x_600_);
v___x_602_ = lean_mk_empty_array_with_capacity(v___x_564_);
v___x_603_ = lean_array_push(v___x_602_, v___x_601_);
v___x_604_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_604_, 0, v___x_600_);
lean_ctor_set(v___x_604_, 1, v___x_595_);
lean_ctor_set(v___x_604_, 2, v___x_603_);
v___y_587_ = v___x_604_;
goto v___jp_586_;
}
v___jp_586_:
{
lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
lean_inc(v___x_577_);
v___x_588_ = l_Lean_Syntax_node2(v___x_577_, v___x_585_, v___y_587_, v___x_576_);
v___x_589_ = l_Lean_Syntax_node2(v___x_577_, v___x_578_, v___x_584_, v___x_588_);
v___x_590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_590_, 0, v___x_589_);
lean_ctor_set(v___x_590_, 1, v_a_158_);
return v___x_590_;
}
}
}
else
{
lean_object* v___x_605_; lean_object* v___x_606_; uint8_t v___x_607_; 
v___x_605_ = lean_unsigned_to_nat(2u);
v___x_606_ = l_Lean_Syntax_getArg(v_x_156_, v___x_605_);
v___x_607_ = l_Lean_Syntax_matchesNull(v___x_606_, v___x_563_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; 
lean_dec(v_id_565_);
lean_dec_ref(v_a_157_);
lean_dec(v_x_156_);
v___x_608_ = l_Lean_Macro_throwUnsupported___redArg(v_a_158_);
return v___x_608_;
}
else
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; uint8_t v___x_612_; 
v___x_609_ = lean_unsigned_to_nat(3u);
v___x_610_ = l_Lean_Syntax_getArg(v_x_156_, v___x_609_);
lean_dec(v_x_156_);
v___x_611_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__15));
lean_inc(v___x_610_);
v___x_612_ = l_Lean_Syntax_isOfKind(v___x_610_, v___x_611_);
if (v___x_612_ == 0)
{
lean_object* v_quotContext_613_; lean_object* v_currMacroScope_614_; lean_object* v_ref_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___y_626_; lean_object* v___x_630_; lean_object* v___x_631_; 
v_quotContext_613_ = lean_ctor_get(v_a_157_, 1);
lean_inc(v_quotContext_613_);
v_currMacroScope_614_ = lean_ctor_get(v_a_157_, 2);
lean_inc(v_currMacroScope_614_);
v_ref_615_ = lean_ctor_get(v_a_157_, 5);
lean_inc(v_ref_615_);
lean_dec_ref(v_a_157_);
v___x_616_ = l_Lean_SourceInfo_fromRef(v_ref_615_, v___x_612_);
lean_dec(v_ref_615_);
v___x_617_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17));
v___x_618_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__60, &l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__60_once, _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__60);
v___x_619_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__62));
v___x_620_ = l_Lean_addMacroScope(v_quotContext_613_, v___x_619_, v_currMacroScope_614_);
v___x_621_ = lean_box(0);
v___x_622_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__64));
lean_inc(v___x_616_);
v___x_623_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_623_, 0, v___x_616_);
lean_ctor_set(v___x_623_, 1, v___x_618_);
lean_ctor_set(v___x_623_, 2, v___x_620_);
lean_ctor_set(v___x_623_, 3, v___x_622_);
v___x_624_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__25));
v___x_630_ = l_Lean_TSyntax_getId(v_id_565_);
lean_dec(v_id_565_);
lean_inc(v___x_630_);
v___x_631_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_621_, v___x_630_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v___x_632_; 
v___x_632_ = l_Lean_quoteNameMk(v___x_630_);
v___y_626_ = v___x_632_;
goto v___jp_625_;
}
else
{
lean_object* v_val_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
lean_dec(v___x_630_);
v_val_633_ = lean_ctor_get(v___x_631_, 0);
lean_inc(v_val_633_);
lean_dec_ref(v___x_631_);
v___x_634_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27));
v___x_635_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__28));
v___x_636_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__29));
v___x_637_ = lean_string_intercalate(v___x_636_, v_val_633_);
v___x_638_ = lean_string_append(v___x_635_, v___x_637_);
lean_dec_ref(v___x_637_);
v___x_639_ = lean_box(2);
v___x_640_ = l_Lean_Syntax_mkNameLit(v___x_638_, v___x_639_);
v___x_641_ = lean_mk_empty_array_with_capacity(v___x_564_);
v___x_642_ = lean_array_push(v___x_641_, v___x_640_);
v___x_643_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_643_, 0, v___x_639_);
lean_ctor_set(v___x_643_, 1, v___x_634_);
lean_ctor_set(v___x_643_, 2, v___x_642_);
v___y_626_ = v___x_643_;
goto v___jp_625_;
}
v___jp_625_:
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; 
lean_inc(v___x_616_);
v___x_627_ = l_Lean_Syntax_node2(v___x_616_, v___x_624_, v___y_626_, v___x_610_);
v___x_628_ = l_Lean_Syntax_node2(v___x_616_, v___x_617_, v___x_623_, v___x_627_);
v___x_629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
lean_ctor_set(v___x_629_, 1, v_a_158_);
return v___x_629_;
}
}
else
{
lean_object* v_quotContext_644_; lean_object* v_currMacroScope_645_; lean_object* v_ref_646_; uint8_t v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___y_658_; lean_object* v___x_666_; lean_object* v___x_667_; 
v_quotContext_644_ = lean_ctor_get(v_a_157_, 1);
lean_inc(v_quotContext_644_);
v_currMacroScope_645_ = lean_ctor_get(v_a_157_, 2);
lean_inc(v_currMacroScope_645_);
v_ref_646_ = lean_ctor_get(v_a_157_, 5);
lean_inc(v_ref_646_);
lean_dec_ref(v_a_157_);
v___x_647_ = 0;
v___x_648_ = l_Lean_SourceInfo_fromRef(v_ref_646_, v___x_647_);
lean_dec(v_ref_646_);
v___x_649_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__17));
v___x_650_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__60, &l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__60_once, _init_l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__60);
v___x_651_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__62));
v___x_652_ = l_Lean_addMacroScope(v_quotContext_644_, v___x_651_, v_currMacroScope_645_);
v___x_653_ = lean_box(0);
v___x_654_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__64));
lean_inc(v___x_648_);
v___x_655_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_655_, 0, v___x_648_);
lean_ctor_set(v___x_655_, 1, v___x_650_);
lean_ctor_set(v___x_655_, 2, v___x_652_);
lean_ctor_set(v___x_655_, 3, v___x_654_);
v___x_656_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__25));
v___x_666_ = l_Lean_TSyntax_getId(v_id_565_);
lean_dec(v_id_565_);
lean_inc(v___x_666_);
v___x_667_ = l___private_Init_Meta_Defs_0__Lean_getEscapedNameParts_x3f(v___x_653_, v___x_666_);
if (lean_obj_tag(v___x_667_) == 0)
{
lean_object* v___x_668_; 
v___x_668_ = l_Lean_quoteNameMk(v___x_666_);
v___y_658_ = v___x_668_;
goto v___jp_657_;
}
else
{
lean_object* v_val_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; 
lean_dec(v___x_666_);
v_val_669_ = lean_ctor_get(v___x_667_, 0);
lean_inc(v_val_669_);
lean_dec_ref(v___x_667_);
v___x_670_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__27));
v___x_671_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__28));
v___x_672_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__29));
v___x_673_ = lean_string_intercalate(v___x_672_, v_val_669_);
v___x_674_ = lean_string_append(v___x_671_, v___x_673_);
lean_dec_ref(v___x_673_);
v___x_675_ = lean_box(2);
v___x_676_ = l_Lean_Syntax_mkNameLit(v___x_674_, v___x_675_);
v___x_677_ = lean_mk_empty_array_with_capacity(v___x_564_);
v___x_678_ = lean_array_push(v___x_677_, v___x_676_);
v___x_679_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_679_, 0, v___x_675_);
lean_ctor_set(v___x_679_, 1, v___x_670_);
lean_ctor_set(v___x_679_, 2, v___x_678_);
v___y_658_ = v___x_679_;
goto v___jp_657_;
}
v___jp_657_:
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_659_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__31));
v___x_660_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__32));
lean_inc(v___x_648_);
v___x_661_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_661_, 0, v___x_648_);
lean_ctor_set(v___x_661_, 1, v___x_660_);
lean_inc(v___x_648_);
v___x_662_ = l_Lean_Syntax_node2(v___x_648_, v___x_659_, v___x_661_, v___x_610_);
lean_inc(v___x_648_);
v___x_663_ = l_Lean_Syntax_node2(v___x_648_, v___x_656_, v___y_658_, v___x_662_);
v___x_664_ = l_Lean_Syntax_node2(v___x_648_, v___x_649_, v___x_655_, v___x_663_);
v___x_665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_665_, 0, v___x_664_);
lean_ctor_set(v___x_665_, 1, v_a_158_);
return v___x_665_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__3___redArg(lean_object* v_a_680_, lean_object* v_b_681_, lean_object* v_x_682_){
_start:
{
if (lean_obj_tag(v_x_682_) == 0)
{
lean_dec(v_b_681_);
lean_dec(v_a_680_);
return v_x_682_;
}
else
{
lean_object* v_key_683_; lean_object* v_value_684_; lean_object* v_tail_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_697_; 
v_key_683_ = lean_ctor_get(v_x_682_, 0);
v_value_684_ = lean_ctor_get(v_x_682_, 1);
v_tail_685_ = lean_ctor_get(v_x_682_, 2);
v_isSharedCheck_697_ = !lean_is_exclusive(v_x_682_);
if (v_isSharedCheck_697_ == 0)
{
v___x_687_ = v_x_682_;
v_isShared_688_ = v_isSharedCheck_697_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_tail_685_);
lean_inc(v_value_684_);
lean_inc(v_key_683_);
lean_dec(v_x_682_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_697_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
uint8_t v___x_689_; 
v___x_689_ = lean_name_eq(v_key_683_, v_a_680_);
if (v___x_689_ == 0)
{
lean_object* v___x_690_; lean_object* v___x_692_; 
v___x_690_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__3___redArg(v_a_680_, v_b_681_, v_tail_685_);
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 2, v___x_690_);
v___x_692_ = v___x_687_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_key_683_);
lean_ctor_set(v_reuseFailAlloc_693_, 1, v_value_684_);
lean_ctor_set(v_reuseFailAlloc_693_, 2, v___x_690_);
v___x_692_ = v_reuseFailAlloc_693_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
return v___x_692_;
}
}
else
{
lean_object* v___x_695_; 
lean_dec(v_value_684_);
lean_dec(v_key_683_);
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 1, v_b_681_);
lean_ctor_set(v___x_687_, 0, v_a_680_);
v___x_695_ = v___x_687_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_a_680_);
lean_ctor_set(v_reuseFailAlloc_696_, 1, v_b_681_);
lean_ctor_set(v_reuseFailAlloc_696_, 2, v_tail_685_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
}
}
static uint64_t _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_698_; uint64_t v___x_699_; 
v___x_698_ = lean_unsigned_to_nat(1723u);
v___x_699_ = lean_uint64_of_nat(v___x_698_);
return v___x_699_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3_spec__5___redArg(lean_object* v_x_700_, lean_object* v_x_701_){
_start:
{
if (lean_obj_tag(v_x_701_) == 0)
{
return v_x_700_;
}
else
{
lean_object* v_key_702_; lean_object* v_value_703_; lean_object* v_tail_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_730_; 
v_key_702_ = lean_ctor_get(v_x_701_, 0);
v_value_703_ = lean_ctor_get(v_x_701_, 1);
v_tail_704_ = lean_ctor_get(v_x_701_, 2);
v_isSharedCheck_730_ = !lean_is_exclusive(v_x_701_);
if (v_isSharedCheck_730_ == 0)
{
v___x_706_ = v_x_701_;
v_isShared_707_ = v_isSharedCheck_730_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_tail_704_);
lean_inc(v_value_703_);
lean_inc(v_key_702_);
lean_dec(v_x_701_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_730_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_708_; uint64_t v___y_710_; 
v___x_708_ = lean_array_get_size(v_x_700_);
if (lean_obj_tag(v_key_702_) == 0)
{
uint64_t v___x_728_; 
v___x_728_ = lean_uint64_once(&l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3_spec__5___redArg___closed__0, &l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3_spec__5___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3_spec__5___redArg___closed__0);
v___y_710_ = v___x_728_;
goto v___jp_709_;
}
else
{
uint64_t v_hash_729_; 
v_hash_729_ = lean_ctor_get_uint64(v_key_702_, sizeof(void*)*2);
v___y_710_ = v_hash_729_;
goto v___jp_709_;
}
v___jp_709_:
{
uint64_t v___x_711_; uint64_t v___x_712_; uint64_t v_fold_713_; uint64_t v___x_714_; uint64_t v___x_715_; uint64_t v___x_716_; size_t v___x_717_; size_t v___x_718_; size_t v___x_719_; size_t v___x_720_; size_t v___x_721_; lean_object* v___x_722_; lean_object* v___x_724_; 
v___x_711_ = 32ULL;
v___x_712_ = lean_uint64_shift_right(v___y_710_, v___x_711_);
v_fold_713_ = lean_uint64_xor(v___y_710_, v___x_712_);
v___x_714_ = 16ULL;
v___x_715_ = lean_uint64_shift_right(v_fold_713_, v___x_714_);
v___x_716_ = lean_uint64_xor(v_fold_713_, v___x_715_);
v___x_717_ = lean_uint64_to_usize(v___x_716_);
v___x_718_ = lean_usize_of_nat(v___x_708_);
v___x_719_ = ((size_t)1ULL);
v___x_720_ = lean_usize_sub(v___x_718_, v___x_719_);
v___x_721_ = lean_usize_land(v___x_717_, v___x_720_);
v___x_722_ = lean_array_uget_borrowed(v_x_700_, v___x_721_);
lean_inc(v___x_722_);
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 2, v___x_722_);
v___x_724_ = v___x_706_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_key_702_);
lean_ctor_set(v_reuseFailAlloc_727_, 1, v_value_703_);
lean_ctor_set(v_reuseFailAlloc_727_, 2, v___x_722_);
v___x_724_ = v_reuseFailAlloc_727_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
lean_object* v___x_725_; 
v___x_725_ = lean_array_uset(v_x_700_, v___x_721_, v___x_724_);
v_x_700_ = v___x_725_;
v_x_701_ = v_tail_704_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3___redArg(lean_object* v_i_731_, lean_object* v_source_732_, lean_object* v_target_733_){
_start:
{
lean_object* v___x_734_; uint8_t v___x_735_; 
v___x_734_ = lean_array_get_size(v_source_732_);
v___x_735_ = lean_nat_dec_lt(v_i_731_, v___x_734_);
if (v___x_735_ == 0)
{
lean_dec_ref(v_source_732_);
lean_dec(v_i_731_);
return v_target_733_;
}
else
{
lean_object* v_es_736_; lean_object* v___x_737_; lean_object* v_source_738_; lean_object* v_target_739_; lean_object* v___x_740_; lean_object* v___x_741_; 
v_es_736_ = lean_array_fget(v_source_732_, v_i_731_);
v___x_737_ = lean_box(0);
v_source_738_ = lean_array_fset(v_source_732_, v_i_731_, v___x_737_);
v_target_739_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3_spec__5___redArg(v_target_733_, v_es_736_);
v___x_740_ = lean_unsigned_to_nat(1u);
v___x_741_ = lean_nat_add(v_i_731_, v___x_740_);
lean_dec(v_i_731_);
v_i_731_ = v___x_741_;
v_source_732_ = v_source_738_;
v_target_733_ = v_target_739_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2___redArg(lean_object* v_data_743_){
_start:
{
lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v_nbuckets_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_744_ = lean_array_get_size(v_data_743_);
v___x_745_ = lean_unsigned_to_nat(2u);
v_nbuckets_746_ = lean_nat_mul(v___x_744_, v___x_745_);
v___x_747_ = lean_unsigned_to_nat(0u);
v___x_748_ = lean_box(0);
v___x_749_ = lean_mk_array(v_nbuckets_746_, v___x_748_);
v___x_750_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3___redArg(v___x_747_, v_data_743_, v___x_749_);
return v___x_750_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__1___redArg(lean_object* v_a_751_, lean_object* v_x_752_){
_start:
{
if (lean_obj_tag(v_x_752_) == 0)
{
uint8_t v___x_753_; 
v___x_753_ = 0;
return v___x_753_;
}
else
{
lean_object* v_key_754_; lean_object* v_tail_755_; uint8_t v___x_756_; 
v_key_754_ = lean_ctor_get(v_x_752_, 0);
v_tail_755_ = lean_ctor_get(v_x_752_, 2);
v___x_756_ = lean_name_eq(v_key_754_, v_a_751_);
if (v___x_756_ == 0)
{
v_x_752_ = v_tail_755_;
goto _start;
}
else
{
return v___x_756_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_a_758_, lean_object* v_x_759_){
_start:
{
uint8_t v_res_760_; lean_object* v_r_761_; 
v_res_760_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__1___redArg(v_a_758_, v_x_759_);
lean_dec(v_x_759_);
lean_dec(v_a_758_);
v_r_761_ = lean_box(v_res_760_);
return v_r_761_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0___redArg(lean_object* v_m_762_, lean_object* v_a_763_, lean_object* v_b_764_){
_start:
{
lean_object* v_size_765_; lean_object* v_buckets_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_812_; 
v_size_765_ = lean_ctor_get(v_m_762_, 0);
v_buckets_766_ = lean_ctor_get(v_m_762_, 1);
v_isSharedCheck_812_ = !lean_is_exclusive(v_m_762_);
if (v_isSharedCheck_812_ == 0)
{
v___x_768_ = v_m_762_;
v_isShared_769_ = v_isSharedCheck_812_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_buckets_766_);
lean_inc(v_size_765_);
lean_dec(v_m_762_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_812_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_770_; uint64_t v___y_772_; 
v___x_770_ = lean_array_get_size(v_buckets_766_);
if (lean_obj_tag(v_a_763_) == 0)
{
uint64_t v___x_810_; 
v___x_810_ = lean_uint64_once(&l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3_spec__5___redArg___closed__0, &l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3_spec__5___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3_spec__5___redArg___closed__0);
v___y_772_ = v___x_810_;
goto v___jp_771_;
}
else
{
uint64_t v_hash_811_; 
v_hash_811_ = lean_ctor_get_uint64(v_a_763_, sizeof(void*)*2);
v___y_772_ = v_hash_811_;
goto v___jp_771_;
}
v___jp_771_:
{
uint64_t v___x_773_; uint64_t v___x_774_; uint64_t v_fold_775_; uint64_t v___x_776_; uint64_t v___x_777_; uint64_t v___x_778_; size_t v___x_779_; size_t v___x_780_; size_t v___x_781_; size_t v___x_782_; size_t v___x_783_; lean_object* v_bkt_784_; uint8_t v___x_785_; 
v___x_773_ = 32ULL;
v___x_774_ = lean_uint64_shift_right(v___y_772_, v___x_773_);
v_fold_775_ = lean_uint64_xor(v___y_772_, v___x_774_);
v___x_776_ = 16ULL;
v___x_777_ = lean_uint64_shift_right(v_fold_775_, v___x_776_);
v___x_778_ = lean_uint64_xor(v_fold_775_, v___x_777_);
v___x_779_ = lean_uint64_to_usize(v___x_778_);
v___x_780_ = lean_usize_of_nat(v___x_770_);
v___x_781_ = ((size_t)1ULL);
v___x_782_ = lean_usize_sub(v___x_780_, v___x_781_);
v___x_783_ = lean_usize_land(v___x_779_, v___x_782_);
v_bkt_784_ = lean_array_uget_borrowed(v_buckets_766_, v___x_783_);
v___x_785_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__1___redArg(v_a_763_, v_bkt_784_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; lean_object* v_size_x27_787_; lean_object* v___x_788_; lean_object* v_buckets_x27_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; uint8_t v___x_795_; 
v___x_786_ = lean_unsigned_to_nat(1u);
v_size_x27_787_ = lean_nat_add(v_size_765_, v___x_786_);
lean_dec(v_size_765_);
lean_inc(v_bkt_784_);
v___x_788_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_788_, 0, v_a_763_);
lean_ctor_set(v___x_788_, 1, v_b_764_);
lean_ctor_set(v___x_788_, 2, v_bkt_784_);
v_buckets_x27_789_ = lean_array_uset(v_buckets_766_, v___x_783_, v___x_788_);
v___x_790_ = lean_unsigned_to_nat(4u);
v___x_791_ = lean_nat_mul(v_size_x27_787_, v___x_790_);
v___x_792_ = lean_unsigned_to_nat(3u);
v___x_793_ = lean_nat_div(v___x_791_, v___x_792_);
lean_dec(v___x_791_);
v___x_794_ = lean_array_get_size(v_buckets_x27_789_);
v___x_795_ = lean_nat_dec_le(v___x_793_, v___x_794_);
lean_dec(v___x_793_);
if (v___x_795_ == 0)
{
lean_object* v_val_796_; lean_object* v___x_798_; 
v_val_796_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2___redArg(v_buckets_x27_789_);
if (v_isShared_769_ == 0)
{
lean_ctor_set(v___x_768_, 1, v_val_796_);
lean_ctor_set(v___x_768_, 0, v_size_x27_787_);
v___x_798_ = v___x_768_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_size_x27_787_);
lean_ctor_set(v_reuseFailAlloc_799_, 1, v_val_796_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
else
{
lean_object* v___x_801_; 
if (v_isShared_769_ == 0)
{
lean_ctor_set(v___x_768_, 1, v_buckets_x27_789_);
lean_ctor_set(v___x_768_, 0, v_size_x27_787_);
v___x_801_ = v___x_768_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_size_x27_787_);
lean_ctor_set(v_reuseFailAlloc_802_, 1, v_buckets_x27_789_);
v___x_801_ = v_reuseFailAlloc_802_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
return v___x_801_;
}
}
}
else
{
lean_object* v___x_803_; lean_object* v_buckets_x27_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_808_; 
lean_inc(v_bkt_784_);
v___x_803_ = lean_box(0);
v_buckets_x27_804_ = lean_array_uset(v_buckets_766_, v___x_783_, v___x_803_);
v___x_805_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__3___redArg(v_a_763_, v_b_764_, v_bkt_784_);
v___x_806_ = lean_array_uset(v_buckets_x27_804_, v___x_783_, v___x_805_);
if (v_isShared_769_ == 0)
{
lean_ctor_set(v___x_768_, 1, v___x_806_);
v___x_808_ = v___x_768_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_size_765_);
lean_ctor_set(v_reuseFailAlloc_809_, 1, v___x_806_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
return v___x_808_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__1___redArg(lean_object* v_as_x27_813_, lean_object* v_b_814_){
_start:
{
if (lean_obj_tag(v_as_x27_813_) == 0)
{
return v_b_814_;
}
else
{
lean_object* v_head_815_; lean_object* v_tail_816_; lean_object* v_fst_817_; lean_object* v_snd_818_; lean_object* v_r_819_; 
v_head_815_ = lean_ctor_get(v_as_x27_813_, 0);
lean_inc(v_head_815_);
v_tail_816_ = lean_ctor_get(v_as_x27_813_, 1);
lean_inc(v_tail_816_);
lean_dec_ref(v_as_x27_813_);
v_fst_817_ = lean_ctor_get(v_head_815_, 0);
lean_inc(v_fst_817_);
v_snd_818_ = lean_ctor_get(v_head_815_, 1);
lean_inc(v_snd_818_);
lean_dec(v_head_815_);
v_r_819_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0___redArg(v_b_814_, v_fst_817_, v_snd_818_);
v_as_x27_813_ = v_tail_816_;
v_b_814_ = v_r_819_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0(lean_object* v_m_821_, lean_object* v_l_822_){
_start:
{
lean_object* v___x_823_; 
v___x_823_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__1___redArg(v_l_822_, v_m_821_);
return v___x_823_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__22(void){
_start:
{
lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_886_ = lean_box(0);
v___x_887_ = lean_unsigned_to_nat(16u);
v___x_888_ = lean_mk_array(v___x_887_, v___x_886_);
return v___x_888_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__23(void){
_start:
{
lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_889_ = lean_obj_once(&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__22, &l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__22_once, _init_l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__22);
v___x_890_ = lean_unsigned_to_nat(0u);
v___x_891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_891_, 0, v___x_890_);
lean_ctor_set(v___x_891_, 1, v___x_889_);
return v___x_891_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__24(void){
_start:
{
lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_892_ = lean_obj_once(&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__23, &l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__23_once, _init_l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__23);
v___x_893_ = ((lean_object*)(l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__21));
v___x_894_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__1___redArg(v___x_893_, v___x_892_);
return v___x_894_;
}
}
static lean_object* _init_l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap(void){
_start:
{
lean_object* v___x_895_; 
v___x_895_ = lean_obj_once(&l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__24, &l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__24_once, _init_l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap___closed__24);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0(lean_object* v_00_u03b2_896_, lean_object* v_m_897_, lean_object* v_a_898_, lean_object* v_b_899_){
_start:
{
lean_object* v___x_900_; 
v___x_900_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0___redArg(v_m_897_, v_a_898_, v_b_899_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__1(lean_object* v_as_901_, lean_object* v_as_x27_902_, lean_object* v_b_903_, lean_object* v_a_904_){
_start:
{
lean_object* v___x_905_; 
v___x_905_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__1___redArg(v_as_x27_902_, v_b_903_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__1___boxed(lean_object* v_as_906_, lean_object* v_as_x27_907_, lean_object* v_b_908_, lean_object* v_a_909_){
_start:
{
lean_object* v_res_910_; 
v_res_910_ = l_List_forIn_x27_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__1(v_as_906_, v_as_x27_907_, v_b_908_, v_a_909_);
lean_dec(v_as_906_);
return v_res_910_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_911_, lean_object* v_a_912_, lean_object* v_x_913_){
_start:
{
uint8_t v___x_914_; 
v___x_914_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__1___redArg(v_a_912_, v_x_913_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_915_, lean_object* v_a_916_, lean_object* v_x_917_){
_start:
{
uint8_t v_res_918_; lean_object* v_r_919_; 
v_res_918_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__1(v_00_u03b2_915_, v_a_916_, v_x_917_);
lean_dec(v_x_917_);
lean_dec(v_a_916_);
v_r_919_ = lean_box(v_res_918_);
return v_r_919_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_920_, lean_object* v_data_921_){
_start:
{
lean_object* v___x_922_; 
v___x_922_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2___redArg(v_data_921_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_923_, lean_object* v_a_924_, lean_object* v_b_925_, lean_object* v_x_926_){
_start:
{
lean_object* v___x_927_; 
v___x_927_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__3___redArg(v_a_924_, v_b_925_, v_x_926_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3(lean_object* v_00_u03b2_928_, lean_object* v_i_929_, lean_object* v_source_930_, lean_object* v_target_931_){
_start:
{
lean_object* v___x_932_; 
v___x_932_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3___redArg(v_i_929_, v_source_930_, v_target_931_);
return v___x_932_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_933_, lean_object* v_x_934_, lean_object* v_x_935_){
_start:
{
lean_object* v___x_936_; 
v___x_936_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3_spec__5___redArg(v_x_934_, v_x_935_);
return v___x_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__3___redArg(lean_object* v_name_937_, lean_object* v___y_938_){
_start:
{
lean_object* v___x_940_; lean_object* v_env_941_; lean_object* v___x_942_; lean_object* v_toEnvExtension_943_; lean_object* v_asyncMode_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_940_ = lean_st_ref_get(v___y_938_);
v_env_941_ = lean_ctor_get(v___x_940_, 0);
lean_inc_ref(v_env_941_);
lean_dec(v___x_940_);
v___x_942_ = l_Lean_errorExplanationExt;
v_toEnvExtension_943_ = lean_ctor_get(v___x_942_, 0);
lean_inc_ref(v_toEnvExtension_943_);
v_asyncMode_944_ = lean_ctor_get(v_toEnvExtension_943_, 2);
lean_inc(v_asyncMode_944_);
lean_dec_ref(v_toEnvExtension_943_);
v___x_945_ = lean_box(1);
v___x_946_ = lean_box(0);
v___x_947_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_945_, v___x_942_, v_env_941_, v_asyncMode_944_, v___x_946_);
lean_dec(v_asyncMode_944_);
v___x_948_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_947_, v_name_937_);
lean_dec(v___x_947_);
v___x_949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_949_, 0, v___x_948_);
return v___x_949_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__3___redArg___boxed(lean_object* v_name_950_, lean_object* v___y_951_, lean_object* v___y_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_Lean_getErrorExplanation_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__3___redArg(v_name_950_, v___y_951_);
lean_dec(v___y_951_);
lean_dec(v_name_950_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__3(lean_object* v_name_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_){
_start:
{
lean_object* v___x_962_; 
v___x_962_ = l_Lean_getErrorExplanation_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__3___redArg(v_name_954_, v___y_960_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanation_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__3___boxed(lean_object* v_name_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_){
_start:
{
lean_object* v_res_971_; 
v_res_971_ = l_Lean_getErrorExplanation_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__3(v_name_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, v___y_968_, v___y_969_);
lean_dec(v___y_969_);
lean_dec_ref(v___y_968_);
lean_dec(v___y_967_);
lean_dec_ref(v___y_966_);
lean_dec(v___y_965_);
lean_dec_ref(v___y_964_);
lean_dec(v_name_963_);
return v_res_971_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_972_ = lean_box(0);
v___x_973_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_974_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_973_);
lean_ctor_set(v___x_974_, 1, v___x_972_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8___redArg(){
_start:
{
lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_976_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8___redArg___closed__0);
v___x_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_977_, 0, v___x_976_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8___redArg___boxed(lean_object* v___y_978_){
_start:
{
lean_object* v_res_979_; 
v_res_979_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8___redArg();
return v_res_979_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__0(void){
_start:
{
lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_980_ = lean_box(1);
v___x_981_ = l_Lean_MessageData_ofFormat(v___x_980_);
return v___x_981_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__3(void){
_start:
{
lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_985_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__2));
v___x_986_ = l_Lean_MessageData_ofFormat(v___x_985_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24(lean_object* v_x_987_, lean_object* v_x_988_){
_start:
{
if (lean_obj_tag(v_x_988_) == 0)
{
return v_x_987_;
}
else
{
lean_object* v_head_989_; lean_object* v_tail_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_1012_; 
v_head_989_ = lean_ctor_get(v_x_988_, 0);
v_tail_990_ = lean_ctor_get(v_x_988_, 1);
v_isSharedCheck_1012_ = !lean_is_exclusive(v_x_988_);
if (v_isSharedCheck_1012_ == 0)
{
v___x_992_ = v_x_988_;
v_isShared_993_ = v_isSharedCheck_1012_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_tail_990_);
lean_inc(v_head_989_);
lean_dec(v_x_988_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_1012_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v_before_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1010_; 
v_before_994_ = lean_ctor_get(v_head_989_, 0);
v_isSharedCheck_1010_ = !lean_is_exclusive(v_head_989_);
if (v_isSharedCheck_1010_ == 0)
{
lean_object* v_unused_1011_; 
v_unused_1011_ = lean_ctor_get(v_head_989_, 1);
lean_dec(v_unused_1011_);
v___x_996_ = v_head_989_;
v_isShared_997_ = v_isSharedCheck_1010_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_before_994_);
lean_dec(v_head_989_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1010_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_998_; lean_object* v___x_1000_; 
v___x_998_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__0);
if (v_isShared_997_ == 0)
{
lean_ctor_set_tag(v___x_996_, 7);
lean_ctor_set(v___x_996_, 1, v___x_998_);
lean_ctor_set(v___x_996_, 0, v_x_987_);
v___x_1000_ = v___x_996_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1009_; 
v_reuseFailAlloc_1009_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1009_, 0, v_x_987_);
lean_ctor_set(v_reuseFailAlloc_1009_, 1, v___x_998_);
v___x_1000_ = v_reuseFailAlloc_1009_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
lean_object* v___x_1001_; lean_object* v___x_1003_; 
v___x_1001_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__3);
if (v_isShared_993_ == 0)
{
lean_ctor_set_tag(v___x_992_, 7);
lean_ctor_set(v___x_992_, 1, v___x_1001_);
lean_ctor_set(v___x_992_, 0, v___x_1000_);
v___x_1003_ = v___x_992_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v___x_1000_);
lean_ctor_set(v_reuseFailAlloc_1008_, 1, v___x_1001_);
v___x_1003_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1004_ = l_Lean_MessageData_ofSyntax(v_before_994_);
v___x_1005_ = l_Lean_indentD(v___x_1004_);
v___x_1006_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1003_);
lean_ctor_set(v___x_1006_, 1, v___x_1005_);
v_x_987_ = v___x_1006_;
v_x_988_ = v_tail_990_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14_spec__17(lean_object* v_opts_1013_, lean_object* v_opt_1014_){
_start:
{
lean_object* v_name_1015_; lean_object* v_defValue_1016_; lean_object* v_map_1017_; lean_object* v___x_1018_; 
v_name_1015_ = lean_ctor_get(v_opt_1014_, 0);
v_defValue_1016_ = lean_ctor_get(v_opt_1014_, 1);
v_map_1017_ = lean_ctor_get(v_opts_1013_, 0);
v___x_1018_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1017_, v_name_1015_);
if (lean_obj_tag(v___x_1018_) == 0)
{
uint8_t v___x_1019_; 
v___x_1019_ = lean_unbox(v_defValue_1016_);
return v___x_1019_;
}
else
{
lean_object* v_val_1020_; 
v_val_1020_ = lean_ctor_get(v___x_1018_, 0);
lean_inc(v_val_1020_);
lean_dec_ref(v___x_1018_);
if (lean_obj_tag(v_val_1020_) == 1)
{
uint8_t v_v_1021_; 
v_v_1021_ = lean_ctor_get_uint8(v_val_1020_, 0);
lean_dec_ref(v_val_1020_);
return v_v_1021_;
}
else
{
uint8_t v___x_1022_; 
lean_dec(v_val_1020_);
v___x_1022_ = lean_unbox(v_defValue_1016_);
return v___x_1022_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14_spec__17___boxed(lean_object* v_opts_1023_, lean_object* v_opt_1024_){
_start:
{
uint8_t v_res_1025_; lean_object* v_r_1026_; 
v_res_1025_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14_spec__17(v_opts_1023_, v_opt_1024_);
lean_dec_ref(v_opt_1024_);
lean_dec_ref(v_opts_1023_);
v_r_1026_ = lean_box(v_res_1025_);
return v_r_1026_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___closed__2(void){
_start:
{
lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1030_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___closed__1));
v___x_1031_ = l_Lean_MessageData_ofFormat(v___x_1030_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg(lean_object* v_msgData_1032_, lean_object* v_macroStack_1033_, lean_object* v___y_1034_){
_start:
{
lean_object* v_options_1036_; lean_object* v___x_1037_; uint8_t v___x_1038_; 
v_options_1036_ = lean_ctor_get(v___y_1034_, 2);
v___x_1037_ = l_Lean_Elab_pp_macroStack;
v___x_1038_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14_spec__17(v_options_1036_, v___x_1037_);
if (v___x_1038_ == 0)
{
lean_object* v___x_1039_; 
lean_dec(v_macroStack_1033_);
v___x_1039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1039_, 0, v_msgData_1032_);
return v___x_1039_;
}
else
{
if (lean_obj_tag(v_macroStack_1033_) == 0)
{
lean_object* v___x_1040_; 
v___x_1040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1040_, 0, v_msgData_1032_);
return v___x_1040_;
}
else
{
lean_object* v_head_1041_; lean_object* v_after_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1057_; 
v_head_1041_ = lean_ctor_get(v_macroStack_1033_, 0);
lean_inc(v_head_1041_);
v_after_1042_ = lean_ctor_get(v_head_1041_, 1);
v_isSharedCheck_1057_ = !lean_is_exclusive(v_head_1041_);
if (v_isSharedCheck_1057_ == 0)
{
lean_object* v_unused_1058_; 
v_unused_1058_ = lean_ctor_get(v_head_1041_, 0);
lean_dec(v_unused_1058_);
v___x_1044_ = v_head_1041_;
v_isShared_1045_ = v_isSharedCheck_1057_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_after_1042_);
lean_dec(v_head_1041_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1057_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1046_; lean_object* v___x_1048_; 
v___x_1046_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__0);
if (v_isShared_1045_ == 0)
{
lean_ctor_set_tag(v___x_1044_, 7);
lean_ctor_set(v___x_1044_, 1, v___x_1046_);
lean_ctor_set(v___x_1044_, 0, v_msgData_1032_);
v___x_1048_ = v___x_1044_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_msgData_1032_);
lean_ctor_set(v_reuseFailAlloc_1056_, 1, v___x_1046_);
v___x_1048_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v_msgData_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1049_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___closed__2);
v___x_1050_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1048_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
v___x_1051_ = l_Lean_MessageData_ofSyntax(v_after_1042_);
v___x_1052_ = l_Lean_indentD(v___x_1051_);
v_msgData_1053_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_1053_, 0, v___x_1050_);
lean_ctor_set(v_msgData_1053_, 1, v___x_1052_);
v___x_1054_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24(v_msgData_1053_, v_macroStack_1033_);
v___x_1055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1054_);
return v___x_1055_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___boxed(lean_object* v_msgData_1059_, lean_object* v_macroStack_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
lean_object* v_res_1063_; 
v_res_1063_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg(v_msgData_1059_, v_macroStack_1060_, v___y_1061_);
lean_dec_ref(v___y_1061_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__19(lean_object* v_msgData_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v___x_1070_; lean_object* v_env_1071_; lean_object* v___x_1072_; lean_object* v_mctx_1073_; lean_object* v_lctx_1074_; lean_object* v_options_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1070_ = lean_st_ref_get(v___y_1068_);
v_env_1071_ = lean_ctor_get(v___x_1070_, 0);
lean_inc_ref(v_env_1071_);
lean_dec(v___x_1070_);
v___x_1072_ = lean_st_ref_get(v___y_1066_);
v_mctx_1073_ = lean_ctor_get(v___x_1072_, 0);
lean_inc_ref(v_mctx_1073_);
lean_dec(v___x_1072_);
v_lctx_1074_ = lean_ctor_get(v___y_1065_, 2);
v_options_1075_ = lean_ctor_get(v___y_1067_, 2);
lean_inc_ref(v_options_1075_);
lean_inc_ref(v_lctx_1074_);
v___x_1076_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1076_, 0, v_env_1071_);
lean_ctor_set(v___x_1076_, 1, v_mctx_1073_);
lean_ctor_set(v___x_1076_, 2, v_lctx_1074_);
lean_ctor_set(v___x_1076_, 3, v_options_1075_);
v___x_1077_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1076_);
lean_ctor_set(v___x_1077_, 1, v_msgData_1064_);
v___x_1078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1077_);
return v___x_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__19___boxed(lean_object* v_msgData_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_){
_start:
{
lean_object* v_res_1085_; 
v_res_1085_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__19(v_msgData_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_);
lean_dec(v___y_1083_);
lean_dec_ref(v___y_1082_);
lean_dec(v___y_1081_);
lean_dec_ref(v___y_1080_);
return v_res_1085_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7___redArg(lean_object* v_msg_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_){
_start:
{
lean_object* v_ref_1094_; lean_object* v___x_1095_; lean_object* v_a_1096_; lean_object* v_macroStack_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1108_; 
v_ref_1094_ = lean_ctor_get(v___y_1091_, 5);
v___x_1095_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__19(v_msg_1086_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_);
v_a_1096_ = lean_ctor_get(v___x_1095_, 0);
lean_inc(v_a_1096_);
lean_dec_ref(v___x_1095_);
v_macroStack_1097_ = lean_ctor_get(v___y_1087_, 1);
lean_inc(v_macroStack_1097_);
lean_dec_ref(v___y_1087_);
lean_inc(v_macroStack_1097_);
v___x_1098_ = l_Lean_Elab_getBetterRef(v_ref_1094_, v_macroStack_1097_);
v___x_1099_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg(v_a_1096_, v_macroStack_1097_, v___y_1091_);
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1102_ = v___x_1099_;
v_isShared_1103_ = v_isSharedCheck_1108_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1099_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1108_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1104_; lean_object* v___x_1106_; 
v___x_1104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1098_);
lean_ctor_set(v___x_1104_, 1, v_a_1100_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set_tag(v___x_1102_, 1);
lean_ctor_set(v___x_1102_, 0, v___x_1104_);
v___x_1106_ = v___x_1102_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1104_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7___redArg___boxed(lean_object* v_msg_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_){
_start:
{
lean_object* v_res_1117_; 
v_res_1117_ = l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7___redArg(v_msg_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_, v___y_1115_);
lean_dec(v___y_1115_);
lean_dec_ref(v___y_1114_);
lean_dec(v___y_1113_);
lean_dec_ref(v___y_1112_);
lean_dec(v___y_1111_);
return v_res_1117_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__6___redArg(lean_object* v_ref_1118_, lean_object* v_msg_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_){
_start:
{
lean_object* v_fileName_1127_; lean_object* v_fileMap_1128_; lean_object* v_options_1129_; lean_object* v_currRecDepth_1130_; lean_object* v_maxRecDepth_1131_; lean_object* v_ref_1132_; lean_object* v_currNamespace_1133_; lean_object* v_openDecls_1134_; lean_object* v_initHeartbeats_1135_; lean_object* v_maxHeartbeats_1136_; lean_object* v_quotContext_1137_; lean_object* v_currMacroScope_1138_; uint8_t v_diag_1139_; lean_object* v_cancelTk_x3f_1140_; uint8_t v_suppressElabErrors_1141_; lean_object* v_inheritedTraceOptions_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1151_; 
v_fileName_1127_ = lean_ctor_get(v___y_1124_, 0);
v_fileMap_1128_ = lean_ctor_get(v___y_1124_, 1);
v_options_1129_ = lean_ctor_get(v___y_1124_, 2);
v_currRecDepth_1130_ = lean_ctor_get(v___y_1124_, 3);
v_maxRecDepth_1131_ = lean_ctor_get(v___y_1124_, 4);
v_ref_1132_ = lean_ctor_get(v___y_1124_, 5);
v_currNamespace_1133_ = lean_ctor_get(v___y_1124_, 6);
v_openDecls_1134_ = lean_ctor_get(v___y_1124_, 7);
v_initHeartbeats_1135_ = lean_ctor_get(v___y_1124_, 8);
v_maxHeartbeats_1136_ = lean_ctor_get(v___y_1124_, 9);
v_quotContext_1137_ = lean_ctor_get(v___y_1124_, 10);
v_currMacroScope_1138_ = lean_ctor_get(v___y_1124_, 11);
v_diag_1139_ = lean_ctor_get_uint8(v___y_1124_, sizeof(void*)*14);
v_cancelTk_x3f_1140_ = lean_ctor_get(v___y_1124_, 12);
v_suppressElabErrors_1141_ = lean_ctor_get_uint8(v___y_1124_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1142_ = lean_ctor_get(v___y_1124_, 13);
v_isSharedCheck_1151_ = !lean_is_exclusive(v___y_1124_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1144_ = v___y_1124_;
v_isShared_1145_ = v_isSharedCheck_1151_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_inheritedTraceOptions_1142_);
lean_inc(v_cancelTk_x3f_1140_);
lean_inc(v_currMacroScope_1138_);
lean_inc(v_quotContext_1137_);
lean_inc(v_maxHeartbeats_1136_);
lean_inc(v_initHeartbeats_1135_);
lean_inc(v_openDecls_1134_);
lean_inc(v_currNamespace_1133_);
lean_inc(v_ref_1132_);
lean_inc(v_maxRecDepth_1131_);
lean_inc(v_currRecDepth_1130_);
lean_inc(v_options_1129_);
lean_inc(v_fileMap_1128_);
lean_inc(v_fileName_1127_);
lean_dec(v___y_1124_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1151_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v_ref_1146_; lean_object* v___x_1148_; 
v_ref_1146_ = l_Lean_replaceRef(v_ref_1118_, v_ref_1132_);
lean_dec(v_ref_1132_);
if (v_isShared_1145_ == 0)
{
lean_ctor_set(v___x_1144_, 5, v_ref_1146_);
v___x_1148_ = v___x_1144_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v_fileName_1127_);
lean_ctor_set(v_reuseFailAlloc_1150_, 1, v_fileMap_1128_);
lean_ctor_set(v_reuseFailAlloc_1150_, 2, v_options_1129_);
lean_ctor_set(v_reuseFailAlloc_1150_, 3, v_currRecDepth_1130_);
lean_ctor_set(v_reuseFailAlloc_1150_, 4, v_maxRecDepth_1131_);
lean_ctor_set(v_reuseFailAlloc_1150_, 5, v_ref_1146_);
lean_ctor_set(v_reuseFailAlloc_1150_, 6, v_currNamespace_1133_);
lean_ctor_set(v_reuseFailAlloc_1150_, 7, v_openDecls_1134_);
lean_ctor_set(v_reuseFailAlloc_1150_, 8, v_initHeartbeats_1135_);
lean_ctor_set(v_reuseFailAlloc_1150_, 9, v_maxHeartbeats_1136_);
lean_ctor_set(v_reuseFailAlloc_1150_, 10, v_quotContext_1137_);
lean_ctor_set(v_reuseFailAlloc_1150_, 11, v_currMacroScope_1138_);
lean_ctor_set(v_reuseFailAlloc_1150_, 12, v_cancelTk_x3f_1140_);
lean_ctor_set(v_reuseFailAlloc_1150_, 13, v_inheritedTraceOptions_1142_);
lean_ctor_set_uint8(v_reuseFailAlloc_1150_, sizeof(void*)*14, v_diag_1139_);
lean_ctor_set_uint8(v_reuseFailAlloc_1150_, sizeof(void*)*14 + 1, v_suppressElabErrors_1141_);
v___x_1148_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
lean_object* v___x_1149_; 
v___x_1149_ = l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7___redArg(v_msg_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___x_1148_, v___y_1125_);
lean_dec_ref(v___x_1148_);
return v___x_1149_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__6___redArg___boxed(lean_object* v_ref_1152_, lean_object* v_msg_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__6___redArg(v_ref_1152_, v_msg_1153_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_);
lean_dec(v___y_1159_);
lean_dec(v___y_1157_);
lean_dec_ref(v___y_1156_);
lean_dec(v___y_1155_);
lean_dec(v_ref_1152_);
return v_res_1161_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = l_Lean_maxRecDepthErrorMessage;
v___x_1168_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1168_, 0, v___x_1167_);
return v___x_1168_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_1169_; lean_object* v___x_1170_; 
v___x_1169_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__3);
v___x_1170_ = l_Lean_MessageData_ofFormat(v___x_1169_);
return v___x_1170_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1171_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__4);
v___x_1172_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__2));
v___x_1173_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1173_, 0, v___x_1172_);
lean_ctor_set(v___x_1173_, 1, v___x_1171_);
return v___x_1173_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg(lean_object* v_ref_1174_){
_start:
{
lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1176_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___closed__5);
v___x_1177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1177_, 0, v_ref_1174_);
lean_ctor_set(v___x_1177_, 1, v___x_1176_);
v___x_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1177_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg___boxed(lean_object* v_ref_1179_, lean_object* v___y_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg(v_ref_1179_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__1(lean_object* v_env_1182_, lean_object* v_declName_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_){
_start:
{
uint8_t v___x_1186_; lean_object* v_env_1187_; lean_object* v___x_1188_; uint8_t v___x_1189_; uint8_t v___x_1190_; 
v___x_1186_ = 0;
v_env_1187_ = l_Lean_Environment_setExporting(v_env_1182_, v___x_1186_);
lean_inc(v_declName_1183_);
v___x_1188_ = l_Lean_mkPrivateName(v_env_1187_, v_declName_1183_);
v___x_1189_ = 1;
lean_inc_ref(v_env_1187_);
v___x_1190_ = l_Lean_Environment_contains(v_env_1187_, v___x_1188_, v___x_1189_);
if (v___x_1190_ == 0)
{
lean_object* v___x_1191_; uint8_t v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1191_ = l_Lean_privateToUserName(v_declName_1183_);
v___x_1192_ = l_Lean_Environment_contains(v_env_1187_, v___x_1191_, v___x_1189_);
v___x_1193_ = lean_box(v___x_1192_);
v___x_1194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1193_);
lean_ctor_set(v___x_1194_, 1, v___y_1185_);
return v___x_1194_;
}
else
{
lean_object* v___x_1195_; lean_object* v___x_1196_; 
lean_dec_ref(v_env_1187_);
lean_dec(v_declName_1183_);
v___x_1195_ = lean_box(v___x_1190_);
v___x_1196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1196_, 0, v___x_1195_);
lean_ctor_set(v___x_1196_, 1, v___y_1185_);
return v___x_1196_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__1___boxed(lean_object* v_env_1197_, lean_object* v_declName_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_){
_start:
{
lean_object* v_res_1201_; 
v_res_1201_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__1(v_env_1197_, v_declName_1198_, v___y_1199_, v___y_1200_);
lean_dec_ref(v___y_1199_);
return v_res_1201_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__2___redArg(lean_object* v_x_1202_, lean_object* v___y_1203_){
_start:
{
if (lean_obj_tag(v_x_1202_) == 0)
{
lean_object* v_a_1204_; lean_object* v___x_1205_; 
v_a_1204_ = lean_ctor_get(v_x_1202_, 0);
lean_inc(v_a_1204_);
v___x_1205_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1205_, 0, v_a_1204_);
lean_ctor_set(v___x_1205_, 1, v___y_1203_);
return v___x_1205_;
}
else
{
lean_object* v_a_1206_; lean_object* v___x_1207_; 
v_a_1206_ = lean_ctor_get(v_x_1202_, 0);
lean_inc(v_a_1206_);
v___x_1207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1207_, 0, v_a_1206_);
lean_ctor_set(v___x_1207_, 1, v___y_1203_);
return v___x_1207_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__2___redArg___boxed(lean_object* v_x_1208_, lean_object* v___y_1209_){
_start:
{
lean_object* v_res_1210_; 
v_res_1210_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__2___redArg(v_x_1208_, v___y_1209_);
lean_dec_ref(v_x_1208_);
return v_res_1210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__0(lean_object* v_env_1211_, lean_object* v_stx_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_){
_start:
{
lean_object* v___x_1215_; 
v___x_1215_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_1211_, v_stx_1212_, v___y_1213_, v___y_1214_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v_a_1216_; 
v_a_1216_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_a_1216_);
if (lean_obj_tag(v_a_1216_) == 0)
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1225_; 
v_a_1217_ = lean_ctor_get(v___x_1215_, 1);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1225_ == 0)
{
lean_object* v_unused_1226_; 
v_unused_1226_ = lean_ctor_get(v___x_1215_, 0);
lean_dec(v_unused_1226_);
v___x_1219_ = v___x_1215_;
v_isShared_1220_ = v_isSharedCheck_1225_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1215_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1225_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1221_; lean_object* v___x_1223_; 
v___x_1221_ = lean_box(0);
if (v_isShared_1220_ == 0)
{
lean_ctor_set(v___x_1219_, 0, v___x_1221_);
v___x_1223_ = v___x_1219_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v___x_1221_);
lean_ctor_set(v_reuseFailAlloc_1224_, 1, v_a_1217_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
else
{
lean_object* v_val_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1255_; 
v_val_1227_ = lean_ctor_get(v_a_1216_, 0);
v_isSharedCheck_1255_ = !lean_is_exclusive(v_a_1216_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1229_ = v_a_1216_;
v_isShared_1230_ = v_isSharedCheck_1255_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_val_1227_);
lean_dec(v_a_1216_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1255_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v_snd_1231_; 
v_snd_1231_ = lean_ctor_get(v_val_1227_, 1);
lean_inc(v_snd_1231_);
lean_dec(v_val_1227_);
if (lean_obj_tag(v_snd_1231_) == 0)
{
lean_object* v_a_1232_; lean_object* v_a_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1241_; 
lean_del_object(v___x_1229_);
v_a_1232_ = lean_ctor_get(v___x_1215_, 1);
lean_inc(v_a_1232_);
lean_dec_ref(v___x_1215_);
v_a_1233_ = lean_ctor_get(v_snd_1231_, 0);
v_isSharedCheck_1241_ = !lean_is_exclusive(v_snd_1231_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1235_ = v_snd_1231_;
v_isShared_1236_ = v_isSharedCheck_1241_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_a_1233_);
lean_dec(v_snd_1231_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1241_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1238_; 
if (v_isShared_1236_ == 0)
{
v___x_1238_ = v___x_1235_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_a_1233_);
v___x_1238_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
lean_object* v___x_1239_; 
v___x_1239_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__2___redArg(v___x_1238_, v_a_1232_);
lean_dec_ref(v___x_1238_);
return v___x_1239_;
}
}
}
else
{
lean_object* v_a_1242_; lean_object* v_a_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1254_; 
v_a_1242_ = lean_ctor_get(v___x_1215_, 1);
lean_inc(v_a_1242_);
lean_dec_ref(v___x_1215_);
v_a_1243_ = lean_ctor_get(v_snd_1231_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v_snd_1231_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1245_ = v_snd_1231_;
v_isShared_1246_ = v_isSharedCheck_1254_;
goto v_resetjp_1244_;
}
else
{
lean_inc(v_a_1243_);
lean_dec(v_snd_1231_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1254_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1248_; 
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 0, v_a_1243_);
v___x_1248_ = v___x_1229_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_a_1243_);
v___x_1248_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
lean_object* v___x_1250_; 
if (v_isShared_1246_ == 0)
{
lean_ctor_set(v___x_1245_, 0, v___x_1248_);
v___x_1250_ = v___x_1245_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v___x_1248_);
v___x_1250_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
lean_object* v___x_1251_; 
v___x_1251_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__2___redArg(v___x_1250_, v_a_1242_);
lean_dec_ref(v___x_1250_);
return v___x_1251_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1256_; lean_object* v_a_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1264_; 
v_a_1256_ = lean_ctor_get(v___x_1215_, 0);
v_a_1257_ = lean_ctor_get(v___x_1215_, 1);
v_isSharedCheck_1264_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1264_ == 0)
{
v___x_1259_ = v___x_1215_;
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_a_1257_);
lean_inc(v_a_1256_);
lean_dec(v___x_1215_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___x_1262_; 
if (v_isShared_1260_ == 0)
{
v___x_1262_ = v___x_1259_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v_a_1256_);
lean_ctor_set(v_reuseFailAlloc_1263_, 1, v_a_1257_);
v___x_1262_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
return v___x_1262_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__0___boxed(lean_object* v_env_1265_, lean_object* v_stx_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_){
_start:
{
lean_object* v_res_1269_; 
v_res_1269_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__0(v_env_1265_, v_stx_1266_, v___y_1267_, v___y_1268_);
lean_dec_ref(v___y_1267_);
return v_res_1269_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___redArg(lean_object* v_cls_1273_, lean_object* v___y_1274_){
_start:
{
lean_object* v_options_1276_; uint8_t v_hasTrace_1277_; 
v_options_1276_ = lean_ctor_get(v___y_1274_, 2);
v_hasTrace_1277_ = lean_ctor_get_uint8(v_options_1276_, sizeof(void*)*1);
if (v_hasTrace_1277_ == 0)
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
lean_dec(v_cls_1273_);
v___x_1278_ = lean_box(v_hasTrace_1277_);
v___x_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1278_);
return v___x_1279_;
}
else
{
lean_object* v_inheritedTraceOptions_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; uint8_t v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; 
v_inheritedTraceOptions_1280_ = lean_ctor_get(v___y_1274_, 13);
v___x_1281_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___redArg___closed__1));
v___x_1282_ = l_Lean_Name_append(v___x_1281_, v_cls_1273_);
v___x_1283_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1280_, v_options_1276_, v___x_1282_);
lean_dec(v___x_1282_);
v___x_1284_ = lean_box(v___x_1283_);
v___x_1285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1284_);
return v___x_1285_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___redArg___boxed(lean_object* v_cls_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___redArg(v_cls_1286_, v___y_1287_);
lean_dec_ref(v___y_1287_);
return v_res_1289_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1290_; double v___x_1291_; 
v___x_1290_ = lean_unsigned_to_nat(0u);
v___x_1291_ = lean_float_of_nat(v___x_1290_);
return v___x_1291_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg(lean_object* v_cls_1295_, lean_object* v_msg_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v_ref_1302_; lean_object* v___x_1303_; lean_object* v_a_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1348_; 
v_ref_1302_ = lean_ctor_get(v___y_1299_, 5);
v___x_1303_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__19(v_msg_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_);
v_a_1304_ = lean_ctor_get(v___x_1303_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1306_ = v___x_1303_;
v_isShared_1307_ = v_isSharedCheck_1348_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_a_1304_);
lean_dec(v___x_1303_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1348_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1308_; lean_object* v_traceState_1309_; lean_object* v_env_1310_; lean_object* v_nextMacroScope_1311_; lean_object* v_ngen_1312_; lean_object* v_auxDeclNGen_1313_; lean_object* v_cache_1314_; lean_object* v_messages_1315_; lean_object* v_infoState_1316_; lean_object* v_snapshotTasks_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1347_; 
v___x_1308_ = lean_st_ref_take(v___y_1300_);
v_traceState_1309_ = lean_ctor_get(v___x_1308_, 4);
v_env_1310_ = lean_ctor_get(v___x_1308_, 0);
v_nextMacroScope_1311_ = lean_ctor_get(v___x_1308_, 1);
v_ngen_1312_ = lean_ctor_get(v___x_1308_, 2);
v_auxDeclNGen_1313_ = lean_ctor_get(v___x_1308_, 3);
v_cache_1314_ = lean_ctor_get(v___x_1308_, 5);
v_messages_1315_ = lean_ctor_get(v___x_1308_, 6);
v_infoState_1316_ = lean_ctor_get(v___x_1308_, 7);
v_snapshotTasks_1317_ = lean_ctor_get(v___x_1308_, 8);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1319_ = v___x_1308_;
v_isShared_1320_ = v_isSharedCheck_1347_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_snapshotTasks_1317_);
lean_inc(v_infoState_1316_);
lean_inc(v_messages_1315_);
lean_inc(v_cache_1314_);
lean_inc(v_traceState_1309_);
lean_inc(v_auxDeclNGen_1313_);
lean_inc(v_ngen_1312_);
lean_inc(v_nextMacroScope_1311_);
lean_inc(v_env_1310_);
lean_dec(v___x_1308_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1347_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
uint64_t v_tid_1321_; lean_object* v_traces_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1346_; 
v_tid_1321_ = lean_ctor_get_uint64(v_traceState_1309_, sizeof(void*)*1);
v_traces_1322_ = lean_ctor_get(v_traceState_1309_, 0);
v_isSharedCheck_1346_ = !lean_is_exclusive(v_traceState_1309_);
if (v_isSharedCheck_1346_ == 0)
{
v___x_1324_ = v_traceState_1309_;
v_isShared_1325_ = v_isSharedCheck_1346_;
goto v_resetjp_1323_;
}
else
{
lean_inc(v_traces_1322_);
lean_dec(v_traceState_1309_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1346_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
lean_object* v___x_1326_; double v___x_1327_; uint8_t v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1336_; 
v___x_1326_ = lean_box(0);
v___x_1327_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__0);
v___x_1328_ = 0;
v___x_1329_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__1));
v___x_1330_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1330_, 0, v_cls_1295_);
lean_ctor_set(v___x_1330_, 1, v___x_1326_);
lean_ctor_set(v___x_1330_, 2, v___x_1329_);
lean_ctor_set_float(v___x_1330_, sizeof(void*)*3, v___x_1327_);
lean_ctor_set_float(v___x_1330_, sizeof(void*)*3 + 8, v___x_1327_);
lean_ctor_set_uint8(v___x_1330_, sizeof(void*)*3 + 16, v___x_1328_);
v___x_1331_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__2));
v___x_1332_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1330_);
lean_ctor_set(v___x_1332_, 1, v_a_1304_);
lean_ctor_set(v___x_1332_, 2, v___x_1331_);
lean_inc(v_ref_1302_);
v___x_1333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1333_, 0, v_ref_1302_);
lean_ctor_set(v___x_1333_, 1, v___x_1332_);
v___x_1334_ = l_Lean_PersistentArray_push___redArg(v_traces_1322_, v___x_1333_);
if (v_isShared_1325_ == 0)
{
lean_ctor_set(v___x_1324_, 0, v___x_1334_);
v___x_1336_ = v___x_1324_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v___x_1334_);
lean_ctor_set_uint64(v_reuseFailAlloc_1345_, sizeof(void*)*1, v_tid_1321_);
v___x_1336_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
lean_object* v___x_1338_; 
if (v_isShared_1320_ == 0)
{
lean_ctor_set(v___x_1319_, 4, v___x_1336_);
v___x_1338_ = v___x_1319_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v_env_1310_);
lean_ctor_set(v_reuseFailAlloc_1344_, 1, v_nextMacroScope_1311_);
lean_ctor_set(v_reuseFailAlloc_1344_, 2, v_ngen_1312_);
lean_ctor_set(v_reuseFailAlloc_1344_, 3, v_auxDeclNGen_1313_);
lean_ctor_set(v_reuseFailAlloc_1344_, 4, v___x_1336_);
lean_ctor_set(v_reuseFailAlloc_1344_, 5, v_cache_1314_);
lean_ctor_set(v_reuseFailAlloc_1344_, 6, v_messages_1315_);
lean_ctor_set(v_reuseFailAlloc_1344_, 7, v_infoState_1316_);
lean_ctor_set(v_reuseFailAlloc_1344_, 8, v_snapshotTasks_1317_);
v___x_1338_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1342_; 
v___x_1339_ = lean_st_ref_set(v___y_1300_, v___x_1338_);
v___x_1340_ = lean_box(0);
if (v_isShared_1307_ == 0)
{
lean_ctor_set(v___x_1306_, 0, v___x_1340_);
v___x_1342_ = v___x_1306_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v___x_1340_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
return v___x_1342_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___boxed(lean_object* v_cls_1349_, lean_object* v_msg_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
lean_object* v_res_1356_; 
v_res_1356_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg(v_cls_1349_, v_msg_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__5(lean_object* v_as_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_){
_start:
{
if (lean_obj_tag(v_as_1357_) == 0)
{
lean_object* v___x_1365_; lean_object* v___x_1366_; 
v___x_1365_ = lean_box(0);
v___x_1366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1366_, 0, v___x_1365_);
return v___x_1366_;
}
else
{
lean_object* v_head_1367_; lean_object* v_tail_1368_; lean_object* v_fst_1369_; lean_object* v_snd_1370_; lean_object* v___x_1371_; lean_object* v_a_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1384_; 
v_head_1367_ = lean_ctor_get(v_as_1357_, 0);
lean_inc(v_head_1367_);
v_tail_1368_ = lean_ctor_get(v_as_1357_, 1);
lean_inc(v_tail_1368_);
lean_dec_ref(v_as_1357_);
v_fst_1369_ = lean_ctor_get(v_head_1367_, 0);
lean_inc(v_fst_1369_);
v_snd_1370_ = lean_ctor_get(v_head_1367_, 1);
lean_inc(v_snd_1370_);
lean_dec(v_head_1367_);
lean_inc(v_fst_1369_);
v___x_1371_ = l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___redArg(v_fst_1369_, v___y_1362_);
v_a_1372_ = lean_ctor_get(v___x_1371_, 0);
v_isSharedCheck_1384_ = !lean_is_exclusive(v___x_1371_);
if (v_isSharedCheck_1384_ == 0)
{
v___x_1374_ = v___x_1371_;
v_isShared_1375_ = v_isSharedCheck_1384_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_a_1372_);
lean_dec(v___x_1371_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1384_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
uint8_t v___x_1376_; 
v___x_1376_ = lean_unbox(v_a_1372_);
lean_dec(v_a_1372_);
if (v___x_1376_ == 0)
{
lean_del_object(v___x_1374_);
lean_dec(v_snd_1370_);
lean_dec(v_fst_1369_);
v_as_1357_ = v_tail_1368_;
goto _start;
}
else
{
lean_object* v___x_1379_; 
if (v_isShared_1375_ == 0)
{
lean_ctor_set_tag(v___x_1374_, 3);
lean_ctor_set(v___x_1374_, 0, v_snd_1370_);
v___x_1379_ = v___x_1374_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v_snd_1370_);
v___x_1379_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1380_ = l_Lean_MessageData_ofFormat(v___x_1379_);
v___x_1381_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg(v_fst_1369_, v___x_1380_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_);
if (lean_obj_tag(v___x_1381_) == 0)
{
lean_dec_ref(v___x_1381_);
v_as_1357_ = v_tail_1368_;
goto _start;
}
else
{
lean_dec(v_tail_1368_);
return v___x_1381_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__5___boxed(lean_object* v_as_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
lean_object* v_res_1393_; 
v_res_1393_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__5(v_as_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_);
lean_dec(v___y_1391_);
lean_dec_ref(v___y_1390_);
lean_dec(v___y_1389_);
lean_dec_ref(v___y_1388_);
lean_dec(v___y_1387_);
lean_dec_ref(v___y_1386_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__4(lean_object* v_env_1394_, lean_object* v_options_1395_, lean_object* v_currNamespace_1396_, lean_object* v_openDecls_1397_, lean_object* v_n_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_){
_start:
{
lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1401_ = l_Lean_ResolveName_resolveGlobalName(v_env_1394_, v_options_1395_, v_currNamespace_1396_, v_openDecls_1397_, v_n_1398_);
v___x_1402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1401_);
lean_ctor_set(v___x_1402_, 1, v___y_1400_);
return v___x_1402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__4___boxed(lean_object* v_env_1403_, lean_object* v_options_1404_, lean_object* v_currNamespace_1405_, lean_object* v_openDecls_1406_, lean_object* v_n_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_){
_start:
{
lean_object* v_res_1410_; 
v_res_1410_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__4(v_env_1403_, v_options_1404_, v_currNamespace_1405_, v_openDecls_1406_, v_n_1407_, v___y_1408_, v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec_ref(v_options_1404_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__3(lean_object* v_currNamespace_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_){
_start:
{
lean_object* v___x_1414_; 
v___x_1414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1414_, 0, v_currNamespace_1411_);
lean_ctor_set(v___x_1414_, 1, v___y_1413_);
return v___x_1414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__3___boxed(lean_object* v_currNamespace_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_){
_start:
{
lean_object* v_res_1418_; 
v_res_1418_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__3(v_currNamespace_1415_, v___y_1416_, v___y_1417_);
lean_dec_ref(v___y_1416_);
return v_res_1418_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6_spec__17___redArg(lean_object* v_a_1419_, lean_object* v_x_1420_){
_start:
{
if (lean_obj_tag(v_x_1420_) == 0)
{
lean_object* v___x_1421_; 
v___x_1421_ = lean_box(0);
return v___x_1421_;
}
else
{
lean_object* v_key_1422_; lean_object* v_value_1423_; lean_object* v_tail_1424_; uint8_t v___x_1425_; 
v_key_1422_ = lean_ctor_get(v_x_1420_, 0);
v_value_1423_ = lean_ctor_get(v_x_1420_, 1);
v_tail_1424_ = lean_ctor_get(v_x_1420_, 2);
v___x_1425_ = lean_name_eq(v_key_1422_, v_a_1419_);
if (v___x_1425_ == 0)
{
v_x_1420_ = v_tail_1424_;
goto _start;
}
else
{
lean_object* v___x_1427_; 
lean_inc(v_value_1423_);
v___x_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1427_, 0, v_value_1423_);
return v___x_1427_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6_spec__17___redArg___boxed(lean_object* v_a_1428_, lean_object* v_x_1429_){
_start:
{
lean_object* v_res_1430_; 
v_res_1430_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6_spec__17___redArg(v_a_1428_, v_x_1429_);
lean_dec(v_x_1429_);
lean_dec(v_a_1428_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6___redArg(lean_object* v_m_1431_, lean_object* v_a_1432_){
_start:
{
lean_object* v_buckets_1433_; lean_object* v___x_1434_; uint64_t v___y_1436_; 
v_buckets_1433_ = lean_ctor_get(v_m_1431_, 1);
v___x_1434_ = lean_array_get_size(v_buckets_1433_);
if (lean_obj_tag(v_a_1432_) == 0)
{
uint64_t v___x_1450_; 
v___x_1450_ = lean_uint64_once(&l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3_spec__5___redArg___closed__0, &l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3_spec__5___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertMany___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap_spec__0_spec__0_spec__2_spec__3_spec__5___redArg___closed__0);
v___y_1436_ = v___x_1450_;
goto v___jp_1435_;
}
else
{
uint64_t v_hash_1451_; 
v_hash_1451_ = lean_ctor_get_uint64(v_a_1432_, sizeof(void*)*2);
v___y_1436_ = v_hash_1451_;
goto v___jp_1435_;
}
v___jp_1435_:
{
uint64_t v___x_1437_; uint64_t v___x_1438_; uint64_t v_fold_1439_; uint64_t v___x_1440_; uint64_t v___x_1441_; uint64_t v___x_1442_; size_t v___x_1443_; size_t v___x_1444_; size_t v___x_1445_; size_t v___x_1446_; size_t v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1437_ = 32ULL;
v___x_1438_ = lean_uint64_shift_right(v___y_1436_, v___x_1437_);
v_fold_1439_ = lean_uint64_xor(v___y_1436_, v___x_1438_);
v___x_1440_ = 16ULL;
v___x_1441_ = lean_uint64_shift_right(v_fold_1439_, v___x_1440_);
v___x_1442_ = lean_uint64_xor(v_fold_1439_, v___x_1441_);
v___x_1443_ = lean_uint64_to_usize(v___x_1442_);
v___x_1444_ = lean_usize_of_nat(v___x_1434_);
v___x_1445_ = ((size_t)1ULL);
v___x_1446_ = lean_usize_sub(v___x_1444_, v___x_1445_);
v___x_1447_ = lean_usize_land(v___x_1443_, v___x_1446_);
v___x_1448_ = lean_array_uget_borrowed(v_buckets_1433_, v___x_1447_);
v___x_1449_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6_spec__17___redArg(v_a_1432_, v___x_1448_);
return v___x_1449_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6___redArg___boxed(lean_object* v_m_1452_, lean_object* v_a_1453_){
_start:
{
lean_object* v_res_1454_; 
v_res_1454_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6___redArg(v_m_1452_, v_a_1453_);
lean_dec(v_a_1453_);
lean_dec_ref(v_m_1452_);
return v_res_1454_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24_spec__27___redArg(lean_object* v_keys_1455_, lean_object* v_i_1456_, lean_object* v_k_1457_){
_start:
{
lean_object* v___x_1458_; uint8_t v___x_1459_; 
v___x_1458_ = lean_array_get_size(v_keys_1455_);
v___x_1459_ = lean_nat_dec_lt(v_i_1456_, v___x_1458_);
if (v___x_1459_ == 0)
{
lean_dec(v_i_1456_);
return v___x_1459_;
}
else
{
lean_object* v_k_x27_1460_; uint8_t v___x_1461_; 
v_k_x27_1460_ = lean_array_fget_borrowed(v_keys_1455_, v_i_1456_);
v___x_1461_ = l_Lean_instBEqExtraModUse_beq(v_k_1457_, v_k_x27_1460_);
if (v___x_1461_ == 0)
{
lean_object* v___x_1462_; lean_object* v___x_1463_; 
v___x_1462_ = lean_unsigned_to_nat(1u);
v___x_1463_ = lean_nat_add(v_i_1456_, v___x_1462_);
lean_dec(v_i_1456_);
v_i_1456_ = v___x_1463_;
goto _start;
}
else
{
lean_dec(v_i_1456_);
return v___x_1461_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24_spec__27___redArg___boxed(lean_object* v_keys_1465_, lean_object* v_i_1466_, lean_object* v_k_1467_){
_start:
{
uint8_t v_res_1468_; lean_object* v_r_1469_; 
v_res_1468_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24_spec__27___redArg(v_keys_1465_, v_i_1466_, v_k_1467_);
lean_dec_ref(v_k_1467_);
lean_dec_ref(v_keys_1465_);
v_r_1469_ = lean_box(v_res_1468_);
return v_r_1469_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg___closed__0(void){
_start:
{
size_t v___x_1470_; size_t v___x_1471_; size_t v___x_1472_; 
v___x_1470_ = ((size_t)5ULL);
v___x_1471_ = ((size_t)1ULL);
v___x_1472_ = lean_usize_shift_left(v___x_1471_, v___x_1470_);
return v___x_1472_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg___closed__1(void){
_start:
{
size_t v___x_1473_; size_t v___x_1474_; size_t v___x_1475_; 
v___x_1473_ = ((size_t)1ULL);
v___x_1474_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg___closed__0);
v___x_1475_ = lean_usize_sub(v___x_1474_, v___x_1473_);
return v___x_1475_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg(lean_object* v_x_1476_, size_t v_x_1477_, lean_object* v_x_1478_){
_start:
{
if (lean_obj_tag(v_x_1476_) == 0)
{
lean_object* v_es_1479_; lean_object* v___x_1480_; size_t v___x_1481_; size_t v___x_1482_; size_t v___x_1483_; lean_object* v_j_1484_; lean_object* v___x_1485_; 
v_es_1479_ = lean_ctor_get(v_x_1476_, 0);
lean_inc_ref(v_es_1479_);
lean_dec_ref(v_x_1476_);
v___x_1480_ = lean_box(2);
v___x_1481_ = ((size_t)5ULL);
v___x_1482_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg___closed__1);
v___x_1483_ = lean_usize_land(v_x_1477_, v___x_1482_);
v_j_1484_ = lean_usize_to_nat(v___x_1483_);
v___x_1485_ = lean_array_get(v___x_1480_, v_es_1479_, v_j_1484_);
lean_dec(v_j_1484_);
lean_dec_ref(v_es_1479_);
switch(lean_obj_tag(v___x_1485_))
{
case 0:
{
lean_object* v_key_1486_; uint8_t v___x_1487_; 
v_key_1486_ = lean_ctor_get(v___x_1485_, 0);
lean_inc(v_key_1486_);
lean_dec_ref(v___x_1485_);
v___x_1487_ = l_Lean_instBEqExtraModUse_beq(v_x_1478_, v_key_1486_);
lean_dec(v_key_1486_);
return v___x_1487_;
}
case 1:
{
lean_object* v_node_1488_; size_t v___x_1489_; 
v_node_1488_ = lean_ctor_get(v___x_1485_, 0);
lean_inc(v_node_1488_);
lean_dec_ref(v___x_1485_);
v___x_1489_ = lean_usize_shift_right(v_x_1477_, v___x_1481_);
v_x_1476_ = v_node_1488_;
v_x_1477_ = v___x_1489_;
goto _start;
}
default: 
{
uint8_t v___x_1491_; 
v___x_1491_ = 0;
return v___x_1491_;
}
}
}
else
{
lean_object* v_ks_1492_; lean_object* v___x_1493_; uint8_t v___x_1494_; 
v_ks_1492_ = lean_ctor_get(v_x_1476_, 0);
lean_inc_ref(v_ks_1492_);
lean_dec_ref(v_x_1476_);
v___x_1493_ = lean_unsigned_to_nat(0u);
v___x_1494_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24_spec__27___redArg(v_ks_1492_, v___x_1493_, v_x_1478_);
lean_dec_ref(v_ks_1492_);
return v___x_1494_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg___boxed(lean_object* v_x_1495_, lean_object* v_x_1496_, lean_object* v_x_1497_){
_start:
{
size_t v_x_20418__boxed_1498_; uint8_t v_res_1499_; lean_object* v_r_1500_; 
v_x_20418__boxed_1498_ = lean_unbox_usize(v_x_1496_);
lean_dec(v_x_1496_);
v_res_1499_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg(v_x_1495_, v_x_20418__boxed_1498_, v_x_1497_);
lean_dec_ref(v_x_1497_);
v_r_1500_ = lean_box(v_res_1499_);
return v_r_1500_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16___redArg(lean_object* v_x_1501_, lean_object* v_x_1502_){
_start:
{
uint64_t v___x_1503_; size_t v___x_1504_; uint8_t v___x_1505_; 
v___x_1503_ = l_Lean_instHashableExtraModUse_hash(v_x_1502_);
v___x_1504_ = lean_uint64_to_usize(v___x_1503_);
v___x_1505_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg(v_x_1501_, v___x_1504_, v_x_1502_);
return v___x_1505_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16___redArg___boxed(lean_object* v_x_1506_, lean_object* v_x_1507_){
_start:
{
uint8_t v_res_1508_; lean_object* v_r_1509_; 
v_res_1508_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16___redArg(v_x_1506_, v_x_1507_);
lean_dec_ref(v_x_1507_);
v_r_1509_ = lean_box(v_res_1508_);
return v_r_1509_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__2(void){
_start:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1512_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__1));
v___x_1513_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__0));
v___x_1514_ = l_Lean_PersistentHashMap_empty(lean_box(0), lean_box(0), v___x_1513_, v___x_1512_);
return v___x_1514_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__3(void){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1515_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__4(void){
_start:
{
lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1516_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__3);
v___x_1517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1517_, 0, v___x_1516_);
return v___x_1517_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__5(void){
_start:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; 
v___x_1518_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__4);
v___x_1519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1519_, 0, v___x_1518_);
lean_ctor_set(v___x_1519_, 1, v___x_1518_);
return v___x_1519_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__6(void){
_start:
{
lean_object* v___x_1520_; lean_object* v___x_1521_; 
v___x_1520_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__4);
v___x_1521_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1520_);
lean_ctor_set(v___x_1521_, 1, v___x_1520_);
lean_ctor_set(v___x_1521_, 2, v___x_1520_);
lean_ctor_set(v___x_1521_, 3, v___x_1520_);
lean_ctor_set(v___x_1521_, 4, v___x_1520_);
lean_ctor_set(v___x_1521_, 5, v___x_1520_);
return v___x_1521_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__10(void){
_start:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___x_1526_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__9));
v___x_1527_ = l_Lean_stringToMessageData(v___x_1526_);
return v___x_1527_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__12(void){
_start:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; 
v___x_1529_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__11));
v___x_1530_ = l_Lean_stringToMessageData(v___x_1529_);
return v___x_1530_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__13(void){
_start:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1531_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__1));
v___x_1532_ = l_Lean_stringToMessageData(v___x_1531_);
return v___x_1532_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__15(void){
_start:
{
lean_object* v___x_1534_; lean_object* v___x_1535_; 
v___x_1534_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__14));
v___x_1535_ = l_Lean_stringToMessageData(v___x_1534_);
return v___x_1535_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__17(void){
_start:
{
lean_object* v___x_1537_; lean_object* v___x_1538_; 
v___x_1537_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__16));
v___x_1538_ = l_Lean_stringToMessageData(v___x_1537_);
return v___x_1538_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5(lean_object* v_mod_1543_, uint8_t v_isMeta_1544_, lean_object* v_hint_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_){
_start:
{
lean_object* v___x_1553_; lean_object* v_env_1554_; uint8_t v_isExporting_1555_; lean_object* v___x_1556_; lean_object* v_env_1557_; lean_object* v___x_1558_; lean_object* v_entry_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___y_1564_; lean_object* v___y_1565_; lean_object* v___x_1605_; uint8_t v___x_1606_; 
v___x_1553_ = lean_st_ref_get(v___y_1551_);
v_env_1554_ = lean_ctor_get(v___x_1553_, 0);
lean_inc_ref(v_env_1554_);
lean_dec(v___x_1553_);
v_isExporting_1555_ = lean_ctor_get_uint8(v_env_1554_, sizeof(void*)*8);
lean_dec_ref(v_env_1554_);
v___x_1556_ = lean_st_ref_get(v___y_1551_);
v_env_1557_ = lean_ctor_get(v___x_1556_, 0);
lean_inc_ref(v_env_1557_);
lean_dec(v___x_1556_);
v___x_1558_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__2);
lean_inc(v_mod_1543_);
v_entry_1559_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_1559_, 0, v_mod_1543_);
lean_ctor_set_uint8(v_entry_1559_, sizeof(void*)*1, v_isExporting_1555_);
lean_ctor_set_uint8(v_entry_1559_, sizeof(void*)*1 + 1, v_isMeta_1544_);
v___x_1560_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_1561_ = lean_box(1);
v___x_1562_ = lean_box(0);
v___x_1605_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1558_, v___x_1560_, v_env_1557_, v___x_1561_, v___x_1562_);
v___x_1606_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16___redArg(v___x_1605_, v_entry_1559_);
if (v___x_1606_ == 0)
{
lean_object* v_cls_1607_; lean_object* v___x_1608_; lean_object* v_a_1609_; lean_object* v___y_1611_; lean_object* v___y_1612_; lean_object* v___y_1616_; lean_object* v___y_1617_; uint8_t v___x_1629_; 
v_cls_1607_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__8));
v___x_1608_ = l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___redArg(v_cls_1607_, v___y_1550_);
v_a_1609_ = lean_ctor_get(v___x_1608_, 0);
lean_inc(v_a_1609_);
lean_dec_ref(v___x_1608_);
v___x_1629_ = lean_unbox(v_a_1609_);
lean_dec(v_a_1609_);
if (v___x_1629_ == 0)
{
lean_dec(v_hint_1545_);
lean_dec(v_mod_1543_);
v___y_1564_ = v___y_1549_;
v___y_1565_ = v___y_1551_;
goto v___jp_1563_;
}
else
{
lean_object* v___x_1630_; lean_object* v___y_1632_; 
v___x_1630_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__15, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__15_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__15);
if (v_isExporting_1555_ == 0)
{
lean_object* v___x_1639_; 
v___x_1639_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__20));
v___y_1632_ = v___x_1639_;
goto v___jp_1631_;
}
else
{
lean_object* v___x_1640_; 
v___x_1640_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__21));
v___y_1632_ = v___x_1640_;
goto v___jp_1631_;
}
v___jp_1631_:
{
lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1633_ = l_Lean_stringToMessageData(v___y_1632_);
v___x_1634_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1630_);
lean_ctor_set(v___x_1634_, 1, v___x_1633_);
v___x_1635_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__17, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__17_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__17);
v___x_1636_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1636_, 0, v___x_1634_);
lean_ctor_set(v___x_1636_, 1, v___x_1635_);
if (v_isMeta_1544_ == 0)
{
lean_object* v___x_1637_; 
v___x_1637_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__18));
v___y_1616_ = v___x_1636_;
v___y_1617_ = v___x_1637_;
goto v___jp_1615_;
}
else
{
lean_object* v___x_1638_; 
v___x_1638_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__19));
v___y_1616_ = v___x_1636_;
v___y_1617_ = v___x_1638_;
goto v___jp_1615_;
}
}
}
v___jp_1610_:
{
lean_object* v___x_1613_; lean_object* v___x_1614_; 
v___x_1613_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1613_, 0, v___y_1611_);
lean_ctor_set(v___x_1613_, 1, v___y_1612_);
v___x_1614_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg(v_cls_1607_, v___x_1613_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_);
if (lean_obj_tag(v___x_1614_) == 0)
{
lean_dec_ref(v___x_1614_);
v___y_1564_ = v___y_1549_;
v___y_1565_ = v___y_1551_;
goto v___jp_1563_;
}
else
{
lean_dec_ref(v_entry_1559_);
return v___x_1614_;
}
}
v___jp_1615_:
{
lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; uint8_t v___x_1624_; 
v___x_1618_ = l_Lean_stringToMessageData(v___y_1617_);
v___x_1619_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1619_, 0, v___y_1616_);
lean_ctor_set(v___x_1619_, 1, v___x_1618_);
v___x_1620_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__10);
v___x_1621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1619_);
lean_ctor_set(v___x_1621_, 1, v___x_1620_);
v___x_1622_ = l_Lean_MessageData_ofName(v_mod_1543_);
v___x_1623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1621_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
v___x_1624_ = l_Lean_Name_isAnonymous(v_hint_1545_);
if (v___x_1624_ == 0)
{
lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1625_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__12);
v___x_1626_ = l_Lean_MessageData_ofName(v_hint_1545_);
v___x_1627_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1625_);
lean_ctor_set(v___x_1627_, 1, v___x_1626_);
v___y_1611_ = v___x_1623_;
v___y_1612_ = v___x_1627_;
goto v___jp_1610_;
}
else
{
lean_object* v___x_1628_; 
lean_dec(v_hint_1545_);
v___x_1628_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__13);
v___y_1611_ = v___x_1623_;
v___y_1612_ = v___x_1628_;
goto v___jp_1610_;
}
}
}
else
{
lean_object* v___x_1641_; lean_object* v___x_1642_; 
lean_dec_ref(v_entry_1559_);
lean_dec(v_hint_1545_);
lean_dec(v_mod_1543_);
v___x_1641_ = lean_box(0);
v___x_1642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1642_, 0, v___x_1641_);
return v___x_1642_;
}
v___jp_1563_:
{
lean_object* v___x_1566_; lean_object* v_toEnvExtension_1567_; lean_object* v_env_1568_; lean_object* v_nextMacroScope_1569_; lean_object* v_ngen_1570_; lean_object* v_auxDeclNGen_1571_; lean_object* v_traceState_1572_; lean_object* v_messages_1573_; lean_object* v_infoState_1574_; lean_object* v_snapshotTasks_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1603_; 
v___x_1566_ = lean_st_ref_take(v___y_1565_);
v_toEnvExtension_1567_ = lean_ctor_get(v___x_1560_, 0);
lean_inc_ref(v_toEnvExtension_1567_);
v_env_1568_ = lean_ctor_get(v___x_1566_, 0);
v_nextMacroScope_1569_ = lean_ctor_get(v___x_1566_, 1);
v_ngen_1570_ = lean_ctor_get(v___x_1566_, 2);
v_auxDeclNGen_1571_ = lean_ctor_get(v___x_1566_, 3);
v_traceState_1572_ = lean_ctor_get(v___x_1566_, 4);
v_messages_1573_ = lean_ctor_get(v___x_1566_, 6);
v_infoState_1574_ = lean_ctor_get(v___x_1566_, 7);
v_snapshotTasks_1575_ = lean_ctor_get(v___x_1566_, 8);
v_isSharedCheck_1603_ = !lean_is_exclusive(v___x_1566_);
if (v_isSharedCheck_1603_ == 0)
{
lean_object* v_unused_1604_; 
v_unused_1604_ = lean_ctor_get(v___x_1566_, 5);
lean_dec(v_unused_1604_);
v___x_1577_ = v___x_1566_;
v_isShared_1578_ = v_isSharedCheck_1603_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_snapshotTasks_1575_);
lean_inc(v_infoState_1574_);
lean_inc(v_messages_1573_);
lean_inc(v_traceState_1572_);
lean_inc(v_auxDeclNGen_1571_);
lean_inc(v_ngen_1570_);
lean_inc(v_nextMacroScope_1569_);
lean_inc(v_env_1568_);
lean_dec(v___x_1566_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1603_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v_asyncMode_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1583_; 
v_asyncMode_1579_ = lean_ctor_get(v_toEnvExtension_1567_, 2);
lean_inc(v_asyncMode_1579_);
lean_dec_ref(v_toEnvExtension_1567_);
v___x_1580_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1560_, v_env_1568_, v_entry_1559_, v_asyncMode_1579_, v___x_1562_);
lean_dec(v_asyncMode_1579_);
v___x_1581_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__5);
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 5, v___x_1581_);
lean_ctor_set(v___x_1577_, 0, v___x_1580_);
v___x_1583_ = v___x_1577_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v___x_1580_);
lean_ctor_set(v_reuseFailAlloc_1602_, 1, v_nextMacroScope_1569_);
lean_ctor_set(v_reuseFailAlloc_1602_, 2, v_ngen_1570_);
lean_ctor_set(v_reuseFailAlloc_1602_, 3, v_auxDeclNGen_1571_);
lean_ctor_set(v_reuseFailAlloc_1602_, 4, v_traceState_1572_);
lean_ctor_set(v_reuseFailAlloc_1602_, 5, v___x_1581_);
lean_ctor_set(v_reuseFailAlloc_1602_, 6, v_messages_1573_);
lean_ctor_set(v_reuseFailAlloc_1602_, 7, v_infoState_1574_);
lean_ctor_set(v_reuseFailAlloc_1602_, 8, v_snapshotTasks_1575_);
v___x_1583_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v_mctx_1586_; lean_object* v_zetaDeltaFVarIds_1587_; lean_object* v_postponed_1588_; lean_object* v_diag_1589_; lean_object* v___x_1591_; uint8_t v_isShared_1592_; uint8_t v_isSharedCheck_1600_; 
v___x_1584_ = lean_st_ref_set(v___y_1565_, v___x_1583_);
v___x_1585_ = lean_st_ref_take(v___y_1564_);
v_mctx_1586_ = lean_ctor_get(v___x_1585_, 0);
v_zetaDeltaFVarIds_1587_ = lean_ctor_get(v___x_1585_, 2);
v_postponed_1588_ = lean_ctor_get(v___x_1585_, 3);
v_diag_1589_ = lean_ctor_get(v___x_1585_, 4);
v_isSharedCheck_1600_ = !lean_is_exclusive(v___x_1585_);
if (v_isSharedCheck_1600_ == 0)
{
lean_object* v_unused_1601_; 
v_unused_1601_ = lean_ctor_get(v___x_1585_, 1);
lean_dec(v_unused_1601_);
v___x_1591_ = v___x_1585_;
v_isShared_1592_ = v_isSharedCheck_1600_;
goto v_resetjp_1590_;
}
else
{
lean_inc(v_diag_1589_);
lean_inc(v_postponed_1588_);
lean_inc(v_zetaDeltaFVarIds_1587_);
lean_inc(v_mctx_1586_);
lean_dec(v___x_1585_);
v___x_1591_ = lean_box(0);
v_isShared_1592_ = v_isSharedCheck_1600_;
goto v_resetjp_1590_;
}
v_resetjp_1590_:
{
lean_object* v___x_1593_; lean_object* v___x_1595_; 
v___x_1593_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__6);
if (v_isShared_1592_ == 0)
{
lean_ctor_set(v___x_1591_, 1, v___x_1593_);
v___x_1595_ = v___x_1591_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v_mctx_1586_);
lean_ctor_set(v_reuseFailAlloc_1599_, 1, v___x_1593_);
lean_ctor_set(v_reuseFailAlloc_1599_, 2, v_zetaDeltaFVarIds_1587_);
lean_ctor_set(v_reuseFailAlloc_1599_, 3, v_postponed_1588_);
lean_ctor_set(v_reuseFailAlloc_1599_, 4, v_diag_1589_);
v___x_1595_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1596_ = lean_st_ref_set(v___y_1564_, v___x_1595_);
v___x_1597_ = lean_box(0);
v___x_1598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1597_);
return v___x_1598_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___boxed(lean_object* v_mod_1643_, lean_object* v_isMeta_1644_, lean_object* v_hint_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_){
_start:
{
uint8_t v_isMeta_boxed_1653_; lean_object* v_res_1654_; 
v_isMeta_boxed_1653_ = lean_unbox(v_isMeta_1644_);
v_res_1654_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5(v_mod_1643_, v_isMeta_boxed_1653_, v_hint_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_);
lean_dec(v___y_1651_);
lean_dec_ref(v___y_1650_);
lean_dec(v___y_1649_);
lean_dec_ref(v___y_1648_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
return v_res_1654_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__6(lean_object* v___x_1655_, lean_object* v_declName_1656_, lean_object* v_as_1657_, size_t v_sz_1658_, size_t v_i_1659_, lean_object* v_b_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_, lean_object* v___y_1666_){
_start:
{
uint8_t v___x_1668_; 
v___x_1668_ = lean_usize_dec_lt(v_i_1659_, v_sz_1658_);
if (v___x_1668_ == 0)
{
lean_object* v___x_1669_; 
lean_dec(v_declName_1656_);
v___x_1669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1669_, 0, v_b_1660_);
return v___x_1669_;
}
else
{
lean_object* v___x_1670_; lean_object* v_modules_1671_; lean_object* v___x_1672_; lean_object* v_a_1673_; lean_object* v___x_1674_; lean_object* v_toImport_1675_; lean_object* v_module_1676_; uint8_t v___x_1677_; lean_object* v___x_1678_; 
v___x_1670_ = l_Lean_Environment_header(v___x_1655_);
v_modules_1671_ = lean_ctor_get(v___x_1670_, 3);
lean_inc_ref(v_modules_1671_);
lean_dec_ref(v___x_1670_);
v___x_1672_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_1673_ = lean_array_uget_borrowed(v_as_1657_, v_i_1659_);
v___x_1674_ = lean_array_get(v___x_1672_, v_modules_1671_, v_a_1673_);
lean_dec_ref(v_modules_1671_);
v_toImport_1675_ = lean_ctor_get(v___x_1674_, 0);
lean_inc_ref(v_toImport_1675_);
lean_dec(v___x_1674_);
v_module_1676_ = lean_ctor_get(v_toImport_1675_, 0);
lean_inc(v_module_1676_);
lean_dec_ref(v_toImport_1675_);
v___x_1677_ = 0;
lean_inc(v_declName_1656_);
v___x_1678_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5(v_module_1676_, v___x_1677_, v_declName_1656_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_, v___y_1666_);
if (lean_obj_tag(v___x_1678_) == 0)
{
lean_object* v___x_1679_; size_t v___x_1680_; size_t v___x_1681_; 
lean_dec_ref(v___x_1678_);
v___x_1679_ = lean_box(0);
v___x_1680_ = ((size_t)1ULL);
v___x_1681_ = lean_usize_add(v_i_1659_, v___x_1680_);
v_i_1659_ = v___x_1681_;
v_b_1660_ = v___x_1679_;
goto _start;
}
else
{
lean_dec(v_declName_1656_);
return v___x_1678_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__6___boxed(lean_object* v___x_1683_, lean_object* v_declName_1684_, lean_object* v_as_1685_, lean_object* v_sz_1686_, lean_object* v_i_1687_, lean_object* v_b_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_){
_start:
{
size_t v_sz_boxed_1696_; size_t v_i_boxed_1697_; lean_object* v_res_1698_; 
v_sz_boxed_1696_ = lean_unbox_usize(v_sz_1686_);
lean_dec(v_sz_1686_);
v_i_boxed_1697_ = lean_unbox_usize(v_i_1687_);
lean_dec(v_i_1687_);
v_res_1698_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__6(v___x_1683_, v_declName_1684_, v_as_1685_, v_sz_boxed_1696_, v_i_boxed_1697_, v_b_1688_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_);
lean_dec(v___y_1694_);
lean_dec_ref(v___y_1693_);
lean_dec(v___y_1692_);
lean_dec_ref(v___y_1691_);
lean_dec(v___y_1690_);
lean_dec_ref(v___y_1689_);
lean_dec_ref(v_as_1685_);
lean_dec_ref(v___x_1683_);
return v_res_1698_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__2(void){
_start:
{
lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; 
v___x_1701_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__1));
v___x_1702_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__0));
v___x_1703_ = l_Std_HashMap_instInhabited(lean_box(0), lean_box(0), v___x_1702_, v___x_1701_);
return v___x_1703_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3(lean_object* v_declName_1706_, uint8_t v_isMeta_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_){
_start:
{
lean_object* v___x_1715_; lean_object* v_env_1719_; lean_object* v___y_1721_; lean_object* v___x_1734_; 
v___x_1715_ = lean_st_ref_get(v___y_1713_);
v_env_1719_ = lean_ctor_get(v___x_1715_, 0);
lean_inc_ref(v_env_1719_);
lean_dec(v___x_1715_);
v___x_1734_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1719_, v_declName_1706_);
if (lean_obj_tag(v___x_1734_) == 0)
{
lean_dec_ref(v_env_1719_);
lean_dec(v_declName_1706_);
goto v___jp_1716_;
}
else
{
lean_object* v_val_1735_; lean_object* v___x_1736_; lean_object* v_modules_1737_; lean_object* v___x_1738_; uint8_t v___x_1739_; 
v_val_1735_ = lean_ctor_get(v___x_1734_, 0);
lean_inc(v_val_1735_);
lean_dec_ref(v___x_1734_);
v___x_1736_ = l_Lean_Environment_header(v_env_1719_);
v_modules_1737_ = lean_ctor_get(v___x_1736_, 3);
lean_inc_ref(v_modules_1737_);
lean_dec_ref(v___x_1736_);
v___x_1738_ = lean_array_get_size(v_modules_1737_);
v___x_1739_ = lean_nat_dec_lt(v_val_1735_, v___x_1738_);
if (v___x_1739_ == 0)
{
lean_dec_ref(v_modules_1737_);
lean_dec(v_val_1735_);
lean_dec_ref(v_env_1719_);
lean_dec(v_declName_1706_);
goto v___jp_1716_;
}
else
{
lean_object* v___x_1740_; lean_object* v_env_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; uint8_t v___y_1745_; 
v___x_1740_ = lean_st_ref_get(v___y_1713_);
v_env_1741_ = lean_ctor_get(v___x_1740_, 0);
lean_inc_ref(v_env_1741_);
lean_dec(v___x_1740_);
v___x_1742_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__2, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__2_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__2);
v___x_1743_ = lean_array_fget(v_modules_1737_, v_val_1735_);
lean_dec(v_val_1735_);
lean_dec_ref(v_modules_1737_);
if (v_isMeta_1707_ == 0)
{
lean_dec_ref(v_env_1741_);
v___y_1745_ = v_isMeta_1707_;
goto v___jp_1744_;
}
else
{
uint8_t v___x_1756_; 
lean_inc(v_declName_1706_);
v___x_1756_ = l_Lean_isMarkedMeta(v_env_1741_, v_declName_1706_);
if (v___x_1756_ == 0)
{
v___y_1745_ = v_isMeta_1707_;
goto v___jp_1744_;
}
else
{
uint8_t v___x_1757_; 
v___x_1757_ = 0;
v___y_1745_ = v___x_1757_;
goto v___jp_1744_;
}
}
v___jp_1744_:
{
lean_object* v_toImport_1746_; lean_object* v_module_1747_; lean_object* v___x_1748_; 
v_toImport_1746_ = lean_ctor_get(v___x_1743_, 0);
lean_inc_ref(v_toImport_1746_);
lean_dec(v___x_1743_);
v_module_1747_ = lean_ctor_get(v_toImport_1746_, 0);
lean_inc(v_module_1747_);
lean_dec_ref(v_toImport_1746_);
lean_inc(v_declName_1706_);
v___x_1748_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5(v_module_1747_, v___y_1745_, v_declName_1706_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; 
lean_dec_ref(v___x_1748_);
v___x_1749_ = l_Lean_indirectModUseExt;
v___x_1750_ = lean_box(1);
v___x_1751_ = lean_box(0);
lean_inc_ref(v_env_1719_);
v___x_1752_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1742_, v___x_1749_, v_env_1719_, v___x_1750_, v___x_1751_);
v___x_1753_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6___redArg(v___x_1752_, v_declName_1706_);
lean_dec(v___x_1752_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_object* v___x_1754_; 
v___x_1754_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__3));
v___y_1721_ = v___x_1754_;
goto v___jp_1720_;
}
else
{
lean_object* v_val_1755_; 
v_val_1755_ = lean_ctor_get(v___x_1753_, 0);
lean_inc(v_val_1755_);
lean_dec_ref(v___x_1753_);
v___y_1721_ = v_val_1755_;
goto v___jp_1720_;
}
}
else
{
lean_dec_ref(v_env_1719_);
lean_dec(v_declName_1706_);
return v___x_1748_;
}
}
}
}
v___jp_1716_:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; 
v___x_1717_ = lean_box(0);
v___x_1718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1718_, 0, v___x_1717_);
return v___x_1718_;
}
v___jp_1720_:
{
lean_object* v___x_1722_; size_t v_sz_1723_; size_t v___x_1724_; lean_object* v___x_1725_; 
v___x_1722_ = lean_box(0);
v_sz_1723_ = lean_array_size(v___y_1721_);
v___x_1724_ = ((size_t)0ULL);
v___x_1725_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__6(v_env_1719_, v_declName_1706_, v___y_1721_, v_sz_1723_, v___x_1724_, v___x_1722_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_);
lean_dec_ref(v___y_1721_);
lean_dec_ref(v_env_1719_);
if (lean_obj_tag(v___x_1725_) == 0)
{
lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1732_; 
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1725_);
if (v_isSharedCheck_1732_ == 0)
{
lean_object* v_unused_1733_; 
v_unused_1733_ = lean_ctor_get(v___x_1725_, 0);
lean_dec(v_unused_1733_);
v___x_1727_ = v___x_1725_;
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
else
{
lean_dec(v___x_1725_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1730_; 
if (v_isShared_1728_ == 0)
{
lean_ctor_set(v___x_1727_, 0, v___x_1722_);
v___x_1730_ = v___x_1727_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v___x_1722_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
}
else
{
return v___x_1725_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___boxed(lean_object* v_declName_1758_, lean_object* v_isMeta_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_){
_start:
{
uint8_t v_isMeta_boxed_1767_; lean_object* v_res_1768_; 
v_isMeta_boxed_1767_ = lean_unbox(v_isMeta_1759_);
v_res_1768_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3(v_declName_1758_, v_isMeta_boxed_1767_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, v___y_1765_);
lean_dec(v___y_1765_);
lean_dec_ref(v___y_1764_);
lean_dec(v___y_1763_);
lean_dec_ref(v___y_1762_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__4___redArg(lean_object* v_as_x27_1769_, lean_object* v_b_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_){
_start:
{
if (lean_obj_tag(v_as_x27_1769_) == 0)
{
lean_object* v___x_1778_; 
v___x_1778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1778_, 0, v_b_1770_);
return v___x_1778_;
}
else
{
lean_object* v_head_1779_; lean_object* v_tail_1780_; uint8_t v___x_1781_; lean_object* v___x_1782_; 
v_head_1779_ = lean_ctor_get(v_as_x27_1769_, 0);
lean_inc(v_head_1779_);
v_tail_1780_ = lean_ctor_get(v_as_x27_1769_, 1);
lean_inc(v_tail_1780_);
lean_dec_ref(v_as_x27_1769_);
v___x_1781_ = 1;
v___x_1782_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3(v_head_1779_, v___x_1781_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_);
if (lean_obj_tag(v___x_1782_) == 0)
{
lean_object* v___x_1783_; 
lean_dec_ref(v___x_1782_);
v___x_1783_ = lean_box(0);
v_as_x27_1769_ = v_tail_1780_;
v_b_1770_ = v___x_1783_;
goto _start;
}
else
{
lean_dec(v_tail_1780_);
return v___x_1782_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__4___redArg___boxed(lean_object* v_as_x27_1785_, lean_object* v_b_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_){
_start:
{
lean_object* v_res_1794_; 
v_res_1794_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__4___redArg(v_as_x27_1785_, v_b_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_, v___y_1791_, v___y_1792_);
lean_dec(v___y_1792_);
lean_dec_ref(v___y_1791_);
lean_dec(v___y_1790_);
lean_dec_ref(v___y_1789_);
lean_dec(v___y_1788_);
lean_dec_ref(v___y_1787_);
return v_res_1794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__2(lean_object* v_env_1795_, lean_object* v_currNamespace_1796_, lean_object* v_openDecls_1797_, lean_object* v_n_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_){
_start:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; 
v___x_1801_ = l_Lean_ResolveName_resolveNamespace(v_env_1795_, v_currNamespace_1796_, v_openDecls_1797_, v_n_1798_);
v___x_1802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1802_, 0, v___x_1801_);
lean_ctor_set(v___x_1802_, 1, v___y_1800_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__2___boxed(lean_object* v_env_1803_, lean_object* v_currNamespace_1804_, lean_object* v_openDecls_1805_, lean_object* v_n_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__2(v_env_1803_, v_currNamespace_1804_, v_openDecls_1805_, v_n_1806_, v___y_1807_, v___y_1808_);
lean_dec_ref(v___y_1807_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg(lean_object* v_x_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
lean_object* v___x_1819_; lean_object* v_env_1820_; lean_object* v_options_1821_; lean_object* v_currRecDepth_1822_; lean_object* v_maxRecDepth_1823_; lean_object* v_ref_1824_; lean_object* v_currNamespace_1825_; lean_object* v_openDecls_1826_; lean_object* v_quotContext_1827_; lean_object* v_currMacroScope_1828_; lean_object* v___x_1829_; lean_object* v_nextMacroScope_1830_; lean_object* v___f_1831_; lean_object* v___f_1832_; lean_object* v___f_1833_; lean_object* v___f_1834_; lean_object* v___f_1835_; lean_object* v_methods_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1819_ = lean_st_ref_get(v___y_1817_);
v_env_1820_ = lean_ctor_get(v___x_1819_, 0);
lean_inc_ref(v_env_1820_);
lean_dec(v___x_1819_);
v_options_1821_ = lean_ctor_get(v___y_1816_, 2);
v_currRecDepth_1822_ = lean_ctor_get(v___y_1816_, 3);
v_maxRecDepth_1823_ = lean_ctor_get(v___y_1816_, 4);
v_ref_1824_ = lean_ctor_get(v___y_1816_, 5);
v_currNamespace_1825_ = lean_ctor_get(v___y_1816_, 6);
v_openDecls_1826_ = lean_ctor_get(v___y_1816_, 7);
v_quotContext_1827_ = lean_ctor_get(v___y_1816_, 10);
v_currMacroScope_1828_ = lean_ctor_get(v___y_1816_, 11);
v___x_1829_ = lean_st_ref_get(v___y_1817_);
v_nextMacroScope_1830_ = lean_ctor_get(v___x_1829_, 1);
lean_inc(v_nextMacroScope_1830_);
lean_dec(v___x_1829_);
lean_inc_ref(v_env_1820_);
v___f_1831_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_1831_, 0, v_env_1820_);
lean_inc_ref(v_env_1820_);
v___f_1832_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_1832_, 0, v_env_1820_);
lean_inc(v_openDecls_1826_);
lean_inc(v_currNamespace_1825_);
lean_inc_ref(v_env_1820_);
v___f_1833_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__2___boxed), 6, 3);
lean_closure_set(v___f_1833_, 0, v_env_1820_);
lean_closure_set(v___f_1833_, 1, v_currNamespace_1825_);
lean_closure_set(v___f_1833_, 2, v_openDecls_1826_);
lean_inc(v_currNamespace_1825_);
v___f_1834_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1834_, 0, v_currNamespace_1825_);
lean_inc(v_openDecls_1826_);
lean_inc(v_currNamespace_1825_);
lean_inc_ref(v_options_1821_);
v___f_1835_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_1835_, 0, v_env_1820_);
lean_closure_set(v___f_1835_, 1, v_options_1821_);
lean_closure_set(v___f_1835_, 2, v_currNamespace_1825_);
lean_closure_set(v___f_1835_, 3, v_openDecls_1826_);
v_methods_1836_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_1836_, 0, v___f_1831_);
lean_ctor_set(v_methods_1836_, 1, v___f_1834_);
lean_ctor_set(v_methods_1836_, 2, v___f_1832_);
lean_ctor_set(v_methods_1836_, 3, v___f_1833_);
lean_ctor_set(v_methods_1836_, 4, v___f_1835_);
lean_inc(v_ref_1824_);
lean_inc(v_maxRecDepth_1823_);
lean_inc(v_currRecDepth_1822_);
lean_inc(v_currMacroScope_1828_);
lean_inc(v_quotContext_1827_);
v___x_1837_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1837_, 0, v_methods_1836_);
lean_ctor_set(v___x_1837_, 1, v_quotContext_1827_);
lean_ctor_set(v___x_1837_, 2, v_currMacroScope_1828_);
lean_ctor_set(v___x_1837_, 3, v_currRecDepth_1822_);
lean_ctor_set(v___x_1837_, 4, v_maxRecDepth_1823_);
lean_ctor_set(v___x_1837_, 5, v_ref_1824_);
v___x_1838_ = lean_box(0);
v___x_1839_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1839_, 0, v_nextMacroScope_1830_);
lean_ctor_set(v___x_1839_, 1, v___x_1838_);
lean_ctor_set(v___x_1839_, 2, v___x_1838_);
v___x_1840_ = lean_apply_2(v_x_1811_, v___x_1837_, v___x_1839_);
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v_a_1841_; lean_object* v_a_1842_; lean_object* v_macroScope_1843_; lean_object* v_traceMsgs_1844_; lean_object* v_expandedMacroDecls_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; 
v_a_1841_ = lean_ctor_get(v___x_1840_, 1);
lean_inc(v_a_1841_);
v_a_1842_ = lean_ctor_get(v___x_1840_, 0);
lean_inc(v_a_1842_);
lean_dec_ref(v___x_1840_);
v_macroScope_1843_ = lean_ctor_get(v_a_1841_, 0);
lean_inc(v_macroScope_1843_);
v_traceMsgs_1844_ = lean_ctor_get(v_a_1841_, 1);
lean_inc(v_traceMsgs_1844_);
v_expandedMacroDecls_1845_ = lean_ctor_get(v_a_1841_, 2);
lean_inc(v_expandedMacroDecls_1845_);
lean_dec(v_a_1841_);
v___x_1846_ = lean_box(0);
v___x_1847_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__4___redArg(v_expandedMacroDecls_1845_, v___x_1846_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
if (lean_obj_tag(v___x_1847_) == 0)
{
lean_object* v___x_1848_; lean_object* v_env_1849_; lean_object* v_ngen_1850_; lean_object* v_auxDeclNGen_1851_; lean_object* v_traceState_1852_; lean_object* v_cache_1853_; lean_object* v_messages_1854_; lean_object* v_infoState_1855_; lean_object* v_snapshotTasks_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1882_; 
lean_dec_ref(v___x_1847_);
v___x_1848_ = lean_st_ref_take(v___y_1817_);
v_env_1849_ = lean_ctor_get(v___x_1848_, 0);
v_ngen_1850_ = lean_ctor_get(v___x_1848_, 2);
v_auxDeclNGen_1851_ = lean_ctor_get(v___x_1848_, 3);
v_traceState_1852_ = lean_ctor_get(v___x_1848_, 4);
v_cache_1853_ = lean_ctor_get(v___x_1848_, 5);
v_messages_1854_ = lean_ctor_get(v___x_1848_, 6);
v_infoState_1855_ = lean_ctor_get(v___x_1848_, 7);
v_snapshotTasks_1856_ = lean_ctor_get(v___x_1848_, 8);
v_isSharedCheck_1882_ = !lean_is_exclusive(v___x_1848_);
if (v_isSharedCheck_1882_ == 0)
{
lean_object* v_unused_1883_; 
v_unused_1883_ = lean_ctor_get(v___x_1848_, 1);
lean_dec(v_unused_1883_);
v___x_1858_ = v___x_1848_;
v_isShared_1859_ = v_isSharedCheck_1882_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_snapshotTasks_1856_);
lean_inc(v_infoState_1855_);
lean_inc(v_messages_1854_);
lean_inc(v_cache_1853_);
lean_inc(v_traceState_1852_);
lean_inc(v_auxDeclNGen_1851_);
lean_inc(v_ngen_1850_);
lean_inc(v_env_1849_);
lean_dec(v___x_1848_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1882_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v___x_1861_; 
if (v_isShared_1859_ == 0)
{
lean_ctor_set(v___x_1858_, 1, v_macroScope_1843_);
v___x_1861_ = v___x_1858_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_env_1849_);
lean_ctor_set(v_reuseFailAlloc_1881_, 1, v_macroScope_1843_);
lean_ctor_set(v_reuseFailAlloc_1881_, 2, v_ngen_1850_);
lean_ctor_set(v_reuseFailAlloc_1881_, 3, v_auxDeclNGen_1851_);
lean_ctor_set(v_reuseFailAlloc_1881_, 4, v_traceState_1852_);
lean_ctor_set(v_reuseFailAlloc_1881_, 5, v_cache_1853_);
lean_ctor_set(v_reuseFailAlloc_1881_, 6, v_messages_1854_);
lean_ctor_set(v_reuseFailAlloc_1881_, 7, v_infoState_1855_);
lean_ctor_set(v_reuseFailAlloc_1881_, 8, v_snapshotTasks_1856_);
v___x_1861_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1862_ = lean_st_ref_set(v___y_1817_, v___x_1861_);
v___x_1863_ = l_List_reverse___redArg(v_traceMsgs_1844_);
v___x_1864_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__5(v___x_1863_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
lean_dec_ref(v___y_1816_);
lean_dec_ref(v___y_1812_);
if (lean_obj_tag(v___x_1864_) == 0)
{
lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1871_; 
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1864_);
if (v_isSharedCheck_1871_ == 0)
{
lean_object* v_unused_1872_; 
v_unused_1872_ = lean_ctor_get(v___x_1864_, 0);
lean_dec(v_unused_1872_);
v___x_1866_ = v___x_1864_;
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
else
{
lean_dec(v___x_1864_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
lean_object* v___x_1869_; 
if (v_isShared_1867_ == 0)
{
lean_ctor_set(v___x_1866_, 0, v_a_1842_);
v___x_1869_ = v___x_1866_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_a_1842_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
else
{
lean_object* v_a_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1880_; 
lean_dec(v_a_1842_);
v_a_1873_ = lean_ctor_get(v___x_1864_, 0);
v_isSharedCheck_1880_ = !lean_is_exclusive(v___x_1864_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1875_ = v___x_1864_;
v_isShared_1876_ = v_isSharedCheck_1880_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_a_1873_);
lean_dec(v___x_1864_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1880_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1878_; 
if (v_isShared_1876_ == 0)
{
v___x_1878_ = v___x_1875_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v_a_1873_);
v___x_1878_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
return v___x_1878_;
}
}
}
}
}
}
else
{
lean_object* v_a_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1891_; 
lean_dec(v_traceMsgs_1844_);
lean_dec(v_macroScope_1843_);
lean_dec(v_a_1842_);
lean_dec_ref(v___y_1816_);
lean_dec_ref(v___y_1812_);
v_a_1884_ = lean_ctor_get(v___x_1847_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1847_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1886_ = v___x_1847_;
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_a_1884_);
lean_dec(v___x_1847_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1889_; 
if (v_isShared_1887_ == 0)
{
v___x_1889_ = v___x_1886_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1884_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
}
else
{
lean_object* v_a_1892_; 
v_a_1892_ = lean_ctor_get(v___x_1840_, 0);
lean_inc(v_a_1892_);
lean_dec_ref(v___x_1840_);
if (lean_obj_tag(v_a_1892_) == 0)
{
lean_object* v_a_1893_; lean_object* v_a_1894_; lean_object* v___x_1895_; uint8_t v___x_1896_; 
v_a_1893_ = lean_ctor_get(v_a_1892_, 0);
lean_inc(v_a_1893_);
v_a_1894_ = lean_ctor_get(v_a_1892_, 1);
lean_inc_ref(v_a_1894_);
lean_dec_ref(v_a_1892_);
v___x_1895_ = ((lean_object*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___closed__0));
v___x_1896_ = lean_string_dec_eq(v_a_1894_, v___x_1895_);
if (v___x_1896_ == 0)
{
lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; 
v___x_1897_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1897_, 0, v_a_1894_);
v___x_1898_ = l_Lean_MessageData_ofFormat(v___x_1897_);
v___x_1899_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__6___redArg(v_a_1893_, v___x_1898_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_);
lean_dec(v_a_1893_);
return v___x_1899_;
}
else
{
lean_object* v___x_1900_; 
lean_dec_ref(v_a_1894_);
lean_dec_ref(v___y_1816_);
lean_dec_ref(v___y_1812_);
v___x_1900_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg(v_a_1893_);
return v___x_1900_;
}
}
else
{
lean_object* v___x_1901_; 
lean_dec_ref(v___y_1816_);
lean_dec_ref(v___y_1812_);
v___x_1901_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8___redArg();
return v___x_1901_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg___boxed(lean_object* v_x_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_){
_start:
{
lean_object* v_res_1910_; 
v_res_1910_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg(v_x_1902_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_);
lean_dec(v___y_1908_);
lean_dec(v___y_1906_);
lean_dec_ref(v___y_1905_);
lean_dec(v___y_1904_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2_spec__11___redArg(lean_object* v_t_1911_, lean_object* v___y_1912_){
_start:
{
lean_object* v___x_1914_; lean_object* v_infoState_1915_; uint8_t v_enabled_1916_; 
v___x_1914_ = lean_st_ref_get(v___y_1912_);
v_infoState_1915_ = lean_ctor_get(v___x_1914_, 7);
lean_inc_ref(v_infoState_1915_);
lean_dec(v___x_1914_);
v_enabled_1916_ = lean_ctor_get_uint8(v_infoState_1915_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1915_);
if (v_enabled_1916_ == 0)
{
lean_object* v___x_1917_; lean_object* v___x_1918_; 
lean_dec_ref(v_t_1911_);
v___x_1917_ = lean_box(0);
v___x_1918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1918_, 0, v___x_1917_);
return v___x_1918_;
}
else
{
lean_object* v___x_1919_; lean_object* v_infoState_1920_; lean_object* v_env_1921_; lean_object* v_nextMacroScope_1922_; lean_object* v_ngen_1923_; lean_object* v_auxDeclNGen_1924_; lean_object* v_traceState_1925_; lean_object* v_cache_1926_; lean_object* v_messages_1927_; lean_object* v_snapshotTasks_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1950_; 
v___x_1919_ = lean_st_ref_take(v___y_1912_);
v_infoState_1920_ = lean_ctor_get(v___x_1919_, 7);
v_env_1921_ = lean_ctor_get(v___x_1919_, 0);
v_nextMacroScope_1922_ = lean_ctor_get(v___x_1919_, 1);
v_ngen_1923_ = lean_ctor_get(v___x_1919_, 2);
v_auxDeclNGen_1924_ = lean_ctor_get(v___x_1919_, 3);
v_traceState_1925_ = lean_ctor_get(v___x_1919_, 4);
v_cache_1926_ = lean_ctor_get(v___x_1919_, 5);
v_messages_1927_ = lean_ctor_get(v___x_1919_, 6);
v_snapshotTasks_1928_ = lean_ctor_get(v___x_1919_, 8);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1930_ = v___x_1919_;
v_isShared_1931_ = v_isSharedCheck_1950_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_snapshotTasks_1928_);
lean_inc(v_infoState_1920_);
lean_inc(v_messages_1927_);
lean_inc(v_cache_1926_);
lean_inc(v_traceState_1925_);
lean_inc(v_auxDeclNGen_1924_);
lean_inc(v_ngen_1923_);
lean_inc(v_nextMacroScope_1922_);
lean_inc(v_env_1921_);
lean_dec(v___x_1919_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1950_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
uint8_t v_enabled_1932_; lean_object* v_assignment_1933_; lean_object* v_lazyAssignment_1934_; lean_object* v_trees_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1949_; 
v_enabled_1932_ = lean_ctor_get_uint8(v_infoState_1920_, sizeof(void*)*3);
v_assignment_1933_ = lean_ctor_get(v_infoState_1920_, 0);
v_lazyAssignment_1934_ = lean_ctor_get(v_infoState_1920_, 1);
v_trees_1935_ = lean_ctor_get(v_infoState_1920_, 2);
v_isSharedCheck_1949_ = !lean_is_exclusive(v_infoState_1920_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1937_ = v_infoState_1920_;
v_isShared_1938_ = v_isSharedCheck_1949_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_trees_1935_);
lean_inc(v_lazyAssignment_1934_);
lean_inc(v_assignment_1933_);
lean_dec(v_infoState_1920_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1949_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
lean_object* v___x_1939_; lean_object* v___x_1941_; 
v___x_1939_ = l_Lean_PersistentArray_push___redArg(v_trees_1935_, v_t_1911_);
if (v_isShared_1938_ == 0)
{
lean_ctor_set(v___x_1937_, 2, v___x_1939_);
v___x_1941_ = v___x_1937_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_assignment_1933_);
lean_ctor_set(v_reuseFailAlloc_1948_, 1, v_lazyAssignment_1934_);
lean_ctor_set(v_reuseFailAlloc_1948_, 2, v___x_1939_);
lean_ctor_set_uint8(v_reuseFailAlloc_1948_, sizeof(void*)*3, v_enabled_1932_);
v___x_1941_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
lean_object* v___x_1943_; 
if (v_isShared_1931_ == 0)
{
lean_ctor_set(v___x_1930_, 7, v___x_1941_);
v___x_1943_ = v___x_1930_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v_env_1921_);
lean_ctor_set(v_reuseFailAlloc_1947_, 1, v_nextMacroScope_1922_);
lean_ctor_set(v_reuseFailAlloc_1947_, 2, v_ngen_1923_);
lean_ctor_set(v_reuseFailAlloc_1947_, 3, v_auxDeclNGen_1924_);
lean_ctor_set(v_reuseFailAlloc_1947_, 4, v_traceState_1925_);
lean_ctor_set(v_reuseFailAlloc_1947_, 5, v_cache_1926_);
lean_ctor_set(v_reuseFailAlloc_1947_, 6, v_messages_1927_);
lean_ctor_set(v_reuseFailAlloc_1947_, 7, v___x_1941_);
lean_ctor_set(v_reuseFailAlloc_1947_, 8, v_snapshotTasks_1928_);
v___x_1943_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; 
v___x_1944_ = lean_st_ref_set(v___y_1912_, v___x_1943_);
v___x_1945_ = lean_box(0);
v___x_1946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1946_, 0, v___x_1945_);
return v___x_1946_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2_spec__11___redArg___boxed(lean_object* v_t_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_){
_start:
{
lean_object* v_res_1954_; 
v_res_1954_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2_spec__11___redArg(v_t_1951_, v___y_1952_);
lean_dec(v___y_1952_);
return v_res_1954_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; 
v___x_1955_ = lean_unsigned_to_nat(32u);
v___x_1956_ = lean_mk_empty_array_with_capacity(v___x_1955_);
v___x_1957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1956_);
return v___x_1957_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2___closed__1(void){
_start:
{
size_t v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; 
v___x_1958_ = ((size_t)5ULL);
v___x_1959_ = lean_unsigned_to_nat(0u);
v___x_1960_ = lean_unsigned_to_nat(32u);
v___x_1961_ = lean_mk_empty_array_with_capacity(v___x_1960_);
v___x_1962_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2___closed__0);
v___x_1963_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1963_, 0, v___x_1962_);
lean_ctor_set(v___x_1963_, 1, v___x_1961_);
lean_ctor_set(v___x_1963_, 2, v___x_1959_);
lean_ctor_set(v___x_1963_, 3, v___x_1959_);
lean_ctor_set_usize(v___x_1963_, 4, v___x_1958_);
return v___x_1963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2(lean_object* v_t_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_){
_start:
{
lean_object* v___x_1972_; lean_object* v_infoState_1973_; uint8_t v_enabled_1974_; 
v___x_1972_ = lean_st_ref_get(v___y_1970_);
v_infoState_1973_ = lean_ctor_get(v___x_1972_, 7);
lean_inc_ref(v_infoState_1973_);
lean_dec(v___x_1972_);
v_enabled_1974_ = lean_ctor_get_uint8(v_infoState_1973_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1973_);
if (v_enabled_1974_ == 0)
{
lean_object* v___x_1975_; lean_object* v___x_1976_; 
lean_dec_ref(v_t_1964_);
v___x_1975_ = lean_box(0);
v___x_1976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1976_, 0, v___x_1975_);
return v___x_1976_;
}
else
{
lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; 
v___x_1977_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2___closed__1);
v___x_1978_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1978_, 0, v_t_1964_);
lean_ctor_set(v___x_1978_, 1, v___x_1977_);
v___x_1979_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2_spec__11___redArg(v___x_1978_, v___y_1970_);
return v___x_1979_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2___boxed(lean_object* v_t_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_){
_start:
{
lean_object* v_res_1988_; 
v_res_1988_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2(v_t_1980_, v___y_1981_, v___y_1982_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_);
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec(v___y_1984_);
lean_dec_ref(v___y_1983_);
lean_dec(v___y_1982_);
lean_dec_ref(v___y_1981_);
return v_res_1988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addCompletionInfo___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__1(lean_object* v_info_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_){
_start:
{
lean_object* v___x_1997_; lean_object* v___x_1998_; 
v___x_1997_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_1997_, 0, v_info_1989_);
v___x_1998_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2(v___x_1997_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_);
return v___x_1998_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addCompletionInfo___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__1___boxed(lean_object* v_info_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_){
_start:
{
lean_object* v_res_2007_; 
v_res_2007_ = l_Lean_Elab_addCompletionInfo___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__1(v_info_1999_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_);
lean_dec(v___y_2005_);
lean_dec_ref(v___y_2004_);
lean_dec(v___y_2003_);
lean_dec_ref(v___y_2002_);
lean_dec(v___y_2001_);
lean_dec_ref(v___y_2000_);
return v_res_2007_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0(uint8_t v___y_2015_, uint8_t v_suppressElabErrors_2016_, lean_object* v_x_2017_){
_start:
{
if (lean_obj_tag(v_x_2017_) == 1)
{
lean_object* v_pre_2018_; 
v_pre_2018_ = lean_ctor_get(v_x_2017_, 0);
switch(lean_obj_tag(v_pre_2018_))
{
case 1:
{
lean_object* v_pre_2019_; 
v_pre_2019_ = lean_ctor_get(v_pre_2018_, 0);
switch(lean_obj_tag(v_pre_2019_))
{
case 0:
{
lean_object* v_str_2020_; lean_object* v_str_2021_; lean_object* v___x_2022_; uint8_t v___x_2023_; 
v_str_2020_ = lean_ctor_get(v_x_2017_, 1);
v_str_2021_ = lean_ctor_get(v_pre_2018_, 1);
v___x_2022_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__0));
v___x_2023_ = lean_string_dec_eq(v_str_2021_, v___x_2022_);
if (v___x_2023_ == 0)
{
lean_object* v___x_2024_; uint8_t v___x_2025_; 
v___x_2024_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__1));
v___x_2025_ = lean_string_dec_eq(v_str_2021_, v___x_2024_);
if (v___x_2025_ == 0)
{
return v___y_2015_;
}
else
{
lean_object* v___x_2026_; uint8_t v___x_2027_; 
v___x_2026_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__2));
v___x_2027_ = lean_string_dec_eq(v_str_2020_, v___x_2026_);
if (v___x_2027_ == 0)
{
return v___y_2015_;
}
else
{
return v_suppressElabErrors_2016_;
}
}
}
else
{
lean_object* v___x_2028_; uint8_t v___x_2029_; 
v___x_2028_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__3));
v___x_2029_ = lean_string_dec_eq(v_str_2020_, v___x_2028_);
if (v___x_2029_ == 0)
{
return v___y_2015_;
}
else
{
return v_suppressElabErrors_2016_;
}
}
}
case 1:
{
lean_object* v_pre_2030_; 
v_pre_2030_ = lean_ctor_get(v_pre_2019_, 0);
if (lean_obj_tag(v_pre_2030_) == 0)
{
lean_object* v_str_2031_; lean_object* v_str_2032_; lean_object* v_str_2033_; lean_object* v___x_2034_; uint8_t v___x_2035_; 
v_str_2031_ = lean_ctor_get(v_x_2017_, 1);
v_str_2032_ = lean_ctor_get(v_pre_2018_, 1);
v_str_2033_ = lean_ctor_get(v_pre_2019_, 1);
v___x_2034_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__4));
v___x_2035_ = lean_string_dec_eq(v_str_2033_, v___x_2034_);
if (v___x_2035_ == 0)
{
return v___y_2015_;
}
else
{
lean_object* v___x_2036_; uint8_t v___x_2037_; 
v___x_2036_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__5));
v___x_2037_ = lean_string_dec_eq(v_str_2032_, v___x_2036_);
if (v___x_2037_ == 0)
{
return v___y_2015_;
}
else
{
lean_object* v___x_2038_; uint8_t v___x_2039_; 
v___x_2038_ = ((lean_object*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___closed__6));
v___x_2039_ = lean_string_dec_eq(v_str_2031_, v___x_2038_);
if (v___x_2039_ == 0)
{
return v___y_2015_;
}
else
{
return v_suppressElabErrors_2016_;
}
}
}
}
else
{
return v___y_2015_;
}
}
default: 
{
return v___y_2015_;
}
}
}
case 0:
{
lean_object* v_str_2040_; lean_object* v___x_2041_; uint8_t v___x_2042_; 
v_str_2040_ = lean_ctor_get(v_x_2017_, 1);
v___x_2041_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___redArg___closed__0));
v___x_2042_ = lean_string_dec_eq(v_str_2040_, v___x_2041_);
if (v___x_2042_ == 0)
{
return v___y_2015_;
}
else
{
return v_suppressElabErrors_2016_;
}
}
default: 
{
return v___y_2015_;
}
}
}
else
{
return v___y_2015_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___boxed(lean_object* v___y_2043_, lean_object* v_suppressElabErrors_2044_, lean_object* v_x_2045_){
_start:
{
uint8_t v___y_21271__boxed_2046_; uint8_t v_suppressElabErrors_boxed_2047_; uint8_t v_res_2048_; lean_object* v_r_2049_; 
v___y_21271__boxed_2046_ = lean_unbox(v___y_2043_);
v_suppressElabErrors_boxed_2047_ = lean_unbox(v_suppressElabErrors_2044_);
v_res_2048_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0(v___y_21271__boxed_2046_, v_suppressElabErrors_boxed_2047_, v_x_2045_);
lean_dec(v_x_2045_);
v_r_2049_ = lean_box(v_res_2048_);
return v_r_2049_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg(lean_object* v_ref_2050_, lean_object* v_msgData_2051_, uint8_t v_severity_2052_, uint8_t v_isSilent_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_){
_start:
{
lean_object* v___y_2060_; uint8_t v___y_2061_; lean_object* v___y_2062_; uint8_t v___y_2063_; lean_object* v___y_2064_; lean_object* v___y_2065_; lean_object* v___y_2066_; lean_object* v___y_2067_; lean_object* v___y_2068_; lean_object* v___y_2096_; lean_object* v___y_2097_; lean_object* v___y_2098_; uint8_t v___y_2099_; uint8_t v___y_2100_; lean_object* v___y_2101_; uint8_t v___y_2102_; lean_object* v___y_2103_; lean_object* v___y_2121_; lean_object* v___y_2122_; uint8_t v___y_2123_; lean_object* v___y_2124_; lean_object* v___y_2125_; uint8_t v___y_2126_; uint8_t v___y_2127_; lean_object* v___y_2128_; lean_object* v___y_2132_; lean_object* v___y_2133_; uint8_t v___y_2134_; lean_object* v___y_2135_; uint8_t v___y_2136_; lean_object* v___y_2137_; uint8_t v___y_2138_; uint8_t v___x_2143_; lean_object* v___y_2145_; lean_object* v___y_2146_; lean_object* v___y_2147_; uint8_t v___y_2148_; lean_object* v___y_2149_; uint8_t v___y_2150_; uint8_t v___y_2151_; uint8_t v___y_2153_; uint8_t v___x_2168_; 
v___x_2143_ = 2;
v___x_2168_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2052_, v___x_2143_);
if (v___x_2168_ == 0)
{
v___y_2153_ = v___x_2168_;
goto v___jp_2152_;
}
else
{
uint8_t v___x_2169_; 
lean_inc_ref(v_msgData_2051_);
v___x_2169_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_2051_);
v___y_2153_ = v___x_2169_;
goto v___jp_2152_;
}
v___jp_2059_:
{
lean_object* v___x_2069_; lean_object* v_currNamespace_2070_; lean_object* v_openDecls_2071_; lean_object* v_env_2072_; lean_object* v_nextMacroScope_2073_; lean_object* v_ngen_2074_; lean_object* v_auxDeclNGen_2075_; lean_object* v_traceState_2076_; lean_object* v_cache_2077_; lean_object* v_messages_2078_; lean_object* v_infoState_2079_; lean_object* v_snapshotTasks_2080_; lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2094_; 
v___x_2069_ = lean_st_ref_take(v___y_2068_);
v_currNamespace_2070_ = lean_ctor_get(v___y_2067_, 6);
lean_inc(v_currNamespace_2070_);
v_openDecls_2071_ = lean_ctor_get(v___y_2067_, 7);
lean_inc(v_openDecls_2071_);
lean_dec_ref(v___y_2067_);
v_env_2072_ = lean_ctor_get(v___x_2069_, 0);
v_nextMacroScope_2073_ = lean_ctor_get(v___x_2069_, 1);
v_ngen_2074_ = lean_ctor_get(v___x_2069_, 2);
v_auxDeclNGen_2075_ = lean_ctor_get(v___x_2069_, 3);
v_traceState_2076_ = lean_ctor_get(v___x_2069_, 4);
v_cache_2077_ = lean_ctor_get(v___x_2069_, 5);
v_messages_2078_ = lean_ctor_get(v___x_2069_, 6);
v_infoState_2079_ = lean_ctor_get(v___x_2069_, 7);
v_snapshotTasks_2080_ = lean_ctor_get(v___x_2069_, 8);
v_isSharedCheck_2094_ = !lean_is_exclusive(v___x_2069_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_2082_ = v___x_2069_;
v_isShared_2083_ = v_isSharedCheck_2094_;
goto v_resetjp_2081_;
}
else
{
lean_inc(v_snapshotTasks_2080_);
lean_inc(v_infoState_2079_);
lean_inc(v_messages_2078_);
lean_inc(v_cache_2077_);
lean_inc(v_traceState_2076_);
lean_inc(v_auxDeclNGen_2075_);
lean_inc(v_ngen_2074_);
lean_inc(v_nextMacroScope_2073_);
lean_inc(v_env_2072_);
lean_dec(v___x_2069_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2094_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2089_; 
v___x_2084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2084_, 0, v_currNamespace_2070_);
lean_ctor_set(v___x_2084_, 1, v_openDecls_2071_);
v___x_2085_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2085_, 0, v___x_2084_);
lean_ctor_set(v___x_2085_, 1, v___y_2064_);
v___x_2086_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2086_, 0, v___y_2060_);
lean_ctor_set(v___x_2086_, 1, v___y_2066_);
lean_ctor_set(v___x_2086_, 2, v___y_2062_);
lean_ctor_set(v___x_2086_, 3, v___y_2065_);
lean_ctor_set(v___x_2086_, 4, v___x_2085_);
lean_ctor_set_uint8(v___x_2086_, sizeof(void*)*5, v___y_2063_);
lean_ctor_set_uint8(v___x_2086_, sizeof(void*)*5 + 1, v___y_2061_);
lean_ctor_set_uint8(v___x_2086_, sizeof(void*)*5 + 2, v_isSilent_2053_);
v___x_2087_ = l_Lean_MessageLog_add(v___x_2086_, v_messages_2078_);
if (v_isShared_2083_ == 0)
{
lean_ctor_set(v___x_2082_, 6, v___x_2087_);
v___x_2089_ = v___x_2082_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v_env_2072_);
lean_ctor_set(v_reuseFailAlloc_2093_, 1, v_nextMacroScope_2073_);
lean_ctor_set(v_reuseFailAlloc_2093_, 2, v_ngen_2074_);
lean_ctor_set(v_reuseFailAlloc_2093_, 3, v_auxDeclNGen_2075_);
lean_ctor_set(v_reuseFailAlloc_2093_, 4, v_traceState_2076_);
lean_ctor_set(v_reuseFailAlloc_2093_, 5, v_cache_2077_);
lean_ctor_set(v_reuseFailAlloc_2093_, 6, v___x_2087_);
lean_ctor_set(v_reuseFailAlloc_2093_, 7, v_infoState_2079_);
lean_ctor_set(v_reuseFailAlloc_2093_, 8, v_snapshotTasks_2080_);
v___x_2089_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; 
v___x_2090_ = lean_st_ref_set(v___y_2068_, v___x_2089_);
v___x_2091_ = lean_box(0);
v___x_2092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2091_);
return v___x_2092_;
}
}
}
v___jp_2095_:
{
lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v_a_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2119_; 
v___x_2104_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_2051_);
v___x_2105_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__19(v___x_2104_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_);
v_a_2106_ = lean_ctor_get(v___x_2105_, 0);
v_isSharedCheck_2119_ = !lean_is_exclusive(v___x_2105_);
if (v_isSharedCheck_2119_ == 0)
{
v___x_2108_ = v___x_2105_;
v_isShared_2109_ = v_isSharedCheck_2119_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_a_2106_);
lean_dec(v___x_2105_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2119_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; 
lean_inc_ref(v___y_2101_);
v___x_2110_ = l_Lean_FileMap_toPosition(v___y_2101_, v___y_2098_);
lean_dec(v___y_2098_);
v___x_2111_ = l_Lean_FileMap_toPosition(v___y_2101_, v___y_2103_);
lean_dec(v___y_2103_);
v___x_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2112_, 0, v___x_2111_);
v___x_2113_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__1));
if (v___y_2102_ == 0)
{
lean_del_object(v___x_2108_);
lean_dec_ref(v___y_2096_);
v___y_2060_ = v___y_2097_;
v___y_2061_ = v___y_2099_;
v___y_2062_ = v___x_2112_;
v___y_2063_ = v___y_2100_;
v___y_2064_ = v_a_2106_;
v___y_2065_ = v___x_2113_;
v___y_2066_ = v___x_2110_;
v___y_2067_ = v___y_2056_;
v___y_2068_ = v___y_2057_;
goto v___jp_2059_;
}
else
{
uint8_t v___x_2114_; 
lean_inc(v_a_2106_);
v___x_2114_ = l_Lean_MessageData_hasTag(v___y_2096_, v_a_2106_);
if (v___x_2114_ == 0)
{
lean_object* v___x_2115_; lean_object* v___x_2117_; 
lean_dec_ref(v___x_2112_);
lean_dec_ref(v___x_2110_);
lean_dec(v_a_2106_);
lean_dec_ref(v___y_2097_);
lean_dec_ref(v___y_2056_);
v___x_2115_ = lean_box(0);
if (v_isShared_2109_ == 0)
{
lean_ctor_set(v___x_2108_, 0, v___x_2115_);
v___x_2117_ = v___x_2108_;
goto v_reusejp_2116_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v___x_2115_);
v___x_2117_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2116_;
}
v_reusejp_2116_:
{
return v___x_2117_;
}
}
else
{
lean_del_object(v___x_2108_);
v___y_2060_ = v___y_2097_;
v___y_2061_ = v___y_2099_;
v___y_2062_ = v___x_2112_;
v___y_2063_ = v___y_2100_;
v___y_2064_ = v_a_2106_;
v___y_2065_ = v___x_2113_;
v___y_2066_ = v___x_2110_;
v___y_2067_ = v___y_2056_;
v___y_2068_ = v___y_2057_;
goto v___jp_2059_;
}
}
}
}
v___jp_2120_:
{
lean_object* v___x_2129_; 
v___x_2129_ = l_Lean_Syntax_getTailPos_x3f(v___y_2124_, v___y_2126_);
lean_dec(v___y_2124_);
if (lean_obj_tag(v___x_2129_) == 0)
{
lean_inc(v___y_2128_);
v___y_2096_ = v___y_2121_;
v___y_2097_ = v___y_2122_;
v___y_2098_ = v___y_2128_;
v___y_2099_ = v___y_2123_;
v___y_2100_ = v___y_2126_;
v___y_2101_ = v___y_2125_;
v___y_2102_ = v___y_2127_;
v___y_2103_ = v___y_2128_;
goto v___jp_2095_;
}
else
{
lean_object* v_val_2130_; 
v_val_2130_ = lean_ctor_get(v___x_2129_, 0);
lean_inc(v_val_2130_);
lean_dec_ref(v___x_2129_);
v___y_2096_ = v___y_2121_;
v___y_2097_ = v___y_2122_;
v___y_2098_ = v___y_2128_;
v___y_2099_ = v___y_2123_;
v___y_2100_ = v___y_2126_;
v___y_2101_ = v___y_2125_;
v___y_2102_ = v___y_2127_;
v___y_2103_ = v_val_2130_;
goto v___jp_2095_;
}
}
v___jp_2131_:
{
lean_object* v_ref_2139_; lean_object* v___x_2140_; 
v_ref_2139_ = l_Lean_replaceRef(v_ref_2050_, v___y_2137_);
lean_dec(v___y_2137_);
v___x_2140_ = l_Lean_Syntax_getPos_x3f(v_ref_2139_, v___y_2134_);
if (lean_obj_tag(v___x_2140_) == 0)
{
lean_object* v___x_2141_; 
v___x_2141_ = lean_unsigned_to_nat(0u);
v___y_2121_ = v___y_2132_;
v___y_2122_ = v___y_2133_;
v___y_2123_ = v___y_2138_;
v___y_2124_ = v_ref_2139_;
v___y_2125_ = v___y_2135_;
v___y_2126_ = v___y_2134_;
v___y_2127_ = v___y_2136_;
v___y_2128_ = v___x_2141_;
goto v___jp_2120_;
}
else
{
lean_object* v_val_2142_; 
v_val_2142_ = lean_ctor_get(v___x_2140_, 0);
lean_inc(v_val_2142_);
lean_dec_ref(v___x_2140_);
v___y_2121_ = v___y_2132_;
v___y_2122_ = v___y_2133_;
v___y_2123_ = v___y_2138_;
v___y_2124_ = v_ref_2139_;
v___y_2125_ = v___y_2135_;
v___y_2126_ = v___y_2134_;
v___y_2127_ = v___y_2136_;
v___y_2128_ = v_val_2142_;
goto v___jp_2120_;
}
}
v___jp_2144_:
{
if (v___y_2151_ == 0)
{
v___y_2132_ = v___y_2146_;
v___y_2133_ = v___y_2145_;
v___y_2134_ = v___y_2150_;
v___y_2135_ = v___y_2147_;
v___y_2136_ = v___y_2148_;
v___y_2137_ = v___y_2149_;
v___y_2138_ = v_severity_2052_;
goto v___jp_2131_;
}
else
{
v___y_2132_ = v___y_2146_;
v___y_2133_ = v___y_2145_;
v___y_2134_ = v___y_2150_;
v___y_2135_ = v___y_2147_;
v___y_2136_ = v___y_2148_;
v___y_2137_ = v___y_2149_;
v___y_2138_ = v___x_2143_;
goto v___jp_2131_;
}
}
v___jp_2152_:
{
if (v___y_2153_ == 0)
{
lean_object* v_fileName_2154_; lean_object* v_fileMap_2155_; lean_object* v_options_2156_; lean_object* v_ref_2157_; uint8_t v_suppressElabErrors_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___f_2161_; uint8_t v___x_2162_; uint8_t v___x_2163_; 
v_fileName_2154_ = lean_ctor_get(v___y_2056_, 0);
v_fileMap_2155_ = lean_ctor_get(v___y_2056_, 1);
v_options_2156_ = lean_ctor_get(v___y_2056_, 2);
v_ref_2157_ = lean_ctor_get(v___y_2056_, 5);
v_suppressElabErrors_2158_ = lean_ctor_get_uint8(v___y_2056_, sizeof(void*)*14 + 1);
v___x_2159_ = lean_box(v___y_2153_);
v___x_2160_ = lean_box(v_suppressElabErrors_2158_);
v___f_2161_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2161_, 0, v___x_2159_);
lean_closure_set(v___f_2161_, 1, v___x_2160_);
v___x_2162_ = 1;
v___x_2163_ = l_Lean_instBEqMessageSeverity_beq(v_severity_2052_, v___x_2162_);
if (v___x_2163_ == 0)
{
lean_inc(v_ref_2157_);
lean_inc_ref(v_fileMap_2155_);
lean_inc_ref(v_fileName_2154_);
v___y_2145_ = v_fileName_2154_;
v___y_2146_ = v___f_2161_;
v___y_2147_ = v_fileMap_2155_;
v___y_2148_ = v_suppressElabErrors_2158_;
v___y_2149_ = v_ref_2157_;
v___y_2150_ = v___y_2153_;
v___y_2151_ = v___x_2163_;
goto v___jp_2144_;
}
else
{
lean_object* v___x_2164_; uint8_t v___x_2165_; 
v___x_2164_ = l_Lean_warningAsError;
v___x_2165_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14_spec__17(v_options_2156_, v___x_2164_);
lean_inc(v_ref_2157_);
lean_inc_ref(v_fileMap_2155_);
lean_inc_ref(v_fileName_2154_);
v___y_2145_ = v_fileName_2154_;
v___y_2146_ = v___f_2161_;
v___y_2147_ = v_fileMap_2155_;
v___y_2148_ = v_suppressElabErrors_2158_;
v___y_2149_ = v_ref_2157_;
v___y_2150_ = v___y_2153_;
v___y_2151_ = v___x_2165_;
goto v___jp_2144_;
}
}
else
{
lean_object* v___x_2166_; lean_object* v___x_2167_; 
lean_dec_ref(v___y_2056_);
lean_dec_ref(v_msgData_2051_);
v___x_2166_ = lean_box(0);
v___x_2167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2166_);
return v___x_2167_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg___boxed(lean_object* v_ref_2170_, lean_object* v_msgData_2171_, lean_object* v_severity_2172_, lean_object* v_isSilent_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_){
_start:
{
uint8_t v_severity_boxed_2179_; uint8_t v_isSilent_boxed_2180_; lean_object* v_res_2181_; 
v_severity_boxed_2179_ = lean_unbox(v_severity_2172_);
v_isSilent_boxed_2180_ = lean_unbox(v_isSilent_2173_);
v_res_2181_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg(v_ref_2170_, v_msgData_2171_, v_severity_boxed_2179_, v_isSilent_boxed_2180_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_);
lean_dec(v___y_2177_);
lean_dec(v___y_2175_);
lean_dec_ref(v___y_2174_);
lean_dec(v_ref_2170_);
return v_res_2181_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__5(lean_object* v_ref_2182_, lean_object* v_msgData_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_){
_start:
{
uint8_t v___x_2191_; uint8_t v___x_2192_; lean_object* v___x_2193_; 
v___x_2191_ = 2;
v___x_2192_ = 0;
v___x_2193_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg(v_ref_2182_, v_msgData_2183_, v___x_2191_, v___x_2192_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_);
return v___x_2193_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__5___boxed(lean_object* v_ref_2194_, lean_object* v_msgData_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_){
_start:
{
lean_object* v_res_2203_; 
v_res_2203_ = l_Lean_logErrorAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__5(v_ref_2194_, v_msgData_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_, v___y_2200_, v___y_2201_);
lean_dec(v___y_2201_);
lean_dec(v___y_2199_);
lean_dec_ref(v___y_2198_);
lean_dec(v___y_2197_);
lean_dec_ref(v___y_2196_);
lean_dec(v_ref_2194_);
return v_res_2203_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4(lean_object* v_ref_2204_, lean_object* v_msgData_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_){
_start:
{
uint8_t v___x_2213_; uint8_t v___x_2214_; lean_object* v___x_2215_; 
v___x_2213_ = 1;
v___x_2214_ = 0;
v___x_2215_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg(v_ref_2204_, v_msgData_2205_, v___x_2213_, v___x_2214_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_);
return v___x_2215_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4___boxed(lean_object* v_ref_2216_, lean_object* v_msgData_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_){
_start:
{
lean_object* v_res_2225_; 
v_res_2225_ = l_Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4(v_ref_2216_, v_msgData_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_);
lean_dec(v___y_2223_);
lean_dec(v___y_2221_);
lean_dec_ref(v___y_2220_);
lean_dec(v___y_2219_);
lean_dec_ref(v___y_2218_);
lean_dec(v_ref_2216_);
return v_res_2225_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__1(void){
_start:
{
lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2227_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__0));
v___x_2228_ = l_Lean_stringToMessageData(v___x_2227_);
return v___x_2228_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__3(void){
_start:
{
lean_object* v___x_2230_; lean_object* v___x_2231_; 
v___x_2230_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__2));
v___x_2231_ = l_Lean_stringToMessageData(v___x_2230_);
return v___x_2231_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__5(void){
_start:
{
lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2233_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__4));
v___x_2234_ = l_Lean_stringToMessageData(v___x_2233_);
return v___x_2234_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__7(void){
_start:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; 
v___x_2236_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__6));
v___x_2237_ = l_Lean_stringToMessageData(v___x_2236_);
return v___x_2237_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__9(void){
_start:
{
lean_object* v___x_2239_; lean_object* v___x_2240_; 
v___x_2239_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__8));
v___x_2240_ = l_Lean_stringToMessageData(v___x_2239_);
return v___x_2240_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__11(void){
_start:
{
lean_object* v___x_2242_; lean_object* v___x_2243_; 
v___x_2242_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__10));
v___x_2243_ = l_Lean_stringToMessageData(v___x_2242_);
return v___x_2243_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__13(void){
_start:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2245_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__12));
v___x_2246_ = l_Lean_stringToMessageData(v___x_2245_);
return v___x_2246_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__15(void){
_start:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; 
v___x_2248_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__14));
v___x_2249_ = l_Lean_stringToMessageData(v___x_2248_);
return v___x_2249_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__17(void){
_start:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2251_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__16));
v___x_2252_ = l_Lean_stringToMessageData(v___x_2251_);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError(lean_object* v_stx_2253_, lean_object* v_expType_x3f_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_){
_start:
{
uint8_t v___y_2263_; lean_object* v___y_2264_; lean_object* v___y_2265_; lean_object* v___y_2266_; lean_object* v___y_2267_; lean_object* v___y_2268_; lean_object* v___y_2269_; lean_object* v___y_2283_; lean_object* v___y_2284_; lean_object* v___y_2285_; lean_object* v___y_2286_; lean_object* v___y_2287_; uint8_t v___y_2288_; lean_object* v___y_2289_; lean_object* v___y_2290_; lean_object* v___y_2291_; lean_object* v___y_2349_; lean_object* v___y_2350_; lean_object* v___y_2351_; lean_object* v___y_2352_; lean_object* v___y_2353_; lean_object* v___y_2354_; lean_object* v_fst_2355_; lean_object* v_snd_2356_; lean_object* v___y_2368_; lean_object* v___y_2369_; lean_object* v___y_2370_; lean_object* v___y_2371_; lean_object* v___y_2372_; lean_object* v___y_2373_; lean_object* v___y_2378_; lean_object* v___y_2379_; lean_object* v___y_2380_; lean_object* v___y_2381_; lean_object* v___y_2382_; lean_object* v___y_2383_; uint8_t v___y_2384_; lean_object* v___y_2391_; lean_object* v___y_2392_; lean_object* v___y_2393_; lean_object* v___y_2394_; lean_object* v___y_2395_; lean_object* v___y_2396_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; 
v___x_2401_ = l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap;
lean_inc(v_stx_2253_);
v___x_2402_ = l_Lean_Syntax_getKind(v_stx_2253_);
v___x_2403_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6___redArg(v___x_2401_, v___x_2402_);
lean_dec(v___x_2402_);
if (lean_obj_tag(v___x_2403_) == 1)
{
lean_object* v_val_2404_; lean_object* v_fst_2405_; lean_object* v_snd_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2437_; 
v_val_2404_ = lean_ctor_get(v___x_2403_, 0);
lean_inc(v_val_2404_);
lean_dec_ref(v___x_2403_);
v_fst_2405_ = lean_ctor_get(v_val_2404_, 0);
v_snd_2406_ = lean_ctor_get(v_val_2404_, 1);
v_isSharedCheck_2437_ = !lean_is_exclusive(v_val_2404_);
if (v_isSharedCheck_2437_ == 0)
{
v___x_2408_ = v_val_2404_;
v_isShared_2409_ = v_isSharedCheck_2437_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_snd_2406_);
lean_inc(v_fst_2405_);
lean_dec(v_val_2404_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2437_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v___x_2410_; lean_object* v_env_2411_; uint8_t v___x_2412_; uint8_t v___x_2413_; 
v___x_2410_ = lean_st_ref_get(v_a_2260_);
v_env_2411_ = lean_ctor_get(v___x_2410_, 0);
lean_inc_ref(v_env_2411_);
lean_dec(v___x_2410_);
v___x_2412_ = 1;
lean_inc(v_snd_2406_);
v___x_2413_ = l_Lean_Environment_contains(v_env_2411_, v_snd_2406_, v___x_2412_);
if (v___x_2413_ == 0)
{
lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2417_; 
lean_dec(v_expType_x3f_2254_);
lean_dec(v_stx_2253_);
v___x_2414_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__11, &l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__11_once, _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__11);
v___x_2415_ = l_Lean_MessageData_ofName(v_snd_2406_);
if (v_isShared_2409_ == 0)
{
lean_ctor_set_tag(v___x_2408_, 7);
lean_ctor_set(v___x_2408_, 1, v___x_2415_);
lean_ctor_set(v___x_2408_, 0, v___x_2414_);
v___x_2417_ = v___x_2408_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v___x_2414_);
lean_ctor_set(v_reuseFailAlloc_2436_, 1, v___x_2415_);
v___x_2417_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v_a_2428_; lean_object* v___x_2430_; uint8_t v_isShared_2431_; uint8_t v_isSharedCheck_2435_; 
v___x_2418_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__13, &l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__13_once, _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__13);
v___x_2419_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2419_, 0, v___x_2417_);
lean_ctor_set(v___x_2419_, 1, v___x_2418_);
v___x_2420_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__15, &l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__15_once, _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__15);
v___x_2421_ = l_Lean_MessageData_ofName(v_fst_2405_);
v___x_2422_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2422_, 0, v___x_2420_);
lean_ctor_set(v___x_2422_, 1, v___x_2421_);
v___x_2423_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__17, &l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__17_once, _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__17);
v___x_2424_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2424_, 0, v___x_2422_);
lean_ctor_set(v___x_2424_, 1, v___x_2423_);
v___x_2425_ = l_Lean_MessageData_hint_x27(v___x_2424_);
v___x_2426_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2426_, 0, v___x_2419_);
lean_ctor_set(v___x_2426_, 1, v___x_2425_);
v___x_2427_ = l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7___redArg(v___x_2426_, v_a_2255_, v_a_2256_, v_a_2257_, v_a_2258_, v_a_2259_, v_a_2260_);
lean_dec(v_a_2260_);
lean_dec_ref(v_a_2259_);
lean_dec(v_a_2258_);
lean_dec_ref(v_a_2257_);
lean_dec(v_a_2256_);
v_a_2428_ = lean_ctor_get(v___x_2427_, 0);
v_isSharedCheck_2435_ = !lean_is_exclusive(v___x_2427_);
if (v_isSharedCheck_2435_ == 0)
{
v___x_2430_ = v___x_2427_;
v_isShared_2431_ = v_isSharedCheck_2435_;
goto v_resetjp_2429_;
}
else
{
lean_inc(v_a_2428_);
lean_dec(v___x_2427_);
v___x_2430_ = lean_box(0);
v_isShared_2431_ = v_isSharedCheck_2435_;
goto v_resetjp_2429_;
}
v_resetjp_2429_:
{
lean_object* v___x_2433_; 
if (v_isShared_2431_ == 0)
{
v___x_2433_ = v___x_2430_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2434_; 
v_reuseFailAlloc_2434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2434_, 0, v_a_2428_);
v___x_2433_ = v_reuseFailAlloc_2434_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
return v___x_2433_;
}
}
}
}
else
{
lean_del_object(v___x_2408_);
lean_dec(v_snd_2406_);
lean_dec(v_fst_2405_);
v___y_2391_ = v_a_2255_;
v___y_2392_ = v_a_2256_;
v___y_2393_ = v_a_2257_;
v___y_2394_ = v_a_2258_;
v___y_2395_ = v_a_2259_;
v___y_2396_ = v_a_2260_;
goto v___jp_2390_;
}
}
}
else
{
lean_dec(v___x_2403_);
v___y_2391_ = v_a_2255_;
v___y_2392_ = v_a_2256_;
v___y_2393_ = v_a_2257_;
v___y_2394_ = v_a_2258_;
v___y_2395_ = v_a_2259_;
v___y_2396_ = v_a_2260_;
goto v___jp_2390_;
}
v___jp_2262_:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2270_ = lean_alloc_closure((void*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro), 3, 1);
lean_closure_set(v___x_2270_, 0, v_stx_2253_);
lean_inc_ref(v___y_2268_);
lean_inc_ref(v___y_2264_);
v___x_2271_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg(v___x_2270_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2269_);
if (lean_obj_tag(v___x_2271_) == 0)
{
lean_object* v_a_2272_; lean_object* v___x_2273_; 
v_a_2272_ = lean_ctor_get(v___x_2271_, 0);
lean_inc(v_a_2272_);
lean_dec_ref(v___x_2271_);
v___x_2273_ = l_Lean_Elab_Term_elabTerm(v_a_2272_, v_expType_x3f_2254_, v___y_2263_, v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2269_);
return v___x_2273_;
}
else
{
lean_object* v_a_2274_; lean_object* v___x_2276_; uint8_t v_isShared_2277_; uint8_t v_isSharedCheck_2281_; 
lean_dec(v___y_2269_);
lean_dec_ref(v___y_2268_);
lean_dec(v___y_2267_);
lean_dec_ref(v___y_2266_);
lean_dec(v___y_2265_);
lean_dec_ref(v___y_2264_);
lean_dec(v_expType_x3f_2254_);
v_a_2274_ = lean_ctor_get(v___x_2271_, 0);
v_isSharedCheck_2281_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2281_ == 0)
{
v___x_2276_ = v___x_2271_;
v_isShared_2277_ = v_isSharedCheck_2281_;
goto v_resetjp_2275_;
}
else
{
lean_inc(v_a_2274_);
lean_dec(v___x_2271_);
v___x_2276_ = lean_box(0);
v_isShared_2277_ = v_isSharedCheck_2281_;
goto v_resetjp_2275_;
}
v_resetjp_2275_:
{
lean_object* v___x_2279_; 
if (v_isShared_2277_ == 0)
{
v___x_2279_ = v___x_2276_;
goto v_reusejp_2278_;
}
else
{
lean_object* v_reuseFailAlloc_2280_; 
v_reuseFailAlloc_2280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2280_, 0, v_a_2274_);
v___x_2279_ = v_reuseFailAlloc_2280_;
goto v_reusejp_2278_;
}
v_reusejp_2278_:
{
return v___x_2279_;
}
}
}
}
v___jp_2282_:
{
lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v_partialId_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2346_; 
v___x_2292_ = l_Lean_Syntax_getNumArgs(v___y_2291_);
v___x_2293_ = lean_unsigned_to_nat(2u);
v___x_2294_ = lean_nat_sub(v___x_2292_, v___x_2293_);
lean_dec(v___x_2292_);
v_partialId_2295_ = l_Lean_Syntax_getArg(v___y_2291_, v___x_2294_);
lean_dec(v___x_2294_);
v___x_2296_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v___x_2296_, 0, v___y_2291_);
lean_ctor_set(v___x_2296_, 1, v_partialId_2295_);
v___x_2297_ = l_Lean_Elab_addCompletionInfo___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__1(v___x_2296_, v___y_2286_, v___y_2283_, v___y_2290_, v___y_2284_, v___y_2285_, v___y_2289_);
v_isSharedCheck_2346_ = !lean_is_exclusive(v___x_2297_);
if (v_isSharedCheck_2346_ == 0)
{
lean_object* v_unused_2347_; 
v_unused_2347_ = lean_ctor_get(v___x_2297_, 0);
lean_dec(v_unused_2347_);
v___x_2299_ = v___x_2297_;
v_isShared_2300_ = v_isSharedCheck_2346_;
goto v_resetjp_2298_;
}
else
{
lean_dec(v___x_2297_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2346_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2305_; 
v___x_2301_ = l_Lean_Syntax_getId(v___y_2287_);
v___x_2302_ = lean_erase_macro_scopes(v___x_2301_);
lean_inc(v___x_2302_);
lean_inc(v___y_2287_);
v___x_2303_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2303_, 0, v___y_2287_);
lean_ctor_set(v___x_2303_, 1, v___x_2302_);
if (v_isShared_2300_ == 0)
{
lean_ctor_set_tag(v___x_2299_, 6);
lean_ctor_set(v___x_2299_, 0, v___x_2303_);
v___x_2305_ = v___x_2299_;
goto v_reusejp_2304_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v___x_2303_);
v___x_2305_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2304_;
}
v_reusejp_2304_:
{
lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v_a_2308_; 
v___x_2306_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2(v___x_2305_, v___y_2286_, v___y_2283_, v___y_2290_, v___y_2284_, v___y_2285_, v___y_2289_);
lean_dec_ref(v___x_2306_);
v___x_2307_ = l_Lean_getErrorExplanation_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__3___redArg(v___x_2302_, v___y_2289_);
v_a_2308_ = lean_ctor_get(v___x_2307_, 0);
lean_inc(v_a_2308_);
lean_dec_ref(v___x_2307_);
if (lean_obj_tag(v_a_2308_) == 1)
{
lean_object* v_val_2309_; lean_object* v_metadata_2310_; lean_object* v_removedVersion_x3f_2311_; 
v_val_2309_ = lean_ctor_get(v_a_2308_, 0);
lean_inc(v_val_2309_);
lean_dec_ref(v_a_2308_);
v_metadata_2310_ = lean_ctor_get(v_val_2309_, 1);
lean_inc_ref(v_metadata_2310_);
lean_dec(v_val_2309_);
v_removedVersion_x3f_2311_ = lean_ctor_get(v_metadata_2310_, 2);
lean_inc(v_removedVersion_x3f_2311_);
lean_dec_ref(v_metadata_2310_);
if (lean_obj_tag(v_removedVersion_x3f_2311_) == 1)
{
lean_object* v_val_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; 
v_val_2312_ = lean_ctor_get(v_removedVersion_x3f_2311_, 0);
lean_inc(v_val_2312_);
lean_dec_ref(v_removedVersion_x3f_2311_);
v___x_2313_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__1, &l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__1_once, _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__1);
v___x_2314_ = l_Lean_MessageData_ofName(v___x_2302_);
v___x_2315_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2315_, 0, v___x_2313_);
lean_ctor_set(v___x_2315_, 1, v___x_2314_);
v___x_2316_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__3, &l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__3_once, _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__3);
v___x_2317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2317_, 0, v___x_2315_);
lean_ctor_set(v___x_2317_, 1, v___x_2316_);
v___x_2318_ = l_Lean_stringToMessageData(v_val_2312_);
v___x_2319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2317_);
lean_ctor_set(v___x_2319_, 1, v___x_2318_);
v___x_2320_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__5, &l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__5_once, _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__5);
v___x_2321_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2321_, 0, v___x_2319_);
lean_ctor_set(v___x_2321_, 1, v___x_2320_);
lean_inc_ref(v___y_2285_);
v___x_2322_ = l_Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4(v___y_2287_, v___x_2321_, v___y_2286_, v___y_2283_, v___y_2290_, v___y_2284_, v___y_2285_, v___y_2289_);
lean_dec(v___y_2287_);
if (lean_obj_tag(v___x_2322_) == 0)
{
lean_dec_ref(v___x_2322_);
v___y_2263_ = v___y_2288_;
v___y_2264_ = v___y_2286_;
v___y_2265_ = v___y_2283_;
v___y_2266_ = v___y_2290_;
v___y_2267_ = v___y_2284_;
v___y_2268_ = v___y_2285_;
v___y_2269_ = v___y_2289_;
goto v___jp_2262_;
}
else
{
lean_object* v_a_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2330_; 
lean_dec_ref(v___y_2290_);
lean_dec(v___y_2289_);
lean_dec_ref(v___y_2286_);
lean_dec_ref(v___y_2285_);
lean_dec(v___y_2284_);
lean_dec(v___y_2283_);
lean_dec(v_expType_x3f_2254_);
lean_dec(v_stx_2253_);
v_a_2323_ = lean_ctor_get(v___x_2322_, 0);
v_isSharedCheck_2330_ = !lean_is_exclusive(v___x_2322_);
if (v_isSharedCheck_2330_ == 0)
{
v___x_2325_ = v___x_2322_;
v_isShared_2326_ = v_isSharedCheck_2330_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_a_2323_);
lean_dec(v___x_2322_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2330_;
goto v_resetjp_2324_;
}
v_resetjp_2324_:
{
lean_object* v___x_2328_; 
if (v_isShared_2326_ == 0)
{
v___x_2328_ = v___x_2325_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v_a_2323_);
v___x_2328_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
return v___x_2328_;
}
}
}
}
else
{
lean_dec(v_removedVersion_x3f_2311_);
lean_dec(v___x_2302_);
lean_dec(v___y_2287_);
v___y_2263_ = v___y_2288_;
v___y_2264_ = v___y_2286_;
v___y_2265_ = v___y_2283_;
v___y_2266_ = v___y_2290_;
v___y_2267_ = v___y_2284_;
v___y_2268_ = v___y_2285_;
v___y_2269_ = v___y_2289_;
goto v___jp_2262_;
}
}
else
{
lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; 
lean_dec(v_a_2308_);
v___x_2331_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__7, &l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__7_once, _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__7);
v___x_2332_ = l_Lean_MessageData_ofName(v___x_2302_);
v___x_2333_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2333_, 0, v___x_2331_);
lean_ctor_set(v___x_2333_, 1, v___x_2332_);
v___x_2334_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__9, &l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__9_once, _init_l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___closed__9);
v___x_2335_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2333_);
lean_ctor_set(v___x_2335_, 1, v___x_2334_);
lean_inc_ref(v___y_2285_);
v___x_2336_ = l_Lean_logErrorAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__5(v___y_2287_, v___x_2335_, v___y_2286_, v___y_2283_, v___y_2290_, v___y_2284_, v___y_2285_, v___y_2289_);
lean_dec(v___y_2287_);
if (lean_obj_tag(v___x_2336_) == 0)
{
lean_dec_ref(v___x_2336_);
v___y_2263_ = v___y_2288_;
v___y_2264_ = v___y_2286_;
v___y_2265_ = v___y_2283_;
v___y_2266_ = v___y_2290_;
v___y_2267_ = v___y_2284_;
v___y_2268_ = v___y_2285_;
v___y_2269_ = v___y_2289_;
goto v___jp_2262_;
}
else
{
lean_object* v_a_2337_; lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2344_; 
lean_dec_ref(v___y_2290_);
lean_dec(v___y_2289_);
lean_dec_ref(v___y_2286_);
lean_dec_ref(v___y_2285_);
lean_dec(v___y_2284_);
lean_dec(v___y_2283_);
lean_dec(v_expType_x3f_2254_);
lean_dec(v_stx_2253_);
v_a_2337_ = lean_ctor_get(v___x_2336_, 0);
v_isSharedCheck_2344_ = !lean_is_exclusive(v___x_2336_);
if (v_isSharedCheck_2344_ == 0)
{
v___x_2339_ = v___x_2336_;
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
else
{
lean_inc(v_a_2337_);
lean_dec(v___x_2336_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
lean_object* v___x_2342_; 
if (v_isShared_2340_ == 0)
{
v___x_2342_ = v___x_2339_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v_a_2337_);
v___x_2342_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
return v___x_2342_;
}
}
}
}
}
}
}
v___jp_2348_:
{
lean_object* v___x_2357_; uint8_t v___x_2358_; uint8_t v___x_2359_; 
v___x_2357_ = l_Lean_Syntax_getNumArgs(v_stx_2253_);
v___x_2358_ = lean_nat_dec_eq(v___x_2357_, v_snd_2356_);
v___x_2359_ = 1;
if (v___x_2358_ == 0)
{
lean_dec(v___x_2357_);
lean_inc(v_stx_2253_);
v___y_2283_ = v___y_2349_;
v___y_2284_ = v___y_2350_;
v___y_2285_ = v___y_2351_;
v___y_2286_ = v___y_2352_;
v___y_2287_ = v_fst_2355_;
v___y_2288_ = v___x_2359_;
v___y_2289_ = v___y_2354_;
v___y_2290_ = v___y_2353_;
v___y_2291_ = v_stx_2253_;
goto v___jp_2282_;
}
else
{
lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; 
v___x_2360_ = l_Lean_Syntax_getArgs(v_stx_2253_);
v___x_2361_ = lean_unsigned_to_nat(1u);
v___x_2362_ = lean_nat_sub(v___x_2357_, v___x_2361_);
lean_dec(v___x_2357_);
v___x_2363_ = lean_unsigned_to_nat(0u);
v___x_2364_ = l_Array_toSubarray___redArg(v___x_2360_, v___x_2363_, v___x_2362_);
v___x_2365_ = l_Subarray_copy___redArg(v___x_2364_);
lean_inc(v_stx_2253_);
v___x_2366_ = l_Lean_Syntax_setArgs(v_stx_2253_, v___x_2365_);
v___y_2283_ = v___y_2349_;
v___y_2284_ = v___y_2350_;
v___y_2285_ = v___y_2351_;
v___y_2286_ = v___y_2352_;
v___y_2287_ = v_fst_2355_;
v___y_2288_ = v___x_2359_;
v___y_2289_ = v___y_2354_;
v___y_2290_ = v___y_2353_;
v___y_2291_ = v___x_2366_;
goto v___jp_2282_;
}
}
v___jp_2367_:
{
lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___x_2374_ = lean_unsigned_to_nat(2u);
v___x_2375_ = l_Lean_Syntax_getArg(v_stx_2253_, v___x_2374_);
v___x_2376_ = lean_unsigned_to_nat(5u);
v___y_2349_ = v___y_2368_;
v___y_2350_ = v___y_2369_;
v___y_2351_ = v___y_2370_;
v___y_2352_ = v___y_2371_;
v___y_2353_ = v___y_2373_;
v___y_2354_ = v___y_2372_;
v_fst_2355_ = v___x_2375_;
v_snd_2356_ = v___x_2376_;
goto v___jp_2348_;
}
v___jp_2377_:
{
if (v___y_2384_ == 0)
{
lean_object* v___x_2385_; uint8_t v___x_2386_; 
v___x_2385_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__13));
lean_inc(v_stx_2253_);
v___x_2386_ = l_Lean_Syntax_isOfKind(v_stx_2253_, v___x_2385_);
if (v___x_2386_ == 0)
{
lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___x_2387_ = lean_unsigned_to_nat(1u);
v___x_2388_ = l_Lean_Syntax_getArg(v_stx_2253_, v___x_2387_);
v___x_2389_ = lean_unsigned_to_nat(4u);
v___y_2349_ = v___y_2378_;
v___y_2350_ = v___y_2379_;
v___y_2351_ = v___y_2380_;
v___y_2352_ = v___y_2381_;
v___y_2353_ = v___y_2383_;
v___y_2354_ = v___y_2382_;
v_fst_2355_ = v___x_2388_;
v_snd_2356_ = v___x_2389_;
goto v___jp_2348_;
}
else
{
v___y_2368_ = v___y_2378_;
v___y_2369_ = v___y_2379_;
v___y_2370_ = v___y_2380_;
v___y_2371_ = v___y_2381_;
v___y_2372_ = v___y_2382_;
v___y_2373_ = v___y_2383_;
goto v___jp_2367_;
}
}
else
{
v___y_2368_ = v___y_2378_;
v___y_2369_ = v___y_2379_;
v___y_2370_ = v___y_2380_;
v___y_2371_ = v___y_2381_;
v___y_2372_ = v___y_2382_;
v___y_2373_ = v___y_2383_;
goto v___jp_2367_;
}
}
v___jp_2390_:
{
lean_object* v___x_2397_; uint8_t v___x_2398_; 
v___x_2397_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__5));
lean_inc(v_stx_2253_);
v___x_2398_ = l_Lean_Syntax_isOfKind(v_stx_2253_, v___x_2397_);
if (v___x_2398_ == 0)
{
lean_object* v___x_2399_; uint8_t v___x_2400_; 
v___x_2399_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__9));
lean_inc(v_stx_2253_);
v___x_2400_ = l_Lean_Syntax_isOfKind(v_stx_2253_, v___x_2399_);
v___y_2378_ = v___y_2392_;
v___y_2379_ = v___y_2394_;
v___y_2380_ = v___y_2395_;
v___y_2381_ = v___y_2391_;
v___y_2382_ = v___y_2396_;
v___y_2383_ = v___y_2393_;
v___y_2384_ = v___x_2400_;
goto v___jp_2377_;
}
else
{
v___y_2378_ = v___y_2392_;
v___y_2379_ = v___y_2394_;
v___y_2380_ = v___y_2395_;
v___y_2381_ = v___y_2391_;
v___y_2382_ = v___y_2396_;
v___y_2383_ = v___y_2393_;
v___y_2384_ = v___x_2398_;
goto v___jp_2377_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___boxed(lean_object* v_stx_2438_, lean_object* v_expType_x3f_2439_, lean_object* v_a_2440_, lean_object* v_a_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_, lean_object* v_a_2444_, lean_object* v_a_2445_, lean_object* v_a_2446_){
_start:
{
lean_object* v_res_2447_; 
v_res_2447_ = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError(v_stx_2438_, v_expType_x3f_2439_, v_a_2440_, v_a_2441_, v_a_2442_, v_a_2443_, v_a_2444_, v_a_2445_);
return v_res_2447_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0(lean_object* v_cls_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_){
_start:
{
lean_object* v___x_2456_; 
v___x_2456_ = l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___redArg(v_cls_2448_, v___y_2453_);
return v___x_2456_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___boxed(lean_object* v_cls_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_){
_start:
{
lean_object* v_res_2465_; 
v_res_2465_ = l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0(v_cls_2457_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_, v___y_2462_, v___y_2463_);
lean_dec(v___y_2463_);
lean_dec_ref(v___y_2462_);
lean_dec(v___y_2461_);
lean_dec_ref(v___y_2460_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
return v_res_2465_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__2(lean_object* v_00_u03b1_2466_, lean_object* v_x_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_){
_start:
{
lean_object* v___x_2470_; 
v___x_2470_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__2___redArg(v_x_2467_, v___y_2469_);
return v___x_2470_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__2___boxed(lean_object* v_00_u03b1_2471_, lean_object* v_x_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_){
_start:
{
lean_object* v_res_2475_; 
v_res_2475_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__2(v_00_u03b1_2471_, v_x_2472_, v___y_2473_, v___y_2474_);
lean_dec_ref(v___y_2473_);
lean_dec_ref(v_x_2472_);
return v_res_2475_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7(lean_object* v_00_u03b1_2476_, lean_object* v_ref_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_){
_start:
{
lean_object* v___x_2485_; 
v___x_2485_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___redArg(v_ref_2477_);
return v___x_2485_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7___boxed(lean_object* v_00_u03b1_2486_, lean_object* v_ref_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_){
_start:
{
lean_object* v_res_2495_; 
v_res_2495_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__7(v_00_u03b1_2486_, v_ref_2487_, v___y_2488_, v___y_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_);
lean_dec(v___y_2493_);
lean_dec_ref(v___y_2492_);
lean_dec(v___y_2491_);
lean_dec_ref(v___y_2490_);
lean_dec(v___y_2489_);
lean_dec_ref(v___y_2488_);
return v_res_2495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8(lean_object* v_00_u03b1_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_){
_start:
{
lean_object* v___x_2504_; 
v___x_2504_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8___redArg();
return v___x_2504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8___boxed(lean_object* v_00_u03b1_2505_, lean_object* v___y_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_){
_start:
{
lean_object* v_res_2513_; 
v_res_2513_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8(v_00_u03b1_2505_, v___y_2506_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_);
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec(v___y_2509_);
lean_dec_ref(v___y_2508_);
lean_dec(v___y_2507_);
lean_dec_ref(v___y_2506_);
return v_res_2513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0(lean_object* v_00_u03b1_2514_, lean_object* v_x_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_){
_start:
{
lean_object* v___x_2523_; 
v___x_2523_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___redArg(v_x_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
return v___x_2523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0___boxed(lean_object* v_00_u03b1_2524_, lean_object* v_x_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_){
_start:
{
lean_object* v_res_2533_; 
v_res_2533_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0(v_00_u03b1_2524_, v_x_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_);
lean_dec(v___y_2531_);
lean_dec(v___y_2529_);
lean_dec_ref(v___y_2528_);
lean_dec(v___y_2527_);
return v_res_2533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2_spec__11(lean_object* v_t_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_){
_start:
{
lean_object* v___x_2542_; 
v___x_2542_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2_spec__11___redArg(v_t_2534_, v___y_2540_);
return v___x_2542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2_spec__11___boxed(lean_object* v_t_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_){
_start:
{
lean_object* v_res_2551_; 
v_res_2551_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__2_spec__11(v_t_2543_, v___y_2544_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
lean_dec(v___y_2547_);
lean_dec_ref(v___y_2546_);
lean_dec(v___y_2545_);
lean_dec_ref(v___y_2544_);
return v_res_2551_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6(lean_object* v_00_u03b2_2552_, lean_object* v_m_2553_, lean_object* v_a_2554_){
_start:
{
lean_object* v___x_2555_; 
v___x_2555_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6___redArg(v_m_2553_, v_a_2554_);
return v___x_2555_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6___boxed(lean_object* v_00_u03b2_2556_, lean_object* v_m_2557_, lean_object* v_a_2558_){
_start:
{
lean_object* v_res_2559_; 
v_res_2559_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6(v_00_u03b2_2556_, v_m_2557_, v_a_2558_);
lean_dec(v_a_2558_);
lean_dec_ref(v_m_2557_);
return v_res_2559_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7(lean_object* v_00_u03b1_2560_, lean_object* v_msg_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_){
_start:
{
lean_object* v___x_2569_; 
v___x_2569_ = l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7___redArg(v_msg_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_);
return v___x_2569_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7___boxed(lean_object* v_00_u03b1_2570_, lean_object* v_msg_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_){
_start:
{
lean_object* v_res_2579_; 
v_res_2579_ = l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7(v_00_u03b1_2570_, v_msg_2571_, v___y_2572_, v___y_2573_, v___y_2574_, v___y_2575_, v___y_2576_, v___y_2577_);
lean_dec(v___y_2577_);
lean_dec_ref(v___y_2576_);
lean_dec(v___y_2575_);
lean_dec_ref(v___y_2574_);
lean_dec(v___y_2573_);
return v_res_2579_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1(lean_object* v_cls_2580_, lean_object* v_msg_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_){
_start:
{
lean_object* v___x_2589_; 
v___x_2589_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg(v_cls_2580_, v_msg_2581_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
return v___x_2589_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___boxed(lean_object* v_cls_2590_, lean_object* v_msg_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_){
_start:
{
lean_object* v_res_2599_; 
v_res_2599_ = l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1(v_cls_2590_, v_msg_2591_, v___y_2592_, v___y_2593_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_);
lean_dec(v___y_2597_);
lean_dec_ref(v___y_2596_);
lean_dec(v___y_2595_);
lean_dec_ref(v___y_2594_);
lean_dec(v___y_2593_);
lean_dec_ref(v___y_2592_);
return v_res_2599_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__4(lean_object* v_as_2600_, lean_object* v_as_x27_2601_, lean_object* v_b_2602_, lean_object* v_a_2603_, lean_object* v___y_2604_, lean_object* v___y_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_){
_start:
{
lean_object* v___x_2611_; 
v___x_2611_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__4___redArg(v_as_x27_2601_, v_b_2602_, v___y_2604_, v___y_2605_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_);
return v___x_2611_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__4___boxed(lean_object* v_as_2612_, lean_object* v_as_x27_2613_, lean_object* v_b_2614_, lean_object* v_a_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_){
_start:
{
lean_object* v_res_2623_; 
v_res_2623_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__4(v_as_2612_, v_as_x27_2613_, v_b_2614_, v_a_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_);
lean_dec(v___y_2621_);
lean_dec_ref(v___y_2620_);
lean_dec(v___y_2619_);
lean_dec_ref(v___y_2618_);
lean_dec(v___y_2617_);
lean_dec_ref(v___y_2616_);
lean_dec(v_as_2612_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__6(lean_object* v_00_u03b1_2624_, lean_object* v_ref_2625_, lean_object* v_msg_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_){
_start:
{
lean_object* v___x_2634_; 
v___x_2634_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__6___redArg(v_ref_2625_, v_msg_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_);
return v___x_2634_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__6___boxed(lean_object* v_00_u03b1_2635_, lean_object* v_ref_2636_, lean_object* v_msg_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_){
_start:
{
lean_object* v_res_2645_; 
v_res_2645_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__6(v_00_u03b1_2635_, v_ref_2636_, v_msg_2637_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_, v___y_2642_, v___y_2643_);
lean_dec(v___y_2643_);
lean_dec(v___y_2641_);
lean_dec_ref(v___y_2640_);
lean_dec(v___y_2639_);
lean_dec(v_ref_2636_);
return v_res_2645_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14(lean_object* v_ref_2646_, lean_object* v_msgData_2647_, uint8_t v_severity_2648_, uint8_t v_isSilent_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_){
_start:
{
lean_object* v___x_2657_; 
v___x_2657_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___redArg(v_ref_2646_, v_msgData_2647_, v_severity_2648_, v_isSilent_2649_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_);
return v___x_2657_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14___boxed(lean_object* v_ref_2658_, lean_object* v_msgData_2659_, lean_object* v_severity_2660_, lean_object* v_isSilent_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_){
_start:
{
uint8_t v_severity_boxed_2669_; uint8_t v_isSilent_boxed_2670_; lean_object* v_res_2671_; 
v_severity_boxed_2669_ = lean_unbox(v_severity_2660_);
v_isSilent_boxed_2670_ = lean_unbox(v_isSilent_2661_);
v_res_2671_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14(v_ref_2658_, v_msgData_2659_, v_severity_boxed_2669_, v_isSilent_boxed_2670_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_);
lean_dec(v___y_2667_);
lean_dec(v___y_2665_);
lean_dec_ref(v___y_2664_);
lean_dec(v___y_2663_);
lean_dec_ref(v___y_2662_);
lean_dec(v_ref_2658_);
return v_res_2671_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6_spec__17(lean_object* v_00_u03b2_2672_, lean_object* v_a_2673_, lean_object* v_x_2674_){
_start:
{
lean_object* v___x_2675_; 
v___x_2675_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6_spec__17___redArg(v_a_2673_, v_x_2674_);
return v___x_2675_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6_spec__17___boxed(lean_object* v_00_u03b2_2676_, lean_object* v_a_2677_, lean_object* v_x_2678_){
_start:
{
lean_object* v_res_2679_; 
v_res_2679_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6_spec__17(v_00_u03b2_2676_, v_a_2677_, v_x_2678_);
lean_dec(v_x_2678_);
lean_dec(v_a_2677_);
return v_res_2679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20(lean_object* v_msgData_2680_, lean_object* v_macroStack_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_){
_start:
{
lean_object* v___x_2689_; 
v___x_2689_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg(v_msgData_2680_, v_macroStack_2681_, v___y_2686_);
return v___x_2689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___boxed(lean_object* v_msgData_2690_, lean_object* v_macroStack_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_){
_start:
{
lean_object* v_res_2699_; 
v_res_2699_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20(v_msgData_2690_, v_macroStack_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_);
lean_dec(v___y_2697_);
lean_dec_ref(v___y_2696_);
lean_dec(v___y_2695_);
lean_dec_ref(v___y_2694_);
lean_dec(v___y_2693_);
lean_dec_ref(v___y_2692_);
return v_res_2699_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16(lean_object* v_00_u03b2_2700_, lean_object* v_x_2701_, lean_object* v_x_2702_){
_start:
{
uint8_t v___x_2703_; 
v___x_2703_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16___redArg(v_x_2701_, v_x_2702_);
return v___x_2703_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16___boxed(lean_object* v_00_u03b2_2704_, lean_object* v_x_2705_, lean_object* v_x_2706_){
_start:
{
uint8_t v_res_2707_; lean_object* v_r_2708_; 
v_res_2707_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16(v_00_u03b2_2704_, v_x_2705_, v_x_2706_);
lean_dec_ref(v_x_2706_);
v_r_2708_ = lean_box(v_res_2707_);
return v_r_2708_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24(lean_object* v_00_u03b2_2709_, lean_object* v_x_2710_, size_t v_x_2711_, lean_object* v_x_2712_){
_start:
{
uint8_t v___x_2713_; 
v___x_2713_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___redArg(v_x_2710_, v_x_2711_, v_x_2712_);
return v___x_2713_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24___boxed(lean_object* v_00_u03b2_2714_, lean_object* v_x_2715_, lean_object* v_x_2716_, lean_object* v_x_2717_){
_start:
{
size_t v_x_22362__boxed_2718_; uint8_t v_res_2719_; lean_object* v_r_2720_; 
v_x_22362__boxed_2718_ = lean_unbox_usize(v_x_2716_);
lean_dec(v_x_2716_);
v_res_2719_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24(v_00_u03b2_2714_, v_x_2715_, v_x_22362__boxed_2718_, v_x_2717_);
lean_dec_ref(v_x_2717_);
v_r_2720_ = lean_box(v_res_2719_);
return v_r_2720_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24_spec__27(lean_object* v_00_u03b2_2721_, lean_object* v_keys_2722_, lean_object* v_vals_2723_, lean_object* v_heq_2724_, lean_object* v_i_2725_, lean_object* v_k_2726_){
_start:
{
uint8_t v___x_2727_; 
v___x_2727_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24_spec__27___redArg(v_keys_2722_, v_i_2725_, v_k_2726_);
return v___x_2727_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24_spec__27___boxed(lean_object* v_00_u03b2_2728_, lean_object* v_keys_2729_, lean_object* v_vals_2730_, lean_object* v_heq_2731_, lean_object* v_i_2732_, lean_object* v_k_2733_){
_start:
{
uint8_t v_res_2734_; lean_object* v_r_2735_; 
v_res_2734_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16_spec__24_spec__27(v_00_u03b2_2728_, v_keys_2729_, v_vals_2730_, v_heq_2731_, v_i_2732_, v_k_2733_);
lean_dec_ref(v_k_2733_);
lean_dec_ref(v_vals_2730_);
lean_dec_ref(v_keys_2729_);
v_r_2735_ = lean_box(v_res_2734_);
return v_r_2735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1(){
_start:
{
lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; 
v___x_2744_ = l_Lean_Elab_Term_termElabAttribute;
v___x_2745_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__3));
v___x_2746_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__2));
v___x_2747_ = lean_alloc_closure((void*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___boxed), 9, 0);
v___x_2748_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2744_, v___x_2745_, v___x_2746_, v___x_2747_);
return v___x_2748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___boxed(lean_object* v_a_2749_){
_start:
{
lean_object* v_res_2750_; 
v_res_2750_ = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1();
return v_res_2750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__3(){
_start:
{
lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; 
v___x_2752_ = l_Lean_Elab_Term_termElabAttribute;
v___x_2753_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__5));
v___x_2754_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__2));
v___x_2755_ = lean_alloc_closure((void*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___boxed), 9, 0);
v___x_2756_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2752_, v___x_2753_, v___x_2754_, v___x_2755_);
return v___x_2756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__3___boxed(lean_object* v_a_2757_){
_start:
{
lean_object* v_res_2758_; 
v_res_2758_ = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__3();
return v_res_2758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__5(){
_start:
{
lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; 
v___x_2760_ = l_Lean_Elab_Term_termElabAttribute;
v___x_2761_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__7));
v___x_2762_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__2));
v___x_2763_ = lean_alloc_closure((void*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___boxed), 9, 0);
v___x_2764_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2760_, v___x_2761_, v___x_2762_, v___x_2763_);
return v___x_2764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__5___boxed(lean_object* v_a_2765_){
_start:
{
lean_object* v_res_2766_; 
v_res_2766_ = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__5();
return v_res_2766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__7(){
_start:
{
lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
v___x_2768_ = l_Lean_Elab_Term_termElabAttribute;
v___x_2769_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__9));
v___x_2770_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__2));
v___x_2771_ = lean_alloc_closure((void*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___boxed), 9, 0);
v___x_2772_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2768_, v___x_2769_, v___x_2770_, v___x_2771_);
return v___x_2772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__7___boxed(lean_object* v_a_2773_){
_start:
{
lean_object* v_res_2774_; 
v_res_2774_ = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__7();
return v_res_2774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__9(){
_start:
{
lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; 
v___x_2776_ = l_Lean_Elab_Term_termElabAttribute;
v___x_2777_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__11));
v___x_2778_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__2));
v___x_2779_ = lean_alloc_closure((void*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___boxed), 9, 0);
v___x_2780_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2776_, v___x_2777_, v___x_2778_, v___x_2779_);
return v___x_2780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__9___boxed(lean_object* v_a_2781_){
_start:
{
lean_object* v_res_2782_; 
v_res_2782_ = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__9();
return v_res_2782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__11(){
_start:
{
lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; 
v___x_2784_ = l_Lean_Elab_Term_termElabAttribute;
v___x_2785_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__13));
v___x_2786_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1___closed__2));
v___x_2787_ = lean_alloc_closure((void*)(l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___boxed), 9, 0);
v___x_2788_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2784_, v___x_2785_, v___x_2786_, v___x_2787_);
return v___x_2788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__11___boxed(lean_object* v_a_2789_){
_start:
{
lean_object* v_res_2790_; 
v_res_2790_ = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__11();
return v_res_2790_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortTerm___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; 
v___x_2791_ = lean_box(0);
v___x_2792_ = l_Lean_Elab_abortTermExceptionId;
v___x_2793_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2793_, 0, v___x_2792_);
lean_ctor_set(v___x_2793_, 1, v___x_2791_);
return v___x_2793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1_spec__0___redArg(){
_start:
{
lean_object* v___x_2795_; lean_object* v___x_2796_; 
v___x_2795_ = lean_obj_once(&l_Lean_Elab_throwAbortTerm___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1_spec__0___redArg___closed__0, &l_Lean_Elab_throwAbortTerm___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortTerm___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1_spec__0___redArg___closed__0);
v___x_2796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2796_, 0, v___x_2795_);
return v___x_2796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1_spec__0___redArg___boxed(lean_object* v___y_2797_){
_start:
{
lean_object* v_res_2798_; 
v_res_2798_ = l_Lean_Elab_throwAbortTerm___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1_spec__0___redArg();
return v_res_2798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1_spec__0(lean_object* v_00_u03b1_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_){
_start:
{
lean_object* v___x_2807_; 
v___x_2807_ = l_Lean_Elab_throwAbortTerm___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1_spec__0___redArg();
return v___x_2807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTerm___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1_spec__0___boxed(lean_object* v_00_u03b1_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_){
_start:
{
lean_object* v_res_2816_; 
v_res_2816_ = l_Lean_Elab_throwAbortTerm___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1_spec__0(v_00_u03b1_2808_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_);
lean_dec(v___y_2814_);
lean_dec_ref(v___y_2813_);
lean_dec(v___y_2812_);
lean_dec_ref(v___y_2811_);
lean_dec(v___y_2810_);
lean_dec_ref(v___y_2809_);
return v_res_2816_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1(lean_object* v_t_2817_, lean_object* v_tp_2818_, lean_object* v_a_2819_, lean_object* v_a_2820_, lean_object* v_a_2821_, lean_object* v_a_2822_, lean_object* v_a_2823_, lean_object* v_a_2824_){
_start:
{
lean_object* v___x_2826_; uint8_t v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; 
lean_inc_ref(v_tp_2818_);
v___x_2826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2826_, 0, v_tp_2818_);
v___x_2827_ = 1;
v___x_2828_ = lean_box(0);
lean_inc(v_a_2824_);
lean_inc_ref(v_a_2823_);
lean_inc(v_a_2822_);
lean_inc_ref(v_a_2821_);
v___x_2829_ = l_Lean_Elab_Term_elabTermEnsuringType(v_t_2817_, v___x_2826_, v___x_2827_, v___x_2827_, v___x_2828_, v_a_2819_, v_a_2820_, v_a_2821_, v_a_2822_, v_a_2823_, v_a_2824_);
if (lean_obj_tag(v___x_2829_) == 0)
{
lean_object* v_a_2830_; lean_object* v___y_2832_; lean_object* v___y_2833_; lean_object* v___y_2834_; lean_object* v___y_2835_; uint8_t v___x_2838_; 
v_a_2830_ = lean_ctor_get(v___x_2829_, 0);
lean_inc(v_a_2830_);
lean_dec_ref(v___x_2829_);
v___x_2838_ = l_Lean_Expr_hasSyntheticSorry(v_a_2830_);
if (v___x_2838_ == 0)
{
v___y_2832_ = v_a_2821_;
v___y_2833_ = v_a_2822_;
v___y_2834_ = v_a_2823_;
v___y_2835_ = v_a_2824_;
goto v___jp_2831_;
}
else
{
lean_object* v___x_2839_; 
v___x_2839_ = l_Lean_Elab_throwAbortTerm___at___00__private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1_spec__0___redArg();
if (lean_obj_tag(v___x_2839_) == 0)
{
lean_dec_ref(v___x_2839_);
v___y_2832_ = v_a_2821_;
v___y_2833_ = v_a_2822_;
v___y_2834_ = v_a_2823_;
v___y_2835_ = v_a_2824_;
goto v___jp_2831_;
}
else
{
lean_object* v_a_2840_; lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2847_; 
lean_dec(v_a_2830_);
lean_dec(v_a_2824_);
lean_dec_ref(v_a_2823_);
lean_dec(v_a_2822_);
lean_dec_ref(v_a_2821_);
lean_dec_ref(v_tp_2818_);
v_a_2840_ = lean_ctor_get(v___x_2839_, 0);
v_isSharedCheck_2847_ = !lean_is_exclusive(v___x_2839_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2842_ = v___x_2839_;
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
else
{
lean_inc(v_a_2840_);
lean_dec(v___x_2839_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2847_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v___x_2845_; 
if (v_isShared_2843_ == 0)
{
v___x_2845_ = v___x_2842_;
goto v_reusejp_2844_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2846_, 0, v_a_2840_);
v___x_2845_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2844_;
}
v_reusejp_2844_:
{
return v___x_2845_;
}
}
}
}
v___jp_2831_:
{
uint8_t v___x_2836_; lean_object* v___x_2837_; 
v___x_2836_ = 1;
v___x_2837_ = l_Lean_Meta_evalExpr___redArg(v_tp_2818_, v_a_2830_, v___x_2836_, v___x_2827_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_);
return v___x_2837_;
}
}
else
{
lean_object* v_a_2848_; lean_object* v___x_2850_; uint8_t v_isShared_2851_; uint8_t v_isSharedCheck_2855_; 
lean_dec(v_a_2824_);
lean_dec_ref(v_a_2823_);
lean_dec(v_a_2822_);
lean_dec_ref(v_a_2821_);
lean_dec_ref(v_tp_2818_);
v_a_2848_ = lean_ctor_get(v___x_2829_, 0);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2829_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2850_ = v___x_2829_;
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
else
{
lean_inc(v_a_2848_);
lean_dec(v___x_2829_);
v___x_2850_ = lean_box(0);
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
v_resetjp_2849_:
{
lean_object* v___x_2853_; 
if (v_isShared_2851_ == 0)
{
v___x_2853_ = v___x_2850_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v_a_2848_);
v___x_2853_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
return v___x_2853_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1___boxed(lean_object* v_t_2856_, lean_object* v_tp_2857_, lean_object* v_a_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_, lean_object* v_a_2863_, lean_object* v_a_2864_){
_start:
{
lean_object* v_res_2865_; 
v_res_2865_ = l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1(v_t_2856_, v_tp_2857_, v_a_2858_, v_a_2859_, v_a_2860_, v_a_2861_, v_a_2862_, v_a_2863_);
return v_res_2865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__0___redArg(){
_start:
{
lean_object* v___x_2867_; lean_object* v___x_2868_; 
v___x_2867_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__8___redArg___closed__0);
v___x_2868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2868_, 0, v___x_2867_);
return v___x_2868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__0___redArg___boxed(lean_object* v___y_2869_){
_start:
{
lean_object* v_res_2870_; 
v_res_2870_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__0___redArg();
return v_res_2870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__0(lean_object* v_00_u03b1_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_){
_start:
{
lean_object* v___x_2875_; 
v___x_2875_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__0___redArg();
return v___x_2875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__0___boxed(lean_object* v_00_u03b1_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_){
_start:
{
lean_object* v_res_2880_; 
v_res_2880_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__0(v_00_u03b1_2876_, v___y_2877_, v___y_2878_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
return v_res_2880_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__2___redArg(lean_object* v___y_2881_){
_start:
{
lean_object* v___x_2883_; lean_object* v_env_2884_; lean_object* v___x_2885_; lean_object* v_mainModule_2886_; lean_object* v___x_2887_; 
v___x_2883_ = lean_st_ref_get(v___y_2881_);
v_env_2884_ = lean_ctor_get(v___x_2883_, 0);
lean_inc_ref(v_env_2884_);
lean_dec(v___x_2883_);
v___x_2885_ = l_Lean_Environment_header(v_env_2884_);
lean_dec_ref(v_env_2884_);
v_mainModule_2886_ = lean_ctor_get(v___x_2885_, 0);
lean_inc(v_mainModule_2886_);
lean_dec_ref(v___x_2885_);
v___x_2887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2887_, 0, v_mainModule_2886_);
return v___x_2887_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__2___redArg___boxed(lean_object* v___y_2888_, lean_object* v___y_2889_){
_start:
{
lean_object* v_res_2890_; 
v_res_2890_ = l_Lean_getMainModule___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__2___redArg(v___y_2888_);
lean_dec(v___y_2888_);
return v_res_2890_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__2(lean_object* v___y_2891_, lean_object* v___y_2892_){
_start:
{
lean_object* v___x_2894_; 
v___x_2894_ = l_Lean_getMainModule___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__2___redArg(v___y_2892_);
return v___x_2894_;
}
}
LEAN_EXPORT lean_object* l_Lean_getMainModule___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__2___boxed(lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_){
_start:
{
lean_object* v_res_2898_; 
v_res_2898_ = l_Lean_getMainModule___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__2(v___y_2895_, v___y_2896_);
lean_dec(v___y_2896_);
lean_dec_ref(v___y_2895_);
return v_res_2898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lam__0(lean_object* v_t_2899_, lean_object* v___x_2900_, lean_object* v_x_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_){
_start:
{
lean_object* v___x_2909_; 
v___x_2909_ = l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_unsafe__1(v_t_2899_, v___x_2900_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_);
return v___x_2909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lam__0___boxed(lean_object* v_t_2910_, lean_object* v___x_2911_, lean_object* v_x_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_){
_start:
{
lean_object* v_res_2920_; 
v_res_2920_ = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lam__0(v_t_2910_, v___x_2911_, v_x_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_);
lean_dec_ref(v_x_2912_);
return v_res_2920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__7___redArg(lean_object* v_msgData_2921_, lean_object* v_macroStack_2922_, lean_object* v___y_2923_){
_start:
{
lean_object* v___x_2925_; lean_object* v_scopes_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v_opts_2929_; lean_object* v___x_2930_; uint8_t v___x_2931_; 
v___x_2925_ = lean_st_ref_get(v___y_2923_);
v_scopes_2926_ = lean_ctor_get(v___x_2925_, 2);
lean_inc(v_scopes_2926_);
lean_dec(v___x_2925_);
v___x_2927_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2928_ = l_List_head_x21___redArg(v___x_2927_, v_scopes_2926_);
lean_dec(v_scopes_2926_);
v_opts_2929_ = lean_ctor_get(v___x_2928_, 1);
lean_inc_ref(v_opts_2929_);
lean_dec(v___x_2928_);
v___x_2930_ = l_Lean_Elab_pp_macroStack;
v___x_2931_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__4_spec__14_spec__17(v_opts_2929_, v___x_2930_);
lean_dec_ref(v_opts_2929_);
if (v___x_2931_ == 0)
{
lean_object* v___x_2932_; 
lean_dec(v_macroStack_2922_);
v___x_2932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2932_, 0, v_msgData_2921_);
return v___x_2932_;
}
else
{
if (lean_obj_tag(v_macroStack_2922_) == 0)
{
lean_object* v___x_2933_; 
v___x_2933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2933_, 0, v_msgData_2921_);
return v___x_2933_;
}
else
{
lean_object* v_head_2934_; lean_object* v_after_2935_; lean_object* v___x_2937_; uint8_t v_isShared_2938_; uint8_t v_isSharedCheck_2950_; 
v_head_2934_ = lean_ctor_get(v_macroStack_2922_, 0);
lean_inc(v_head_2934_);
v_after_2935_ = lean_ctor_get(v_head_2934_, 1);
v_isSharedCheck_2950_ = !lean_is_exclusive(v_head_2934_);
if (v_isSharedCheck_2950_ == 0)
{
lean_object* v_unused_2951_; 
v_unused_2951_ = lean_ctor_get(v_head_2934_, 0);
lean_dec(v_unused_2951_);
v___x_2937_ = v_head_2934_;
v_isShared_2938_ = v_isSharedCheck_2950_;
goto v_resetjp_2936_;
}
else
{
lean_inc(v_after_2935_);
lean_dec(v_head_2934_);
v___x_2937_ = lean_box(0);
v_isShared_2938_ = v_isSharedCheck_2950_;
goto v_resetjp_2936_;
}
v_resetjp_2936_:
{
lean_object* v___x_2939_; lean_object* v___x_2941_; 
v___x_2939_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24___closed__0);
if (v_isShared_2938_ == 0)
{
lean_ctor_set_tag(v___x_2937_, 7);
lean_ctor_set(v___x_2937_, 1, v___x_2939_);
lean_ctor_set(v___x_2937_, 0, v_msgData_2921_);
v___x_2941_ = v___x_2937_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v_msgData_2921_);
lean_ctor_set(v_reuseFailAlloc_2949_, 1, v___x_2939_);
v___x_2941_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v_msgData_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; 
v___x_2942_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20___redArg___closed__2);
v___x_2943_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2943_, 0, v___x_2941_);
lean_ctor_set(v___x_2943_, 1, v___x_2942_);
v___x_2944_ = l_Lean_MessageData_ofSyntax(v_after_2935_);
v___x_2945_ = l_Lean_indentD(v___x_2944_);
v_msgData_2946_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_2946_, 0, v___x_2943_);
lean_ctor_set(v_msgData_2946_, 1, v___x_2945_);
v___x_2947_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__7_spec__20_spec__24(v_msgData_2946_, v_macroStack_2922_);
v___x_2948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2948_, 0, v___x_2947_);
return v___x_2948_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__7___redArg___boxed(lean_object* v_msgData_2952_, lean_object* v_macroStack_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_){
_start:
{
lean_object* v_res_2956_; 
v_res_2956_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__7___redArg(v_msgData_2952_, v_macroStack_2953_, v___y_2954_);
lean_dec(v___y_2954_);
return v_res_2956_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_2957_; 
v___x_2957_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2957_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_2958_; lean_object* v___x_2959_; 
v___x_2958_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__0);
v___x_2959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2959_, 0, v___x_2958_);
return v___x_2959_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; 
v___x_2960_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__1);
v___x_2961_ = lean_unsigned_to_nat(0u);
v___x_2962_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2961_);
lean_ctor_set(v___x_2962_, 1, v___x_2961_);
lean_ctor_set(v___x_2962_, 2, v___x_2961_);
lean_ctor_set(v___x_2962_, 3, v___x_2960_);
lean_ctor_set(v___x_2962_, 4, v___x_2960_);
lean_ctor_set(v___x_2962_, 5, v___x_2960_);
lean_ctor_set(v___x_2962_, 6, v___x_2960_);
lean_ctor_set(v___x_2962_, 7, v___x_2960_);
lean_ctor_set(v___x_2962_, 8, v___x_2960_);
return v___x_2962_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___x_2963_ = lean_unsigned_to_nat(32u);
v___x_2964_ = lean_mk_empty_array_with_capacity(v___x_2963_);
v___x_2965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2964_);
return v___x_2965_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__4(void){
_start:
{
size_t v___x_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v___x_2966_ = ((size_t)5ULL);
v___x_2967_ = lean_unsigned_to_nat(0u);
v___x_2968_ = lean_unsigned_to_nat(32u);
v___x_2969_ = lean_mk_empty_array_with_capacity(v___x_2968_);
v___x_2970_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__3);
v___x_2971_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2971_, 0, v___x_2970_);
lean_ctor_set(v___x_2971_, 1, v___x_2969_);
lean_ctor_set(v___x_2971_, 2, v___x_2967_);
lean_ctor_set(v___x_2971_, 3, v___x_2967_);
lean_ctor_set_usize(v___x_2971_, 4, v___x_2966_);
return v___x_2971_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; 
v___x_2972_ = lean_box(1);
v___x_2973_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__4);
v___x_2974_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__1);
v___x_2975_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2975_, 0, v___x_2974_);
lean_ctor_set(v___x_2975_, 1, v___x_2973_);
lean_ctor_set(v___x_2975_, 2, v___x_2972_);
return v___x_2975_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg(lean_object* v_msgData_2976_, lean_object* v___y_2977_){
_start:
{
lean_object* v___x_2979_; lean_object* v_env_2980_; lean_object* v___x_2981_; lean_object* v_scopes_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v_opts_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; 
v___x_2979_ = lean_st_ref_get(v___y_2977_);
v_env_2980_ = lean_ctor_get(v___x_2979_, 0);
lean_inc_ref(v_env_2980_);
lean_dec(v___x_2979_);
v___x_2981_ = lean_st_ref_get(v___y_2977_);
v_scopes_2982_ = lean_ctor_get(v___x_2981_, 2);
lean_inc(v_scopes_2982_);
lean_dec(v___x_2981_);
v___x_2983_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_2984_ = l_List_head_x21___redArg(v___x_2983_, v_scopes_2982_);
lean_dec(v_scopes_2982_);
v_opts_2985_ = lean_ctor_get(v___x_2984_, 1);
lean_inc_ref(v_opts_2985_);
lean_dec(v___x_2984_);
v___x_2986_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__2);
v___x_2987_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___closed__5);
v___x_2988_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2988_, 0, v_env_2980_);
lean_ctor_set(v___x_2988_, 1, v___x_2986_);
lean_ctor_set(v___x_2988_, 2, v___x_2987_);
lean_ctor_set(v___x_2988_, 3, v_opts_2985_);
v___x_2989_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2989_, 0, v___x_2988_);
lean_ctor_set(v___x_2989_, 1, v_msgData_2976_);
v___x_2990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2990_, 0, v___x_2989_);
return v___x_2990_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg___boxed(lean_object* v_msgData_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_){
_start:
{
lean_object* v_res_2994_; 
v_res_2994_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg(v_msgData_2991_, v___y_2992_);
lean_dec(v___y_2992_);
return v_res_2994_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4___redArg(lean_object* v_msg_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_){
_start:
{
lean_object* v___x_2999_; 
v___x_2999_ = l_Lean_Elab_Command_getRef___redArg(v___y_2996_);
if (lean_obj_tag(v___x_2999_) == 0)
{
lean_object* v_a_3000_; lean_object* v_macroStack_3001_; lean_object* v___x_3002_; lean_object* v_a_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v_a_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3014_; 
v_a_3000_ = lean_ctor_get(v___x_2999_, 0);
lean_inc(v_a_3000_);
lean_dec_ref(v___x_2999_);
v_macroStack_3001_ = lean_ctor_get(v___y_2996_, 4);
lean_inc(v_macroStack_3001_);
lean_dec_ref(v___y_2996_);
v___x_3002_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg(v_msg_2995_, v___y_2997_);
v_a_3003_ = lean_ctor_get(v___x_3002_, 0);
lean_inc(v_a_3003_);
lean_dec_ref(v___x_3002_);
lean_inc(v_macroStack_3001_);
v___x_3004_ = l_Lean_Elab_getBetterRef(v_a_3000_, v_macroStack_3001_);
lean_dec(v_a_3000_);
v___x_3005_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__7___redArg(v_a_3003_, v_macroStack_3001_, v___y_2997_);
v_a_3006_ = lean_ctor_get(v___x_3005_, 0);
v_isSharedCheck_3014_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3014_ == 0)
{
v___x_3008_ = v___x_3005_;
v_isShared_3009_ = v_isSharedCheck_3014_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_a_3006_);
lean_dec(v___x_3005_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3014_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v___x_3010_; lean_object* v___x_3012_; 
v___x_3010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3010_, 0, v___x_3004_);
lean_ctor_set(v___x_3010_, 1, v_a_3006_);
if (v_isShared_3009_ == 0)
{
lean_ctor_set_tag(v___x_3008_, 1);
lean_ctor_set(v___x_3008_, 0, v___x_3010_);
v___x_3012_ = v___x_3008_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v___x_3010_);
v___x_3012_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
return v___x_3012_;
}
}
}
else
{
lean_object* v_a_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3022_; 
lean_dec_ref(v___y_2996_);
lean_dec_ref(v_msg_2995_);
v_a_3015_ = lean_ctor_get(v___x_2999_, 0);
v_isSharedCheck_3022_ = !lean_is_exclusive(v___x_2999_);
if (v_isSharedCheck_3022_ == 0)
{
v___x_3017_ = v___x_2999_;
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_a_3015_);
lean_dec(v___x_2999_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v___x_3020_; 
if (v_isShared_3018_ == 0)
{
v___x_3020_ = v___x_3017_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v_a_3015_);
v___x_3020_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
return v___x_3020_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4___redArg___boxed(lean_object* v_msg_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_){
_start:
{
lean_object* v_res_3027_; 
v_res_3027_ = l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4___redArg(v_msg_3023_, v___y_3024_, v___y_3025_);
lean_dec(v___y_3025_);
return v_res_3027_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__3___redArg(lean_object* v_ref_3028_, lean_object* v_msg_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_){
_start:
{
lean_object* v___x_3033_; 
v___x_3033_ = l_Lean_Elab_Command_getRef___redArg(v___y_3030_);
if (lean_obj_tag(v___x_3033_) == 0)
{
lean_object* v_a_3034_; lean_object* v_fileName_3035_; lean_object* v_fileMap_3036_; lean_object* v_currRecDepth_3037_; lean_object* v_cmdPos_3038_; lean_object* v_macroStack_3039_; lean_object* v_quotContext_x3f_3040_; lean_object* v_currMacroScope_3041_; lean_object* v_snap_x3f_3042_; lean_object* v_cancelTk_x3f_3043_; uint8_t v_suppressElabErrors_3044_; lean_object* v___x_3046_; uint8_t v_isShared_3047_; uint8_t v_isSharedCheck_3053_; 
v_a_3034_ = lean_ctor_get(v___x_3033_, 0);
lean_inc(v_a_3034_);
lean_dec_ref(v___x_3033_);
v_fileName_3035_ = lean_ctor_get(v___y_3030_, 0);
v_fileMap_3036_ = lean_ctor_get(v___y_3030_, 1);
v_currRecDepth_3037_ = lean_ctor_get(v___y_3030_, 2);
v_cmdPos_3038_ = lean_ctor_get(v___y_3030_, 3);
v_macroStack_3039_ = lean_ctor_get(v___y_3030_, 4);
v_quotContext_x3f_3040_ = lean_ctor_get(v___y_3030_, 5);
v_currMacroScope_3041_ = lean_ctor_get(v___y_3030_, 6);
v_snap_x3f_3042_ = lean_ctor_get(v___y_3030_, 8);
v_cancelTk_x3f_3043_ = lean_ctor_get(v___y_3030_, 9);
v_suppressElabErrors_3044_ = lean_ctor_get_uint8(v___y_3030_, sizeof(void*)*10);
v_isSharedCheck_3053_ = !lean_is_exclusive(v___y_3030_);
if (v_isSharedCheck_3053_ == 0)
{
lean_object* v_unused_3054_; 
v_unused_3054_ = lean_ctor_get(v___y_3030_, 7);
lean_dec(v_unused_3054_);
v___x_3046_ = v___y_3030_;
v_isShared_3047_ = v_isSharedCheck_3053_;
goto v_resetjp_3045_;
}
else
{
lean_inc(v_cancelTk_x3f_3043_);
lean_inc(v_snap_x3f_3042_);
lean_inc(v_currMacroScope_3041_);
lean_inc(v_quotContext_x3f_3040_);
lean_inc(v_macroStack_3039_);
lean_inc(v_cmdPos_3038_);
lean_inc(v_currRecDepth_3037_);
lean_inc(v_fileMap_3036_);
lean_inc(v_fileName_3035_);
lean_dec(v___y_3030_);
v___x_3046_ = lean_box(0);
v_isShared_3047_ = v_isSharedCheck_3053_;
goto v_resetjp_3045_;
}
v_resetjp_3045_:
{
lean_object* v_ref_3048_; lean_object* v___x_3050_; 
v_ref_3048_ = l_Lean_replaceRef(v_ref_3028_, v_a_3034_);
lean_dec(v_a_3034_);
if (v_isShared_3047_ == 0)
{
lean_ctor_set(v___x_3046_, 7, v_ref_3048_);
v___x_3050_ = v___x_3046_;
goto v_reusejp_3049_;
}
else
{
lean_object* v_reuseFailAlloc_3052_; 
v_reuseFailAlloc_3052_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_3052_, 0, v_fileName_3035_);
lean_ctor_set(v_reuseFailAlloc_3052_, 1, v_fileMap_3036_);
lean_ctor_set(v_reuseFailAlloc_3052_, 2, v_currRecDepth_3037_);
lean_ctor_set(v_reuseFailAlloc_3052_, 3, v_cmdPos_3038_);
lean_ctor_set(v_reuseFailAlloc_3052_, 4, v_macroStack_3039_);
lean_ctor_set(v_reuseFailAlloc_3052_, 5, v_quotContext_x3f_3040_);
lean_ctor_set(v_reuseFailAlloc_3052_, 6, v_currMacroScope_3041_);
lean_ctor_set(v_reuseFailAlloc_3052_, 7, v_ref_3048_);
lean_ctor_set(v_reuseFailAlloc_3052_, 8, v_snap_x3f_3042_);
lean_ctor_set(v_reuseFailAlloc_3052_, 9, v_cancelTk_x3f_3043_);
lean_ctor_set_uint8(v_reuseFailAlloc_3052_, sizeof(void*)*10, v_suppressElabErrors_3044_);
v___x_3050_ = v_reuseFailAlloc_3052_;
goto v_reusejp_3049_;
}
v_reusejp_3049_:
{
lean_object* v___x_3051_; 
v___x_3051_ = l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4___redArg(v_msg_3029_, v___x_3050_, v___y_3031_);
return v___x_3051_;
}
}
}
else
{
lean_object* v_a_3055_; lean_object* v___x_3057_; uint8_t v_isShared_3058_; uint8_t v_isSharedCheck_3062_; 
lean_dec_ref(v___y_3030_);
lean_dec_ref(v_msg_3029_);
v_a_3055_ = lean_ctor_get(v___x_3033_, 0);
v_isSharedCheck_3062_ = !lean_is_exclusive(v___x_3033_);
if (v_isSharedCheck_3062_ == 0)
{
v___x_3057_ = v___x_3033_;
v_isShared_3058_ = v_isSharedCheck_3062_;
goto v_resetjp_3056_;
}
else
{
lean_inc(v_a_3055_);
lean_dec(v___x_3033_);
v___x_3057_ = lean_box(0);
v_isShared_3058_ = v_isSharedCheck_3062_;
goto v_resetjp_3056_;
}
v_resetjp_3056_:
{
lean_object* v___x_3060_; 
if (v_isShared_3058_ == 0)
{
v___x_3060_ = v___x_3057_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v_a_3055_);
v___x_3060_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
return v___x_3060_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__3___redArg___boxed(lean_object* v_ref_3063_, lean_object* v_msg_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_){
_start:
{
lean_object* v_res_3068_; 
v_res_3068_ = l_Lean_throwErrorAt___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__3___redArg(v_ref_3063_, v_msg_3064_, v___y_3065_, v___y_3066_);
lean_dec(v___y_3066_);
lean_dec(v_ref_3063_);
return v_res_3068_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1_spec__3___redArg(lean_object* v_cls_3069_, lean_object* v___y_3070_){
_start:
{
lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v_scopes_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v_opts_3078_; uint8_t v_hasTrace_3079_; 
v___x_3072_ = l_Lean_inheritedTraceOptions;
v___x_3073_ = lean_st_ref_get(v___x_3072_);
v___x_3074_ = lean_st_ref_get(v___y_3070_);
v_scopes_3075_ = lean_ctor_get(v___x_3074_, 2);
lean_inc(v_scopes_3075_);
lean_dec(v___x_3074_);
v___x_3076_ = l_Lean_Elab_Command_instInhabitedScope_default;
v___x_3077_ = l_List_head_x21___redArg(v___x_3076_, v_scopes_3075_);
lean_dec(v_scopes_3075_);
v_opts_3078_ = lean_ctor_get(v___x_3077_, 1);
lean_inc_ref(v_opts_3078_);
lean_dec(v___x_3077_);
v_hasTrace_3079_ = lean_ctor_get_uint8(v_opts_3078_, sizeof(void*)*1);
if (v_hasTrace_3079_ == 0)
{
lean_object* v___x_3080_; lean_object* v___x_3081_; 
lean_dec_ref(v_opts_3078_);
lean_dec(v___x_3073_);
lean_dec(v_cls_3069_);
v___x_3080_ = lean_box(v_hasTrace_3079_);
v___x_3081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3081_, 0, v___x_3080_);
return v___x_3081_;
}
else
{
lean_object* v___x_3082_; lean_object* v___x_3083_; uint8_t v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; 
v___x_3082_ = ((lean_object*)(l_Lean_isTracingEnabledFor___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__0___redArg___closed__1));
v___x_3083_ = l_Lean_Name_append(v___x_3082_, v_cls_3069_);
v___x_3084_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v___x_3073_, v_opts_3078_, v___x_3083_);
lean_dec(v___x_3083_);
lean_dec_ref(v_opts_3078_);
lean_dec(v___x_3073_);
v___x_3085_ = lean_box(v___x_3084_);
v___x_3086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3086_, 0, v___x_3085_);
return v___x_3086_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_cls_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_){
_start:
{
lean_object* v_res_3090_; 
v_res_3090_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1_spec__3___redArg(v_cls_3087_, v___y_3088_);
lean_dec(v___y_3088_);
return v_res_3090_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1_spec__4(lean_object* v_cls_3091_, lean_object* v_msg_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_){
_start:
{
lean_object* v___x_3096_; 
v___x_3096_ = l_Lean_Elab_Command_getRef___redArg(v___y_3093_);
if (lean_obj_tag(v___x_3096_) == 0)
{
lean_object* v_a_3097_; lean_object* v___x_3098_; lean_object* v_a_3099_; lean_object* v___x_3101_; uint8_t v_isShared_3102_; uint8_t v_isSharedCheck_3145_; 
v_a_3097_ = lean_ctor_get(v___x_3096_, 0);
lean_inc(v_a_3097_);
lean_dec_ref(v___x_3096_);
v___x_3098_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg(v_msg_3092_, v___y_3094_);
v_a_3099_ = lean_ctor_get(v___x_3098_, 0);
v_isSharedCheck_3145_ = !lean_is_exclusive(v___x_3098_);
if (v_isSharedCheck_3145_ == 0)
{
v___x_3101_ = v___x_3098_;
v_isShared_3102_ = v_isSharedCheck_3145_;
goto v_resetjp_3100_;
}
else
{
lean_inc(v_a_3099_);
lean_dec(v___x_3098_);
v___x_3101_ = lean_box(0);
v_isShared_3102_ = v_isSharedCheck_3145_;
goto v_resetjp_3100_;
}
v_resetjp_3100_:
{
lean_object* v___x_3103_; lean_object* v_traceState_3104_; lean_object* v_env_3105_; lean_object* v_messages_3106_; lean_object* v_scopes_3107_; lean_object* v_usedQuotCtxts_3108_; lean_object* v_nextMacroScope_3109_; lean_object* v_maxRecDepth_3110_; lean_object* v_ngen_3111_; lean_object* v_auxDeclNGen_3112_; lean_object* v_infoState_3113_; lean_object* v_snapshotTasks_3114_; lean_object* v___x_3116_; uint8_t v_isShared_3117_; uint8_t v_isSharedCheck_3144_; 
v___x_3103_ = lean_st_ref_take(v___y_3094_);
v_traceState_3104_ = lean_ctor_get(v___x_3103_, 9);
v_env_3105_ = lean_ctor_get(v___x_3103_, 0);
v_messages_3106_ = lean_ctor_get(v___x_3103_, 1);
v_scopes_3107_ = lean_ctor_get(v___x_3103_, 2);
v_usedQuotCtxts_3108_ = lean_ctor_get(v___x_3103_, 3);
v_nextMacroScope_3109_ = lean_ctor_get(v___x_3103_, 4);
v_maxRecDepth_3110_ = lean_ctor_get(v___x_3103_, 5);
v_ngen_3111_ = lean_ctor_get(v___x_3103_, 6);
v_auxDeclNGen_3112_ = lean_ctor_get(v___x_3103_, 7);
v_infoState_3113_ = lean_ctor_get(v___x_3103_, 8);
v_snapshotTasks_3114_ = lean_ctor_get(v___x_3103_, 10);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3103_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3116_ = v___x_3103_;
v_isShared_3117_ = v_isSharedCheck_3144_;
goto v_resetjp_3115_;
}
else
{
lean_inc(v_snapshotTasks_3114_);
lean_inc(v_traceState_3104_);
lean_inc(v_infoState_3113_);
lean_inc(v_auxDeclNGen_3112_);
lean_inc(v_ngen_3111_);
lean_inc(v_maxRecDepth_3110_);
lean_inc(v_nextMacroScope_3109_);
lean_inc(v_usedQuotCtxts_3108_);
lean_inc(v_scopes_3107_);
lean_inc(v_messages_3106_);
lean_inc(v_env_3105_);
lean_dec(v___x_3103_);
v___x_3116_ = lean_box(0);
v_isShared_3117_ = v_isSharedCheck_3144_;
goto v_resetjp_3115_;
}
v_resetjp_3115_:
{
uint64_t v_tid_3118_; lean_object* v_traces_3119_; lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3143_; 
v_tid_3118_ = lean_ctor_get_uint64(v_traceState_3104_, sizeof(void*)*1);
v_traces_3119_ = lean_ctor_get(v_traceState_3104_, 0);
v_isSharedCheck_3143_ = !lean_is_exclusive(v_traceState_3104_);
if (v_isSharedCheck_3143_ == 0)
{
v___x_3121_ = v_traceState_3104_;
v_isShared_3122_ = v_isSharedCheck_3143_;
goto v_resetjp_3120_;
}
else
{
lean_inc(v_traces_3119_);
lean_dec(v_traceState_3104_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3143_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3123_; double v___x_3124_; uint8_t v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3133_; 
v___x_3123_ = lean_box(0);
v___x_3124_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__0);
v___x_3125_ = 0;
v___x_3126_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__1));
v___x_3127_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3127_, 0, v_cls_3091_);
lean_ctor_set(v___x_3127_, 1, v___x_3123_);
lean_ctor_set(v___x_3127_, 2, v___x_3126_);
lean_ctor_set_float(v___x_3127_, sizeof(void*)*3, v___x_3124_);
lean_ctor_set_float(v___x_3127_, sizeof(void*)*3 + 8, v___x_3124_);
lean_ctor_set_uint8(v___x_3127_, sizeof(void*)*3 + 16, v___x_3125_);
v___x_3128_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__2));
v___x_3129_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3129_, 0, v___x_3127_);
lean_ctor_set(v___x_3129_, 1, v_a_3099_);
lean_ctor_set(v___x_3129_, 2, v___x_3128_);
v___x_3130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3130_, 0, v_a_3097_);
lean_ctor_set(v___x_3130_, 1, v___x_3129_);
v___x_3131_ = l_Lean_PersistentArray_push___redArg(v_traces_3119_, v___x_3130_);
if (v_isShared_3122_ == 0)
{
lean_ctor_set(v___x_3121_, 0, v___x_3131_);
v___x_3133_ = v___x_3121_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3142_; 
v_reuseFailAlloc_3142_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3142_, 0, v___x_3131_);
lean_ctor_set_uint64(v_reuseFailAlloc_3142_, sizeof(void*)*1, v_tid_3118_);
v___x_3133_ = v_reuseFailAlloc_3142_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
lean_object* v___x_3135_; 
if (v_isShared_3117_ == 0)
{
lean_ctor_set(v___x_3116_, 9, v___x_3133_);
v___x_3135_ = v___x_3116_;
goto v_reusejp_3134_;
}
else
{
lean_object* v_reuseFailAlloc_3141_; 
v_reuseFailAlloc_3141_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_3141_, 0, v_env_3105_);
lean_ctor_set(v_reuseFailAlloc_3141_, 1, v_messages_3106_);
lean_ctor_set(v_reuseFailAlloc_3141_, 2, v_scopes_3107_);
lean_ctor_set(v_reuseFailAlloc_3141_, 3, v_usedQuotCtxts_3108_);
lean_ctor_set(v_reuseFailAlloc_3141_, 4, v_nextMacroScope_3109_);
lean_ctor_set(v_reuseFailAlloc_3141_, 5, v_maxRecDepth_3110_);
lean_ctor_set(v_reuseFailAlloc_3141_, 6, v_ngen_3111_);
lean_ctor_set(v_reuseFailAlloc_3141_, 7, v_auxDeclNGen_3112_);
lean_ctor_set(v_reuseFailAlloc_3141_, 8, v_infoState_3113_);
lean_ctor_set(v_reuseFailAlloc_3141_, 9, v___x_3133_);
lean_ctor_set(v_reuseFailAlloc_3141_, 10, v_snapshotTasks_3114_);
v___x_3135_ = v_reuseFailAlloc_3141_;
goto v_reusejp_3134_;
}
v_reusejp_3134_:
{
lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3139_; 
v___x_3136_ = lean_st_ref_set(v___y_3094_, v___x_3135_);
v___x_3137_ = lean_box(0);
if (v_isShared_3102_ == 0)
{
lean_ctor_set(v___x_3101_, 0, v___x_3137_);
v___x_3139_ = v___x_3101_;
goto v_reusejp_3138_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v___x_3137_);
v___x_3139_ = v_reuseFailAlloc_3140_;
goto v_reusejp_3138_;
}
v_reusejp_3138_:
{
return v___x_3139_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3146_; lean_object* v___x_3148_; uint8_t v_isShared_3149_; uint8_t v_isSharedCheck_3153_; 
lean_dec_ref(v_msg_3092_);
lean_dec(v_cls_3091_);
v_a_3146_ = lean_ctor_get(v___x_3096_, 0);
v_isSharedCheck_3153_ = !lean_is_exclusive(v___x_3096_);
if (v_isSharedCheck_3153_ == 0)
{
v___x_3148_ = v___x_3096_;
v_isShared_3149_ = v_isSharedCheck_3153_;
goto v_resetjp_3147_;
}
else
{
lean_inc(v_a_3146_);
lean_dec(v___x_3096_);
v___x_3148_ = lean_box(0);
v_isShared_3149_ = v_isSharedCheck_3153_;
goto v_resetjp_3147_;
}
v_resetjp_3147_:
{
lean_object* v___x_3151_; 
if (v_isShared_3149_ == 0)
{
v___x_3151_ = v___x_3148_;
goto v_reusejp_3150_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v_a_3146_);
v___x_3151_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3150_;
}
v_reusejp_3150_:
{
return v___x_3151_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1_spec__4___boxed(lean_object* v_cls_3154_, lean_object* v_msg_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_){
_start:
{
lean_object* v_res_3159_; 
v_res_3159_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1_spec__4(v_cls_3154_, v_msg_3155_, v___y_3156_, v___y_3157_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3156_);
return v_res_3159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1(lean_object* v_mod_3160_, uint8_t v_isMeta_3161_, lean_object* v_hint_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_){
_start:
{
lean_object* v___x_3166_; lean_object* v_env_3167_; uint8_t v_isExporting_3168_; lean_object* v___x_3169_; lean_object* v_env_3170_; lean_object* v___x_3171_; lean_object* v_entry_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___y_3177_; lean_object* v___x_3203_; uint8_t v___x_3204_; 
v___x_3166_ = lean_st_ref_get(v___y_3164_);
v_env_3167_ = lean_ctor_get(v___x_3166_, 0);
lean_inc_ref(v_env_3167_);
lean_dec(v___x_3166_);
v_isExporting_3168_ = lean_ctor_get_uint8(v_env_3167_, sizeof(void*)*8);
lean_dec_ref(v_env_3167_);
v___x_3169_ = lean_st_ref_get(v___y_3164_);
v_env_3170_ = lean_ctor_get(v___x_3169_, 0);
lean_inc_ref(v_env_3170_);
lean_dec(v___x_3169_);
v___x_3171_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__2);
lean_inc(v_mod_3160_);
v_entry_3172_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_3172_, 0, v_mod_3160_);
lean_ctor_set_uint8(v_entry_3172_, sizeof(void*)*1, v_isExporting_3168_);
lean_ctor_set_uint8(v_entry_3172_, sizeof(void*)*1 + 1, v_isMeta_3161_);
v___x_3173_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_3174_ = lean_box(1);
v___x_3175_ = lean_box(0);
v___x_3203_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3171_, v___x_3173_, v_env_3170_, v___x_3174_, v___x_3175_);
v___x_3204_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5_spec__16___redArg(v___x_3203_, v_entry_3172_);
if (v___x_3204_ == 0)
{
lean_object* v_cls_3205_; lean_object* v___x_3206_; lean_object* v_a_3207_; lean_object* v___y_3209_; lean_object* v___y_3210_; lean_object* v___y_3214_; lean_object* v___y_3215_; uint8_t v___x_3227_; 
v_cls_3205_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__8));
v___x_3206_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1_spec__3___redArg(v_cls_3205_, v___y_3164_);
v_a_3207_ = lean_ctor_get(v___x_3206_, 0);
lean_inc(v_a_3207_);
lean_dec_ref(v___x_3206_);
v___x_3227_ = lean_unbox(v_a_3207_);
lean_dec(v_a_3207_);
if (v___x_3227_ == 0)
{
lean_dec(v_hint_3162_);
lean_dec(v_mod_3160_);
v___y_3177_ = v___y_3164_;
goto v___jp_3176_;
}
else
{
lean_object* v___x_3228_; lean_object* v___y_3230_; 
v___x_3228_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__15, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__15_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__15);
if (v_isExporting_3168_ == 0)
{
lean_object* v___x_3237_; 
v___x_3237_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__20));
v___y_3230_ = v___x_3237_;
goto v___jp_3229_;
}
else
{
lean_object* v___x_3238_; 
v___x_3238_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__21));
v___y_3230_ = v___x_3238_;
goto v___jp_3229_;
}
v___jp_3229_:
{
lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; 
v___x_3231_ = l_Lean_stringToMessageData(v___y_3230_);
v___x_3232_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3232_, 0, v___x_3228_);
lean_ctor_set(v___x_3232_, 1, v___x_3231_);
v___x_3233_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__17, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__17_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__17);
v___x_3234_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3234_, 0, v___x_3232_);
lean_ctor_set(v___x_3234_, 1, v___x_3233_);
if (v_isMeta_3161_ == 0)
{
lean_object* v___x_3235_; 
v___x_3235_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__18));
v___y_3214_ = v___x_3234_;
v___y_3215_ = v___x_3235_;
goto v___jp_3213_;
}
else
{
lean_object* v___x_3236_; 
v___x_3236_ = ((lean_object*)(l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__19));
v___y_3214_ = v___x_3234_;
v___y_3215_ = v___x_3236_;
goto v___jp_3213_;
}
}
}
v___jp_3208_:
{
lean_object* v___x_3211_; lean_object* v___x_3212_; 
v___x_3211_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3211_, 0, v___y_3209_);
lean_ctor_set(v___x_3211_, 1, v___y_3210_);
v___x_3212_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1_spec__4(v_cls_3205_, v___x_3211_, v___y_3163_, v___y_3164_);
if (lean_obj_tag(v___x_3212_) == 0)
{
lean_dec_ref(v___x_3212_);
v___y_3177_ = v___y_3164_;
goto v___jp_3176_;
}
else
{
lean_dec_ref(v_entry_3172_);
return v___x_3212_;
}
}
v___jp_3213_:
{
lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; uint8_t v___x_3222_; 
v___x_3216_ = l_Lean_stringToMessageData(v___y_3215_);
v___x_3217_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3217_, 0, v___y_3214_);
lean_ctor_set(v___x_3217_, 1, v___x_3216_);
v___x_3218_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__10);
v___x_3219_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3219_, 0, v___x_3217_);
lean_ctor_set(v___x_3219_, 1, v___x_3218_);
v___x_3220_ = l_Lean_MessageData_ofName(v_mod_3160_);
v___x_3221_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3221_, 0, v___x_3219_);
lean_ctor_set(v___x_3221_, 1, v___x_3220_);
v___x_3222_ = l_Lean_Name_isAnonymous(v_hint_3162_);
if (v___x_3222_ == 0)
{
lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; 
v___x_3223_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__12);
v___x_3224_ = l_Lean_MessageData_ofName(v_hint_3162_);
v___x_3225_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3225_, 0, v___x_3223_);
lean_ctor_set(v___x_3225_, 1, v___x_3224_);
v___y_3209_ = v___x_3221_;
v___y_3210_ = v___x_3225_;
goto v___jp_3208_;
}
else
{
lean_object* v___x_3226_; 
lean_dec(v_hint_3162_);
v___x_3226_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3_spec__5___closed__13);
v___y_3209_ = v___x_3221_;
v___y_3210_ = v___x_3226_;
goto v___jp_3208_;
}
}
}
else
{
lean_object* v___x_3239_; lean_object* v___x_3240_; 
lean_dec_ref(v_entry_3172_);
lean_dec(v_hint_3162_);
lean_dec(v_mod_3160_);
v___x_3239_ = lean_box(0);
v___x_3240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3240_, 0, v___x_3239_);
return v___x_3240_;
}
v___jp_3176_:
{
lean_object* v___x_3178_; lean_object* v_toEnvExtension_3179_; lean_object* v_env_3180_; lean_object* v_messages_3181_; lean_object* v_scopes_3182_; lean_object* v_usedQuotCtxts_3183_; lean_object* v_nextMacroScope_3184_; lean_object* v_maxRecDepth_3185_; lean_object* v_ngen_3186_; lean_object* v_auxDeclNGen_3187_; lean_object* v_infoState_3188_; lean_object* v_traceState_3189_; lean_object* v_snapshotTasks_3190_; lean_object* v___x_3192_; uint8_t v_isShared_3193_; uint8_t v_isSharedCheck_3202_; 
v___x_3178_ = lean_st_ref_take(v___y_3177_);
v_toEnvExtension_3179_ = lean_ctor_get(v___x_3173_, 0);
lean_inc_ref(v_toEnvExtension_3179_);
v_env_3180_ = lean_ctor_get(v___x_3178_, 0);
v_messages_3181_ = lean_ctor_get(v___x_3178_, 1);
v_scopes_3182_ = lean_ctor_get(v___x_3178_, 2);
v_usedQuotCtxts_3183_ = lean_ctor_get(v___x_3178_, 3);
v_nextMacroScope_3184_ = lean_ctor_get(v___x_3178_, 4);
v_maxRecDepth_3185_ = lean_ctor_get(v___x_3178_, 5);
v_ngen_3186_ = lean_ctor_get(v___x_3178_, 6);
v_auxDeclNGen_3187_ = lean_ctor_get(v___x_3178_, 7);
v_infoState_3188_ = lean_ctor_get(v___x_3178_, 8);
v_traceState_3189_ = lean_ctor_get(v___x_3178_, 9);
v_snapshotTasks_3190_ = lean_ctor_get(v___x_3178_, 10);
v_isSharedCheck_3202_ = !lean_is_exclusive(v___x_3178_);
if (v_isSharedCheck_3202_ == 0)
{
v___x_3192_ = v___x_3178_;
v_isShared_3193_ = v_isSharedCheck_3202_;
goto v_resetjp_3191_;
}
else
{
lean_inc(v_snapshotTasks_3190_);
lean_inc(v_traceState_3189_);
lean_inc(v_infoState_3188_);
lean_inc(v_auxDeclNGen_3187_);
lean_inc(v_ngen_3186_);
lean_inc(v_maxRecDepth_3185_);
lean_inc(v_nextMacroScope_3184_);
lean_inc(v_usedQuotCtxts_3183_);
lean_inc(v_scopes_3182_);
lean_inc(v_messages_3181_);
lean_inc(v_env_3180_);
lean_dec(v___x_3178_);
v___x_3192_ = lean_box(0);
v_isShared_3193_ = v_isSharedCheck_3202_;
goto v_resetjp_3191_;
}
v_resetjp_3191_:
{
lean_object* v_asyncMode_3194_; lean_object* v___x_3195_; lean_object* v___x_3197_; 
v_asyncMode_3194_ = lean_ctor_get(v_toEnvExtension_3179_, 2);
lean_inc(v_asyncMode_3194_);
lean_dec_ref(v_toEnvExtension_3179_);
v___x_3195_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_3173_, v_env_3180_, v_entry_3172_, v_asyncMode_3194_, v___x_3175_);
lean_dec(v_asyncMode_3194_);
if (v_isShared_3193_ == 0)
{
lean_ctor_set(v___x_3192_, 0, v___x_3195_);
v___x_3197_ = v___x_3192_;
goto v_reusejp_3196_;
}
else
{
lean_object* v_reuseFailAlloc_3201_; 
v_reuseFailAlloc_3201_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_3201_, 0, v___x_3195_);
lean_ctor_set(v_reuseFailAlloc_3201_, 1, v_messages_3181_);
lean_ctor_set(v_reuseFailAlloc_3201_, 2, v_scopes_3182_);
lean_ctor_set(v_reuseFailAlloc_3201_, 3, v_usedQuotCtxts_3183_);
lean_ctor_set(v_reuseFailAlloc_3201_, 4, v_nextMacroScope_3184_);
lean_ctor_set(v_reuseFailAlloc_3201_, 5, v_maxRecDepth_3185_);
lean_ctor_set(v_reuseFailAlloc_3201_, 6, v_ngen_3186_);
lean_ctor_set(v_reuseFailAlloc_3201_, 7, v_auxDeclNGen_3187_);
lean_ctor_set(v_reuseFailAlloc_3201_, 8, v_infoState_3188_);
lean_ctor_set(v_reuseFailAlloc_3201_, 9, v_traceState_3189_);
lean_ctor_set(v_reuseFailAlloc_3201_, 10, v_snapshotTasks_3190_);
v___x_3197_ = v_reuseFailAlloc_3201_;
goto v_reusejp_3196_;
}
v_reusejp_3196_:
{
lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; 
v___x_3198_ = lean_st_ref_set(v___y_3177_, v___x_3197_);
v___x_3199_ = lean_box(0);
v___x_3200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3200_, 0, v___x_3199_);
return v___x_3200_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1___boxed(lean_object* v_mod_3241_, lean_object* v_isMeta_3242_, lean_object* v_hint_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_){
_start:
{
uint8_t v_isMeta_boxed_3247_; lean_object* v_res_3248_; 
v_isMeta_boxed_3247_ = lean_unbox(v_isMeta_3242_);
v_res_3248_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1(v_mod_3241_, v_isMeta_boxed_3247_, v_hint_3243_, v___y_3244_, v___y_3245_);
lean_dec(v___y_3245_);
lean_dec_ref(v___y_3244_);
return v_res_3248_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__2(lean_object* v___x_3249_, lean_object* v_declName_3250_, lean_object* v_as_3251_, size_t v_sz_3252_, size_t v_i_3253_, lean_object* v_b_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_){
_start:
{
uint8_t v___x_3258_; 
v___x_3258_ = lean_usize_dec_lt(v_i_3253_, v_sz_3252_);
if (v___x_3258_ == 0)
{
lean_object* v___x_3259_; 
lean_dec(v_declName_3250_);
v___x_3259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3259_, 0, v_b_3254_);
return v___x_3259_;
}
else
{
lean_object* v___x_3260_; lean_object* v_modules_3261_; lean_object* v___x_3262_; lean_object* v_a_3263_; lean_object* v___x_3264_; lean_object* v_toImport_3265_; lean_object* v_module_3266_; uint8_t v___x_3267_; lean_object* v___x_3268_; 
v___x_3260_ = l_Lean_Environment_header(v___x_3249_);
v_modules_3261_ = lean_ctor_get(v___x_3260_, 3);
lean_inc_ref(v_modules_3261_);
lean_dec_ref(v___x_3260_);
v___x_3262_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_3263_ = lean_array_uget_borrowed(v_as_3251_, v_i_3253_);
v___x_3264_ = lean_array_get(v___x_3262_, v_modules_3261_, v_a_3263_);
lean_dec_ref(v_modules_3261_);
v_toImport_3265_ = lean_ctor_get(v___x_3264_, 0);
lean_inc_ref(v_toImport_3265_);
lean_dec(v___x_3264_);
v_module_3266_ = lean_ctor_get(v_toImport_3265_, 0);
lean_inc(v_module_3266_);
lean_dec_ref(v_toImport_3265_);
v___x_3267_ = 0;
lean_inc(v_declName_3250_);
v___x_3268_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1(v_module_3266_, v___x_3267_, v_declName_3250_, v___y_3255_, v___y_3256_);
if (lean_obj_tag(v___x_3268_) == 0)
{
lean_object* v___x_3269_; size_t v___x_3270_; size_t v___x_3271_; 
lean_dec_ref(v___x_3268_);
v___x_3269_ = lean_box(0);
v___x_3270_ = ((size_t)1ULL);
v___x_3271_ = lean_usize_add(v_i_3253_, v___x_3270_);
v_i_3253_ = v___x_3271_;
v_b_3254_ = v___x_3269_;
goto _start;
}
else
{
lean_dec(v_declName_3250_);
return v___x_3268_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__2___boxed(lean_object* v___x_3273_, lean_object* v_declName_3274_, lean_object* v_as_3275_, lean_object* v_sz_3276_, lean_object* v_i_3277_, lean_object* v_b_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_){
_start:
{
size_t v_sz_boxed_3282_; size_t v_i_boxed_3283_; lean_object* v_res_3284_; 
v_sz_boxed_3282_ = lean_unbox_usize(v_sz_3276_);
lean_dec(v_sz_3276_);
v_i_boxed_3283_ = lean_unbox_usize(v_i_3277_);
lean_dec(v_i_3277_);
v_res_3284_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__2(v___x_3273_, v_declName_3274_, v_as_3275_, v_sz_boxed_3282_, v_i_boxed_3283_, v_b_3278_, v___y_3279_, v___y_3280_);
lean_dec(v___y_3280_);
lean_dec_ref(v___y_3279_);
lean_dec_ref(v_as_3275_);
lean_dec_ref(v___x_3273_);
return v_res_3284_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1(lean_object* v_declName_3285_, uint8_t v_isMeta_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_){
_start:
{
lean_object* v___x_3290_; lean_object* v_env_3294_; lean_object* v___y_3296_; lean_object* v___x_3309_; 
v___x_3290_ = lean_st_ref_get(v___y_3288_);
v_env_3294_ = lean_ctor_get(v___x_3290_, 0);
lean_inc_ref(v_env_3294_);
lean_dec(v___x_3290_);
v___x_3309_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3294_, v_declName_3285_);
if (lean_obj_tag(v___x_3309_) == 0)
{
lean_dec_ref(v_env_3294_);
lean_dec(v_declName_3285_);
goto v___jp_3291_;
}
else
{
lean_object* v_val_3310_; lean_object* v___x_3311_; lean_object* v_modules_3312_; lean_object* v___x_3313_; uint8_t v___x_3314_; 
v_val_3310_ = lean_ctor_get(v___x_3309_, 0);
lean_inc(v_val_3310_);
lean_dec_ref(v___x_3309_);
v___x_3311_ = l_Lean_Environment_header(v_env_3294_);
v_modules_3312_ = lean_ctor_get(v___x_3311_, 3);
lean_inc_ref(v_modules_3312_);
lean_dec_ref(v___x_3311_);
v___x_3313_ = lean_array_get_size(v_modules_3312_);
v___x_3314_ = lean_nat_dec_lt(v_val_3310_, v___x_3313_);
if (v___x_3314_ == 0)
{
lean_dec_ref(v_modules_3312_);
lean_dec(v_val_3310_);
lean_dec_ref(v_env_3294_);
lean_dec(v_declName_3285_);
goto v___jp_3291_;
}
else
{
lean_object* v___x_3315_; lean_object* v_env_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; uint8_t v___y_3320_; 
v___x_3315_ = lean_st_ref_get(v___y_3288_);
v_env_3316_ = lean_ctor_get(v___x_3315_, 0);
lean_inc_ref(v_env_3316_);
lean_dec(v___x_3315_);
v___x_3317_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__2, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__2_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__2);
v___x_3318_ = lean_array_fget(v_modules_3312_, v_val_3310_);
lean_dec(v_val_3310_);
lean_dec_ref(v_modules_3312_);
if (v_isMeta_3286_ == 0)
{
lean_dec_ref(v_env_3316_);
v___y_3320_ = v_isMeta_3286_;
goto v___jp_3319_;
}
else
{
uint8_t v___x_3331_; 
lean_inc(v_declName_3285_);
v___x_3331_ = l_Lean_isMarkedMeta(v_env_3316_, v_declName_3285_);
if (v___x_3331_ == 0)
{
v___y_3320_ = v_isMeta_3286_;
goto v___jp_3319_;
}
else
{
uint8_t v___x_3332_; 
v___x_3332_ = 0;
v___y_3320_ = v___x_3332_;
goto v___jp_3319_;
}
}
v___jp_3319_:
{
lean_object* v_toImport_3321_; lean_object* v_module_3322_; lean_object* v___x_3323_; 
v_toImport_3321_ = lean_ctor_get(v___x_3318_, 0);
lean_inc_ref(v_toImport_3321_);
lean_dec(v___x_3318_);
v_module_3322_ = lean_ctor_get(v_toImport_3321_, 0);
lean_inc(v_module_3322_);
lean_dec_ref(v_toImport_3321_);
lean_inc(v_declName_3285_);
v___x_3323_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1(v_module_3322_, v___y_3320_, v_declName_3285_, v___y_3287_, v___y_3288_);
if (lean_obj_tag(v___x_3323_) == 0)
{
lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; 
lean_dec_ref(v___x_3323_);
v___x_3324_ = l_Lean_indirectModUseExt;
v___x_3325_ = lean_box(1);
v___x_3326_ = lean_box(0);
lean_inc_ref(v_env_3294_);
v___x_3327_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3317_, v___x_3324_, v_env_3294_, v___x_3325_, v___x_3326_);
v___x_3328_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__6___redArg(v___x_3327_, v_declName_3285_);
lean_dec(v___x_3327_);
if (lean_obj_tag(v___x_3328_) == 0)
{
lean_object* v___x_3329_; 
v___x_3329_ = ((lean_object*)(l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__3___closed__3));
v___y_3296_ = v___x_3329_;
goto v___jp_3295_;
}
else
{
lean_object* v_val_3330_; 
v_val_3330_ = lean_ctor_get(v___x_3328_, 0);
lean_inc(v_val_3330_);
lean_dec_ref(v___x_3328_);
v___y_3296_ = v_val_3330_;
goto v___jp_3295_;
}
}
else
{
lean_dec_ref(v_env_3294_);
lean_dec(v_declName_3285_);
return v___x_3323_;
}
}
}
}
v___jp_3291_:
{
lean_object* v___x_3292_; lean_object* v___x_3293_; 
v___x_3292_ = lean_box(0);
v___x_3293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3292_);
return v___x_3293_;
}
v___jp_3295_:
{
lean_object* v___x_3297_; size_t v_sz_3298_; size_t v___x_3299_; lean_object* v___x_3300_; 
v___x_3297_ = lean_box(0);
v_sz_3298_ = lean_array_size(v___y_3296_);
v___x_3299_ = ((size_t)0ULL);
v___x_3300_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__2(v_env_3294_, v_declName_3285_, v___y_3296_, v_sz_3298_, v___x_3299_, v___x_3297_, v___y_3287_, v___y_3288_);
lean_dec_ref(v___y_3296_);
lean_dec_ref(v_env_3294_);
if (lean_obj_tag(v___x_3300_) == 0)
{
lean_object* v___x_3302_; uint8_t v_isShared_3303_; uint8_t v_isSharedCheck_3307_; 
v_isSharedCheck_3307_ = !lean_is_exclusive(v___x_3300_);
if (v_isSharedCheck_3307_ == 0)
{
lean_object* v_unused_3308_; 
v_unused_3308_ = lean_ctor_get(v___x_3300_, 0);
lean_dec(v_unused_3308_);
v___x_3302_ = v___x_3300_;
v_isShared_3303_ = v_isSharedCheck_3307_;
goto v_resetjp_3301_;
}
else
{
lean_dec(v___x_3300_);
v___x_3302_ = lean_box(0);
v_isShared_3303_ = v_isSharedCheck_3307_;
goto v_resetjp_3301_;
}
v_resetjp_3301_:
{
lean_object* v___x_3305_; 
if (v_isShared_3303_ == 0)
{
lean_ctor_set(v___x_3302_, 0, v___x_3297_);
v___x_3305_ = v___x_3302_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v___x_3297_);
v___x_3305_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
return v___x_3305_;
}
}
}
else
{
return v___x_3300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1___boxed(lean_object* v_declName_3333_, lean_object* v_isMeta_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_){
_start:
{
uint8_t v_isMeta_boxed_3338_; lean_object* v_res_3339_; 
v_isMeta_boxed_3338_ = lean_unbox(v_isMeta_3334_);
v_res_3339_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1(v_declName_3333_, v_isMeta_boxed_3338_, v___y_3335_, v___y_3336_);
lean_dec(v___y_3336_);
lean_dec_ref(v___y_3335_);
return v_res_3339_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__4(void){
_start:
{
lean_object* v___x_3348_; lean_object* v___x_3349_; 
v___x_3348_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__3));
v___x_3349_ = l_Lean_stringToMessageData(v___x_3348_);
return v___x_3349_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__5(void){
_start:
{
lean_object* v___x_3350_; lean_object* v___x_3351_; 
v___x_3350_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__28));
v___x_3351_ = l_Lean_stringToMessageData(v___x_3350_);
return v___x_3351_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__7(void){
_start:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; 
v___x_3353_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__6));
v___x_3354_ = l_Lean_stringToMessageData(v___x_3353_);
return v___x_3354_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__9(void){
_start:
{
lean_object* v___x_3356_; lean_object* v___x_3357_; 
v___x_3356_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__8));
v___x_3357_ = l_Lean_stringToMessageData(v___x_3356_);
return v___x_3357_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__11(void){
_start:
{
lean_object* v___x_3359_; lean_object* v___x_3360_; 
v___x_3359_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__10));
v___x_3360_ = l_Lean_stringToMessageData(v___x_3359_);
return v___x_3360_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__12(void){
_start:
{
lean_object* v___x_3361_; lean_object* v___x_3362_; 
v___x_3361_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__11, &l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__11_once, _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__11);
v___x_3362_ = l_Lean_MessageData_note(v___x_3361_);
return v___x_3362_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__14(void){
_start:
{
lean_object* v___x_3364_; lean_object* v___x_3365_; 
v___x_3364_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__13));
v___x_3365_ = l_Lean_stringToMessageData(v___x_3364_);
return v___x_3365_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__17(void){
_start:
{
lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; 
v___x_3371_ = lean_box(0);
v___x_3372_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__16));
v___x_3373_ = l_Lean_mkConst(v___x_3372_, v___x_3371_);
return v___x_3373_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__19(void){
_start:
{
lean_object* v___x_3375_; lean_object* v___x_3376_; 
v___x_3375_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__18));
v___x_3376_ = l_Lean_stringToMessageData(v___x_3375_);
return v___x_3376_;
}
}
static lean_object* _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__21(void){
_start:
{
lean_object* v___x_3378_; lean_object* v___x_3379_; 
v___x_3378_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__20));
v___x_3379_ = l_Lean_stringToMessageData(v___x_3378_);
return v___x_3379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation(lean_object* v_x_3380_, lean_object* v_a_3381_, lean_object* v_a_3382_){
_start:
{
lean_object* v___y_3385_; lean_object* v___y_3386_; lean_object* v___y_3387_; lean_object* v___y_3388_; lean_object* v___y_3389_; lean_object* v___y_3390_; lean_object* v___y_3391_; lean_object* v___x_3433_; uint8_t v___x_3434_; 
v___x_3433_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__2));
lean_inc(v_x_3380_);
v___x_3434_ = l_Lean_Syntax_isOfKind(v_x_3380_, v___x_3433_);
if (v___x_3434_ == 0)
{
lean_object* v___x_3435_; 
lean_dec_ref(v_a_3381_);
lean_dec(v_x_3380_);
v___x_3435_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__0___redArg();
return v___x_3435_;
}
else
{
lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; uint8_t v___x_3439_; 
v___x_3436_ = lean_unsigned_to_nat(0u);
v___x_3437_ = l_Lean_Syntax_getArg(v_x_3380_, v___x_3436_);
v___x_3438_ = lean_unsigned_to_nat(1u);
v___x_3439_ = l_Lean_Syntax_matchesNull(v___x_3437_, v___x_3438_);
if (v___x_3439_ == 0)
{
lean_object* v___x_3440_; 
lean_dec_ref(v_a_3381_);
lean_dec(v_x_3380_);
v___x_3440_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__0___redArg();
return v___x_3440_;
}
else
{
lean_object* v___x_3441_; lean_object* v_id_3442_; lean_object* v___y_3444_; lean_object* v___y_3445_; uint8_t v___y_3446_; lean_object* v___y_3447_; lean_object* v___y_3448_; lean_object* v___y_3449_; lean_object* v___y_3450_; lean_object* v___y_3454_; lean_object* v___y_3455_; lean_object* v___y_3456_; lean_object* v___y_3457_; lean_object* v___y_3463_; lean_object* v___y_3464_; lean_object* v___y_3465_; lean_object* v___y_3466_; lean_object* v___x_3482_; uint8_t v___x_3483_; lean_object* v___y_3485_; lean_object* v___y_3486_; lean_object* v___y_3487_; lean_object* v___y_3488_; lean_object* v___y_3500_; lean_object* v___y_3501_; lean_object* v___y_3502_; lean_object* v___y_3503_; 
v___x_3441_ = lean_unsigned_to_nat(2u);
v_id_3442_ = l_Lean_Syntax_getArg(v_x_3380_, v___x_3441_);
v___x_3482_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_expandNamedErrorMacro___closed__58));
lean_inc(v_id_3442_);
v___x_3483_ = l_Lean_Syntax_isOfKind(v_id_3442_, v___x_3482_);
if (v___x_3483_ == 0)
{
lean_object* v___x_3511_; 
lean_dec(v_id_3442_);
lean_dec_ref(v_a_3381_);
lean_dec(v_x_3380_);
v___x_3511_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__0___redArg();
return v___x_3511_;
}
else
{
lean_object* v___x_3512_; 
v___x_3512_ = l_Lean_Elab_Command_getRef___redArg(v_a_3381_);
if (lean_obj_tag(v___x_3512_) == 0)
{
lean_object* v_a_3513_; lean_object* v___x_3514_; lean_object* v_fileName_3515_; lean_object* v_fileMap_3516_; lean_object* v_currRecDepth_3517_; lean_object* v_cmdPos_3518_; lean_object* v_macroStack_3519_; lean_object* v_quotContext_x3f_3520_; lean_object* v_currMacroScope_3521_; lean_object* v_snap_x3f_3522_; lean_object* v_cancelTk_x3f_3523_; uint8_t v_suppressElabErrors_3524_; lean_object* v___x_3526_; uint8_t v_isShared_3527_; uint8_t v_isSharedCheck_3565_; 
v_a_3513_ = lean_ctor_get(v___x_3512_, 0);
lean_inc(v_a_3513_);
lean_dec_ref(v___x_3512_);
v___x_3514_ = lean_st_ref_get(v_a_3382_);
v_fileName_3515_ = lean_ctor_get(v_a_3381_, 0);
v_fileMap_3516_ = lean_ctor_get(v_a_3381_, 1);
v_currRecDepth_3517_ = lean_ctor_get(v_a_3381_, 2);
v_cmdPos_3518_ = lean_ctor_get(v_a_3381_, 3);
v_macroStack_3519_ = lean_ctor_get(v_a_3381_, 4);
v_quotContext_x3f_3520_ = lean_ctor_get(v_a_3381_, 5);
v_currMacroScope_3521_ = lean_ctor_get(v_a_3381_, 6);
v_snap_x3f_3522_ = lean_ctor_get(v_a_3381_, 8);
v_cancelTk_x3f_3523_ = lean_ctor_get(v_a_3381_, 9);
v_suppressElabErrors_3524_ = lean_ctor_get_uint8(v_a_3381_, sizeof(void*)*10);
v_isSharedCheck_3565_ = !lean_is_exclusive(v_a_3381_);
if (v_isSharedCheck_3565_ == 0)
{
lean_object* v_unused_3566_; 
v_unused_3566_ = lean_ctor_get(v_a_3381_, 7);
lean_dec(v_unused_3566_);
v___x_3526_ = v_a_3381_;
v_isShared_3527_ = v_isSharedCheck_3565_;
goto v_resetjp_3525_;
}
else
{
lean_inc(v_cancelTk_x3f_3523_);
lean_inc(v_snap_x3f_3522_);
lean_inc(v_currMacroScope_3521_);
lean_inc(v_quotContext_x3f_3520_);
lean_inc(v_macroStack_3519_);
lean_inc(v_cmdPos_3518_);
lean_inc(v_currRecDepth_3517_);
lean_inc(v_fileMap_3516_);
lean_inc(v_fileName_3515_);
lean_dec(v_a_3381_);
v___x_3526_ = lean_box(0);
v_isShared_3527_ = v_isSharedCheck_3565_;
goto v_resetjp_3525_;
}
v_resetjp_3525_:
{
lean_object* v_env_3528_; lean_object* v_cmd_3529_; lean_object* v___x_3530_; lean_object* v_t_3531_; lean_object* v___y_3533_; lean_object* v___y_3534_; lean_object* v_ref_3557_; lean_object* v___x_3559_; 
v_env_3528_ = lean_ctor_get(v___x_3514_, 0);
lean_inc_ref(v_env_3528_);
lean_dec(v___x_3514_);
v_cmd_3529_ = l_Lean_Syntax_getArg(v_x_3380_, v___x_3438_);
v___x_3530_ = lean_unsigned_to_nat(3u);
v_t_3531_ = l_Lean_Syntax_getArg(v_x_3380_, v___x_3530_);
lean_dec(v_x_3380_);
v_ref_3557_ = l_Lean_replaceRef(v_cmd_3529_, v_a_3513_);
lean_dec(v_a_3513_);
lean_dec(v_cmd_3529_);
if (v_isShared_3527_ == 0)
{
lean_ctor_set(v___x_3526_, 7, v_ref_3557_);
v___x_3559_ = v___x_3526_;
goto v_reusejp_3558_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(0, 10, 1);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v_fileName_3515_);
lean_ctor_set(v_reuseFailAlloc_3564_, 1, v_fileMap_3516_);
lean_ctor_set(v_reuseFailAlloc_3564_, 2, v_currRecDepth_3517_);
lean_ctor_set(v_reuseFailAlloc_3564_, 3, v_cmdPos_3518_);
lean_ctor_set(v_reuseFailAlloc_3564_, 4, v_macroStack_3519_);
lean_ctor_set(v_reuseFailAlloc_3564_, 5, v_quotContext_x3f_3520_);
lean_ctor_set(v_reuseFailAlloc_3564_, 6, v_currMacroScope_3521_);
lean_ctor_set(v_reuseFailAlloc_3564_, 7, v_ref_3557_);
lean_ctor_set(v_reuseFailAlloc_3564_, 8, v_snap_x3f_3522_);
lean_ctor_set(v_reuseFailAlloc_3564_, 9, v_cancelTk_x3f_3523_);
lean_ctor_set_uint8(v_reuseFailAlloc_3564_, sizeof(void*)*10, v_suppressElabErrors_3524_);
v___x_3559_ = v_reuseFailAlloc_3564_;
goto v_reusejp_3558_;
}
v___jp_3532_:
{
lean_object* v___x_3535_; lean_object* v___x_3536_; 
v___x_3535_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__16));
v___x_3536_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1(v___x_3535_, v___x_3483_, v___y_3533_, v___y_3534_);
if (lean_obj_tag(v___x_3536_) == 0)
{
lean_object* v___x_3537_; lean_object* v___f_3538_; lean_object* v___x_3539_; 
lean_dec_ref(v___x_3536_);
v___x_3537_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__17, &l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__17_once, _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__17);
v___f_3538_ = lean_alloc_closure((void*)(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___lam__0___boxed), 10, 2);
lean_closure_set(v___f_3538_, 0, v_t_3531_);
lean_closure_set(v___f_3538_, 1, v___x_3537_);
lean_inc_ref(v___y_3533_);
v___x_3539_ = l_Lean_Elab_Command_runTermElabM___redArg(v___f_3538_, v___y_3533_, v___y_3534_);
if (lean_obj_tag(v___x_3539_) == 0)
{
lean_object* v_a_3540_; lean_object* v___x_3541_; uint8_t v___x_3542_; 
v_a_3540_ = lean_ctor_get(v___x_3539_, 0);
lean_inc(v_a_3540_);
lean_dec_ref(v___x_3539_);
v___x_3541_ = l_Lean_TSyntax_getId(v_id_3442_);
v___x_3542_ = l_Lean_Name_isAnonymous(v___x_3541_);
if (v___x_3542_ == 0)
{
v___y_3500_ = v___x_3541_;
v___y_3501_ = v_a_3540_;
v___y_3502_ = v___y_3533_;
v___y_3503_ = v___y_3534_;
goto v___jp_3499_;
}
else
{
lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; 
lean_dec(v___x_3541_);
lean_dec(v_a_3540_);
v___x_3543_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__19, &l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__19_once, _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__19);
lean_inc(v_id_3442_);
v___x_3544_ = l_Lean_MessageData_ofSyntax(v_id_3442_);
v___x_3545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3545_, 0, v___x_3543_);
lean_ctor_set(v___x_3545_, 1, v___x_3544_);
v___x_3546_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__5, &l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__5_once, _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__5);
v___x_3547_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3547_, 0, v___x_3545_);
lean_ctor_set(v___x_3547_, 1, v___x_3546_);
v___x_3548_ = l_Lean_throwErrorAt___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__3___redArg(v_id_3442_, v___x_3547_, v___y_3533_, v___y_3534_);
lean_dec(v_id_3442_);
return v___x_3548_;
}
}
else
{
lean_object* v_a_3549_; lean_object* v___x_3551_; uint8_t v_isShared_3552_; uint8_t v_isSharedCheck_3556_; 
lean_dec_ref(v___y_3533_);
lean_dec(v_id_3442_);
v_a_3549_ = lean_ctor_get(v___x_3539_, 0);
v_isSharedCheck_3556_ = !lean_is_exclusive(v___x_3539_);
if (v_isSharedCheck_3556_ == 0)
{
v___x_3551_ = v___x_3539_;
v_isShared_3552_ = v_isSharedCheck_3556_;
goto v_resetjp_3550_;
}
else
{
lean_inc(v_a_3549_);
lean_dec(v___x_3539_);
v___x_3551_ = lean_box(0);
v_isShared_3552_ = v_isSharedCheck_3556_;
goto v_resetjp_3550_;
}
v_resetjp_3550_:
{
lean_object* v___x_3554_; 
if (v_isShared_3552_ == 0)
{
v___x_3554_ = v___x_3551_;
goto v_reusejp_3553_;
}
else
{
lean_object* v_reuseFailAlloc_3555_; 
v_reuseFailAlloc_3555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3555_, 0, v_a_3549_);
v___x_3554_ = v_reuseFailAlloc_3555_;
goto v_reusejp_3553_;
}
v_reusejp_3553_:
{
return v___x_3554_;
}
}
}
}
else
{
lean_dec_ref(v___y_3533_);
lean_dec(v_t_3531_);
lean_dec(v_id_3442_);
return v___x_3536_;
}
}
v_reusejp_3558_:
{
lean_object* v___x_3560_; uint8_t v___x_3561_; 
v___x_3560_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__16));
v___x_3561_ = l_Lean_Environment_contains(v_env_3528_, v___x_3560_, v___x_3483_);
if (v___x_3561_ == 0)
{
lean_object* v___x_3562_; lean_object* v___x_3563_; 
lean_dec(v_t_3531_);
lean_dec(v_id_3442_);
v___x_3562_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__21, &l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__21_once, _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__21);
v___x_3563_ = l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4___redArg(v___x_3562_, v___x_3559_, v_a_3382_);
return v___x_3563_;
}
else
{
v___y_3533_ = v___x_3559_;
v___y_3534_ = v_a_3382_;
goto v___jp_3532_;
}
}
}
}
else
{
lean_object* v_a_3567_; lean_object* v___x_3569_; uint8_t v_isShared_3570_; uint8_t v_isSharedCheck_3574_; 
lean_dec(v_id_3442_);
lean_dec_ref(v_a_3381_);
lean_dec(v_x_3380_);
v_a_3567_ = lean_ctor_get(v___x_3512_, 0);
v_isSharedCheck_3574_ = !lean_is_exclusive(v___x_3512_);
if (v_isSharedCheck_3574_ == 0)
{
v___x_3569_ = v___x_3512_;
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
else
{
lean_inc(v_a_3567_);
lean_dec(v___x_3512_);
v___x_3569_ = lean_box(0);
v_isShared_3570_ = v_isSharedCheck_3574_;
goto v_resetjp_3568_;
}
v_resetjp_3568_:
{
lean_object* v___x_3572_; 
if (v_isShared_3570_ == 0)
{
v___x_3572_ = v___x_3569_;
goto v_reusejp_3571_;
}
else
{
lean_object* v_reuseFailAlloc_3573_; 
v_reuseFailAlloc_3573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3573_, 0, v_a_3567_);
v___x_3572_ = v_reuseFailAlloc_3573_;
goto v_reusejp_3571_;
}
v_reusejp_3571_:
{
return v___x_3572_;
}
}
}
}
v___jp_3443_:
{
lean_object* v___x_3451_; 
v___x_3451_ = l_Lean_Syntax_getTailPos_x3f(v_id_3442_, v___y_3446_);
lean_dec(v_id_3442_);
if (lean_obj_tag(v___x_3451_) == 0)
{
lean_inc(v___y_3450_);
v___y_3385_ = v___y_3444_;
v___y_3386_ = v___y_3445_;
v___y_3387_ = v___y_3450_;
v___y_3388_ = v___y_3447_;
v___y_3389_ = v___y_3448_;
v___y_3390_ = v___y_3449_;
v___y_3391_ = v___y_3450_;
goto v___jp_3384_;
}
else
{
lean_object* v_val_3452_; 
v_val_3452_ = lean_ctor_get(v___x_3451_, 0);
lean_inc(v_val_3452_);
lean_dec_ref(v___x_3451_);
v___y_3385_ = v___y_3444_;
v___y_3386_ = v___y_3445_;
v___y_3387_ = v___y_3450_;
v___y_3388_ = v___y_3447_;
v___y_3389_ = v___y_3448_;
v___y_3390_ = v___y_3449_;
v___y_3391_ = v_val_3452_;
goto v___jp_3384_;
}
}
v___jp_3453_:
{
lean_object* v_fileMap_3458_; uint8_t v___x_3459_; lean_object* v___x_3460_; 
v_fileMap_3458_ = lean_ctor_get(v___y_3456_, 1);
lean_inc_ref(v_fileMap_3458_);
v___x_3459_ = 0;
v___x_3460_ = l_Lean_Syntax_getPos_x3f(v_id_3442_, v___x_3459_);
if (lean_obj_tag(v___x_3460_) == 0)
{
v___y_3444_ = v___y_3454_;
v___y_3445_ = v___y_3455_;
v___y_3446_ = v___x_3459_;
v___y_3447_ = v___y_3457_;
v___y_3448_ = v___y_3456_;
v___y_3449_ = v_fileMap_3458_;
v___y_3450_ = v___x_3436_;
goto v___jp_3443_;
}
else
{
lean_object* v_val_3461_; 
v_val_3461_ = lean_ctor_get(v___x_3460_, 0);
lean_inc(v_val_3461_);
lean_dec_ref(v___x_3460_);
v___y_3444_ = v___y_3454_;
v___y_3445_ = v___y_3455_;
v___y_3446_ = v___x_3459_;
v___y_3447_ = v___y_3457_;
v___y_3448_ = v___y_3456_;
v___y_3449_ = v_fileMap_3458_;
v___y_3450_ = v_val_3461_;
goto v___jp_3443_;
}
}
v___jp_3462_:
{
lean_object* v___x_3467_; lean_object* v_env_3468_; lean_object* v___x_3469_; lean_object* v_toEnvExtension_3470_; lean_object* v_asyncMode_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; uint8_t v___x_3475_; 
v___x_3467_ = lean_st_ref_get(v___y_3466_);
v_env_3468_ = lean_ctor_get(v___x_3467_, 0);
lean_inc_ref(v_env_3468_);
lean_dec(v___x_3467_);
v___x_3469_ = l_Lean_errorExplanationExt;
v_toEnvExtension_3470_ = lean_ctor_get(v___x_3469_, 0);
lean_inc_ref(v_toEnvExtension_3470_);
v_asyncMode_3471_ = lean_ctor_get(v_toEnvExtension_3470_, 2);
lean_inc(v_asyncMode_3471_);
lean_dec_ref(v_toEnvExtension_3470_);
v___x_3472_ = lean_box(1);
v___x_3473_ = lean_box(0);
v___x_3474_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_3472_, v___x_3469_, v_env_3468_, v_asyncMode_3471_, v___x_3473_);
lean_dec(v_asyncMode_3471_);
v___x_3475_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v___y_3463_, v___x_3474_);
lean_dec(v___x_3474_);
if (v___x_3475_ == 0)
{
v___y_3454_ = v___y_3463_;
v___y_3455_ = v___y_3464_;
v___y_3456_ = v___y_3465_;
v___y_3457_ = v___y_3466_;
goto v___jp_3453_;
}
else
{
lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; 
lean_dec_ref(v___y_3464_);
v___x_3476_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__4, &l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__4_once, _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__4);
v___x_3477_ = l_Lean_MessageData_ofName(v___y_3463_);
v___x_3478_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3478_, 0, v___x_3476_);
lean_ctor_set(v___x_3478_, 1, v___x_3477_);
v___x_3479_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__5, &l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__5_once, _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__5);
v___x_3480_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3480_, 0, v___x_3478_);
lean_ctor_set(v___x_3480_, 1, v___x_3479_);
v___x_3481_ = l_Lean_throwErrorAt___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__3___redArg(v_id_3442_, v___x_3480_, v___y_3465_, v___y_3466_);
lean_dec(v_id_3442_);
return v___x_3481_;
}
}
v___jp_3484_:
{
lean_object* v___x_3489_; uint8_t v___x_3490_; 
v___x_3489_ = l_Lean_Name_getNumParts(v___y_3485_);
v___x_3490_ = lean_nat_dec_eq(v___x_3489_, v___x_3441_);
lean_dec(v___x_3489_);
if (v___x_3490_ == 0)
{
if (v___x_3483_ == 0)
{
v___y_3463_ = v___y_3485_;
v___y_3464_ = v___y_3486_;
v___y_3465_ = v___y_3487_;
v___y_3466_ = v___y_3488_;
goto v___jp_3462_;
}
else
{
lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; 
lean_dec_ref(v___y_3486_);
v___x_3491_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__7, &l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__7_once, _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__7);
v___x_3492_ = l_Lean_MessageData_ofName(v___y_3485_);
v___x_3493_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3493_, 0, v___x_3491_);
lean_ctor_set(v___x_3493_, 1, v___x_3492_);
v___x_3494_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__9, &l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__9_once, _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__9);
v___x_3495_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3495_, 0, v___x_3493_);
lean_ctor_set(v___x_3495_, 1, v___x_3494_);
v___x_3496_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__12, &l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__12_once, _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__12);
v___x_3497_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3497_, 0, v___x_3495_);
lean_ctor_set(v___x_3497_, 1, v___x_3496_);
v___x_3498_ = l_Lean_throwErrorAt___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__3___redArg(v_id_3442_, v___x_3497_, v___y_3487_, v___y_3488_);
lean_dec(v_id_3442_);
return v___x_3498_;
}
}
else
{
v___y_3463_ = v___y_3485_;
v___y_3464_ = v___y_3486_;
v___y_3465_ = v___y_3487_;
v___y_3466_ = v___y_3488_;
goto v___jp_3462_;
}
}
v___jp_3499_:
{
uint8_t v___x_3504_; 
v___x_3504_ = l_Lean_Name_hasMacroScopes(v___y_3500_);
if (v___x_3504_ == 0)
{
v___y_3485_ = v___y_3500_;
v___y_3486_ = v___y_3501_;
v___y_3487_ = v___y_3502_;
v___y_3488_ = v___y_3503_;
goto v___jp_3484_;
}
else
{
lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; 
lean_dec_ref(v___y_3501_);
lean_dec(v___y_3500_);
v___x_3505_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__7, &l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__7_once, _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__7);
lean_inc(v_id_3442_);
v___x_3506_ = l_Lean_MessageData_ofSyntax(v_id_3442_);
v___x_3507_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3507_, 0, v___x_3505_);
lean_ctor_set(v___x_3507_, 1, v___x_3506_);
v___x_3508_ = lean_obj_once(&l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__14, &l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__14_once, _init_l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__14);
v___x_3509_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3509_, 0, v___x_3507_);
lean_ctor_set(v___x_3509_, 1, v___x_3508_);
v___x_3510_ = l_Lean_throwErrorAt___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__3___redArg(v_id_3442_, v___x_3509_, v___y_3502_, v___y_3503_);
lean_dec(v_id_3442_);
return v___x_3510_;
}
}
}
}
v___jp_3384_:
{
lean_object* v___x_3392_; lean_object* v_a_3393_; lean_object* v___x_3395_; uint8_t v_isShared_3396_; uint8_t v_isSharedCheck_3432_; 
lean_dec_ref(v___y_3389_);
v___x_3392_ = l_Lean_getMainModule___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__2___redArg(v___y_3388_);
v_a_3393_ = lean_ctor_get(v___x_3392_, 0);
v_isSharedCheck_3432_ = !lean_is_exclusive(v___x_3392_);
if (v_isSharedCheck_3432_ == 0)
{
v___x_3395_ = v___x_3392_;
v_isShared_3396_ = v_isSharedCheck_3432_;
goto v_resetjp_3394_;
}
else
{
lean_inc(v_a_3393_);
lean_dec(v___x_3392_);
v___x_3395_ = lean_box(0);
v_isShared_3396_ = v_isSharedCheck_3432_;
goto v_resetjp_3394_;
}
v_resetjp_3394_:
{
lean_object* v___x_3397_; lean_object* v_env_3398_; lean_object* v_messages_3399_; lean_object* v_scopes_3400_; lean_object* v_usedQuotCtxts_3401_; lean_object* v_nextMacroScope_3402_; lean_object* v_maxRecDepth_3403_; lean_object* v_ngen_3404_; lean_object* v_auxDeclNGen_3405_; lean_object* v_infoState_3406_; lean_object* v_traceState_3407_; lean_object* v_snapshotTasks_3408_; lean_object* v___x_3410_; uint8_t v_isShared_3411_; uint8_t v_isSharedCheck_3431_; 
v___x_3397_ = lean_st_ref_take(v___y_3388_);
v_env_3398_ = lean_ctor_get(v___x_3397_, 0);
v_messages_3399_ = lean_ctor_get(v___x_3397_, 1);
v_scopes_3400_ = lean_ctor_get(v___x_3397_, 2);
v_usedQuotCtxts_3401_ = lean_ctor_get(v___x_3397_, 3);
v_nextMacroScope_3402_ = lean_ctor_get(v___x_3397_, 4);
v_maxRecDepth_3403_ = lean_ctor_get(v___x_3397_, 5);
v_ngen_3404_ = lean_ctor_get(v___x_3397_, 6);
v_auxDeclNGen_3405_ = lean_ctor_get(v___x_3397_, 7);
v_infoState_3406_ = lean_ctor_get(v___x_3397_, 8);
v_traceState_3407_ = lean_ctor_get(v___x_3397_, 9);
v_snapshotTasks_3408_ = lean_ctor_get(v___x_3397_, 10);
v_isSharedCheck_3431_ = !lean_is_exclusive(v___x_3397_);
if (v_isSharedCheck_3431_ == 0)
{
v___x_3410_ = v___x_3397_;
v_isShared_3411_ = v_isSharedCheck_3431_;
goto v_resetjp_3409_;
}
else
{
lean_inc(v_snapshotTasks_3408_);
lean_inc(v_traceState_3407_);
lean_inc(v_infoState_3406_);
lean_inc(v_auxDeclNGen_3405_);
lean_inc(v_ngen_3404_);
lean_inc(v_maxRecDepth_3403_);
lean_inc(v_nextMacroScope_3402_);
lean_inc(v_usedQuotCtxts_3401_);
lean_inc(v_scopes_3400_);
lean_inc(v_messages_3399_);
lean_inc(v_env_3398_);
lean_dec(v___x_3397_);
v___x_3410_ = lean_box(0);
v_isShared_3411_ = v_isSharedCheck_3431_;
goto v_resetjp_3409_;
}
v_resetjp_3409_:
{
lean_object* v___x_3412_; lean_object* v_toEnvExtension_3413_; lean_object* v_asyncMode_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3424_; 
v___x_3412_ = l_Lean_errorExplanationExt;
v_toEnvExtension_3413_ = lean_ctor_get(v___x_3412_, 0);
lean_inc_ref(v_toEnvExtension_3413_);
v_asyncMode_3414_ = lean_ctor_get(v_toEnvExtension_3413_, 2);
lean_inc(v_asyncMode_3414_);
lean_dec_ref(v_toEnvExtension_3413_);
v___x_3415_ = l_Lean_DeclarationRange_ofStringPositions(v___y_3390_, v___y_3387_, v___y_3391_);
lean_dec(v___y_3391_);
lean_dec(v___y_3387_);
v___x_3416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3416_, 0, v_a_3393_);
lean_ctor_set(v___x_3416_, 1, v___x_3415_);
v___x_3417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3417_, 0, v___x_3416_);
v___x_3418_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_ErrorExplanation_elabCheckedNamedError_spec__0_spec__1___redArg___closed__1));
v___x_3419_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3419_, 0, v___x_3418_);
lean_ctor_set(v___x_3419_, 1, v___y_3386_);
lean_ctor_set(v___x_3419_, 2, v___x_3417_);
v___x_3420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3420_, 0, v___y_3385_);
lean_ctor_set(v___x_3420_, 1, v___x_3419_);
v___x_3421_ = lean_box(0);
v___x_3422_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_3412_, v_env_3398_, v___x_3420_, v_asyncMode_3414_, v___x_3421_);
lean_dec(v_asyncMode_3414_);
if (v_isShared_3411_ == 0)
{
lean_ctor_set(v___x_3410_, 0, v___x_3422_);
v___x_3424_ = v___x_3410_;
goto v_reusejp_3423_;
}
else
{
lean_object* v_reuseFailAlloc_3430_; 
v_reuseFailAlloc_3430_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_3430_, 0, v___x_3422_);
lean_ctor_set(v_reuseFailAlloc_3430_, 1, v_messages_3399_);
lean_ctor_set(v_reuseFailAlloc_3430_, 2, v_scopes_3400_);
lean_ctor_set(v_reuseFailAlloc_3430_, 3, v_usedQuotCtxts_3401_);
lean_ctor_set(v_reuseFailAlloc_3430_, 4, v_nextMacroScope_3402_);
lean_ctor_set(v_reuseFailAlloc_3430_, 5, v_maxRecDepth_3403_);
lean_ctor_set(v_reuseFailAlloc_3430_, 6, v_ngen_3404_);
lean_ctor_set(v_reuseFailAlloc_3430_, 7, v_auxDeclNGen_3405_);
lean_ctor_set(v_reuseFailAlloc_3430_, 8, v_infoState_3406_);
lean_ctor_set(v_reuseFailAlloc_3430_, 9, v_traceState_3407_);
lean_ctor_set(v_reuseFailAlloc_3430_, 10, v_snapshotTasks_3408_);
v___x_3424_ = v_reuseFailAlloc_3430_;
goto v_reusejp_3423_;
}
v_reusejp_3423_:
{
lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3428_; 
v___x_3425_ = lean_st_ref_set(v___y_3388_, v___x_3424_);
v___x_3426_ = lean_box(0);
if (v_isShared_3396_ == 0)
{
lean_ctor_set(v___x_3395_, 0, v___x_3426_);
v___x_3428_ = v___x_3395_;
goto v_reusejp_3427_;
}
else
{
lean_object* v_reuseFailAlloc_3429_; 
v_reuseFailAlloc_3429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3429_, 0, v___x_3426_);
v___x_3428_ = v_reuseFailAlloc_3429_;
goto v_reusejp_3427_;
}
v_reusejp_3427_:
{
return v___x_3428_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___boxed(lean_object* v_x_3575_, lean_object* v_a_3576_, lean_object* v_a_3577_, lean_object* v_a_3578_){
_start:
{
lean_object* v_res_3579_; 
v_res_3579_ = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation(v_x_3575_, v_a_3576_, v_a_3577_);
lean_dec(v_a_3577_);
return v_res_3579_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__3(lean_object* v_00_u03b1_3580_, lean_object* v_ref_3581_, lean_object* v_msg_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_){
_start:
{
lean_object* v___x_3586_; 
v___x_3586_ = l_Lean_throwErrorAt___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__3___redArg(v_ref_3581_, v_msg_3582_, v___y_3583_, v___y_3584_);
return v___x_3586_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__3___boxed(lean_object* v_00_u03b1_3587_, lean_object* v_ref_3588_, lean_object* v_msg_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_){
_start:
{
lean_object* v_res_3593_; 
v_res_3593_ = l_Lean_throwErrorAt___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__3(v_00_u03b1_3587_, v_ref_3588_, v_msg_3589_, v___y_3590_, v___y_3591_);
lean_dec(v___y_3591_);
lean_dec(v_ref_3588_);
return v_res_3593_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6(lean_object* v_msgData_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_){
_start:
{
lean_object* v___x_3598_; 
v___x_3598_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___redArg(v_msgData_3594_, v___y_3596_);
return v___x_3598_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6___boxed(lean_object* v_msgData_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_){
_start:
{
lean_object* v_res_3603_; 
v_res_3603_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__6(v_msgData_3599_, v___y_3600_, v___y_3601_);
lean_dec(v___y_3601_);
lean_dec_ref(v___y_3600_);
return v_res_3603_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4(lean_object* v_00_u03b1_3604_, lean_object* v_msg_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_){
_start:
{
lean_object* v___x_3609_; 
v___x_3609_ = l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4___redArg(v_msg_3605_, v___y_3606_, v___y_3607_);
return v___x_3609_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4___boxed(lean_object* v_00_u03b1_3610_, lean_object* v_msg_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_){
_start:
{
lean_object* v_res_3615_; 
v_res_3615_ = l_Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4(v_00_u03b1_3610_, v_msg_3611_, v___y_3612_, v___y_3613_);
lean_dec(v___y_3613_);
return v_res_3615_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1_spec__3(lean_object* v_cls_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_){
_start:
{
lean_object* v___x_3620_; 
v___x_3620_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1_spec__3___redArg(v_cls_3616_, v___y_3618_);
return v___x_3620_;
}
}
LEAN_EXPORT lean_object* l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1_spec__3___boxed(lean_object* v_cls_3621_, lean_object* v___y_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_){
_start:
{
lean_object* v_res_3625_; 
v_res_3625_ = l_Lean_isTracingEnabledFor___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__1_spec__1_spec__3(v_cls_3621_, v___y_3622_, v___y_3623_);
lean_dec(v___y_3623_);
lean_dec_ref(v___y_3622_);
return v_res_3625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__7(lean_object* v_msgData_3626_, lean_object* v_macroStack_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_){
_start:
{
lean_object* v___x_3631_; 
v___x_3631_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__7___redArg(v_msgData_3626_, v_macroStack_3627_, v___y_3629_);
return v___x_3631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__7___boxed(lean_object* v_msgData_3632_, lean_object* v_macroStack_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_, lean_object* v___y_3636_){
_start:
{
lean_object* v_res_3637_; 
v_res_3637_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation_spec__4_spec__7(v_msgData_3632_, v_macroStack_3633_, v___y_3634_, v___y_3635_);
lean_dec(v___y_3635_);
lean_dec_ref(v___y_3634_);
return v_res_3637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1(){
_start:
{
lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; 
v___x_3645_ = l_Lean_Elab_Command_commandElabAttribute;
v___x_3646_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___closed__2));
v___x_3647_ = ((lean_object*)(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___closed__1));
v___x_3648_ = lean_alloc_closure((void*)(l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___boxed), 4, 0);
v___x_3649_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3645_, v___x_3646_, v___x_3647_, v___x_3648_);
return v___x_3649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1___boxed(lean_object* v_a_3650_){
_start:
{
lean_object* v_res_3651_; 
v_res_3651_ = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1();
return v_res_3651_;
}
}
lean_object* runtime_initialize_Lean_Widget_UserWidget(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_ErrorExplanation(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Widget_UserWidget(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_errorDescriptionWidget___regBuiltin_Lean_errorDescriptionWidget__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap = _init_l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap();
lean_mark_persistent(l___private_Lean_Elab_ErrorExplanation_0__Lean_Elab_ErrorExplanation_macroDeclMap);
res = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__5();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__9();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_ErrorExplanation_elabCheckedNamedError___regBuiltin_Lean_Elab_ErrorExplanation_elabCheckedNamedError__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation___regBuiltin_Lean_Elab_ErrorExplanation_elabRegisterErrorExplanation__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Widget_UserWidget(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_ErrorExplanation(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Widget_UserWidget(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Widget_UserWidget(uint8_t builtin);
lean_object* initialize_Lean_Widget_UserWidget(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_ErrorExplanation(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Widget_UserWidget(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Widget_UserWidget(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_ErrorExplanation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_ErrorExplanation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_ErrorExplanation(builtin);
}
#ifdef __cplusplus
}
#endif
