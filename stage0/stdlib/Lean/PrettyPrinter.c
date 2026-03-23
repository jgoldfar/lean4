// Lean compiler output
// Module: Lean.PrettyPrinter
// Imports: public import Lean.PrettyPrinter.Delaborator.Basic import Lean.PrettyPrinter.Delaborator public import Lean.Parser.Module public import Lean.ParserCompiler public import Lean.Util.NumObjs public import Lean.Util.ShareCommon
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
lean_object* l_Lean_Meta_ppGoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_PPContext_runMetaM___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
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
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
extern lean_object* l_Lean_pp_raw;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_delabConstWithSignature___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_delabCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_sanitizeSyntax(lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_parenthesizeCategory(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_formatCategory(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_PPContext_runCoreM___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_module_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_parenthesize(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Module_module_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_format(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_combinatorParenthesizerAttribute;
extern lean_object* l_Lean_PrettyPrinter_parenthesizerAttribute;
lean_object* l_Lean_PrettyPrinter_Delaborator_delab___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_sanitizeNames(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Expr_numObjs(lean_object*);
lean_object* lean_sharecommon_quick(lean_object*);
lean_object* l_Lean_Expr_sizeWithoutSharing(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_panic_fn(lean_object*, lean_object*);
lean_object* l_Lean_ParserCompiler_registerParserCompiler___redArg(lean_object*);
extern lean_object* l_Lean_PrettyPrinter_combinatorFormatterAttribute;
extern lean_object* l_Lean_PrettyPrinter_formatterAttribute;
uint8_t l_Lean_getPPMVarsLevels(lean_object*);
lean_object* l_Lean_Level_format(lean_object*, uint8_t);
lean_object* l_Lean_PrettyPrinter_Delaborator_delabConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_syntax_ident(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Core_getMaxHeartbeats(lean_object*);
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_io_get_num_heartbeats();
extern lean_object* l_Lean_firstFrontendMacroScope;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_PrettyPrinter_delab(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
extern lean_object* l_Lean_inheritedTraceOptions;
extern lean_object* l_Lean_instInhabitedFileMap_default;
extern lean_object* l_Lean_maxRecDepth;
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_lazy(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_ppFnsRef;
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCategory(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCategory___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_ppTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_PrettyPrinter_ppTerm___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_ppTerm___closed__0_value;
static const lean_ctor_object l_Lean_PrettyPrinter_ppTerm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_ppTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_PrettyPrinter_ppTerm___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_ppTerm___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTerm(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "pp"};
static const lean_object* l_Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value;
static const lean_string_object l_Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "exprSizes"};
static const lean_object* l_Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l_Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(158, 227, 30, 94, 230, 5, 70, 204)}};
static const lean_object* l_Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value;
static const lean_string_object l_Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 146, .m_capacity = 146, .m_length = 145, .m_data = "(pretty printer) prefix each embedded expression with its sizes in the format (size disregarding sharing/size with sharing/size with max sharing)"};
static const lean_object* l_Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value)}};
static const lean_object* l_Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value;
static const lean_string_object l_Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value;
static const lean_string_object l_Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "PrettyPrinter"};
static const lean_object* l_Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value;
static const lean_ctor_object l_Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(120, 167, 117, 148, 131, 202, 42, 4)}};
static const lean_ctor_object l_Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value_aux_1),((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(206, 56, 205, 124, 93, 150, 76, 120)}};
static const lean_ctor_object l_Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value_aux_2),((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(101, 167, 20, 28, 221, 60, 140, 8)}};
static const lean_object* l_Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_ = (const lean_object*)&l_Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_pp_exprSizes;
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "[size "};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__0 = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__0_value)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__1 = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__1_value;
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__2 = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__2_value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__2_value)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__3 = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__3_value;
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "] "};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__4 = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__4_value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__4_value)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__5 = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PrettyPrinter_ppExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_ppExpr___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_ppExpr___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_ppExpr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_PrettyPrinter_ppConstNameWithInfos_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tagAppFns"};
static const lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__0_value;
static const lean_ctor_object l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1_value_aux_0),((lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__0_value),LEAN_SCALAR_PTR_LITERAL(171, 223, 163, 149, 215, 109, 16, 158)}};
static const lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1_value;
static const lean_ctor_object l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 1}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__2 = (const lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__2_value;
static const lean_closure_object l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_delabConst___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__3_value;
static const lean_closure_object l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos___boxed, .m_arity = 11, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1_value),((lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__2_value),((lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__3_value)} };
static const lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__4 = (const lean_object*)&l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_PrettyPrinter_ppExprLegacy_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_PrettyPrinter_ppExprLegacy_spec__0___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_PrettyPrinter_ppExprLegacy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__0_value;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_PrettyPrinter_ppExprLegacy___closed__1;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__2;
static const lean_array_object l_Lean_PrettyPrinter_ppExprLegacy___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__3_value;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__4;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__5;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__6;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__7;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__8;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__9;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__10;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__11;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__12;
static const lean_string_object l_Lean_PrettyPrinter_ppExprLegacy___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__13 = (const lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__13_value;
static const lean_ctor_object l_Lean_PrettyPrinter_ppExprLegacy___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__13_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__14 = (const lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__14_value;
static const lean_ctor_object l_Lean_PrettyPrinter_ppExprLegacy___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__14_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__15 = (const lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__15_value;
static const lean_ctor_object l_Lean_PrettyPrinter_ppExprLegacy___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__16 = (const lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__16_value;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__17;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__18;
static const lean_string_object l_Lean_PrettyPrinter_ppExprLegacy___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "internal exception #"};
static const lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__19 = (const lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__19_value;
static const lean_string_object l_Lean_PrettyPrinter_ppExprLegacy___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "<PrettyPrinter>"};
static const lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__20 = (const lean_object*)&l_Lean_PrettyPrinter_ppExprLegacy___closed__20_value;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__21;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_PrettyPrinter_ppExprLegacy___closed__22;
static lean_once_cell_t l_Lean_PrettyPrinter_ppExprLegacy___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_ppExprLegacy___closed__23;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprLegacy(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprLegacy___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_ppTactic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "tactic"};
static const lean_object* l_Lean_PrettyPrinter_ppTactic___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_ppTactic___closed__0_value;
static const lean_ctor_object l_Lean_PrettyPrinter_ppTactic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_ppTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 76, 33, 121, 85, 143, 17, 224)}};
static const lean_object* l_Lean_PrettyPrinter_ppTactic___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_ppTactic___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTactic(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_ppCommand___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "command"};
static const lean_object* l_Lean_PrettyPrinter_ppCommand___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_ppCommand___closed__0_value;
static const lean_ctor_object l_Lean_PrettyPrinter_ppCommand___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_ppCommand___closed__0_value),LEAN_SCALAR_PTR_LITERAL(29, 69, 134, 125, 237, 175, 69, 70)}};
static const lean_object* l_Lean_PrettyPrinter_ppCommand___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_ppCommand___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCommand(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCommand___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PrettyPrinter_ppModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Module_module_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_ppModule___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_ppModule___closed__0_value;
static const lean_closure_object l_Lean_PrettyPrinter_ppModule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Module_module_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PrettyPrinter_ppModule___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_ppModule___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppModule(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppModule___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PrettyPrinter_ppSignature___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_delabConstWithSignature___boxed, .m_arity = 8, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_PrettyPrinter_ppSignature___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_ppSignature___closed__0_value;
static const lean_string_object l_Lean_PrettyPrinter_ppSignature___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l_Lean_PrettyPrinter_ppSignature___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_ppSignature___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppSignature(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppSignature___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__0_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__0_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__1___closed__0_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Delaborator_delab___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__1___closed__0_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__1___closed__0_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__1_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__1_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__2_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__2_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__3_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__3_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__4_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__4_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__0_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__1_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__2_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__3_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__4_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2____boxed(lean_object*);
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(201, 243, 163, 104, 244, 197, 219, 0)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__1_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__3_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(212, 152, 45, 136, 43, 176, 59, 135)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(213, 19, 19, 182, 49, 68, 234, 74)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(192, 190, 227, 235, 144, 88, 78, 130)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(118, 83, 13, 207, 210, 46, 52, 166)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__8_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__8_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__8_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__9_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__8_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(91, 39, 49, 159, 123, 145, 147, 151)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__9_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__9_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__10_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__10_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__10_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__11_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__9_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__10_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(190, 228, 156, 77, 208, 58, 186, 72)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__11_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__11_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__12_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__11_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(135, 58, 92, 96, 45, 63, 110, 211)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__12_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__12_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__13_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__12_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l_Lean_PrettyPrinter_initFn___closed__6_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(205, 84, 7, 14, 127, 142, 94, 81)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__13_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__13_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__14_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__13_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)(((size_t)(675687902) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(242, 80, 98, 162, 118, 230, 218, 64)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__14_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__14_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__15_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__15_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__15_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__16_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__14_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__15_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(125, 177, 19, 210, 185, 194, 23, 23)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__16_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__16_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__17_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__17_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__17_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__18_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__16_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__17_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(221, 88, 4, 103, 22, 42, 47, 115)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__18_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__18_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__19_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__18_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(176, 211, 139, 245, 118, 121, 217, 117)}};
static const lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__19_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__19_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l_Lean_PrettyPrinter_registerParserCompilers___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "parenthesizer"};
static const lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__0 = (const lean_object*)&l_Lean_PrettyPrinter_registerParserCompilers___closed__0_value;
static const lean_ctor_object l_Lean_PrettyPrinter_registerParserCompilers___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_registerParserCompilers___closed__0_value),LEAN_SCALAR_PTR_LITERAL(50, 187, 150, 116, 216, 103, 117, 60)}};
static const lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__1 = (const lean_object*)&l_Lean_PrettyPrinter_registerParserCompilers___closed__1_value;
static lean_once_cell_t l_Lean_PrettyPrinter_registerParserCompilers___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__2;
static const lean_string_object l_Lean_PrettyPrinter_registerParserCompilers___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "formatter"};
static const lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__3 = (const lean_object*)&l_Lean_PrettyPrinter_registerParserCompilers___closed__3_value;
static const lean_ctor_object l_Lean_PrettyPrinter_registerParserCompilers___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_PrettyPrinter_registerParserCompilers___closed__3_value),LEAN_SCALAR_PTR_LITERAL(126, 243, 114, 121, 141, 142, 42, 100)}};
static const lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__4 = (const lean_object*)&l_Lean_PrettyPrinter_registerParserCompilers___closed__4_value;
static lean_once_cell_t l_Lean_PrettyPrinter_registerParserCompilers___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PrettyPrinter_registerParserCompilers___closed__5;
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_registerParserCompilers();
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_registerParserCompilers___boxed(lean_object*);
static const lean_string_object l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "[Error pretty printing: "};
static const lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__0 = (const lean_object*)&l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__1;
static const lean_string_object l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__2 = (const lean_object*)&l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_ofFormatWithInfosM___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__1___boxed(lean_object*);
static const lean_string_object l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "(invalid MessageData.lazy, missing context)"};
static const lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__0 = (const lean_object*)&l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__0_value)}};
static const lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__1 = (const lean_object*)&l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_MessageData_ofFormatWithInfosM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofFormatWithInfosM___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_ofFormatWithInfosM___closed__0 = (const lean_object*)&l_Lean_MessageData_ofFormatWithInfosM___closed__0_value;
static const lean_closure_object l_Lean_MessageData_ofFormatWithInfosM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofFormatWithInfosM___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_ofFormatWithInfosM___closed__1 = (const lean_object*)&l_Lean_MessageData_ofFormatWithInfosM___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_MessageData_ofConst_spec__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_MessageData_ofConst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "[Error pretty printing: expression not a constant]"};
static const lean_object* l_Lean_MessageData_ofConst___closed__0 = (const lean_object*)&l_Lean_MessageData_ofConst___closed__0_value;
static lean_once_cell_t l_Lean_MessageData_ofConst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofConst___closed__1;
static lean_once_cell_t l_Lean_MessageData_ofConst___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofConst___closed__2;
static lean_once_cell_t l_Lean_MessageData_ofConst___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofConst___closed__3;
static const lean_string_object l_Lean_MessageData_ofConst___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lean.PrettyPrinter"};
static const lean_object* l_Lean_MessageData_ofConst___closed__4 = (const lean_object*)&l_Lean_MessageData_ofConst___closed__4_value;
static const lean_string_object l_Lean_MessageData_ofConst___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.MessageData.ofConst"};
static const lean_object* l_Lean_MessageData_ofConst___closed__5 = (const lean_object*)&l_Lean_MessageData_ofConst___closed__5_value;
static const lean_string_object l_Lean_MessageData_ofConst___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not a constant"};
static const lean_object* l_Lean_MessageData_ofConst___closed__6 = (const lean_object*)&l_Lean_MessageData_ofConst___closed__6_value;
static lean_once_cell_t l_Lean_MessageData_ofConst___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofConst___closed__7;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConst(lean_object*);
static const lean_string_object l_Lean_MessageData_signature___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "[Error pretty printing signature: "};
static const lean_object* l_Lean_MessageData_signature___lam__0___closed__0 = (const lean_object*)&l_Lean_MessageData_signature___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_MessageData_signature___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_signature___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_MessageData_signature___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_signature___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_signature(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCategory(lean_object* v_cat_1_, lean_object* v_stx_2_, lean_object* v_a_3_, lean_object* v_a_4_){
_start:
{
lean_object* v_options_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v_fst_10_; lean_object* v___x_11_; 
v_options_6_ = lean_ctor_get(v_a_3_, 2);
v___x_7_ = lean_box(1);
lean_inc_ref(v_options_6_);
v___x_8_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_8_, 0, v_options_6_);
lean_ctor_set(v___x_8_, 1, v___x_7_);
lean_ctor_set(v___x_8_, 2, v___x_7_);
v___x_9_ = l_Lean_sanitizeSyntax(v_stx_2_, v___x_8_);
v_fst_10_ = lean_ctor_get(v___x_9_, 0);
lean_inc(v_fst_10_);
lean_dec_ref(v___x_9_);
lean_inc(v_a_4_);
lean_inc_ref(v_a_3_);
lean_inc(v_cat_1_);
v___x_11_ = l_Lean_PrettyPrinter_parenthesizeCategory(v_cat_1_, v_fst_10_, v_a_3_, v_a_4_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v_a_12_; lean_object* v___x_13_; 
v_a_12_ = lean_ctor_get(v___x_11_, 0);
lean_inc(v_a_12_);
lean_dec_ref(v___x_11_);
v___x_13_ = l_Lean_PrettyPrinter_formatCategory(v_cat_1_, v_a_12_, v_a_3_, v_a_4_);
return v___x_13_;
}
else
{
lean_object* v_a_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_21_; 
lean_dec(v_a_4_);
lean_dec_ref(v_a_3_);
lean_dec(v_cat_1_);
v_a_14_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_21_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_21_ == 0)
{
v___x_16_ = v___x_11_;
v_isShared_17_ = v_isSharedCheck_21_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_a_14_);
lean_dec(v___x_11_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_21_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v___x_19_; 
if (v_isShared_17_ == 0)
{
v___x_19_ = v___x_16_;
goto v_reusejp_18_;
}
else
{
lean_object* v_reuseFailAlloc_20_; 
v_reuseFailAlloc_20_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_20_, 0, v_a_14_);
v___x_19_ = v_reuseFailAlloc_20_;
goto v_reusejp_18_;
}
v_reusejp_18_:
{
return v___x_19_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCategory___boxed(lean_object* v_cat_22_, lean_object* v_stx_23_, lean_object* v_a_24_, lean_object* v_a_25_, lean_object* v_a_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_Lean_PrettyPrinter_ppCategory(v_cat_22_, v_stx_23_, v_a_24_, v_a_25_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTerm(lean_object* v_stx_31_, lean_object* v_a_32_, lean_object* v_a_33_){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = ((lean_object*)(l_Lean_PrettyPrinter_ppTerm___closed__1));
v___x_36_ = l_Lean_PrettyPrinter_ppCategory(v___x_35_, v_stx_31_, v_a_32_, v_a_33_);
return v___x_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTerm___boxed(lean_object* v_stx_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = l_Lean_PrettyPrinter_ppTerm(v_stx_37_, v_a_38_, v_a_39_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___redArg(lean_object* v_lctx_42_, lean_object* v_x_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_){
_start:
{
lean_object* v_keyedConfig_49_; uint8_t v_trackZetaDelta_50_; lean_object* v_zetaDeltaSet_51_; lean_object* v_localInstances_52_; lean_object* v_defEqCtx_x3f_53_; lean_object* v_synthPendingDepth_54_; lean_object* v_canUnfold_x3f_55_; uint8_t v_univApprox_56_; uint8_t v_inTypeClassResolution_57_; uint8_t v_cacheInferType_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_66_; 
v_keyedConfig_49_ = lean_ctor_get(v___y_44_, 0);
v_trackZetaDelta_50_ = lean_ctor_get_uint8(v___y_44_, sizeof(void*)*7);
v_zetaDeltaSet_51_ = lean_ctor_get(v___y_44_, 1);
v_localInstances_52_ = lean_ctor_get(v___y_44_, 3);
v_defEqCtx_x3f_53_ = lean_ctor_get(v___y_44_, 4);
v_synthPendingDepth_54_ = lean_ctor_get(v___y_44_, 5);
v_canUnfold_x3f_55_ = lean_ctor_get(v___y_44_, 6);
v_univApprox_56_ = lean_ctor_get_uint8(v___y_44_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_57_ = lean_ctor_get_uint8(v___y_44_, sizeof(void*)*7 + 2);
v_cacheInferType_58_ = lean_ctor_get_uint8(v___y_44_, sizeof(void*)*7 + 3);
v_isSharedCheck_66_ = !lean_is_exclusive(v___y_44_);
if (v_isSharedCheck_66_ == 0)
{
lean_object* v_unused_67_; 
v_unused_67_ = lean_ctor_get(v___y_44_, 2);
lean_dec(v_unused_67_);
v___x_60_ = v___y_44_;
v_isShared_61_ = v_isSharedCheck_66_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_canUnfold_x3f_55_);
lean_inc(v_synthPendingDepth_54_);
lean_inc(v_defEqCtx_x3f_53_);
lean_inc(v_localInstances_52_);
lean_inc(v_zetaDeltaSet_51_);
lean_inc(v_keyedConfig_49_);
lean_dec(v___y_44_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_66_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_63_; 
if (v_isShared_61_ == 0)
{
lean_ctor_set(v___x_60_, 2, v_lctx_42_);
v___x_63_ = v___x_60_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v_keyedConfig_49_);
lean_ctor_set(v_reuseFailAlloc_65_, 1, v_zetaDeltaSet_51_);
lean_ctor_set(v_reuseFailAlloc_65_, 2, v_lctx_42_);
lean_ctor_set(v_reuseFailAlloc_65_, 3, v_localInstances_52_);
lean_ctor_set(v_reuseFailAlloc_65_, 4, v_defEqCtx_x3f_53_);
lean_ctor_set(v_reuseFailAlloc_65_, 5, v_synthPendingDepth_54_);
lean_ctor_set(v_reuseFailAlloc_65_, 6, v_canUnfold_x3f_55_);
lean_ctor_set_uint8(v_reuseFailAlloc_65_, sizeof(void*)*7, v_trackZetaDelta_50_);
lean_ctor_set_uint8(v_reuseFailAlloc_65_, sizeof(void*)*7 + 1, v_univApprox_56_);
lean_ctor_set_uint8(v_reuseFailAlloc_65_, sizeof(void*)*7 + 2, v_inTypeClassResolution_57_);
lean_ctor_set_uint8(v_reuseFailAlloc_65_, sizeof(void*)*7 + 3, v_cacheInferType_58_);
v___x_63_ = v_reuseFailAlloc_65_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
lean_object* v___x_64_; 
v___x_64_ = lean_apply_5(v_x_43_, v___x_63_, v___y_45_, v___y_46_, v___y_47_, lean_box(0));
return v___x_64_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___redArg___boxed(lean_object* v_lctx_68_, lean_object* v_x_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___redArg(v_lctx_68_, v_x_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0(lean_object* v_00_u03b1_76_, lean_object* v_lctx_77_, lean_object* v_x_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___redArg(v_lctx_77_, v_x_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___boxed(lean_object* v_00_u03b1_85_, lean_object* v_lctx_86_, lean_object* v_x_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0(v_00_u03b1_85_, v_lctx_86_, v_x_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing___lam__0(lean_object* v_delab_94_, lean_object* v_e_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
lean_object* v___x_101_; 
lean_inc(v___y_99_);
lean_inc_ref(v___y_98_);
v___x_101_ = lean_apply_6(v_delab_94_, v_e_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_, lean_box(0));
if (lean_obj_tag(v___x_101_) == 0)
{
lean_object* v_a_102_; lean_object* v___x_103_; 
v_a_102_ = lean_ctor_get(v___x_101_, 0);
lean_inc(v_a_102_);
lean_dec_ref(v___x_101_);
v___x_103_ = l_Lean_PrettyPrinter_ppTerm(v_a_102_, v___y_98_, v___y_99_);
return v___x_103_;
}
else
{
lean_object* v_a_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_111_; 
lean_dec(v___y_99_);
lean_dec_ref(v___y_98_);
v_a_104_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_111_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_111_ == 0)
{
v___x_106_ = v___x_101_;
v_isShared_107_ = v_isSharedCheck_111_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_a_104_);
lean_dec(v___x_101_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_111_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_109_; 
if (v_isShared_107_ == 0)
{
v___x_109_ = v___x_106_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v_a_104_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing___lam__0___boxed(lean_object* v_delab_112_, lean_object* v_e_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l_Lean_PrettyPrinter_ppUsing___lam__0(v_delab_112_, v_e_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing(lean_object* v_e_120_, lean_object* v_delab_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_){
_start:
{
lean_object* v_lctx_127_; lean_object* v_options_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v_fst_132_; lean_object* v___f_133_; lean_object* v___x_134_; 
v_lctx_127_ = lean_ctor_get(v_a_122_, 2);
v_options_128_ = lean_ctor_get(v_a_124_, 2);
v___x_129_ = lean_box(1);
lean_inc_ref(v_options_128_);
v___x_130_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_130_, 0, v_options_128_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
lean_ctor_set(v___x_130_, 2, v___x_129_);
lean_inc_ref(v_lctx_127_);
v___x_131_ = l_Lean_LocalContext_sanitizeNames(v_lctx_127_, v___x_130_);
v_fst_132_ = lean_ctor_get(v___x_131_, 0);
lean_inc(v_fst_132_);
lean_dec_ref(v___x_131_);
v___f_133_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppUsing___lam__0___boxed), 7, 2);
lean_closure_set(v___f_133_, 0, v_delab_121_);
lean_closure_set(v___f_133_, 1, v_e_120_);
v___x_134_ = l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___redArg(v_fst_132_, v___f_133_, v_a_122_, v_a_123_, v_a_124_, v_a_125_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppUsing___boxed(lean_object* v_e_135_, lean_object* v_delab_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_Lean_PrettyPrinter_ppUsing(v_e_135_, v_delab_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__spec__0(lean_object* v_name_143_, lean_object* v_decl_144_, lean_object* v_ref_145_){
_start:
{
lean_object* v_defValue_147_; lean_object* v_descr_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_175_; 
v_defValue_147_ = lean_ctor_get(v_decl_144_, 0);
v_descr_148_ = lean_ctor_get(v_decl_144_, 1);
v_isSharedCheck_175_ = !lean_is_exclusive(v_decl_144_);
if (v_isSharedCheck_175_ == 0)
{
v___x_150_ = v_decl_144_;
v_isShared_151_ = v_isSharedCheck_175_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_descr_148_);
lean_inc(v_defValue_147_);
lean_dec(v_decl_144_);
v___x_150_ = lean_box(0);
v_isShared_151_ = v_isSharedCheck_175_;
goto v_resetjp_149_;
}
v_resetjp_149_:
{
lean_object* v___x_152_; uint8_t v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_152_ = lean_alloc_ctor(1, 0, 1);
v___x_153_ = lean_unbox(v_defValue_147_);
lean_ctor_set_uint8(v___x_152_, 0, v___x_153_);
lean_inc(v_name_143_);
v___x_154_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_154_, 0, v_name_143_);
lean_ctor_set(v___x_154_, 1, v_ref_145_);
lean_ctor_set(v___x_154_, 2, v___x_152_);
lean_ctor_set(v___x_154_, 3, v_descr_148_);
lean_inc(v_name_143_);
v___x_155_ = lean_register_option(v_name_143_, v___x_154_);
if (lean_obj_tag(v___x_155_) == 0)
{
lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_165_; 
v_isSharedCheck_165_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_165_ == 0)
{
lean_object* v_unused_166_; 
v_unused_166_ = lean_ctor_get(v___x_155_, 0);
lean_dec(v_unused_166_);
v___x_157_ = v___x_155_;
v_isShared_158_ = v_isSharedCheck_165_;
goto v_resetjp_156_;
}
else
{
lean_dec(v___x_155_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_165_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_160_; 
if (v_isShared_151_ == 0)
{
lean_ctor_set(v___x_150_, 1, v_defValue_147_);
lean_ctor_set(v___x_150_, 0, v_name_143_);
v___x_160_ = v___x_150_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_name_143_);
lean_ctor_set(v_reuseFailAlloc_164_, 1, v_defValue_147_);
v___x_160_ = v_reuseFailAlloc_164_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
lean_object* v___x_162_; 
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
}
else
{
lean_object* v_a_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_174_; 
lean_del_object(v___x_150_);
lean_dec(v_defValue_147_);
lean_dec(v_name_143_);
v_a_167_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_174_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_174_ == 0)
{
v___x_169_ = v___x_155_;
v_isShared_170_ = v_isSharedCheck_174_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_a_167_);
lean_dec(v___x_155_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_174_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_172_; 
if (v_isShared_170_ == 0)
{
v___x_172_ = v___x_169_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v_a_167_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_176_, lean_object* v_decl_177_, lean_object* v_ref_178_, lean_object* v_a_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_Lean_Option_register___at___00Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__spec__0(v_name_176_, v_decl_177_, v_ref_178_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_199_ = ((lean_object*)(l_Lean_PrettyPrinter_initFn___closed__2_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_));
v___x_200_ = ((lean_object*)(l_Lean_PrettyPrinter_initFn___closed__4_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_));
v___x_201_ = ((lean_object*)(l_Lean_PrettyPrinter_initFn___closed__7_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_));
v___x_202_ = l_Lean_Option_register___at___00Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4__spec__0(v___x_199_, v___x_200_, v___x_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4____boxed(lean_object* v_a_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_();
return v_res_204_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes_spec__0(lean_object* v_opts_205_, lean_object* v_opt_206_){
_start:
{
lean_object* v_name_207_; lean_object* v_defValue_208_; lean_object* v_map_209_; lean_object* v___x_210_; 
v_name_207_ = lean_ctor_get(v_opt_206_, 0);
v_defValue_208_ = lean_ctor_get(v_opt_206_, 1);
v_map_209_ = lean_ctor_get(v_opts_205_, 0);
v___x_210_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_209_, v_name_207_);
if (lean_obj_tag(v___x_210_) == 0)
{
uint8_t v___x_211_; 
v___x_211_ = lean_unbox(v_defValue_208_);
return v___x_211_;
}
else
{
lean_object* v_val_212_; 
v_val_212_ = lean_ctor_get(v___x_210_, 0);
lean_inc(v_val_212_);
lean_dec_ref(v___x_210_);
if (lean_obj_tag(v_val_212_) == 1)
{
uint8_t v_v_213_; 
v_v_213_ = lean_ctor_get_uint8(v_val_212_, 0);
lean_dec_ref(v_val_212_);
return v_v_213_;
}
else
{
uint8_t v___x_214_; 
lean_dec(v_val_212_);
v___x_214_ = lean_unbox(v_defValue_208_);
return v___x_214_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes_spec__0___boxed(lean_object* v_opts_215_, lean_object* v_opt_216_){
_start:
{
uint8_t v_res_217_; lean_object* v_r_218_; 
v_res_217_ = l_Lean_Option_get___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes_spec__0(v_opts_215_, v_opt_216_);
lean_dec_ref(v_opt_216_);
lean_dec_ref(v_opts_215_);
v_r_218_ = lean_box(v_res_217_);
return v_r_218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg(lean_object* v_e_228_, lean_object* v_f_229_, lean_object* v_a_230_){
_start:
{
lean_object* v_options_232_; lean_object* v_ref_233_; lean_object* v___x_234_; uint8_t v___x_235_; 
v_options_232_ = lean_ctor_get(v_a_230_, 2);
v_ref_233_ = lean_ctor_get(v_a_230_, 5);
v___x_234_ = l_Lean_PrettyPrinter_pp_exprSizes;
v___x_235_ = l_Lean_Option_get___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes_spec__0(v_options_232_, v___x_234_);
if (v___x_235_ == 0)
{
lean_object* v___x_236_; 
lean_dec_ref(v_e_228_);
v___x_236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_236_, 0, v_f_229_);
return v___x_236_;
}
else
{
lean_object* v___x_237_; 
lean_inc_ref(v_e_228_);
v___x_237_ = l_Lean_Expr_numObjs(v_e_228_);
if (lean_obj_tag(v___x_237_) == 0)
{
lean_object* v_a_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v_a_238_ = lean_ctor_get(v___x_237_, 0);
lean_inc(v_a_238_);
lean_dec_ref(v___x_237_);
v___x_239_ = lean_sharecommon_quick(v_e_228_);
v___x_240_ = l_Lean_Expr_numObjs(v___x_239_);
if (lean_obj_tag(v___x_240_) == 0)
{
lean_object* v_a_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_265_; 
v_a_241_ = lean_ctor_get(v___x_240_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_240_);
if (v_isSharedCheck_265_ == 0)
{
v___x_243_ = v___x_240_;
v_isShared_244_ = v_isSharedCheck_265_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_a_241_);
lean_dec(v___x_240_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_265_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_263_; 
v___x_245_ = ((lean_object*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__1));
v___x_246_ = l_Lean_Expr_sizeWithoutSharing(v_e_228_);
lean_dec_ref(v_e_228_);
v___x_247_ = l_Nat_reprFast(v___x_246_);
v___x_248_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_248_, 0, v___x_247_);
v___x_249_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_245_);
lean_ctor_set(v___x_249_, 1, v___x_248_);
v___x_250_ = ((lean_object*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__3));
v___x_251_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_249_);
lean_ctor_set(v___x_251_, 1, v___x_250_);
v___x_252_ = l_Nat_reprFast(v_a_238_);
v___x_253_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
v___x_254_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_251_);
lean_ctor_set(v___x_254_, 1, v___x_253_);
v___x_255_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_255_, 0, v___x_254_);
lean_ctor_set(v___x_255_, 1, v___x_250_);
v___x_256_ = l_Nat_reprFast(v_a_241_);
v___x_257_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
v___x_258_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_255_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = ((lean_object*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___closed__5));
v___x_260_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_260_, 0, v___x_258_);
lean_ctor_set(v___x_260_, 1, v___x_259_);
v___x_261_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
lean_ctor_set(v___x_261_, 1, v_f_229_);
if (v_isShared_244_ == 0)
{
lean_ctor_set(v___x_243_, 0, v___x_261_);
v___x_263_ = v___x_243_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___x_261_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
else
{
lean_object* v_a_266_; lean_object* v___x_268_; uint8_t v_isShared_269_; uint8_t v_isSharedCheck_277_; 
lean_dec(v_a_238_);
lean_dec(v_f_229_);
lean_dec_ref(v_e_228_);
v_a_266_ = lean_ctor_get(v___x_240_, 0);
v_isSharedCheck_277_ = !lean_is_exclusive(v___x_240_);
if (v_isSharedCheck_277_ == 0)
{
v___x_268_ = v___x_240_;
v_isShared_269_ = v_isSharedCheck_277_;
goto v_resetjp_267_;
}
else
{
lean_inc(v_a_266_);
lean_dec(v___x_240_);
v___x_268_ = lean_box(0);
v_isShared_269_ = v_isSharedCheck_277_;
goto v_resetjp_267_;
}
v_resetjp_267_:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_275_; 
v___x_270_ = lean_io_error_to_string(v_a_266_);
v___x_271_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
v___x_272_ = l_Lean_MessageData_ofFormat(v___x_271_);
lean_inc(v_ref_233_);
v___x_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_273_, 0, v_ref_233_);
lean_ctor_set(v___x_273_, 1, v___x_272_);
if (v_isShared_269_ == 0)
{
lean_ctor_set(v___x_268_, 0, v___x_273_);
v___x_275_ = v___x_268_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v___x_273_);
v___x_275_ = v_reuseFailAlloc_276_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
return v___x_275_;
}
}
}
}
else
{
lean_object* v_a_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_289_; 
lean_dec(v_f_229_);
lean_dec_ref(v_e_228_);
v_a_278_ = lean_ctor_get(v___x_237_, 0);
v_isSharedCheck_289_ = !lean_is_exclusive(v___x_237_);
if (v_isSharedCheck_289_ == 0)
{
v___x_280_ = v___x_237_;
v_isShared_281_ = v_isSharedCheck_289_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_a_278_);
lean_dec(v___x_237_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_289_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_287_; 
v___x_282_ = lean_io_error_to_string(v_a_278_);
v___x_283_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_283_, 0, v___x_282_);
v___x_284_ = l_Lean_MessageData_ofFormat(v___x_283_);
lean_inc(v_ref_233_);
v___x_285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_285_, 0, v_ref_233_);
lean_ctor_set(v___x_285_, 1, v___x_284_);
if (v_isShared_281_ == 0)
{
lean_ctor_set(v___x_280_, 0, v___x_285_);
v___x_287_ = v___x_280_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v___x_285_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg___boxed(lean_object* v_e_290_, lean_object* v_f_291_, lean_object* v_a_292_, lean_object* v_a_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg(v_e_290_, v_f_291_, v_a_292_);
lean_dec_ref(v_a_292_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes(lean_object* v_e_295_, lean_object* v_f_296_, lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg(v_e_295_, v_f_296_, v_a_299_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___boxed(lean_object* v_e_303_, lean_object* v_f_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes(v_e_303_, v_f_304_, v_a_305_, v_a_306_, v_a_307_, v_a_308_);
lean_dec(v_a_308_);
lean_dec_ref(v_a_307_);
lean_dec(v_a_306_);
lean_dec_ref(v_a_305_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr___lam__0(lean_object* v_e_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_317_ = lean_box(1);
v___x_318_ = l_Lean_PrettyPrinter_delab(v_e_311_, v___x_317_, v___y_312_, v___y_313_, v___y_314_, v___y_315_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr___lam__0___boxed(lean_object* v_e_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l_Lean_PrettyPrinter_ppExpr___lam__0(v_e_319_, v___y_320_, v___y_321_, v___y_322_, v___y_323_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr(lean_object* v_e_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_, lean_object* v_a_331_){
_start:
{
lean_object* v___f_333_; lean_object* v___x_334_; 
v___f_333_ = ((lean_object*)(l_Lean_PrettyPrinter_ppExpr___closed__0));
lean_inc_ref(v_a_330_);
lean_inc_ref(v_e_327_);
v___x_334_ = l_Lean_PrettyPrinter_ppUsing(v_e_327_, v___f_333_, v_a_328_, v_a_329_, v_a_330_, v_a_331_);
if (lean_obj_tag(v___x_334_) == 0)
{
lean_object* v_a_335_; lean_object* v___x_336_; 
v_a_335_ = lean_ctor_get(v___x_334_, 0);
lean_inc(v_a_335_);
lean_dec_ref(v___x_334_);
v___x_336_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg(v_e_327_, v_a_335_, v_a_330_);
lean_dec_ref(v_a_330_);
return v___x_336_;
}
else
{
lean_dec_ref(v_a_330_);
lean_dec_ref(v_e_327_);
return v___x_334_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExpr___boxed(lean_object* v_e_337_, lean_object* v_a_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l_Lean_PrettyPrinter_ppExpr(v_e_337_, v_a_338_, v_a_339_, v_a_340_, v_a_341_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos___lam__0(lean_object* v_e_344_, lean_object* v_optsPerPos_345_, lean_object* v_delab_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_){
_start:
{
lean_object* v___x_352_; 
lean_inc(v___y_350_);
lean_inc_ref(v___y_349_);
lean_inc_ref(v_e_344_);
v___x_352_ = l_Lean_PrettyPrinter_delabCore___redArg(v_e_344_, v_optsPerPos_345_, v_delab_346_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
if (lean_obj_tag(v___x_352_) == 0)
{
lean_object* v_a_353_; lean_object* v_fst_354_; lean_object* v_snd_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_383_; 
v_a_353_ = lean_ctor_get(v___x_352_, 0);
lean_inc(v_a_353_);
lean_dec_ref(v___x_352_);
v_fst_354_ = lean_ctor_get(v_a_353_, 0);
v_snd_355_ = lean_ctor_get(v_a_353_, 1);
v_isSharedCheck_383_ = !lean_is_exclusive(v_a_353_);
if (v_isSharedCheck_383_ == 0)
{
v___x_357_ = v_a_353_;
v_isShared_358_ = v_isSharedCheck_383_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_snd_355_);
lean_inc(v_fst_354_);
lean_dec(v_a_353_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_383_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___y_360_; lean_object* v___x_380_; 
lean_inc_ref(v___y_349_);
v___x_380_ = l_Lean_PrettyPrinter_ppTerm(v_fst_354_, v___y_349_, v___y_350_);
if (lean_obj_tag(v___x_380_) == 0)
{
lean_object* v_a_381_; lean_object* v___x_382_; 
v_a_381_ = lean_ctor_get(v___x_380_, 0);
lean_inc(v_a_381_);
lean_dec_ref(v___x_380_);
v___x_382_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes___redArg(v_e_344_, v_a_381_, v___y_349_);
lean_dec_ref(v___y_349_);
v___y_360_ = v___x_382_;
goto v___jp_359_;
}
else
{
lean_dec_ref(v___y_349_);
lean_dec_ref(v_e_344_);
v___y_360_ = v___x_380_;
goto v___jp_359_;
}
v___jp_359_:
{
if (lean_obj_tag(v___y_360_) == 0)
{
lean_object* v_a_361_; lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_371_; 
v_a_361_ = lean_ctor_get(v___y_360_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___y_360_);
if (v_isSharedCheck_371_ == 0)
{
v___x_363_ = v___y_360_;
v_isShared_364_ = v_isSharedCheck_371_;
goto v_resetjp_362_;
}
else
{
lean_inc(v_a_361_);
lean_dec(v___y_360_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_371_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
lean_object* v___x_366_; 
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 0, v_a_361_);
v___x_366_ = v___x_357_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_361_);
lean_ctor_set(v_reuseFailAlloc_370_, 1, v_snd_355_);
v___x_366_ = v_reuseFailAlloc_370_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
lean_object* v___x_368_; 
if (v_isShared_364_ == 0)
{
lean_ctor_set(v___x_363_, 0, v___x_366_);
v___x_368_ = v___x_363_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v___x_366_);
v___x_368_ = v_reuseFailAlloc_369_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
return v___x_368_;
}
}
}
}
else
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_379_; 
lean_del_object(v___x_357_);
lean_dec(v_snd_355_);
v_a_372_ = lean_ctor_get(v___y_360_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v___y_360_);
if (v_isSharedCheck_379_ == 0)
{
v___x_374_ = v___y_360_;
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___y_360_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_377_; 
if (v_isShared_375_ == 0)
{
v___x_377_ = v___x_374_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_a_372_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
}
}
}
else
{
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
lean_dec(v___y_350_);
lean_dec_ref(v___y_349_);
lean_dec_ref(v_e_344_);
v_a_384_ = lean_ctor_get(v___x_352_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_352_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v___x_352_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v___x_352_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_a_384_);
v___x_389_ = v_reuseFailAlloc_390_;
goto v_reusejp_388_;
}
v_reusejp_388_:
{
return v___x_389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos___lam__0___boxed(lean_object* v_e_392_, lean_object* v_optsPerPos_393_, lean_object* v_delab_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Lean_PrettyPrinter_ppExprWithInfos___lam__0(v_e_392_, v_optsPerPos_393_, v_delab_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos(lean_object* v_e_401_, lean_object* v_optsPerPos_402_, lean_object* v_delab_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_){
_start:
{
lean_object* v_lctx_409_; lean_object* v_options_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v_fst_414_; lean_object* v___f_415_; lean_object* v___x_416_; 
v_lctx_409_ = lean_ctor_get(v_a_404_, 2);
v_options_410_ = lean_ctor_get(v_a_406_, 2);
v___x_411_ = lean_box(1);
lean_inc_ref(v_options_410_);
v___x_412_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_412_, 0, v_options_410_);
lean_ctor_set(v___x_412_, 1, v___x_411_);
lean_ctor_set(v___x_412_, 2, v___x_411_);
lean_inc_ref(v_lctx_409_);
v___x_413_ = l_Lean_LocalContext_sanitizeNames(v_lctx_409_, v___x_412_);
v_fst_414_ = lean_ctor_get(v___x_413_, 0);
lean_inc(v_fst_414_);
lean_dec_ref(v___x_413_);
v___f_415_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppExprWithInfos___lam__0___boxed), 8, 3);
lean_closure_set(v___f_415_, 0, v_e_401_);
lean_closure_set(v___f_415_, 1, v_optsPerPos_402_);
lean_closure_set(v___f_415_, 2, v_delab_403_);
v___x_416_ = l_Lean_Meta_withLCtx_x27___at___00Lean_PrettyPrinter_ppUsing_spec__0___redArg(v_fst_414_, v___f_415_, v_a_404_, v_a_405_, v_a_406_, v_a_407_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprWithInfos___boxed(lean_object* v_e_417_, lean_object* v_optsPerPos_418_, lean_object* v_delab_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_){
_start:
{
lean_object* v_res_425_; 
v_res_425_ = l_Lean_PrettyPrinter_ppExprWithInfos(v_e_417_, v_optsPerPos_418_, v_delab_419_, v_a_420_, v_a_421_, v_a_422_, v_a_423_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_PrettyPrinter_ppConstNameWithInfos_spec__0(lean_object* v_a_426_, lean_object* v_a_427_){
_start:
{
if (lean_obj_tag(v_a_426_) == 0)
{
lean_object* v___x_428_; 
v___x_428_ = l_List_reverse___redArg(v_a_427_);
return v___x_428_;
}
else
{
lean_object* v_head_429_; lean_object* v_tail_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_439_; 
v_head_429_ = lean_ctor_get(v_a_426_, 0);
v_tail_430_ = lean_ctor_get(v_a_426_, 1);
v_isSharedCheck_439_ = !lean_is_exclusive(v_a_426_);
if (v_isSharedCheck_439_ == 0)
{
v___x_432_ = v_a_426_;
v_isShared_433_ = v_isSharedCheck_439_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_tail_430_);
lean_inc(v_head_429_);
lean_dec(v_a_426_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_439_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_434_; lean_object* v___x_436_; 
v___x_434_ = l_Lean_mkLevelParam(v_head_429_);
if (v_isShared_433_ == 0)
{
lean_ctor_set(v___x_432_, 1, v_a_427_);
lean_ctor_set(v___x_432_, 0, v___x_434_);
v___x_436_ = v___x_432_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v___x_434_);
lean_ctor_set(v_reuseFailAlloc_438_, 1, v_a_427_);
v___x_436_ = v_reuseFailAlloc_438_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
v_a_426_ = v_tail_430_;
v_a_427_ = v___x_436_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos(lean_object* v_constName_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_){
_start:
{
lean_object* v___x_457_; lean_object* v_env_458_; uint8_t v___x_459_; lean_object* v___x_460_; 
v___x_457_ = lean_st_ref_get(v_a_455_);
v_env_458_ = lean_ctor_get(v___x_457_, 0);
lean_inc_ref(v_env_458_);
lean_dec(v___x_457_);
v___x_459_ = 0;
lean_inc(v_constName_451_);
v___x_460_ = l_Lean_Environment_find_x3f(v_env_458_, v_constName_451_, v___x_459_);
if (lean_obj_tag(v___x_460_) == 1)
{
lean_object* v_val_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
v_val_461_ = lean_ctor_get(v___x_460_, 0);
lean_inc(v_val_461_);
lean_dec_ref(v___x_460_);
v___x_462_ = ((lean_object*)(l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__4));
v___x_463_ = l_Lean_ConstantInfo_levelParams(v_val_461_);
lean_dec(v_val_461_);
v___x_464_ = lean_box(0);
v___x_465_ = l_List_mapTR_loop___at___00Lean_PrettyPrinter_ppConstNameWithInfos_spec__0(v___x_463_, v___x_464_);
v___x_466_ = l_Lean_Expr_const___override(v_constName_451_, v___x_465_);
v___x_467_ = lean_box(1);
v___x_468_ = l_Lean_PrettyPrinter_ppExprWithInfos(v___x_466_, v___x_467_, v___x_462_, v_a_452_, v_a_453_, v_a_454_, v_a_455_);
return v___x_468_;
}
else
{
lean_object* v_options_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v_fst_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_499_; 
lean_dec(v___x_460_);
lean_dec(v_a_453_);
lean_dec_ref(v_a_452_);
v_options_469_ = lean_ctor_get(v_a_454_, 2);
v___x_470_ = lean_mk_syntax_ident(v_constName_451_);
v___x_471_ = lean_box(1);
lean_inc_ref(v_options_469_);
v___x_472_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_472_, 0, v_options_469_);
lean_ctor_set(v___x_472_, 1, v___x_471_);
lean_ctor_set(v___x_472_, 2, v___x_471_);
v___x_473_ = l_Lean_sanitizeSyntax(v___x_470_, v___x_472_);
v_fst_474_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_499_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_499_ == 0)
{
lean_object* v_unused_500_; 
v_unused_500_ = lean_ctor_get(v___x_473_, 1);
lean_dec(v_unused_500_);
v___x_476_ = v___x_473_;
v_isShared_477_ = v_isSharedCheck_499_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_fst_474_);
lean_dec(v___x_473_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_499_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_478_ = ((lean_object*)(l_Lean_PrettyPrinter_ppTerm___closed__1));
v___x_479_ = l_Lean_PrettyPrinter_formatCategory(v___x_478_, v_fst_474_, v_a_454_, v_a_455_);
if (lean_obj_tag(v___x_479_) == 0)
{
lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_490_; 
v_a_480_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_490_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_490_ == 0)
{
v___x_482_ = v___x_479_;
v_isShared_483_ = v_isSharedCheck_490_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_479_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_490_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_485_; 
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 1, v___x_471_);
lean_ctor_set(v___x_476_, 0, v_a_480_);
v___x_485_ = v___x_476_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_a_480_);
lean_ctor_set(v_reuseFailAlloc_489_, 1, v___x_471_);
v___x_485_ = v_reuseFailAlloc_489_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
lean_object* v___x_487_; 
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 0, v___x_485_);
v___x_487_ = v___x_482_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v___x_485_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
}
else
{
lean_object* v_a_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_498_; 
lean_del_object(v___x_476_);
v_a_491_ = lean_ctor_get(v___x_479_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_479_);
if (v_isSharedCheck_498_ == 0)
{
v___x_493_ = v___x_479_;
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_a_491_);
lean_dec(v___x_479_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_a_491_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppConstNameWithInfos___boxed(lean_object* v_constName_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Lean_PrettyPrinter_ppConstNameWithInfos(v_constName_501_, v_a_502_, v_a_503_, v_a_504_, v_a_505_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_PrettyPrinter_ppExprLegacy_spec__0(lean_object* v_opts_508_, lean_object* v_opt_509_){
_start:
{
lean_object* v_name_510_; lean_object* v_defValue_511_; lean_object* v_map_512_; lean_object* v___x_513_; 
v_name_510_ = lean_ctor_get(v_opt_509_, 0);
v_defValue_511_ = lean_ctor_get(v_opt_509_, 1);
v_map_512_ = lean_ctor_get(v_opts_508_, 0);
v___x_513_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_512_, v_name_510_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_inc(v_defValue_511_);
return v_defValue_511_;
}
else
{
lean_object* v_val_514_; 
v_val_514_ = lean_ctor_get(v___x_513_, 0);
lean_inc(v_val_514_);
lean_dec_ref(v___x_513_);
if (lean_obj_tag(v_val_514_) == 3)
{
lean_object* v_v_515_; 
v_v_515_ = lean_ctor_get(v_val_514_, 0);
lean_inc(v_v_515_);
lean_dec_ref(v_val_514_);
return v_v_515_;
}
else
{
lean_dec(v_val_514_);
lean_inc(v_defValue_511_);
return v_defValue_511_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_PrettyPrinter_ppExprLegacy_spec__0___boxed(lean_object* v_opts_516_, lean_object* v_opt_517_){
_start:
{
lean_object* v_res_518_; 
v_res_518_ = l_Lean_Option_get___at___00Lean_PrettyPrinter_ppExprLegacy_spec__0(v_opts_516_, v_opt_517_);
lean_dec_ref(v_opt_517_);
lean_dec_ref(v_opts_516_);
return v_res_518_;
}
}
static uint64_t _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__1(void){
_start:
{
lean_object* v___x_525_; uint64_t v___x_526_; 
v___x_525_ = ((lean_object*)(l_Lean_PrettyPrinter_ppExprLegacy___closed__0));
v___x_526_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_525_);
return v___x_526_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__2(void){
_start:
{
uint64_t v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_527_ = lean_uint64_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__1, &l_Lean_PrettyPrinter_ppExprLegacy___closed__1_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__1);
v___x_528_ = ((lean_object*)(l_Lean_PrettyPrinter_ppExprLegacy___closed__0));
v___x_529_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_529_, 0, v___x_528_);
lean_ctor_set_uint64(v___x_529_, sizeof(void*)*1, v___x_527_);
return v___x_529_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__4(void){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_532_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__5(void){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_533_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__4, &l_Lean_PrettyPrinter_ppExprLegacy___closed__4_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__4);
v___x_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_534_, 0, v___x_533_);
return v___x_534_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__6(void){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_535_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__5, &l_Lean_PrettyPrinter_ppExprLegacy___closed__5_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__5);
v___x_536_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
lean_ctor_set(v___x_536_, 1, v___x_535_);
lean_ctor_set(v___x_536_, 2, v___x_535_);
lean_ctor_set(v___x_536_, 3, v___x_535_);
lean_ctor_set(v___x_536_, 4, v___x_535_);
lean_ctor_set(v___x_536_, 5, v___x_535_);
return v___x_536_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__7(void){
_start:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_537_ = lean_unsigned_to_nat(32u);
v___x_538_ = lean_mk_empty_array_with_capacity(v___x_537_);
v___x_539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
return v___x_539_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__8(void){
_start:
{
size_t v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_540_ = ((size_t)5ULL);
v___x_541_ = lean_unsigned_to_nat(0u);
v___x_542_ = lean_unsigned_to_nat(32u);
v___x_543_ = lean_mk_empty_array_with_capacity(v___x_542_);
v___x_544_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__7, &l_Lean_PrettyPrinter_ppExprLegacy___closed__7_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__7);
v___x_545_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_545_, 0, v___x_544_);
lean_ctor_set(v___x_545_, 1, v___x_543_);
lean_ctor_set(v___x_545_, 2, v___x_541_);
lean_ctor_set(v___x_545_, 3, v___x_541_);
lean_ctor_set_usize(v___x_545_, 4, v___x_540_);
return v___x_545_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__9(void){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_546_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__5, &l_Lean_PrettyPrinter_ppExprLegacy___closed__5_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__5);
v___x_547_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
lean_ctor_set(v___x_547_, 1, v___x_546_);
lean_ctor_set(v___x_547_, 2, v___x_546_);
lean_ctor_set(v___x_547_, 3, v___x_546_);
lean_ctor_set(v___x_547_, 4, v___x_546_);
return v___x_547_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__10(void){
_start:
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__5, &l_Lean_PrettyPrinter_ppExprLegacy___closed__5_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__5);
v___x_549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_549_, 0, v___x_548_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
return v___x_549_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__11(void){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_550_ = l_Lean_NameSet_empty;
v___x_551_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__8, &l_Lean_PrettyPrinter_ppExprLegacy___closed__8_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__8);
v___x_552_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_552_, 0, v___x_551_);
lean_ctor_set(v___x_552_, 1, v___x_551_);
lean_ctor_set(v___x_552_, 2, v___x_550_);
return v___x_552_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__12(void){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_553_ = lean_unsigned_to_nat(1u);
v___x_554_ = l_Lean_firstFrontendMacroScope;
v___x_555_ = lean_nat_add(v___x_554_, v___x_553_);
return v___x_555_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__17(void){
_start:
{
lean_object* v___x_566_; uint64_t v___x_567_; lean_object* v___x_568_; 
v___x_566_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__8, &l_Lean_PrettyPrinter_ppExprLegacy___closed__8_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__8);
v___x_567_ = 0ULL;
v___x_568_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_568_, 0, v___x_566_);
lean_ctor_set_uint64(v___x_568_, sizeof(void*)*1, v___x_567_);
return v___x_568_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__18(void){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; uint8_t v___x_571_; lean_object* v___x_572_; 
v___x_569_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__8, &l_Lean_PrettyPrinter_ppExprLegacy___closed__8_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__8);
v___x_570_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__5, &l_Lean_PrettyPrinter_ppExprLegacy___closed__5_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__5);
v___x_571_ = 1;
v___x_572_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_572_, 0, v___x_570_);
lean_ctor_set(v___x_572_, 1, v___x_570_);
lean_ctor_set(v___x_572_, 2, v___x_569_);
lean_ctor_set_uint8(v___x_572_, sizeof(void*)*3, v___x_571_);
return v___x_572_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__21(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = l_Lean_Options_empty;
v___x_576_ = l_Lean_Core_getMaxHeartbeats(v___x_575_);
return v___x_576_;
}
}
static uint8_t _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__22(void){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; uint8_t v___x_579_; 
v___x_577_ = l_Lean_diagnostics;
v___x_578_ = l_Lean_Options_empty;
v___x_579_ = l_Lean_Option_get___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes_spec__0(v___x_578_, v___x_577_);
return v___x_579_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__23(void){
_start:
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_580_ = l_Lean_maxRecDepth;
v___x_581_ = l_Lean_Options_empty;
v___x_582_ = l_Lean_Option_get___at___00Lean_PrettyPrinter_ppExprLegacy_spec__0(v___x_581_, v___x_580_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprLegacy(lean_object* v_env_583_, lean_object* v_mctx_584_, lean_object* v_lctx_585_, lean_object* v_opts_586_, lean_object* v_e_587_){
_start:
{
lean_object* v___x_589_; uint8_t v___x_590_; uint8_t v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; uint8_t v___y_614_; lean_object* v___y_615_; lean_object* v___y_616_; lean_object* v_fileName_617_; lean_object* v_fileMap_618_; lean_object* v_currRecDepth_619_; lean_object* v_ref_620_; lean_object* v_currNamespace_621_; lean_object* v_openDecls_622_; lean_object* v_initHeartbeats_623_; lean_object* v_maxHeartbeats_624_; lean_object* v_quotContext_625_; lean_object* v_currMacroScope_626_; lean_object* v_cancelTk_x3f_627_; uint8_t v_suppressElabErrors_628_; lean_object* v_inheritedTraceOptions_629_; lean_object* v___y_630_; uint8_t v___y_664_; lean_object* v___y_665_; lean_object* v___y_666_; lean_object* v___y_667_; lean_object* v___y_668_; uint8_t v___y_683_; lean_object* v___y_684_; lean_object* v___y_685_; lean_object* v___y_686_; lean_object* v___y_687_; uint8_t v___y_688_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v_env_718_; lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; lean_object* v___y_723_; lean_object* v___y_724_; uint8_t v___y_755_; uint8_t v___x_775_; 
v___x_589_ = lean_box(1);
v___x_590_ = 0;
v___x_591_ = 1;
v___x_592_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__2, &l_Lean_PrettyPrinter_ppExprLegacy___closed__2_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__2);
v___x_593_ = lean_unsigned_to_nat(0u);
v___x_594_ = ((lean_object*)(l_Lean_PrettyPrinter_ppExprLegacy___closed__3));
v___x_595_ = lean_box(0);
v___x_596_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_596_, 0, v___x_592_);
lean_ctor_set(v___x_596_, 1, v___x_589_);
lean_ctor_set(v___x_596_, 2, v_lctx_585_);
lean_ctor_set(v___x_596_, 3, v___x_594_);
lean_ctor_set(v___x_596_, 4, v___x_595_);
lean_ctor_set(v___x_596_, 5, v___x_593_);
lean_ctor_set(v___x_596_, 6, v___x_595_);
lean_ctor_set_uint8(v___x_596_, sizeof(void*)*7, v___x_590_);
lean_ctor_set_uint8(v___x_596_, sizeof(void*)*7 + 1, v___x_590_);
lean_ctor_set_uint8(v___x_596_, sizeof(void*)*7 + 2, v___x_590_);
lean_ctor_set_uint8(v___x_596_, sizeof(void*)*7 + 3, v___x_591_);
v___x_597_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__6, &l_Lean_PrettyPrinter_ppExprLegacy___closed__6_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__6);
v___x_598_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__8, &l_Lean_PrettyPrinter_ppExprLegacy___closed__8_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__8);
v___x_599_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__9, &l_Lean_PrettyPrinter_ppExprLegacy___closed__9_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__9);
v___x_600_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__10, &l_Lean_PrettyPrinter_ppExprLegacy___closed__10_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__10);
v___x_601_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__11, &l_Lean_PrettyPrinter_ppExprLegacy___closed__11_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__11);
v___x_602_ = lean_io_get_num_heartbeats();
v___x_603_ = l_Lean_firstFrontendMacroScope;
v___x_604_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__12, &l_Lean_PrettyPrinter_ppExprLegacy___closed__12_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__12);
v___x_605_ = ((lean_object*)(l_Lean_PrettyPrinter_ppExprLegacy___closed__15));
v___x_606_ = lean_box(0);
v___x_607_ = lean_box(0);
v___x_608_ = ((lean_object*)(l_Lean_PrettyPrinter_ppExprLegacy___closed__16));
v___x_609_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__17, &l_Lean_PrettyPrinter_ppExprLegacy___closed__17_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__17);
v___x_610_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__18, &l_Lean_PrettyPrinter_ppExprLegacy___closed__18_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__18);
v___x_611_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_611_, 0, v_env_583_);
lean_ctor_set(v___x_611_, 1, v___x_604_);
lean_ctor_set(v___x_611_, 2, v___x_605_);
lean_ctor_set(v___x_611_, 3, v___x_608_);
lean_ctor_set(v___x_611_, 4, v___x_609_);
lean_ctor_set(v___x_611_, 5, v___x_600_);
lean_ctor_set(v___x_611_, 6, v___x_601_);
lean_ctor_set(v___x_611_, 7, v___x_610_);
lean_ctor_set(v___x_611_, 8, v___x_594_);
v___x_612_ = lean_st_mk_ref(v___x_611_);
v___x_708_ = l_Lean_inheritedTraceOptions;
v___x_709_ = lean_st_ref_get(v___x_708_);
v___x_710_ = lean_st_ref_get(v___x_612_);
v___x_711_ = ((lean_object*)(l_Lean_PrettyPrinter_ppExprLegacy___closed__20));
v___x_712_ = l_Lean_instInhabitedFileMap_default;
v___x_713_ = l_Lean_Options_empty;
v___x_714_ = lean_unsigned_to_nat(1000u);
v___x_715_ = lean_box(0);
v___x_716_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__21, &l_Lean_PrettyPrinter_ppExprLegacy___closed__21_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__21);
v___x_717_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_717_, 0, v___x_711_);
lean_ctor_set(v___x_717_, 1, v___x_712_);
lean_ctor_set(v___x_717_, 2, v___x_713_);
lean_ctor_set(v___x_717_, 3, v___x_593_);
lean_ctor_set(v___x_717_, 4, v___x_714_);
lean_ctor_set(v___x_717_, 5, v___x_715_);
lean_ctor_set(v___x_717_, 6, v___x_606_);
lean_ctor_set(v___x_717_, 7, v___x_607_);
lean_ctor_set(v___x_717_, 8, v___x_602_);
lean_ctor_set(v___x_717_, 9, v___x_716_);
lean_ctor_set(v___x_717_, 10, v___x_606_);
lean_ctor_set(v___x_717_, 11, v___x_603_);
lean_ctor_set(v___x_717_, 12, v___x_595_);
lean_ctor_set(v___x_717_, 13, v___x_709_);
lean_ctor_set_uint8(v___x_717_, sizeof(void*)*14, v___x_590_);
lean_ctor_set_uint8(v___x_717_, sizeof(void*)*14 + 1, v___x_590_);
v_env_718_ = lean_ctor_get(v___x_710_, 0);
lean_inc_ref(v_env_718_);
lean_dec(v___x_710_);
v___x_719_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_719_, 0, v_mctx_584_);
lean_ctor_set(v___x_719_, 1, v___x_597_);
lean_ctor_set(v___x_719_, 2, v___x_589_);
lean_ctor_set(v___x_719_, 3, v___x_598_);
lean_ctor_set(v___x_719_, 4, v___x_599_);
v___x_720_ = l_Lean_diagnostics;
v___x_721_ = lean_uint8_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__22, &l_Lean_PrettyPrinter_ppExprLegacy___closed__22_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__22);
v___x_775_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_718_);
lean_dec_ref(v_env_718_);
if (v___x_775_ == 0)
{
if (v___x_721_ == 0)
{
lean_inc(v___x_612_);
v___y_723_ = v___x_717_;
v___y_724_ = v___x_612_;
goto v___jp_722_;
}
else
{
v___y_755_ = v___x_775_;
goto v___jp_754_;
}
}
else
{
v___y_755_ = v___x_721_;
goto v___jp_754_;
}
v___jp_613_:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_631_ = l_Lean_Option_get___at___00Lean_PrettyPrinter_ppExprLegacy_spec__0(v_opts_586_, v___y_616_);
lean_dec_ref(v___y_616_);
v___x_632_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_632_, 0, v_fileName_617_);
lean_ctor_set(v___x_632_, 1, v_fileMap_618_);
lean_ctor_set(v___x_632_, 2, v_opts_586_);
lean_ctor_set(v___x_632_, 3, v_currRecDepth_619_);
lean_ctor_set(v___x_632_, 4, v___x_631_);
lean_ctor_set(v___x_632_, 5, v_ref_620_);
lean_ctor_set(v___x_632_, 6, v_currNamespace_621_);
lean_ctor_set(v___x_632_, 7, v_openDecls_622_);
lean_ctor_set(v___x_632_, 8, v_initHeartbeats_623_);
lean_ctor_set(v___x_632_, 9, v_maxHeartbeats_624_);
lean_ctor_set(v___x_632_, 10, v_quotContext_625_);
lean_ctor_set(v___x_632_, 11, v_currMacroScope_626_);
lean_ctor_set(v___x_632_, 12, v_cancelTk_x3f_627_);
lean_ctor_set(v___x_632_, 13, v_inheritedTraceOptions_629_);
lean_ctor_set_uint8(v___x_632_, sizeof(void*)*14, v___y_614_);
lean_ctor_set_uint8(v___x_632_, sizeof(void*)*14 + 1, v_suppressElabErrors_628_);
lean_inc(v___y_615_);
v___x_633_ = l_Lean_PrettyPrinter_ppExpr(v_e_587_, v___x_596_, v___y_615_, v___x_632_, v___y_630_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_643_; 
v_a_634_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_643_ == 0)
{
v___x_636_ = v___x_633_;
v_isShared_637_ = v_isSharedCheck_643_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_633_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_643_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_641_; 
v___x_638_ = lean_st_ref_get(v___y_615_);
lean_dec(v___y_615_);
lean_dec(v___x_638_);
v___x_639_ = lean_st_ref_get(v___x_612_);
lean_dec(v___x_612_);
lean_dec(v___x_639_);
if (v_isShared_637_ == 0)
{
v___x_641_ = v___x_636_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_a_634_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
}
else
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_662_; 
lean_dec(v___y_615_);
lean_dec(v___x_612_);
v_a_644_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_662_ == 0)
{
v___x_646_ = v___x_633_;
v_isShared_647_ = v_isSharedCheck_662_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v___x_633_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_662_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
if (lean_obj_tag(v_a_644_) == 0)
{
lean_object* v_msg_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_652_; 
v_msg_648_ = lean_ctor_get(v_a_644_, 1);
lean_inc_ref(v_msg_648_);
lean_dec_ref(v_a_644_);
v___x_649_ = l_Lean_MessageData_toString(v_msg_648_);
v___x_650_ = lean_mk_io_user_error(v___x_649_);
if (v_isShared_647_ == 0)
{
lean_ctor_set(v___x_646_, 0, v___x_650_);
v___x_652_ = v___x_646_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v___x_650_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
else
{
lean_object* v_id_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_660_; 
v_id_654_ = lean_ctor_get(v_a_644_, 0);
lean_inc(v_id_654_);
lean_dec_ref(v_a_644_);
v___x_655_ = ((lean_object*)(l_Lean_PrettyPrinter_ppExprLegacy___closed__19));
v___x_656_ = l_Nat_reprFast(v_id_654_);
v___x_657_ = lean_string_append(v___x_655_, v___x_656_);
lean_dec_ref(v___x_656_);
v___x_658_ = lean_mk_io_user_error(v___x_657_);
if (v_isShared_647_ == 0)
{
lean_ctor_set(v___x_646_, 0, v___x_658_);
v___x_660_ = v___x_646_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v___x_658_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
}
}
v___jp_663_:
{
lean_object* v_fileName_669_; lean_object* v_fileMap_670_; lean_object* v_currRecDepth_671_; lean_object* v_ref_672_; lean_object* v_currNamespace_673_; lean_object* v_openDecls_674_; lean_object* v_initHeartbeats_675_; lean_object* v_maxHeartbeats_676_; lean_object* v_quotContext_677_; lean_object* v_currMacroScope_678_; lean_object* v_cancelTk_x3f_679_; uint8_t v_suppressElabErrors_680_; lean_object* v_inheritedTraceOptions_681_; 
v_fileName_669_ = lean_ctor_get(v___y_667_, 0);
lean_inc_ref(v_fileName_669_);
v_fileMap_670_ = lean_ctor_get(v___y_667_, 1);
lean_inc_ref(v_fileMap_670_);
v_currRecDepth_671_ = lean_ctor_get(v___y_667_, 3);
lean_inc(v_currRecDepth_671_);
v_ref_672_ = lean_ctor_get(v___y_667_, 5);
lean_inc(v_ref_672_);
v_currNamespace_673_ = lean_ctor_get(v___y_667_, 6);
lean_inc(v_currNamespace_673_);
v_openDecls_674_ = lean_ctor_get(v___y_667_, 7);
lean_inc(v_openDecls_674_);
v_initHeartbeats_675_ = lean_ctor_get(v___y_667_, 8);
lean_inc(v_initHeartbeats_675_);
v_maxHeartbeats_676_ = lean_ctor_get(v___y_667_, 9);
lean_inc(v_maxHeartbeats_676_);
v_quotContext_677_ = lean_ctor_get(v___y_667_, 10);
lean_inc(v_quotContext_677_);
v_currMacroScope_678_ = lean_ctor_get(v___y_667_, 11);
lean_inc(v_currMacroScope_678_);
v_cancelTk_x3f_679_ = lean_ctor_get(v___y_667_, 12);
lean_inc(v_cancelTk_x3f_679_);
v_suppressElabErrors_680_ = lean_ctor_get_uint8(v___y_667_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_681_ = lean_ctor_get(v___y_667_, 13);
lean_inc_ref(v_inheritedTraceOptions_681_);
lean_dec_ref(v___y_667_);
v___y_614_ = v___y_664_;
v___y_615_ = v___y_665_;
v___y_616_ = v___y_666_;
v_fileName_617_ = v_fileName_669_;
v_fileMap_618_ = v_fileMap_670_;
v_currRecDepth_619_ = v_currRecDepth_671_;
v_ref_620_ = v_ref_672_;
v_currNamespace_621_ = v_currNamespace_673_;
v_openDecls_622_ = v_openDecls_674_;
v_initHeartbeats_623_ = v_initHeartbeats_675_;
v_maxHeartbeats_624_ = v_maxHeartbeats_676_;
v_quotContext_625_ = v_quotContext_677_;
v_currMacroScope_626_ = v_currMacroScope_678_;
v_cancelTk_x3f_627_ = v_cancelTk_x3f_679_;
v_suppressElabErrors_628_ = v_suppressElabErrors_680_;
v_inheritedTraceOptions_629_ = v_inheritedTraceOptions_681_;
v___y_630_ = v___y_668_;
goto v___jp_613_;
}
v___jp_682_:
{
if (v___y_688_ == 0)
{
lean_object* v___x_689_; lean_object* v_env_690_; lean_object* v_nextMacroScope_691_; lean_object* v_ngen_692_; lean_object* v_auxDeclNGen_693_; lean_object* v_traceState_694_; lean_object* v_messages_695_; lean_object* v_infoState_696_; lean_object* v_snapshotTasks_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_706_; 
v___x_689_ = lean_st_ref_take(v___y_684_);
v_env_690_ = lean_ctor_get(v___x_689_, 0);
v_nextMacroScope_691_ = lean_ctor_get(v___x_689_, 1);
v_ngen_692_ = lean_ctor_get(v___x_689_, 2);
v_auxDeclNGen_693_ = lean_ctor_get(v___x_689_, 3);
v_traceState_694_ = lean_ctor_get(v___x_689_, 4);
v_messages_695_ = lean_ctor_get(v___x_689_, 6);
v_infoState_696_ = lean_ctor_get(v___x_689_, 7);
v_snapshotTasks_697_ = lean_ctor_get(v___x_689_, 8);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_706_ == 0)
{
lean_object* v_unused_707_; 
v_unused_707_ = lean_ctor_get(v___x_689_, 5);
lean_dec(v_unused_707_);
v___x_699_ = v___x_689_;
v_isShared_700_ = v_isSharedCheck_706_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_snapshotTasks_697_);
lean_inc(v_infoState_696_);
lean_inc(v_messages_695_);
lean_inc(v_traceState_694_);
lean_inc(v_auxDeclNGen_693_);
lean_inc(v_ngen_692_);
lean_inc(v_nextMacroScope_691_);
lean_inc(v_env_690_);
lean_dec(v___x_689_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_706_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v___x_701_; lean_object* v___x_703_; 
v___x_701_ = l_Lean_Kernel_enableDiag(v_env_690_, v___y_683_);
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 5, v___x_600_);
lean_ctor_set(v___x_699_, 0, v___x_701_);
v___x_703_ = v___x_699_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v___x_701_);
lean_ctor_set(v_reuseFailAlloc_705_, 1, v_nextMacroScope_691_);
lean_ctor_set(v_reuseFailAlloc_705_, 2, v_ngen_692_);
lean_ctor_set(v_reuseFailAlloc_705_, 3, v_auxDeclNGen_693_);
lean_ctor_set(v_reuseFailAlloc_705_, 4, v_traceState_694_);
lean_ctor_set(v_reuseFailAlloc_705_, 5, v___x_600_);
lean_ctor_set(v_reuseFailAlloc_705_, 6, v_messages_695_);
lean_ctor_set(v_reuseFailAlloc_705_, 7, v_infoState_696_);
lean_ctor_set(v_reuseFailAlloc_705_, 8, v_snapshotTasks_697_);
v___x_703_ = v_reuseFailAlloc_705_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
lean_object* v___x_704_; 
v___x_704_ = lean_st_ref_set(v___y_684_, v___x_703_);
v___y_664_ = v___y_683_;
v___y_665_ = v___y_686_;
v___y_666_ = v___y_685_;
v___y_667_ = v___y_687_;
v___y_668_ = v___y_684_;
goto v___jp_663_;
}
}
}
else
{
v___y_664_ = v___y_683_;
v___y_665_ = v___y_686_;
v___y_666_ = v___y_685_;
v___y_667_ = v___y_687_;
v___y_668_ = v___y_684_;
goto v___jp_663_;
}
}
v___jp_722_:
{
lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v_fileName_727_; lean_object* v_fileMap_728_; lean_object* v_currRecDepth_729_; lean_object* v_ref_730_; lean_object* v_currNamespace_731_; lean_object* v_openDecls_732_; lean_object* v_initHeartbeats_733_; lean_object* v_maxHeartbeats_734_; lean_object* v_quotContext_735_; lean_object* v_currMacroScope_736_; lean_object* v_cancelTk_x3f_737_; uint8_t v_suppressElabErrors_738_; lean_object* v_inheritedTraceOptions_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_751_; 
v___x_725_ = lean_st_mk_ref(v___x_719_);
v___x_726_ = lean_st_ref_get(v___y_724_);
v_fileName_727_ = lean_ctor_get(v___y_723_, 0);
v_fileMap_728_ = lean_ctor_get(v___y_723_, 1);
v_currRecDepth_729_ = lean_ctor_get(v___y_723_, 3);
v_ref_730_ = lean_ctor_get(v___y_723_, 5);
v_currNamespace_731_ = lean_ctor_get(v___y_723_, 6);
v_openDecls_732_ = lean_ctor_get(v___y_723_, 7);
v_initHeartbeats_733_ = lean_ctor_get(v___y_723_, 8);
v_maxHeartbeats_734_ = lean_ctor_get(v___y_723_, 9);
v_quotContext_735_ = lean_ctor_get(v___y_723_, 10);
v_currMacroScope_736_ = lean_ctor_get(v___y_723_, 11);
v_cancelTk_x3f_737_ = lean_ctor_get(v___y_723_, 12);
v_suppressElabErrors_738_ = lean_ctor_get_uint8(v___y_723_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_739_ = lean_ctor_get(v___y_723_, 13);
v_isSharedCheck_751_ = !lean_is_exclusive(v___y_723_);
if (v_isSharedCheck_751_ == 0)
{
lean_object* v_unused_752_; lean_object* v_unused_753_; 
v_unused_752_ = lean_ctor_get(v___y_723_, 4);
lean_dec(v_unused_752_);
v_unused_753_ = lean_ctor_get(v___y_723_, 2);
lean_dec(v_unused_753_);
v___x_741_ = v___y_723_;
v_isShared_742_ = v_isSharedCheck_751_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_inheritedTraceOptions_739_);
lean_inc(v_cancelTk_x3f_737_);
lean_inc(v_currMacroScope_736_);
lean_inc(v_quotContext_735_);
lean_inc(v_maxHeartbeats_734_);
lean_inc(v_initHeartbeats_733_);
lean_inc(v_openDecls_732_);
lean_inc(v_currNamespace_731_);
lean_inc(v_ref_730_);
lean_inc(v_currRecDepth_729_);
lean_inc(v_fileMap_728_);
lean_inc(v_fileName_727_);
lean_dec(v___y_723_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_751_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v_env_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_747_; 
v_env_743_ = lean_ctor_get(v___x_726_, 0);
lean_inc_ref(v_env_743_);
lean_dec(v___x_726_);
v___x_744_ = l_Lean_maxRecDepth;
v___x_745_ = lean_obj_once(&l_Lean_PrettyPrinter_ppExprLegacy___closed__23, &l_Lean_PrettyPrinter_ppExprLegacy___closed__23_once, _init_l_Lean_PrettyPrinter_ppExprLegacy___closed__23);
lean_inc_ref(v_inheritedTraceOptions_739_);
lean_inc(v_cancelTk_x3f_737_);
lean_inc(v_currMacroScope_736_);
lean_inc(v_quotContext_735_);
lean_inc(v_maxHeartbeats_734_);
lean_inc(v_initHeartbeats_733_);
lean_inc(v_openDecls_732_);
lean_inc(v_currNamespace_731_);
lean_inc(v_ref_730_);
lean_inc(v_currRecDepth_729_);
lean_inc_ref(v_fileMap_728_);
lean_inc_ref(v_fileName_727_);
if (v_isShared_742_ == 0)
{
lean_ctor_set(v___x_741_, 4, v___x_745_);
lean_ctor_set(v___x_741_, 2, v___x_713_);
v___x_747_ = v___x_741_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_fileName_727_);
lean_ctor_set(v_reuseFailAlloc_750_, 1, v_fileMap_728_);
lean_ctor_set(v_reuseFailAlloc_750_, 2, v___x_713_);
lean_ctor_set(v_reuseFailAlloc_750_, 3, v_currRecDepth_729_);
lean_ctor_set(v_reuseFailAlloc_750_, 4, v___x_745_);
lean_ctor_set(v_reuseFailAlloc_750_, 5, v_ref_730_);
lean_ctor_set(v_reuseFailAlloc_750_, 6, v_currNamespace_731_);
lean_ctor_set(v_reuseFailAlloc_750_, 7, v_openDecls_732_);
lean_ctor_set(v_reuseFailAlloc_750_, 8, v_initHeartbeats_733_);
lean_ctor_set(v_reuseFailAlloc_750_, 9, v_maxHeartbeats_734_);
lean_ctor_set(v_reuseFailAlloc_750_, 10, v_quotContext_735_);
lean_ctor_set(v_reuseFailAlloc_750_, 11, v_currMacroScope_736_);
lean_ctor_set(v_reuseFailAlloc_750_, 12, v_cancelTk_x3f_737_);
lean_ctor_set(v_reuseFailAlloc_750_, 13, v_inheritedTraceOptions_739_);
lean_ctor_set_uint8(v_reuseFailAlloc_750_, sizeof(void*)*14 + 1, v_suppressElabErrors_738_);
v___x_747_ = v_reuseFailAlloc_750_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
uint8_t v___x_748_; uint8_t v___x_749_; 
lean_ctor_set_uint8(v___x_747_, sizeof(void*)*14, v___x_721_);
v___x_748_ = l_Lean_Option_get___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes_spec__0(v_opts_586_, v___x_720_);
v___x_749_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_743_);
lean_dec_ref(v_env_743_);
if (v___x_749_ == 0)
{
if (v___x_748_ == 0)
{
lean_dec_ref(v___x_747_);
v___y_614_ = v___x_748_;
v___y_615_ = v___x_725_;
v___y_616_ = v___x_744_;
v_fileName_617_ = v_fileName_727_;
v_fileMap_618_ = v_fileMap_728_;
v_currRecDepth_619_ = v_currRecDepth_729_;
v_ref_620_ = v_ref_730_;
v_currNamespace_621_ = v_currNamespace_731_;
v_openDecls_622_ = v_openDecls_732_;
v_initHeartbeats_623_ = v_initHeartbeats_733_;
v_maxHeartbeats_624_ = v_maxHeartbeats_734_;
v_quotContext_625_ = v_quotContext_735_;
v_currMacroScope_626_ = v_currMacroScope_736_;
v_cancelTk_x3f_627_ = v_cancelTk_x3f_737_;
v_suppressElabErrors_628_ = v_suppressElabErrors_738_;
v_inheritedTraceOptions_629_ = v_inheritedTraceOptions_739_;
v___y_630_ = v___y_724_;
goto v___jp_613_;
}
else
{
lean_dec_ref(v_inheritedTraceOptions_739_);
lean_dec(v_cancelTk_x3f_737_);
lean_dec(v_currMacroScope_736_);
lean_dec(v_quotContext_735_);
lean_dec(v_maxHeartbeats_734_);
lean_dec(v_initHeartbeats_733_);
lean_dec(v_openDecls_732_);
lean_dec(v_currNamespace_731_);
lean_dec(v_ref_730_);
lean_dec(v_currRecDepth_729_);
lean_dec_ref(v_fileMap_728_);
lean_dec_ref(v_fileName_727_);
v___y_683_ = v___x_748_;
v___y_684_ = v___y_724_;
v___y_685_ = v___x_744_;
v___y_686_ = v___x_725_;
v___y_687_ = v___x_747_;
v___y_688_ = v___x_749_;
goto v___jp_682_;
}
}
else
{
lean_dec_ref(v_inheritedTraceOptions_739_);
lean_dec(v_cancelTk_x3f_737_);
lean_dec(v_currMacroScope_736_);
lean_dec(v_quotContext_735_);
lean_dec(v_maxHeartbeats_734_);
lean_dec(v_initHeartbeats_733_);
lean_dec(v_openDecls_732_);
lean_dec(v_currNamespace_731_);
lean_dec(v_ref_730_);
lean_dec(v_currRecDepth_729_);
lean_dec_ref(v_fileMap_728_);
lean_dec_ref(v_fileName_727_);
v___y_683_ = v___x_748_;
v___y_684_ = v___y_724_;
v___y_685_ = v___x_744_;
v___y_686_ = v___x_725_;
v___y_687_ = v___x_747_;
v___y_688_ = v___x_748_;
goto v___jp_682_;
}
}
}
}
v___jp_754_:
{
if (v___y_755_ == 0)
{
lean_object* v___x_756_; lean_object* v_env_757_; lean_object* v_nextMacroScope_758_; lean_object* v_ngen_759_; lean_object* v_auxDeclNGen_760_; lean_object* v_traceState_761_; lean_object* v_messages_762_; lean_object* v_infoState_763_; lean_object* v_snapshotTasks_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_773_; 
v___x_756_ = lean_st_ref_take(v___x_612_);
v_env_757_ = lean_ctor_get(v___x_756_, 0);
v_nextMacroScope_758_ = lean_ctor_get(v___x_756_, 1);
v_ngen_759_ = lean_ctor_get(v___x_756_, 2);
v_auxDeclNGen_760_ = lean_ctor_get(v___x_756_, 3);
v_traceState_761_ = lean_ctor_get(v___x_756_, 4);
v_messages_762_ = lean_ctor_get(v___x_756_, 6);
v_infoState_763_ = lean_ctor_get(v___x_756_, 7);
v_snapshotTasks_764_ = lean_ctor_get(v___x_756_, 8);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_773_ == 0)
{
lean_object* v_unused_774_; 
v_unused_774_ = lean_ctor_get(v___x_756_, 5);
lean_dec(v_unused_774_);
v___x_766_ = v___x_756_;
v_isShared_767_ = v_isSharedCheck_773_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_snapshotTasks_764_);
lean_inc(v_infoState_763_);
lean_inc(v_messages_762_);
lean_inc(v_traceState_761_);
lean_inc(v_auxDeclNGen_760_);
lean_inc(v_ngen_759_);
lean_inc(v_nextMacroScope_758_);
lean_inc(v_env_757_);
lean_dec(v___x_756_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_773_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_768_; lean_object* v___x_770_; 
v___x_768_ = l_Lean_Kernel_enableDiag(v_env_757_, v___x_721_);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 5, v___x_600_);
lean_ctor_set(v___x_766_, 0, v___x_768_);
v___x_770_ = v___x_766_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_768_);
lean_ctor_set(v_reuseFailAlloc_772_, 1, v_nextMacroScope_758_);
lean_ctor_set(v_reuseFailAlloc_772_, 2, v_ngen_759_);
lean_ctor_set(v_reuseFailAlloc_772_, 3, v_auxDeclNGen_760_);
lean_ctor_set(v_reuseFailAlloc_772_, 4, v_traceState_761_);
lean_ctor_set(v_reuseFailAlloc_772_, 5, v___x_600_);
lean_ctor_set(v_reuseFailAlloc_772_, 6, v_messages_762_);
lean_ctor_set(v_reuseFailAlloc_772_, 7, v_infoState_763_);
lean_ctor_set(v_reuseFailAlloc_772_, 8, v_snapshotTasks_764_);
v___x_770_ = v_reuseFailAlloc_772_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
lean_object* v___x_771_; 
v___x_771_ = lean_st_ref_set(v___x_612_, v___x_770_);
lean_inc(v___x_612_);
v___y_723_ = v___x_717_;
v___y_724_ = v___x_612_;
goto v___jp_722_;
}
}
}
else
{
lean_inc(v___x_612_);
v___y_723_ = v___x_717_;
v___y_724_ = v___x_612_;
goto v___jp_722_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppExprLegacy___boxed(lean_object* v_env_776_, lean_object* v_mctx_777_, lean_object* v_lctx_778_, lean_object* v_opts_779_, lean_object* v_e_780_, lean_object* v_a_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l_Lean_PrettyPrinter_ppExprLegacy(v_env_776_, v_mctx_777_, v_lctx_778_, v_opts_779_, v_e_780_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTactic(lean_object* v_stx_786_, lean_object* v_a_787_, lean_object* v_a_788_){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_790_ = ((lean_object*)(l_Lean_PrettyPrinter_ppTactic___closed__1));
v___x_791_ = l_Lean_PrettyPrinter_ppCategory(v___x_790_, v_stx_786_, v_a_787_, v_a_788_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppTactic___boxed(lean_object* v_stx_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_Lean_PrettyPrinter_ppTactic(v_stx_792_, v_a_793_, v_a_794_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCommand(lean_object* v_stx_800_, lean_object* v_a_801_, lean_object* v_a_802_){
_start:
{
lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_804_ = ((lean_object*)(l_Lean_PrettyPrinter_ppCommand___closed__1));
v___x_805_ = l_Lean_PrettyPrinter_ppCategory(v___x_804_, v_stx_800_, v_a_801_, v_a_802_);
return v___x_805_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppCommand___boxed(lean_object* v_stx_806_, lean_object* v_a_807_, lean_object* v_a_808_, lean_object* v_a_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lean_PrettyPrinter_ppCommand(v_stx_806_, v_a_807_, v_a_808_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppModule(lean_object* v_stx_813_, lean_object* v_a_814_, lean_object* v_a_815_){
_start:
{
lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_817_ = ((lean_object*)(l_Lean_PrettyPrinter_ppModule___closed__0));
lean_inc(v_a_815_);
lean_inc_ref(v_a_814_);
v___x_818_ = l_Lean_PrettyPrinter_parenthesize(v___x_817_, v_stx_813_, v_a_814_, v_a_815_);
if (lean_obj_tag(v___x_818_) == 0)
{
lean_object* v_a_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
v_a_819_ = lean_ctor_get(v___x_818_, 0);
lean_inc(v_a_819_);
lean_dec_ref(v___x_818_);
v___x_820_ = ((lean_object*)(l_Lean_PrettyPrinter_ppModule___closed__1));
v___x_821_ = l_Lean_PrettyPrinter_format(v___x_820_, v_a_819_, v_a_814_, v_a_815_);
return v___x_821_;
}
else
{
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
lean_dec(v_a_815_);
lean_dec_ref(v_a_814_);
v_a_822_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v___x_818_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_818_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_827_; 
if (v_isShared_825_ == 0)
{
v___x_827_ = v___x_824_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_a_822_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppModule___boxed(lean_object* v_stx_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l_Lean_PrettyPrinter_ppModule(v_stx_830_, v_a_831_, v_a_832_);
return v_res_834_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_835_; 
v___x_835_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_835_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0);
v___x_837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
return v___x_837_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_838_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_839_ = lean_unsigned_to_nat(0u);
v___x_840_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_840_, 0, v___x_839_);
lean_ctor_set(v___x_840_, 1, v___x_839_);
lean_ctor_set(v___x_840_, 2, v___x_839_);
lean_ctor_set(v___x_840_, 3, v___x_838_);
lean_ctor_set(v___x_840_, 4, v___x_838_);
lean_ctor_set(v___x_840_, 5, v___x_838_);
lean_ctor_set(v___x_840_, 6, v___x_838_);
lean_ctor_set(v___x_840_, 7, v___x_838_);
lean_ctor_set(v___x_840_, 8, v___x_838_);
return v___x_840_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_841_ = lean_unsigned_to_nat(32u);
v___x_842_ = lean_mk_empty_array_with_capacity(v___x_841_);
v___x_843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_843_, 0, v___x_842_);
return v___x_843_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4(void){
_start:
{
size_t v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_844_ = ((size_t)5ULL);
v___x_845_ = lean_unsigned_to_nat(0u);
v___x_846_ = lean_unsigned_to_nat(32u);
v___x_847_ = lean_mk_empty_array_with_capacity(v___x_846_);
v___x_848_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_849_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_849_, 0, v___x_848_);
lean_ctor_set(v___x_849_, 1, v___x_847_);
lean_ctor_set(v___x_849_, 2, v___x_845_);
lean_ctor_set(v___x_849_, 3, v___x_845_);
lean_ctor_set_usize(v___x_849_, 4, v___x_844_);
return v___x_849_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_850_ = lean_box(1);
v___x_851_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4);
v___x_852_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_853_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_853_, 0, v___x_852_);
lean_ctor_set(v___x_853_, 1, v___x_851_);
lean_ctor_set(v___x_853_, 2, v___x_850_);
return v___x_853_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7(void){
_start:
{
lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_855_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6));
v___x_856_ = l_Lean_stringToMessageData(v___x_855_);
return v___x_856_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9(void){
_start:
{
lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_858_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8));
v___x_859_ = l_Lean_stringToMessageData(v___x_858_);
return v___x_859_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11(void){
_start:
{
lean_object* v___x_861_; lean_object* v___x_862_; 
v___x_861_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10));
v___x_862_ = l_Lean_stringToMessageData(v___x_861_);
return v___x_862_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13(void){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_864_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12));
v___x_865_ = l_Lean_stringToMessageData(v___x_864_);
return v___x_865_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15(void){
_start:
{
lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_867_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__14));
v___x_868_ = l_Lean_stringToMessageData(v___x_867_);
return v___x_868_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17(void){
_start:
{
lean_object* v___x_870_; lean_object* v___x_871_; 
v___x_870_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__16));
v___x_871_ = l_Lean_stringToMessageData(v___x_870_);
return v___x_871_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19(void){
_start:
{
lean_object* v___x_873_; lean_object* v___x_874_; 
v___x_873_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__18));
v___x_874_ = l_Lean_stringToMessageData(v___x_873_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_msg_875_, lean_object* v_declHint_876_, lean_object* v___y_877_){
_start:
{
lean_object* v___x_879_; lean_object* v_env_880_; uint8_t v___x_881_; 
v___x_879_ = lean_st_ref_get(v___y_877_);
v_env_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc_ref(v_env_880_);
lean_dec(v___x_879_);
v___x_881_ = l_Lean_Name_isAnonymous(v_declHint_876_);
if (v___x_881_ == 0)
{
uint8_t v_isExporting_882_; 
v_isExporting_882_ = lean_ctor_get_uint8(v_env_880_, sizeof(void*)*8);
if (v_isExporting_882_ == 0)
{
lean_object* v___x_883_; 
lean_dec_ref(v_env_880_);
lean_dec(v_declHint_876_);
v___x_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_883_, 0, v_msg_875_);
return v___x_883_;
}
else
{
lean_object* v___x_884_; uint8_t v___x_885_; 
lean_inc_ref(v_env_880_);
v___x_884_ = l_Lean_Environment_setExporting(v_env_880_, v___x_881_);
lean_inc(v_declHint_876_);
lean_inc_ref(v___x_884_);
v___x_885_ = l_Lean_Environment_contains(v___x_884_, v_declHint_876_, v_isExporting_882_);
if (v___x_885_ == 0)
{
lean_object* v___x_886_; 
lean_dec_ref(v___x_884_);
lean_dec_ref(v_env_880_);
lean_dec(v_declHint_876_);
v___x_886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_886_, 0, v_msg_875_);
return v___x_886_;
}
else
{
lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v_c_892_; lean_object* v___x_893_; 
v___x_887_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2);
v___x_888_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5);
v___x_889_ = l_Lean_Options_empty;
v___x_890_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_890_, 0, v___x_884_);
lean_ctor_set(v___x_890_, 1, v___x_887_);
lean_ctor_set(v___x_890_, 2, v___x_888_);
lean_ctor_set(v___x_890_, 3, v___x_889_);
lean_inc(v_declHint_876_);
v___x_891_ = l_Lean_MessageData_ofConstName(v_declHint_876_, v___x_881_);
v_c_892_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_892_, 0, v___x_890_);
lean_ctor_set(v_c_892_, 1, v___x_891_);
v___x_893_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_880_, v_declHint_876_);
if (lean_obj_tag(v___x_893_) == 0)
{
lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
lean_dec_ref(v_env_880_);
lean_dec(v_declHint_876_);
v___x_894_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7);
v___x_895_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
lean_ctor_set(v___x_895_, 1, v_c_892_);
v___x_896_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9);
v___x_897_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_897_, 0, v___x_895_);
lean_ctor_set(v___x_897_, 1, v___x_896_);
v___x_898_ = l_Lean_MessageData_note(v___x_897_);
v___x_899_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_899_, 0, v_msg_875_);
lean_ctor_set(v___x_899_, 1, v___x_898_);
v___x_900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
return v___x_900_;
}
else
{
lean_object* v_val_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_936_; 
v_val_901_ = lean_ctor_get(v___x_893_, 0);
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_893_);
if (v_isSharedCheck_936_ == 0)
{
v___x_903_ = v___x_893_;
v_isShared_904_ = v_isSharedCheck_936_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_val_901_);
lean_dec(v___x_893_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_936_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v_mod_908_; uint8_t v___x_909_; 
v___x_905_ = lean_box(0);
v___x_906_ = l_Lean_Environment_header(v_env_880_);
lean_dec_ref(v_env_880_);
v___x_907_ = l_Lean_EnvironmentHeader_moduleNames(v___x_906_);
v_mod_908_ = lean_array_get(v___x_905_, v___x_907_, v_val_901_);
lean_dec(v_val_901_);
lean_dec_ref(v___x_907_);
v___x_909_ = l_Lean_isPrivateName(v_declHint_876_);
lean_dec(v_declHint_876_);
if (v___x_909_ == 0)
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_921_; 
v___x_910_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11);
v___x_911_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
lean_ctor_set(v___x_911_, 1, v_c_892_);
v___x_912_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13);
v___x_913_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_911_);
lean_ctor_set(v___x_913_, 1, v___x_912_);
v___x_914_ = l_Lean_MessageData_ofName(v_mod_908_);
v___x_915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_915_, 0, v___x_913_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v___x_916_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__15);
v___x_917_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_917_, 0, v___x_915_);
lean_ctor_set(v___x_917_, 1, v___x_916_);
v___x_918_ = l_Lean_MessageData_note(v___x_917_);
v___x_919_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_919_, 0, v_msg_875_);
lean_ctor_set(v___x_919_, 1, v___x_918_);
if (v_isShared_904_ == 0)
{
lean_ctor_set_tag(v___x_903_, 0);
lean_ctor_set(v___x_903_, 0, v___x_919_);
v___x_921_ = v___x_903_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v___x_919_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
else
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_934_; 
v___x_923_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7);
v___x_924_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_924_, 0, v___x_923_);
lean_ctor_set(v___x_924_, 1, v_c_892_);
v___x_925_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__17);
v___x_926_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_926_, 0, v___x_924_);
lean_ctor_set(v___x_926_, 1, v___x_925_);
v___x_927_ = l_Lean_MessageData_ofName(v_mod_908_);
v___x_928_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_928_, 0, v___x_926_);
lean_ctor_set(v___x_928_, 1, v___x_927_);
v___x_929_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__19);
v___x_930_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_930_, 0, v___x_928_);
lean_ctor_set(v___x_930_, 1, v___x_929_);
v___x_931_ = l_Lean_MessageData_note(v___x_930_);
v___x_932_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_932_, 0, v_msg_875_);
lean_ctor_set(v___x_932_, 1, v___x_931_);
if (v_isShared_904_ == 0)
{
lean_ctor_set_tag(v___x_903_, 0);
lean_ctor_set(v___x_903_, 0, v___x_932_);
v___x_934_ = v___x_903_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v___x_932_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_937_; 
lean_dec_ref(v_env_880_);
lean_dec(v_declHint_876_);
v___x_937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_937_, 0, v_msg_875_);
return v___x_937_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_msg_938_, lean_object* v_declHint_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_938_, v_declHint_939_, v___y_940_);
lean_dec(v___y_940_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_msg_943_, lean_object* v_declHint_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_){
_start:
{
lean_object* v___x_950_; lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_960_; 
v___x_950_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_943_, v_declHint_944_, v___y_948_);
v_a_951_ = lean_ctor_get(v___x_950_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_950_);
if (v_isSharedCheck_960_ == 0)
{
v___x_953_ = v___x_950_;
v_isShared_954_ = v_isSharedCheck_960_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_950_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_960_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_958_; 
v___x_955_ = l_Lean_unknownIdentifierMessageTag;
v___x_956_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_956_, 0, v___x_955_);
lean_ctor_set(v___x_956_, 1, v_a_951_);
if (v_isShared_954_ == 0)
{
lean_ctor_set(v___x_953_, 0, v___x_956_);
v___x_958_ = v___x_953_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v___x_956_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_msg_961_, lean_object* v_declHint_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3(v_msg_961_, v_declHint_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
lean_dec(v___y_964_);
lean_dec_ref(v___y_963_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__7(lean_object* v_msgData_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_){
_start:
{
lean_object* v___x_975_; lean_object* v_env_976_; lean_object* v___x_977_; lean_object* v_mctx_978_; lean_object* v_lctx_979_; lean_object* v_options_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_975_ = lean_st_ref_get(v___y_973_);
v_env_976_ = lean_ctor_get(v___x_975_, 0);
lean_inc_ref(v_env_976_);
lean_dec(v___x_975_);
v___x_977_ = lean_st_ref_get(v___y_971_);
v_mctx_978_ = lean_ctor_get(v___x_977_, 0);
lean_inc_ref(v_mctx_978_);
lean_dec(v___x_977_);
v_lctx_979_ = lean_ctor_get(v___y_970_, 2);
v_options_980_ = lean_ctor_get(v___y_972_, 2);
lean_inc_ref(v_options_980_);
lean_inc_ref(v_lctx_979_);
v___x_981_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_981_, 0, v_env_976_);
lean_ctor_set(v___x_981_, 1, v_mctx_978_);
lean_ctor_set(v___x_981_, 2, v_lctx_979_);
lean_ctor_set(v___x_981_, 3, v_options_980_);
v___x_982_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_981_);
lean_ctor_set(v___x_982_, 1, v_msgData_969_);
v___x_983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_983_, 0, v___x_982_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__7___boxed(lean_object* v_msgData_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__7(v_msgData_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(lean_object* v_msg_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_){
_start:
{
lean_object* v_ref_997_; lean_object* v___x_998_; lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1007_; 
v_ref_997_ = lean_ctor_get(v___y_994_, 5);
v___x_998_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6_spec__7(v_msg_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_);
v_a_999_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_1001_ = v___x_998_;
v_isShared_1002_ = v_isSharedCheck_1007_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_998_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1007_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1003_; lean_object* v___x_1005_; 
lean_inc(v_ref_997_);
v___x_1003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1003_, 0, v_ref_997_);
lean_ctor_set(v___x_1003_, 1, v_a_999_);
if (v_isShared_1002_ == 0)
{
lean_ctor_set_tag(v___x_1001_, 1);
lean_ctor_set(v___x_1001_, 0, v___x_1003_);
v___x_1005_ = v___x_1001_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v___x_1003_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v_msg_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(v_msg_1008_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_);
lean_dec(v___y_1012_);
lean_dec_ref(v___y_1011_);
lean_dec(v___y_1010_);
lean_dec_ref(v___y_1009_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_ref_1015_, lean_object* v_msg_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_){
_start:
{
lean_object* v_fileName_1022_; lean_object* v_fileMap_1023_; lean_object* v_options_1024_; lean_object* v_currRecDepth_1025_; lean_object* v_maxRecDepth_1026_; lean_object* v_ref_1027_; lean_object* v_currNamespace_1028_; lean_object* v_openDecls_1029_; lean_object* v_initHeartbeats_1030_; lean_object* v_maxHeartbeats_1031_; lean_object* v_quotContext_1032_; lean_object* v_currMacroScope_1033_; uint8_t v_diag_1034_; lean_object* v_cancelTk_x3f_1035_; uint8_t v_suppressElabErrors_1036_; lean_object* v_inheritedTraceOptions_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1046_; 
v_fileName_1022_ = lean_ctor_get(v___y_1019_, 0);
v_fileMap_1023_ = lean_ctor_get(v___y_1019_, 1);
v_options_1024_ = lean_ctor_get(v___y_1019_, 2);
v_currRecDepth_1025_ = lean_ctor_get(v___y_1019_, 3);
v_maxRecDepth_1026_ = lean_ctor_get(v___y_1019_, 4);
v_ref_1027_ = lean_ctor_get(v___y_1019_, 5);
v_currNamespace_1028_ = lean_ctor_get(v___y_1019_, 6);
v_openDecls_1029_ = lean_ctor_get(v___y_1019_, 7);
v_initHeartbeats_1030_ = lean_ctor_get(v___y_1019_, 8);
v_maxHeartbeats_1031_ = lean_ctor_get(v___y_1019_, 9);
v_quotContext_1032_ = lean_ctor_get(v___y_1019_, 10);
v_currMacroScope_1033_ = lean_ctor_get(v___y_1019_, 11);
v_diag_1034_ = lean_ctor_get_uint8(v___y_1019_, sizeof(void*)*14);
v_cancelTk_x3f_1035_ = lean_ctor_get(v___y_1019_, 12);
v_suppressElabErrors_1036_ = lean_ctor_get_uint8(v___y_1019_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1037_ = lean_ctor_get(v___y_1019_, 13);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___y_1019_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1039_ = v___y_1019_;
v_isShared_1040_ = v_isSharedCheck_1046_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_inheritedTraceOptions_1037_);
lean_inc(v_cancelTk_x3f_1035_);
lean_inc(v_currMacroScope_1033_);
lean_inc(v_quotContext_1032_);
lean_inc(v_maxHeartbeats_1031_);
lean_inc(v_initHeartbeats_1030_);
lean_inc(v_openDecls_1029_);
lean_inc(v_currNamespace_1028_);
lean_inc(v_ref_1027_);
lean_inc(v_maxRecDepth_1026_);
lean_inc(v_currRecDepth_1025_);
lean_inc(v_options_1024_);
lean_inc(v_fileMap_1023_);
lean_inc(v_fileName_1022_);
lean_dec(v___y_1019_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1046_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
lean_object* v_ref_1041_; lean_object* v___x_1043_; 
v_ref_1041_ = l_Lean_replaceRef(v_ref_1015_, v_ref_1027_);
lean_dec(v_ref_1027_);
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 5, v_ref_1041_);
v___x_1043_ = v___x_1039_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_fileName_1022_);
lean_ctor_set(v_reuseFailAlloc_1045_, 1, v_fileMap_1023_);
lean_ctor_set(v_reuseFailAlloc_1045_, 2, v_options_1024_);
lean_ctor_set(v_reuseFailAlloc_1045_, 3, v_currRecDepth_1025_);
lean_ctor_set(v_reuseFailAlloc_1045_, 4, v_maxRecDepth_1026_);
lean_ctor_set(v_reuseFailAlloc_1045_, 5, v_ref_1041_);
lean_ctor_set(v_reuseFailAlloc_1045_, 6, v_currNamespace_1028_);
lean_ctor_set(v_reuseFailAlloc_1045_, 7, v_openDecls_1029_);
lean_ctor_set(v_reuseFailAlloc_1045_, 8, v_initHeartbeats_1030_);
lean_ctor_set(v_reuseFailAlloc_1045_, 9, v_maxHeartbeats_1031_);
lean_ctor_set(v_reuseFailAlloc_1045_, 10, v_quotContext_1032_);
lean_ctor_set(v_reuseFailAlloc_1045_, 11, v_currMacroScope_1033_);
lean_ctor_set(v_reuseFailAlloc_1045_, 12, v_cancelTk_x3f_1035_);
lean_ctor_set(v_reuseFailAlloc_1045_, 13, v_inheritedTraceOptions_1037_);
lean_ctor_set_uint8(v_reuseFailAlloc_1045_, sizeof(void*)*14, v_diag_1034_);
lean_ctor_set_uint8(v_reuseFailAlloc_1045_, sizeof(void*)*14 + 1, v_suppressElabErrors_1036_);
v___x_1043_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
lean_object* v___x_1044_; 
v___x_1044_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(v_msg_1016_, v___y_1017_, v___y_1018_, v___x_1043_, v___y_1020_);
lean_dec_ref(v___x_1043_);
return v___x_1044_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_ref_1047_, lean_object* v_msg_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_1047_, v_msg_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
lean_dec(v___y_1052_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
lean_dec(v_ref_1047_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_ref_1055_, lean_object* v_msg_1056_, lean_object* v_declHint_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_){
_start:
{
lean_object* v___x_1063_; lean_object* v_a_1064_; lean_object* v___x_1065_; 
v___x_1063_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3(v_msg_1056_, v_declHint_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_);
v_a_1064_ = lean_ctor_get(v___x_1063_, 0);
lean_inc(v_a_1064_);
lean_dec_ref(v___x_1063_);
v___x_1065_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_1055_, v_a_1064_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_);
return v___x_1065_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_ref_1066_, lean_object* v_msg_1067_, lean_object* v_declHint_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_){
_start:
{
lean_object* v_res_1074_; 
v_res_1074_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1066_, v_msg_1067_, v_declHint_1068_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_);
lean_dec(v___y_1072_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
lean_dec(v_ref_1066_);
return v_res_1074_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1076_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__0));
v___x_1077_ = l_Lean_stringToMessageData(v___x_1076_);
return v___x_1077_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1079_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__2));
v___x_1080_ = l_Lean_stringToMessageData(v___x_1079_);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_1081_, lean_object* v_constName_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_){
_start:
{
lean_object* v___x_1088_; uint8_t v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1088_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1089_ = 0;
lean_inc(v_constName_1082_);
v___x_1090_ = l_Lean_MessageData_ofConstName(v_constName_1082_, v___x_1089_);
v___x_1091_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1088_);
lean_ctor_set(v___x_1091_, 1, v___x_1090_);
v___x_1092_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___closed__3);
v___x_1093_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1091_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
v___x_1094_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1081_, v___x_1093_, v_constName_1082_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_1095_, lean_object* v_constName_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg(v_ref_1095_, v_constName_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_);
lean_dec(v___y_1100_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec(v_ref_1095_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0___redArg(lean_object* v_constName_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_){
_start:
{
lean_object* v_ref_1109_; lean_object* v___x_1110_; 
v_ref_1109_ = lean_ctor_get(v___y_1106_, 5);
lean_inc(v_ref_1109_);
v___x_1110_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg(v_ref_1109_, v_constName_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
lean_dec(v_ref_1109_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_){
_start:
{
lean_object* v_res_1117_; 
v_res_1117_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0___redArg(v_constName_1111_, v___y_1112_, v___y_1113_, v___y_1114_, v___y_1115_);
lean_dec(v___y_1115_);
lean_dec(v___y_1113_);
lean_dec_ref(v___y_1112_);
return v_res_1117_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0(lean_object* v_constName_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_){
_start:
{
lean_object* v___x_1124_; lean_object* v_env_1125_; uint8_t v___x_1126_; lean_object* v___x_1127_; 
v___x_1124_ = lean_st_ref_get(v___y_1122_);
v_env_1125_ = lean_ctor_get(v___x_1124_, 0);
lean_inc_ref(v_env_1125_);
lean_dec(v___x_1124_);
v___x_1126_ = 0;
lean_inc(v_constName_1118_);
v___x_1127_ = l_Lean_Environment_find_x3f(v_env_1125_, v_constName_1118_, v___x_1126_);
if (lean_obj_tag(v___x_1127_) == 0)
{
lean_object* v___x_1128_; 
v___x_1128_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0___redArg(v_constName_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_);
return v___x_1128_;
}
else
{
lean_object* v_val_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1136_; 
lean_dec_ref(v___y_1121_);
lean_dec(v_constName_1118_);
v_val_1129_ = lean_ctor_get(v___x_1127_, 0);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1127_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1131_ = v___x_1127_;
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_val_1129_);
lean_dec(v___x_1127_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1134_; 
if (v_isShared_1132_ == 0)
{
lean_ctor_set_tag(v___x_1131_, 0);
v___x_1134_ = v___x_1131_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_val_1129_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0___boxed(lean_object* v_constName_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_){
_start:
{
lean_object* v_res_1143_; 
v_res_1143_ = l_Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0(v_constName_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
lean_dec(v___y_1141_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppSignature(lean_object* v_c_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_){
_start:
{
lean_object* v___x_1154_; 
lean_inc_ref(v_a_1151_);
lean_inc(v_c_1148_);
v___x_1154_ = l_Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0(v_c_1148_, v_a_1149_, v_a_1150_, v_a_1151_, v_a_1152_);
if (lean_obj_tag(v___x_1154_) == 0)
{
lean_object* v_a_1155_; lean_object* v___x_1157_; uint8_t v_isShared_1158_; uint8_t v_isSharedCheck_1216_; 
v_a_1155_ = lean_ctor_get(v___x_1154_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1154_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1157_ = v___x_1154_;
v_isShared_1158_ = v_isSharedCheck_1216_;
goto v_resetjp_1156_;
}
else
{
lean_inc(v_a_1155_);
lean_dec(v___x_1154_);
v___x_1157_ = lean_box(0);
v_isShared_1158_ = v_isSharedCheck_1216_;
goto v_resetjp_1156_;
}
v_resetjp_1156_:
{
lean_object* v_options_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; uint8_t v___x_1165_; 
v_options_1159_ = lean_ctor_get(v_a_1151_, 2);
v___x_1160_ = l_Lean_ConstantInfo_levelParams(v_a_1155_);
v___x_1161_ = lean_box(0);
v___x_1162_ = l_List_mapTR_loop___at___00Lean_PrettyPrinter_ppConstNameWithInfos_spec__0(v___x_1160_, v___x_1161_);
v___x_1163_ = l_Lean_Expr_const___override(v_c_1148_, v___x_1162_);
v___x_1164_ = l_Lean_pp_raw;
v___x_1165_ = l_Lean_Option_get___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_maybePrependExprSizes_spec__0(v_options_1159_, v___x_1164_);
if (v___x_1165_ == 0)
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; 
lean_del_object(v___x_1157_);
lean_dec(v_a_1155_);
v___x_1166_ = lean_box(1);
v___x_1167_ = ((lean_object*)(l_Lean_PrettyPrinter_ppSignature___closed__0));
lean_inc(v_a_1152_);
lean_inc_ref(v_a_1151_);
v___x_1168_ = l_Lean_PrettyPrinter_delabCore___redArg(v___x_1163_, v___x_1166_, v___x_1167_, v_a_1149_, v_a_1150_, v_a_1151_, v_a_1152_);
if (lean_obj_tag(v___x_1168_) == 0)
{
lean_object* v_a_1169_; lean_object* v_fst_1170_; lean_object* v_snd_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1195_; 
v_a_1169_ = lean_ctor_get(v___x_1168_, 0);
lean_inc(v_a_1169_);
lean_dec_ref(v___x_1168_);
v_fst_1170_ = lean_ctor_get(v_a_1169_, 0);
v_snd_1171_ = lean_ctor_get(v_a_1169_, 1);
v_isSharedCheck_1195_ = !lean_is_exclusive(v_a_1169_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1173_ = v_a_1169_;
v_isShared_1174_ = v_isSharedCheck_1195_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_snd_1171_);
lean_inc(v_fst_1170_);
lean_dec(v_a_1169_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1195_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1175_; 
v___x_1175_ = l_Lean_PrettyPrinter_ppTerm(v_fst_1170_, v_a_1151_, v_a_1152_);
if (lean_obj_tag(v___x_1175_) == 0)
{
lean_object* v_a_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1186_; 
v_a_1176_ = lean_ctor_get(v___x_1175_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1175_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1178_ = v___x_1175_;
v_isShared_1179_ = v_isSharedCheck_1186_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_a_1176_);
lean_dec(v___x_1175_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1186_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1181_; 
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 0, v_a_1176_);
v___x_1181_ = v___x_1173_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_a_1176_);
lean_ctor_set(v_reuseFailAlloc_1185_, 1, v_snd_1171_);
v___x_1181_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
lean_object* v___x_1183_; 
if (v_isShared_1179_ == 0)
{
lean_ctor_set(v___x_1178_, 0, v___x_1181_);
v___x_1183_ = v___x_1178_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v___x_1181_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
}
}
else
{
lean_object* v_a_1187_; lean_object* v___x_1189_; uint8_t v_isShared_1190_; uint8_t v_isSharedCheck_1194_; 
lean_del_object(v___x_1173_);
lean_dec(v_snd_1171_);
v_a_1187_ = lean_ctor_get(v___x_1175_, 0);
v_isSharedCheck_1194_ = !lean_is_exclusive(v___x_1175_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1189_ = v___x_1175_;
v_isShared_1190_ = v_isSharedCheck_1194_;
goto v_resetjp_1188_;
}
else
{
lean_inc(v_a_1187_);
lean_dec(v___x_1175_);
v___x_1189_ = lean_box(0);
v_isShared_1190_ = v_isSharedCheck_1194_;
goto v_resetjp_1188_;
}
v_resetjp_1188_:
{
lean_object* v___x_1192_; 
if (v_isShared_1190_ == 0)
{
v___x_1192_ = v___x_1189_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v_a_1187_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
return v___x_1192_;
}
}
}
}
}
else
{
lean_object* v_a_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1203_; 
lean_dec(v_a_1152_);
lean_dec_ref(v_a_1151_);
v_a_1196_ = lean_ctor_get(v___x_1168_, 0);
v_isSharedCheck_1203_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1198_ = v___x_1168_;
v_isShared_1199_ = v_isSharedCheck_1203_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_a_1196_);
lean_dec(v___x_1168_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1203_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___x_1201_; 
if (v_isShared_1199_ == 0)
{
v___x_1201_ = v___x_1198_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v_a_1196_);
v___x_1201_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
return v___x_1201_;
}
}
}
}
else
{
lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1214_; 
lean_dec(v_a_1152_);
lean_dec_ref(v_a_1151_);
lean_dec(v_a_1150_);
lean_dec_ref(v_a_1149_);
v___x_1204_ = lean_expr_dbg_to_string(v___x_1163_);
lean_dec_ref(v___x_1163_);
v___x_1205_ = ((lean_object*)(l_Lean_PrettyPrinter_ppSignature___closed__1));
v___x_1206_ = lean_string_append(v___x_1204_, v___x_1205_);
v___x_1207_ = l_Lean_ConstantInfo_type(v_a_1155_);
lean_dec(v_a_1155_);
v___x_1208_ = lean_expr_dbg_to_string(v___x_1207_);
lean_dec_ref(v___x_1207_);
v___x_1209_ = lean_string_append(v___x_1206_, v___x_1208_);
lean_dec_ref(v___x_1208_);
v___x_1210_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1209_);
v___x_1211_ = lean_box(1);
v___x_1212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1210_);
lean_ctor_set(v___x_1212_, 1, v___x_1211_);
if (v_isShared_1158_ == 0)
{
lean_ctor_set(v___x_1157_, 0, v___x_1212_);
v___x_1214_ = v___x_1157_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v___x_1212_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
}
else
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
lean_dec(v_a_1152_);
lean_dec_ref(v_a_1151_);
lean_dec(v_a_1150_);
lean_dec_ref(v_a_1149_);
lean_dec(v_c_1148_);
v_a_1217_ = lean_ctor_get(v___x_1154_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1154_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1154_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1154_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1217_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_ppSignature___boxed(lean_object* v_c_1225_, lean_object* v_a_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l_Lean_PrettyPrinter_ppSignature(v_c_1225_, v_a_1226_, v_a_1227_, v_a_1228_, v_a_1229_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0(lean_object* v_00_u03b1_1232_, lean_object* v_constName_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_){
_start:
{
lean_object* v___x_1239_; 
v___x_1239_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0___redArg(v_constName_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_);
return v___x_1239_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1240_, lean_object* v_constName_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_){
_start:
{
lean_object* v_res_1247_; 
v_res_1247_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0(v_00_u03b1_1240_, v_constName_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_);
lean_dec(v___y_1245_);
lean_dec(v___y_1243_);
lean_dec_ref(v___y_1242_);
return v_res_1247_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_1248_, lean_object* v_ref_1249_, lean_object* v_constName_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_){
_start:
{
lean_object* v___x_1256_; 
v___x_1256_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___redArg(v_ref_1249_, v_constName_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1257_, lean_object* v_ref_1258_, lean_object* v_constName_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_){
_start:
{
lean_object* v_res_1265_; 
v_res_1265_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1(v_00_u03b1_1257_, v_ref_1258_, v_constName_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
lean_dec(v___y_1263_);
lean_dec(v___y_1261_);
lean_dec_ref(v___y_1260_);
lean_dec(v_ref_1258_);
return v_res_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_1266_, lean_object* v_ref_1267_, lean_object* v_msg_1268_, lean_object* v_declHint_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_){
_start:
{
lean_object* v___x_1275_; 
v___x_1275_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2___redArg(v_ref_1267_, v_msg_1268_, v_declHint_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_);
return v___x_1275_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1276_, lean_object* v_ref_1277_, lean_object* v_msg_1278_, lean_object* v_declHint_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_){
_start:
{
lean_object* v_res_1285_; 
v_res_1285_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_1276_, v_ref_1277_, v_msg_1278_, v_declHint_1279_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_);
lean_dec(v___y_1283_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
lean_dec(v_ref_1277_);
return v_res_1285_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object* v_msg_1286_, lean_object* v_declHint_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_){
_start:
{
lean_object* v___x_1293_; 
v___x_1293_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_1286_, v_declHint_1287_, v___y_1291_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_msg_1294_, lean_object* v_declHint_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_msg_1294_, v_declHint_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_);
lean_dec(v___y_1299_);
lean_dec_ref(v___y_1298_);
lean_dec(v___y_1297_);
lean_dec_ref(v___y_1296_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b1_1302_, lean_object* v_ref_1303_, lean_object* v_msg_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_){
_start:
{
lean_object* v___x_1310_; 
v___x_1310_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_1303_, v_msg_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_);
return v___x_1310_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b1_1311_, lean_object* v_ref_1312_, lean_object* v_msg_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_){
_start:
{
lean_object* v_res_1319_; 
v_res_1319_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4(v_00_u03b1_1311_, v_ref_1312_, v_msg_1313_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_);
lean_dec(v___y_1317_);
lean_dec(v___y_1315_);
lean_dec_ref(v___y_1314_);
lean_dec(v_ref_1312_);
return v_res_1319_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6(lean_object* v_00_u03b1_1320_, lean_object* v_msg_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_){
_start:
{
lean_object* v___x_1327_; 
v___x_1327_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___redArg(v_msg_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_);
return v___x_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6___boxed(lean_object* v_00_u03b1_1328_, lean_object* v_msg_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_PrettyPrinter_ppSignature_spec__0_spec__0_spec__1_spec__2_spec__4_spec__6(v_00_u03b1_1328_, v_msg_1329_, v___y_1330_, v___y_1331_, v___y_1332_, v___y_1333_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
lean_dec(v___y_1331_);
lean_dec_ref(v___y_1330_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(lean_object* v_x_1336_){
_start:
{
switch(lean_obj_tag(v_x_1336_))
{
case 3:
{
lean_object* v_a_1337_; 
v_a_1337_ = lean_ctor_get(v_x_1336_, 1);
lean_inc_ref(v_a_1337_);
lean_dec_ref(v_x_1336_);
v_x_1336_ = v_a_1337_;
goto _start;
}
case 4:
{
lean_object* v_a_1339_; lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1348_; 
v_a_1339_ = lean_ctor_get(v_x_1336_, 0);
v_a_1340_ = lean_ctor_get(v_x_1336_, 1);
v_isSharedCheck_1348_ = !lean_is_exclusive(v_x_1336_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1342_ = v_x_1336_;
v_isShared_1343_ = v_isSharedCheck_1348_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_inc(v_a_1339_);
lean_dec(v_x_1336_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1348_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1344_; lean_object* v___x_1346_; 
v___x_1344_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_a_1340_);
if (v_isShared_1343_ == 0)
{
lean_ctor_set(v___x_1342_, 1, v___x_1344_);
v___x_1346_ = v___x_1342_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v_a_1339_);
lean_ctor_set(v_reuseFailAlloc_1347_, 1, v___x_1344_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
return v___x_1346_;
}
}
}
case 5:
{
lean_object* v_a_1349_; lean_object* v_a_1350_; lean_object* v___x_1352_; uint8_t v_isShared_1353_; uint8_t v_isSharedCheck_1358_; 
v_a_1349_ = lean_ctor_get(v_x_1336_, 0);
v_a_1350_ = lean_ctor_get(v_x_1336_, 1);
v_isSharedCheck_1358_ = !lean_is_exclusive(v_x_1336_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1352_ = v_x_1336_;
v_isShared_1353_ = v_isSharedCheck_1358_;
goto v_resetjp_1351_;
}
else
{
lean_inc(v_a_1350_);
lean_inc(v_a_1349_);
lean_dec(v_x_1336_);
v___x_1352_ = lean_box(0);
v_isShared_1353_ = v_isSharedCheck_1358_;
goto v_resetjp_1351_;
}
v_resetjp_1351_:
{
lean_object* v___x_1354_; lean_object* v___x_1356_; 
v___x_1354_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_a_1350_);
if (v_isShared_1353_ == 0)
{
lean_ctor_set(v___x_1352_, 1, v___x_1354_);
v___x_1356_ = v___x_1352_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_a_1349_);
lean_ctor_set(v_reuseFailAlloc_1357_, 1, v___x_1354_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
}
case 6:
{
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1367_; 
v_a_1359_ = lean_ctor_get(v_x_1336_, 0);
v_isSharedCheck_1367_ = !lean_is_exclusive(v_x_1336_);
if (v_isSharedCheck_1367_ == 0)
{
v___x_1361_ = v_x_1336_;
v_isShared_1362_ = v_isSharedCheck_1367_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v_x_1336_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1367_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___x_1363_; lean_object* v___x_1365_; 
v___x_1363_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_a_1359_);
if (v_isShared_1362_ == 0)
{
lean_ctor_set(v___x_1361_, 0, v___x_1363_);
v___x_1365_ = v___x_1361_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v___x_1363_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
return v___x_1365_;
}
}
}
case 7:
{
lean_object* v_a_1368_; lean_object* v_a_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1378_; 
v_a_1368_ = lean_ctor_get(v_x_1336_, 0);
v_a_1369_ = lean_ctor_get(v_x_1336_, 1);
v_isSharedCheck_1378_ = !lean_is_exclusive(v_x_1336_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1371_ = v_x_1336_;
v_isShared_1372_ = v_isSharedCheck_1378_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_a_1369_);
lean_inc(v_a_1368_);
lean_dec(v_x_1336_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1378_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1376_; 
v___x_1373_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_a_1368_);
v___x_1374_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_a_1369_);
if (v_isShared_1372_ == 0)
{
lean_ctor_set(v___x_1371_, 1, v___x_1374_);
lean_ctor_set(v___x_1371_, 0, v___x_1373_);
v___x_1376_ = v___x_1371_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v___x_1373_);
lean_ctor_set(v_reuseFailAlloc_1377_, 1, v___x_1374_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
return v___x_1376_;
}
}
}
case 8:
{
lean_object* v_a_1379_; lean_object* v_a_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1388_; 
v_a_1379_ = lean_ctor_get(v_x_1336_, 0);
v_a_1380_ = lean_ctor_get(v_x_1336_, 1);
v_isSharedCheck_1388_ = !lean_is_exclusive(v_x_1336_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1382_ = v_x_1336_;
v_isShared_1383_ = v_isSharedCheck_1388_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_a_1380_);
lean_inc(v_a_1379_);
lean_dec(v_x_1336_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1388_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v___x_1384_; lean_object* v___x_1386_; 
v___x_1384_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_a_1380_);
if (v_isShared_1383_ == 0)
{
lean_ctor_set(v___x_1382_, 1, v___x_1384_);
v___x_1386_ = v___x_1382_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1379_);
lean_ctor_set(v_reuseFailAlloc_1387_, 1, v___x_1384_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
case 9:
{
lean_object* v_data_1389_; lean_object* v_msg_1390_; lean_object* v_children_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1402_; 
v_data_1389_ = lean_ctor_get(v_x_1336_, 0);
v_msg_1390_ = lean_ctor_get(v_x_1336_, 1);
v_children_1391_ = lean_ctor_get(v_x_1336_, 2);
v_isSharedCheck_1402_ = !lean_is_exclusive(v_x_1336_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1393_ = v_x_1336_;
v_isShared_1394_ = v_isSharedCheck_1402_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_children_1391_);
lean_inc(v_msg_1390_);
lean_inc(v_data_1389_);
lean_dec(v_x_1336_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1402_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1395_; size_t v_sz_1396_; size_t v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1400_; 
v___x_1395_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_msg_1390_);
v_sz_1396_ = lean_array_size(v_children_1391_);
v___x_1397_ = ((size_t)0ULL);
v___x_1398_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext_spec__0(v_sz_1396_, v___x_1397_, v_children_1391_);
if (v_isShared_1394_ == 0)
{
lean_ctor_set(v___x_1393_, 2, v___x_1398_);
lean_ctor_set(v___x_1393_, 1, v___x_1395_);
v___x_1400_ = v___x_1393_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1401_; 
v_reuseFailAlloc_1401_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1401_, 0, v_data_1389_);
lean_ctor_set(v_reuseFailAlloc_1401_, 1, v___x_1395_);
lean_ctor_set(v_reuseFailAlloc_1401_, 2, v___x_1398_);
v___x_1400_ = v_reuseFailAlloc_1401_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
return v___x_1400_;
}
}
}
default: 
{
return v_x_1336_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext_spec__0(size_t v_sz_1403_, size_t v_i_1404_, lean_object* v_bs_1405_){
_start:
{
uint8_t v___x_1406_; 
v___x_1406_ = lean_usize_dec_lt(v_i_1404_, v_sz_1403_);
if (v___x_1406_ == 0)
{
return v_bs_1405_;
}
else
{
lean_object* v_v_1407_; lean_object* v___x_1408_; lean_object* v_bs_x27_1409_; lean_object* v___x_1410_; size_t v___x_1411_; size_t v___x_1412_; lean_object* v___x_1413_; 
v_v_1407_ = lean_array_uget(v_bs_1405_, v_i_1404_);
v___x_1408_ = lean_unsigned_to_nat(0u);
v_bs_x27_1409_ = lean_array_uset(v_bs_1405_, v_i_1404_, v___x_1408_);
v___x_1410_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_v_1407_);
v___x_1411_ = ((size_t)1ULL);
v___x_1412_ = lean_usize_add(v_i_1404_, v___x_1411_);
v___x_1413_ = lean_array_uset(v_bs_x27_1409_, v_i_1404_, v___x_1410_);
v_i_1404_ = v___x_1412_;
v_bs_1405_ = v___x_1413_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext_spec__0___boxed(lean_object* v_sz_1415_, lean_object* v_i_1416_, lean_object* v_bs_1417_){
_start:
{
size_t v_sz_boxed_1418_; size_t v_i_boxed_1419_; lean_object* v_res_1420_; 
v_sz_boxed_1418_ = lean_unbox_usize(v_sz_1415_);
lean_dec(v_sz_1415_);
v_i_boxed_1419_ = lean_unbox_usize(v_i_1416_);
lean_dec(v_i_1416_);
v_res_1420_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext_spec__0(v_sz_boxed_1418_, v_i_boxed_1419_, v_bs_1417_);
return v_res_1420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___redArg___lam__0(lean_object* v_throw_1421_, lean_object* v_x_1422_){
_start:
{
if (lean_obj_tag(v_x_1422_) == 0)
{
lean_object* v_ref_1423_; lean_object* v_msg_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1433_; 
v_ref_1423_ = lean_ctor_get(v_x_1422_, 0);
v_msg_1424_ = lean_ctor_get(v_x_1422_, 1);
v_isSharedCheck_1433_ = !lean_is_exclusive(v_x_1422_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1426_ = v_x_1422_;
v_isShared_1427_ = v_isSharedCheck_1433_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_msg_1424_);
lean_inc(v_ref_1423_);
lean_dec(v_x_1422_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1433_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1428_; lean_object* v___x_1430_; 
v___x_1428_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_msg_1424_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 1, v___x_1428_);
v___x_1430_ = v___x_1426_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_ref_1423_);
lean_ctor_set(v_reuseFailAlloc_1432_, 1, v___x_1428_);
v___x_1430_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
lean_object* v___x_1431_; 
v___x_1431_ = lean_apply_2(v_throw_1421_, lean_box(0), v___x_1430_);
return v___x_1431_;
}
}
}
else
{
lean_object* v___x_1434_; 
v___x_1434_ = lean_apply_2(v_throw_1421_, lean_box(0), v_x_1422_);
return v___x_1434_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___redArg(lean_object* v_inst_1435_, lean_object* v_x_1436_){
_start:
{
lean_object* v_throw_1437_; lean_object* v_tryCatch_1438_; lean_object* v___f_1439_; lean_object* v___x_1440_; 
v_throw_1437_ = lean_ctor_get(v_inst_1435_, 0);
lean_inc(v_throw_1437_);
v_tryCatch_1438_ = lean_ctor_get(v_inst_1435_, 1);
lean_inc(v_tryCatch_1438_);
lean_dec_ref(v_inst_1435_);
v___f_1439_ = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1439_, 0, v_throw_1437_);
v___x_1440_ = lean_apply_3(v_tryCatch_1438_, lean_box(0), v_x_1436_, v___f_1439_);
return v___x_1440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext(lean_object* v_00_u03b1_1441_, lean_object* v_m_1442_, lean_object* v_inst_1443_, lean_object* v_x_1444_){
_start:
{
lean_object* v___x_1445_; 
v___x_1445_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___redArg(v_inst_1443_, v_x_1444_);
return v___x_1445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__0___redArg(lean_object* v_x_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v___x_1452_; 
v___x_1452_ = lean_apply_5(v_x_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_, lean_box(0));
if (lean_obj_tag(v___x_1452_) == 0)
{
return v___x_1452_;
}
else
{
lean_object* v_a_1453_; uint8_t v___y_1455_; uint8_t v___x_1474_; 
v_a_1453_ = lean_ctor_get(v___x_1452_, 0);
lean_inc(v_a_1453_);
v___x_1474_ = l_Lean_Exception_isInterrupt(v_a_1453_);
if (v___x_1474_ == 0)
{
uint8_t v___x_1475_; 
lean_inc(v_a_1453_);
v___x_1475_ = l_Lean_Exception_isRuntime(v_a_1453_);
v___y_1455_ = v___x_1475_;
goto v___jp_1454_;
}
else
{
v___y_1455_ = v___x_1474_;
goto v___jp_1454_;
}
v___jp_1454_:
{
if (v___y_1455_ == 0)
{
if (lean_obj_tag(v_a_1453_) == 0)
{
lean_object* v___x_1457_; uint8_t v_isShared_1458_; uint8_t v_isSharedCheck_1472_; 
v_isSharedCheck_1472_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1472_ == 0)
{
lean_object* v_unused_1473_; 
v_unused_1473_ = lean_ctor_get(v___x_1452_, 0);
lean_dec(v_unused_1473_);
v___x_1457_ = v___x_1452_;
v_isShared_1458_ = v_isSharedCheck_1472_;
goto v_resetjp_1456_;
}
else
{
lean_dec(v___x_1452_);
v___x_1457_ = lean_box(0);
v_isShared_1458_ = v_isSharedCheck_1472_;
goto v_resetjp_1456_;
}
v_resetjp_1456_:
{
lean_object* v_ref_1459_; lean_object* v_msg_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1471_; 
v_ref_1459_ = lean_ctor_get(v_a_1453_, 0);
v_msg_1460_ = lean_ctor_get(v_a_1453_, 1);
v_isSharedCheck_1471_ = !lean_is_exclusive(v_a_1453_);
if (v_isSharedCheck_1471_ == 0)
{
v___x_1462_ = v_a_1453_;
v_isShared_1463_ = v_isSharedCheck_1471_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_msg_1460_);
lean_inc(v_ref_1459_);
lean_dec(v_a_1453_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1471_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v___x_1464_; lean_object* v___x_1466_; 
v___x_1464_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_msg_1460_);
if (v_isShared_1463_ == 0)
{
lean_ctor_set(v___x_1462_, 1, v___x_1464_);
v___x_1466_ = v___x_1462_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v_ref_1459_);
lean_ctor_set(v_reuseFailAlloc_1470_, 1, v___x_1464_);
v___x_1466_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
lean_object* v___x_1468_; 
if (v_isShared_1458_ == 0)
{
lean_ctor_set(v___x_1457_, 0, v___x_1466_);
v___x_1468_ = v___x_1457_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v___x_1466_);
v___x_1468_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
return v___x_1468_;
}
}
}
}
}
else
{
lean_dec(v_a_1453_);
return v___x_1452_;
}
}
else
{
lean_dec(v_a_1453_);
return v___x_1452_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_x_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_){
_start:
{
lean_object* v_res_1482_; 
v_res_1482_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__0___redArg(v_x_1476_, v___y_1477_, v___y_1478_, v___y_1479_, v___y_1480_);
return v_res_1482_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__0(lean_object* v_00_u03b1_1483_, lean_object* v_x_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_){
_start:
{
lean_object* v___x_1490_; 
v___x_1490_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__0___redArg(v_x_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
return v___x_1490_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03b1_1491_, lean_object* v_x_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_){
_start:
{
lean_object* v_res_1498_; 
v_res_1498_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__0(v_00_u03b1_1491_, v_x_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_);
return v_res_1498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__1___redArg(lean_object* v_x_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_){
_start:
{
lean_object* v___x_1503_; 
v___x_1503_ = lean_apply_3(v_x_1499_, v___y_1500_, v___y_1501_, lean_box(0));
if (lean_obj_tag(v___x_1503_) == 0)
{
return v___x_1503_;
}
else
{
lean_object* v_a_1504_; uint8_t v___y_1506_; uint8_t v___x_1525_; 
v_a_1504_ = lean_ctor_get(v___x_1503_, 0);
lean_inc(v_a_1504_);
v___x_1525_ = l_Lean_Exception_isInterrupt(v_a_1504_);
if (v___x_1525_ == 0)
{
uint8_t v___x_1526_; 
lean_inc(v_a_1504_);
v___x_1526_ = l_Lean_Exception_isRuntime(v_a_1504_);
v___y_1506_ = v___x_1526_;
goto v___jp_1505_;
}
else
{
v___y_1506_ = v___x_1525_;
goto v___jp_1505_;
}
v___jp_1505_:
{
if (v___y_1506_ == 0)
{
if (lean_obj_tag(v_a_1504_) == 0)
{
lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1523_; 
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1503_);
if (v_isSharedCheck_1523_ == 0)
{
lean_object* v_unused_1524_; 
v_unused_1524_ = lean_ctor_get(v___x_1503_, 0);
lean_dec(v_unused_1524_);
v___x_1508_ = v___x_1503_;
v_isShared_1509_ = v_isSharedCheck_1523_;
goto v_resetjp_1507_;
}
else
{
lean_dec(v___x_1503_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1523_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
lean_object* v_ref_1510_; lean_object* v_msg_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1522_; 
v_ref_1510_ = lean_ctor_get(v_a_1504_, 0);
v_msg_1511_ = lean_ctor_get(v_a_1504_, 1);
v_isSharedCheck_1522_ = !lean_is_exclusive(v_a_1504_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1513_ = v_a_1504_;
v_isShared_1514_ = v_isSharedCheck_1522_;
goto v_resetjp_1512_;
}
else
{
lean_inc(v_msg_1511_);
lean_inc(v_ref_1510_);
lean_dec(v_a_1504_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1522_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1515_; lean_object* v___x_1517_; 
v___x_1515_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_noContext(v_msg_1511_);
if (v_isShared_1514_ == 0)
{
lean_ctor_set(v___x_1513_, 1, v___x_1515_);
v___x_1517_ = v___x_1513_;
goto v_reusejp_1516_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v_ref_1510_);
lean_ctor_set(v_reuseFailAlloc_1521_, 1, v___x_1515_);
v___x_1517_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1516_;
}
v_reusejp_1516_:
{
lean_object* v___x_1519_; 
if (v_isShared_1509_ == 0)
{
lean_ctor_set(v___x_1508_, 0, v___x_1517_);
v___x_1519_ = v___x_1508_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v___x_1517_);
v___x_1519_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
return v___x_1519_;
}
}
}
}
}
else
{
lean_dec(v_a_1504_);
return v___x_1503_;
}
}
else
{
lean_dec(v_a_1504_);
return v___x_1503_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__1___redArg___boxed(lean_object* v_x_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__1___redArg(v_x_1527_, v___y_1528_, v___y_1529_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__1(lean_object* v_00_u03b1_1532_, lean_object* v_x_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
lean_object* v___x_1537_; 
v___x_1537_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__1___redArg(v_x_1533_, v___y_1534_, v___y_1535_);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__1___boxed(lean_object* v_00_u03b1_1538_, lean_object* v_x_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_){
_start:
{
lean_object* v_res_1543_; 
v_res_1543_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__1(v_00_u03b1_1538_, v_x_1539_, v___y_1540_, v___y_1541_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__0_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_(lean_object* v_ctx_1544_, lean_object* v_l_1545_){
_start:
{
lean_object* v_opts_1547_; uint8_t v___x_1548_; lean_object* v___x_1549_; 
v_opts_1547_ = lean_ctor_get(v_ctx_1544_, 3);
v___x_1548_ = l_Lean_getPPMVarsLevels(v_opts_1547_);
v___x_1549_ = l_Lean_Level_format(v_l_1545_, v___x_1548_);
return v___x_1549_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__0_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2____boxed(lean_object* v_ctx_1550_, lean_object* v_l_1551_, lean_object* v___y_1552_){
_start:
{
lean_object* v_res_1553_; 
v_res_1553_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__0_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_(v_ctx_1550_, v_l_1551_);
lean_dec_ref(v_ctx_1550_);
return v_res_1553_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__1_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_(lean_object* v_ctx_1555_, lean_object* v_e_1556_){
_start:
{
lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1558_ = lean_box(1);
v___x_1559_ = ((lean_object*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__1___closed__0_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_));
v___x_1560_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppExprWithInfos___boxed), 8, 3);
lean_closure_set(v___x_1560_, 0, v_e_1556_);
lean_closure_set(v___x_1560_, 1, v___x_1558_);
lean_closure_set(v___x_1560_, 2, v___x_1559_);
v___x_1561_ = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__0___boxed), 7, 2);
lean_closure_set(v___x_1561_, 0, lean_box(0));
lean_closure_set(v___x_1561_, 1, v___x_1560_);
v___x_1562_ = l_Lean_PPContext_runMetaM___redArg(v_ctx_1555_, v___x_1561_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__1_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2____boxed(lean_object* v_ctx_1563_, lean_object* v_e_1564_, lean_object* v___y_1565_){
_start:
{
lean_object* v_res_1566_; 
v_res_1566_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__1_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_(v_ctx_1563_, v_e_1564_);
lean_dec_ref(v_ctx_1563_);
return v_res_1566_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__2_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_(lean_object* v_ctx_1567_, lean_object* v_n_1568_){
_start:
{
lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
v___x_1570_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppConstNameWithInfos___boxed), 6, 1);
lean_closure_set(v___x_1570_, 0, v_n_1568_);
v___x_1571_ = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__0___boxed), 7, 2);
lean_closure_set(v___x_1571_, 0, lean_box(0));
lean_closure_set(v___x_1571_, 1, v___x_1570_);
v___x_1572_ = l_Lean_PPContext_runMetaM___redArg(v_ctx_1567_, v___x_1571_);
return v___x_1572_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__2_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2____boxed(lean_object* v_ctx_1573_, lean_object* v_n_1574_, lean_object* v___y_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__2_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_(v_ctx_1573_, v_n_1574_);
lean_dec_ref(v_ctx_1573_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__3_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_(lean_object* v_ctx_1577_, lean_object* v_mvarId_1578_){
_start:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; 
v___x_1580_ = lean_alloc_closure((void*)(l_Lean_Meta_ppGoal___boxed), 6, 1);
lean_closure_set(v___x_1580_, 0, v_mvarId_1578_);
v___x_1581_ = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__0___boxed), 7, 2);
lean_closure_set(v___x_1581_, 0, lean_box(0));
lean_closure_set(v___x_1581_, 1, v___x_1580_);
v___x_1582_ = l_Lean_PPContext_runMetaM___redArg(v_ctx_1577_, v___x_1581_);
return v___x_1582_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__3_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2____boxed(lean_object* v_ctx_1583_, lean_object* v_mvarId_1584_, lean_object* v___y_1585_){
_start:
{
lean_object* v_res_1586_; 
v_res_1586_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__3_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_(v_ctx_1583_, v_mvarId_1584_);
lean_dec_ref(v_ctx_1583_);
return v_res_1586_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__4_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_(lean_object* v_ctx_1587_, lean_object* v_stx_1588_){
_start:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1590_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppTerm___boxed), 4, 1);
lean_closure_set(v___x_1590_, 0, v_stx_1588_);
v___x_1591_ = lean_alloc_closure((void*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_withoutContext___at___00__private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2__spec__1___boxed), 5, 2);
lean_closure_set(v___x_1591_, 0, lean_box(0));
lean_closure_set(v___x_1591_, 1, v___x_1590_);
v___x_1592_ = l_Lean_PPContext_runCoreM___redArg(v_ctx_1587_, v___x_1591_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__4_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2____boxed(lean_object* v_ctx_1593_, lean_object* v_stx_1594_, lean_object* v___y_1595_){
_start:
{
lean_object* v_res_1596_; 
v_res_1596_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___lam__4_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_(v_ctx_1593_, v_stx_1594_);
lean_dec_ref(v_ctx_1593_);
return v_res_1596_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1609_ = l_Lean_ppFnsRef;
v___x_1610_ = ((lean_object*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__5_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_));
v___x_1611_ = lean_st_ref_set(v___x_1609_, v___x_1610_);
v___x_1612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1612_, 0, v___x_1611_);
return v___x_1612_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2____boxed(lean_object* v_a_1613_){
_start:
{
lean_object* v_res_1614_; 
v_res_1614_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_();
return v_res_1614_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_1665_; uint8_t v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
v___x_1665_ = ((lean_object*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__0_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_));
v___x_1666_ = 0;
v___x_1667_ = ((lean_object*)(l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn___closed__19_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_));
v___x_1668_ = l_Lean_registerTraceClass(v___x_1665_, v___x_1666_, v___x_1667_);
return v___x_1668_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2____boxed(lean_object* v_a_1669_){
_start:
{
lean_object* v_res_1670_; 
v_res_1670_ = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_();
return v_res_1670_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__2(void){
_start:
{
lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1674_ = l_Lean_PrettyPrinter_combinatorParenthesizerAttribute;
v___x_1675_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1676_ = ((lean_object*)(l_Lean_PrettyPrinter_registerParserCompilers___closed__1));
v___x_1677_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1677_, 0, v___x_1676_);
lean_ctor_set(v___x_1677_, 1, v___x_1675_);
lean_ctor_set(v___x_1677_, 2, v___x_1674_);
return v___x_1677_;
}
}
static lean_object* _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__5(void){
_start:
{
lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; 
v___x_1681_ = l_Lean_PrettyPrinter_combinatorFormatterAttribute;
v___x_1682_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1683_ = ((lean_object*)(l_Lean_PrettyPrinter_registerParserCompilers___closed__4));
v___x_1684_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1684_, 0, v___x_1683_);
lean_ctor_set(v___x_1684_, 1, v___x_1682_);
lean_ctor_set(v___x_1684_, 2, v___x_1681_);
return v___x_1684_;
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_registerParserCompilers(){
_start:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1686_ = lean_obj_once(&l_Lean_PrettyPrinter_registerParserCompilers___closed__2, &l_Lean_PrettyPrinter_registerParserCompilers___closed__2_once, _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__2);
v___x_1687_ = l_Lean_ParserCompiler_registerParserCompiler___redArg(v___x_1686_);
if (lean_obj_tag(v___x_1687_) == 0)
{
lean_object* v___x_1688_; lean_object* v___x_1689_; 
lean_dec_ref(v___x_1687_);
v___x_1688_ = lean_obj_once(&l_Lean_PrettyPrinter_registerParserCompilers___closed__5, &l_Lean_PrettyPrinter_registerParserCompilers___closed__5_once, _init_l_Lean_PrettyPrinter_registerParserCompilers___closed__5);
v___x_1689_ = l_Lean_ParserCompiler_registerParserCompiler___redArg(v___x_1688_);
return v___x_1689_;
}
else
{
return v___x_1687_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PrettyPrinter_registerParserCompilers___boxed(lean_object* v_a_1690_){
_start:
{
lean_object* v_res_1691_; 
v_res_1691_ = l_Lean_PrettyPrinter_registerParserCompilers();
return v_res_1691_;
}
}
static lean_object* _init_l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1693_; lean_object* v___x_1694_; 
v___x_1693_ = ((lean_object*)(l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__0));
v___x_1694_ = l_Lean_stringToMessageData(v___x_1693_);
return v___x_1694_;
}
}
static lean_object* _init_l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1696_ = ((lean_object*)(l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__2));
v___x_1697_ = l_Lean_stringToMessageData(v___x_1696_);
return v___x_1697_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__0(lean_object* v_fmt_1698_, lean_object* v_ctx_1699_){
_start:
{
lean_object* v___x_1701_; 
v___x_1701_ = l_Lean_PPContext_runMetaM___redArg(v_ctx_1699_, v_fmt_1698_);
if (lean_obj_tag(v___x_1701_) == 0)
{
lean_object* v_a_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1709_; 
v_a_1702_ = lean_ctor_get(v___x_1701_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1701_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1704_ = v___x_1701_;
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_a_1702_);
lean_dec(v___x_1701_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1707_; 
if (v_isShared_1705_ == 0)
{
v___x_1707_ = v___x_1704_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_a_1702_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
}
else
{
lean_object* v_a_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1723_; 
v_a_1710_ = lean_ctor_get(v___x_1701_, 0);
v_isSharedCheck_1723_ = !lean_is_exclusive(v___x_1701_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1712_ = v___x_1701_;
v_isShared_1713_ = v_isSharedCheck_1723_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_a_1710_);
lean_dec(v___x_1701_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1723_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1717_; 
v___x_1714_ = lean_obj_once(&l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__1, &l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__1_once, _init_l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__1);
v___x_1715_ = lean_io_error_to_string(v_a_1710_);
if (v_isShared_1713_ == 0)
{
lean_ctor_set_tag(v___x_1712_, 3);
lean_ctor_set(v___x_1712_, 0, v___x_1715_);
v___x_1717_ = v___x_1712_;
goto v_reusejp_1716_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v___x_1715_);
v___x_1717_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1716_;
}
v_reusejp_1716_:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1718_ = l_Lean_MessageData_ofFormat(v___x_1717_);
v___x_1719_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1719_, 0, v___x_1714_);
lean_ctor_set(v___x_1719_, 1, v___x_1718_);
v___x_1720_ = lean_obj_once(&l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__3, &l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__3_once, _init_l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__3);
v___x_1721_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1721_, 0, v___x_1719_);
lean_ctor_set(v___x_1721_, 1, v___x_1720_);
return v___x_1721_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__0___boxed(lean_object* v_fmt_1724_, lean_object* v_ctx_1725_, lean_object* v___y_1726_){
_start:
{
lean_object* v_res_1727_; 
v_res_1727_ = l_Lean_MessageData_ofFormatWithInfosM___lam__0(v_fmt_1724_, v_ctx_1725_);
lean_dec_ref(v_ctx_1725_);
return v_res_1727_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_ofFormatWithInfosM___lam__1(lean_object* v_x_1728_){
_start:
{
uint8_t v___x_1729_; 
v___x_1729_ = 0;
return v___x_1729_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__1___boxed(lean_object* v_x_1730_){
_start:
{
uint8_t v_res_1731_; lean_object* v_r_1732_; 
v_res_1731_ = l_Lean_MessageData_ofFormatWithInfosM___lam__1(v_x_1730_);
lean_dec_ref(v_x_1730_);
v_r_1732_ = lean_box(v_res_1731_);
return v_r_1732_;
}
}
static lean_object* _init_l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__2(void){
_start:
{
lean_object* v___x_1736_; lean_object* v___x_1737_; 
v___x_1736_ = ((lean_object*)(l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__1));
v___x_1737_ = l_Lean_MessageData_ofFormat(v___x_1736_);
return v___x_1737_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__2(lean_object* v_x_1738_){
_start:
{
lean_object* v___x_1740_; 
v___x_1740_ = lean_obj_once(&l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__2, &l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__2_once, _init_l_Lean_MessageData_ofFormatWithInfosM___lam__2___closed__2);
return v___x_1740_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM___lam__2___boxed(lean_object* v_x_1741_, lean_object* v___y_1742_){
_start:
{
lean_object* v_res_1743_; 
v_res_1743_ = l_Lean_MessageData_ofFormatWithInfosM___lam__2(v_x_1741_);
return v_res_1743_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfosM(lean_object* v_fmt_1746_){
_start:
{
lean_object* v___f_1747_; lean_object* v___f_1748_; lean_object* v___f_1749_; lean_object* v___x_1750_; 
v___f_1747_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofFormatWithInfosM___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1747_, 0, v_fmt_1746_);
v___f_1748_ = ((lean_object*)(l_Lean_MessageData_ofFormatWithInfosM___closed__0));
v___f_1749_ = ((lean_object*)(l_Lean_MessageData_ofFormatWithInfosM___closed__1));
v___x_1750_ = l_Lean_MessageData_lazy(v___f_1747_, v___f_1748_, v___f_1749_);
return v___x_1750_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_MessageData_ofConst_spec__0(lean_object* v___x_1751_, lean_object* v_msg_1752_){
_start:
{
lean_object* v___x_1753_; 
v___x_1753_ = lean_panic_fn(v___x_1751_, v_msg_1752_);
return v___x_1753_;
}
}
static lean_object* _init_l_Lean_MessageData_ofConst___closed__1(void){
_start:
{
lean_object* v___x_1755_; lean_object* v___x_1756_; 
v___x_1755_ = ((lean_object*)(l_Lean_MessageData_ofConst___closed__0));
v___x_1756_ = l_Lean_stringToMessageData(v___x_1755_);
return v___x_1756_;
}
}
static lean_object* _init_l_Lean_MessageData_ofConst___closed__2(void){
_start:
{
lean_object* v___x_1757_; lean_object* v___x_1758_; 
v___x_1757_ = lean_box(1);
v___x_1758_ = l_Lean_MessageData_ofFormat(v___x_1757_);
return v___x_1758_;
}
}
static lean_object* _init_l_Lean_MessageData_ofConst___closed__3(void){
_start:
{
lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1759_ = lean_obj_once(&l_Lean_MessageData_ofConst___closed__2, &l_Lean_MessageData_ofConst___closed__2_once, _init_l_Lean_MessageData_ofConst___closed__2);
v___x_1760_ = lean_obj_once(&l_Lean_MessageData_ofConst___closed__1, &l_Lean_MessageData_ofConst___closed__1_once, _init_l_Lean_MessageData_ofConst___closed__1);
v___x_1761_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1761_, 0, v___x_1760_);
lean_ctor_set(v___x_1761_, 1, v___x_1759_);
return v___x_1761_;
}
}
static lean_object* _init_l_Lean_MessageData_ofConst___closed__7(void){
_start:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1765_ = ((lean_object*)(l_Lean_MessageData_ofConst___closed__6));
v___x_1766_ = lean_unsigned_to_nat(4u);
v___x_1767_ = lean_unsigned_to_nat(153u);
v___x_1768_ = ((lean_object*)(l_Lean_MessageData_ofConst___closed__5));
v___x_1769_ = ((lean_object*)(l_Lean_MessageData_ofConst___closed__4));
v___x_1770_ = l_mkPanicMessageWithDecl(v___x_1769_, v___x_1768_, v___x_1767_, v___x_1766_, v___x_1765_);
return v___x_1770_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConst(lean_object* v_e_1771_){
_start:
{
uint8_t v___x_1772_; 
v___x_1772_ = l_Lean_Expr_isConst(v_e_1771_);
if (v___x_1772_ == 0)
{
lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1773_ = lean_obj_once(&l_Lean_MessageData_ofConst___closed__3, &l_Lean_MessageData_ofConst___closed__3_once, _init_l_Lean_MessageData_ofConst___closed__3);
v___x_1774_ = l_Lean_MessageData_ofExpr(v_e_1771_);
v___x_1775_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1775_, 0, v___x_1773_);
lean_ctor_set(v___x_1775_, 1, v___x_1774_);
v___x_1776_ = lean_obj_once(&l_Lean_MessageData_ofConst___closed__7, &l_Lean_MessageData_ofConst___closed__7_once, _init_l_Lean_MessageData_ofConst___closed__7);
v___x_1777_ = lean_panic_fn(v___x_1775_, v___x_1776_);
return v___x_1777_;
}
else
{
lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v_delab_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; 
v___x_1778_ = ((lean_object*)(l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__1));
v___x_1779_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_1779_, 0, v___x_1772_);
v___x_1780_ = ((lean_object*)(l_Lean_PrettyPrinter_ppConstNameWithInfos___closed__3));
v_delab_1781_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Delaborator_withOptionAtCurrPos___boxed), 11, 4);
lean_closure_set(v_delab_1781_, 0, lean_box(0));
lean_closure_set(v_delab_1781_, 1, v___x_1778_);
lean_closure_set(v_delab_1781_, 2, v___x_1779_);
lean_closure_set(v_delab_1781_, 3, v___x_1780_);
v___x_1782_ = lean_box(1);
v___x_1783_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppExprWithInfos___boxed), 8, 3);
lean_closure_set(v___x_1783_, 0, v_e_1771_);
lean_closure_set(v___x_1783_, 1, v___x_1782_);
lean_closure_set(v___x_1783_, 2, v_delab_1781_);
v___x_1784_ = l_Lean_MessageData_ofFormatWithInfosM(v___x_1783_);
return v___x_1784_;
}
}
}
static lean_object* _init_l_Lean_MessageData_signature___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; 
v___x_1786_ = ((lean_object*)(l_Lean_MessageData_signature___lam__0___closed__0));
v___x_1787_ = l_Lean_stringToMessageData(v___x_1786_);
return v___x_1787_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_signature___lam__0(lean_object* v_c_1788_, lean_object* v_ctx_1789_){
_start:
{
lean_object* v___x_1791_; lean_object* v___x_1792_; 
lean_inc(v_c_1788_);
v___x_1791_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_ppSignature___boxed), 6, 1);
lean_closure_set(v___x_1791_, 0, v_c_1788_);
v___x_1792_ = l_Lean_PPContext_runMetaM___redArg(v_ctx_1789_, v___x_1791_);
if (lean_obj_tag(v___x_1792_) == 0)
{
lean_object* v_a_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1800_; 
lean_dec(v_c_1788_);
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1792_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1795_ = v___x_1792_;
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_a_1793_);
lean_dec(v___x_1792_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1798_; 
if (v_isShared_1796_ == 0)
{
v___x_1798_ = v___x_1795_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_a_1793_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
else
{
lean_object* v_a_1801_; lean_object* v___x_1803_; uint8_t v_isShared_1804_; uint8_t v_isSharedCheck_1818_; 
v_a_1801_ = lean_ctor_get(v___x_1792_, 0);
v_isSharedCheck_1818_ = !lean_is_exclusive(v___x_1792_);
if (v_isSharedCheck_1818_ == 0)
{
v___x_1803_ = v___x_1792_;
v_isShared_1804_ = v_isSharedCheck_1818_;
goto v_resetjp_1802_;
}
else
{
lean_inc(v_a_1801_);
lean_dec(v___x_1792_);
v___x_1803_ = lean_box(0);
v_isShared_1804_ = v_isSharedCheck_1818_;
goto v_resetjp_1802_;
}
v_resetjp_1802_:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1808_; 
v___x_1805_ = lean_obj_once(&l_Lean_MessageData_signature___lam__0___closed__1, &l_Lean_MessageData_signature___lam__0___closed__1_once, _init_l_Lean_MessageData_signature___lam__0___closed__1);
v___x_1806_ = lean_io_error_to_string(v_a_1801_);
if (v_isShared_1804_ == 0)
{
lean_ctor_set_tag(v___x_1803_, 3);
lean_ctor_set(v___x_1803_, 0, v___x_1806_);
v___x_1808_ = v___x_1803_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v___x_1806_);
v___x_1808_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1809_ = l_Lean_MessageData_ofFormat(v___x_1808_);
v___x_1810_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1805_);
lean_ctor_set(v___x_1810_, 1, v___x_1809_);
v___x_1811_ = lean_obj_once(&l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__3, &l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__3_once, _init_l_Lean_MessageData_ofFormatWithInfosM___lam__0___closed__3);
v___x_1812_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1812_, 0, v___x_1810_);
lean_ctor_set(v___x_1812_, 1, v___x_1811_);
v___x_1813_ = lean_obj_once(&l_Lean_MessageData_ofConst___closed__2, &l_Lean_MessageData_ofConst___closed__2_once, _init_l_Lean_MessageData_ofConst___closed__2);
v___x_1814_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1812_);
lean_ctor_set(v___x_1814_, 1, v___x_1813_);
v___x_1815_ = l_Lean_MessageData_ofName(v_c_1788_);
v___x_1816_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1816_, 0, v___x_1814_);
lean_ctor_set(v___x_1816_, 1, v___x_1815_);
return v___x_1816_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_signature___lam__0___boxed(lean_object* v_c_1819_, lean_object* v_ctx_1820_, lean_object* v___y_1821_){
_start:
{
lean_object* v_res_1822_; 
v_res_1822_ = l_Lean_MessageData_signature___lam__0(v_c_1819_, v_ctx_1820_);
lean_dec_ref(v_ctx_1820_);
return v_res_1822_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_signature(lean_object* v_c_1823_){
_start:
{
lean_object* v___f_1824_; lean_object* v___f_1825_; lean_object* v___f_1826_; lean_object* v___x_1827_; 
v___f_1824_ = lean_alloc_closure((void*)(l_Lean_MessageData_signature___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1824_, 0, v_c_1823_);
v___f_1825_ = ((lean_object*)(l_Lean_MessageData_ofFormatWithInfosM___closed__0));
v___f_1826_ = ((lean_object*)(l_Lean_MessageData_ofFormatWithInfosM___closed__1));
v___x_1827_ = l_Lean_MessageData_lazy(v___f_1824_, v___f_1825_, v___f_1826_);
return v___x_1827_;
}
}
lean_object* runtime_initialize_Lean_PrettyPrinter_Delaborator_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter_Delaborator(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser_Module(uint8_t builtin);
lean_object* runtime_initialize_Lean_ParserCompiler(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_NumObjs(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ShareCommon(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_PrettyPrinter(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_PrettyPrinter_Delaborator_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter_Delaborator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ParserCompiler(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_NumObjs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_1740541145____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_PrettyPrinter_pp_exprSizes = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_PrettyPrinter_pp_exprSizes);
lean_dec_ref(res);
res = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_3041333433____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_PrettyPrinter_0__Lean_PrettyPrinter_initFn_00___x40_Lean_PrettyPrinter_675687902____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l_Lean_PrettyPrinter_registerParserCompilers();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_PrettyPrinter(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_PrettyPrinter_Delaborator_Basic(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter_Delaborator(uint8_t builtin);
lean_object* initialize_Lean_Parser_Module(uint8_t builtin);
lean_object* initialize_Lean_ParserCompiler(uint8_t builtin);
lean_object* initialize_Lean_Util_NumObjs(uint8_t builtin);
lean_object* initialize_Lean_Util_ShareCommon(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_PrettyPrinter(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_PrettyPrinter_Delaborator_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Delaborator(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Module(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ParserCompiler(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_NumObjs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_PrettyPrinter(builtin);
}
#ifdef __cplusplus
}
#endif
